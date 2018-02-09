#include "..\script_macros.hpp"
/*
    File: fn_survival.sqf
    Author: Bryan "Tonic" Boardwine
	Edit: MasTo - Die Liga

    Description:
    All survival? things merged into one thread.
*/
private ["_dam","_fnc_radioakt","_nuke","_fnc_bp","_fnc_food","_fnc_water","_foodTime","_waterTime","_vp","_bp","_un","_walkDis","_lastPos","_curPos"];
_fnc_food =  {
    if (life_hunger < 2) then {player setDamage 1; hint localize "STR_NOTF_EatMSG_Death";}
    else
    {
        life_hunger = life_hunger - 10;
        [] call life_fnc_hudUpdate;
        if (life_hunger < 2) then {player setDamage 1; hint localize "STR_NOTF_EatMSG_Death";};
        switch (life_hunger) do {
            case 30: {hint localize "STR_NOTF_EatMSG_1";};
            case 20: {hint localize "STR_NOTF_EatMSG_2";};
            case 10: {
                hint localize "STR_NOTF_EatMSG_3";
                if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1) then {player setFatigue 1;};
            };
        };
    };
};

_fnc_water = {
    if (life_thirst < 2) then {player setDamage 1; hint localize "STR_NOTF_DrinkMSG_Death";}
    else
    {
        life_thirst = life_thirst - 10;
        [] call life_fnc_hudUpdate;
        if (life_thirst < 2) then {player setDamage 1; hint localize "STR_NOTF_DrinkMSG_Death";};
        switch (life_thirst) do  {
            case 30: {hint localize "STR_NOTF_DrinkMSG_1";};
            case 20: {
                hint localize "STR_NOTF_DrinkMSG_2";
                if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1) then {player setFatigue 1;};
            };
            case 10: {
                hint localize "STR_NOTF_DrinkMSG_3";
                if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1) then {player setFatigue 1;};
            };
        };
    };
};

_fnc_bp = {
	private["_bp","_vp","_load","_cfg","_vescfg"];

	_vp = vest player;
	_bp = backpack player;	
	if((_bp isEqualTo "") && (_vp isEqualTo "")) exitWith {life_maxWeight = LIFE_SETTINGS(getNumber,"total_maxWeight");};
	if!((_bp isEqualTo "") && (_vp isEqualTo "")) exitWith {
		if(!isClass (missionConfigFile >> "CfgKlamotten" >> _vp )) then {
			_vp = "Default"; //Use Default class if it doesn't exist	
		};		
		_cfg = getNumber(configFile >> "CfgVehicles" >> (_bp) >> "maximumload");		
		_load = round(_cfg / 8);			
		_vescfg = M_CONFIG(getNumber,"CfgKlamotten",_vp,"LigaInv");	
		life_maxWeight = life_maxWeight + _load + _vescfg;		
	};		
	if(_bp isEqualTo "") then  
	{	
		_vescfg = M_CONFIG(getNumber,"CfgKlamotten",_vp,"LigaInv");	
		life_maxWeight = life_maxWeight + _vescfg;		
			
	}else{	
		_cfg = getNumber(configFile >> "CfgVehicles" >> (_bp) >> "maximumload");		
		_load = round(_cfg / 8);
		life_maxWeight = life_maxWeight + _load;			
	};
};	

_fnc_radioakt = {
	if(player getVariable["Revive",false]) exitWith{};
    if(uniform player isEqualTo "U_C_Scientist") then {
        hint "!!! Du betrittst die Radioaktive Sperrzone !!! Aber dein Schutzanzug schuetzt dich";
    }else{
        hint "!!! ACHTUNG RADIOAKTIVE ZONE !!! DU KANNST STERBEN, WENN DU KEINEN SCHUTZANZUG AN HAST";
        if(!life_god)then{ player setDamage (damage player + 0.1) };
        [] call life_fnc_hudUpdate;
    };	
};

//Setup the time-based variables.
_foodTime 		= time;
_waterTime 		= time;
_walkDis 		= 0;
_lastPos 		= visiblePosition player;
_lastPos 		= (_lastPos select 0) + (_lastPos select 1);
_lastState 		= vehicle player;
_dam 			= damage player;
_vp 			= "";
_bp 			= "";
_un 			= "";

_radioMark		= getMarkerPos "Warm_Marker";
private _radioATime 	= time;
// Init Stuff

if(isNil "nu_de") then {
	_nuke = true;	 
	nu_de = false;		
}else {	
	if(nu_de) then {
		_nuke = false;	
	}else {
		_nuke = true; 
	};
};


for "_i" from 0 to 1 step 1 do {
	
	if(_i isEqualTo 0)then {
		/* Thirst / Hunger adjustment that is time based */
		if ((time - _waterTime) > 600 && {!life_god}) then {[] call _fnc_water; _waterTime = time;};
		if ((time - _foodTime) > 850 && {!life_god}) then {[] call _fnc_food; _foodTime = time;};

		/* Adjustment of carrying capacity based on backpack changes */
		/*
		if (backpack player isEqualTo "") then {
			life_maxWeight = LIFE_SETTINGS(getNumber,"total_maxWeight");
			_bp = backpack player;
		} else {
			if (!(backpack player isEqualTo "") && {!(backpack player isEqualTo _bp)}) then {
				_bp = backpack player;
				life_maxWeight = LIFE_SETTINGS(getNumber,"total_maxWeight") + round(FETCH_CONFIG2(getNumber,"CfgVehicles",_bp,"maximumload") / 4);
			};
		};
		*/
		if(!(backpack player isEqualTo _bp) || !(vest player isEqualTo _vp) || !(uniform player isEqualTo _un))then	{
			[] call _fnc_bp; 
			[]call life_fnc_ligaSetClothText;	
			_vp = vest player;
			_bp = backpack player;
			_un = uniform player;
		};
		uiSleep 0.5;
	}else{
		/* Nuke*/
		if((time - _radioATime)  	> 15	) then 	{ 
			if(player distance _radioMark < 550) then {
				if!(nu_de)then{
					nu_de = true; 
					publicVariable "nu_de";
				}; 
				if(player distance _radioMark < 280) then {
					[]call _fnc_radioakt;
				};
			}; 
			if (surfaceIsWater position player) then {
				enableEnvironment [true, true];
			}else{
				enableEnvironment [false, true];
			}; 
			_radioATime = time;
		};
		if(_nuke) then {
			if(nu_de) then {
				_nuke = false; 
				[] execVM "scripts\nuke\nuke.sqf"; 
			};
		};

		/* Check if the player's state changed? */
		if (!(vehicle player isEqualTo _lastState) || {!alive player}) then {
			[] call life_fnc_updateViewDistance;
			//[] call life_fnc_fuelCheck;
			[]call LIGACL_fnc_IgiVehInit;
			[]call LIGACL_fnc_fuelCheck;		
			_lastState = vehicle player;
		};

		/* Check if the weight has changed and the player is carrying to much */
		if (life_carryWeight > life_maxWeight && {!isForcedWalk player} && {!life_god}) then {
			player forceWalk true;
			if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1) then {player setFatigue 1;};
			hint localize "STR_NOTF_MaxWeight";
		} else {
			if (isForcedWalk player) then {
				player forceWalk false;
			};
		};

		/* Travelling distance to decrease thirst/hunger which is captured every second so the distance is actually greater then 650 */
		if (!alive player || {life_god}) then {_walkDis = 0;} else {
			_curPos = visiblePosition player;
			_curPos = (_curPos select 0) + (_curPos select 1);
			if (!(_curPos isEqualTo _lastPos) && {(isNull objectParent player)}) then {
				_walkDis = _walkDis + 1;
				if (_walkDis isEqualTo 650) then {
					_walkDis = 0;
					life_thirst = life_thirst - 5;
					life_hunger = life_hunger - 5;
					[] call life_fnc_hudUpdate;
				};
			};
			_lastPos = visiblePosition player;
			_lastPos = (_lastPos select 0) + (_lastPos select 1);
		};
		uiSleep 0.5;
		_i = -1;
	};
	// Jeden Takt 
	if!((damage player) isEqualTo _dam) then{[] call life_fnc_hudUpdate;_dam = damage player;};
};
