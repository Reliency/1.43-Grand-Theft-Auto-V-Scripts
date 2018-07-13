#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	char* sLocal_47 = NULL;
	char* sLocal_48 = NULL;
	char* sLocal_49 = NULL;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	vector3 vLocal_51 = { 0f, 0f, 0f };
	int iLocal_52 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0,001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0,0375f;
	fLocal_26 = 0,17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	sLocal_47 = "CHECKPOINT_NORMAL";
	sLocal_48 = "CHECKPOINT_MISSED";
	sLocal_49 = "CHECKPOINT_PERFECT";
	vLocal_50 = { 1694,74f, 3276,502f, 41,2796f };
	vLocal_51 = { 8,79494f, 0,59893f, 154,8464f };
	unk_0x252CDD3D0F299441();
	unk_0x77779D3888D166DD(0);
	unk_0xDDE92CE7A708C841(0);
	unk_0x990A0EC8D6FEA4BB("prologue_DistantLights");
	unk_0x990A0EC8D6FEA4BB("prologue_LODLights");
	iLocal_52 = 0;
	bVar0 = func_41();
	if (unk_0xA850B4D4DF605133() || unk_0xFBD822E162BE9153())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		unk_0x0DE665A40969B80E();
	}
	unk_0xC216189F02ED8B79(0);
	func_40(joaat("mp_registration"), 1424);
	unk_0x7A0F3E22D109C816(joaat("mp_registration"));
	func_40(joaat("mp_fm_registration"), 1424);
	unk_0x7A0F3E22D109C816(joaat("mp_fm_registration"));
	func_40(joaat("tunables_registration"), 1424);
	unk_0x7A0F3E22D109C816(joaat("tunables_registration"));
	func_40(joaat("sc_lb_global_block"), 1424);
	unk_0x7A0F3E22D109C816(joaat("sc_lb_global_block"));
	func_40(joaat("mp_save_game_global_block"), 1424);
	unk_0x7A0F3E22D109C816(joaat("mp_save_game_global_block"));
	func_40(joaat("mp_prop_global_block"), 1424);
	unk_0x7A0F3E22D109C816(joaat("mp_prop_global_block"));
	func_40(joaat("mp_prop_special_global_block"), 1424);
	unk_0x7A0F3E22D109C816(joaat("mp_prop_special_global_block"));
	func_40(joaat("title_update_registration"), 1424);
	unk_0x7A0F3E22D109C816(joaat("title_update_registration"));
	func_40(-556768532, 1424);
	unk_0x7A0F3E22D109C816(-556768532);
	func_40(-1350801275, 1424);
	unk_0x7A0F3E22D109C816(-1350801275);
	Global_4267932 = 0;
	func_40(joaat("sp_dlc_registration"), 1424);
	unk_0x7A0F3E22D109C816(joaat("sp_dlc_registration"));
	func_40(joaat("sp_pilotschool_reg"), 1424);
	unk_0x7A0F3E22D109C816(joaat("sp_pilotschool_reg"));
	func_39();
	switch (iLocal_52)
	{
		case 0:
			func_40(joaat("standard_global_init"), 1424);
			unk_0x7A0F3E22D109C816(joaat("standard_global_init"));
			break;
	}
	system::wait(0);
	Global_70858 = 1;
	Global_2 = bVar0;
	unk_0xBB9A3C553EECB180(0f);
	switch (iLocal_52)
	{
		case 0:
			Global_2621550 = 0;
			Global_2621549 = 0;
			func_40(joaat("standard_global_reg"), 1424);
			unk_0x9D2418D7FC697249("standard_global_reg");
			while ((!unk_0xC80D31E4B587871C(Global_4267932, 0) || !unk_0xC80D31E4B587871C(Global_4267932, 1)) || !unk_0xC80D31E4B587871C(Global_4267932, 2))
			{
				if (!unk_0xC80D31E4B587871C(Global_4267932, 0))
				{
				}
				if (!unk_0xC80D31E4B587871C(Global_4267932, 1))
				{
				}
				if (!unk_0xC80D31E4B587871C(Global_4267932, 2))
				{
				}
				system::wait(0);
			}
			unk_0x31B1E8782FA99D89(&Global_104555, 1, 1);
			unk_0xC837DC226EC2B1B2(&Global_104555, "fSaveVersion");
			unk_0x2FAF2FF34EA133C4();
			if (Global_1)
			{
				Global_0 = Global_104555;
			}
			Global_104555 = 1,7f;
			if (Global_1)
			{
				if (Global_0 != 1,7f)
				{
					func_28(Global_0);
				}
			}
			break;
	}
	unk_0x31B1E8782FA99D89(&Global_2097152, 12131, 0);
	unk_0x2CA88710A9AD8B7A(&Global_2097152, 12131, "g_savedMPGlobals");
	iVar1 = 0;
	while (iVar1 < 1)
	{
		func_22(&(Global_2097152[iVar1 /*12130*/]), iVar1);
		func_20(&(Global_2097152[iVar1 /*12130*/]), iVar1);
		func_18(&(Global_2097152[iVar1 /*12130*/]), iVar1);
		func_14(&(Global_2097152[iVar1 /*12130*/]), iVar1);
		func_12(&(Global_2097152[iVar1 /*12130*/]), iVar1);
		func_11(&(Global_2097152[iVar1 /*12130*/]), iVar1);
		func_10(&(Global_2097152[iVar1 /*12130*/]), iVar1);
		func_3(&(Global_2097152[iVar1 /*12130*/]), iVar1);
		iVar1++;
	}
	unk_0x7834ADE84E15496C();
	unk_0x2FAF2FF34EA133C4();
	iVar2 = 12131;
	iVar3 = unk_0x21A4A9DA822C2141(0);
	if (iVar2 != iVar3)
	{
	}
	if (!unk_0x71662C6CE5512901() && !unk_0xDAD3B438A9B2C9A2())
	{
		unk_0xB3C50717667CC83E(0);
	}
	unk_0x08B2B14B13EB2B03(0);
	unk_0xDDE92CE7A708C841(0);
	func_2();
	func_1();
	unk_0x96A3D9A8A4C7AFD4();
}

void func_1()//Position - 0x3E7
{
	Global_30[0] = unk_0xC0765AFBFA616644(-1680,49f, -929,44f, -0,462531f, "vbca_tunnel1");
	Global_30[1] = unk_0xC0765AFBFA616644(-1562,04f, -876,91f, -0,471913f, "vbca_tunnel2");
	Global_30[2] = unk_0xC0765AFBFA616644(-1429,65f, -823,211f, -0,432763f, "vbca_tunnel3");
	Global_30[3] = unk_0xC0765AFBFA616644(-1316,9f, -843,515f, 1,43639f, "vbca_tunnel4");
	Global_30[4] = unk_0xC0765AFBFA616644(-1249,67f, -896,27f, 0,293292f, "vbca_tunnel5");
	Global_30[5] = unk_0xC0765AFBFA616644(-38,9818f, -570,534f, 28,4812f, "v_31_tun_01");
	Global_30[6] = unk_0xC0765AFBFA616644(481,908f, -577,602f, 2,41908f, "v_31_newtunnel1");
	Global_30[7] = unk_0xC0765AFBFA616644(1029,02f, -260,955f, 48,2681f, "v_31_newtun5");
	Global_30[8] = unk_0xC0765AFBFA616644(1022,25f, -205,648f, 42,8956f, "v_31_newtun4b");
	Global_30[9] = unk_0xC0765AFBFA616644(823,852f, -299,823f, 4,54864f, "v_31_newtun3");
	Global_30[0] = unk_0xC0765AFBFA616644(615,395f, -409,282f, -1,57599f, "v_31_newtun2");
	Global_30[11] = unk_0xC0765AFBFA616644(-1190,58f, -685,387f, 11,0753f, "sm20_tun4");
	Global_30[12] = unk_0xC0765AFBFA616644(-1292,36f, -730,629f, 11,0934f, "sm20_tun3");
	Global_30[13] = unk_0xC0765AFBFA616644(-1411,97f, -759,518f, 15,5455f, "sm20_tun2");
	Global_30[14] = unk_0xC0765AFBFA616644(-1531,56f, -762,391f, 15,3451f, "sm20_tun1");
	Global_30[15] = unk_0xC0765AFBFA616644(558,653f, -1486,49f, 21,4096f, "sc1_rd_inttunshort");
	Global_30[16] = unk_0xC0765AFBFA616644(569,673f, -1920,17f, 21,1009f, "sc1_rd_inttun3b_end");
	Global_30[17] = unk_0xC0765AFBFA616644(512,412f, -1908,55f, 21,2086f, "sc1_rd_inttun3b");
	Global_30[18] = unk_0xC0765AFBFA616644(434,343f, -1945,27f, 17,3936f, "sc1_rd_inttun3");
	Global_30[19] = unk_0xC0765AFBFA616644(513,914f, -2009,82f, 21,1486f, "sc1_rd_inttun2b_end");
	Global_30[20] = unk_0xC0765AFBFA616644(465,139f, -2025,49f, 19,4406f, "sc1_rd_inttun2b");
	Global_30[21] = unk_0xC0765AFBFA616644(406,938f, -1978,14f, 16,3512f, "sc1_rd_inttun2");
	Global_30[22] = unk_0xC0765AFBFA616644(319,321f, -1896,97f, 22,4086f, "sc1_rd_inttun1");
	Global_30[23] = unk_0xC0765AFBFA616644(-573,473f, -580,793f, 25,3082f, "kt1_04_roadtunnel_int");
	Global_30[24] = unk_0xC0765AFBFA616644(-675,628f, -606,272f, 25,3078f, "kt1_03_carpark_int");
	Global_30[25] = unk_0xC0765AFBFA616644(1314,63f, -904,059f, 53,0877f, "id2_21_a_tun5");
	Global_30[26] = unk_0xC0765AFBFA616644(1248,64f, -773,6f, 44,5493f, "id2_21_a_tun4");
	Global_30[27] = unk_0xC0765AFBFA616644(1213,45f, -597,799f, 37,7533f, "id2_21_a_tun3");
	Global_30[28] = unk_0xC0765AFBFA616644(1083,25f, -502,542f, 34,6573f, "id2_21_a_tun2");
	Global_30[29] = unk_0xC0765AFBFA616644(926,428f, -488,737f, 33,8564f, "id2_21_a_tun1");
	Global_30[30] = unk_0xC0765AFBFA616644(732,663f, -2486,45f, 11,0686f, "id1_11_tunnel8_int");
	Global_30[31] = unk_0xC0765AFBFA616644(749,494f, -2364,79f, 16,2255f, "id1_11_tunnel7_int");
	Global_30[32] = unk_0xC0765AFBFA616644(758,957f, -2260,08f, 23,4637f, "id1_11_tunnel6_int");
	Global_30[33] = unk_0xC0765AFBFA616644(769,889f, -2124,24f, 21,8223f, "id1_11_tunnel5_int");
	Global_30[34] = unk_0xC0765AFBFA616644(789,138f, -1963,58f, 20,6408f, "id1_11_tunnel4_int");
	Global_30[35] = unk_0xC0765AFBFA616644(815,852f, -1832,2f, 22,9671f, "id1_11_tunnel3_int");
	Global_30[36] = unk_0xC0765AFBFA616644(829,752f, -1718,51f, 20,4594f, "id1_11_tunnel2_int");
	Global_30[37] = unk_0xC0765AFBFA616644(829,845f, -1718,51f, 20,1823f, "id1_11_tunnel1_int");
	Global_30[38] = unk_0xC0765AFBFA616644(274,441f, -636,403f, 29,0854f, "dt1_rd1_tun3");
	Global_30[39] = unk_0xC0765AFBFA616644(142,198f, -581,121f, 31,2974f, "dt1_rd1_tun2");
	Global_30[40] = unk_0xC0765AFBFA616644(204,925f, -601,567f, 29,3757f, "dt1_rd1_tun");
	Global_30[41] = unk_0xC0765AFBFA616644(2571,05f, 3907,95f, 41,1896f, "cs4_rwayb_tunnelint");
	Global_30[42] = unk_0xC0765AFBFA616644(-493,613f, 4275,55f, 89,1677f, "cs3_03railtunnel_int4");
	Global_30[43] = unk_0xC0765AFBFA616644(-476,018f, 4201,55f, 87,9392f, "cs3_03railtunnel_int3");
	Global_30[44] = unk_0xC0765AFBFA616644(-457,748f, 4125,51f, 86,1208f, "cs3_03railtunnel_int2");
	Global_30[45] = unk_0xC0765AFBFA616644(-442,948f, 4064,86f, 84,1041f, "cs3_03railtunnel_int1");
	Global_30[46] = unk_0xC0765AFBFA616644(2159,62f, 5995,87f, 51,2999f, "cs2_roadsb_tunnel_03");
	Global_30[47] = unk_0xC0765AFBFA616644(2250,3f, 5915,56f, 49,6273f, "cs2_roadsb_tunnel_02");
	Global_30[48] = unk_0xC0765AFBFA616644(2341,18f, 5814,9f, 46,7075f, "cs2_roadsb_tunnel_01");
	Global_30[49] = unk_0xC0765AFBFA616644(-537,422f, 4613,09f, 89,7512f, "cs1_14brailway6");
	Global_30[50] = unk_0xC0765AFBFA616644(-540,452f, 4719,74f, 89,7576f, "cs1_14brailway5");
	Global_30[51] = unk_0xC0765AFBFA616644(-543,783f, 4821,95f, 89,7357f, "cs1_14brailway4");
	Global_30[52] = unk_0xC0765AFBFA616644(-546,036f, 4923,02f, 89,8919f, "cs1_14brailway3");
	Global_30[53] = unk_0xC0765AFBFA616644(-546,265f, 4999,07f, 90,8104f, "cs1_14brailway2");
	Global_30[54] = unk_0xC0765AFBFA616644(-539,261f, 5077,03f, 91,6235f, "cs1_14brailway1");
	Global_30[55] = unk_0xC0765AFBFA616644(-183,656f, 4664,52f, 130,5f, "cs1_12_tunnel03_int");
	Global_30[56] = unk_0xC0765AFBFA616644(-273,86f, 4752,12f, 138,21f, "cs1_12_tunnel02_int");
	Global_30[57] = unk_0xC0765AFBFA616644(-410,302f, 4860,98f, 144,864f, "cs1_12_tunnel01_int");
	Global_30[58] = unk_0xC0765AFBFA616644(-2596,83f, 3088,87f, 15,4225f, "ch1_roadsdint_tun2");
	Global_30[59] = unk_0xC0765AFBFA616644(-2583,04f, 3268,07f, 13,3157f, "ch1_roadsdint_tun1");
	Global_30[60] = unk_0xC0765AFBFA616644(-179,51f, -180,189f, 43,6251f, "bt1_04_carpark");
}

void func_2()//Position - 0xB04
{
	Global_143070 = 1;
	Global_143071 = 1;
}

void func_3(var uParam0, int iParam1)//Position - 0xB16
{
	func_9(uParam0, iParam1);
	func_8(uParam0, iParam1);
	func_7(uParam0, iParam1);
	func_6(uParam0, iParam1);
	func_5(uParam0, iParam1);
	func_4(uParam0, iParam1);
}

void func_4(var uParam0, int iParam1)//Position - 0xB4E
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_DATE_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_12103.f_19), 8, &cVar0);
	unk_0x279233C417CD5326(&(uParam0->f_12103.f_19[0 /*7*/]), 7, "TEMPSTAT_DATE");
	unk_0xB679C575E2F1040D(&(uParam0->f_12103.f_19[0 /*7*/]), "TEMPSTAT_DATE.year");
	unk_0xB679C575E2F1040D(&(uParam0->f_12103.f_19[0 /*7*/].f_1), "TEMPSTAT_DATE.month");
	unk_0xB679C575E2F1040D(&(uParam0->f_12103.f_19[0 /*7*/].f_2), "TEMPSTAT_DATE.day");
	unk_0xB679C575E2F1040D(&(uParam0->f_12103.f_19[0 /*7*/].f_3), "TEMPSTAT_DATE.hour");
	unk_0xB679C575E2F1040D(&(uParam0->f_12103.f_19[0 /*7*/].f_4), "TEMPSTAT_DATE.minute");
	unk_0xB679C575E2F1040D(&(uParam0->f_12103.f_19[0 /*7*/].f_5), "TEMPSTAT_DATE.seconds");
	unk_0xB679C575E2F1040D(&(uParam0->f_12103.f_19[0 /*7*/].f_6), "TEMPSTAT_DATE.Milliseconds");
	unk_0x7834ADE84E15496C();
	unk_0xDB379536EE67C8D1();
}

void func_5(var uParam0, int iParam1)//Position - 0xC18
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_VECTOR_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_12103.f_15), 4, &cVar0);
	unk_0x279233C417CD5326(&(uParam0->f_12103.f_15[0 /*3*/]), 3, "TEMPSTAT_VEC");
	unk_0xC837DC226EC2B1B2(&(uParam0->f_12103.f_15[0 /*3*/]), "TEMPSTAT_VEC.x");
	unk_0xC837DC226EC2B1B2(&(uParam0->f_12103.f_15[0 /*3*/].f_1), "TEMPSTAT_VEC.y");
	unk_0xC837DC226EC2B1B2(&(uParam0->f_12103.f_15[0 /*3*/].f_2), "TEMPSTAT_VEC.z");
	unk_0x7834ADE84E15496C();
	unk_0xDB379536EE67C8D1();
}

void func_6(var uParam0, int iParam1)//Position - 0xC91
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_STRING_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_12103.f_6), 9, &cVar0);
	unk_0x5AA26CCA525F32F2(&(uParam0->f_12103.f_6[0 /*8*/]), "TEMPSTAT_LABEL");
	unk_0xDB379536EE67C8D1();
}

void func_7(var uParam0, int iParam1)//Position - 0xCCC
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_BOOL_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_12103.f_4), 2, &cVar0);
	unk_0x923172C8E770C7A7(&(uParam0->f_12103.f_4[0]), "TEMPSTAT_BOOL");
	unk_0xDB379536EE67C8D1();
}

void func_8(var uParam0, int iParam1)//Position - 0xD06
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_FLOAT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_12103.f_2), 2, &cVar0);
	unk_0xC837DC226EC2B1B2(&(uParam0->f_12103.f_2[0]), "TEMPSTAT_FLOAT");
	unk_0xDB379536EE67C8D1();
}

void func_9(var uParam0, int iParam1)//Position - 0xD40
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_INT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_12103), 2, &cVar0);
	unk_0xB679C575E2F1040D(&(uParam0->f_12103[0]), "TEMPSTAT_INT1");
	unk_0xDB379536EE67C8D1();
}

void func_10(var uParam0, int iParam1)//Position - 0xD76
{
	vector3 vVar0[24];
	int iVar1;
	struct<4> Var2;
	char cVar3[16];
	char cVar4[16];
	char cVar5[16];
	char cVar6[16];
	
	StringCopy(&cVar0, "MP_ATM_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	unk_0x279233C417CD5326(&(uParam0->f_11953), 150, &cVar0);
	unk_0xB679C575E2F1040D(&(uParam0->f_11953), "MPATM_CARET_");
	iVar1 = 0;
	StringCopy(&Var2, "MPATMLOGVAL", 16);
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_11953.f_1), 17, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar3 = { Var2 };
		StringIntConCat(&cVar3, iVar1, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_11953.f_1[iVar1]), &cVar3);
		iVar1++;
	}
	unk_0xDB379536EE67C8D1();
	StringCopy(&Var2, "MPATMLOGSCRS", 16);
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_11953.f_18), 97, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar4 = { Var2 };
		StringIntConCat(&cVar4, iVar1, 16);
		unk_0x97D63BC97C2AA32F(&(uParam0->f_11953.f_18[iVar1 /*6*/]), &cVar4);
		iVar1++;
	}
	unk_0xDB379536EE67C8D1();
	StringCopy(&Var2, "MPATMLOGACT", 16);
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_11953.f_115), 17, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar5 = { Var2 };
		StringIntConCat(&cVar5, iVar1, 16);
		unk_0x8802E9442FF78325(&(uParam0->f_11953.f_115[iVar1]), &cVar5);
		iVar1++;
	}
	unk_0xDB379536EE67C8D1();
	StringCopy(&Var2, "MPATMLOGDAT", 16);
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_11953.f_132), 17, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar6 = { Var2 };
		StringIntConCat(&cVar6, iVar1, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_11953.f_132[iVar1]), &cVar6);
		iVar1++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x923172C8E770C7A7(&(uParam0->f_11953.f_149), "mpAnyVecBought");
	unk_0x7834ADE84E15496C();
}

void func_11(var uParam0, int iParam1)//Position - 0xEF0
{
	struct<6> Var0;
	char cVar1[32];
	int iVar2;
	
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	unk_0x279233C417CD5326(&(uParam0->f_11712), 241, &Var0);
	unk_0x6F255D03073FEB93(&(uParam0->f_11712), "BOUNTY_GAMERH64_1");
	unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_1), "BOUNTY_GAMERH64_2");
	unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_2), "BOUNTY_GAMERH64_3");
	unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_3), "BOUNTY_GAMERH64_4");
	unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_4), "BOUNTY_GAMERH64_5");
	unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_5), "BOUNTY_GAMERH64_6");
	unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_6), "BOUNTY_GAMERH64_7");
	unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_7), "BOUNTY_GAMERH64_8");
	unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_8), "BOUNTY_GAMERH64_9");
	unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_9), "BOUNTY_GAMERH64_10");
	unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_10), "BOUNTY_GAMERH64_11");
	unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_11), "BOUNTY_GAMERH64_12");
	unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_12), "BOUNTY_GAMERH64_13");
	unk_0xB679C575E2F1040D(&(uParam0->f_11712.f_13), "BOUNTY_TIME");
	unk_0xB679C575E2F1040D(&(uParam0->f_11712.f_14), "BOUNTY_VALUE");
	StringConCat(&Var0, "_GH", 24);
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_11712.f_15), 209, &Var0);
	iVar2 = 0;
	while (iVar2 < 16)
	{
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_1", 32);
		unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_15[iVar2 /*13*/]), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_2", 32);
		unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_15[iVar2 /*13*/].f_1), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_3", 32);
		unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_15[iVar2 /*13*/].f_2), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_4", 32);
		unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_15[iVar2 /*13*/].f_3), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_5", 32);
		unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_15[iVar2 /*13*/].f_4), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_6", 32);
		unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_15[iVar2 /*13*/].f_5), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_7", 32);
		unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_15[iVar2 /*13*/].f_6), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_8", 32);
		unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_15[iVar2 /*13*/].f_7), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_9", 32);
		unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_15[iVar2 /*13*/].f_8), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_10", 32);
		unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_15[iVar2 /*13*/].f_9), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_11", 32);
		unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_15[iVar2 /*13*/].f_10), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_12", 32);
		unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_15[iVar2 /*13*/].f_11), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_13", 32);
		unk_0x6F255D03073FEB93(&(uParam0->f_11712.f_15[iVar2 /*13*/].f_12), &cVar1);
		iVar2++;
	}
	unk_0xDB379536EE67C8D1();
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	StringConCat(&Var0, "_TIM", 24);
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_11712.f_224), 17, &Var0);
	iVar2 = 0;
	while (iVar2 < 16)
	{
		MemCopy(&cVar1, {Var0}, 8);
		StringIntConCat(&cVar1, iVar2, 32);
		unk_0xB679C575E2F1040D(&(uParam0->f_11712.f_224[iVar2]), &cVar1);
		iVar2++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x7834ADE84E15496C();
}

void func_12(var uParam0, int iParam1)//Position - 0x1316
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MP_GENERAL_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_13(&(uParam0->f_7676), &cVar0);
}

void func_13(var uParam0, char* sParam1)//Position - 0x1337
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	char cVar3[64];
	int iVar4;
	int iVar5;
	char cVar6[16];
	char cVar7[16];
	char cVar8[16];
	char cVar9[16];
	char cVar10[16];
	
	unk_0x279233C417CD5326(uParam0, 4036, sParam1);
	unk_0xB679C575E2F1040D(uParam0, "CASH_GIVEN_TOTAL");
	unk_0xB679C575E2F1040D(&(uParam0->f_1), "CASH_GIVEN_TIME");
	unk_0xB679C575E2F1040D(&(uParam0->f_2), "LAST_SAVED_CAR");
	unk_0xB679C575E2F1040D(&(uParam0->f_3), "CURRENT_PROP_VALUE");
	unk_0xB679C575E2F1040D(&(uParam0->f_11), "iNewVehPurchased");
	unk_0xB679C575E2F1040D(&(uParam0->f_4), "WHEELIE_TIMER");
	unk_0xB679C575E2F1040D(&(uParam0->f_5), "WHEELIE_UPDATES");
	unk_0xB679C575E2F1040D(&(uParam0->f_6), "WHEELIE_TIME");
	unk_0x923172C8E770C7A7(&(uParam0->f_7), "GRAB_TIME");
	unk_0xB679C575E2F1040D(&(uParam0->f_8), "iLastSoldVehicleTime");
	unk_0xB679C575E2F1040D(&(uParam0->f_9), "ilasttimeplayed");
	unk_0xB679C575E2F1040D(&(uParam0->f_10), "iSaveCoupons");
	unk_0xB679C575E2F1040D(&(uParam0->f_12), "iLastBruciePillReminder");
	unk_0xB679C575E2F1040D(&(uParam0->f_13), "iLastSecVanReminder");
	unk_0xB679C575E2F1040D(&(uParam0->f_14), "iLastBountyReminder");
	unk_0xB679C575E2F1040D(&(uParam0->f_15), "iLastParaReminder");
	unk_0xB679C575E2F1040D(&(uParam0->f_16), "iLastCrateDropReminder");
	unk_0xB679C575E2F1040D(&(uParam0->f_17), "iLastGangAttackReminder");
	unk_0xB679C575E2F1040D(&(uParam0->f_18), "iLastImpExpReminder");
	unk_0xB679C575E2F1040D(&(uParam0->f_19), "iLastInsuranceReminder");
	unk_0xB679C575E2F1040D(&(uParam0->f_20), "iLastSurvivalReminder");
	unk_0xB679C575E2F1040D(&(uParam0->f_21), "iLastBikerBackupReminder");
	unk_0xB679C575E2F1040D(&(uParam0->f_22), "iLastVagosBackupReminder");
	unk_0xB679C575E2F1040D(&(uParam0->f_23), "iLastLesterVehReminder");
	unk_0xB679C575E2F1040D(&(uParam0->f_24), "iLastPersonalVehDeliveryReminder");
	unk_0xB679C575E2F1040D(&(uParam0->f_25), "iLastPegasusVehicleReminder");
	unk_0xB679C575E2F1040D(&(uParam0->f_26), "iLastMerryweatherReminder");
	unk_0xB679C575E2F1040D(&(uParam0->f_27), "iLastLesterHelpReminder");
	unk_0xB679C575E2F1040D(&(uParam0->f_28), "iLastLesterReqJobReminder");
	unk_0xB679C575E2F1040D(&(uParam0->f_29), "iLastGeraldReqJobReminder");
	unk_0xB679C575E2F1040D(&(uParam0->f_30), "iLastSimeonReqJobReminder");
	unk_0xB679C575E2F1040D(&(uParam0->f_31), "iLastMartinReqJobReminder");
	unk_0xB679C575E2F1040D(&(uParam0->f_32), "iLastRonReqJobReminder");
	unk_0xB679C575E2F1040D(&(uParam0->f_33), "iRecentlyPassedMissionBitset");
	unk_0xB679C575E2F1040D(&(uParam0->f_34), "iRecentlyPassedMissionTime");
	unk_0xB679C575E2F1040D(&(uParam0->f_35), "iLastImportExportDelTime");
	unk_0xB679C575E2F1040D(&(uParam0->f_36), "iLastImportExportListTime");
	unk_0xB679C575E2F1040D(&(uParam0->f_37), "iMyLastImportExportListDay");
	unk_0xB679C575E2F1040D(&(uParam0->f_38), "iVehicleWebsiteReminderTime");
	unk_0x923172C8E770C7A7(&(uParam0->f_39), "bDefaultClothesSet");
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_40), 6, "CLOTHES");
	iVar0 = 0;
	while (iVar0 < uParam0->f_40)
	{
		StringCopy(&Var1, "CLOTHES", 16);
		StringIntConCat(&Var1, iVar0, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_40[iVar0]), &Var1);
		iVar0++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_46), 1225, "CARMODS");
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		StringCopy(&Var1, "CARMODS", 16);
		StringIntConCat(&Var1, iVar0, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_46[iVar0]), &Var1);
		iVar0++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0xB679C575E2F1040D(&(uParam0->f_1271), "iLastCrewCharWasIn");
	unk_0xB679C575E2F1040D(&(uParam0->f_1272), "iStripperUnlockedBS");
	unk_0xB679C575E2F1040D(&(uParam0->f_1273), "iGeneralBS");
	unk_0xB679C575E2F1040D(&(uParam0->f_1274), "iCarsModifiedTimeStamp");
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_1275), 10, "GOLF_fLongestDriveHole");
	iVar2 = 0;
	while (iVar2 < uParam0->f_1275)
	{
		StringCopy(&cVar3, "fLongestDriveHole_", 64);
		StringIntConCat(&cVar3, iVar2, 64);
		unk_0xC837DC226EC2B1B2(&(uParam0->f_1275[iVar2]), &cVar3);
		iVar2++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_1285), 10, "GOLF_fLongestPuttHole");
	iVar2 = 0;
	while (iVar2 < uParam0->f_1285)
	{
		StringCopy(&cVar3, "fLongestPuttHole_", 64);
		StringIntConCat(&cVar3, iVar2, 64);
		unk_0xC837DC226EC2B1B2(&(uParam0->f_1285[iVar2]), &cVar3);
		iVar2++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0xB679C575E2F1040D(&(uParam0->f_1295), "GOLF_iBestRound");
	unk_0xC837DC226EC2B1B2(&(uParam0->f_1296), "GOLF_fLongestDrive");
	unk_0xC837DC226EC2B1B2(&(uParam0->f_1297), "GOLF_fLongestPutt");
	unk_0xB679C575E2F1040D(&(uParam0->f_1298), "iShareLJCashTotal");
	unk_0xB679C575E2F1040D(&(uParam0->f_1299), "iShareLJCashTime");
	unk_0xB679C575E2F1040D(&(uParam0->f_1300), "iReceiveLJCashTotal");
	unk_0xB679C575E2F1040D(&(uParam0->f_1301), "iReceiveLJCashTime");
	unk_0xB679C575E2F1040D(&(uParam0->f_1302), "LAST_ACC_PROP");
	unk_0xB679C575E2F1040D(&(uParam0->f_1303), "MULTI1_PROP_VAL");
	unk_0xB679C575E2F1040D(&(uParam0->f_1317), "LAST_ACC_SMPLINT");
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_1304), 13, "PROP_ARY_VAL");
	iVar4 = 0;
	while (iVar4 < uParam0->f_1304)
	{
		StringCopy(&Var1, "PROP_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_1304[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0xB679C575E2F1040D(&(uParam0->f_1318), "KR_PATCH_UPDATE");
	iVar4 = 0;
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_2674), 919, "DLC_MODS");
	iVar4 = 0;
	while (iVar4 < uParam0->f_2674)
	{
		StringCopy(&Var1, "DLC_MODS_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_2674[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	iVar4 = 0;
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_3593), 211, "DLC_SUPERMODS");
	iVar4 = 0;
	while (iVar4 < uParam0->f_3593)
	{
		StringCopy(&Var1, "DLC_SMODS_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_3593[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_1319), 274, "OUTFIT_CompDraw");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CompDraw", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x2CA88710A9AD8B7A(&(uParam0->f_1319[iVar4 /*13*/]), 13, &Var1);
		iVar5 = 0;
		while (iVar5 < 12)
		{
			StringCopy(&Var1, "CompDraw", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			unk_0xB679C575E2F1040D(&(uParam0->f_1319[iVar4 /*13*/][iVar5]), &Var1);
			iVar5++;
		}
		unk_0xDB379536EE67C8D1();
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_1593), 274, "OUTFIT_CompTex");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CompTex", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x2CA88710A9AD8B7A(&(uParam0->f_1593[iVar4 /*13*/]), 13, &Var1);
		iVar5 = 0;
		while (iVar5 < 12)
		{
			StringCopy(&Var1, "CompTex", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			unk_0xB679C575E2F1040D(&(uParam0->f_1593[iVar4 /*13*/][iVar5]), &Var1);
			iVar5++;
		}
		unk_0xDB379536EE67C8D1();
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_1867), 211, "OUTFIT_PropID");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "PropID", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x2CA88710A9AD8B7A(&(uParam0->f_1867[iVar4 /*10*/]), 10, &Var1);
		iVar5 = 0;
		while (iVar5 < 9)
		{
			StringCopy(&Var1, "PropID", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			unk_0xB679C575E2F1040D(&(uParam0->f_1867[iVar4 /*10*/][iVar5]), &Var1);
			iVar5++;
		}
		unk_0xDB379536EE67C8D1();
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_2078), 211, "OUTFIT_PropTex");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "PropTex", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x2CA88710A9AD8B7A(&(uParam0->f_2078[iVar4 /*10*/]), 10, &Var1);
		iVar5 = 0;
		while (iVar5 < 9)
		{
			StringCopy(&Var1, "PropTex", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			unk_0xB679C575E2F1040D(&(uParam0->f_2078[iVar4 /*10*/][iVar5]), &Var1);
			iVar5++;
		}
		unk_0xDB379536EE67C8D1();
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_2289), 22, "OUTFIT_Stored");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "Stored", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x923172C8E770C7A7(&(uParam0->f_2289[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_2311), 22, "OUTFIT_CrewTatA");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalA", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x923172C8E770C7A7(&(uParam0->f_2311[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_2333), 22, "OUTFIT_CrewTatB");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalB", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x923172C8E770C7A7(&(uParam0->f_2333[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_2355), 22, "OUTFIT_CrewTatC");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalC", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x923172C8E770C7A7(&(uParam0->f_2355[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_2377), 22, "OUTFIT_CrewTatD");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalD", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x923172C8E770C7A7(&(uParam0->f_2377[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_2399), 22, "OUTFIT_CrewTatE");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalE", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x923172C8E770C7A7(&(uParam0->f_2399[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_2421), 22, "OUTFIT_CrewTatF");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalF", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x923172C8E770C7A7(&(uParam0->f_2421[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_2612), 22, "OUTFIT_Shirt");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "ShirtDecal", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_2612[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_2443), 169, "OUTFIT_Name");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "Name", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x5AA26CCA525F32F2(&(uParam0->f_2443[iVar4 /*8*/]), &Var1);
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_2634), 40, "LAST_JobGamer");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastJobG64_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_1", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_2634[iVar4 /*13*/]), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_2", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_2634[iVar4 /*13*/].f_1), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_3", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_2634[iVar4 /*13*/].f_2), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_4", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_2634[iVar4 /*13*/].f_3), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_5", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_2634[iVar4 /*13*/].f_4), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_6", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_2634[iVar4 /*13*/].f_5), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_7", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_2634[iVar4 /*13*/].f_6), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_8", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_2634[iVar4 /*13*/].f_7), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_9", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_2634[iVar4 /*13*/].f_8), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_10", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_2634[iVar4 /*13*/].f_9), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_11", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_2634[iVar4 /*13*/].f_10), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_12", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_2634[iVar4 /*13*/].f_11), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_13", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_2634[iVar4 /*13*/].f_12), &cVar6);
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x923172C8E770C7A7(&(uParam0->f_3804), "DO_CompletedObjectives");
	unk_0x923172C8E770C7A7(&(uParam0->f_3805), "DO_LoggedInToday");
	unk_0xB679C575E2F1040D(&(uParam0->f_3806), "DO_xValue");
	unk_0xB679C575E2F1040D(&(uParam0->f_3807), "DO_LastHistoryLength");
	unk_0xB679C575E2F1040D(&(uParam0->f_3808), "DO_LastResetTime");
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_3809), 10, "DO_Objectives");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "Objective", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_3809[iVar4 /*3*/]), &Var1);
		StringCopy(&Var1, "Completed", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x923172C8E770C7A7(&(uParam0->f_3809[iVar4 /*3*/].f_1), &Var1);
		StringCopy(&Var1, "Initial", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_3809[iVar4 /*3*/].f_2), &Var1);
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_3819), 25, "DO_History");
	iVar4 = 0;
	while (iVar4 < 24)
	{
		StringCopy(&Var1, "History", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_3819[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_3844), 49, "LAST_JobGamer_TL");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastJobTL_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar7 = { Var1 };
		StringConCat(&cVar7, "_1", 16);
		unk_0x66398CA5DB38AEA5(&(uParam0->f_3844[iVar4 /*16*/]), &cVar7);
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_3893), 11, "BGSAVEINT");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&Var1, "BGSAVEINT", 16);
		StringIntConCat(&Var1, iVar0, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_3893[iVar0]), &Var1);
		iVar0++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_3904), 3, "PROPLIB");
	iVar0 = 0;
	while (iVar0 < uParam0->f_3904)
	{
		StringCopy(&Var1, "PROPLIB", 16);
		StringIntConCat(&Var1, iVar0, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_3904[iVar0]), &Var1);
		iVar0++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_3907), 40, "LAST_GOGamer");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastGOG64_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_1", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3907[iVar4 /*13*/]), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_2", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3907[iVar4 /*13*/].f_1), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_3", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3907[iVar4 /*13*/].f_2), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_4", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3907[iVar4 /*13*/].f_3), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_5", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3907[iVar4 /*13*/].f_4), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_6", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3907[iVar4 /*13*/].f_5), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_7", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3907[iVar4 /*13*/].f_6), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_8", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3907[iVar4 /*13*/].f_7), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_9", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3907[iVar4 /*13*/].f_8), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_10", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3907[iVar4 /*13*/].f_9), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_11", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3907[iVar4 /*13*/].f_10), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_12", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3907[iVar4 /*13*/].f_11), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_13", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3907[iVar4 /*13*/].f_12), &cVar8);
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_3947), 40, "LAST_GOJobGamer");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastGJG64_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_1", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3947[iVar4 /*13*/]), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_2", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3947[iVar4 /*13*/].f_1), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_3", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3947[iVar4 /*13*/].f_2), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_4", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3947[iVar4 /*13*/].f_3), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_5", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3947[iVar4 /*13*/].f_4), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_6", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3947[iVar4 /*13*/].f_5), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_7", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3947[iVar4 /*13*/].f_6), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_8", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3947[iVar4 /*13*/].f_7), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_9", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3947[iVar4 /*13*/].f_8), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_10", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3947[iVar4 /*13*/].f_9), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_11", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3947[iVar4 /*13*/].f_10), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_12", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3947[iVar4 /*13*/].f_11), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_13", 16);
		unk_0x6F255D03073FEB93(&(uParam0->f_3947[iVar4 /*13*/].f_12), &cVar9);
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_3987), 49, "LAST_GOJobGamer_TL");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastGJTL_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar10 = { Var1 };
		StringConCat(&cVar10, "_1", 16);
		unk_0x66398CA5DB38AEA5(&(uParam0->f_3987[iVar4 /*16*/]), &cVar10);
		iVar4++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0xDB379536EE67C8D1();
}

void func_14(var uParam0, int iParam1)//Position - 0x24D5
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MP_SAVED_CARAPP", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_15(&(uParam0->f_5568), &cVar0, iParam1);
}

void func_15(var uParam0, char* sParam1, int iParam2)//Position - 0x24F8
{
	struct<8> Var0;
	int iVar1;
	
	unk_0x279233C417CD5326(uParam0, 2108, sParam1);
	unk_0x2CA88710A9AD8B7A(uParam0, 1886, "CAR_APP_DATA");
	iVar1 = 0;
	while (iVar1 < 145)
	{
		StringCopy(&Var0, "CARAPP_DATA_", 64);
		StringIntConCat(&Var0, iVar1, 64);
		func_17(uParam0[iVar1 /*13*/], &Var0);
		iVar1++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x7834ADE84E15496C();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_1927), 146, "CAR_HIDDEN");
	iVar1 = 0;
	while (iVar1 < 145)
	{
		StringCopy(&Var0, "CAR_HIDDEN", 64);
		StringIntConCat(&Var0, iVar1, 64);
		unk_0x923172C8E770C7A7(&(uParam0->f_1927[iVar1]), &Var0);
		iVar1++;
	}
	unk_0xDB379536EE67C8D1();
	func_16(&(uParam0->f_1886), "CAR_APP_ORDER");
	StringCopy(&Var0, "bMultiplayerDataWiped", 64);
	StringIntConCat(&Var0, iParam2, 64);
	unk_0x923172C8E770C7A7(&(uParam0->f_2073), &Var0);
	StringCopy(&Var0, "bCarAppPlateSet", 64);
	StringIntConCat(&Var0, iParam2, 64);
	unk_0x923172C8E770C7A7(&(uParam0->f_2075), &Var0);
	StringCopy(&Var0, "bDeleteCarData", 64);
	StringIntConCat(&Var0, iParam2, 64);
	unk_0x923172C8E770C7A7(&(uParam0->f_2074), &Var0);
	StringCopy(&Var0, "iCarAppPlateBack", 64);
	StringIntConCat(&Var0, iParam2, 64);
	unk_0xB679C575E2F1040D(&(uParam0->f_2080), &Var0);
	StringCopy(&Var0, "tlCarAppPlateText", 64);
	StringIntConCat(&Var0, iParam2, 64);
	unk_0x0DDD63E9253703DD(&(uParam0->f_2076), &Var0);
	StringCopy(&Var0, "iOrderCount", 64);
	StringIntConCat(&Var0, iParam2, 64);
	unk_0xB679C575E2F1040D(&(uParam0->f_2081), &Var0);
	StringCopy(&Var0, "iOrderVehicle", 64);
	StringIntConCat(&Var0, iParam2, 64);
	unk_0xB679C575E2F1040D(&(uParam0->f_2082), &Var0);
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_2083), 11, "SAVED_VEH_SLOT");
	iVar1 = 0;
	while (iVar1 < 10)
	{
		StringCopy(&Var0, "VEH_SLOT", 64);
		StringIntConCat(&Var0, iVar1, 64);
		unk_0xB679C575E2F1040D(&(uParam0->f_2083[iVar1]), &Var0);
		iVar1++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_2094), 11, "SAVED_VEH_PRIO");
	iVar1 = 0;
	while (iVar1 < 10)
	{
		StringCopy(&Var0, "VEH_PRIO", 64);
		StringIntConCat(&Var0, iVar1, 64);
		unk_0xB679C575E2F1040D(&(uParam0->f_2094[iVar1]), &Var0);
		iVar1++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0xB679C575E2F1040D(&(uParam0->f_2105), "LAST_USED");
	unk_0xB679C575E2F1040D(&(uParam0->f_2106), "NEW_SAVED");
	unk_0x923172C8E770C7A7(&(uParam0->f_2107), "SETUP_INIT");
}

void func_16(var uParam0, char* sParam1)//Position - 0x26F9
{
	unk_0x279233C417CD5326(uParam0, 41, sParam1);
	unk_0x8802E9442FF78325(uParam0, "Model");
	unk_0xB679C575E2F1040D(&(uParam0->f_1), "iColourID1");
	unk_0xB679C575E2F1040D(&(uParam0->f_2), "iColourID2");
	unk_0xB679C575E2F1040D(&(uParam0->f_3), "iColour1Group");
	unk_0xB679C575E2F1040D(&(uParam0->f_4), "iColour2Group");
	unk_0xB679C575E2F1040D(&(uParam0->f_5), "iWindowTint");
	unk_0xB679C575E2F1040D(&(uParam0->f_6), "iTyreSmokeR");
	unk_0xB679C575E2F1040D(&(uParam0->f_7), "iTyreSmokeG");
	unk_0xB679C575E2F1040D(&(uParam0->f_8), "iTyreSmokeB");
	unk_0xB679C575E2F1040D(&(uParam0->f_9), "iEngine");
	unk_0xB679C575E2F1040D(&(uParam0->f_10), "iBrakes");
	unk_0xB679C575E2F1040D(&(uParam0->f_11), "iWheels");
	unk_0xB679C575E2F1040D(&(uParam0->f_12), "iWheelType");
	unk_0xB679C575E2F1040D(&(uParam0->f_13), "iExhaust");
	unk_0xB679C575E2F1040D(&(uParam0->f_14), "iSuspension");
	unk_0xB679C575E2F1040D(&(uParam0->f_15), "iArmour");
	unk_0xB679C575E2F1040D(&(uParam0->f_16), "iHorn");
	unk_0xB679C575E2F1040D(&(uParam0->f_17), "iLights");
	unk_0x923172C8E770C7A7(&(uParam0->f_18), "bBulletProofTyres");
	unk_0xB679C575E2F1040D(&(uParam0->f_19), "iTurbo");
	unk_0xB679C575E2F1040D(&(uParam0->f_20), "iTyreSmoke");
	unk_0x0DDD63E9253703DD(&(uParam0->f_21), "tlPlateText");
	unk_0xB679C575E2F1040D(&(uParam0->f_25), "iPlateBack");
	unk_0xB679C575E2F1040D(&(uParam0->f_26), "UID");
	unk_0xB679C575E2F1040D(&(uParam0->f_27), "Cost");
	unk_0x0DDD63E9253703DD(&(uParam0->f_28), "tlPlateText_pending");
	unk_0xB679C575E2F1040D(&(uParam0->f_32), "iPlateBack_pending");
	unk_0x923172C8E770C7A7(&(uParam0->f_33), "bProcessOrder");
	unk_0x923172C8E770C7A7(&(uParam0->f_36), "bOrderPending");
	unk_0x923172C8E770C7A7(&(uParam0->f_35), "bOrderReceivedOnBoot");
	unk_0x923172C8E770C7A7(&(uParam0->f_34), "bOrderForPlayerVehicle");
	unk_0x923172C8E770C7A7(&(uParam0->f_37), "bCheckPlateProfanity");
	unk_0x923172C8E770C7A7(&(uParam0->f_40), "bOrderPaidFor");
	unk_0x923172C8E770C7A7(&(uParam0->f_38), "bSCProfanityFailed");
	unk_0x923172C8E770C7A7(&(uParam0->f_39), "bOrderFailedFunds");
	unk_0x7834ADE84E15496C();
}

void func_17(var uParam0, char* sParam1)//Position - 0x28B1
{
	int iVar0;
	char cVar1[16];
	
	unk_0x279233C417CD5326(uParam0, 13, sParam1);
	unk_0x8802E9442FF78325(uParam0, "Model");
	unk_0xB679C575E2F1040D(&(uParam0->f_1), "iColourID1");
	unk_0xB679C575E2F1040D(&(uParam0->f_2), "iColourID2");
	unk_0xB679C575E2F1040D(&(uParam0->f_9), "iModCountWheels");
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_3), 6, "iHornHash");
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&cVar1, "iHornHash", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_3[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x923172C8E770C7A7(&(uParam0->f_10), "bSendDataToCloud");
	unk_0x923172C8E770C7A7(&(uParam0->f_11), "bDeleteData");
	unk_0x923172C8E770C7A7(&(uParam0->f_12), "bUpdateMods");
	unk_0x7834ADE84E15496C();
}

void func_18(var uParam0, int iParam1)//Position - 0x2958
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MP_PROPERTY_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_19(&(uParam0->f_5506), &cVar0);
}

void func_19(var uParam0, char* sParam1)//Position - 0x2979
{
	int iVar0;
	char cVar1[16];
	
	unk_0x279233C417CD5326(uParam0, 62, sParam1);
	unk_0x923172C8E770C7A7(uParam0, "TV_ON");
	unk_0xB679C575E2F1040D(&(uParam0->f_1), "TV_CHANNEL_ID");
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_2), 3, "RADIO_ON");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RADIO_ON_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x923172C8E770C7A7(&(uParam0->f_2[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_5), 3, "RADIO_STATION");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RDO_STA_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_5[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x923172C8E770C7A7(&(uParam0->f_8), "GARAGE_TV_ON");
	unk_0xB679C575E2F1040D(&(uParam0->f_9), "GARAGE_TV_CHANNEL_ID");
	unk_0x923172C8E770C7A7(&(uParam0->f_10), "GARAGE_RADIO_ON");
	unk_0xB679C575E2F1040D(&(uParam0->f_11), "GARAGE_RADIO_STATION_ID");
	unk_0xB679C575E2F1040D(&(uParam0->f_12), "NUMBERS_TIMES_SMOKED");
	unk_0xB679C575E2F1040D(&(uParam0->f_13), "NUMBER_TIMES_DRANK");
	unk_0xB679C575E2F1040D(&(uParam0->f_14), "NUMBER_TIMES_STRIPPERS");
	unk_0xB679C575E2F1040D(&(uParam0->f_15), "NUMBERS_TIMES_SMOKED_SECOND");
	unk_0xB679C575E2F1040D(&(uParam0->f_16), "NUMBER_TIMES_DRANK_SECOND");
	unk_0xB679C575E2F1040D(&(uParam0->f_17), "NUMBER_TIMES_STRIPPERS_SECOND");
	unk_0xB679C575E2F1040D(&(uParam0->f_18), "NUMBERS_TIMES_SMOKED3");
	unk_0xB679C575E2F1040D(&(uParam0->f_19), "NUMBER_TIMES_DRANK3");
	unk_0xB679C575E2F1040D(&(uParam0->f_20), "NUMBER_TIMES_STRIPPERS3");
	unk_0xB679C575E2F1040D(&(uParam0->f_21), "NUMBERS_TIMES_SMOKED4");
	unk_0xB679C575E2F1040D(&(uParam0->f_22), "NUMBER_TIMES_DRANK4");
	unk_0xB679C575E2F1040D(&(uParam0->f_23), "NUMBER_TIMES_STRIPPERS4");
	unk_0xB679C575E2F1040D(&(uParam0->f_24), "NUMBERS_TIMES_SMOKED5");
	unk_0xB679C575E2F1040D(&(uParam0->f_25), "NUMBER_TIMES_DRANK5");
	unk_0xB679C575E2F1040D(&(uParam0->f_26), "NUMBER_TIMES_STRIPPERS5");
	unk_0xB679C575E2F1040D(&(uParam0->f_27), "NUMBERS_TIMES_SMOKEDYacht");
	unk_0xB679C575E2F1040D(&(uParam0->f_28), "NUMBER_TIMES_DRANKYacht");
	unk_0xB679C575E2F1040D(&(uParam0->f_29), "NUMBER_TIMES_STRIPPERSYacht");
	unk_0x8802E9442FF78325(&(uParam0->f_30), "DATE_LAST_CLEANED_APARTMENT");
	unk_0x8802E9442FF78325(&(uParam0->f_31), "SHOWERS_TAKEN");
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_32), 10, "PROP_DRINKS");
	StringCopy(&cVar1, "DRANK_", 16);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_32[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "DRANK_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_32[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_42), 10, "PROP_SMOKES");
	StringCopy(&cVar1, "SMOKED_", 16);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_42[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "SMOKED_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_42[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_52), 10, "PROP_STRIPPERS");
	StringCopy(&cVar1, "STRIPPERS_", 16);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_52[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "STRIPPERS_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_52[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0xDB379536EE67C8D1();
}

void func_20(var uParam0, int iParam1)//Position - 0x2C93
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MP_BIG_ASS_VEHICLES", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_21(&(uParam0->f_5500), &cVar0);
}

void func_21(var uParam0, char* sParam1)//Position - 0x2CB4
{
	int iVar0;
	char cVar1[16];
	
	unk_0x279233C417CD5326(uParam0, 6, sParam1);
	unk_0xB679C575E2F1040D(uParam0, "BAV_Timestamp");
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_1), 5, "B_A_V_BS_ID");
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "B_A_V_BS_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_1[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0xDB379536EE67C8D1();
}

void func_22(var uParam0, int iParam1)//Position - 0x2D12
{
	vector3 vVar0;
	
	StringCopy(&vVar0, "MP_SAVED_VEHICLES", 24);
	StringIntConCat(&vVar0, iParam1, 24);
	func_23(uParam0, &vVar0);
}

void func_23(var uParam0, char* sParam1)//Position - 0x2D30
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	unk_0x2CA88710A9AD8B7A(uParam0, 5500, sParam1);
	iVar0 = 0;
	while (iVar0 < 39)
	{
		StringCopy(&Var1, "MP_VEHICLE", 32);
		StringIntConCat(&Var1, iVar0, 32);
		func_24(uParam0[iVar0 /*141*/], &Var1);
		iVar0++;
	}
	unk_0xDB379536EE67C8D1();
}

void func_24(var uParam0, char* sParam1)//Position - 0x2D77
{
	unk_0x279233C417CD5326(uParam0, 141, sParam1);
	func_25(uParam0, "VEHICLE_SETUP_STRUCT_MP");
	unk_0xB679C575E2F1040D(&(uParam0->f_102), "VEHICLE_BS");
	unk_0xB679C575E2F1040D(&(uParam0->f_104), "PAID_PREMIUM");
	unk_0x66398CA5DB38AEA5(&(uParam0->f_105), "PAID_PLAYER");
	unk_0x66398CA5DB38AEA5(&(uParam0->f_121), "RADIO_STATION");
	unk_0xB679C575E2F1040D(&(uParam0->f_103), "IMPOUND_TIME");
	unk_0xB679C575E2F1040D(&(uParam0->f_137), "COLOUR_GROUP1");
	unk_0xB679C575E2F1040D(&(uParam0->f_138), "COLOUR_GROUP2");
	unk_0xB679C575E2F1040D(&(uParam0->f_139), "PRICE_PAID");
	unk_0xB679C575E2F1040D(&(uParam0->f_140), "OBTAIN_TIME");
	unk_0x7834ADE84E15496C();
}

void func_25(var uParam0, char* sParam1)//Position - 0x2E03
{
	func_27(uParam0, "VEHICLE_SETUP_STRUCT");
	unk_0x279233C417CD5326(uParam0, 102, sParam1);
	unk_0xB679C575E2F1040D(&(uParam0->f_78), "iSpawnVehicleHorn");
	unk_0xB679C575E2F1040D(&(uParam0->f_79), "iHornID");
	unk_0xC837DC226EC2B1B2(&(uParam0->f_80), "fEnveffScale");
	unk_0xB679C575E2F1040D(&(uParam0->f_97), "iColour5");
	unk_0xB679C575E2F1040D(&(uParam0->f_98), "iLivery2");
	unk_0xB679C575E2F1040D(&(uParam0->f_99), "iColour6");
	func_26(&(uParam0->f_81), "GamerHandleOfCarOwner");
	unk_0xB679C575E2F1040D(&(uParam0->f_94), "OwnerStatus");
	unk_0xB679C575E2F1040D(&(uParam0->f_95), "iFlags");
	unk_0xB679C575E2F1040D(&(uParam0->f_96), "iPVSlot");
	unk_0xB679C575E2F1040D(&(uParam0->f_100), "iPlayerIndex");
	unk_0xB679C575E2F1040D(&(uParam0->f_101), "iIEPlayerVehicle");
	unk_0x7834ADE84E15496C();
}

void func_26(var uParam0, char* sParam1)//Position - 0x2EB3
{
	unk_0x279233C417CD5326(uParam0, 13, sParam1);
	unk_0x6F255D03073FEB93(uParam0, "Data64_1");
	unk_0x6F255D03073FEB93(&(uParam0->f_1), "Data64_2");
	unk_0x6F255D03073FEB93(&(uParam0->f_2), "Data64_3");
	unk_0x6F255D03073FEB93(&(uParam0->f_3), "Data64_4");
	unk_0x6F255D03073FEB93(&(uParam0->f_4), "Data64_5");
	unk_0x6F255D03073FEB93(&(uParam0->f_5), "Data64_6");
	unk_0x6F255D03073FEB93(&(uParam0->f_6), "Data64_7");
	unk_0x6F255D03073FEB93(&(uParam0->f_7), "Data64_8");
	unk_0x6F255D03073FEB93(&(uParam0->f_8), "Data64_9");
	unk_0x6F255D03073FEB93(&(uParam0->f_9), "Data64_10");
	unk_0x6F255D03073FEB93(&(uParam0->f_10), "Data64_11");
	unk_0x6F255D03073FEB93(&(uParam0->f_11), "Data64_12");
	unk_0x6F255D03073FEB93(&(uParam0->f_12), "Data64_13");
	unk_0x7834ADE84E15496C();
}

void func_27(var uParam0, char* sParam1)//Position - 0x2F63
{
	int iVar0;
	char cVar1[16];
	
	unk_0x279233C417CD5326(uParam0, 78, sParam1);
	unk_0xB679C575E2F1040D(uParam0, "iPlateIndex");
	unk_0x0DDD63E9253703DD(&(uParam0->f_1), "tlPlateText");
	unk_0xB679C575E2F1040D(&(uParam0->f_5), "iColour1");
	unk_0xB679C575E2F1040D(&(uParam0->f_6), "iColour2");
	unk_0xB679C575E2F1040D(&(uParam0->f_7), "iColourExtra1");
	unk_0xB679C575E2F1040D(&(uParam0->f_8), "iColourExtra2");
	unk_0xB679C575E2F1040D(&(uParam0->f_62), "iTyreR");
	unk_0xB679C575E2F1040D(&(uParam0->f_63), "iTyreG");
	unk_0xB679C575E2F1040D(&(uParam0->f_64), "iTyreB");
	unk_0xB679C575E2F1040D(&(uParam0->f_65), "iWindowTintColour");
	unk_0xB679C575E2F1040D(&(uParam0->f_67), "iLivery");
	unk_0xB679C575E2F1040D(&(uParam0->f_69), "iWheelType");
	unk_0x8802E9442FF78325(&(uParam0->f_68), "eRoofState");
	unk_0xB679C575E2F1040D(&(uParam0->f_77), "iFlags");
	unk_0xB679C575E2F1040D(&(uParam0->f_71), "iCustomR");
	unk_0xB679C575E2F1040D(&(uParam0->f_72), "iCustomG");
	unk_0xB679C575E2F1040D(&(uParam0->f_73), "iCustomB");
	unk_0xB679C575E2F1040D(&(uParam0->f_74), "iNeonR");
	unk_0xB679C575E2F1040D(&(uParam0->f_75), "iNeonG");
	unk_0xB679C575E2F1040D(&(uParam0->f_76), "iNeonB");
	unk_0x8802E9442FF78325(&(uParam0->f_66), "eModel");
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_9), 50, "MODS_ID");
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&cVar1, "MOD_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_9[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x2CA88710A9AD8B7A(&(uParam0->f_59), 3, "MODS_VAR");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "MOD_VAR", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0xB679C575E2F1040D(&(uParam0->f_59[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xDB379536EE67C8D1();
	unk_0x8802E9442FF78325(&(uParam0->f_70), "eLockState");
	unk_0x7834ADE84E15496C();
}

void func_28(float fParam0)//Position - 0x30FF
{
	func_37();
	if (fParam0 == 1f)
	{
		func_35();
	}
	if (fParam0 <= 1,1f)
	{
		func_34();
	}
	if (fParam0 < 1,5f)
	{
		func_32();
	}
	if (fParam0 <= 1,5f)
	{
		func_31();
	}
	if (fParam0 == 1,5f)
	{
		func_30();
	}
	if (fParam0 < 1,7f)
	{
		func_29();
	}
}

void func_29()//Position - 0x3161
{
	Global_104555.f_26404.f_4 = 0;
}

void func_30()//Position - 0x3173
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0xFA3CE529DBB66C85(joaat("content_hanger_veh"), &iVar0, -1);
	unk_0xFA3CE529DBB66C85(joaat("content_marina_veh"), &iVar1, -1);
	unk_0xFA3CE529DBB66C85(joaat("content_heli_veh"), &iVar2, -1);
	if ((iVar0 >= 0 && iVar1 >= 0) && iVar2 >= 0)
	{
		Global_104555.f_668.f_1302 = (Global_104555.f_668.f_1302 - iVar0);
	}
}

void func_31()//Position - 0x31D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 171;
		while (iVar1 <= 198)
		{
			if (unk_0xC80D31E4B587871C(Global_104555.f_25152[iVar1], iVar0))
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_25152[iVar1]), iVar0);
				iVar2 = (iVar1 + (198 - 171)) + 1;
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_25152[iVar2]), iVar0);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_32()//Position - 0x3241
{
	if ((((func_33(54) || func_33(55)) || func_33(56)) || func_33(57)) || func_33(58))
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_9986.f_25), 6);
	}
}

int func_33(int iParam0)//Position - 0x3290
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_330[iParam0 /*6*/];
}

void func_34()//Position - 0x32BC
{
}

void func_35()//Position - 0x32C4
{
	if (Global_104555.f_9055.f_99.f_205[7] != 0)
	{
		if (!Global_104555.f_9055.f_330[86 /*6*/])
		{
			Global_104555.f_9055.f_330[86 /*6*/] = 1;
		}
	}
	if (Global_104555.f_9055.f_99.f_205[8] != 0)
	{
		if (!Global_104555.f_9055.f_330[71 /*6*/])
		{
			Global_104555.f_9055.f_330[71 /*6*/] = 1;
		}
	}
	if (Global_104555.f_9055.f_99.f_205[9] != 0)
	{
		if (!Global_104555.f_9055.f_330[91 /*6*/])
		{
			Global_104555.f_9055.f_330[91 /*6*/] = 1;
		}
	}
	if (Global_104555.f_9055.f_99.f_205[10] != 0)
	{
		if (!Global_104555.f_9055.f_330[67 /*6*/])
		{
			Global_104555.f_9055.f_330[67 /*6*/] = 1;
		}
	}
	if (Global_104555.f_9055.f_99.f_205[11] != 0)
	{
		if (!Global_104555.f_9055.f_330[77 /*6*/])
		{
			Global_104555.f_9055.f_330[77 /*6*/] = 1;
		}
	}
	func_36(195, 198);
	func_36(195, 197);
	func_36(195, 196);
}

void func_36(int iParam0, int iParam1)//Position - 0x33E4
{
	struct<4> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	
	Var0 = { Global_104555.f_10164[iParam0 /*12*/] };
	uVar1 = Global_104555.f_10164[iParam0 /*12*/].f_4;
	uVar2 = Global_104555.f_10164[iParam0 /*12*/].f_5;
	uVar3 = Global_104555.f_10164[iParam0 /*12*/].f_6;
	uVar4 = Global_104555.f_10164[iParam0 /*12*/].f_7;
	uVar5 = Global_104555.f_10164[iParam0 /*12*/].f_8;
	uVar6 = Global_104555.f_10164[iParam0 /*12*/].f_9;
	uVar7 = Global_104555.f_10164[iParam0 /*12*/].f_10;
	uVar8 = Global_104555.f_10164[iParam0 /*12*/].f_11;
	Global_104555.f_10164[iParam0 /*12*/] = { Global_104555.f_10164[iParam1 /*12*/] };
	Global_104555.f_10164[iParam0 /*12*/].f_4 = Global_104555.f_10164[iParam1 /*12*/].f_4;
	Global_104555.f_10164[iParam0 /*12*/].f_5 = Global_104555.f_10164[iParam1 /*12*/].f_5;
	Global_104555.f_10164[iParam0 /*12*/].f_6 = Global_104555.f_10164[iParam1 /*12*/].f_6;
	Global_104555.f_10164[iParam0 /*12*/].f_7 = Global_104555.f_10164[iParam1 /*12*/].f_7;
	Global_104555.f_10164[iParam0 /*12*/].f_8 = Global_104555.f_10164[iParam1 /*12*/].f_8;
	Global_104555.f_10164[iParam0 /*12*/].f_9 = Global_104555.f_10164[iParam1 /*12*/].f_9;
	Global_104555.f_10164[iParam0 /*12*/].f_10 = Global_104555.f_10164[iParam1 /*12*/].f_10;
	Global_104555.f_10164[iParam0 /*12*/].f_11 = Global_104555.f_10164[iParam1 /*12*/].f_11;
	Global_104555.f_10164[iParam1 /*12*/] = { Var0 };
	Global_104555.f_10164[iParam1 /*12*/].f_4 = uVar1;
	Global_104555.f_10164[iParam1 /*12*/].f_5 = uVar2;
	Global_104555.f_10164[iParam1 /*12*/].f_6 = uVar3;
	Global_104555.f_10164[iParam1 /*12*/].f_7 = uVar4;
	Global_104555.f_10164[iParam1 /*12*/].f_8 = uVar5;
	Global_104555.f_10164[iParam1 /*12*/].f_9 = uVar6;
	Global_104555.f_10164[iParam1 /*12*/].f_10 = uVar7;
	Global_104555.f_10164[iParam1 /*12*/].f_11 = uVar8;
}

void func_37()//Position - 0x35E8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!func_38(Global_104555.f_24874[iVar0 /*4*/]))
		{
			if (Global_104555.f_24874[iVar0 /*4*/] != 145)
			{
				Global_104555.f_24874[iVar0 /*4*/] = 145;
			}
		}
		iVar0++;
	}
}

bool func_38(int iParam0)//Position - 0x3633
{
	return iParam0 < 3;
}

void func_39()//Position - 0x363F
{
	unk_0xEC5952AE2A1C44BA("No_Filter", 1);
	unk_0xEC5952AE2A1C44BA("phone_cam1", 1);
	unk_0xEC5952AE2A1C44BA("phone_cam2", 1);
	unk_0xEC5952AE2A1C44BA("phone_cam3", 1);
	unk_0xEC5952AE2A1C44BA("phone_cam4", 1);
	unk_0xEC5952AE2A1C44BA("phone_cam5", 1);
	unk_0xEC5952AE2A1C44BA("phone_cam6", 1);
	unk_0xEC5952AE2A1C44BA("phone_cam7", 1);
	unk_0xEC5952AE2A1C44BA("phone_cam9", 1);
	unk_0xEC5952AE2A1C44BA("phone_cam12", 0);
}

void func_40(int iParam0, int iParam1)//Position - 0x36A1
{
	unk_0x8A719502FC5D36F1(iParam0);
	while (!unk_0x2674C3EBFAFF7678(iParam0))
	{
		system::wait(0);
		unk_0x8A719502FC5D36F1(iParam0);
	}
	system::start_new_script_with_name_hash(iParam0, iParam1);
}

int func_41()//Position - 0x36D0
{
	if (((unk_0xBAF011734F9DCF8C() || unk_0xBA6B48559B3C0E56()) || unk_0x0B2CF647601F53D4()) || unk_0x130B10AC7E90F6D5())
	{
		return 1;
	}
	return 0;
}

