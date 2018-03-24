_fass = nearestObjects[getPos player,["Land_WaterBarrel_F"],2.55] select 0;
if!(isNil "_fass") then {
	if!(isNull _fass) then {
		[_fass] spawn life_fnc_openInventory;
	};
};