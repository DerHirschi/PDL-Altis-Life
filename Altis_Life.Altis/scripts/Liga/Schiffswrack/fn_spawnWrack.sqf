/*Author: Hirschi - Die Liga*/
_posi = param [0, []];
	
if(_posi isEqualTo [])exitWith {}; 
	
wrack1 = "Land_Wreck_Traw_F"  createVehicleLocal [0,0,-100];
wrack2 = "Land_Wreck_Traw2_F" createVehicleLocal [0,0,-90];

wrack2 attachTo [wrack1, [0.67, -21.6, 0] ]; 
wrack1 setpos _posi;


Feuer = "test_EmptyObjectForFireBig" createVehicleLocal [0,0,-100];
Feuer attachTo [wrack1, [0, -21.6, 0] ]; 
