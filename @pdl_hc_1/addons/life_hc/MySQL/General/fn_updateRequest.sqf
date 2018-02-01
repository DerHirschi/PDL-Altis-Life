/*
    File: fn_updateRequest.sqf
    Author: Bryan "Tonic" Boardwine
	Edited: MasTo - DieLiga

    This file is for Nanou's HeadlessClient.

    Description:
    Updates ALL player information in the database.
    Information gets passed here from the client side file: core\session\fn_updateRequest.sqf
*/
private ["_uid","_side","_cash","_bank","_licenses","_gear","_stats","_name","_alive","_position","_query"];
_uid = [_this,0,"",[""]] call BIS_fnc_param;
_name = [_this,1,"",[""]] call BIS_fnc_param;
_side = [_this,2,sideUnknown,[civilian]] call BIS_fnc_param;
_cash = [_this,3,0,[0]] call BIS_fnc_param;
_bank = [_this,4,5000,[0]] call BIS_fnc_param;
_licenses = [_this,5,[],[[]]] call BIS_fnc_param;
_gear = [_this,6,[],[[]]] call BIS_fnc_param;
_stats = [_this,7,[100,100],[[]]] call BIS_fnc_param;
_alive = [_this,9,false,[true]] call BIS_fnc_param;
_position = [_this,10,[],[[]]] call BIS_fnc_param;
_level = [_this,11,[0,0,0,0],[[]]] call BIS_fnc_param;

//Get to those error checks.
if ((_uid isEqualTo "") || (_name isEqualTo "")) exitWith {};

//Parse and setup some data.
_name = [_name] call HC_fnc_mresString;
_gear = [_gear] call HC_fnc_mresArray;
_stats = [_stats] call HC_fnc_mresArray;
_cash = [_cash] call HC_fnc_numberSafe;
_bank = [_bank] call HC_fnc_numberSafe;
_position = if (_side isEqualTo civilian) then {[_position] call HC_fnc_mresArray} else {[]};

//Does something license related but I can't remember I only know it's important?
for "_i" from 0 to count(_licenses)-1 do {
    _bool = [(_licenses select _i) select 1] call HC_fnc_bool;
    _licenses set[_i,[(_licenses select _i) select 0,_bool]];
};

_licenses = [_licenses] call HC_fnc_mresArray;

//PLAYTIME
_playtime = [_uid] call HC_fnc_getPlayTime;
_playtime_update = [];
{
    if ((_x select 0) isEqualTo _uid) exitWith
    {
        _playtime_update pushBack [_x select 1];
    };
} forEach TON_fnc_playtime_values_request;
_playtime_update = (_playtime_update select 0) select 0;
switch (_side) do {
    case west: {_playtime_update set[0,_playtime];};
    case civilian: {_playtime_update set[2,_playtime];};
    case independent: {_playtime_update set[1,_playtime];};
    case east: {_playtime_update set[3,_playtime];};
};
_playtime_update = [_playtime_update] call DB_fnc_mresArray;

switch (_side) do {
    case west: {_query = format ["UPDATE players SET name='%1', cash='%2', bankacc='%3', civ_gear='%4', cop_licenses='%5', civ_stats='%6', playtime='%7', civ_alive='%8', civ_position='%9', coplevel='%10', mediclevel='%11', alaclevel='%12', flusilevel='%13' WHERE pid='%14'",_name,_cash,_bank,_gear,_licenses,_stats,_playtime_update,[_alive] call DB_fnc_bool,_position,(_level select 0) ,(_level select 1) ,(_level select 2) ,(_level select 3) , _uid];};
    case civilian: {_query = format ["UPDATE players SET name='%1', cash='%2', bankacc='%3', civ_licenses='%4', civ_gear='%5', arrested='%6', civ_stats='%7', civ_alive='%8', civ_position='%9', playtime='%10', coplevel='%11', mediclevel='%12', alaclevel='%13', flusilevel='%14' WHERE pid='%15'",_name,_cash,_bank,_licenses,_gear,[_this select 8] call DB_fnc_bool,_stats,[_alive] call DB_fnc_bool,_position,_playtime_update,(_level select 0) ,(_level select 1) ,(_level select 2) ,(_level select 3),_uid];};
    case independent: {_query = format ["UPDATE players SET name='%1', cash='%2', bankacc='%3', med_licenses='%4', civ_gear='%5', civ_stats='%6', playtime='%7', civ_alive='%8', civ_position='%9', coplevel='%10', mediclevel='%11', alaclevel='%12', flusilevel='%13' WHERE pid='%14'",_name,_cash,_bank,_licenses,_gear,_stats,_playtime_update,[_alive] call DB_fnc_bool,_position,(_level select 0) ,(_level select 1) ,(_level select 2) ,(_level select 3) ,_uid];};
    case east: {_query = format ["UPDATE players SET name='%1', cash='%2', bankacc='%3', alac_licenses='%4', civ_gear='%5', civ_stats='%6', playtime='%7', civ_alive='%8', civ_position='%9', coplevel='%10', mediclevel='%11', alaclevel='%12', flusilevel='%13' WHERE pid='%14'",_name,_cash,_bank,_licenses,_gear,_stats,_playtime_update,[_alive] call DB_fnc_bool,_position,(_level select 0) ,(_level select 1),(_level select 2),(_level select 3) ,_uid];};
};

_queryResult = [_query,1] call HC_fnc_asyncCall;
