StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
//[] execVM 'scripts\lupoLoadouts\lupol_init.sqf';
[
	15*60, // seconds to delete dead bodies (0 means don't delete) 
	0, // seconds to delete dead vehicles (0 means don't delete)
	0, // seconds to delete immobile vehicles (0 means don't delete)
	5*60, // seconds to delete dropped weapons (0 means don't delete)
	5*60, // seconds to deleted planted explosives (0 means don't delete)
	5*60 // seconds to delete dropped smokes/chemlights (0 means don't delete)
] execVM 'scripts\cleanup.sqf';
0 setFog 0;
forceWeatherChange;
999999 setFog 0;

StartProgress = true;

life_HC_isActive = false; 
publicVariable "life_HC_isActive";