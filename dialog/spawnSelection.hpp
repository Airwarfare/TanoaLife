class life_spawn_selection
{
	idd = 38500;
	movingEnabled = false;
	enableSimulation = true;
	
	class controlsBackground
	{
		class MapView : Life_RscMapControl 
		{
			idc = 38502;
			x = -0.7125;
			y = -0.42;
			w = 2.425;
			h = 1.86;
			alphaFadeEndScale = 100;
			alphaFadeStartScale = 100;
			colorBackground[] = { 1, 1, 1, 1 };
			colorCountlines[] = { 0, 0, 0, 0 };
			colorCountlinesWater[] = { 0, 0, 0, 0 };
			colorForest[] = { 1, 1, 1, 1 };
			colorGrid[] = { 0, 0, 0, 0 };
			colorGridMap[] = { 0, 0, 0, 0 };
			colorMainCountlines[] = { 0, 0, 0, 0 };
			colorMainCountlinesWater[] = { 0, 0, 0, 0 };
			colorOutside[] = { 0.251, 0.275, 0.31, 1 };
			colorRocks[] = { 0, 0, 0, 0 };
			colorSea[] = { 0.467, 0.631, 0.851, 0.25 };
			drawObjects = 0;
			font = "PuristaMedium";
			fontGrid = "PuristaMedium";
			fontInfo = "PuristaMedium";
			fontLabel = "PuristaMedium";
			fontLevel = "PuristaMedium";
			fontNames = "PuristaMedium";
			fontUnits = "PuristaMedium";
			maxSatelliteAlpha = 1;
			ptsPerSquareCLn = 200;
			ptsPerSquareCost = 200;
			ptsPerSquareFor = 200;
			ptsPerSquareForEdge = 200;
			ptsPerSquareObj = 200;
			ptsPerSquareRoad = 200;
			ptsPerSquareTxt = 20;
			scaleDefault = 0.3;
			sizeExGrid = 0;
		};
		
		class life_RscTitleBackground : Life_RscText
		{
			colorBackground[] = {0,0,0,1};
			idc = -1;
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 0.1 * safezoneH;
		};
		
		class MainBackground : Life_RscText
		{
			colorBackground[] = {0,0,0,0.7};
			idc = -1;
			x = 0 * safezoneW + safezoneX;
			y = 0.1 * safezoneH + safezoneY;
			w = 0.25 * safezoneW;
			h = 1 * safezoneH;
		};
		
		class Title : Life_RscTitle
		{
			colorBackground[] = {0,0,0,0};
			idc = -1;
			text = "ForgeLife";
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 0.1 * safezoneH;
		};
		
		class SpawnPointTitle : Title
		{
			idc = 38501;
			style = 1;
			text = "";
		};
	};
	
	class controls
	{	
		class SpawnPointList: Life_RscListNBox
		{
			idc = 38510;
			text = "";
			sizeEx = "1 * 				( ( ( ( safezoneW / safezoneH ) ) / 1.2 ) / 25 )";
			sizeEx2 = "1 * 				( ( ( ( safezoneW / safezoneH ) ) / 1.2 ) / 25 )";
			rowHeight = "1.8 * 			( ( ( ( safezoneW / safezoneH ) ) / 1.2 ) / 25 )";
			coloumns[] = {0,0,0.9};
			drawSideArrows = false;
			idcLeft = -1;
			idcRight = -1;
			x = 0 * safezoneW + safezoneX;
			y = 0.1 * safezoneH + safezoneY;
			w = 0.25 * safezoneW;
			h = 0.80 * safezoneH;
			onLBSelChanged = "_this call life_fnc_spawnPointSelected;";
		};
		
		class spawnButton : Life_RscButtonMenu
		{
			idc = -1;
			text = "Select Spawnpoint";
			onButtonClick = "[] call life_fnc_spawnConfirm";
			x = 0 * safezoneW + safezoneX;
			y = 0.90 * safezoneH + safezoneY;
			w = 0.25 * safezoneW;
			h = 0.05 * safezoneH;
		};
		
		class lobbyButton: Life_RscButtonMenu
		{
			idc = 1007;
			text = "Return To Lobby";
			onButtonClick = "endmission'1';";
			x = 0 * safezoneW + safezoneX;
			y = 0.95 * safezoneH + safezoneY;
			w = 0.25 * safezoneW;
			h = 0.05 * safezoneH;
		};
	};
};