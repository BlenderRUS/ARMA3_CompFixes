class CfgPatches
{
   class A3RU_air_rearmove
   {
       units[]={};
       weapons[]={};
       requiredVersion=1.36;
       requiredAddons[]={ "Extended_Eventhandlers" };
	   version = "1.0";
	   versionStr = "1.0";
	   versionAr[] = {1,0};
	   author[] = { "Blender" };
	   authorUrl = "http://www.arma3.ru";
	   description = "Planes can slowly move backwards";
   };
};

class Extended_PostInit_EventHandlers {
	class a3ru_air_rearmove {
		clientInit = "[] execVM '\a3ru_air_rearmove\init.sqf';";
	};
};

#include "\A3RU_air_rearmove\CfgFunctions.hpp"