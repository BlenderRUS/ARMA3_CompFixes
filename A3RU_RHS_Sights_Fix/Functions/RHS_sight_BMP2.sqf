//script is fired only once & is destroyed together with display

if(isNull (uiNamespace getVariable ["RHS_BMP2_Ctrl",displayNull]))then
{

	rhs_key_rng_up_GLB=(profileNamespace getVariable ["rhs_key_rng_up", "ZeroingUp"]);
	rhs_key_rng_dwn_GLB=(profileNamespace getVariable ["rhs_key_rng_dwn", "ZeroingDown"]);

	uiNameSpace setVariable ["RHS_BMP2_Ctrl",_this select 0];

	[] spawn {
		private["_v","_t","_c"];
		disableSerialization;
		_c = (uiNamespace getVariable "RHS_BMP2_Ctrl" displayCtrl 1);
		_v = vehicle (call rhs_fnc_findPlayer);

		while {!(isNull _c)} do
		{
			waitUntil {
				sleep 0.01;
				(inputAction rhs_key_rng_up_GLB) > 0 ||
				(inputAction rhs_key_rng_dwn_GLB) > 0 ||
				((call rhs_fnc_findPlayer) != (gunner _v) && ((call rhs_fnc_findPlayer) != driver _v))
			};
			_t=(ctrLPosition _c) select 1;
			if (
				(inputAction rhs_key_rng_up_GLB) > 0 &&
				_t <= (16.86 *   (0.025 * SafezoneH))
			) then {
				_c ctrlSetPosition [(ctrLPosition _c) select 0,_t+0.003];
			};
			if(
				(inputAction rhs_key_rng_dwn_GLB) > 0 &&
				_t > (3.66 *   (0.025 * SafezoneH))
			) then {
				_c ctrlSetPosition [(ctrLPosition _c) select 0,_t-0.003];
			};
			_c ctrlCommit 0.005;
			sleep 0.02;
		};
	};

	[] spawn {
		disableSerialization;
		private["_v","_c","_c2","_c3"];

		_v = vehicle (call rhs_fnc_findPlayer);
		_c = (uiNamespace getVariable "RHS_BMP2_Ctrl" displayCtrl 180);
		_c2 = (uiNamespace getVariable "RHS_BMP2_Ctrl" displayCtrl 1);
		_c3 = (uiNamespace getVariable "RHS_BMP2_Ctrl" displayCtrl 2);

		while{!(isNull _c)}do
		{
			waitUntil {
				sleep 0.1;
				!(((parseNumber (ctrlText _c)) == 2.0) || (parseNumber (ctrlText _c) == 5.6))
			};
			if ((call rhs_fnc_findPlayer) == gunner _v) then {
				_c2 ctrlSetText "";
				_c3 ctrlSetText "";
			};
			waitUntil {
				sleep 0.1;
				((parseNumber (ctrlText _c)) == 2.0 || (parseNumber (ctrlText _c) == 5.6)) ||
				((call rhs_fnc_findPlayer) != gunner _v &&
				(call rhs_fnc_findPlayer) != driver _v)
			};
			if ((call rhs_fnc_findPlayer) == gunner _v) then {
				_c2 ctrlSetText "rhsafrf\addons\rhs_optics\vehicles\data\rhs_bpk_1_42_sight.paa";
				_c3 ctrlSetText "rhsafrf\addons\rhs_optics\vehicles\data\rhs_bpk_1_42_bar.paa";
			};
		};
		uiNameSpace setVariable ["RHS_bmp2_Ctrl",displayNull];
	};
};