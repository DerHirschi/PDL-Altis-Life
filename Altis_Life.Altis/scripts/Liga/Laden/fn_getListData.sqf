#include "..\..\..\script_macros.hpp"
/*
	Author: Hirschi - Die Liga
	
	Get ListData

*/
private["_ctrl","_num"];
disableSerialization;
_textctr = (_this select 0);
_ctrl_n = (_this select 1);
_ctrl_ind = (_this select 2);

if(isNull life_trunk_vehicle)exitWith{};
_preistab 	= life_trunk_vehicle getVariable ["kasspreis",[]];
if((count _preistab) isEqualTo 0)exitWith	{};
if(!alive player) exitwith {closeDialog 0;};
if((lbCurSel 3502) isEqualTo -1) exitWith {hint localize "STR_Global_NoSelection";};

_ctrl 	= lbData [3502, (lbCurSel 3502)] ;

_num 	= ctrlText _textctr;
lbClear ((findDisplay 3500) displayCtrl _ctrl_n);

if(!([_num] call TON_fnc_isnumber)) exitWith {hint localize "STR_MISC_WrongNumFormat";};
_num 	= parseNumber(_num);
if(_num isEqualTo 0) exitWith {hint localize "STR_MISC_Under1";};

_name = ITEM_NAME(_ctrl);
_icon = ITEM_ICON(_ctrl);

((findDisplay 3500) displayCtrl _ctrl_n) lbAdd format	["[%1 $] - %2",_num,localize _name];
((findDisplay 3500) displayCtrl _ctrl_n) lbSetData 	[(lbSize ((findDisplay 3500) displayCtrl _ctrl_n))-1,_ctrl];
((findDisplay 3500) displayCtrl _ctrl_n) lbSetPicture [(lbSize ((findDisplay 3500) displayCtrl _ctrl_n))-1,_icon];

ctrlSetText[_textctr,(str _num)];

_preistab set [_ctrl_ind,[_ctrl,_num]];
life_trunk_vehicle setVariable ["kasspreis",_preistab,true];