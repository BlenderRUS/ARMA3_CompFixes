class CfgPatches {
  class AGM_Comp_RHS_USF {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {rhsusf_c_weapons, RHS_US_A2_AirImport};
    version = "1.1";
    versionStr = "1.1";
    versionAr[] = {1,0,1};
    author[] = {"KoffeinFlummi", "CAA-Picard", "Jonpas", "Blender"};
  };
};

class CfgVehicles {
  class Heli_Transport_01_base_F;
  class Heli_Transport_02_base_F;

  // UH-60
  class RHS_UH60_Base: Heli_Transport_01_base_F {
    AGM_FastRoping = 1;
    AGM_FastRoping_Positions[] = {{1.45, 1.925, -0.45}};
  };

  // CH-47F
  class RHS_CH_47F_base: Heli_Transport_02_base_F {
    AGM_FastRoping = 1;
    AGM_FastRoping_Positions[] = {{0,-0.7,-3.2}, {0, -7, -1}};
  };
};

class CfgAmmo {
  class BulletBase;
  class B_556x45_Ball;

  // Rifle rounds
  class rhsusf_B_300winmag: BulletBase {
    AGM_BulletMass = 10.7;     // .300 Winchester Magnum GMX
  };

  class rhs_ammo_556x45_M855A1_Ball: B_556x45_Ball {};
  class rhs_ammo_556x45_M855A1_Ball_Red: rhs_ammo_556x45_M855A1_Ball {};
  class rhs_ammo_556x45_M855A1_Ball_Green: rhs_ammo_556x45_M855A1_Ball_Red {};
  class rhs_ammo_556x45_M855A1_Ball_Yellow: rhs_ammo_556x45_M855A1_Ball_Red {};

  class rhs_ammo_556x45_Mk318_Ball: B_556x45_Ball {};
  class rhs_ammo_556x45_Mk262_Ball: B_556x45_Ball {};

  class rhsammo_762x51_Ball: BulletBase {
    AGM_BulletMass = 10;      // 7.62x51 NATO
  };

  // Shotgun rounds
  class B_12Gauge_Pellets;
  class rhs_ammo_m576_buckshot: B_12Gauge_Pellets {
    AGM_BulletMass = 4;     // Grams of pellets; TODO: review
  };
};

class CfgWeapons {
	class arifle_MX_Base_F;
	class rhs_weap_m4_Base : arifle_MX_Base_F
	{
		AGM_Overheating_JamChance[] = {0, 0.00027, 0.0014, 0.0069}; //3600 MRBS
	};
	
	class rhs_weap_m4a1: rhs_weap_m4_Base {};
	class rhs_weap_m4a1_blockII: rhs_weap_m4a1 {};
	class rhs_weap_m4a1_blockII_grip2 : rhs_weap_m4a1_blockII
	{
		AGM_Bipod = 1;
	};

	class rhs_weap_mk18: rhs_weap_m4a1 {};
	class rhs_weap_mk18_grip2: rhs_weap_mk18 {
		AGM_Bipod = 1;
	};
	class rhs_weap_mk18_grip2_KAC : rhs_weap_mk18 {
		AGM_Bipod = 1;
	};
	class rhs_weap_m4_grip : rhs_weap_m4_Base {
		AGM_Bipod = 1;
	};
	class rhs_weap_m4_grip2 : rhs_weap_m4_Base {
		AGM_Bipod = 1;
	};
	class rhs_weap_m4_bipod : rhs_weap_m4_Base {
		AGM_Bipod = 1;
	};
	class rhs_weap_m4a1_grip : rhs_weap_m4a1 {
		AGM_Bipod = 1;
	};
	class rhs_weap_m4a1_carryhandle_grip : rhs_weap_m4a1 {
		AGM_Bipod = 1;
	};
	class rhs_weap_m4a1_grip2 : rhs_weap_m4a1 {
		AGM_Bipod = 1;
	};
	class rhs_weap_m4a1_carryhandle_grip2 : rhs_weap_m4a1 {
		AGM_Bipod = 1;
	};
	class rhs_weap_m4a1_bipod : rhs_weap_m4a1 {
		AGM_Bipod = 1;
	};
	class rhs_weap_m4a1_carryhandle_bipod : rhs_weap_m4a1 {
		AGM_Bipod = 1;
	};
	
	class rhs_weap_m16a4 : rhs_weap_m4_Base {};
	class rhs_weap_m16a4_bipod : rhs_weap_m16a4
	{
		AGM_Bipod = 1;
	};
	class rhs_weap_m16a4_carryhandle_bipod : rhs_weap_m16a4
	{
		AGM_Bipod = 1;
	};
	class rhs_weap_m16a4_grip : rhs_weap_m16a4
	{
		AGM_Bipod = 1;
	};
	class rhs_weap_m16a4_carryhandle_grip : rhs_weap_m16a4
	{
		AGM_Bipod = 1;
	};
	class rhs_weap_m16a4_carryhandle_grip_pmag : rhs_weap_m16a4
	{
		AGM_Bipod = 1;
	};
	
	class LMG_Mk200_F;
	class rhs_M249_base : LMG_Mk200_F
	{
		AGM_Overheating_allowSwapBarrel = 1;
		AGM_Overheating_JamChance[] = {0, 0.00004, 0.0002, 0.0011}; //23400 MRBS
		AGM_Bipod = 1;
	};
	class weap_m240_base: rhs_M249_base {
		AGM_Overheating_JamChance[] = {0, 0.00033, 0.0017, 0.0084}; //2962 MRBS
	};
	
	class srifle_EBR_F;
	class rhs_weap_m14ebrri : srifle_EBR_F
	{
		AGM_Bipod = 1;
	};
};
