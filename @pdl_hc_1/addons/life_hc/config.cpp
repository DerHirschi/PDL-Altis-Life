#define true 1
#define false 0

class DefaultEventHandler;

class CfgPatches
{
    class life_headless_client
    {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"A3_Data_F"};
        fileName = "pdl_hc.pbo";
        author[] = {"Nanou", "Modified by Die Liga Team"};
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

class CfgFunctions
{
	class extDB3
	{
		class system
		{
			file = "\pdl_hc\extDB3";
			class preInit {preInit = 1;};
		};
	};
	
    class Headless_Client
    {
        tag = "HC";
        class General
        {
            file = "\pdl_hc\MySQL\General";
            class asyncCall {};
            class bool {};
            class insertRequest {};
            class insertVehicle {};
            class mresArray {};
            class mresString {};
            class mresToArray {};
            class numberSafe {};
            class queryRequest {};
            class updatePartial {};
            class updateRequest {};
            class cleanup {};
            class huntingZone {};
            class receivekeyofServer {};
        };

        class PlayTime
        {
            file = "\pdl_hc\MySQL\PlayTime";
            class getPlayTime {};
            class setPlayTime {};
        };

        class Housing
        {
            file = "\pdl_hc\MySQL\Housing";
            class addContainer {};
            class addHouse {};
            class deleteDBContainer {};
            class fetchPlayerHouses {};
            class houseCleanup {};
            class sellHouse {};
            class sellHouseContainer {};
            class updateHouseContainers {};
            class updateHouseTrunk {};
            class houseGarage {};
        };

        class Gangs
        {
            file = "\pdl_hc\MySQL\Gangs";
            class insertGang {};
            class queryPlayerGang {};
            class removeGang {};
            class updateGang {};
        };

        class Vehicles
        {
            file = "\pdl_hc\MySQL\Vehicles";
            class chopShopSell {};
            class getVehicles {};
            class spawnVehicle {};
            class keyManagement {};
            class vehicleStore {};
            class vehicleCreate {};
            class vehicleDelete {};
            class vehicleUpdate {};
        };

        class Wanted_Sys
        {
            file = "\pdl_hc\MySQL\WantedSystem";
            class wantedFetch {};
            class wantedPerson {};
            class wantedBounty {};
            class wantedRemove {};
            class wantedAdd {};
            class wantedCrimes {};
            class wantedProfUpdate {};
        };

        class Jail
        {
            file = "\pdl_hc\MySQL\Jail";
            class jailSys;
        };

        class Items
        {
            file = "\pdl_hc\MySQL\Items";
            class spikeStrip {};
        };

    };

};
