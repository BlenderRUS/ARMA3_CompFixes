uiNameSpace setVariable ["RHS_t72_Ctrl",_this select 0];

//WIDOKI
[] spawn {
	private["_v","_f","_k","_c"];
	_v = vehicle (call rhs_fnc_findPlayer);
	disableSerialization;

	_c = (uiNamespace getVariable "RHS_t72_Ctrl") displayCtrl 158;
	_z = (uiNamespace getVariable "RHS_t72_Ctrl") displayCtrl 180;

	while {
		(call rhs_fnc_findPlayer) == (gunner _v) ||
		(call rhs_fnc_findPlayer) == (driver _v)
	} do
	{
		_f = parseNumber (ctrlText _z);
		waitUntil {
			sleep 0.001;
			_f != (parseNumber (ctrlText _z))
		};
		if ((call rhs_fnc_findPlayer)==gunner _v) then {
			if((parseNumber (ctrlText _z) == 3.2) && (_v animationPhase "sightHide") != 0) then
			{
				_v animate ["sightHide",0];
				_c ctrlSetText "\rhsafrf\addons\rhs_t72\data\RF\TPD_K1_lasermark_6x.paa";
			} else {
				if (
					(_v animationPhase "sightHide") == 0 &&
					(parseNumber (ctrlText _z)) != 3.2
				) then {
					_v animate ["sightHide",0.6];
					_c ctrlSetText "";
				};
			};
		};
		sleep 0.001;
	};
};

//FCS
[] spawn {
	private["_v","_t"];
	_v = vehicle (call rhs_fnc_findPlayer);


	rhs_key_rng_up_GLB=(profileNamespace getVariable ["rhs_key_rng_up","ZeroingUp"]);
	rhs_key_rng_dwn_GLB=(profileNamespace getVariable ["rhs_key_rng_dwn","ZeroingDown"]);
	rhs_key_lase_tgt_GLB=(profileNamespace getVariable ["rhs_key_lase_tgt","LockTarget"]);

	while{((call rhs_fnc_findPlayer)==gunner _v OR (call rhs_fnc_findPlayer)==driver _v)}do{

		waitUntil {sleep 0.05;inputAction rhs_key_lase_tgt_GLB > 0 OR inputAction rhs_key_rng_up_GLB>0 OR inputAction rhs_key_rng_dwn_GLB>0 OR ((call rhs_fnc_findPlayer)!=gunner _v AND (call rhs_fnc_findPlayer)!=driver _v)};

		if((call rhs_fnc_findPlayer)!=gunner _v AND (call rhs_fnc_findPlayer)!=driver _v)exitWith{};
		if((call rhs_fnc_findPlayer) != driver _v)then{
			if(inputAction rhs_key_lase_tgt_GLB >0)then{
			//komputer balistyczny
				//_t = parseNumber ctrlText (uiNamespace getVariable "RDS_t72_Ctrl" displayCtrl 151);
				_t = (call rhs_fnc_findPlayer) distance (laserTarget _v);
				if(_t>400 AND _t<3400-(990*(fog+rain)/2) )then{
					[_t] call RHS_fnc_rF_t72_Animate;
				} else {
					if (cameraView == "gunner") then {
						playSound ["RHS_Error",true]
					};
					sleep 2
				};
			}else{
				//ręczna korekta
				_t = (_v animationPhase "PrimarySight_range");
				if (inputAction rhs_key_rng_up_GLB > 0 && _t <= 3400) then {
					_t=_t+25;
					[_t] call RHS_fnc_rF_t72_Animate;
				};
				if (inputAction rhs_key_rng_dwn_GLB>0 AND _t>=25) then {
					_t=_t-25;
					[_t] call RHS_fnc_rF_t72_Animate;
				};
			};
		};
		sleep 0.1;
	};
};