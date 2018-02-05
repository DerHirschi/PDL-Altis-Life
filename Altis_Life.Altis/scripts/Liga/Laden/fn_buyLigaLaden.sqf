#include "..\..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	Edit: Hirschi & Otti Liga-Life
	
	Description:
	Buys the LigaLaden?	
*/
private["_uid","_action","_houseCfg"];

_uid = steamid;

if(isNull life_pInact_curTarget) exitWith {};
if(!(life_pInact_curTarget isKindOf "House_F")) exitWith {};
if((life_pInact_curTarget getVariable ["house_owned",false])) exitWith {hint "Dieses Geschaeft gehoert bereits jemanden... "};
if(!isNil {(life_pInact_curTarget getVariable "house_sold")}) exitWith {hint localize "STR_House_Sell_Process"};
//if(!lci_home) exitWith {hint localize "STR_House_License"};
if(count liga_ladenhouses >= (M_CONFIG(getNumber,"LigaLadenCFG","LimitCFG","buylimit1"))) exitWith {hint "Du hast schon genug Laeden ...";};
closeDialog 0;

_houseCfg = [(typeOf life_pInact_curTarget)] call LIGACL_fnc_LigaLadenCfg;
if((count _houseCfg) isEqualTo 0) exitWith {};
[life_pInact_curTarget,player,1] remoteExec ["TON_fnc_preCheckHouse",RSERV];

waitUntil{	!isNil "kaufmich" };
if!(kaufmich) exitWith {hint "Dieses Geschaeft gehoert bereits jemanden... "};

kaufmich = nil;

_action = [
	format[localize "STR_Laden_BuyMSG",
	[(_houseCfg select 0)] call life_fnc_numberText,
	(_houseCfg select 1) , (_houseCfg select 2)],localize "STR_Laden_Purchase",localize "STR_Global_Buy",localize "STR_Global_Cancel"
] call BIS_fnc_guiMessage;

if(_action) then {
	if(BANK < (_houseCfg select 0)) exitWith {hint format [localize "STR_House_NotEnough"]};
	[_uid,life_pInact_curTarget] remoteExec ["TON_fnc_addLaden",RSERV];

	life_pInact_curTarget setVariable ["house_owner",[_uid,profileName],true];
	life_pInact_curTarget setVariable ["ladextra",["Liga Laden",0,0],true];
	life_pInact_curTarget setVariable ["luid",floor(random 99999),true];

	_flag = _houseCfg select 0;
	BANK = BANK - _flag;
	_log = [player, player, -_flag, 8, BANK, CASH];
	// LOG_to_HC(0,_log);
	[6] call SOCK_fnc_updatePartial;
	life_vehicles pushBack life_pInact_curTarget;
	liga_ladenhouses pushBack [str(getPosATL life_pInact_curTarget),[]];
	_marker = createMarkerLocal [format["laden_%1",(life_pInact_curTarget getVariable "luid")],getPosATL life_pInact_curTarget];
	_houseName = "Liga Laden";
	_marker setMarkerTextLocal _houseName;
	_marker setMarkerColorLocal "ColorYellow";
	_marker setMarkerTypeLocal "loc_Lighthouse";
	
//	["buyLaden"] spawn mav_ttm_fnc_addExp;
};