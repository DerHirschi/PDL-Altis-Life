/*
	Author: Hirschi - Die Liga
*/
private["_helivar","_kohle","_action"];
_pos = (getPos player) call LIGACL_fnc_suchFreiStelle;
if(_pos isEqualTo [0,0,0]) exitWith {hint "Es wurde keine passende Landestelle gefunden.. Bitte suche eine andere Stelle und versuche es erneut.."; [] };	

switch(_this) do {
	case 0 :{
		_kohle = (getNumber(missionConfigFile  >> 'LigaTaxen' >> 'Taxipreis'));
		if(life_atmbank < 800000) then {_kohle = 0;};
		_helivar = "LigaTaxi_Air";
		_action = [
			"Heli-Taxi rufen.",
			format["Willst du dir ein Helitaxi fuer %1 $ bestellen ??",_kohle],
			localize "STR_Global_Yes",
			localize "STR_Global_No"
		] call BIS_fnc_guiMessage;
	};
	case 1 :{
		
		_kohle = (getNumber(missionConfigFile  >> 'LigaTaxen' >> 'ALACpreis'));
		if(life_atmbank < 800000) then {_kohle = 0;};
		_helivar = "LigaALAC_Air";
		_action = [
			"ALAC Notdienst rufen.",
			format["Willst du den ALAC Notdienst fuer %1 $ bestellen ??",_kohle],
			localize "STR_Global_Yes",
			localize "STR_Global_No"
		] call BIS_fnc_guiMessage;
	};

};
if(_action) then {

	_temp = [_helivar] call LIGACL_fnc_woIstFrei;
	
	if(_temp isEqualTo [] ) exitWith {};
	_pos  = _temp select 0;
	_heli = (_temp select 1) select 0;
	WaitUntil {		 isEngineOn _heli	};
	WaitUntil {		 !isEngineOn _heli	};
	if(_heli distance _pos < 80) then {
		life_atmbank = life_atmbank - _kohle;
		hint format["Helidienst: Dein Konto wurde soebend mit %1 $ belastet.",_kohle];
	};
};