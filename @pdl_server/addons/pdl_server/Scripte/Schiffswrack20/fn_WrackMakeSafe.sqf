#include "\pdl_server\script_macros.hpp"
/*
	Author: Hirschi - Die Liga 
	Vorlage: Rayen´s Schiffswrack
*/

_posArr = param [0, []];
if(!isNil "wrack_objs" || _posArr isEqualTo [] )exitWith {};
wrack_objs = [];
_pos 	= (_posArr select 0) select 0;
_vec 	= (_posArr select 0) select 1;
_pos1 	= (_posArr select 1) select 0;
_vec1 	= (_posArr select 1) select 1;

_wrack1 = createVehicle ["Land_Wreck_Traw_F", [0,0,-100], [], 0, "CAN_COLLIDE"];	
_wrack2 = createVehicle ["Land_Wreck_Traw2_F", [0,0,-80], [], 0, "CAN_COLLIDE"];
_wrack1 setPos _pos;
_wrack2 setPos _pos1;
_wrack1 setVectorUp _vec;
_wrack2 setVectorUp _vec1;

_safe = "Land_CargoBox_V1_F" createVehicle [0,0,-50];

_safe setPos ( (getPos _wrack1) vectorAdd   [4.5, -9.3, -2.5 ] ); 
_safe setVectorUp [-8.7,-1,1]; 
	
wrack_objs = [_wrack1,_wrack2,_safe];
publicVariable "wrack_objs";