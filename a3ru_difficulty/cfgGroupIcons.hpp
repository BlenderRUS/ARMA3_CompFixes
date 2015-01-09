class cfgGroupIcons
{
	class Flag
	{
		name = "$STR_CFG_MARKERS_FLAG";
		icon = "\a3ru_hideui\empty.paa";
		//texture = "\a3ru_hideui\empty.paa";
		texture = "";
		color[] = {1,0,0,1};
		size = 32;
		shadow = 0;
		scope = 1;
	};
	class Dummy: Flag
	{
		name = "$STR_DN_UNKNOWN";
	};
	class b_unknown: Flag
	{
		name = "$STR_A3_CfgMarkers_NATO_unknown";
		side = 1;
		scope = 2;
		markerClass = "NATO_BLUFOR";
	};
	class o_unknown: b_unknown
	{
		side = 0;
		markerClass = "NATO_OPFOR";
	};
	class n_unknown: b_unknown
	{
		markerClass = "NATO_Independent";
	};
	class b_inf: b_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_inf";
	};
	class o_inf: o_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_inf";
	};
	class n_inf: n_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_inf";
	};
	class b_motor_inf: b_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_motor_inf";
	};
	class o_motor_inf: o_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_motor_inf";
	};
	class n_motor_inf: n_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_motor_inf";
	};
	class b_mech_inf: b_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_mech_inf";
	};
	class o_mech_inf: o_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_mech_inf";
	};
	class n_mech_inf: n_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_mech_inf";
	};
	class b_armor: b_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_armor";
	};
	class o_armor: o_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_armor";
	};
	class n_armor: n_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_armor";
	};
	class b_recon: b_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_recon";
	};
	class o_recon: o_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_recon";
	};
	class n_recon: n_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_recon";
	};
	class b_air: b_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_air";
	};
	class o_air: o_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_air";
	};
	class n_air: n_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_air";
	};
	class b_plane: b_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_plane";
	};
	class o_plane: o_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_plane";
	};
	class n_plane: n_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_plane";
	};
	class b_uav: b_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_uav";
	};
	class o_uav: o_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_uav";
	};
	class n_uav: n_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_uav";
	};
	class b_naval: b_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_naval";
	};
	class o_naval: o_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_naval";
	};
	class n_naval: n_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_naval";
	};
	class b_med: b_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_med";
	};
	class o_med: o_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_med";
	};
	class n_med: n_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_med";
	};
	class b_art: b_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_art";
	};
	class o_art: o_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_art";
	};
	class n_art: n_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_art";
	};
	class b_mortar: b_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_mortar";
	};
	class o_mortar: o_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_mortar";
	};
	class n_mortar: n_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_mortar";
	};
	class b_hq: b_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_hq";
	};
	class o_hq: o_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_hq";
	};
	class n_hq: n_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_hq";
	};
	class b_support: b_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_support";
	};
	class o_support: o_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_support";
	};
	class n_support: n_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_support";
	};
	class b_maint: b_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_maint";
	};
	class o_maint: o_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_maint";
	};
	class n_maint: n_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_maint";
	};
	class b_service: b_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_service";
	};
	class o_service: o_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_service";
	};
	class n_service: n_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_service";
	};
	class b_installation: b_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_installation";
	};
	class o_installation: o_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_installation";
	};
	class n_installation: n_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_installation";
	};
	class u_installation: n_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_installation";
	};
	class c_unknown: b_unknown
	{
		side = 1;
		markerClass = "NATO_Civilian";
	};
	class c_car: c_unknown
	{
		name = "$STR_DN_CAR";
	};
	class c_ship: c_unknown
	{
		name = "$STR_DN_SHIP";
	};
	class c_air: c_unknown
	{
		name = "$STR_DN_HELICOPTER";
	};
	class c_plane: c_unknown
	{
		name = "$STR_DN_PLANE";
	};
	class group_0: b_unknown
	{
		name = "$STR_A3_CfgMarkers_NATO_size_0";
		markerClass = "NATO_Sizes";
		commander = "Corporal";
	};
	class group_1: group_0
	{
		name = "$STR_A3_CfgMarkers_NATO_size_1";
		commander = "Sergeant";
	};
	class group_2: group_0
	{
		name = "$STR_A3_CfgMarkers_NATO_size_2";
		commander = "Sergeant";
	};
	class group_3: group_0
	{
		name = "$STR_A3_CfgMarkers_NATO_size_3";
		commander = "Lieutenant";
	};
	class group_4: group_0
	{
		name = "$STR_A3_CfgMarkers_NATO_size_4";
		commander = "Captain";
	};
	class group_5: group_0
	{
		name = "$STR_A3_CfgMarkers_NATO_size_5";
		commander = "Colonel";
	};
	class group_6: group_0
	{
		name = "$STR_A3_CfgMarkers_NATO_size_6";
		commander = "Colonel";
	};
	class group_7: group_0
	{
		name = "$STR_A3_CfgMarkers_NATO_size_7";
		commander = "General";
	};
	class group_8: group_0
	{
		name = "$STR_A3_CfgMarkers_NATO_size_8";
		commander = "General";
	};
	class group_9: group_0
	{
		name = "$STR_A3_CfgMarkers_NATO_size_9";
		commander = "General";
	};
	class group_10: group_0
	{
		name = "$STR_A3_CfgMarkers_NATO_size_10";
		commander = "General";
	};
	class group_11: group_0
	{
		name = "$STR_A3_CfgMarkers_NATO_size_11";
		commander = "General";
	};
	class respawn_unknown: Flag
	{
		scope = 2;
		name = "$STR_A3_CfgMarkers_NATO_respawn_unknown";
		markerClass = "NATO_Respawn";
	};
	class respawn_inf: Flag
	{
		scope = 2;
		name = "$STR_A3_CfgMarkers_NATO_respawn_inf";
		markerClass = "NATO_Respawn";
	};
	class respawn_motor: Flag
	{
		scope = 2;
		name = "$STR_A3_CfgMarkers_NATO_respawn_motor";
		markerClass = "NATO_Respawn";
	};
	class respawn_armor: Flag
	{
		scope = 2;
		name = "$STR_A3_CfgMarkers_NATO_respawn_armor";
		markerClass = "NATO_Respawn";
	};
	class respawn_air: Flag
	{
		scope = 2;
		name = "$STR_A3_CfgMarkers_NATO_respawn_air";
		markerClass = "NATO_Respawn";
	};
	class respawn_plane: Flag
	{
		scope = 2;
		name = "$STR_A3_CfgMarkers_NATO_respawn_plane";
		markerClass = "NATO_Respawn";
	};
	class respawn_naval: Flag
	{
		scope = 2;
		name = "$STR_A3_CfgMarkers_NATO_respawn_naval";
		markerClass = "NATO_Respawn";
	};
	class respawn_para: Flag
	{
		scope = 2;
		name = "$STR_A3_CfgMarkers_NATO_respawn_para";
		markerClass = "NATO_Respawn";
	};
	class Empty
	{
		name = "$STR_CFG_MARKERS_EMPTY";
		markerClass = "System";
	};
	class EmptyIcon: Flag
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		scope = 0;
	};
	class Select: Flag
	{
		name = "$STR_CFG_MARKERS_SELECT";
		markerClass = "System";
	};
	class waypoint
	{
		name = "$STR_A3_CfgMarkers_waypoint_0";
	};
	class selector_selectable: waypoint
	{
		name = "$STR_A3_CfgMarkers_selector_selectable_0";
	};
	class selector_selectedEnemy: waypoint
	{
		name = "$STR_A3_CfgMarkers_selector_selectedEnemy_0";
	};
	class selector_selectedFriendly: waypoint
	{
		name = "$STR_A3_CfgMarkers_selector_selectedFriendly_0";
	};
	class selector_selectedMission: waypoint
	{
		name = "$STR_A3_CfgMarkers_selector_selectedMission_0";
	};
	class hc_selectable
	{
		name = "HC - Selectable";
		scope = 2;
	};
	class hc_selected
	{
		name = "HC - Selected";
		scope = 2;
	};
	class hc_selectedEnemy
	{
		name = "HC - Selected Enemy";
		scope = 2;
	};
	class badge
	{
		name = "Badge";
		scope = 2;
	};
	class GrpIcon_Default
	{
		name = "";
		scope = 2;
	};
	class GrpIcon_Selected
	{
		name = "";
		scope = 2;
	};
};