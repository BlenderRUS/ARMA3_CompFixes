class CfgPatches
{
	class A3RU_RHS_Sights_Fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 1.36;
		requiredAddons[] = {"rhs_c_t72", "rhs_optics"};
		version = "1.0";
		versionStr = "1.0";
		versionAr[] = {1,0};
		author[] = { "Blender" };
		authorUrl = "http://www.arma3.ru";
		description = "T72, T80, BTR-80a, BMD2K Sight fixes";
	};
};
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class Functions
		{
			class rF_t72
			{
				file = "\A3RU_RHS_Sights_Fix\Functions\RHS_rF_t72.sqf";
				description = "FCS for T72";
			};
			class sight_1g42
			{
				file = "\A3RU_RHS_Sights_Fix\Functions\RHS_sight_1G42.sqf";
				description = "FCS for BMP-2";
			};
			class sight_1g46
			{
				file = "\A3RU_RHS_Sights_Fix\Functions\RHS_sight_1G46.sqf";
				description = "FCS for BMP-2";
			};
			class sight_agava2
			{
				file = "\A3RU_RHS_Sights_Fix\Functions\RHS_sight_agava2.sqf";
				description = "FCS for BMP-2";
			};
			class sight_bmp2
			{
				file = "\A3RU_RHS_Sights_Fix\Functions\RHS_sight_bmp2.sqf";
				description = "FCS for BMP-2";
			};
		};
	};
};