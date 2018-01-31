#include "..\..\script_macros.hpp"
#define MACN(CFG) M_CONFIG(getNumber,"VirtualItems",_item,CFG)
#define MACT(CFG) M_CONFIG(getText,"VirtualItems",_item,CFG)
#define MACA(CFG) M_CONFIG(getArray,"VirtualItems",_item,CFG)
/*	
	Author 	: H1rsch1 - D1e L1ga	
*/
private["_flag","_t","_item"];
disableSerialization;
if ((lbCurSel 2005) isEqualTo -1) exitWith {hint localize "STR_ISTR_SelectItemFirst";};
_item = CONTROL_DATA(2005);


if(isClass (missionConfigFile >> "VirtualItems" >> _item)) exitWith { 
	if!(  str (side player) in (MACA("allowside")) ) exitWith {hint "Deine Fraktion kann das nicht benutzen."};	
	if(([false,_item,MACN("verbrauch")] call life_fnc_handleInv)) then
	{	
		_t = true;	
		if!(MACN("fat") isEqualTo -1)then {
			_flag = (getFatigue player) - MACN("fat");
			player setFatigue (_flag max 0);
			_t = false;
		};		
		if!(MACN("essbar") isEqualTo -1)then {
			_flag = life_hunger + MACN("essbar");
			if(_flag > 100) then {
				_flag = 100; 
				player setFatigue 1; 
				hint localize "STR_EatMSG_toMuch";
			};
			life_hunger = _flag;
			_t = false;
		};
		if!(MACN("trinkbar") isEqualTo -1)then {
			_flag = life_thirst + MACN("trinkbar");
			life_thirst = _flag min 100;	
			_t = false;
		};
		if!(MACN("gulltime") isEqualTo -1)then {			
			_item spawn
			{
				_item = _this;
				life_redgull_effect = time;
				titleText[localize "STR_ISTR_RedGullEffect","PLAIN"];
				player enableFatigue false;
				waitUntil {!alive player OR ((time - life_redgull_effect) > (MACN("gulltime") * 60))};
				player enableFatigue true;				
			};	
			_t = false;
		};		
		if!(MACT("useablefnc") isEqualTo "")then { 			
			_item call compile (MACT("useablefnc"));
			_t = false;
		};	
		if (MACN("closeDiag") isEqualTo 1 )then { closeDialog 0; _t = false; };
		if!(MACT("sound") isEqualTo ""	  )then { playSound 	MACT("sound"); 	_t = false;	};
		if!(MACT("hinttext") isEqualTo "" )then { hint localize MACT("hinttext"); _t = false;	};
		if!(MACT("titletext") isEqualTo "")then { titleText[localize (MACT("titletext")),"PLAIN"]; _t = false; };
		if!(MACA("dazu") isEqualTo []	  )then { 
			{	[true,(_x select 0),(_x select 1)] call life_fnc_handleInv;	}forEach (MACA("dazu"));
			_t = false;
		};	
		if(_t)then {
			hint localize "STR_ISTR_NotUsable";
		}else{	
			[] call life_fnc_p_updateMenu;
			[] call life_fnc_hudUpdate;
		};	
	};	
};
hint localize "STR_ISTR_NotUsable";