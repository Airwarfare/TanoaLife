#define ST_CENTER         0x02
/*
	Author: Daniel Stuart

	File: hud_stats.hpp
*/

class playerHUD {
	idd = -1;
	duration = 10e10;
	movingEnable = 0;
	fadein = 0;
	fadeout = 0;
	name = "playerHUD";
	onLoad = "uiNamespace setVariable ['playerHUD',_this select 0]";
	objects[] = {};
	controls[] = {
		Life_RscBackground_HUD,
		Life_RscProgress_HUDFood,
		Life_RscProgress_HUDHealth,
		Life_RscProgress_HUDWater,
		Life_RscText_HUDFood,
		Life_RscText_HUDHealth,
		Life_RscText_HUDWater,
		Life_RscBackground_Website,
		Life_RscBackground_TS
	};

	/* Background */
	class Life_RscBackground_HUD : Life_RscBackground {
		SizeEx = "((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		colorText[] = {1,1,1,1};
		text = "ForgeLife";
		colorBackground[] = {0,0,0,0.7};
		x = 0 * safezoneW + safezoneX;
		y = 0 * safezoneH + safezoneY;
		w = 1 * safezoneW;
		h = 0.04 * safezoneH;
	};
	
	class Life_RscBackground_Website : Life_RscBackground_HUD {
		idc = -1;
		SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		colorText[] = {1,1,1,1};
		text = "";
		colorBackground[] = {0,0,0,0};
		x = 0.9 * safezoneW + safezoneX;
		y = 0 * safezoneH + safezoneY;
		w = 1 * safezoneW;
		h = 0.02 * safezoneH;
	};
	
	class Life_RscBackground_TS : Life_RscBackground_HUD {
		idc = -1;
		SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		colorText[] = {1,1,1,1};
		text = "TS3: 74.91.114.24";
		colorBackground[] = {0,0,0,0};
		x = 0.9 * safezoneW + safezoneX;
		y = 0.02 * safezoneH + safezoneY;
		w = 1 * safezoneW;
		h = 0.02 * safezoneH;
	};

	/* Progress Bars */
	class LIFE_RscProgress_HUDCommon : Life_RscProgress {
		colorFrame[] = {0, 0, 0, 0.8};
		y = 0.005 * safezoneH + safezoneY;
		w = 0.05 * safezoneW;
		h = 0.03 * safezoneH;
	};

	class Life_RscProgress_HUDFood : LIFE_RscProgress_HUDCommon {
		idc = 2200;
		colorBar[] = {0,0.50,0,0.65};
		x = 0.415 * safezoneW + safezoneX;
	};

	class Life_RscProgress_HUDHealth : LIFE_RscProgress_HUDCommon {
		idc = 2201;
		colorBar[] = {0.85,0.05,0,0.65};
		x = 0.475 * safezoneW + safezoneX;
	};

	class Life_RscProgress_HUDWater : LIFE_RscProgress_HUDCommon {
		idc = 2202;
		colorBar[] = {0,0.25,0.65,0.65};
		x = 0.535 * safezoneW + safezoneX;
	};

	/* Texts */
	class Life_RscText_HUDCommon : Life_RscText {
		SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		style = ST_CENTER;
		y = 0.001 * safezoneH + safezoneY;
		w = 0.0462964 * safezoneW;
		h = 0.03 * safezoneH;
	};

	class Life_RscText_HUDFood : Life_RscText_HUDCommon {
		idc = 1200;
		text = "$STR_HUD_Food";
		x = 0.415 * safezoneW + safezoneX;
	};

	class Life_RscText_HUDHealth : Life_RscText_HUDCommon {
		idc = 1201;
		text = "$STR_HUD_Health";
		x = 0.475 * safezoneW + safezoneX;
	};

	class Life_RscText_HUDWater : Life_RscText_HUDCommon {
		idc = 1202;
		text = "$STR_HUD_Water";
		x = 0.535 * safezoneW + safezoneX;
	};
};
