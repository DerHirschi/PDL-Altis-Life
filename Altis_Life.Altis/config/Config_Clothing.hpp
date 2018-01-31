class Clothing {
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
	║	File: Liga_Cfg_Clothing.hpp	
	║		
	║	Author:  Oliver  - Die Liga	
	║	Edited:  Hirschi - Die Liga	
	║			 Zoran - Die Liga	
	║	
	║	Vorlage: Tonic´s Altis Life R.P.G. Ver.:4.4	
	╠═════════════════════════════════════════════════════════════════╗
	║
	║    ARRAY FORMAT:
	║        0: STRING (Classname)
	║        1: SCALAR (Rental Price)
	║        2: ARRAY (license required)
	║            Ex: { "driver", "trucking", "rebel" }
	║        3: ARRAY (This is for limiting items to certain things)
	║            0: Variable to read from
	║            1: Variable Value Type (SCALAR / BOOL /EQUAL)
	║            2: What to compare to (-1 = Check Disabled)
	║ 
	║
	╚═════════════════════════════════════════════════════════════════╝
*/

	// Zivi Klamotten

	class bruce {
		title 		= "Janinas Klamotten";
		license		= "";
		side 		= "civ";
		token 		= "";
		level[] 	= {""};
		uniforms[] 	= {
			{"U_C_Poloshirt_blue",		"Poloshirt Blue",				550,	{"","",-1} 	},
			{"U_C_Poloshirt_burgundy",	"Poloshirt Burgundy",			575,	{"","",-1} 	},
			{"U_C_Poloshirt_redwhite",	"Poloshirt Red/White",			550,	{"","",-1} 	},
			{"U_C_Poloshirt_salmon",	"Poloshirt Salmon",				575,	{"","",-1} 	},
			{"U_C_Poloshirt_stripped",	"Poloshirt stripped",			525,	{"","",-1} 	},
			{"U_C_Poloshirt_tricolour",	"Poloshirt Tricolor",			850,	{"","",-1} 	},
			{"U_C_Poor_2",				"Rag tagged clothes",			550,	{"","",-1} 	},
			
			{"U_C_man_sport_1_F",		"Shirt u Bermuda",					550,	{"","",-1} 	},
			{"U_C_man_sport_2_F",		"Shirt u Shorts orange/schwarz",	575,	{"","",-1} 	},
			{"U_C_man_sport_3_F",		"Shirt u Shorts blau",				550,	{"","",-1} 	},
			{"U_C_Man_casual_1_F",		"Polo u Hose blau/beige",			1575,	{"","",-1} 	},
			{"U_C_Man_casual_2_F",		"Polo u Hose blau/weiß",			1525,	{"","",-1} 	},
			{"U_C_Man_casual_3_F",		"Polo u Hose gruen/braun",			1850,	{"","",-1} 	},
			{"U_C_Man_casual_4_F",		"Shirt u Shorts hellblau/grau",		750,	{"","",-1} 	},
			{"U_C_Man_casual_5_F",		"Shirt u Shorts gelb/blau",			750,	{"","",-1} 	},
			{"U_C_Man_casual_6_F",		"Shirt u Shorts orange/olive",		750,	{"","",-1} 	},
			{"U_IG_Guerilla2_1",		"Hemd u Hose blau/beige",			1150,	{"","",-1} 	},
			{"U_IG_Guerilla2_2",		"Hemd u Hose kariert/grau",			1150,	{"","",-1} 	},
			{"U_IG_Guerilla3_1",		"Jacke u Jeans ",					1335,	{"","",-1} 	},
			{"U_IG_Guerilla2_3",		"Hemd u Hose blau/gruen",			2200,	{"","",-1} 	},
			{"U_C_HunterBody_grn",		"Jagdkleidung",						2200,	{"","",-1} 	},
			{"U_C_WorkerCoveralls",		"Mechanikeroverall schmutzig",		4000,	{"","",-1} 	},
			{"U_NikosAgedBody",			"Big Boss",							5000,	{"","",-1} 	},
			
			{"U_I_C_Soldier_Bandit_5_F",	"Muskelshirt Deluxe",			225,	{"","",-1} 	},
			{"U_I_C_Soldier_Bandit_1_F",	"Poloshirt Gruen",				750,	{"","",-1} 	},
			{"U_I_C_Soldier_Bandit_4_F",	"Hemd (kariert)",				1075,	{"","",-1} 	},
			{"U_I_C_Soldier_Bandit_2_F",	"Totenkopfshirt",				1275,	{"","",-1} 	},
			{"U_I_C_Soldier_Bandit_3_F",	"Braunes Shirt & Jeans",		1850,	{"","",-1} 	}

		};
		headgear[] 	= {
			{"H_Bandanna_camo",			"Camo Bandanna",				520,	{"","",-1} 	},
			{"H_Bandanna_surfer",		"Surfer Bandanna",				530,	{"","",-1} 	},
			{"H_Bandanna_gry",			"Grey Bandanna",				550,	{"","",-1} 	},
			{"H_Bandanna_cbr",			"",								565,	{"","",-1} 	},
			{"H_Bandanna_surfer",		"",								535,	{"","",-1} 	},
			{"H_Bandanna_khk",			"Khaki Bandanna",				545,	{"","",-1} 	},
			{"H_Bandanna_sgg",			"Sage Bandanna",				560,	{"","",-1} 	},
			{"H_StrawHat",				"Straw Fedora",					625,	{"","",-1} 	},
			{"H_BandMask_blk",			"Hat & Bandanna",				600,	{"","",-1} 	},
			{"H_Booniehat_tan",			"",								625,	{"","",-1} 	},
			{"H_Hat_blue",				"",								610,	{"","",-1} 	},
			{"H_Hat_brown",				"",								676,	{"","",-1} 	},
			{"H_Hat_checker",			"",								540,	{"","",-1} 	},
			{"H_Hat_grey",				"",								580,	{"","",-1} 	},
			{"H_Hat_tan",				"",								565,	{"","",-1} 	},
			{"H_Cap_blu",				"",								550,	{"","",-1} 	},
			{"H_Cap_grn",				"",								550,	{"","",-1} 	},
			{"H_Cap_grn_BI",			"",								550,	{"","",-1} 	},
			{"H_Cap_oli",				"",								550,	{"","",-1} 	},
			{"H_Cap_red",				"",								550,	{"","",-1} 	},
			{"H_Cap_tan",				"",								550,	{"","",-1} 	},
			{"H_Helmet_Skate",			"Arbeitsschutzhelm",			7500,	{"","",-1} 	}
		};
		goggles[] = {
			{"G_Shades_Black",			"",								225,	{"","",-1} 	},
			{"G_Shades_Blue",			"",								220,	{"","",-1} 	},
			{"G_Sport_Blackred",		"",								220,	{"","",-1}	},
			{"G_Sport_Checkered",		"",								220,	{"","",-1}  },
			{"G_Sport_Blackyellow",		"",								220,	{"","",-1} 	},
			{"G_Sport_BlackWhite",		"",								220,	{"","",-1} 	},
			{"G_Squares",				"",								210,	{"","",-1} 	},
			{"G_Aviator",				"",								400,	{"","",-1} 	},
			{"G_Lady_Mirror",			"",								250,	{"","",-1} 	},
			{"G_Lady_Dark",				"",								250,	{"","",-1} 	},
			{"G_Lady_Blue",				"",								250,	{"","",-1} 	},
			{"G_Lowprofile",			"",								230,	{"","",-1} 	},
			{"G_Combat",				"",								255,	{"","",-1} 	}
		};
		vests[] = {			
			{"V_Rangemaster_belt",		"",								7500,	{"","",-1} 	},
			{"V_BandollierB_ghex_F",	"",							 	25500,	{"","",-1} 	}

		};
		backpacks[] = {
			{"B_AssaultPack_cbr",		"",								3500,	{"","",-1} 	},
			{"B_Kitbag_mcamo",			"",								5500,	{"","",-1} 	},
			{"B_TacticalPack_oli",		"",								4000,	{"","",-1} 	},
			{"B_FieldPack_ocamo",		"",								4500,	{"","",-1} 	},
			{"B_Bergen_sgg",			"",								5500,	{"","",-1} 	},
			{"B_Kitbag_cbr",			"",								5500,	{"","",-1} 	},
			{"B_Carryall_oli",			"",								7500,	{"","",-1} 	},
			{"B_Carryall_khk",			"",								7500,	{"","",-1} 	},
			
			{"B_ViperLightHarness_khk_F",	"",								4500,	{"","",-1} 	},
			{"B_ViperLightHarness_oli_F",	"",								4500,	{"","",-1} 	},
			{"B_ViperHarness_oli_F",		"",								7500,	{"","",-1} 	},
			{"B_ViperHarness_khk_F",		"",								7500,	{"","",-1} 	}
		//	{"B_Bergen_hex_F",				"",								18500,	{"","",-1} 	}
		//	{"B_Bergen_tna_F",				"",								18500,	{"","",-1} 	}
	
		};
	};

	// Liga Cops are bastards =)
	
	class cop {
		title 		= "Liga PD Kleidung";
		license 	= "";
		side 		= "cop";
		token 		= "";
		level[] 	= {""};
		uniforms[] 	= {
			//{"U_Rangemaster",				"Dienstkleidung",				1000,	{"life_coplevel","SCALAR",1} 	},
			{"U_Competitor",				"Dienstkleidung",				1000,	{"life_coplevel","SCALAR",1} 	},
			//{"U_B_CombatUniform_mcam",		"Dienstkleidung",				1000,	{"life_coplevel","SCALAR",7} 	},
			//{"U_B_CombatUniform_mcam_worn",	"Dienstkleidung",				1000,	{"life_coplevel","SCALAR",9} 	},
			{"U_B_Wetsuit",					"Taucheranzug SWAT",			1000,	{"life_coplevel","SCALAR",2} 	}
		};
		headgear[] = {
			{"H_Cap_police",				"Policecap",					150,	{"life_coplevel","SCALAR",1} 	},
			{"H_HelmetB_plain_blk",			"Einsatzhelm",					1500,	{"life_coplevel","SCALAR",1} 	},
			{"H_CrewHelmetHeli_B",			"Pilotenhelm",					3000,	{"life_coplevel","SCALAR",3} 	},
			{"H_Beret_blk",					"Beret Police",					150,	{"life_coplevel","SCALAR",5} 	},
			{"H_Beret_Colonel",				"Beret Chief ",					150,	{"life_coplevel","SCALAR",9} 	},
			{"H_Beret_gen_F",				"Beret Chief ",					150,	{"life_coplevel","SCALAR",10} 	},
			{"H_Booniehat_tan",				"Buschhut",						5000,	{"life_coplevel","SCALAR",10} 	}
		};
		goggles[] = {
			{"G_Shades_Black",			"",								25,		{"","",-1} 	},
			{"G_Shades_Blue",			"",								20,		{"","",-1} 	},
			{"G_Sport_Blackred",		"",								20,		{"","",-1} 	},
			{"G_Sport_Checkered",		"",								20,		{"","",-1} 	},
			{"G_Sport_Blackyellow",		"",								20,		{"","",-1} 	},
			{"G_Sport_BlackWhite",		"",								20,		{"","",-1} 	},
			{"G_Squares",				"",								10,		{"","",-1} 	},
			{"G_Aviator",				"",								100,	{"","",-1} 	},
			{"G_Lady_Mirror",			"",								150,	{"","",-1} 	},
			{"G_Lady_Dark",				"",								150,	{"","",-1} 	},
			{"G_Lady_Blue",				"",								150,	{"","",-1} 	},
			{"G_Lowprofile",			"",								30,		{"","",-1} 	},
			{"G_Combat",				"",								55,		{"","",-1} 	}
		};
		vests[] = {
			{"V_TacVest_blk_POLICE",	"Polizeiweste Standart",		3000,	{"life_coplevel","SCALAR",1} 	},
			{"V_RebreatherB",			"Tauchgerät SWAT",				3000,	{"life_coplevel","SCALAR",2} 	}
		};
		backpacks[] = {
			{"B_TacticalPack_blk",		"Polizeirucksack Standard",		1500,	{"life_coplevel","SCALAR",1} 	},
			{"B_Carryall_oli",			"Großer Rucksack",				5000,	{"life_coplevel","SCALAR",5} 	},
			{"B_UAV_01_backpack_F",		"Drohne SWAT",					50000,	{"life_coplevel","SCALAR",7} 	}
		};
	};

	// Klamotten für die gelben Schwengel
	
	class alac {
		title		= "ALAC Kleidung";
		license 	= "";
		side 		= "alac";
		token 		= "";
		level[] 	= {""};
		uniforms[] 	= {
			{"U_C_WorkerCoveralls",		"ALAC Uniform",					25,		{"","",-1} 	}
		};
		headgear[] = {
			{"H_Cap_brn_SPECOPS",		"",								60,		{"","",-1} 	},
			{"H_HelmetCrew_O",			"",								100,	{"","",-1} 	},
			{"H_PilotHelmetHeli_O",		"",								150,	{"","",-1} 	}
		};
		goggles[] = {
			{"G_Shades_Black",			"",								25,		{"","",-1} 	},
			{"G_Shades_Blue",			"",								20,		{"","",-1} 	},
			{"G_Sport_Blackred",		"",								20,		{"","",-1} 	},
			{"G_Sport_Checkered",		"",								20,		{"","",-1} 	},
			{"G_Sport_Blackyellow",		"",								20,		{"","",-1} 	},
			{"G_Sport_BlackWhite",		"",								20,		{"","",-1} 	},
			{"G_Aviator",				"",								75,		{"","",-1} 	},
			{"G_Squares",				"",								10,		{"","",-1} 	},
			{"G_Lowprofile",			"",								30,		{"","",-1} 	},
			{"G_Combat",				"",								55,		{"","",-1} 	}
		};
		vests[] = {
			{"V_Rangemaster_belt",		"",								300,	{"","",-1} 	}
		};
		backpacks[] = {
			{"B_Bergen_mcamo",			"ALAC Rucksack",				400,	{"","",-1} 	}
		};
	};

	// Am besten trägt man nur noch künstlichen Schildkrötenpelz! Stoppt das sinnlose Abschlachten!!!!
	
	class dive {
		title 		= "Liga Tauch Club";
		license 	= "dive";
		side 		= "civ";
		token 		= "";
		level[] 	= {""};
		uniforms[] 	= {
			{"U_B_Wetsuit",				"Taucheranzug",						2000,	{"","",-1} 	},
			{"U_I_Wetsuit",				"Taucheranzug",						2500,	{"","",-1} 	}

		};
		headgear[] = {	};
		goggles[] = {
			{"G_Diving",				"",								500,	{"","",-1} 	},
			{"G_I_Diving",				"",								225,	{"","",-1} 	}

		};
		vests[] = {
			{"V_RebreatherB",			"",								5000,	{"","",-1} 	}
		};
		backpacks[] = { 
			{"B_ViperLightHarness_khk_F",	"",								4500,	{"","",-1} 	},
			{"B_ViperLightHarness_oli_F",	"",								4500,	{"","",-1} 	},
			{"B_ViperHarness_oli_F",		"",								7500,	{"","",-1} 	},
			{"B_ViperHarness_khk_F",		"",								7500,	{"","",-1} 	}
		//	{"B_Bergen_hex_F",				"",								18500,	{"","",-1} 	}
		//	{"B_Bergen_tna_F",				"",								18500,	{"","",-1} 	}			

		};
	};

	// Brumm brumm brumm, immer im Kreis herum....
	
	class kart {
		title 		= "Baskids Racing Stuff";
		license 	= "";
		side 		= "civ";
		token 		= "";
		level[] 	= {""};
		uniforms[] 	= {
			{ "NONE", $STR_C_Remove_uniforms, 0, "" },
			{"U_C_Driver_1_black",			"",								1500,	{"","",-1} 	},
			{"U_C_Driver_1_blue",			"",								1500,	{"","",-1} 	},
			{"U_C_Driver_1_red",			"",								1500,	{"","",-1} 	},
			{"U_C_Driver_1_orange",			"",								1500,	{"","",-1} 	},
			{"U_C_Driver_1_green",			"",								1500,	{"","",-1} 	},
			{"U_C_Driver_1_white",			"",								1500,	{"","",-1} 	},
			{"U_C_Driver_1_yellow",			"",								1500,	{"","",-1} 	},
			{"U_C_Driver_2",				"",								3500,	{"","",-1} 	},
			{"U_C_Driver_1",				"",								3600,	{"","",-1} 	},
			{"U_C_Driver_3",				"",								3700,	{"","",-1} 	},
			{"U_C_Driver_4",				"",								3700,	{"","",-1} 	}
		};
		headgear[] = {
			{ "NONE", $STR_C_Remove_headgear, 0, "" },
			{"H_RacingHelmet_1_black_F",	"",								1000,	{"","",-1} 	},
			{"H_RacingHelmet_1_red_F",		"",								1000,	{"","",-1} 	},
			{"H_RacingHelmet_1_white_F",	"",								1000,	{"","",-1} 	},
			{"H_RacingHelmet_1_blue_F",		"",								1000,	{"","",-1} 	},
			{"H_RacingHelmet_1_yellow_F",	"",								1000,	{"","",-1} 	},
			{"H_RacingHelmet_1_green_F",	"",								1000,	{"","",-1} 	},
			{"H_RacingHelmet_1_F",			"",								2500,	{"","",-1} 	},
			{"H_RacingHelmet_2_F",			"",								2500,	{"","",-1} 	},
			{"H_RacingHelmet_3_F",			"",								2500,	{"","",-1} 	},
			{"H_RacingHelmet_4_F",			"",								2500,	{"","",-1} 	}
		};
		goggles[] = {
			{ "NONE", $STR_C_Remove_goggles, 0, "" }
			};
		vests[] = {
			{ "NONE", $STR_C_Remove_vests, 0, "" }
			};
		backpacks[] = {
			{ "NONE", $STR_C_Remove_backpacks, 0, "" }
		};
	};

	// Lüla lüla, die Feuerwehr is da
	
	class med {
		title 		= "LRK Kleidung";
		license 	= "";
		side 		= "med";
		token 		= "";
		level[] 	= {""};
		uniforms[] 	= {
			{"U_Rangemaster",				"Sanitäteruniform",				25,		{"life_mediclevel","SCALAR",1} 	},
			{"U_I_HeliPilotCoveralls",		"Notarztuniform",				250,	{"life_mediclevel","SCALAR",4} 	}
		};
		headgear[] = {
			{"H_Cap_brn_SPECOPS",			"",								60,		{"life_mediclevel","SCALAR",1} 	},
			{"H_HelmetCrew_O",				"",								100,	{"life_mediclevel","SCALAR",2} 	},
			{"H_PilotHelmetHeli_O",			"",								150,	{"life_mediclevel","SCALAR",4} 	}
		};
		goggles[] = {
			{"G_Shades_Black",				"",								25,		{"","",-1} 	},
			{"G_Shades_Blue",				"",								20,		{"","",-1} 	},
			{"G_Sport_Blackred",			"",								20,		{"","",-1} 	},
			{"G_Sport_Checkered",			"",								20,		{"","",-1} 	},
			{"G_Sport_Blackyellow",			"",								20,		{"","",-1} 	},
			{"G_Sport_BlackWhite",			"",								20,		{"","",-1} 	},
			{"G_Aviator",					"",								75,		{"","",-1} 	},
			{"G_Squares",					"",								10,		{"","",-1} 	},
			{"G_Lowprofile",				"",								30,		{"","",-1} 	},
			{"G_Combat",					"",								55,		{"","",-1} 	}
		};
		vests[] = {	};
		backpacks[] = {
			{"B_TacticalPack_blk",			"Sanitäter Rucksack",			700,	{"life_mediclevel","SCALAR",1} 	},
			{"B_Bergen_mcamo",				"Notarzt Rucksack",				1200,	{"life_mediclevel","SCALAR",4} 	}
		};
	};

	
	/* 
		Chez Hirschi entzündet die Zigarre an den Überresten der imperialistischen Unterdrücker. 
		Begleitet von einem finsteren Blick, hört man ihn fluchen: "Wo fehlt denn Bitte dieses Scheiß ; ???"
		
		
		Hmpfff ... und mit "," warst du auch recht sparsam .......  
		

	   
	*/
	
	
	// Mode kann man kaufen, echten Style findet man hingegen nur HIER!!!
	
	class reb {
		title 		= "Hirschi Guevara Fashion";
		license 	= "rebel";
		side 		= "civ";
		token 		= "";
		level[] 	= {""};
		uniforms[] 	= {
			
			{"U_I_C_Soldier_Para_4_F",	"Tarnhose + Muskelshirt",			32500,		{"","",-1} 	},
			{"U_IG_Guerrilla_6_1",		"Jagdanzug gruen",					39500,		{"","",-1} 	},
			{"U_IG_Guerilla1_1",			"",								42000,		{"","",-1} 	},
			{"U_I_G_Story_Protagonist_F",	"",								90000,		{"","",-1} 	},
			{"U_I_G_resistanceLeader_F",	"",								95000,		{"","",-1} 	},
			{"U_IG_leader",					"",								95500,		{"","",-1} 	},
			{"U_B_CombatUniform_mcam",		"",								95500,		{"","",-1} 	},
			{"U_B_HeliPilotCoveralls",		"",								95500,		{"","",-1} 	},
			{"U_O_PilotCoveralls",			"",								95500,		{"","",-1}	},
			{"U_B_PilotCoveralls",			"",								95500,		{"","",-1} 	},
			{"U_I_pilotCoveralls",			"",								95500,		{"","",-1} 	},
			{"U_I_HeliPilotCoveralls",		"",								95500,		{"","",-1} 	},
			{"U_O_SpecopsUniform_ocamo",	"",								95500,		{"","",-1} 	},
			{"U_O_SpecopsUniform_blk",		"",								95500,		{"","",-1} 	},
			{"U_O_OfficerUniform_ocamo",	"",								95500,		{"","",-1} 	},
			{"U_I_CombatUniform",			"",								95500,		{"","",-1} 	},
			{"U_I_CombatUniform_tshirt",	"",								95500,		{"","",-1} 	},
			{"U_I_OfficerUniform",			"",								95500,		{"","",-1} 	},
			{"U_OG_leader",					"",								95500,		{"","",-1} 	},
			{"U_BG_Guerilla2_1",			"",								95500,		{"","",-1} 	},
			{"U_OG_Guerilla2_3",			"",								95500,		{"","",-1} 	},
			{"U_O_PilotCoveralls",			"",								95500,		{"","",-1} 	},
			
			{"U_B_T_Soldier_F",				"",								250000,		{"","",-1} 	},
			{"U_B_T_Soldier_AR_F",			"",								250000,		{"","",-1} 	},
			{"U_B_T_Soldier_SL_F",			"",								250000,		{"","",-1} 	},
			{"U_B_CTRG_Soldier_F",			"",								250000,		{"","",-1} 	},
			{"U_B_CTRG_Soldier_2_F",		"",								250000,		{"","",-1} 	},
			{"U_B_CTRG_Soldier_3_F",		"",								250000,		{"","",-1} 	},
			{"U_O_T_Soldier_F",				"",								250000,		{"","",-1} 	},
			{"U_O_T_Officer_F",				"",								250000,		{"","",-1} 	},
			{"U_I_C_Soldier_Para_1_F",		"",								250000,		{"","",-1} 	},
			{"U_I_C_Soldier_Para_2_F",		"",								250000,		{"","",-1} 	},
			{"U_I_C_Soldier_Para_3_F",		"",								250000,		{"","",-1} 	},
			{"U_I_C_Soldier_Para_5_F",		"",								250000,		{"","",-1} 	},
			{"U_B_CTRG_Soldier_urb_1_F",	"",								250000,		{"","",-1} 	},
			{"U_B_CTRG_Soldier_urb_2_F",	"",								250000,		{"","",-1} 	},
			{"U_B_CTRG_Soldier_urb_3_F",	"",								250000,		{"","",-1} 	}
			
			
			
			
		};
		headgear[] = {
			
			{"H_Helmet_Skate",				"",								37500,		{"","",-1} 	},
			{"H_HelmetB_TI_tna_F",			"",								37500,		{"","",-1} 	},
			{"H_HelmetB_tna_F",				"",								37500,		{"","",-1} 	},
			{"H_HelmetB_Enh_tna_F",			"",								37500,		{"","",-1} 	},
			{"H_HelmetB_Light_tna_F",		"",								37500,		{"","",-1} 	},
			{"H_HelmetSpecO_ghex_F",		"",								37500,		{"","",-1} 	},
			{"H_HelmetLeaderO_ghex_F",		"",								37500,		{"","",-1} 	},
			{"H_HelmetO_ghex_F",			"",								37500,		{"","",-1} 	},
			{"H_HelmetCrew_O_ghex_F",		"",								37500,		{"","",-1} 	},
			{"H_MilCap_tna_F",				"",								37500,		{"","",-1} 	},
			{"H_MilCap_ghex_F",				"",								37500,		{"","",-1} 	},
			{"H_HelmetB",					"",								37500,		{"","",-1} 	},
			{"H_HelmetB_camo",				"",								37500,		{"","",-1} 	},
			{"H_HelmetB_paint",				"",								37500,		{"","",-1} 	},
			{"H_HelmetB_light",				"",								37500,		{"","",-1} 	},
			{"H_Booniehat_khk",				"",								18500,		{"","",-1} 	},
			{"H_Booniehat_indp",			"",								18500,		{"","",-1} 	},
			{"H_Booniehat_mcamo",			"",								18500,		{"","",-1} 	},
			{"H_Booniehat_grn",				"",								18500,		{"","",-1} 	},
			{"H_Booniehat_dirty",			"",								18500,		{"","",-1} 	},
			{"H_Booniehat_dgtl",			"",								18500,		{"","",-1} 	},
			{"H_Booniehat_khk_hs",			"",								18500,		{"","",-1} 	},
			{"H_HelmetB_plain_mcamo",		"",								37500,		{"","",-1} 	},
			{"H_HelmetB_plain_blk",			"",								37500,		{"","",-1} 	},
			{"H_HelmetSpecB",				"",								37500,		{"","",-1} 	},
			{"H_HelmetSpecB_paint1",		"",								37500,		{"","",-1} 	},
			{"H_HelmetSpecB_paint2",		"",								37500,		{"","",-1} 	},
			{"H_HelmetSpecB_blk",			"",								37500,		{"","",-1} 	},
			{"H_HelmetIA_camo",				"",								37500,		{"","",-1} 	},
			{"H_Helmet_Kerry",				"",								37500,		{"","",-1}	},
			{"H_HelmetB_grass",				"",								37500,		{"","",-1} 	},
			{"H_HelmetB_snakeskin",			"",								37500,		{"","",-1} 	},
			{"H_HelmetB_desert",			"",								37500,		{"","",-1} 	},
			{"H_HelmetB_black",				"",								37500,		{"","",-1} 	},
			{"H_HelmetB_sand",				"",								37500,		{"","",-1} 	},
			{"H_Cap_headphones",			"",								18000,		{"","",-1} 	},
			{"H_Cap_brn_SPECOPS",			"",								18000,		{"","",-1} 	},
			{"H_Cap_tan_specops_US",		"",								18000,		{"","",-1} 	},
			{"H_HelmetCrew_B",				"",								56000,		{"","",-1} 	},
			{"H_HelmetCrew_O",				"",								56000,		{"","",-1} 	},
			{"H_HelmetCrew_I",				"",								56000,		{"","",-1} 	},
			{"H_PilotHelmetFighter_B",		"",								56000,		{"","",-1} 	},
			{"H_PilotHelmetFighter_O",		"",								56000,		{"","",-1} 	},
			{"H_PilotHelmetFighter_I",		"",								56000,		{"","",-1} 	},
			{"H_PilotHelmetHeli_B",			"",								56000,		{"","",-1} 	},
			{"H_PilotHelmetHeli_O",			"",								56000,		{"","",-1} 	},
			{"H_PilotHelmetHeli_I",			"",								56000,		{"","",-1} 	},
			{"H_CrewHelmetHeli_B",			"",								56000,		{"","",-1} 	},
			{"H_CrewHelmetHeli_O",			"",								56000,		{"","",-1} 	},
			{"H_CrewHelmetHeli_I",			"",								56000,		{"","",-1} 	},
			{"H_HelmetO_ocamo",				"",								31800,		{"","",-1} 	},
			{"H_HelmetLeaderO_ocamo",		"",								31800,		{"","",-1} 	},
			{"H_MilCap_ocamo",				"",								18000,		{"","",-1} 	},
			{"H_MilCap_blue",				"",								18000,		{"","",-1} 	},
			{"H_HelmetB_light_grass",		"",								57500,		{"","",-1}	},
			{"H_BandMask_reaper",			"",								57500,		{"","",-1}	},
			{"H_HelmetSpecO_blk",			"",								57500,		{"","",-1}	},
			{"H_HelmetB_light_black",		"",								57500,		{"","",-1} 	},
			{"H_Bandanna_khk",				"",								18000,		{"","",-1} 	},
			{"H_Bandanna_cbr",				"",								18000,		{"","",-1} 	},
			{"H_Bandanna_sgg",				"",								18000,		{"","",-1} 	},
			{"H_Bandanna_gry",				"",								18000,		{"","",-1} 	},
			{"H_Bandanna_camo",				"",								18000,		{"","",-1} 	},
			{"H_Bandanna_mcamo",			"",								18000,		{"","",-1} 	},
			{"H_Shemag_khk",				"",								20000,		{"","",-1} 	},
			{"H_Shemag_tan",				"",								20000,		{"","",-1} 	},
			{"H_Shemag_olive",				"",								20000,		{"","",-1} 	},
			{"H_Shemag_olive_hs",			"",								20000,		{"","",-1} 	},
			{"H_ShemagOpen_khk",			"",								20000,		{"","",-1}	},
			{"H_ShemagOpen_tan",			"",								20000,		{"","",-1} 	},
			{"H_Beret_brn_SF",				"",								19000,		{"","",-1} 	},
			{"H_Watchcap_blk",				"",								18000,		{"","",-1} 	},
			{"H_Watchcap_khk",				"",								18000,		{"","",-1} 	},
			{"H_Watchcap_camo",				"",								18000,		{"","",-1} 	},
			{"H_Watchcap_sgg",				"",								18000,		{"","",-1} 	},
			{"H_TurbanO_blk",				"",								18000,		{"","",-1} 	},
			{"H_Hat_brown",					"",								18000,		{"","",-1} 	},
			{"H_Hat_camo",					"",								18000,		{"","",-1} 	},
			{"H_Watchcap_sgg",				"",								18000,		{"","",-1} 	},
		
			{"H_Booniehat_tan",			"Boonie Hat Sand",				16250,	{"","",-1} 	},
			{"H_Booniehat_mcamo",		"Boonie Hat MTP",				16250,	{"","",-1} 	},
			{"H_Booniehat_dirty",		"Boonie Hat Dreckig",			16250,	{"","",-1} 	},
			{"H_Booniehat_oli",			"Boonie Hat Olive",				16250,	{"","",-1} 	},
			{"H_Booniehat_tna_F",		"Boonie Hat Tropen",			16250,	{"","",-1} 	},
			{"H_Booniehat_dgtl",		"Boonie Hat Digi Gruen",		16250,	{"","",-1} 	}
	
		};
		goggles[] = {
			{"G_Shades_Black",				"",								1600,		{"","",-1} 	},
			{"G_Shades_Blue",				"",								1600,		{"","",-1} 	},
			{"G_Sport_Blackred",			"",								1600,		{"","",-1} 	},
			{"G_Sport_Checkered",			"",								1600,		{"","",-1} 	},
			{"G_Sport_Blackyellow",			"",								1600,		{"","",-1} 	},
			{"G_Sport_BlackWhite",			"",								1600,		{"","",-1} 	},
			{"G_Squares",					"",								1500,		{"","",-1} 	},
			{"G_Lowprofile",				"",								1500,		{"","",-1} 	},
			{"G_Balaclava_blk",				"",								1500,		{"","",-1} 	},
			{"G_Balaclava_lowprofile",		"",								1500,		{"","",-1} 	},
			{"G_Balaclava_combat",			"",								1500,		{"","",-1} 	},
			{"G_Balaclava_oli",				"",								1500,		{"","",-1} 	},
			{"G_Bandanna_aviator",			"",								9500,		{"","",-1} 	},
			{"G_Bandanna_beast",			"",								9500,		{"","",-1} 	},
			{"G_Bandanna_tan",				"",								9500,		{"","",-1} 	},
			{"G_Bandanna_sport",			"",								9500,		{"","",-1} 	},
			{"G_Bandanna_blk",				"",								9500,		{"","",-1} 	},
			{"G_Bandanna_oli",				"",								9500,		{"","",-1} 	},
			{"G_Bandanna_shades",			"",								9500,		{"","",-1} 	},
			{"G_Combat",					"",								9600,		{"","",-1} 	}
		};
		vests[] = {
			{"V_Rangemaster_belt",			"",								10000,		{"","",-1} 	},
			{"V_BandollierB_khk",			"",								20000,		{"","",-1} 	},
			{"V_BandollierB_cbr",			"",								20000,		{"","",-1} 	},
			{"V_BandollierB_rgr",			"",								20000,		{"","",-1} 	},
			{"V_BandollierB_blk",			"",								20000,		{"","",-1} 	},
			{"V_BandollierB_oli",			"",								20000,		{"","",-1} 	},
			{"V_PlateCarrier1_rgr",			"",								30000,		{"","",-1}	},
			{"V_PlateCarrier1_tna_F",		"",								30000,		{"","",-1}	},
			{"V_PlateCarrier2_rgr",			"",								30000,		{"","",-1} 	},
			{"V_PlateCarrier2_tna_F",		"",								30000,		{"","",-1} 	},
			{"V_PlateCarrier3_rgr",			"",								30000,		{"","",-1} 	},
			{"V_PlateCarrier1_rgr_noflag_F",			"",					30000,		{"","",-1} 	},
			{"V_PlateCarrier2_rgr_noflag_F",			"",					30000,		{"","",-1} 	},
			{"V_PlateCarrier1_blk",			"",								30000,		{"","",-1} 	},
			{"V_Chestrig_khk",				"",								45000,		{"","",-1} 	},
			{"V_Chestrig_rgr",				"",								45000,		{"","",-1} 	},
			{"V_TacVest_khk",				"",								45000,		{"","",-1} 	},
			{"V_TacVest_brn",				"",								45000,		{"","",-1} 	},
			{"V_TacVest_oli",				"",								45000,		{"","",-1} 	},
			{"V_TacVest_blk",				"",								45000,		{"","",-1} 	},
			{"V_TacVest_camo",				"",								45000,		{"","",-1} 	},
			{"V_TacVestIR_blk",				"",								45000,		{"","",-1} 	},
			{"V_TacVestCamo_khk",			"",								45000,		{"","",-1} 	},
			{"V_HarnessO_ghex_F",			"",								45000,		{"","",-1} 	},
			{"V_HarnessOGL_ghex_F",			"",								45000,		{"","",-1} 	},
			{"V_HarnessOGL_gry",			"",								45000,		{"","",-1} 	},
			{"V_HarnessOSpec_brn",			"",								55000,		{"","",-1} 	},
			{"V_HarnessOSpec_gry",			"",								55000,		{"","",-1} 	},
			{"V_Chestrig_blk",				"",								60000,		{"","",-1} 	},
			{"V_Chestrig_oli",				"",								60000,		{"","",-1} 	},
			{"V_PlateCarrierIA1_dgtl",		"",								75000,		{"","",-1} 	},
			{"V_PlateCarrierSpec_rgr",		"",								75000,		{"","",-1} 	},
			{"V_PlateCarrierSpec_tna_F",	"",								75000,		{"","",-1} 	},
			{"V_PlateCarrierIA2_dgtl",		"",								75000,		{"","",-1} 	},
			{"V_PlateCarrierGL_rgr",		"",								100000,		{"","",-1} 	},
			{"V_PlateCarrierGL_tna_F",		"",								100000,		{"","",-1} 	},
			{"V_PlateCarrier_Kerry",		"",								150000,		{"","",-1} 	},
			{"V_PlateCarrierIAGL_dgtl",		"",								220000,		{"","",-1} 	}
		

		};
		backpacks[] = {
			{"B_AssaultPack_cbr",			"",								5500,		{"","",-1} 	},
			{"B_AssaultPack_khk",			"",								5500,		{"","",-1} 	},
			{"B_AssaultPack_dgtl",			"",								5500,		{"","",-1} 	},
			{"B_AssaultPack_rgr",			"",								5500,		{"","",-1} 	},
			{"B_AssaultPack_sgg",			"",								5500,		{"","",-1} 	},
			{"B_AssaultPack_blk",			"",								5500,		{"","",-1} 	},
			{"B_AssaultPack_mcamo",			"",								5500,		{"","",-1} 	},
			{"B_Kitbag_mcamo",				"",								7500,		{"","",-1} 	},
			{"B_Kitbag_sgg",				"",								7500,		{"","",-1} 	},
			{"B_Kitbag_cbr",				"",								7500,		{"","",-1} 	},
			{"B_TacticalPack_oli",			"",								6500,		{"","",-1} 	},
			{"B_FieldPack_ocamo",			"",								5000,		{"","",-1} 	},
			{"B_Bergen_sgg",				"",								6500,		{"","",-1} 	},
			{"B_Bergen_mcamo",				"",								6500,		{"","",-1} 	},
			{"B_Bergen_rgr",				"",								6500,		{"","",-1} 	},
			{"B_Bergen_blk",				"",								6500,		{"","",-1}	},
			{"B_Kitbag_cbr",				"",								6500,		{"","",-1} 	},
			{"B_Carryall_oli",				"",								8000,		{"","",-1}	},
			{"B_Carryall_ocamo",			"",								8000,		{"","",-1} 	},
			{"B_Carryall_oucamo",			"",								8000,		{"","",-1} 	},
			{"B_Carryall_mcamo",			"",								8000,		{"","",-1} 	},
			{"B_Carryall_cbr",				"",								8000,		{"","",-1} 	},
			{"B_Carryall_khk",				"",								8000,		{"","",-1} 	},
			
			{"B_ViperLightHarness_khk_F",	"",								4500,	{"","",-1} 	},
			{"B_ViperLightHarness_oli_F",	"",								4500,	{"","",-1} 	},
			{"B_ViperHarness_oli_F",		"",								7500,	{"","",-1} 	},
			{"B_ViperHarness_khk_F",		"",								7500,	{"","",-1} 	}
		//	{"B_Bergen_hex_F",				"",								18500,	{"","",-1} 	},
		//	{"B_Bergen_tna_F",				"",								18500,	{"","",-1} 	}
		
		};
	};

	class flusi {
		title 		= "Klamotten Flusi";
		license 	= "";
		side		= "civ";
		token		= "";
		level[] 	= {""};
		uniforms[] 	= {
			{"U_IG_Guerilla1_1",			"",								22000,		{"","",-1} 	},
			{"U_I_G_Story_Protagonist_F",	"",								20000,		{"","",-1} 	},
			{"U_I_G_resistanceLeader_F",	"",								25000,		{"","",-1} 	},
			{"U_B_HeliPilotCoveralls",		"",								25500,		{"","",-1} 	},
			{"U_I_HeliPilotCoveralls",		"",								25500,		{"","",-1} 	},
			{"U_BG_Guerilla2_1",			"",								25500,		{"","",-1}	},
			{"U_OG_Guerilla2_3",			"",								25500,		{"","",-1} 	},
			{"U_NikosAgedBody",				"Casual Wears",					5000,		{"","",-1} 	}
		};
		headgear[] = {
			{"H_Cap_marshal",				"",								1800,		{"","",-1} 	},
			{"H_Cap_headphones",			"",								1800,		{"","",-1} 	},
			{"H_Cap_brn_SPECOPS",			"",								1800,		{"","",-1} 	},
			{"H_Cap_tan_specops_US",		"",								1800,		{"","",-1} 	},
			{"H_MilCap_ocamo",				"",								1800,		{"","",-1}	},
			{"H_MilCap_blue",				"",								1800,		{"","",-1} 	},
			{"H_Bandanna_khk",				"",								1800,		{"","",-1} 	},
			{"H_Bandanna_cbr",				"",								1800,		{"","",-1} 	},
			{"H_Bandanna_sgg",				"",								1800,		{"","",-1} 	},
			{"H_Bandanna_gry",				"",								1800,		{"","",-1} 	},
			{"H_Bandanna_camo",				"",								1800,		{"","",-1} 	},
			{"H_Bandanna_mcamo",			"",								1800,		{"","",-1} 	},
			{"H_Watchcap_blk",				"",								1800,		{"","",-1} 	},
			{"H_Watchcap_khk",				"",								1800,		{"","",-1} 	},
			{"H_Watchcap_camo",				"",								1800,		{"","",-1} 	},
			{"H_Watchcap_sgg",				"",								1800,		{"","",-1} 	},
			{"H_Hat_brown",					"",								1800,		{"","",-1} 	},
			{"H_Hat_camo",					"",								1800,		{"","",-1} 	},
			{"H_Cap_blu",					"",								550,		{"","",-1} 	},
			{"H_Cap_grn",					"",								550,		{"","",-1} 	},
			{"H_Cap_grn_BI",				"",								550,		{"","",-1} 	},
			{"H_Cap_oli",					"",								550,		{"","",-1} 	},
			{"H_Cap_red",					"",								550,		{"","",-1} 	},
			{"H_Cap_tan",					"",								550,		{"","",-1} 	},
			{"H_StrawHat",					"Straw Fedora",					625,		{"","",-1} 	}
		};
		goggles[] = {
			{"G_Shades_Black",				"",								1600,		{"","",-1} 	},
			{"G_Shades_Blue",				"",								1600,		{"","",-1} 	},
			{"G_Sport_Blackred",			"",								1600,		{"","",-1} 	},
			{"G_Sport_Checkered",			"",								1600,		{"","",-1} 	},
			{"G_Sport_Blackyellow",			"",								1600,		{"","",-1} 	},
			{"G_Sport_BlackWhite",			"",								1600,		{"","",-1} 	},
			{"G_Squares",					"",								1500,		{"","",-1} 	},
			{"G_Lowprofile",				"",								1500,		{"","",-1} 	},
			{"G_Balaclava_blk",				"",								1500,		{"","",-1} 	},
			{"G_Balaclava_lowprofile",		"",								1500,		{"","",-1} 	},
			{"G_Balaclava_combat",			"",								1500,		{"","",-1} 	},
			{"G_Balaclava_oli",				"",								1500,		{"","",-1}	},
			{"G_Bandanna_aviator",			"",								1500,		{"","",-1} 	},
			{"G_Bandanna_beast",			"",								1500,		{"","",-1} 	},
			{"G_Bandanna_tan",				"",								1500,		{"","",-1} 	},
			{"G_Bandanna_sport",			"",								1500,		{"","",-1} 	},
			{"G_Bandanna_blk",				"",								1500,		{"","",-1} 	},
			{"G_Bandanna_oli",				"",								1500,		{"","",-1} 	},
			{"G_Bandanna_shades",			"",								1500,		{"","",-1} 	},
			{"G_Combat",					"",								1600,		{"","",-1} 	}
		};
		vests[] = {
			{"V_Rangemaster_belt",			"",								10000,		{"","",-1} 	}
		};
		backpacks[] = {
			{"B_Carryall_oli",				"",								8000,		{"","",-1} 	},
			{"B_Carryall_cbr",				"",								8000,		{"","",-1} 	},
			{"B_Carryall_khk",				"",								8000,		{"","",-1} 	}
		};
	};
	
	class pres {
		title 		= "Presse Ausrüstung";
		license		= "";
		side 		= "civ";
		token 		= "";
		level[] 	= {""};
		uniforms[] 	= {
			{" U_C_Journalist",		"Journalistenkleidung",					550,	{"","",-1} 	}
			
		};
		headgear[] 	= {
			{"H_Helmet_Skate",			"Schutzhelm Krisengebiet",				7500,	{"","",-1} 	},
			{"H_Cap_press",				"Cap Presse",							250,	{"","",-1} 	}
			
		};
		goggles[] = {
			{"G_Shades_Black",			"",								225,	{"","",-1} 	},
			{"G_Shades_Blue",			"",								220,	{"","",-1} 	},
			{"G_Sport_Blackred",		"",								220,	{"","",-1}	},
			{"G_Sport_Checkered",		"",								220,	{"","",-1}  },
			{"G_Sport_Blackyellow",		"",								220,	{"","",-1} 	},
			{"G_Sport_BlackWhite",		"",								220,	{"","",-1} 	},
			{"G_Squares",				"",								210,	{"","",-1} 	},
			{"G_Aviator",				"",								400,	{"","",-1} 	},
			{"G_Lady_Mirror",			"",								250,	{"","",-1} 	},
			{"G_Lady_Dark",				"",								250,	{"","",-1} 	},
			{"G_Lady_Blue",				"",								250,	{"","",-1} 	},
			{"G_Lowprofile",			"",								230,	{"","",-1} 	},
			{"G_Combat",				"",								255,	{"","",-1} 	}
		};
		vests[] = {
			{"V_Press_F",					"",							25000,	{"","",-1} 	}
			
		};
		backpacks[] = {
			{"B_AssaultPack_cbr",		"",								3500,	{"","",-1} 	}			
		};
	};	

	class admin {
		title 		= "Admin Klamotten";
		license		= "";
		side 		= "";
		token 		= "";
		level[] 	= {"life_adminlevel", "SCALAR", 3 , "Da musste schon Adminrechte haben! Mimimimi"};
		uniforms[] 	= {
			{"U_C_Poloshirt_blue",		"Poloshirt Blue",				5,	{"","",-1} 	},
			{"U_C_Poloshirt_burgundy",	"Poloshirt Burgundy",			5,	{"","",-1} 	},
			{"U_C_Poloshirt_redwhite",	"Poloshirt Red/White",			5,	{"","",-1} 	},
			{"U_C_Poloshirt_salmon",	"Poloshirt Salmon",				5,	{"","",-1} 	},
			{"U_C_Poloshirt_stripped",	"Poloshirt stripped",			5,	{"","",-1} 	},
			{"U_C_Poloshirt_tricolour",	"Poloshirt Tricolor",			5,	{"","",-1} 	},
			{"U_C_Poor_2",				"Rag tagged clothes",			5,	{"","",-1} 	},
			
			{"U_C_man_sport_1_F",		"Shirt u Bermuda",					5,	{"","",-1} 	},
			{"U_C_man_sport_2_F",		"Shirt u Shorts orange/schwarz",	5,	{"","",-1} 	},
			{"U_C_man_sport_3_F",		"Shirt u Shorts blau",				5,	{"","",-1} 	},
			{"U_C_Man_casual_1_F",		"Polo u Hose blau/beige",			5,	{"","",-1} 	},
			{"U_C_Man_casual_2_F",		"Polo u Hose blau/weiß",			5,	{"","",-1} 	},
			{"U_C_Man_casual_3_F",		"Polo u Hose gruen/braun",			5,	{"","",-1} 	},
			{"U_C_Man_casual_4_F",		"Shirt u Shorts hellblau/grau",		5,	{"","",-1} 	},
			{"U_C_Man_casual_5_F",		"Shirt u Shorts gelb/blau",			5,	{"","",-1} 	},
			{"U_C_Man_casual_6_F",		"Shirt u Shorts orange/olive",		5,	{"","",-1} 	},
			{"U_IG_Guerilla2_1",		"Hemd u Hose blau/beige",			5,	{"","",-1} 	},
			{"U_IG_Guerilla2_2",		"Hemd u Hose kariert/grau",			5,	{"","",-1} 	},
			{"U_IG_Guerilla3_1",		"Jacke u Jeans ",					5,	{"","",-1} 	},
			{"U_IG_Guerilla2_3",		"Hemd u Hose blau/gruen",			5,	{"","",-1} 	},
			{"U_C_HunterBody_grn",		"Jagdkleidung",						5,	{"","",-1} 	},
			{"U_C_WorkerCoveralls",		"Mechanikeroverall schmutzig",		5,	{"","",-1} 	},
			{"U_NikosAgedBody",			"Big Boss",							5,	{"","",-1} 	},
			
			{"U_I_C_Soldier_Bandit_5_F",	"Muskelshirt Deluxe",			5,	{"","",-1} 	},
			{"U_I_C_Soldier_Bandit_1_F",	"Poloshirt Gruen",				5,	{"","",-1} 	},
			{"U_I_C_Soldier_Bandit_4_F",	"Hemd (kariert)",				5,	{"","",-1} 	},
			{"U_I_C_Soldier_Bandit_2_F",	"Totenkopfshirt",				5,	{"","",-1} 	},
			{"U_I_C_Soldier_Bandit_3_F",	"Braunes Shirt & Jeans",		5,	{"","",-1} 	},
			
			{"U_I_C_Soldier_Para_4_F",	"Tarnhose u Muskelshirt",			5,		{"","",-1} 	},
			{"U_IG_Guerrilla_6_1",		"Jagdanzug gruen",					5,		{"","",-1} 	},
			{"U_IG_Guerilla1_1",			"",								5,		{"","",-1} 	},
			{"U_I_G_Story_Protagonist_F",	"",								5,		{"","",-1} 	},
			{"U_I_G_resistanceLeader_F",	"",								5,		{"","",-1} 	},
			{"U_IG_leader",					"",								5,		{"","",-1} 	},
			{"U_B_CombatUniform_mcam",		"",								5,		{"","",-1} 	},
			{"U_B_HeliPilotCoveralls",		"",								5,		{"","",-1} 	},
			{"U_O_PilotCoveralls",			"",								5,		{"","",-1}	},
			{"U_B_PilotCoveralls",			"",								5,		{"","",-1} 	},
			{"U_I_pilotCoveralls",			"",								5,		{"","",-1} 	},
			{"U_I_HeliPilotCoveralls",		"",								5,		{"","",-1} 	},
			{"U_O_SpecopsUniform_ocamo",	"",								5,		{"","",-1} 	},
			{"U_O_SpecopsUniform_blk",		"",								5,		{"","",-1} 	},
			{"U_O_OfficerUniform_ocamo",	"",								5,		{"","",-1} 	},
			{"U_I_CombatUniform",			"",								5,		{"","",-1} 	},
			{"U_I_CombatUniform_tshirt",	"",								5,		{"","",-1} 	},
			{"U_I_OfficerUniform",			"",								5,		{"","",-1} 	},
			{"U_OG_leader",					"",								5,		{"","",-1} 	},
			{"U_BG_Guerilla2_1",			"",								5,		{"","",-1} 	},
			{"U_OG_Guerilla2_3",			"",								5,		{"","",-1} 	},
			{"U_O_PilotCoveralls",			"",								5,		{"","",-1} 	},
			
			{"U_B_T_Soldier_F",				"",								5,		{"","",-1} 	},
			{"U_B_T_Soldier_AR_F",			"",								5,		{"","",-1} 	},
			{"U_B_T_Soldier_SL_F",			"",								5,		{"","",-1} 	},
			{"U_B_CTRG_Soldier_F",			"",								5,		{"","",-1} 	},
			{"U_B_CTRG_Soldier_2_F",		"",								5,		{"","",-1} 	},
			{"U_B_CTRG_Soldier_3_F",		"",								5,		{"","",-1} 	},
			{"U_O_T_Soldier_F",				"",								5,		{"","",-1} 	},
			{"U_O_T_Officer_F",				"",								5,		{"","",-1} 	},
			{"U_I_C_Soldier_Para_1_F",		"",								5,		{"","",-1} 	},
			{"U_I_C_Soldier_Para_2_F",		"",								5,		{"","",-1} 	},
			{"U_I_C_Soldier_Para_3_F",		"",								5,		{"","",-1} 	},
			{"U_I_C_Soldier_Para_5_F",		"",								5,		{"","",-1} 	},
			{"U_B_CTRG_Soldier_urb_1_F",	"",								5,		{"","",-1} 	},
			{"U_B_CTRG_Soldier_urb_2_F",	"",								5,		{"","",-1} 	},
			{"U_B_CTRG_Soldier_urb_3_F",	"",								5,		{"","",-1} 	},
			{"U_B_T_Sniper_F",				"",								5,		{"","",-1} 	},
			{"U_O_T_Sniper_F",				"",								5,		{"","",-1} 	},
			{"U_B_GhillieSuit",				"",								5,		{"","",-1} 	},
			{"U_I_GhillieSuit",				"",								5,		{"","",-1} 	},
			{"U_O_GhillieSuit",				"",								5,		{"","",-1} 	},
			{"U_B_FullGhillie_ard",			"",								5,		{"","",-1} 	},
			{"U_B_FullGhillie_sard",		"",								5,		{"","",-1} 	},
			{"U_B_FullGhillie_lsh",			"",								5,		{"","",-1} 	},
			{"U_O_FullGhillie_ard",			"",								5,		{"","",-1} 	},
			{"U_O_FullGhillie_sard",		"",								5,		{"","",-1} 	},
			{"U_O_FullGhillie_lsh",			"",								5,		{"","",-1} 	},
			{"U_I_FullGhillie_ard",			"",								5,		{"","",-1} 	},
			{"U_I_FullGhillie_sard",		"",								5,		{"","",-1} 	},
			{"U_I_FullGhillie_lsh",			"",								5,		{"","",-1} 	},
			{"U_B_T_FullGhillie_tna_F",		"",								5,		{"","",-1} 	},
			{"U_O_T_FullGhillie_tna_F",		"",								5,		{"","",-1} 	},
			{"U_IG_Guerilla1_1",			"",								5,		{"","",-1} 	}

		};
		headgear[] 	= {
			{"H_Bandanna_camo",			"Camo Bandanna",				5,	{"","",-1} 	},
			{"H_Bandanna_surfer",		"Surfer Bandanna",				5,	{"","",-1} 	},
			{"H_Bandanna_gry",			"Grey Bandanna",				5,	{"","",-1} 	},
			{"H_Bandanna_cbr",			"",								5,	{"","",-1} 	},
			{"H_Bandanna_surfer",		"",								5,	{"","",-1} 	},
			{"H_Bandanna_khk",			"Khaki Bandanna",				5,	{"","",-1} 	},
			{"H_Bandanna_sgg",			"Sage Bandanna",				5,	{"","",-1} 	},
			{"H_StrawHat",				"Straw Fedora",					5,	{"","",-1} 	},
			{"H_BandMask_blk",			"Hat u Bandanna",				5,	{"","",-1} 	},
			{"H_Booniehat_tan",			"",								5,	{"","",-1} 	},
			{"H_Hat_blue",				"",								5,	{"","",-1} 	},
			{"H_Hat_brown",				"",								5,	{"","",-1} 	},
			{"H_Hat_checker",			"",								5,	{"","",-1} 	},
			{"H_Hat_grey",				"",								5,	{"","",-1} 	},
			{"H_Hat_tan",				"",								5,	{"","",-1} 	},
			{"H_Cap_blu",				"",								5,	{"","",-1} 	},
			{"H_Cap_grn",				"",								5,	{"","",-1} 	},
			{"H_Cap_grn_BI",			"",								5,	{"","",-1} 	},
			{"H_Cap_oli",				"",								5,	{"","",-1} 	},
			{"H_Cap_red",				"",								5,	{"","",-1} 	},
			{"H_Cap_tan",				"",								5,	{"","",-1} 	},
			{"H_Helmet_Skate",			"Arbeitsschutzhelm",			5,	{"","",-1} 	},
			{"H_Helmet_Skate",				"",							5,		{"","",-1} 	},
			{"H_HelmetB_TI_tna_F",			"",							5,		{"","",-1} 	},
			{"H_HelmetB_tna_F",				"",							5,		{"","",-1} 	},
			{"H_HelmetB_Enh_tna_F",			"",							5,		{"","",-1} 	},
			{"H_HelmetB_Light_tna_F",		"",							5,		{"","",-1} 	},
			{"H_HelmetSpecO_ghex_F",		"",								5,		{"","",-1} 	},
			{"H_HelmetLeaderO_ghex_F",		"",								5,		{"","",-1} 	},
			{"H_HelmetO_ghex_F",			"",								5,		{"","",-1} 	},
			{"H_HelmetCrew_O_ghex_F",		"",								5,		{"","",-1} 	},
			{"H_MilCap_tna_F",				"",								5,		{"","",-1} 	},
			{"H_MilCap_ghex_F",				"",								5,		{"","",-1} 	},
			{"H_HelmetB",					"",								5,		{"","",-1} 	},
			{"H_HelmetB_camo",				"",								5,		{"","",-1} 	},
			{"H_HelmetB_paint",				"",								5,		{"","",-1} 	},
			{"H_HelmetB_light",				"",								5,		{"","",-1} 	},
			{"H_Booniehat_khk",				"",								5,		{"","",-1} 	},
			{"H_Booniehat_indp",			"",								5,		{"","",-1} 	},
			{"H_Booniehat_mcamo",			"",								5,		{"","",-1} 	},
			{"H_Booniehat_grn",				"",								5,		{"","",-1} 	},
			{"H_Booniehat_dirty",			"",								5,		{"","",-1} 	},
			{"H_Booniehat_dgtl",			"",								5,		{"","",-1} 	},
			{"H_Booniehat_khk_hs",			"",								5,		{"","",-1} 	},
			{"H_HelmetB_plain_mcamo",		"",								5,		{"","",-1} 	},
			{"H_HelmetB_plain_blk",			"",								5,		{"","",-1} 	},
			{"H_HelmetSpecB",				"",								5,		{"","",-1} 	},
			{"H_HelmetSpecB_paint1",		"",								5,		{"","",-1} 	},
			{"H_HelmetSpecB_paint2",		"",								5,		{"","",-1} 	},
			{"H_HelmetSpecB_blk",			"",								5,		{"","",-1} 	},
			{"H_HelmetIA_camo",				"",								5,		{"","",-1} 	},
			{"H_Helmet_Kerry",				"",								5,		{"","",-1}	},
			{"H_HelmetB_grass",				"",								5,		{"","",-1} 	},
			{"H_HelmetB_snakeskin",			"",								5,		{"","",-1} 	},
			{"H_HelmetB_desert",			"",								5,		{"","",-1} 	},
			{"H_HelmetB_black",				"",								5,		{"","",-1} 	},
			{"H_HelmetB_sand",				"",								5,		{"","",-1} 	},
			{"H_Cap_headphones",			"",								5,		{"","",-1} 	},
			{"H_Cap_brn_SPECOPS",			"",								5,		{"","",-1} 	},
			{"H_Cap_tan_specops_US",		"",								5,		{"","",-1} 	},
			{"H_HelmetCrew_B",				"",								5,		{"","",-1} 	},
			{"H_HelmetCrew_O",				"",								5,		{"","",-1} 	},
			{"H_HelmetCrew_I",				"",								5,		{"","",-1} 	},
			{"H_PilotHelmetFighter_B",		"",								5,		{"","",-1} 	},
			{"H_PilotHelmetFighter_O",		"",								5,		{"","",-1} 	},
			{"H_PilotHelmetFighter_I",		"",								5,		{"","",-1} 	},
			{"H_PilotHelmetHeli_B",			"",								5,		{"","",-1} 	},
			{"H_PilotHelmetHeli_O",			"",								5,		{"","",-1} 	},
			{"H_PilotHelmetHeli_I",			"",								5,		{"","",-1} 	},
			{"H_CrewHelmetHeli_B",			"",								5,		{"","",-1} 	},
			{"H_CrewHelmetHeli_O",			"",								5,		{"","",-1} 	},
			{"H_CrewHelmetHeli_I",			"",								5,		{"","",-1} 	},
			{"H_HelmetO_ocamo",				"",								5,		{"","",-1} 	},
			{"H_HelmetLeaderO_ocamo",		"",								5,		{"","",-1} 	},
			{"H_MilCap_ocamo",				"",								5,		{"","",-1} 	},
			{"H_MilCap_blue",				"",								5,		{"","",-1} 	},
			{"H_HelmetB_light_grass",		"",								5,		{"","",-1}	},
			{"H_BandMask_reaper",			"",								5,		{"","",-1}	},
			{"H_HelmetSpecO_blk",			"",								5,		{"","",-1}	},
			{"H_HelmetB_light_black",		"",								5,		{"","",-1} 	},
			{"H_Bandanna_khk",				"",								5,		{"","",-1} 	},
			{"H_Bandanna_cbr",				"",								5,		{"","",-1} 	},
			{"H_Bandanna_sgg",				"",								5,		{"","",-1} 	},
			{"H_Bandanna_gry",				"",								5,		{"","",-1} 	},
			{"H_Bandanna_camo",				"",								5,		{"","",-1} 	},
			{"H_Bandanna_mcamo",			"",								5,		{"","",-1} 	},
			{"H_Shemag_khk",				"",								5,		{"","",-1} 	},
			{"H_Shemag_tan",				"",								5,		{"","",-1} 	},
			{"H_Shemag_olive",				"",								5,		{"","",-1} 	},
			{"H_Shemag_olive_hs",			"",								5,		{"","",-1} 	},
			{"H_ShemagOpen_khk",			"",								5,		{"","",-1}	},
			{"H_ShemagOpen_tan",			"",								5,		{"","",-1} 	},
			{"H_Beret_brn_SF",				"",								5,		{"","",-1} 	},
			{"H_Beret_Colonel",				"",								5,		{"","",-1} 	},
			{"H_Watchcap_blk",				"",								5,		{"","",-1} 	},
			{"H_Watchcap_khk",				"",								5,		{"","",-1} 	},
			{"H_Watchcap_camo",				"",								5,		{"","",-1} 	},
			{"H_Watchcap_sgg",				"",								5,		{"","",-1} 	},
			{"H_TurbanO_blk",				"",								5,		{"","",-1} 	},
			{"H_Hat_brown",					"",								5,		{"","",-1} 	},
			{"H_Hat_camo",					"",								5,		{"","",-1} 	},
			{"H_Watchcap_sgg",				"",								5,		{"","",-1} 	},
		
			{"H_Booniehat_tan",			"Boonie Hat Sand",				5,	{"","",-1} 	},
			{"H_Booniehat_mcamo",		"Boonie Hat MTP",				5,	{"","",-1} 	},
			{"H_Booniehat_dirty",		"Boonie Hat Dreckig",			5,	{"","",-1} 	},
			{"H_Booniehat_oli",			"Boonie Hat Olive",				5,	{"","",-1} 	},
			{"H_Booniehat_tna_F",		"Boonie Hat Tropen",			5,	{"","",-1} 	},
			{"H_Booniehat_dgtl",		"Boonie Hat Digi Gruen",		5,	{"","",-1} 	}
		};
		goggles[] = {
			{"G_Shades_Black",			"",								5,	{"","",-1} 	},
			{"G_Shades_Blue",			"",								5,	{"","",-1} 	},
			{"G_Sport_Blackred",		"",								5,	{"","",-1}	},
			{"G_Sport_Checkered",		"",								5,	{"","",-1}  },
			{"G_Sport_Blackyellow",		"",								5,	{"","",-1} 	},
			{"G_Sport_BlackWhite",		"",								5,	{"","",-1} 	},
			{"G_Squares",				"",								5,	{"","",-1} 	},
			{"G_Aviator",				"",								5,	{"","",-1} 	},
			{"G_Lady_Mirror",			"",								5,	{"","",-1} 	},
			{"G_Lady_Dark",				"",								5,	{"","",-1} 	},
			{"G_Lady_Blue",				"",								5,	{"","",-1} 	},
			{"G_Lowprofile",			"",								5,	{"","",-1} 	},
			{"G_Combat",				"",								5,	{"","",-1} 	},
			{"G_Shades_Black",				"",								5,		{"","",-1} 	},
			{"G_Shades_Blue",				"",								5,		{"","",-1} 	},
			{"G_Sport_Blackred",			"",								5,		{"","",-1} 	},
			{"G_Sport_Checkered",			"",								5,		{"","",-1} 	},
			{"G_Sport_Blackyellow",			"",								5,		{"","",-1} 	},
			{"G_Sport_BlackWhite",			"",								5,		{"","",-1} 	},
			{"G_Squares",					"",								5,		{"","",-1} 	},
			{"G_Lowprofile",				"",								5,		{"","",-1} 	},
			{"G_Balaclava_blk",				"",								5,		{"","",-1} 	},
			{"G_Balaclava_lowprofile",		"",								5,		{"","",-1} 	},
			{"G_Balaclava_combat",			"",								5,		{"","",-1} 	},
			{"G_Balaclava_oli",				"",								5,		{"","",-1} 	},
			{"G_Bandanna_aviator",			"",								5,		{"","",-1} 	},
			{"G_Bandanna_beast",			"",								5,		{"","",-1} 	},
			{"G_Bandanna_tan",				"",								5,		{"","",-1} 	},
			{"G_Bandanna_sport",			"",								5,		{"","",-1} 	},
			{"G_Bandanna_blk",				"",								5,		{"","",-1} 	},
			{"G_Bandanna_oli",				"",								5,		{"","",-1} 	},
			{"G_Bandanna_shades",			"",								5,		{"","",-1} 	},
			{"G_Combat",					"",								5,		{"","",-1} 	}
		};
		vests[] = {			
			{"V_Rangemaster_belt",		"",								5,	{"","",-1} 	},
			{"V_BandollierB_ghex_F",	"",							 	5,	{"","",-1} 	},
			{"V_Rangemaster_belt",			"",								5,		{"","",-1} 	},
			{"V_BandollierB_khk",			"",								5,		{"","",-1} 	},
			{"V_BandollierB_cbr",			"",								5,		{"","",-1} 	},
			{"V_BandollierB_rgr",			"",								5,		{"","",-1} 	},
			{"V_BandollierB_blk",			"",								5,		{"","",-1} 	},
			{"V_BandollierB_oli",			"",								5,		{"","",-1} 	},
			{"V_PlateCarrier1_rgr",			"",								5,		{"","",-1}	},
			{"V_PlateCarrier1_tna_F",		"",								5,		{"","",-1}	},
			{"V_PlateCarrier2_rgr",			"",								5,		{"","",-1} 	},
			{"V_PlateCarrier2_tna_F",		"",								5,		{"","",-1} 	},
			{"V_PlateCarrier3_rgr",			"",								5,		{"","",-1} 	},
			{"V_PlateCarrier1_rgr_noflag_F",			"",					5,		{"","",-1} 	},
			{"V_PlateCarrier2_rgr_noflag_F",			"",					5,		{"","",-1} 	},
			{"V_PlateCarrier1_blk",			"",								5,		{"","",-1} 	},
			{"V_Chestrig_khk",				"",								5,		{"","",-1} 	},
			{"V_Chestrig_rgr",				"",								5,		{"","",-1} 	},
			{"V_TacVest_khk",				"",								5,		{"","",-1} 	},
			{"V_TacVest_brn",				"",								5,		{"","",-1} 	},
			{"V_TacVest_oli",				"",								5,		{"","",-1} 	},
			{"V_TacVest_blk",				"",								5,		{"","",-1} 	},
			{"V_TacVest_camo",				"",								5,		{"","",-1} 	},
			{"V_TacVestIR_blk",				"",								5,		{"","",-1} 	},
			{"V_TacVestCamo_khk",			"",								5,		{"","",-1} 	},
			{"V_HarnessO_ghex_F",			"",								5,		{"","",-1} 	},
			{"V_HarnessOGL_ghex_F",			"",								5,		{"","",-1} 	},
			{"V_HarnessOGL_gry",			"",								5,		{"","",-1} 	},
			{"V_HarnessOSpec_brn",			"",								5,		{"","",-1} 	},
			{"V_HarnessOSpec_gry",			"",								5,		{"","",-1} 	},
			{"V_Chestrig_blk",				"",								5,		{"","",-1} 	},
			{"V_Chestrig_oli",				"",								5,		{"","",-1} 	},
			{"V_PlateCarrierIA1_dgtl",		"",								5,		{"","",-1} 	},
			{"V_PlateCarrierSpec_rgr",		"",								5,		{"","",-1} 	},
			{"V_PlateCarrierSpec_tna_F",	"",								5,		{"","",-1} 	},
			{"V_PlateCarrierIA2_dgtl",		"",								5,		{"","",-1} 	},
			{"V_PlateCarrierGL_rgr",		"",								5,		{"","",-1} 	},
			{"V_PlateCarrierGL_tna_F",		"",								5,		{"","",-1} 	},
			{"V_PlateCarrier_Kerry",		"",								5,		{"","",-1} 	},
			{"V_PlateCarrierIAGL_dgtl",		"",								5,		{"","",-1} 	}

		};
		backpacks[] = {
			{"B_AssaultPack_cbr",		"",								5,	{"","",-1} 	},
			{"B_Kitbag_mcamo",			"",								5,	{"","",-1} 	},
			{"B_TacticalPack_oli",		"",								5,	{"","",-1} 	},
			{"B_FieldPack_ocamo",		"",								5,	{"","",-1} 	},
			{"B_Bergen_sgg",			"",								5,	{"","",-1} 	},
			{"B_Kitbag_cbr",			"",								5,	{"","",-1} 	},
			{"B_Carryall_oli",			"",								5,	{"","",-1} 	},
			{"B_Carryall_khk",			"",								5,	{"","",-1} 	},
			
			
			{"B_AssaultPack_cbr",			"",								5,		{"","",-1} 	},
			{"B_AssaultPack_khk",			"",								5,		{"","",-1} 	},
			{"B_AssaultPack_dgtl",			"",								5,		{"","",-1} 	},
			{"B_AssaultPack_rgr",			"",								5,		{"","",-1} 	},
			{"B_AssaultPack_sgg",			"",								5,		{"","",-1} 	},
			{"B_AssaultPack_blk",			"",								5,		{"","",-1} 	},
			{"B_AssaultPack_mcamo",			"",								5,		{"","",-1} 	},
			{"B_Kitbag_mcamo",				"",								5,		{"","",-1} 	},
			{"B_Kitbag_sgg",				"",								5,		{"","",-1} 	},
			{"B_Kitbag_cbr",				"",								5,		{"","",-1} 	},
			{"B_TacticalPack_oli",			"",								5,		{"","",-1} 	},
			{"B_FieldPack_ocamo",			"",								5,		{"","",-1} 	},
			{"B_Bergen_sgg",				"",								5,		{"","",-1} 	},
			{"B_Bergen_mcamo",				"",								5,		{"","",-1} 	},
			{"B_Bergen_rgr",				"",								5,		{"","",-1} 	},
			{"B_Bergen_blk",				"",								5,		{"","",-1}	},
			{"B_Kitbag_cbr",				"",								5,		{"","",-1} 	},
			{"B_Carryall_oli",				"",								5,		{"","",-1}	},
			{"B_Carryall_ocamo",			"",								5,		{"","",-1} 	},
			{"B_Carryall_oucamo",			"",								5,		{"","",-1} 	},
			{"B_Carryall_mcamo",			"",								5,		{"","",-1} 	},
			{"B_Carryall_cbr",				"",								5,		{"","",-1} 	},
			{"B_Carryall_khk",				"",								5,		{"","",-1} 	},
			
			{"B_ViperLightHarness_khk_F",	"",								5,	{"","",-1} 	},
			{"B_ViperLightHarness_oli_F",	"",								5,	{"","",-1} 	},
			{"B_ViperHarness_oli_F",		"",								5,	{"","",-1} 	},
			{"B_ViperHarness_khk_F",		"",								5,	{"","",-1} 	},
			{"B_Bergen_hex_F",				"",								5,	{"","",-1} 	},
			{"B_Bergen_tna_F",				"",								5,	{"","",-1} 	}
	
		};
	};
	
	class tokenShop {
		title 		= "Event Klamotten";
		license		= "";
		side 		= "";
		token 		= "tokenc1";
		level[] 	= {""};
		uniforms[] 	= {
			{"U_C_Poloshirt_blue",		"Poloshirt Blue",				5,	{"","",-1} 	},
			{"U_C_Poloshirt_burgundy",	"Poloshirt Burgundy",			5,	{"","",-1} 	},
			{"U_C_Poloshirt_redwhite",	"Poloshirt Red/White",			5,	{"","",-1} 	},
			{"U_C_Poloshirt_salmon",	"Poloshirt Salmon",				5,	{"","",-1} 	},
			{"U_C_Poloshirt_stripped",	"Poloshirt stripped",			5,	{"","",-1} 	},
			{"U_C_Poloshirt_tricolour",	"Poloshirt Tricolor",			5,	{"","",-1} 	},
			{"U_C_Poor_2",				"Rag tagged clothes",			5,	{"","",-1} 	},
			
			{"U_C_man_sport_1_F",		"Shirt u Bermuda",					5,	{"","",-1} 	},
			{"U_C_man_sport_2_F",		"Shirt u Shorts orange/schwarz",	5,	{"","",-1} 	},
			{"U_C_man_sport_3_F",		"Shirt u Shorts blau",				5,	{"","",-1} 	},
			{"U_C_Man_casual_1_F",		"Polo u Hose blau/beige",			5,	{"","",-1} 	},
			{"U_C_Man_casual_2_F",		"Polo u Hose blau/weiß",			5,	{"","",-1} 	},
			{"U_C_Man_casual_3_F",		"Polo u Hose gruen/braun",			5,	{"","",-1} 	},
			{"U_C_Man_casual_4_F",		"Shirt u Shorts hellblau/grau",		5,	{"","",-1} 	},
			{"U_C_Man_casual_5_F",		"Shirt u Shorts gelb/blau",			5,	{"","",-1} 	},
			{"U_C_Man_casual_6_F",		"Shirt u Shorts orange/olive",		5,	{"","",-1} 	},
			{"U_IG_Guerilla2_1",		"Hemd u Hose blau/beige",			5,	{"","",-1} 	},
			{"U_IG_Guerilla2_2",		"Hemd u Hose kariert/grau",			5,	{"","",-1} 	},
			{"U_IG_Guerilla3_1",		"Jacke u Jeans ",					5,	{"","",-1} 	},
			{"U_IG_Guerilla2_3",		"Hemd u Hose blau/gruen",			5,	{"","",-1} 	},
			{"U_C_HunterBody_grn",		"Jagdkleidung",						5,	{"","",-1} 	},
			{"U_C_WorkerCoveralls",		"Mechanikeroverall schmutzig",		5,	{"","",-1} 	},
			{"U_NikosAgedBody",			"Big Boss",							5,	{"","",-1} 	},
			
			{"U_I_C_Soldier_Bandit_5_F",	"Muskelshirt Deluxe",			5,	{"","",-1} 	},
			{"U_I_C_Soldier_Bandit_1_F",	"Poloshirt Gruen",				5,	{"","",-1} 	},
			{"U_I_C_Soldier_Bandit_4_F",	"Hemd (kariert)",				5,	{"","",-1} 	},
			{"U_I_C_Soldier_Bandit_2_F",	"Totenkopfshirt",				5,	{"","",-1} 	},
			{"U_I_C_Soldier_Bandit_3_F",	"Braunes Shirt & Jeans",		5,	{"","",-1} 	},
			
			{"U_I_C_Soldier_Para_4_F",	"Tarnhose + Muskelshirt",			5,		{"","",-1} 	},
			{"U_IG_Guerrilla_6_1",		"Jagdanzug gruen",					5,		{"","",-1} 	},
			{"U_IG_Guerilla1_1",			"",								5,		{"","",-1} 	},
			{"U_I_G_Story_Protagonist_F",	"",								5,		{"","",-1} 	},
			{"U_I_G_resistanceLeader_F",	"",								5,		{"","",-1} 	},
			{"U_IG_leader",					"",								5,		{"","",-1} 	},
			{"U_B_CombatUniform_mcam",		"",								5,		{"","",-1} 	},
			{"U_B_HeliPilotCoveralls",		"",								5,		{"","",-1} 	},
			{"U_O_PilotCoveralls",			"",								5,		{"","",-1}	},
			{"U_B_PilotCoveralls",			"",								5,		{"","",-1} 	},
			{"U_I_pilotCoveralls",			"",								5,		{"","",-1} 	},
			{"U_I_HeliPilotCoveralls",		"",								5,		{"","",-1} 	},
			{"U_O_SpecopsUniform_ocamo",	"",								5,		{"","",-1} 	},
			{"U_O_SpecopsUniform_blk",		"",								5,		{"","",-1} 	},
			{"U_O_OfficerUniform_ocamo",	"",								5,		{"","",-1} 	},
			{"U_I_CombatUniform",			"",								5,		{"","",-1} 	},
			{"U_I_CombatUniform_tshirt",	"",								5,		{"","",-1} 	},
			{"U_I_OfficerUniform",			"",								5,		{"","",-1} 	},
			{"U_OG_leader",					"",								5,		{"","",-1} 	},
			{"U_BG_Guerilla2_1",			"",								5,		{"","",-1} 	},
			{"U_OG_Guerilla2_3",			"",								5,		{"","",-1} 	},
			{"U_O_PilotCoveralls",			"",								5,		{"","",-1} 	},
			
			{"U_B_T_Soldier_F",				"",								5,		{"","",-1} 	},
			{"U_B_T_Soldier_AR_F",			"",								5,		{"","",-1} 	},
			{"U_B_T_Soldier_SL_F",			"",								5,		{"","",-1} 	},
			{"U_B_CTRG_Soldier_F",			"",								5,		{"","",-1} 	},
			{"U_B_CTRG_Soldier_2_F",		"",								5,		{"","",-1} 	},
			{"U_B_CTRG_Soldier_3_F",		"",								5,		{"","",-1} 	},
			{"U_O_T_Soldier_F",				"",								5,		{"","",-1} 	},
			{"U_O_T_Officer_F",				"",								5,		{"","",-1} 	},
			{"U_I_C_Soldier_Para_1_F",		"",								5,		{"","",-1} 	},
			{"U_I_C_Soldier_Para_2_F",		"",								5,		{"","",-1} 	},
			{"U_I_C_Soldier_Para_3_F",		"",								5,		{"","",-1} 	},
			{"U_I_C_Soldier_Para_5_F",		"",								5,		{"","",-1} 	},
			{"U_B_CTRG_Soldier_urb_1_F",	"",								5,		{"","",-1} 	},
			{"U_B_CTRG_Soldier_urb_2_F",	"",								5,		{"","",-1} 	},
			{"U_B_CTRG_Soldier_urb_3_F",	"",								5,		{"","",-1} 	},
			{"U_B_T_Sniper_F",				"",								5,		{"","",-1} 	},
			{"U_O_T_Sniper_F",				"",								5,		{"","",-1} 	},
			{"U_B_GhillieSuit",				"",								5,		{"","",-1} 	},
			{"U_I_GhillieSuit",				"",								5,		{"","",-1} 	},
			{"U_O_GhillieSuit",				"",								5,		{"","",-1} 	},
			{"U_B_FullGhillie_ard",			"",								5,		{"","",-1} 	},
			{"U_B_FullGhillie_sard",		"",								5,		{"","",-1} 	},
			{"U_B_FullGhillie_lsh",			"",								5,		{"","",-1} 	},
			{"U_O_FullGhillie_ard",			"",								5,		{"","",-1} 	},
			{"U_O_FullGhillie_sard",		"",								5,		{"","",-1} 	},
			{"U_O_FullGhillie_lsh",			"",								5,		{"","",-1} 	},
			{"U_I_FullGhillie_ard",			"",								5,		{"","",-1} 	},
			{"U_I_FullGhillie_sard",		"",								5,		{"","",-1} 	},
			{"U_I_FullGhillie_lsh",			"",								5,		{"","",-1} 	},
			{"U_B_T_FullGhillie_tna_F",		"",								5,		{"","",-1} 	},
			{"U_O_T_FullGhillie_tna_F",		"",								5,		{"","",-1} 	},
			{"U_IG_Guerilla1_1",			"",								5,		{"","",-1} 	}

		};
		headgear[] 	= {
			{"H_Bandanna_camo",			"Camo Bandanna",				5,	{"","",-1} 	},
			{"H_Bandanna_surfer",		"Surfer Bandanna",				5,	{"","",-1} 	},
			{"H_Bandanna_gry",			"Grey Bandanna",				5,	{"","",-1} 	},
			{"H_Bandanna_cbr",			"",								5,	{"","",-1} 	},
			{"H_Bandanna_surfer",		"",								5,	{"","",-1} 	},
			{"H_Bandanna_khk",			"Khaki Bandanna",				5,	{"","",-1} 	},
			{"H_Bandanna_sgg",			"Sage Bandanna",				5,	{"","",-1} 	},
			{"H_StrawHat",				"Straw Fedora",					5,	{"","",-1} 	},
			{"H_BandMask_blk",			"Hat & Bandanna",				5,	{"","",-1} 	},
			{"H_Booniehat_tan",			"",								5,	{"","",-1} 	},
			{"H_Hat_blue",				"",								5,	{"","",-1} 	},
			{"H_Hat_brown",				"",								5,	{"","",-1} 	},
			{"H_Hat_checker",			"",								5,	{"","",-1} 	},
			{"H_Hat_grey",				"",								5,	{"","",-1} 	},
			{"H_Hat_tan",				"",								5,	{"","",-1} 	},
			{"H_Cap_blu",				"",								5,	{"","",-1} 	},
			{"H_Cap_grn",				"",								5,	{"","",-1} 	},
			{"H_Cap_grn_BI",			"",								5,	{"","",-1} 	},
			{"H_Cap_oli",				"",								5,	{"","",-1} 	},
			{"H_Cap_red",				"",								5,	{"","",-1} 	},
			{"H_Cap_tan",				"",								5,	{"","",-1} 	},
			{"H_Helmet_Skate",			"Arbeitsschutzhelm",			5,	{"","",-1} 	},
			{"H_Helmet_Skate",				"",							5,		{"","",-1} 	},
			{"H_HelmetB_TI_tna_F",			"",							5,		{"","",-1} 	},
			{"H_HelmetB_tna_F",				"",							5,		{"","",-1} 	},
			{"H_HelmetB_Enh_tna_F",			"",							5,		{"","",-1} 	},
			{"H_HelmetB_Light_tna_F",		"",							5,		{"","",-1} 	},
			{"H_HelmetSpecO_ghex_F",		"",								5,		{"","",-1} 	},
			{"H_HelmetLeaderO_ghex_F",		"",								5,		{"","",-1} 	},
			{"H_HelmetO_ghex_F",			"",								5,		{"","",-1} 	},
			{"H_HelmetCrew_O_ghex_F",		"",								5,		{"","",-1} 	},
			{"H_MilCap_tna_F",				"",								5,		{"","",-1} 	},
			{"H_MilCap_ghex_F",				"",								5,		{"","",-1} 	},
			{"H_HelmetB",					"",								5,		{"","",-1} 	},
			{"H_HelmetB_camo",				"",								5,		{"","",-1} 	},
			{"H_HelmetB_paint",				"",								5,		{"","",-1} 	},
			{"H_HelmetB_light",				"",								5,		{"","",-1} 	},
			{"H_Booniehat_khk",				"",								5,		{"","",-1} 	},
			{"H_Booniehat_indp",			"",								5,		{"","",-1} 	},
			{"H_Booniehat_mcamo",			"",								5,		{"","",-1} 	},
			{"H_Booniehat_grn",				"",								5,		{"","",-1} 	},
			{"H_Booniehat_dirty",			"",								5,		{"","",-1} 	},
			{"H_Booniehat_dgtl",			"",								5,		{"","",-1} 	},
			{"H_Booniehat_khk_hs",			"",								5,		{"","",-1} 	},
			{"H_HelmetB_plain_mcamo",		"",								5,		{"","",-1} 	},
			{"H_HelmetB_plain_blk",			"",								5,		{"","",-1} 	},
			{"H_HelmetSpecB",				"",								5,		{"","",-1} 	},
			{"H_HelmetSpecB_paint1",		"",								5,		{"","",-1} 	},
			{"H_HelmetSpecB_paint2",		"",								5,		{"","",-1} 	},
			{"H_HelmetSpecB_blk",			"",								5,		{"","",-1} 	},
			{"H_HelmetIA_camo",				"",								5,		{"","",-1} 	},
			{"H_Helmet_Kerry",				"",								5,		{"","",-1}	},
			{"H_HelmetB_grass",				"",								5,		{"","",-1} 	},
			{"H_HelmetB_snakeskin",			"",								5,		{"","",-1} 	},
			{"H_HelmetB_desert",			"",								5,		{"","",-1} 	},
			{"H_HelmetB_black",				"",								5,		{"","",-1} 	},
			{"H_HelmetB_sand",				"",								5,		{"","",-1} 	},
			{"H_Cap_headphones",			"",								5,		{"","",-1} 	},
			{"H_Cap_brn_SPECOPS",			"",								5,		{"","",-1} 	},
			{"H_Cap_tan_specops_US",		"",								5,		{"","",-1} 	},
			{"H_HelmetCrew_B",				"",								5,		{"","",-1} 	},
			{"H_HelmetCrew_O",				"",								5,		{"","",-1} 	},
			{"H_HelmetCrew_I",				"",								5,		{"","",-1} 	},
			{"H_PilotHelmetFighter_B",		"",								5,		{"","",-1} 	},
			{"H_PilotHelmetFighter_O",		"",								5,		{"","",-1} 	},
			{"H_PilotHelmetFighter_I",		"",								5,		{"","",-1} 	},
			{"H_PilotHelmetHeli_B",			"",								5,		{"","",-1} 	},
			{"H_PilotHelmetHeli_O",			"",								5,		{"","",-1} 	},
			{"H_PilotHelmetHeli_I",			"",								5,		{"","",-1} 	},
			{"H_CrewHelmetHeli_B",			"",								5,		{"","",-1} 	},
			{"H_CrewHelmetHeli_O",			"",								5,		{"","",-1} 	},
			{"H_CrewHelmetHeli_I",			"",								5,		{"","",-1} 	},
			{"H_HelmetO_ocamo",				"",								5,		{"","",-1} 	},
			{"H_HelmetLeaderO_ocamo",		"",								5,		{"","",-1} 	},
			{"H_MilCap_ocamo",				"",								5,		{"","",-1} 	},
			{"H_MilCap_blue",				"",								5,		{"","",-1} 	},
			{"H_HelmetB_light_grass",		"",								5,		{"","",-1}	},
			{"H_BandMask_reaper",			"",								5,		{"","",-1}	},
			{"H_HelmetSpecO_blk",			"",								5,		{"","",-1}	},
			{"H_HelmetB_light_black",		"",								5,		{"","",-1} 	},
			{"H_Bandanna_khk",				"",								5,		{"","",-1} 	},
			{"H_Bandanna_cbr",				"",								5,		{"","",-1} 	},
			{"H_Bandanna_sgg",				"",								5,		{"","",-1} 	},
			{"H_Bandanna_gry",				"",								5,		{"","",-1} 	},
			{"H_Bandanna_camo",				"",								5,		{"","",-1} 	},
			{"H_Bandanna_mcamo",			"",								5,		{"","",-1} 	},
			{"H_Shemag_khk",				"",								5,		{"","",-1} 	},
			{"H_Shemag_tan",				"",								5,		{"","",-1} 	},
			{"H_Shemag_olive",				"",								5,		{"","",-1} 	},
			{"H_Shemag_olive_hs",			"",								5,		{"","",-1} 	},
			{"H_ShemagOpen_khk",			"",								5,		{"","",-1}	},
			{"H_ShemagOpen_tan",			"",								5,		{"","",-1} 	},
			{"H_Beret_brn_SF",				"",								5,		{"","",-1} 	},
			{"H_Watchcap_blk",				"",								5,		{"","",-1} 	},
			{"H_Watchcap_khk",				"",								5,		{"","",-1} 	},
			{"H_Watchcap_camo",				"",								5,		{"","",-1} 	},
			{"H_Watchcap_sgg",				"",								5,		{"","",-1} 	},
			{"H_TurbanO_blk",				"",								5,		{"","",-1} 	},
			{"H_Hat_brown",					"",								5,		{"","",-1} 	},
			{"H_Hat_camo",					"",								5,		{"","",-1} 	},
			{"H_Watchcap_sgg",				"",								5,		{"","",-1} 	},
		
			{"H_Booniehat_tan",			"Boonie Hat Sand",				5,	{"","",-1} 	},
			{"H_Booniehat_mcamo",		"Boonie Hat MTP",				5,	{"","",-1} 	},
			{"H_Booniehat_dirty",		"Boonie Hat Dreckig",			5,	{"","",-1} 	},
			{"H_Booniehat_oli",			"Boonie Hat Olive",				5,	{"","",-1} 	},
			{"H_Booniehat_tna_F",		"Boonie Hat Tropen",			5,	{"","",-1} 	},
			{"H_Booniehat_dgtl",		"Boonie Hat Digi Gruen",		5,	{"","",-1} 	}
		};
		goggles[] = {
			{"G_Shades_Black",			"",								5,	{"","",-1} 	},
			{"G_Shades_Blue",			"",								5,	{"","",-1} 	},
			{"G_Sport_Blackred",		"",								5,	{"","",-1}	},
			{"G_Sport_Checkered",		"",								5,	{"","",-1}  },
			{"G_Sport_Blackyellow",		"",								5,	{"","",-1} 	},
			{"G_Sport_BlackWhite",		"",								5,	{"","",-1} 	},
			{"G_Squares",				"",								5,	{"","",-1} 	},
			{"G_Aviator",				"",								5,	{"","",-1} 	},
			{"G_Lady_Mirror",			"",								5,	{"","",-1} 	},
			{"G_Lady_Dark",				"",								5,	{"","",-1} 	},
			{"G_Lady_Blue",				"",								5,	{"","",-1} 	},
			{"G_Lowprofile",			"",								5,	{"","",-1} 	},
			{"G_Combat",				"",								5,	{"","",-1} 	},
			{"G_Shades_Black",				"",								5,		{"","",-1} 	},
			{"G_Shades_Blue",				"",								5,		{"","",-1} 	},
			{"G_Sport_Blackred",			"",								5,		{"","",-1} 	},
			{"G_Sport_Checkered",			"",								5,		{"","",-1} 	},
			{"G_Sport_Blackyellow",			"",								5,		{"","",-1} 	},
			{"G_Sport_BlackWhite",			"",								5,		{"","",-1} 	},
			{"G_Squares",					"",								5,		{"","",-1} 	},
			{"G_Lowprofile",				"",								5,		{"","",-1} 	},
			{"G_Balaclava_blk",				"",								5,		{"","",-1} 	},
			{"G_Balaclava_lowprofile",		"",								5,		{"","",-1} 	},
			{"G_Balaclava_combat",			"",								5,		{"","",-1} 	},
			{"G_Balaclava_oli",				"",								5,		{"","",-1} 	},
			{"G_Bandanna_aviator",			"",								5,		{"","",-1} 	},
			{"G_Bandanna_beast",			"",								5,		{"","",-1} 	},
			{"G_Bandanna_tan",				"",								5,		{"","",-1} 	},
			{"G_Bandanna_sport",			"",								5,		{"","",-1} 	},
			{"G_Bandanna_blk",				"",								5,		{"","",-1} 	},
			{"G_Bandanna_oli",				"",								5,		{"","",-1} 	},
			{"G_Bandanna_shades",			"",								5,		{"","",-1} 	},
			{"G_Combat",					"",								5,		{"","",-1} 	}
		};
		vests[] = {			
			{"V_Rangemaster_belt",		"",								5,	{"","",-1} 	},
			{"V_BandollierB_ghex_F",	"",							 	5,	{"","",-1} 	},
			{"V_Rangemaster_belt",			"",								5,		{"","",-1} 	},
			{"V_BandollierB_khk",			"",								5,		{"","",-1} 	},
			{"V_BandollierB_cbr",			"",								5,		{"","",-1} 	},
			{"V_BandollierB_rgr",			"",								5,		{"","",-1} 	},
			{"V_BandollierB_blk",			"",								5,		{"","",-1} 	},
			{"V_BandollierB_oli",			"",								5,		{"","",-1} 	},
			{"V_PlateCarrier1_rgr",			"",								5,		{"","",-1}	},
			{"V_PlateCarrier1_tna_F",		"",								5,		{"","",-1}	},
			{"V_PlateCarrier2_rgr",			"",								5,		{"","",-1} 	},
			{"V_PlateCarrier2_tna_F",		"",								5,		{"","",-1} 	},
			{"V_PlateCarrier3_rgr",			"",								5,		{"","",-1} 	},
			{"V_PlateCarrier1_rgr_noflag_F",			"",					5,		{"","",-1} 	},
			{"V_PlateCarrier2_rgr_noflag_F",			"",					5,		{"","",-1} 	},
			{"V_PlateCarrier1_blk",			"",								5,		{"","",-1} 	},
			{"V_Chestrig_khk",				"",								5,		{"","",-1} 	},
			{"V_Chestrig_rgr",				"",								5,		{"","",-1} 	},
			{"V_TacVest_khk",				"",								5,		{"","",-1} 	},
			{"V_TacVest_brn",				"",								5,		{"","",-1} 	},
			{"V_TacVest_oli",				"",								5,		{"","",-1} 	},
			{"V_TacVest_blk",				"",								5,		{"","",-1} 	},
			{"V_TacVest_camo",				"",								5,		{"","",-1} 	},
			{"V_TacVestIR_blk",				"",								5,		{"","",-1} 	},
			{"V_TacVestCamo_khk",			"",								5,		{"","",-1} 	},
			{"V_HarnessO_ghex_F",			"",								5,		{"","",-1} 	},
			{"V_HarnessOGL_ghex_F",			"",								5,		{"","",-1} 	},
			{"V_HarnessOGL_gry",			"",								5,		{"","",-1} 	},
			{"V_HarnessOSpec_brn",			"",								5,		{"","",-1} 	},
			{"V_HarnessOSpec_gry",			"",								5,		{"","",-1} 	},
			{"V_Chestrig_blk",				"",								5,		{"","",-1} 	},
			{"V_Chestrig_oli",				"",								5,		{"","",-1} 	},
			{"V_PlateCarrierIA1_dgtl",		"",								5,		{"","",-1} 	},
			{"V_PlateCarrierSpec_rgr",		"",								5,		{"","",-1} 	},
			{"V_PlateCarrierSpec_tna_F",	"",								5,		{"","",-1} 	},
			{"V_PlateCarrierIA2_dgtl",		"",								5,		{"","",-1} 	},
			{"V_PlateCarrierGL_rgr",		"",								5,		{"","",-1} 	},
			{"V_PlateCarrierGL_tna_F",		"",								5,		{"","",-1} 	},
			{"V_PlateCarrier_Kerry",		"",								5,		{"","",-1} 	},
			{"V_PlateCarrierIAGL_dgtl",		"",								5,		{"","",-1} 	}

		};
		backpacks[] = {
			{"B_AssaultPack_cbr",		"",								5,	{"","",-1} 	},
			{"B_Kitbag_mcamo",			"",								5,	{"","",-1} 	},
			{"B_TacticalPack_oli",		"",								5,	{"","",-1} 	},
			{"B_FieldPack_ocamo",		"",								5,	{"","",-1} 	},
			{"B_Bergen_sgg",			"",								5,	{"","",-1} 	},
			{"B_Kitbag_cbr",			"",								5,	{"","",-1} 	},
			{"B_Carryall_oli",			"",								5,	{"","",-1} 	},
			{"B_Carryall_khk",			"",								5,	{"","",-1} 	},
			
			
			{"B_AssaultPack_cbr",			"",								5,		{"","",-1} 	},
			{"B_AssaultPack_khk",			"",								5,		{"","",-1} 	},
			{"B_AssaultPack_dgtl",			"",								5,		{"","",-1} 	},
			{"B_AssaultPack_rgr",			"",								5,		{"","",-1} 	},
			{"B_AssaultPack_sgg",			"",								5,		{"","",-1} 	},
			{"B_AssaultPack_blk",			"",								5,		{"","",-1} 	},
			{"B_AssaultPack_mcamo",			"",								5,		{"","",-1} 	},
			{"B_Kitbag_mcamo",				"",								5,		{"","",-1} 	},
			{"B_Kitbag_sgg",				"",								5,		{"","",-1} 	},
			{"B_Kitbag_cbr",				"",								5,		{"","",-1} 	},
			{"B_TacticalPack_oli",			"",								5,		{"","",-1} 	},
			{"B_FieldPack_ocamo",			"",								5,		{"","",-1} 	},
			{"B_Bergen_sgg",				"",								5,		{"","",-1} 	},
			{"B_Bergen_mcamo",				"",								5,		{"","",-1} 	},
			{"B_Bergen_rgr",				"",								5,		{"","",-1} 	},
			{"B_Bergen_blk",				"",								5,		{"","",-1}	},
			{"B_Kitbag_cbr",				"",								5,		{"","",-1} 	},
			{"B_Carryall_oli",				"",								5,		{"","",-1}	},
			{"B_Carryall_ocamo",			"",								5,		{"","",-1} 	},
			{"B_Carryall_oucamo",			"",								5,		{"","",-1} 	},
			{"B_Carryall_mcamo",			"",								5,		{"","",-1} 	},
			{"B_Carryall_cbr",				"",								5,		{"","",-1} 	},
			{"B_Carryall_khk",				"",								5,		{"","",-1} 	},
			
			{"B_ViperLightHarness_khk_F",	"",								5,	{"","",-1} 	},
			{"B_ViperLightHarness_oli_F",	"",								5,	{"","",-1} 	},
			{"B_ViperHarness_oli_F",		"",								5,	{"","",-1} 	},
			{"B_ViperHarness_khk_F",		"",								5,	{"","",-1} 	},
			{"B_Bergen_hex_F",				"",								5,	{"","",-1} 	},
			{"B_Bergen_tna_F",				"",								5,	{"","",-1} 	}
	
		};
	};
};
	
class CfgKlamotten {
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
	║	File: Liga_Cfg_Clothing.hpp	
	║		
	║	Author:  Oliver  - Die Liga	
	║	Edited:  Hirschi - Die Liga	
	║			 Zoran	 - Die Liga
	║
	║	
	║	Vorlage: Tonic´s Altis Life R.P.G. Ver.:4.4		
	╠════════════════════════════════════════════════════════════════════════════════════╗
	╚════════════════════════════════════════════════════════════════════════════════════╝
*/
	class Default {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		0;
	};		
	
	/*	Uniformen	*/

	class U_Rangemaster {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"textures\Polizei\Kleidung\PMA_shirt.jpg";
		ligatextureLRK 		= 		"textures\medic_uniform.paa";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		0;
	};

	class U_Competitor {
		ligatextureCIV 		= 		"";
		ligatextureLPD		= 		"textures\Polizei\Kleidung\PM_PHM_shirt.jpg";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		0;
	};

	class U_B_CombatUniform_mcam {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"textures\Polizei\Kleidung\BP_uniform.jpg";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		0;
	};

	class U_B_CombatUniform_mcam_worn {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"textures\Polizei\Kleidung\PAB_uniform.jpg";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		0;
	};

	class U_C_WorkerCoveralls {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"textures\ADAC\adac_uniform.jpg";
		LigaInv 			= 		0;
	};

	class U_I_HeliPilotCoveralls {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"textures\DRK\notarzt_kleidung.paa";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		0;
	};

	/*	Rucksäcke	*/

	class B_Bergen_mcamo {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"textures\DRK\notarzt_rucksack.paa";
		ligatextureALAC 	= 		"textures\ADAC\adac_backpack.paa";
		LigaInv 			= 		0;
	};	

	class B_TacticalPack_blk {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"textures\DRK\bp_medic.jpg";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		0;
	};	

	class B_Bergen_hex_F {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		90;
	};										// Ureinwohner ganz groß
	
	class B_Bergen_tna_F {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		90;
	};										// Ureinwohner ganz groß
	
	class B_ViperLightHarness_oli_F {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		36;		// Ureinwohner Viper klein
	};		
	
	class B_ViperLightHarness_khk_F {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		36;
	};										// Ureinwohner Viper klein	
	
	class B_ViperHarness_oli_F {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		56;		
	};										// Ureinwohner Viper groß
	
	class B_ViperHarness_khk_F {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		56;
	};										// Ureinwohner Viper groß
	
	class B_ViperLightHarness_blk_F {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		20;		// Ziv + Guerilla Viper klein
	};
	
	class B_ViperLightHarness_hex_F {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		20;
	};										// Guerilla Viper klein
	
	class B_ViperLightHarness_ghex_F {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		20;
	};										// Guerilla Viper klein
	
	class B_ViperHarness_hex_F {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		40;
	};										// Guerilla Viper groß
	
	class B_ViperHarness_ghex_F {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		40;
	};										// Guerilla Viper groß
	
	
	/*	Westen	*/
	
	class V_Rangemaster_belt {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		5;
	};
	
	class V_BandollierB_ghex_F {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		15;
	};
	
	class V_BandollierB_khk {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		7;
	};

	class V_BandollierB_cbr {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		7;
	};

	class V_BandollierB_rgr {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		7;
	};

	class V_BandollierB_blk {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		7;
	};

	class V_BandollierB_oli {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		7;
	};

	class V_Press_F {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		10;
	};

	class V_HarnessO_brn {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		10;
	};

	class V_PlateCarrier1_rgr {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		13;
	};

	class V_PlateCarrier2_rgr {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		13;
	};

	class V_PlateCarrier3_rgr {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		13;
	};

	class V_PlateCarrier1_blk {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		13;
	};

	class V_HarnessO_gry {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv				= 		15;
	};

	class V_Chestrig_khk {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		20;
	};

	class V_Chestrig_rgr {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		=		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		20;
	};

	class V_TacVest_khk {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		20;
	};

	class V_TacVest_brn {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		20;
	};

	class V_TacVest_oli {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		20;
	};

	class V_TacVest_blk {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		20;
	};

	class V_TacVest_camo {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		20;
	};

	class V_TacVestIR_blk {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		20;
	};

	class V_TacVestCamo_khk {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		20;
	};

	class V_HarnessOGL_gry {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		20;
	};

	class V_HarnessOSpec_brn {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		23;
	};

	class V_HarnessOSpec_gry {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		23;
	};

	class V_Chestrig_blk {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv				= 		23;
	};

	class V_Chestrig_oli {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		23;
	};

	class V_PlateCarrierIA1_dgtl {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		25;
	};

	class V_PlateCarrierSpec_rgr {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		25;
	};

	class V_PlateCarrierIA2_dgtl {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		30;
	};

	class V_PlateCarrierGL_rgr {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		35;
	};

	class V_PlateCarrier_Kerry {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		40;
	};

	class V_PlateCarrierIAGL_dgtl {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		50;
	};

	class V_TacVest_blk_POLICE {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		30;
	};

	class V_PlateCarrierSpec_blk {
		ligatextureCIV 		= 		"";
		ligatextureLPD 		= 		"";
		ligatextureLRK 		= 		"";
		ligatextureALAC 	= 		"";
		LigaInv 			= 		40;
	};
};


		/* 	Wie immer an dieser Stelle,
			auf die Schnelle,
			eine poetische Schelle.
			
			Oder wie Goethe sagen würde:
			Hauste rein!
			
			
			*/
			

/*
	╔══════════════════════════════════════════════════╗
	║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║
	║░░░░░░░█▀▀▀▄░▄░░░░░░░█░░░░▄░░░░░░░░░░░░░░░░░░░░░░░║
	║░░░░░░░█░░░█░░░█▀▀▀░░█░░░░░░░█▀▀▀▀█░█▀▀▀█░░░░░░░░░║
	║░░░░░░░█░░░█░█░█▀▀▀░░█░░░░█░░█░░░░█░█░░░█░░░░░░░░░║
	║░░░░░░░▀▀▀▀░░▀░▀▀▀▀░░▀▀▀▀░▀░░▀▀▀▀▀█░▀▀▀▀█░░░░░░░░░║
	║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄▄▄▄▄█░░░░░░░░░░░░░░░║
	║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║
	╚══════════════════════════════════════════════════╝
*/	