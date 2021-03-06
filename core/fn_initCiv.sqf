/*
	File: fn_initCiv.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Initializes the civilian.
*/
private["_spawnPos"];
civ_spawn_1 = nearestObjects[getMarkerPos  "civ_spawn_1", ["Land_Supermarket_01_F"],250];
civ_spawn_2 = nearestObjects[getMarkerPos  "civ_spawn_2", ["Land_Supermarket_01_F","Land_Shop_City_03_F","Land_House_Big_03_F","Land_House_Small_04_F","Land_House_Small_05_F","Land_Shop_City_01_F","Land_Shop_City_02_F"],250];
civ_spawn_3 = nearestObjects[getMarkerPos  "civ_spawn_3", ["Land_Supermarket_01_F","Land_Shop_City_03_F","Land_House_Big_03_F","Land_House_Small_04_F","Land_House_Small_05_F","Land_Shop_City_01_F","Land_Shop_City_02_F"],250];
civ_spawn_4 = nearestObjects[getMarkerPos  "civ_spawn_4", ["Land_Supermarket_01_F","Land_Shop_City_03_F","Land_House_Big_03_F","Land_House_Small_04_F","Land_House_Small_05_F","Land_Shop_City_01_F","Land_Shop_City_02_F"],250];
waitUntil {!(isNull (findDisplay 46))};

if(life_is_arrested) then {
	life_is_arrested = false;
	[player,true] spawn life_fnc_jail;
} else {
	[] call life_fnc_spawnMenu;
	waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
	waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
};
player addRating 9999999;
