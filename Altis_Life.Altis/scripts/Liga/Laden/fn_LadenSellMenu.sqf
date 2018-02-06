#include "..\..\..\script_macros.hpp"
/*
	File: .sqf
	Vorlage: Bryan "Tonic" Boardwine
	Author: Hirschi - Die Liga

*/

private["_display","_regale","_i","_data","_flag","_item_list","_shop_data","_name","_price","_index","_type","_item"];

life_shop_npc = (_this select 0);
if(vehicle player != player) exitWith {hint "Steig aus du fauler Sack !!!";};

closeDialog 0; 
createDialog "shops_menu";
waitUntil {!(isNull (findDisplay 2400))};
disableSerialization;
#define Btn3 2408
//Setup control vars.
_display = findDisplay 2400;
_item_list = _display displayCtrl 2401;

_Btn3 = _display displayCtrl Btn3;
//////////////////////////
_Btn3 buttonSetAction "[] spawn LIGACL_fnc_LadenVirtBuy;";
//////////////////////////
//Purge list
lbClear _item_list;

life_shop_type 	= nearestObject [(getPosATL life_shop_npc), "House_F"];
_kasspr 		= life_shop_npc getVariable ["kasspreis",[]];
_allObj			= life_shop_type getVariable ["kassen",[]];
if((_allObj isEqualTo []) || (_kasspr isEqualTo []) ) exitWith {closeDialog 0; };
_regale 		= [];
{
	if(life_shop_npc in _x)exitWith {_regale = _x select 1;};
}forEach _allObj;	
_data 		= [];
{
	_flag = _x getVariable ["Trunk",[]];
	if((count _flag) isEqualTo 0) then {_x setVariable["Trunk",[[],0],true]; _flag = [];} else {_flag = _flag select 0;};
		
	{
		_i = [(_x select 0),_data]call TON_fnc_index;
		if(_i isEqualTo -1)then {
			_data pushBack _x;
		}else{
			_data set [_i,[((_data select _i) select 0),((_data select _i) select 1) + (_x select 1)]];
		};			
		
	}forEach _flag;	
	
}forEach _regale;

ctrlSetText[2403,format["%1",((life_shop_type getVariable ["ladextra",["",0,0]]) select 0)]];

{	
	_item	= _x select 0;	
	_index = [_item,_kasspr]call TON_fnc_index;
	if!(_index isEqualTo -1) then {
		
		_name = ITEM_NAME(_item);
		_icon = M_CONFIG(getText,"VirtualItems",_item,"icon");
	
		_price = (_kasspr select _index) select 1;		
		
		_item_list lbAdd format["%1  (%3Stk) ($%2)",localize _name,_price call life_fnc_numberText,(_x select 1)];	

		_item_list lbSetData [(lbSize _item_list)-1,(str[_item,(_x select 1)])];
		_item_list lbSetValue [(lbSize _item_list)-1,_price];
		_item_list lbSetPicture [(lbSize _item_list)-1,_icon];
	};
} foreach _data;

life_shop_npc = [_regale,life_shop_npc];