#include "..\script_macros.hpp"
/*
	Author MasTo - Die Liga
	
	bla
*/

{	
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
