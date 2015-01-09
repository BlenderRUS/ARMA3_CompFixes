class CfgPatches
{
   class a3ru_air_rearmove
   {
       units[]={};
       weapons[]={};
       requiredVersion=0.1;
       requiredAddons[]={ "Extended_Eventhandlers" };
	   author[]={ "Blender" };
	   version[]={ "1.0" };
	   description = "Planes can slowly move backwards";
   };
};

class Extended_PostInit_EventHandlers {
	class a3ru_air_rearmove {
		clientInit = "[] execVM '\a3ru_air_rearmove\init.sqf';";
	};
};

#include "\a3ru_air_rearmove\CfgFunctions.hpp"