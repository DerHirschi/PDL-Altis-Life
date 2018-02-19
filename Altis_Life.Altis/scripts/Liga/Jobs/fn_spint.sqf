/*
	Author: MasTo - Die Liga
	[0,0]LIGACL_fnc_spint
*/

_slot = param [0,-1,[0]];
_mode = param [1,-1,[0]]; // 0 = wechseln , 1 = in Spint, 2 = aus Spint
if((side player) isEqualTo civilian || (_slot isEqualTo -1))exitWith{};

private _spint = switch(side player) do {
	case west: {["spint_cop", "Cops"],};
	case east: {["spint_alac", "Alac"];};
	case independent: {["spint_med", "Medics"];};
	//	default {[spint_flusi, "Flusi"];};

};

_levelVar = getText(missionConfigFile >> "JobsCFG" >> (_spint select 1) >> "levelvar");
_maxSlots = getNumber(missionConfigFile >> "JobsCFG" >> (_spint select 1) >> (_levelVar + "_" + str(missionNamespace getVariable[_levelVar,0])) >> "spintslots");
[]call life_fnc_saveGear;
_tempSlot = life_gear; 
_slot 	  = ((_slot min (_maxSlots - 1)) max 0);
private _flag 	  = missionNamespace getVariable [(_spint select 0),[]]; 
/*
if(_flag isEqualType "") then {
	_flag = call compile _flag;
};
*/
// autom. Sloterweiterung
_count    = count _flag;
if(_count < _maxSlots) then {
	_dif = _maxSlots - _count;
	for "_i" from 1 to (_maxSlots - _count) do {
		_flag pushBack [];
	};
};

_slotFlag = _flag select _slot;

if(_slotFlag isEqualTo [] && _mode in [0,2])exitWith{hint format["Spinnt %1 ist leer..", (_slot + 1)]};
if(_mode isEqualTo 1) exitWith {
	_t = true;
	if!(_slotFlag isEqualTo []) then {
		_t = [			
			"Dein Spinnt ist noch nicht leer, der Inhalt geht verloren, wenn du deine Sachen jetzt in den Spinn legst.",
			"Sachen wirklich in den Spinnt legen ?",
			"Ja",
			"Nein"
		] call BIS_fnc_guiMessage;
	};
	if(_t)then{
		_flag set[_slot,_tempSlot];
		missionNamespace setVariable [(_spint select 0), _flag];
		private _handle = [] spawn life_fnc_stripDownPlayer;
		waitUntil {scriptDone _handle};
		[] call life_fnc_saveGear;
		[9] call SOCK_fnc_updatePartial;
	};
};

if(_mode isEqualTo 2) exitWith {
	_t = true;
	if!(life_gear isEqualTo ["","","","","",[],"","",[],[],[],[],[],[],["","","",""],["","","",""],[]]) then {
		_t = [			
			"Du bist noch nicht ausgezogen, deine Sachen gehen verloren, wenn du sie nicht in den Spinnt legst.",
			"Wirklich umziehen ?",
			"Ja",
			"Nein"
		] call BIS_fnc_guiMessage;
	};
	if(_t)then{
		
		life_gear = _slotFlag;
		_flag set[_slot,[]];
		missionNamespace setVariable [(_spint select 0), _flag];
		[true] call life_fnc_loadGear;
		[9] call SOCK_fnc_updatePartial;
	};
};

life_gear = _slotFlag;
_flag set[_slot,_tempSlot];
missionNamespace setVariable [(_spint select 0), _flag];
[true] call life_fnc_loadGear;
[9] call SOCK_fnc_updatePartial;
