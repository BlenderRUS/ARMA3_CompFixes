class CfgPatches
{
	class A3RU_HLC_RHS_RH
	{
		requiredAddons[] = { "hlcweapons_aks", "rhs_c_weapons", "rhsusf_c_weapons", "RH_m4_cfg" };
		units[] = {};
		weapons[] = {};
		version = "1.3";
		versionStr = "1.3";
		versionAr[] = {1,3};
		author[] = { "Blender" };
		authorUrl = "http://www.arma3.ru";
		description = "HLC AKs <-> RHS US and RF <-> RH M4 Pack Weapon magazines and GL compatibility";
	};
};

class CfgWeapons
{
	//// HLC WEAPONS ////
	class hlc_ak_base;
	class hlc_rifle_ak74: hlc_ak_base
	{
		magazines[] = {
			// HLC
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_T_AK",
			"hlc_30Rnd_545x39_EP_AK",
			"hlc_45Rnd_545x39_t_rpk",
			"hlc_30Rnd_545x39_S_AK",
			
			//RHS
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_45Rnd_545x39_AK",
			"rhs_45Rnd_545x39_7N10_AK",
			"rhs_45Rnd_545x39_7N22_AK",
			"rhs_45Rnd_545x39_AK_green"
		};
	};
	class hlc_rifle_ak74_dirty: hlc_rifle_ak74 {};
	class hlc_rifle_aks74: hlc_rifle_ak74 {};
	class hlc_rifle_ak12: hlc_rifle_aks74 {};
	class hlc_rifle_aks74u: hlc_rifle_ak74 {};
	class hlc_rifle_ak47: hlc_rifle_ak74
	{
		magazines[] = {
			// HLC
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_t_ak",
			"hlc_45Rnd_762x39_m_rpk",
			"HLC_45rnd_762x39_T_RPK",
			"hlc_30rnd_762x39_s_ak",
			
			// RHS
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm_tracer",
			"rhs_30Rnd_762x39mm_89"
		};
	};
	class hlc_rifle_akm: hlc_rifle_ak47	{};
	class UGL_F;
	class hlc_rifle_akmgl: hlc_rifle_akm {
		class hlc_GP25_AKM: UGL_F
		{
			magazines[] = {
				// HLC
				"hlc_VOG25_AK",
				"hlc_GRD_White",
				"hlc_GRD_Red",
				"hlc_GRD_Green",
				"hlc_GRD_Yellow",
				"hlc_GRD_Purple",
				"hlc_GRD_Blue",
				"hlc_GRD_Orange",
				
				// RHS
				"rhs_VOG25",
				"rhs_VOG25p",
				"rhs_vg40tb",
				"rhs_vg40sz",
				"rhs_vg40op_white",
				"rhs_vg40op_green",
				"rhs_vg40op_red",
				"rhs_GRD40_white",
				"rhs_GRD40_green",
				"rhs_GRD40_red"
			};
		};
	};
	class hlc_rifle_rpk: hlc_rifle_ak47
	{
		magazines[] = {
			// HLC
			"hlc_75Rnd_762x39_m_rpk",
			"hlc_45Rnd_762x39_m_rpk",
			"HLC_45rnd_762x39_T_RPK",
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_t_ak",
			"hlc_30rnd_762x39_s_ak",
			
			// RHS
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm_tracer",
			"rhs_30Rnd_762x39mm_89"
		};
	};
	class hlc_rifle_aks74_GL: hlc_rifle_aks74
	{
		class hlc_GP30_AKS74: UGL_F
		{
			magazines[] = {
				// HLC
				"hlc_VOG25_AK",
				"hlc_GRD_White",
				"hlc_GRD_Red",
				"hlc_GRD_Green",
				"hlc_GRD_Yellow",
				"hlc_GRD_Purple",
				"hlc_GRD_Blue",
				"hlc_GRD_Orange",
				
				// RHS
				"rhs_VOG25",
				"rhs_VOG25p",
				"rhs_vg40tb",
				"rhs_vg40sz",
				"rhs_vg40op_white",
				"rhs_vg40op_green",
				"rhs_vg40op_red",
				"rhs_GRD40_white",
				"rhs_GRD40_green",
				"rhs_GRD40_red"
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
				// HLC
				"hlc_VOG25_AK",
				"hlc_GRD_White",
				"hlc_GRD_Red",
				"hlc_GRD_Green",
				"hlc_GRD_Yellow",
				"hlc_GRD_Purple",
				"hlc_GRD_Blue",
				"hlc_GRD_Orange",
				
				// RHS
				"rhs_VOG25",
				"rhs_VOG25p",
				"rhs_vg40tb",
				"rhs_vg40sz",
				"rhs_vg40op_white",
				"rhs_vg40op_green",
				"rhs_vg40op_red",
				"rhs_GRD40_white",
				"rhs_GRD40_green",
				"rhs_GRD40_red"
			};
		};
	};
	class rhs_weap_ak74m: rhs_weap_ak74m_Base_F
	{
		magazines[] =
		{
			// HLC
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_T_AK",
			"hlc_30Rnd_545x39_EP_AK",
			"hlc_45Rnd_545x39_t_rpk",
			"hlc_30Rnd_545x39_S_AK",
			
			// RHS
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_45Rnd_545x39_AK",
			"rhs_45Rnd_545x39_7N10_AK",
			"rhs_45Rnd_545x39_7N22_AK",
			"rhs_45Rnd_545x39_AK_green"
		};
	};
	/*
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
	*/
	class rhs_weap_akm: rhs_weap_ak74m {
		magazines[] =
		{
			// HLC
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_t_ak",
			"hlc_45Rnd_762x39_m_rpk",
			"HLC_45rnd_762x39_T_RPK",
			"hlc_30rnd_762x39_s_ak",
			
			// RHS
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm_tracer",
			"rhs_30Rnd_762x39mm_89"
		};
	};
	class rhs_weap_akms: rhs_weap_akm {};
	
	//** US WEAPONS **//
	class LMG_Mk200_F; // Base class
	class rhs_M249_base: LMG_Mk200_F {
		magazines[] =
		{
			// RH
			"RH_30Rnd_556x45_M855A1",
			"RH_30Rnd_556x45_Mk262",
			"RH_30Rnd_556x45_Mk318",
			"RH_20Rnd_556x45_M855A1",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk318",
			"RH_60Rnd_556x45_M855A1",
			"RH_60Rnd_556x45_Mk262",
			"RH_60Rnd_556x45_Mk318",

			// RHS
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_200Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_M200_soft_pouch",

			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
			"rhs_mag_30Rnd_556x45_M200_Stanag",

			// BIS
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	
	class arifle_MX_Base_F: Rifle_Base_F {};
	class rhs_weap_m4_Base : arifle_MX_Base_F
	{
		magazines[] =
		{
			// RH
			"RH_30Rnd_556x45_M855A1",
			"RH_30Rnd_556x45_Mk262",
			"RH_30Rnd_556x45_Mk318",
			"RH_20Rnd_556x45_M855A1",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk318",
			"RH_60Rnd_556x45_M855A1",
			"RH_60Rnd_556x45_Mk262",
			"RH_60Rnd_556x45_Mk318",

			// RHS
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
			"rhs_mag_30Rnd_556x45_M200_Stanag",

			// BIS
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class weap_m240_base : rhs_M249_base
	{
		magazines[]={
			"rhsusf_100Rnd_762x51",
			"rhsusf_100Rnd_762x51_m993",
			"rhsusf_100Rnd_762x51_m80a1epr"
		};
	};
	
	class srifle_EBR_F; // Base class
	class rhs_weap_m14ebrri : srifle_EBR_F
	{
		magazines[] = {
			// RHS
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m993_Mag",
			
			// RH
			"RH_20Rnd_762x51_M80A1",
			"RH_20Rnd_762x51_Mk316LR",
			"RH_20Rnd_762x51_LFMJSB"
		};
	};
	
	class rhs_weap_sr25 : rhs_weap_m14ebrri
	{
		magazines[] = {
			// RHS
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m993_Mag",
			
			// RH
			"RH_20Rnd_762x51_M80A1",
			"RH_20Rnd_762x51_Mk316LR",
			"RH_20Rnd_762x51_LFMJSB"
		};
	};
	
	//// RH WEAPONS ////
	/*
	class RH_ar10: Rifle_Base_F {
		magazines[] = {"RH_20Rnd_762x51_AR10"};
	};
	*/
	class RH_m110: Rifle_Base_F {
		magazines[] = {
			// RHS
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m993_Mag",
			
			// RH
			"RH_20Rnd_762x51_M80A1",
			"RH_20Rnd_762x51_Mk316LR",
			"RH_20Rnd_762x51_LFMJSB"
		};
	};
	//class RH_Mk11: RH_m110 {};
	class RH_SR25EC: RH_m110 {
		magazines[] = {
			// RHS
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m993_Mag",
			
			// RH
			"RH_20Rnd_762x51_M80A1",
			"RH_20Rnd_762x51_Mk319",
			"RH_20Rnd_762x51_LFMJSB"
		};
	};
	class RH_m4: Rifle_Base_F
	{
		magazines[] = {
			// RH
			"RH_30Rnd_556x45_M855A1",
			"RH_30Rnd_556x45_Mk262",
			"RH_30Rnd_556x45_Mk318",
			"RH_20Rnd_556x45_M855A1",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk318",
			"RH_60Rnd_556x45_M855A1",
			"RH_60Rnd_556x45_Mk262",
			"RH_60Rnd_556x45_Mk318",
			
			// RHS
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
			
			// BIS
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
		class M203: UGL_F
		{
			magazines[] = {
				// RHS
				"rhs_mag_M441_HE",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M4009",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_M661_green",
				"rhs_mag_M662_red",
				"rhs_mag_M713_red",
				"rhs_mag_M714_white",
				"rhs_mag_M715_green",
				"rhs_mag_M716_yellow",

				// BIS
				"1Rnd_HE_Grenade_shell",
				"UGL_FlareWhite_F",
				"UGL_FlareGreen_F",
				"UGL_FlareRed_F",
				"UGL_FlareYellow_F",
				"UGL_FlareCIR_F",
				"1Rnd_Smoke_Grenade_shell",
				"1Rnd_SmokeRed_Grenade_shell",
				"1Rnd_SmokeGreen_Grenade_shell",
				"1Rnd_SmokeYellow_Grenade_shell",
				"1Rnd_SmokePurple_Grenade_shell",
				"1Rnd_SmokeBlue_Grenade_shell",
				"1Rnd_SmokeOrange_Grenade_shell",
				"3Rnd_HE_Grenade_shell",
				"3Rnd_UGL_FlareWhite_F",
				"3Rnd_UGL_FlareGreen_F",
				"3Rnd_UGL_FlareRed_F",
				"3Rnd_UGL_FlareYellow_F",
				"3Rnd_UGL_FlareCIR_F",
				"3Rnd_Smoke_Grenade_shell",
				"3Rnd_SmokeRed_Grenade_shell",
				"3Rnd_SmokeGreen_Grenade_shell",
				"3Rnd_SmokeYellow_Grenade_shell",
				"3Rnd_SmokePurple_Grenade_shell",
				"3Rnd_SmokeBlue_Grenade_shell",
				"3Rnd_SmokeOrange_Grenade_shell"
			};
		};
	};
	class RH_M4_M203: RH_m4 {};
	class RH_M4_ris: RH_m4 {};
	//class RH_M4_ris_M203: RH_M4_ris {};
	class RH_M4A1_ris: RH_M4_ris {};
	/*
	class RH_M4A1_ris_M203: RH_M4_ris_M203 {};
	class RH_M4_ris_m: RH_M4A1_ris {};
	class RH_M4m: RH_M4A1_ris {};
	class RH_M4m_g: RH_M4m {};
	class RH_M4m_b: RH_M4m {};
	class RH_M4_moe: RH_M4A1_ris {};
	class RH_M4_moe_b: RH_M4_moe {};
	class RH_M4_moe_g: RH_M4_moe {};
	class RH_M4sbr: RH_M4A1_ris {};
	class RH_M4sbr_g: RH_M4sbr {};
	class RH_M4sbr_b: RH_M4sbr {};
	class RH_hb: Rifle_Base_F {
		magazines[] = {
			"RH_30Rnd_762x35_FMJ",
			"RH_30Rnd_762x35_Match",
			"RH_30Rnd_762x35_MSB"
		};
	};
	class RH_hb_b: RH_hb {};
	class RH_sbr9: Rifle_Base_F
	{
		magazines[] = {
			"RH_32Rnd_9mm_M822",
			"RH_32Rnd_9mm_HP",
			"RH_32Rnd_9mm_HPSB"
		};
	};
	class RH_M4A6: RH_M4A1_ris
	{
		magazines[] = {
			"RH_30Rnd_68x43_FMJ",
			"RH_30Rnd_68x43_Match"
		};
	};
	class RH_M16a1: RH_m4 {};
	class RH_M16A1gl: RH_M16a1 {};
	class RH_M16A2: RH_m4 {};
	class RH_M16A2gl: RH_M16A2 {};*/
	class RH_M16A4: RH_M4_ris {};
	/*
	class RH_M16A4gl: RH_M16A4 {};
	class RH_M16A3: RH_M16A4 {};
	class RH_M16A4_m: RH_M16A4 {};
	class RH_M16A6: RH_M16A4 {
		magazines[] = {
			"RH_30Rnd_68x43_FMJ",
			"RH_30Rnd_68x43_Match"
		};
	};*/
	class RH_Mk12mod1: RH_M16A4
	{
		magazines[] = {
			// RHS
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
			
			// RH
			"RH_30Rnd_556x45_Mk262",
			"RH_30Rnd_556x45_M855A1",
			"RH_30Rnd_556x45_Mk318",
			"RH_20Rnd_556x45_M855A1",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk318",
			"RH_60Rnd_556x45_M855A1",
			"RH_60Rnd_556x45_Mk262",
			"RH_60Rnd_556x45_Mk318",
			
			// BIS
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	/*
	class RH_SAMR: RH_Mk12mod1 {};
	class RH_Hk416: RH_M4A1_ris {};
	class RH_Hk416s: RH_M4sbr {};
	class RH_Hk416c: RH_M4sbr {};
	*/
	class RH_M27IAR: RH_Mk12mod1
	{
		magazines[] = {
			// RHS
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
			
			// RH
			"RH_60Rnd_556x45_M855A1",
			"RH_60Rnd_556x45_Mk262",
			"RH_60Rnd_556x45_Mk318",
			"RH_30Rnd_556x45_M855A1",
			"RH_30Rnd_556x45_Mk262",
			"RH_30Rnd_556x45_Mk318",
			"RH_20Rnd_556x45_M855A1",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk318",

			// BIS
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	/*
	class RH_m4_tg: RH_m4 {};
	class RH_m4_des: RH_m4 {};
	class RH_m4_wdl: RH_m4 {};
	class RH_m4_m203_tg: RH_M4_M203 {};
	class RH_m4_m203_des: RH_M4_M203 {};
	class RH_m4_m203_wdl: RH_M4_M203 {};
	class RH_m4a1_ris_tg: RH_M4A1_ris {};
	class RH_m4a1_ris_des: RH_M4A1_ris {};
	class RH_m4a1_ris_wdl: RH_M4A1_ris {};
	class RH_m4a1_ris_m203_tg: RH_M4A1_ris_M203 {};
	class RH_m4a1_ris_m203_des: RH_M4A1_ris_M203 {};
	class RH_m4a1_ris_m203_wdl: RH_M4A1_ris_M203 {};
	class RH_m4_ris_m_tg: RH_M4_ris_m {};
	class RH_m4_ris_m_des: RH_M4_ris_m {};
	class RH_m4_ris_m_wdl: RH_M4_ris_m {};
	class RH_m4a6_tg: RH_M4A6 {};
	class RH_m4a6_des: RH_M4A6 {};
	class RH_m4a6_wdl: RH_M4A6 {};
	class RH_m16a4_tg: RH_M16A4 {};
	class RH_m16a4_des: RH_M16A4 {};
	class RH_m16a4_wdl: RH_M16A4 {};
	class RH_m16a4gl_tg: RH_M16A4gl {};
	class RH_m16a4gl_des: RH_M16A4gl {};
	class RH_m16a4gl_wdl: RH_M16A4gl {};
	class RH_m16a4_m_tg: RH_M16A4_m {};
	class RH_m16a4_m_des: RH_M16A4_m {};
	class RH_m16a4_m_wdl: RH_M16A4_m {};
	class RH_m16a6_tg: RH_M16A6 {};
	class RH_m16a6_des: RH_M16A6 {};
	class RH_m16a6_wdl: RH_M16A6 {};
	class RH_Mk12mod1_tg: RH_Mk12mod1 {};
	class RH_Mk12mod1_des: RH_Mk12mod1 {};
	class RH_Mk12mod1_wdl: RH_Mk12mod1 {};
	class RH_SAMR_tg: RH_SAMR {};
	class RH_SAMR_des: RH_SAMR {};
	class RH_SAMR_wdl: RH_SAMR {};
	class RH_sbr9_tg: RH_sbr9 {};
	class RH_sbr9_des: RH_sbr9 {};
	class RH_sbr9_wdl: RH_sbr9 {};
	*/
};