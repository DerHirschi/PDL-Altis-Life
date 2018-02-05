#include "\pdl_server\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	WHAT THE HELL DO YOU THINK IT DOES?!?!!??!?!!?!??!
	
	Make some Noise ?????? again ?? 
*/
private["_queryResult","_house","_pos","_class"];

	
_queryResult = ["LadenInit",2,true] call DB_fnc_asyncCall;

//diag_log format ["<<<LADEN INIT<<<<< _queryResult%1",_queryResult];

if((count _queryResult) isEqualTo 0) exitWith {};
/*
for "_i" from 0 to 100 do {
	
	if(SKY_HC_aktiv_1) exitWith {};
	uiSleep 1;
};

if(SKY_HC_aktiv_1) exitWith {[] remoteExec ["SKY_fnc_initLaden",HC_id];};
*/
{
	_pos = call compile format["%1",(_x select 2)];
	_class = (_x select 4);
	//diag_log format ["<<<<laden<<<< pos %1",_pos];
	//_house = nearestObject [_pos, "House_F"];
	
	//_house = nearestBuilding _pos;
	if(_class isEqualTo "") then {
		_house = nearestBuilding _pos;
	}else{	
		_house = nearestObject [_pos, _class];
	};	
	_house setVariable["house_owner",[(_x select 1),(_x select 3)],true];
	_house setVariable["laden_id",(_x select 0),true];
	_house setVariable["locked",true,true]; //Lock up all the stuff.
	


} foreach _queryResult;

