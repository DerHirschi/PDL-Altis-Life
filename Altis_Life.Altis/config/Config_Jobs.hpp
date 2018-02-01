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
				"<t color='#FF0000'>Stechuhr</t>",//Action
				"['Cops'] call life_fnc_jobLogin",//Code
				"license_civ_jobCop",			  //Bedingung
				20								  //Reichweite
			}
		};
		
		class life_coplevel_0 {
			rang 	 	= "Praktikant"; // Dummy
			paycheck 	= 200;
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
			einsperren  = false;
			vehimpoun	= false;
			wanteddel	= false;
			wantedadd	= false;
			housesearch = false;
			vehsearch  	= false;
		};
	};

};