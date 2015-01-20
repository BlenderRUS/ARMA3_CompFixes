class CfgPatches
{
	class A3RU_HLC_to_RHS
	{
		requiredAddons[] = { "hlcweapons_aks", "rhs_c_weapons" };
		units[] = {};
		weapons[] = {};
		version = "1.1";
		versionStr = "1.1";
		versionAr[] = {1,1};
		author[] = { "Blender" };
		authorUrl = "http://www.arma3.ru";
		description = "HLC <-> RHS AK's magazines and GP compatibility";
	};
};

class CfgWeapons
{
	class hlc_ak_base;
	class hlc_rifle_ak74: hlc_ak_base
	{
		magazines[] = {
			"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_T_AK", "hlc_30Rnd_545x39_EP_AK", "hlc_45Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_S_AK", // HLC
			"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_AK_green", "rhs_45Rnd_545x39_AK", "rhs_45Rnd_545x39_7N10_AK", "rhs_45Rnd_545x39_7N22_AK", "rhs_45Rnd_545x39_AK_green" // RHS
		};
	};
	class hlc_rifle_ak74_dirty: hlc_rifle_ak74 {};
	class hlc_rifle_aks74: hlc_rifle_ak74 {};
	class hlc_rifle_ak12: hlc_rifle_aks74 {};
	class hlc_rifle_aks74u: hlc_rifle_ak74 {};
	class hlc_rifle_ak47: hlc_rifle_ak74
	{
		magazines[] = {
			"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_t_ak","hlc_45Rnd_762x39_m_rpk","HLC_45rnd_762x39_T_RPK","hlc_30rnd_762x39_s_ak", // HLC
			"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_89" // RHS
		};
	};
	class hlc_rifle_akm: hlc_rifle_ak47	{};
	class UGL_F;
	class hlc_rifle_akmgl: hlc_rifle_akm {
		class hlc_GP25_AKM: UGL_F
		{
			magazines[] = {
				"hlc_VOG25_AK","hlc_GRD_White","hlc_GRD_Red","hlc_GRD_Green","hlc_GRD_Yellow","hlc_GRD_Purple","hlc_GRD_Blue","hlc_GRD_Orange", // HLC
				"rhs_VOG25", "rhs_VOG25p", "rhs_vg40tb", "rhs_vg40sz", "rhs_vg40op_white", "rhs_vg40op_green", "rhs_vg40op_red", "rhs_GRD40_white", "rhs_GRD40_green", "rhs_GRD40_red" // RHS
			};
		};
	};
	class hlc_rifle_rpk: hlc_rifle_ak47
	{
		magazines[] = {
			"hlc_75Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","HLC_45rnd_762x39_T_RPK","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_t_ak","hlc_30rnd_762x39_s_ak", // HLC
			"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_89" // RHS
		};
	};
	class hlc_rifle_aks74_GL: hlc_rifle_aks74
	{
		class hlc_GP30_AKS74: UGL_F
		{
			magazines[] = {
				"hlc_VOG25_AK","hlc_GRD_White","hlc_GRD_Red","hlc_GRD_Green","hlc_GRD_Yellow","hlc_GRD_Purple","hlc_GRD_Blue","hlc_GRD_Orange", // HLC
				"rhs_VOG25", "rhs_VOG25p", "rhs_vg40tb", "rhs_vg40sz", "rhs_vg40op_white", "rhs_vg40op_green", "rhs_vg40op_red", "rhs_GRD40_white", "rhs_GRD40_green", "rhs_GRD40_red" // RHS
			};
		};
	};
	class hlc_rifle_aek971: hlc_rifle_ak74 {};
	
	//// RHS WEAPONS ////
	class Rifle_Base_F;
	class rhs_weap_ak74m_Base_F: Rifle_Base_F
	{
		class GP25Muzzle: UGL_F
		{
			magazines[] =
			{
				"hlc_VOG25_AK","hlc_GRD_White","hlc_GRD_Red","hlc_GRD_Green","hlc_GRD_Yellow","hlc_GRD_Purple","hlc_GRD_Blue","hlc_GRD_Orange", // HLC
				"rhs_VOG25", "rhs_VOG25p", "rhs_vg40tb", "rhs_vg40sz", "rhs_vg40op_white", "rhs_vg40op_green", "rhs_vg40op_red", "rhs_GRD40_white", "rhs_GRD40_green", "rhs_GRD40_red" // RHS
			};
		};
	};
	class rhs_weap_ak74m: rhs_weap_ak74m_Base_F
	{
		magazines[] =
		{
			"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_T_AK", "hlc_30Rnd_545x39_EP_AK", "hlc_45Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_S_AK", // HLC
			"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_AK_green", "rhs_45Rnd_545x39_AK", "rhs_45Rnd_545x39_7N10_AK", "rhs_45Rnd_545x39_7N22_AK", "rhs_45Rnd_545x39_AK_green" // RHS
		};
	};
	class rhs_weap_ak74m_pkas: rhs_weap_ak74m {};
	class rhs_weap_ak74m_1p63: rhs_weap_ak74m {};
	class rhs_weap_ak74m_pso1m2: rhs_weap_ak74m {};
	class rhs_weap_ak74m_1p29: rhs_weap_ak74m {};
	class rhs_weap_ak74m_camo: rhs_weap_ak74m {};
	class rhs_weap_ak74m_folded: rhs_weap_ak74m {};
	class rhs_weap_ak74m_camo_folded: rhs_weap_ak74m_folded {};
	class rhs_weap_ak74m_desert_folded: rhs_weap_ak74m_folded {};
	class rhs_weap_ak74m_gp25_folded: rhs_weap_ak74m_folded	{};
	class rhs_weap_ak74m_2mag: rhs_weap_ak74m {};
	class rhs_weap_ak74m_2mag_camo: rhs_weap_ak74m_2mag {};
	class rhs_weap_ak74m_camo_pkas: rhs_weap_ak74m_camo {};
	class rhs_weap_ak74m_camo_1p63: rhs_weap_ak74m_camo {};
	class rhs_weap_ak74m_camo_pso1m2: rhs_weap_ak74m_camo {};
	class rhs_weap_ak74m_camo_1p29: rhs_weap_ak74m_camo {};
	class rhs_weap_ak74m_desert: rhs_weap_ak74m {};
	class rhs_weap_ak74m_gp25: rhs_weap_ak74m {};
	class rhs_weap_ak74m_gp25_pkas: rhs_weap_ak74m_gp25 {};
	class rhs_weap_ak74m_gp25_1p63: rhs_weap_ak74m_gp25 {};
	class rhs_weap_ak74m_gp25_pso1m2: rhs_weap_ak74m_gp25 {};
	class rhs_weap_ak74m_gp25_1p29: rhs_weap_ak74m_gp25 {};
	class rhs_weap_ak74: rhs_weap_ak74m {};
	class rhs_weap_ak74_gp25: rhs_weap_ak74m_gp25 {};
	class rhs_weap_aks74: rhs_weap_ak74 {};
	class rhs_weap_aks74u: rhs_weap_aks74 {};
	class rhs_weap_akm: rhs_weap_ak74m {
		magazines[] =
		{
			"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_t_ak","hlc_45Rnd_762x39_m_rpk","HLC_45rnd_762x39_T_RPK","hlc_30rnd_762x39_s_ak", // HLC
			"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_89" // RHS
		};
	};
	class rhs_weap_akms: rhs_weap_akm {};
};