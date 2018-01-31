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
		side 		   = "west";
		groupvar 	   = "cop_group";
		onvar		   = "liga_cop_on";
		
		licensneed	   = "jobCop";
		licforbidden[] = {"rebel"};
		forbiddentext  = "Mit Tattoo kannst du nicht bei der Polizei arbeiten.";
		
		class CopLevel_1 {
			rang 	 	= "Azubi"; // Dummy
			paycheck 	= 500;
			einsperren  = false;
			vehimpoun	= false;
			wanteddel	= false;
			wantedadd	= false;
			housesearch = false;
			vehsearch  	= false;
		};
		
		class CopLevel_2 {
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