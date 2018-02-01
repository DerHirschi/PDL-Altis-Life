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