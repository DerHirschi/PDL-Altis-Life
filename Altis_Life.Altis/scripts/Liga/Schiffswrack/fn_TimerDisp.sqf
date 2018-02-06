#include "..\..\..\script_macros.hpp"
private["_uiDisp","_time","_timer","_setTime","_safe"];
private _setTime = param [0, 8];
params [
		["_setTime", 0, [8]],		
		["_safe", objNull, [objNull]]
	];
disableSerialization;
6 cutRsc ["life_timer","PLAIN"];
_uiDisp = uiNamespace getVariable "life_timer";
_timer = _uiDisp displayCtrl 38301;
_time = time + (_setTime * 60);
while {true} do {
	if(isNull _uiDisp) then {
		6 cutRsc ["life_timer","PLAIN"];
		_uiDisp = uiNamespace getVariable "life_timer";
		_timer = _uiDisp displayCtrl 38301;
	};
	if(round(_time - time) < 1) exitWith {};
	_timer ctrlSetText format["%1",[(_time - time),"MM:SS.MS"] call BIS_fnc_secondsToString];
	sleep 0.5;
};
6 cutText["","PLAIN"];

hint(getText (missionConfigFile >> 'Schiffswrack' >> 'bombBoom'));	
_pos = getPos _safe;	
'Bo_GBU12_LGB' createVehicle _pos;	
'M_NLAW_AT_F' createVehicle _pos;	
schiffwoffen = true;		
publicVariable 'schiffwoffen';

_safe setVariable ["opened",true,true];
_schiffsw_loot_array = getArray (missionConfigFile >> "Schiffswrack" >> "Loot" );
_schiffsw_loot_array = _schiffsw_loot_array select (floor random ((count _schiffsw_loot_array)-1 ));

private _gew = 0;
{		
	
	_gew = _gew + (ITEM_WEIGHT(_x select 0) * (_x select 1));
			
		// [[["redgull",2],["pickaxe",1]],4]	
}forEach _schiffsw_loot_array;

_safe setVariable ["Trunk",[_schiffsw_loot_array,_gew ],true];