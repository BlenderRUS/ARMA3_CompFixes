class CfgPatches
{
	class A3RU_RHS_armor_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 1.36;
		requiredAddons[] = {"rhs_c_btr"};
		version = "1.0";
		versionStr = "1.0";
		versionAr[] = {1,0};
		author[] = { "Blender" };
		authorUrl = "http://www.arma3.ru";
	};
};
class CfgVehicles {
	class Car;
	class Car_F: Car
	{
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class Wheeled_APC_F: Car_F {
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
	};
	class rhs_btr_base: Wheeled_APC_F
	{
		AGM_Armour_AmmoLocation = "NoAmmo";
		class HitPoints: HitPoints
		{
			class HitLBWheel: HitLBWheel
			{
				armor = 0.5;
				explosionShielding = 0.6;
			};
			class HitLMWheel: HitLMWheel
			{
				armor = 0.5;
				explosionShielding = 0.6;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.5;
				explosionShielding = 0.6;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.5;
				explosionShielding = 0.6;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.5;
				explosionShielding = 0.6;
			};
			class HitRMWheel: HitRMWheel
			{
				armor = 0.5;
				explosionShielding = 0.6;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.5;
				explosionShielding = 0.6;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.5;
				explosionShielding = 0.6;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 1;
						minimalHit = 0.2;
						explosionShielding = 0.8;
					};
					class HitGun
					{
						armor = 0.6;
						material = -1;
						name = "zbran";
						visual = "zbran";
						passThrough = 0;
						minimalHit = 0.2;
						explosionShielding = 1;
					};
				};
			};
		};
	};
	class rhs_btr70_vmf: rhs_btr_base {};
	class rhs_btr70_vdv: rhs_btr70_vmf {};
	class rhs_btr70_vv: rhs_btr70_vmf {};
	class rhs_btr70_msv: rhs_btr70_vmf {};
	class rhs_btr80_msv: rhs_btr70_msv {};
	class rhs_btr80_vdv: rhs_btr80_msv {};
	class rhs_btr80_vv: rhs_btr80_msv {};
	class rhs_btr80_vmf: rhs_btr80_msv {};
	class rhs_btr80a_msv: rhs_btr80_msv {};
	class rhs_btr80a_vdv: rhs_btr80a_msv {};
	class rhs_btr80a_vv: rhs_btr80a_msv {};
	class rhs_btr80a_vmf: rhs_btr80a_msv {};
};