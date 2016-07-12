#include "..\..\script_macros.hpp"
/*
	File: fn_weaponShopMags.sqf
	Author: Daniel Stuart

	Description:
	Set Weapon Shop in magazine mode
*/
disableSerialization;

if((GVAR_UINS ["Weapon_Magazine",0]) == 0) then {
	private["_rifle","_launcher","_hgun","_mag","_magarr"];
	_rifle = primaryWeapon player;
	_launcher = secondaryWeapon player;
	_hgun = handgunWeapon player;
	if((_rifle == "arifle_ARX_blk_F") || (_rifle == "arifle_ARX_ghex_F") || (_rifle == "arifle_ARX_base_F") || (_rifle == "arifle_ARX_Viper_F") || (_rifle == "arifle_ARX_Viper_hex_F") || (_rifle == "arifle_ARX_hex_F")) then
	{
		_magarr = FETCH_CONFIG2(getArray,"CfgWeapons",_rifle,"magazines");
		_magarr = _magarr + ["10Rnd_50BW_Mag_F"];
		_magarr = _magarr + FETCH_CONFIG2(getArray,"CfgWeapons",_launcher,"magazines");
		_magarr = _magarr + FETCH_CONFIG2(getArray,"CfgWeapons",_hgun,"magazines");
		uiNamespace setVariable["Magazine_Array",_magarr];
		uiNamespace setVariable["Weapon_Magazine",1];
	} else {
		_magarr = FETCH_CONFIG2(getArray,"CfgWeapons",_rifle,"magazines");
		_magarr = _magarr + FETCH_CONFIG2(getArray,"CfgWeapons",_launcher,"magazines");
		_magarr = _magarr + FETCH_CONFIG2(getArray,"CfgWeapons",_hgun,"magazines");
		uiNamespace setVariable["Magazine_Array",_magarr];
		uiNamespace setVariable["Weapon_Magazine",1];
	};
} else {
	uiNamespace setVariable["Weapon_Magazine",0];
};
