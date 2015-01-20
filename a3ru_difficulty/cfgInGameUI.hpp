class CfgInGameUI
{
	imageCornerElement = "\A3\ui_f\data\igui\cfg\imageCornerElement_ca.paa";
	xboxStyle = 0;
	colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
	colorBackgroundCommand[] = {1,1,1,1};
	colorBackgroundHelp[] = {1,1,1,1};
	colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
	/*
	class IslandMap
	{
		colorCivilian[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
		colorEnemy[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
		colorFriendly[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
		colorNeutral[] = {"(profilenamespace getvariable ['Map_Civilian_R',0])","(profilenamespace getvariable ['Map_Civilian_G',1])","(profilenamespace getvariable ['Map_Civilian_B',1])","(profilenamespace getvariable ['Map_Civilian_A',0.8])"};
		colorUnknown[] = {"(profilenamespace getvariable ['Map_Unknown_R',0])","(profilenamespace getvariable ['Map_Unknown_G',1])","(profilenamespace getvariable ['Map_Unknown_B',1])","(profilenamespace getvariable ['Map_Unknown_A',0.8])"};
		shadow = 2;
		iconPlayer = "\A3RU_difficulty\empty.paa";
		iconCamera = "\A3RU_difficulty\empty.paa";
		iconSelect = "\A3RU_difficulty\empty.paa";
		iconSensor = "\A3RU_difficulty\empty.paa";
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
	*/
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
	class GroupInfo
	{
		class Semaphore{};
		imageDefaultWeapons = "\A3RU_difficulty\empty.paa";
		imageNoWeapons = "\A3RU_difficulty\empty.paa";
	};
	class CommandBar
	{
		left = "-20";
		top = "-20";
		width = "(36 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
		height = "(4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		imageDefaultWeapons = "\A3RU_difficulty\empty.paa";
		imageNoWeapons = "\A3RU_difficulty\empty.paa";
		imageCommander = "\A3RU_difficulty\empty.paa";
		imageDriver = "\A3RU_difficulty\empty.paa";
		imageGunner = "\A3RU_difficulty\empty.paa";
		imageCargo = "\A3RU_difficulty\empty.paa";
		dimm = 0.3;
		colorRedTeam[] = {1.0,0,0,1.0};
		colorBlueTeam[] = {0,0,1.0,1.0};
		colorGreenTeam[] = {0.259,0.463,0.149,1};
		colorYellowTeam[] = {0.8,0.8,0,1.0};
		colorWhiteTeam[] = {0.95,0.95,0.95,1};
		class prevPage
		{
			x = "-20";
			y = "-20";
			w = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			color[] = {0.259,0.463,0.149,1};
			texture = "#(argb,8,8,3)color(1,1,1,1)";
		};
		class nextPage
		{
			x = "-20";
			y = "-20";
			w = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			color[] = {0.259,0.463,0.149,1};
			texture = "#(argb,8,8,3)color(1,1,1,1)";
		};
		class UnitInfo
		{
			font = "FontMono";
			class VehicleNumberBackground
			{
				texture = "#(argb,8,8,3)color(1,1,1,1)";
				color[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
				x = "-20";
				y = "-20";
				w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class UnitNumberBackground
			{
				texture = "#(argb,8,8,3)color(1,1,1,1)";
				color[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
				x = "-20";
				y = "-20";
				w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class UnitNameBackground
			{
				textureNormal = "\A3RU_difficulty\empty.paa";
				texturePlayer = "\A3RU_difficulty\empty.paa";
				textureSelected = "\A3RU_difficulty\empty.paa";
				textureFocus = "\A3RU_difficulty\empty.paa";
				colorNormal[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",0.8};
				colorPlayer[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.4};
				colorFocus[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",0.8};
				colorSelected[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.8};
				x = "-20";
				y = "-20";
				w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				colorText[] = {1,1,1,0.3};
			};
			class CommandBackground
			{
				texture = "#(argb,8,8,3)color(1,1,1,1)";
				color[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
				x = "-20";
				y = "-20";
				w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class VehicleStatus
			{
				color[] = {0,0,0,0};
				colorDamaged[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])",0.8};
				colorNoAmmo[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])","(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])",0.6};
				colorNoFuel[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])","(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])",0.6};
				texture = "#(argb,8,8,3)color(1,1,1,1)";
				x = "-20";
				y = "-20";
				w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class UnitStatus
			{
				color[] = {0,0,0,0};
				colorWounded[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])",0.8};
				colorWoundedFade[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])",1};
				colorNoAmmo[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])","(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])",0.8};
				texture = "#(argb,8,8,3)color(1,1,1,1)";
				x = "-20";
				y = "-20";
				w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class UnitCombatMode
			{
				colorBlue[] = {1,0,0,0.5};
				colorGreen[] = {1,0,0,0.7};
				colorWhite[] = {1,0,0,0.7};
				colorYellow[] = {0,0,0,0};
				colorRed[] = {0,0,0,0};
				textureBlue = "\A3RU_difficulty\empty.paa";
				textureGreen = "\A3RU_difficulty\empty.paa";
				textureWhite = "\A3RU_difficulty\empty.paa";
				textureYellow = "\A3RU_difficulty\empty.paa";
				textureRed = "\A3RU_difficulty\empty.paa";
				text = "\A3RU_difficulty\empty.paa";
				x = "-20";
				y = "-20";
				w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				colorText[] = {1,0,0,1};
			};
			class UnitBehavior
			{
				colorCareless[] = {0,0,0,0};
				colorSafe[] = {0,0,0,0};
				colorAware[] = {0,0,0,0};
				colorCombat[] = {1,0.25,0,0.7};
				colorStealth[] = {0,0.8,1,0.7};
				textureMCareless = "\A3RU_difficulty\empty.paa";
				textureMSafe = "\A3RU_difficulty\empty.paa";
				textureMCombat = "\A3RU_difficulty\empty.paa";
				textureMYellow = "\A3RU_difficulty\empty.paa";
				textureMStealth = "\A3RU_difficulty\empty.paa";
				text = "\A3RU_difficulty\empty.paa";
				x = "-20";
				y = "-20";
				w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class GroupIcon
			{
				color[] = {1,1,1,1};
				x = "-20";
				y = "-20";
				w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class VehicleRole
			{
				color[] = {0,0,0,0.5};
				shadow = 0;
				x = "-20";
				y = "-20";
				w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class VehicleIcon
			{
				color[] = {1,1,1,1};
				shadow = 2;
				x = "-20";
				y = "-20";
				w = "1.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class UnitRank
			{
				color[] = {0,0,0,0.5};
				shadow = 0;
				x = "-20";
				y = "-20";
				w = "0.8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class UnitRole
			{
				color[] = {1,1,1,1};
				shadow = 2;
				x = "-20";
				y = "-20";
				w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class UnitSpecialRole
			{
				color[] = {1,1,1,1};
				shadow = 2;
				x = "-20";
				y = "-20";
				w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class VehicleNumberText
			{
				font = "PuristaMedium";
				shadow = 2;
				x = "-20";
				y = "-20";
				w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				colorText[] = {1,1,1,1};
				sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class UnitNumberText
			{
				font = "PuristaMedium";
				shadow = 2;
				x = "-20";
				y = "-20";
				w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				colorText[] = {1,1,1,1};
				sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class UnitName
			{
				font = "PuristaMedium";
				shadow = 1;
				x = "-20";
				y = "-20";
				w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				colorText[] = {1,1,1,1};
				sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class CommandText
			{
				font = "PuristaMedium";
				shadow = 1;
				x = "-20";
				y = "-20";
				w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				colorText[] = {1,1,1,1};
				sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
		};
	};
	class Cursor
	{
		font = "PuristaMedium";
		size = "0";
		activeWidth = 0.0392157;
		activeHeight = 0.0522876;
		activeMinimum = 1.1;
		activeMaximum = 1.1;
		select = "\A3RU_difficulty\empty.paa";
		leader = "\A3RU_difficulty\empty.paa";
		unitBleeding = "\A3RU_difficulty\empty.paa";
		unitInjured = "\A3RU_difficulty\empty.paa";
		unitHealer = "\A3RU_difficulty\empty.paa";
		unitUnconscious = "\A3RU_difficulty\empty.paa";
		iconBoardIn = "\A3RU_difficulty\empty.paa";
		iconBoardOut = "\A3RU_difficulty\empty.paa";
		iconInFormation = "\A3RU_difficulty\empty.paa";
		iconJoin = "\A3RU_difficulty\empty.paa";
		iconMove = "\A3RU_difficulty\empty.paa";
		iconHealAt = "\A3RU_difficulty\empty.paa";
		iconRearmAt = "\A3RU_difficulty\empty.paa";
		iconRefuelAt = "\A3RU_difficulty\empty.paa";
		iconRepairAt = "\A3RU_difficulty\empty.paa";
		iconCursorSupport = "\A3RU_difficulty\empty.paa";
		iconSupport = "\A3RU_difficulty\empty.paa";
		mission = "\A3RU_difficulty\empty.paa";
		customMark = "\A3RU_difficulty\empty.paa";
		board = "\A3RU_difficulty\empty.paa";
		assault = "\A3RU_difficulty\empty.paa";
		outArrow = "\A3RU_difficulty\empty.paa";
		move = "\A3RU_difficulty\empty.paa";
		selectOver = "\A3RU_difficulty\empty.paa";
		watch = "\A3RU_difficulty\empty.paa";
		attack = "\A3RU_difficulty\empty.paa";
		tactical = "\A3RU_difficulty\empty.paa";
		getIn = "\A3RU_difficulty\empty.paa";
		iconRepairVehicle = "\A3RU_difficulty\empty.paa";
		me = "\A3RU_difficulty\empty.paa";
		select_target = "\A3RU_difficulty\empty.paa";
		lock_target = "\A3RU_difficulty\empty.paa";
		gunner_lock = "\A3RU_difficulty\empty.paa";
		known_target = "\A3RU_difficulty\empty.paa";
		explosive = "\A3RU_difficulty\empty.paa";
		aim = "\A3RU_difficulty\empty.paa";
		weapon = "\A3RU_difficulty\empty.paa";
		iconComplex = "\A3RU_difficulty\empty.paa";
		freelook = "\A3RU_difficulty\empty.paa";
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
		customMarkColor[] = {1,1,1,1};
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
		cuetexture = "#(argb,8,8,3)color(1,1,1,0)";
		bloodtexture = "#(argb,8,8,3)color(1,1,1,0)";
		bloodColor[] = {1,1,1,0};
		cueColor[] = {1,1,1,0};
		cueEnemyColor[] = {0.706,0.0745,0.0196,0};
		cueFriendlyColor[] = {0.709,0.972,0.384,0};
	};
};