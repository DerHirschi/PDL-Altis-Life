#include "..\..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	Edit: Hirschi - Die Liga
	
	Description:
	Master config file for buyable houses?
*/
_house = [_this,0,"",[""]] call BIS_fnc_param;
if(_house isEqualTo "") exitWith {[]};
if(!isClass (missionConfigFile >> "LigaLadenClass" >> _house)) exitWith {[]};

M_CONFIG(getArray,"LigaLadenClass",_house,"Preis");