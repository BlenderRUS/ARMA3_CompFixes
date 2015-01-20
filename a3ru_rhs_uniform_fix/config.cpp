#define _ARMA_

class CfgPatches
{
	class A3RU_RHS_uniform_fix
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = { rhsusf_c_troops };
		version = "1.1";
		versionStr = "1.1";
		versionAr[] = {1,1};
		author[] = { "Blender" };
		authorUrl = "http://www.arma3.ru";
		description = "US Army infantry uniform side fix";
	};
};

class CfgVehicles
{
	class SoldierEB;
	class rhsusf_infantry_army_base : SoldierEB
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_rifleman : rhsusf_infantry_army_base
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_rifleman_m16 : rhsusf_army_ocp_rifleman
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_riflemanl : rhsusf_infantry_army_base
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_medic: rhsusf_army_ocp_rifleman
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_engineer: rhsusf_army_ocp_rifleman
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_riflemanat: rhsusf_infantry_army_base
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_javelin: rhsusf_army_ocp_riflemanat
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_grenadier: rhsusf_infantry_army_base
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_squadleader: rhsusf_infantry_army_base
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_teamleader: rhsusf_army_ocp_rifleman
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_autorifleman: rhsusf_infantry_army_base
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_autoriflemana: rhsusf_infantry_army_base
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_machinegunner: rhsusf_army_ocp_autorifleman
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_machinegunnera: rhsusf_infantry_army_base
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_aa: rhsusf_army_ocp_riflemanat
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_marksman: rhsusf_infantry_army_base
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_crewman: rhsusf_infantry_army_base
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_combatcrewman: rhsusf_infantry_army_base
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_driver: rhsusf_infantry_army_base
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_helipilot: rhsusf_infantry_army_base
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_helicrew: rhsusf_infantry_army_base
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_sniper: rhsusf_army_ocp_marksman
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_autorifleman: rhsusf_army_ocp_autorifleman
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_autoriflemana: rhsusf_army_ocp_autoriflemana
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_machinegunner: rhsusf_army_ocp_machinegunner
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_machinegunnera: rhsusf_army_ocp_machinegunnera
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_aa: rhsusf_army_ocp_aa
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_crewman: rhsusf_army_ocp_crewman
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_combatcrewman: rhsusf_army_ocp_combatcrewman
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_driver: rhsusf_army_ocp_driver
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_engineer: rhsusf_army_ocp_engineer
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_grenadier: rhsusf_army_ocp_grenadier
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_marksman: rhsusf_army_ocp_marksman
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_medic: rhsusf_army_ocp_medic
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_rifleman: rhsusf_army_ocp_rifleman
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_rifleman_m16: rhsusf_army_ocp_rifleman_m16
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_riflemanl: rhsusf_army_ocp_riflemanl
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_riflemanat: rhsusf_army_ocp_riflemanat
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_javelin: rhsusf_army_ocp_javelin
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_sniper: rhsusf_army_ocp_sniper
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_squadleader: rhsusf_army_ocp_squadleader
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_teamleader: rhsusf_army_ocp_teamleader
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_helipilot: rhsusf_army_ocp_helipilot
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_helicrew: rhsusf_army_ocp_helicrew
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ucp_patchless: rhsusf_army_ocp_crewman
	{
		modelsides[] = {1, 3};
	};
	class rhsusf_army_ocp_patchless: rhsusf_army_ocp_crewman
	{
		modelsides[] = {1, 3};
	};
};