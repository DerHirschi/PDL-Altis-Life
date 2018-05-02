#include "..\..\..\script_macros.hpp"
/* 
	Author: Bryan "Tonic" Boardwine
	Edited by H1rschi - D1e L1ga
	
	Description:
	Initializes the players houses, mainly throwing down markers.
*/
private["_house","_class","_position"];
if((count liga_ladenhouses) isEqualTo 0)  exitWith {}; //Nothing to do.

{
	_position = call compile format["%1",(_x select 0)];
	_class = _x select 2;
	if(_class isEqualTo "") then {
		_house = nearestBuilding _position;
	}else{	
		_house = nearestObject [_position,_class];
	};		

	if!(_house in life_vehicles) then {
		life_vehicles pushBack _house;
	};
	_id = _house getVariable "luid";
	if!(isNil "_id")then{
		deleteMarker format["laden_%1",_id];
	};
	_house setVariable["luid",((round(random 99999))),true];
	_houseName = (_house getVariable ["ladextra",["Liga Laden",0,0]]) ;
	if(isNil "_id")then{
		if((_houseName select 1) isEqualTo 1) then {BANK = BANK - 10000;} ;
		if((_houseName select 2) isEqualTo 1) then {BANK = BANK - 10000;} ;
		
	};
	if((_houseName select 1) isEqualTo 0) then {
		_houseName = _houseName select 0;
		_marker = createMarkerLocal [format["laden_%1",(_house getVariable "luid")],_position];
		_marker setMarkerTextLocal _houseName;
		_marker setMarkerColorLocal "ColorPink";
		_marker setMarkerTypeLocal "loc_Lighthouse";
	}else{
		_houseName = _houseName select 0;
		_marker = createMarker [format["laden_%1",(_house getVariable "luid")],_position];
		_marker setMarkerText _houseName;
		_marker setMarkerColor "ColorPink";
		_marker setMarkerType "loc_Lighthouse";
	};	
} foreach liga_ladenhouses;