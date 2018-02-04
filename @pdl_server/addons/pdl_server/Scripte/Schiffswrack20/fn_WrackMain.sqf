#include "\pdl_server\script_macros.hpp"
/*
	Author: Hirschi - Die Liga 
	Vorlage: Rayen´s Schiffswrack
*/

_sleep = getArray(missionConfigFile >> "Schiffswrack" >> "sleep");
uiSleep ((floor random (_sleep select 1) max (_sleep select 0)) * 60);

_schiffsw_positions = getArray (missionConfigFile >> "Schiffswrack" >> "Positionen" );
_schiffsw_loot_array = getArray (missionConfigFile >> "Schiffswrack" >> "Loot" );
_ranZeugClassNames = getArray (missionConfigFile >> "Schiffswrack" >> "ZeugClassNames" );
_triggerRad = getNumber (missionConfigFile >> "Schiffswrack" >> "TriggerRadius" );
_markerRad = getNumber (missionConfigFile >> "Schiffswrack" >> "MarkerRadius" );

_cooldownTime = getNumber (missionConfigFile >> "Schiffswrack" >> "coolDownTimer" );
_schiffsw_positions = _schiffsw_positions select (floor random ((count _schiffsw_positions)-1 ));

[0,""] remoteExec ["LIGACL_fnc_ligaNews",RCLIENT];
_trg = createTrigger ["EmptyDetector", _schiffsw_positions];
_trg setTriggerArea [_triggerRad, _triggerRad, 0, false];
_trg setTriggerActivation ["CIV", "PRESENT", true];
_trg setTriggerStatements ["this", "schiffwoffen = false; publicVariable'schiffwoffen'; ", ""];

_marker = createMarker ["schiffswmarker", _schiffsw_positions];
"schiffswmarker" setMarkerColor "ColorGreen";
"schiffswmarker" setMarkerType "Empty";
"schiffswmarker" setMarkerShape "ELLIPSE";
"schiffswmarker" setMarkerSize [_markerRad,_markerRad];
_markerText = createMarker ["schiffswmarkertext", _schiffsw_positions];
"schiffswmarkertext" setMarkerColor "ColorBlack";
"schiffswmarkertext" setMarkerText "Schiffswrack";
"schiffswmarkertext" setMarkerType "mil_warning";

"schiffswmarker" setMarkerAlpha 0.3;


waitUntil{sleep 2; !isNil "schiffwoffen"};

deleteVehicle _trg;
_xPOS = floor(random (_markerRad - 100));
_yPOS = floor(random (_markerRad - 100));
_schiffspos = [(_schiffsw_positions select 0) +_xPOS,(_schiffsw_positions select 1) +_yPOS, -3.8];
diag_log str _schiffspos;
wrack_pos = _schiffspos;
publicVariable "wrack_pos";
[_schiffspos] remoteExec ["LIGACL_fnc_spawnWrack", RCLIENT];

_ranZeugOBJ = [];
for "_i" from 1 to (getNumber (missionConfigFile >> "Schiffswrack" >> "ZeugMenge" ) ) do {
	_xPOS = floor(random (getNumber (missionConfigFile >> "Schiffswrack" >> "ZeugRadius" )));
	_yPOS = floor(random (getNumber (missionConfigFile >> "Schiffswrack" >> "ZeugRadius" )));
	_ranzeugPos = [(_schiffsw_positions select 0) +_xPOS,(_schiffsw_positions select 1) +_yPOS, 0.3];
	_zeug = (_ranZeugClassNames select (floor (random ((count _ranZeugClassNames) - 1)))) createVehicle [0,0,-20];
	_zeug setPos _ranzeugPos;
	_ranZeugOBJ pushBack _zeug;
};
_trgsink = createTrigger ["EmptyDetector", _schiffspos];
_trgsink setTriggerArea [200, 200, 0, false];
_trgsink setTriggerActivation ["CIV", "PRESENT", true];
_trgsink setTriggerStatements ["this", "    [(serverTime + 10)] remoteExec ['LIGACL_fnc_WrackSinkt', -2] ;  deleteVehicle  thisTrigger   ;     ", ""];

waitUntil{sleep 1.2;!isNil "wrack_objs"};
diag_log "Wrack OBJS";
waitUntil{!(isNull (wrack_objs select 0)) && !(isNull (wrack_objs select 1)) && !(isNull (wrack_objs select 2))};
if(!isNil "_trgsink") then {
	if(!isNull _trgsink) then {deleteVehicle _trgsink};
};

_safe = wrack_objs select 2;
_safe setVariable ["trunk_in_use",false,true];
_safe setVariable ["opened",false,true];

waitUntil {sleep 3.3; schiffwoffen}; 
diag_log "OFFEN";
_safe setVariable ["opened",true,true];
_schiffsw_loot_array = _schiffsw_loot_array select (floor random ((count _schiffsw_loot_array)-1 ));
_stk = _schiffsw_loot_array select 1;
_gew = 0;	
{
	_gew = _gew + (ITEM_WEIGHT(_x select 0) * (_x select 1));
}forEach _schiffsw_loot_array;

_safe setVariable ["Trunk",[_schiffsw_loot_array,_gew ],true];	

sleep (_cooldownTime * 60);
"schiffswmarker" setMarkerAlpha 0;
"schiffswmarkertext" setMarkerAlpha 0;

deleteMarker "schiffswmarker";
deleteMarker "schiffswmarkertext";
if(!isNil "wrack_objs") then {
	{
		if(!isNil "_x")then{
			if(!isNull _x) then { deleteVehicle _x };
		};
	}forEach wrack_objs;
};
{
	if(!isNull _x) then { deleteVehicle _x };
}forEach _ranZeugOBJ;
wrack_objs 		= nil;
schiffwoffen 	= nil;
wrack1 			= nil;
wrack2 			= nil;
Feuer 			= nil;
wrack_pos 		= nil;
publicVariable  "wrack_pos";
publicVariable	"wrack_objs";
publicVariable	"schiffwoffen";
publicVariable	"wrack1";
publicVariable	"wrack2";
publicVariable	"Feuer";
if(!isNil "wrack_boom") then {
	diag_log "wrack_boom nich NIL !!!!!!!!! WTF !! NET SPAM";
	wrack_boom = nil;	
	publicVariable "wrack_boom";
};
/* Besser Schedule n!!!!*/
[]spawn TON_fnc_WrackMain;
