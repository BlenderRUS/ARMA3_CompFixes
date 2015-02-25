class CfgPatches
{
	class A3RU_MAS_AGM_DragFix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 1.38;
		requiredAddons[] = {"AGM_Logistics", "mas_vehicleweapons_Core"};
		version = "1.0";
		versionStr = "1.0";
		versionAr[] = {1,0};
		author[] = { "Blender" };
		authorUrl = "http://www.arma3.ru";
	};
};

class CfgVehicles {
	class LandVehicle;
	class StaticWeapon: LandVehicle {
		class AGM_Actions;
	};
	class StaticCannon: StaticWeapon {};
	class I_mas_ZU23_base: StaticCannon
	{
		class AGM_Actions: AGM_Actions
		{
			class AGM_DragItem {
				condition = "false";
			};
			class AGM_loadItem {
				condition = "false";
			};
			class AGM_GetIn;
			class AGM_RotateClockwise;
			class AGM_RotateCounterclockwise;
		};
	};
	class I_mas_D30_base: StaticCannon
	{
		class AGM_Actions: AGM_Actions
		{
			class AGM_DragItem {
				condition = "false";
			};
			class AGM_loadItem {
				condition = "false";
			};
			class AGM_GetIn;
			class AGM_RotateClockwise;
			class AGM_RotateCounterclockwise;
		};
	};
};