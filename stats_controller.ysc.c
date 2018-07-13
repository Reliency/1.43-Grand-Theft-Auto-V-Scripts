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
	int iLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
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
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0,0375f;
	fLocal_27 = 0,17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_53 = 3;
	unk_0x252CDD3D0F299441();
	if (unk_0x7D9C4B359376D38A(32))
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	while (true)
	{
		func_100();
		switch (iLocal_54)
		{
			case 0:
				func_95();
				break;
			
			case 1:
				func_86();
				func_2();
				Global_90262 = 0;
				break;
			
			case 2:
				func_1();
				break;
		}
		system::wait(0);
	}
}

void func_1()//Position - 0xCC
{
	iLocal_54 = 0;
}

void func_2()//Position - 0xD7
{
	int iVar0;
	bool bVar1;
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
	bool bVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	
	if (iLocal_60)
	{
		iLocal_60 = 0;
	}
	else
	{
		iLocal_55++;
	}
	bLocal_59 = false;
	if (unk_0x3A711520F83BAE98())
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = func_82();
	}
	if (iVar0 != iLocal_58)
	{
		iLocal_58 = iVar0;
		bLocal_59 = true;
		iLocal_66 = 0;
		iLocal_67 = 0;
		iLocal_74 = 0;
		iLocal_80 = 0;
	}
	if (iLocal_58 == 145)
	{
		return;
	}
	bVar1 = false;
	if ((iLocal_55 == 6 && func_81(64)) || (iLocal_55 == 5 && unk_0x8F38E94BBF3404CD(joaat("pilot_school")) > 0))
	{
		bVar1 = true;
		iLocal_60 = 1;
	}
	func_75();
	if (Global_90260 || (Global_90261 && !func_72(0)))
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			iVar2 = 0;
			while (iVar2 < 8)
			{
				func_71(iLocal_58, iVar2);
				iVar2++;
			}
			Global_90260 = 0;
		}
	}
	if (!bVar1)
	{
		if (((((((((unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) || (!unk_0x3A711520F83BAE98() && !func_70(iLocal_58))) || unk_0x1E06D00B67177A18()) || func_69()) || unk_0xA8113D347D14630F()) || unk_0x3E9CABD07B829173()) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || Global_70854) || Global_90262) || iLocal_61)
		{
			iLocal_82 = 1;
			iLocal_83 = unk_0x53C562FD2B9E3AB0();
			if (unk_0x3A711520F83BAE98())
			{
				iLocal_84 = unk_0xD1952A425B78FFC0();
			}
			return;
		}
		if (iLocal_82)
		{
			if ((!unk_0x3A711520F83BAE98() && (unk_0x53C562FD2B9E3AB0() - iLocal_83) > 3000) || (unk_0x3A711520F83BAE98() && unk_0x05BC39B137F4CA7B(unk_0xD1952A425B78FFC0(), unk_0x1B4120BD20115C5C(iLocal_84, 3000))))
			{
				iLocal_82 = 0;
			}
			else
			{
				return;
			}
		}
	}
	if (((!unk_0x3A711520F83BAE98() && (unk_0x53C562FD2B9E3AB0() - iLocal_56) > 2000) || (unk_0x3A711520F83BAE98() && unk_0x05BC39B137F4CA7B(unk_0xD1952A425B78FFC0(), unk_0x1B4120BD20115C5C(iLocal_57, 2000)))) || bLocal_59)
	{
		if (iLocal_55 >= 8)
		{
			iLocal_55 = 0;
			iLocal_56 = unk_0x53C562FD2B9E3AB0();
			if (unk_0x3A711520F83BAE98())
			{
				iLocal_57 = unk_0xD1952A425B78FFC0();
			}
		}
		iVar11 = 1;
		if (bLocal_59)
		{
			iVar11 = 8;
		}
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			bVar13 = true;
			if (bLocal_59)
			{
				iVar8 = iVar12;
			}
			else
			{
				iVar8 = iLocal_55;
			}
			func_68(iLocal_58, iVar8, &iVar6, &iVar7);
			if (unk_0x3A711520F83BAE98())
			{
				iVar3 = func_67(iVar7, -1, 0);
			}
			else if (iVar8 == 0)
			{
				iVar3 = Global_104555.f_2353.f_539.f_2367[iLocal_58];
			}
			else
			{
				unk_0xFA3CE529DBB66C85(iVar6, &iVar3, -1);
			}
			iVar5 = iVar3;
			iVar3 = func_66(iVar3, 0, 100);
			if (func_53(iLocal_58, iVar8, iVar3, &iVar4))
			{
				if (unk_0x3A711520F83BAE98())
				{
					func_52(iVar7, iVar4, -1, 1, 0);
				}
				else if (iVar8 == 0)
				{
					if (Global_104555.f_2353.f_539.f_2367[iLocal_58] == 0)
					{
						bVar13 = false;
					}
					Global_104555.f_2353.f_539.f_2367[iLocal_58] = iVar4;
				}
				else
				{
					unk_0xBFFF62F75445099D(iVar6, iVar4, 1);
				}
				if (iVar4 > func_50(iLocal_58, iVar8, -1))
				{
					if (unk_0x3A711520F83BAE98())
					{
					}
					else if ((!Global_104555.f_9055 && !func_49(0)) || !unk_0xC80D31E4B587871C(Global_104555.f_9055.f_2[27 /*3*/], 2))
					{
						bVar13 = false;
					}
					iVar14 = iVar4;
					iVar15 = (iVar14 - (iVar14 % func_48(iLocal_58, iVar8)));
					if ((iVar14 % func_48(iLocal_58, iVar8)) >= 0)
					{
						iVar15 = (iVar15 + func_48(iLocal_58, iVar8));
					}
					if (iVar14 >= iVar15)
					{
						iVar14 = iVar15;
					}
					else
					{
						iVar14 = (iVar15 - func_48(iLocal_58, iVar8));
					}
					if (iVar4 > iVar14)
					{
						bVar13 = false;
					}
					if (func_42())
					{
						bVar13 = false;
					}
					if (bVar13)
					{
						if (!bLocal_59)
						{
							if (unk_0x3A711520F83BAE98())
							{
								if (func_41(117, -1) == 0)
								{
									if (!unk_0xF491DD47B88AA84E() && func_9())
									{
										func_8("STAT_HELP2", -1);
										func_4(117, 1, -1, 1);
									}
								}
							}
							iLocal_61 = 1;
							iLocal_64 = (iVar4 - iVar3);
							iLocal_64 = (iLocal_64 + (iVar3 % func_48(iLocal_58, iVar8)));
							iLocal_65 = iVar4;
							iLocal_62 = iLocal_58;
							iLocal_63 = iVar8;
						}
					}
					if (iVar4 >= 100)
					{
						if (func_3(iLocal_58, iVar8, &iVar9))
						{
							if (iLocal_58 == 0)
							{
								unk_0xFA3CE529DBB66C85(joaat("sp0_total_playing_time"), &iVar10, -1);
								unk_0xBFFF62F75445099D(iVar9, iVar10, 1);
							}
							else if (iLocal_58 == 1)
							{
								unk_0xFA3CE529DBB66C85(joaat("sp1_total_playing_time"), &iVar10, -1);
								unk_0xBFFF62F75445099D(iVar9, iVar10, 1);
							}
							else if (iLocal_58 == 2)
							{
								unk_0xFA3CE529DBB66C85(joaat("sp2_total_playing_time"), &iVar10, -1);
								unk_0xBFFF62F75445099D(iVar9, iVar10, 1);
							}
							else if (iLocal_58 == 3)
							{
							}
						}
					}
				}
				func_71(iLocal_58, iVar8);
			}
			else if (iVar4 < iVar5)
			{
				bVar16 = true;
				if (unk_0x3A711520F83BAE98())
				{
					func_52(iVar7, iVar4, -1, 1, 0);
				}
				else if (iVar8 == 0)
				{
					Global_104555.f_2353.f_539.f_2367[iLocal_58] = iVar4;
					bVar16 = false;
				}
				else
				{
					unk_0xBFFF62F75445099D(iVar6, iVar4, 1);
				}
				if (bVar16)
				{
					func_71(iLocal_58, iVar8);
				}
			}
			iVar12++;
		}
	}
	else
	{
		iLocal_60 = 1;
	}
}

bool func_3(int iParam0, int iParam1, var uParam2)//Position - 0x5B8
{
	*uParam2 = joaat("last_playing_time");
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability_maxed");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability_maxed");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability_maxed");
					break;
			}
			break;
	}
	return *uParam2 != joaat("last_playing_time");
}

void func_4(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x7A0
{
	int iVar0;
	
	if (func_7())
	{
		iVar0 = Global_2547365[iParam0 /*3*/][func_5(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x41495934EA1DEC56(iVar0, bParam1, iParam3);
		}
	}
}

int func_5(var uParam0)//Position - 0x7D2
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
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

int func_6()//Position - 0x806
{
	return Global_1312736;
}

int func_7()//Position - 0x812
{
	return 1;
	return 0;
}

void func_8(char* sParam0, int iParam1)//Position - 0x81F
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

int func_9()//Position - 0x836
{
	if (unk_0xE11392CE1C2ACBA4() && unk_0x2918F48A30D03841())
	{
		return 0;
	}
	if (Global_1655818 == 1)
	{
		return 0;
	}
	if (Global_1655673 == 1)
	{
		return 0;
	}
	if (unk_0xF854F6FDB3F8CA03())
	{
		return 0;
	}
	if (Global_1574299 == 1)
	{
		return 0;
	}
	if (unk_0x6ECA49C17C28C1BD())
	{
		return 0;
	}
	if (Global_979887)
	{
		return 0;
	}
	if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_577 == 1)
	{
		return 0;
	}
	if (func_40())
	{
		return 0;
	}
	if (func_39())
	{
		return 0;
	}
	if (func_38())
	{
		if (!func_39())
		{
			if (!func_37(3, -1))
			{
				if (func_35(&Global_2459138, 300000, 0) == 1)
				{
					func_34(&Global_2459136);
					func_32(3, -1);
				}
				else if (func_35(&Global_2459136, 7000, 0) == 0)
				{
					return 0;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_31())
	{
		return 0;
	}
	if (func_30())
	{
		return 0;
	}
	if (func_28())
	{
		return 0;
	}
	if (func_27())
	{
		return 0;
	}
	if (func_26())
	{
		return 0;
	}
	if (func_25())
	{
		return 0;
	}
	if (unk_0x78E929955680CA05())
	{
		return 0;
	}
	if (unk_0x0F30C1F1717A6437())
	{
		return 0;
	}
	if (unk_0x43E3A4534ED4A79C())
	{
		if (func_24(unk_0xFC1458A37D98B502()) == joaat("weapon_sniperrifle") || func_24(unk_0xFC1458A37D98B502()) == joaat("weapon_heavysniper"))
		{
			return 0;
		}
	}
	if (unk_0x3E9CABD07B829173())
	{
		return 0;
	}
	if (func_23(8, -1))
	{
		return 0;
	}
	if (func_22(12, -1))
	{
		return 0;
	}
	if (unk_0x170B4D4E7CE48DA5(19))
	{
		return 0;
	}
	if (func_21())
	{
		return 0;
	}
	if (func_20())
	{
		return 0;
	}
	if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_35)
	{
		return 0;
	}
	if (Global_1574129)
	{
		return 0;
	}
	if (Global_1574133)
	{
		return 0;
	}
	if (Global_1574135)
	{
		return 0;
	}
	if (Global_2436181.f_3764.f_39)
	{
		return 0;
	}
	if (func_19(0))
	{
		return 0;
	}
	if (func_18())
	{
		return 0;
	}
	if (Global_2512808.f_3935)
	{
		return 0;
	}
	if (Global_2436181.f_3630)
	{
		return 0;
	}
	if (!func_17(unk_0x9EB17624F44A8DA4(), 1, 0))
	{
		return 0;
	}
	if (func_16(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (Global_2436181.f_3764.f_39 == 1)
	{
		return 0;
	}
	if (Global_2447954.f_2843.f_25 == 1)
	{
		return 0;
	}
	if (func_15(1))
	{
		return 0;
	}
	if (func_13())
	{
		return 0;
	}
	if (unk_0x170B4D4E7CE48DA5(16))
	{
		return 0;
	}
	if (func_12())
	{
		return 0;
	}
	if (func_11())
	{
		return 0;
	}
	if (unk_0x0332D718DB2E6381())
	{
		if (func_10("FHU_HELP3"))
		{
			return 0;
		}
	}
	if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_559)
	{
		return 0;
	}
	return 1;
}

int func_10(char* sParam0)//Position - 0xB0E
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

bool func_11()//Position - 0xB21
{
	return Global_2436181.f_1777.f_688 != 0;
}

bool func_12()//Position - 0xB35
{
	return Global_2436181.f_2912.f_578;
}

bool func_13()//Position - 0xB47
{
	return func_14();
}

bool func_14()//Position - 0xB53
{
	return Global_1351013.f_40 == 3;
}

bool func_15(bool bParam0)//Position - 0xB63
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

bool func_16(int iParam0)//Position - 0xB8C
{
	return unk_0xC80D31E4B587871C(Global_1626416[iParam0 /*35*/].f_13, 0);
}

int func_17(int iParam0, bool bParam1, bool bParam2)//Position - 0xBA3
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

int func_18()//Position - 0xBED
{
	if (unk_0x8F38E94BBF3404CD(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_19(int iParam0)//Position - 0xC0A
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

bool func_20()//Position - 0xC64
{
	return Global_1357530.f_112;
}

bool func_21()//Position - 0xC72
{
	return Global_2436181.f_2592[0 /*79*/].f_1 != 0;
}

int func_22(int iParam0, int iParam1)//Position - 0xC88
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1357530.f_137[iParam1])
				{
					return 1;
				}
				if (Global_1357530.f_170[iParam1])
				{
					return 1;
				}
			}
			break;
		
		default:
			if (unk_0xC80D31E4B587871C(Global_1357530.f_1046, iParam0))
			{
				return 1;
			}
			if (unk_0xC80D31E4B587871C(Global_1357530.f_1047, iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_23(int iParam0, int iParam1)//Position - 0xCF4
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

int func_24(int iParam0)//Position - 0xD2F
{
	var uVar0;
	
	unk_0x5AD8564EFD5BEC2E(iParam0, &uVar0, 1);
	return uVar0;
}

bool func_25()//Position - 0xD43
{
	return Global_2447174.f_580;
}

bool func_26()//Position - 0xD52
{
	return unk_0xC80D31E4B587871C(Global_971064.f_8, 13);
}

bool func_27()//Position - 0xD66
{
	return Global_2447174.f_579;
}

int func_28()//Position - 0xD75
{
	if (func_29() == 1 || func_29() == 4)
	{
		return 1;
	}
	return 0;
}

int func_29()//Position - 0xD97
{
	return Global_1312466.f_18;
}

int func_30()//Position - 0xDA5
{
	if (func_29() == 3 || func_29() == 2)
	{
		return 1;
	}
	return 0;
}

int func_31()//Position - 0xDC7
{
	if (unk_0x8F38E94BBF3404CD(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0, int iParam1)//Position - 0xDE1
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	Global_1368092 = 0;
	if (unk_0x2E68557F22711FDA() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0xA6B401698EA40CF7(0, iParam1);
			iVar1 = func_33(iParam1);
			iVar0 = unk_0x496616BFA56C89EB(iVar1);
			break;
		
		default:
			iVar1 = func_33(iParam1);
			iVar0 = unk_0x496616BFA56C89EB(iVar1);
			if (!unk_0xC80D31E4B587871C(iVar0, iParam0))
			{
				unk_0x872F1C1F8587CCC7(&iVar0, iParam0);
				unk_0xA6B401698EA40CF7(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_4(120, 0, iParam1, 1);
			func_4(124, 0, iParam1, 1);
			func_4(115, 0, iParam1, 1);
			func_4(119, 0, iParam1, 1);
			func_4(121, 0, iParam1, 1);
			func_4(122, 0, iParam1, 1);
			func_4(125, 0, iParam1, 1);
			func_52(1300, 0, iParam1, 1, 0);
			break;
	}
}

int func_33(int iParam0)//Position - 0xEC0
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_6();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_34(var uParam0)//Position - 0xF23
{
	uParam0->f_1 = 0;
}

int func_35(var uParam0, int iParam1, bool bParam2)//Position - 0xF30
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_36(uParam0, bParam2, 0);
	if (unk_0x3A711520F83BAE98() && !bParam2)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0)) >= iParam1)
		{
			func_34(uParam0);
			return 1;
		}
	}
	else if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), *uParam0)) >= iParam1)
	{
		func_34(uParam0);
		return 1;
	}
	return 0;
}

void func_36(var uParam0, bool bParam1, bool bParam2)//Position - 0xF9A
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x3A711520F83BAE98() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD1952A425B78FFC0();
			}
			else
			{
				*uParam0 = unk_0xEBD55014C579F626();
			}
		}
		else
		{
			*uParam0 = unk_0x53C562FD2B9E3AB0();
		}
		uParam0->f_1 = 1;
	}
}

bool func_37(int iParam0, int iParam1)//Position - 0xFDF
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar0 = func_33(iParam1);
	iVar1 = unk_0x496616BFA56C89EB(iVar0);
	return unk_0xC80D31E4B587871C(iVar1, iParam0);
}

int func_38()//Position - 0x100B
{
	int iVar0;
	
	if (unk_0x4CAC17F5502E6EEB())
	{
		if (unk_0xE9F0A7BEA240607F())
		{
			if (unk_0x9881A219FD811741())
			{
				unk_0xFA3CE529DBB66C85(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0x872F1C1F8587CCC7(&iVar0, 2);
				unk_0x872F1C1F8587CCC7(&iVar0, 4);
				unk_0x872F1C1F8587CCC7(&iVar0, 6);
				unk_0x872F1C1F8587CCC7(&Global_25, 2);
				unk_0x872F1C1F8587CCC7(&Global_25, 4);
				unk_0x872F1C1F8587CCC7(&Global_25, 6);
				unk_0xBFFF62F75445099D(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x2E68557F22711FDA())
				{
					iVar0 = unk_0x496616BFA56C89EB(866);
					unk_0x872F1C1F8587CCC7(&iVar0, 0);
					unk_0xDDFB38BD8B59BBB9(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143074 == 2)
	{
		return 1;
	}
	else if (Global_143074 == 3)
	{
		return 0;
	}
	if (unk_0x2E68557F22711FDA())
	{
		if (unk_0xC80D31E4B587871C(unk_0x496616BFA56C89EB(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_39()//Position - 0x10C6
{
	return Global_1312854;
}

bool func_40()//Position - 0x10D2
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_196 != 0;
}

int func_41(int iParam0, int iParam1)//Position - 0x10E9
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2547365[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_42()//Position - 0x1115
{
	if (!func_46(1))
	{
		return 0;
	}
	if (func_43())
	{
		return 0;
	}
	return Global_1667854;
}

bool func_43()//Position - 0x1139
{
	return func_44(unk_0x9EB17624F44A8DA4());
}

int func_44(int iParam0)//Position - 0x1149
{
	if (iParam0 != func_45())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_45())
		{
			return Global_1627537[iParam0 /*532*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_45()//Position - 0x117E
{
	return -1;
}

bool func_46(bool bParam0)//Position - 0x1187
{
	return func_47(unk_0x9EB17624F44A8DA4(), bParam0);
}

bool func_47(int iParam0, bool bParam1)//Position - 0x1199
{
	if (!bParam1)
	{
		if (func_44(iParam0))
		{
			return 0;
		}
	}
	return Global_1627537[iParam0 /*532*/].f_11 != func_45();
}

int func_48(int iParam0, int iParam1)//Position - 0x11C4
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
	}
	return 1;
}

bool func_49(bool bParam0)//Position - 0x13D4
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

int func_50(int iParam0, int iParam1, int iParam2)//Position - 0x13FF
{
	if (!unk_0x3A711520F83BAE98())
	{
		if (func_51(14))
		{
			return 100;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 47;
					break;
				
				case 3:
					return 22;
					break;
				
				case 2:
					return 21;
					break;
				
				case 4:
					return 54;
					break;
				
				case 5:
					return 31;
					break;
				
				case 6:
					return 79;
					break;
				
				case 7:
					return 81;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 51;
					break;
				
				case 3:
					return 46;
					break;
				
				case 2:
					return 49;
					break;
				
				case 4:
					return 71;
					break;
				
				case 5:
					return 19;
					break;
				
				case 6:
					return 24;
					break;
				
				case 7:
					return 21;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 23;
					break;
				
				case 3:
					return 28;
					break;
				
				case 2:
					return 79;
					break;
				
				case 4:
					return 31;
					break;
				
				case 5:
					return 82;
					break;
				
				case 6:
					return 69;
					break;
				
				case 7:
					return 49;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_67(1221, iParam2, 0);
					break;
				
				case 3:
					return func_67(1227, iParam2, 0);
					break;
				
				case 2:
					return func_67(1223, iParam2, 0);
					break;
				
				case 4:
					return func_67(1226, iParam2, 0);
					break;
				
				case 5:
					return func_67(1225, iParam2, 0);
					break;
				
				case 6:
					return func_67(1222, iParam2, 0);
					break;
				
				case 7:
					return func_67(1224, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

bool func_51(int iParam0)//Position - 0x164C
{
	return Global_35861 == iParam0;
}

void func_52(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x165A
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_53(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x168A
{
	*uParam3 = func_54(iParam0, iParam1, 0, -1);
	if (*uParam3 > iParam2)
	{
		return 1;
	}
	return 0;
}

int func_54(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x16AC
{
	float fVar0;
	float fVar1;
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
	float fVar12;
	
	iVar2 = 0;
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				unk_0xFA3CE529DBB66C85(joaat("sp0_special_ability_unlocked"), &iVar3, -1);
				fVar0 = system::to_float(iVar3);
			}
			else if (iParam0 == 1)
			{
				unk_0xFA3CE529DBB66C85(joaat("sp1_special_ability_unlocked"), &iVar3, -1);
				fVar0 = system::to_float(iVar3);
			}
			else if (iParam0 == 2)
			{
				unk_0xFA3CE529DBB66C85(joaat("sp2_special_ability_unlocked"), &iVar3, -1);
				fVar0 = system::to_float(iVar3);
			}
			else if (iParam0 == 3)
			{
				fVar0 = system::to_float(func_67(64, iParam3, 0));
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				unk_0xBF9EAA044015B0A2(joaat("sp0_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_104555.f_2353.f_539.f_2335[iParam0]) / 175f);
			}
			else if (iParam0 == 1)
			{
				unk_0xBF9EAA044015B0A2(joaat("sp1_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_104555.f_2353.f_539.f_2335[iParam0]) / 175f);
			}
			else if (iParam0 == 2)
			{
				unk_0xBF9EAA044015B0A2(joaat("sp2_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_104555.f_2353.f_539.f_2335[iParam0]) / 175f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_65(20, iParam3) / 175f);
				func_62(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + system::to_float(func_61(joaat("sp0_time_swimming"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + system::to_float(func_61(joaat("sp1_time_swimming"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + system::to_float(func_61(joaat("sp2_time_swimming"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + system::to_float(func_61(func_60(50, iParam3))));
				func_62(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + system::to_float(func_61(joaat("sp0_time_driving_bicycle"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + system::to_float(func_61(joaat("sp1_time_driving_bicycle"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + system::to_float(func_61(joaat("sp2_time_driving_bicycle"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + system::to_float(func_61(func_60(47, iParam3))));
				func_62(&fVar0);
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 * 0,25f);
			}
			break;
		
		case 3:
			if (iParam0 == 0)
			{
				fVar0 = (system::to_float(func_59(joaat("sp0_time_underwater"))) / 30f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (system::to_float(func_59(joaat("sp1_time_underwater"))) / 30f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (system::to_float(func_59(joaat("sp2_time_underwater"))) / 30f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (system::to_float(func_59(func_60(52, iParam3))) / 30f);
				func_62(&fVar0);
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				unk_0xFA3CE529DBB66C85(joaat("sp0_unarmed_hits"), &iVar3, -1);
				fVar0 = (system::to_float((iVar3 - Global_104555.f_2353.f_539.f_2339[iParam0])) / 20f);
			}
			else if (iParam0 == 1)
			{
				unk_0xFA3CE529DBB66C85(joaat("sp1_unarmed_hits"), &iVar3, -1);
				fVar0 = (system::to_float((iVar3 - Global_104555.f_2353.f_539.f_2339[iParam0])) / 20f);
			}
			else if (iParam0 == 2)
			{
				unk_0xFA3CE529DBB66C85(joaat("sp2_unarmed_hits"), &iVar3, -1);
				fVar0 = (system::to_float((iVar3 - Global_104555.f_2353.f_539.f_2339[iParam0])) / 20f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (system::to_float(func_67(1496, iParam3, 0)) / 20f);
				func_62(&fVar0);
			}
			break;
		
		case 4:
			if (iParam0 == 0)
			{
				unk_0xFA3CE529DBB66C85(joaat("sp0_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (system::to_float((iVar3 - Global_104555.f_2353.f_539.f_2343[iParam0])) / 50f));
			}
			else if (iParam0 == 1)
			{
				unk_0xFA3CE529DBB66C85(joaat("sp1_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (system::to_float((iVar3 - Global_104555.f_2353.f_539.f_2343[iParam0])) / 50f));
			}
			else if (iParam0 == 2)
			{
				unk_0xFA3CE529DBB66C85(joaat("sp2_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (system::to_float((iVar3 - Global_104555.f_2353.f_539.f_2343[iParam0])) / 50f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat((func_67(109, iParam3, 0) / 50)));
				func_62(&fVar0);
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				fVar0 = (system::to_float(func_61(joaat("sp0_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (system::to_float(func_61(joaat("sp1_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (system::to_float(func_61(joaat("sp2_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (system::to_float(func_61(func_60(43, iParam3))) / 10f);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + (system::to_float(func_61(joaat("sp0_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + (system::to_float(func_61(joaat("sp1_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + (system::to_float(func_61(joaat("sp2_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + (system::to_float(func_61(func_60(45, iParam3))) / 10f));
			}
			if (iParam0 == 0)
			{
				unk_0xFA3CE529DBB66C85(joaat("sp0_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + system::to_float(iVar3));
			}
			else if (iParam0 == 1)
			{
				unk_0xFA3CE529DBB66C85(joaat("sp1_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + system::to_float(iVar3));
			}
			else if (iParam0 == 2)
			{
				unk_0xFA3CE529DBB66C85(joaat("sp2_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + system::to_float(iVar3));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_67(61, iParam3, 0)));
				func_62(&fVar0);
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar4 = func_58(iParam0, 0);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_58(iParam0, 1);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_58(iParam0, 2);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_58(iParam0, 3);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_58(iParam0, 6);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_58(iParam0, 4);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 5f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 3f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 2f);
				}
				iVar4 = func_58(iParam0, 5);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_58(iParam0, 7);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_58(iParam0, 8);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_58(iParam0, 11);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
			}
			break;
		
		case 7:
			if (iParam0 == 0)
			{
				unk_0xBF9EAA044015B0A2(joaat("sp0_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_104555.f_2353.f_539.f_2347[iParam0]) / 45f);
			}
			else if (iParam0 == 1)
			{
				unk_0xBF9EAA044015B0A2(joaat("sp1_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_104555.f_2353.f_539.f_2347[iParam0]) / 45f);
			}
			else if (iParam0 == 2)
			{
				unk_0xBF9EAA044015B0A2(joaat("sp2_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_104555.f_2353.f_539.f_2347[iParam0]) / 45f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_65(19, iParam3) / 45f);
			}
			if (iParam0 == 0)
			{
				unk_0xFA3CE529DBB66C85(joaat("sp0_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((system::to_float((iVar3 - Global_104555.f_2353.f_539.f_2351[iParam0])) / 2f) * 1,5f));
			}
			else if (iParam0 == 1)
			{
				unk_0xFA3CE529DBB66C85(joaat("sp1_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((system::to_float((iVar3 - Global_104555.f_2353.f_539.f_2351[iParam0])) / 2f) * 1,5f));
			}
			else if (iParam0 == 2)
			{
				unk_0xFA3CE529DBB66C85(joaat("sp2_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((system::to_float((iVar3 - Global_104555.f_2353.f_539.f_2351[iParam0])) / 2f) * 1,5f));
			}
			else if (iParam0 == 3)
			{
				iVar3 = func_67(34, iParam3, 0);
				fVar0 = (fVar0 + ((system::to_float(iVar3) / 2f) * 1,5f));
				func_62(&fVar0);
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				unk_0xFA3CE529DBB66C85(joaat("sp0_hits_mission"), &iVar5, -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (system::to_float((iVar5 - Global_104555.f_2353.f_539.f_2355[iParam0])) / 40f);
				fVar0 = (fVar0 + (system::to_float((iVar6 - Global_104555.f_2353.f_539.f_2359[iParam0])) / 80f));
			}
			else if (iParam0 == 1)
			{
				unk_0xFA3CE529DBB66C85(joaat("sp1_hits_mission"), &iVar5, -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (system::to_float((iVar5 - Global_104555.f_2353.f_539.f_2355[iParam0])) / 40f);
				fVar0 = (fVar0 + (system::to_float((iVar6 - Global_104555.f_2353.f_539.f_2359[iParam0])) / 80f));
			}
			else if (iParam0 == 2)
			{
				unk_0xFA3CE529DBB66C85(joaat("sp2_hits_mission"), &iVar5, -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (system::to_float((iVar5 - Global_104555.f_2353.f_539.f_2355[iParam0])) / 40f);
				fVar0 = (fVar0 + (system::to_float((iVar6 - Global_104555.f_2353.f_539.f_2359[iParam0])) / 80f));
			}
			else if (iParam0 == 3)
			{
				iVar6 = func_67(168, iParam3, 0);
				fVar0 = (fVar0 + (system::to_float(iVar6) / 80f));
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar7 = 0;
				while (iVar7 < 22)
				{
					switch (func_57(iVar7, iParam0))
					{
						case 3:
							iVar8++;
							break;
						
						case 2:
							iVar9++;
							break;
						
						case 1:
							iVar10++;
							break;
					}
					iVar7++;
				}
				fVar0 = (fVar0 + IntToFloat(iVar8 * 3));
				fVar0 = (fVar0 + IntToFloat(iVar9 * 2));
				fVar0 = (fVar0 + IntToFloat(iVar10 * 1));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_56(joaat("mpply_shootingrange_wins")) * 1));
				func_62(&fVar0);
			}
			break;
	}
	if (iParam1 != 0)
	{
		iVar11 = func_50(iParam0, iParam1, iParam3);
		fVar0 = (fVar0 + IntToFloat(iVar11));
		fVar0 = (fVar0 + IntToFloat(func_55(iParam0, iParam1, iParam3)));
	}
	if (bParam2)
	{
		fVar12 = (fVar0 - (fVar0 % IntToFloat(func_48(iParam0, iParam1))));
		if ((fVar0 % IntToFloat(func_48(iParam0, iParam1))) >= 0f)
		{
			fVar12 = (fVar12 + IntToFloat(func_48(iParam0, iParam1)));
		}
		if (fVar0 >= fVar12)
		{
			fVar0 = fVar12;
		}
		else
		{
			fVar0 = (fVar12 - IntToFloat(func_48(iParam0, iParam1)));
		}
	}
	iVar2 = system::floor(fVar0);
	iVar2 = func_66(iVar2, 0, 100);
	return iVar2;
}

int func_55(int iParam0, int iParam1, int iParam2)//Position - 0x23A0
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_104555.f_2353.f_539.f_2227[iParam1 /*4*/][iParam0];
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_67(72, iParam2, 0);
					break;
				
				case 3:
					return func_67(74, iParam2, 0);
					break;
				
				case 2:
					return func_67(73, iParam2, 0);
					break;
				
				case 4:
					return func_67(75, iParam2, 0);
					break;
				
				case 5:
					return func_67(76, iParam2, 0);
					break;
				
				case 6:
					return func_67(77, iParam2, 0);
					break;
				
				case 7:
					return func_67(78, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

int func_56(int iParam0)//Position - 0x24B4
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_57(int iParam0, int iParam1)//Position - 0x24D2
{
	return Global_104555.f_19117[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_58(int iParam0, int iParam1)//Position - 0x24EE
{
	if (iParam0 < 0 || iParam0 > 2)
	{
		return 0;
	}
	return Global_104555.f_1978[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_59(int iParam0)//Position - 0x251C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + (unk_0x812C2F93733D7E50(iParam0) * 86400));
	iVar0 = (iVar0 + unk_0xCB140F38C78E3CF9(iParam0) * 3600);
	iVar0 = (iVar0 + unk_0xB3BF60DD6B01F3BC(iParam0) * 60);
	iVar0 = (iVar0 + unk_0xF471AF090CC3D29A(iParam0));
	return iVar0;
}

int func_60(int iParam0, int iParam1)//Position - 0x255F
{
	return Global_2523060[iParam0 /*3*/][func_5(iParam1)];
}

int func_61(int iParam0)//Position - 0x2577
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + unk_0x812C2F93733D7E50(iParam0) * 1440);
	iVar0 = (iVar0 + unk_0xCB140F38C78E3CF9(iParam0) * 60);
	iVar0 = (iVar0 + unk_0xB3BF60DD6B01F3BC(iParam0));
	return iVar0;
}

var func_62(float fParam0)//Position - 0x25AA
{
	if (func_42())
	{
		if (func_63() < Global_262145.f_12035)
		{
			if (*fParam0 + (IntToFloat(func_63()) * Global_262145.f_12034)) <= IntToFloat(Global_262145.f_12044)
			{
				*fParam0 = (*fParam0 + (IntToFloat(func_63()) * Global_262145.f_12034));
			}
		}
		return *fParam0;
	}
	return *fParam0;
}

int func_63()//Position - 0x2604
{
	if (func_46(1))
	{
		return Global_1595693[func_64() /*680*/].f_211.f_6;
	}
	return 0;
}

int func_64()//Position - 0x262A
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11;
}

float func_65(int iParam0, int iParam1)//Position - 0x263F
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2546677[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0xBF9EAA044015B0A2(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_66(int iParam0, int iParam1, int iParam2)//Position - 0x266B
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_67(int iParam0, int iParam1, int iParam2)//Position - 0x2690
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_68(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x26C2
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_69()//Position - 0x2919
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

bool func_70(int iParam0)//Position - 0x2935
{
	return iParam0 < 3;
}

void func_71(int iParam0, int iParam1)//Position - 0x2941
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_68(iParam0, iParam1, &iVar2, &iVar3);
	if (unk_0x3A711520F83BAE98())
	{
		iVar0 = func_67(iVar3, -1, 0);
	}
	else
	{
		unk_0xFA3CE529DBB66C85(iVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0,8f + (0,4f * (system::to_float(iVar0) / 100f)));
			unk_0x1339A65CEBFE3F23(unk_0x9EB17624F44A8DA4(), fVar1, 1);
			break;
		
		case 7:
			if (unk_0x8F38E94BBF3404CD(joaat("armenian3")) != 0 || unk_0x8F38E94BBF3404CD(joaat("trevor3")) != 0)
			{
				Global_90261 = 1;
			}
			else
			{
				fVar1 = (1f - (system::to_float(iVar0) / 100f));
				unk_0x6358526AE7496DD0(unk_0x9EB17624F44A8DA4(), fVar1);
				unk_0xADFA4FF5D838A3BD(unk_0x9EB17624F44A8DA4(), fVar1);
				unk_0xB2D256BAAFCEB7E4(unk_0x9EB17624F44A8DA4(), fVar1);
			}
			break;
	}
}

int func_72(int iParam0)//Position - 0x2A2E
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_73(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_73(int iParam0)//Position - 0x2A50
{
	return func_74(iParam0, Global_35861);
}

int func_74(int iParam0, int iParam1)//Position - 0x2A61
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

void func_75()//Position - 0x2C42
{
	func_80();
	func_79();
	func_76();
}

void func_76()//Position - 0x2C56
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iLocal_80)
	{
		if (iLocal_58 == 3)
		{
			if (Global_2097152[func_78() /*12130*/].f_7676.f_7)
			{
				iLocal_77 = func_59(func_60(144, -1));
				Global_2097152[func_78() /*12130*/].f_7676.f_7 = 0;
			}
			else
			{
				iLocal_77 = Global_2097152[func_78() /*12130*/].f_7676.f_6;
			}
			if (Global_2097152[func_78() /*12130*/].f_7676.f_4 == 0)
			{
				Global_2097152[func_78() /*12130*/].f_7676.f_4 = unk_0xE3CCAFB1555348DF();
			}
			iLocal_79 = Global_2097152[func_78() /*12130*/].f_7676.f_4;
			iLocal_78 = Global_2097152[func_78() /*12130*/].f_7676.f_5;
		}
		else
		{
			if (Global_104555.f_2353.f_539.f_2272[iLocal_58])
			{
				switch (iLocal_58)
				{
					case 0:
						iLocal_77 = func_59(joaat("sp0_total_wheelie_time"));
						break;
					
					case 1:
						iLocal_77 = func_59(joaat("sp1_total_wheelie_time"));
						break;
					
					case 2:
						iLocal_77 = func_59(joaat("sp2_total_wheelie_time"));
						break;
				}
				Global_104555.f_2353.f_539.f_2272[iLocal_58] = 0;
			}
			else
			{
				iLocal_77 = Global_104555.f_2353.f_539.f_2268[iLocal_58];
			}
			if (Global_104555.f_2353.f_539.f_2260[iLocal_58] == 0)
			{
				Global_104555.f_2353.f_539.f_2260[iLocal_58] = unk_0xE3CCAFB1555348DF();
			}
			iLocal_79 = Global_104555.f_2353.f_539.f_2260[iLocal_58];
			iLocal_78 = Global_104555.f_2353.f_539.f_2264[iLocal_58];
		}
		iLocal_80 = 1;
		iLocal_81 = 1;
	}
	else if ((unk_0xE3CCAFB1555348DF() - iLocal_79) > 86400)
	{
		iLocal_80 = 0;
		iLocal_81 = 0;
		iLocal_79 = unk_0xE3CCAFB1555348DF();
		iLocal_78 = 0;
		if (iLocal_58 == 3)
		{
			Global_2097152[func_78() /*12130*/].f_7676.f_7 = 1;
		}
		else
		{
			Global_104555.f_2353.f_539.f_2272[iLocal_58] = 1;
		}
	}
	if (iLocal_81)
	{
		switch (iLocal_58)
		{
			case 0:
				iVar0 = func_59(joaat("sp0_total_wheelie_time"));
				break;
			
			case 1:
				iVar0 = func_59(joaat("sp1_total_wheelie_time"));
				break;
			
			case 2:
				iVar0 = func_59(joaat("sp2_total_wheelie_time"));
				break;
			
			case 3:
				iVar0 = func_59(func_60(144, -1));
				break;
		}
		iVar1 = (iVar0 - iLocal_77);
		iVar2 = (system::floor((system::to_float(iVar1) / 15f)) - iLocal_78);
		if (iVar2 > 0)
		{
			func_77(iLocal_58, 4, iVar2);
			iLocal_78 = (iLocal_78 + iVar2);
		}
		if (iVar0 > (iLocal_77 + (unk_0xFAECC21412DD9C53() / 1000) * 60))
		{
			iLocal_81 = 0;
		}
	}
	if (iLocal_58 == 3)
	{
		Global_2097152[func_78() /*12130*/].f_7676.f_4 = iLocal_79;
		Global_2097152[func_78() /*12130*/].f_7676.f_5 = iLocal_78;
	}
	else
	{
		Global_104555.f_2353.f_539.f_2260[iLocal_58] = iLocal_79;
		Global_104555.f_2353.f_539.f_2264[iLocal_58] = iLocal_78;
	}
}

void func_77(int iParam0, int iParam1, int iParam2)//Position - 0x2F18
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_104555.f_2353.f_539.f_2227[iParam1 /*4*/][iParam0] = (Global_104555.f_2353.f_539.f_2227[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 7872;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 7872)
			{
				iVar0 = func_67(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_52(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

int func_78()//Position - 0x3008
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_79()//Position - 0x3015
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_74)
	{
		bVar0 = true;
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar1 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
			if ((((unk_0x6ADD12BF4D6D2587(iVar1) && unk_0xB8DE76287EDC4957(iVar1, 0)) && !unk_0x0ACC2116170FA204(iVar1)) && unk_0x317536BCEA8FA6B0(iVar1, -1, 0) == unk_0xFC1458A37D98B502()) && (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(iVar1)) || unk_0xC1514CFCEC68CA4A(unk_0x82FF3DFBC3965CC0(iVar1))))
			{
				bVar0 = false;
				if (unk_0x90D5DFB054818BA7(iVar1) >= 53f)
				{
					func_77(iLocal_58, 4, 2);
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			iLocal_74 = 0;
			iLocal_75 = unk_0x53C562FD2B9E3AB0();
			if (unk_0x3A711520F83BAE98())
			{
				iLocal_76 = unk_0xD1952A425B78FFC0();
			}
		}
	}
	else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iVar2 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
		if (((unk_0x6ADD12BF4D6D2587(iVar2) && unk_0xB8DE76287EDC4957(iVar2, 0)) && unk_0x90D5DFB054818BA7(iVar2) < 20f) && !unk_0x0ACC2116170FA204(iVar2))
		{
			if ((!unk_0x3A711520F83BAE98() && (unk_0x53C562FD2B9E3AB0() - iLocal_75) > 10000) || (unk_0x3A711520F83BAE98() && unk_0x05BC39B137F4CA7B(unk_0xD1952A425B78FFC0(), unk_0x1B4120BD20115C5C(iLocal_76, 10000))))
			{
				iLocal_74 = 1;
			}
		}
	}
}

void func_80()//Position - 0x3167
{
	bool bVar0;
	int iVar1;
	char cVar2[64];
	
	bVar0 = false;
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iVar1 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (((unk_0x6ADD12BF4D6D2587(iVar1) && unk_0xB8DE76287EDC4957(iVar1, 0)) && unk_0x317536BCEA8FA6B0(iVar1, -1, 0) == unk_0xFC1458A37D98B502()) && (((unk_0xC1514CFCEC68CA4A(unk_0x82FF3DFBC3965CC0(iVar1)) || unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(iVar1))) || unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(iVar1))) || unk_0x49A1CABC032F7E16(unk_0x82FF3DFBC3965CC0(iVar1))))
		{
			if (iLocal_66)
			{
				if (!unk_0x0ACC2116170FA204(iVar1))
				{
					if ((!unk_0x3A711520F83BAE98() && (unk_0x53C562FD2B9E3AB0() - iLocal_68) > 1500) || (unk_0x3A711520F83BAE98() && unk_0x05BC39B137F4CA7B(unk_0xD1952A425B78FFC0(), unk_0x1B4120BD20115C5C(iLocal_69, 1500))))
					{
						iLocal_70 = unk_0x53C562FD2B9E3AB0();
						if (unk_0x3A711520F83BAE98())
						{
							iLocal_71 = unk_0xD1952A425B78FFC0();
						}
						iLocal_67 = 1;
					}
					iLocal_66 = 0;
				}
			}
			if (iLocal_67)
			{
				if (!unk_0x0ACC2116170FA204(iVar1))
				{
					if (unk_0x5E0BEAAD15B888F3(iVar1))
					{
						if ((((!unk_0x3A711520F83BAE98() && (unk_0x53C562FD2B9E3AB0() - iLocal_70) > 20) || (!unk_0x3A711520F83BAE98() && (unk_0x53C562FD2B9E3AB0() - iLocal_70) == 0)) || (unk_0x3A711520F83BAE98() && unk_0x05BC39B137F4CA7B(unk_0xD1952A425B78FFC0(), unk_0x1B4120BD20115C5C(iLocal_71, 20)))) || (unk_0x3A711520F83BAE98() && unk_0x755BFA9A7E898944(unk_0xD1952A425B78FFC0(), iLocal_71)))
						{
						}
						else
						{
							func_77(iLocal_58, 4, 1);
						}
						StringCopy(&cVar2, "Player landed on all wheels in ", 64);
						StringIntConCat(&cVar2, (unk_0x53C562FD2B9E3AB0() - iLocal_70), 64);
						StringConCat(&cVar2, "ms", 64);
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
			if (!iLocal_66 && !iLocal_67)
			{
				if ((!unk_0x3A711520F83BAE98() && (unk_0x53C562FD2B9E3AB0() - iLocal_72) > 1000) || (unk_0x3A711520F83BAE98() && unk_0x05BC39B137F4CA7B(unk_0xD1952A425B78FFC0(), unk_0x1B4120BD20115C5C(iLocal_73, 1000))))
				{
					if (unk_0x0ACC2116170FA204(iVar1))
					{
						if (!iLocal_66)
						{
							iLocal_68 = unk_0x53C562FD2B9E3AB0();
							if (unk_0x3A711520F83BAE98())
							{
								iLocal_69 = unk_0xD1952A425B78FFC0();
							}
							iLocal_66 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_66 || iLocal_67)
		{
			bVar0 = true;
		}
	}
	else if (iLocal_66 || iLocal_67)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iLocal_72 = unk_0x53C562FD2B9E3AB0();
		if (unk_0x3A711520F83BAE98())
		{
			iLocal_73 = unk_0xD1952A425B78FFC0();
		}
		iLocal_66 = 0;
		iLocal_67 = 0;
	}
}

bool func_81(int iParam0)//Position - 0x33AB
{
	return (Global_103640 && iParam0) != 0;
}

int func_82()//Position - 0x33BC
{
	func_83();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_83()//Position - 0x33D5
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_85(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_84(unk_0xFC1458A37D98B502());
			if (func_70(iVar0) && (!func_51(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_70(Global_104555.f_2353.f_539.f_4301))
				{
					Global_104555.f_2353.f_539.f_4302 = Global_104555.f_2353.f_539.f_4301;
				}
				Global_104555.f_2353.f_539.f_4303 = iVar0;
				Global_104555.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104555.f_2353.f_539.f_4301 != 145)
			{
				Global_104555.f_2353.f_539.f_4303 = Global_104555.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104555.f_2353.f_539.f_4301 = 145;
}

int func_84(int iParam0)//Position - 0x34D2
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_85(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_85(int iParam0)//Position - 0x350F
{
	if (func_70(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_86()//Position - 0x3539
{
	char* sVar0;
	int iVar1;
	
	if (iLocal_61)
	{
		if (iLocal_62 != iLocal_58)
		{
			iLocal_61 = 0;
			return;
		}
		sVar0 = "CHAR_DEFAULT";
		switch (iLocal_62)
		{
			case 0:
				sVar0 = "CHAR_MICHAEL";
				break;
			
			case 1:
				sVar0 = "CHAR_FRANKLIN";
				break;
			
			case 2:
				sVar0 = "CHAR_TREVOR";
				break;
			
			case 3:
				iVar1 = func_89(unk_0x9EB17624F44A8DA4());
				if (iVar1 == 0)
				{
					return;
				}
				else
				{
					sVar0 = unk_0xF85532D53BDB3017(iVar1);
				}
				break;
		}
		unk_0xE3C33644878DCCFD("PS_UPDATE");
		unk_0x6223D539BCD39E76(iLocal_65);
		unk_0xA83AB069363493F2(func_88(iLocal_63), func_87(iLocal_63), iLocal_64, (iLocal_65 - iLocal_64), 0, sVar0, sVar0);
		iLocal_82 = 1;
		iLocal_83 = unk_0x53C562FD2B9E3AB0() + 5000;
		if (unk_0x3A711520F83BAE98())
		{
			iLocal_84 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), 5000);
		}
		iLocal_61 = 0;
	}
}

int func_87(int iParam0)//Position - 0x35FD
{
	switch (iParam0)
	{
		case 0:
			return 23;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 24;
			break;
		
		case 2:
			return 25;
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 27;
			break;
		
		case 6:
			return 17;
			break;
		
		case 7:
			return 28;
			break;
	}
	return -1;
}

char* func_88(int iParam0)//Position - 0x367C
{
	switch (iParam0)
	{
		case 0:
			return "PSF_SPEC_AB";
			break;
		
		case 1:
			return "PSF_STAMINA";
			break;
		
		case 3:
			return "PSF_LUNG";
			break;
		
		case 2:
			return "PSF_STRENGTH";
			break;
		
		case 4:
			return "PSF_DRIVING";
			break;
		
		case 5:
			return "PSF_FLYING";
			break;
		
		case 6:
			return "PSF_SHOOTING";
			break;
		
		case 7:
			return "PSF_STEALTH";
			break;
	}
	return "ERROR";
}

int func_89(int iParam0)//Position - 0x3706
{
	int iVar0;
	
	iVar0 = func_92(iParam0);
	if (iVar0 == -1)
	{
		func_90(iParam0, 1);
		return 0;
	}
	Global_1369176[iVar0 /*5*/].f_4 = 1;
	return Global_1369176[iVar0 /*5*/].f_2;
}

void func_90(int iParam0, bool bParam1)//Position - 0x373C
{
	if (!func_17(iParam0, 0, 1))
	{
		return;
	}
	if (func_92(iParam0) != -1)
	{
		return;
	}
	if (Global_1369339)
	{
		if (iParam0 == Global_1369339.f_1)
		{
			return;
		}
	}
	if (func_91(iParam0))
	{
		return;
	}
	if (Global_1369377 >= 32)
	{
		return;
	}
	Global_1369344[Global_1369377] = iParam0;
	Global_1369377++;
	if (bParam1)
	{
	}
}

int func_91(int iParam0)//Position - 0x37A8
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1369377)
	{
		if (Global_1369344[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_92(int iParam0)//Position - 0x37DA
{
	int iVar0;
	
	if (!func_17(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1369337 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1369337)
	{
		if (Global_1369176[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xEDC03FCCDC79D2A6(Global_1369176[iVar0 /*5*/].f_2) && unk_0xF99EC32C605D76B8(Global_1369176[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_93(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_93(int iParam0)//Position - 0x3859
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1369337)
	{
		return;
	}
	if (unk_0xEDC03FCCDC79D2A6(Global_1369176[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1369176[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0xF85532D53BDB3017(Global_1369176[iParam0 /*5*/].f_2), 64);
			unk_0x08F615DD464377C8(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x2B7B6B25A8998411(Global_1369176[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1369337)
	{
		Global_1369176[iVar2 /*5*/] = { Global_1369176[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_94(&(Global_1369176[iVar2 /*5*/]));
	Global_1369337 = (Global_1369337 - 1);
}

void func_94(var uParam0)//Position - 0x390E
{
	*uParam0 = 0;
	uParam0->f_1 = func_45();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x3A711520F83BAE98())
	{
		uParam0->f_3 = unk_0xD1952A425B78FFC0();
	}
}

void func_95()//Position - 0x393B
{
	float fVar0;
	int iVar1;
	
	if (unk_0x6568AF246B58DCCC() != 1)
	{
		return;
	}
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_99(unk_0x9EB17624F44A8DA4()))
		{
			return;
		}
		if (func_98() != 0)
		{
			return;
		}
	}
	if (unk_0x3A711520F83BAE98())
	{
		if (func_98() == 0)
		{
			iLocal_53 = 2;
		}
	}
	else
	{
		iLocal_53 = 0;
	}
	if (!func_97())
	{
		func_96();
	}
	iLocal_55 = 0;
	iLocal_56 = 0;
	if (unk_0x3A711520F83BAE98())
	{
		iLocal_57 = unk_0xD1952A425B78FFC0();
	}
	iLocal_72 = unk_0x53C562FD2B9E3AB0();
	if (unk_0x3A711520F83BAE98())
	{
		iLocal_73 = unk_0xD1952A425B78FFC0();
	}
	if (unk_0x3A711520F83BAE98())
	{
		if (!unk_0xC80D31E4B587871C(Global_2097152[func_78() /*12130*/].f_7676.f_1273, 2))
		{
			fVar0 = (system::to_float(func_67(189, -1, 0)) / 20f);
			iVar1 = system::floor(fVar0);
			iVar1 = func_66(iVar1, 0, 100);
			func_77(3, 2, iVar1);
			unk_0x872F1C1F8587CCC7(&(Global_2097152[func_78() /*12130*/].f_7676.f_1273), 2);
		}
	}
	bLocal_59 = true;
	iLocal_54 = 1;
}

void func_96()//Position - 0x3A25
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	if (unk_0x3A711520F83BAE98())
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 != 0)
			{
				func_68(3, iVar0, &uVar1, &iVar2);
				func_52(iVar2, func_50(3, iVar0, -1), -1, 1, 0);
			}
			iVar0++;
		}
		func_4(0, 1, -1, 1);
		Global_90260 = 1;
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar4 = 0;
			while (iVar4 < 8)
			{
				if (iVar4 != 0)
				{
					func_68(iVar3, iVar4, &iVar5, &uVar6);
					unk_0xBFFF62F75445099D(iVar5, func_50(iVar3, iVar4, -1), 1);
				}
				iVar4++;
			}
			iVar3++;
		}
		Global_104555.f_2353.f_539.f_2367[0] = func_50(0, 0, -1);
		Global_104555.f_2353.f_539.f_2367[1] = func_50(1, 0, -1);
		Global_104555.f_2353.f_539.f_2367[2] = func_50(2, 0, -1);
		Global_104555.f_2353.f_539.f_2334 = 1;
		Global_90260 = 1;
	}
}

int func_97()//Position - 0x3B19
{
	if (unk_0x3A711520F83BAE98())
	{
		return 1;
	}
	return Global_104555.f_2353.f_539.f_2334;
}

int func_98()//Position - 0x3B3C
{
	return Global_25233;
}

int func_99(int iParam0)//Position - 0x3B47
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_2436181.f_1, iParam0);
	}
	return 1;
}

void func_100()//Position - 0x3B6C
{
	if (iLocal_54 != 0 && iLocal_53 != 3)
	{
		if (iLocal_53 == 0)
		{
			if (unk_0x3A711520F83BAE98())
			{
				iLocal_53 = 3;
			}
			if (!func_97())
			{
				iLocal_53 = 3;
			}
		}
		else if (iLocal_53 == 2)
		{
			if ((!unk_0x3A711520F83BAE98() || !func_99(unk_0x9EB17624F44A8DA4())) || func_98() != 0)
			{
				iLocal_53 = 3;
			}
		}
		if (iLocal_53 == 3)
		{
			iLocal_54 = 2;
		}
	}
}

