/*
1g46 simulation for t80u/t90 tanks

a: reyhard
*/

if(isNull (uiNamespace getVariable ["RHS_1g42_Ctrl",displayNull]))then
{
	uiNameSpace setVariable ["RHS_1g42_Ctrl",_this select 0];

	[] spawn
	{
		private["_v","_t"];
		disableSerialization;
		_c = uiNamespace getVariable "RHS_1G42_Ctrl";

		rhs_key_opn_cmp_GLB=(profileNamespace getVariable ["rhs_key_opn_cmp","Binocular"]);
		rhs_key_rng_up_GLB=(profileNamespace getVariable ["rhs_key_rng_up","ZeroingUp"]);
		rhs_key_rng_dwn_GLB=(profileNamespace getVariable ["rhs_key_rng_dwn","ZeroingDown"]);
		rhs_key_lase_tgt_GLB=(profileNamespace getVariable ["rhs_key_lase_tgt","LockTarget"]);
		rhs_key_dmp_lead_GLB=(profileNamespace getVariable ["rhs_key_dmp_lead","Throw"]);
		rhs_key_nxt_rnd_GLB=(profileNamespace getVariable ["rhs_key_nxt_rnd","CarHandBrake"]);

		_hide = true;
		_hideAll=true;
		_view = true;

		_k=0;
		_t=0;
		//range settings
		rhs_1v528_r100 =0;
		rhs_1v528_r1000 =-1;
		//angle sensor
		rhs_1v528_dk =true;
		rhs_laserReady = true;
		//next ammo
		_loadType=1;
		_angle=0;

		//film grain effect
		_RHS_TV_ppEffect = ppEffectCreate ["FilmGrain", 1400];
		_RHS_TV_ppEffect ppEffectAdjust [0.15,1,1,0.45,1, false];
		_RHS_TV_ppEffect ppEffectCommit 0;


		//emergency sight
		_g = _c displayCtrl 1;
		//gun ready light
		_l = _c displayCtrl 2;
		//current ammo text
		_a = (_c displayCtrl 3);
		//range finder text
		_r = (_c displayCtrl 4);
		//nvg static part
		_nv1 = (_c displayCtrl 5);
		//nvg moving part
		_nv2 = (_c displayCtrl 6);
		//current zoom
		_z = (_c displayCtrl 180);
		//range finder value
		_s = (_c displayCtrl 151);
		//loader switch
		_loaderSwitch = (_c displayCtrl 312);


		_v1=[[0,1],-97] call BIS_fnc_rotateVector2D;
		_loaderSwitch ctrlSetModelDirAndUp [[0,-1,0],[_v1 select 0, 0, _v1 select 1]];

		_texture="rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g46_readylight_ca.paa";
		_nvTextures=
		[
			"rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42n_b_static.paa",
			"rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42n_k_static.paa",
			"rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42n_o_static.paa"
		];
		_sightColor=
		[
			[_g,[1,1,1,1]],
			[_l,[1,1,1,1]],
			[_a,[1,0,0,1]],
			[_r,[1,0,0,1]]
		];

		_p=call rhs_fnc_findPlayer;
		_v = vehicle _p;

		_mags=[(getArray (configFile >> "CfgVehicles" >> typeof _v >> "Turrets" >> "MainTurret" >> "weapons") ) select 0];
		_mags pushBack ((getArray (configFile >> "CfgVehicles" >> typeof _v >> "Turrets" >> "MainTurret" >> "magazines") ) select 0);
		_mags pushBack ((getArray (configFile >> "CfgVehicles" >> typeof _v >> "Turrets" >> "MainTurret" >> "magazines") ) select 1);
		_mags pushBack ((getArray (configFile >> "CfgVehicles" >> typeof _v >> "Turrets" >> "MainTurret" >> "magazines") ) select 2);
		_mags pushBack ((getArray (configFile >> "CfgVehicles" >> typeof _v >> "Turrets" >> "MainTurret" >> "magazines") ) select 3);

		while{not(isNull _g)}do
		{
			sleep 0.01;
			_currentZoom=parseNumber (ctrlText _z);
			//view change
			//night vision mode
			if( _currentZoom == 2.5)then{

				//hide controls
				if(_hide)then{
					{(_x select 0) ctrlSetTextColor [0,0,0,0]}foreach _sightColor;
					{_x  ctrlSetTextColor [0.5,1,1,1]}foreach [_nv1,_nv2];
					_hide=false;
					_hideAll=true;
				};

				//film grain handler
				if(_view AND {cameraView =="Gunner"})then{
					_RHS_TV_ppEffect ppEffectEnable true;
					_view=false;
				}else{
					if(not(_view) AND {cameraView !="Gunner"})then{_RHS_TV_ppEffect ppEffectEnable false;_view = true};
				};

				//autoloader ammo switch
				if(inputAction "CarHandBrake" > 0)then
				{
					waitUntil {inputAction "CarHandBrake" == 0};
					switch(_loadType)do
					{
						//he frag
						case 0: {_angle = -97;_loadType=1};
						//AP
						case 1: {_angle = -125;_loadType=2};
						//K - heat
						case 2: {_angle = -155;_loadType=3};
						//u - rocket
						case 3: {;_angle = -67;_loadType=0};
						case default {};
					};
					_v1=[[0,1],_angle] call BIS_fnc_rotateVector2D;
					_loaderSwitch ctrlSetModelDirAndUp [[0,-1,0],[_v1 select 0, 0, _v1 select 1]];
					playsound ["RHS_SwitchClick",true];
				};

				//sight adjustments
				_nvt=(ctrLPosition _nv2) select 1;
				if(inputAction rhs_key_rng_up_GLB >0 AND {_nvt<=(11.55 *   (0.025 * SafezoneH))})then{
						_nv2 ctrlSetPosition [(ctrLPosition _nv2) select 0,_nvt+0.002];
						_nv2 ctrlCommit 0.005;
						sleep 0.005;
				};
				if(inputAction rhs_key_rng_dwn_GLB >0 AND {_nvt>=(5.55 *   (0.025 * SafezoneH))})then{
						_nv2 ctrlSetPosition [(ctrLPosition _nv2) select 0,_nvt-0.002];
						_nv2 ctrlCommit 0.005;
						sleep 0.005;
				};
				//nvg recticle change
				if(inputAction "nightVision" > 0)then{
					sleep 0.1;
					if(inputAction "nightVision" == 0)then
					{
						_ctn=ctrlText _nv1;
						switch(_ctn)do
						{
							case (_nvTextures select 0) : {_nv1 ctrlSetText (_nvTextures select 1)};
							case (_nvTextures select 1) : {_nv1 ctrlSetText (_nvTextures select 2)};
							case (_nvTextures select 2) : {_nv1 ctrlSetText (_nvTextures select 0)};
							case default {};
						};
					};
				};

			}else{
				//periscope mode
				if(_currentZoom  == 0.5)then
				{
					if(_hideAll)then
					{
						//unhide controls
						{(_x select 0) ctrlSetTextColor [0.5,1,1,0]}foreach _sightColor;
						{_x  ctrlSetTextColor [0.5,1,1,0]}foreach [_nv1,_nv2];
						_RHS_TV_ppEffect ppEffectEnable false;_view = true;
						_hideAll=false;
						_hide=true;
					};
				}else{
				//day light mode
					//ready light & autoloader
					if(_v animationPhase "RHS_T80B_Recoil" != 0 AND {ctrlText _l != ""})then{
						_l ctrlSetText "";
						//autoloader
						[_loadType,_v,_mags] spawn
						{
							private["_loadType","_v"];
							_loadType = _this select 0;
							_v = _this select 1;
							_mags=_this select 2;

							_m =getText (configFile >> "CfgMagazines" >> _v currentMagazineTurret [0] >> "ammo");
							sleep 1;
							switch(_loadType)do
							{
								//u - rocket
								case 3:
								{
									if(!(_m isKindOf "rhs_ammo_atgmCore_base"))then
									{
										sleep 0.5;
										_v loadMagazine [[0],_mags select 0,_mags select 4];
										//sleep 0.01;
										//_v setWeaponReloadingTime [player, currentMuzzle player, 0.25];
									};

								};
								//K - heat
								case 2:
								{
									if(!(_m isKindOf "rhs_ammo_3bk_base"))then
									{
										sleep 0.5;
										_v loadMagazine [[0],_mags select 0,_mags select 2];
										//sleep 0.01;
										//_v setWeaponReloadingTime [player, currentMuzzle player, 0.25];
									};

								};
								//AP
								case 1:
								{
									if(!(_m isKindOf "rhs_ammo_3bm_base"))then
									{
										sleep 0.5;
										_v loadMagazine [[0],_mags select 0,_mags select 1];
										//sleep 0.01;
										//_v setWeaponReloadingTime [player, currentMuzzle player, 0.25];
									};

								};
								//he frag
								case 0:
								{
									if(!(_m isKindOf "rhs_ammo_3of_base"))then
									{
										sleep 0.5;
										_v loadMagazine [[0],_mags select 0,_mags select 3];
										//sleep 0.01;
										//_v setWeaponReloadingTime [player, currentMuzzle player, 0.25];
									};

								};
								case default {};
							};
						};
					}else{
						if(_v animationPhase "RHS_T80B_Recoil" == 0)then{_l ctrlSetText _texture};
					};

					//autoloader ammo switch
					if(inputAction "CarHandBrake" > 0)then
					{
						waitUntil {inputAction "CarHandBrake" == 0};
						switch(_loadType)do
						{
							//he frag
							case 0: {_angle = -97;_loadType=1};
							//AP, switch to K
							case 1: {_angle = -125;_loadType=2};
							//K - heat
							case 2: {_angle = -155;_loadType=3};
							//u - rocket
							case 3: {;_angle = -67;_loadType=0};
							case default {};
						};
						_v1=[[0,1],_angle] call BIS_fnc_rotateVector2D;
						_loaderSwitch ctrlSetModelDirAndUp [[0,-1,0],[_v1 select 0, 0, _v1 select 1]];
						playsound ["RHS_SwitchClick",true];
					};

					//launch balistic computer
					if(inputAction rhs_key_opn_cmp_GLB > 0)then
					{
						_d = createDialog "RHS_1g42_1v528_computer";
						{ctrlShow [_x, false]}foreach [1206,1207,1208];
						//override default state in case values were changed before
						if(rhs_1v528_r100!=0)then
						{
							[(format["%1",rhs_1v528_r100]),0] call rhs_fnc_1v528_setRange;
						};
						if(rhs_1v528_r1000!=-1)then
						{
							 [(format["%1",rhs_1v528_r1000]),1] call rhs_fnc_1v528_setRange;
						};
						if(rhs_1v528_dk)then
						{
							ctrlShow [1203, false];
						}else{
							ctrlShow [1205, false];
						};

						//wait for dialog close and set params after that
						waitUntil {not dialog};

						if(rhs_1v528_r1000 > -1)then
						{
							_t = rhs_1v528_r1000 + rhs_1v528_r100;
							[_v,_t,"RHS_1G42_Ctrl"] call rhs_fnc_sight_1g42_setElev;
						};
					};


					//lasing target
					//you cannot lase target in non auto mode. see balistic computer
					if(inputAction rhs_key_lase_tgt_GLB > 0 AND {rhs_1v528_r1000==-1} AND {rhs_laserReady})then
					{
						_t = parseNumber ctrlText _s;
						if(_t > 340)then
						{
							sleep 0.5;
							[_v,_t,"RHS_1G42_Ctrl"] call rhs_fnc_sight_1g42_setElev;
						}else{
							playSound ["RHS_Error",TRUE];
							_r ctrlSetText "----";
						};
						rhs_laserReady=false;

						[] spawn
						{
							sleep 3.5;
							rhs_laserReady = true;
						};
					};

					//ammo change

					if(not(_hideAll))then
					{
						//unhide controls
						{(_x select 0) ctrlSetTextColor (_x select 1)}foreach _sightColor;
						{_x  ctrlSetTextColor [0.5,1,1,0]}foreach [_nv1,_nv2];
						_hide=true;
						_hideAll=true;
					};
				};
			};
		};
		_v animate["lead",0];
		ppEffectDestroy _RHS_TV_ppEffect;
		uiNameSpace setVariable ["RHS_1g42_Ctrl",displayNull];
	};
};