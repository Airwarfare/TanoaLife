#include "player_sys.sqf"

class playerSettings {

	idd = playersys_DIALOG;
	movingEnable = 1;
	enableSimulation = 1;
	
	class controlsBackground {
		class life_RscTitleBackground:life_RscText {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
			x = 0.25 * safezoneW + safezoneX;
			y = 0.04 * safezoneH + safezoneY;
			w = 0.5 * safezoneW;
			h = 0.04 * safezoneH;
		};
		
		class MainBackground:life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.25 * safezoneW + safezoneX;
			y = 0.08 * safezoneH + safezoneY;
			w = 0.5 * safezoneW;
			h = 0.335 * safezoneH;
		};
		
		class Title : life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "$STR_PM_Title";
			x = 0.25 * safezoneW + safezoneX;
			y = 0.04 * safezoneH + safezoneY;
			w = 0.5 * safezoneW;
			h = 0.04 * safezoneH;
		};
		
		class moneyStatusInfo : Life_RscStructuredText {
			idc = 2015;
			sizeEx = 0.020;
			text = "";
			x = 0.255 * safezoneW + safezoneX;
			y = 0.13 * safezoneH + safezoneY;
			w = 0.16 * safezoneW;
			h = 0.2 * safezoneH;
		};
		
		class PlayersName : Title {
			idc = carry_weight;
			style = 1;
			text = "";
		};
	};
	
	class controls {
		class itemHeader : Life_RscText {
			idc = -1;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			text = "$STR_PM_cItems";
			sizeEx = 0.04;
			x = 0.585 * safezoneW + safezoneX;
			y = 0.09 * safezoneH + safezoneY;
			w = 0.16 * safezoneW;
			h = 0.04 * safezoneH;
		};
		
		class licenseHeader : Life_RscText {
			idc = -1;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			text = "$STR_PM_Licenses";
			sizeEx = 0.04;
			x = 0.42 * safezoneW + safezoneX;
			y = 0.09 * safezoneH + safezoneY;
			w = 0.16 * safezoneW;
			h = 0.04 * safezoneH;
		};
		
		class moneySHeader : Life_RscText {
			idc = -1;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			text = "$STR_PM_MoneyStats";
			sizeEx = 0.04;
			x = 0.255 * safezoneW + safezoneX;
			y = 0.09 * safezoneH + safezoneY;
			w = 0.16 * safezoneW;
			h = 0.04 * safezoneH;
		};
	
		class itemList : life_RscListBox {
			idc = item_list;
			sizeEx = 0.030;
			x = 0.585 * safezoneW + safezoneX;
			y = 0.13 * safezoneH + safezoneY;
			w = 0.16 * safezoneW;
			h = 0.2 * safezoneH;
		};
		
		class moneyEdit : Life_RscEdit {
			idc = 2018;
			text = "1";
			sizeEx = 0.030;
			x = 0.255 * safezoneW + safezoneX;
			y = 0.33 * safezoneH + safezoneY;
			w = 0.16 * safezoneW;
			h = 0.02 * safezoneH;
		};
		
		class NearPlayers : Life_RscCombo {
			idc = 2022;
			x = 0.255 * safezoneW + safezoneX;
			y = 0.35 * safezoneH + safezoneY;
			w = 0.16 * safezoneW;
			h = 0.02 * safezoneH;
		};
		
		class moneyDrop : Life_RscButtonMenu {
			idc = 2001;
			text = "$STR_Global_Give";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call life_fnc_giveMoney";
			sizeEx = 0.025;
			x = 0.255 * safezoneW + safezoneX;
			y = 0.37 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.04 * safezoneH;
		};
		
		class itemEdit : Life_RscEdit {
			idc = item_edit;
			text = "1";
			sizeEx = 0.030;
			x = 0.585 * safezoneW + safezoneX;
			y = 0.33 * safezoneH + safezoneY;
			w = 0.16 * safezoneW;
			h = 0.02 * safezoneH;
		};
		
		class iNearPlayers : Life_RscCombo {
			idc = 2023;
			x = 0.585 * safezoneW + safezoneX;
			y = 0.35 * safezoneH + safezoneY;
			w = 0.16 * safezoneW;
			h = 0.02 * safezoneH;
		};
		
		/*
		Disabled till it can be redone
		class moneyInput: life_RscCombo {
			
			idc = money_value;
			
			x  = 0.02; y = 0.402;
			w = .1; h = .030;
		};
		*/
		
		class DropButton : life_RscButtonMenu {
			idc = 2002;
			text = "$STR_Global_Give";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call life_fnc_giveItem;";
			x = 0.585 * safezoneW + safezoneX;
			y = 0.37 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.04 * safezoneH;
		};
		
		class UseButton : life_RscButtonMenu {
			text = "$STR_Global_Use";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call life_fnc_useItem;";
			x = 0.635 * safezoneW + safezoneX;
			y = 0.37 * safezoneH + safezoneY;
			w = 0.04 * safezoneW;
			h = 0.04 * safezoneH;
		};
		
		class RemoveButton : life_RscButtonMenu {
			text = "$STR_Global_Remove";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call life_fnc_removeItem;";
			x = 0.675 * safezoneW + safezoneX;
			y = 0.37 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.04 * safezoneH;
		};
		
		/*
		Disabled till it can be redone
		class DropcButton : life_RscButtonMenu {

			text = "Drop Money";
			onButtonClick = "[] execVM 'player_system\money_fnc.sqf'";
			
			x = 0.13; y = 0.4;
			w = 0.135; h = 0.05;
			
		};
		*/
		
		class ButtonClose : life_RscButtonMenu {
			idc = -1;
			//shortcuts[] = {0x00050000 + 2};
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;";
			x = 0.65 * safezoneW + safezoneX;
			y = 0.455 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
		};
		
		class ButtonSettings : life_RscButtonMenu {
			idc = -1;
			text = "$STR_Global_Settings";
			onButtonClick = "[] call life_fnc_settingsMenu;";
			x = 0.65 * safezoneW + safezoneX;
			y = 0.415 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
		};
		
		class ButtonMyGang : Life_RscButtonMenu {
			idc = 2011;
			text = "$STR_PM_MyGang";
			onButtonClick = "if(isNil ""life_action_gangInUse"") then {if(isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
			x = 0.45 * safezoneW + safezoneX;
			y = 0.415 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
		};
		
		class Licenses_Menu : Life_RscControlsGroup {
			idc = -1;
			x = 0.42 * safezoneW + safezoneX;
			y = 0.13 * safezoneH + safezoneY;
			w = 0.16 * safezoneW;
			h = 0.28 * safezoneH;
			
			class Controls {
				class Life_Licenses : Life_RscStructuredText {
					idc = 2014;
					sizeEx = 0.020;
					text = "";
					x = 0;
					y = 0;
					w = 0.27; 
					h = 0.65;
				};
			};
		};
		
		class ButtonGangList : Life_RscButtonMenu {
			idc = 2012;
			text = "$STR_PM_WantedList";
			onButtonClick = "[] call life_fnc_wantedMenu";
			x = 0.45 * safezoneW + safezoneX;
			y = 0.415 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
		};
	
		class ButtonKeys : Life_RscButtonMenu {
			idc = 2013;
			text = "$STR_PM_KeyChain";
			onButtonClick = "createDialog ""Life_key_management"";";
			x = 0.35 * safezoneW + safezoneX;
			y = 0.415 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
		};
		
		class ButtonCell : Life_RscButtonMenu {
			idc = 2014;
			text = "$STR_PM_CellPhone";
			onButtonClick = "createDialog ""Life_cell_phone"";";
			x = 0.25 * safezoneW + safezoneX;
			y = 0.415 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
		};
		
		class ButtonAdminMenu : Life_RscButtonMenu {
			idc = 2021;
			text = "$STR_PM_AdminMenu";
			onButtonClick = "createDialog ""life_admin_menu"";";
			x = 0.25 * safezoneW + safezoneX;
			y = 0.455 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
		};
		
		class ButtonSyncData : life_RscButtonMenu {
			idc = -1;
			//shortcuts[] = {0x00050000 + 2};
			text = "$STR_PM_SyncData";
			onButtonClick = "[] call SOCK_fnc_syncData;";
			x = 0.55 * safezoneW + safezoneX;
			y = 0.415 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
		};
	};
};