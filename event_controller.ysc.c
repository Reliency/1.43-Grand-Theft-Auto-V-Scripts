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
	float fLocal_47 = 0f;
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
	var uLocal_61 = 0;
	var uLocal_62 = 10;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 2;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 8;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
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
	fLocal_47 = ((0,05f + 0,275f) - 0,01f);
	if (unk_0x7D9C4B359376D38A(34))
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	while (true)
	{
		system::wait(0);
		func_132();
		func_1();
	}
}

void func_1()//Position - 0xA5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	if (unk_0x5616476F69B90F14())
	{
		iVar2 = 0;
		while (iVar2 < unk_0xAAEEFEC091D0E30B(1))
		{
			iVar7 = unk_0xA387B84DA2EB1BEE(1, iVar2);
			switch (iVar7)
			{
				case 189:
					func_129();
					break;
				
				case 190:
					func_128();
					break;
				
				case 191:
					func_122(iVar2);
					break;
				
				case 192:
					func_121(iVar2);
					break;
				
				case 193:
					func_112(iVar2);
					break;
				
				case 211:
					func_3(iVar2);
					break;
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < unk_0xAAEEFEC091D0E30B(0))
	{
		iVar0 = unk_0xA387B84DA2EB1BEE(0, iVar2);
		iLocal_96 = 1;
		switch (iVar0)
		{
			case 139:
				unk_0x575EF325DA5E3F04(0, iVar2, &iVar1, 1);
				if (unk_0x6ADD12BF4D6D2587(iVar1))
				{
					if (unk_0x8A3FF8E81B40BB75(iVar1))
					{
						if (func_2(iVar3))
						{
							Global_48154.f_1[iVar3] = iVar1;
							iVar3++;
						}
					}
					else if (unk_0x52C56492660097C7(iVar1))
					{
						if (func_2(iVar5))
						{
							Global_48154.f_25[iVar5] = iVar1;
							iVar5++;
						}
					}
				}
				break;
			
			case 140:
				unk_0x575EF325DA5E3F04(0, iVar2, &iVar1, 1);
				if (unk_0x6ADD12BF4D6D2587(iVar1))
				{
					if (unk_0x8A3FF8E81B40BB75(iVar1))
					{
						if (func_2(iVar4))
						{
							Global_48154.f_13[iVar4] = iVar1;
							iVar4++;
						}
					}
					else if (unk_0x52C56492660097C7(iVar1))
					{
						if (func_2(iVar6))
						{
							Global_48154.f_37[iVar6] = iVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_48154 = iVar3;
	Global_48154.f_12 = iVar4;
	Global_48154.f_24 = iVar5;
	Global_48154.f_36 = iVar6;
}

bool func_2(int iParam0)//Position - 0x24E
{
	return iParam0 < 10;
}

void func_3(int iParam0)//Position - 0x25B
{
	struct<39> Var0;
	int iVar1;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &Var0, 39))
	{
		iVar1 = unk_0xACDBE13D6F2FCD32(Var0.f_38);
		if (iVar1 >= 0 && iVar1 < unk_0x61828064C421B7A0())
		{
			if (unk_0x393D94CB1CDFBD93(iVar1) || unk_0xDE6B6BD2899ACDAF(iVar1))
			{
				if (unk_0xDE6B6BD2899ACDAF(iVar1))
				{
					func_55(iVar1);
				}
				else
				{
					unk_0x488A5D075D4883BC(iVar1);
				}
				func_54(Var0.f_37, -1);
			}
			else if (func_47())
			{
				func_4(Var0.f_29, Var0, Var0.f_38, Var0.f_16, Var0.f_35, Var0.f_36);
			}
		}
	}
}

int func_4(struct<6> Param0, struct<16> Param1, var uParam2, struct<13> Param3, var uParam4, int iParam5)//Position - 0x2F8
{
	bool bVar0;
	bool bVar1;
	struct<16> Var2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	struct<10> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<16> Var12;
	struct<16> Var13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	
	bVar0 = false;
	if (iParam5 >= 1000000)
	{
		iParam5 = (iParam5 - 1000000);
		bVar0 = true;
	}
	if (unk_0x3A711520F83BAE98())
	{
		if (func_46())
		{
			func_45(uParam2);
			return 0;
		}
		if (func_44())
		{
			func_45(uParam2);
			return 0;
		}
	}
	if (!unk_0x3A711520F83BAE98())
	{
		if (bVar0)
		{
		}
		else if (!unk_0xFFE9B6D8F03AC353(&Param3))
		{
			func_45(uParam2);
			return 0;
		}
		if (Global_14396)
		{
			func_45(uParam2);
			return 0;
		}
		bVar1 = true;
		if (!func_43())
		{
			if (!func_42(0))
			{
				if (bVar1)
				{
					func_45(uParam2);
					return 0;
				}
			}
		}
	}
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_41(unk_0x9EB17624F44A8DA4()))
		{
			func_45(uParam2);
			return 0;
		}
	}
	if (unk_0xAB019B170BF1309C(&Param1))
	{
		func_45(uParam2);
		return 0;
	}
	if (unk_0xAB019B170BF1309C(&Param0))
	{
		func_45(uParam2);
		return 0;
	}
	Var2 = { Param1 };
	iVar3 = func_40(Var2);
	if (iVar3 != -1)
	{
		func_37(iVar3);
	}
	uVar4 = unk_0xACDBE13D6F2FCD32(uParam2);
	iVar5 = unk_0x13D02CEFE27ACBFF(uVar4);
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 11)
	{
		if (iVar5 == Global_2395292[iVar6 /*4*/].f_3 && unk_0x53C562FD2B9E3AB0() < Global_2395292[iVar6 /*4*/].f_2)
		{
			Global_2395292[iVar6 /*4*/].f_2 = unk_0x53C562FD2B9E3AB0() + 30000;
			iVar6 = 12;
			func_45(uParam2);
			return 0;
		}
		iVar6++;
	}
	Var7.f_1 = -1;
	Var7.f_2 = -1;
	Var7.f_9 = -1;
	func_36(&Var7);
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 63;
	iVar11 = 0;
	StringCopy(&Var12, "", 64);
	StringCopy(&Var13, "", 64);
	iVar14 = 0;
	iVar15 = 0;
	iVar16 = 0;
	iVar17 = 1;
	iVar18 = 0;
	iVar19 = 0;
	if (func_35(&Param0, &iVar8, &iVar11))
	{
		iVar10 = 40;
		iVar15 = 0;
		iVar11 = iVar11;
	}
	else if (func_33(&Param0, &Var7, 0))
	{
		iVar10 = Var7.f_2;
		iVar8 = func_32(iVar10, Var7.f_1);
		iVar9 = func_31(&Var7);
		Var12 = { func_30(&Var7, 0) };
		Var13 = { func_29(&Var7) };
		iVar15 = 1;
		iVar14 = func_28(&Var7, 0);
		iVar19 = func_27(&Var7);
		uVar20 = func_25(&Var7);
		uVar21 = func_24(&Var7);
		bVar22 = func_19(&Var7);
		if (!bVar22)
		{
			iVar18 = 1;
		}
	}
	else
	{
		bVar23 = false;
		if (func_17(unk_0x9EB17624F44A8DA4(), Param3))
		{
			if (!unk_0x3A711520F83BAE98())
			{
				bVar23 = true;
			}
			else
			{
				func_45(uParam2);
				func_15(0);
				return 0;
			}
		}
		if (!unk_0x177281F5FA205A38())
		{
			if (!bVar23)
			{
				if (func_13(unk_0x9EB17624F44A8DA4(), Param3))
				{
					func_45(uParam2);
					func_15(0);
					return 0;
				}
			}
		}
		if (!func_12())
		{
			func_45(uParam2);
			bVar24 = true;
			func_15(bVar24);
			return 0;
		}
		bVar25 = false;
		if (!bVar23)
		{
			if (func_7(Param3, &bVar25, 1))
			{
				func_45(uParam2);
				func_15(bVar25);
				return 0;
			}
		}
		iVar16 = 1;
		iVar17 = 0;
		iVar15 = 1;
	}
	iVar26 = Global_1367922;
	if (iVar26 >= 12)
	{
		iVar26 = (iVar26 - 1);
	}
	iVar27 = (iVar26 - 1);
	while (iVar27 >= 0)
	{
		Global_2392991[iVar26 /*99*/] = { Global_2392991[iVar27 /*99*/] };
		iVar26 = (iVar26 - 1);
		iVar27 = (iVar27 - 1);
	}
	Global_1367922++;
	if (Global_1367922 > 12)
	{
		Global_1367922 = 12;
	}
	iVar28 = 0;
	Global_2392991[iVar28 /*99*/] = 0;
	Global_2392991[iVar28 /*99*/].f_1 = 0;
	Global_2392991[iVar28 /*99*/].f_5 = 0;
	Global_2392991[iVar28 /*99*/].f_2 = iVar16;
	Global_2392991[iVar28 /*99*/].f_3 = 0;
	Global_2392991[iVar28 /*99*/].f_4 = iVar17;
	Global_2392991[iVar28 /*99*/].f_6 = { Param0 };
	Global_2392991[iVar28 /*99*/].f_12 = uVar20;
	Global_2392991[iVar28 /*99*/].f_13 = uVar21;
	Global_2392991[iVar28 /*99*/].f_15 = { Param1 };
	StringCopy(&(Global_2392991[iVar28 /*99*/].f_31), "", 64);
	Global_2392991[iVar28 /*99*/].f_49 = iVar10;
	Global_2392991[iVar28 /*99*/].f_50 = iVar8;
	Global_2392991[iVar28 /*99*/].f_51 = iVar9;
	Global_2392991[iVar28 /*99*/].f_91 = uParam2;
	Global_2392991[iVar28 /*99*/].f_57 = { Var12 };
	Global_2392991[iVar28 /*99*/].f_73 = { Var13 };
	Global_2392991[iVar28 /*99*/].f_52 = iVar14;
	Global_2392991[iVar28 /*99*/].f_53 = 0;
	Global_2392991[iVar28 /*99*/].f_53.f_1 = 0;
	Global_2392991[iVar28 /*99*/].f_53.f_2 = 0;
	Global_2392991[iVar28 /*99*/].f_56 = iVar15;
	Global_2392991[iVar28 /*99*/].f_90 = uParam4;
	Global_2392991[iVar28 /*99*/].f_92 = -1;
	Global_2392991[iVar28 /*99*/].f_93 = iVar18;
	Global_2392991[iVar28 /*99*/].f_94 = Global_2395344;
	Global_2392991[iVar28 /*99*/].f_95 = iVar19;
	Global_2392991[iVar28 /*99*/].f_98 = unk_0xFFE9B6D8F03AC353(&Param3);
	if (Global_2392991[iVar28 /*99*/].f_50 == 0)
	{
		if (Global_2392991[iVar28 /*99*/].f_51 == 1)
		{
			Global_2392991[iVar28 /*99*/].f_56 = 0;
		}
	}
	Global_2392991[iVar28 /*99*/].f_96 = func_6(Param3, iVar28);
	Global_2392991[iVar28 /*99*/].f_97 = 0;
	Global_2392991[iVar28 /*99*/].f_89 = iParam5;
	Global_2395344++;
	Global_2392991[iVar28 /*99*/].f_47 = func_5(Param3);
	if (Global_2392991[iVar28 /*99*/].f_47 != -1)
	{
		Global_2392991[iVar28 /*99*/].f_48 = unk_0x53C562FD2B9E3AB0() + 15000;
	}
	return 1;
}

int func_5(struct<13> Param0)//Position - 0x845
{
	struct<13> Var0[1];
	int iVar1;
	
	if (!unk_0x177281F5FA205A38())
	{
		return -1;
	}
	Var0[0 /*13*/] = { Param0 };
	iVar1 = unk_0xB2CD7FC41B52C9AB(&Var0, 1);
	if (iVar1 < 0)
	{
		return -1;
	}
	return iVar1;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x880
{
	if (!unk_0xFFE9B6D8F03AC353(&uParam0))
	{
		return 0;
	}
	if (Global_2392991[iParam13 /*99*/].f_90 > 0)
	{
		return 0;
	}
	return 1;
}

int func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13, bool bParam14)//Position - 0x8A9
{
	struct<13> Var0;
	
	*iParam13 = 0;
	if (func_11(0))
	{
		return 0;
	}
	if (unk_0x177281F5FA205A38())
	{
		if (!func_10())
		{
			*iParam13 = 1;
			return 1;
		}
	}
	if (!func_9(1) && !bParam14)
	{
		return 1;
	}
	Var0 = { func_8(unk_0x9EB17624F44A8DA4()) };
	if (!bParam14 && !unk_0x621B42AE8C13A226(&Var0, &uParam0))
	{
		if (!unk_0xFFE9B6D8F03AC353(&uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_8(int iParam0)//Position - 0x91D
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

int func_9(int iParam0)//Position - 0x934
{
	if (unk_0x8A81E55A71641BC1() || (unk_0xFD6215BABFD843F2() && iParam0 == 0))
	{
		if (unk_0xCD032B200A8FAC1A(1) == 0 || unk_0x580E56ACE6F37FAD(1, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0xCD032B200A8FAC1A(1) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

int func_10()//Position - 0x98F
{
	if (unk_0x8A81E55A71641BC1() && unk_0x0A51F536ECBFA795())
	{
		return 1;
	}
	if (unk_0x04E8D1E1170F25E1() && unk_0x0A51F536ECBFA795())
	{
		return 1;
	}
	if ((unk_0xFD6215BABFD843F2() && unk_0x464F779D23F6440D() == 0) && unk_0x0A51F536ECBFA795())
	{
		return 1;
	}
	if (unk_0x177281F5FA205A38() && unk_0x0A51F536ECBFA795())
	{
		return 1;
	}
	if (unk_0xB9D80B12FE4456A5() && unk_0x0A51F536ECBFA795())
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0)//Position - 0xA07
{
	if (unk_0x8A81E55A71641BC1() || (unk_0xFD6215BABFD843F2() && iParam0 == 0))
	{
		if (unk_0xCD032B200A8FAC1A(0) == 0 || unk_0x580E56ACE6F37FAD(0, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0xCD032B200A8FAC1A(0) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_12()//Position - 0xA62
{
	if (!unk_0x04E8D1E1170F25E1())
	{
		return 1;
	}
	return unk_0x0A51F536ECBFA795();
}

int func_13(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)//Position - 0xA7A
{
	if (!func_14(iParam0))
	{
		if (unk_0x177281F5FA205A38())
		{
			if (unk_0x1E81D00FCDFF4BBE(&uParam1))
			{
				return 0;
			}
		}
		if (!unk_0xCD032B200A8FAC1A(0))
		{
			if (!unk_0xCD032B200A8FAC1A(1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)//Position - 0xAB7
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

void func_15(bool bParam0)//Position - 0xAE3
{
	int iVar0;
	
	if (bParam0)
	{
		if (!unk_0x04E8D1E1170F25E1())
		{
			return;
		}
	}
	if (unk_0x177281F5FA205A38())
	{
		return;
	}
	iVar0 = unk_0x53C562FD2B9E3AB0();
	if (iVar0 < Global_2395341)
	{
		return;
	}
	if (unk_0xF491DD47B88AA84E())
	{
		return;
	}
	if (bParam0)
	{
		func_16("INV_NO_XBOXLIVE", -1);
	}
	else
	{
		func_16("INV_RESTRICT", -1);
	}
	Global_2395341 = (iVar0 + 1800000);
}

void func_16(char* sParam0, int iParam1)//Position - 0xB43
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

int func_17(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)//Position - 0xB5A
{
	if (!func_14(iParam0))
	{
		if (unk_0x177281F5FA205A38())
		{
			if (unk_0x1E81D00FCDFF4BBE(&uParam1))
			{
				return 0;
			}
		}
		if (!func_18())
		{
			return 1;
		}
	}
	return 0;
}

int func_18()//Position - 0xB8D
{
	if (unk_0x1AA23FF6402169E9() == 0)
	{
		return 0;
	}
	if (unk_0x8A81E55A71641BC1())
	{
		if (unk_0x580E56ACE6F37FAD(1, -1))
		{
			if (unk_0x0A51F536ECBFA795())
			{
				return 1;
			}
		}
	}
	if (unk_0xFD6215BABFD843F2())
	{
		if (unk_0xCD032B200A8FAC1A(1))
		{
			if (unk_0x0A51F536ECBFA795())
			{
				return 1;
			}
		}
	}
	if (unk_0x04E8D1E1170F25E1() || unk_0x177281F5FA205A38())
	{
		if (unk_0x8E095DA8BB18B959(0, -3, 1))
		{
			return 1;
		}
	}
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0x580E56ACE6F37FAD(0, -1))
		{
			if (unk_0x0A51F536ECBFA795())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_19(var uParam0)//Position - 0xC13
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_23(uParam0))
	{
		return unk_0xC80D31E4B587871C(Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_63, 14);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return unk_0xC80D31E4B587871C(Global_2398103.f_1.f_63, 14);
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return unk_0xC80D31E4B587871C(Global_794709.f_4[iVar1 /*88*/].f_76, 14);
		
		case 62:
			return unk_0xC80D31E4B587871C(Global_907706.f_1204[iVar1 /*88*/].f_76, 14);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x9EB17624F44A8DA4())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_20(var uParam0)//Position - 0xCEF
{
	int iVar0;
	
	if (unk_0xAB019B170BF1309C(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0xC80D31E4B587871C(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x74C475EB8E73D398(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xC80D31E4B587871C(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0xC80D31E4B587871C(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x74C475EB8E73D398(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0xC80D31E4B587871C(Global_907706.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x74C475EB8E73D398(&(Global_907706.f_1204[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xC80D31E4B587871C(Global_907706.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0xC80D31E4B587871C(Global_907706.f_1204[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x74C475EB8E73D398(&(Global_907706.f_1204[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0x9EB17624F44A8DA4())
	{
		if (unk_0xC80D31E4B587871C(Global_950952.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0x74C475EB8E73D398(&(Global_950952.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0xC80D31E4B587871C(Global_950952.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0xC80D31E4B587871C(Global_950952.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0x74C475EB8E73D398(&(Global_950952.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_21(var uParam0)//Position - 0xF5F
{
	if (Global_2398103)
	{
		if (unk_0x74C475EB8E73D398(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_22(int iParam0)//Position - 0xF84
{
	return iParam0 == 9999;
}

int func_23(var uParam0)//Position - 0xF92
{
	int iVar0;
	
	iVar0 = uParam0->f_9;
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_2395346.f_356[iVar0 /*75*/])
	{
		return 0;
	}
	if (!unk_0x74C475EB8E73D398(&(Global_2395346.f_356[iVar0 /*75*/].f_10), &(uParam0->f_3)))
	{
		return 0;
	}
	if (!unk_0xC80D31E4B587871C(Global_2395346.f_356[iVar0 /*75*/].f_5, 3))
	{
		return 0;
	}
	return 1;
}

int func_24(var uParam0)//Position - 0xFF5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_80;
		
		case 62:
			return iVar0;
		
		default:
	}
	return iVar0;
}

int func_25(var uParam0)//Position - 0x103E
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = 0;
	iVar2 = func_20(uParam0);
	if (iVar2 == -1)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_26(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_26(var uParam0)//Position - 0x10A5
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_98389[iVar1 /*13*/];
		
		case 62:
			return Global_907706.f_18805[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

int func_27(var uParam0)//Position - 0x111C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_23(uParam0))
	{
		return unk_0xC80D31E4B587871C(Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_63, 17);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return unk_0xC80D31E4B587871C(Global_2398103.f_1.f_63, 17);
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return unk_0xC80D31E4B587871C(Global_794709.f_4[iVar1 /*88*/].f_76, 17);
		
		case 62:
			return unk_0xC80D31E4B587871C(Global_907706.f_1204[iVar1 /*88*/].f_76, 17);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x9EB17624F44A8DA4())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_28(var uParam0, bool bParam1)//Position - 0x11F8
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!bParam1)
	{
		if (func_23(uParam0))
		{
			if (unk_0xC80D31E4B587871C(Global_1311772.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2398237.f_513[uParam0->f_9];
			}
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_54;
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_54;
		
		case 62:
			return Global_907706.f_1204[iVar1 /*88*/].f_54;
		
		case 40:
			return 0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x9EB17624F44A8DA4())
	{
		return Global_950952.f_5[iVar1 /*88*/].f_54;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

struct<16> func_29(var uParam0)//Position - 0x12DA
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NO DESCRIPTION", 64);
	if (func_23(uParam0))
	{
		return Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_28;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_28;
		}
		return Var0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_38;
		
		case 62:
			return Global_907706.f_1204[iVar1 /*88*/].f_38;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x9EB17624F44A8DA4())
	{
		return Global_950952.f_5[iVar1 /*88*/].f_38;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

struct<16> func_30(var uParam0, bool bParam1)//Position - 0x13CA
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "UNKNOWN", 64);
	if (bParam1)
	{
		StringCopy(&Var0, "", 64);
	}
	if (!bParam1)
	{
		if (func_23(uParam0))
		{
			if (unk_0xC80D31E4B587871C(Global_1311772.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2398237[uParam0->f_9 /*16*/];
			}
			return Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_12;
		}
		return Var0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_22;
		
		case 62:
			return Global_907706.f_1204[iVar1 /*88*/].f_22;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x9EB17624F44A8DA4())
	{
		return Global_950952.f_5[iVar1 /*88*/].f_22;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_31(var uParam0)//Position - 0x14EF
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (func_23(uParam0))
	{
		return Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_55;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_55;
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_68;
		
		case 62:
			return Global_907706.f_1204[iVar1 /*88*/].f_68;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x9EB17624F44A8DA4())
	{
		return Global_950952.f_5[iVar1 /*88*/].f_68;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_32(int iParam0, int iParam1)//Position - 0x15BD
{
	if (func_22(iParam1))
	{
		if (Global_2398103)
		{
			return Global_2398103.f_1.f_53;
		}
		return 249;
	}
	switch (iParam0)
	{
		case 63:
			return Global_794709.f_4[iParam1 /*88*/].f_65;
		
		case 62:
			return Global_907706.f_1204[iParam1 /*88*/].f_65;
		
		default:
	}
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		return Global_950952.f_5[iParam1 /*88*/].f_65;
	}
	else if (iParam0 < 32)
	{
		return 249;
	}
	return 249;
}

int func_33(char* sParam0, var uParam1, bool bParam2)//Position - 0x1643
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x3A711520F83BAE98())
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 1118;
	if (!bParam2)
	{
		iVar2 = 1100;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (unk_0xC80D31E4B587871C(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0x74C475EB8E73D398(&(Global_794709.f_4[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_794709.f_4[iVar0 /*88*/].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794709.f_4[iVar0 /*88*/] };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 200)
	{
		if (unk_0xC80D31E4B587871C(Global_907706.f_1204[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0x74C475EB8E73D398(&(Global_907706.f_1204[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_907706.f_1204[iVar0 /*88*/].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		if (unk_0xC80D31E4B587871C(Global_950952.f_5[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0x74C475EB8E73D398(&(Global_950952.f_5[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_950952.f_5[iVar0 /*88*/].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = unk_0x9EB17624F44A8DA4();
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x17DB
{
	switch (iParam0)
	{
		case 15:
			return 131;
		
		case 14:
			return 132;
		
		case 122:
			return 136;
		
		case 11:
			return 133;
		
		case 13:
			return 134;
		
		case 12:
			return 135;
		
		case 8:
			return 138;
		
		case 1:
			return 139;
		
		case 5:
			return 137;
		
		case 6:
			return 140;
		
		case 3:
			return 143;
		
		case 0:
			return 141;
		
		case 2:
			return 142;
		
		case 148:
			return 49;
		
		case 151:
			return 52;
		
		case 152:
			return 53;
		
		case 157:
			return 54;
		
		case 153:
			return 55;
		
		case 154:
			return 56;
		
		case 155:
			return 57;
		
		case 159:
			return 58;
		
		case 162:
			return 51;
		
		case 142:
			return 60;
		
		case 160:
			return 62;
		
		case 164:
			return 63;
		
		case 163:
			return 64;
		
		case 166:
			return 65;
		
		case 167:
			return 66;
		
		case 168:
			return 67;
		
		case 169:
			return 68;
		
		case 170:
			return 69;
		
		case 171:
			return 70;
		
		case 172:
			return 71;
		
		case 173:
			return 72;
		
		case 178:
			return 73;
		
		case 188:
			return 74;
		
		case 214:
			return 75;
		
		case 215:
			return 76;
		
		case 216:
			return 77;
		
		case 217:
			return 78;
		
		case 218:
			return 79;
		
		case 219:
			return 80;
		
		case 220:
			return 81;
		
		case 221:
			return 82;
		
		case 179:
			return 84;
		
		case 189:
			return 83;
		
		case 180:
			return 85;
		
		case 182:
			return 86;
		
		case 183:
			return 87;
		
		case 185:
			return 88;
		
		case 186:
			return 89;
		
		case 190:
			return 90;
		
		case 191:
			return 91;
		
		case 192:
			return 92;
		
		case 193:
			return 93;
		
		case 205:
			return 101;
		
		case 194:
			return 94;
		
		case 197:
			return 95;
		
		case 198:
			return 96;
		
		case 195:
			return 97;
		
		case 199:
			return 98;
		
		case 200:
			return 99;
		
		case 201:
			return 100;
		
		case 207:
			return 102;
		
		case 208:
			return 103;
		
		case 209:
			return 104;
		
		case 210:
			return 105;
		
		case 225:
			return 106;
		
		case 226:
			return 107;
		
		case 227:
			return 108;
		
		case 229:
			return 109;
		
		case 230:
			return 110;
		
		case 233:
			return 112;
		
		default:
	}
	return 0;
}

int func_35(char* sParam0, int iParam1, int iParam2)//Position - 0x1B0E
{
	int iVar0;
	char[] cVar1[8];
	char cVar2[16];
	char[] cVar3[8];
	
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	iVar0 = unk_0xFDD8E897FECD2912(sParam0);
	if (!iVar0 > 12)
	{
		return 0;
	}
	StringCopy(&cVar1, unk_0x7A6FD1CA7EDEBF5E(sParam0, 0, 5), 8);
	if (!unk_0x74C475EB8E73D398(&cVar1, "FAKE_"))
	{
		return 0;
	}
	StringCopy(&cVar2, unk_0x7A6FD1CA7EDEBF5E(sParam0, 5, 12), 16);
	if (unk_0x74C475EB8E73D398(&cVar2, "GOLF___"))
	{
		*iParam1 = 11;
	}
	else if (unk_0x74C475EB8E73D398(&cVar2, "TENNIS_"))
	{
		*iParam1 = 12;
	}
	else if (unk_0x74C475EB8E73D398(&cVar2, "PILOTS_"))
	{
		*iParam1 = 122;
	}
	else if (unk_0x74C475EB8E73D398(&cVar2, "SHOOTR_"))
	{
		*iParam1 = 13;
	}
	else if (unk_0x74C475EB8E73D398(&cVar2, "DARTS__"))
	{
		*iParam1 = 14;
	}
	else if (unk_0x74C475EB8E73D398(&cVar2, "ARMWRS_"))
	{
		*iParam1 = 15;
	}
	else
	{
		return 0;
	}
	StringCopy(&cVar3, unk_0x7A6FD1CA7EDEBF5E(sParam0, 12, iVar0), 8);
	if (!unk_0xDB12FEA7D3ED7750(&cVar3, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_36(var uParam0)//Position - 0x1BFD
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	StringCopy(&(uParam0->f_3), "", 24);
	uParam0->f_9 = -1;
}

void func_37(int iParam0)//Position - 0x1C20
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 >= Global_1367922)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (unk_0x53C562FD2B9E3AB0() > Global_2395292[iVar0 /*4*/].f_2 || Global_2395292[iVar0 /*4*/].f_2 == 0)
		{
			if (unk_0x61828064C421B7A0() > 0 && Global_2392991[iParam0 /*99*/].f_91 < unk_0x61828064C421B7A0())
			{
				Global_2395292[iVar0 /*4*/].f_3 = unk_0x13D02CEFE27ACBFF(Global_2392991[iParam0 /*99*/].f_91);
				Global_2395292[iVar0 /*4*/].f_2 = unk_0x53C562FD2B9E3AB0() + 30000;
				iVar0 = 12;
			}
		}
		iVar0++;
	}
	if (Global_2392991[iParam0 /*99*/].f_92 != -1)
	{
		unk_0x4B1D93E1A14A667F(Global_2392991[iParam0 /*99*/].f_92);
	}
	if (!Global_2392991[iParam0 /*99*/].f_56)
	{
		if (Global_2392991[iParam0 /*99*/].f_52 != 0)
		{
			unk_0x1088BF7BD3B5ADB8(Global_2392991[iParam0 /*99*/].f_52);
		}
	}
	func_45(Global_2392991[iParam0 /*99*/].f_91);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_1367922)
	{
		Global_2392991[iVar1 /*99*/] = { Global_2392991[iVar2 /*99*/] };
		iVar1++;
		iVar2++;
	}
	func_39(iVar1);
	Global_1367922 = (Global_1367922 - 1);
	if (Global_1367895)
	{
		if (Global_1367893 > 0)
		{
			func_38();
		}
	}
}

void func_38()//Position - 0x1D68
{
	Global_1367895 = 0;
}

void func_39(int iParam0)//Position - 0x1D75
{
	Global_2392991[iParam0 /*99*/] = 0;
	Global_2392991[iParam0 /*99*/].f_1 = 0;
	Global_2392991[iParam0 /*99*/].f_5 = 0;
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_15), "", 64);
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_31), "", 64);
	Global_2392991[iParam0 /*99*/].f_47 = -1;
	Global_2392991[iParam0 /*99*/].f_48 = unk_0x53C562FD2B9E3AB0();
	Global_2392991[iParam0 /*99*/].f_49 = -1;
	Global_2392991[iParam0 /*99*/].f_50 = -1;
	Global_2392991[iParam0 /*99*/].f_51 = -1;
	Global_2392991[iParam0 /*99*/].f_52 = 0;
	Global_2392991[iParam0 /*99*/].f_53 = 0;
	Global_2392991[iParam0 /*99*/].f_53.f_1 = 0;
	Global_2392991[iParam0 /*99*/].f_53.f_2 = 0;
	Global_2392991[iParam0 /*99*/].f_56 = 0;
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_57), "", 64);
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_73), "", 64);
	Global_2392991[iParam0 /*99*/].f_89 = 0;
	Global_2392991[iParam0 /*99*/].f_90 = 0;
	Global_2392991[iParam0 /*99*/].f_91 = -1;
	Global_2392991[iParam0 /*99*/].f_92 = -1;
	Global_2392991[iParam0 /*99*/].f_93 = 0;
	Global_2392991[iParam0 /*99*/].f_94 = -1;
	Global_2392991[iParam0 /*99*/].f_95 = 0;
	Global_2392991[iParam0 /*99*/].f_96 = 0;
	Global_2392991[iParam0 /*99*/].f_97 = 0;
	Global_2392991[iParam0 /*99*/].f_98 = 0;
}

int func_40(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)//Position - 0x1EB7
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1367922)
	{
		if (unk_0x74C475EB8E73D398(&uParam0, &(Global_2392991[iVar0 /*99*/].f_15)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_41(int iParam0)//Position - 0x1EF0
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_142, 22);
}

bool func_42(bool bParam0)//Position - 0x1F09
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

int func_43()//Position - 0x1F34
{
	if (Global_104555.f_9055.f_330[0 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_44()//Position - 0x1F51
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_142, 2);
}

void func_45(var uParam0)//Position - 0x1F6B
{
	int iVar0;
	
	iVar0 = unk_0xACDBE13D6F2FCD32(uParam0);
	if (iVar0 < 0 || iVar0 >= unk_0x61828064C421B7A0())
	{
		return;
	}
	if (unk_0xA118FBC976E55A6D(iVar0))
	{
		return;
	}
}

bool func_46()//Position - 0x1F9E
{
	return Global_1312814 == 10;
}

int func_47()//Position - 0x1FAD
{
	if (!Global_70856)
	{
		return 1;
	}
	else if (func_48())
	{
		return 1;
	}
	return 0;
}

int func_48()//Position - 0x1FD0
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_53())
	{
		return 1;
	}
	if (func_52())
	{
		return 1;
	}
	return func_49(120, -1);
}

int func_49(int iParam0, int iParam1)//Position - 0x2000
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547365[iParam0 /*3*/][func_50(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_50(var uParam0)//Position - 0x202C
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_51();
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

int func_51()//Position - 0x2060
{
	return Global_1312736;
}

bool func_52()//Position - 0x206C
{
	return Global_1312842;
}

bool func_53()//Position - 0x2078
{
	return Global_1312844;
}

void func_54(var uParam0, int iParam1)//Position - 0x2084
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == -1)
	{
		iVar0 = func_51();
	}
	Global_1312834[iVar0] = uParam0;
}

void func_55(int iParam0)//Position - 0x20A6
{
	func_105();
	if (func_104(1))
	{
		if (!func_95())
		{
			if (!func_84(1))
			{
				if (unk_0x4916190900E76373())
				{
					func_83();
				}
				func_58(1, 0);
				unk_0x488A5D075D4883BC(iParam0);
				func_57();
				func_56();
			}
		}
	}
}

void func_56()//Position - 0x20EB
{
	Global_1655819.f_7 = 1;
}

void func_57()//Position - 0x20FA
{
	Global_1655819.f_6 = 1;
}

void func_58(int iParam0, bool bParam1)//Position - 0x2109
{
	if (func_104(iParam0))
	{
		Global_1655819.f_16[iParam0 /*44*/].f_5 = 1;
		func_60(iParam0, 0);
		func_59();
		if (bParam1)
		{
			Global_1655819 = 1;
		}
	}
}

void func_59()//Position - 0x213C
{
	Global_1655819.f_2 = 1;
}

void func_60(int iParam0, bool bParam1)//Position - 0x214B
{
	struct<6> Var0;
	
	if (!unk_0x4916190900E76373())
	{
		if (bParam1)
		{
			func_82();
			func_72(unk_0x9EB17624F44A8DA4(), 0, 81920);
			Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_98 = 8;
			func_71();
			func_70();
		}
		func_69(iParam0);
		func_68(iParam0);
		func_66();
		func_65();
		func_59();
	}
	Var0 = { func_64(iParam0) };
	func_63(iParam0);
	func_61(&Var0);
}

void func_61(char* sParam0)//Position - 0x21B6
{
	StringCopy(&(Global_2447174.f_746), sParam0, 24);
	if (func_62())
	{
		StringCopy(&(Global_971064.f_42), sParam0, 24);
	}
}

bool func_62()//Position - 0x21DA
{
	return unk_0xC80D31E4B587871C(Global_2447954.f_1.f_2809, 5);
}

void func_63(int iParam0)//Position - 0x21F0
{
	Global_1655819.f_16[iParam0 /*44*/].f_3 = 1;
}

struct<6> func_64(int iParam0)//Position - 0x2205
{
	return Global_1655819.f_16[iParam0 /*44*/].f_6;
}

void func_65()//Position - 0x221B
{
	Global_2447174.f_6 = 100;
}

void func_66()//Position - 0x222B
{
	unk_0x872F1C1F8587CCC7(&Global_2447174, 5);
	func_67();
}

void func_67()//Position - 0x2240
{
	unk_0x872F1C1F8587CCC7(&Global_2447174, 8);
}

void func_68(var uParam0)//Position - 0x2252
{
	Global_1655819.f_8 = uParam0;
}

void func_69(var uParam0)//Position - 0x2262
{
	Global_1655819.f_9 = uParam0;
}

void func_70()//Position - 0x2272
{
	Global_2455152.f_1 = 0;
}

void func_71()//Position - 0x2281
{
	char* sVar0;
	
	StringCopy(&(Global_2447174.f_746), sVar0, 24);
}

void func_72(int iParam0, bool bParam1, int iParam2)//Position - 0x2294
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0xEBD8A0B96FCAF579())
		{
			unk_0x7635EA803CE40962(false);
		}
	}
	if (!unk_0x3A711520F83BAE98())
	{
		iVar0 = iParam2;
		unk_0x59F2A26BF856E30A(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_80())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0x552F39AE86E07792(iParam0) && unk_0x5BEF7A5AB8F17255(iParam0))
		{
			iVar25 = unk_0x25D049AAC4603E65(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x3A711520F83BAE98())
				{
					unk_0xB68F1251512BDC18(1);
				}
				else if (bVar13 || (!func_78(unk_0x9EB17624F44A8DA4(), 0) && !func_77()))
				{
					unk_0xB3A8974D2C811672(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x3A711520F83BAE98() && !bVar18)
					{
						unk_0xB68F1251512BDC18(0);
					}
					Global_2422736[iParam0 /*420*/].f_259 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_76(iVar25) && !unk_0xDDF5130488C0B76A(iVar25))
				{
					if (!bVar21)
					{
						unk_0xB18E1DBC397238E1(iVar25, true, 0);
					}
				}
				if (!unk_0xDFFD5F8C8ABCB7EF(iVar25))
				{
					if (!bVar20)
					{
						unk_0xEDC33A771FAEB393(iVar25, false);
					}
					unk_0xFBA991D3A851E195(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xEDC33A771FAEB393(iVar25, false);
				}
				unk_0x5C5D33A1B2711D21(iVar25, true);
				unk_0x8FA21D9CF7681249(iParam0, 0);
				unk_0x8A92C5AE18686726(iVar25);
				unk_0x5718F894FDA63A9E(iVar25, 1);
				func_75();
				func_74();
				if (unk_0x56B73C6866440457())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x40189ECE75CF9724())
				{
				}
				Global_2422736[iParam0 /*420*/].f_260 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_76(iVar25) && !unk_0xDDF5130488C0B76A(iVar25))
				{
					if (!bVar21)
					{
						unk_0xB18E1DBC397238E1(iVar25, !bVar14, 0);
					}
					if (!unk_0xDFFD5F8C8ABCB7EF(iVar25))
					{
						if (!bVar20)
						{
							unk_0xEDC33A771FAEB393(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xFBA991D3A851E195(iVar25, 1);
						}
					}
					if (func_73(Global_4456448.f_143970))
					{
						unk_0xEDC33A771FAEB393(iVar25, true);
					}
				}
				if (Global_1312831)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0x8FA21D9CF7681249(iParam0, 0);
				}
				else
				{
					unk_0x8FA21D9CF7681249(iParam0, 1);
				}
				unk_0x5C5D33A1B2711D21(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x6728497EE586D1FE(iVar25) && !unk_0x88DDBE9908752BF0(iVar25, 0))
					{
						unk_0x957CEE967C939968(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0x59F2A26BF856E30A(iParam0, bParam1, iVar26);
		}
	}
}

bool func_73(int iParam0)//Position - 0x2676
{
	return iParam0 == 17;
}

void func_74()//Position - 0x2683
{
	vector3 vVar0;
	
	Global_2436181.f_1117 = 0;
	Global_2436181.f_1118 = 0;
	Global_2436181.f_1119 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2436181.f_1124 = -1;
	Global_2436181.f_1125 = 0;
	Global_2405047.f_2650 = { vVar0 };
}

void func_75()//Position - 0x26D0
{
	Global_2405047.f_675 = 0;
	Global_2405047.f_2693 = 0;
	Global_2405047.f_508 = 0;
	Global_2405047.f_587 = 0;
	Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_222 = 0;
	Global_2405047.f_2649 = 0;
}

int func_76(int iParam0)//Position - 0x270E
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x78F50AA8F955BEFC(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_77()//Position - 0x273F
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

bool func_78(int iParam0, int iParam1)//Position - 0x2750
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_79(-1, 0) == 8;
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

int func_79(int iParam0, bool bParam1)//Position - 0x279B
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_51();
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

int func_80()//Position - 0x27DC
{
	if (func_81() == 0)
	{
		return 1;
	}
	return 0;
}

int func_81()//Position - 0x27F1
{
	return Global_1312466.f_18;
}

void func_82()//Position - 0x27FF
{
	unk_0x872F1C1F8587CCC7(&Global_2447174, 7);
}

void func_83()//Position - 0x2810
{
	unk_0x872F1C1F8587CCC7(&(Global_2447174.f_2), 15);
}

int func_84(int iParam0)//Position - 0x2824
{
	if (iParam0 || func_94())
	{
		if (!func_86(1))
		{
			return 1;
		}
		if (!func_85())
		{
			return 1;
		}
		if (unk_0x6681C497ECD12BEA())
		{
			return 1;
		}
	}
	return 0;
}

bool func_85()//Position - 0x2860
{
	return Global_1655819.f_4;
}

int func_86(bool bParam0)//Position - 0x286E
{
	if (!func_91())
	{
		return 0;
	}
	if ((func_89(func_90(-1), 0) >= 1 || func_49(123, -1)) && func_49(133, -1))
	{
		func_88();
		return 1;
	}
	else if (bParam0)
	{
		func_87();
	}
	return 0;
}

void func_87()//Position - 0x28BF
{
	Global_1655819.f_5 = 1;
}

void func_88()//Position - 0x28CE
{
	Global_1655819.f_4 = 1;
}

int func_89(int iParam0, int iParam1)//Position - 0x28DD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_285062[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_285062[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((system::to_float(iVar1) - system::to_float(iVar2)) / 2f) + system::to_float(iVar2));
		iVar3 = system::round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_90(int iParam0)//Position - 0x299C
{
	return Global_1368213[func_50(iParam0)];
}

int func_91()//Position - 0x29B0
{
	if (func_93() && func_92(0))
	{
		return 1;
	}
	return 0;
}

var func_92(int iParam0)//Position - 0x29CE
{
	return Global_1312373[iParam0];
}

var func_93()//Position - 0x29DE
{
	return func_92(func_51() + 1);
}

var func_94()//Position - 0x29F0
{
	return Global_1655819.f_2;
}

int func_95()//Position - 0x29FE
{
	if (((((func_103() || !func_101(-1)) || !func_99()) || !func_98()) || !func_97()) || func_96())
	{
		return 1;
	}
	return 0;
}

var func_96()//Position - 0x2A49
{
	return Global_2456843;
}

int func_97()//Position - 0x2A55
{
	if (unk_0x496616BFA56C89EB(903) == 1)
	{
		return 1;
	}
	return 0;
}

int func_98()//Position - 0x2A70
{
	int iVar0;
	
	if (unk_0x2C0078D44E900CAB(&iVar0) == 0)
	{
		if (iVar0 == 1)
		{
			return 0;
		}
	}
	return 1;
}

int func_99()//Position - 0x2A8D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_100(iVar0) == 1)
		{
			iVar0 = 2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_100(int iParam0)//Position - 0x2AB9
{
	if (func_49(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0)//Position - 0x2AD5
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_102(iParam0);
	iVar1 = unk_0x496616BFA56C89EB(iVar0);
	if (unk_0xC80D31E4B587871C(iVar1, 1))
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0)//Position - 0x2AFC
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_51();
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

var func_103()//Position - 0x2B5F
{
	return Global_2447174.f_630;
}

bool func_104(int iParam0)//Position - 0x2B6E
{
	return Global_1655819.f_16[iParam0 /*44*/].f_4;
}

void func_105()//Position - 0x2B82
{
	int iVar0;
	int iVar1;
	
	func_111();
	if (unk_0xEE29FC17B3067A15() && !func_108())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = unk_0x1F3FF0A651F4BFA3(func_107(iVar0));
			if (iVar1 > 0)
			{
				Global_1655819.f_16[iVar0 /*44*/] = iVar1;
				func_106(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1655819.f_16[iVar0 /*44*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_106(int iParam0, int iParam1)//Position - 0x2BF9
{
	bool bVar0;
	struct<16> Var1;
	var uVar2;
	
	bVar0 = true;
	if (unk_0x4C7F83E7D023E43B(iParam1, "contentId", &Var1))
	{
		MemCopy(&(Global_1655819.f_16[iParam0 /*44*/].f_6), {Var1}, 6);
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0x4C7F83E7D023E43B(iParam1, "playlist", &Var1))
	{
		Global_1655819.f_16[iParam0 /*44*/].f_12 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0x0D22FA40C89ED709(iParam1, &Var1))
	{
		Global_1655819.f_16[iParam0 /*44*/].f_28 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (iParam0 == 1)
	{
		if (unk_0xAEAE49EAD49C654A(iParam1, "coronaCountdown", &uVar2))
		{
			Global_1655819.f_16[iParam0 /*44*/].f_1 = uVar2;
		}
		else
		{
			Global_1655819.f_16[iParam0 /*44*/].f_1 = 120000;
		}
		Global_1655819.f_16[iParam0 /*44*/].f_2 = 0;
		if (unk_0xAEAE49EAD49C654A(iParam1, "eventSubType", &uVar2))
		{
			Global_1655819.f_16[iParam0 /*44*/].f_2 = uVar2;
		}
	}
	if (bVar0)
	{
		if (iParam0 != 1)
		{
			Global_1655819.f_1 = 1;
		}
		Global_1655819.f_16[iParam0 /*44*/].f_4 = 1;
	}
	else
	{
		Global_1655819.f_16[iParam0 /*44*/].f_4 = 0;
	}
}

char* func_107(int iParam0)//Position - 0x2D07
{
	switch (iParam0)
	{
		case 0:
			return "TournamentQualifying";
		
		case 1:
			return "Tournament";
		
		case 2:
			return "LiveStreaming";
		
		case 3:
			return "Sweepstakes";
		
		case 4:
			return "FeaturedPlaylist";
		
		default:
	}
	return "";
}

int func_108()//Position - 0x2D54
{
	if (!func_109())
	{
		return 1;
	}
	return 0;
}

int func_109()//Position - 0x2D69
{
	if (func_110())
	{
		return 0;
	}
	if (unk_0x73EC29164C21897D() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_110()//Position - 0x2D89
{
	return Global_2457327;
}

void func_111()//Position - 0x2D95
{
	struct<281> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = 6;
	Global_1655819 = { Var0 };
}

void func_112(int iParam0)//Position - 0x2DC0
{
	var uVar0;
	
	if (Global_70856)
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
	}
	else
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Hang_Up", &Global_14442, 1);
	}
	if (unk_0x575EF325DA5E3F04(1, iParam0, &uVar0, 21))
	{
		func_114();
	}
	Global_2518688.f_1 = 0;
	Global_2518688.f_33 = -1;
	Global_2518688.f_34 = -1;
	StringCopy(&(Global_2518688.f_4), "", 64);
	func_113(&(Global_2518688.f_20));
}

void func_113(var uParam0)//Position - 0x2E28
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_114()//Position - 0x2E70
{
	Global_2518688.f_2 = 1;
	Global_2518688.f_38 = 1;
	if (unk_0xDEC0EB6EAE9BC575())
	{
		if (unk_0x19733C00399875C0())
		{
			while (unk_0x2EEBA8A2DF2CA2C6())
			{
				system::wait(0);
			}
			unk_0xE0A8DD52CBB7AA93();
			Global_2518688 = 0;
			Global_2518688.f_2 = 0;
		}
		else if (func_120(Global_2518688.f_20))
		{
			if (unk_0xFFE9B6D8F03AC353(&(Global_2518688.f_20)))
			{
				if (!unk_0xC021F9C062ACF697(&(Global_2518688.f_20)))
				{
					func_119();
				}
			}
		}
		else
		{
			func_119();
		}
	}
	else
	{
		func_119();
	}
	if (Global_2518688.f_37)
	{
		func_115(0);
	}
	Global_2518688.f_37 = 0;
	Global_2518688.f_3 = 0;
}

void func_115(int iParam0)//Position - 0x2F10
{
	if (Global_14615)
	{
		func_117(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0x872F1C1F8587CCC7(&Global_2324, 16);
	}
	if (unk_0x0DBDCC9C5537E157())
	{
		unk_0xB31CEFB00C146C91(false);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2323, 30);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 30);
	}
	if (!func_116())
	{
		Global_14453.f_1 = 3;
	}
}

int func_116()//Position - 0x2F80
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_117(bool bParam0, bool bParam1)//Position - 0x2FA7
{
	if (bParam0)
	{
		if (func_118(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0x494F5FA1BF017D58(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x0D75BB9393CE608D(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x0D75BB9393CE608D(Global_14390);
		}
		else
		{
			unk_0x0D75BB9393CE608D(Global_14381);
		}
	}
}

int func_118(int iParam0)//Position - 0x301B
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

void func_119()//Position - 0x3075
{
	Global_2518688.f_1 = 0;
	Global_2518688 = 0;
	Global_2518688.f_2 = 0;
	Global_2518688.f_33 = -1;
	Global_2518688.f_34 = -1;
	StringCopy(&(Global_2518688.f_4), "", 64);
	StringCopy(&(Global_2518688.f_39[0 /*16*/]), "", 64);
	Global_2518688.f_38 = 0;
	Global_2518688.f_56 = 0;
	Global_2518688.f_57 = 0;
	Global_2518688.f_58 = -2;
	Global_2518688.f_3 = 0;
	func_113(&(Global_2518688.f_20));
}

bool func_120(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x30E4
{
	return unk_0xA024F2175B7F181A(&uParam0, 13);
}

void func_121(int iParam0)//Position - 0x30F4
{
	struct<2> Var0;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &Var0, 15))
	{
		Global_2518688.f_33 = Var0.f_1;
		Global_2518688.f_34 = Var0;
	}
}

void func_122(int iParam0)//Position - 0x311F
{
	struct<9> Var0;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &Var0, 21))
	{
		if (Global_2518688.f_3 == 0)
		{
			if (!func_123(&(Var0.f_8)))
			{
				unk_0x1A9F9CAE1C942717(0, 2);
			}
			else
			{
				Global_2518688.f_3 = 1;
				MemCopy(&(Global_2518688.f_4), {Var0}, 16);
				Global_2518688.f_20 = { Var0.f_8 };
				StringCopy(&(Global_2518688.f_39[0 /*16*/]), "", 64);
				Global_2518688.f_58 = -2;
				Global_2518688.f_56 = 0;
				Global_2518688.f_57 = 0;
			}
		}
		else if (!func_123(&(Var0.f_8)))
		{
			unk_0x1A9F9CAE1C942717(0, 2);
		}
		else
		{
			Global_2518688.f_3 = 1;
			MemCopy(&(Global_2518688.f_4), {Var0}, 16);
			Global_2518688.f_20 = { Var0.f_8 };
			StringCopy(&(Global_2518688.f_39[0 /*16*/]), "", 64);
			Global_2518688.f_58 = -2;
			Global_2518688.f_56 = 0;
			Global_2518688.f_57 = 0;
		}
	}
}

int func_123(var uParam0)//Position - 0x3203
{
	if (Global_70856)
	{
		if (func_48() == 0)
		{
			return 0;
		}
		if (func_127(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8AA8CAD184F4332C(unk_0xFC1458A37D98B502()) >= 1f)
				{
					return 0;
				}
			}
		}
	}
	if (unk_0x73EC29164C21897D() == 0)
	{
		return 0;
	}
	if (Global_2518688.f_1)
	{
	}
	if (Global_14623 == 1)
	{
		return 0;
	}
	if (Global_1574333)
	{
		return 0;
	}
	if (Global_2518688.f_36)
	{
		return 0;
	}
	if (func_116())
	{
		return 0;
	}
	if (((Global_35861 != 6 && Global_35861 != 8) && Global_35861 != 12) && Global_35861 != 15)
	{
		return 0;
	}
	if (func_126() && !func_125(12))
	{
		return 0;
	}
	if (unk_0x0DBDCC9C5537E157())
	{
		return 0;
	}
	if (unk_0x6C97EEC6339FB45C())
	{
		return 0;
	}
	if (!func_124(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (unk_0x0F30C1F1717A6437())
	{
		return 0;
	}
	if (Global_71116)
	{
		return 0;
	}
	if (unk_0x5BB472A2AD2C6447())
	{
		if (!unk_0xE13E5EE64FACC268(unk_0x9EB17624F44A8DA4()))
		{
			return 0;
		}
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 0;
	}
	if (unk_0xAE37702876F3FA4D(uParam0) || unk_0xB03B6A0ECBAF5BA5(uParam0))
	{
		return 0;
	}
	if (unk_0xD99EEAE2799038AE(uParam0) || unk_0xB67B7A695428E009(uParam0))
	{
		return 0;
	}
	if (unk_0xD6885937DB536F12())
	{
		if (unk_0x177281F5FA205A38())
		{
			if (unk_0xF573796496CF1126())
			{
				return 0;
			}
		}
		else if (unk_0xFD6215BABFD843F2())
		{
			return 0;
		}
	}
	return 1;
}

int func_124(int iParam0)//Position - 0x3387
{
	int iVar0;
	struct<13> Var1;
	
	if (unk_0x1AA23FF6402169E9() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != unk_0x9EB17624F44A8DA4())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (unk_0x8A81E55A71641BC1() || unk_0xFD6215BABFD843F2())
	{
		if (unk_0x580E56ACE6F37FAD(0, iVar0))
		{
			if (unk_0x0A51F536ECBFA795())
			{
				return 1;
			}
		}
	}
	if (unk_0x04E8D1E1170F25E1() || unk_0x177281F5FA205A38())
	{
		if (iParam0 == unk_0x9EB17624F44A8DA4())
		{
			if (unk_0x2B31458DEE46DD36(0, -3, 1) || unk_0x580E56ACE6F37FAD(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_8(iParam0) };
			if (unk_0x580E56ACE6F37FAD(0, -1) || (unk_0x580E56ACE6F37FAD(1, -1) && unk_0xFFE9B6D8F03AC353(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0x580E56ACE6F37FAD(0, iVar0))
		{
			if (unk_0x0A51F536ECBFA795())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_125(int iParam0)//Position - 0x3460
{
	return Global_35861 == iParam0;
}

int func_126()//Position - 0x346E
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	return 1;
}

int func_127(int iParam0, bool bParam1, bool bParam2)//Position - 0x3483
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

void func_128()//Position - 0x34CD
{
	func_119();
}

void func_129()//Position - 0x34D9
{
	Global_2518688.f_1 = 1;
	Global_2518688.f_33 = -1;
	Global_2518688.f_34 = -1;
	if (unk_0x34D11AB5BA7922C2(Global_14434) == 1)
	{
		if (Global_14441)
		{
			func_130(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_14396)
			{
				func_130(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			func_130(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

void func_130(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x3552
{
	unk_0x008F3E3CC076EA0E(iParam0, sParam1);
	unk_0xD07D5CD276368D36(system::round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam6));
	}
	if (!unk_0xAB019B170BF1309C(sParam7))
	{
		func_131(sParam7);
	}
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		func_131(sParam8);
	}
	if (!unk_0xAB019B170BF1309C(sParam9))
	{
		func_131(sParam9);
	}
	if (!unk_0xAB019B170BF1309C(sParam10))
	{
		func_131(sParam10);
	}
	if (!unk_0xAB019B170BF1309C(sParam11))
	{
		func_131(sParam11);
	}
	unk_0x271AA5469AF471B3();
}

void func_131(char* sParam0)//Position - 0x3605
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_132()//Position - 0x3617
{
	int iVar0;
	
	if (iLocal_96)
	{
		Global_48154 = 0;
		Global_48154.f_12 = 0;
		Global_48154.f_24 = 0;
		Global_48154.f_36 = 0;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_48154.f_1[iVar0] = 0;
			Global_48154.f_13[iVar0] = 0;
			Global_48154.f_25[iVar0] = 0;
			Global_48154.f_37[iVar0] = 0;
			iVar0++;
		}
		iLocal_96 = 0;
	}
}

