/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
            { "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 525, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 475, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 300, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 500, { "", "", -1 } },
            { "U_NikosAgedBody", "Casual Wears", 500, { "", "", -1 } },
            { "U_C_man_sport_1_F", "Casual Wears", 500, { "", "", -1 } },
            { "U_C_man_sport_2_F", "Casual Wears", 500, { "", "", -1 } },
            { "U_C_man_sport_3_F", "Casual Wears", 500, { "", "", -1 } },
            { "U_C_man_casual_1_F", "Casual Wears", 500, { "", "", -1 } },
            { "U_C_man_casual_2_F", "Casual Wears", 500, { "", "", -1 } },
            { "U_C_man_casual_3_F", "Casual Wears", 500, { "", "", -1 } },
            { "U_C_man_casual_4_F", "Casual Wears", 500, { "", "", -1 } },
            { "U_C_man_casual_5_F", "Casual Wears", 500, { "", "", -1 } },
            { "U_C_man_casual_6_F", "Casual Wears", 500, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_1_F", "", 500, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_3_F", "", 500, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_4_F", "", 500, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_1_F", "", 500, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_2_F", "", 500, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_3_F", "", 500, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_4_F", "", 500, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_5_F", "", 500, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 135, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
            { "H_Booniehat_tan", "", 425, { "", "", -1 } },
            { "H_Hat_blue", "", 310, { "", "", -1 } },
            { "H_Hat_brown", "", 276, { "", "", -1 } },
            { "H_Hat_checker", "", 340, { "", "", -1 } },
            { "H_Hat_grey", "", 280, { "", "", -1 } },
            { "H_Hat_tan", "", 265, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } },
            { "H_Helmet_Skate", "", 150, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_Bergen_tna_F", "", 15000, { "", "", -1} }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_CombatUniform_mcam_worn", "Police Uniform", 100, { "life_coplevel", "SCALAR", 1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Cap_police", "", 50, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Beret_02", "", 50, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Beret_Colonel", "", 50, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Watchcap_blk", "", 50, { "life_coplevel", "SCALAR", 1 } },
            { "H_Beret_gen_F", "", 50, { "life_coplevel", "SCALAR", 4 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 200, { "", "", -1 } },
            { "	V_TacVest_blk_POLICE", "", 500, { "life_coplevel", "SCALAR", 1 } },
            { "V_PlateCarrier1_rgr", "", 1000, { "life_coplevel", "SCALAR", 2 } },
			{ "V_PlateCarrier1_blk", "", 1000, { "life_coplevel", "SCALAR", 2 } },
			{ "V_TacVest_gen_F", "", 700, { "life_coplevel", "SCALAR", 1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_FieldPack_blk", "", 1000, { "", "", -1 } },
            { "B_ViperHarness_blk_F", "", 1000, { "", "", -1 } },
            { "B_TacticalPack_blk", "", 1000, { "", "", -1 } },
            { "B_Carryall_cbr", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 1000, { "", "", -1 } },
            { "B_Bergen_tna_F", "", 15000, { "", "", -1} }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 4900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 1900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_CombatUniform_mcam", "EMS Uniform", 50, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "Dank Shades", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Carryall_cbr", "EMS Backpack", 300, { "", "", -1 } },
            { "B_Bergen_tna_F", "", 15000, { "", "", -1} }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerilla1_1", "", 500, {"", "", -1} },
			{ "U_BG_Guerilla2_3", "", 500, {"", "", -1} },
			{ "U_I_G_Story_Protagonist_F", "", 500, {"", "", -1} },
			{ "U_I_G_resistanceLeader_F", "", 500, {"", "", -1} },
			{ "U_OG_leader", "", 500, {"", "", -1} },
			{ "U_O_OfficerUniform_ocamo", "", 500, {"", "", -1} },
			{ "U_O_CombatUniform_oucamo", "", 500, {"", "", -1} },
			{ "U_I_CombatUniform", "", 500, {"", "", -1} },
			{ "U_B_survival_uniform", "", 500, {"", "", -1} },
			{ "U_B_CTRG_1", "", 500, {"", "", -1} },
			{ "U_B_CTRG_2", "", 500, {"", "", -1} },
			{ "U_B_CTRG_3", "", 500, {"", "", -1} },
			{ "U_B_CTRG_Soldier_F", "", 500, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_2_F", "", 500, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_3_F", "", 500, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_urb_F", "", 500, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_urb_2_F", "", 500, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_urb_3_F", "", 500, { "", "", -1 } },
            { "U_O_SpecopsUniform_ocamo", "", 5000, { "", "", -1 } },
            { "U_O_PilotCoveralls", "", 1561, { "", "", -1 } },
            { "U_IG_leader", "Guerilla Leader", 500, { "", "", -1 } },
            { "U_B_T_Soldier_F", "", 500, { "", "", -1 } },
            { "U_B_T_Soldier_AR_F", "", 500, { "", "", -1 } },
			{ "U_B_T_Soldier_SL_F", "", 500, { "", "", -1 } },
			{ "U_B_GEN_Soldier_F", "", 500, { "", "", -1 } },
			{ "U_B_Commander_F", "", 500, { "", "", -1 } },
			{ "U_O_T_Soldier_F", "", 500, { "", "", -1 } },
			{ "U_O_T_Officer_F", "", 500, { "", "", -1 } },
			{ "U_O_V_Soldier_Viper_F", "", 20000, { "", "", -1 } },
			{ "U_O_V_Soldier_Viper_hex_F", "", 20000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_2_F", "", 500, { "", "", -1 } },
			{ "U_I_C_Soldier_Camo_F", "", 500, { "", "", -1 } },
			{ "U_O_T_FullGhillie_tna_F", "", 20000, { "", "", -1 } },
			{ "U_O_T_Sniper_F", "", 20000, { "", "", -1 } },
			{ "U_B_T_FullGhillie_tna_F", "", 20000, { "", "", -1 } },
			{ "U_B_T_Sniper_F", "", 20000, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 20000, { "", "", -1 } },
			{ "U_B_FullGhillie_lsh", "", 20000, { "", "", -1 } },
			{ "U_B_FullGhillie_sard", "", 20000, { "", "", -1 } },
			{ "U_B_FullGhillie_ard", "", 20000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 300, { "", "", -1 } },
            { "H_Shemag_olive", "", 300, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 300, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 400, { "", "", -1 } },
			{ "H_MilCap_tna_F", "", 400, { "", "", -1 } },
			{ "H_MilCap_ghex_F", "", 400, { "", "", -1 } },
			{ "H_Booniehat_tna_F", "", 450, { "", "", -1 } },
            { "H_Bandanna_camo", "", 100, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "", 500, { "", "", -1 } },
			{ "H_HelmetB_camo", "", 500, { "", "", -1 } },
			{ "H_HelmetB_light", "", 500, { "", "", -1 } },
			{ "H_HelmetIA_net", "", 700, { "", "", -1 } },
			{ "H_HelmetB_grass", "", 500, { "", "", -1 } },
			{ "H_HelmetB_snakeskin", "", 500, { "", "", -1 } },
			{ "H_HelmetB_desert", "", 500, { "", "", -1 } },
			{ "H_HelmetB_black", "", 500, { "", "", -1 } },
			{ "H_HelmetCrew_I", "", 600, { "", "", -1 } },
			{ "H_PilotHelmetHeli_B", "", 500, { "", "", -1 } },
			{ "H_CrewHelmetHeli_B", "", 700, { "", "", -1 } },
			{ "H_HelmetB_TI_tna_F", "", 800, { "", "", -1 } },
			{ "H_HelmetO_ViperSP_hex_F", "", 40000, { "", "", -1 } },
			{ "H_HelmetO_ViperSP_ghex_F", "", 40000, { "", "", -1 } },
			{ "H_HelmetB_Enh_tna_F", "", 500, { "", "", -1 } },
			{ "H_HelmetB_Light_tna_F", "", 500, { "", "", -1 } },
			{ "H_HelmetCrew_O_ghex_F", "", 700, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } },
            // BI
            { "G_Balaclava_blk", "", 150, { "", "", -1 } },
            { "G_Balaclava_combat", "", 150, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 150, { "", "", -1 } },
            { "G_Balaclava_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 150, { "", "", -1 } },
            { "G_Bandanna_beast", "", 150, { "", "", -1 } },
            { "G_Bandanna_blk", "", 150, { "", "", -1 } },
            { "G_Bandanna_khk", "", 150, { "", "", -1 } },
            { "G_Bandanna_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_shades", "", 150, { "", "", -1 } },
            { "G_Bandanna_sport", "", 150, { "", "", -1 } },
            { "G_Bandanna_tan", "", 150, { "", "", -1 } },
            { "G_Balaclava_TI_blk_F", "", 3000, { "", "", -1} }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 1000, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 1000, { "", "", -1 } },
            { "V_BandollierB_rgr", "", 1000, { "", "", -1 } },
			{ "V_BandollierB_blk", "", 1000, { "", "", -1 } },
			{ "V_Chestrig_khk", "", 1000, { "", "", -1 } },
			{ "V_Chestrig_rgr", "", 1000, { "", "", -1 } },
			{ "V_Chestrig_blk", "", 1000, { "", "", -1 } },
			{ "V_TacVest_khk", "", 1000, { "", "", -1 } },
			{ "V_TacVest_blk", "", 1000, { "", "", -1 } },
			{ "V_TacVest_camo", "", 1000, { "", "", -1 } },
			{ "V_TacVestIR_blk", "", 1000, { "", "", -1 } },
			{ "V_HarnessO_brn", "", 1000, { "", "", -1 } },
			{ "V_PlateCarrier1_tna_F", "", 1000, { "", "", -1 } },
			{ "V_PlateCarrier2_tna_F", "", 1000, { "", "", -1 } },
			{ "V_PlateCarrierSpec_tna_F", "", 1000, { "", "", -1 } },
			{ "V_PlateCarrierGL_tna_F", "", 1000, { "", "", -1 } },
			{ "V_PlateCarrier1_rgr", "", 1000, { "", "", -1 } },
			{ "V_PlateCarrier3_rgr", "", 1000, { "", "", -1 } },
			{ "V_PlateCarrier1_blk", "", 1000, { "", "", -1 } },
			{ "V_PlateCarrierSpec_rgr", "", 1000, { "", "", -1 } },
			{ "V_PlateCarrier_Kerry", "", 1000, { "", "", -1 } },
			{ "V_PlateCarrierL_CTRG", "", 1000, { "", "", -1 } },
			{ "V_PlateCarrierIA1_dgtl", "", 1000, { "", "", -1 } },
			{ "V_PlateCarrierIA2_dgtl", "", 1000, { "", "", -1 } },
			{ "V_PlateCarrierGL_blk", "", 1000, { "", "", -1 } },
			{ "V_PlateCarrierSpec_blk", "", 1000, { "", "", -1 } },
			{ "V_PlateCarrierGL_mtp", "", 1000, { "", "", -1 } },
			{ "V_PlateCarrierSpec_mtp", "", 1000, { "", "", -1 } },
            { "V_Press_F","Suicide Vest", 100000, {"","",-1} }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_Bergen_tna_F", "", 15000, { "", "", -1} }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
};
