private ["_return", "_vehicle", "_speed", "_vel", "_dir"];
_return = false;
_vehicle = vehicle player;
if (_vehicle isKindOf "PLANE") then {
	_speed = speed _vehicle;
	if (player == (driver _vehicle) && (isEngineOn _vehicle) && (_speed < 0.5) && (_speed > -0.5)) then {
		_vel = velocity _vehicle;
		_dir = direction _vehicle;
		_speed = 1;
		_vehicle setVelocity [
			(_vel select 0) - (sin _dir * _speed),
			(_vel select 1) - (cos _dir * _speed),
			(_vel select 2)
		];
		_return = true;
	};
};
_return