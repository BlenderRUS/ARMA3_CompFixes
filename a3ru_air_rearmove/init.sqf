/// Planes now can move back a little bit
/// Author: Blender
/// Specially for ARMA3.RU

waitUntil { sleep 0.1; !isNull (findDisplay 46) };
(findDisplay 46) displayAddEventHandler ["keyDown", 'if ((_this select 1) in (actionKeys "MoveDown")) then { [] call blnd_air_fnc_rearMove }'];