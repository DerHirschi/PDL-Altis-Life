#include "..\..\script_macros.hpp"
/*
	╔══════════════════════════════════════════════════╗
	║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║
	║░░░░░░░█▀▀▀▄░▄░░░░░░░█░░░░▄░░░░░░░░░░░░░░░░░░░░░░░║
	║░░░░░░░█░░░█░░░█▀▀▀░░█░░░░░░░█▀▀▀▀█░█▀▀▀█░░░░░░░░░║
	║░░░░░░░█░░░█░█░█▀▀▀░░█░░░░█░░█░░░░█░█░░░█░░░░░░░░░║
	║░░░░░░░▀▀▀▀░░▀░▀▀▀▀░░▀▀▀▀░▀░░▀▀▀▀▀█░▀▀▀▀█░░░░░░░░░║
	║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄▄▄▄▄█░░░░░░░░░░░░░░░║
	║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║
	╠══════════════════════════════════════════════════╝
	║	Author: Hirschi Liga - Life
	║	File: fn_ligaSetClothText.sqf	
	║		
	║	TODO: CFG ent nicht side abhaenging sondern onlinevariable
	╚══════════════════════════════════════════════════╝
*/	
private["_backConf","_uniConfi","_ent","_uni","_bak"];
//if (EQUAL(playerSide,civilian)) exitWith {};
if (uniform player isEqualTo "")exitWith {};

_uni = uniform player;
_bak = backpack player;
_textBp = backpackContainer player getVariable ["texture",""];
_textUn = uniformContainer  player getVariable ["texture",""];

if(!isClass (missionConfigFile >> "CfgKlamotten" >> _uni )) then {
	_uni = "Default"; //Use Default class if it doesn't exist	
};

if(!isClass (missionConfigFile >> "CfgKlamotten" >> _bak )) then {	
	_bak = "Default"; //Use Default class if it doesn't exist		
};

switch (side player) do {
    case west: {			
		_uniConfi = M_CONFIG(getText,"CfgKlamotten",_uni,"ligatextureLPD");		
	
		(unitBackpack player) setObjectTextureGlobal  [0,_textBp];
		
		if!(_textUn isEqualTo "") then {
			player setObjectTextureGlobal  [0,_textUn];
		}else{
			if!(_uniConfi isEqualTo "") then {
				player setObjectTextureGlobal [0,_uniConfi];
				uniformContainer player setVariable ["texture",_uniConfi,true];	
			};
		};		
	};	
	case independent: {	
		_ent = "ligatextureLRK";		
	};	
    case east: {
		_ent = "ligatextureALAC";		
	};
	case civilian : {		
		_ent = "ligatextureCIV";
	};
};

if!(playerSide isEqualTo west) then {
	_backConf = M_CONFIG(getText,"CfgKlamotten",_bak,_ent);
	_uniConfi = M_CONFIG(getText,"CfgKlamotten",_uni,_ent);	
	if!(_textBp isEqualTo "") then {
		(unitBackpack player) setObjectTextureGlobal  [0,_textBp];
	}else{
		if!(_backConf isEqualTo "") then {
			(unitBackpack player) setObjectTextureGlobal  [0,_backConf];
			backpackContainer player setVariable ["texture",_backConf,true];
		};
	};		
	
	if!(_textUn isEqualTo "") then {
		player setObjectTextureGlobal  [0,_textUn];
	}else{
		if!(_uniConfi isEqualTo "") then {
			player setObjectTextureGlobal [0,_uniConfi];
			uniformContainer player setVariable ["texture",_uniConfi,true];	
		};
	};		
};