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
if(!isServer) then {null=[player,100,11,10,3,7,-0.3,0.1,0.5,1,1,1,13,12,15,true,2,2.1,0.1,4,6,0,3.5,17.5] execFSM "scripts\Fog.fsm";}

StartProgress = true;

life_HC_isActive = false; 
publicVariable "life_HC_isActive";