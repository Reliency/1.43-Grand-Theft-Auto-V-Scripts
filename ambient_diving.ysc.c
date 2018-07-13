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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	struct<8> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	struct<11> Local_48[30];
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56[4] = { 0, 0, 0, 0 };
	float fLocal_57[4] = { 0f, 0f, 0f, 0f };
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	int iLocal_61 = 0;
	bool bLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0,0375f;
	fLocal_29 = 0,17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	bLocal_40 = true;
	bLocal_41 = true;
	iLocal_51 = -1;
	iLocal_61 = 1;
	iLocal_63 = unk_0xD0CA83418A236CB4();
	if (unk_0x7D9C4B359376D38A(210))
	{
		func_77(1);
	}
	if (unk_0x8F38E94BBF3404CD(joaat("ambient_diving")) > 1)
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	func_76(27);
	while (true)
	{
		system::wait(0);
		if (func_73(0))
		{
			if (!iLocal_67)
			{
				func_77(0);
				iLocal_67 = 1;
			}
		}
		else
		{
			iLocal_67 = 0;
			func_72(unk_0xFC1458A37D98B502());
			switch (iLocal_49)
			{
				case 0:
					func_67();
					break;
				
				case 1:
					func_64();
					func_55();
					func_1();
					break;
				
				case 2:
					func_55();
					break;
				
				case 3:
					func_77(1);
					break;
				}
		}
	}
}

void func_1()//Position - 0x116
{
	if (func_18(&Local_42, &Local_48) || func_17(110) == 1)
	{
		if (func_16())
		{
			func_15(0);
		}
		func_8(298, 0, 0);
		if (!func_17(110))
		{
			if (!bLocal_62)
			{
				bLocal_62 = func_3(1303349750, 1, 1, 16, 3, 1000, 10000, 1256519626, -1, 163, -1, 0);
			}
		}
		func_2(2);
	}
}

void func_2(int iParam0)//Position - 0x183
{
	iLocal_49 = iParam0;
}

int func_3(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x190
{
	struct<15> Var0;
	int iVar1;
	
	if (func_7(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0xC80D31E4B587871C(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_104555.f_7658.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_104555.f_7658.f_911 == Var0)
		{
			Global_104555.f_7658.f_911 = -1;
		}
		Var0.f_3 = func_6(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x53C562FD2B9E3AB0() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0x0EE72DB1CD8A3B86(&(Var0.f_1), 1);
		unk_0x0EE72DB1CD8A3B86(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			unk_0x872F1C1F8587CCC7(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0x872F1C1F8587CCC7(&(Var0.f_1), 10);
		}
		Global_104555.f_7658[Global_104555.f_7658.f_136 /*15*/] = { Var0 };
		Global_104555.f_7658.f_136++;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (unk_0xC80D31E4B587871C(iParam2, iVar1))
			{
				func_4(iVar1);
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

void func_4(int iParam0)//Position - 0x310
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_5(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_7658.f_136)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_7658[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_104555.f_7658[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_104555.f_7658[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_104555.f_7658.f_764)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_7658.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_104555.f_7658.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_104555.f_7658.f_919[iParam0] = iVar1;
}

bool func_5(int iParam0)//Position - 0x3D4
{
	return iParam0 < 3;
}

int func_6(int iParam0)//Position - 0x3E0
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

bool func_7(bool bParam0)//Position - 0x44A
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_8(int iParam0, int iParam1, int iParam2)//Position - 0x475
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_13((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_104555.f_10164[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104555.f_10164[iParam0 /*12*/].f_6 == 11 || Global_104555.f_10164[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104555.f_10164[iParam0 /*12*/].f_5 = 1;
		Global_104555.f_10164[iParam0 /*12*/].f_10 = iParam1;
		Global_104555.f_10164[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x02D73F783D6C1AFA(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x02D73F783D6C1AFA(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x02D73F783D6C1AFA(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_9();
	}
}

void func_9()//Position - 0x55D
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_104291 = 0;
	Global_104292 = 0;
	Global_104293 = 0;
	Global_104294 = 0;
	Global_104295 = 0;
	Global_104296 = 0;
	Global_104297 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104555.f_10164.f_3853;
	Global_104555.f_10164.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104555.f_10164[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104555.f_10164[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104291++;
					fVar1 = (fVar1 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104292++;
					fVar2 = (fVar2 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104293++;
					fVar3 = (fVar3 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104294++;
					fVar4 = (fVar4 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104295++;
					fVar5 = (fVar5 + (Global_104555.f_10164[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104296++;
					fVar6 = (fVar6 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104297++;
					fVar7 = (fVar7 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104274 > 0)
	{
		if (Global_104291 == Global_104274)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104275 > 0)
	{
		if (Global_104292 == Global_104275)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104276 > 0)
	{
		if (Global_104293 == Global_104276)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104277 > 0)
	{
		if (Global_104294 == Global_104277)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104278 > 0)
	{
		if (((Global_104295 == Global_104278 || (Global_104278 * 10 / Global_104295) < 41) || Global_104295 > Global_104281) || Global_104295 == Global_104281)
		{
			if (!unk_0xC80D31E4B587871C(Global_104555.f_10164.f_3856, 14))
			{
				if (Global_104295 == Global_104278)
				{
					unk_0x02D73F783D6C1AFA(joaat("num_rndevents_completed"), Global_104278, 0);
					unk_0x872F1C1F8587CCC7(&(Global_104555.f_10164.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104279 > 0)
	{
		if (Global_104296 == Global_104279)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104280 > 0)
	{
		if (Global_104297 == Global_104280)
		{
			fVar7 = 5f;
		}
	}
	Global_104555.f_10164.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104295 > Global_104281 || Global_104295 == Global_104281)
	{
		iVar9 = Global_104281;
	}
	else
	{
		iVar9 = Global_104295;
	}
	unk_0xBFFF62F75445099D(joaat("num_missions_completed"), Global_104291, 1);
	unk_0xBFFF62F75445099D(joaat("num_missions_available"), Global_104274, 1);
	unk_0xBFFF62F75445099D(joaat("num_minigames_completed"), Global_104292, 1);
	unk_0xBFFF62F75445099D(joaat("num_minigames_available"), Global_104275, 1);
	unk_0xBFFF62F75445099D(joaat("num_oddjobs_completed"), Global_104293, 1);
	unk_0xBFFF62F75445099D(joaat("num_oddjobs_available"), Global_104276, 1);
	unk_0xBFFF62F75445099D(joaat("num_rndpeople_completed"), Global_104294, 1);
	unk_0xBFFF62F75445099D(joaat("num_rndpeople_available"), Global_104277, 1);
	unk_0xBFFF62F75445099D(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xBFFF62F75445099D(joaat("num_rndevents_available"), Global_104281, 1);
	unk_0xBFFF62F75445099D(joaat("num_misc_completed"), (Global_104297 + Global_104296), 1);
	unk_0xBFFF62F75445099D(joaat("num_misc_available"), (Global_104280 + Global_104279), 1);
	Global_104298 = (Global_104291 * 100 / Global_104274);
	Global_104300 = ((Global_104293 + Global_104292) * 100 / (Global_104276 + Global_104275));
	Global_104299 = ((Global_104294 + iVar9) * 100 / (Global_104277 + Global_104281));
	Global_104301 = ((Global_104296 + Global_104297) * 100 / (Global_104279 + Global_104280));
	unk_0x00E69ADBDAF11A90(joaat("total_progress_made"), Global_104555.f_10164.f_3853, 1);
	unk_0xBFFF62F75445099D(joaat("percent_story_missions"), Global_104298, 1);
	unk_0xBFFF62F75445099D(joaat("percent_ambient_missions"), Global_104299, 1);
	unk_0xBFFF62F75445099D(joaat("percent_oddjobs"), Global_104300, 1);
	if (fVar8 > 0f && system::floor(fVar8) < system::floor(Global_104555.f_10164.f_3853))
	{
		func_12(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_11() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_10();
				}
			}
		}
	}
}

int func_10()//Position - 0xA1E
{
	if (func_7(0))
	{
		return 0;
	}
	if (Global_92872.f_8)
	{
		if (Global_92872.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92872.f_10 > 1)
	{
		return 0;
	}
	Global_92872.f_10++;
	return 1;
}

int func_11()//Position - 0xA69
{
	return Global_25233;
}

int func_12(int iParam0, int iParam1)//Position - 0xA74
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xDE008D1391A23FFE(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x2FD2B2D208844275(iParam0, iParam1);
	}
	return 0;
}

int func_13(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xAC5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_14();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xA7C33AF584635A56((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xDBE4A47179904C7B((iParam0 - 0)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xA7C33AF584635A56((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xDBE4A47179904C7B((iParam0 - 192)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xA7C33AF584635A56((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xDBE4A47179904C7B((iParam0 - 513)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xA7C33AF584635A56((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xDBE4A47179904C7B((iParam0 - 705)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x88B5FB6273C3123E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xDBE4A47179904C7B((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x88B5FB6273C3123E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xDBE4A47179904C7B((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x7CD64EB2C84F32FF((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xDBE4A47179904C7B((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x7CD64EB2C84F32FF((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xDBE4A47179904C7B((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x7CD64EB2C84F32FF((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xDBE4A47179904C7B((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x7CD64EB2C84F32FF((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xDBE4A47179904C7B((iParam0 - 7385)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x7CD64EB2C84F32FF((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xDBE4A47179904C7B((iParam0 - 7321)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x7CD64EB2C84F32FF((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xDBE4A47179904C7B((iParam0 - 9361)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x7CD64EB2C84F32FF((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xDBE4A47179904C7B((iParam0 - 15369)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x7CD64EB2C84F32FF((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xDBE4A47179904C7B((iParam0 - 15562)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x7CD64EB2C84F32FF((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xDBE4A47179904C7B((iParam0 - 15946)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x7CD64EB2C84F32FF((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xDBE4A47179904C7B((iParam0 - 18098)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar17, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_14()//Position - 0xF85
{
	return Global_1312736;
}

void func_15(bool bParam0)//Position - 0xF91
{
	if (bParam0)
	{
		Global_104555.f_14021.f_89 = 1;
	}
	else
	{
		Global_104555.f_14021.f_89 = 0;
	}
}

int func_16()//Position - 0xFB5
{
	if (unk_0x8F38E94BBF3404CD(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_17(int iParam0)//Position - 0xFD2
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_99.f_58[iParam0];
}

int func_18(var uParam0, int iParam1)//Position - 0xFFF
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	
	unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502());
	vVar2 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar1 = func_54(&(uParam0->f_1), uParam0->f_10);
		if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
		{
			if (!bVar1)
			{
				if (!func_53((iParam1[uParam0->f_10 /*11*/])->f_6, 0f, 0f, 0f, 0))
				{
					func_51(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 0);
				}
				else
				{
					func_51(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bVar1)
		{
			func_36(uParam0, iParam1, vVar2);
		}
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1)
		{
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (uParam0->f_11)
	{
		if (!Global_71116)
		{
			func_26(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 5, &iLocal_52, &uLocal_50, "DIVING_TITLE", "DIVING_COLLECT");
		}
		if (!func_25(44))
		{
			vVar3 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			if (func_24(&Local_42, &Local_48, vVar3, &iVar4))
			{
				if (unk_0xBE3C4023003180FC(func_23(iVar4), vVar3, 0) > 200f)
				{
					func_20("DIVING_HELP4", 1, 7500, -1, 10000, 7, 0, 0, 0);
					func_19(44);
				}
			}
		}
	}
	if (!bLocal_62)
	{
		if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
		{
			bLocal_62 = func_3(1303349750, 1, 1, 16, 3, 1000, 10000, 1256519626, -1, 163, -1, 0);
		}
	}
	if (!uParam0->f_12 && !uParam0->f_11)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

void func_19(int iParam0)//Position - 0x11AD
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_20380.f_150[iVar1]), iVar0);
	}
}

void func_20(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x11EF
{
	func_21(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_21(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1210
{
	int iVar0;
	
	if (unk_0x74C475EB8E73D398(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (unk_0x74C475EB8E73D398(&(Global_104555.f_20380[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_104555.f_20380.f_145 < 9)
	{
		StringCopy(&(Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_4), sParam1, 16);
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_8 = (unk_0x53C562FD2B9E3AB0() + iParam3);
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_9 = iParam5;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_11 = iParam6;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_12 = uParam2;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_13 = iParam7;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_14 = iParam8;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_10 = ((unk_0x53C562FD2B9E3AB0() + iParam3) + iParam4);
		}
		else
		{
			Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_10 = -1;
		}
		Global_104555.f_20380.f_145++;
		func_22();
	}
}

void func_22()//Position - 0x13E3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_104555.f_20380.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_20380[iVar0 /*16*/].f_11, 0))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[0])
			{
				Global_104555.f_20380.f_146[0] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xC80D31E4B587871C(Global_104555.f_20380[iVar0 /*16*/].f_11, 1))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[1])
			{
				Global_104555.f_20380.f_146[1] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xC80D31E4B587871C(Global_104555.f_20380[iVar0 /*16*/].f_11, 2))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[2])
			{
				Global_104555.f_20380.f_146[2] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

Vector3 func_23(int iParam0)//Position - 0x1503
{
	switch (iParam0)
	{
		case 0:
			return -1036,73f, 6735,72f, -100,52f;
			break;
		
		case 1:
			return -908,86f, 6655,98f, -34,35f;
			break;
		
		case 2:
			return -985,14f, 6697,71f, -41,57f;
			break;
		
		case 3:
			return 1825,73f, -2920,67f, -36,82f;
			break;
		
		case 4:
			return 1772,11f, -2967,72f, -46,81f;
			break;
		
		case 5:
			return 3198,59f, -385,05f, -31,49f;
			break;
		
		case 6:
			return 3170,43f, -302,21f, -25,99f;
			break;
		
		case 7:
			return 3157,44f, -268,54f, -28,07f;
			break;
		
		case 8:
			return -3180,2f, 3010,9f, -37,6f;
			break;
		
		case 9:
			return -3178,3f, 3044,86f, -39,96f;
			break;
		
		case 10:
			return 910,48f, -3471,21f, -17,57f;
			break;
		
		case 11:
			return 1338,76f, -3041,59f, -19,23f;
			break;
		
		case 12:
			return 1153,38f, -2864,51f, -18,96f;
			break;
		
		case 13:
			return 958,56f, -2847,78f, -22,05f;
			break;
		
		case 14:
			return 782,28f, -2872,81f, -9,577f;
			break;
		
		case 15:
			return 581,28f, -2471,5f, -9,44f;
			break;
		
		case 16:
			return 636,56f, -2214,49f, -7,87f;
			break;
		
		case 17:
			return 371,06f, -3226,67f, -19,6f;
			break;
		
		case 18:
			return 689,69f, -3451,07f, -27,85f;
			break;
		
		case 19:
			return 180,17f, -2255,91f, -2,54f;
			break;
		
		case 20:
			return -691,64f, -2836,86f, -15,67f;
			break;
		
		case 21:
			return -3397,5f, 3717,52f, -86,14f;
			break;
		
		case 22:
			return -3357,11f, 3710,79f, -96,14f;
			break;
		
		case 23:
			return -3282,21f, 3682,6f, -82,87f;
			break;
		
		case 24:
			return -3256,66f, 3672,29f, -35,06f;
			break;
		
		case 25:
			return -3142,19f, 3625,95f, -26,31f;
			break;
		
		case 26:
			return 3271,34f, 6420,78f, -50,78f;
			break;
		
		case 27:
			return 3237,83f, 6487,44f, -43,9f;
			break;
		
		case 28:
			return 1772,1f, -2997,12f, -50,44f;
			break;
		
		case 29:
			return 3207f, -415,17f, -32,01f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_24(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x183F
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = 0;
	fVar1 = 0f;
	fVar2 = -1f;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!func_54(&(uParam0->f_1), iVar0))
		{
			fVar1 = system::vdist2(vParam2, (iParam1[iVar0 /*11*/])->f_3);
			if (fVar2 == -1f || fVar1 < fVar2)
			{
				*iParam3 = iVar0;
				fVar2 = fVar1;
			}
		}
		iVar0++;
	}
	return *iParam3 != -1;
}

int func_25(int iParam0)//Position - 0x18A6
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20380.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_26(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, char* sParam6, char* sParam7)//Position - 0x18E9
{
	int iVar0;
	
	func_35(0);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0:
				*uParam5 = unk_0xD704C81492296A37("MIDSIZED_MESSAGE");
				if (unk_0x34D11AB5BA7922C2(*uParam5))
				{
					iVar0 = unk_0xD0CA83418A236CB4();
					if (iParam3 == 6)
					{
						unk_0x4AFBCBFDE748D4E0(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						unk_0x4AFBCBFDE748D4E0(iVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*iParam4++;
				}
				break;
			
			case 1:
				unk_0x008F3E3CC076EA0E(*uParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0x7E099EB35339C80D(sParam6);
				unk_0x9748595E4799A2CF();
				unk_0x7E099EB35339C80D(sParam7);
				unk_0x6223D539BCD39E76(func_28(iParam3));
				unk_0x9748595E4799A2CF();
				unk_0x271AA5469AF471B3();
				*uParam2 = unk_0x53C562FD2B9E3AB0();
				*iParam4++;
				break;
			
			case 2:
				if ((unk_0x53C562FD2B9E3AB0() - *uParam2) > 7000)
				{
					unk_0x008F3E3CC076EA0E(*uParam5, "SHARD_ANIM_OUT");
					unk_0xD07D5CD276368D36(1);
					unk_0x9499D7329FB840A2(0,33f);
					unk_0x271AA5469AF471B3();
					*iParam4++;
				}
				else if (!func_27())
				{
					if (unk_0x34D11AB5BA7922C2(*uParam5))
					{
						func_35(1);
						unk_0x28E092B1E386EB67(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((unk_0x53C562FD2B9E3AB0() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_27())
				{
					if (unk_0x34D11AB5BA7922C2(*uParam5))
					{
						func_35(1);
						unk_0x28E092B1E386EB67(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (unk_0x34D11AB5BA7922C2(*uParam5))
				{
					unk_0xA68F7B004463AB6F(uParam5);
				}
				func_35(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

int func_27()//Position - 0x1A6D
{
	if (Global_71116)
	{
		return 1;
	}
	else if (Global_55897 && !Global_55903)
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0)//Position - 0x1A97
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_34(iParam0))
		{
			if (unk_0xC80D31E4B587871C(Global_104555.f_10019.f_108, func_33(func_34(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		unk_0xFA3CE529DBB66C85(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		unk_0xFA3CE529DBB66C85(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		unk_0xFA3CE529DBB66C85(joaat("num_hidden_packages_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_34(iParam0))
		{
			iVar2 = (func_32(iParam0) + iVar1);
			if (func_29(iVar2, -1, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_29(int iParam0, int iParam1, int iParam2)//Position - 0x1B5F
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar1 = func_31(iParam0, iParam1);
	uVar2 = func_30(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_30(int iParam0)//Position - 0x1B9C
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xDBE4A47179904C7B((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xDBE4A47179904C7B((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xDBE4A47179904C7B((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xDBE4A47179904C7B((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xDBE4A47179904C7B((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xDBE4A47179904C7B((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xDBE4A47179904C7B((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xDBE4A47179904C7B((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xDBE4A47179904C7B((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xDBE4A47179904C7B((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xDBE4A47179904C7B((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xDBE4A47179904C7B((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xDBE4A47179904C7B((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xDBE4A47179904C7B((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xDBE4A47179904C7B((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0xDBE4A47179904C7B((iParam0 - 18098)) * 64);
	}
	return iVar0;
}

int func_31(int iParam0, int iParam1)//Position - 0x1E5C
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x88B5FB6273C3123E((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x88B5FB6273C3123E((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	return iVar0;
}

int func_32(int iParam0)//Position - 0x20F2
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_33(int iParam0, int iParam1)//Position - 0x2139
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_34(int iParam0)//Position - 0x2155
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_35(int iParam0)//Position - 0x21A5
{
	if (Global_71123 != iParam0)
	{
		Global_71123 = iParam0;
	}
}

int func_36(var uParam0, var uParam1, vector3 vParam2)//Position - 0x21BF
{
	int iVar0;
	
	iVar0 = uParam0->f_10;
	if ((uParam1[iVar0 /*11*/])->f_10)
	{
		if ((uParam1[iVar0 /*11*/])->f_1 != 0)
		{
			if (unk_0x58786AA7A9E510C0((uParam1[iVar0 /*11*/])->f_1) || func_49((uParam1[iVar0 /*11*/])->f_1))
			{
				func_39(uParam0, uParam1, iVar0);
				return 1;
			}
		}
	}
	if (unk_0xB8B3E5529EDB87D4((uParam1[iVar0 /*11*/])->f_1))
	{
		if ((system::vdist2(vParam2, unk_0x20752E4B9ABBF6F5((uParam1[iVar0 /*11*/])->f_1)) > (60f * 60f) || func_38(13)) || func_38(14))
		{
			func_37(&((uParam1[iVar0 /*11*/])->f_1));
			(uParam1[iVar0 /*11*/])->f_1 = 0;
			(uParam1[iVar0 /*11*/])->f_10 = 0;
		}
	}
	return 0;
}

void func_37(var uParam0)//Position - 0x227C
{
	if (unk_0xB8B3E5529EDB87D4(*uParam0))
	{
		unk_0x60727D07B2D72C82(*uParam0);
	}
}

bool func_38(int iParam0)//Position - 0x2295
{
	return Global_35861 == iParam0;
}

void func_39(var uParam0, var uParam1, int iParam2)//Position - 0x22A3
{
	int iVar0;
	
	iVar0 = (func_32(*uParam0) + iParam2);
	func_37(&((uParam1[iParam2 /*11*/])->f_1));
	func_48(&((uParam1[iParam2 /*11*/])->f_2));
	(uParam1[iParam2 /*11*/])->f_1 = 0;
	(uParam1[iParam2 /*11*/])->f_10 = 0;
	func_47(&(uParam0->f_1), iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_46(*uParam0, iParam2, 1);
	}
	unk_0xC4803EF57E953FF3(0, 200, 250);
	unk_0xA28FBFF41378592F(uParam0->f_6, 1f);
	if (bLocal_41)
	{
		func_45(&(uParam0->f_1), iParam2);
	}
	else
	{
		func_43(&(uParam0->f_1));
	}
	func_41();
	unk_0xA82005B4A27F86C3(iVar0);
	func_40(1, 0);
	func_10();
	uParam0->f_11 = 1;
}

void func_40(int iParam0, int iParam1)//Position - 0x234E
{
	Global_92872.f_7 = iParam0;
	Global_92872.f_8 = iParam1;
}

void func_41()//Position - 0x2366
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	unk_0xFA3CE529DBB66C85(func_42(0), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_12(18, iVar0);
	}
	unk_0xFA3CE529DBB66C85(func_42(1), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_12(19, iVar0);
	}
	unk_0xFA3CE529DBB66C85(func_42(3), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_12(20, iVar0);
	}
	iVar2 = ((func_34(0) + func_34(1)) + func_34(3));
	if (iVar2 > 0)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	unk_0xBFFF62F75445099D(joaat("percent_hidden_packages"), iVar3, 1);
}

int func_42(int iParam0)//Position - 0x2409
{
	if (iParam0 == 3)
	{
		return joaat("num_hidden_packages_3");
	}
	if (iParam0 == 1)
	{
		return joaat("num_hidden_packages_0");
	}
	if (iParam0 == 0)
	{
		return joaat("num_hidden_packages_1");
	}
	if (iParam0 == 5)
	{
		return joaat("num_hidden_packages_4");
	}
	return joaat("num_hidden_packages_2");
}

void func_43(var uParam0)//Position - 0x245A
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_54(uParam0, iVar0))
		{
			iVar1++;
			func_13((uParam0->f_2 + iVar0), 1, -1, 1);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_44(168, 0);
	}
}

void func_44(int iParam0, int iParam1)//Position - 0x24DD
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_104555.f_8583[iParam0] = 1;
	Global_104555.f_8583.f_236[iParam0] = (unk_0x53C562FD2B9E3AB0() + iParam1);
}

void func_45(var uParam0, int iParam1)//Position - 0x251A
{
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	if (iParam1 >= uParam0->f_3)
	{
	}
	if (func_54(uParam0, iParam1))
	{
		uParam0->f_4++;
		func_13((uParam0->f_2 + iParam1), 1, -1, 1);
		if (bLocal_40)
		{
		}
	}
	if (bLocal_40)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_44(168, 0);
	}
}

void func_46(int iParam0, int iParam1, bool bParam2)//Position - 0x258E
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_10019.f_122), iParam1);
			}
			else
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_10019.f_122), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_10019.f_122.f_1), (iParam1 - 32));
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_10019.f_122.f_1), (iParam1 - 32));
		}
	}
	else if (iParam0 == 0)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_10019.f_125), iParam1);
			}
			else
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_10019.f_125), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_10019.f_125.f_1), (iParam1 - 32));
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_10019.f_125.f_1), (iParam1 - 32));
		}
	}
}

void func_47(var uParam0, int iParam1, bool bParam2)//Position - 0x267A
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam1 <= 31)
	{
		if (bParam2)
		{
			unk_0x872F1C1F8587CCC7(uParam0, iParam1);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(uParam0, iParam1);
		}
		return;
	}
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_1), (iParam1 - 32));
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_1), (iParam1 - 32));
	}
}

void func_48(int iParam0)//Position - 0x26DB
{
	if (unk_0xA6DECE14FC9A8C51(*iParam0))
	{
		unk_0xAAAC88CC20771601(*iParam0, 0);
		unk_0xE30CF11C0EE14316(iParam0);
	}
}

int func_49(var uParam0)//Position - 0x26FB
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB8B3E5529EDB87D4(uParam0))
	{
		return 0;
	}
	if (func_50(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			iVar1 = unk_0x82FF3DFBC3965CC0(iVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0x20752E4B9ABBF6F5(uParam0)) < (5f * 5f) || unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), unk_0x7B240E77AB38C348(uParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_50(int iParam0)//Position - 0x2787
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_51(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x27A8
{
	int iVar0;
	
	if (!uParam0->f_10)
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (!func_38(13) && !func_38(14))
			{
				if (!unk_0xB8B3E5529EDB87D4(uParam0->f_1))
				{
					if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), uParam0->f_3) <= (50f * 50f))
					{
						unk_0x6FF834D85E2DD4C6(iParam1);
						while (!unk_0x9A0B2ED5055D3F0B(iParam1))
						{
							unk_0x6FF834D85E2DD4C6(iParam1);
							system::wait(0);
						}
						if (bParam3)
						{
							func_52(uParam0->f_3);
						}
						unk_0x247EAA2E93D4A021(uParam0->f_3, 2,5f, 0, 0, 0, false);
						if (bParam4)
						{
							unk_0x872F1C1F8587CCC7(&iVar0, 1);
							uParam0->f_1 = unk_0x85CE54AA667066FE(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, iVar0, -1, iParam5, 1, iParam1);
						}
						else
						{
							unk_0x872F1C1F8587CCC7(&iVar0, 3);
							unk_0x872F1C1F8587CCC7(&iVar0, 4);
							unk_0x872F1C1F8587CCC7(&iVar0, 8);
							unk_0x872F1C1F8587CCC7(&iVar0, 1);
							uParam0->f_1 = unk_0x06583789B8C15A6C(iParam2, uParam0->f_3, iVar0, -1, 1, iParam1);
						}
						unk_0x14776E43F90DD454(iParam1);
					}
				}
			}
			if (unk_0xB8B3E5529EDB87D4(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}

void func_52(vector3 vParam0)//Position - 0x28C1
{
	int iVar0;
	
	iVar0 = unk_0xD3BB1A515B0A47F3(vParam0);
	if (unk_0x2C2E1E35924B9FF2(iVar0))
	{
		unk_0xFF9ADA7B95619F7E(iVar0);
		while (!unk_0x1A595E6882473810(iVar0))
		{
			system::wait(0);
		}
		system::wait(0);
		unk_0xA1451353A1AED1A5(iVar0);
	}
}

bool func_53(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x28FF
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_54(var uParam0, int iParam1)//Position - 0x2946
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return 0;
	}
	if (iParam1 <= 31)
	{
		return unk_0xC80D31E4B587871C(*uParam0, iParam1);
	}
	return unk_0xC80D31E4B587871C(uParam0->f_1, (iParam1 - 32));
}

void func_55()//Position - 0x2984
{
	float fVar0;
	
	switch (iLocal_66)
	{
		case 0:
			if (func_62())
			{
				if (func_50(iLocal_64))
				{
					func_61();
					unk_0x47F820A3F8998340(iLocal_64, 0);
					iLocal_66 = 1;
					if (iLocal_49 == 2)
					{
						func_2(3);
					}
				}
			}
			else if (func_50(iLocal_64) && func_50(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()))
				{
					fVar0 = 500f;
				}
				else
				{
					fVar0 = 250f;
				}
				if (func_60(unk_0xFC1458A37D98B502(), iLocal_64, 0) > fVar0)
				{
					func_59();
					if (iLocal_49 == 2)
					{
						func_2(3);
					}
				}
			}
			else
			{
				func_61();
				if (iLocal_49 == 2)
				{
					func_2(3);
				}
			}
			break;
		
		case 1:
			if (iLocal_49 == 2)
			{
				func_2(3);
			}
			if (!func_62())
			{
				if (func_50(iLocal_64))
				{
					if (!unk_0xA6DECE14FC9A8C51(iLocal_65))
					{
						iLocal_65 = func_56(iLocal_64, 0, 0);
					}
					unk_0xA15269351F50F113(iLocal_64, 0, 1, 0);
					if (unk_0x428C7026AD2721BA(unk_0x82FF3DFBC3965CC0(iLocal_64)))
					{
						if (!unk_0x9A3C64A7BB4588B3(iLocal_64))
						{
							unk_0x47F820A3F8998340(iLocal_64, 1);
						}
					}
					iLocal_66 = 0;
				}
			}
			break;
	}
}

int func_56(int iParam0, bool bParam1, bool bParam2)//Position - 0x2AA5
{
	return func_57(iParam0, !bParam1, bParam2);
}

int func_57(int iParam0, bool bParam1, bool bParam2)//Position - 0x2AB8
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_58(unk_0x3A711520F83BAE98(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
		}
		else
		{
			unk_0x0C71C8E276E3EC54(iVar0, 2);
		}
	}
	else if (unk_0x52C56492660097C7(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_58(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_58(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_58(bool bParam0, float fParam1, float fParam2)//Position - 0x2B5C
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_59()//Position - 0x2B73
{
	func_61();
	if (func_50(iLocal_64))
	{
		if (unk_0x428C7026AD2721BA(unk_0x82FF3DFBC3965CC0(iLocal_64)))
		{
			unk_0x47F820A3F8998340(iLocal_64, 0);
		}
		unk_0x80CF8DB3EDD7B9EC(iLocal_64, 0);
		if (unk_0x9761C10D57B68069(iLocal_64))
		{
			unk_0x5380482A432E314E(&iLocal_64);
		}
	}
}

float func_60(int iParam0, int iParam1, int iParam2)//Position - 0x2BB8
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	}
	if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		vVar1 = { unk_0xB3328BA8976B416C(iParam1, 1) };
	}
	else
	{
		vVar1 = { unk_0xB3328BA8976B416C(iParam1, 0) };
	}
	return unk_0xBE3C4023003180FC(vVar0, vVar1, iParam2);
}

void func_61()//Position - 0x2C16
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_65))
	{
		unk_0xE30CF11C0EE14316(&iLocal_65);
	}
}

int func_62()//Position - 0x2C2F
{
	if (func_50(unk_0xFC1458A37D98B502()))
	{
		if (func_50(iLocal_64))
		{
			if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_64, 0))
			{
				return 1;
			}
		}
		else if (func_63())
		{
			iLocal_64 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (unk_0x6ADD12BF4D6D2587(iLocal_64))
			{
				unk_0xDD29FF4BAB8AFF9C(iLocal_64, 1, 1);
				unk_0x80CF8DB3EDD7B9EC(iLocal_64, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_63()//Position - 0x2C95
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (unk_0x6ADD12BF4D6D2587(iVar0))
		{
			if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("dinghy") || unk_0x82FF3DFBC3965CC0(iVar0) == joaat("dinghy2"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_64()//Position - 0x2CEA
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	
	vVar0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	if (func_24(&Local_42, &Local_48, vVar0, &iLocal_51))
	{
		vVar1 = { func_23(iLocal_51) };
		fVar2 = unk_0xBE3C4023003180FC(vVar1, vVar0, 0);
		if (fVar2 > 200f)
		{
			func_66();
			if (!iLocal_61)
			{
				iLocal_61 = 1;
			}
			if (func_63())
			{
				if (!func_25(41))
				{
					func_20("DIVING_HELP1", 1, 0, -1, 10000, 7, 0, 0, 0);
					func_19(41);
				}
				if (iLocal_51 != iLocal_54)
				{
					if (unk_0xA6DECE14FC9A8C51(iLocal_53))
					{
						unk_0xE30CF11C0EE14316(&iLocal_53);
					}
				}
				if (!unk_0xA6DECE14FC9A8C51(iLocal_53))
				{
					iLocal_53 = unk_0xDC4AED8949A17F4B(vVar1, 200f);
					unk_0xF20857E4CB32A2B7(iLocal_53, 128);
					unk_0x0C71C8E276E3EC54(iLocal_53, 2);
					unk_0x312E513AE531074E(iLocal_53, 0);
					unk_0x62BD54E491535B76(iLocal_53, "B_WRE");
					unk_0x9C27373CC69ECF87(iLocal_53, 0);
					iLocal_54 = iLocal_51;
				}
			}
			else if (unk_0xA6DECE14FC9A8C51(iLocal_53))
			{
				unk_0xE30CF11C0EE14316(&iLocal_53);
			}
		}
		else
		{
			if (func_63())
			{
				if (!func_25(42))
				{
					func_20("DIVING_HELP2", 1, 0, -1, 10000, 7, 0, 0, 0);
					func_19(42);
				}
			}
			if (func_25(42))
			{
				if (!func_25(43))
				{
					if (unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()) && !unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502()))
					{
						func_20("DIVING_HELP3", 1, 2000, -1, 10000, 7, 0, 0, 0);
						func_19(43);
					}
				}
			}
			if (unk_0xA6DECE14FC9A8C51(iLocal_53))
			{
				unk_0xE30CF11C0EE14316(&iLocal_53);
			}
			if (iLocal_51 != iLocal_54)
			{
				func_66();
				iLocal_54 = iLocal_51;
				iLocal_61 = 1;
			}
			if (Local_42.f_1.f_4 < Local_42.f_1.f_3)
			{
				if (iLocal_61)
				{
					fLocal_58 = 0f;
					fLocal_59 = fVar2;
					if (func_63())
					{
						fLocal_59 = func_65(fLocal_59, 20f, 200f);
					}
					else
					{
						fLocal_59 = func_65(fLocal_59, 10f, 200f);
					}
					fLocal_60 = (fLocal_59 * 0,025f);
					iLocal_61 = 0;
					if (func_63())
					{
						unk_0x23A4CE7F9EBB02D4(iLocal_63, "SINGLE_BLIP_FROM_BOAT", vVar1, "ABIGAIL_SONAR_SOUNDSET", 0, 0, 0);
					}
					else
					{
						unk_0x23A4CE7F9EBB02D4(iLocal_63, "SCRIPT_TRIGGERED_FROM_PROP", vVar0, "ABIGAIL_SONAR_SOUNDSET", 0, 0, 0);
					}
				}
				else
				{
					fLocal_58 = (fLocal_58 + fLocal_60);
					fLocal_58 = func_65(fLocal_58, 0f, fLocal_59);
					if (!unk_0xA6DECE14FC9A8C51(iLocal_55))
					{
						iLocal_55 = unk_0xDC4AED8949A17F4B(vVar1, fLocal_58);
						unk_0xF20857E4CB32A2B7(iLocal_55, 255);
						unk_0x0C71C8E276E3EC54(iLocal_55, 4);
						unk_0x66DAED36FB41050D(iLocal_55, 1);
						unk_0x0DD8CC997F28EE12(iLocal_55, 1);
						unk_0x9C27373CC69ECF87(iLocal_55, 0);
					}
					else
					{
						unk_0xA5D25D3F884FF516(iLocal_55, fLocal_58);
					}
					iVar3 = 0;
					if (func_63())
					{
						iVar3 = 0;
						while (iVar3 <= 3)
						{
							if (!unk_0xA6DECE14FC9A8C51(iLocal_56[iVar3]))
							{
								iLocal_56[iVar3] = unk_0xDC4AED8949A17F4B(vVar1, (fLocal_58 + fLocal_57[iVar3]));
								unk_0xF20857E4CB32A2B7(iLocal_56[iVar3], 255);
								unk_0x0C71C8E276E3EC54(iLocal_56[iVar3], 4);
								unk_0x66DAED36FB41050D(iLocal_56[iVar3], 1);
								unk_0x0DD8CC997F28EE12(iLocal_56[iVar3], 1);
								unk_0x9C27373CC69ECF87(iLocal_56[iVar3], 0);
							}
							else
							{
								unk_0xA5D25D3F884FF516(iLocal_56[iVar3], (fLocal_58 + fLocal_57[iVar3]));
							}
							iVar3++;
						}
					}
					else
					{
						iVar3 = 0;
						while (iVar3 <= 3)
						{
							if (unk_0xA6DECE14FC9A8C51(iLocal_56[iVar3]))
							{
								unk_0xA5D25D3F884FF516(iLocal_56[iVar3], fLocal_58);
							}
							iVar3++;
						}
					}
					if (fLocal_58 >= fLocal_59)
					{
						iLocal_61 = 1;
					}
				}
			}
			else
			{
				func_66();
			}
		}
	}
}

float func_65(float fParam0, float fParam1, float fParam2)//Position - 0x3064
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_66()//Position - 0x308B
{
	int iVar0;
	
	if (unk_0xA6DECE14FC9A8C51(iLocal_55))
	{
		unk_0xE30CF11C0EE14316(&iLocal_55);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (unk_0xA6DECE14FC9A8C51(iLocal_56[iVar0]))
		{
			unk_0xE30CF11C0EE14316(&(iLocal_56[iVar0]));
		}
		iVar0++;
	}
}

void func_67()//Position - 0x30CF
{
	iLocal_52 = 0;
	if (func_62())
	{
		iLocal_66 = 1;
	}
	else
	{
		iLocal_66 = 0;
	}
	func_71();
	func_70(&Local_42, 5, joaat("prop_sub_chunk_01"), "DIVING_COLLECT");
	func_68(&Local_42, joaat("num_hidden_packages_4"), 845, 30);
	func_2(1);
	fLocal_57[0] = 0,25f;
	fLocal_57[1] = 0,5f;
	fLocal_57[2] = 0,75f;
	fLocal_57[3] = 1f;
}

void func_68(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x313D
{
	uParam0->f_6 = iParam1;
	func_69(&(uParam0->f_1), iParam2, iParam3);
}

void func_69(var uParam0, var uParam1, var uParam2)//Position - 0x3157
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	if (bLocal_40)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_29((uParam0->f_2 + iVar0), -1, -1))
		{
			iVar1++;
			func_47(uParam0, iVar0, 1);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
}

void func_70(var uParam0, int iParam1, int iParam2, char* sParam3)//Position - 0x31C0
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

void func_71()//Position - 0x31DE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Local_48[iVar0 /*11*/].f_3 = { func_23(iVar0) };
		Local_48[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	Local_48[0 /*11*/].f_6 = { -16,4f, 78,53f, -146,67f };
	Local_48[1 /*11*/].f_6 = { 0f, 45f, 10f };
	Local_48[2 /*11*/].f_6 = { 0,72f, 65,2f, -50,26f };
	Local_48[3 /*11*/].f_6 = { 0f, 15f, -132,16f };
	Local_48[4 /*11*/].f_6 = { 166,37f, -40f, 168,81f };
	Local_48[5 /*11*/].f_6 = { 90f, 56,2f, 90f };
	Local_48[6 /*11*/].f_6 = { -20f, 0f, 89,95f };
	Local_48[7 /*11*/].f_6 = { 4,08f, 54,9f, -65,35f };
	Local_48[8 /*11*/].f_6 = { 174,15f, -58,2f, -144,66f };
	Local_48[9 /*11*/].f_6 = { -28,22f, 36,11f, -90,22f };
	Local_48[10 /*11*/].f_6 = { -5f, 44f, 65f };
	Local_48[11 /*11*/].f_6 = { 0f, -108f, 45,36f };
	Local_48[12 /*11*/].f_6 = { -10,9f, 43,12f, 131,52f };
	Local_48[13 /*11*/].f_6 = { 12,37f, 49,66f, 126,88f };
	Local_48[14 /*11*/].f_6 = { 4,35f, 10,22f, 27,51f };
	Local_48[15 /*11*/].f_6 = { 0f, 10f, 60,73f };
	Local_48[16 /*11*/].f_6 = { 150,56f, -78,67f, -174,35f };
	Local_48[17 /*11*/].f_6 = { 0f, 50f, 46,41f };
	Local_48[18 /*11*/].f_6 = { 6,26f, 44,65f, 8,88f };
	Local_48[19 /*11*/].f_6 = { 90f, 78,5f, 16,04f };
	Local_48[20 /*11*/].f_6 = { -1,36f, 6,53f, -70,94f };
	Local_48[21 /*11*/].f_6 = { -61,86f, 78,61f, 126,5f };
	Local_48[22 /*11*/].f_6 = { -10f, -80,71f, 69,7f };
	Local_48[23 /*11*/].f_6 = { -76,43f, -70,02f, 29,74f };
	Local_48[24 /*11*/].f_6 = { -28f, -70f, 107,53f };
	Local_48[25 /*11*/].f_6 = { 4,19f, 6,46f, 110,43f };
	Local_48[26 /*11*/].f_6 = { -3,19f, 60,6f, 25f };
	Local_48[27 /*11*/].f_6 = { 0f, -81,68f, -20,16f };
	Local_48[28 /*11*/].f_6 = { 7,39f, 44,52f, 19,65f };
	Local_48[29 /*11*/].f_6 = { 89,74f, 80,95f, 151,74f };
}

bool func_72(int iParam0)//Position - 0x34DC
{
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	return !unk_0x191BE1BC8F26F3C1(iParam0, 0);
}

int func_73(int iParam0)//Position - 0x34FA
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_74(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_74(int iParam0)//Position - 0x351C
{
	return func_75(iParam0, Global_35861);
}

int func_75(int iParam0, int iParam1)//Position - 0x352D
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_76(int iParam0)//Position - 0x370E
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_9055.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_9055.f_99.f_219[iVar0]), iVar1);
	return 1;
}

void func_77(bool bParam0)//Position - 0x3768
{
	int iVar0;
	
	if (unk_0xA6DECE14FC9A8C51(iLocal_53))
	{
		unk_0xE30CF11C0EE14316(&iLocal_53);
	}
	func_66();
	if (!unk_0xCCCA18C9A006FF83(iLocal_63))
	{
		unk_0x0B9D04994D02CC2F(iLocal_63);
	}
	func_59();
	iVar0 = 0;
	while (iVar0 < Local_48)
	{
		func_48(&(Local_48[iVar0 /*11*/].f_2));
		func_37(&(Local_48[iVar0 /*11*/].f_1));
		Local_48[iVar0 /*11*/].f_1 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		if (func_79(&(Local_42.f_1)) || func_17(110) == 1)
		{
			func_78(27);
		}
		unk_0x14776E43F90DD454(Local_42.f_7);
		unk_0x96A3D9A8A4C7AFD4();
	}
	else
	{
		iLocal_49 = 0;
	}
}

int func_78(int iParam0)//Position - 0x3807
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_9055.f_99.f_219[iVar0], iVar1))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_9055.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

bool func_79(var uParam0)//Position - 0x3861
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

