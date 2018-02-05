#define true 1
#define false 0
class Schiffswrack {
	
	Positionen[]			= {
		{4462.89,6515.78,-2.19486},
		{5391.75,25136.2,-1.98308},
		{25323.2,27886.6,-2.15125},
		{27923.2,08086.6,-2.15125},
		{02623.2,02686.6,-2.15125},
		{03423.2,28486.6,-2.15125},
		{18423.2,28686.6,-2.15125},
		{29423.2,30086.6,-2.15125},
		{13523.2,10886.6,-2.15125}
	};
	Loot[]					={
		{{"goldbar",18}	},
		{{"goldbar",40}	},
		{{"goldbar",47}	},
		{{"goldbar",58}	},
		{{"goldbar",58}	},
		{{"goldbar",77}	},
		{{"goldbar",78}	},
		{{"goldbar",100}	},
		{{"goldbar",125}	},
		{{"goldbar",125}	},
		{{"goldbar",142}	},
		{{"goldbar",182}	}
	};
	
	TriggerRadius			= 1300;
	MarkerRadius			= 600;
	ZeugMenge				= 7;
	ZeugRadius				= 80;
	ZeugClassNames[]		={		
		"Land_Pallets_F",
		"Land_Cages_F",
		"Land_CratesPlastic_F",
		"Land_CratesWooden_F"
	};
	sleep[]		= {30, 120}; // Von Bis in Minuten

	/*SafeDespawn*/
	coolDownTimer			= 90;//Minute(n) + sleep
	
	bombNoWrackText 		= "Du musst erst das Schiffswrack suchen und die Bombe an dem Safe anbringen.";
	bombWrackOffenText 		= "Das Schiff wurde bereits geoeffnet!";
	bombBoom 				= "Die Sprengladung wurde gezuendet!! Der Laderaum ist jetzt offen !";
	
};

class Airdrop {
	posi[] = {
		{8111.38,22579.8,0.00156784},
		{7255.38,12048.8,0.00156784},
		{11264.38,17903.8,0.00156784},
		{10318.38,7196.8,0.00156784},
		{20073.38,6738.8,0.00156784},
		{24813.38,19270.8,0.00156784},
		{20753.38,13215.8,0.00156784},
		{11568.38,20800.8,0.00156784},
		{4573.38,10907.8,0.00156784},
		{10962.38,11935.8,0.00156784}
	};
	fly_alt 	= 10;
	main_heli 	= "B_Heli_Transport_03_unarmed_F";
	sec_heli 	= "B_Heli_Attack_01_F";
	sleep[]		= {1, 5}; // Von Bis in Minuten
	chacen = 10; // 1:11
	/*{{chacen}, "Clasname", Stk*/
	// Chachen = {} jedes mal mit bei
	loot[] = {
		{{1, 5, 9, 10}, "arifle_MX_SW_Black_F", 2},
		{{1, 2, 10}, "arifle_MX_F", 2},
		{{1, 4, 8}, "srifle_DMR_01_F", 2},
		{{1, 5, 7}, "srifle_EBR_F", 2},
		{{2, 6, 10}, "arifle_Katiba_GL_F", 2},
		{{1, 7, 9}, "LMG_Mk200_F", 2},
		{{1, 8, 9}, "LMG_Zafir_F", 2},
		{{3, 4, 6}, "arifle_TRG21_F", 2},
		{{1, 5, 7}, "srifle_DMR_03_F", 2},
		{{1, 4, 10}, "200Rnd_65x39_cased_Box", 4},
		{{1, 3, 6}, "100Rnd_65x39_caseless_mag", 4},
		{{1, 3, 5}, "20Rnd_762x51_Mag", 8},
		{{1, 5, 10}, "10Rnd_762x54_Mag", 8},
		{{2, 3, 8}, "150Rnd_762x54_Box", 4},
		{{1, 6, 10}, "30Rnd_556x45_Stanag", 10},
		{{1, 3, 9}, "30Rnd_65x39_caseless_mag_Tracer", 10},
		{{}, "SmokeShell", 10},
		{{7,  10}, "optic_NVS", 1},
		{{4, 6, 10}, "optic_SOS", 2},
		{{1, 4, 10}, "optic_Hamr", 2},
		{{1, 5, 10}, "optic_MRCO", 2},
		{{1, 7, 8}, "Rangefinder", 2},
		{{1, 3, 10}, "optic_DMS", 2},
		{{2, 3, 10}, "muzzle_snds_M", 2},
		{{2, 3, 8}, "bipod_01_F_blk", 2},
		{{1, 7, 10}, "muzzle_snds_H", 2},
		{{1, 3, 6}, "muzzle_snds_H_MG", 2},
		{{1, 3, 4}, "HandGrenade_Stone", 5}
	};
};
class LigaTaxen {
/*
	╔══════════════════════════════════════════════════╗
	║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║
	║░░░░░░░█▀▀▀▄░▄░░░░░░░█░░░░▄░░░░░░░░░░░░░░░░░░░░░░░║
	║░░░░░░░█░░░█░░░█▀▀▀░░█░░░░░░░█▀▀▀▀█░█▀▀▀█░░░░░░░░░║
	║░░░░░░░█░░░█░█░█▀▀▀░░█░░░░█░░█░░░░█░█░░░█░░░░░░░░░║
	║░░░░░░░▀▀▀▀░░▀░▀▀▀▀░░▀▀▀▀░▀░░▀▀▀▀▀█░▀▀▀▀█░░░░░░░░░║
	║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄▄▄▄▄█░░░░░░░░░░░░░░░║
	║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║
	╠══════════════════════════════════════════════════╝
	║	File: Liga_Cfg_World.hpp	
	║		
	║	Author:  Hirschi - Die Liga		
	║	
	╠══════════════════════════════════════════════════╗
	║	!!!!!!!!!!! CON_Air !!!!!!!!!!! && Taxen
	╚══════════════════════════════════════════════════╝
*/
	
	/*Grundconfig*/
	
	ServerinitWait	= 90;		// Server-Initverzögerung ( bis Crew im Heli )
	HCinitWait		= 150;		// HC-Initverzögerung ( bis Crew im Heli )
	searchrange 	= 80;		// Suchdurchmesser
	searchraster 	= 4;		// Suchraster
	freeRadius 		= 20;		// Größe der Freifläche
	Taxipreis		= 16000;
	ALACpreis		= 29000;
	
	class LigaTaxi_Air {	// Grundconfig Con - Air

		CallMSG 		= "Ein Helitaxi wurde gerufen ...";
		noFreeMSG 		= "Sorry .. Derzeit kein Helitaxi verfuegbar ...";
		Keys[]			= {};	// Schlüssel an Fraktion verteilen
		ZusatzTransport[] 		= {	"<t color='#DF0101'>!! Gefangenen abtransportieren !!</t>"		, { 17453.2,13203.2,0.001441 } ,	" (side player) isEqualTo WEST && !isEngineOn _target "	};
		MarkerRauch		= "SmokeShellPurple";	

		ZielPads[]		= {
			{	"<t color='#FF4000'>Kavala</t>"					, {3201.04,12890.5,0.00143886}	,	" !isNull objectParent player && !isEngineOn _target"	},		
			{	"<t color='#0040FF'>Pyrgos</t>"					, {16525.1,12557.7,0.00143886}	,	" !isNull objectParent player && !isEngineOn _target"	},
			{	"<t color='#FF0000'>Athira</t>"					, {13998.9,18889.9,0.00146675}	,	" !isNull objectParent player && !isEngineOn _target"	},
			{	"<t color='#74DF00'>Sofia</t>"					, {25859.3,21480.2,0.00136185}	,	" !isNull objectParent player && !isEngineOn _target"	},
			{	"<t color='#CC2EFA'>Altis Int Airport</t>"		, {14668.9,16699.1,0.00143814}	,	" !isNull objectParent player && !isEngineOn _target"	},
			{	"<t color='#CC2EFA'>Molos Airport</t>"			, {26822.5,24591.7,0.00153542}	,	" !isNull objectParent player && !isEngineOn _target"	},
			{	"<t color='#CC2EFA'>Selakano Airbase</t>"		, {20796.2,7226.38,0.00143814}	,	" !isNull objectParent player && lci_reb && !isEngineOn _target"	},
			{	"<t color='#FACC2E'>Rebellen HQ</t>"			, {24149.8,24405.8,0.00139427}	,	" !isNull objectParent player && lci_reb && !isEngineOn _target"	},
			{	"<t color='#FACC2E'>Rebellen OP Nord</t>"		, {4973.14,21831.7,0.00106812}	,	" !isNull objectParent player && lci_reb && !isEngineOn _target"	},
			{	"<t color='#00FF00'>A - Base</t>"				, {20262,8881.65,0.00154495}	,	" !isNull objectParent player && call life_adminlevel > 3 && !isEngineOn _target"	},
			{	"<t color='#FF4000'>Air - HQ</t>"				, {15155.7,17332.1,0.00144196}	,	" !isNull objectParent player && call life_adminlevel > 3 && !isEngineOn _target"	},		
			{	"<t color='#4B0FF0'>LPD - Sofia</t>"			, {23626.9,20037.9,0.00138569}	,	" !isNull objectParent player && call life_adminlevel > 3 && !isEngineOn _target"	},
			{	"<t color='#4B0FF0'>LPD - Pyrgos</t>"			, {17454.8,13206.8,0.00144768}	,	" !isNull objectParent player && call life_adminlevel > 3 && !isEngineOn _target"	}
		};		
		
		
		class LigaTaxi_Air_1 {//Airport
			Heli_var		= "Liga4";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= 50;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= false;			//Gefangenentransport	
		
			texture[]		= {"textures\Taxen\Liga_Taxi_Humm.jpg"};			//Helitexture
			crewTexture[]	= {	};			
		
			damageHeli		= false;
			damageCrew		= false;
			lock			= 0;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","Liga-Taxi"}};	//UID , NAME
			
			trunk[]			= {		{	},0	};
			extraActions[]	= {			};
		};	

		class LigaTaxi_Air_2 {//Airport
			Heli_var		= "Liga3";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= 50;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= false;			//Gefangenentransport	
		
			texture[]		= {"textures\Taxen\Liga_Taxi_Humm.jpg"};			//Helitexture
			crewTexture[]	= {	};			
		
			damageHeli		= false;
			damageCrew		= false;
			lock			= 0;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","Liga-Taxi"}};	//UID , NAME
			
			trunk[]			= {		{	},0	};
			extraActions[]	= {			};
		};	

		class LigaTaxi_Air_3 {//Pyrgos
			Heli_var		= "Liga3_3";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= 50;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= false;			//Gefangenentransport	
		
			texture[]		= {"textures\Taxen\Liga_Taxi_Humm.jpg"};			//Helitexture
			crewTexture[]	= {	};			
		
			damageHeli		= false;
			damageCrew		= false;
			lock			= 0;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","Liga-Taxi"}};	//UID , NAME
			
			trunk[]			= {		{	},0	};
			extraActions[]	= {			};
		};	

		class LigaTaxi_Air_4 {//Sofia
			Heli_var		= "Liga3_2";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= 50;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= false;			//Gefangenentransport	
		
			texture[]		= {"textures\Taxen\Liga_Taxi_Humm.jpg"};			//Helitexture
			crewTexture[]	= {	};			
		
			damageHeli		= false;
			damageCrew		= false;
			lock			= 0;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","Liga-Taxi"}};	//UID , NAME
			
			trunk[]			= {		{	},0	};
			extraActions[]	= {			};
		};	

		class LigaTaxi_Air_5 {//Sofia
			Heli_var		= "Liga3_2";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= 50;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= false;			//Gefangenentransport	
		
			texture[]		= {"textures\Taxen\Liga_Taxi_Humm.jpg"};			//Helitexture
			crewTexture[]	= {	};			
		
			damageHeli		= false;
			damageCrew		= false;
			lock			= 0;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","Liga-Taxi"}};	//UID , NAME
			
			trunk[]			= {		{	},0	};
			extraActions[]	= {			};
		};		

		class LigaTaxi_Air_6 {//Kavala
			Heli_var		= "Liga3_1";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= 50;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= false;			//Gefangenentransport	
		
			texture[]		= {"textures\Taxen\Liga_Taxi_Humm.jpg"};			//Helitexture
			crewTexture[]	= {	};			
		
			damageHeli		= false;
			damageCrew		= false;
			lock			= 0;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","Liga-Taxi"}};	//UID , NAME
			
			trunk[]			= {		{	},0	};
			extraActions[]	= {			};
		};	

		class LigaTaxi_Air_7 {//Rebbel OP Nord
			Heli_var		= "Liga3_4";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= 50;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= false;			//Gefangenentransport	
		
			texture[]		= {"textures\Taxen\Liga_Taxi_Humm.jpg"};			//Helitexture
			crewTexture[]	= {	};			
		
			damageHeli		= false;
			damageCrew		= false;
			lock			= 0;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","Liga-Taxi"}};	//UID , NAME
			
			trunk[]			= {		{	},0	};
			extraActions[]	= {			};
		};	

		class LigaTaxi_Air_8 {//Rebbel HQ
			Heli_var		= "Liga3_5";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= 50;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= false;			//Gefangenentransport	
		
			texture[]		= {"textures\Taxen\Liga_Taxi_Humm.jpg"};			//Helitexture
			crewTexture[]	= {	};			
		
			damageHeli		= false;
			damageCrew		= false;
			lock			= 0;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","Liga-Taxi"}};	//UID , NAME
			
			trunk[]			= {		{	},0	};
			extraActions[]	= {			};
		};			
	
	};	
	
	class LigaALAC_Air {	// Grundconfig Con - Air

		CallMSG 		= "Der ALAC Heli wurde gerufen ...";
		noFreeMSG 		= "Sorry .. Alle ALAC Helis befinden sich derzeit im Einsatz. Versuche es spaeter nocheinmal ...";
		Keys[]			= {"EAST"};	// Schlüssel an Fraktion verteilen
		ZusatzTransport[] 		= {		};
		MarkerRauch		= "SmokeShellYellow";		
		ZielPads[]		= {		};		
		
		
		class LigaALAC_Air_1 {
			Heli_var		= "ALAC_AIR_1";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= 120;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= false;			//Gefangenentransport	
		
			texture[]		= {"textures\Alac\adac_hummingbird.paa"};			//Helitexture
			crewTexture[]	= {	"U_C_WorkerCoveralls" , "textures\Alac\adac_uniform.jpg"};			
		
			damageHeli		= false;
			damageCrew		= false;
			lock			= 2;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","ALAC-BOT"}};	//UID , NAME
			
			trunk[]			= {		{	},0	};
			extraActions[]	= {	
				" addAction['Markt',life_fnc_virt_menu,'market']; "	, 
				" addAction['Zubehör',life_fnc_weaponShopMenu,'genstore']; ",
				" addAction['<t color=''#ADFF2F''>ATM</t>',life_fnc_atmMenu,'',0,false,false,'',' vehicle player isEqualTo player  ']; "
			};
		};	

		class LigaALAC_Air_2 {
			Heli_var		= "ALAC_AIR_2";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= 120;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= false;			//Gefangenentransport	
		
			texture[]		= {"textures\Alac\adac_hummingbird.paa"};			//Helitexture
			crewTexture[]	= {	"U_C_WorkerCoveralls" , "textures\Alac\adac_uniform.jpg"};			
		
			damageHeli		= false;
			damageCrew		= false;
			lock			= 2;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","ALAC-BOT"}};	//UID , NAME
			
			trunk[]			= {		{	},0	};
			extraActions[]	= {	
				" addAction['Markt',life_fnc_virt_menu,'market']; "	, 
				" addAction['Zubehör',life_fnc_weaponShopMenu,'genstore']; ",
				" addAction['<t color=''#ADFF2F''>ATM</t>',life_fnc_atmMenu,'',0,false,false,'',' vehicle player isEqualTo player  ']; "
			};
		};			
		
	
	};

	
	class LigaTaxi_Admin {	// Grundconfig Con - Air

		CallMSG 		= "Ein Helitaxi wurde gerufen ...";
		noFreeMSG 		= "Sorry .. Derzeit kein Helitaxi verfuegbar ...";
		Keys[]			= {};	// Schlüssel an Fraktion verteilen
		ZusatzTransport[] 		= {	"<t color='#DF0101'>!! Gefangenen abtransportieren !!</t>"		, { 17453.2,13203.2,0.001441 } ,	" (side player) isEqualTo WEST "	};
		MarkerRauch		= "SmokeShellGreen";		
		ZielPads[]		= {
			{	"<t color='#FF4000'>Kavala</t>"					, {3201.04,12890.5,0.00143886}	,	" call life_adminlevel > 3 "	},		
			{	"<t color='#0040FF'>Pyrgos</t>"					, {16525.1,12557.7,0.00143886}	,	" call life_adminlevel > 3 "	},
			{	"<t color='#FF0000'>Athira</t>"					, {13998.9,18889.9,0.00146675}	,	" call life_adminlevel > 3 "	},
			{	"<t color='#74DF00'>Sofia</t>"					, {25859.3,21480.2,0.00136185}	,	" call life_adminlevel > 3 "	},
			{	"<t color='#CC2EFA'>Altis Int Airport</t>"		, {14668.9,16699.1,0.00143814}	,	" call life_adminlevel > 3 "	},
			{	"<t color='#CC2EFA'>Molos Airport</t>"			, {26822.5,24591.7,0.00153542}	,	" call life_adminlevel > 3 "	},
			{	"<t color='#CC2EFA'>Selakano Airbase</t>"		, {20796.2,7226.38,0.00143814}	,	" call life_adminlevel > 3 "	},
			{	"<t color='#FACC2E'>Rebellen HQ</t>"			, {24149.8,24405.8,0.00139427}	,	" call life_adminlevel > 3 "	},
			{	"<t color='#FACC2E'>Rebellen OP Nord</t>"		, {4973.14,21831.7,0.00106812}	,	" call life_adminlevel > 3 "	},
			{	"<t color='#00FF00'>A - Base</t>"				, {20262,8881.65,0.00154495}	,	" call life_adminlevel > 3 "	},
			{	"<t color='#FF4000'>Air - HQ</t>"				, {15155.7,17332.1,0.00144196}	,	" call life_adminlevel > 3 "	},		
			{	"<t color='#4B0FF0'>LPD - Sofia</t>"			, {23626.9,20037.9,0.00138569}	,	" call life_adminlevel > 3 "	},
			{	"<t color='#4B0FF0'>LPD - Pyrgos</t>"			, {17454.8,13206.8,0.00144768}	,	" call life_adminlevel > 3 "	}

		
		};		
		
		
		class LigaTaxi_Admin_1 {
			Heli_var		= "Liga3_7";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= 360;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= true;			//Gefangenentransport	
		
			texture[]		= {"textures\Taxen\Liga_Taxi_Humm.jpg"};			//Helitexture
			crewTexture[]	= {	};			
		
			damageHeli		= false;
			damageCrew		= false;
			lock			= 2;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","Admin-Taxi"}};	//UID , NAME
			
			trunk[]			= {		{	},0	};
			extraActions[]	= {		
				" addAction['<t color=''#4B0FF0''>Token Shop</t>',life_fnc_virt_menu,'admin',0,false,false,'',' call life_adminlevel > 2  ']; "	, 
				" addAction['<t color=''#F00FBF''>Admin Waffen Shop</t>',life_fnc_weaponShopMenu,'admin']; ",
				" addAction['<t color=''#F00FBF''>Event Waffen Shop</t>',life_fnc_weaponShopMenu,'token']; ",
				" addAction['<t color=''#ADFF2F''>ATM</t>',life_fnc_atmMenu,'',0,false,false,'',' vehicle player isEqualTo player  ']; "

			};
		};			
	
	};
	
	class LigaCon_Air {	// Grundconfig Con - Air

		CallMSG 		= "Con - Air wurde gerufen ...";
		noFreeMSG 		= "Sorry .. Derzeit kein Con - Air verfuegbar ...";
		Keys[]			= {"WEST"};	// Schlüssel an Fraktion verteilen
		ZusatzTransport[] 		= {	"<t color='#DF0101'>!! Gefangenen abtransportieren !!</t>"		, { 17453.2,13203.2,0.001441 } ,	" (side player) isEqualTo WEST && !isEngineOn _target"	};
		MarkerRauch		= "SmokeShellBlue";		
		ZielPads[]		= {
			{	"<t color='#FF4000'>Air - HQ</t>"		, {15155.7,17332.1,0.00144196}	,	" (side player) isEqualTo WEST && !isEngineOn _target"	},		
			{	"<t color='#4B0FF0'>LPD - Sofia</t>"	, {23626.9,20037.9,0.00138569}	,	" (side player) isEqualTo WEST && !isEngineOn _target"	},
			{	"<t color='#4B0FF0'>LPD - Pyrgos</t>"	, {17454.8,13206.8,0.00144768}	,	" (side player) isEqualTo WEST && !isEngineOn _target"	},
			{	"<t color='#F00FBF'>Kavala</t>"			, {3200.75,12891.1,0.00143886}	,	" (side player) isEqualTo WEST && !isEngineOn _target"	},
			{	"<t color='#F00FBF'>Pyrgos</t>"			, {16525.3,12558,0.00143886}	,	" (side player) isEqualTo WEST && !isEngineOn _target"	},
			{	"<t color='#F00FBF'>Sofia</t>"			, {25859.7,21480.4,0.00134087}	,	" (side player) isEqualTo WEST && !isEngineOn _target"	},
			{	"<t color='#F00FBF'>Athira</t>"			, {13997.4,18890.3,0.0015049}	,	" (side player) isEqualTo WEST && !isEngineOn _target"	},
			{	"<t color='#FF4000'>Flughafen</t>"		, {14620.3,16748.8,0.00143814}	,	" (side player) isEqualTo WEST && !isEngineOn _target"	},
			{	"<t color='#FF4000'>AirBase - Molos</t>", {26822,24592.2,0.00156975}	,	" (side player) isEqualTo WEST && !isEngineOn _target"	}
		};		
		
		
		class LigaCon_Air_1 {
			Heli_var		= "con_air";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= -1;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= true;			//Gefangenentransport	
		
			texture[]		= {
				"textures\Polizei\Fahrzeug\mohowk_cop1.jpg",
				"textures\Polizei\Fahrzeug\mohowk_cop2.paa",
				"textures\Polizei\Fahrzeug\mohowk_cop3.paa"
			};			//Helitexture
			crewTexture[]	= {	"U_Competitor","textures\Polizei\Kleidung\PM_PHM_shirt.jpg"	};			
		
			damageHeli		= true;
			damageCrew		= true;
			lock			= 3;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","L.P.D."}};	//UID , NAME
			
			trunk[]			= {
				{
					{"fuelF",4},
					{"fireWo",1},
					{"mauer",15},
					{"strahler",8},
					{"14",1},
					{"b22",2},
					{"kegel",12},
					{"spikeStrip",10},
					{"lockpick",6},
					{"donuts",4},
					{"coffee",4},
					{"gpstracker",1}
				},200
			};
			extraActions[]	= {	
				" addAction['<t color=''#FF0000''>Sperren</t>',{	(_this select 0) setVariable['hasTask',true,true];	},'',0,false,false,'',' (side player) isEqualTo WEST && !( _target getVariable[''hasTask'',false] )  ']; "	,	
				" addAction['<t color=''#ADFF2F''>Freigeben</t>',{	(_this select 0) setVariable['hasTask',nil,true];	},'',0,false,false,'',' (side player) isEqualTo WEST && ( _target getVariable[''hasTask'',false] ) ']; "	
			};
		};	
	/*
		class LigaCon_Air_2 {
			Heli_var		= "con_air_1";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= -1;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= true;			//Gefangenentransport	
		
			texture[]		= {
				"textures\Polizei\Fahrzeug\mohowk_cop1.jpg",
				"textures\Polizei\Fahrzeug\mohowk_cop2.paa",
				"textures\Polizei\Fahrzeug\mohowk_cop3.paa"
			};			//Helitexture
			crewTexture[]	= {	"U_Competitor","textures\Polizei\Kleidung\PM_PHM_shirt.jpg"	};			
		
			damageHeli		= true;
			damageCrew		= true;
			lock			= 3;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","L.P.D."}};	//UID , NAME
			
			trunk[]			= {
				{
					{"fuelF",4},
					{"fireWo",1},
					{"mauer",15},
					{"strahler",8},
					{"14",1},
					{"b22",2},
					{"kegel",12},
					{"spikeStrip",10},
					{"lockpick",6},
					{"donuts",4},
					{"coffee",4},
					{"gpstracker",1}
				},200
			};
			extraActions[]	= {	
				" addAction['<t color=''#FF0000''>Sperren</t>',{	(_this select 0) setVariable['hasTask',true,true];	},'',0,false,false,'',' side player isEqualTo WEST && !( _target getVariable[''hasTask'',false] ) ']; "	,	
				" addAction['<t color=''#ADFF2F''>Freigeben</t>',{	(_this select 0) setVariable['hasTask',nil,true];	},'',0,false,false,'',' side player isEqualTo WEST && ( _target getVariable[''hasTask'',false] ) ']; "	
			};
		};	
		*/
	
	};	
};

/*
	╔══════════════════════════════════════════════════╗
	║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║
	║░░░░░░░█▀▀▀▄░▄░░░░░░░█░░░░▄░░░░░░░░░░░░░░░░░░░░░░░║
	║░░░░░░░█░░░█░░░█▀▀▀░░█░░░░░░░█▀▀▀▀█░█▀▀▀█░░░░░░░░░║
	║░░░░░░░█░░░█░█░█▀▀▀░░█░░░░█░░█░░░░█░█░░░█░░░░░░░░░║
	║░░░░░░░▀▀▀▀░░▀░▀▀▀▀░░▀▀▀▀░▀░░▀▀▀▀▀█░▀▀▀▀█░░░░░░░░░║
	║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄▄▄▄▄█░░░░░░░░░░░░░░░║
	║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║
	╠══════════════════════════════════════════════════╝
	║	File: Liga_Cfg_World.hpp	
	║		
	║	Author:  Hirschi - Die Liga		
	║	
	╠══════════════════════════════════════════════════╗
	║	!!!!!!!!!!! LÄDEN !!!!!!!!!!!
	╚══════════════════════════════════════════════════╝
*/
class LigaLadenCFG {
	class LimitCFG {		
			buylimit1 = 2;				// Ladenlimit 1
			
			ItemLimit = 6;				// Item Sorten Limit
	};
};	
class LigaLadenClass {
	
	class Land_Shop_Town_01_F {
		//				Preis	,Kassen	
		Preis[]		= {8500000	,1, 5	, 6.5	};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{0,-4,6}
		};
		BoxPos[]	= {
			{{-0.85,-0.5,-3.26},0		}
		};
		ZusatzPos[]	= {
			{
				{{-4.55,1.6,-3.26},0},
				{{-4.55,-0.4,-3.26},0},
				{{-4.55,-2.4,-3.26},0},
				{{1,-0.9,-3.26},90},
				{{3,-0.9,-3.26},90}
			}
		};
	}; 	
	class Land_Shop_Town_03_F {
		//				Preis	,Kassen	
		Preis[]		= {15900000	,2	,8 ,9.5	};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{0		,-7.3,3.7},
			{-4.5	,-7.3,3.7},
			{4.5	,-7.3,3.7}
		};
		BoxPos[]	= {
			{{-2.35,-0.4,-3.385},0		},
			{{2.35,-1,-3.385   },0		}
		};
		ZusatzPos[]	= {
			{
				{{-6.51,-5.45,-3.385},0	},
				{{-6.51,-3.45,-3.385},0	},
				{{-6.51,-1.45,-3.385},0	},
				{{-5.17,-6.25,-3.385 },90	}
			},
			{
				{{ -0.2,0.8,-3.385  },90	},
				{{ 1.8,0.8,-3.385  },90	},
				{{0.2,-6.25,-3.385  },90	},
				{{5.3,-6.25,-3.385  },90	}
			}			
		};		
	}; 
	class Land_Shop_City_01_F {
		//				Preis	,Kassen	
		Preis[]		= {17900000	,1	,9, 6.8	};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{6,-10,0},
			{3,-10.8,0},
			{0,-10.8,0},
			{-3,-10.8,0},
			
			{9,-8,0},
			{9,-5,0},
			{9.5,-2,0},
			{9.6,1,0}		
		};
		BoxPos[]	= {
			{{3,2.7,-4.96},-45		}
		};
		ZusatzPos[]	= {
			{
				{{-0.3	,2.7	,-4.96},0	},
				{{-0.3	,0.7	,-4.96},0	},
				{{-0.3	,-1.3	,-4.96},0	},
				{{4.78,5.75,-4.96},90	},
				{{6.78,5.75,-4.96},90	},
				{{0.7,-1.9,-4.96},90	},
				{{2.7,-1.9,-4.96},90	},
				{{7.4,4.72,-4.96},0	},
				{{7.4,2.72,-4.96},0	}
			}
		};		
	}; 	
	// Mehrfach Teil 
	class Land_Shop_City_02_F {
		//				Preis	,Kassen, Regale	
		Preis[]		= {31200000	,5, 12	, 12};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{6,-10,0},
			{3,-10.8,0},
			{0,-10.8,0},
			{-3,-10.8,0},
			
			{9,-8,0},
			{9,-5,0},
			{9.5,-2,0},
			{9.6,1,0}		
		};
		BoxPos[]	= {
			{{3	,-4	,-4.385},-35		},
			{{3	,2	,-4.385},-90		},
			{{6	,9.8,-4.385},-90		},
			{{-0.9,-6.5,-4.385},0		},
			{{-10.5,-4.5,-4.385},0		}
		};
		ZusatzPos[]	= {
			{
				{{8		,-2	,-4.385},0},
				{{4.5	,-7.7,-4.385},0},
				{{1.25 ,-1.1,-4.385},90},
				{{0.26,-7.9,-4.385},0},
				{{0.26,-5.9,-4.385},0},
				{{0.26,-3.9,-4.385},0}
					
			},
			{
				{{8	,2	,-4.385},0},
				{{0.4,0.3,-4.385},0}
					
			},	
			{
				{{4	,7.55	,-4.385},90}
					
			},	
			{
				{{-3.4,-5.5,-4.385},0}
					
			},	
			{
				{{-8.3,-8,-4.385},0},
				{{-10,-1.7,-4.385},90}
					
			}
				
		};		
	}; 
	

	// Kiosk
	class Land_Kiosk_blueking_F {
		//				Preis	,Kassen	
		Preis[]		= {8500000	,1, 2	, 6.5	};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{0,-4,6}
		};
		BoxPos[]	= {
			{{0,-1.75,-1.601},0		}
		};
		ZusatzPos[]	= {
			{
				{{1.8,1.18,-1.8}	,0},
				{{-1.8,1.18,-1.8}		,0}
			}
		};
	}; 	
	
	class Land_Kiosk_gyros_F {
		//				Preis	,Kassen	
		Preis[]		= {8500000	,1, 2	, 6.5	};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{0,-4,6}
		};
		BoxPos[]	= {
			{{0,-1.75,-1.8},0		}
		};
		ZusatzPos[]	= {
			{
				{{1.8,1.18,-2}	,0},
				{{-1.8,1.18,-2}		,0}
			}
		};
	}; 	

	class Land_Kiosk_papers_F {
		//				Preis	,Kassen	
		Preis[]		= {8500000	,1, 2	, 6.5	};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{0,-4,6}
		};
		BoxPos[]	= {
			{{0,-1.75,-1.8},0		}
		};
		ZusatzPos[]	= {
			{
				{{1.8,1.18,-2}	,0},
				{{-1.8,1.18,-2}		,0}
			}
		};
	};
	
	class Land_Kiosk_redburger_F {
		//				Preis	,Kassen	
		Preis[]		= {8500000	,1, 2	, 6.5	};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{0,-4,6}
		};
		BoxPos[]	= {
			{{0,-1.75,-2.7},0		}
		};
		ZusatzPos[]	= {
			{
				{{1.8,1.18,-3}	,0},
				{{-1.8,1.18,-3}		,0}
			}
		};
	};	

	/// LÄDEN mit O.G.
	
	class Land_i_Shop_01_V3_F {
		//				Preis	,Kassen	
		Preis[]		= {15900000	,1, 5	, 6.5	};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{0,-4,6}
		};
		BoxPos[]	= {
			{{0.55,3.323,-2.9},0		}
		};
		ZusatzPos[]	= {
			{
				{{2		,1.95	,-2.9}	,0},
				{{-2.8,-2,-2.9},90},
				{{-0.8,-2,-2.9},90},
				
				{{-3.5,1,-2.9},0},
				{{-3.5,3,-2.9},0}
			}
		};
	}; 	
	
	/// LÄDEN mehrfach
	
	class Land_i_Shop_02_V2_F {
		//				Preis	,Kassen	
		Preis[]		= {21500000	,2, 11	, 6.5	};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{0,-4,6}
		};
		BoxPos[]	= {
			{{1,1.7,-2.8},270		},
			{{-2,1.85,1},90		}//OG
		};
		ZusatzPos[]	= {
			{
				{{3.31,2.03,-2.8}	,0},
				{{3.31,-1.973,-2.8}	,0},
				
				{{1.06,-4.55,-2.8},90},
				{{-0.94,-4.55,-2.8},90},
				
				{{-1.99,-3.58,-2.8},0},
				{{-1.99,-1.58,-2.8},0}
			},
			
			{//OG
				
				{{1.06,-4.55,1.1},90},
				{{-0.94,-4.55,1.1},90},
				{{-2.94,-4.55,1.1},90},
				
				{{-1.94,-1.55,1.1},90},
				{{0.06,-1.55,1.1},90}
			}			
		};
	}; 		
	
	class Land_i_Shop_02_V1_F {
		//				Preis	,Kassen	
		Preis[]		= {21500000	,2, 11	, 6.5	};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{0,-4,6}
		};
		BoxPos[]	= {
			{{1,1.7,-2.8},270		},
			{{-2,1.85,1},90		}//OG
		};
		ZusatzPos[]	= {
			{
				{{3.31,2.03,-2.8}	,0},
				{{3.31,-1.973,-2.8}	,0},
				
				{{1.06,-4.55,-2.8},90},
				{{-0.94,-4.55,-2.8},90},
				
				{{-1.99,-3.58,-2.8},0},
				{{-1.99,-1.58,-2.8},0}
			},
			
			{//OG
				
				{{1.06,-4.55,1.1},90},
				{{-0.94,-4.55,1.1},90},
				{{-2.94,-4.55,1.1},90},
				
				{{-1.94,-1.55,1.1},90},
				{{0.06,-1.55,1.1},90}
			}			
		};
	}; 		

	class Land_i_Shop_02_V3_F {
		//				Preis	,Kassen	
		Preis[]		= {21500000	,2, 11	, 6.5	};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{0,-4,6}
		};
		BoxPos[]	= {
			{{1,1.7,-2.8},270		},
			{{-2,1.85,1},90		}//OG
		};
		ZusatzPos[]	= {
			{
				{{3.31,2.03,-2.8}	,0},
				{{3.31,-1.973,-2.8}	,0},
				
				{{1.06,-4.55,-2.8},90},
				{{-0.94,-4.55,-2.8},90},
				
				{{-1.99,-3.58,-2.8},0},
				{{-1.99,-1.58,-2.8},0}
			},
			
			{//OG
				
				{{1.06,-4.55,1.1},90},
				{{-0.94,-4.55,1.1},90},
				{{-2.94,-4.55,1.1},90},
				
				{{-1.94,-1.55,1.1},90},
				{{0.06,-1.55,1.1},90}
			}			
		};
	}; 	
};	

