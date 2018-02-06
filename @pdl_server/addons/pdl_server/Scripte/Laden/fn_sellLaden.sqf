private["_house","_houseID","_ownerID","_housePos","_query","_radius","_containers"];
_house = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _house) exitWith {};

_houseID = _house getVariable["laden_id",-1];
if(_houseID isEqualTo -1) then {
	_housePos = getPosATL _house;
	_ownerID = (_house getVariable "house_owner") select 0;
	// _query = format["LadenSellHouse:%1:%2:%3",[],_ownerID,_housePos];
	_query = format["UPDATE laden SET owned='0', pos='[]', inventory='[''LigaLaden'',0,0]', preistabelle='[]', kassen='[]', upgrade='[]' WHERE pid='%1' AND pos='%2' AND owned='1';",_ownerID,_housePos];
} else {
	//_query = format["LadenSellHouse2:%1",_houseID];
	_query = format["UPDATE laden SET owned='0', pos='[]', inventory='[''LigaLaden'',0,0]', preistabelle='[]', kassen='[]', upgrade='[]' WHERE id='%1';",_houseID];
};

_house setVariable["laden_id",nil,true];
_house setVariable["house_owner",nil,true];

if(!isNil {(_house getVariable "kassen")}) then {	
	{
		if(!isNull (_x select 0)) then {				
			deleteVehicle (_x select 0);
		};
		{
			if(!isNull _x) then {
				deleteVehicle _x;
			};
		}foreach (_x select 1);
	} foreach (_house getVariable "kassen");
	_house setVariable["kassen",nil,true];
}else{
	_radius = (((boundingBoxReal _house select 0) select 2) - ((boundingBoxReal _house select 1) select 2));
	_containers = nearestObjects[(getPosATL _house),["Land_CashDesk_F","Land_ShelvesMetal_F"],_radius];
	{deleteVehicle _x} foreach _containers; //Fuck the way you do things Tonic, go fix it
};
Liga_Laden = Liga_Laden - [ObjNull];

[_query,1] call DB_fnc_asyncCall;
_house setVariable["house_sold",nil,true];
