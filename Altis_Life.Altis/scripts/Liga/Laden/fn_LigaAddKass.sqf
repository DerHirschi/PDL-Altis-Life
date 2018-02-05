#include "..\..\..\script_macros.hpp"

/*
	Author: Bryan "Tonic" Boardwine
	Edit: Hirschi - Die Liga
	Description:
	Tries to place a storage box in the nearest house.
*/
private["_boxType","_kasse","_positions","_containers","_pos","_dir","_houseCfg"];
_boxType = _this select 0;

life_shop_type = nearestObject [(getPosATL player), "House_F"];
if(!(life_shop_type in life_vehicles)) exitWith {hint localize "STR_ISTR_Box_NotinHouse"};
_containers = life_shop_type getVariable["kassen",[]];

switch (_boxType) do {
	
	case "schrank": {		
		_kasse = nearestObject [(getPosATL player), "Land_CashDesk_F"];
		_kassindex = -1;
		{
			if(_kasse in _x) exitWith {_kassindex = _forEachIndex;};
		} forEach _containers;

		if(_kassindex isEqualTo -1)exitWith {hint "Du musst erst eine Kasse aufbauen...";};		
		_allzucont = (((_containers select _kassindex) select 1));		
		if(!isClass (missionConfigFile >> "LigaLadenClass" >> (typeOf life_shop_type))) exitWith {};

		_count = count ((M_CONFIG(getArray,"LigaLadenClass",(typeOf life_shop_type),"ZusatzPos")) select _kassindex);
		_count2 = count _allzucont;
		if(_count2 >= _count)  exitWith {hint localize "STR_ISTR_Box_HouseFull"};		
		_zupos 		= [life_shop_type,1] call LIGACL_fnc_getLadenPositions;				
		_pos = [0,0,0];
		{
			_slots = _kasse getVariable ["zuslots",[]];
			if(!(_forEachIndex in _slots)) exitWith {
				_slots pushBack _forEachIndex;
				_kasse setVariable["zuslots",_slots,true];
				_pos = _x select 0;
				_dir = _x select 1;	
			};
		} foreach (_zupos select _kassindex);
		if(_pos isEqualTo [0,0,0]) exitWith {};
		if(!([false,_boxType,1] call life_fnc_handleInv)) exitWith {};			
		_zucontainer = createVehicle["Land_ShelvesMetal_F",_pos,[],0,"NONE"];
		waitUntil{!isNil "_zucontainer"};
		_zucontainer allowDamage false;;	
		_zucontainer enableSimulation false;		
		uiSleep 0.5;
		_zucontainer setPosATL (life_shop_type modelToWorld _pos);
		_zucontainer setDir (getDir life_shop_type + _dir);
		_allzucont pushBack 		_zucontainer;
		life_vehicles pushBack 		_zucontainer;
					
		_containers set [_kassindex,[ ((_containers select _kassindex) select 0)  ,_allzucont]];	
		life_shop_type setVariable["kassen",_containers,true];		
		
		_zucontainer setVariable["Trunk",[[],0],true];		
		
		//_containers pushBack 		_zucontainer;
		clearWeaponCargoGlobal 		_zucontainer;
		clearItemCargoGlobal 		_zucontainer;
		clearMagazineCargoGlobal 	_zucontainer;
		clearBackpackCargoGlobal 	_zucontainer;
		uiSleep 1;
		[life_shop_type] remoteExec ["TON_fnc_updateZusa",RSERV];	

	};
	
	case "kasse": {
		
		_houseCfg = [(typeOf life_shop_type)] call LIGACL_fnc_LigaLadenCfg;
		if((count _houseCfg) isEqualTo 0) exitWith {}; //What the fuck happened?
		if(count _containers  >= (_houseCfg select 1)) exitWith {hint localize "STR_ISTR_Box_HouseFull"};

		_slots 		= life_shop_type getVariable ["slots",[]];
		_positions 	= [life_shop_type,0] call LIGACL_fnc_getLadenPositions;
		_pos = [0,0,0];
		{
			_slots = life_shop_type getVariable ["slots",[]];
			if(!(_forEachIndex in _slots)) exitWith {
				_slots pushBack _forEachIndex;
				life_shop_type setVariable["slots",_slots,true];
				_pos = _x select 0;
				_dir = _x select 1;		
			};
		} foreach _positions;
		
		if(_pos isEqualTo [0,0,0]) exitWith {hint localize "STR_ISTR_Box_HouseFull_2"};
		if(!([false,_boxType,1] call life_fnc_handleInv)) exitWith {};		
		_container = "Land_CashDesk_F" createVehicle [0,0,0];
		_container allowDamage false;
		_container enableSimulation false;
		_container setPosATL (life_shop_type modelToWorld _pos);
		_container setDir (getDir life_shop_type + _dir);
		_containers pushBack [_container,[]];
		
		life_shop_type setVariable["kassen",_containers,true];
		_container setVariable ["kassinh",0,true];
		_container setVariable ["kasspreis",[["",-1],["",-1],["",-1]],true];
		uiSleep 1;
		[[_container]] remoteExec ["LIGACL_fnc_addLadenAction",RCLIENT];	
		[life_shop_type] remoteExec ["TON_fnc_updateKass",RSERV];	
		[life_shop_type] remoteExec ["TON_fnc_updateZusa",RSERV];
		[_container] remoteExec ["TON_fnc_KassAction",RSERV];

		clearWeaponCargoGlobal _container;
		clearMagazineCargoGlobal _container;
		clearItemCargoGlobal _container;
		clearBackpackCargoGlobal _container;
	};
};