/* Author: Hirschi - Die Liga  LIGACL_fnc_woIstFrei */
private ["_helicfg"];
_helivar = [_this,0,"",[""]] call BIS_fnc_param;
if(_helivar isEqualTo "") exitWith {};
{player reveal _x;} foreach (player nearObjects 80);
_pos = (getPos player) call LIGACL_fnc_suchFreiStelle;

if(_pos isEqualTo [0,0,0]) exitWith {hint "Es wurde keine passende Landestelle gefunden.. Bitte suche eine andere Stelle und versuche es erneut.."; [] };	

_helicfg = _helivar call LIGACL_fnc_lookNoTask ;
if(_helicfg isEqualTo []) exitWith {hint ( getText(missionConfigFile >> "LigaTaxen" >> _helivar >> "noFreeMSG") ); [] };

_helicfg pushBack _helivar;

[_pos,_helicfg] remoteExec ['LIGACL_fnc_ConAirFlyTOpad',(_helicfg select 0)]; 

hint ( getText(missionConfigFile >> "LigaTaxen" >> _helivar >> "CallMSG") );

[_pos,_helicfg];