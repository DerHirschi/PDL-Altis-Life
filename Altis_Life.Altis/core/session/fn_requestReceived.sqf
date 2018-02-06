#include "..\..\script_macros.hpp"
/*
    File: fn_requestReceived.sqf
    Author: Bryan "Tonic" Boardwine
	Edit: MasTo - Die Liga

    Description:
    Called by the server saying that we have a response so let's
    sort through the information, validate it and if all valid
    set the client up.
*/
private _count = count _this;
life_session_tries = life_session_tries + 1;
if (life_session_completed) exitWith {}; //Why did this get executed when the client already initialized? Fucking arma...
if (life_session_tries > 3) exitWith {cutText[localize "STR_Session_Error","BLACK FADED"]; 0 cutFadeOut 999999999;};

0 cutText [localize "STR_Session_Received","BLACK FADED"];
0 cutFadeOut 9999999;

//Error handling and junk..
if (isNil "_this") exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if (_this isEqualType "") exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if (count _this isEqualTo 0) exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if ((_this select 0) isEqualTo "Error") exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if (!(getPlayerUID player isEqualTo (_this select 0))) exitWith {[] call SOCK_fnc_dataQuery;};

//Lets make sure some vars are not set before hand.. If they are get rid of them, hopefully the engine purges past variables but meh who cares.
if (!isServer && (!isNil "life_adminlevel" || !isNil "life_coplevel" || !isNil "life_donorlevel")) exitWith {
    [profileName,getPlayerUID player,"VariablesAlreadySet"] remoteExecCall ["SPY_fnc_cookieJar",RSERV];
    [profileName,format ["Variables set before client initialization...\nlife_adminlevel: %1\nlife_coplevel: %2\nlife_donorlevel: %3",life_adminlevel,life_coplevel,life_donorlevel]] remoteExecCall ["SPY_fnc_notifyAdmins",RCLIENT];
    sleep 0.9;
    failMission "SpyGlass";
};
/*  DEBUG
diag_log str _this;
for "_i" from 0 to (_count - 1) do {
	diag_log format ["%1 : %2",_i, _this select _i];
};
*/
//Parse basic player information.
CASH = parseNumber (_this select 2);
BANK = parseNumber (_this select 3);
CONST(life_adminlevel,(_this select 4));
if (LIFE_SETTINGS(getNumber,"donor_level") isEqualTo 1) then {
    CONST(life_donorlevel,(_this select 5));
} else {
    CONST(life_donorlevel,0);
};

//Loop through licenses
_temp = [6,14,16,18,20];
for "_i" from 0 to ((count _temp) - 1) do {
	if (count (_this select (_temp select _i)) > 0) then {
		{missionNamespace setVariable [(_x select 0),(_x select 1)];} forEach (_this select (_temp select _i));
	};
};

//Parse side specific information.
switch ((side player)) do {
    case west: {
        CONST(life_coplevel,(_this select 7));
        CONST(life_medicLevel,0);
        life_blacklisted = _this select 9;
        if (LIFE_SETTINGS(getNumber,"save_playerStats") isEqualTo 1) then {
            life_hunger = ((_this select 10) select 0);
            life_thirst = ((_this select 10) select 1);
            player setDamage ((_this select 10) select 2);
        };
    };

    case civilian: {
        life_is_arrested 	= _this select 7;
        life_coplevel 		= _this select 13;
        life_medicLevel 	= _this select 15;
        life_alaclevel 		= _this select 17;
        life_flusilevel 	= _this select 19;
        
        life_houses = _this select (_count - 4);
        if (LIFE_SETTINGS(getNumber,"save_playerStats") isEqualTo 1) then {
            life_hunger = ((_this select 9) select 0);
            life_thirst = ((_this select 9) select 1);
            player setDamage ((_this select 9) select 2);
        };

        //Position
        if (LIFE_SETTINGS(getNumber,"save_civilian_position") isEqualTo 1) then {
            life_is_alive = _this select 10;
            life_civ_position = _this select 11;
            if (life_is_alive) then {
                if !(count life_civ_position isEqualTo 3) then {diag_log format ["[requestReceived] Bad position received. Data: %1",life_civ_position];life_is_alive =false;};
                if (life_civ_position distance (getMarkerPos "respawn_civilian") < 300) then {life_is_alive = false;};
            };
        };

        {
            _house = nearestObject [(call compile format ["%1",(_x select 0)]), "House"];
            life_vehicles pushBack _house;
        } forEach life_houses;

        life_gangData = _this select (_count - 3);
        if !(count life_gangData isEqualTo 0) then {
            [] spawn life_fnc_initGang;
        };
        [] spawn life_fnc_initHouses;
		
		liga_ladenhouses = _this select (_count - 2);
		[]spawn LIGACL_fnc_initLaden;
    };

    case independent: {
        CONST(life_medicLevel,(_this select 7));
        CONST(life_coplevel,0);
        if (LIFE_SETTINGS(getNumber,"save_playerStats") isEqualTo 1) then {
            life_hunger = ((_this select 9) select 0);
            life_thirst = ((_this select 9) select 1);
            player setDamage ((_this select 9) select 2);
        };
    };
};

life_gear = _this select 8;
[true] call life_fnc_loadGear;

if (count (_this select (_count - 1)) > 0) then {
    {life_vehicles pushBack _x;} forEach (_this select (_count - 1));
};

life_session_completed = true;
