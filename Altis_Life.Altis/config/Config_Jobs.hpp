class JobsCFG {
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
	║	File: Config_Jobs.hpp
	║		
	║	Author:  Hirschi - Die Liga	
	║	
	╠═════════════════════════════════════════════════════════════════╗
	║
	║
	╚═════════════════════════════════════════════════════════════════╝
*/
	class Cops {
		side 		   	= "west";
		groupvar 	   	= "cop_group";
		onvar		   	= "liga_cop_on";
		levelvar	   	= "life_coplevel";
		
		licensneed	   	= "license_civ_jobCop";
		licforbidden[] 	= {"rebel"};
		forbiddentext  	= "Mit Tattoo kannst du nicht bei der Polizei arbeiten.";
		
		stechuhren[]	= {"cop_uhr_1","cop_uhr_2"};
		stechaction[]	= {
			{
				"<t color='#FF0000'>Stechuhr</t>",	//Action
				"['Cops'] call LIGACL_fnc_jobLogin",//Code
				"license_civ_jobCop",			  	//Bedingung
				20								  	//Reichweite
			}
		};
		
		spinnte[]		= {"cop_spinnt_1","cop_spinnt_2","cop_spinnt_3"};
		spinntaction[]	= {
							
	//		"((side player) isEqualTo (call compileFinal (getText(missionConfigFile >> 'JobsCFG' >> %4 >> 'side'))))",			  	//Bedingung
			20								  	//Reichweite
			
		};
		
		class life_coplevel_0 {
			rang 	 	= "Praktikant"; // Dummy
			paycheck 	= 200;
			spintslots	= 1;
			einsperren  = false;
			vehimpoun	= false;
			wanteddel	= false;
			wantedadd	= false;
			housesearch = false;
			vehsearch  	= false;
		};
		
		class life_coplevel_1 {
			rang 	 	= "Azubi"; // Dummy
			paycheck 	= 500;
			spintslots	= 1;
			einsperren  = false;
			vehimpoun	= false;
			wanteddel	= false;
			wantedadd	= false;
			housesearch = false;
			vehsearch  	= false;
		};
		
		class life_coplevel_2 {
			rang 	 	= "Azubi"; // Dummy
			paycheck 	= 1000;
			spintslots	= 1;
			einsperren  = false;
			vehimpoun	= false;
			wanteddel	= false;
			wantedadd	= false;
			housesearch = false;
			vehsearch  	= false;
		};
	};
	
	class Medics {
		side 		   	= "independent";
		groupvar 	   	= "medic_group";
		onvar		   	= "liga_medic_on";
		levelvar	   	= "life_medicLevel";
		
		licensneed	   	= "license_civ_jobMedic";
		licforbidden[] 	= {"rebel"};
		forbiddentext  	= "Mit Tattoo kannst du nicht bei der Polizei arbeiten.";
		
		stechuhren[]	= {"medic_uhr_1","medic_uhr_2"};
		stechaction[]	= {
			{
				"<t color='#FF0000'>Stechuhr</t>",		//Action
				"['Medics'] call LIGACL_fnc_jobLogin",	//Code
				"license_civ_jobMedic",			  		//Bedingung
				20								  		//Reichweite
			}
		};
		
		spinnte[]		= {"med_spinnt_1"};
		spinntaction[]	= {
							
	//		"((side player) isEqualTo (call compileFinal (getText(missionConfigFile >> 'JobsCFG' >> %4 >> 'side'))))",			  	//Bedingung
			20								  	//Reichweite
			
		};
		
		class life_medicLevel_0 {
			rang 	 	= "Praktikant"; // Dummy
			paycheck 	= 200;
			spintslots	= 1;
			einsperren  = false;
			vehimpoun	= false;
			wanteddel	= false;
			wantedadd	= false;
			housesearch = false;
			vehsearch  	= false;
		};
		
		class life_medicLevel_1 {
			rang 	 	= "Azubi"; // Dummy
			paycheck 	= 500;
			spintslots	= 1;
			einsperren  = false;
			vehimpoun	= false;
			wanteddel	= false;
			wantedadd	= false;
			housesearch = false;
			vehsearch  	= false;
		};
		
		class life_medicLevel_2 {
			rang 	 	= "Azubi"; // Dummy
			paycheck 	= 1000;
			spintslots	= 1;
			einsperren  = false;
			vehimpoun	= false;
			wanteddel	= false;
			wantedadd	= false;
			housesearch = false;
			vehsearch  	= false;
		};
	};
	
	class Alac {
		side 		   	= "east";
		groupvar 	   	= "alac_group";
		onvar		   	= "liga_alac_on";
		levelvar	   	= "life_alaclevel";
		
		licensneed	   	= "license_civ_jobAlac";
		licforbidden[] 	= {"rebel"};
		forbiddentext  	= "Mit Tattoo kannst du nicht bei der Polizei arbeiten.";
		
		stechuhren[]	= {"alac_uhr_1","alac_uhr_2"};
		stechaction[]	= {
			{
				"<t color='#FF0000'>Stechuhr</t>",	//Action
				"['Alac'] call LIGACL_fnc_jobLogin",//Code
				"license_civ_jobAlac",			  	//Bedingung
				20								  	//Reichweite
			}
		};
		spinnte[]		= {"alac_spinnt_1"};
		spinntaction[]	= {
							
	//		"((side player) isEqualTo (call compileFinal (getText(missionConfigFile >> 'JobsCFG' >> %4 >> 'side'))))",			  	//Bedingung
			20								  	//Reichweite
			
		};
		
		class life_alaclevel_0 {
			rang 	 	= "Praktikant"; // Dummy
			paycheck 	= 200;
			spintslots	= 1;
			einsperren  = false;
			vehimpoun	= false;
			wanteddel	= false;
			wantedadd	= false;
			housesearch = false;
			vehsearch  	= false;
		};
		
		class life_alaclevel_1 {
			rang 	 	= "Azubi"; // Dummy
			paycheck 	= 500;
			spintslots	= 1;
			einsperren  = false;
			vehimpoun	= false;
			wanteddel	= false;
			wantedadd	= false;
			housesearch = false;
			vehsearch  	= false;
		};
		
		class life_alaclevel_2 {
			rang 	 	= "Azubi"; // Dummy
			paycheck 	= 1000;
			spintslots	= 1;
			einsperren  = false;
			vehimpoun	= false;
			wanteddel	= false;
			wantedadd	= false;
			housesearch = false;
			vehsearch  	= false;
		};
	};
	
	class Flusi {
		side 		   	= "civilian";
		groupvar 	   	= "flusi_group";
		onvar		   	= "liga_flusi_on";
		levelvar	   	= "life_flusilevel";
		
		licensneed	   	= "license_civ_jobFlusi";
		licforbidden[] 	= {"rebel"};
		forbiddentext  	= "Mit Tattoo kannst du nicht bei der Polizei arbeiten.";
		
		stechuhren[]	= {"flusi_uhr_1","flusi_uhr_2"};
		stechaction[]	= {
			{
				"<t color='#FF0000'>Stechuhr</t>",		//Action
				"['Flusi'] call LIGACL_fnc_jobLogin",	//Code
				"license_civ_jobFlusi",			  		//Bedingung
				20								  		//Reichweite
			}
		};
		
		spinnte[]		= {"flusi_spinnt_1"};
		spinntaction[]	= {
							
	//		"((side player) isEqualTo (call compileFinal (getText(missionConfigFile >> 'JobsCFG' >> %4 >> 'side'))))",			  	//Bedingung
			20								  	//Reichweite
			
		};
		
		class life_flusilevel_0 {
			rang 	 	= "Praktikant"; // Dummy
			paycheck 	= 200;
			spintslots	= 1;
			einsperren  = false;
			vehimpoun	= false;
			wanteddel	= false;
			wantedadd	= false;
			housesearch = false;
			vehsearch  	= false;
		};
		
		class life_flusilevel_1 {
			rang 	 	= "Azubi"; // Dummy
			paycheck 	= 500;
			spintslots	= 1;
			einsperren  = false;
			vehimpoun	= false;
			wanteddel	= false;
			wantedadd	= false;
			housesearch = false;
			vehsearch  	= false;
		};
		
		class life_flusilevel_2 {
			rang 	 	= "Azubi"; // Dummy
			paycheck 	= 1000;
			spintslots	= 1;
			einsperren  = false;
			vehimpoun	= false;
			wanteddel	= false;
			wantedadd	= false;
			housesearch = false;
			vehsearch  	= false;
		};
	};
};