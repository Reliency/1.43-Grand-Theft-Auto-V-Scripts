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
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	bool bLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	struct<4> Local_101 = { 0, 0, 0, 0 } ;
	struct<16> Local_102 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
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
	fLocal_94 = ((0,05f + 0,275f) - 0,01f);
	if (unk_0x8F38E94BBF3404CD(joaat("context_controller")) > 1)
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	unk_0x252CDD3D0F299441();
	iVar0 = 0;
	iVar1 = iVar0;
	system::settimera(0);
	Global_36759 = 0;
	func_38();
	StringCopy(&Global_36760, "CC_SUBSTR", 16);
	iVar2 = -1;
	iVar3 = -1;
	bVar4 = false;
	bVar5 = false;
	iVar6 = 0;
	iVar7 = -1;
	iVar8 = Global_70856;
	while (true)
	{
		if (Global_70856)
		{
			func_35();
		}
		else
		{
			func_33();
		}
		func_26();
		if (Global_70856 != iVar8)
		{
			func_25();
			func_38();
			iVar2 = -1;
			iVar8 = Global_70856;
			while (unk_0x1E06D00B67177A18())
			{
				system::wait(2000);
			}
		}
		if (Global_36765)
		{
			if (Global_36767 > -1)
			{
				if (!Global_36565[Global_36767 /*32*/].f_6)
				{
					if (!func_23(Global_36767, 1))
					{
						Global_36767 = -1;
					}
				}
			}
		}
		if (func_19())
		{
			iVar2 = -1;
			func_25();
		}
		if (iVar2 > -1)
		{
			if (!Global_36765)
			{
				if (Global_36767 != iVar2)
				{
					if (func_18(Global_36767))
					{
						func_25();
						if (!Global_36565[iVar2 /*32*/].f_5 && Global_36565[iVar2 /*32*/])
						{
							if (!func_19())
							{
								if (!Global_36565[iVar2 /*32*/].f_7)
								{
									if (!Global_36565[iVar2 /*32*/].f_6)
									{
										if (!Global_36565[iVar2 /*32*/].f_12)
										{
											func_17(Global_36565[iVar2 /*32*/].f_8, Global_36565[iVar2 /*32*/].f_3);
										}
										else
										{
											func_16(Global_36565[iVar2 /*32*/].f_8, Global_36565[iVar2 /*32*/].f_13, Global_36565[iVar2 /*32*/].f_3, Global_36565[iVar2 /*32*/].f_30);
										}
										Global_36767 = iVar2;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				func_25();
			}
		}
		else
		{
			func_25();
		}
		switch (iVar0)
		{
			case 0:
				iVar2 = func_15();
				if (unk_0x95F5E4FC196DC5AB(2, 51))
				{
					iVar6 = 1;
				}
				if (!func_19())
				{
					if (iVar2 > -1 && iVar6)
					{
						if (unk_0xE8C126B7ADBB9D63(2, 51))
						{
							Global_36565[iVar2 /*32*/].f_4 = 1;
							Global_36565[iVar2 /*32*/].f_29 = 0;
							iVar7 = Global_36565[iVar2 /*32*/].f_1;
							iVar0 = 1;
							Global_36758 = 0;
						}
					}
				}
				else
				{
					iVar2 = -1;
				}
				if (iVar3 != iVar2)
				{
					if (iVar2 != -1)
					{
						if (!unk_0xA7E3B4C3A60721A5(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B()), 1))
						{
							if (unk_0x88DDBE9908752BF0(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B()), 0))
							{
								if (unk_0xF6F627547A24DED8(0, 101))
								{
									bVar5 = true;
									unk_0x4FB260623DD93924(0, 101, 1);
								}
								if (unk_0xF6F627547A24DED8(0, 74))
								{
									bVar4 = true;
									unk_0x4FB260623DD93924(0, 74, 1);
								}
							}
						}
					}
					else
					{
						if (bVar5)
						{
							unk_0x2DB625A7D089C175(0, 101, 1);
							bVar5 = false;
						}
						if (bVar4)
						{
							unk_0x2DB625A7D089C175(0, 74, 1);
							bVar4 = false;
						}
					}
					iVar3 = iVar2;
				}
				break;
			
			case 1:
				if (iVar2 < 0 || func_14() == 0)
				{
					iVar0 = 0;
				}
				else
				{
					if (system::timera() > 5000)
					{
						Global_36565[iVar2 /*32*/].f_7 = 1;
						iVar0 = 0;
					}
					else if (func_13(iVar2))
					{
						iVar0 = 2;
					}
					if (!iVar7 == Global_36565[iVar2 /*32*/].f_1)
					{
						iVar0 = 0;
					}
					if (Global_36565[iVar2 /*32*/].f_7 || Global_36565[iVar2 /*32*/] == 0)
					{
						iVar0 = 0;
					}
				}
				break;
			
			case 2:
				if (Global_36758)
				{
					func_25();
				}
				if (unk_0xE8C126B7ADBB9D63(2, 51))
				{
					if (iVar2 > -1)
					{
						Global_36565[iVar2 /*32*/].f_29 = 0;
					}
				}
				if (Global_36759)
				{
					Global_36759 = 0;
					iVar0 = 0;
				}
				else if (iVar2 > -1)
				{
					if (!(Global_36565[iVar2 /*32*/].f_4 || Global_36565[iVar2 /*32*/].f_7))
					{
						Global_36759 = 0;
						iVar2 = -1;
					}
				}
				if (iVar2 > -1)
				{
					if (Global_36565[iVar2 /*32*/].f_7 || Global_36565[iVar2 /*32*/] == 0)
					{
						iVar2 = -1;
					}
				}
				if (iVar2 == -1)
				{
					iVar0 = 0;
					iVar6 = 0;
				}
				break;
		}
		if (iVar2 > -1)
		{
			unk_0x4FB260623DD93924(0, 46, 1);
			unk_0x4FB260623DD93924(0, 54, 1);
		}
		if (iVar0 != iVar1)
		{
			iVar1 = iVar0;
			system::settimera(0);
			iVar6 = 0;
		}
		func_12();
		func_10(&iVar2);
		Global_36764 = 0;
		Global_36765 = 0;
		func_1();
		system::wait(0);
	}
}

void func_1()//Position - 0x454
{
	int iVar0;
	
	if (!bLocal_98)
	{
		return;
	}
	iVar0 = 1;
	if (iLocal_103 == 1)
	{
		iVar0 = 0;
	}
	if (bLocal_99)
	{
		if (bLocal_100)
		{
			unk_0x082F06A6565F4379(0);
		}
		unk_0x67129637F30DEB3F(&Local_101);
		if (bLocal_100)
		{
			unk_0x854FACC4E5F40C82(&Local_102);
		}
		else
		{
			unk_0xA6D2B267C377D7B2(&Global_36760);
			unk_0xA6D2B267C377D7B2(&Local_102);
		}
		unk_0x376CFA11DE0FE521(0, 0, iVar0, 50);
	}
	else
	{
		unk_0x67129637F30DEB3F(&Local_101);
		unk_0xA6D2B267C377D7B2(&Global_36760);
		unk_0x376CFA11DE0FE521(0, 0, iVar0, 50);
	}
	switch (iLocal_103)
	{
		case 0:
			break;
		
		case 1:
			func_9(0);
			break;
		
		case 2:
			func_2(0);
			break;
	}
}

void func_2(int iParam0)//Position - 0x4F1
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_4(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_3())
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

bool func_3()//Position - 0x525
{
	return Global_2436181.f_2592[0 /*79*/].f_1 != 0;
}

bool func_4(bool bParam0)//Position - 0x53B
{
	return func_5(unk_0x9EB17624F44A8DA4(), bParam0);
}

int func_5(int iParam0, bool bParam1)//Position - 0x54D
{
	return func_6(iParam0, bParam1, 1);
}

int func_6(int iParam0, bool bParam1, int iParam2)//Position - 0x55E
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_7(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1627537[iParam0 /*532*/].f_11;
	if (iVar0 != func_8() && Global_1627537[iVar0 /*532*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_7(int iParam0, int iParam1)//Position - 0x5BA
{
	if (iParam0 != func_8())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_8())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 == iParam0 && Global_1627537[iParam0 /*532*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_8()//Position - 0x609
{
	return -1;
}

void func_9(int iParam0)//Position - 0x612
{
	unk_0x0229D557C8A77774(3, 21, 200, 0, 0);
	if (iParam0 && !func_3())
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_10(int iParam0)//Position - 0x63F
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/] && Global_36565[iVar0 /*32*/].f_4)
		{
			if (Global_36565[iVar0 /*32*/].f_31 != 0)
			{
				if (!unk_0x8F05914DD835E69F(Global_36565[iVar0 /*32*/].f_31))
				{
					if (*iParam0 > -1)
					{
						func_11();
					}
					Global_36565[iVar0 /*32*/] = 0;
					Global_36565[iVar0 /*32*/].f_31 = 0;
					Global_36565[iVar0 /*32*/] = 0;
					Global_36565[iVar0 /*32*/].f_4 = 0;
					Global_36565[iVar0 /*32*/].f_5 = 0;
					Global_36565[iVar0 /*32*/].f_2 = 0;
					Global_36565[iVar0 /*32*/].f_7 = 0;
					Global_36565[iVar0 /*32*/].f_6 = 0;
					Global_36565[iVar0 /*32*/].f_3 = 0;
					*iParam0 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_11()//Position - 0x6F7
{
	if (Global_36767 != -1 || bLocal_98)
	{
		bLocal_98 = false;
		Global_36767 = -1;
	}
}

void func_12()//Position - 0x716
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/].f_7)
		{
			if (iVar0 == Global_36767)
			{
				func_25();
			}
			Global_36565[iVar0 /*32*/].f_31 = 0;
			Global_36565[iVar0 /*32*/] = 0;
			Global_36565[iVar0 /*32*/].f_4 = 0;
			Global_36565[iVar0 /*32*/].f_5 = 0;
			Global_36565[iVar0 /*32*/].f_2 = 0;
			Global_36565[iVar0 /*32*/].f_7 = 0;
			Global_36565[iVar0 /*32*/].f_6 = 0;
			Global_36565[iVar0 /*32*/].f_1 = -1;
			Global_36565[iVar0 /*32*/].f_3 = 0;
		}
		iVar0++;
	}
}

int func_13(int iParam0)//Position - 0x7A3
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_36565[iParam0 /*32*/].f_5)
	{
		return 1;
	}
	return 0;
}

int func_14()//Position - 0x7C6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/] == 1)
		{
			if (Global_36565[iVar0 /*32*/].f_4 == 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_25();
	}
	return iVar1;
}

int func_15()//Position - 0x810
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/])
		{
			if (Global_36565[iVar0 /*32*/].f_2 > iVar1)
			{
				iVar2 = iVar0;
				iVar1 = Global_36565[iVar0 /*32*/].f_2;
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_16(struct<4> Param0, struct<16> Param1, var uParam2, var uParam3)//Position - 0x85C
{
	Local_101 = { Param0 };
	Local_102 = { Param1 };
	bLocal_98 = true;
	bLocal_99 = true;
	iLocal_103 = uParam2;
	bLocal_100 = uParam3;
}

void func_17(struct<4> Param0, var uParam1)//Position - 0x884
{
	Local_101 = { Param0 };
	bLocal_98 = true;
	bLocal_99 = false;
	iLocal_103 = uParam1;
}

int func_18(int iParam0)//Position - 0x89E
{
	int iVar0;
	
	if (Global_89907 && Global_89906)
	{
		return 0;
	}
	if (iParam0 > 0)
	{
		if (func_23(iParam0, 1) || bLocal_98)
		{
			return 1;
		}
	}
	if (unk_0xF491DD47B88AA84E() && !unk_0xA962CE8DA649FF3C())
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_23(iVar0, 1))
			{
				return 1;
			}
			iVar0++;
		}
		return 0;
	}
	return 1;
}

int func_19()//Position - 0x90C
{
	if (Global_68215)
	{
		return 1;
	}
	if (!unk_0x5BEF7A5AB8F17255(unk_0x98EC0789D9F0703B()))
	{
		return 1;
	}
	if (func_22(0))
	{
		return 1;
	}
	if (unk_0xA8113D347D14630F())
	{
		return 1;
	}
	if (Global_36764)
	{
		return 1;
	}
	if (unk_0x170B4D4E7CE48DA5(19))
	{
		return 1;
	}
	if (func_21(1))
	{
		return 1;
	}
	if (unk_0x1E06D00B67177A18())
	{
		return 1;
	}
	if (func_20(8, -1))
	{
		return 1;
	}
	return 0;
}

bool func_20(int iParam0, int iParam1)//Position - 0x983
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357530.f_203[iParam1];
			}
			break;
	}
	return unk_0xC80D31E4B587871C(Global_1357530.f_1048, iParam0);
}

bool func_21(bool bParam0)//Position - 0x9BE
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

int func_22(int iParam0)//Position - 0x9E7
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xC80D31E4B587871C(Global_2323, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_23(int iParam0, int iParam1)//Position - 0xA41
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_24(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_36565[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_36565[iVar0 /*32*/].f_12)
	{
		unk_0x5BE7193BC62CE2CE(&(Global_36565[iVar0 /*32*/].f_8));
		unk_0xA6D2B267C377D7B2(&Global_36760);
		iVar1 = unk_0x0683D2027E169355(0);
	}
	else
	{
		unk_0x5BE7193BC62CE2CE(&(Global_36565[iVar0 /*32*/].f_8));
		unk_0xA6D2B267C377D7B2(&Global_36760);
		if (Global_36565[iVar0 /*32*/].f_30)
		{
			unk_0x854FACC4E5F40C82(&(Global_36565[iVar0 /*32*/].f_13));
		}
		else
		{
			unk_0xA6D2B267C377D7B2(&(Global_36565[iVar0 /*32*/].f_13));
		}
		iVar1 = unk_0x0683D2027E169355(0);
	}
	return iVar1;
}

int func_24(int iParam0)//Position - 0xAF6
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25()//Position - 0xB31
{
	func_11();
	Global_36767 = -1;
}

void func_26()//Position - 0xB41
{
	if (!unk_0x1E06D00B67177A18() && !func_32())
	{
		if (func_31(0))
		{
			if (!unk_0xAB019B170BF1309C(&(Global_2447174.f_671.f_12)))
			{
				func_30();
				func_27(6, 0, 0);
			}
		}
	}
}

int func_27(int iParam0, bool bParam1, int iParam2)//Position - 0xB80
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Global_68328 = iParam0;
	bVar0 = iParam2 == true;
	bVar1 = iParam2 == 2;
	bVar2 = iParam2 == 3;
	switch (Global_68328)
	{
		case 3:
			Global_68326 = 0;
			break;
		
		case 4:
			Global_68326 = 3;
			break;
	}
	if (unk_0x8F38E94BBF3404CD(joaat("appsecuroserv")) > 0)
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (unk_0x8F38E94BBF3404CD(1476056117) > 0)
	{
		if (bVar1)
		{
		}
		return 0;
	}
	if (unk_0x8F38E94BBF3404CD(290327540) > 0)
	{
		if (bVar2)
		{
		}
		return 0;
	}
	if (unk_0x8F38E94BBF3404CD(joaat("appinternet")) > 0)
	{
		if ((bVar0 || bVar1) || bVar2)
		{
		}
		return 0;
	}
	if (Global_70856 && func_29())
	{
		return 0;
	}
	if (!Global_70856 && func_28())
	{
		return 0;
	}
	if (bVar0)
	{
		if (!unk_0x3B6F9DF9C5FEB3A4("appSecuroServ"))
		{
			unk_0xD9E2C360120FEB7C("appSecuroServ");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0x3B6F9DF9C5FEB3A4("appSecuroServ"))
		{
			system::wait(0);
		}
		system::start_new_script("appSecuroServ", 4592);
		unk_0x9D2418D7FC697249("appSecuroServ");
		return 1;
	}
	if (bVar1)
	{
		if (!unk_0x3B6F9DF9C5FEB3A4("appBikerBusiness"))
		{
			unk_0xD9E2C360120FEB7C("appBikerBusiness");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0x3B6F9DF9C5FEB3A4("appBikerBusiness"))
		{
			system::wait(0);
		}
		system::start_new_script("appBikerBusiness", 4592);
		unk_0x9D2418D7FC697249("appBikerBusiness");
		return 1;
	}
	if (bVar2)
	{
		if (!unk_0x3B6F9DF9C5FEB3A4("appImportExport"))
		{
			unk_0xD9E2C360120FEB7C("appImportExport");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0x3B6F9DF9C5FEB3A4("appImportExport"))
		{
			system::wait(0);
		}
		system::start_new_script("appImportExport", 4592);
		unk_0x9D2418D7FC697249("appImportExport");
		return 1;
	}
	if (!unk_0x3B6F9DF9C5FEB3A4("appInternet"))
	{
		unk_0xD9E2C360120FEB7C("appInternet");
		if (bParam1)
		{
			return 0;
		}
	}
	while (!unk_0x3B6F9DF9C5FEB3A4("appInternet"))
	{
		system::wait(0);
	}
	system::start_new_script("appInternet", 4592);
	unk_0x9D2418D7FC697249("appInternet");
	return 1;
}

var func_28()//Position - 0xD87
{
	return Global_68216;
}

var func_29()//Position - 0xD93
{
	return Global_1656139;
}

void func_30()//Position - 0xD9F
{
	Global_2447174.f_671.f_28 = 0;
}

bool func_31(bool bParam0)//Position - 0xDB1
{
	if (bParam0)
	{
		return (Global_2447174.f_671.f_28 && unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == Global_2447174.f_671.f_31);
	}
	return Global_2447174.f_671.f_28;
}

bool func_32()//Position - 0xDED
{
	return Global_68215;
}

void func_33()//Position - 0xDF9
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_53077[iVar1] < 0)
		{
			Global_53077[iVar1] = 0;
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		func_34(0);
		func_34(1);
		func_34(2);
	}
}

void func_34(int iParam0)//Position - 0xE43
{
	int iVar0;
	
	iVar0 = Global_53077[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xBFFF62F75445099D(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xBFFF62F75445099D(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xBFFF62F75445099D(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_35()//Position - 0xE9D
{
	struct<13> Var0;
	
	if (Global_1573304 != -1)
	{
		Var0 = Global_1573305[0];
		Var0.f_1 = Global_1573305[1];
		Var0.f_2 = Global_1573305[2];
		Var0.f_3 = Global_1573305[3];
		Var0.f_4 = Global_1573305[4];
		Var0.f_5 = Global_1573305[5];
		Var0.f_6 = Global_1573305[6];
		Var0.f_7 = Global_1573305[7];
		Var0.f_8 = Global_1573305[8];
		Var0.f_9 = Global_1573305[9];
		Var0.f_10 = Global_1573305[10];
		Var0.f_11 = Global_1573305[11];
		Var0.f_12 = Global_1573305[12];
		if (unk_0x04E8D1E1170F25E1() || unk_0x177281F5FA205A38())
		{
			if (!iLocal_104)
			{
				if (unk_0x8AF3CF4F442045D9(&Var0))
				{
					iLocal_104 = 1;
				}
			}
			if (iLocal_104)
			{
				if (unk_0xF433424C80A7F6F1())
				{
				}
				else
				{
					if (unk_0xDA8F35ED05C0DEC4())
					{
						StringCopy(&(Global_2097152[func_37() /*12130*/].f_11953.f_18[Global_1573304 /*6*/]), unk_0x7ED645C78531134E(&Var0), 24);
					}
					Global_1573304 = -1;
					iLocal_104 = 0;
				}
			}
		}
		else if (unk_0x8A81E55A71641BC1() || unk_0xFD6215BABFD843F2())
		{
			if (func_36(Var0))
			{
				StringCopy(&(Global_2097152[func_37() /*12130*/].f_11953.f_18[Global_1573304 /*6*/]), unk_0x7ED645C78531134E(&Var0), 24);
			}
			Global_1573304 = -1;
			iLocal_104 = 0;
		}
		else
		{
			if (func_36(Var0))
			{
				StringCopy(&(Global_2097152[func_37() /*12130*/].f_11953.f_18[Global_1573304 /*6*/]), unk_0x7177294B902237F2(&Var0), 24);
			}
			Global_1573304 = -1;
			iLocal_104 = 0;
		}
	}
}

bool func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x1019
{
	return unk_0xA024F2175B7F181A(&uParam0, 13);
}

int func_37()//Position - 0x1029
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_38()//Position - 0x1036
{
	int iVar0;
	
	Global_36758 = 0;
	Global_36764 = 0;
	Global_36765 = 0;
	Global_36766 = 1;
	Global_36767 = -1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_36565[iVar0 /*32*/] = 0;
		iVar0++;
	}
}

