#include "..\..\script_macros.hpp"
private["_nlrRadius"];

_nlrRadius = (LIFE_SETTINGS(getNumber,"nlr_radius"));
if(_nlrRadius < 500) then {
	_nlrRadius = 500;
};
while {true} do {
	if((getMarkerColor "NLRArea" != "") && (getMarkerColor "NLRWarning" != "")) then {
		if((player distance markerPos "NLRWarning") < (_nlrRadius - 250)) then {
			//player setDamage 1;
			//hint "You failed to leave the area in time!";
			hint "You are breaching NLR, leave the area now!";
		};
		if((player distance markerPos "NLRWarning") < _nlrRadius) then {
			//player setHit ['legs',1];
			//vehicle player setFuel 0;
			hint "You are breaching NLR, leave the area now!";
		};
		if(((player distance markerPos "NLRWarning") > _nlrRadius) && ((player distance markerPos "NLRWarning") < (_nlrRadius + 250))) then {
			//player setHit ['legs',0];
			//vehicle player setFuel 1;
			hint "You are close to your last death, leave the area now!";
		};
	};
	sleep 1;
};