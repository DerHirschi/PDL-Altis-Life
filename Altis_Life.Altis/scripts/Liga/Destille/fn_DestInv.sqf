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
║ File: fn_DestInv.sqf
║ Author: Hirschi Liga-Life
║
║ Description: Destillen Inventar openner ... 
╚══════════════════════════════════════════════════╝
*/	
private _inv = switch (_this select 0) do {
	
	case 0:{ nearestObjects[getPos player,["Land_HeatPump_F"],2.9] select 0; 		};
	case 1:{ nearestObjects[getPos player,["Land_Bucket_painted_F"],2.5] select 0; 	};
	case 2:{ nearestObjects[getPos player,["Land_BarrelWater_F"],1.3] select 0; 	};
	default {ObjNull};
	
};
if!(isNull _inv) then {
	[_inv] spawn life_fnc_openInventory;
};