#include "..\..\script_macros.hpp"
/*
	File: fn_weaponShopMags.sqf
	Author: Daniel Stuart

	Description:
	Set Weapon Shop in magazine mode
*/
disableSerialization;

if((GVAR_UINS ["Weapon_Accessories",0]) == 0) then {
	private["_weaponClassName","_weaponConfig","_compatibleItems","_cfgCompatibleItems"];
	_weaponClassName = currentWeapon player;
	_weaponConfig = configFile >> "CfgWeapons" >> _weaponClassName;
	_compatibleItems = [];
	if (isClass _weaponConfig) then 
	{
		{
			_cfgCompatibleItems = _x >> "compatibleItems";
			if (isArray _cfgCompatibleItems) then 
			{
				{
					if (!(_x in _compatibleItems)) then
					{
						_compatibleItems pushBack _x;
					};
				} forEach getArray _cfgCompatibleItems;
			}
			else 
			{
				if (isClass _cfgCompatibleItems) then 
				{
					{
						if (getNumber _x > 0 && {!((configName _x) in _compatibleItems)}) then
						{
							_compatibleItems pushback configName _x;
						};
					} forEach configProperties [_cfgCompatibleItems, "isNumber _x"];
				};
			};
		} foreach configProperties [_weaponConfig >> "WeaponSlotsInfo","isclass _x"];
	};
	uiNamespace setVariable["Accessories_Array",_compatibleItems];
	uiNamespace setVariable["Weapon_Accessories",1];
} else {
	uiNamespace setVariable["Weapon_Accessories",0];
};