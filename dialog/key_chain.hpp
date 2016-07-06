class Life_key_management {
	idd = 2700;
	name= "life_key_chain";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "[] spawn life_fnc_keyMenu;";
	
	class controlsBackground {
		class Life_RscTitleBackground:Life_RscText {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
			x = 0.33 * safezoneW + safezoneX;
			y = 0.04 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.04 * safezoneH;
		};
		
		class MainBackground:Life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.33 * safezoneW + safezoneX;
			y = 0.08 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.26 * safezoneH;
		};
	};
	
	class controls {
		class Title : Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "$STR_Keys_Title";
			x = 0.33 * safezoneW + safezoneX;
			y = 0.04 * safezoneH + safezoneY;
			w = 0.2 * safezoneW;
			h = 0.04 * safezoneH;
		};
		
		class KeyChainList : Life_RscListBox {
			idc = 2701;
			text = "";
			sizeEx = 0.035;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.085 * safezoneH + safezoneY;
			w = 0.32 * safezoneW;
			h = 0.19 * safezoneH;
		};
		
		class NearPlayers : Life_RscCombo {
			idc = 2702;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.275 * safezoneH + safezoneY;
			w = 0.32 * safezoneW;
			h = 0.02 * safezoneH;
		};
		
		class GiveKey : Life_RscButtonMenu {
			idc = 2703;
			text = "$STR_Keys_GiveKey";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call life_fnc_keyGive";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.295 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
		};
		
		class DropKey : life_RscButtonMenu {
			idc = -1;
			text = "$STR_Keys_DropKey";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call life_fnc_keyDrop";
			x = 0.435 * safezoneW + safezoneX;
			y = 0.295 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
		};
		
		class CloseButtonKey : Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;";
			x = 0.56 * safezoneW + safezoneX;
			y = 0.34 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
		};
	};
};