class rifleman
{
	name    = "Rifleman";
	picture =  __EVAL(MCCPATH +"mcc\roleSelection\data\Rifleman.paa");
	minPlayersForKit = 0;
	maxKitsInGroup = 99;
	maxKitsInSide = 999;
	allowMg = 0;
	allowAT = 0;
	allowSniper = 0;
	allowPilot = 0;
	allowCrew = 0;

	class west
	{
		class primary
		{
			class rhs_weap_m4a1_carryhandle_mstock
			{
				unlockLevel = 0;
				cfgname = "rhs_weap_m4a1_carryhandle_mstock";
				magazines[]= {"30Rnd_556x45_Stanag",9,"30Rnd_556x45_Stanag_Tracer_Red",2};
				attachments1[]= {{0,""},{0,"FHQ_optic_AC11704"},{4,"FHQ_optic_AC12136"},{6,"FHQ_optic_ACOG"},{8,"FHQ_optic_HWS_G33"},{10,"FHQ_optic_AimM_BLK"}};
				attachments2[]= {{0,""},{9,"rhsusf_acc_nt4_black"}};
				attachments3[]= {{0,""},{1,"FHQ_acc_LLM01L"},{7,"FHQ_acc_ANPEQ15_black"}};
				attachments4[]= {{0,""},{3,"rhsusf_acc_grip2"},{6,"rhsusf_acc_grip1"},{9,"rhsusf_acc_harris_bipod"}};
			};

			class rhs_weap_m4a1_blockII_bk
			{
				unlockLevel = 11;
				cfgname = "rhs_weap_m4a1_blockII_bk";
				magazines[]= {"30Rnd_556x45_Stanag",9,"30Rnd_556x45_Stanag_Tracer_Red",2};
				attachments1[]= {{0,""},{0,"FHQ_optic_AC11704"},{4,"FHQ_optic_AC12136"},{6,"FHQ_optic_ACOG"},{8,"FHQ_optic_HWS_G33"},{10,"FHQ_optic_AimM_BLK"}};
				attachments2[]= {{0,""},{9,"rhsusf_acc_nt4_black"}};
				attachments3[]= {{0,""},{1,"FHQ_acc_LLM01L"},{7,"FHQ_acc_ANPEQ15_black"}};
				attachments4[]= {{0,""},{3,"rhsusf_acc_grip2"},{6,"rhsusf_acc_grip1"},{9,"rhsusf_acc_harris_bipod"}};
			};

			class rhs_weap_hk416d10
			{
				unlockLevel = 21;
				cfgname = "rhs_weap_hk416d10";
				magazines[]= {"30Rnd_556x45_Stanag",9,"30Rnd_556x45_Stanag_Tracer_Red",2};
				attachments1[]= {{0,""},{0,"FHQ_optic_AC11704"},{4,"FHQ_optic_AC12136"},{6,"FHQ_optic_ACOG"},{8,"FHQ_optic_HWS_G33"},{10,"FHQ_optic_AimM_BLK"}};
				attachments2[]= {{0,""},{9,"rhsusf_acc_nt4_black"}};
				attachments3[]= {{0,""},{1,"FHQ_acc_LLM01L"},{7,"FHQ_acc_ANPEQ15_black"}};
				attachments4[]= {{0,""},{3,"rhsusf_acc_grip2"},{6,"rhsusf_acc_grip1"},{9,"rhsusf_acc_harris_bipod"}};
			};

			class rhs_weap_mk18_bk
			{
				unlockLevel = 31;
				cfgname = "rhs_weap_mk18_bk";
				magazines[]= {"30Rnd_556x45_Stanag",9,"30Rnd_556x45_Stanag_Tracer_Red",2};
				attachments1[]= {{0,""},{0,"FHQ_optic_AC11704"},{4,"FHQ_optic_AC12136"},{6,"FHQ_optic_ACOG"},{8,"FHQ_optic_HWS_G33"},{10,"FHQ_optic_AimM_BLK"}};
				attachments2[]= {{0,""},{9,"rhsusf_acc_nt4_black"}};
				attachments3[]= {{0,""},{1,"FHQ_acc_LLM01L"},{7,"FHQ_acc_ANPEQ15_black"}};
				attachments4[]= {{0,""},{3,"rhsusf_acc_grip2"},{6,"rhsusf_acc_grip1"},{9,"rhsusf_acc_harris_bipod"}};
			};
		};

		class secondary
		{

		};

		class handgun
		{
			class none
			{
				unlockLevel = 0;
				cfgname = "";
				magazines[]= {};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Rook40_F
			{
				unlockLevel = 4;
				cfgname = "hgun_Rook40_F";
				magazines[]= {"16Rnd_9x21_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_L"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class rhsusf_weap_glock17g4
			{
				unlockLevel = 8;
				cfgname = "rhsusf_weap_glock17g4";
				magazines[]= {"16Rnd_9x21_Mag",2};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_ACPC2_F
			{
				unlockLevel = 12;
				cfgname = "hgun_ACPC2_F";
				magazines[]= {"9Rnd_45ACP_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_acp"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class rhsusf_weap_m9
			{
				unlockLevel = 16;
				cfgname = "rhsusf_weap_m9";
				magazines[]= {"16Rnd_9x21_Mag",2};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Pistol_heavy_01_F
			{
				unlockLevel = 16;
				cfgname = "hgun_Pistol_heavy_01_F";
				magazines[]= {"11Rnd_45ACP_Mag",2};
				attachments1[]= {{0,""},{4,"optic_MRD"}};
				attachments2[]= {{0,""},{2,"muzzle_snds_acp"}};
				attachments3[]= {};
				attachments4[]= {};
			};
		};

		items1[]={{0,""},{20,"Binocular", {}},{40,"Rangefinder", {}}};
		items2[]={{0,"SmokeShell", 2},{3,"MiniGrenade", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		items3[]={{0,"MCC_ammoBoxMag", 2},{3,"SmokeShell", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		generalItems[]= {{0,"ItemMap",1},{0,"ItemCompass",1},{0,"ItemWatch",1},{0,"tf_anprc148jem_3",1},{0,"FirstAidKit",2}};
		nightVision[]= {{0,""},{0,"NVGoggles_tna_F"},{20,"NVGogglesB_blk_F"}};
		headgear[]= {{0,"maritime_helmet_od"},{6,"maritime_helmet_tan"},{12,"rhsusf_opscore_ut_pelt_nsw_cam"},{18,"rhsusf_opscore_bk_pelt"}};
		googles[]= {{0,""},{0,"TRYK_Beard_BK"},{0,"TRYK_Beard"},{0,"TRYK_Beard_BW"},{0,"TRYK_Beard_Gr"},{0,"TRYK_Beard_BK3"},{0,"TRYK_Beard3"},{0,"TRYK_Beard_BW3"},{0,"TRYK_Beard_Gr3"},{0,"G_Combat_Goggles_tna_F"},{6,"G_Tactical_Black"},{13,"G_Balaclava_TI_blk_F"}};
		vests[]= {{0,"milgp_v_marciras_assaulter_belt_cb"},{9,"milgp_v_marciras_assaulter_belt_khk"},{13,"milgp_v_marciras_assaulter_belt_mc"},{19,"milgp_v_marciras_assaulter_belt_rgr"}};
		backpacks[]= {{0,"tf_anprc155_coyote"},{0,"tf_mr3000_bwmod"},{0,"tf_mr3000_multicam"},{0,"B_AssaultPack_tna_F"},{7,"B_Kitbag_mcamo"},{14,"B_Bergen_mcamo"},{18,"B_AssaultPack_blk"}};
		uniforms[]= {{0,"Gen3_Ranger"},{0,"Gen3_Tan"},{0,"Gen3_Multicam"},{8,"Gen3_aor1"},{15,"Gen3_Blk"}};
		insigna[]= {{0,""},{0,"111thID"},{0,"BI"},{0,"Curator"},{0,"MANW"}};
	};

	class east
	{
		class primary
		{
			class arifle_CTAR_blk_F
			{
				unlockLevel = 0;
				cfgname = "arifle_CTAR_blk_F";
				magazines[]= {"30Rnd_580x42_Mag_F",9,"30Rnd_580x42_Mag_Tracer_F",2};
				attachments1[]= {{0,""},{3,"optic_ACO_grn"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{9,"muzzle_snds_M"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};

			class arifle_Katiba_F
			{
				unlockLevel = 13;
				cfgname = "arifle_Katiba_F";
				magazines[]= {"30Rnd_65x39_caseless_green",9,"30Rnd_65x39_caseless_green_mag_Tracer",2};
				attachments1[]= {{0,""},{3,"optic_ACO_grn"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{9,"muzzle_snds_h"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};

			class arifle_ARX_blk_F
			{
				unlockLevel = 23;
				cfgname = "arifle_ARX_blk_F";
				magazines[]= {"30Rnd_65x39_caseless_green",9,"30Rnd_65x39_caseless_green_mag_Tracer",2};
				attachments1[]= {{0,""},{3,"optic_ACO_grn"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{9,"muzzle_snds_h"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};
		};

		class secondary
		{

		};

		class handgun
		{
			class none
			{
				unlockLevel = 0;
				cfgname = "";
				magazines[]= {};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Rook40_F
			{
				unlockLevel = 4;
				cfgname = "hgun_Rook40_F";
				magazines[]= {"16Rnd_9x21_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_L"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_P07_F
			{
				unlockLevel = 8;
				cfgname = "hgun_P07_F";
				magazines[]= {"16Rnd_9x21_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_L"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_ACPC2_F
			{
				unlockLevel = 12;
				cfgname = "hgun_ACPC2_F";
				magazines[]= {"9Rnd_45ACP_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_acp"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Pistol_heavy_02_F
			{
				unlockLevel = 16;
				cfgname = "hgun_Pistol_heavy_02_F";
				magazines[]= {"6Rnd_45ACP_Cylinder",2};
				attachments1[]= {{0,""},{2,"optic_Yorris"}};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Pistol_heavy_01_F
			{
				unlockLevel = 16;
				cfgname = "hgun_Pistol_heavy_01_F";
				magazines[]= {"11Rnd_45ACP_Mag",2};
				attachments1[]= {{0,""},{4,"optic_MRD"}};
				attachments2[]= {{0,""},{2,"muzzle_snds_acp"}};
				attachments3[]= {};
				attachments4[]= {};
			};
		};

		items1[]={{0,""},{20,"Binocular", {}},{40,"Rangefinder", {}}};
		items2[]={{0,"SmokeShell", 2},{3,"MiniGrenade", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		items3[]={{0,"MiniGrenade", 2},{3,"SmokeShell", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		generalItems[]= {{0,"ItemMap",1},{0,"ItemCompass",1},{0,"ItemWatch",1},{0,"ItemRadio",1},{0,"FirstAidKit",2}};
		nightVision[]= {{0,""},{0,"NVGoggles_tna_F"},{20,"O_NVGoggles_ghex_F"}};
		headgear[]= {{0,"H_HelmetO_ghex_F"},{12,"H_HelmetLeaderO_ghex_F"},{18,"H_HelmetO_ViperSP_ghex_F"}};
		googles[]= {{0,""},{0,"G_Combat_Goggles_tna_F"},{6,"G_Tactical_Black"},{13,"G_Balaclava_TI_blk_F"}};
		vests[]= {{0,"V_BandollierB_ghex_F"},{9,"V_HarnessO_ghex_F"},{13,"V_TacChestrig_grn_F"},{19,"V_TacVestIR_blk"}};
		backpacks[]= {{0,"B_FieldPack_ghex_F"},{7,"B_Carryall_ghex_F"},{14,"B_ViperHarness_ghex_F"},{18,"B_FieldPack_blk"}};
		uniforms[]= {{0,"U_O_T_Soldier_F"},{8,"U_O_CombatUniform_oucamo"},{15,"U_O_V_Soldier_Viper_F"}};
		insigna[]= {{0,""},{0,"GryffinRegiment"},{0,"BI"},{0,"Curator"},{0,"MANW"}};
	};

	class guer
	{
		class primary
		{
			class arifle_AK12_F
			{
				unlockLevel = 0;
				cfgname = "arifle_AK12_F";
				magazines[]= {"30Rnd_762x39_Mag_Green_F",9,"30Rnd_762x39_Mag_Green_F",2};
				attachments1[]= {{0,""},{3,"optic_Aco"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{9,"muzzle_snds_B"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};

			class arifle_Mk20_F
			{
				unlockLevel = 13;
				cfgname = "arifle_Mk20_F";
				magazines[]= {"30Rnd_556x45_Stanag",9,"30Rnd_556x45_Stanag_Tracer_Green",2};
				attachments1[]= {{0,""},{3,"optic_Aco"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{9,"muzzle_snds_M"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};

			class arifle_ARX_blk_F
			{
				unlockLevel = 23;
				cfgname = "arifle_ARX_blk_F";
				magazines[]= {"30Rnd_65x39_caseless_green",9,"30Rnd_65x39_caseless_green_mag_Tracer",2};
				attachments1[]= {{0,""},{3,"optic_ACO_grn"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{9,"muzzle_snds_h"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};
		};

		class secondary
		{

		};

		class handgun
		{
			class none
			{
				unlockLevel = 0;
				cfgname = "";
				magazines[]= {};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Rook40_F
			{
				unlockLevel = 4;
				cfgname = "hgun_Rook40_F";
				magazines[]= {"16Rnd_9x21_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_L"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_P07_F
			{
				unlockLevel = 8;
				cfgname = "hgun_P07_F";
				magazines[]= {"16Rnd_9x21_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_L"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_ACPC2_F
			{
				unlockLevel = 12;
				cfgname = "hgun_ACPC2_F";
				magazines[]= {"9Rnd_45ACP_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_acp"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Pistol_heavy_02_F
			{
				unlockLevel = 16;
				cfgname = "hgun_Pistol_heavy_02_F";
				magazines[]= {"6Rnd_45ACP_Cylinder",2};
				attachments1[]= {{0,""},{2,"optic_Yorris"}};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Pistol_heavy_01_F
			{
				unlockLevel = 16;
				cfgname = "hgun_Pistol_heavy_01_F";
				magazines[]= {"11Rnd_45ACP_Mag",2};
				attachments1[]= {{0,""},{4,"optic_MRD"}};
				attachments2[]= {{0,""},{2,"muzzle_snds_acp"}};
				attachments3[]= {};
				attachments4[]= {};
			};
		};

		items1[]={{0,""},{20,"Binocular", {}},{40,"Rangefinder", {}}};
		items2[]={{0,"SmokeShell", 2},{3,"MiniGrenade", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		items3[]={{0,"MiniGrenade", 2},{3,"SmokeShell", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		generalItems[]= {{0,"ItemMap",1},{0,"ItemCompass",1},{0,"ItemWatch",1},{0,"ItemRadio",1},{0,"FirstAidKit",2}};
		nightVision[]= {{0,""},{0,"NVGoggles"}};
		headgear[]= {{0,""},{12,"H_HelmetIA"},{18,"H_HelmetIA_camo"}};
		googles[]= {{0,""},{0,"G_Combat_Goggles_tna_F"},{6,"G_Tactical_Black"},{13,"G_Balaclava_TI_blk_F"}};
		vests[]= {{0,"V_BandollierB_ghex_F"},{9,"V_HarnessO_ghex_F"},{13,"V_TacChestrig_grn_F"},{19,"V_TacVestIR_blk"}};
		backpacks[]= {{0,"B_FieldPack_ghex_F"},{7,"B_Carryall_ghex_F"},{14,"B_ViperHarness_ghex_F"},{18,"B_FieldPack_blk"}};
		uniforms[]= {{0,"U_I_C_Soldier_Para_3_F"},{0,"U_I_C_Soldier_Para_2_F"},{8,"U_I_C_Soldier_Para_5_F"},{12,"U_B_GEN_Soldier_F"}};
		insigna[]= {{0,""},{0,"TFAegis"},{0,"BI"},{0,"Curator"},{0,"MANW"}};
	};
};