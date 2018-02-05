/*
	Author: Bryan "Tonic" Boardwine
	Edit: Hirschi
	Description:
	Cleans up containers inside the house.
*/
private["_query","_houses"];
_query 	= format["LadenCleanup:%1",_this];
_houses = [_query,2,true] call DB_fnc_asyncCall;

if((count _houses) isEqualTo 0) exitWith {};
{
	_pos 	= call compile format["%1",(_x select 0)];
	//_house = nearestObject [_pos, "House_F"];
	_house 	= nearestBuilding _pos;
	_id 	= _house getVariable "luid";
	if!(isNil "_id")then{
		deleteMarker format["laden_%1",_id];
		//deleteMarkerLocal	(str(_house getVariable "luid"));	
	};
	if(!isNil {(_house getVariable "kassen")}) then {
		
		{
			if(!isNull (_x select 0)) then {				
				//diag_log str _x;
				deleteVehicle (_x select 0);

			};
			{
				if(!isNull _x) then {
					deleteVehicle _x;

				};
			}foreach (_x select 1);
		} foreach (_house getVariable "kassen");
		_house setVariable["kassen",nil,true];
	};
} foreach _houses;
Liga_Laden = Liga_Laden - [ObjNull];