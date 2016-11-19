class at : rifleman
{
	name    = "Anti-Tank";
	picture =  __EVAL(MCCPATH +"mcc\roleSelection\data\AT.paa");
	minPlayersForKit = 1;
	maxKitsInGroup = 2;
	maxKitsInSide = 999;
	allowMg = 0;
	allowAT = 1;
	allowSniper = 0;
	allowPilot = 0;
	allowCrew = 0;

	class west : west
	{

		class secondary
		{
			class rhs_weap_smaw_green
			{
				unlockLevel = 0;
				cfgname = "rhs_weap_smaw_green";
				magazines[]= {"rhs_mag_smaw_HEAA",2,"rhs_mag_smaw_SR",2};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class rhs_weap_fim92
			{
				unlockLevel = 5;
				cfgname = "rhs_weap_fim92";
				magazines[]= {"rhs_fim92_mag",2};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class rhs_weap_fgm148
			{
				unlockLevel = 15;
				cfgname = "rhs_weap_fgm148";
				magazines[]= {"rhs_fgm148_magazine_AT",2};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};
		};

		vests[]= {{0,"milgp_v_marciras_assaulter_cb"},{9,"milgp_v_marciras_assaulter_khk"},{13,"milgp_v_marciras_assaulter_mc"},{19,"milgp_v_marciras_assaulter_rgr"}};
	};

	class east : east
	{
		class secondary
		{
			class launch_RPG32_F
			{
				unlockLevel = 0;
				cfgname = "launch_RPG32_F";
				magazines[]= {"RPG32_F",2};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class launch_B_Titan_F
			{
				unlockLevel = 15;
				cfgname = "launch_B_Titan_F";
				magazines[]= {"Titan_AA",2};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class launch_B_Titan_short_F
			{
				unlockLevel = 25;
				cfgname = "launch_B_Titan_short_F";
				magazines[]= {"Titan_AT",2};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};
		};
	};

	class guer : guer
	{
		class secondary
		{
			class launch_RPG7_F
			{
				unlockLevel = 0;
				cfgname = "launch_RPG7_F";
				magazines[]= {"RPG7_F",3};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class launch_B_Titan_F
			{
				unlockLevel = 15;
				cfgname = "launch_B_Titan_F";
				magazines[]= {"Titan_AA",2};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class launch_B_Titan_short_F
			{
				unlockLevel = 25;
				cfgname = "launch_B_Titan_short_F";
				magazines[]= {"Titan_AT",2};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};
		};
	};
};