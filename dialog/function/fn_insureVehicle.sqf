#include "..\..\script_macros.hpp"
/*
    File: fn_insureVehicle.sqf
    Author: Guit0x "Lintox"
   
    Description:
    Insure a vehicle from the garage.
*/
private["_vehicle","_vehicleLife","_vid","_pid","_unit","_insurancePrice"];
disableSerialization;
if(EQUAL(lbCurSel 2802,-1)) exitWith {hint localize "STR_Global_NoSelection"};
_vehicle = lbData[2802,(lbCurSel 2802)];
_vehicle = (call compile format["%1",_vehicle]) select 0;
_vehicleLife = _vehicle;
_vid = lbValue[2802,(lbCurSel 2802)];
_pid = steamid;
_unit = player;
 
if(isNil "_vehicle") exitWith {hint localize "STR_Garage_Selection_Error"};
if((time - life_action_delay) < 1.5) exitWith {hint localize "STR_NOTF_ActionDelay";};
if(!isClass (missionConfigFile >> CONFIG_LIFE_VEHICLES >> _vehicleLife)) then {
    _vehicleLife = "Default"; //Use Default class if it doesn't exist
    diag_log format["%1: LifeCfgVehicles class doesn't exist",_vehicle];
};
 
_insurancePrice = M_CONFIG(getNumber,CONFIG_LIFE_VEHICLES,_vehicleLife,"insurance");

if(BANK < _insurancePrice) exitWith {hint format[localize "STR_Garage_CashError",[_insurancePrice] call life_fnc_numberText];};
 
[_vid,_pid,_insurancePrice,player,life_garage_type] remoteExecCall ["TON_fnc_insureVehicle",RSERV];
hint format[localize "STR_Insurance_OK"],
 
SUB(BANK,_insurancePrice);
 
life_action_delay = time;
 
closeDialog 0;