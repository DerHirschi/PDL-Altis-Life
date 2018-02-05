class DefaultEventhandlers;

class CfgPatches {
    class pdl_server {
        units[] = {"C_man_1"};
        weapons[] = {};
        requiredAddons[] = {"A3_Data_F","A3_Soft_F","A3_Soft_F_Offroad_01","A3_Characters_F"};
        fileName = "pdl_server.pbo";
        author[] = {"Tonic", "Modified by Die Liga Team"};
    };	
	class extDB3
	{
		projectName="extDB3";
		author="Torndeco";
		version="1.032";
		requiredAddons[] = {};
		units[] = {};
	};
};


class CfgFunctions {
	
	class extDB3
	{
		class system
		{
			file = "\pdl_server\extDB3";
			class preInit {preInit = 1;};
		};
		
	};
		
    class MySQL_Database {
        tag = "DB";
        class MySQL
        {
            file = "\pdl_server\Functions\MySQL";
            class numberSafe {};
            class mresArray {};
            class queryRequest{};
            class asyncCall{};
            class insertRequest{};
            class updateRequest{};
            class mresToArray {};
            class insertVehicle {};
            class bool {};
            class mresString {};
            class updatePartial {};
        };
    };

    class Life_System {
        tag = "life";
        class Wanted_Sys {
            file = "\pdl_server\Functions\WantedSystem";
            class wantedFetch {};
            class wantedPerson {};
            class wantedBounty {};
            class wantedRemove {};
            class wantedAdd {};
            class wantedCrimes {};
            class wantedProfUpdate {};
        };

        class Jail_Sys {
            file = "\pdl_server\Functions\Jail";
            class jailSys {};
        };

        class Client_Code {
            file = "\pdl_server\Functions\Client";
        };
    };

    class TON_System {
        tag = "TON";
        class Systems {
            file = "\pdl_server\Functions\Systems";
            class managesc {};
            class cleanup {};
            class huntingZone {};
            class getID {};
            class vehicleCreate {};
            class spawnVehicle {};
            class getVehicles {};
            class vehicleStore {};
            class vehicleDelete {};
            class spikeStrip {};
            class transferOwnership {};
            class federalUpdate {};
            class chopShopSell {};
            class clientDisconnect {};
            class cleanupRequest {};
            class setObjVar {};
            class keyManagement {};
            class vehicleUpdate {};
            class recupkeyforHC {};
            class handleBlastingCharge {};
            class terrainSort {};
        };

        class Housing {
            file = "\pdl_server\Functions\Housing";
            class preCheckHouse {};
            class addHouse {};
            class addContainer {};
            class deleteDBContainer {};
            class fetchPlayerHouses {};
            class initHouses {};
            class sellHouse {};
            class sellHouseContainer {};
            class updateHouseContainers {};
            class updateHouseTrunk {};
            class houseCleanup {};
            class houseGarage {};
        };

        class Gangs {
            file = "\pdl_server\Functions\Gangs";
            class insertGang {};
            class queryPlayerGang {};
            class removeGang {};
            class updateGang {};
        };

        class Actions {
            file = "\pdl_server\Functions\Actions";
            class pickupAction {};
        };

        class PlayTime {
            file = "\pdl_server\Functions\PlayTime";
            class setPlayTime {};
            class getPlayTime {};
        };

		class Schiffswrack20 {
			file = "\pdl_server\Scripte\Schiffswrack20";
			
			class WrackMain 			{};	//TON_fnc_WrackMain
			class WrackMakeSafe 		{};	//TON_fnc_WrackMakeSafe

		};
		
		class Firework_server		{			
			file = "\pdl_server\Scripte\Feuerwerk";
			

			class FireWork				{};	//TON_fnc_FireWork
			class LadenFeuerwerk		{};	//TON_fnc_LadenFeuerwerk
		
		};	
		
		class LadenServ	{
			file = "\pdl_server\Scripte\Laden";
			
			class addLaden 			{};	//TON_fnc_addLaden
			class initLaden			{};	//TON_fnc_initLaden
			class fetchPlayerLaden	{};	//TON_fnc_fetchPlayerLaden
			class updateKass		{};	//TON_fnc_updateKass
			class updateZusa		{};	//TON_fnc_updateZusa
			class cleanupLaden		{};	//TON_fnc_cleanupLaden
			class KassAction		{};	//TON_fnc_KassAction
			class sellLaden			{};	//TON_fnc_sellLaden
			class LadenFeuerwerk	{};	//TON_fnc_LadenFeuerwerk

		};
    };
};

class CfgVehicles {
    class Car_F;
    class CAManBase;
    class Civilian;
    class Civilian_F : Civilian {
        class EventHandlers;
    };

    class C_man_1 : Civilian_F {
        class EventHandlers: EventHandlers {
            init = "(_this select 0) execVM ""\pdl_server\fix_headgear.sqf""";
        };
    };
};
