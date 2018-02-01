/* Author: Hirschi - Die Liga */
waitUntil{!isNil "LIGACL_fnc_HeliFailsafe"};
waitUntil{!isNil "LIGACL_fnc_ConAirAction"};
waitUntil{!isNil "LIGACL_fnc_forceLand"};

if(!hasInterface && isDedicated) then {
	//Tax_failsave = [];
	sleep (getNumber(missionConfigFile >> 'LigaTaxen' >> "ServerinitWait"));
};
if(!hasInterface && !isDedicated) then {	
	sleep (getNumber(missionConfigFile >> 'LigaTaxen' >> "HCinitWait"));
};
if(hasInterface) then {
	All_Hellis 		= [];
	Con_air_array 	= [];
};
_Conf_classes = [];
{
	_Conf_classes pushBack (configName _x);
		
} forEach ("true" configClasses (missionConfigFile >> "LigaTaxen"));


{
	private _class = _x;
	{
		private _class_name =(configName _x);
		private _helivar 	= getText(missionConfigFile >> 'LigaTaxen' >> _class >> _class_name >> "Heli_var");
	//	diag_log ( (str _helivar) + (str _class_name) );		
		_helivar = missionNamespace getVariable [_helivar,objNull];	
		if((!isNull _helivar) && (alive _helivar)) then {		
						
			if(!hasInterface && isDedicated) then {
				_helivar setVariable['Home_Pad',(getPos _helivar),true];
				_helivar setVariable['Trunk',(getArray(missionConfigFile >> 'LigaTaxen' >> _class >> _class_name >> "trunk")),true];
			
				_helivar lock (getNumber(missionConfigFile >> 'LigaTaxen' >> _class >> _class_name >> "lock"));
				_helivar setVariable["vehicle_info_owners",(getArray(missionConfigFile >> 'LigaTaxen' >> _class >> _class_name >> "veh_owner")),true]; 
				if((getNumber(missionConfigFile >> 'LigaTaxen' >> _class >> _class_name >> "damageHeli")) isEqualTo 1 ) then {
					_helivar allowDamage true;
				}else{
					_helivar allowDamage false;
				};
				
				{
					if(!isPlayer _x) then {
						if((getNumber(missionConfigFile >> 'LigaTaxen' >> _class >> _class_name >> "damageCrew")) isEqualTo 1 ) then {
							_x allowDamage true;
							_x setDamage 0;
						}else{
							_x allowDamage false;
							_x setDamage 0;
						};
						if!( ( count  (getArray(missionConfigFile >> 'LigaTaxen' >> _class >> _class_name >> "crewTexture")) isEqualTo 0 )) then {
							removeUniform _x;
							_x forceAddUniform ((getArray(missionConfigFile >> 'LigaTaxen' >> _class >> _class_name >> "crewTexture")) select 0 );							

						};
					};
				}forEach (crew _helivar);
				//Tax_failsave pushBack _helivar;
			};
			if(hasInterface ) then {
				player reveal _helivar;
				private _text_cfg = (getArray(missionConfigFile >> 'LigaTaxen' >> _class >> _class_name >> "texture"));
				for [{_i=0}, {_i < (count _text_cfg)}, {_i = _i + 1}] do {
					_helivar setObjectTexture [_i, (_text_cfg select _i)]; 
					
				};
				
				{
					if(!isPlayer _x) then {
						if!( ( count  (getArray(missionConfigFile >> 'LigaTaxen' >> _class >> _class_name >> "crewTexture")) isEqualTo 0 )) then {
							_x setObjectTexture [0,((getArray(missionConfigFile >> 'LigaTaxen' >> _class >> _class_name >> "crewTexture")) select 1 )];
						};
					};
				}forEach (crew _helivar);	
				
				if!( ((_helivar getVariable ['Home_Pad',[15000,15000,0] ]) distance2D (_helivar) ) < 20 )then {
					[_helivar,_class_name,_class] spawn LIGACL_fnc_ConAirAction;
				}else{
					[_helivar,_class_name,_class,false] spawn LIGACL_fnc_ConAirAction;
				};
				
				if( (str(side player)) in  (getArray(missionConfigFile >> 'LigaTaxen' >> _class >> "Keys")) ) then  {
					life_vehicles pushBack _helivar;						
				};
				if(  (getNumber(missionConfigFile >> 'LigaTaxen' >> _class >> _class_name >> "ConAir")) isEqualTo 1 ) then  {
					Con_air_array pushBack _helivar;						
				};	
				
				_helivar lock (getNumber(missionConfigFile >> 'LigaTaxen' >> _class >> _class_name >> "lock"));
				All_Hellis pushBack _helivar;
			};	
			if(life_HC_isActive)then{
				if(!hasInterface && !isDedicated) then {
					_helivar spawn LIGACL_fnc_HeliFailsafe;
					diag_log ( "Heli_init start :" + (str _helivar) );
				};
			}else{
				if(isDedicated) then {
					_helivar spawn LIGACL_fnc_HeliFailsafe;
					diag_log ( "Heli_init start :" + (str _helivar) );
				};
			};
		};					
			
	} forEach ("true" configClasses (missionConfigFile >> "LigaTaxen" >> _x));

}forEach _Conf_classes;