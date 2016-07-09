#include "..\..\script_macros.hpp"
/*
	File: fn_weaponShopMags.sqf
	Author: Daniel Stuart

	Description:
	Set Weapon Shop in magazine mode
*/
disableSerialization;

if((GVAR_UINS ["Weapon_Magazine",0]) == 0) then {
	private["_weapon"];
	_weapon = currentWeapon player;
	if((_weapon == "arifle_ARX_blk_F") || (_weapon == "arifle_ARX_ghex_F") || (_weapon == "arifle_ARX_base_F") || (_weapon == "arifle_ARX_Viper_F") || (_weapon == "arifle_ARX_Viper_hex_F") || (_weapon == "arifle_ARX_hex_F")) then
	{
		_weapon = FETCH_CONFIG2(getArray,"CfgWeapons",_weapon,"magazines");
		_mag = ["10Rnd_50BW_Mag_F"];
		_weapon = _weapon + _mag;
		uiNamespace setVariable["Magazine_Array",_weapon];
		uiNamespace setVariable["Weapon_Magazine",1];
	} else {
		_weapon = FETCH_CONFIG2(getArray,"CfgWeapons",_weapon,"magazines");
		uiNamespace setVariable["Magazine_Array",_weapon];
		uiNamespace setVariable["Weapon_Magazine",1];
	};
} else {
	uiNamespace setVariable["Weapon_Magazine",0];
};
