#include "..\..\script_macros.hpp"
#include "lupol_config.sqf"

if (isNil 'lupo_loadouts') then {
	diag_log("Hey retard, you broke the config.");
} else {
	diag_log("Hey you special son of a bitch!, configs working fine.");	
};

lupol_addLoadoutActions = {
	private["_obj","_loadout","_loadoutName","_actionID"];
	_obj = _this;

	{
		_loadout 	 	= _x;
	  	_loadoutName  	= _loadout select 0;
		_loadoutPrice 	= _loadout select 1;
		_actionID 		= -1;
		_actionID 		= _obj addAction [format["%1 ($%2)",_loadoutName,_loadoutPrice], { lupo_loadoutSelected = _this select 3; }, _loadout, 0, true, true];
	} forEach (lupo_loadouts);

	0
};

lupol_mainScript = {
	while {true} do {
		private ["_plyrCopLevel", "_plyr", "_loadoutSelected", "_loadoutName", "_loadoutPrice", "_invWeaponAttachList", "_bpWeapons", "_invMags", "_bpMags", "_toolsItems", "_uniform", "_vest", "_backpack", "_headgear", "_goggles", "_sides", "_canBuy", "_plyrBp", "_currentWepArrays", "_weapon", "_currentAttachment"];
		_plyr = player;
		lupo_loadoutSelected = nil;

		diag_log("lupo_loadouts: Waiting for selection...");
		waitUntil{!isNil 'lupo_loadoutSelected'};
		diag_log("lupo_loadouts: Selection Made...");

		comment("Loadout Selected");

		comment("Get Loadout Stuff");
		_loadoutSelected 	 = lupo_loadoutSelected;
		_loadoutName         = (_loadoutSelected select 0);
		_loadoutPrice        = (_loadoutSelected select 1);
		_invWeaponAttachList = (_loadoutSelected select 2);
		_bpWeapons           = (_loadoutSelected select 3);
		_invMags             = (_loadoutSelected select 4);
		_bpMags              = (_loadoutSelected select 5);
		_toolsItems          = (_loadoutSelected select 6);
		_uniform             = (_loadoutSelected select 7);
		_vest                = (_loadoutSelected select 8);
		_backpack            = (_loadoutSelected select 9);
		_headgear            = (_loadoutSelected select 10);
		_goggles             = (_loadoutSelected select 11);
		_sides				 = (_loadoutSelected select 12);
		_minCopLevel 		 = (_loadoutSelected select 13);
		_uidList			 = (_loadoutSelected select 14);
		_licenseList		 = (_loadoutSelected select 15);

		comment("Tell user");
		hintSilent(format["Loadout Selected: %1, Cost: $%2, Checking Purchase...",_loadoutName,_loadoutPrice]);

		comment("Check user money and take if can or exit");
		_canBuy = false;

		if (CASH >= _loadoutPrice) then {
			_canBuy = true;
		};

		if (!_canBuy) exitWith {
			hintSilent("You do not have enough cash to purchase this loadout.");
			[] spawn lupol_mainScript;
		};

		comment("Checking user is on right team...");
		_canBuy = false;

		comment("Get cop level");
		
		if (!isNil 'life_coplevel') then {
			_plyrCopLevel = life_coplevel;
		} else {
			_plyrCopLevel = 0;
		};


		comment("Get License list");
		_hasLicenses = true;
		_hasLicense = false;
		if (!isNil '_licenseList') then {
			if (typeName _licenseList == "ARRAY") then {
				if ((str _licenseList) != (str [])) then {
					if (count _licenseList > 0) then {

						{
							_hasLicense = call compile format["%1", _x];

							if (!isNil '_hasLicense') then {
								if (typeName _hasLicense == "BOOL") then {
									if (_hasLicense) then { 
										_hasLicenses = true; 
									} else {
										_hasLicenses = false;
									};
								};
							};

						} forEach _licenseList;


					};
				};
			};
		};

		comment("Get UID list");
		_inUidList = true;
		if (!isNil '_uidList') then {
			if (typeName _uidList == "ARRAY") then {
				if ((str _uidList) != (str [])) then {
					if (count _uidList > 0) then {
						if ((getPlayerUID player) in _uidList) then {
							_inUidList = true;

							diag_log(format["_inUidList: %1", _inUidList]);
						} else {
							_inUidList = false;

							diag_log(format["_inUidList: %1, _uidList: %2, playerUID: %3", _inUidList, _uidList, (getPlayerUID player)]);

						};
					};
				};
			};
		} else {
			diag_log(format["_inUidList: %1", _inUidList]);

			_inUidList = true;
		};

		diag_log(format["((side _plyr) in _sides): %1", ((side _plyr) in _sides)]);

		if (((side _plyr) in _sides) && (_plyrCopLevel >=  _minCopLevel) && (_inUidList) && (_hasLicenses)) then {
			_canBuy = true;
		};
		  
		if (!_canBuy) exitWith {
			hintSilent("You cannot buy this loadout. You do not have the correct access.");
			[] spawn lupol_mainScript;
		}; 

		CASH = CASH - _loadoutPrice;
		hintSilent(format["Loadout Purchased! Deducted $%1 from your cash. You now have $%2.",_loadoutPrice, CASH]);

		comment("remove then add new backpack");
			removeBackpackGlobal _plyr;
			uiSleep 0.1;
			_plyr addBackpackGlobal _backpack;

		comment("remove then add new uniform");
			removeUniform _plyr;
			uiSleep 0.1;
			_plyr addUniform _uniform;

		comment("remove then add the new vest");
			removeVest _plyr;
			uiSleep 0.1;
			_plyr addVest _vest;

		comment("remove then add the new goggles");
			removeGoggles _plyr;
			uiSleep 0.1;
			_plyr addGoggles _goggles;

		comment("remove then add the new headgear");
			removeHeadgear _plyr;
			uiSleep 0.1;
			_plyr addHeadgear _headgear;

		comment("Do stuff with backpack weapons");
			{
				_plyrBp = (unitBackpack _plyr);
				_plyrBp addWeaponCargoGlobal [_x, 1];
			} forEach _bpWeapons;

		comment("Do stuff with backpack magazines");
			{
				_plyrBp = (unitBackpack _plyr);
				_plyrBp addMagazineCargoGlobal [_x, 1];
			} forEach _bpMags;

		comment("Do stuff with main inventory weapons");

			comment("Remove Weapons");
			{
				_plyr removeWeaponGlobal _x;
			} forEach (weapons player);
			uiSleep 0.1;

			comment("Add Weapons and Attachments");
			_invWeaponAttachList = (_loadoutSelected select 2);
			{
				_currentWepArrays = _x;
				_weapon = _x select 0;
				_plyr addWeaponGlobal _weapon;

				{
					if (_forEachIndex > 0) then {
						_currentAttachment = _x;
						if (_weapon isKindOf ["Pistol_Base_F",configFile >> "CfgWeapons"]) then {
							_plyr addHandgunItem _currentAttachment;
						} else {
							_plyr addPrimaryWeaponItem _currentAttachment;
						};
					};
				} forEach _currentWepArrays;

			} forEach (_invWeaponAttachList);


		comment("Do stuff with inventory magazines");
			{
				_plyr addItem _x;
			} forEach _invMags; 


		comment("Remove and add toolbelt items");
			{
				_plyr removeWeapon _x;
			} forEach (_toolsItems);

			uiSleep 0.1;

			{
				_plyr addWeaponGlobal _x;
			} forEach (_toolsItems);
	};
};



{
	_x call lupol_addLoadoutActions;
} forEach lupol_actionObjects;

[] spawn lupol_mainScript;

