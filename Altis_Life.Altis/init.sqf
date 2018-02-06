/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

if (hasInterface) then {
    [] execVM "briefing.sqf"; //Load Briefing
};
[] execVM "KRON_Strings.sqf";

StartProgress = true;

/*!!!!! Dummys !!!!!!*/

LIGACL_fnc_LottoQuesttWin = compileFinal "";
ligacl_fnc_lottodialog = compileFinal "";