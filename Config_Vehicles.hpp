class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: SCALAR (Rental Price)
    *        2: ARRAY (license required)
    *            Ex: { "driver", "trucking", "rebel" }
    *        3: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", 1000, { "" }, { "", "", -1 } },
            { "C_Hatchback_01_F", 5000, { "driver" }, { "", "", -1 } },
            { "C_Offroad_01_F", 8000, { "driver" }, { "", "", -1 } },
            { "C_SUV_01_F", 20000, { "driver" }, { "", "", -1 } },
            { "C_Hatchback_01_sport_F", 30000, { "driver" }, { "", "", -1 } },
            { "C_Van_01_transport_F", 7000, { "driver" }, { "", "", -1 } },
            { "C_Offroad_02_unarmed_F", 13000, { "driver" }, { "", "", -1 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", 5000 , { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Fuel_F", 5000, { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Red_F", 5000, { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Vrana_F", 5000, { "driver" }, { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
			{ "C_Hatchback_01_sport_F", 30000, { "" }, { "", "", -1 } },
            { "C_SUV_01_F", 20000, { "" }, { "", "", -1 } },
			{ "C_Offroad_01_F", 8000, { "" }, { "", "", -1 } },
            { "C_Van_01_box_F", 5000, { "" }, { "", "", -1 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "B_Heli_Light_01_F", 50000, { "mAir" }, { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", 225000, { "mAir" }, { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_box_F", 15000, { "trucking" }, { "", "", -1 } },
            { "I_Truck_02_transport_F", 50000, { "trucking" }, { "", "", -1 } },
            { "I_Truck_02_covered_F", 50000, { "trucking" }, { "", "", -1 } },
            { "B_Truck_01_transport_F", 175000, { "trucking" }, { "", "", -1 } },
            { "O_Truck_03_transport_F", 150000, { "trucking" }, { "", "", -1 } },
            { "O_Truck_03_covered_F", 200000, { "trucking" }, { "", "", -1 } },
            { "B_Truck_01_box_F", 300000, { "trucking" }, { "", "", -1 } },
            { "O_Truck_03_device_F", 400000, { "trucking" }, { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", 1000, { "" }, { "", "", -1 } },
            { "B_G_Offroad_01_F", 8000, { "" }, { "", "", -1 } },
            { "O_MRAP_02_F", 350000, { "" }, { "", "", -1 } },
            { "B_Heli_Light_01_F", 200000, { "" }, { "", "", -1 } },
            { "B_G_Offroad_01_armed_F", 300000, { "rebel" }, { "", "", -1 } },
            { "O_T_LSV_02_unarmed_black_F", 50000, { "rebel" }, { "", "", -1 } }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            { "C_SUV_01_F", 20000, { "" }, { "", "", -1 } },
            { "C_Hatchback_01_sport_F", 30000, { "" }, { "life_coplevel", "SCALAR", 3 } },
            { "B_MRAP_01_F", 50000, { "" }, { "life_coplevel", "SCALAR", 4 } },
            { "C_Offroad_01_F", 8000, { "" }, { "life_coplevel", "SCALAR", -1 } },
			{ "I_Truck_02_covered_F", 10000, { "" }, { "life_coplevel", "SCALAR", 2 } },
			{ "B_LSV_01_unarmed_black_F", 10000, { "" }, { "life_coplevel", "SCALAR", 3 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "B_Heli_Light_01_F", 50000, { "pilot" }, { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", 225000, { "pilot" }, { "", "", -1 } },
			{ "I_Heli_Transport_02_F", 300000, { "pilot" }, { "", "", -1 } },
			{ "B_Heli_Transport_03_unarmed_F", 1000000, { "pilot" }, { "", "", -1 } },
			{ "O_Heli_Transport_04_repair_F", 525000, { "pilot" }, { "", "", -1 } },
			{ "O_Heli_Transport_04_box_F", 600000, { "pilot" }, { "", "", -1 } },
			{ "O_Heli_Transport_04_bench_F", 550000, { "pilot" }, { "", "", -1 } },
			{ "O_Heli_Transport_04_F", 500000, { "pilot" }, { "", "", -1 } },
            { "C_Plane_Civil_01_F", 100000, { "pilot" }, { "", "", -1 } },
            { "C_Plane_Civil_01_racing_F", 125000, { "pilot" }, { "", "", -1 } },
            { "I_C_Plane_Civil_01_F", 100000, { "pilot" }, { "", "", -1 } },
			{ "O_T_VTOL_02_infantry_grey_F", 800000, { "pilot" }, { "", "", -1 } },
			{ "B_T_VTOL_01_infantry_blue_F", 2000000, { "pilot" }, { "", "", -1 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", 50000, { "cAir" }, { "life_coplevel", "SCALAR", 2 } },
            { "B_Heli_Transport_01_F", 100000, { "cAir" }, { "life_coplevel", "SCALAR", 3 } },
            { "B_T_VTOL_01_armed_F", 5000000, {"cAir"}, { "life_coplevel", "SCALAR", 4 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", 3000, { "cg" }, { "", "", 3 } },
            { "C_Boat_Civil_01_police_F", 2000, { "cg" }, { "", "", 3 } },
            { "B_Boat_Armed_01_minigun_F", 7500, { "cg" }, { "life_coplevel", "SCALAR", 3 } },
            { "B_SDV_01_F", 5000, { "cg" }, { "", "", 3 } }
        };
    };

    class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", 500, { "boat" }, { "", "", -1 } },
			{ "B_Lifeboat", 500, { "boat" }, { "", "", -1 } },
            { "C_Boat_Civil_01_F", 2000, { "boat" }, { "", "", -1 } },
            { "B_SDV_01_F", 5000, { "boat" }, { "", "", -1 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    storageFee (Getting vehicles out of garage) format:
    *        INDEX 0: Civilian Price
    *        INDEX 1: Cop Price
    *        INDEX 2: EMS Price
    *        INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
    *
    *    garageSell (Selling vehicles from garage) format:
    *        INDEX 0: Civilian Price
    *        INDEX 1: Cop Price
    *        INDEX 2: EMS Price
    *        INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
    *
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *       INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    */

    class Default {
        vItemSpace = -1;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 10000;
        chopShop = 5000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 10000;
        chopShop = 5000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 10000;
        chopShop = 5000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 250, 0, 0, 0 };
        insurance = 100;
        chopShop = 400;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 10000, 0, 0, 0 };
        insurance = 15000;
        chopShop = 90000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 250;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 0;
        chopShop = 0;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Boat_Armed_01_hmg_F {
        vItemSpace = 175;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 0;
        chopShop = 0;
        textures[] = { };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 0;
        chopShop = 0;
        textures[] = { };
    };

    class I_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 0;
        chopShop = 0;
        textures[] = { };
    };

    class B_G_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 0;
        chopShop = 0;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 1500, 0, 0, 0 };
        insurance = 1000;
        chopShop = 2500;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 200000, 0, 0, 0 };
        insurance = 10000;
        chopShop = 350000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 500000, 0, 0, 0 };
        insurance = 15000;
        chopShop = 700000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 0;
        chopShop = 0;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 0;
        chopShop = 0;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 0;
        chopShop = 0;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 80;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 4000, 0, 0, 0 };
        insurance = 3000;
        chopShop = 7000;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 150000, 0, 0, 0 };
        insurance = 0;
        chopShop = 250000;
        textures[] = { };
    };

    class I_G_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 0;
        chopShop = 0;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 1000, 0, 0, 0 };
        insurance = 1000;
        chopShop = 1500;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 1000, 0, 0, 0 };
        insurance = 500;
        chopShop = 1500;
        textures[] = { };
    };

    class C_Boat_Civil_01_rescue_F {
        vItemSpace = 85;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 0;
        chopShop = 0;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 600;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 300000, 0, 0, 0 };
        insurance = 15000;
        chopShop = 500000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 150000, 0, 0, 0 };
        insurance = 10000;
        chopShop = 250000;
        textures[] = { };
    };

    class B_T_VTOL_01_armed_F {
    	vItemSpace = 400;
    	storageFee[] = { 0, 0, 0, 0 };
    	garageSell[] = { 0, 0, 0, 0 };
    	insurance = 40000;
    	chopShop = 0;
    	textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 200000, 0, 0, 0 };
        insurance = 10000;
        chopShop = 300000;
        textures[] = { };
    };

    class I_MRAP_03_F {
        vItemSpace = 58;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 0;
        chopShop = 0;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 4000, 0, 0, 0 };
        insurance = 3000;
        chopShop = 7000;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Police Truck", "cop", {
                "textures\cop\vehicles\offroad_1.paa"
            } }
        };
    };


    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 3000, 0, 0, 0 };
        inusrance = 1000;
        chopShop = 4000;
        textures[] = {};
    };

    class C_Kart_01_Fuel_F {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 3000, 0, 0, 0 };
        inusrance = 1000;
        chopShop = 4000;
        textures[] = {};
    };

    class C_Kart_01_Red_F {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 3000, 0, 0, 0 };
        inusrance = 1000;
        chopShop = 4000;
        textures[] = {};
    };

    class C_Kart_01_Vrana_F {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 3000, 0, 0, 0 };
        inusrance = 1000;
        chopShop = 4000;
        textures[] = {};
    };

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 15000, 0, 0, 0 };
        insurance = 10000;
        chopShop = 27000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Highway Patrol Vehicle", "cop", {
                "textures\cop\vehicles\hatchback_1.paa"
            } },
            { "Medic", "med", {
                "textures\medic\vehicles\hatchback_1.paa"
            } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 500, 0, 0, 0 };
        insurance = 100;
        chopShop = 600;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 60000, 0, 0, 0 };
        insurance = 10000;
        chopShop = 90000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Police Transport", "cop", {
                "textures\cop\vehicles\zamac_1_front.paa",
				"textures\cop\vehicles\zamac_1_back.paa"
            } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 45000, 0, 0, 0 };
        insurance = 5000;
        chopShop = 60000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 350;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 250000, 0, 0, 0 };
        insurance = 15000;
        chopShop = 400000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 2500, 0, 0, 0 };
        insurance = 1000;
        chopShop = 4000;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } },
            { "Police Hatchback", "cop", {
                "textures\cop\vehicles\hatchback_1.paa"
            } },
            { "Medic Hatchback", "med", {
                "textures\medic\vehicles\hatchback_1.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 10000, 0, 0, 0 };
        insurance = 5000;
        chopShop = 15000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Police SUV", "cop", {
                "textures\cop\vehicles\suv_1.paa"
            } },
            { "Medic SUV", "med", {
                "textures\medic\vehicles\suv_1.paa"
            } }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 4000, 0, 0, 0 };
        insurance = 1000;
        chopShop = 6000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 15000, 0, 0, 0 };
        insurance = 5000;
        chopShop = 20000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } },
			{ "Ambulance", "med", {
                "textures\medic\vehicles\boxer_1_front.paa",
				"textures\medic\vehicles\boxer_1_back.paa"
            } }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 25000, 0, 0 };
        insurance = 10000;
        chopShop = 40000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 25000, 0, 0, 0 };
        insurance = 5000;
        chopShop = 40000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
            { "Sheriff", "cop", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 100000, 0, 0, 0 };
        insurance = 10000;
        chopShop = 200000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS Chopper", "med", {
                "textures\medic\vehicles\orca_1.paa"
            } }
        };
    };

    class I_Heli_Transport_02_F {
        vItemSpace = 375;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 150000, 0, 0, 0 };
        insurance = 15000;
        chopShop = 250000;
        textures[] = {
            { "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 2500, 0, 0, 0 };
        insurance = 1000;
        chopShop = 4500;
        textures[] = {};
    };

    class O_T_LSV_02_unarmed_F {
        vItemSpace = 50;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 0;
        chopShop = 0;
        textures[] = {};
    };

    class O_T_LSV_02_unarmed_viper_F {
        vItemSpace = 50;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 0;
        chopShop = 0;
        textures[] = {};
    };

    class O_T_LSV_02_unarmed_black_F {
        vItemSpace = 50;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 0;
        chopShop = 0;
        textures[] = {};
    };

    class O_T_LSV_02_unarmed_viper_black_F {
        vItemSpace = 50;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 0;
        chopShop = 0;
        textures[] = {};
    };

    class B_GEN_Offroad_01_gen_F {
        vItemSpace = 50;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 0;
        chopShop = 0;
        textures[] = {};
    };

    class C_Plane_Civil_01_F {
        vItemSpace = 50;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 50000, 0, 0, 0 };
        insurance = 20000;
        chopShop = 90000;
        textures[] = {};
    };

    class C_Plane_Civil_01_racing_F {
        vItemSpace = 50;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 50000, 0, 0, 0 };
        insurance = 20000;
        chopShop = 90000;
        textures[] = {};
    };

    class B_T_VTOL_01_infantry_blue_F {
        vItemSpace = 500;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 700000, 0, 0 };
        insurance = 25000;
        chopShop = 1000000;
        textures[] = {};
    };
	
	class O_T_VTOL_02_infantry_grey_F {
        vItemSpace = 500;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 1500000, 0, 0 };
        insurance = 30000;
        chopShop = 2500000;
        textures[] = {};
    };
	
    class I_C_Plane_Civil_01_F {
        vItemSpace = 50;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 50000, 0, 0, 0 };
        insurance = 20000;
        chopShop = 90000;
        textures[] = {};
    };
	
	class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 500;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 600000, 0, 0, 0 };
        insurance = 25000;
        chopShop = 900000;
        textures[] = {};
    };
	
	class O_Heli_Transport_04_repair_F {
        vItemSpace = 400;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 300000, 0, 0, 0 };
        insurance = 20000;
        chopShop = 450000;
        textures[] = {};
    };
	
	class O_Heli_Transport_04_box_F {
        vItemSpace = 400;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 325000, 0, 0, 0 };
        insurance = 20000;
        chopShop = 420000;
        textures[] = {};
    };
	
	class O_Heli_Transport_04_bench_F {
        vItemSpace = 150;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 350000, 0, 0, 0 };
        insurance = 20000;
        chopShop = 460000;
        textures[] = {};
    };
	
	class O_Heli_Transport_04_F {
        vItemSpace = 380;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 350000, 0, 0, 0 };
        insurance = 20000;
        chopShop = 440000;
        textures[] = {};
    };

    class B_T_LSV_01_unarmed_F {
        vItemSpace = 65;
        storageFee[] = { 0, 7500, 0, 0 };
        garageSell[] = { 0, 10000, 0, 0 };
        insurance = 0;
        chopShop = 0;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };
};