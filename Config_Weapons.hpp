/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 1000, -1 },
            { "hgun_ACPC2_F", "", 1500, -1 },
            { "hgun_PDW2000_F", "", 5000, -1 },
            { "optic_ACO_grn_smg", "", 250, 250 },
			{ "V_Rangemaster_belt", "", 250, 250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "9Rnd_45ACP_Mag", "", 50 },
            { "6Rnd_45ACP_Cylinder", "", 45 },
            { "30Rnd_9x21_Mag", "", 50 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_ACPC2_F", "", 1500, 0 },
            { "hgun_Pistol_heavy_01_F", "", 10000, 0 },
            { "arifle_AK12_F", "", 90000, 0 },
            { "arifle_AK12_GL_F", "", 90000, 0 },
            { "arifle_AKM_F", "", 75000, 0 },
            { "arifle_AKS_F", "", 70000, 0 },
            { "arifle_TRG20_F", "", 35000, 0 },
            { "arifle_Katiba_F", "", 35000, 0 },
            { "arifle_SDAR_F", "", 35000, 0 },
            { "hgun_PDW2000_F", "", 35000, 0 },
            { "arifle_MXM_F", "", 20000, 0 },
            { "arifle_MX_F", "", 25000, 0 },
            { "arifle_MXC_F", "", 37000, 0 },
            { "arifle_Mk20_F", "", 25000, 0 },
            { "LMG_Mk200_F", "", 75000, 0 },
            { "srifle_EBR_F", "", 90000, 0 },
            { "srifle_DMR_06_camo_F", "", 70000, 0 },
            { "SMG_01_F", "", 35000, 0 },
            { "SMG_02_F", "", 45000, 0 },
            { "MMG_01_hex_F", "", 80000, 0 },
            { "srifle_DMR_01_F", "", 70000, 0 },
            { "srifle_DMR_04_F", "", 70000, 0 },
            { "srifle_GM6_F", "", 140000, 0 },
            { "srifle_DMR_03_F", "", 80000, 0 },
            { "LMG_Zafir_F", "", 155000, 0 },
            { "srifle_DMR_02_camo_F", "", 70000, 0 },
            { "srifle_DMR_05_blk_F", "", 70000, 0 },
            { "MMG_02_black_F", "", 180000, 0 },
            { "optic_Arco", "", 1000, 0 },
            { "optic_Aco", "", 1000, 0 },
            { "optic_Holosight", "", 1000, 0 },
            { "acc_flashlight", "", 10000, 0 },
            { "acc_pointer_IR", "", 1000, 0 },
            { "optic_MRCO", "", 1000, 0 },
            { "optic_DMS", "", 1000, 0 },
            { "optic_LRPS", "", 1000, 0 },
            { "optic_AMS", "", 1000, 0 },
            { "optic_Hamr", "", 750, 0 },
			{ "optic_NVS", "", 10000, 0 },
			{ "optic_tws", "", 20000, 0 },
            { "bipod_01_F_snd", "", 100, 0 },
            { "bipod_01_F_blk", "", 100, 0 },
            { "bipod_02_F_blk", "", 100, 0 },
            { "bipod_02_F_tan", "", 100, 0 },
            { "muzzle_snds_acp", "", 500, 0 },
            { "muzzle_snds_H", "", 500, 0 },
            { "muzzle_snds_L", "", 500, 0 },
            { "muzzle_snds_M", "", 500, 0 },
            { "muzzle_snds_B", "", 500, 0 },
            { "muzzle_snds_H_MG", "", 500, 0 },
            { "muzzle_snds_338_green", "", 500, 0 },
            { "muzzle_snds_93mmg", "", 500, 0 },
            { "NVGoggles", "", 200, 0 },
			{ "NVGogglesB_blk_F", "", 1000, 0 },
            { "Rangefinder", "", 100, 0 }
           
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 30 },
            { "11Rnd_45ACP_Mag", "", 30 },
            { "30Rnd_556x45_Stanag", "", 30 },
            { "30Rnd_65x39_caseless_green", "", 30 },
            { "20Rnd_556x45_UW_mag", "", 30 },
            { "30Rnd_9x21_Mag", "", 30 },
            { "30Rnd_65x39_caseless_mag", "", 30 },
            { "200Rnd_65x39_cased_Box", "", 30 },
            { "20Rnd_762x51_Mag", "", 30 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 30 },
            { "150Rnd_93x64_Mag", "", 30 },
            { "10Rnd_762x54_Mag", "", 30 },
            { "5Rnd_127x108_Mag", "", 30 },
            { "150Rnd_762x54_Box_Tracer", "", 30 },
            { "10Rnd_93x64_DMR_05_Mag", "", 30 },
            { "130Rnd_338_Mag", "", 30 },
            { "10Rnd_338_Mag", "", 30 },
            { "10Rnd_127x54_Mag", "", 30 },
            { "30Rnd_762x39_Mag_F", "", 30 },
            { "30Rnd_545x39_Mag_F", "", 30 }
            
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 5000, 500 },
			{ "hgun_Pistol_heavy_02_F", "", 5000, 500 },
			{ "hgun_ACPC2_F", "", 5000, 500 },
			{ "hgun_PDW2000_F", "", 5000, 500 },
			{ "SMG_02_F", "", 5000, 500 },
			{ "optic_ACO_grn_smg", "", 5000, 500 },
			{ "V_Rangemaster_belt", "", 5000, 500 }
            
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "9Rnd_45ACP_Mag", "", 50 },
            { "6Rnd_45ACP_Cylinder", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Tanoa General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 200, 980 },
            { "Chemlight_red", "", 1, -1 },
            { "Chemlight_yellow", "", 1, 50 },
            { "Chemlight_green", "", 1, 50 },
            { "Chemlight_blue", "", 1, 50 }
        };
        mags[] = {};
    };

    class f_station_store {
        name = "Tanoa Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 50, 45 },
            { "ItemMap", "", 25, 15 },
            { "ItemCompass", "", 25, 15 },
            { "ItemWatch", "", 25, -1 },
            { "ToolKit", "", 125, 75 },
            { "FirstAidKit", "", 75, 65 },
            { "NVGoggles", "", 1000, 980 },
            { "Chemlight_red", "", 100, -1 },
            { "Chemlight_yellow", "", 100, 50 },
            { "Chemlight_green", "", 100, 50 },
            { "Chemlight_blue", "", 100, 50 }
        };
        mags[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Item Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a Cadet!" };
        items[] = {
            { "hgun_P07_snds_F", "Stun Pistol", 1000, 650 },
            { "HandGrenade_Stone", "Flashbang", 500, -1 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 200, 75 },
            { "FirstAidKit", "", 100, 65 },
            { "Medikit", "", 100, 450 },
            { "NVGogglesB_blk_F", "", 100, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 }
        };
    };
 
    class cop_cadet {
        name = "Cadet Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a Cadet!" };
        items[] = {
            { "arifle_TRG21_F", "", 1000, 0 },
            { "SMG_02_F", "", 1500, 0 },
            { "SMG_05_F", "", 1500, 0 },
            { "optic_Arco", "", 500, 0 },
            { "optic_Hamr", "", 500, 0 },
            { "optic_ACO", "", 500, 0 },
            { "optic_ACO_grn", "", 500, 0 },
            { "acc_pointer_IR", "", 300, 0 },
            { "muzzle_snds_M", "", 500, 0 },
            { "muzzle_snds_M", "", 500, 0 },
            { "optic_Holosight", "", 500, 0 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 50 },
            { "30Rnd_9x21_Mag", "", 50 },
            { "30Rnd_9x21_Mag_SMG_02", "", 50 }
        };
    };
 
        class cop_Officer {
        name = "Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Officer!" };
        items[] = {
            { "arifle_MX_F", "", 10000, 0 },
            { "arifle_Mk20C_plain_F", "", 20000, 0 },
            { "arifle_AK12_F", "", 40000, 0 },
            { "srifle_EBR_F", "", 40000, 0 },
            { "arifle_MXM_Black_F", "", 15000, 0 },
            { "arifle_MX_SW_Black_F", "", 20000, 0 },
            { "srifle_DMR_03_ACO_F", "", 15000, 0 },
            { "optic_Arco", "", 500, 0 },
            { "optic_Hamr", "", 500, 0 },
            { "optic_ACO", "", 500, 0 },
            { "optic_ACO_grn", "", 500, 0 },
            { "acc_pointer_IR", "", 300, 0 },
            { "muzzle_snds_B", "", 500, 0 },
            { "muzzle_snds_H_MG", "", 500, 0 },
            { "muzzle_snds_L", "", 500, 0 },
            { "bipod_01_F_blk", "", 100, 0 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 50 },
            { "30Rnd_556x45_Stanag", "", 50 },
            { "30Rnd_762x39_Mag_F", "", 50 },
            { "20Rnd_762x51_Mag", "", 50 },
            { "30Rnd_65x39_caseless_mag", "", 50 },
            { "100Rnd_65x39_caseless_mag", "", 50 },
            { "20Rnd_762x51_Mag", "", 50 }
        };
    };
 
        class cop_corporal {
        name = "Corporal Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Corporal!" };
        items[] = {
            { "LMG_Mk200_F", "", 50000, 0 },
            { "srifle_DMR_01_F", "", 20000, 0 },
            { "arifle_ARX_blk_F", "", 30000, 0 },
            { "arifle_SPAR_01_blk_F", "", 20000, 0 },
            { "srifle_DMR_06_olive_F", "", 30000, 0 },
            { "optic_Arco", "", 500, 0 },
            { "optic_Hamr", "", 500, 0 },
            { "optic_ACO", "", 500, 0 },
            { "optic_ACO_grn", "", 500, 0 },
            { "acc_pointer_IR", "", 300, 0 },
            { "optic_MRCO", "", 500, 0 },
            { "optic_DMS", "", 700, 0 },
			{ "optic_NVS", "", 5000, 0 },
			{ "optic_tws", "", 10000, 0 },
            { "muzzle_snds_B", "", 500, 0 },
            { "muzzle_snds_H_MG", "", 500, 0 },
            { "muzzle_snds_L", "", 500, 0 },
            { "bipod_01_F_blk", "", 100, 0 }           
        };
        mags[] = {
            { "200Rnd_65x39_cased_Box", "", 50 },
            { "10Rnd_762x54_Mag", "", 50 },
            { "10Rnd_762x54_Mag", "", 50 },
            { "30Rnd_65x39_caseless_green", "", 50 },
            { "30Rnd_556x45_Stanag", "", 50 },
            { "20Rnd_762x51_Mag", "", 50 },
            { "30Rnd_65x39_caseless_mag", "", 50 },
            { "10Rnd_50BW_Mag_F", "", 50 }
        };
    };
 
     class cop_sergeant {
        name = "Sergeant Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "You must be a Sergeant!" };
        items[] = {
            { "srifle_DMR_07_blk_F", "", 30000, 0 },
            { "arifle_SPAR_03_blk_F", "", 30000, 0 },
            { "srifle_DMR_05_blk_F", "", 25000, 0 },
            { "arifle_ARX_blk_F", "", 25000, 0 },
            { "optic_Arco", "", 500, 0 },
            { "optic_Hamr", "", 500, 0 },
            { "optic_ACO", "", 500, 0 },
            { "optic_ACO_grn", "", 500, 0 },
            { "acc_pointer_IR", "", 300, 0 },
            { "optic_MRCO", "", 500, 0 },
            { "optic_DMS", "", 700, 0 },
			{ "optic_NVS", "", 5000, 0 },
			{ "optic_tws", "", 10000, 0 },
            { "muzzle_snds_B", "", 500, 0 },
            { "muzzle_snds_93mmg", "", 500, 0 },
            { "bipod_01_F_blk", "", 100, 0 }
        };
        mags[] = {
            { "20Rnd_650x39_Cased_Mag_F", "", 50 },
            { "20Rnd_762x51_Mag", "", 50 },
            { "10Rnd_93x64_DMR_05_Mag", "", 50 },
            { "30Rnd_580x42_mag_F", "", 50 },
            { "10Rnd_50BW_Mag_F", "", 50 }
        };
    };  
 
    class cop_lieutenant {
        name = "Lieutenant Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "You must be a Lieutenant!" };
        items[] = {
            { "arifle_SPAR_02_blk_F", "", 30000, 0 },
            { "LMG_03_F", "", 50000, 0 },
            { "srifle_DMR_02_F", "", 25000, 0 },
            { "optic_Arco", "", 500, 0 },
            { "optic_Hamr", "", 500, 0 },
            { "optic_ACO", "", 500, 0 },
            { "optic_ACO_grn", "", 500, 0 },
            { "acc_pointer_IR", "", 300, 0 },
            { "optic_MRCO", "", 500, 0 },
            { "optic_DMS", "", 700, 0 },
			{ "optic_NVS", "", 5000, 0 },
			{ "optic_tws", "", 10000, 0 },
            { "muzzle_snds_B", "", 500, 0 },
            { "muzzle_snds_93mmg", "", 500, 0 },
            { "muzzle_snds_338_black", "", 500, 0 },
            { "bipod_01_F_blk", "", 100, 0 },
			{ "optic_LRPS", "", 700, 0 }
        };
        mags[] = {
            { "150Rnd_556x45_Drum_Mag_F", "", 50 },
            { "200Rnd_556x45_Box_F", "", 50 },
            { "10Rnd_338_Mag", "", 50 }
        };
    };

    class cop_captain {
        name = "Captain Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "You must be a Captain!" };
        items[] = {
            { "srifle_LRR_F", "", 75000, 0 },
			{ "arifle_MX_F", "", 1000, 0 },
			{ "arifle_Mk20C_plain_F", "", 1500, 0 },
			{ "arifle_AK12_F", "", 40000, 0 },
			{ "srifle_EBR_F", "", 40000, 0 },
			{ "arifle_MXM_Black_F", "", 15000, 0 },
			{ "arifle_MX_SW_Black_F", "", 20000, 0 },
			{ "srifle_DMR_03_ACO_F", "", 15000, 0 },
			{ "srifle_DMR_01_F", "", 20000, 0 },
			{ "arifle_ARX_blk_F", "", 30000, 0 },
			{ "arifle_SPAR_01_blk_F", "", 30000, 0 },
			{ "srifle_DMR_06_olive_F", "", 30000, 0 },
			{ "srifle_DMR_07_blk_F", "", 30000, 0 },
			{ "arifle_SPAR_03_blk_F", "", 30000, 0 },
			{ "srifle_DMR_05_blk_F", "", 25000, 0 },
			{ "arifle_ARX_blk_F", "", 25000, 0 },
			{ "arifle_SPAR_02_blk_F", "", 25000, 0 },
			{ "LMG_03_F", "", 50000, 0 },
			{ "srifle_DMR_02_F", "", 25000, 0 },
			{ "optic_Arco", "", 500, 0 },
			{ "optic_Hamr", "", 500, 0 },
			{ "optic_ACO", "", 500, 0 },
			{ "optic_ACO_grn", "", 500, 0 },
			{ "acc_pointer_IR", "", 300, 0 },
			{ "optic_MRCO", "", 500, 0 },
			{ "optic_DMS", "", 700, 0 },
			{ "optic_NVS", "", 5000, 0 },
			{ "optic_tws", "", 10000, 0 },
			{ "muzzle_snds_B", "", 500, 0 },
			{ "muzzle_snds_93mmg", "", 500, 0 },
			{ "bipod_01_F_blk", "", 100, 0 },
			{ "optic_LRPS", "", 700, 0 }
        };
        mags[] = {
            { "7Rnd_408_Mag", "", 50 },
			{ "30Rnd_65x39_caseless_mag", "", 50 },
			{ "30Rnd_556x45_Stanag", "", 50 },
			{ "30Rnd_762x39_Mag_F", "", 50 },
			{ "20Rnd_762x51_Mag", "", 50 },
			{ "30Rnd_65x39_caseless_mag", "", 50 },
			{ "100Rnd_65x39_caseless_mag", "", 50 },
			{ "20Rnd_762x51_Mag", "", 50 },
			{ "10Rnd_762x54_Mag", "", 50 },
			{ "30Rnd_65x39_caseless_mag ", "", 50 },
			{ "10Rnd_762x54_Mag", "", 50 },
			{ "1Rnd_HE_Grenade_shell", "", 50 },
			{ "30Rnd_65x39_caseless_green", "", 50 },
			{ "30Rnd_556x45_Stanag", "", 50 },
			{ "20Rnd_762x51_Mag", "", 50 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 50 },
			{ "20Rnd_762x51_Mag", "", 50 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 50 },
			{ "30Rnd_580x42_mag_FSpar ", "", 50 },
			{ "150Rnd_556x45_Drum_Mag_F", "", 50 },
			{ "150Rnd_556x45_Drum_Mag_F", "", 50 },
			{ "200Rnd_556x45_Box_F", "", 50 },
			{ "10Rnd_338_Mag", "", 50 },
            { "10Rnd_50BW_Mag_F", "", 50 }
        };
    }; 




    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 10, 5 },
            { "Binocular", "", 15, -1 },
            { "ToolKit", "", 250, 5 },
            { "FirstAidKit", "", 50, 65 },
            { "Medikit", "", 100, 450 },
            { "NVGogglesB_blk_F", "", 100, 98 }
        };
        mags[] = {};
    };
};
