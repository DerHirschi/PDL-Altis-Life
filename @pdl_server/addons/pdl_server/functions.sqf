#include "script_macros.hpp"
/*
    File: functions.sqf
    Author: Bryan "Tonic" Boardwine

    Description: They are functions.
*/

publicVariable "TON_fnc_terrainSort";

TON_fnc_index =
compileFinal "
    private [""_item"",""_stack""];
    _item = _this select 0;
    _stack = _this select 1;
    _return = -1;

    {
        if (_item in _x) exitWith {
            _return = _forEachIndex;
        };
    } forEach _stack;

    _return;
";

TON_fnc_player_query =
compileFinal "
    private [""_ret""];
    _ret = _this select 0;
    if (isNull _ret) exitWith {};
    if (isNil ""_ret"") exitWith {};

    [life_atmbank,life_cash,owner player,player,profileNameSteam,getPlayerUID player,(side player)] remoteExecCall [""life_fnc_adminInfo"",_ret];
";
publicVariable "TON_fnc_player_query";
publicVariable "TON_fnc_index";

TON_fnc_isnumber =
compileFinal "
    private [""_valid"",""_array""];
    _valid = [""0"",""1"",""2"",""3"",""4"",""5"",""6"",""7"",""8"",""9""];
    _array = [_this select 0] call KRON_StrToArray;
    _return = true;

    {
        if (!(_x in _valid)) exitWith {
            _return = false;
        };
    } forEach _array;
    _return;
";

publicVariable "TON_fnc_isnumber";

TON_fnc_clientGangKick =
compileFinal "
    private [""_unit"",""_group""];
    _unit = _this select 0;
    _group = _this select 1;
    if (isNil ""_unit"" || isNil ""_group"") exitWith {};
    if (player isEqualTo _unit && (group player) == _group) then {
        life_my_gang = objNull;
        [player] joinSilent (createGroup civilian);
        hint localize ""STR_GNOTF_KickOutGang"";
    };
";

publicVariable "TON_fnc_clientGangKick";

TON_fnc_clientGetKey =
compileFinal "
    private [""_vehicle"",""_unit"",""_giver""];
    _vehicle = _this select 0;
    _unit = _this select 1;
    _giver = _this select 2;
    if (isNil ""_unit"" || isNil ""_giver"") exitWith {};
    if (player isEqualTo _unit && !(_vehicle in life_vehicles)) then {
        _name = getText(configFile >> ""CfgVehicles"" >> (typeOf _vehicle) >> ""displayName"");
        hint format [localize ""STR_NOTF_gaveKeysFrom"",_giver,_name];
        life_vehicles pushBack _vehicle;
        [getPlayerUID player,(side player),_vehicle,1] remoteExecCall [""TON_fnc_keyManagement"",2];
    };
";

publicVariable "TON_fnc_clientGetKey";

TON_fnc_clientGangLeader =
compileFinal "
    private [""_unit"",""_group""];
    _unit = _this select 0;
    _group = _this select 1;
    if (isNil ""_unit"" || isNil ""_group"") exitWith {};
    if (player isEqualTo _unit && (group player) == _group) then {
        player setRank ""COLONEL"";
        _group selectLeader _unit;
        hint localize ""STR_GNOTF_GaveTransfer"";
    };
";

publicVariable "TON_fnc_clientGangLeader";

TON_fnc_clientGangLeft =
compileFinal "
    private [""_unit"",""_group""];
    _unit = _this select 0;
    _group = _this select 1;
    if (isNil ""_unit"" || isNil ""_group"") exitWith {};
    if (player isEqualTo _unit && (group player) == _group) then {
        life_my_gang = objNull;
        [player] joinSilent (createGroup civilian);
        hint localize ""STR_GNOTF_LeaveGang"";
    };
";

publicVariable "TON_fnc_clientGangLeft";

//Cell Phone Messaging
/*
    -fnc_cell_textmsg
    -fnc_cell_textcop
    -fnc_cell_textadmin
    -fnc_cell_adminmsg
    -fnc_cell_adminmsgall
*/

//To EMS
TON_fnc_cell_emsrequest =
compileFinal "
private [""_msg"",""_to""];
    ctrlShow[3022,false];
    _msg = ctrlText 3003;
    _length = count (toArray(_msg));
    if (_length > 400) exitWith {hint localize ""STR_CELLMSG_LIMITEXCEEDED"";ctrlShow[3022,true];};
    _to = ""EMS Units"";
    if (_msg isEqualTo """") exitWith {hint localize ""STR_CELLMSG_EnterMSG"";ctrlShow[3022,true];};

    [_msg,name player,5,mapGridPosition player,player] remoteExecCall [""TON_fnc_clientMessage"",independent];
    [] call life_fnc_cellphone;
    hint format [localize ""STR_CELLMSG_ToEMS"",_to,_msg];
    ctrlShow[3022,true];
";
//To One Person
TON_fnc_cell_textmsg =
compileFinal "
    private [""_msg"",""_to""];
    ctrlShow[3015,false];
    _msg = ctrlText 3003;

    _length = count (toArray(_msg));
    if (_length > 400) exitWith {hint localize ""STR_CELLMSG_LIMITEXCEEDED"";ctrlShow[3015,true];};
    if (lbCurSel 3004 isEqualTo -1) exitWith {hint localize ""STR_CELLMSG_SelectPerson""; ctrlShow[3015,true];};

    _to = call compile format [""%1"",(lbData[3004,(lbCurSel 3004)])];
    if (isNull _to) exitWith {ctrlShow[3015,true];};
    if (isNil ""_to"") exitWith {ctrlShow[3015,true];};
    if (_msg isEqualTo """") exitWith {hint localize ""STR_CELLMSG_EnterMSG"";ctrlShow[3015,true];};

    [_msg,name player,0] remoteExecCall [""TON_fnc_clientMessage"",_to];
    [] call life_fnc_cellphone;
    hint format [localize ""STR_CELLMSG_ToPerson"",name _to,_msg];
    ctrlShow[3015,true];
";
//To All Cops
TON_fnc_cell_textcop =
compileFinal "
    private [""_msg"",""_to""];
    ctrlShow[3016,false];
    _msg = ctrlText 3003;
    _to = ""The Police"";

    if (_msg isEqualTo """") exitWith {hint localize ""STR_CELLMSG_EnterMSG"";ctrlShow[3016,true];};
    _length = count (toArray(_msg));
    if (_length > 400) exitWith {hint localize ""STR_CELLMSG_LIMITEXCEEDED"";ctrlShow[3016,true];};

    [_msg,name player,1,mapGridPosition player,player] remoteExecCall [""TON_fnc_clientMessage"",-2];
    [] call life_fnc_cellphone;
    hint format [localize ""STR_CELLMSG_ToPerson"",_to,_msg];
    ctrlShow[3016,true];
";
//To All Admins
TON_fnc_cell_textadmin =
compileFinal "
    private [""_msg"",""_to"",""_from""];
    ctrlShow[3017,false];
    _msg = ctrlText 3003;
    _to = ""The Admins"";

    if (_msg isEqualTo """") exitWith {hint localize ""STR_CELLMSG_EnterMSG"";ctrlShow[3017,true];};
    _length = count (toArray(_msg));
    if (_length > 400) exitWith {hint localize ""STR_CELLMSG_LIMITEXCEEDED"";ctrlShow[3017,true];};

    [_msg,name player,2,mapGridPosition player,player] remoteExecCall [""TON_fnc_clientMessage"",-2];
    [] call life_fnc_cellphone;
    hint format [localize ""STR_CELLMSG_ToPerson"",_to,_msg];
    ctrlShow[3017,true];
";
//Admin To One Person
TON_fnc_cell_adminmsg =
compileFinal "
    if (isServer) exitWith {};
    if ((call life_adminlevel) < 1) exitWith {hint localize ""STR_CELLMSG_NoAdmin"";};
    private [""_msg"",""_to""];
    ctrlShow[3020,false];
    _msg = ctrlText 3003;
    _to = call compile format [""%1"",(lbData[3004,(lbCurSel 3004)])];
    if (isNull _to) exitWith {ctrlShow[3020,true];};
    if (isNil ""_to"") exitWith {ctrlShow[3020,true];};
    if (_msg isEqualTo """") exitWith {hint localize ""STR_CELLMSG_EnterMSG"";ctrlShow[3020,true];};

    [_msg,name player,3] remoteExecCall [""TON_fnc_clientMessage"",_to];
    [] call life_fnc_cellphone;
    hint format [localize ""STR_CELLMSG_AdminToPerson"",name _to,_msg];
    ctrlShow[3020,true];
";

TON_fnc_cell_adminmsgall =
compileFinal "
    if (isServer) exitWith {};
    if ((call life_adminlevel) < 1) exitWith {hint localize ""STR_CELLMSG_NoAdmin"";};
    private [""_msg"",""_from""];
    ctrlShow[3021,false];
    _msg = ctrlText 3003;
    if (_msg isEqualTo """") exitWith {hint localize ""STR_CELLMSG_EnterMSG"";ctrlShow[3021,true];};

    [_msg,name player,4] remoteExecCall [""TON_fnc_clientMessage"",-2];
    [] call life_fnc_cellphone;
    hint format [localize ""STR_CELLMSG_AdminToAll"",_msg];
    ctrlShow[3021,true];
";

publicVariable "TON_fnc_cell_textmsg";
publicVariable "TON_fnc_cell_textcop";
publicVariable "TON_fnc_cell_textadmin";
publicVariable "TON_fnc_cell_adminmsg";
publicVariable "TON_fnc_cell_adminmsgall";
publicVariable "TON_fnc_cell_emsrequest";
//Client Message
/*
    0 = private message
    1 = police message
    2 = message to admin
    3 = message from admin
    4 = admin message to all
*/
TON_fnc_clientMessage =
compileFinal "
    if (isServer) exitWith {};
    private [""_msg"",""_from"", ""_type""];
    _msg = _this select 0;
    _from = _this select 1;
    _type = _this select 2;
    if (_from isEqualTo """") exitWith {};
    switch (_type) do {
        case 0 : {
            private [""_message""];
            _message = format ["">>>MESSAGE FROM %1: %2"",_from,_msg];
            hint parseText format [""<t color='#FFCC00'><t size='2'><t align='center'>New Message<br/><br/><t color='#33CC33'><t align='left'><t size='1'>To: <t color='#ffffff'>You<br/><t color='#33CC33'>From: <t color='#ffffff'>%1<br/><br/><t color='#33CC33'>Message:<br/><t color='#ffffff'>%2"",_from,_msg];

            [""TextMessage"",[format [""You Received A New Private Message From %1"",_from]]] call bis_fnc_showNotification;
            systemChat _message;
        };

        case 1 : {
            if (side player != west) exitWith {};
            private [""_message"",""_loc"",""_unit""];
            _loc = _this select 3;
            _unit = _this select 4;
            _message = format [""--- 911 DISPATCH FROM %1: %2"",_from,_msg];
            if (isNil ""_loc"") then {_loc = ""Unknown"";};
            hint parseText format [""<t color='#316dff'><t size='2'><t align='center'>New Dispatch<br/><br/><t color='#33CC33'><t align='left'><t size='1'>To: <t color='#ffffff'>All Officers<br/><t color='#33CC33'>From: <t color='#ffffff'>%1<br/><t color='#33CC33'>Coords: <t color='#ffffff'>%2<br/><br/><t color='#33CC33'>Message:<br/><t color='#ffffff'>%3"",_from,_loc,_msg];

            [""PoliceDispatch"",[format [""A New Police Report From: %1"",_from]]] call bis_fnc_showNotification;
            systemChat _message;
        };

        case 2 : {
            if ((call life_adminlevel) < 1) exitWith {};
            private [""_message"",""_loc"",""_unit""];
            _loc = _this select 3;
            _unit = _this select 4;
            _message = format [""!!! ADMIN REQUEST FROM %1: %2"",_from,_msg];
            if (isNil ""_loc"") then {_loc = ""Unknown"";};
            hint parseText format [""<t color='#ffcefe'><t size='2'><t align='center'>Admin Request<br/><br/><t color='#33CC33'><t align='left'><t size='1'>To: <t color='#ffffff'>Admins<br/><t color='#33CC33'>From: <t color='#ffffff'>%1<br/><t color='#33CC33'>Coords: <t color='#ffffff'>%2<br/><br/><t color='#33CC33'>Message:<br/><t color='#ffffff'>%3"",_from,_loc,_msg];

            [""AdminDispatch"",[format [""%1 Has Requested An Admin!"",_from]]] call bis_fnc_showNotification;
            systemChat _message;
        };

        case 3 : {
            private [""_message""];
            _message = format [""!!! ADMIN MESSAGE: %1"",_msg];
            _admin = format [""Sent by admin: %1"", _from];
            hint parseText format [""<t color='#FF0000'><t size='2'><t align='center'>Admin Message<br/><br/><t color='#33CC33'><t align='left'><t size='1'>To: <t color='#ffffff'>You<br/><t color='#33CC33'>From: <t color='#ffffff'>An Admin<br/><br/><t color='#33CC33'>Message:<br/><t color='#ffffff'>%1"",_msg];

            [""AdminMessage"",[""You Have Received A Message From An Admin!""]] call bis_fnc_showNotification;
            systemChat _message;
            if ((call life_adminlevel) > 0) then {systemChat _admin;};
        };

        case 4 : {
            private [""_message"",""_admin""];
            _message = format [""!!!ADMIN MESSAGE: %1"",_msg];
            _admin = format [""Sent by admin: %1"", _from];
            hint parseText format [""<t color='#FF0000'><t size='2'><t align='center'>Admin Message<br/><br/><t color='#33CC33'><t align='left'><t size='1'>To: <t color='#ffffff'>All Players<br/><t color='#33CC33'>From: <t color='#ffffff'>The Admins<br/><br/><t color='#33CC33'>Message:<br/><t color='#ffffff'>%1"",_msg];

            [""AdminMessage"",[""You Have Received A Message From An Admin!""]] call bis_fnc_showNotification;
            systemChat _message;
            if ((call life_adminlevel) > 0) then {systemChat _admin;};
        };

        case 5: {
            if (side player != independent) exitWith {};
            private [""_message"",""_loc"",""_unit""];
            _loc = _this select 3;
            _unit = _this select 4;
            _message = format [""!!! EMS REQUEST: %1"",_msg];
            hint parseText format [""<t color='#FFCC00'><t size='2'><t align='center'>EMS Request<br/><br/><t color='#33CC33'><t align='left'><t size='1'>To: <t color='#ffffff'>You<br/><t color='#33CC33'>From: <t color='#ffffff'>%1<br/><t color='#33CC33'>Coords: <t color='#ffffff'>%2<br/><br/><t color='#33CC33'>Message:<br/><t color='#ffffff'>%3"",_from,_loc,_msg];

            [""TextMessage"",[format [""EMS Request from %1"",_from]]] call bis_fnc_showNotification;
        };
    };
";
publicVariable "TON_fnc_clientMessage";



/*	Author: Hirschi - Die Liga .. Vorlage: R3F_Team - Altis Life RPG 5.0 */

LIGACL_fnc_suchFreiStelle = compileFinal "

	private ['_offset','_radius',  '_position_degagee','_i','_a','_xsin','_ysin'];
		
	_rasterradius 	= getNumber(missionConfigFile >> 'LigaTaxen' >> 'searchraster');
	_radius 		= getNumber(missionConfigFile >> 'LigaTaxen' >> 'searchrange');
	_freeradius 	= getNumber(missionConfigFile >> 'LigaTaxen' >> 'freeRadius');
	{player reveal _x;} foreach (player nearObjects _radius);
	
	_radius 		= ((_radius / 2) / _rasterradius );	
	
	_offset = if (count _this > 0) then {_this } else {[0,0,0]};	
	if(_offset isEqualTo [0,0,0]) exitWith {[0,0,0]};
	
	if((count ((nearestObjects[_offset,['All'],_freeradius] ) - playableUnits) ) isEqualTo 0) exitWith {_offset;};
	_temp = (nearestObjects[_offset,[	
		'Land_HelipadCircle_F',
		'Land_HelipadCivil_F',
		'Land_HelipadEmpty_F',
		'Land_HelipadRescue_F',
		'Land_HelipadSquare_F'
	],(_rasterradius * _radius)] );
	if!((count _temp  ) isEqualTo 0) exitWith {getPos (_temp select 0);};
	
	_position_degagee = _offset;	
			
	for [{_a=0 * _rasterradius }, {(_a > -_radius * _rasterradius - 1) && !(((count ((nearestObjects[_position_degagee,['All'],_freeradius] ) - playableUnits + ( nearestTerrainObjects [_position_degagee, [], _freeradius] )  ) ) isEqualTo 0) ) }, {_a = _a - _rasterradius}] do {
		for [{_i= 0 * _rasterradius }, {(_i < _radius * _rasterradius + 1 ) && !(((count ((nearestObjects[_position_degagee,['All'],_freeradius] ) - playableUnits + ( nearestTerrainObjects [_position_degagee, [], _freeradius] ) ) ) isEqualTo 0) ) }, {_i = _i + _rasterradius}] do {
			for [{_si=0 }, {(_si < 4 ) && !(((count ((nearestObjects[_position_degagee,['All'],_freeradius] ) - playableUnits + ( nearestTerrainObjects [_position_degagee, [], _freeradius] )) ) isEqualTo 0) ) }, {_si = _si + 1}] do {

				_position_degagee = _offset;
				switch (_si) do {
					case 0: {		
						_xsin = _i;
						_ysin = _a;
					};
					case 1: {		
						_xsin = _i * -1;
						_ysin = _a;
					};
					case 2: {		
						_xsin = _i;
						_ysin = _a * -1;
					};				
					case 3: {		
						_xsin = _i * -1;
						_ysin = _a * -1;
					};
				};	
				_position_degagee = [ _xsin,   _ysin,	0] vectorAdd _offset;
			};				
		};	
	};
	if!((count ((nearestObjects[_position_degagee,['All'],_freeradius] ) - playableUnits + ( nearestTerrainObjects [_position_degagee, [], _freeradius] ) ) ) isEqualTo 0) exitWith {[0,0,0];};
	_position_degagee
";

publicVariable "LIGACL_fnc_suchFreiStelle";

LIGACL_fnc_lookNoTask = compileFinal "
	private['_testHeli','_ret','_dist'];
	_helivar = [_this,0,'',['']] call BIS_fnc_param;
	if(_helivar isEqualTo '') exitWith {[]};
	_ret = [];
	_testHeli = '';
	_dist = 15000;	
	{			
		_testHeli = (getText(missionConfigFile >> 'LigaTaxen' >> _helivar >> (configName _x) >> 'Heli_var' ));
		_testHeli = missionNamespace getVariable [_testHeli,objNull];
				
		if!(isNull _testHeli)then {
			if(alive _testHeli && !isEngineOn _testHeli && !(_testHeli getVariable ['hasTask',false])) then {
				if( (_testHeli distance2D player) < _dist ) then {
					_dist = _testHeli distance2D player;
					_ret = [_testHeli,configName _x];
				};
			};									
		};						
	} forEach ('true' configClasses (missionConfigFile >> 'LigaTaxen' >> _helivar ));	

	_ret
";	
publicVariable "LIGACL_fnc_lookNoTask";	


LIGACL_fnc_ConAirAction = compileFinal "
	
	_heli		= [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
	_cfgName	= [_this,1,'',['']] call BIS_fnc_param;
	_cfgEnt 	= [_this,2,'',['']] call BIS_fnc_param;
	_oneWay	 	= [_this,3,true,[false]] call BIS_fnc_param;
	if( isNull _heli || !alive _heli || _cfgName isEqualTo '' || _cfgEnt isEqualTo '' ) exitWith {};

	_helivar	= getText(missionConfigFile >> 'LigaTaxen' >> _cfgEnt >> _cfgName >> 'Heli_var');
	_str = '';

	{		
		_str 	= _str + format [' %3 addAction[ %1 ,  { [ %2 , [ %3, %5, %6 ] , true ] remoteExec [''LIGACL_fnc_ConAirFlyTOpad'',(_this select 0) ];	} ,'''',0,false,false,'''','' %4 && (((_target  getVariable [''''Home_Pad'''',[15000,15000,0] ]) distance2D (_target) ) <= 20)  ''	];',str (_x select 0), (_x select 1) , _helivar, (_x select 2), str _cfgName, str _cfgEnt];
	}forEach ( getArray(missionConfigFile >> 'LigaTaxen' >> _cfgEnt >> 'ZielPads') );
	
	{		
		_str 	= _str + format [' %3 addAction[ %1 ,  { [ %2 , [ %3, %5, %6 ] , false ] remoteExec [''LIGACL_fnc_ConAirFlyTOpad'',(_this select 0) ];	} ,'''',0,false,false,'''','' %4 && (((_target  getVariable [''''Home_Pad'''',[15000,15000,0] ]) distance2D (_target) ) > 20) ''	];',str (_x select 0), (_x select 1) , _helivar, (_x select 2), str _cfgName, str _cfgEnt];
	}forEach ( getArray(missionConfigFile >> 'LigaTaxen' >> _cfgEnt >> 'ZielPads') );

	{		
		_str 	= _str + format [' %3 addAction[ %1 ,  { [ %2 , [ %3, %5, %6 ] , true ] remoteExec [''LIGACL_fnc_ConAirFlyTOpad'',(_this select 0) ];	} ,'''',0,false,false,'''','' %4 && (((_target  getVariable [''''Home_Pad'''',[15000,15000,0] ]) distance2D (_target) ) <= 20)	'' ];',str (_x select 0), (_x select 1) , _helivar , (_x select 2), str _cfgName, str _cfgEnt];
	}forEach ( getArray(missionConfigFile >> 'LigaTaxen' >> _cfgEnt >> _cfgName >> 'ZielPads') );
	
	{		
		_str 	= _str + format [' %3 addAction[ %1 ,  { [ %2 , [ %3, %5, %6 ] , false ] remoteExec [''LIGACL_fnc_ConAirFlyTOpad'',(_this select 0) ];	} ,'''',0,false,false,'''','' %4 && (((_target  getVariable [''''Home_Pad'''',[15000,15000,0] ]) distance2D (_target) ) > 20)	'' ];',str (_x select 0), (_x select 1) , _helivar , (_x select 2), str _cfgName, str _cfgEnt];
	}forEach ( getArray(missionConfigFile >> 'LigaTaxen' >> _cfgEnt >> _cfgName >> 'ZielPads') );
	
	if( (getNumber(missionConfigFile >> 'LigaTaxen' >> _cfgEnt >> _cfgName >> 'ConAir')  ) isEqualTo 1 ) then {
		_temp	= ( getArray(missionConfigFile >> 'LigaTaxen' >> 'LigaCon_Air' >> 'ZusatzTransport') );
		_str 	= _str + format [' %3 addAction[ %1 ,  { [ %2 , [ %3, %5, %6 ] , false ] remoteExec [''LIGACL_fnc_ConAirFlyTOpad'',(_this select 0) ]; hint ''Der / Die Gefangene(n) werden jetzt in abtransportiert.'';	} ,'''',0,false,false,'''','' (side player) isEqualTo WEST ''		];' ,str (_temp select 0), (_temp select 1), _helivar, (_temp select 2), str _cfgName, str _cfgEnt  ];
	};
	
	{		
		if!(_x isEqualTo '') then {
			_str 	= _str + format[' %1 %2 ',_helivar, _x];
		};
	}forEach ( getArray(missionConfigFile >> 'LigaTaxen' >> _cfgEnt >> _cfgName >> 'extraActions') );
	
	call compile _str;	
";	
publicVariable "LIGACL_fnc_ConAirAction";	

LIGACL_fnc_ConAirFlyTOpad = compileFinal "
	private['_mark'];
	_pos		= [_this,0,[],[[]]] call BIS_fnc_param;
	_cfg 		= [_this,1,[],[[]]] call BIS_fnc_param;
	_backTrig 	= [_this,2,true,[false]] call BIS_fnc_param;
	if(	_pos isEqualTo [] || _cfg isEqualTo [] )	exitWith {};
	_heli 		= _cfg select 0;
	if(	isNull _heli || !alive _heli  ) 				exitWith {};
	waitUntil{		!(_heli getVariable ['hasTask',false]) && !isEngineOn _heli };
	_heli setVariable ['hasTask',true,true];
	_heli engineOn true;
	_cfgHighEnt = _cfg select 2;
	_cfgName	= _cfg select 1;
	_radius 	= getNumber(missionConfigFile >> 'LigaTaxen' >> 'freeRadius') ;
	
	_high 	= getNumber(missionConfigFile  >> 'LigaTaxen' >> _cfgHighEnt >> _cfgName >> 'FlyHigh');
	_t 		= false;	
	
	private _targ_pad = nearestObjects[_pos,[
		'Land_HelipadCircle_F',
		'Land_HelipadCivil_F',
		'Land_HelipadEmpty_F',
		'Land_HelipadRescue_F',
		'Land_HelipadSquare_F'
	],_radius];
	_mark_obj = getText(missionConfigFile  >> 'LigaTaxen' >> _cfgHighEnt >> 'MarkerRauch');
	if(count _targ_pad isEqualTo 0) then { 
		_targ_pad 	= 'Land_HelipadEmpty_F' createVehicle _pos;
		[_pos,_mark_obj,_heli] spawn {
			_heli = _this select 2;
			waitUntil{isEngineOn _heli};
			while{isEngineOn _heli && alive _heli} do {			
				_mark 		= (_this select 1) createVehicle (_this select 0);
				waitUntil{sleep 1; isNull _mark};
			};
		};		
		_t 			= true;
	}else {
		_targ_pad 	= _targ_pad select 0;		
	};

	_heli reveal _targ_pad;

	_heli flyinheight _high; 
	_heli setFuel 1;
	_heli setDamage 0;
	{
		if(!isPlayer _x) then { _x setDamage 0;	};
	}forEach (crew _heli);
	
	_heli setCollisionLight true;

	sleep 13;
	_tr = false ;
	_temp = [];
	
	if( (getNumber(missionConfigFile  >> 'LigaTaxen' >> _cfgHighEnt >> _cfgName >> 'ConAir')) isEqualTo 1 ) then {
		private _targ_man = nearestObjects[(getPos _heli),['Man'],12];

		_temp = [];
		{
			if(_x getVariable['restrained',false]) then { _temp pushBack _x; };
			
		}forEach _targ_man;
		_heli lock 0;
		{		
			[_heli] remoteExecCall ['life_fnc_moveIn',_x];
		}forEach _temp;		
		_heli lock 2;
	};
	sleep 7;
	_heli lock 2;
	_heli animateDoor ['door_back_R',0];
	_heli animateDoor ['door_back_L',0];
	

	_heli move getPos _targ_pad;
	_heli setCollisionLight true;
	sleep 20;
	waitUntil{sleep 1; (_heli  distance _targ_pad) < 480 || !isEngineOn _heli};
	if(isNil '_mark')then{_mark = objNull ; };
	if(isEngineOn _heli) then {
		
		waitUntil{	 (_heli  distance2D _targ_pad) < 150 	};
		if!((count (nearestObjects[_pos,['All'],5] - playableUnits - [_targ_pad,_mark] ) isEqualTo 0)) then {
			diag_log '_n = 10 !!!!!!!!!';
			if(	(count (nearestObjects[_pos,['Land_HelipadCircle_F','Land_HelipadCivil_F','Land_HelipadEmpty_F','Land_HelipadRescue_F','Land_HelipadSquare_F'],500]	- [_targ_pad,_mark])) isEqualTo 0 ) then {
				deleteVehicle _targ_pad;
				_homePos = _heli getVariable ['Home_Pad',[15000,15000,0]];
				_heli move _homePos;
				waitUntil{sleep 1; (_heli  distance _homePos) < 350 || !isEngineOn _heli};
				_homeland = nearestObjects[getPos _heli,['Land_HelipadCircle_F','Land_HelipadCivil_F','Land_HelipadEmpty_F','Land_HelipadRescue_F','Land_HelipadSquare_F'],500] select 0;
				_heli land (str _homeland);
			}else{			
				_heli land 'LAND'; 
				diag_log 'LAND';
			};
		}else{
			_heli land (str _targ_pad);
			diag_log 'LAND STR';
		};	
		
		waitUntil{!(isEngineOn _heli )};
	};

	_heli animateDoor ['door_back_R',1];
	_heli animateDoor ['door_back_L',1];
	_heli lock 0;
	if( (getNumber(missionConfigFile  >> 'LigaTaxen' >> _cfgHighEnt >> _cfgName >> 'ConAir')) isEqualTo 1 ) then {
		if!(isNil '_temp') then {
			{	
				moveOut _x;	
			}forEach _temp;
		};
	};
	if(_t) then {
		
		deleteVehicle _targ_pad;
	};
	_heli setVariable ['hasTask',nil,true];
	if( !( (getNumber(missionConfigFile  >> 'LigaTaxen' >> _cfgHighEnt >> _cfgName >> 'FlyAutoBack')) isEqualTo -1 ) && _backTrig  ) then {

		sleep (getNumber(missionConfigFile  >> 'LigaTaxen' >> _cfgHighEnt >> _cfgName >> 'FlyAutoBack'));
		waitUntil{ !isEngineOn _heli };
		[(_heli getVariable ['Home_Pad',[15000,15000,0]]),_cfg,false] remoteExec ['LIGACL_fnc_ConAirFlyTOpad',_heli]; 
	};
";	
publicVariable 'LIGACL_fnc_ConAirFlyTOpad';	



LIGACL_fnc_HeliFailsafe = compileFinal "
	_heli		= [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
	if(isNull _heli) exitWith {};	
	
	while{!isNull _heli} do {		
		waitUntil{sleep 4; (speed _heli) < 1 && (isEngineOn _heli)};		
		
		_irit 	= 80;
		private _oldPos = getPos _heli;
		private _real_ir = 0;
		sleep 2;
		for [{_i=0}, {
			(_i <= _irit) && (isEngineOn _heli) && ((speed _heli) < 1) && ((_heli distance2D _oldPos) < 4 ) && (((getPos _heli) select 2) > 10)
			
			}, {_i = _i + 1}] do {_oldPos = getPos _heli; sleep 1; _real_ir = _i};

		if((_irit isEqualTo _real_ir) && isEngineOn _heli) then {			
			[_heli,'LAND'] remoteExec ['LIGACL_fnc_forceLand',_heli];
			diag_log ('Taxi_Failsafe LAND forceLAnd:' + (str _heli)  );
			sleep 18;
		};
		sleep 10;
		
	};
";	
publicVariable 'LIGACL_fnc_HeliFailsafe';	

LIGACL_fnc_forceLand = compileFinal "
	_heli		= [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
	_cmd		= [_this,1,'LAND',['']] call BIS_fnc_param;
	if(isNull _heli) exitWith {};	
	_heli land _cmd;
	waitUntil{!isEngineOn _heli};
	_heli setVariable ['hasTask',nil,true];
";	
publicVariable 'LIGACL_fnc_forceLand';
