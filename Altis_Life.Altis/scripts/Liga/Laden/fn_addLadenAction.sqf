_arr 	= [_this,0,[],[[]]] call BIS_fnc_param;
if(((count _arr) isEqualTo 0) || isServer)exitWith {};
{
	removeAllActions _x;
	_var	 	= ((nearestObject [(getPos _x),"House_F"]) getVariable ["ladextra",["Liga Laden",0,0]]) ;
	_houseName	= _var select 0;
	_x addAction[format["<t color='#FF0040'>%1</t>",_houseName],LIGACL_fnc_LadenSellMenu,"user_laden",0,false,false,"",'player distance _target < 2 && (player isEqualTo player)']; 
	if((_var select 2) isEqualTo 1 ) then {
		_x addAction["<t color='#FACC2E'>Lottoschein kaufen $100.000 </t>",LIGACL_fnc_lottoDialog,"",0,false,false,"",'player distance _target < 3 && (player isEqualTo player)'];  
		_x addAction["<t color='#00FF00'>Lotto Gewinn abholen</t>",LIGACL_fnc_LottoQuesttWin,"",0,false,false,"",'player distance _target < 3 && (player isEqualTo player)'];	
	};	
}forEach _arr;