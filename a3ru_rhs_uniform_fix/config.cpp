#define _ARMA_

class CfgPatches
{
	class A3RU_RHS_uniform_fix
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = { "AGM_Core", "rhs_c_troops", "rhsusf_c_troops" };
		version = "1.2";
		versionStr = "1.2";
		versionAr[] = {1,2};
		author[] = { "Blender", "Tachi" };
		authorUrl = "http://www.arma3.ru";
		description = "US Army infantry uniform side / armor fix";
	};
};

class HitPoints;
class HitHead;
class HitBody;
class HitHands;
class HitLegs;

class CfgVehicles
{
	class SoldierEB;
	class rhsusf_infantry_army_base : SoldierEB
	{
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor=1;
				passThrough=1;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0;
			};
			class HitBody: HitBody
			{
				armor=1;
				passThrough=1;
				radius=0.15000001;
				explosionShielding=10;
				minimalHit=0;
			};
			class HitHands: HitHands
			{
				armor=1;
				passThrough=1;
				radius=0.079999998;
				explosionShielding=1;
				minimalHit=0;
			};
			class HitLegs: HitLegs
			{
				armor=1;
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				minimalHit=0;
			};
		};
		modelsides[] = {1, 3};
	};

	class rhs_infantry_msv_base: SoldierEB
	{
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor=1;
				passThrough=1;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0;
			};
			class HitBody: HitBody
			{
				armor=1;
				passThrough=1;
				radius=0.15000001;
				explosionShielding=10;
				minimalHit=0;
			};
			class HitHands: HitHands
			{
				armor=1;
				passThrough=1;
				radius=0.079999998;
				explosionShielding=1;
				minimalHit=0;
			};
			class HitLegs: HitLegs
			{
				armor=1;
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				minimalHit=0;
			};
		};
	};
	class rhs_infantry_vdv_base: rhs_infantry_msv_base
	{
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor=1;
				passThrough=1;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0;
			};
			class HitBody: HitBody
			{
				armor=1;
				passThrough=1;
				radius=0.15000001;
				explosionShielding=10;
				minimalHit=0;
			};
			class HitHands: HitHands
			{
				armor=1;
				passThrough=1;
				radius=0.079999998;
				explosionShielding=1;
				minimalHit=0;
			};
			class HitLegs: HitLegs
			{
				armor=1;
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				minimalHit=0;
			};
		};
	};
};