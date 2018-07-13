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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0,0375f;
	fLocal_33 = 0,17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	unk_0x252CDD3D0F299441();
	unk_0x941BE77305BB5695(0);
	while (true)
	{
		system::wait(0);
		if (func_137())
		{
			func_134();
		}
		if (func_124())
		{
			func_134();
		}
		switch (iLocal_96)
		{
			case 0:
				if (!Global_2409075.f_16)
				{
					func_34();
				}
				if (!Global_2409075.f_15)
				{
					func_20();
				}
				if (func_14())
				{
					iLocal_96 = 1;
				}
				break;
			
			case 1:
				if (func_1())
				{
					func_134();
				}
				break;
			
			case 2:
				break;
		}
		if (unk_0x8EA3C8E091EA5BA4(iLocal_94))
		{
		}
	}
}

int func_1()//Position - 0xFB
{
	int iVar0;
	
	if (Global_2409075.f_16)
	{
		if (((!unk_0x78E929955680CA05() && !unk_0xA8113D347D14630F()) && !func_13()) && !func_8(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x4D87488C2E818AE8(0);
		}
		if (func_7())
		{
			if (!iLocal_97)
			{
				if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					unk_0xB18E1DBC397238E1(unk_0xFC1458A37D98B502(), true, 0);
					unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), false);
				}
				else
				{
					iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
					{
						unk_0xEDC33A771FAEB393(iVar0, false);
						unk_0xB8D9F55BA414128D(iVar0, 1, 0f, 0f, -1f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						unk_0x96247F0EC873C446(unk_0xFC1458A37D98B502(), iVar0, 20f, 786603);
						iLocal_99 = 1;
					}
				}
				iLocal_97 = 1;
			}
		}
		if (func_6(unk_0x9EB17624F44A8DA4(), 0, 1))
		{
			if (!Global_2409075.f_26)
			{
				Global_2409075.f_27 = unk_0xD1952A425B78FFC0();
				Global_2409075.f_26 = 1;
			}
			switch (Global_2409075)
			{
				case 0:
					if (!Global_2409075.f_17)
					{
						Global_2409075.f_27 = unk_0xD1952A425B78FFC0();
						Global_2409075.f_17 = 1;
					}
					if (func_4() || func_3())
					{
						return 1;
					}
					break;
				
				case 1:
					if ((func_4() || !func_2(-258271821)) || func_3())
					{
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
						{
							iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
							unk_0xEDC33A771FAEB393(iVar0, false);
							unk_0x94433067C90B34A5(iVar0, true);
						}
						Global_2409075.f_10 = 1;
						iLocal_99 = 0;
						unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
						return 1;
					}
					break;
				
				case 2:
					if ((func_4() || !func_2(-1146898486)) || func_3())
					{
						unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
						iLocal_99 = 0;
						return 1;
					}
					else if (Global_2409075.f_25 > 0)
					{
						if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
						{
							unk_0x176198C0CA92629F(1f);
							unk_0x93F12E7D8D931858(unk_0xFC1458A37D98B502(), 1193033728, 0);
						}
					}
					break;
				
				case 3:
					return 1;
					break;
				
				case 4:
				case 5:
					if (Global_2409075.f_19)
					{
						return 1;
					}
					break;
				
				default:
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_2(int iParam0)//Position - 0x31C
{
	int iVar0;
	
	iVar0 = unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), iParam0);
	if (!iVar0 == 7)
	{
		return 1;
	}
	return 0;
}

int func_3()//Position - 0x33D
{
	if (Global_2409075.f_26)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2409075.f_27)) > 6000)
		{
			return 1;
		}
	}
	return 0;
}

int func_4()//Position - 0x36B
{
	if (func_5(0))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0)//Position - 0x380
{
	if (unk_0xD4A7CC40FBEDD124(iParam0) < 2000)
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0, bool bParam1, bool bParam2)//Position - 0x399
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5BEF7A5AB8F17255(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436181.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_7()//Position - 0x3E3
{
	if (unk_0x1E06D00B67177A18())
	{
		if (unk_0x950AEA4C7FFF9EA4() != 3)
		{
			if (unk_0x70522E2561AD22FE() > 9)
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_8(int iParam0)//Position - 0x40F
{
	if (func_10(iParam0, 0))
	{
		return 1;
	}
	if (func_9())
	{
		if (iParam0 == unk_0x9EB17624F44A8DA4())
		{
			return 1;
		}
	}
	if (unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_9()//Position - 0x451
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

bool func_10(int iParam0, int iParam1)//Position - 0x462
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_11(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595693[iParam0 /*680*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			bVar0 = unk_0x917EE18109C5ACEA(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_11(int iParam0, bool bParam1)//Position - 0x4AD
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
	}
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_12()//Position - 0x4EE
{
	return Global_1312736;
}

bool func_13()//Position - 0x4FA
{
	return Global_92885.f_316 > 0;
}

int func_14()//Position - 0x50B
{
	if (Global_2409075.f_18)
	{
		func_19();
		return 1;
	}
	if (func_18() || func_17())
	{
		func_19();
		return 1;
	}
	if (func_16() && Global_2409075 != 6)
	{
		func_19();
		return 1;
	}
	if (Global_2409075.f_16 && Global_2409075.f_15)
	{
		return 1;
	}
	else if (!Global_2409075.f_20)
	{
		if (unk_0x8F38E94BBF3404CD(joaat("spawn_activities")) == 0)
		{
			if (func_15("spawn_activities", 1424))
			{
				Global_2409075.f_20 = 1;
			}
		}
	}
	else if (unk_0x8F38E94BBF3404CD(joaat("spawn_activities")) == 0)
	{
		func_19();
		return 1;
	}
	if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2409075.f_3)) > 120000)
	{
		func_19();
		return 1;
	}
	unk_0x872F1C1F8587CCC7(&(Global_1664859[1]), 22);
	return 0;
}

int func_15(char* sParam0, int iParam1)//Position - 0x5E9
{
	int iVar0;
	
	if (unk_0x8363098577425885(sParam0))
	{
		unk_0xD9E2C360120FEB7C(sParam0);
		if (unk_0x3B6F9DF9C5FEB3A4(sParam0))
		{
			if (iParam1 <= 0)
			{
				iParam1 = 512;
			}
			iVar0 = system::start_new_script(sParam0, iParam1);
			unk_0x9D2418D7FC697249(sParam0);
			return 1;
		}
	}
	return 0;
}

var func_16()//Position - 0x62C
{
	return Global_2447174.f_732;
}

var func_17()//Position - 0x63B
{
	return Global_2458078;
}

var func_18()//Position - 0x647
{
	return Global_1312850;
}

void func_19()//Position - 0x653
{
	Global_2409075.f_22 = -1;
	Global_2409075.f_23 = -1;
}

void func_20()//Position - 0x669
{
	if (!Global_2409075.f_22 > -1 || !Global_2409075.f_23 > -1)
	{
		Global_2409075.f_15 = 1;
	}
	else
	{
		if (Global_2409075.f_24 == 0)
		{
			if (!func_33(Global_2409075.f_22, Global_2409075.f_23) || func_31(func_32(Global_2409075.f_22, Global_2409075.f_23), -1, 0) > 0)
			{
				if (func_33(Global_2409075.f_22, Global_2409075.f_23))
				{
					func_26(func_32(Global_2409075.f_22, Global_2409075.f_23), -1);
				}
				func_22(Global_2409075.f_22, Global_2409075.f_23, 1, 1, 1, 1, 0, 0);
				Global_2409075.f_24++;
			}
			else
			{
				Global_2409075.f_15 = 1;
			}
		}
		if (Global_2409075.f_24 == 1)
		{
			if ((func_21() || (Global_4253357 == -1 && Global_4253357.f_1 == -1)) || Global_4253357.f_3 == 0)
			{
				Global_2409075.f_24++;
				Global_2409075.f_15 = 1;
			}
		}
	}
}

int func_21()//Position - 0x775
{
	if (Global_4253357.f_770 == 1)
	{
		return 1;
	}
	return 0;
}

void func_22(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x78D
{
	Global_4253357 = iParam0;
	Global_4253357.f_1 = iParam1;
	if (bParam3)
	{
		if (func_25(&Global_4253357))
		{
			func_24(&Global_4253357);
		}
	}
	Global_4253357.f_3 = 1;
	if (iParam4 || func_23(iParam0, iParam1))
	{
		Global_4253357.f_4 = 1;
	}
	Global_4253357.f_9 = iParam2;
	Global_4253357.f_13 = iParam5;
	Global_4253357.f_14 = iParam6;
	Global_4253357.f_15 = iParam7;
	if (unk_0xC80D31E4B587871C(Global_2325, 3))
	{
		Global_4253357.f_5 = 1;
	}
}

int func_23(int iParam0, int iParam1)//Position - 0x80E
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 3:
				case 4:
				case 5:
				case 6:
					return 1;
					break;
				
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 24:
				case 25:
				case 26:
				case 27:
				case 28:
				case 29:
				case 30:
				case 31:
				case 32:
				case 33:
				case 34:
					return 1;
					break;
				
				case 0:
				default:
					return 0;
					break;
			}
			break;
	}
	return 0;
}

void func_24(var uParam0)//Position - 0x909
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_31(func_32(2, 34), -1, 0);
	iVar1 = func_31(func_32(2, 33), -1, 0);
	iVar2 = func_31(func_32(2, 32), -1, 0);
	if (iVar0 > 0)
	{
		uParam0->f_1 = 34;
	}
	else if (iVar1 > 0)
	{
		uParam0->f_1 = 33;
	}
	else if (iVar2 > 0)
	{
		uParam0->f_1 = 32;
	}
}

int func_25(var uParam0)//Position - 0x968
{
	if (*uParam0 == 2)
	{
		if ((uParam0->f_1 == 32 || uParam0->f_1 == 33) || uParam0->f_1 == 34)
		{
			return 1;
		}
	}
	return 0;
}

void func_26(int iParam0, int iParam1)//Position - 0x9A0
{
	int iVar0;
	
	iVar0 = func_31(iParam0, func_30(iParam1), 0);
	iVar0++;
	if (!func_29(iParam0))
	{
		func_28(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_27(iParam0, iVar0, iParam1, 1);
	}
}

void func_27(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x9E1
{
	int iVar0;
	
	iVar0 = Global_2523060[iParam0 /*3*/][func_30(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1368159[func_30(uParam2)] = iParam1;
			break;
		
		case 785:
			Global_1368165[func_30(uParam2)] = iParam1;
			break;
		
		case 786:
			Global_1368171[func_30(uParam2)] = iParam1;
			break;
		
		case 787:
			Global_1368177[func_30(uParam2)] = iParam1;
			break;
		
		case 774:
			Global_1368135[func_30(uParam2)] = iParam1;
			break;
		
		case 775:
			Global_1368141[func_30(uParam2)] = iParam1;
			break;
		
		case 776:
			Global_1368147[func_30(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_1368153[func_30(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1368111[func_30(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1368117[func_30(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1368123[func_30(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1368129[func_30(uParam2)] = iParam1;
			break;
		
		case 754:
			Global_1368183[func_30(uParam2)] = iParam1;
			break;
		
		case 755:
			Global_1368189[func_30(uParam2)] = iParam1;
			break;
		
		case 756:
			Global_1368195[func_30(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1368201[func_30(uParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1368207[func_30(uParam2)] = iParam1;
			break;
		
		case 636:
			Global_1368213[func_30(uParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1368219[func_30(uParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2549199[0 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2549199[1 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2549199[2 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2549199[3 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 7052:
			Global_2549282[func_30(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1368225[func_30(uParam2)] = iParam1;
			break;
		
		case 762:
			Global_1368231[func_30(uParam2)] = iParam1;
			break;
		
		case 763:
			Global_1368237[func_30(uParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1368243[func_30(uParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2549239[0 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2549239[1 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2549239[2 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2549239[3 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2549239[4 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549285[0 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549285[1 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549285[2 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549285[3 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549285[4 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549301[0 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549301[1 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549301[2 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549301[3 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549301[4 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2549239[5 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2549199[4 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549317[func_30(uParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549326[func_30(uParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549320[func_30(uParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549329[func_30(uParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549323[func_30(uParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549332[func_30(uParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549335[func_30(uParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2549239[6 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2549199[5 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2549239[7 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2549199[6 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2549239[8 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2549199[7 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2549239[9 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2549199[8 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2549239[10 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2549199[9 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2549239[11 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2549199[10 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2549239[12 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2549199[11 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2549239[13 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2549199[12 /*3*/][func_30(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_28(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x10AC
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_30(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_29(int iParam0)//Position - 0x10DC
{
	if (Global_1368092)
	{
		switch (iParam0)
		{
			case 784:
			case 785:
			case 786:
			case 787:
			case 774:
			case 775:
			case 776:
			case 777:
			case 764:
			case 765:
			case 766:
			case 767:
			case 754:
			case 755:
			case 756:
			case 757:
			case 1300:
			case 636:
			case 1275:
			case 761:
			case 762:
			case 763:
			case 1233:
			case 1873:
			case 2264:
			case 2918:
			case 3047:
			case 7052:
			case 3042:
			case 3043:
			case 3044:
			case 3045:
			case 3046:
			case 3221:
			case 3223:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3631:
			case 3632:
			case 3633:
			case 3634:
			case 3216:
			case 3210:
			case 3652:
			case 3653:
			case 3654:
			case 3655:
			case 3656:
			case 3657:
			case 3678:
			case 3219:
			case 3218:
			case 4003:
			case 4002:
			case 4006:
			case 4005:
			case 4009:
			case 4008:
			case 4012:
			case 4011:
			case 6093:
			case 6092:
			case 6151:
			case 6150:
				return 1;
				break;
			}
	}
	return 0;
}

int func_30(var uParam0)//Position - 0x1292
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_12();
		if (iVar1 > -1)
		{
			Global_2522773 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522773 = 1;
		}
	}
	return iVar0;
}

int func_31(int iParam0, int iParam1, int iParam2)//Position - 0x12C6
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_30(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_32(int iParam0, int iParam1)//Position - 0x12F8
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return 1094;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 29:
					return 1094;
					break;
				
				case 30:
					return 62;
					break;
				
				case 31:
					return 63;
					break;
				
				case 32:
					return 1272;
					break;
				
				case 33:
					return 1273;
					break;
				
				case 34:
					return 1274;
					break;
			}
			break;
	}
	return 0;
}

int func_33(int iParam0, int iParam1)//Position - 0x138F
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 29:
				case 30:
				case 31:
				case 32:
				case 33:
				case 34:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_34()//Position - 0x13F7
{
	if (!Global_2409075 > -1)
	{
		Global_2409075.f_16 = 1;
	}
	else
	{
		switch (Global_2409075)
		{
			case 0:
				switch (Global_2409075.f_1)
				{
					case 0:
						if (func_6(unk_0x9EB17624F44A8DA4(), 0, 0))
						{
							Global_2409075.f_16 = 1;
						}
						break;
				}
				break;
			
			case 1:
				if (Global_2409075.f_1 == 0)
				{
					if (func_89())
					{
						Global_2409075.f_2 = 0;
						Global_2409075.f_8 = 1;
						Global_2409075.f_11 = 1;
						Global_2409075.f_12 = 1;
						Global_2409075.f_9 = 1;
						Global_2409075.f_1++;
					}
					else
					{
						Global_2409075.f_16 = 1;
					}
				}
				if (Global_2409075.f_1 == 1)
				{
					if (func_89())
					{
						if (func_6(unk_0x9EB17624F44A8DA4(), 0, 0))
						{
							if (func_87(0))
							{
								Global_2409075.f_1++;
							}
						}
					}
					else
					{
						Global_2409075.f_16 = 1;
					}
				}
				if (Global_2409075.f_1 == 2)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						Global_2409075.f_16 = 1;
					}
				}
				break;
			
			case 2:
				if (func_6(unk_0x9EB17624F44A8DA4(), 0, 0))
				{
					if (Global_2409075.f_25 > 0)
					{
						unk_0x176198C0CA92629F(2f);
						unk_0x93F12E7D8D931858(unk_0xFC1458A37D98B502(), 1193033728, 0);
					}
					else
					{
						unk_0x93F12E7D8D931858(unk_0xFC1458A37D98B502(), 1193033728, 0);
					}
					iLocal_99 = 1;
					Global_2409075.f_16 = 1;
				}
				break;
			
			case 3:
			case 4:
			case 5:
			case 6:
				if (func_6(unk_0x9EB17624F44A8DA4(), 0, 0))
				{
					if (Global_2409075.f_1 == 0)
					{
						func_86(Global_2409075);
						if (!Global_2405047.f_2640 && !func_85())
						{
							Global_2405047.f_2637 = 1;
						}
						iLocal_100 = unk_0xD1952A425B78FFC0();
						Global_2409075.f_1++;
					}
					if (Global_2409075.f_1 == 1)
					{
						if (!func_83(Global_2409075) || unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), iLocal_100) > 20000)
						{
							Global_2409075.f_16 = 1;
							func_82();
						}
						else
						{
							Global_1315784 = 1;
							if (!Global_2405047.f_2640 && !func_85())
							{
								func_35();
							}
							if (!iLocal_98)
							{
								unk_0xF9205900898CD25C(8);
								unk_0xF9205900898CD25C(2);
								iLocal_98 = 1;
							}
						}
					}
				}
				break;
			
			default:
				break;
			}
	}
}

void func_35()//Position - 0x1629
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 19400;
	if ((((((unk_0xC80D31E4B587871C(Global_1595343.f_22, 5) || unk_0xC80D31E4B587871C(Global_1595343.f_22, 6)) || unk_0xC80D31E4B587871C(Global_1595343.f_22, 8)) || unk_0xC80D31E4B587871C(Global_1595343.f_22, 7)) || unk_0xC80D31E4B587871C(Global_1595343.f_22, 9)) || unk_0xC80D31E4B587871C(Global_1595343.f_22, 20)) || func_81())
	{
		if (!unk_0xC80D31E4B587871C(Global_1048576.f_8, 0))
		{
			if (unk_0x8F38E94BBF3404CD(joaat("am_mp_property_int")) <= 0 && !unk_0xA357031C5C05DD94("AM_MP_PROPERTY_INT", Global_1048576.f_919, 1, 0))
			{
				unk_0xD9E2C360120FEB7C("AM_MP_PROPERTY_INT");
				if (unk_0x3B6F9DF9C5FEB3A4("AM_MP_PROPERTY_INT"))
				{
					system::start_new_script("AM_MP_PROPERTY_INT", iVar0);
					unk_0x9D2418D7FC697249("AM_MP_PROPERTY_INT");
					unk_0x872F1C1F8587CCC7(&(Global_1048576.f_8), 0);
				}
			}
		}
	}
	else if (Global_2405047.f_2637)
	{
		if (!unk_0xC80D31E4B587871C(Global_1048576.f_8, 0))
		{
			if (unk_0x8F38E94BBF3404CD(joaat("am_mp_property_int")) <= 0 && !unk_0xA357031C5C05DD94("AM_MP_PROPERTY_INT", Global_1048576.f_919, 1, 0))
			{
				unk_0xD9E2C360120FEB7C("AM_MP_PROPERTY_INT");
				if (unk_0x3B6F9DF9C5FEB3A4("AM_MP_PROPERTY_INT"))
				{
					system::start_new_script("AM_MP_PROPERTY_INT", iVar0);
					unk_0x9D2418D7FC697249("AM_MP_PROPERTY_INT");
					unk_0x872F1C1F8587CCC7(&(Global_1048576.f_8), 0);
				}
			}
		}
	}
	else if (Global_1595343.f_19 != 0 && func_80(unk_0x9EB17624F44A8DA4(), 1, 0))
	{
		if (!unk_0xC80D31E4B587871C(Global_1048576.f_8, 0))
		{
			if (unk_0x8F38E94BBF3404CD(joaat("am_mp_property_int")) <= 0 && !unk_0xA357031C5C05DD94("AM_MP_PROPERTY_INT", Global_1048576.f_919, 1, 0))
			{
				unk_0xD9E2C360120FEB7C("AM_MP_PROPERTY_INT");
				if (unk_0x3B6F9DF9C5FEB3A4("AM_MP_PROPERTY_INT"))
				{
					system::start_new_script("AM_MP_PROPERTY_INT", iVar0);
					unk_0x9D2418D7FC697249("AM_MP_PROPERTY_INT");
					unk_0x872F1C1F8587CCC7(&(Global_1048576.f_8), 0);
				}
			}
		}
	}
	else if (Global_2457298)
	{
		if (unk_0x8F38E94BBF3404CD(joaat("am_mp_property_int")) <= 0 && !unk_0xA357031C5C05DD94("AM_MP_PROPERTY_INT", Global_1048576.f_919, 1, 0))
		{
			unk_0xD9E2C360120FEB7C("AM_MP_PROPERTY_INT");
			if (unk_0x3B6F9DF9C5FEB3A4("AM_MP_PROPERTY_INT"))
			{
				system::start_new_script("AM_MP_PROPERTY_INT", iVar0);
				unk_0x9D2418D7FC697249("AM_MP_PROPERTY_INT");
				unk_0x872F1C1F8587CCC7(&(Global_1048576.f_8), 0);
				Global_2457298 = 0;
			}
		}
	}
	else if (((((!unk_0xC80D31E4B587871C(Global_1048576.f_8, 0) && !unk_0xC80D31E4B587871C(Global_2512808.f_376.f_5, 3)) && (!Global_2405046 || (Global_2405046 && Global_2447954.f_1.f_2825.f_13 > 0))) && !func_79()) && !func_74()) && !func_73())
	{
		if (unk_0x8F38E94BBF3404CD(joaat("am_mp_property_int")) <= 0 && !unk_0xA357031C5C05DD94("AM_MP_PROPERTY_INT", Global_1048576.f_919, 1, 0))
		{
			if (!func_72())
			{
				if (func_68())
				{
					unk_0xD9E2C360120FEB7C("AM_MP_PROPERTY_INT");
					if (unk_0x3B6F9DF9C5FEB3A4("AM_MP_PROPERTY_INT"))
					{
						system::start_new_script("AM_MP_PROPERTY_INT", iVar0);
						unk_0x9D2418D7FC697249("AM_MP_PROPERTY_INT");
						unk_0x872F1C1F8587CCC7(&(Global_1048576.f_8), 0);
						unk_0x872F1C1F8587CCC7(&(Global_1595343.f_22), 12);
						return;
					}
					return;
				}
			}
			else
			{
				if (!func_67(Global_1048576.f_918) && unk_0xBE3C4023003180FC(func_66(unk_0x9EB17624F44A8DA4()), func_65(Global_1048576.f_918), true) <= 30f)
				{
					if (func_63(&(Global_1049531[Global_1048576.f_918 /*1951*/]), 1, 0))
					{
						if (!Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_573)
						{
							unk_0xD9E2C360120FEB7C("AM_MP_PROPERTY_INT");
							if (unk_0x3B6F9DF9C5FEB3A4("AM_MP_PROPERTY_INT"))
							{
								system::start_new_script("AM_MP_PROPERTY_INT", iVar0);
								unk_0x9D2418D7FC697249("AM_MP_PROPERTY_INT");
								unk_0x872F1C1F8587CCC7(&(Global_1048576.f_8), 0);
								unk_0x872F1C1F8587CCC7(&(Global_1595343.f_22), 12);
								return;
							}
							return;
						}
					}
					else
					{
						Var1 = { func_66(unk_0x9EB17624F44A8DA4()) };
					}
				}
				if (func_58(Global_1048576.f_918, 0, 0))
				{
					if (func_49(Global_1048576.f_918, unk_0x9EB17624F44A8DA4(), 0, 1) || func_63(&(Global_1049531[Global_1048576.f_918 /*1951*/]), 1, 0))
					{
						if (!Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_573)
						{
							unk_0xD9E2C360120FEB7C("AM_MP_PROPERTY_INT");
							if (unk_0x3B6F9DF9C5FEB3A4("AM_MP_PROPERTY_INT"))
							{
								system::start_new_script("AM_MP_PROPERTY_INT", iVar0);
								unk_0x9D2418D7FC697249("AM_MP_PROPERTY_INT");
								unk_0x872F1C1F8587CCC7(&(Global_1048576.f_8), 0);
								unk_0x872F1C1F8587CCC7(&(Global_1595343.f_22), 12);
								return;
							}
							return;
						}
					}
				}
				if (unk_0xBE3C4023003180FC(func_66(unk_0x9EB17624F44A8DA4()), func_48(2), true) <= 30f)
				{
					func_47(&Var1, 2);
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Var1, Var1.f_3, Var1.f_6, 0, true, 0))
					{
						if (!Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_573)
						{
							unk_0xD9E2C360120FEB7C("AM_MP_PROPERTY_INT");
							if (unk_0x3B6F9DF9C5FEB3A4("AM_MP_PROPERTY_INT"))
							{
								system::start_new_script("AM_MP_PROPERTY_INT", iVar0);
								unk_0x9D2418D7FC697249("AM_MP_PROPERTY_INT");
								unk_0x872F1C1F8587CCC7(&(Global_1048576.f_8), 0);
								unk_0x872F1C1F8587CCC7(&(Global_1595343.f_22), 12);
								return;
							}
							return;
						}
					}
				}
				if (unk_0xBE3C4023003180FC(func_66(unk_0x9EB17624F44A8DA4()), func_48(6), true) <= 30f)
				{
					func_47(&Var1, 6);
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Var1, Var1.f_3, Var1.f_6, 0, true, 0))
					{
						if (!Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_573)
						{
							unk_0xD9E2C360120FEB7C("AM_MP_PROPERTY_INT");
							if (unk_0x3B6F9DF9C5FEB3A4("AM_MP_PROPERTY_INT"))
							{
								system::start_new_script("AM_MP_PROPERTY_INT", iVar0);
								unk_0x9D2418D7FC697249("AM_MP_PROPERTY_INT");
								unk_0x872F1C1F8587CCC7(&(Global_1048576.f_8), 0);
								unk_0x872F1C1F8587CCC7(&(Global_1595343.f_22), 12);
								return;
							}
							return;
						}
					}
				}
				if (unk_0xBE3C4023003180FC(func_66(unk_0x9EB17624F44A8DA4()), func_48(10), true) <= 30f)
				{
					func_47(&Var1, 10);
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Var1, Var1.f_3, Var1.f_6, 0, true, 0))
					{
						if (!Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_573)
						{
							unk_0xD9E2C360120FEB7C("AM_MP_PROPERTY_INT");
							if (unk_0x3B6F9DF9C5FEB3A4("AM_MP_PROPERTY_INT"))
							{
								system::start_new_script("AM_MP_PROPERTY_INT", iVar0);
								unk_0x9D2418D7FC697249("AM_MP_PROPERTY_INT");
								unk_0x872F1C1F8587CCC7(&(Global_1048576.f_8), 0);
								unk_0x872F1C1F8587CCC7(&(Global_1595343.f_22), 12);
								return;
							}
							return;
						}
					}
				}
				Global_1048576.f_918++;
				if (Global_1048576.f_918 > 117 || unk_0xC80D31E4B587871C(Global_1048576.f_8, 10))
				{
					Global_1048576.f_918 = 0;
					Global_1048576.f_920 = 0;
					if (unk_0xC80D31E4B587871C(Global_1048576.f_8, 10))
					{
						unk_0x0EE72DB1CD8A3B86(&(Global_1048576.f_8), 10);
					}
					if (Global_2447954.f_1.f_2825.f_13 != 0)
					{
						if ((!func_46() && !func_45()) && !unk_0x1345C4AFDFE5B1F3())
						{
							if ((!func_44() && !func_43()) && !func_42())
							{
								if ((!func_41() && !func_40()) && !func_39())
								{
									if (!func_38())
									{
										if (!func_37())
										{
											if (!Global_2447954.f_2843.f_157)
											{
												func_36();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_36()//Position - 0x1D24
{
	Global_2447954.f_1.f_2825.f_13 = 0;
	Global_2447954.f_1.f_2825 = 0;
	Global_2447954.f_1.f_2825.f_1 = 0;
	Global_2447954.f_1.f_2825.f_2 = 0;
	Global_2447954.f_1.f_2825.f_3 = 0;
	Global_2447954.f_1.f_2825.f_4 = 0;
	Global_2447954.f_1.f_2825.f_5 = 0;
	Global_2447954.f_1.f_2825.f_6 = 0;
	Global_2447954.f_1.f_2825.f_7 = 0;
	Global_2447954.f_1.f_2825.f_8 = 0;
	Global_2447954.f_1.f_2825.f_9 = 0;
	Global_2447954.f_1.f_2825.f_10 = 0;
	Global_2447954.f_1.f_2825.f_11 = 0;
	Global_2447954.f_1.f_2825.f_12 = 0;
}

bool func_37()//Position - 0x1DD2
{
	return Global_2447174.f_635;
}

bool func_38()//Position - 0x1DE1
{
	return Global_2447174.f_733;
}

bool func_39()//Position - 0x1DF0
{
	return unk_0xC80D31E4B587871C(Global_2447174, 20);
}

bool func_40()//Position - 0x1E02
{
	return unk_0xC80D31E4B587871C(Global_2447174, 2);
}

bool func_41()//Position - 0x1E13
{
	return unk_0xC80D31E4B587871C(Global_2447174, 1);
}

bool func_42()//Position - 0x1E24
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_196 != 0;
}

bool func_43()//Position - 0x1E3B
{
	return Global_1647212.f_3;
}

bool func_44()//Position - 0x1E49
{
	return Global_2447174.f_627;
}

bool func_45()//Position - 0x1E58
{
	return Global_2447174.f_579;
}

bool func_46()//Position - 0x1E67
{
	return Global_2447174.f_580;
}

struct<8> func_47(var uParam0, int iParam1)//Position - 0x1E76
{
	switch (iParam1)
	{
		case 2:
			*uParam0 = { 175,0434f, -998,7965f, -100,2256f };
			uParam0->f_3 = { 175,0878f, -1009,004f, -95,99992f };
			uParam0->f_6 = 14f;
			break;
		
		case 6:
			*uParam0 = { 212,9084f, -999,6776f, -99,99996f };
			uParam0->f_3 = { 189,6844f, -1000,068f, -95,2507f };
			uParam0->f_6 = 16,75f;
			break;
		
		case 10:
			*uParam0 = { 230,0094f, -1009,124f, -100,6539f };
			uParam0->f_3 = { 230,5939f, -964,022f, -94,53618f };
			uParam0->f_6 = 23,5f;
			break;
	}
	return *uParam0;
}

Vector3 func_48(int iParam0)//Position - 0x1F38
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 2:
			vVar0 = { 172,7787f, -1003,21f, -99,9999f };
			break;
		
		case 6:
			vVar0 = { 198,6071f, -1000,536f, -100f };
			break;
		
		case 10:
			vVar0 = { 227,8602f, -991,1093f, -99,9999f };
			break;
	}
	return vVar0;
}

int func_49(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1F9F
{
	struct<6> Var0[2];
	
	if (func_57(iParam0) || func_58(iParam0, 0, 0))
	{
		if (func_6(iParam1, 1, 1))
		{
			if (unk_0xBE3C4023003180FC(Global_1049531[iParam0 /*1951*/].f_146.f_47, func_66(unk_0x9EB17624F44A8DA4()), !bParam2) <= 75f)
			{
				func_51(iParam0, 971, &(Var0[0 /*6*/]), func_56(iParam0), 1);
				func_51(iParam0, 972, &(Var0[1 /*6*/]), func_56(iParam0), 1);
				if (unk_0x0F3033474C49912D(unk_0x25D049AAC4603E65(iParam1), Var0[0 /*6*/], Var0[1 /*6*/], Var0[0 /*6*/].f_3.f_2, 0, true, 0))
				{
					return 1;
				}
				else if (bParam3)
				{
					return 0;
				}
				if (bParam2)
				{
					if (Var0[0 /*6*/].f_2 < Var0[1 /*6*/].f_2)
					{
						Var0[0 /*6*/].f_2 = (Var0[0 /*6*/].f_2 - 1000f);
					}
					else
					{
						Var0[1 /*6*/].f_2 = (Var0[1 /*6*/].f_2 - 1000f);
					}
					if (unk_0x0F3033474C49912D(unk_0x25D049AAC4603E65(iParam1), Var0[0 /*6*/], Var0[1 /*6*/], 30f, 0, true, 0))
					{
						return 1;
					}
					if (unk_0x3E9CABD07B829173())
					{
						return 1;
					}
				}
				if (func_50(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_50(int iParam0)//Position - 0x20DA
{
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_211, 5);
}

void func_51(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x20F2
{
	struct<6> Var0[2];
	vector3 vVar1;
	
	Var0[0 /*6*/] = { func_55(iParam3, bParam4) };
	Var0[1 /*6*/] = { func_55(iParam0, bParam4) };
	*uParam2 = { func_53(iParam1, iParam3) };
	vVar1 = { *uParam2 - Var0[0 /*6*/] };
	vVar1 = { func_52(vVar1, -Var0[0 /*6*/].f_3.f_2) };
	vVar1 = { func_52(vVar1, Var0[1 /*6*/].f_3.f_2) };
	*uParam2 = { unk_0x9EA50C5EC175E58E(Var0[1 /*6*/], 0f, vVar1) };
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 153:
		case 154:
		case 155:
		case 157:
		case 234:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 235:
		case 149:
		case 150:
		case 151:
		case 152:
		case 172:
		case 187:
		case 173:
		case 201:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 300:
		case 301:
		case 302:
		case 303:
		case 304:
		case 306:
		case 305:
		case 308:
		case 309:
		case 312:
		case 313:
		case 314:
		case 315:
		case 316:
		case 317:
		case 318:
		case 319:
		case 320:
		case 321:
		case 322:
		case 323:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 307:
		case 331:
		case 332:
		case 333:
		case 334:
		case 310:
		case 335:
		case 336:
		case 337:
		case 338:
		case 339:
		case 311:
		case 340:
		case 435:
		case 436:
		case 437:
		case 470:
		case 477:
		case 504:
		case 507:
		case 510:
		case 513:
		case 528:
		case 531:
		case 534:
		case 537:
		case 540:
		case 547:
		case 445:
		case 446:
		case 447:
		case 448:
		case 449:
		case 450:
		case 471:
		case 472:
		case 478:
		case 479:
		case 505:
		case 506:
		case 508:
		case 509:
		case 511:
		case 512:
		case 514:
		case 515:
		case 529:
		case 530:
		case 532:
		case 533:
		case 535:
		case 536:
		case 538:
		case 539:
		case 541:
		case 542:
		case 548:
		case 549:
		case 432:
		case 433:
		case 434:
		case 451:
		case 452:
		case 453:
		case 454:
		case 455:
		case 456:
		case 459:
		case 460:
		case 461:
		case 462:
		case 463:
		case 464:
		case 560:
		case 546:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 501:
		case 502:
		case 500:
		case 616:
		case 615:
		case 612:
		case 629:
		case 630:
		case 631:
		case 714:
		case 633:
		case 634:
		case 635:
		case 636:
		case 637:
		case 638:
		case 639:
		case 640:
		case 643:
		case 644:
		case 641:
		case 642:
		case 646:
		case 645:
		case 647:
		case 648:
		case 649:
		case 650:
		case 666:
		case 667:
		case 668:
		case 669:
		case 670:
		case 671:
		case 673:
		case 674:
		case 675:
		case 676:
		case 677:
		case 689:
		case 690:
		case 691:
		case 692:
		case 693:
		case 694:
		case 695:
		case 696:
		case 697:
		case 698:
		case 699:
		case 700:
		case 701:
		case 702:
		case 703:
		case 704:
		case 705:
		case 706:
		case 707:
		case 708:
		case 709:
		case 710:
		case 711:
		case 712:
		case 713:
		case 632:
		case 738:
		case 739:
		case 740:
		case 741:
		case 742:
		case 743:
		case 744:
		case 745:
		case 746:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 715:
		case 716:
		case 717:
		case 718:
		case 719:
		case 720:
		case 721:
		case 722:
		case 723:
		case 724:
		case 725:
		case 726:
		case 727:
		case 728:
		case 729:
		case 730:
		case 731:
		case 732:
		case 733:
		case 734:
		case 735:
		case 736:
		case 737:
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 755:
		case 756:
		case 757:
		case 758:
		case 759:
		case 760:
		case 761:
		case 762:
		case 763:
		case 764:
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 770:
		case 771:
		case 772:
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 789:
		case 790:
		case 791:
		case 792:
		case 793:
		case 794:
		case 795:
		case 796:
		case 797:
		case 798:
		case 799:
		case 800:
		case 802:
		case 801:
		case 803:
		case 804:
		case 805:
		case 806:
		case 807:
		case 808:
		case 809:
		case 678:
		case 679:
		case 680:
		case 681:
		case 682:
		case 683:
		case 684:
		case 685:
		case 810:
		case 811:
		case 812:
		case 813:
		case 814:
		case 815:
		case 817:
		case 816:
		case 819:
		case 818:
		case 820:
		case 821:
		case 822:
		case 823:
		case 824:
		case 825:
		case 826:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 686:
		case 687:
		case 688:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
		case 879:
		case 880:
		case 881:
		case 882:
		case 883:
		case 884:
		case 888:
		case 889:
		case 890:
		case 891:
		case 651:
		case 652:
		case 653:
		case 654:
		case 655:
		case 656:
		case 657:
		case 658:
		case 659:
		case 660:
		case 661:
		case 662:
		case 663:
		case 664:
		case 665:
		case 887:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
		case 904:
		case 905:
		case 906:
		case 907:
		case 908:
		case 911:
		case 913:
		case 914:
		case 915:
		case 916:
		case 917:
		case 918:
		case 919:
		case 920:
		case 921:
		case 922:
		case 923:
		case 924:
		case 925:
		case 926:
		case 927:
		case 928:
		case 929:
		case 930:
		case 931:
		case 932:
		case 954:
		case 955:
		case 956:
		case 957:
		case 958:
		case 959:
		case 968:
		case 969:
		case 970:
		case 973:
		case 974:
		case 975:
		case 976:
		case 977:
		case 978:
		case 979:
		case 980:
		case 981:
		case 982:
		case 983:
		case 984:
		case 985:
		case 986:
		case 987:
		case 988:
		case 989:
		case 990:
		case 1008:
		case 1009:
		case 1010:
		case 991:
		case 992:
		case 993:
		case 994:
		case 995:
		case 996:
		case 997:
		case 998:
		case 999:
		case 960:
		case 961:
		case 962:
		case 963:
		case 964:
		case 965:
		case 966:
		case 967:
		case 1000:
		case 1001:
		case 1002:
		case 1003:
		case 1004:
		case 1005:
		case 1006:
		case 1007:
		case 1011:
		case 1012:
		case 1013:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

Vector3 func_52(vector3 vParam0, float fParam1)//Position - 0x35AC
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = system::sin(fParam1);
	fVar2 = system::cos(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_53(var uParam0, int iParam1)//Position - 0x35F0
{
	struct<6> Var0;
	var uVar1;
	int iVar2;
	
	iVar2 = 0;
	if (func_54(iParam1, &uVar1))
	{
		iVar2 = 1;
	}
	if (iVar2 && unk_0x334C7374628774BC(&Var0, &(Var0.f_3), uParam0, uVar1))
	{
		return Var0;
	}
	return Var0;
}

int func_54(int iParam0, var uParam1)//Position - 0x3632
{
	switch (iParam0)
	{
		case -1:
		case 1:
			*uParam1 = 0;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap", 64);
			return 1;
			break;
		
		case 61:
			*uParam1 = 1;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap_HighApt", 64);
			return 1;
			break;
		
		case 73:
			*uParam1 = 2;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap1", 64);
			return 1;
			break;
		
		case 77:
			*uParam1 = 3;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap2", 64);
			return 1;
			break;
		
		case 83:
			*uParam1 = 4;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap3", 64);
			return 1;
			break;
		
		case 86:
			*uParam1 = 5;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap4", 64);
			return 1;
			break;
		
		case 88:
			*uParam1 = 6;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
			return 1;
			break;
		
		case 91:
			*uParam1 = 7;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap6", 64);
			return 1;
			break;
		
		case 97:
			*uParam1 = 8;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap7", 64);
			return 1;
			break;
		
		case 109:
			*uParam1 = 9;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap8", 64);
			return 1;
			break;
	}
	return 0;
}

struct<6> func_55(int iParam0, bool bParam1)//Position - 0x374F
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761,0982f, 317,6259f, 169,5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761,1888f, 317,6295f, 216,0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795,3856f, 340,0188f, 152,7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778,5056f, 332,3779f, 212,1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258,1807f, -950,6853f, 70,0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285,0051f, -957,6552f, 85,3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471,882f, -530,7484f, 62,34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471,882f, -530,7484f, 49,72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463,15f, -540,2369f, 74,2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885,3702f, -451,4775f, 119,327f };
			Var0.f_3 = { 0f, 0f, 27,55617f };
			break;
		
		case 36:
			Var0 = { -913,0385f, -438,4284f, 114,3997f };
			Var0.f_3 = { 0f, 0f, -153,3093f };
			break;
		
		case 37:
			Var0 = { -892,5499f, -430,4789f, 88,25368f };
			Var0.f_3 = { 0f, 0f, 116,9193f };
			break;
		
		case 38:
			Var0 = { -35,0462f, -576,317f, 82,90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10,3788f, -590,7431f, 93,02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22,2487f, -589,1461f, 80,2305f };
			Var0.f_3 = { 0f, 0f, 69,88f };
			break;
		
		case 40:
			Var0 = { -900,6311f, -376,7462f, 78,27306f };
			Var0.f_3 = { 0f, 0f, 26,92611f };
			break;
		
		case 41:
			Var0 = { -929,483f, -374,5104f, 102,2329f };
			Var0.f_3 = { 0f, 0f, -152,5531f };
			break;
		
		case 63:
			Var0 = { -914,4202f, -375,8189f, 114,4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617,1647f, 64,6042f, 100,8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584,2015f, 42,7133f, 86,4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609,5665f, 50,2203f, 98,3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = { 0f, 0f, -63,5f };
			break;
		
		case 75:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = { 0f, 0f, -71,5f };
			break;
		
		case 76:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = { 0f, 0f, 40,5f };
			break;
		
		case 77:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = { 0f, 0f, -14,5f };
			break;
		
		case 79:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = { 0f, 0f, 4,5f };
			break;
		
		case 81:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374,2012f, 416,9688f, 142,6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573,098f, -4085,806f, 9,7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342,8157f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260,3297f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572,187f, -570,8315f, 109,9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383,954f, -476,7112f, 73,507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138,0029f, -629,739f, 170,2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74,8895f, -817,6883f, 244,8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100,764f, -3159,384f, -34,9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005,806f, -3157,67f, -36,0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576,571f, -569,7595f, 85,5f };
				Var0.f_3 = { 0f, 0f, 36,1f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571,254f, -566,5865f, 85,5f };
				Var0.f_3 = { 0f, 0f, -53,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568,098f, -571,9171f, 85,5f };
				Var0.f_3 = { 0f, 0f, -143,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384,518f, -475,8657f, 56,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384,538f, -475,8829f, 48,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378,994f, -477,2481f, 56,1f };
				Var0.f_3 = { 0f, 0f, -81,1f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186,5683f, -576,4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96,16f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113,886f, -564,3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110,96f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134,6568f, -635,1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9,04f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79,0479f, -822,6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70,3086f, -819,5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79,9861f, -818,425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_56(int iParam0)//Position - 0x4307
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 69:
		case 68:
		case 66:
		case 67:
			return 8;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 17;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 61;
			break;
		
		case 73:
		case 74:
		case 75:
		case 76:
			return 73;
			break;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			return 77;
			break;
		
		case 83:
		case 84:
		case 85:
			return 83;
			break;
		
		case 86:
			return 86;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 88;
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			return 91;
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 97;
			break;
		
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 109;
			break;
	}
	return -1;
}

int func_57(int iParam0)//Position - 0x4544
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_58(int iParam0, bool bParam1, bool bParam2)//Position - 0x4573
{
	if (bParam2)
	{
		return func_59(unk_0x9EB17624F44A8DA4(), 0);
	}
	if (bParam1)
	{
		if (func_59(unk_0x9EB17624F44A8DA4(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_59(int iParam0, bool bParam1)//Position - 0x464E
{
	if (Global_1595537 != func_62())
	{
		if (!func_61(Global_1595537))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x9EB17624F44A8DA4() != Global_1595537)
			{
				if (unk_0xC80D31E4B587871C(Global_2422736[Global_1595537 /*420*/].f_210, 24) || func_60(Global_1595537))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_210, 24);
}

int func_60(int iParam0)//Position - 0x46BA
{
	if (iParam0 != func_62())
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_210, 9);
	}
	return 0;
}

int func_61(int iParam0)//Position - 0x46E0
{
	if (iParam0 != func_62())
	{
		return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 2);
	}
	return 0;
}

int func_62()//Position - 0x470C
{
	return -1;
}

int func_63(var uParam0, int iParam1, float fParam2)//Position - 0x4715
{
	vector3 vVar0;
	
	if (iParam1 == 2 && !func_64(uParam0->f_31, -1))
	{
		if (unk_0xBE3C4023003180FC(func_66(unk_0x9EB17624F44A8DA4()), uParam0->f_1742.f_150, true) <= 30f)
		{
			if (unk_0x8AE9E5E8F6DC40C9(func_66(unk_0x9EB17624F44A8DA4()), uParam0->f_1742.f_153, uParam0->f_1742.f_153.f_3, uParam0->f_1742.f_153.f_6, 0, true))
			{
				return 1;
			}
		}
	}
	else
	{
		vVar0 = { func_66(unk_0x9EB17624F44A8DA4()) };
		if (unk_0xBE3C4023003180FC(func_66(unk_0x9EB17624F44A8DA4()), uParam0->f_146.f_47, true) <= 40f)
		{
			if ((unk_0x8AE9E5E8F6DC40C9(func_66(unk_0x9EB17624F44A8DA4()), uParam0->f_146.f_57[0 /*8*/], uParam0->f_146.f_57[0 /*8*/].f_3, uParam0->f_146.f_57[0 /*8*/].f_6, 0, true) || unk_0x8AE9E5E8F6DC40C9(func_66(unk_0x9EB17624F44A8DA4()), uParam0->f_146.f_57[1 /*8*/], uParam0->f_146.f_57[1 /*8*/].f_3, uParam0->f_146.f_57[1 /*8*/].f_6, 0, true)) || unk_0x8AE9E5E8F6DC40C9(func_66(unk_0x9EB17624F44A8DA4()), uParam0->f_146.f_57[2 /*8*/], uParam0->f_146.f_57[2 /*8*/].f_3, uParam0->f_146.f_57[2 /*8*/].f_6, 0, true))
			{
				return 1;
			}
			else if (unk_0xBE3C4023003180FC(vVar0, uParam0->f_146.f_1592, true) < (uParam0->f_146.f_1595 + fParam2) && (vVar0.z > uParam0->f_146.f_57[2 /*8*/].f_2 && vVar0.z < uParam0->f_146.f_57[2 /*8*/].f_3.f_2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_64(int iParam0, int iParam1)//Position - 0x48AB
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

Vector3 func_65(int iParam0)//Position - 0x4988
{
	vector3 vVar0;
	vector3 vVar1;
	
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			vVar1 = { Global_1049531[iParam0 /*1951*/].f_146.f_47 };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			vVar1 = { 348,132f, -997,2031f, -100,1741f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			vVar1 = { 264,3808f, -997,7274f, -100,0087f };
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			vVar1 = { Global_1049531[iParam0 /*1951*/].f_146.f_47 };
			break;
		
		case 73:
		case 74:
		case 75:
		case 76:
			vVar1 = { Global_1049531[iParam0 /*1951*/].f_146.f_47 };
			break;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			vVar1 = { Global_1049531[iParam0 /*1951*/].f_146.f_47 };
			break;
		
		case 83:
		case 84:
		case 85:
			vVar1 = { Global_1049531[iParam0 /*1951*/].f_146.f_47 };
			break;
		
		case 86:
			func_51(iParam0, 3, &vVar0, 86, 0);
			vVar1 = { vVar0 };
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			vVar1 = { Global_1049531[iParam0 /*1951*/].f_146.f_47 };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			vVar1 = { Global_1049531[iParam0 /*1951*/].f_146.f_47 };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			vVar1 = { Global_1049531[iParam0 /*1951*/].f_146.f_47 };
			break;
	}
	return vVar1;
}

Vector3 func_66(int iParam0)//Position - 0x4C50
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

int func_67(int iParam0)//Position - 0x4C63
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 0;
		
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
			return 1;
		
		default:
	}
	return 0;
}

int func_68()//Position - 0x4F43
{
	if (func_70(Global_1048576.f_920))
	{
		if (unk_0xBE3C4023003180FC(func_66(unk_0x9EB17624F44A8DA4()), Global_3934119[Global_1048576.f_920 /*2012*/].f_146.f_47, true) <= 30f)
		{
			if (func_69(unk_0x9EB17624F44A8DA4(), 0, 0))
			{
				if (!Global_2405047.f_2637 && !Global_2405047.f_2639)
				{
					return 0;
				}
			}
			if (func_63(&(Global_3934119[Global_1048576.f_920 /*2012*/]), 1, 0))
			{
				if (!Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_573)
				{
					return 1;
				}
			}
		}
	}
	Global_1048576.f_920++;
	if (Global_1048576.f_920 >= 36)
	{
		Global_1048576.f_920 = -1;
	}
	return 0;
}

int func_69(int iParam0, bool bParam1, int iParam2)//Position - 0x5004
{
	if (Global_2422736[iParam0 /*420*/].f_237 == 99)
	{
		if ((iParam2 && Global_2422736[iParam0 /*420*/].f_240 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2422736[iParam0 /*420*/].f_237 == 13)
		{
			return 0;
		}
	}
	return 1;
}

int func_70(int iParam0)//Position - 0x505B
{
	if (func_71(iParam0))
	{
		return Global_2520904.f_2[iParam0];
	}
	return 0;
}

int func_71(int iParam0)//Position - 0x507A
{
	if (iParam0 > -1 && iParam0 < 36)
	{
		return 1;
	}
	return 0;
}

int func_72()//Position - 0x5098
{
	if (Global_1048576.f_920 == -1)
	{
		return 1;
	}
	return 0;
}

bool func_73()//Position - 0x50B0
{
	return Global_1669535.f_28;
}

int func_74()//Position - 0x50BE
{
	if ((unk_0x4916190900E76373() && ((func_45() || func_46()) || (func_42() && func_78() <= 21))) && func_75())
	{
		return 1;
	}
	return 0;
}

int func_75()//Position - 0x5104
{
	if (unk_0x4916190900E76373())
	{
		return func_77();
	}
	return func_76(Global_4456448.f_122309);
}

int func_76(int iParam0)//Position - 0x5128
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4979[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_77()//Position - 0x5162
{
	return Global_2447174.f_14;
}

int func_78()//Position - 0x5170
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_196;
}

int func_79()//Position - 0x5185
{
	if (Global_2447954.f_6013 && !Global_2457297)
	{
		return 1;
	}
	return 0;
}

int func_80(int iParam0, bool bParam1, bool bParam2)//Position - 0x51A6
{
	if (iParam0 == func_62())
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

var func_81()//Position - 0x5210
{
	return Global_2447954.f_1.f_2839;
}

void func_82()//Position - 0x5221
{
	Global_2409075.f_14 = 0;
}

int func_83(int iParam0)//Position - 0x5230
{
	if (iParam0 == func_84())
	{
		return Global_2409075.f_14;
	}
	return 0;
}

int func_84()//Position - 0x524B
{
	return Global_2409075;
}

bool func_85()//Position - 0x5257
{
	return Global_1669535.f_15 != -1;
}

void func_86(int iParam0)//Position - 0x5267
{
	if (iParam0 == func_84())
	{
		Global_2409075.f_14 = 1;
	}
}

int func_87(int iParam0)//Position - 0x5282
{
	if (func_89())
	{
		if (Global_2409075.f_2 == 0)
		{
			Global_2409075.f_6 = 1;
			Global_2409075.f_4 = iParam0;
			Global_2409075.f_2++;
		}
		if (Global_2409075.f_2 == 1)
		{
			if (!Global_2409075.f_6)
			{
				Global_2409075.f_2 = 0;
				func_88();
				return 1;
			}
		}
	}
	return 0;
}

void func_88()//Position - 0x52DC
{
	Global_2409075.f_8 = 1;
	Global_2409075.f_11 = 0;
	Global_2409075.f_12 = 0;
	Global_2409075.f_4 = 1;
	Global_2409075.f_9 = 0;
	Global_2409075.f_2 = 0;
}

int func_89()//Position - 0x530E
{
	int iVar0;
	
	iVar0 = func_122();
	if ((((((iVar0 > -1 && !Global_1320310[iVar0 /*141*/].f_66 == 0) && !unk_0xC80D31E4B587871C(Global_1320310[iVar0 /*141*/].f_102, 1)) && !unk_0xC80D31E4B587871C(Global_1320310[iVar0 /*141*/].f_102, 6)) && !func_121(0)) && !func_121(31)) && func_90())
	{
		return 1;
	}
	return 0;
}

int func_90()//Position - 0x5387
{
	int iVar0;
	
	iVar0 = func_120();
	if (((((((((((((((((((((((((((func_119() || func_118()) || func_111()) || (func_110() && !func_108())) || (func_42() && !func_107())) || func_106(unk_0x9EB17624F44A8DA4())) || func_105(unk_0x9EB17624F44A8DA4())) || func_104(unk_0x9EB17624F44A8DA4())) || func_103()) || func_100()) || func_99()) || func_98()) || func_97()) || (func_96() && !func_107())) || (func_9() && !func_6(unk_0x9EB17624F44A8DA4(), 1, 0))) || func_10(unk_0x9EB17624F44A8DA4(), 0)) || Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 10) || Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 11) || Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 12) || Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 13) || Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 14) || Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 15) || Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 1) || Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 3) || Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 8) || Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 122) || func_95()) || (func_94() && (func_93() || func_91())))
	{
		return 0;
	}
	else if (iVar0 != -1)
	{
		if (((((((((Global_1595693[iVar0 /*680*/] == 10 || Global_1595693[iVar0 /*680*/] == 11) || Global_1595693[iVar0 /*680*/] == 12) || Global_1595693[iVar0 /*680*/] == 13) || Global_1595693[iVar0 /*680*/] == 14) || Global_1595693[iVar0 /*680*/] == 15) || Global_1595693[iVar0 /*680*/] == 1) || Global_1595693[iVar0 /*680*/] == 3) || Global_1595693[iVar0 /*680*/] == 8) || Global_1595693[iVar0 /*680*/] == 122)
		{
			return 0;
		}
	}
	return 1;
}

int func_91()//Position - 0x561F
{
	if (func_92() == 1 || func_92() == 4)
	{
		return 1;
	}
	return 0;
}

int func_92()//Position - 0x5641
{
	return Global_1312466.f_18;
}

int func_93()//Position - 0x564F
{
	if (func_92() == 3 || func_92() == 2)
	{
		return 1;
	}
	return 0;
}

bool func_94()//Position - 0x5671
{
	return unk_0xC80D31E4B587871C(Global_2447954.f_1.f_2809, 5);
}

int func_95()//Position - 0x5687
{
	if (((Global_1655673 && !Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 6) && !Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_487 >= 0) && !Global_1655674)
	{
		return 1;
	}
	return 0;
}

var func_96()//Position - 0x56CE
{
	return Global_2447174.f_713;
}

var func_97()//Position - 0x56DD
{
	return Global_2447174.f_609;
}

bool func_98()//Position - 0x56EC
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

var func_99()//Position - 0x5709
{
	return Global_1574312;
}

int func_100()//Position - 0x5715
{
	if (func_102(unk_0x9EB17624F44A8DA4()) || func_101(unk_0x9EB17624F44A8DA4()))
	{
		if (func_78() == 25)
		{
			return 1;
		}
	}
	return 0;
}

bool func_101(int iParam0)//Position - 0x5744
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

bool func_102(int iParam0)//Position - 0x5759
{
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

bool func_103()//Position - 0x576E
{
	return unk_0xC80D31E4B587871C(Global_2447174.f_557.f_1, 0);
}

bool func_104(int iParam0)//Position - 0x5784
{
	return Global_2422736[iParam0 /*420*/].f_130 == 4;
}

bool func_105(int iParam0)//Position - 0x5799
{
	return Global_2422736[iParam0 /*420*/].f_130 == 6;
}

bool func_106(int iParam0)//Position - 0x57AE
{
	return Global_2422736[iParam0 /*420*/].f_130 == 5;
}

bool func_107()//Position - 0x57C3
{
	return Global_2447174.f_35.f_50;
}

int func_108()//Position - 0x57D3
{
	if (func_109())
	{
		return 1;
	}
	if ((Global_2405047.f_26.f_6 > 0 && !Global_2405047.f_26.f_7) && !Global_2405047.f_26.f_4)
	{
		return 1;
	}
	return 0;
}

bool func_109()//Position - 0x5814
{
	return Global_1312831;
}

var func_110()//Position - 0x5820
{
	return Global_2405047.f_26.f_1;
}

int func_111()//Position - 0x5830
{
	if (func_122() > -1)
	{
		if ((func_102(unk_0x9EB17624F44A8DA4()) || func_101(unk_0x9EB17624F44A8DA4())) || func_115())
		{
			if (func_114(Global_1320310[func_122() /*141*/].f_66) || (func_113(Global_1320310[func_122() /*141*/].f_66) && func_112(Global_1320310[func_122() /*141*/].f_66)))
			{
				return 1;
			}
		}
	}
	return Global_2405047.f_26;
}

int func_112(int iParam0)//Position - 0x58AB
{
	switch (iParam0)
	{
		case 562680400:
			return Global_262145.f_20551;
		
		case 159274291:
			return Global_262145.f_20552;
		
		case 433954513:
			return Global_262145.f_20553;
		
		case -1924433270:
			return Global_262145.f_20554;
		
		case 1356124575:
			return Global_262145.f_20555;
		
		case -32236122:
			return Global_262145.f_20556;
		
		case -1881846085:
			return Global_262145.f_20557;
		
		case -1210451983:
			return Global_262145.f_20558;
		
		case 1897744184:
			return Global_262145.f_20559;
		
		case 884483972:
			return Global_262145.f_20560;
		
		case -1242608589:
			return Global_262145.f_21638;
		
		case 1489874736:
			return Global_262145.f_22182;
		
		case 1483171323:
			return Global_262145.f_22183;
		
		case 886810209:
			return Global_262145.f_22184;
		
		case -1693015116:
			return Global_262145.f_22185;
		
		case -692292317:
			return Global_262145.f_22186;
		
		case -212993243:
			return Global_262145.f_22187;
		
		case -1435527158:
			return Global_262145.f_22188;
		
		case 1561920505:
			return Global_262145.f_22189;
		
		case 903794909:
			return Global_262145.f_22190;
		
		case -410205223:
			return Global_262145.f_22192;
		
		case -2118308144:
			return Global_262145.f_22193;
		
		case 447548909:
			return Global_262145.f_22194;
		
		case 1181327175:
			return Global_262145.f_22195;
		
		default:
	}
	if (iParam0 == -391595372)
	{
		return Global_262145.f_22191;
	}
	return 0;
}

int func_113(int iParam0)//Position - 0x5A4F
{
	switch (iParam0)
	{
		case 562680400:
		case -32236122:
		case 1897744184:
		case 884483972:
		case -1210451983:
		case -1881846085:
		case 1502869817:
		case 1356124575:
		case -1924433270:
		case 177270108:
		case 159274291:
		case 433954513:
		case 387748548:
		case -769147461:
		case -1242608589:
		case 1489874736:
		case 1483171323:
		case 886810209:
		case -1693015116:
		case -692292317:
		case -212993243:
		case -1435527158:
		case -2118308144:
		case 447548909:
		case 1181327175:
			return 1;
		
		default:
	}
	return 0;
}

int func_114(int iParam0)//Position - 0x5AF9
{
	switch (iParam0)
	{
		case joaat("voltic2"):
		case joaat("ruiner2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("technical2"):
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("wastelander"):
			return 1;
		
		default:
	}
	return 0;
}

int func_115()//Position - 0x5B43
{
	if (unk_0x4916190900E76373())
	{
		return func_117();
	}
	return func_116(Global_4456448.f_122309);
}

int func_116(int iParam0)//Position - 0x5B67
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4997[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_117()//Position - 0x5BA1
{
	return Global_2447174.f_16;
}

var func_118()//Position - 0x5BAF
{
	return Global_1655651;
}

var func_119()//Position - 0x5BBB
{
	return Global_2436181.f_502.f_51;
}

var func_120()//Position - 0x5BCC
{
	return Global_2447174.f_650;
}

bool func_121(int iParam0)//Position - 0x5BDB
{
	if (iParam0 < 32)
	{
		return unk_0xC80D31E4B587871C(Global_2436181.f_502.f_1, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2436181.f_502.f_2, (iParam0 - 32));
}

int func_122()//Position - 0x5C11
{
	return Global_2097152[func_123() /*12130*/].f_7676.f_2;
}

int func_123()//Position - 0x5C29
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_124()//Position - 0x5C36
{
	var uVar0;
	
	func_131(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_130())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_129())
	{
		return 1;
	}
	if (func_128(157))
	{
		if (!func_127())
		{
			return 1;
		}
	}
	if (func_128(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_125() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_125()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_125()//Position - 0x5CC0
{
	switch (func_126())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_126()//Position - 0x5CF4
{
	return Global_25233;
}

bool func_127()//Position - 0x5CFF
{
	return Global_2447174.f_586;
}

int func_128(int iParam0)//Position - 0x5D0E
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_129()//Position - 0x5D25
{
	return Global_2456830;
}

bool func_130()//Position - 0x5D31
{
	return Global_2447174.f_581;
}

void func_131(var uParam0)//Position - 0x5D40
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(1))
	{
		iVar1 = unk_0xA387B84DA2EB1BEE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x575EF325DA5E3F04(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1155637934:
					func_132(iVar0);
					break;
				
				case 1662227603:
					unk_0x575EF325DA5E3F04(1, iVar0, &vVar3, 4);
					if (vVar3.z == 1204917378)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_132(int iParam0)//Position - 0x5DB3
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_6(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_133(iVar2, &bVar3))
						{
							unk_0x38CCEC620E3BB265(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x5380482A432E314E(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_133(int iParam0, var uParam1)//Position - 0x5E34
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x9761C10D57B68069(iParam0))
		{
			if (unk_0x828686E167EA3FD3(iParam0))
			{
				if (!unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(iParam0)))
				{
					unk_0xDD29FF4BAB8AFF9C(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xCB234F3DD6FF9368(iParam0, 0))
		{
			if (unk_0xA0BF73C5030D3F60(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_134()//Position - 0x5E93
{
	func_135();
	unk_0x96A3D9A8A4C7AFD4();
}

void func_135()//Position - 0x5EA3
{
	Global_4253357.f_9 = 0;
	func_136();
	if (unk_0x8EA3C8E091EA5BA4(iLocal_94))
	{
		unk_0x02934BABFD4CD384(iLocal_94, 0);
	}
	if (unk_0x8EA3C8E091EA5BA4(iLocal_95))
	{
		unk_0x02934BABFD4CD384(iLocal_95, 0);
	}
	if (iLocal_99)
	{
		if (func_6(unk_0x9EB17624F44A8DA4(), 0, 1))
		{
			unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
		}
	}
}

void func_136()//Position - 0x5EF0
{
	struct<28> Var0;
	
	Var0.f_4 = 1;
	Var0.f_5 = 1;
	Var0.f_18 = 1;
	Var0.f_21 = 1125515264;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Global_2409075 = { Var0 };
}

bool func_137()//Position - 0x5F2F
{
	return Global_1312749;
}

