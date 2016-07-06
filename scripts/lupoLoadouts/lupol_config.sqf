/*---------------------------------------------------------------------------
	The loadouts available at each trader
	// To-do: Add Virtual Items to Loadouts
---------------------------------------------------------------------------*/


lupo_loadouts = [ 
// START OF LOADOUTS CONFIG

	/*---------------------------------------------------------------------------
	TPD: Cadet Loadout
	---------------------------------------------------------------------------*/

	[	// START OF LOADOUT SELECTION

		"TPD: Cadet Loadout", 	//Loadout Name
		15000, 					//Loadout Price
		[["SMG_02_F","optic_ACO_grn_smg"],["hgun_P07_snds_F"]], //Loadout Weapons & Attachments (Main Inv)
		[], //Backpack weapons
		["16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"], //Inventory Magazines
		["16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_red","FirstAidKit","FirstAidKit","FirstAidKit","Chemlight_red","Chemlight_red","Chemlight_red","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"], //Backpack Magazines
		["ItemMap","ItemGPS","ItemRadio","Binocular","ItemWatch", "ItemCompass"], //Tools & Items
		"U_Rangemaster", //Uniform
		"V_Rangemaster_belt", //Vest
		"B_Carryall_cbr", //Backpack
		"H_HelmetB_plain_mcamo", //Headgear
		"G_Aviator", //Goggles/Shades
		[west], //Sides this is available to
		1,	//Minimum cop level to access this loadout
		[],	//Restrictive UID list, leave blank for all can use it, enter UIDS if you want only them players to be able
		[] //Restrictive license list, leave blank ([]) for no license restrictions

	]   // END OF LOADOUT SELECTION

]; // END OF LOADOUTS CONFIG


	
lupol_actionObjects = [
	cop_loadout_1
]; // END OF OBJECT SELECTION