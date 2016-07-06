private["_nlrArea","_nlrWarning","_nlrRadius"];
if(playerSide in [west,civilian]) then {
	if((getMarkerColor "NLRArea" != "") && (getMarkerColor "NLRWarning" != "")) then {
		deleteMarkerLocal "NLRArea";
		deleteMarkerLocal "NLRWarning";
	};
	
	_nlrRadius = (LIFE_SETTINGS(getNumber,"nlr_radius"));
	if(_nlrRadius < 500) then {
		_nlrRadius = 500;
	};
		
	_nlrArea = createMarkerLocal ["NLRArea", position player];
	_nlrArea setMarkerShapeLocal "Ellipse";
	_nlrArea setMarkerSizeLocal [_nlrRadius, _nlrRadius];
	_nlrArea setMarkerColorLocal 'ColorBlue';

	_nlrWarning = createMarkerLocal ["NLRWarning", position player];
	_nlrWarning setMarkerTypeLocal "mil_warning";
	_nlrWarning setMarkerColorLocal "ColorRed";
	_nlrWarning setMarkerTextLocal "Recent Death";
};