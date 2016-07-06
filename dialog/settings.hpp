class SettingsMenu
{
	idd = 2900;
	name = "SettingsMenu";
	movingEnable = 1;
	enableSimulation = 1;

	class controlsBackground {
		class RscTitleBackground : life_RscText {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
			x = 0.33 * safezoneW + safezoneX;
			y = 0.04 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.04 * safezoneH;
		};

		class RscMainBackground : life_RscText {
			colorBackground[] = {0,0,0,0.7};
			idc = -1;
			x = 0.33 * safezoneW + safezoneX;
			y = 0.08 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.25 * safezoneH;
		};

		class Title : life_RscTitle {
			idc = -1;
			colorBackground[] = {0,0,0,0};
			text = "$STR_SM_Title";
			x = 0.33 * safezoneW + safezoneX;
			y = 0.04 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.04 * safezoneH;
		};
		
		class PlayerTagsHeader : Life_RscText {
			idc = -1;
			text = "$STR_SM_PlayerTags";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			x = 0.335 * safezoneW + safezoneX;
			y = 0.205 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.04 * safezoneH;
		};

		class SideChatHeader : PlayerTagsHeader {
			idc = -1;
			text = "$STR_SM_SC";
			y = 0.244 * safezoneH + safezoneY;
		};

		class RevealNearestHeader : PlayerTagsHeader {
			idc = -1;
			text = "$STR_SM_RNObj";
			y = 0.285 * safezoneH + safezoneY;
		};
	};

	class controls {
		class VDonFoot : life_RscText {
			idc = -1;
			text = "$STR_SM_onFoot";
			x = 0.33 * safezoneW + safezoneX;
			y = 0.085 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.04 * safezoneH;
		};

		class VD_onfoot_slider : life_RscXSliderH {
			idc = 2901;
			text = "";
			onSliderPosChanged = "[0,_this select 1] call life_fnc_s_onSliderChange;";
			tooltip = "$STR_SM_ToolTip1";
			x = 0.385 * safezoneW + safezoneX;
			y = 0.085 * safezoneH + safezoneY;
			w = 0.22 * safezoneW;
			h = 0.04 * safezoneH;
		};

		class VD_onfoot_value : Life_RscEdit {
			idc = 2902;
			text = "";
			onChar = "[_this select 0, _this select 1,'ground',false] call life_fnc_s_onChar;";
			onKeyUp = "[_this select 0, _this select 1,'ground',true] call life_fnc_s_onChar;";
			x = 0.605 * safezoneW + safezoneX;
			y = 0.085 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.04 * safezoneH;
		};
		
		class VDinCar : life_RscText {
			idc = -1;
			text = "$STR_SM_inCar";
			x = 0.33 * safezoneW + safezoneX;
			y = 0.125 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.04 * safezoneH;
		};

		class VD_car_slider : life_RscXSliderH {
			idc = 2911;
			text = "";
			onSliderPosChanged = "[1,_this select 1] call life_fnc_s_onSliderChange;";
			tooltip = "$STR_SM_ToolTip2";
			x = 0.385 * safezoneW + safezoneX;
			y = 0.125 * safezoneH + safezoneY;
			w = 0.22 * safezoneW;
			h = 0.04 * safezoneH;
		};

		class VD_car_value : Life_RscEdit {
			idc = 2912;
			text = "";
			onChar = "[_this select 0, _this select 1,'vehicle',false] call life_fnc_s_onChar;";
			onKeyUp = "[_this select 0, _this select 1,'vehicle',true] call life_fnc_s_onChar;";
			x = 0.605 * safezoneW + safezoneX;
			y = 0.125 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.04 * safezoneH;
		};
		
		class VDinAir : life_RscText {
			idc = -1;
			text = "$STR_SM_inAir";
			x = 0.33 * safezoneW + safezoneX;
			y = 0.165 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.04 * safezoneH;
		};

		class VD_air_slider : life_RscXSliderH {
			idc = 2921;
			text = "";
			onSliderPosChanged = "[2,_this select 1] call life_fnc_s_onSliderChange;";
			tooltip = "$STR_SM_ToolTip3";
			x = 0.385 * safezoneW + safezoneX;
			y = 0.165 * safezoneH + safezoneY;
			w = 0.22 * safezoneW;
			h = 0.04 * safezoneH;
		};

		class VD_air_value : Life_RscEdit {
			idc = 2922;
			text = "";
			onChar = "[_this select 0, _this select 1,'air',false] call life_fnc_s_onChar;";
			onKeyUp = "[_this select 0, _this select 1,'air',true] call life_fnc_s_onChar;";
			x = 0.605 * safezoneW + safezoneX;
			y = 0.165 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.04 * safezoneH;
		};

		class PlayerTagsONOFF : Life_Checkbox {
			tooltip = "$STR_GUI_PlayTags";
			idc = 2970;
			sizeEx = 0.04;
			onCheckedChanged = "['tags',_this select 1] call life_fnc_s_onCheckedChange;";
			x = 0.485 * safezoneW + safezoneX;
			y = 0.215 * safezoneH + safezoneY;

		};

		class SideChatONOFF : PlayerTagsONOFF {
			idc = 2971;
			tooltip = "$STR_GUI_SideSwitch";
			onCheckedChanged = "['sidechat',_this select 1] call life_fnc_s_onCheckedChange;";
			y = 0.255 * safezoneH + safezoneY;
		};

		class RevealONOFF : PlayerTagsONOFF {
			idc = 2972;
			tooltip = "$STR_GUI_PlayerReveal";
			onCheckedChanged = "['objects',_this select 1] call life_fnc_s_onCheckedChange;";
			y = 0.295 * safezoneH + safezoneY;
		};

		class ButtonClose : life_RscButtonMenu {
			idc = -1;
			//shortcuts[] = {0x00050000 + 2};
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;";
			x = 0.56 * safezoneW + safezoneX;
			y = 0.33 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
		};
	};
};
