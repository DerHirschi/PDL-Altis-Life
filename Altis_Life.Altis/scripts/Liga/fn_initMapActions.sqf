#include "..\..\script_macros.hpp"
/*
	Author MasTo - Die Liga
	
	bla
*/
// Stechuhren
{	
	waitUntil{!isNil (M_CONFIG(getText,"JobsCFG",configName _x,"levelvar"))};
	
	private _action  = M_CONFIG(getArray,"JobsCFG",configName _x,"stechaction");
	{
		private _var = missionNamespace getVariable [_x,objNull];
		{
			if!(isNull _var) then {
				_var addAction [(_x select 0),compileFinal (_x select 1),"",0,false,false,"", (_x select 2), (_x select 3)];
			};
		}forEach _action;
	}forEach (M_CONFIG(getArray,"JobsCFG",configName _x,"stechuhren"));	
	
} forEach ("true" configClasses (missionConfigFile >> "JobsCFG"));

// Spinnte
{	
	private _action   = getArray(missionConfigFile >> "JobsCFG" >> (configName _x) >> "spinntaction");
	private _levelVar = getText(missionConfigFile >> "JobsCFG" >> (configName _x) >> "levelvar");
	private _maxSlots = getNumber(missionConfigFile >> "JobsCFG" >> (configName _x) >> (_levelVar + "_" + str(missionNamespace getVariable[_levelVar,0])) >> "spintslots");
	private _confName = configName _x; 
	
	for "_i" from 0 to (_maxSlots - 1) do {
		{
			private _var  = missionNamespace getVariable [ _x,objNull];
			private _side = call compile (getText(missionConfigFile >> "JobsCFG" >> (_confName) >> "side"));
			
			if(!isNull _var) then {
				_var addAction [ format[ "<t color='#FF0000'>Aus Spinnt %1 wechseln</t>", (_i + 1)],(format["[%1,0] spawn LIGACL_fnc_spint",_i]),"",0,false,false,"", format[ "((side player) isEqualTo %1 )" , _side], (_action select 0)];
				_var addAction [ format[ "<t color='#ffff00'>In Spinnt %1 legen</t>", (_i + 1)],(format["[%1,1] spawn LIGACL_fnc_spint",_i]),"",0,false,false,"", format[ "((side player) isEqualTo %1 )" , _side], (_action select 0)];
				_var addAction [ format[ "<t color='#33cc33'>Aus Spinnt %1 nehmen</t>", (_i + 1)], (format["[%1,2] spawn LIGACL_fnc_spint",_i]),"",0,false,false,"", format[ "((side player) isEqualTo %1 )" , _side], (_action select 0)];
			};			
		}forEach (getArray(missionConfigFile >> "JobsCFG" >> _confName >> "spinnte"));		
	};
		
} forEach ("true" configClasses (missionConfigFile >> "JobsCFG"));
