#define true 1
#define false 0
/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*/
class VirtualShops {
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "";
        items[] = { "schrank","kasse","waterBottle", "rabbit", "apple", "redgull", "tbacon", "pickaxe", "toolkit", "fuelFull", "peach", "storagesmall", "storagebig", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw", "fireWo" };
    };

    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "toolkit", "fuelFull", "peach", "defibrillator" };
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        conditions = "";
        items[] = { "turtle_soup", "turtle_raw" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        conditions = "";
        items[] = { "coffee", "donuts" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        conditions = "";
        items[] = { "coffee", "donuts", "redgull", "toolkit", "fuelFull"};
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        conditions = "";
        items[] = { "cocaine_processed", "heroin_processed", "marijuana" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        conditions = "";
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        conditions = "";
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        conditions = "";
        items[] = { "glass" };
    };

    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";
        conditions = "";
        items[] = { "iron_refined", "copper_refined" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        conditions = "";
        items[] = { "diamond_uncut", "diamond_cut" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        conditions = "";
        items[] = { "salt_refined" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        conditions = "";
        items[] = { "cement" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        conditions = "";
        items[] = { "goldbar" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        conditions = "";
        items[] = { "donuts", "coffee", "spikeStrip", "waterBottle", "rabbit", "apple", "redgull", "toolkit", "fuelFull", "defusekit", "defibrillator" };
    };
	// Buero 
	class cop_office {
        name = "STR_Office";
        side = "cop";
        conditions = "life_coplevel >= 8";
        items[] = { "copcontract", "copbef1", "copair" };
    };
	
	class medic_office {
        name = "STR_Office";
        side = "med";
        conditions = "life_medicLevel >= 5";
        items[] = { "mediccontract", "medicbef1", "medair" };
    };

	class alac_office {
        name = "STR_Office";
        side = "alac";
        conditions = "life_alaclevel >= 5";
        items[] = { "alaccontract", "alacbef1", "alacair" };
    };

	class flusi_office {
        name = "STR_Office";
        side = "civ";
        conditions = "life_flusilevel >= 5";
        items[] = { "flusicontract", "flusibef1" };
    };
	
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        essbar = Item essbar (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items

    //Misc
    class pickaxe {
        variable 	= "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight 		= 2;
        buyPrice 	= 750;
        sellPrice 	= 350;
        illegal 	= false;
		
		saveable	= true;
		closeDiag	= true;

        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
		
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "[]spawn { life_action_gathering 	= true; _handle = []spawn life_fnc_whereAmI; waitUntil {scriptDone _handle}; life_action_gathering 	= false;	";       
	
		hinttext	= "STR_USE_WIN";
		titletext	= "";

        icon 		= "icons\ico_pickaxe.paa";
		sound 		= "";

    };

    class defibrillator {
        variable 	= "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight 		= 4;
        buyPrice 	= 900;
        sellPrice 	= 450;
        illegal 	= false;
		
		saveable	= true;
		closeDiag	= true;
		
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
		
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";
		
        icon 		= "icons\ico_defibrillator.paa";
		sound 		= "";
    };

    class toolkit {
        variable 	= "toolkit";
        displayName = "STR_Item_Toolkit";
        weight 		= 4;
        buyPrice 	= 350;
        sellPrice 	= 100;
        illegal 	= false;

		saveable	= true;
		closeDiag	= true;
		
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
		
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";
        
		icon 		= "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
		sound 		= "";
    };

    class fuelEmpty {
        variable 	= "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight 		= 2;
        buyPrice 	= -1;
        sellPrice 	= 10;
        illegal 	= false;

		saveable	= true;
		closeDiag	= true;
		
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
		

        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "if (!(life_is_processing)) exitWith { closeDialog 0; [ObjNull,'','','methy'] spawn life_fnc_processAction;};	";       

		hinttext	= "";
		titletext	= "";
		
		
        icon 		= "icons\ico_fuelEmpty.paa";
		sound 		= "";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 850;
        sellPrice = 500;
        illegal = false;
		
		saveable	= true;
		closeDiag	= true;
		
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5

        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "if(vehicle player != player) exitWith {hint localize 'STR_ISTR_RefuelInVehicle'};		[] spawn life_fnc_jerryRefuel;	";       
		hinttext	= "";
		titletext	= "";
		
		
        icon 		= "icons\ico_fuel.paa";
		sound 		= "";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = true;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "		if(!isNull life_spikestrip) exitWith {hint localize 'STR_ISTR_SpikesDeployment'};		if(([false,_item,1] call life_fnc_handleInv)) then		{			[] spawn life_fnc_spikeStrip;		}; ";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_spikeStrip.paa";
		sound 		= "";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 150;
        sellPrice = 75;
        illegal = true;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_lockpick.paa";
		sound 		= "";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 12;
        buyPrice = -1;
        sellPrice = 95000;
        illegal = true;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_goldBar.paa";
		sound 		= "";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 35000;
        sellPrice = 10000;
        illegal = true;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_blastingCharge.paa";
		sound 		= "";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 7500;
        sellPrice = 1000;
        illegal = true;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_boltCutter.paa";
		sound 		= "";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 2500;
        sellPrice = 2000;
        illegal = true;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_defuseKit.paa";
		sound 		= "";
    };

    class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 75000;
        sellPrice = 50000;
        illegal = false;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV"};
        useablefnc	= "[false] call life_fnc_storageBox;";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_storageSmall.paa";
		sound 		= "";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 150000;
        sellPrice = 125000;
        illegal = false;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV"};
        useablefnc	= "[true] call life_fnc_storageBox;";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_storageBig.paa";
		sound 		= "";
    };
	
    class kasse {
        variable 	= "kasse";
        displayName = "STR_Item_KassTisch";        
        buyPrice 	= 520000;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 25;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5

        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV"};
        useablefnc	= "[_this] spawn LIGACL_fnc_LigaAddKass;";       
		hinttext	= "";
		titletext	= "";

		icon 		= "";
        sound 		= "";
    };	

    class schrank {
        variable 	= "schrank";
        displayName = "STR_Item_Regal";        
        buyPrice 	= 360000;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 28;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5

        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV"};
        useablefnc	= "[_this] spawn LIGACL_fnc_LigaAddKass;";       
		hinttext	= "";
		titletext	= "";

		icon 		= "";
        sound 		= "";
    };	

    //Mined Items
    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 7;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_oilUnprocessed.paa";
		sound 		= "";
    };

    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_oilProcessed.paa";
		sound 		= "";
    };

    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_copperOre.paa";
		sound 		= "";
    };

    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1500;
        illegal = false;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_copper.paa";
		sound 		= "";
    };

    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_ironOre.paa";
		sound 		= "";
    };

    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_iron.paa";
		sound 		= "";
    };

    class salt_unrefined {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_saltUnprocessed.paa";
		sound 		= "";
    };

    class salt_refined {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_saltProcessed.paa";
		sound 		= "";
    };

    class sand {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_sand.paa";
		sound 		= "";
    };

    class glass {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_glass.paa";
		sound 		= "";
    };

    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 4;
        buyPrice = -1;
        sellPrice = 750;
        illegal = false;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_diamondUncut.paa";
		sound 		= "";
    };

    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 2;
        buyPrice = -1;
        sellPrice = 2000;
        illegal = false;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_diamondCut.paa";
		sound 		= "";
    };

    class rock {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_rock.paa";
		sound 		= "";
    };

    class cement {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 5;
        buyPrice = -1;
        sellPrice = 1950;
        illegal = false;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_cement.paa";
		sound 		= "";
    };

    //Drugs
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
		sound 		= "";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 4;
        buyPrice = 3500;
        sellPrice = 2560;
        illegal = true;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_heroinProcessed.paa";
		sound 		= "";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_cannabis.paa";
        processedItem = "marijuana";
		sound 		= "";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 3;
        buyPrice = 2800;
        sellPrice = 2350;
        illegal = true;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_marijuana.paa";
		sound 		= "";
    };

    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
		sound 		= "";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 4;
        buyPrice = -1;
        sellPrice = 5000;
        illegal = true;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5

		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_cocaineProcessed.paa";
		sound 		= "";
    };

    //Drink
    class redgull {
        variable 	= "redgull";
        displayName = "STR_Item_RedGull";
        weight 		= 1;
        buyPrice 	= 1500;
        sellPrice 	= 200;
        illegal 	= false;
		
		saveable	= true;
		closeDiag	= true;
	
        essbar 		= -1;
        trinkbar 	= 100;
		gulltime 	= 3;
		fat			= 1;	// 0.5 = - 0.5

        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\ico_redgull.paa";
        sound 		= "drink";

    };

    class coffee {
        variable 	= "coffee";
        displayName = "STR_Item_Coffee";
        weight 		= 1;
        buyPrice 	= 10;
        sellPrice 	= 5;
        illegal 	= false;

		saveable	= true;
		closeDiag	= true;
		
        essbar 		= -1;
        trinkbar 	= 100;
		gulltime 	= 2;
		fat			= 1;	// 0.5 = - 0.5

        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\ico_coffee.paa";
        sound 		= "drink";

    };

    class waterBottle {
        variable 	= "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight 		= 1;
        buyPrice 	= 10;
        sellPrice 	= 5;
        illegal 	= false;

		saveable	= true;
		closeDiag	= true;
		
        essbar 		= -1;
        trinkbar 	= 65;
		gulltime 	= -1;
		fat			= 1;	// 0.5 = - 0.5

        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";
		
        icon 		= "icons\ico_waterBottle.paa";
		sound 		= "drink";
    };

	class eBottle {
        variable 	= "eBottle";
        displayName = "STR_Item_EWaterBottle";        
        buyPrice 	= 2250;
        sellPrice 	= 1600;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5

        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"a10",1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        // useablefnc	= "if (!(life_is_processing)) exitWith {  [ObjNull,'','','moon'] spawn life_fnc_processAction; playSound 'FlBef';};";       
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\flasche.paa";
        sound 		= "";
    };		

	class uwsl {
        variable 	= "uwsl";
        displayName = "STR_Item_WassBomb";        
        buyPrice 	= 10000;
        sellPrice 	= -1;
        illegal 	= 10000;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 5;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5

        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"a10",1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV"};
        // useablefnc	= "if (!(life_is_processing)) exitWith {  [ObjNull,'','','moon'] spawn life_fnc_processAction; playSound 'FlBef';};";       
		useablefnc	= "_this spawn { if(([false,_this,1] call life_fnc_handleInv)) then	{	if(isNil 'wrack_objs') exitWith {hint(getText (missionConfigFile >> 'Schiffswrack' >> 'bombNoWrackText'));};	if(wrack_objs isEqualTo [])exitWith {hint(getText (missionConfigFile >> 'Schiffswrack' >> 'bombNoWrackText'));};	if(isNull (wrack_objs select 2) )exitWith {hint(getText (missionConfigFile >> 'Schiffswrack' >> 'bombNoWrackText'));};	_safe = wrack_objs select 2;	if(_safe getVariable ['opened',false] && (!isNil 'schiffwoffen'))then {		if(schiffwoffen) exitWith {_e = true;hint(getText (missionConfigFile >> 'Schiffswrack' >> 'bombWrackOffenText'));};	}; 	if(!isNil '_e') exitWith{}; if(player distance _safe > 3.5)exitWith{hint 'Du bist nicht nah genug drann.';};	hint 'Der Timer lauft.. hau ab..';	private _handle = [0.5] spawn LIGACL_fnc_TimerDisp;		waitUntil {scriptDone _handle};	hint(getText (missionConfigFile >> 'Schiffswrack' >> 'bombBoom'));	_pos = getPos _safe;	'Bo_GBU12_LGB' createVehicle _pos;	'M_NLAW_AT_F' createVehicle _pos;	schiffwoffen = true;		publicVariable 'schiffwoffen';};	};";			
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\wbe.paa";
        sound 		= "";
    };		

    //Food
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 65;
        sellPrice = 50;
        illegal = false;
        		
		saveable	= true;
		closeDiag	= true;
		
        essbar 		= 10;
        trinkbar 	= 2;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5

        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\ico_apple.paa";
        sound 		= "eat";

    };

    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;

		saveable	= true;
		closeDiag	= true;
		
        essbar 		= 12;
        trinkbar 	= 3;
		gulltime 	= -1;
		fat			= 0.2;	// 0.5 = - 0.5

        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\ico_peach.paa";
        sound 		= "eat";        
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
		
		saveable	= true;
		closeDiag	= true;
		
        essbar 		= 40;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5

        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\ico_tBacon.paa";
        sound 		= "eat";
        
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 120;
        sellPrice = 60;
        illegal = false;
		
		saveable	= true;
		closeDiag	= true;
		essbar 		= 40;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5

        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";
        icon 		= "icons\ico_donuts.paa";
		sound 		= "eat";
    };

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_rabbitRaw.paa";
		sound 		= "";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 150;
        sellPrice = 115;
        illegal = false;
        essbar = 20;
		trinkbar 	= -1;
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_rabbit.paa";
		sound 		= "";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 45;
        illegal = false;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_salemaRaw.paa";
		sound 		= "";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 75;
        sellPrice = 55;
        illegal = false;
        essbar = 30;
		trinkbar 	= -1;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_cookedFish.paa";
		sound 		= "";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 40;
        illegal = false;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_ornateRaw.paa";
		sound 		= "";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 175;
        sellPrice = 150;
        illegal = false;
        essbar = 25;
		trinkbar 	= -1;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_cookedFish.paa";
		sound 		= "";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 175;
        illegal = false;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_mackerelRaw.paa";
		sound 		= "";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 250;
        sellPrice = 200;
        illegal = false;
        essbar = 30;
		trinkbar 	= -1;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_cookedFish.paa";
		sound 		= "";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 700;
        illegal = false;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_tunaRaw.paa";
		sound 		= "";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 1250;
        sellPrice = 1000;
        illegal = false;
        essbar = 100;
		trinkbar 	= -1;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_cookedFish.paa";
		sound 		= "";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 250;
        illegal = false;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_mulletRaw.paa";
		sound 		= "";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 600;
        sellPrice = 400;
        illegal = false;
        essbar = 80;
		trinkbar 	= -1;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_cookedFish.paa";
		sound 		= "";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 300;
        illegal = false;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_catsharkRaw.paa";
		sound 		= "";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 750;
        sellPrice = 500;
        illegal = false;
        essbar = 100;
		trinkbar 	= -1;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_cookedFish.paa";
		sound 		= "";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3000;
        illegal = true;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_turtleRaw.paa";
		sound 		= "";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 1000;
        sellPrice = 750;
        illegal = false;
        essbar = 100;
		trinkbar 	= 40;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_turtleSoup.paa";
		sound 		= "";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_wholeChickenRaw.paa";
		sound 		= "";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 115;
        sellPrice = 85;
        illegal = false;
        essbar = 65;
		trinkbar 	= -1;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_wholeChicken.paa";
		sound 		= "";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_chickenDrumstickRaw.paa";
		sound 		= "";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 115;
        buyPrice = 90;
        sellPrice = 85;
        illegal = false;
        essbar = 45;
		trinkbar 	= -1;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_chickenDrumstick.paa";
		sound 		= "";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_lambChopRaw.paa";
		sound 		= "";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 155;
        sellPrice = 115;
        illegal = false;
        essbar = 100;
		trinkbar 	= -1;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_lambChop.paa";
		sound 		= "";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 115;
        illegal = false;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_muttonLegRaw.paa";
		sound 		= "";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = false;
        essbar = 100;
		trinkbar 	= -1;
		saveable	= true;
		closeDiag	= true;
	    verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		
		hinttext	= "";
		titletext	= "";

        icon = "icons\ico_muttonLeg.paa";
		sound 		= "";

    };
	/*Aufstellbares*/
	
	   class fireWo {
        variable 	= "fireWo";
        displayName = "STR_Item_Firework";        
        buyPrice 	= 12000;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 6;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5

        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "if(!isNull life_mauer) exitWith {hint 'Du stellst schon ein Feuerwerk auf !'};	if(([false,_this,1] call life_fnc_handleInv)) then	{	[7] spawn life_fnc_mauer;	};";       
		hinttext	= "";
		titletext	= "";

		icon 		= "";
        sound 		= "";
    };	

	/*
	Arbeitsvertraege usw
	*/
	// Cop Arbeitsvertrag
	class copcontract {
        variable = "copcontract";
        displayName = "STR_Item_CopCont";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV"};
        useablefnc	= "missionNamespace setVariable ['license_civ_jobCop',true]; [2] call SOCK_fnc_updatePartial;";       
		/*TODO: Text*/
		hinttext	= "STR_Item_CopCont_Hint";
		titletext	= "";
		/*TODO: ICON*/
        icon 		= "icons\ico_muttonLeg.paa";
		sound 		= "";
    };
	// Cop Befoerderung
	class copbef1 {
        variable = "copbef1";
        displayName = "STR_Item_CopBef1";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","WEST"};
        useablefnc	= "missionNamespace setVariable ['life_coplevel',(10 min (life_coplevel + 1))]; [8] call SOCK_fnc_updatePartial;";       
		/*TODO: Text*/
		hinttext	= "STR_Item_CopBef_Hint1";
		titletext	= "";
		/*TODO: ICON*/
        icon 		= "icons\ico_muttonLeg.paa";
		sound 		= "";
    };
	

	class mediccontract {
        variable = "mediccontract";
        displayName = "STR_Item_CopCont";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV"};
        useablefnc	= "missionNamespace setVariable ['license_civ_jobMedic',true]; [2] call SOCK_fnc_updatePartial;";       
		/*TODO: Text*/
		hinttext	= "STR_Item_CopCont_Hint";
		titletext	= "";
		/*TODO: ICON*/
        icon 		= "icons\ico_muttonLeg.paa";
		sound 		= "";
    };
	// Cop Befoerderung
	class medicbef1 {
        variable = "medicbef1";
        displayName = "STR_Item_CopBef1";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","GUER"};
        useablefnc	= "missionNamespace setVariable ['life_medicLevel',(10 min (life_medicLevel + 1))]; [8] call SOCK_fnc_updatePartial;";       
		/*TODO: Text*/
		hinttext	= "STR_Item_CopBef_Hint1";
		titletext	= "";
		/*TODO: ICON*/
        icon 		= "icons\ico_muttonLeg.paa";
		sound 		= "";
    };	
	
	class alaccontract {
        variable = "alaccontract";
        displayName = "STR_Item_CopCont";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV"};
        useablefnc	= "missionNamespace setVariable ['license_civ_jobAlac',true]; [2] call SOCK_fnc_updatePartial;";       
		/*TODO: Text*/
		hinttext	= "STR_Item_CopCont_Hint";
		titletext	= "";
		/*TODO: ICON*/
        icon 		= "icons\ico_muttonLeg.paa";
		sound 		= "";
    };
	// Cop Befoerderung
	class alacbef1 {
        variable = "alacbef1";
        displayName = "STR_Item_CopBef1";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV","EAST"};
        useablefnc	= "missionNamespace setVariable ['life_alaclevel',(10 min (life_medicLevel + 1))]; [8] call SOCK_fnc_updatePartial;";       
		/*TODO: Text*/
		hinttext	= "STR_Item_CopBef_Hint1";
		titletext	= "";
		/*TODO: ICON*/
        icon 		= "icons\ico_muttonLeg.paa";
		sound 		= "";
    };	
	
	class flusicontract {
        variable = "flusicontract";
        displayName = "STR_Item_CopCont";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV"};
        useablefnc	= "missionNamespace setVariable ['license_civ_jobFlusi',true]; [2] call SOCK_fnc_updatePartial;";       
		/*TODO: Text*/
		hinttext	= "STR_Item_CopCont_Hint";
		titletext	= "";
		/*TODO: ICON*/
        icon 		= "icons\ico_muttonLeg.paa";
		sound 		= "";
    };
	// Cop Befoerderung
	class flusibef1 {
        variable = "flusibef1";
        displayName = "STR_Item_CopBef1";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV"};
        useablefnc	= "missionNamespace setVariable ['life_flusilevel',(10 min (life_medicLevel + 1))]; [8] call SOCK_fnc_updatePartial;";       
		/*TODO: Text*/
		hinttext	= "STR_Item_CopBef_Hint1";
		titletext	= "";
		/*TODO: ICON*/
        icon 		= "icons\ico_muttonLeg.paa";
		sound 		= "";
    };	
	
// Lizenzen Fop Air usw

	class copair {
        variable = "copair";
        displayName = "STR_Item_CopAir";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"WEST"};
        useablefnc	= "missionNamespace setVariable ['license_cop_cAir',true]; [2] call SOCK_fnc_updatePartial;";       
		/*TODO: Text*/
		hinttext	= "STR_Item_CopCont_Hint";
		titletext	= "";
		/*TODO: ICON*/
        icon 		= "icons\ico_muttonLeg.paa";
		sound 		= "";
    };
	
	class medair {
        variable = "medair";
        displayName = "STR_Item_CopAir";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"GUER"};
        useablefnc	= "missionNamespace setVariable ['license_med_mAir',true]; [2] call SOCK_fnc_updatePartial;";       
		/*TODO: Text*/
		hinttext	= "STR_Item_CopCont_Hint";
		titletext	= "";
		/*TODO: ICON*/
        icon 		= "icons\ico_muttonLeg.paa";
		sound 		= "";
    };

	class alacair {
        variable = "alacair";
        displayName = "STR_Item_CopAir";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        essbar = -1;
		trinkbar 	= -1;
		saveable	= false;
		closeDiag	= true;
	    verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		

		allowside[]	= {"CIV"};
        useablefnc	= "missionNamespace setVariable ['license_alac_aAir',true]; [2] call SOCK_fnc_updatePartial;";       
		/*TODO: Text*/
		hinttext	= "STR_Item_CopCont_Hint";
		titletext	= "";
		/*TODO: ICON*/
        icon 		= "icons\ico_muttonLeg.paa";
		sound 		= "";
    };
	
};
