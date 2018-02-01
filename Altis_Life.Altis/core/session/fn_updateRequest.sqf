#include "..\..\script_macros.hpp"
/*
    File: fn_updateRequest.sqf
    Author: Tonic
	Edited: MasTo - Die Liga

    Description:
    Passes ALL player information to the server to save player data to the database.
*/
private ["_packet","_array","_flag","_alive","_position"];
_packet = [getPlayerUID player,(profileName),(side player),CASH,BANK];
_array = [];
_alive = alive player;
_position = getPosATL player;
_flag = switch ((side player)) do {case west: {"cop"}; case civilian: {"civ"}; case independent: {"med"}; case east: {"alac"};};

{
    _varName = LICENSE_VARNAME(configName _x,_flag);
    _array pushBack [_varName,LICENSE_VALUE(configName _x,_flag)];
} forEach (format ["getText(_x >> 'side') isEqualTo '%1'",_flag] configClasses (missionConfigFile >> "Licenses"));

_packet pushBack _array;

[] call life_fnc_saveGear;
_packet pushBack life_gear;

_array = [];
_array pushBack life_hunger;
_array pushBack life_thirst;
_array pushBack (damage player);
_packet pushBack _array;

if ((side player) isEqualTo civilian) then {_packet pushBack life_is_arrested;};

_packet pushBack _alive;
_packet pushBack _position;
_packet pushBack [life_coplevel,life_medicLevel,life_alaclevel,life_flusilevel];

if (life_HC_isActive) then {
    _packet remoteExecCall ["HC_fnc_updateRequest",HC_Life];
} else {
    _packet remoteExecCall ["DB_fnc_updateRequest",RSERV];
};
