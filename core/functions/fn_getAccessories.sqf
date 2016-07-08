_weaponClassName = currentWeapon player;
_weaponConfig = configFile >> "cfgWeapons" >> _weaponClassName;
_compatibleItems = getArray (_weaponConfig >> "magazines");
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
_shopItems = [];
{
	_shopItems pushBack [_x,nil,500];
} forEach _compatibleItems;
_shopMenu = ["Ammo & Accessories", _shopItems];
_shopMenu