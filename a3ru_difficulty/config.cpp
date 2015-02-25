class CfgPatches
{
	class A3RU_difficulty
	{
		version = "1.2";
		versionStr = "1.2";
		versionAr[] = {1,2};
		author = "Blender";
		authorUrl = "http://arma3.ru";
		description = "Removed spotted units markers, radio protocol, increased difficulty settings";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "A3_UI_F", "A3_UI_F_HELI", "A3_Dubbing_Radio_F", "rhs_c_radio" };
	};
};

class RscChatListDefault;
class RscChatListMission: RscChatListDefault
{
	x = 0.000000;
	y = 7777;
	w = 1.000000;
	rows = 2;
};
class RscChatListMap: RscChatListDefault
{
	x = 0.000000;
	y = 7777;
	w = 1.000000;
	rows = 2;
};

#include "cfgGroupIcons.hpp"
#include "cfgInGameUI.hpp"
#include "cfgVoice.hpp"
#include "cfgDifficulties.hpp"