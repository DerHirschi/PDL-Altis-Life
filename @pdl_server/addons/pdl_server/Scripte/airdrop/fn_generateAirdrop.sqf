/*
	@file Version: 1.0.0.0
	@file Author: RYN_Ryan
	@file edit: 20.01.2015
	Edit: Hirschi - Die Liga
	Copyright � 2015 Ryan Torzynski, All rights reserved
	All servers are allowed to use this code, modify and publish it. Every modified release of this script must contain "Original by RTT"!
*/


_pos = getArray(missionConfigFile >> "Airdrop" >> "posi");
_dest = _pos select ((random (count _pos)) - 1);

if !(isNil "airdrop_goingon") exitWith {};
airdrop_goingon = true;

diag_log "╔═════════════════════════════╗";
diag_log "║ AIRDROP wurde gestartet !!";
diag_log "╚═════════════════════════════╝";

_sleep = getArray(missionConfigFile >> "Airdrop" >> "sleep");
uiSleep ((floor random (_sleep select 1) max (_sleep select 0)) * 60);


[1,""] remoteExec ["LIGACL_fnc_ligaNews",-2];
sleep 120;

_marker = createMarker ["Airdropmarker", _dest];
"Airdropmarker" setMarkerColor "ColorRed";
"Airdropmarker" setMarkerType "Empty";
"Airdropmarker" setMarkerShape "ELLIPSE";
"Airdropmarker" setMarkerSize [500,500];
_markerText = createMarker ["Airdropmarkertext", _dest];
"Airdropmarkertext" setMarkerColor "ColorBlack";
"Airdropmarkertext" setMarkerText "Airdrop-Mission";
"Airdropmarkertext" setMarkerType "mil_warning";
sleep 10;

[3,""] remoteExec ["LIGACL_fnc_ligaNews",-2];
uiSleep 300;

_airdrop_helicopter_main = getText(missionConfigFile >> "Airdrop" >> "main_heli");
_airdrop_helicopter_scnd = getText(missionConfigFile >> "Airdrop" >> "sec_heli");

private _heli1 = CreateVehicle [_airdrop_helicopter_main, [10, 40, 5000], [], 0, "FLY"];
private _heli2 = CreateVehicle [_airdrop_helicopter_scnd, [40, 10, 3500], [], 0, "FLY"];
private _heli3 = CreateVehicle [_airdrop_helicopter_scnd, [10, 10, 2000], [], 0, "FLY"];

_heli1 allowDamage false;
_heli2 allowDamage false;
_heli3 allowDamage false;

_mygroup1 = [[15, 10, 0], CIVILIAN, ["O_G_Soldier_SL_F"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
_mygroup2 = [[12, 10, 0], CIVILIAN, ["O_G_Soldier_SL_F"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
_mygroup3 = [[10, 12, 0], CIVILIAN, ["O_G_Soldier_SL_F"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;

{_x allowDamage false; _x moveInDriver _heli1} forEach units _mygroup1;
{_x allowDamage false; _x moveInDriver _heli2; [_x] join _mygroup1; } forEach units _mygroup2;
{_x allowDamage false; _x moveInDriver _heli3; [_x] join _mygroup1; } forEach units _mygroup3;

sleep 1;

deleteGroup _mygroup2;
deleteGroup _mygroup3;	


_alt = getNumber(missionConfigFile >> "Airdrop" >> "fly_alt");

_heli1 setPos [10, 40, 100];
_heli2 setPos [40, 10, 60];
_heli3 setPos [10, 10, 50];


_mygroup1 addWaypoint [_dest, 0];
_mygroup1 addWaypoint [[20,10,10], 0];
[_mygroup1, 0] setWaypointFormation "WEDGE";


_heli1 flyInHeight _alt;
_heli2 flyInHeight _alt;
_heli3 flyInHeight _alt;

_markerText = createMarker ["airbox_marker", [10,10,0.0014267]];
"airbox_marker" setMarkerColor "ColorBlue";
"airbox_marker" setMarkerText " Airdrop-Box";
"airbox_marker" setMarkerType "mil_destroy";

_containerdummy = createVehicle ["Land_Cargo20_blue_F", [3450.7363, 16708.432, 90], [], 0, "CAN_COLLIDE"];
_containerdummy attachTo [_heli1,[0,0,-3.5]];
_containerdummy setDir 90;


while { _dest distance2D _heli1 > 450 } do { "airbox_marker" setMarkerPos getPos _heli1; sleep 1; };
[4,""] remoteExec ["LIGACL_fnc_ligaNews",-2];


deleteVehicle _containerdummy;
sleep 0.1;
_container = createVehicle ["Land_Cargo20_blue_F", [3450.7363, 16708.432, 90], [], 0, "CAN_COLLIDE"];
_para = createVehicle ["O_Parachute_02_F", [getPos _heli1 select 0, getPos _heli1 select 1, getPos _heli1 select 2], [], 0, ""];
_para setPosATL (_heli1 modelToWorld[0,0,100]);
_para attachTo [_heli1,[0,0,-10]];
detach _para;
_container attachTo [_para,[0,0,-2]];
_container setDir 90;
_smoke="SmokeShellGreen" createVehicle [getpos _container select 0, getpos _container select 1,0];
_smoke attachTo [_container,[0,0,0]];
_light = "Chemlight_green" createVehicle getPos _container;
_light attachTo [_container,[0,0,0]];
_flare = "F_40mm_Green" createVehicle getPos _container;
_flare attachTo [_container,[0,0,0]];
sleep 0.1;
while { (getPos _container select 2) > 2 } do { "airbox_marker" setMarkerPos getPos _container;sleep 1; };
detach _container;
_container setPos [getPos _container select 0, getPos _container select 1, (getPos _container select 2)+0.5];
sleep 6;
"M_NLAW_AT_F" createVehicle [getPos _container select 0, getPos _container select 1, 0];
_pos_container = getPos _container;
deleteVehicle _container;
sleep 0.5;
_box = createVehicle ["CargoNet_01_box_F", _pos_container, [], 0, "CAN_COLLIDE"];
_box allowDamage false;
_smoke="SmokeShellGreen" createVehicle [getpos _box select 0,getpos _box select 1,0];
_flare = "F_40mm_Green" createVehicle getPos _container;
_light attachTo [_box,[0,0,0]];
_flare attachTo [_box,[0,0,0]];


clearWeaponCargoGlobal _box;
clearMagazineCargoGlobal _box;
clearItemCargoGlobal _box;

sleep 0.1;

_loot = getArray(missionConfigFile >> "Airdrop" >> "loot" );
_chan = getNumber(missionConfigFile >> "Airdrop" >> "chacen" );
_ran  = floor random _chan;
{
	if(_ran in (_x select 0)) then {
		_box addWeaponCargoGlobal [_x select 1, _x select 2];
		sleep 0.1;
	};
}forEach _loot;

deleteVehicle _heli1;
deleteVehicle _heli2;
deleteVehicle _heli3;

[3,"<t size='2.6'><t color='#FF0000'>Airdrop-Mission</t></t><br/><br/><img size='5'  image='icons\Lnews\heli.paa'/><br/><br/><t size='1.1'>5 Minuten bis zur Selbstzerstoerung !!!</t>"] remoteExec ["life_fnc_broadcast",-2];
uiSleep 290;
[3,"<t size='2.6'><t color='#FF0000'>Airdrop-Mission</t></t><br/><br/><img size='5' color='#ff0000' image='icons\Lnews\heli.paa'/><br/><br/><t size='1.1'>10 Sekunden bis zur Selbstzerstoerung !!!</t>"] remoteExec ["life_fnc_broadcast",-2];
uiSleep 10;
[3,"<t size='2.6'><t color='#FF0000'>Airdrop-Mission beendet!</t></t><br/><br/><img size='5'  image='icons\Lnews\heli.paa'/><br/><br/><t size='1.1'>Die Airdrop Mission wurde soebend beendet .</t>"] remoteExec ["life_fnc_broadcast",-2];
deleteVehicle _box; 
_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-21,(getPos _box select 1)+21,0];
sleep 1;
_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-1,(getPos _box select 1)+56,0];
sleep 1;
_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+23,(getPos _box select 1)-75,0];
sleep 1;
_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-50,(getPos _box select 1)+1,0];
sleep 1;
_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+87,(getPos _box select 1)-22,0];
sleep 1;
_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+0,(getPos _box select 1)-0,0];
sleep 1;
_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+20,(getPos _box select 1)-20,0];
sleep 1;
_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-100,(getPos _box select 1)+56,0];
sleep 1;
_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+100,(getPos _box select 1)-100,0];
sleep 1;
_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-55,(getPos _box select 1)+123,0];
sleep 1;
_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+577,(getPos _box select 1)-83,0];
sleep 1;
_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+35,(getPos _box select 1)-99,0];
sleep 1;
_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+100,(getPos _box select 1)-100,0];
sleep 1;
_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-431,(getPos _box select 1)-431,0];

"Airdropmarker" setMarkerAlpha 0;
"Airdropmarkertext" setMarkerAlpha 0;

deleteMarker "airbox_marker";
deleteMarker "Airdropmarker";
deleteMarker "Airdropmarkertext";

airdrop_goingon = nil;