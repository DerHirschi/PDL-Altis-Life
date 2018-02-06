#include "\pdl_server\script_macros.hpp"
/*
	BLAH BLAH
	I LOVE NOTEPAD++ GET OVER IT
	BLAH!
*/
private["_house","_houseID","_containers","_query","_trunk"];
_house 		= [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _house) 		exitWith {};
_houseID 	= _house getVariable["laden_id",-1];
if(_houseID isEqualTo -1) 	exitWith {};

_containers = _house getVariable ["kassen",[]];

_alltrunk 	= [];
{
	_trunk 		= [];
	{
		_trunk pushBack (_x getVariable ["Trunk",[[],0]]);
	}forEach (_x select 1);
	_alltrunk pushBack _trunk;
}forEach _containers;

//_query = format["LadenUpdateTrunk:%1:%2",_alltrunk,_houseID];
_query = format["UPDATE laden SET upgrade='%1' WHERE id='%2';",_alltrunk,_houseID];

[_query,1] call DB_fnc_asyncCall;