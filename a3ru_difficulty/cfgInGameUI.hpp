class CfgInGameUI
{
	imageCornerElement = "\A3\ui_f\data\igui\cfg\imageCornerElement_ca.paa";
	xboxStyle = 0;
	colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
	colorBackgroundCommand[] = {1,1,1,1};
	colorBackgroundHelp[] = {1,1,1,1};
	colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
	class SideColors
	{
		colorFriendly[] = {0.709,0.972,0.384,1};
		colorEnemy[] = {0.706,0.0745,0.0196,1};
		colorNeutral[] = {0.606,0.606,0.606,1};
		colorCivilian[] = {0.606,0.606,0.606,1};
		colorUnknown[] = {0.863,0.584,0.0,1};
	};
	class IslandMap
	{
		colorCivilian[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
		colorEnemy[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
		colorFriendly[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
		colorNeutral[] = {"(profilenamespace getvariable ['Map_Civilian_R',0])","(profilenamespace getvariable ['Map_Civilian_G',1])","(profilenamespace getvariable ['Map_Civilian_B',1])","(profilenamespace getvariable ['Map_Civilian_A',0.8])"};
		colorUnknown[] = {"(profilenamespace getvariable ['Map_Unknown_R',0])","(profilenamespace getvariable ['Map_Unknown_G',1])","(profilenamespace getvariable ['Map_Unknown_B',1])","(profilenamespace getvariable ['Map_Unknown_A',0.8])"};
		shadow = 2;
		iconPlayer = "\A3\ui_f\data\igui\cfg\islandmap\iconPlayer_ca.paa";
		iconCamera = "\A3\ui_f\data\igui\cfg\islandmap\iconCamera_ca.paa";
		iconSelect = "\A3\ui_f\data\igui\cfg\islandmap\iconSelect_ca.paa";
		iconSensor = "\A3\ui_f\data\igui\cfg\islandmap\iconSensor_ca.paa";
		sizeLeader = 24;
		size = 26;
		sizePlayer = 26;
		cursorLineWidth = 1;
		colorSelect[] = {0.0,0.0,0.0,1.0};
		class meCircle
		{
			color[] = {0.7,0.1,0,1};
			size = 500;
			refreshDelay = 2;
		};
	};
	class MPTable
	{
		x = 0.037;
		y = 0.1;
		w = 0.926;
		h = 0.8;
		color[] = {1,1,1,1.0};
		colorCaptionBg[] = {0,0,0,1};
		colorTitleBg[] = {0,0,0,1};
		colorBg[] = {0,0,0,0.6};
		colorBgAlt[] = {0,0,0,0.65};
		colorSelected[] = {0,0,0,0.9};
		colorWest[] = {0.13,0.41,0.87,1};
		colorEast[] = {0.83,0.17,0.17,1};
		colorCiv[] = {0.45,0.05,0.9,1};
		colorRes[] = {0.18,0.65,0.12,1};
		font = "PuristaMedium";
		size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		shadow = 0;
		captionSpace = 0.005;
		class Columns
		{
			class Order
			{
				width = 0.049;
			};
			class Player
			{
				width = 0.27;
				space = 0.005;
			};
			class KillsInfantry
			{
				picture = "\A3\ui_f\data\igui\cfg\mptable\infantry_ca.paa";
			};
			class KillsSoft
			{
				picture = "\A3\ui_f\data\igui\cfg\mptable\soft_ca.paa";
			};
			class KillsArmor
			{
				picture = "\A3\ui_f\data\igui\cfg\mptable\armored_ca.paa";
			};
			class KillsAir
			{
				picture = "\A3\ui_f\data\igui\cfg\mptable\air_ca.paa";
			};
			class Killed
			{
				space = 0.005;
				picture = "\A3\ui_f\data\igui\cfg\mptable\killed_ca.paa";
			};
			class KillsTotal
			{
				width = 0.108;
				picture = "\A3\ui_f\data\igui\cfg\mptable\total_ca.paa";
			};
		};
		class RespawnMessage
		{
			x = 0;
			y = 0;
			font = "PuristaMedium";
			size = 0;
			color[] = {0,0,0,0};
			xBg = 0;
			yBg = 0;
			wBg = 0;
			hBg = 0;
			colorBg[] = {0,0,0,0};
		};
	};
	class TankDirection
	{
		left = -10;
		top = -10;
		width = 0.23529412;
		height = 0.31372553;
		color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorHalfDammage[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])","(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])","(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
		colorFullDammage[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
		imageTower = "\A3\ui_f\data\igui\cfg\tankdirection\Tower_gs.paa";
		imageTurret = "\A3\ui_f\data\igui\cfg\tankdirection\Turret_gs.paa";
		imageGun = "\A3\ui_f\data\igui\cfg\tankdirection\Gun_gs.paa";
		imageObsTurret = "\A3\ui_f\data\igui\cfg\tankdirection\ObsTurret_gs.paa";
		imageLTrack = "\A3\ui_f\data\igui\cfg\tankdirection\LTrack_gs.paa";
		imageRTrack = "\A3\ui_f\data\igui\cfg\tankdirection\RTrack_gs.paa";
		imageHull = "\A3\ui_f\data\igui\cfg\tankdirection\Hull_gs.paa";
		imageEngine = "\A3\ui_f\data\igui\cfg\tankdirection\Engine_gs.paa";
		imageMoveStop = "#(argb,8,8,3)color(0,0,0,0)";
		imageMoveBack = "#(argb,8,8,3)color(0,0,0,0)";
		imageMoveForward = "#(argb,8,8,3)color(0,0,0,0)";
		imageMoveFast = "#(argb,8,8,3)color(0,0,0,0)";
		imageMoveLeft = "#(argb,8,8,3)color(0,0,0,0)";
		imageMoveRight = "#(argb,8,8,3)color(0,0,0,0)";
		imageMoveAuto = "#(argb,8,8,3)color(0,0,0,0)";
	};
	class HelicopterHUD
	{
		color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		font = "PuristaMedium";
		windDirection = "\A3\ui_f\data\igui\cfg\helicopterhud\wind_ca.paa";
		stabilityVector = "\A3\ui_f\data\igui\cfg\helicopterhud\stability_vector_ca.paa";
		stabilityGrid = "\A3\ui_f\data\igui\cfg\helicopterhud\stability_grid_ca.paa";
		axis = "\A3\ui_f\data\igui\cfg\helicopterhud\altimeter_axis_ca.paa";
		indicator = "\A3\ui_f\data\igui\cfg\helicopterhud\vspeed_value_ca.paa";
		horizonAxes = "\A3\ui_f\data\igui\cfg\helicopterhud\horizon_axes_ca.paa";
		horizonVector = "\A3\ui_f\data\igui\cfg\helicopterhud\horizon_vector_ca.paa";
		horizonAircraft = "\A3\ui_f\data\igui\cfg\helicopterhud\horizon_aircraft_ca.paa";
		attitudeElemmentsSize = "0.05 / safezoneH";
		analogueSpeedAngleOffset = 0;
		analogueAltitudeAngleOffset = 0;
		statusOff[] = {0.95,0.95,0.95,0.25};
		statusOn[] = {0.95,0.95,0.95,0.75};
		statusDamaged[] = {0.8,0.6,0,1};
		statusDestroyed[] = {0.7,0.1,0,1};
		statusEnabled[] = {0,0.6,0,1};
		HUDLimitsColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",1};
	};
	class Picturem
	{
		imageBusy = "\A3\ui_f\data\igui\cfg\picturem\busy_ca.paa";
		imageWaiting = "\A3\ui_f\data\igui\cfg\picturem\waiting_ca.paa";
		imageCommand = "\A3\ui_f\data\igui\cfg\picturem\command_ca.paa";
	};
	class ProgressFont
	{
		font = "PuristaMedium";
		size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	};
	class CheatXFont
	{
		font = "PuristaMedium";
	};
	class FadeFont
	{
		font = "PuristaMedium";
	};
	class DragAndDropFont
	{
		font = "PuristaMedium";
		shadow = 2;
		size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		colorEnabled[] = {0,1,0,0.3};
		colorDisabled[] = {1,0,0,0.3};
		hideCursor = 0;
	};
	class TooltipFont
	{
		font = "PuristaMedium";
		size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		shadow = 2;
	};
	class Compass
	{
		left = -10;
		top = -10;
		width = 0.473;
		height = 0.0522876;
		shadow = 2;
		color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		dirColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		texture0 = "A3\ui_f\data\igui\cfg\compass\texture0_ca.paa";
		texture90 = "A3\ui_f\data\igui\cfg\compass\texture90_ca.paa";
		texture180 = "A3\ui_f\data\igui\cfg\compass\texture180_ca.paa";
		texture270 = "A3\ui_f\data\igui\cfg\compass\texture270_ca.paa";
	};
	class TacticalDisplay: SideColors
	{
		left = "(0.263)";
		top = "0.055 + SafeZoneY";
		width = 0.473;
		height = 0.008;
		targetTexture = "\A3\ui_f\data\igui\cfg\tacticaldisplay\targetTexture_gs.paa";
		targetAirTexture = "\A3\ui_f\data\igui\cfg\tacticaldisplay\targetAirTexture_gs.paa";
		class Cursor
		{
			width = 0.0196078;
			height = 0.0261438;
			color[] = {1,1,1,1};
		};
		shadow = 0;
		colorCamera[] = {1,1,1,0};
	};
	class Radar
	{
		left = "(profilenamespace getvariable [""IGUI_GRID_RADAR_X"",		(safezoneX + safezoneW / 2 - 2.8 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
		top = "(profilenamespace getvariable [""IGUI_GRID_RADAR_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		width = "(5.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
		height = "(5.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		radarAirBackgroundTexture = "A3\Ui_f\data\igui\cfg\radar\radar_ca.paa";
		radarTankBackgroundTexture = "A3\Ui_f\data\igui\cfg\radar\radar_ca.paa";
		radarCompassOnlyBackgroundTexture = "A3\Ui_f\data\igui\cfg\radar\radar_ca.paa";
		radarIncommingMissile = "\A3\ui_f\data\igui\cfg\radar\missle_ca.paa";
		radarAirDangerSector = "\A3\ui_f\data\igui\cfg\radar\danger_ca.paa";
		radarLockDangerColor[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])","(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])","(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
		radarIncommingDangerColor[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
		radarVehicleTarget = "\A3\ui_f\data\igui\cfg\radar\target_ca.paa";
		radarTargetingEnemy = "\A3\ui_f\data\igui\cfg\radar\targeting_ca.paa";
		radarWaypoint = "\A3\Ui_f\data\IGUI\Cfg\Radar\assault_ca.paa";
		radarWaypointColor[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])","(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])","(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
		radarCustomWaypoint = "\A3\Ui_f\data\IGUI\Cfg\Radar\assault_ca.paa";
		radarCustomWaypointColor[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])","(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])","(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
		radarAssault = "\A3\Ui_f\data\IGUI\Cfg\Radar\assault_ca.paa";
		radarAssaultColor[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
		radarOut = "\A3\Ui_f\data\IGUI\Cfg\Radar\waypointOut_ca.paa";
		radarFOV = "\A3\ui_f\data\igui\cfg\radar\viewdir_ca.paa";
		radarFOVPlayer[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		radarFOVCrew[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",1};
		shadow = 0;
	};
	class GroupDir
	{
		left = 0;
		top = 0;
		width = 0;
		height = 0;
		left2 = 0;
		top2 = 0;
		width2 = 0;
		height2 = 0;
		image = "\A3RU_difficulty\empty.paa";
		shadow = 0;
		colorBackground[] = {0,0,0,0};
	};
	class Hint
	{
		sound[] = {"\a3\Ui_f\data\Sound\CfgIngameUI\hint",0.056234132,1};
	};
	class PlayerInfo
	{
		left = "0 + SafeZoneX";
		top = "0.177 + SafeZoneY";
		width = 0.15;
		colorBackground[] = {1,0,1,1};
		class UnitPicture
		{
			width = 0.55;
			height = 0.56;
		};
	};
	class Actions
	{
		align = "0x00 + 0x08";
		shadow = 1;
		x = "(profilenamespace getvariable [""IGUI_GRID_MENU_X"",		(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + safezoneX)])";
		y = "(profilenamespace getvariable [""IGUI_GRID_MENU_Y"",		(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY)])";
		w = 1;
		font = "PuristaMedium";
		size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)*0.95";
		rows = "5*SafeZoneH";
		arrowWidth = 0.015;
		arrowHeight = 0.02;
		iconArrowUp = "\A3\ui_f\data\igui\cfg\actions\arrow_up_gs.paa";
		iconArrowDown = "\A3\ui_f\data\igui\cfg\actions\arrow_down_gs.paa";
		background = "\A3\ui_f\data\igui\cfg\imageCornerElement_ca.paa";
		underlineSelected = 0;
		colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
		colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorSelect[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorBackgroundSelected[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",0.5};
	};
	class Menu
	{
		hide = "HTFade";
		x = "(profilenamespace getvariable [""IGUI_GRID_MENU_X"",		(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + safezoneX)])";
		top = "(profilenamespace getvariable [""IGUI_GRID_MENU_Y"",		(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY)])";
		width = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		height = "(13.5 * 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8))";
		widthMin = 0.155;
		widthMax = "30 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		font = "PuristaMedium";
		size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		shadow = 1;
		align = 0;
		colorChecked[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorEnabled[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorDisabled[] = {0.606,0.606,0.606,1};
		colorSelected[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",0.5};
		colorSelectedText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		hideTime = 60;
		quickMenuDelay = 0.5;
	};
	class Capture
	{
		colorBackground[] = {0,0,0,0.7};
		colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorLine[] = {"White",1};
	};
	class Bar
	{
		imageBar = "#(argb,8,8,3)color(1,1,1,1)";
		colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
		colorGreen[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorYellow[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])","(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])","(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
		colorRed[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
		colorBlinkOn[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])","(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])","(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
		colorBlinkOff[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
		height = 0.01;
	};
	class DefaultAction
	{
		font = "PuristaMedium";
		size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		shadow = 2;
		showHint = 0;
		showNext = 0;
		showLine = 0;
		relativeToCursor = 1;
		offsetX = 0.0;
		offsetY = 0.045;
		hotspotX = 0.0;
		hotspotY = 0.0;
		textTipFade = 0.4;
		textTipDelay = 0.4;
	};
	class GroupInfo
	{
		class Semaphore{};
		imageDefaultWeapons = "\A3\ui_f\data\igui\cfg\commandbar\imageNoWeapons_ca.paa";
		imageNoWeapons = "\A3\ui_f\data\igui\cfg\commandbar\imageNoWeapons_ca.paa";
	};
	class CommandBar
	{
		left = 0;
		top = 0;
		width = 0;
		height = 0;
		imageDefaultWeapons = "\A3RU_Difficulty\empty.paa";
		imageNoWeapons = "\A3RU_Difficulty\empty.paa";
		imageCommander = "\A3RU_Difficulty\empty.paa";
		imageDriver = "\A3RU_Difficulty\empty.paa";
		imageGunner = "\A3RU_Difficulty\empty.paa";
		imageCargo = "\A3RU_Difficulty\empty.paa";
		dimm = 0.3;
		colorRedTeam[] = {0,0,0,0};
		colorBlueTeam[] = {0,0,0,0};
		colorGreenTeam[] = {0,0,0,0};
		colorYellowTeam[] = {0,0,0,0};
		colorWhiteTeam[] = {0,0,0,0};
		class prevPage
		{
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			color[] = {0,0,0,0};
			texture = "\A3RU_Difficulty\empty.paa";
		};
		class nextPage
		{
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			color[] = {0,0,0,0};
			texture = "\A3RU_Difficulty\empty.paa";
		};
		class UnitInfo
		{
			font = "FontMono";
			class VehicleNumberBackground
			{
				texture = "\A3RU_Difficulty\empty.paa";
				color[] = {0,0,0,0};
				x = 0;
				y = 0;
				w = 0;
				h = 0;
			};
			class UnitNumberBackground
			{
				texture = "\A3RU_Difficulty\empty.paa";
				color[] = {0,0,0,0};
				x = 0;
				y = 0;
				w = 0;
				h = 0;
			};
			class UnitNameBackground
			{
				textureNormal = "\A3RU_Difficulty\empty.paa";
				texturePlayer = "\A3RU_Difficulty\empty.paa";
				textureSelected = "\A3RU_Difficulty\empty.paa";
				textureFocus = "\A3RU_Difficulty\empty.paa";
				colorNormal[] = {0,0,0,0};
				colorPlayer[] = {0,0,0,0};
				colorFocus[] = {0,0,0,0};
				colorSelected[] = {0,0,0,0};
				x = 0;
				y = 0;
				w = 0;
				h = 0;
				colorText[] = {0,0,0,0};
			};
			class CommandBackground
			{
				texture = "\A3RU_Difficulty\empty.paa";
				color[] = {0,0,0,0};
				x = 0;
				y = 0;
				w = 0;
				h = 0;
			};
			class VehicleStatus
			{
				color[] = {0,0,0,0};
				colorDamaged[] = {0,0,0,0};
				colorNoAmmo[] = {0,0,0,0};
				colorNoFuel[] = {0,0,0,0};
				texture = "\A3RU_Difficulty\empty.paa";
				x = 0;
				y = 0;
				w = 0;
				h = 0;
			};
			class UnitStatus
			{
				color[] = {0,0,0,0};
				colorWounded[] = {0,0,0,0};
				colorWoundedFade[] = {0,0,0,0};
				colorNoAmmo[] = {0,0,0,0};
				texture = "\A3RU_Difficulty\empty.paa";
				x = 0;
				y = 0;
				w = 0;
				h = 0;
			};
			class UnitCombatMode
			{
				colorBlue[] = {0,0,0,0};
				colorGreen[] = {0,0,0,0};
				colorWhite[] = {0,0,0,0};
				colorYellow[] = {0,0,0,0};
				colorRed[] = {0,0,0,0};
				textureBlue = "\A3RU_Difficulty\empty.paa";
				textureGreen = "\A3RU_Difficulty\empty.paa";
				textureWhite = "\A3RU_Difficulty\empty.paa";
				textureYellow = "\A3RU_Difficulty\empty.paa";
				textureRed = "\A3RU_Difficulty\empty.paa";
				text = "\A3RU_Difficulty\empty.paa";
				x = 0;
				y = 0;
				w = 0;
				h = 0;
				colorText[] = {0,0,0,0};
			};
			class UnitBehavior
			{
				colorCareless[] = {0,0,0,0};
				colorSafe[] = {0,0,0,0};
				colorAware[] = {0,0,0,0};
				colorCombat[] = {0,0,0,0};
				colorStealth[] = {0,0,0,0};
				textureMCareless = "\A3RU_Difficulty\empty.paa";
				textureMSafe = "\A3RU_Difficulty\empty.paa";
				textureMCombat = "\A3RU_Difficulty\empty.paa";
				textureMYellow = "\A3RU_Difficulty\empty.paa";
				textureMStealth = "\A3RU_Difficulty\empty.paa";
				text = "\A3RU_Difficulty\empty.paa";
				x = 0;
				y = 0;
				w = 0;
				h = 0;
			};
			class GroupIcon
			{
				color[] = {0,0,0,0};
				x = 0;
				y = 0;
				w = 0;
				h = 0;
			};
			class VehicleRole
			{
				color[] = {0,0,0,0};
				shadow = 0;
				x = 0;
				y = 0;
				w = 0;
				h = 0;
			};
			class VehicleIcon
			{
				color[] = {0,0,0,0};
				shadow = 0;
				x = 0;
				y = 0;
				w = 0;
				h = 0;
			};
			class UnitRank
			{
				color[] = {0,0,0,0};
				shadow = 0;
				x = 0;
				y = 0;
				w = 0;
				h = 0;
			};
			class UnitRole
			{
				color[] = {0,0,0,0};
				shadow = 0;
				x = 0;
				y = 0;
				w = 0;
				h = 0;
			};
			class UnitSpecialRole
			{
				color[] = {0,0,0,0};
				shadow = 0;
				x = 0;
				y = 0;
				w = 0;
				h = 0;
			};
			class VehicleNumberText
			{
				font = "PuristaMedium";
				shadow = 0;
				x = 0;
				y = 0;
				w = 0;
				h = 0;
				colorText[] = {0,0,0,0};
				sizeEx = 0;
			};
			class UnitNumberText
			{
				font = "PuristaMedium";
				shadow = 0;
				x = 0;
				y = 0;
				w = 0;
				h = 0;
				colorText[] = {0,0,0,0};
				sizeEx = 0;
			};
			class UnitName
			{
				font = "PuristaMedium";
				shadow = 0;
				x = 0;
				y = 0;
				w = 0;
				h = 0;
				colorText[] = {0,0,0,0};
				sizeEx = 0;
			};
			class CommandText
			{
				font = "PuristaMedium";
				shadow = 0;
				x = 0;
				y = 0;
				w = 0;
				h = 0;
				colorText[] = {0,0,0,0};
				sizeEx = 0;
			};
		};
	};
	class ConnectionLost
	{
		font = "PuristaMedium";
		size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		color[] = {0.8,0,0,1.0};
	};
	class Cursor
	{
		font = "PuristaMedium";
		size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		activeWidth = 0.0392157;
		activeHeight = 0.0522876;
		activeMinimum = 1.1;
		activeMaximum = 1.1;
		select = "\A3RU_Difficulty\empty.paa";
		leader = "\A3RU_Difficulty\empty.paa";
		unitBleeding = "\A3\ui_f\data\igui\cfg\cursors\unitBleeding_ca.paa";
		unitInjured = "\A3\ui_f\data\igui\cfg\cursors\unitInjured_ca.paa";
		unitHealer = "\A3\ui_f\data\igui\cfg\cursors\unitHealer_ca.paa";
		unitUnconscious = "\A3\ui_f\data\igui\cfg\cursors\unitUnconscious_ca.paa";
		iconBoardIn = "\A3\ui_f\data\igui\cfg\cursors\iconBoardIn_ca.paa";
		iconBoardOut = "\A3\ui_f\data\igui\cfg\cursors\iconBoardOut_ca.paa";
		iconInFormation = "\A3\ui_f\data\igui\cfg\cursors\iconInFormation_ca.paa";
		iconJoin = "\A3\ui_f\data\igui\cfg\cursors\iconJoin_ca.paa";
		iconMove = "\A3\ui_f\data\igui\cfg\cursors\iconMove_ca.paa";
		iconHealAt = "\A3\ui_f\data\igui\cfg\cursors\iconHealAt_ca.paa";
		iconRearmAt = "\A3\ui_f\data\igui\cfg\cursors\iconRearmAt_ca.paa";
		iconRefuelAt = "\A3\ui_f\data\igui\cfg\cursors\iconRefuelAt_ca.paa";
		iconRepairAt = "\A3\ui_f\data\igui\cfg\cursors\iconRepairAt_ca.paa";
		iconCursorSupport = "\A3RU_Difficulty\empty.paa";
		iconSupport = "\A3RU_Difficulty\empty.paa";
		mission = "\A3RU_Difficulty\empty.paa";
		customMark = "\A3RU_Difficulty\empty.paa";
		board = "\A3RU_Difficulty\empty.paa";
		assault = "\A3RU_Difficulty\empty.paa";
		outArrow = "\A3\ui_f\data\igui\cfg\cursors\outArrow_ca.paa";
		move = "\A3RU_Difficulty\empty.paa";
		selectOver = "\A3RU_Difficulty\empty.paa";
		watch = "\A3RU_Difficulty\empty.paa";
		attack = "\A3RU_Difficulty\empty.paa";
		tactical = "\A3\ui_f\data\igui\cfg\cursors\tactical_ca.paa";
		getIn = "\A3\ui_f\data\igui\cfg\cursors\getIn_ca.paa";
		iconRepairVehicle = "\A3\ui_f\data\igui\cfg\cursors\iconRepairVehicle_ca.paa";
		me = "\A3\ui_f\data\igui\cfg\cursors\me_ca.paa";
		select_target = "\A3RU_Difficulty\empty.paa";
		lock_target = "\A3\ui_f\data\igui\cfg\cursors\lock_target_ca.paa";
		gunner_lock = "\A3\ui_f\data\igui\cfg\cursors\gunner_lock_ca.paa";
		known_target = "\A3RU_Difficulty\empty.paa";
		explosive = "\A3\ui_f\data\igui\cfg\cursors\explosive_ca.paa";
		aim = "\A3RU_Difficulty\empty.paa";
		weapon = "\A3RU_Difficulty\empty.paa";
		iconComplex = "\A3\ui_f\data\igui\cfg\cursors\iconComplex_ca.paa";
		freelook = "\A3\ui_f\data\igui\cfg\cursors\freelook_ca.paa";
		selectColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		leaderColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		iconInFormationColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		iconJoinColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		iconMoveColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		iconHealAtColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		iconRearmAtColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		iconRefuelAtColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		iconRepairAtColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		iconSupportColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		missionColor1[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		missionColor2[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		customMarkColor[] = {0,0,0,0};
		boardColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		assaultColor[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])",0.5};
		meColor[] = {0,0,0,0.2};
		dimmMe = 0.2;
		dimmMeStartTime = 5;
		dimmMeEndTime = 10;
		dimmCmdStartTime = 5;
		dimmCmdEndTime = 10;
		explosiveColor[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])",0.75};
		enemyActiveColor[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
		freeLookActionColor[] = {0.9,0.9,0.9,0.4};
		freeLookActionColorSelected[] = {0.24,0.87,0,0.8};
		freeLookActionColorAvailable[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
		colorLocked[] = {1,0,0,1};
		dimm = 0.15;
		shadow = 2;
		infoTextShadow = 2;
		blinkingPeriod = 2.0;
		class Sign
		{
			height = 2.7;
			widthSector = 2.6;
			widthGroup = 2.5;
			widthUnit = 2.4;
		};
	};
	class PeripheralVision
	{
		cueTexture = "A3\ui_f\data\igui\cfg\PeripheralVision\cueTexture_gs.paa";
		bloodTexture = "A3\ui_f\data\igui\cfg\PeripheralVision\bloodTexture_ca.paa";
		bloodColor[] = {0,0,0,0};
		cueColor[] = {0,0,0,0};
		cueEnemyColor[] = {0,0,0,0};
		cueFriendlyColor[] = {0,0,0,0};
	};
	class HitZones
	{
		colorEmpty[] = {1,1,1,0.1};
		class TextureBase
		{
			x = 0;
			y = 0;
			w = 1;
			h = 1;
		};
		class AirplaneHull: TextureBase
		{
			type = 0;
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\hull.paa";
		};
		class HelicopterHull: TextureBase
		{
			type = 1;
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\hull.paa";
		};
		class HelicopterEng: TextureBase
		{
			type = 2;
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\eng.paa";
		};
		class HelicopterInst: TextureBase
		{
			type = 3;
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\inst.paa";
		};
		class HelicopterAtrq: TextureBase
		{
			type = 4;
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\atrq.paa";
		};
		class HelicopterMrot: TextureBase
		{
			type = 5;
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\mrot.paa";
		};
		class HelicopterWinch: TextureBase
		{
			type = 6;
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\slg.paa";
		};
		class CarHull: TextureBase
		{
			type = 7;
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\hull.paa";
		};
		class CarEng: TextureBase
		{
			type = 8;
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\eng.paa";
		};
		class CarFuel: TextureBase
		{
			type = 9;
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\fuel.paa";
		};
		class CarWhl: TextureBase
		{
			type = 10;
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\whl.paa";
		};
		class MotorcycleHull: TextureBase
		{
			type = 11;
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\hull.paa";
		};
		class MotorcycleEng: TextureBase
		{
			type = 12;
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\eng.paa";
		};
		class MotorcycleFuel: TextureBase
		{
			type = 13;
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\fuel.paa";
		};
		class MotorcycleWhl: TextureBase
		{
			type = 14;
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\whl.paa";
		};
		class TankHull: TextureBase
		{
			type = 15;
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\hull.paa";
		};
		class TankEng: TextureBase
		{
			type = 16;
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\eng.paa";
		};
		class TankGun: TextureBase
		{
			type = 17;
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\gun.paa";
		};
		class TankLtr: TextureBase
		{
			type = 18;
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\ltr.paa";
		};
		class TankRtr: TextureBase
		{
			type = 19;
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\rtr.paa";
		};
		class TankTrrt: TextureBase
		{
			type = 20;
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\trrt.paa";
		};
		class ShipEng: TextureBase
		{
			type = 21;
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\eng.paa";
		};
	};
	class CfgWeaponModeTextures
	{
		default = "#(argb,8,8,3)color(0,0,0,0)";
		semi = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\mode_1_ca.paa";
		burst = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\mode_3_ca.paa";
		fullAuto = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\mode_5_ca.paa";
	};
	class CfgStanceIndicatorTextures
	{
		textureProne = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_prone_ca.paa";
		textureProneAdjustDown = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_prone_down_ca.paa";
		textureProneAdjustUp = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_prone_up_ca.paa";
		textureProneAdjustLeft = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_prone_left_ca.paa";
		textureProneAdjustRight = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_prone_right_ca.paa";
		textureCrouch = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_crouch_ca.paa";
		textureCrouchAdjustDown = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_crouch_down_ca.paa";
		textureCrouchAdjustUp = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_crouch_up_ca.paa";
		textureCrouchAdjustLeft = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_crouch_left_ca.paa";
		textureCrouchAdjustRight = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_crouch_right_ca.paa";
		textureStand = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_stand_ca.paa";
		textureStandAdjustDown = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_stand_down_ca.paa";
		textureStandAdjustUp = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_stand_up_ca.paa";
		textureStandAdjustLeft = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_stand_left_ca.paa";
		textureStandAdjustRight = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_stand_right_ca.paa";
	};
};