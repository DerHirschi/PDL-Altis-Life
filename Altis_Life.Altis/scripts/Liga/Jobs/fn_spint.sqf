/*
Author: MasTo - Die Liga
LIGACL_fnc_spint

TODO : Mode Klamotten wechseln / Spinnt fuellen
*/
_slot = param [0,-1,[0]];
_mode = param [0,true,[true]];
if((side player) isEqualTo civilian || (_slot isEqualTo -1))exitWith{};

private _spint = switch(side player) do {
	case west: {["spint_cop", "Cops"],};
	case east: {["spint_alac", "Alac"];};
	case independent: {["spint_med", "Medics"];};
//	default {[spint_flusi, "Flusi"];};
};

_levelVar = getText(missionConfigFile >> (_spint select 1) >> "levelvar")
_maxSlots = getNumber(missionConfigFile >> (_spint select 1) >> (_levelVar + "_" + str(missionNamespace getVariable[_levelVar,0])) >> "spintslots");
_maxSlots = _maxSlots - 1;
_tempSlot = life_gear; 
_slot 	  = ((_slot min _maxSlots) max 0);
_flag 	  = missionNamespace getVariable [(_spint select 0),[]]; 

if(_flag isEqualTo [])exitWith{hint format["Spinnt %1 ist leer..", (_slot + 1)]};

life_gear = _flag select _slot;
_flag set[_slot,_tempSlot];

missionNamespace setVariable [(_spint select 0), _flag];

[true] call life_fnc_loadGear;

[9] call SOCK_fnc_updatePartial;
