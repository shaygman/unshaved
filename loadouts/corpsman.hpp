class corpsman : rifleman
{
	name    = "Corpsman";
	picture =  __EVAL(MCCPATH +"mcc\roleSelection\data\Corpsman.paa");
	minPlayersForKit = 1;
	maxKitsInGroup = 2;
	maxKitsInSide = 999;
	allowMg = 0;
	allowAT = 0;
	allowSniper = 0;
	allowPilot = 0;
	allowCrew = 0;

	class west : west
	{

		generalItems[]= {{0,"ItemMap",1},{0,"ItemCompass",1},{0,"ItemWatch",1},{0,"tf_anprc148jem_3",1},{0,"Medikit", 1},{0,"FirstAidKit",10}};
		headgear[]= {{0,"H_Booniehat_khk"},{12,"H_Booniehat_mcamo"},{18,"H_HelmetB_light_black"}};
		vests[]= {{0,"milgp_v_marciras_medic_belt_cb"},{9,"milgp_v_marciras_medic_belt_khk"},{13,"milgp_v_marciras_medic_belt_mc"},{19,"milgp_v_marciras_medic_belt_rgr"}};
	};

	class east : east
	{
		generalItems[]= {{0,"ItemMap",1},{0,"ItemCompass",1},{0,"ItemWatch",1},{0,"tf_anprc148jem_3",1},{0,"Medikit", 1},{0,"FirstAidKit",10}};
		headgear[]= {{0,"H_Booniehat_khk"},{12,"H_Booniehat_mcamo"},{18,"H_HelmetSpecO_blk"}};
	};

	class guer : guer
	{
		generalItems[]= {{0,"ItemMap",1},{0,"ItemCompass",1},{0,"ItemWatch",1},{0,"tf_anprc148jem_3",1},{0,"Medikit", 1},{0,"FirstAidKit",10}};
		headgear[]= {{0,"H_Booniehat_khk"},{12,"H_Booniehat_mcamo"},{18,"H_HelmetIA_camo"}};
	};
};