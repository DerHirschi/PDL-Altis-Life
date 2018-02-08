#include "..\..\script_macros.hpp"
/*
    File: fn_updatePartial.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Sends specific information to the server to update on the player,
    meant to keep the network traffic down with large sums of data flowing
    through remoteExec
*/
private ["_mode","_packet","_array","_flag"];
_mode = param [0,0,[0]];
_packet = [getPlayerUID player,(side player),nil,_mode];
_array = [];
_flag = switch (side player) do {case west: {"cop"}; case civilian: {"civ"}; case independent: {"med"}; case east: {"alac"};};

switch (_mode) do {
    case 0: {
        _packet set[2,CASH];
    };

    case 1: {
        _packet set[2,BANK];
    };

    case 2: {
        {
            _varName = LICENSE_VARNAME(configName _x,_flag);
            _array pushBack [_varName,LICENSE_VALUE(configName _x,_flag)];
        } forEach (format ["getText(_x >> 'side') isEqualTo '%1'",_flag] configClasses (missionConfigFile >> "Licenses"));

        _packet set[2,_array];
    };

    case 3: {
        [] call life_fnc_saveGear;
        _packet set[2,life_gear];
    };

    case 4: {
        _packet set[2,life_is_alive];
        _packet set[4,getPosATL player];
    };

    case 5: {
        _packet set[2,life_is_arrested];
    };

    case 6: {
        _packet set[2,CASH];
        _packet set[4,BANK];
    };

    case 7: {
        // Tonic is using for keychain..?
    };
	
	case 8: {
        // Job Level Update
		_packet set[2,[life_coplevel,life_medicLevel,life_alaclevel,life_flusilevel]];
    };
	case 9: {
        [] call life_fnc_saveGear;
		switch(side player)do {
			case west: 			{_packet set[2,[spint_cop ,life_gear] ];};
			case east: 			{_packet set[2,[spint_alac,life_gear] ];};
			case independent: 	{_packet set[2,[spint_med ,life_gear] ];};
		};        
    };
};

if (life_HC_isActive) then {
    _packet remoteExecCall ["HC_fnc_updatePartial",HC_Life];
} else {
    _packet remoteExecCall ["DB_fnc_updatePartial",RSERV];
};
