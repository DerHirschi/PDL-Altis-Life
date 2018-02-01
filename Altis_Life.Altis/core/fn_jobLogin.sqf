#include "..\script_macros.hpp"
/*
	Author: Hirschi - Die Liga
	
	Cop Login
	LIFE_fnc_jobLogin
	Vers: 2.0
*/
private _e = false;
_job = param [0, ""];
if(_job isEqualTo "")exitWith {};
{
	if(missionNamespace getVariable [_x, false])exitWith{hint localize (M_CONFIG(getText,"JobsCFG",_job,"forbiddentext"));_e = true;};
}forEach (M_CONFIG(getArray,"JobsCFG",_job,"licforbidden"));
if(_e)exitWith{};
if!(missionNamespace getVariable [(M_CONFIG(getText,"JobsCFG",_job,"licensneed")), false])exitWith{hint localize "STR_Item_Cop_noCont";};

_side			= call compileFinal (M_CONFIG(getText,"JobsCFG",_job,"side"));
_groupvar 		= M_CONFIG(getText,"JobsCFG",_job,"groupvar");
_levelvar 		= M_CONFIG(getText,"JobsCFG",_job,"levelvar");
_level	 		= missionNamespace getVariable[(M_CONFIG(getText,"JobsCFG",_job,"levelvar")),0];
_onvar 			= missionNamespace getVariable [M_CONFIG(getText,"JobsCFG",_job,"onvar"),false];
		
if!(_onvar) then {
	missionNamespace setVariable [M_CONFIG(getText,"JobsCFG",_job,"onvar"),true];
	if!(isNil _groupvar) then {
		if(isNull (call compileFinal _groupvar)) then {
			missionNamespace setVariable [_groupvar, nil];
			publicVariable _groupvar;
		};
	};
	if(isNil _groupvar)then {
		_group = (createGroup _side);		
		_group deleteGroupWhenEmpty true;
		missionNamespace setVariable [_groupvar, _group];
		publicVariable _groupvar;		
		[player] join (call compileFinal _groupvar);
	}else{
		[player] join (call compileFinal _groupvar);
	};	
	life_paycheck  = getNumber(missionConfigFile >> "JobsCFG" >> _job >> (_levelvar + "_" + (str _level)) >> "paycheck");
	_rank  = getText(missionConfigFile >> "JobsCFG" >> _job >> (_levelvar + "_" + (str _level)) >> "rang");
	
	player setVariable["rank",_rank,true];
	hint parseText format["<t align='center'><t color='#15C30C'><t size='3'>Angemeldet</t></t></t><br/><br/><t size='1.3'><t align='left'>Du hast dich angemeldet. <br/><br/>Ruhige Schicht ...<br/>"];
	[player,false,civilian] remoteExecCall ["TON_fnc_managesc",RSERV];
	[player,true,_side] remoteExecCall ["TON_fnc_managesc",RSERV];
	
}else{
	missionNamespace setVariable [M_CONFIG(getText,"JobsCFG",_job,"onvar"),false];
	hint parseText format["<t align='center'><t color='#E0163B'><t size='3'>Abgemeldet</t></t></t><br/><br/><t size='1.3'><t align='left'>Du hast dich abgemeldet. <br/> <br/>  Schönen Feierabend ...<br/>"];
	if(!(count life_gangData isEqualTo 0)) then {
		_group = createGroup civilian;
		_group deleteGroupWhenEmpty true;
		[player] join _group;
		[] spawn life_fnc_initGang;
	}else{
		[player] join (createGroup civilian);
	};
	life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_civ");
	[player,true,civilian] remoteExecCall ["TON_fnc_managesc",RSERV];
	[player,false,_side] remoteExecCall ["TON_fnc_managesc",RSERV];
	/*TODO: Bos
	{
		[player,false,(_x + 1)] remoteExecCall ["TON_fnc_radio",RSERV];
		liga_bos set [_x,false];
	}forEach [0,1,2,3,4,5,6,7,8];
	*/
};


