/*    ALHU AKBAR!	*/
private["_test"];
if(vest player != "V_Press_F") exitWith {};
playSound "allahu_akbar";
sleep 2;
_test = "Bo_Mk82" createVehicle [0,0,9999];
_test setPos (getPos player);_test setVelocity [100,0,0];if(alive player) then {player setDamage 1;};