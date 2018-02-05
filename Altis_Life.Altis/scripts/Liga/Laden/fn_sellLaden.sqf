#include "..\..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Sells the house?
	Nöö .. Shop´s :p
*/
private["_uid","_action","_houseCfg","_index"];
_uid = steamid;
if(isNull life_pInact_curTarget) exitWith {};
if(!(life_pInact_curTarget isKindOf "House_F")) exitWith {};
if(isNil {life_pInact_curTarget getVariable "house_owner"}) exitWith {hint "Das Haus gehoert dir nicht..."};
closeDialog 0;


_houseCfg = [(typeOf life_pInact_curTarget)] call LIGACL_fnc_LigaLadenCfg;
if((count _houseCfg) isEqualTo 0) exitWith {};

_action = [
	format[localize "STR_Laden_SellHouseMSG",
	(round(_houseCfg select 0) / 2) call life_fnc_numberText,
	(_houseCfg select 1)],localize "STR_pInAct_SellHouse",localize "STR_Global_Sell",localize "STR_Global_Cancel"
] call BIS_fnc_guiMessage;


if(_action) then {
	life_pInact_curTarget setVariable ["house_sold",true,true];	
	life_pInact_curTarget setVariable ["ladextra",nil,true];

	life_pInact_curTarget setVariable["slots",nil,true];
	life_pInact_curTarget setVariable["locked",false,true]; 

	[life_pInact_curTarget] remoteExecCall ["TON_fnc_sellLaden",RSERV];	

	deleteMarker format["laden_%1",life_pInact_curTarget getVariable "luid"];
	deleteMarkerLocal format["laden_%1",life_pInact_curTarget getVariable "luid"];
	life_pInact_curTarget setVariable ["luid",nil,true];	
	

	
	_flag = (round((_houseCfg select 0)/2));
	BANK = BANK + _flag;
	_index = life_vehicles find life_pInact_curTarget;
	
	_log = [player, player, _flag, 8, BANK, CASH];
//	LOG_to_HC(0,_log);
	
	[6] call SOCK_fnc_updatePartial;
	
	
	if(_index != -1) then {
		life_vehicles set[_index,-1];
		life_vehicles = life_vehicles - [-1];
	};
	
	_index = [str(getPosATL life_pInact_curTarget),liga_ladenhouses] call TON_fnc_index;
	if(_index != -1) then {
		liga_ladenhouses set[_index,-1];
		liga_ladenhouses = liga_ladenhouses - [-1];
	};
	life_vehicles = life_vehicles - [ObjNull];

};