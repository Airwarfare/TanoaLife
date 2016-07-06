/*
	File: fn_copLoadout.sqf
	Author: Bryan "Tonic" Boardwine
	Edited: Itsyuka
	
	Description:
	Loads the cops out with the default gear.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

//Load player with default cop gear.
player addUniform "U_B_CombatUniform_mcam_worn";
player addVest "V_TacVest_blk_POLICE";
player addBackPack "B_ViperLightHarness_blk_F";
player addHeadgear "";

player addMagazine "30Rnd_9x21_Mag_SMG_02";
player addMagazine "30Rnd_9x21_Mag_SMG_02";
player addMagazine "30Rnd_9x21_Mag_SMG_02";
player addMagazine "30Rnd_9x21_Mag_SMG_02";
player addMagazine "30Rnd_9x21_Mag_SMG_02";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addWeapon "hgun_P07_snds_F";
player addWeapon "SMG_05_F";
player selectWeapon "SMG_05_F";

player addItem "ItemGPS";
player assignItem "ItemGPS";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "NVGoggles_OPFOR";
player assignItem "NVGoggles_OPFOR";

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;