#include "..\..\script_macros.hpp"
if(playerSide in [west,civilian]) then {
	if((getMarkerColor "NLRArea" != "") && (getMarkerColor "NLRWarning" != "")) then {
		[] spawn life_fnc_nlrTimer;
			
		sleep (LIFE_SETTINGS(getNumber,"nlr_timer") * 60);
			
		hint "NLR is now over.";
		deleteMarkerLocal "NLRArea";
		deleteMarkerLocal "NLRWarning";
	};
};