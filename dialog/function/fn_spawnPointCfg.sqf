/*
	File: fn_spawnPointCfg.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration for available spawn points depending on the units side.
	
	Return:
	[Spawn Marker,Spawn Name,Image Path]
*/
private["_side","_return"];
_side = [_this,0,civilian,[civilian]] call BIS_fnc_param;

//Spawn Marker, Spawn Name, PathToImage
switch (_side) do {
	case west: {
		_return = [
			["cop_spawn_1","Georgetown HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_2","La Rochelle HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_3","Lifou HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_4","Katkoula HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_5","Tuvanaka HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_6","Air HQ","\a3\ui_f\data\map\Markers\NATO\b_air.paa"],
			["cop_spawn_7","Coast Guard","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
			["cop_spawn_8","Checkpoint", "\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
		];
	};
	
	case civilian: {
		_return = [
			["civ_spawn_1","Georgetown","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_2","La Rochelle","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_3","Ouméré","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_4","Lifou","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_5","Lijnhaven (Rebel Capital)","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
		];
		
		if(count life_houses > 0) then {
			{
				_pos = call compile format["%1",_x select 0];
				_house = nearestBuilding _pos;
				_houseName = getText(configFile >> "CfgVehicles" >> (typeOf _house) >> "displayName");
				
				_return pushBack [format["house_%1",_house getVariable "uid"],_houseName,"\a3\ui_f\data\map\MapControl\lighthouse_ca.paa"];
			} foreach life_houses;
		};	
	};
	
	case independent: {
		_return = [
			["medic_spawn_1","Georgetown Hospital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"]
		];
	};
};

_return;