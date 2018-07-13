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
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112[4] = { 0, 0, 0, 0 };
	var uLocal_113 = 0;
	bool bLocal_114 = 0;
	bool bLocal_115 = 0;
	vector3 vLocal_116 = { 0f, 0f, 0f };
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	struct<22> Local_125 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_126[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<21> Local_127 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_94 = ((0,05f + 0,275f) - 0,01f);
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_808(ScriptParam_127))
		{
			func_759();
		}
	}
	while (true)
	{
		func_758();
		if (func_751())
		{
			func_759();
		}
		if (func_748(1))
		{
			func_759();
		}
		switch (func_747(unk_0x622FF3AE4B1D07C3()))
		{
			case 0:
				if (func_746() == 1)
				{
					func_745(1);
					func_729();
				}
				break;
			
			case 1:
				if (func_746() == 1)
				{
					func_32();
				}
				else if (func_746() == 3)
				{
					func_745(3);
				}
				break;
			
			case 3:
				func_759();
				break;
		}
		if (unk_0x8E1421E2A2A2FBD4())
		{
			if (func_746() != 3 && func_31())
			{
				func_30(3);
			}
			switch (func_746())
			{
				case 0:
					if (func_23())
					{
						func_30(1);
					}
					break;
				
				case 1:
					if (func_1())
					{
						func_30(3);
					}
					break;
				
				case 3:
					func_759();
					break;
				}
		}
	}
}

int func_1()//Position - 0x175
{
	var uVar0;
	bool bVar1;
	
	func_22();
	switch (Local_125.f_1)
	{
		case 0:
			if (!func_21(&(Local_125.f_10)))
			{
				func_20(&(Local_125.f_10), 0, 0);
			}
			else if (func_19(&(Local_125.f_10), Global_262145.f_11829, 0))
			{
				unk_0x872F1C1F8587CCC7(&(Local_125.f_2), 4);
				func_18(2);
			}
			if (!func_17(Local_125.f_7))
			{
				if (func_13((Global_262145.f_11834 - 1), &uVar0, 1123024896, 0))
				{
					func_18(1);
				}
			}
			if (unk_0xC80D31E4B587871C(Local_125.f_2, 1))
			{
				func_18(2);
			}
			if (func_12(Local_125.f_5) || func_10(Local_125.f_5, 1, 0))
			{
				unk_0x872F1C1F8587CCC7(&(Local_125.f_2), 2);
				func_18(2);
			}
			break;
		
		case 1:
			if (!func_21(&(Local_125.f_12)))
			{
				func_20(&(Local_125.f_12), 0, 0);
			}
			else
			{
				if (!func_21(&(Local_125.f_16)))
				{
					if (!func_13(Global_262145.f_11834, &uVar0, 1123024896, 0))
					{
						func_9(&(Local_125.f_16), 0, 0);
						unk_0x872F1C1F8587CCC7(&(Local_125.f_2), 6);
					}
				}
				else if (!func_13(Global_262145.f_11834, &uVar0, 1123024896, 0))
				{
					if (func_19(&(Local_125.f_16), 20000, 0))
					{
						unk_0x872F1C1F8587CCC7(&(Local_125.f_2), 2);
					}
				}
				else
				{
					func_8(&(Local_125.f_16));
					func_9(&(Local_125.f_18), 0, 0);
					unk_0x0EE72DB1CD8A3B86(&(Local_125.f_2), 6);
				}
				if (func_21(&(Local_125.f_18)))
				{
					if (func_19(&(Local_125.f_18), 5000, 0))
					{
						func_8(&(Local_125.f_18));
					}
				}
				bVar1 = func_7();
				if (func_19(&(Local_125.f_12), Global_262145.f_11830, 0) || bVar1)
				{
					func_18(2);
					if (!bVar1)
					{
						unk_0x872F1C1F8587CCC7(&(Local_125.f_2), 0);
					}
					else
					{
						func_2();
					}
				}
			}
			if (func_12(Local_125.f_5) || func_10(Local_125.f_5, 1, 0))
			{
				unk_0x872F1C1F8587CCC7(&(Local_125.f_2), 2);
				func_18(2);
			}
			break;
		
		case 2:
			if (!func_21(&(Local_125.f_14)))
			{
				func_20(&(Local_125.f_14), 0, 0);
			}
			else if (func_19(&(Local_125.f_14), 15000, 0))
			{
				func_18(3);
			}
			break;
		
		case 3:
			return 1;
	}
	return 0;
}

void func_2()//Position - 0x3A2
{
	struct<14> Var0;
	struct<14> Var1;
	struct<14> Var2;
	
	if (!unk_0xC80D31E4B587871C(Local_125.f_2, 5))
	{
		if (unk_0xC80D31E4B587871C(Local_125.f_2, 3))
		{
			Var0 = -1942454564;
			Var0.f_1 = unk_0x9EB17624F44A8DA4();
			Var0.f_2 = -930771743;
			Var0.f_10 = func_6();
			func_3(Var0, func_4());
			unk_0x872F1C1F8587CCC7(&(Local_125.f_2), 5);
		}
		else if (unk_0xC80D31E4B587871C(Local_125.f_2, 0))
		{
			Var1 = -1942454564;
			Var1.f_1 = unk_0x9EB17624F44A8DA4();
			Var1.f_2 = 67802520;
			func_3(Var1, func_4());
			unk_0x872F1C1F8587CCC7(&(Local_125.f_2), 5);
		}
		else if (unk_0xC80D31E4B587871C(Local_125.f_2, 2) || unk_0xC80D31E4B587871C(Local_125.f_2, 1))
		{
			Var2 = -1942454564;
			Var2.f_1 = unk_0x9EB17624F44A8DA4();
			Var2.f_2 = 2014950429;
			func_3(Var2, func_4());
			unk_0x872F1C1F8587CCC7(&(Local_125.f_2), 5);
		}
	}
}

void func_3(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x482
{
	Param0 = -1942454564;
	Param0.f_1 = unk_0x9EB17624F44A8DA4();
	if (!iParam13 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Param0, 14, iParam13);
	}
}

int func_4()//Position - 0x4AF
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar1);
		if (func_5(iVar2, 0, 0))
		{
			if (!unk_0xC80D31E4B587871C(vLocal_126[iVar1 /*3*/].f_2, 0))
			{
				unk_0x872F1C1F8587CCC7(&uVar0, iVar2);
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_5(int iParam0, bool bParam1, bool bParam2)//Position - 0x4F8
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

int func_6()//Position - 0x542
{
	return Local_125.f_6;
}

int func_7()//Position - 0x54E
{
	if ((((unk_0xC80D31E4B587871C(Local_125.f_2, 0) || unk_0xC80D31E4B587871C(Local_125.f_2, 1)) || unk_0xC80D31E4B587871C(Local_125.f_2, 2)) || unk_0xC80D31E4B587871C(Local_125.f_2, 3)) || unk_0xC80D31E4B587871C(Local_125.f_2, 4))
	{
		return 1;
	}
	return 0;
}

void func_8(var uParam0)//Position - 0x5A3
{
	uParam0->f_1 = 0;
}

void func_9(var uParam0, bool bParam1, bool bParam2)//Position - 0x5B0
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

int func_10(int iParam0, bool bParam1, bool bParam2)//Position - 0x5ED
{
	if (iParam0 == func_11())
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

int func_11()//Position - 0x657
{
	return -1;
}

bool func_12(int iParam0)//Position - 0x660
{
	return Global_1595693[iParam0 /*680*/].f_196 != 0;
}

int func_13(int iParam0, var uParam1, float fParam2, bool bParam3)//Position - 0x675
{
	int iVar0;
	float fVar1;
	
	iVar0 = unk_0x25D049AAC4603E65(func_16());
	if (!unk_0x6ADD12BF4D6D2587(iVar0))
	{
		return 0;
	}
	*uParam1 = func_15(iVar0, Local_125.f_7, 0);
	if (*uParam1 > IntToFloat(iParam0))
	{
		return 0;
	}
	fVar1 = unk_0x20D66D71CF476CDB(iVar0);
	*uParam1 = func_14(*uParam1, fVar1);
	if (fVar1 > fParam2 && !bParam3)
	{
		return 0;
	}
	return 1;
}

float func_14(float fParam0, float fParam1)//Position - 0x6DC
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_15(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x6F3
{
	vector3 vVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	}
	return unk_0xBE3C4023003180FC(vVar0, vParam1, bParam2);
}

int func_16()//Position - 0x72D
{
	return Local_125.f_5;
}

int func_17(vector3 vParam0)//Position - 0x739
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_18(int iParam0)//Position - 0x763
{
	Local_125.f_1 = iParam0;
}

int func_19(var uParam0, int iParam1, bool bParam2)//Position - 0x771
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_20(uParam0, bParam2, 0);
	if (unk_0x3A711520F83BAE98() && !bParam2)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_20(var uParam0, bool bParam1, bool bParam2)//Position - 0x7CF
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

bool func_21(var uParam0)//Position - 0x814
{
	return uParam0->f_1;
}

void func_22()//Position - 0x820
{
	int iVar0;
	
	if (!unk_0xC80D31E4B587871C(Local_125.f_2, 1))
	{
		if (!unk_0x552F39AE86E07792(func_16()))
		{
			unk_0x872F1C1F8587CCC7(&(Local_125.f_2), 1);
		}
	}
	if (!unk_0xC80D31E4B587871C(Local_125.f_2, 1) && !unk_0xC80D31E4B587871C(Local_125.f_2, 2))
	{
		iVar0 = unk_0x87678BB8392EFD41(func_16());
		if (iVar0 >= 0 && iVar0 < 32)
		{
			if (unk_0xC80D31E4B587871C(vLocal_126[iVar0 /*3*/].f_2, 11))
			{
				unk_0x872F1C1F8587CCC7(&(Local_125.f_2), 2);
				if (Local_125.f_1 == 0)
				{
					func_18(3);
				}
			}
		}
	}
}

int func_23()//Position - 0x8A8
{
	vector3 vVar0[4];
	var uVar1[4];
	float fVar2;
	int iVar3;
	int iVar4;
	
	Local_125.f_5 = func_29();
	Local_125.f_6 = func_11();
	unk_0x29723B8B6E11E8F2(&(Local_125.f_20), &(Local_125.f_21));
	vVar0[0 /*3*/] = { -1976,481f, -638,13f, 4,6219f };
	vVar0[1 /*3*/] = { 2306,744f, -400,686f, 86,3213f };
	vVar0[2 /*3*/] = { 3505,623f, 3787,041f, 28,9708f };
	vVar0[3 /*3*/] = { -1976,225f, 4546,3f, 56,0401f };
	iVar3 = 0;
	while (iVar3 <= 3)
	{
		uVar1[iVar3] = func_15(unk_0xFC1458A37D98B502(), vVar0[iVar3 /*3*/], 1);
		iVar3++;
	}
	fVar2 = uVar1[0];
	iVar4 = 1;
	iVar3 = 0;
	while (iVar3 <= 3)
	{
		if (uVar1[iVar3] < fVar2)
		{
			fVar2 = uVar1[iVar3];
			iVar4 = iVar3 + 1;
		}
		iVar3++;
	}
	Local_125.f_3 = iVar4;
	Local_125.f_7 = { func_24(Local_125.f_3) };
	return 1;
}

Vector3 func_24(int iParam0)//Position - 0x9A3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0xE3CCAFB1555348DF();
	switch (iParam0)
	{
		case 1:
			iVar1 = 6;
			iVar4 = 0;
			iVar5 = 7;
			break;
		
		case 2:
			iVar1 = 6;
			iVar4 = 8;
			iVar5 = 7;
			break;
		
		case 3:
			iVar1 = 5;
			iVar4 = 16;
			iVar5 = 6;
			break;
		
		case 4:
			iVar1 = 4;
			iVar4 = 24;
			iVar5 = 5;
			break;
	}
	unk_0x976F69A3E162F01A(iVar0);
	iVar2 = unk_0xBA9FD656538242E8(0, iVar1);
	iVar3 = func_28(2940, -1, 0);
	if (iVar5 > 1)
	{
		if (unk_0xC80D31E4B587871C(iVar3, iVar4))
		{
			iVar6 = iVar4 + 1;
			while (iVar6 <= (iVar4 + 1 + (iVar5 - 1)))
			{
				if (unk_0xC80D31E4B587871C(iVar3, iVar6))
				{
					if (iVar6 - iVar4 + 1) >= (iVar5 - 1)
					{
						iVar2 = 0;
					}
					else
					{
						iVar2 = (iVar6 - iVar4 + 1) + 1;
					}
					iVar6 = (iVar4 + 1 + (iVar5 - 1));
				}
				iVar6++;
			}
		}
	}
	iVar3 = 0;
	unk_0x872F1C1F8587CCC7(&iVar3, (iVar4 + 1 + iVar2));
	unk_0x872F1C1F8587CCC7(&iVar3, iVar4);
	func_25(2940, iVar3, -1, 1, 0);
	Local_125.f_4 = iVar3;
	switch (iParam0)
	{
		case 1:
			switch (iVar2)
			{
				case 0:
					return -472,415f, -1689,474f, 17,9477f;
				
				case 1:
					return -1654,092f, 213,143f, 59,6413f;
				
				case 2:
					return -1008,389f, -1020,496f, 1,1503f;
				
				case 3:
					return -604,266f, -142,684f, 38,0086f;
				
				case 4:
					return -1700,562f, -322,726f, 49,0851f;
				
				case 5:
					return -1158,28f, -383,876f, 50,7161f;
				
				case 6:
					return -1191,066f, -1491,259f, 3,3797f;
				
				default:
			}
			break;
		
		case 2:
			switch (iVar2)
			{
				case 0:
					return 160,142f, -1761,704f, 28,0984f;
				
				case 1:
					return 1097,841f, -554,319f, 54,7365f;
				
				case 2:
					return 191,932f, 124,653f, 96,9401f;
				
				case 3:
					return 323,693f, -867,527f, 28,1726f;
				
				case 4:
					return 1386,79f, -1689,002f, 61,0964f;
				
				case 5:
					return 968,623f, -3067,462f, 4,9008f;
				
				case 6:
					return 928,85f, -2270,156f, 29,5096f;
				
				default:
			}
			break;
		
		case 3:
			switch (iVar2)
			{
				case 0:
					return 1667,876f, 3710,527f, 33,0008f;
				
				case 1:
					return 2459,918f, 4827,391f, 34,4214f;
				
				case 2:
					return 1506,714f, 6513,564f, 19,8804f;
				
				case 3:
					return 2501,049f, 2639,483f, 42,5508f;
				
				case 4:
					return 2658,239f, 1542,729f, 23,4847f;
				
				case 5:
					return 1415,427f, 1819,726f, 102,3258f;
				
				default:
			}
			break;
		
		case 4:
			switch (iVar2)
			{
				case 0:
					return -194,476f, 6316,824f, 30,5625f;
				
				case 1:
					return -660,505f, 5677,562f, 30,7898f;
				
				case 2:
					return -1557,125f, 4561,964f, 18,5454f;
				
				case 3:
					return -159,803f, 2713,044f, 54,3232f;
				
				case 4:
					return -3240,385f, 1106,345f, 1,5823f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_25(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xD4F
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_26(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_26(int iParam0)//Position - 0xD7F
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

int func_27()//Position - 0xDB3
{
	return Global_1312736;
}

int func_28(int iParam0, int iParam1, int iParam2)//Position - 0xDBF
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_26(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_29()//Position - 0xDF1
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_35;
}

void func_30(int iParam0)//Position - 0xE08
{
	Local_125 = iParam0;
}

int func_31()//Position - 0xE14
{
	if (Global_2512808.f_4856.f_29)
	{
		Global_2512808.f_4856.f_29 = 0;
		return 1;
	}
	return 0;
}

void func_32()//Position - 0xE37
{
	bLocal_114 = func_5(func_16(), 0, 1);
	func_725();
	func_662();
	func_661();
	func_658();
	func_640();
	func_635();
	func_614();
	func_596();
	func_586();
	switch (vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_1)
	{
		case 0:
			if (func_585())
			{
				func_578(0);
			}
			else if (func_576(unk_0x9EB17624F44A8DA4(), func_16(), 0))
			{
				func_578(6);
			}
			break;
		
		case 1:
			if (func_585())
			{
				func_578(5);
				func_546(2);
				if (bLocal_114)
				{
					if (!unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 8))
					{
						func_544();
						unk_0x872F1C1F8587CCC7(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 8);
					}
				}
				if (!func_543(unk_0x9EB17624F44A8DA4(), 0))
				{
					func_542(unk_0x9EB17624F44A8DA4(), 0);
				}
				if (unk_0xC80D31E4B587871C(Local_125.f_2, 6))
				{
					func_578(4);
				}
			}
			else if (bLocal_114)
			{
				if (func_576(unk_0x9EB17624F44A8DA4(), func_16(), 0))
				{
					func_578(3);
					func_546(1);
				}
				else
				{
					func_546(0);
					if (unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 0))
					{
						func_578(8);
					}
					else
					{
						func_578(1);
					}
					if (func_541(unk_0x622FF3AE4B1D07C3()))
					{
						func_538();
						func_515();
					}
				}
			}
			if (!unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 7))
			{
				func_493(-1, 0, 0, -1, 0);
				unk_0x872F1C1F8587CCC7(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 7);
			}
			func_372(&(Global_1347666.f_532), &Global_1347666, 27, &(Global_1347666.f_1), &(Global_1347666.f_115), -1, 0);
			break;
		
		case 2:
			if (!func_576(unk_0x9EB17624F44A8DA4(), func_16(), 1))
			{
				if (!func_371(unk_0x9EB17624F44A8DA4(), 19))
				{
					func_301();
					return;
				}
			}
			if (func_585())
			{
				if (func_543(unk_0x9EB17624F44A8DA4(), 0))
				{
					func_300(unk_0x9EB17624F44A8DA4(), 0);
				}
				if (unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 11))
				{
					func_759();
					return;
				}
			}
			func_85();
			func_301();
			if (unk_0xC80D31E4B587871C(Local_125.f_2, 0))
			{
				if (func_585())
				{
					func_546(10);
				}
				else if (func_576(unk_0x9EB17624F44A8DA4(), func_16(), 0))
				{
					func_546(11);
				}
				else
				{
					func_546(6);
				}
				func_81(Local_125.f_5);
			}
			else if (unk_0xC80D31E4B587871C(Local_125.f_2, 1))
			{
				if (func_541(unk_0x622FF3AE4B1D07C3()))
				{
					if (!func_576(unk_0x9EB17624F44A8DA4(), Local_125.f_5, 1))
					{
						func_546(7);
					}
				}
				func_81(0);
			}
			else if (unk_0xC80D31E4B587871C(Local_125.f_2, 2))
			{
				if (func_585())
				{
					func_546(12);
				}
				else if (func_576(unk_0x9EB17624F44A8DA4(), func_16(), 0))
				{
					func_546(13);
				}
				else if (func_541(unk_0x622FF3AE4B1D07C3()))
				{
					func_546(14);
				}
				func_81(0);
			}
			else if (unk_0xC80D31E4B587871C(Local_125.f_2, 3))
			{
				if (func_585())
				{
					if (func_80())
					{
						func_546(9);
					}
					else
					{
						func_546(8);
					}
				}
				else if (Local_125.f_6 == unk_0x9EB17624F44A8DA4())
				{
					if (func_576(unk_0x9EB17624F44A8DA4(), func_16(), 0))
					{
						func_546(15);
					}
					else
					{
						func_546(3);
					}
				}
				else if (func_541(unk_0x622FF3AE4B1D07C3()))
				{
					if (func_80())
					{
						func_546(17);
					}
					else
					{
						func_546(4);
					}
				}
				func_81(Local_125.f_6);
			}
			else if (unk_0xC80D31E4B587871C(Local_125.f_2, 4))
			{
				if (func_585())
				{
					func_546(16);
				}
				func_81(0);
			}
			if (func_33(&uLocal_100, 1, 0))
			{
				func_745(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_33(var uParam0, bool bParam1, int iParam2)//Position - 0x11B5
{
	bool bVar0;
	
	func_79(29);
	if ((*uParam0 > 0 && !func_78()) && func_62(unk_0x9EB17624F44A8DA4()) != 0)
	{
		if (!func_59())
		{
			func_58();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_21(&(uParam0->f_3)))
			{
				func_20(&(uParam0->f_3), 0, 0);
			}
			else if (func_19(&(uParam0->f_3), 1000, 0))
			{
				unk_0x872F1C1F8587CCC7(&(Global_1667858.f_3), 2);
				if (bParam1)
				{
					unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4553), 0);
					func_20(&(uParam0->f_5), 0, 0);
				}
				func_20(&(uParam0->f_1), 0, 0);
				func_57(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_21(&(uParam0->f_5)))
			{
				if (func_19(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_48(iParam2);
				func_57(uParam0, 2);
			}
			break;
		
		case 2:
			func_48(0);
			if (func_19(&(uParam0->f_1), 15000, 0))
			{
				if (func_34(func_35(0)))
				{
					unk_0x3E80C2F7BC665259(1);
				}
				func_57(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_19(&(uParam0->f_1), 23500, 0))
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4553), 1);
				unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 2);
				func_57(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4553), 1);
			unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 2);
			return 1;
	}
	return 0;
}

int func_34(char* sParam0)//Position - 0x132F
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

char* func_35(int iParam0)//Position - 0x1342
{
	if (((func_46(unk_0x9EB17624F44A8DA4()) || func_43(unk_0x9EB17624F44A8DA4())) || func_39()) || iParam0)
	{
		if (func_43(unk_0x9EB17624F44A8DA4()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_36(func_38()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_36(int iParam0)//Position - 0x139F
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return func_37(iParam0, 0);
	return 0;
}

int func_37(int iParam0, int iParam1)//Position - 0x13ED
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_38()//Position - 0x1442
{
	return Global_1644563;
}

bool func_39()//Position - 0x144E
{
	return (func_42() && func_40(func_29()));
}

bool func_40(int iParam0)//Position - 0x1467
{
	return func_41(iParam0, 1);
}

int func_41(int iParam0, int iParam1)//Position - 0x1476
{
	if (iParam0 != func_11())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_11())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 == iParam0 && Global_1627537[iParam0 /*532*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_42()//Position - 0x14C5
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 148;
}

bool func_43(int iParam0)//Position - 0x14DB
{
	return func_37(func_44(iParam0), 0);
}

int func_44(int iParam0)//Position - 0x14EE
{
	if (func_45(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

int func_45(int iParam0, int iParam1)//Position - 0x1511
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_46(int iParam0)//Position - 0x154C
{
	return func_47(func_44(iParam0));
}

int func_47(int iParam0)//Position - 0x155E
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 148 && func_41(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_48(int iParam0)//Position - 0x1640
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 0))
	{
		if ((((((((((!unk_0x2918F48A30D03841() && !unk_0xC80D31E4B587871C(Global_2512808.f_778, 2)) && func_5(unk_0x9EB17624F44A8DA4(), 1, 1)) && !Global_68215) && !Global_53084) && !unk_0x3E9CABD07B829173()) && !func_371(unk_0x9EB17624F44A8DA4(), 22)) && func_62(unk_0x9EB17624F44A8DA4()) != 0) && !func_55(func_56())) && !func_46(unk_0x9EB17624F44A8DA4())) && !func_54(func_44(unk_0x9EB17624F44A8DA4())))
		{
			unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4553), 1);
			func_53(func_35(iParam0), -1);
			func_49(1);
			unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4553), 0);
		}
	}
}

void func_49(int iParam0)//Position - 0x1712
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_50(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_78())
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Boss_Message_Orange", sVar0, false);
	}
}

bool func_50(bool bParam0)//Position - 0x1746
{
	return func_51(unk_0x9EB17624F44A8DA4(), bParam0);
}

bool func_51(int iParam0, bool bParam1)//Position - 0x1758
{
	return func_52(iParam0, bParam1, 1);
}

int func_52(int iParam0, bool bParam1, int iParam2)//Position - 0x1769
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_41(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1627537[iParam0 /*532*/].f_11;
	if (iVar0 != func_11() && Global_1627537[iVar0 /*532*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_53(char* sParam0, int iParam1)//Position - 0x17C5
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, false, iParam1);
}

int func_54(int iParam0)//Position - 0x17DC
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_55(int iParam0)//Position - 0x182C
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_56()//Position - 0x1852
{
	char* sVar0;
	
	sVar0 = unk_0x436287B7DB306165();
	if (unk_0x74C475EB8E73D398(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_57(var uParam0, int iParam1)//Position - 0x1D02
{
	*uParam0 = iParam1;
}

void func_58()//Position - 0x1D0F
{
	Global_2458365 = 1;
}

int func_59()//Position - 0x1D1C
{
	if (((((((func_44(unk_0x9EB17624F44A8DA4()) == 170 || func_44(unk_0x9EB17624F44A8DA4()) == 219) || func_44(unk_0x9EB17624F44A8DA4()) == 221) || func_44(unk_0x9EB17624F44A8DA4()) == 220) || func_44(unk_0x9EB17624F44A8DA4()) == 216) || func_44(unk_0x9EB17624F44A8DA4()) == 215) || func_44(unk_0x9EB17624F44A8DA4()) == 214) || func_44(unk_0x9EB17624F44A8DA4()) == 218)
	{
		return 1;
	}
	if (func_60(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x1DBD
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_61(Global_2422736[iParam0 /*420*/].f_324.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_61(int iParam0)//Position - 0x1E03
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
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
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
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
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
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
		case 98:
		case 99:
		case 100:
			return 3;
			break;
		
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
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
	}
	return -1;
}

int func_62(int iParam0)//Position - 0x20C7
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_77(iParam0) && !func_76(iParam0)) && !unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 8));
	bVar2 = func_75(iParam0);
	uVar3 = func_74();
	uVar4 = func_67();
	if ((bVar1 && (func_66(iParam0) || func_65(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_64(iParam0)) && !func_63(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2512808.f_4856.f_38 != iVar0)
	{
		Global_2512808.f_4856.f_38 = iVar0;
	}
	return iVar0;
}

bool func_63(int iParam0)//Position - 0x2185
{
	return func_371(iParam0, 19);
}

int func_64(int iParam0)//Position - 0x2195
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_371(iParam0, 9);
	}
	return 0;
}

int func_65(int iParam0)//Position - 0x21B3
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 0);
	}
	return 0;
}

int func_66(int iParam0)//Position - 0x21D9
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 7);
	}
	return 0;
}

int func_67()//Position - 0x21FF
{
	if ((func_371(unk_0x9EB17624F44A8DA4(), 21) || func_371(unk_0x9EB17624F44A8DA4(), 22)) || func_72())
	{
		return 1;
	}
	if (func_68())
	{
		func_79(22);
		return 1;
	}
	return 0;
}

int func_68()//Position - 0x2244
{
	if (func_45(unk_0x9EB17624F44A8DA4(), 0))
	{
		if ((func_74() && !func_71()) || func_70(unk_0x9EB17624F44A8DA4(), 21))
		{
			return 1;
		}
		else
		{
			func_69(27);
		}
	}
	return 0;
}

void func_69(int iParam0)//Position - 0x2287
{
	unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_4), iParam0);
}

bool func_70(int iParam0, int iParam1)//Position - 0x22A4
{
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_223, iParam1);
}

bool func_71()//Position - 0x22BD
{
	return Global_1312416.f_1;
}

bool func_72()//Position - 0x22CB
{
	return func_73(306, -1);
}

int func_73(int iParam0, int iParam1)//Position - 0x22DB
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547365[iParam0 /*3*/][func_26(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_74()//Position - 0x2307
{
	return Global_1312416;
}

bool func_75(int iParam0)//Position - 0x2313
{
	return func_371(iParam0, 20);
}

bool func_76(int iParam0)//Position - 0x2323
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 2);
}

int func_77(int iParam0)//Position - 0x233B
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/] != -1;
	}
	return 0;
}

bool func_78()//Position - 0x235C
{
	return Global_2436181.f_2592[0 /*79*/].f_1 != 0;
}

void func_79(int iParam0)//Position - 0x2372
{
	unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_4), iParam0);
}

int func_80()//Position - 0x238F
{
	if (Local_125.f_6 == func_11() || Local_125.f_5 == func_11())
	{
		return 0;
	}
	if (!func_576(Local_125.f_6, Local_125.f_5, 0))
	{
		return 0;
	}
	return 1;
}

void func_81(int iParam0)//Position - 0x23CC
{
	if (!unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 6))
	{
		if (iParam0 != func_11())
		{
			func_82(0, iParam0);
		}
		else
		{
			func_82(0, func_11());
		}
		unk_0x872F1C1F8587CCC7(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 6);
	}
}

void func_82(int iParam0, int iParam1)//Position - 0x2412
{
	int iVar0;
	
	if (iParam1 != func_11())
	{
		if (unk_0x552F39AE86E07792(iParam1))
		{
			if (iParam1 == unk_0x9EB17624F44A8DA4())
			{
				iVar0 = 1;
			}
			else if (func_83(iParam1, unk_0x9EB17624F44A8DA4()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_5(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
			unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
			Global_2512808.f_4856.f_201 = unk_0xE3CCAFB1555348DF();
		}
	}
}

int func_83(int iParam0, int iParam1)//Position - 0x2488
{
	int iVar0;
	
	if (iParam0 != func_11() && iParam1 != func_11())
	{
		iVar0 = func_84(iParam0);
		if (iVar0 != func_11())
		{
			return iVar0 == func_84(iParam1);
		}
	}
	return 0;
}

int func_84(int iParam0)//Position - 0x24C4
{
	if (iParam0 != func_11())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_11();
}

void func_85()//Position - 0x24E7
{
	struct<10> Var0;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	if (!unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 5))
	{
		if (unk_0xC80D31E4B587871C(Local_125.f_2, 3))
		{
			if (unk_0x9EB17624F44A8DA4() == func_6())
			{
				if (func_576(unk_0x9EB17624F44A8DA4(), func_16(), 0))
				{
					func_86(164, 0, &Var0, 0);
				}
				else
				{
					func_86(164, 1, &Var0, 0);
				}
			}
			else
			{
				func_86(164, 0, &Var0, 0);
			}
			unk_0x872F1C1F8587CCC7(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 5);
		}
		else if (unk_0xC80D31E4B587871C(Local_125.f_2, 0))
		{
			if (func_576(unk_0x9EB17624F44A8DA4(), func_16(), 1))
			{
				func_86(164, 1, &Var0, 0);
			}
			else
			{
				func_86(164, 0, &Var0, 0);
			}
			unk_0x872F1C1F8587CCC7(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 5);
		}
		else if (unk_0xC80D31E4B587871C(Local_125.f_2, 2) || unk_0xC80D31E4B587871C(Local_125.f_2, 1))
		{
			func_86(164, 0, &Var0, 0);
			unk_0x872F1C1F8587CCC7(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 5);
		}
	}
}

void func_86(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x25FB
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	bool bVar14;
	struct<2> Var15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	func_298(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_262145.f_17603);
		}
		else
		{
			iVar1 = (iVar1 + func_297(iParam0, uParam2->f_13));
		}
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = system::round((system::to_float(iVar1) / system::to_float(uParam2->f_4)));
		iVar1 = system::round((IntToFloat(iVar1) * fVar3));
		iVar1 = system::round((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_296(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_17602);
		}
		iVar0 = system::round((system::to_float(iVar0) / system::to_float(uParam2->f_4)));
		iVar0 = system::round((IntToFloat(iVar0) * fVar2));
		iVar0 = system::round((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = system::round((system::to_float(iVar1) / system::to_float(uParam2->f_4)));
		iVar1 = system::round((IntToFloat(iVar1) * fVar3));
		iVar1 = system::round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = system::round((system::to_float(iVar0) / system::to_float(uParam2->f_4)));
		iVar0 = system::round((IntToFloat(iVar0) * fVar2));
		iVar0 = system::round((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (func_294(iParam0))
	{
		if (bParam1)
		{
			if (func_293(unk_0x9EB17624F44A8DA4()) > 0)
			{
				func_292();
			}
			else
			{
				func_291();
			}
		}
		else
		{
			func_290();
		}
	}
	func_274(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_272(iParam0, uParam2, &iVar0, &iVar5);
	func_250(iParam0, uParam2, &iVar0, &iVar5);
	func_224(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	if (iParam0 == 168)
	{
		Global_2512808.f_4856.f_200 = iVar4;
	}
	else
	{
		Global_2512808.f_4856.f_200 = iVar5;
	}
	iVar8 = func_29();
	if (iVar8 != func_11() && iParam0 != 148)
	{
		if (func_223(unk_0x9EB17624F44A8DA4(), 0))
		{
			if (!func_576(unk_0x9EB17624F44A8DA4(), iVar8, 1))
			{
				func_182(&iVar0, 1);
			}
		}
	}
	func_177(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1667867.f_10 = iVar1;
		func_176();
		func_126(0, unk_0xFC1458A37D98B502(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1667867.f_9 = iVar0;
		iVar13 = func_125();
		if (iVar13 != func_11())
		{
			func_124(iVar13, &uVar11, &uVar12);
		}
		bVar14 = !func_123(1);
		if (iParam0 == 168)
		{
			if (!func_122())
			{
				unk_0x855E2247C6A664E1(iVar0, iVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_121())
			{
				if (!func_122())
				{
					Var15 = { func_120() };
					unk_0x546B939A37611593(iVar0, unk_0x8B948C59217A295D(func_119(Var15)), func_118(Var15), iVar5);
				}
			}
			else if (func_122())
			{
				func_109(-856006867, iVar0, &iVar16, 0, 1, 0);
				Global_4261865[iVar16 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar16 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar16 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0x855E2247C6A664E1(iVar0, iVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_107())
			{
				if (!func_122())
				{
					unk_0x546B939A37611593(iVar0, unk_0x8B948C59217A295D(func_119(func_106(unk_0x9EB17624F44A8DA4()))), 5, iVar5);
				}
			}
			else if (func_122())
			{
				func_109(-856006867, iVar0, &iVar17, 0, 1, 0);
				Global_4261865[iVar17 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar17 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar17 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0x855E2247C6A664E1(iVar0, iVar5);
			}
		}
		else if (iParam0 == 230)
		{
			if (func_107())
			{
				if (!func_122())
				{
					iVar18 = func_102(uParam2->f_16, iVar5);
					iVar19 = iVar0;
					if (iVar18 > 0)
					{
						iVar19 = (iVar19 - iVar18);
					}
					if (iVar7 > 0)
					{
						iVar19 = (iVar19 - iVar7);
					}
					unk_0x59B71C42AA64D71F(iVar19, iVar5, iVar7, iVar18, uParam2->f_16);
				}
			}
			else if (func_122())
			{
				func_109(463142405, iVar0, &iVar20, 0, 1, 0);
				Global_4261865[iVar20 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar20 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar20 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0xDE91362FF833B59D(uVar11, uVar12, iVar0, bVar14);
			}
		}
		else if (iParam0 == 233)
		{
			if (func_122())
			{
				func_109(1407278493, iVar0, &iVar21, 0, 1, 0);
				Global_4261865[iVar21 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar21 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar21 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0xA87AFD802B734F62(iVar0);
			}
		}
		else if (func_122())
		{
			func_109(-856006867, iVar0, &iVar22, 0, 1, 0);
			Global_4261865[iVar22 /*80*/].f_8.f_54 = uVar11;
			Global_4261865[iVar22 /*80*/].f_8.f_55 = uVar12;
			Global_4261865[iVar22 /*80*/].f_8.f_56 = bVar14;
		}
		else
		{
			unk_0x56D43E9CA23B5F41(uVar11, uVar12, iVar0, bVar14);
		}
		func_101(iParam0, iVar0);
		if (func_100(iParam0))
		{
			if (func_99(iParam0) > -1)
			{
				func_98(func_99(iParam0), iVar0);
			}
		}
		Global_2459022 = iVar0;
		func_9(&Global_2457290, 0, 0);
	}
	if (func_64(unk_0x9EB17624F44A8DA4()) || func_75(unk_0x9EB17624F44A8DA4()))
	{
		func_90(iParam0);
	}
	if (func_47(iParam0))
	{
		Global_1667885.f_13 = iVar0;
		Global_1667885.f_14 = iVar1;
	}
	if (func_54(iParam0))
	{
		Global_1667938.f_13 = iVar0;
		Global_1667938.f_14 = iVar1;
	}
	if (func_89(iParam0))
	{
		Global_1668000.f_12 = iVar0;
		Global_1668000.f_13 = iVar1;
	}
	if (func_88(iParam0))
	{
		Global_1668043.f_12 = iVar0;
		Global_1668043.f_13 = iVar1;
	}
	if (func_87(iParam0))
	{
		Global_1668096.f_12 = iVar0;
		Global_1668096.f_13 = iVar1;
	}
}

int func_87(int iParam0)//Position - 0x2BDD
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_88(int iParam0)//Position - 0x2BF7
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_89(int iParam0)//Position - 0x2C17
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

void func_90(int iParam0)//Position - 0x2C3D
{
	if (func_97(unk_0x9EB17624F44A8DA4()) && func_121())
	{
		if (func_96(iParam0))
		{
			func_93(7182, -1);
		}
		else if (func_92(iParam0))
		{
			func_93(7184, -1);
		}
		else if (func_37(iParam0, 1))
		{
			func_93(7185, -1);
		}
		else if (func_91(iParam0))
		{
			func_93(7186, -1);
		}
	}
}

int func_91(int iParam0)//Position - 0x2CA7
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_92(int iParam0)//Position - 0x2CD3
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_93(int iParam0, int iParam1)//Position - 0x2CFF
{
	int iVar0;
	
	iVar0 = func_28(iParam0, func_26(iParam1), 0);
	iVar0++;
	if (!func_95(iParam0))
	{
		func_25(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_94(iParam0, iVar0, iParam1, 1);
	}
}

void func_94(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2D40
{
	int iVar0;
	
	iVar0 = Global_2523060[iParam0 /*3*/][func_26(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1368159[func_26(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1368165[func_26(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1368171[func_26(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1368177[func_26(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1368135[func_26(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1368141[func_26(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1368147[func_26(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1368153[func_26(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1368111[func_26(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1368117[func_26(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1368123[func_26(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1368129[func_26(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1368183[func_26(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1368189[func_26(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1368195[func_26(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1368201[func_26(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1368207[func_26(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1368213[func_26(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1368219[func_26(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2549199[0 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2549199[1 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2549199[2 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2549199[3 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 7052:
			Global_2549282[func_26(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1368225[func_26(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1368231[func_26(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1368237[func_26(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1368243[func_26(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2549239[0 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2549239[1 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2549239[2 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2549239[3 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2549239[4 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549285[0 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549285[1 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549285[2 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549285[3 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549285[4 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549301[0 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549301[1 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549301[2 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549301[3 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549301[4 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2549239[5 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2549199[4 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549317[func_26(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549326[func_26(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549320[func_26(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549329[func_26(iParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549323[func_26(iParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549332[func_26(iParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549335[func_26(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2549239[6 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2549199[5 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2549239[7 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2549199[6 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2549239[8 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2549199[7 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2549239[9 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2549199[8 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2549239[10 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2549199[9 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2549239[11 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2549199[10 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2549239[12 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2549199[11 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2549239[13 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2549199[12 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_95(int iParam0)//Position - 0x340B
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

int func_96(int iParam0)//Position - 0x35C1
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

bool func_97(int iParam0)//Position - 0x3617
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_101, 14);
}

void func_98(int iParam0, int iParam1)//Position - 0x363D
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_22761 == 0 || Global_262145.f_22761 == 1)
		{
			if (!unk_0xB9D80B12FE4456A5() || Global_262145.f_22761 == 1)
			{
				Global_2512808.f_272 = iParam0;
				if (iParam1 > Global_262145.f_5975)
				{
					iParam1 = Global_262145.f_5975;
				}
				Global_2512808.f_273 = iParam1;
				Global_2512808.f_274 = 0;
			}
		}
	}
}

int func_99(int iParam0)//Position - 0x36AF
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_100(int iParam0)//Position - 0x3790
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_101(int iParam0, int iParam1)//Position - 0x37F8
{
	if (func_97(unk_0x9EB17624F44A8DA4()) && func_121())
	{
		if (func_96(iParam0) && iParam1 > 0)
		{
			func_25(7183, (func_28(7183, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

int func_102(int iParam0, int iParam1)//Position - 0x383C
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_105(iParam0, iParam1);
	fVar1 = (system::to_float(func_103(iParam0, iParam1)) * fVar0);
	return system::round(fVar1);
}

int func_103(int iParam0, int iParam1)//Position - 0x3865
{
	return (func_104(iParam0) * iParam1);
}

int func_104(int iParam0)//Position - 0x3876
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_21602;
		
		case 0:
			return Global_262145.f_21603;
		
		case 1:
			return Global_262145.f_21604;
		
		case 2:
			return Global_262145.f_21605;
		
		case 3:
			return Global_262145.f_21606;
		
		case 4:
			return Global_262145.f_21607;
		
		case 5:
			return Global_262145.f_21608;
		
		case 6:
			return Global_262145.f_21609;
		
		case 7:
			return Global_262145.f_21610;
		
		default:
	}
	return 0;
}

float func_105(int iParam0, int iParam1)//Position - 0x3916
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = system::to_float(Global_262145.f_21612);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_21614;
			fVar1 = system::to_float(Global_262145.f_21611);
			break;
		
		case 3:
			fVar0 = Global_262145.f_21614;
			fVar1 = system::to_float(Global_262145.f_21611);
			break;
		
		case 0:
			fVar0 = Global_262145.f_21615;
			break;
		
		case 1:
			fVar0 = Global_262145.f_21615;
			break;
		
		case 4:
			fVar0 = Global_262145.f_21615;
			break;
		
		case 6:
			fVar0 = Global_262145.f_21616;
			fVar1 = system::to_float(Global_262145.f_21613);
			break;
		
		case 2:
			fVar0 = Global_262145.f_21616;
			fVar1 = system::to_float(Global_262145.f_21613);
			break;
		
		case 5:
			fVar0 = Global_262145.f_21616;
			fVar1 = system::to_float(Global_262145.f_21613);
			break;
	}
	iVar2 = system::floor((system::to_float(iParam1) / fVar1));
	return (system::to_float(iVar2) * fVar0);
}

int func_106(int iParam0)//Position - 0x3A2E
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_266.f_160[5 /*12*/];
}

bool func_107()//Position - 0x3A54
{
	return func_108(unk_0x9EB17624F44A8DA4());
}

int func_108(int iParam0)//Position - 0x3A64
{
	if (iParam0 != func_11())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_11())
		{
			return Global_1627537[iParam0 /*532*/].f_11 == iParam0;
		}
	}
	return 0;
}

void func_109(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x3A99
{
	int iVar0;
	
	if (!func_122())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
			if (iParam1 > 0)
			{
				func_110(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
			func_110(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_110(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x3F23
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_122())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x02404400A68A3D5B(func_27()) || unk_0xD7D895B4B5395982())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457985)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4261865[iVar2 /*80*/].f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0xE51E15AF85DFE75E(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xC972A21EB39CE12F(iVar4))
		{
			*uParam0 = func_117(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4261865[*uParam0 /*80*/].f_69 = 1;
					Global_4261865[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_4262402 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4262414 = 1;
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_116(1, iParam4);
			Global_4262414 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_111(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_111(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x40C9
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_137.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_112(iParam0);
	}
}

void func_112(int iParam0)//Position - 0x4101
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_122())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_115(iParam0))
		{
			if (!bVar0)
			{
				unk_0x166C543410DE9A3F();
			}
		}
		else if (!bVar0)
		{
			unk_0x45B51A422AE852A9(Global_4261865[iParam0 /*80*/]);
		}
		func_113(&(Global_4261865[iParam0 /*80*/]));
	}
}

void func_113(var uParam0)//Position - 0x4153
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_114(&(uParam0->f_8.f_3));
	func_114(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_74 = 0;
	uParam0->f_73 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	uParam0->f_77 = 0;
	uParam0->f_79 = 0;
}

void func_114(var uParam0)//Position - 0x424D
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

int func_115(int iParam0)//Position - 0x4295
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_116(int iParam0, int iParam1)//Position - 0x42BD
{
	Global_2459156 = iParam1;
	Global_2459155 = iParam0;
}

int func_117(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0x42D1
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_122())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4261865[iVar0 /*80*/].f_2 = 1;
			Global_4261865[iVar0 /*80*/].f_1 = iParam5;
			Global_4261865[iVar0 /*80*/].f_3 = uParam1;
			Global_4261865[iVar0 /*80*/].f_4 = iParam2;
			Global_4261865[iVar0 /*80*/].f_7 = iParam3;
			Global_4261865[iVar0 /*80*/].f_5 = 0;
			Global_4261865[iVar0 /*80*/] = iParam0;
			Global_4261865[iVar0 /*80*/].f_6 = iParam4;
			Global_4261865[iVar0 /*80*/].f_72 = uParam8;
			Global_4261865[iVar0 /*80*/].f_71 = iParam7;
			Global_4261865[iVar0 /*80*/].f_74 = iParam9;
			Global_4261865[iVar0 /*80*/].f_73 = 0;
			Global_4261865[iVar0 /*80*/].f_75 = unk_0x4B64A8D052027742();
			Global_4261865[iVar0 /*80*/].f_79 = 0;
			Global_4262402 = 0;
			if (bParam6)
			{
				Global_4261865[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_118(int iParam0)//Position - 0x43CA
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_119(int iParam0)//Position - 0x4510
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_120()//Position - 0x46F2
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_188;
}

bool func_121()//Position - 0x470B
{
	return func_40(unk_0x9EB17624F44A8DA4());
}

int func_122()//Position - 0x471B
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

bool func_123(bool bParam0)//Position - 0x4732
{
	return func_223(unk_0x9EB17624F44A8DA4(), bParam0);
}

void func_124(int iParam0, var uParam1, var uParam2)//Position - 0x4744
{
	*uParam1 = Global_1627537[iParam0 /*532*/].f_11.f_8[0];
	*uParam2 = Global_1627537[iParam0 /*532*/].f_11.f_8[1];
}

int func_125()//Position - 0x4772
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11;
}

int func_126(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x4787
{
	return func_127(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_127(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x47A9
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_137(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam1))
		{
			if (unk_0x52C56492660097C7(iParam1))
			{
				iVar1 = unk_0x07F64790D10D1DB5(iParam1);
				func_133(unk_0xD0E00576168D19BB(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_128(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_128(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x4822
{
	vector3 vVar0;
	
	vVar0 = { func_131(iParam0, 1) };
	if (iParam0 == func_130(unk_0xFC1458A37D98B502()))
	{
		func_129(1);
	}
	func_133(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_129(int iParam0)//Position - 0x4856
{
	Global_2436181.f_1774 = iParam0;
}

int func_130(int iParam0)//Position - 0x4867
{
	return iParam0;
}

Vector3 func_131(int iParam0, bool bParam1)//Position - 0x4871
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0x4AA5DF29899B96D6())
	{
		vVar1 = { unk_0xEDD96F31411FBD87(2) };
	}
	if (iParam0 == func_132(unk_0xFC1458A37D98B502()) && unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
	{
		vVar0 = { unk_0x3F90543934DCD7E6(iParam0, 0f, 8f, -0,2f) };
	}
	else
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		fVar2 = unk_0xF0371FE6E2BF9599(iParam0);
		if (unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0,18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0,18f);
	}
	vVar0 = { unk_0x9EA50C5EC175E58E(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_132(int iParam0)//Position - 0x4935
{
	return iParam0;
}

void func_133(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x493F
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2436181.f_1173[iVar0 /*30*/].f_6 == 0 || Global_2436181.f_1173[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2436181.f_1173[iVar1 /*30*/] = { vParam0 };
			Global_2436181.f_1173[iVar1 /*30*/].f_6 = 1;
			Global_2436181.f_1173[iVar1 /*30*/].f_4 = func_136(Global_2436181.f_1173[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2436181.f_1173[iVar1 /*30*/].f_7 = unk_0xD1952A425B78FFC0();
			Global_2436181.f_1173[iVar1 /*30*/].f_3 = iParam1;
			Global_2436181.f_1173[iVar1 /*30*/].f_8 = iParam2;
			Global_2436181.f_1173[iVar1 /*30*/].f_9 = func_135();
			Global_2436181.f_1173[iVar1 /*30*/].f_10 = func_134();
			StringCopy(&(Global_2436181.f_1173[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2436181.f_1173[iVar1 /*30*/].f_26 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), iParam4);
		}
	}
}

int func_134()//Position - 0x4A56
{
	if (Global_2436181.f_1774)
	{
		Global_2436181.f_1774 = 0;
		return 1;
	}
	Global_2436181.f_1774 = 0;
	return 0;
}

var func_135()//Position - 0x4A80
{
	var uVar0;
	
	uVar0 = Global_2436181.f_1776;
	Global_2436181.f_1776 = 1;
	return uVar0;
}

float func_136(vector3 vParam0, var uParam1, var uParam2)//Position - 0x4A9B
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xBE3C4023003180FC(unk_0x90CC871EBA5B70FA(), vParam0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0,402f;
		*uParam2 = 0,476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0,212f;
		*uParam2 = 0,286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0,402f - 0,212f));
	fVar3 = (fVar1 * (0,476f - 0,286f));
	*uParam1 = (fVar2 + 0,212f);
	*uParam2 = (fVar3 + 0,286f);
	return fVar1;
}

var func_137(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x4B34
{
	var uVar0;
	
	uVar0 = func_138(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_138(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x4B57
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_175(unk_0x9EB17624F44A8DA4()) || func_174(unk_0x9EB17624F44A8DA4()))
	{
		if (Global_262145.f_8979 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_8979;
		}
	}
	else if (func_171() || func_170(unk_0x9EB17624F44A8DA4()))
	{
		if (Global_262145.f_22055 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22055;
		}
	}
	else if (Global_262145.f_6026 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6026;
	}
	if (func_169(sParam2))
	{
	}
	if (func_168())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = system::round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_166(iVar1);
		fVar3 = (system::to_float(iVar1) * Global_262145.f_1);
		iVar1 = system::round(fVar3);
		if (bParam10)
		{
			iVar1 = func_165(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_162(0, &iVar1);
					break;
				
				case 3:
					func_162(1, &iVar1);
					break;
				
				case 1:
					func_158(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1677772)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_157(1161, iVar1, -1);
			if (iParam1 == 0)
			{
				func_149((func_156(unk_0x9EB17624F44A8DA4()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x0367F69CE26830AB(iVar1, iParam8, iParam9);
				if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_2 != -1)
				{
					func_157(1162, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_143(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_139((func_141(unk_0x9EB17624F44A8DA4()) + iVar1));
			}
			else
			{
				func_139((func_141(unk_0x9EB17624F44A8DA4()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_139(int iParam0)//Position - 0x4D55
{
	if (func_168())
	{
		Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_5 = iParam0;
		func_140(joaat("mpply_globalxp"), iParam0);
	}
}

void func_140(int iParam0, int iParam1)//Position - 0x4D80
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, 1);
	}
}

int func_141(int iParam0)//Position - 0x4D9C
{
	if (iParam0 > -1)
	{
		if (func_5(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x9EB17624F44A8DA4())
			{
				return func_142(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_5;
			}
		}
		else
		{
			return func_142(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_142(int iParam0)//Position - 0x4DED
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

void func_143(int iParam0)//Position - 0x4E0B
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_148(unk_0x9EB17624F44A8DA4()) };
	if (unk_0x15DBBAF9E2085C7A())
	{
		if (unk_0xA84F967541249268(&Var0))
		{
			iVar1 = func_146(func_147(&Var0));
			if (iVar1 == 0)
			{
				func_145(&Global_1368098, iParam0);
				func_144(joaat("mpply_crew_local_xp_0"), Global_1368098);
			}
			else if (iVar1 == 1)
			{
				func_145(&Global_1368099, iParam0);
				func_144(joaat("mpply_crew_local_xp_1"), Global_1368099);
			}
			else if (iVar1 == 2)
			{
				func_145(&Global_1368100, iParam0);
				func_144(joaat("mpply_crew_local_xp_2"), Global_1368100);
			}
			else if (iVar1 == 3)
			{
				func_145(&Global_1368101, iParam0);
				func_144(joaat("mpply_crew_local_xp_3"), Global_1368101);
			}
			else if (iVar1 == 4)
			{
				func_145(&Global_1368102, iParam0);
				func_144(joaat("mpply_crew_local_xp_4"), Global_1368102);
			}
		}
	}
}

void func_144(int iParam0, int iParam1)//Position - 0x4EDF
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1368093 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1368095 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1368095 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1368096 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1368097 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1368098 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1368099 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1368100 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1368101 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1368102 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1368103 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1368104 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1368105 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1368106 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1368107 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1368108 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1368109 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_145(var uParam0, int iParam1)//Position - 0x5004
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_146(int iParam0)//Position - 0x5015
{
	if (iParam0 == Global_1368093)
	{
		return 0;
	}
	else if (iParam0 == Global_1368094)
	{
		return 1;
	}
	else if (iParam0 == Global_1368095)
	{
		return 2;
	}
	else if (iParam0 == Global_1368096)
	{
		return 3;
	}
	else if (iParam0 == Global_1368097)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_147(var uParam0)//Position - 0x5072
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		if (unk_0xA84F967541249268(uParam0))
		{
			return Global_2456758;
		}
	}
	return Global_2456758;
}

struct<13> func_148(int iParam0)//Position - 0x5095
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

void func_149(int iParam0, int iParam1, int iParam2)//Position - 0x50AC
{
	if (func_168())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8947 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1368213[func_26(-1)])
				{
					unk_0x0367F69CE26830AB(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1368213[func_26(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8946 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x0367F69CE26830AB(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8946 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x0367F69CE26830AB(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_155(unk_0x9EB17624F44A8DA4()))
		{
			Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_1 = iParam0;
			Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_6 = func_153(iParam0, 1);
		}
		func_94(636, iParam0, -1, 1);
		func_25(637, func_153(iParam0, 1), -1, 1, 0);
		Global_1368213[func_26(-1)] = iParam0;
		func_150(7, 0);
	}
}

void func_150(int iParam0, int iParam1)//Position - 0x51CD
{
	int iVar0;
	
	if (func_152(iParam0, iParam1))
	{
		iVar0 = func_151();
		Global_2456735[iVar0] = iParam0;
	}
}

int func_151()//Position - 0x51F0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2456735[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_152(int iParam0, var uParam1)//Position - 0x5225
{
	if (Global_1312842)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312854) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_153(int iParam0, bool bParam1)//Position - 0x52AB
{
	if (bParam1)
	{
	}
	return func_154(iParam0, 0);
}

int func_154(int iParam0, int iParam1)//Position - 0x52BF
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

int func_155(int iParam0)//Position - 0x537E
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

int func_156(int iParam0)//Position - 0x53A3
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x9EB17624F44A8DA4())
			{
				return Global_1368213[func_26(-1)];
			}
			else if (func_155(iParam0))
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1368213[func_26(-1)];
	}
	return 0;
}

void func_157(int iParam0, int iParam1, int iParam2)//Position - 0x5400
{
	int iVar0;
	
	iVar0 = func_28(iParam0, func_26(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_95(iParam0))
	{
		func_25(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_94(iParam0, iVar0, iParam2, 1);
	}
}

void func_158(int iParam0)//Position - 0x5442
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4());
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		iVar4 = unk_0x2B957AC89DEBA5B6(iVar0);
		if (unk_0x012BC3F18B8C7807(iVar4))
		{
			iVar5 = unk_0x43E1A43A1AA9E0BE(iVar4);
			if (unk_0x917EE18109C5ACEA(iVar5) != -1)
			{
				if (unk_0x917EE18109C5ACEA(iVar5) == iVar1 || func_161(unk_0x917EE18109C5ACEA(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x9EB17624F44A8DA4())
					{
						if (func_160(unk_0x9EB17624F44A8DA4(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = system::round((func_159(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = system::round((func_159(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_159(int iParam0, int iParam1)//Position - 0x552D
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = system::to_float(iParam0);
	fVar1 = system::to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_160(int iParam0, int iParam1)//Position - 0x554E
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		Global_2492157 = { func_148(iParam0) };
		Global_2492170 = { func_148(iParam1) };
		if (unk_0xA84F967541249268(&Global_2492157))
		{
			if (unk_0xA84F967541249268(&Global_2492170))
			{
				unk_0x5CF21D71A8C4CFA6(&Global_2492087, 35, &Global_2492157);
				unk_0x5CF21D71A8C4CFA6(&Global_2492122, 35, &Global_2492170);
				if (Global_2492087 == Global_2492122)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_161(int iParam0, int iParam1, int iParam2)//Position - 0x55BB
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 0);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 1);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 2);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 4);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 5);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 6);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 8);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 9);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 10);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 12);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 13);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 14);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_162(bool bParam0, int iParam1)//Position - 0x5786
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0xB72D370CB7ABC3EF())
		{
			iVar3 = iVar0;
			if (unk_0x012BC3F18B8C7807(iVar3))
			{
				iVar4 = unk_0x43E1A43A1AA9E0BE(iVar3);
				if (func_5(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x9EB17624F44A8DA4())
					{
						iVar1++;
						if (func_160(unk_0x9EB17624F44A8DA4(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_5(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x9EB17624F44A8DA4())
				{
					if (func_163(unk_0x9EB17624F44A8DA4(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_160(unk_0x9EB17624F44A8DA4(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = system::round((func_159(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = system::round((func_159(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_163(int iParam0, int iParam1)//Position - 0x589E
{
	return system::vdist(func_164(iParam0), func_164(iParam1));
	return 0f;
}

Vector3 func_164(int iParam0)//Position - 0x58BA
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

int func_165(int iParam0)//Position - 0x58CD
{
	int iVar0;
	
	if (unk_0xEF96DAAD69CD3E8A() != 3)
	{
		return *iParam0;
	}
	iVar0 = system::round((func_159(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_166(int iParam0)//Position - 0x5904
{
	if (iParam0 < 0)
	{
		if (unk_0xB89BB11E0945F6F0(iParam0) > func_156(unk_0x9EB17624F44A8DA4()))
		{
			iParam0 = -func_156(unk_0x9EB17624F44A8DA4());
		}
	}
	if (func_167(8000, 0, 0) > 0)
	{
		if (func_167(8000, 0, 0) < (iParam0 + func_156(unk_0x9EB17624F44A8DA4())))
		{
			iParam0 = (func_167(8000, 0, 0) - func_156(unk_0x9EB17624F44A8DA4()));
		}
	}
	return iParam0;
}

int func_167(int iParam0, bool bParam1, int iParam2)//Position - 0x5968
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_285062[iParam0];
}

int func_168()//Position - 0x5990
{
	return 1;
}

int func_169(char* sParam0)//Position - 0x5999
{
	if (unk_0x8C1C362CA8299475(sParam0))
	{
		return 1;
	}
	else if (unk_0x74C475EB8E73D398(sParam0, "") || unk_0x74C475EB8E73D398(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_170(int iParam0)//Position - 0x59D3
{
	return func_87(func_44(iParam0));
}

bool func_171()//Position - 0x59E5
{
	if (unk_0x4916190900E76373())
	{
		return func_173();
	}
	return func_172(Global_4456448.f_122309);
}

int func_172(int iParam0)//Position - 0x5A09
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

bool func_173()//Position - 0x5A43
{
	return Global_2447174.f_16;
}

bool func_174(int iParam0)//Position - 0x5A51
{
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

bool func_175(int iParam0)//Position - 0x5A66
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

void func_176()//Position - 0x5A7B
{
	Global_2458364 = 1;
}

void func_177(int iParam0, var uParam1, var uParam2)//Position - 0x5A88
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_181(7))
	{
		return;
	}
	iVar0 = func_180(iParam0);
	iVar1 = func_179(iParam0);
	iVar2 = unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(Global_2512808.f_4856.f_87, unk_0xD1952A425B78FFC0()));
	if (func_178(iParam0) != -1)
	{
		if (iVar2 > func_178(iParam0))
		{
			iVar2 = func_178(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_11735)
	{
		iVar2 = Global_262145.f_11735;
	}
	iVar3 = system::floor((system::to_float(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_178(int iParam0)//Position - 0x5B31
{
	if (func_37(iParam0, 0) || func_92(iParam0))
	{
		return Global_262145.f_17808;
	}
	if (func_96(iParam0))
	{
		return Global_262145.f_17807;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_17804;
		
		case 191:
			return Global_262145.f_17806;
		
		case 190:
			return Global_262145.f_17805;
		
		case 227:
			return Global_262145.f_20340;
		
		case 226:
			return Global_262145.f_20328;
		
		case 225:
			return Global_262145.f_20348;
		
		case 230:
			return Global_262145.f_21599;
		
		case 229:
			return Global_262145.f_21503;
		
		case 233:
			return Global_262145.f_22060;
		
		default:
	}
	return -1;
}

int func_179(int iParam0)//Position - 0x5C04
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11826;
		
		case 152:
			return Global_262145.f_11861;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11849;
		
		case 157:
			return Global_262145.f_11816;
		
		case 159:
			return Global_262145.f_11799;
		
		case 164:
			return Global_262145.f_11839;
		
		case 160:
			return Global_262145.f_11889;
		
		case 162:
			return Global_262145.f_11909;
		
		case 163:
			return Global_262145.f_11874;
		
		case 154:
			return Global_262145.f_11944;
		
		case 155:
			return Global_262145.f_11934;
		
		case 153:
			return Global_262145.f_11898;
		
		case 170:
			return Global_262145.f_14321;
		
		case 171:
			return Global_262145.f_14380;
		
		case 172:
			return Global_262145.f_14398;
		
		case 173:
			return Global_262145.f_14339;
		
		case 166:
			return Global_262145.f_14354;
		
		case 167:
			return Global_262145.f_14445;
		
		case 169:
			return Global_262145.f_14417;
		
		case 168:
			return Global_262145.f_14410;
		
		case 179:
			return Global_262145.f_17687;
		
		case 180:
			return Global_262145.f_17466;
		
		case 182:
			return Global_262145.f_17466;
		
		case 183:
			return Global_262145.f_17466;
		
		case 185:
			return Global_262145.f_17466;
		
		case 186:
			return Global_262145.f_17466;
		
		case 189:
			return Global_262145.f_17687;
		
		case 190:
			return Global_262145.f_17342;
		
		case 191:
			return Global_262145.f_17433;
		
		case 192:
			return Global_262145.f_17227;
		
		case 193:
			return Global_262145.f_17687;
		
		case 194:
			return Global_262145.f_17687;
		
		case 195:
			return Global_262145.f_17466;
		
		case 197:
			return Global_262145.f_17466;
		
		case 198:
			return Global_262145.f_17466;
		
		case 199:
			return Global_262145.f_17687;
		
		case 200:
			return Global_262145.f_17687;
		
		case 201:
			return Global_262145.f_17687;
		
		case 205:
			return Global_262145.f_17687;
		
		case 207:
			return Global_262145.f_17466;
		
		case 208:
			return Global_262145.f_17466;
		
		case 209:
			return Global_262145.f_17466;
		
		case 210:
			return Global_262145.f_17687;
		
		case 211:
			return Global_262145.f_17687;
		
		case 214:
			return Global_262145.f_18513;
		
		case 215:
			return Global_262145.f_18515;
		
		case 216:
			return Global_262145.f_18517;
		
		case 217:
			return Global_262145.f_18519;
		
		case 218:
			return Global_262145.f_18521;
		
		case 219:
			return Global_262145.f_18523;
		
		case 220:
			return Global_262145.f_18525;
		
		case 221:
			return Global_262145.f_18527;
		
		case 225:
			if (func_123(0) || func_50(0))
			{
				return Global_262145.f_20350;
			}
			break;
		
		case 226:
			if (func_123(0) || func_50(0))
			{
				return Global_262145.f_20330;
			}
			break;
		
		case 227:
			if (func_123(0) || func_50(0))
			{
				return Global_262145.f_20342;
			}
			break;
		
		case 229:
			if (func_123(0) || func_50(0))
			{
				return Global_262145.f_21505;
			}
			break;
		
		case 230:
			if (func_123(0) || func_50(0))
			{
				return Global_262145.f_21601;
			}
			break;
		
		case 233:
			if (func_123(0) || func_50(0))
			{
				return Global_262145.f_22059;
			}
			break;
	}
	return 0;
}

int func_180(int iParam0)//Position - 0x6042
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11825;
		
		case 152:
			return Global_262145.f_11860;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11848;
		
		case 157:
			return Global_262145.f_11815;
		
		case 159:
			return Global_262145.f_11798;
		
		case 164:
			return Global_262145.f_11838;
		
		case 160:
			return Global_262145.f_11888;
		
		case 162:
			return Global_262145.f_11908;
		
		case 163:
			return Global_262145.f_11873;
		
		case 154:
			return Global_262145.f_11943;
		
		case 155:
			return Global_262145.f_11933;
		
		case 153:
			return Global_262145.f_11897;
		
		case 170:
			return Global_262145.f_14320;
		
		case 171:
			return Global_262145.f_14379;
		
		case 172:
			return Global_262145.f_14397;
		
		case 173:
			return Global_262145.f_14338;
		
		case 166:
			return Global_262145.f_14353;
		
		case 179:
			return Global_262145.f_17686;
		
		case 180:
			return Global_262145.f_17465;
		
		case 182:
			return Global_262145.f_17465;
		
		case 183:
			return Global_262145.f_17465;
		
		case 185:
			return Global_262145.f_17465;
		
		case 186:
			return Global_262145.f_17465;
		
		case 189:
			return Global_262145.f_17686;
		
		case 193:
			return Global_262145.f_17686;
		
		case 194:
			return Global_262145.f_17686;
		
		case 195:
			return Global_262145.f_17465;
		
		case 197:
			return Global_262145.f_17465;
		
		case 198:
			return Global_262145.f_17465;
		
		case 199:
			return Global_262145.f_17686;
		
		case 200:
			return Global_262145.f_17686;
		
		case 201:
			return Global_262145.f_17686;
		
		case 205:
			return Global_262145.f_17686;
		
		case 207:
			return Global_262145.f_17465;
		
		case 208:
			return Global_262145.f_17465;
		
		case 209:
			return Global_262145.f_17465;
		
		case 210:
			return Global_262145.f_17686;
		
		case 211:
			return Global_262145.f_17686;
		
		case 190:
			if (!func_107())
			{
				return Global_262145.f_17341;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_107())
			{
				return Global_262145.f_17432;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_107())
			{
				return Global_262145.f_17226;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_18512;
		
		case 215:
			return Global_262145.f_18514;
		
		case 216:
			return Global_262145.f_18516;
		
		case 217:
			return Global_262145.f_18518;
		
		case 218:
			return Global_262145.f_18520;
		
		case 219:
			return Global_262145.f_18522;
		
		case 220:
			return Global_262145.f_18524;
		
		case 221:
			return Global_262145.f_18526;
		
		case 225:
			if (func_50(0))
			{
				return Global_262145.f_20349;
			}
			break;
		
		case 226:
			if (func_50(0))
			{
				return Global_262145.f_20329;
			}
			break;
		
		case 227:
			if (func_50(0))
			{
				return Global_262145.f_20341;
			}
			break;
		
		case 229:
			if (func_50(0))
			{
				return Global_262145.f_21504;
			}
			break;
		
		case 230:
			if (func_50(0))
			{
				return Global_262145.f_21600;
			}
			break;
		
		case 233:
			if (func_50(0))
			{
				return Global_262145.f_22061;
			}
			break;
	}
	return 0;
}

bool func_181(int iParam0)//Position - 0x6444
{
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_34, iParam0);
}

void func_182(int iParam0, int iParam1)//Position - 0x645B
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_107())
		{
			if (func_123(0))
			{
				if (!func_50(0))
				{
					if (unk_0x552F39AE86E07792(func_125()))
					{
						if (func_222() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_222());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_220(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_188("GB_BCUT_TICK1", func_125(), iVar0, 0, 0, 1, 1);
						}
						func_187(20);
						func_183(func_125(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_183(int iParam0, int iParam1, int iParam2)//Position - 0x64FC
{
	struct<8> Var0;
	
	if (func_5(iParam0, 0, 1))
	{
		Var0 = 887219908;
		Var0.f_1 = unk_0x9EB17624F44A8DA4();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_186(iParam0);
		func_185(&(Var0.f_6), &(Var0.f_7));
		unk_0x5A26F0BDEE9F8260(1, &Var0, 8, func_184(iParam0));
	}
}

var func_184(int iParam0)//Position - 0x6552
{
	var uVar0;
	
	unk_0x872F1C1F8587CCC7(&uVar0, iParam0);
	return uVar0;
}

void func_185(var uParam0, var uParam1)//Position - 0x6564
{
	*uParam0 = Global_1644563.f_9;
	*uParam1 = Global_1644563.f_10;
}

var func_186(int iParam0)//Position - 0x657E
{
	return Global_1627537[iParam0 /*532*/].f_469;
}

void func_187(int iParam0)//Position - 0x6592
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4856.f_7[iVar0]), iVar1);
}

int func_188(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x65BB
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xDE2D3B9654C31EB3(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xDE2D3B9654C31EB3(iParam1), 64);
		}
		if (unk_0xAB019B170BF1309C(&Var1))
		{
		}
		unk_0xE3C33644878DCCFD(sParam0);
		unk_0xF92B835A141C6BDD(func_197(iParam1, -2, 1, 0));
		unk_0x854FACC4E5F40C82(func_195(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xF92B835A141C6BDD(iParam3);
		}
		unk_0x6223D539BCD39E76(iParam2);
		iVar0 = unk_0x65F0733C4A64907A(0, 1);
		func_189(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_189(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x6652
{
	int iVar0;
	
	if ((!func_194() || !unk_0x4916190900E76373()) || !func_192(unk_0x9EB17624F44A8DA4(), 0))
	{
		return;
	}
	iVar0 = func_190(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1664509.f_5[iVar0 /*53*/] = iParam0;
		Global_1664509.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1664509.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1664509.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1664509.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1664509.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1664509.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_190(int iParam0)//Position - 0x675A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1664509 - 1))
	{
		if (iParam0 > Global_1664509.f_5[iVar0 /*53*/].f_1)
		{
			func_191(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1664509++;
	if (Global_1664509 > 5)
	{
		Global_1664509 = 5;
		return Global_1664509;
	}
	return (Global_1664509 - 1);
}

void func_191(int iParam0)//Position - 0x67BC
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1664509.f_5[iVar0 /*53*/] = { Global_1664509.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_192(int iParam0, int iParam1)//Position - 0x67F5
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_193(-1, 0) == 8;
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

int func_193(int iParam0, bool bParam1)//Position - 0x6840
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

bool func_194()//Position - 0x6881
{
	return unk_0x21EA5D4DC72DE119(-1762644250);
}

var func_195(char* sParam0)//Position - 0x6892
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_196(&cVar0);
}

var func_196(char[4] cParam0)//Position - 0x68B6
{
	return cParam0;
}

int func_197(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x68C0
{
	int iVar0;
	int iVar1;
	
	if (func_218(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x917EE18109C5ACEA(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_117386[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_218(unk_0x9EB17624F44A8DA4()) || (func_217() && func_216())) && !unk_0xC80D31E4B587871C(Global_2512808.f_4556, 31))
	{
		iVar1 = func_215();
		if (unk_0x6ADD12BF4D6D2587(iVar1))
		{
			if (unk_0x1417A5CC924DE120(iVar1))
			{
				if (unk_0xDF35170AEEFB473B(iVar1) != -1)
				{
					if (func_5(unk_0xDF35170AEEFB473B(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
						{
							if (Global_4456448.f_117386[iParam1] != -1)
							{
								return func_213(iParam1, iParam0, 0);
							}
							else
							{
								return func_204(iParam0, unk_0xDF35170AEEFB473B(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_204(iParam0, unk_0xDF35170AEEFB473B(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
			{
				if (Global_4456448.f_117386[iParam1] != -1)
				{
					return func_213(iParam1, iParam0, 0);
				}
				else
				{
					return func_198(0, -1, 0);
				}
			}
			else
			{
				return func_198(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
	{
		if (Global_4456448.f_117386[iParam1] != -1)
		{
			return func_213(iParam1, iParam0, 0);
		}
		else
		{
			return func_204(iParam0, unk_0x9EB17624F44A8DA4(), iParam1, bParam2, bParam3);
		}
	}
	return func_204(iParam0, unk_0x9EB17624F44A8DA4(), iParam1, bParam2, bParam3);
}

int func_198(bool bParam0, int iParam1, bool bParam2)//Position - 0x6A90
{
	return func_199(unk_0x9EB17624F44A8DA4(), bParam0, iParam1, bParam2);
}

int func_199(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x6AA6
{
	int iVar0;
	
	if (!unk_0x552F39AE86E07792(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x917EE18109C5ACEA(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_161(iVar0, iParam2, 0) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_203(1);
				}
				else
				{
					return func_203(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_4, 20))
			{
				return func_200(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_200(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_203(1);
	}
	return func_203(0);
}

int func_200(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x6B6A
{
	int iVar0;
	
	iVar0 = func_202(iParam0, iParam1, iParam3);
	if (func_201(Global_4456448.f_122309))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_201(int iParam0)//Position - 0x6C81
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8408[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_202(int iParam0, int iParam1, int iParam2)//Position - 0x6CBA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_161(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_203(bool bParam0)//Position - 0x6D01
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_204(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x6D18
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x917EE18109C5ACEA(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1595693[iVar2 /*680*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_210(1))
			{
				iVar3 = func_209(iParam0);
				if (!iVar3 == -1)
				{
					return func_207(iVar3);
				}
			}
			if ((func_206(iParam1, iParam0, iVar0, 0) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18)) || ((func_161(unk_0x917EE18109C5ACEA(iParam1), unk_0x917EE18109C5ACEA(iParam0), 0) && unk_0xC80D31E4B587871C(Global_4456448.f_15, 23)) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18)))
			{
				return func_203(1);
			}
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_15, 26))
			{
				return func_205(1);
			}
			else
			{
				return func_199(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574312 || Global_1574303) || Global_1595693[iParam0 /*680*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574312 == 1 && Global_1574322 == 0))
			{
				return func_203(1);
			}
			else
			{
				return func_199(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574307 && Global_1573842.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_209(iParam0);
	if (!iVar4 == -1)
	{
		return func_207(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_205(bool bParam0)//Position - 0x6EBC
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_206(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6ED3
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x917EE18109C5ACEA(iParam0) == -1 && unk_0x917EE18109C5ACEA(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x917EE18109C5ACEA(iParam0) == unk_0x917EE18109C5ACEA(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x917EE18109C5ACEA(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x917EE18109C5ACEA(iParam0) == iParam2;
	}
	return unk_0x917EE18109C5ACEA(iParam0) == iParam2;
}

int func_207(int iParam0)//Position - 0x6F4B
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_208(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_208(int iParam0)//Position - 0x700E
{
	return Global_2416800.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_209(int iParam0)//Position - 0x7025
{
	if (!iParam0 == func_11())
	{
		if (func_223(iParam0, 1))
		{
			return Global_2416800.f_2071.f_11[func_84(iParam0)];
		}
	}
	return -1;
}

int func_210(int iParam0)//Position - 0x7057
{
	if ((func_212() || func_211()) || (func_173() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_211()//Position - 0x7086
{
	return Global_2447174.f_15;
}

var func_212()//Position - 0x7094
{
	return Global_2447174.f_14;
}

int func_213(int iParam0, int iParam1, bool bParam2)//Position - 0x70A2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_980513.f_12[iParam0];
	if (func_210(1))
	{
		iVar2 = func_209(iParam1);
		if (!iVar2 == -1)
		{
			return func_207(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xC80D31E4B587871C(Global_4456448.f_97[iParam0 /*10024*/].f_5191[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_11())
	{
		if (Global_4456448.f_117386[iParam0] != -1 && Global_4456448.f_117386[iParam0] <= 4)
		{
			if (Global_4456448.f_117386[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_117386[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_117386[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_117386[iParam0] == 4)
			{
				if (unk_0xC80D31E4B587871C(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_117386[iParam0];
			}
		}
		else
		{
			iVar0 = func_199(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xC80D31E4B587871C(Global_4456448.f_21, 13))
		{
			iVar0 = func_214(iParam0);
		}
		if (unk_0xC80D31E4B587871C(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_214(int iParam0)//Position - 0x7207
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_144012;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_144013;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_144014;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_144015;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_215()//Position - 0x72DC
{
	return Global_2359302.f_2;
}

bool func_216()//Position - 0x72EA
{
	return unk_0xC80D31E4B587871C(Global_2359302, 4);
}

bool func_217()//Position - 0x72FB
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

int func_218(int iParam0)//Position - 0x7318
{
	if (func_192(iParam0, 0))
	{
		return 1;
	}
	if (func_219())
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

bool func_219()//Position - 0x735A
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

void func_220(int iParam0, bool bParam1)//Position - 0x736B
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_221(1);
	}
	else
	{
		iVar1 = func_221(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_221(bool bParam0)//Position - 0x739D
{
	if (bParam0)
	{
		return system::round((0,05f * 100f));
	}
	return Global_262145.f_11730;
}

int func_222()//Position - 0x73C3
{
	return Global_262145.f_11729;
}

bool func_223(int iParam0, bool bParam1)//Position - 0x73D2
{
	if (!bParam1)
	{
		if (func_108(iParam0))
		{
			return 0;
		}
	}
	return Global_1627537[iParam0 /*532*/].f_11 != func_11();
}

void func_224(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)//Position - 0x73FD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_50(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_107())
		{
			iVar15 = unk_0x9EB17624F44A8DA4();
		}
		else
		{
			iVar15 = func_125();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_248(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_239(uParam1->f_16) + uParam1->f_8);
			}
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = system::to_float(uParam1->f_10);
				fVar11 = system::to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = system::ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_103(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_102(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_238(*iParam2) > 0)
			{
				if (iVar15 == unk_0x9EB17624F44A8DA4())
				{
					func_237("SMTICK_RONCUT", func_238(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_238(*iParam2));
			}
			if (iVar15 == unk_0x9EB17624F44A8DA4())
			{
				func_235(iVar2, iVar9);
				iVar6 = func_234(&uVar5);
				iVar7 = Global_262145.f_21618;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = system::ceil((IntToFloat(iVar6) * Global_262145.f_21617));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_187(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xB72D370CB7ABC3EF())
						{
							iVar19 = iVar18;
							if (unk_0x012BC3F18B8C7807(iVar19))
							{
								iVar20 = unk_0x43E1A43A1AA9E0BE(iVar19);
								if (func_233(iVar20))
								{
									func_225(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2512808.f_4856.f_199 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_21551;
				iVar3 = system::ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21552;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1677780 = *iParam2;
					func_187(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_225(int iParam0, int iParam1, int iParam2)//Position - 0x7642
{
	var uVar0;
	
	uVar0 = func_227(iParam0);
	func_226(iParam0, uVar0, iParam1, iParam2);
}

void func_226(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x765E
{
	struct<8> Var0;
	
	Var0 = 698358792;
	Var0.f_1 = unk_0x9EB17624F44A8DA4();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_186(iParam0);
	func_185(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_11())
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			unk_0x5A26F0BDEE9F8260(1, &Var0, 8, func_184(iParam0));
		}
	}
}

int func_227(int iParam0)//Position - 0x76C4
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_232();
	iVar0 = func_230(iParam0, iVar0);
	iVar1 = Global_1627537[func_125() /*532*/].f_11.f_408;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14281));
	if (iVar0 < func_229())
	{
		iVar0 = func_229();
	}
	if (iVar0 > func_228())
	{
		iVar0 = func_228();
	}
	return iVar0;
}

int func_228()//Position - 0x771D
{
	return Global_262145.f_14282;
}

int func_229()//Position - 0x772C
{
	return Global_262145.f_15457;
}

int func_230(int iParam0, int iParam1)//Position - 0x773B
{
	int iVar0;
	
	iVar0 = (func_293(iParam0) * func_231());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_231()//Position - 0x7759
{
	return Global_262145.f_15456;
}

var func_232()//Position - 0x7768
{
	return Global_262145.f_11721;
}

int func_233(int iParam0)//Position - 0x7777
{
	if (unk_0x552F39AE86E07792(iParam0))
	{
		if (iParam0 != unk_0x9EB17624F44A8DA4())
		{
			if (func_576(iParam0, unk_0x9EB17624F44A8DA4(), 0))
			{
				if (!func_371(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_234(var uParam0)//Position - 0x77B0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x552F39AE86E07792(unk_0xF6A72924028F588B(iVar0)))
		{
			iVar2 = unk_0xF6A72924028F588B(iVar0);
			if (!func_192(iVar2, 0) && !func_576(iVar2, unk_0x9EB17624F44A8DA4(), 1))
			{
				iVar1++;
			}
			else if (func_192(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_235(int iParam0, int iParam1)//Position - 0x781C
{
	if (iParam0 > 0)
	{
		func_236(iParam0, 6099);
	}
	if (iParam1 > 0)
	{
		func_236(iParam1, 6100);
	}
}

void func_236(int iParam0, int iParam1)//Position - 0x7842
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_28(iParam1, -1, 0);
	func_25(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

int func_237(char* sParam0, int iParam1, int iParam2)//Position - 0x786B
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xE3C33644878DCCFD(sParam0);
	unk_0x6223D539BCD39E76(iParam1);
	iVar0 = unk_0x65F0733C4A64907A(0, 1);
	func_189(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_238(int iParam0)//Position - 0x78A1
{
	float fVar0;
	float fVar1;
	
	fVar0 = system::to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_21585);
	if (fVar1 > system::to_float(Global_262145.f_21586))
	{
		fVar1 = system::to_float(Global_262145.f_21586);
	}
	return system::round(fVar1);
}

int func_239(int iParam0)//Position - 0x78E1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_246())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_248(unk_0x9EB17624F44A8DA4());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_241(func_242(func_245(iVar0), -1, -1));
		if (func_240(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_240(int iParam0)//Position - 0x793F
{
	switch (iParam0)
	{
		case -508960047:
			return 5;
		
		case -1996578712:
			return 5;
		
		case -324063008:
			return 7;
		
		case -1537242760:
			return 7;
		
		case 167523060:
			return 1;
		
		case 440723308:
			return 1;
		
		case -1821684485:
			return 6;
		
		case 1075487129:
			return 6;
		
		case 1339867730:
			return 4;
		
		case 1158536477:
			return 4;
		
		case -1222709082:
			return 0;
		
		case -260422691:
			return 0;
		
		case -1117639471:
			return 3;
		
		case -1434473216:
			return 3;
		
		case 690570889:
			return 2;
		
		case 320416020:
			return 2;
		
		default:
	}
	return -1;
}

int func_241(int iParam0)//Position - 0x79EF
{
	switch (iParam0)
	{
		case 1:
			return -508960047;
		
		case 2:
			return -1996578712;
		
		case 3:
			return -324063008;
		
		case 4:
			return -1537242760;
		
		case 5:
			return 167523060;
		
		case 6:
			return 440723308;
		
		case 7:
			return -1821684485;
		
		case 8:
			return 1075487129;
		
		case 9:
			return 1339867730;
		
		case 10:
			return 1158536477;
		
		case 11:
			return -1222709082;
		
		case 12:
			return -260422691;
		
		case 13:
			return -1117639471;
		
		case 14:
			return -1434473216;
		
		case 15:
			return 690570889;
		
		case 16:
			return 320416020;
		
		default:
	}
	return 0;
}

int func_242(int iParam0, int iParam1, int iParam2)//Position - 0x7ADF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar0 = 0;
	iVar1 = func_244(iParam0, iParam1);
	iVar2 = func_243(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xB1AF044156BFE093(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_243(int iParam0)//Position - 0x7B25
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x05D1B2AB3DEB3094((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x05D1B2AB3DEB3094((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x05D1B2AB3DEB3094((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x05D1B2AB3DEB3094((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x05D1B2AB3DEB3094((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x05D1B2AB3DEB3094((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x05D1B2AB3DEB3094((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x05D1B2AB3DEB3094((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x05D1B2AB3DEB3094((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x05D1B2AB3DEB3094((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x05D1B2AB3DEB3094((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x05D1B2AB3DEB3094((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x05D1B2AB3DEB3094((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x05D1B2AB3DEB3094((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x05D1B2AB3DEB3094((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x05D1B2AB3DEB3094((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x05D1B2AB3DEB3094((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x05D1B2AB3DEB3094((iParam0 - 18162)) * 8) * 8;
	}
	return iVar0;
}

int func_244(int iParam0, int iParam1)//Position - 0x7E6B
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x51999F13DC0B6E31((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x51999F13DC0B6E31((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	return iVar0;
}

int func_245(int iParam0)//Position - 0x816B
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_246()//Position - 0x83D5
{
	return func_247() != 0;
}

int func_247()//Position - 0x83E3
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_241;
}

int func_248(int iParam0)//Position - 0x83FB
{
	if (iParam0 != func_11() && func_249(iParam0))
	{
		return Global_1595693[iParam0 /*680*/].f_266.f_241.f_3;
	}
	return 0;
}

int func_249(int iParam0)//Position - 0x842C
{
	if (iParam0 != func_11())
	{
		return Global_1595693[iParam0 /*680*/].f_266.f_241 != 0;
	}
	return 0;
}

void func_250(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x8451
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_50(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_107())
		{
			iVar15 = unk_0x9EB17624F44A8DA4();
		}
		else
		{
			iVar15 = func_125();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_106(iVar15);
			iVar0 = (func_271(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = system::to_float(uParam1->f_10);
				fVar11 = system::to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = system::ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_267(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = system::ceil((IntToFloat(iVar2) * Global_262145.f_20332));
			}
			else
			{
				iVar2 = system::ceil((IntToFloat(iVar2) * Global_262145.f_20331));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x9EB17624F44A8DA4())
			{
				func_264(iVar16, iVar2);
				if (func_260(iVar16) >= Global_262145.f_19880 || iVar2 >= Global_262145.f_19880)
				{
					func_251(5);
				}
				iVar6 = func_234(&uVar5);
				iVar7 = system::round(Global_262145.f_20334);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = system::ceil((IntToFloat(iVar6) * Global_262145.f_20333));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_187(108);
					}
					else
					{
						func_187(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xB72D370CB7ABC3EF())
						{
							iVar19 = iVar18;
							if (unk_0x012BC3F18B8C7807(iVar19))
							{
								iVar20 = unk_0x43E1A43A1AA9E0BE(iVar19);
								if (func_233(iVar20))
								{
									func_225(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2512808.f_4856.f_199 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_20335;
				iVar3 = system::ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_20336;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1677780 = *iParam2;
					func_187(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_251(int iParam0)//Position - 0x868B
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_19868)
			{
				if (func_253(Global_262145.f_19869))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_19870)
			{
				if (func_253(Global_262145.f_19871))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_19872)
			{
				if (func_253(Global_262145.f_19873))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_19874)
			{
				if (func_253(Global_262145.f_19875))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_19876)
			{
				if (func_253(Global_262145.f_19877))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_19878)
			{
				if (func_253(Global_262145.f_19879))
				{
					func_237("CLOTHAWDSTRAP3", Global_262145.f_19880, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_19881)
			{
				if (func_253(Global_262145.f_19882))
				{
					func_237("CLOTHAWDSTRAP5", Global_262145.f_20014, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_19884)
			{
				if (func_253(Global_262145.f_19885))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_19886)
			{
				if (func_253(Global_262145.f_19887))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_19888)
			{
				if (func_253(Global_262145.f_19889))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_19890)
			{
				if (func_253(Global_262145.f_19891))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_19892)
			{
				if (func_253(Global_262145.f_19893))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_19894)
			{
				if (func_253(Global_262145.f_19895))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_19896)
			{
				if (func_253(Global_262145.f_19897))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_19898)
			{
				if (func_253(Global_262145.f_19899))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_252(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x8988
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0xE3C33644878DCCFD(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam3);
	}
	unk_0xA6D2B267C377D7B2(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0x65F0733C4A64907A(0, 1);
	}
	else
	{
		Global_2492157 = { func_148(unk_0x9EB17624F44A8DA4()) };
		if (unk_0x5CF21D71A8C4CFA6(&Global_2492087, 35, &Global_2492157))
		{
			iVar1 = 0;
			if (unk_0x74C475EB8E73D398(&(Global_2492087.f_22), "Leader") && Global_2492087.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2492087.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0x679630D62246D8FF(iVar2, unk_0x12D16CE3923A2F1B(&Global_2492087, 35), &(Global_2492087.f_17), Global_2492087.f_30, iVar1, 0, Global_2492087, unk_0xDE2D3B9654C31EB3(unk_0x9EB17624F44A8DA4()), Global_1314011, Global_1314012, Global_1314013);
		}
		else
		{
			iVar0 = unk_0x65F0733C4A64907A(0, 1);
		}
	}
	func_189(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_253(int iParam0)//Position - 0x8A7C
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_257(15417, -1, -1))
			{
				func_256(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_257(15418, -1, -1))
			{
				func_256(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_257(15425, -1, -1))
			{
				func_256(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -695364761:
		case 1263491585:
		case -1307315235:
		case 258618816:
			if (!func_257(15405, -1, -1))
			{
				func_256(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_257(15393, -1, -1))
			{
				func_256(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_257(15409, -1, -1))
			{
				func_256(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_257(15396, -1, -1))
			{
				func_256(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_257(15412, -1, -1))
			{
				func_256(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_73(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_257(15403, -1, -1))
			{
				func_256(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_73(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_257(15389, -1, -1))
			{
				func_256(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_73(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_257(15398, -1, -1))
			{
				func_256(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -1361097493:
		case -73647644:
		case -1036580403:
		case -1765816422:
		case -1991379993:
		case -1731611121:
			if (!func_257(15400, -1, -1))
			{
				func_256(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_73(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_257(15408, -1, -1))
			{
				func_256(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_73(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_257(15411, -1, -1))
			{
				func_256(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_257(15397, -1, -1))
			{
				func_256(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_257(15413, -1, -1))
			{
				func_256(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_257(15391, -1, -1))
			{
				func_256(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_257(15388, -1, -1))
			{
				func_256(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_73(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_257(15401, -1, -1))
			{
				func_256(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case -322091380:
		case -1604737223:
		case -836382797:
			if (!func_257(15394, -1, -1))
			{
				func_256(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_73(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_257(15406, -1, -1))
			{
				func_256(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_257(15395, -1, -1))
			{
				func_256(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_73(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_257(15410, -1, -1))
			{
				func_256(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_257(15407, -1, -1))
			{
				func_256(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_73(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_73(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_257(15414, -1, -1))
			{
				func_256(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_257(15415, -1, -1))
			{
				func_256(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_257(15399, -1, -1))
			{
				func_256(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_257(15404, -1, -1))
			{
				func_256(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_73(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_257(15392, -1, -1))
			{
				func_256(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_257(15390, -1, -1))
			{
				func_256(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_257(15402, -1, -1))
			{
				func_256(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_257(15416, -1, -1))
			{
				func_256(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_73(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -2123485438:
		case 1457900554:
		case -14316613:
		case 619771057:
			if (!func_257(15426, -1, -1))
			{
				func_256(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_257(15422, -1, -1))
			{
				func_256(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_257(15423, -1, -1))
			{
				func_256(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_257(15421, -1, -1))
			{
				func_256(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_257(15427, -1, -1))
			{
				func_256(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_257(15419, -1, -1))
			{
				func_256(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_257(15420, -1, -1))
			{
				func_256(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_254(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x95F1
{
	int iVar0;
	
	if (func_255())
	{
		iVar0 = Global_2547365[iParam0 /*3*/][func_26(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x41495934EA1DEC56(iVar0, iParam1, iParam3);
		}
	}
}

int func_255()//Position - 0x9623
{
	return 1;
	return 0;
}

int func_256(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x9630
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
		iParam2 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xA7C33AF584635A56((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xDBE4A47179904C7B((iParam0 - 0)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xA7C33AF584635A56((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xDBE4A47179904C7B((iParam0 - 192)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xA7C33AF584635A56((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xDBE4A47179904C7B((iParam0 - 513)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xA7C33AF584635A56((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xDBE4A47179904C7B((iParam0 - 705)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x88B5FB6273C3123E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xDBE4A47179904C7B((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x88B5FB6273C3123E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xDBE4A47179904C7B((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x7CD64EB2C84F32FF((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xDBE4A47179904C7B((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x7CD64EB2C84F32FF((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xDBE4A47179904C7B((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x7CD64EB2C84F32FF((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xDBE4A47179904C7B((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x7CD64EB2C84F32FF((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xDBE4A47179904C7B((iParam0 - 7385)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x7CD64EB2C84F32FF((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xDBE4A47179904C7B((iParam0 - 7321)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x7CD64EB2C84F32FF((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xDBE4A47179904C7B((iParam0 - 9361)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x7CD64EB2C84F32FF((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xDBE4A47179904C7B((iParam0 - 15369)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x7CD64EB2C84F32FF((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xDBE4A47179904C7B((iParam0 - 15562)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x7CD64EB2C84F32FF((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xDBE4A47179904C7B((iParam0 - 15946)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x7CD64EB2C84F32FF((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xDBE4A47179904C7B((iParam0 - 18098)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar17, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_257(int iParam0, int iParam1, int iParam2)//Position - 0x9AFC
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar1 = func_259(iParam0, iParam1);
	uVar2 = func_258(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_258(int iParam0)//Position - 0x9B39
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

int func_259(int iParam0, int iParam1)//Position - 0x9DF9
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
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

int func_260(int iParam0)//Position - 0xA09B
{
	int iVar0;
	
	iVar0 = func_262(iParam0);
	return func_28(func_261(iVar0), -1, 0);
}

int func_261(int iParam0)//Position - 0xA0B7
{
	switch (iParam0)
	{
		case 0:
			return 3934;
		
		case 1:
			return 3935;
		
		case 2:
			return 3936;
		
		case 3:
			return 3937;
		
		case 4:
			return 3938;
		
		case 5:
			return 5439;
		
		default:
	}
	return 3934;
}

int func_262(int iParam0)//Position - 0xA111
{
	int iVar0;
	
	if (func_263(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_263(int iParam0)//Position - 0xA153
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_264(int iParam0, int iParam1)//Position - 0xA172
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_262(iParam0);
	iVar1 = func_261(iVar0);
	iVar2 = (func_28(iVar1, -1, 0) + iParam1);
	func_25(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_242(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iVar0 /*12*/] != 0)
			{
				iVar1 = func_261(iVar0);
				iVar3 = (iVar3 + func_28(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_266(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_265(9357, iVar5, -1, 1);
	}
}

var func_265(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA227
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x05D1B2AB3DEB3094((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x05D1B2AB3DEB3094((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x05D1B2AB3DEB3094((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x05D1B2AB3DEB3094((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x51999F13DC0B6E31((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x05D1B2AB3DEB3094((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x51999F13DC0B6E31((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x05D1B2AB3DEB3094((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x05D1B2AB3DEB3094((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x05D1B2AB3DEB3094((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x05D1B2AB3DEB3094((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x05D1B2AB3DEB3094((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x05D1B2AB3DEB3094((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x05D1B2AB3DEB3094((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x05D1B2AB3DEB3094((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x05D1B2AB3DEB3094((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x05D1B2AB3DEB3094((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x05D1B2AB3DEB3094((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x05D1B2AB3DEB3094((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x05D1B2AB3DEB3094((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xFD227BDFDE38A9C4(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_266(int iParam0)//Position - 0xA6E1
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_267(int iParam0, int iParam1, int iParam2)//Position - 0xA721
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_118(iParam1);
	if (func_263(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16286;
				if (func_268(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16291);
				}
				if (func_268(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16296);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16285;
				if (func_268(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16290);
				}
				if (func_268(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16295);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16284;
				if (func_268(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16289);
				}
				if (func_268(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16294);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16282;
				if (func_268(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16287);
				}
				if (func_268(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16292);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16283;
				if (func_268(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16288);
				}
				if (func_268(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16293);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_20357;
				if (func_268(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_20359);
				}
				if (func_268(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_20358);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_268(int iParam0, int iParam1, int iParam2)//Position - 0xA8F9
{
	int iVar0;
	
	if (func_270(iParam0, iParam1))
	{
		iVar0 = func_269(iParam0, iParam1);
		return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_269(int iParam0, int iParam1)//Position - 0xA934
{
	int iVar0;
	
	if (func_263(iParam1) && iParam0 != func_11())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_270(int iParam0, int iParam1)//Position - 0xA980
{
	int iVar0;
	
	if (func_263(iParam1) && iParam0 != func_11())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_271(int iParam0, int iParam1)//Position - 0xA9CB
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (func_263(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_272(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0xAA2A
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_121())
			{
				Var0 = { func_120() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar1 = system::to_float(uParam1->f_10);
					fVar2 = system::to_float(uParam1->f_11);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_15 + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = system::ceil(fVar5);
				}
				iVar6 = func_267(unk_0x9EB17624F44A8DA4(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (system::to_float(iVar6) * Global_262145.f_17916);
					iVar6 = system::round(fVar7);
				}
				else
				{
					fVar8 = (system::to_float(iVar6) * Global_262145.f_17915);
					iVar6 = system::round(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_234(&uVar9);
				iVar11 = system::round(Global_262145.f_17906);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = system::ceil((IntToFloat(iVar10) * Global_262145.f_17905));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0)
				{
					func_187(86);
				}
				Global_2512808.f_4856.f_199 = *iParam2;
			}
			else if (func_50(0))
			{
				Var14 = { func_273(func_125()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar15 = system::to_float(uParam1->f_10);
					fVar16 = system::to_float(uParam1->f_11);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_15 + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = system::ceil(fVar19);
				}
				iVar20 = func_267(func_125(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = system::ceil((IntToFloat(iVar20) * Global_262145.f_17916));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = system::ceil((IntToFloat(iVar20) * Global_262145.f_17915));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_262145.f_17955;
				iVar22 = system::ceil((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_262145.f_17956;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_273(int iParam0)//Position - 0xACCC
{
	return Global_1627537[iParam0 /*532*/].f_11.f_188;
}

void func_274(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)//Position - 0xACE3
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_108(unk_0x9EB17624F44A8DA4()))
		{
			if (bParam1)
			{
				func_289();
			}
			func_288();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_108(unk_0x9EB17624F44A8DA4()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_280(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_177));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_279(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_234(&uVar2);
					iVar4 = Global_262145.f_15467;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = system::ceil((IntToFloat(iVar3) * Global_262145.f_14676));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_187(44);
					}
				}
				func_277(*iParam3);
				func_276();
				Global_2512808.f_4856.f_199 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0xB72D370CB7ABC3EF())
				{
					iVar8 = iVar7;
					if (unk_0x012BC3F18B8C7807(iVar8))
					{
						iVar9 = unk_0x43E1A43A1AA9E0BE(iVar8);
						if (func_233(iVar9))
						{
							func_225(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_108(unk_0x9EB17624F44A8DA4()))
		{
			func_275();
		}
	}
}

void func_275()//Position - 0xAE4E
{
	int iVar0;
	
	iVar0 = Global_2549323[func_27()];
	iVar0++;
	func_94(3656, iVar0, -1, 1);
}

void func_276()//Position - 0xAE73
{
	int iVar0;
	
	iVar0 = Global_2549329[func_27()];
	iVar0++;
	func_94(3655, iVar0, -1, 1);
}

void func_277(int iParam0)//Position - 0xAE98
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2549332[func_27()];
	iVar0 = (iVar0 + iParam0);
	func_94(3657, iVar0, -1, 1);
	if (func_242(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_278(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_265(7666, iVar2, -1, 1);
	}
}

int func_278(int iParam0)//Position - 0xAEFA
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_15600;
			break;
		
		case 2:
			return Global_262145.f_15601;
			break;
		
		case 3:
			return Global_262145.f_15602;
			break;
		
		case 4:
			return Global_262145.f_15603;
			break;
		
		case 5:
			return Global_262145.f_15604;
			break;
		
		case 6:
			return Global_262145.f_15605;
			break;
		
		case 7:
			return Global_262145.f_15606;
			break;
		
		case 8:
			return Global_262145.f_15607;
			break;
		
		case 9:
			return Global_262145.f_15608;
			break;
		
		case 10:
			return Global_262145.f_15609;
			break;
		
		case 11:
			return Global_262145.f_15610;
			break;
		
		case 12:
			return Global_262145.f_15611;
			break;
		
		case 13:
			return Global_262145.f_15612;
			break;
		
		case 14:
			return Global_262145.f_15613;
			break;
		
		case 15:
			return Global_262145.f_15614;
			break;
		
		case 16:
			return Global_262145.f_15615;
			break;
		
		case 17:
			return Global_262145.f_15616;
			break;
		
		case 18:
			return Global_262145.f_15617;
			break;
		
		case 19:
			return Global_262145.f_15618;
			break;
		
		case 20:
			return Global_262145.f_15619;
			break;
		
		case 21:
			return Global_262145.f_15620;
			break;
		
		case 22:
			return Global_262145.f_15621;
			break;
		
		case 23:
			return Global_262145.f_15622;
			break;
		
		case 24:
			return Global_262145.f_15623;
			break;
	}
	return 0;
}

var func_279(int iParam0)//Position - 0xB0D2
{
	if (iParam0 >= Global_262145.f_14654)
	{
		return Global_262145.f_14675;
	}
	else if (iParam0 >= Global_262145.f_14653)
	{
		return Global_262145.f_14674;
	}
	else if (iParam0 >= Global_262145.f_14652)
	{
		return Global_262145.f_14673;
	}
	else if (iParam0 >= Global_262145.f_14651)
	{
		return Global_262145.f_14672;
	}
	else if (iParam0 >= Global_262145.f_14650)
	{
		return Global_262145.f_14671;
	}
	else if (iParam0 >= Global_262145.f_14649)
	{
		return Global_262145.f_14670;
	}
	else if (iParam0 >= Global_262145.f_14648)
	{
		return Global_262145.f_14669;
	}
	else if (iParam0 >= Global_262145.f_14647)
	{
		return Global_262145.f_14668;
	}
	else if (iParam0 >= Global_262145.f_14646)
	{
		return Global_262145.f_14667;
	}
	else if (iParam0 >= Global_262145.f_14645)
	{
		return Global_262145.f_14666;
	}
	else if (iParam0 >= Global_262145.f_14644)
	{
		return Global_262145.f_14665;
	}
	else if (iParam0 >= Global_262145.f_14643)
	{
		return Global_262145.f_14664;
	}
	else if (iParam0 >= Global_262145.f_14642)
	{
		return Global_262145.f_14663;
	}
	else if (iParam0 >= Global_262145.f_14641)
	{
		return Global_262145.f_14662;
	}
	else if (iParam0 >= Global_262145.f_14640)
	{
		return Global_262145.f_14661;
	}
	else if (iParam0 >= Global_262145.f_14639)
	{
		return Global_262145.f_14660;
	}
	else if (iParam0 >= Global_262145.f_14638)
	{
		return Global_262145.f_14659;
	}
	else if (iParam0 >= Global_262145.f_14637)
	{
		return Global_262145.f_14658;
	}
	else if (iParam0 >= Global_262145.f_14636)
	{
		return Global_262145.f_14657;
	}
	else if (iParam0 >= Global_262145.f_14635)
	{
		return Global_262145.f_14656;
	}
	return Global_262145.f_14655;
}

int func_280(int iParam0)//Position - 0xB2D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_287(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_286(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_285(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_281(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_281(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_285(unk_0x63A6486593EC7EC3(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_281(int iParam0)//Position - 0xB34E
{
	int iVar0;
	
	if (func_284(iParam0))
	{
		iVar0 = func_282(func_283(iParam0));
		return func_28(iVar0, -1, 0);
	}
	return 0;
}

int func_282(int iParam0)//Position - 0xB377
{
	if (iParam0 == 0)
	{
		return 3635;
	}
	else if (iParam0 == 1)
	{
		return 3636;
	}
	else if (iParam0 == 2)
	{
		return 3637;
	}
	else if (iParam0 == 3)
	{
		return 3638;
	}
	else if (iParam0 == 4)
	{
		return 3639;
	}
	return 3635;
}

int func_283(int iParam0)//Position - 0xB3CA
{
	int iVar0;
	
	if (func_284(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_84[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_284(int iParam0)//Position - 0xB40C
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_285(int iParam0)//Position - 0xB42B
{
	if (iParam0 == 1)
	{
		return Global_262145.f_14854;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_14852;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_14856;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_14850;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_14848;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_14858;
	}
	return 0;
}

int func_286(int iParam0, int iParam1)//Position - 0xB4A3
{
	int iVar0;
	
	if (func_284(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1669253[iVar0] == iParam1 && Global_1669260[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_287(int iParam0)//Position - 0xB4E9
{
	int iVar0;
	
	if (func_284(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_84[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_288()//Position - 0xB52A
{
	int iVar0;
	
	iVar0 = Global_2549320[func_27()];
	iVar0++;
	Global_2549320[func_27()] = iVar0;
	func_94(3654, iVar0, -1, 1);
}

void func_289()//Position - 0xB55B
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2549317[func_27()];
	iVar1 = Global_2549326[func_27()];
	iVar0++;
	iVar1++;
	Global_2549317[func_27()] = iVar0;
	Global_2549326[func_27()] = iVar1;
	Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_106 = iVar1;
	func_94(3652, iVar0, -1, 1);
	func_94(3653, iVar1, -1, 1);
}

void func_290()//Position - 0xB5C7
{
	if (func_107())
	{
		Global_2447954.f_3066.f_134 = 0;
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_408 = Global_2447954.f_3066.f_134;
	}
}

void func_291()//Position - 0xB5F9
{
	if (func_107())
	{
		if (Global_2447954.f_3066.f_134 < 10)
		{
			Global_2447954.f_3066.f_134++;
			Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_408 = Global_2447954.f_3066.f_134;
		}
	}
}

void func_292()//Position - 0xB643
{
	if (func_107())
	{
		if (Global_2447954.f_3066.f_134 > 0)
		{
			Global_2447954.f_3066.f_134 = (Global_2447954.f_3066.f_134 - 1);
			Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_408 = Global_2447954.f_3066.f_134;
		}
	}
}

int func_293(int iParam0)//Position - 0xB68C
{
	return Global_1627537[iParam0 /*532*/].f_11.f_28;
}

int func_294(int iParam0)//Position - 0xB6A1
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
			if (func_123(1) && !func_50(1))
			{
				if (func_295(func_125()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_295(int iParam0)//Position - 0xB710
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 26);
}

int func_296(int iParam0)//Position - 0xB736
{
	switch (iParam0)
	{
		case 142:
			return system::round((IntToFloat(Global_262145.f_11846) * Global_262145.f_11851));
		
		case 157:
			return 0;
		
		case 159:
			return system::round((IntToFloat(Global_262145.f_11796) * Global_262145.f_11801));
		
		case 151:
			return 0;
		
		case 148:
			return system::round((IntToFloat(Global_262145.f_11823) * Global_262145.f_11827));
		
		case 164:
			return system::round((IntToFloat(Global_262145.f_11836) * Global_262145.f_11840));
		
		case 152:
			return system::round((IntToFloat(Global_262145.f_11858) * Global_262145.f_11863));
		
		case 153:
			return system::round((IntToFloat(Global_262145.f_12020) * Global_262145.f_12021));
		
		case 154:
			return system::round((IntToFloat(Global_262145.f_12026) * Global_262145.f_12027));
		
		case 155:
			return system::round((IntToFloat(Global_262145.f_12024) * Global_262145.f_12025));
		
		case 160:
			return system::round((IntToFloat(Global_262145.f_12018) * Global_262145.f_12019));
		
		case 162:
			return system::round((IntToFloat(Global_262145.f_12022) * Global_262145.f_12023));
		
		case 163:
			return system::round((IntToFloat(Global_262145.f_12016) * Global_262145.f_12017));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_14377;
		
		case 172:
			return Global_262145.f_14393;
		
		case 173:
			return Global_262145.f_14336;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_17610;
		
		case 180:
			return Global_262145.f_17486;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_17494;
		
		case 185:
			return Global_262145.f_17503;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_17698;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_17715;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_17563;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_17746;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_17624;
		
		case 205:
			return Global_262145.f_17733;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_17591;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_17728;
		
		case 211:
			return Global_262145.f_17692;
		
		case 214:
			return Global_262145.f_18262;
		
		case 215:
			return Global_262145.f_18272;
		
		case 216:
			return Global_262145.f_18282;
		
		case 217:
			return Global_262145.f_18291;
		
		case 218:
			return Global_262145.f_18300;
		
		case 219:
			return Global_262145.f_18316;
		
		default:
	}
	return 0;
}

int func_297(int iParam0, bool bParam1)//Position - 0xBA7B
{
	switch (iParam0)
	{
		case 142:
			return system::round((IntToFloat(Global_262145.f_11847) * Global_262145.f_11852));
		
		case 157:
			return 0;
		
		case 159:
			return system::round((IntToFloat(Global_262145.f_11797) * Global_262145.f_11802));
		
		case 151:
			return 0;
		
		case 148:
			return system::round((IntToFloat(Global_262145.f_11824) * Global_262145.f_11828));
		
		case 164:
			return system::round((IntToFloat(Global_262145.f_11837) * Global_262145.f_11841));
		
		case 152:
			return system::round((IntToFloat(Global_262145.f_11859) * Global_262145.f_11864));
		
		case 153:
			return system::round((IntToFloat(Global_262145.f_11896) * Global_262145.f_11899));
		
		case 154:
			return system::round((IntToFloat(Global_262145.f_11942) * Global_262145.f_11945));
		
		case 155:
			return system::round((IntToFloat(Global_262145.f_11932) * Global_262145.f_11935));
		
		case 160:
			return system::round((IntToFloat(Global_262145.f_11887) * Global_262145.f_11890));
		
		case 162:
			return system::round((IntToFloat(Global_262145.f_11907) * Global_262145.f_11912));
		
		case 163:
			return system::round((IntToFloat(Global_262145.f_11872) * Global_262145.f_11875));
		
		case 170:
			return Global_262145.f_14319;
		
		case 171:
			return Global_262145.f_14378;
		
		case 172:
			return Global_262145.f_14394;
		
		case 173:
			return Global_262145.f_14337;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_16414;
		
		case 168:
			return Global_262145.f_16413;
		
		case 179:
			return Global_262145.f_17611;
		
		case 180:
			return Global_262145.f_17487;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_17495;
		
		case 185:
			return Global_262145.f_17504;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_17699;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_17716;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_17564;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_17747;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_17625;
		
		case 205:
			return Global_262145.f_17734;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_17592;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_17729;
		
		case 211:
			return Global_262145.f_17693;
		
		case 214:
			return Global_262145.f_18263;
		
		case 215:
			return Global_262145.f_18273;
		
		case 216:
			return Global_262145.f_18283;
		
		case 217:
			return Global_262145.f_18292;
		
		case 218:
			return Global_262145.f_18301;
		
		case 219:
			return Global_262145.f_18317;
		
		case 178:
			if (func_107())
			{
				return Global_262145.f_18140;
			}
			else if (bParam1)
			{
				return Global_262145.f_18141;
			}
			break;
		
		case 188:
			if (func_107())
			{
				return Global_262145.f_18224;
			}
			else if (bParam1)
			{
				return Global_262145.f_18225;
			}
			break;
		
		case 225:
			if (func_107() && !func_121())
			{
				if (func_295(unk_0x9EB17624F44A8DA4()))
				{
					return Global_262145.f_20345;
				}
				else
				{
					return Global_262145.f_20346;
				}
			}
			else if (func_121())
			{
				return Global_262145.f_20347;
			}
			break;
		
		case 226:
			if (func_107() && !func_121())
			{
				if (func_295(unk_0x9EB17624F44A8DA4()))
				{
					return Global_262145.f_20325;
				}
				else
				{
					return Global_262145.f_20326;
				}
			}
			else if (func_121())
			{
				return Global_262145.f_20327;
			}
			break;
		
		case 227:
			if (func_107() && !func_121())
			{
				if (func_295(unk_0x9EB17624F44A8DA4()))
				{
					return Global_262145.f_20337;
				}
				else
				{
					return Global_262145.f_20338;
				}
			}
			else if (func_121())
			{
				return Global_262145.f_20339;
			}
			break;
		
		case 229:
			if (func_107() && !func_121())
			{
				if (func_295(unk_0x9EB17624F44A8DA4()))
				{
					return Global_262145.f_21500;
				}
				else
				{
					return Global_262145.f_21501;
				}
			}
			else if (func_121())
			{
				return Global_262145.f_21502;
			}
			break;
		
		case 230:
			if (func_107() && !func_121())
			{
				if (func_295(unk_0x9EB17624F44A8DA4()))
				{
					return Global_262145.f_21596;
				}
				else
				{
					return Global_262145.f_21597;
				}
			}
			else if (func_121())
			{
				return Global_262145.f_21598;
			}
			break;
		
		case 233:
			if (func_107() && !func_121())
			{
				if (func_295(unk_0x9EB17624F44A8DA4()))
				{
					return Global_262145.f_22057;
				}
				else
				{
					return Global_262145.f_22058;
				}
			}
			else if (func_121())
			{
				return Global_262145.f_22056;
			}
			break;
	}
	return 0;
}

void func_298(int iParam0, var uParam1, var uParam2)//Position - 0xC021
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_299(iParam0))
	{
		if (!func_107())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_11740;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_47(iParam0))
	{
		*uParam1 = (Global_262145.f_17464 / 100f);
		*uParam2 = (Global_262145.f_17464 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_11739;
		*uParam2 = Global_262145.f_11738;
	}
	if (func_47(iParam0))
	{
		if (func_223(unk_0x9EB17624F44A8DA4(), 1))
		{
			*uParam1 = (Global_262145.f_17463 / 100f);
			*uParam2 = (Global_262145.f_17463 / 100f);
		}
	}
	else if (func_223(unk_0x9EB17624F44A8DA4(), 1))
	{
		*uParam1 = Global_262145.f_11737;
		*uParam2 = Global_262145.f_11736;
	}
	iVar0 = func_29();
	if (iVar0 != func_11())
	{
		if (func_576(unk_0x9EB17624F44A8DA4(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_299(int iParam0)//Position - 0xC125
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_300(int iParam0, int iParam1)//Position - 0xC169
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB80A4DA4C06A76F1(unk_0x42714E8EC2D8F2EA(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x2786E663D1846FFC(unk_0x42714E8EC2D8F2EA(iParam0), "MPBitset");
	}
	unk_0x0EE72DB1CD8A3B86(&iVar0, iParam1);
	unk_0xD91ED8E8618A1DEF(unk_0x42714E8EC2D8F2EA(iParam0), "MPBitset", iVar0);
}

void func_301()//Position - 0xC1AE
{
	if (unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 7))
	{
		if (unk_0xC80D31E4B587871C(Local_125.f_2, 0))
		{
			if (func_576(unk_0x9EB17624F44A8DA4(), func_16(), 1))
			{
				func_302(1, 7, 0, 0, -1, -1, -1, -1, -1);
			}
			else
			{
				func_302(0, 7, 0, 0, -1, -1, -1, -1, -1);
			}
		}
		else if (unk_0xC80D31E4B587871C(Local_125.f_2, 1))
		{
			func_302(0, 8, 0, 0, -1, -1, -1, -1, -1);
		}
		else if (unk_0xC80D31E4B587871C(Local_125.f_2, 2))
		{
			func_302(0, 2, 0, 0, -1, -1, -1, -1, -1);
		}
		else if (unk_0xC80D31E4B587871C(Local_125.f_2, 3))
		{
			if (!func_585())
			{
				if (unk_0x9EB17624F44A8DA4() == func_6())
				{
					if (func_576(unk_0x9EB17624F44A8DA4(), func_16(), 0))
					{
						func_302(0, 2, 0, 0, -1, -1, -1, -1, -1);
					}
					else
					{
						func_302(1, 1, 0, 0, -1, -1, -1, -1, -1);
					}
				}
				else
				{
					func_302(0, 2, 0, 0, -1, -1, -1, -1, -1);
				}
			}
			else
			{
				func_302(0, 2, 0, 0, -1, -1, -1, -1, -1);
			}
		}
		else if (unk_0xC80D31E4B587871C(Local_125.f_2, 4))
		{
			func_302(0, 7, 0, 0, -1, -1, -1, -1, -1);
		}
		else
		{
			func_302(0, 0, 0, 0, -1, -1, -1, -1, -1);
		}
		unk_0x0EE72DB1CD8A3B86(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 7);
	}
}

void func_302(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xC2E4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_44(unk_0x9EB17624F44A8DA4());
	if (func_47(iVar0))
	{
		Global_1667885.f_2 = func_370();
		Global_1667885.f_3 = func_369();
		Global_1667885.f_50 = iParam4;
		Global_1667885.f_51 = iParam5;
		Global_1667885.f_10 = unk_0xE3CCAFB1555348DF();
		Global_1667885.f_20 = (Global_1667885.f_10 - Global_1667885.f_9);
		Global_1667885.f_12 = iParam1;
		Global_1667885.f_19 = func_362(iVar0, bParam0, func_368(bParam3));
		if (bParam0)
		{
			Global_1667885.f_11 = 1;
		}
		else
		{
			Global_1667885.f_11 = 0;
		}
		if ((func_64(unk_0x9EB17624F44A8DA4()) || func_63(unk_0x9EB17624F44A8DA4())) || func_75(unk_0x9EB17624F44A8DA4()))
		{
			Global_1667885.f_8 = 1;
		}
		else
		{
			Global_1667885.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1667885.f_43 = 0;
			Global_1667885.f_45 = func_361(func_125(), iParam2);
			Global_1667885.f_47 = iParam7;
			Global_1667885.f_46 = iParam6;
			Global_1667885.f_52 = func_360(func_125(), iParam2);
		}
		func_358(iVar0);
	}
	else if (func_54(iVar0))
	{
		Global_1667938.f_2 = func_370();
		Global_1667938.f_3 = func_369();
		Global_1667938.f_10 = unk_0xE3CCAFB1555348DF();
		Global_1667938.f_19 = (Global_1667938.f_10 - Global_1667938.f_9);
		Global_1667938.f_12 = iParam1;
		if (bParam0)
		{
			Global_1667938.f_11 = 1;
		}
		else
		{
			Global_1667938.f_11 = 0;
		}
		if ((func_64(unk_0x9EB17624F44A8DA4()) || func_63(unk_0x9EB17624F44A8DA4())) || func_75(unk_0x9EB17624F44A8DA4()))
		{
			Global_1667938.f_8 = 1;
		}
		else
		{
			Global_1667938.f_8 = 0;
		}
		func_356(iVar0);
	}
	else if (func_89(iVar0))
	{
		Global_1668000.f_2 = func_370();
		Global_1668000.f_3 = func_369();
		Global_1668000.f_9 = unk_0xE3CCAFB1555348DF();
		Global_1668000.f_18 = (Global_1668000.f_9 - Global_1668000.f_8);
		Global_1668000.f_11 = iParam1;
		Global_1668000.f_7 = func_355();
		Global_1668000.f_42 = func_353(func_27(), 5);
		iVar1 = unk_0x9EB17624F44A8DA4();
		iVar2 = func_106(iVar1);
		Global_1668000.f_28 = iVar2;
		Global_1668000.f_29 = func_350((func_352(iVar1) || func_351(iVar1)));
		Global_1668000.f_30 = func_350(func_349(iVar1));
		Global_1668000.f_32 = func_350(func_348(iVar1));
		Global_1668000.f_33 = func_350(func_347(iVar1));
		Global_1668000.f_34 = func_350(func_346(iVar1));
		Global_1668000.f_35 = func_350(func_345(0, iVar1) == 1);
		Global_1668000.f_36 = func_350(func_344(iVar1));
		Global_1668000.f_37 = func_350(func_343(iVar1));
		Global_1668000.f_38 = func_350(func_342(iVar1));
		Global_1668000.f_39 = func_350(func_268(iVar1, iVar2, 0));
		Global_1668000.f_40 = func_350(func_268(iVar1, iVar2, 2));
		Global_1668000.f_41 = func_350(func_268(iVar1, iVar2, 1));
		if (func_341(iVar1))
		{
			Global_1668000.f_31 = 2;
		}
		else if (func_340(iVar1))
		{
			Global_1668000.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1668000.f_10 = 1;
		}
		else
		{
			Global_1668000.f_10 = 0;
		}
		if ((func_64(unk_0x9EB17624F44A8DA4()) || func_63(unk_0x9EB17624F44A8DA4())) || func_75(unk_0x9EB17624F44A8DA4()))
		{
			Global_1668000.f_6 = 1;
		}
		else
		{
			Global_1668000.f_6 = 0;
		}
		Global_1668000.f_21 = -2;
		Global_1668000.f_22 = -2;
		func_338(iVar0);
	}
	else if (func_88(iVar0))
	{
		Global_1668043.f_2 = func_370();
		Global_1668043.f_3 = func_369();
		if ((func_64(unk_0x9EB17624F44A8DA4()) || func_63(unk_0x9EB17624F44A8DA4())) || func_75(unk_0x9EB17624F44A8DA4()))
		{
			Global_1668043.f_6 = 1;
		}
		else
		{
			Global_1668043.f_6 = 0;
		}
		Global_1668043.f_9 = unk_0xE3CCAFB1555348DF();
		Global_1668043.f_10 = func_350(bParam0);
		Global_1668043.f_11 = iParam1;
		Global_1668043.f_17 = func_337(func_29());
		Global_1668043.f_18 = (Global_1668043.f_9 - Global_1668043.f_8);
		Global_1668043.f_20 = iParam8;
		Global_1668043.f_21 = -2;
		Global_1668043.f_22 = -2;
		Global_1668043.f_27 = func_336();
		Global_1668043.f_29 = func_28(6090, -1, 0);
		Global_1668043.f_30 = func_28(6086, -1, 0);
		Global_1668043.f_31 = func_28(6087, -1, 0);
		Global_1668043.f_32 = func_28(6089, -1, 0);
		Global_1668043.f_33 = func_28(6088, -1, 0);
		Global_1668043.f_34 = func_28(6091, -1, 0);
		Global_1668043.f_36 = func_350(func_50(1));
		Global_1668043.f_37 = func_333();
		func_312();
		func_310(iVar0);
	}
	else if (func_87(iVar0))
	{
		Global_1668096.f_2 = func_370();
		Global_1668096.f_3 = func_369();
		if ((func_64(unk_0x9EB17624F44A8DA4()) || func_63(unk_0x9EB17624F44A8DA4())) || func_75(unk_0x9EB17624F44A8DA4()))
		{
			Global_1668096.f_6 = 1;
		}
		else
		{
			Global_1668096.f_6 = 0;
		}
		Global_1668096.f_9 = unk_0xE3CCAFB1555348DF();
		Global_1668096.f_10 = func_350(bParam0);
		Global_1668096.f_11 = iParam1;
		Global_1668096.f_18 = (Global_1668096.f_9 - Global_1668096.f_8);
		Global_1668096.f_20 = iParam8;
		Global_1668096.f_23 = Global_786547;
		Global_1668096.f_36 = Global_786547.f_1;
		Global_1668096.f_24 = func_28(6140, -1, 0);
		Global_1668096.f_25 = func_28(6145, -1, 0);
		Global_1668096.f_26 = func_28(6146, -1, 0);
		Global_1668096.f_27 = func_350((((func_309() || func_308()) || func_307()) || func_306(unk_0x9EB17624F44A8DA4())));
		Global_1668096.f_28 = func_28(6147, -1, 0);
		Global_1668096.f_29 = func_350(func_305());
		Global_1668096.f_35 = -1;
		Global_1668096.f_38 = -1;
		Global_1668096.f_39 = Global_1668096.f_4;
		Global_1668096.f_40 = Global_1668096.f_5;
		Global_1668096.f_41 = func_370();
		Global_1668096.f_42 = func_350(func_50(1));
		Global_1668096.f_44 = Global_1668096.f_18;
		func_303(iVar0);
	}
	else
	{
		Global_1667867.f_6 = unk_0xE3CCAFB1555348DF();
		if (bParam0)
		{
			Global_1667867.f_7 = 1;
		}
		else
		{
			Global_1667867.f_7 = 0;
		}
		Global_1667867.f_8 = iParam1;
		if (Global_1667867.f_4 == 0)
		{
			if ((func_64(unk_0x9EB17624F44A8DA4()) || func_63(unk_0x9EB17624F44A8DA4())) || func_75(unk_0x9EB17624F44A8DA4()))
			{
				Global_1667867.f_4 = 1;
			}
		}
	}
}

void func_303(int iParam0)//Position - 0xC968
{
	unk_0xFDD76EF6D7C1C5E7(&Global_1668096);
	func_304();
}

void func_304()//Position - 0xC97C
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1668096 = { Var0 };
	Global_1668096.f_16 = 0;
}

bool func_305()//Position - 0xCA8A
{
	return func_28(6139, -1, 0) != 0;
}

int func_306(int iParam0)//Position - 0xCA9D
{
	if (iParam0 != func_11())
	{
		return Global_1595693[iParam0 /*680*/].f_266.f_248 != 0;
	}
	return 0;
}

bool func_307()//Position - 0xCAC2
{
	return func_28(6147, -1, 0) == 3;
}

bool func_308()//Position - 0xCAD5
{
	return func_28(6147, -1, 0) == 2;
}

bool func_309()//Position - 0xCAE8
{
	return func_28(6147, -1, 0) == 1;
}

void func_310(int iParam0)//Position - 0xCAFB
{
	unk_0x705964318EE23D2C(&Global_1668043);
	func_311();
}

void func_311()//Position - 0xCB0F
{
	struct<53> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1668043 = { Var0 };
	Global_1668043.f_23 = 0;
	Global_1668043.f_24 = 0;
	Global_1668043.f_16 = 0;
}

void func_312()//Position - 0xCC55
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_323(12));
		func_322(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1320310[iVar1 /*141*/].f_66 != 0 && func_314(Global_1320310[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2512808.f_871 != iVar1)
				{
					if (func_313(Global_1320310[iVar1 /*141*/].f_66))
					{
						if (Global_1320310[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1320310[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1668043.f_38 = iVar3;
								break;
							
							case 1:
								Global_1668043.f_39 = iVar3;
								break;
							
							case 2:
								Global_1668043.f_40 = iVar3;
								break;
							
							case 3:
								Global_1668043.f_41 = iVar3;
								break;
							
							case 4:
								Global_1668043.f_42 = iVar3;
								break;
							
							case 5:
								Global_1668043.f_43 = iVar3;
								break;
							
							case 6:
								Global_1668043.f_44 = iVar3;
								break;
							
							case 7:
								Global_1668043.f_45 = iVar3;
								break;
							
							case 8:
								Global_1668043.f_46 = iVar3;
								break;
							
							case 9:
								Global_1668043.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_313(int iParam0)//Position - 0xCD9B
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case -1984275979:
		case -42959138:
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case -749299473:
		case -975345305:
		case -1700874274:
		case -392675425:
		case -1763555241:
		case 1043222410:
		case joaat("lazer"):
		case -1386191424:
		case 1565978651:
		case 1036591958:
		case -1007528109:
		case -32878452:
		case -1523619738:
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case 1181327175:
		case 447548909:
		case -726768679:
			return 1;
		
		default:
	}
	return 0;
}

int func_314(int iParam0, bool bParam1)//Position - 0xCEC9
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xC8A14E3C7BE76201(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x3A711520F83BAE98()) || (iParam0 == joaat("buffalo3") && !unk_0x3A711520F83BAE98())) || (iParam0 == joaat("gauntlet2") && !unk_0x3A711520F83BAE98())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x3A711520F83BAE98())) || iParam0 == joaat("blista3"))
	{
		if (!func_321())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xF2653182352C7FB1())
		{
			if (unk_0x4F531CBC79B8645A(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x42683C90F2D005ED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_320() && !func_319()) && !func_318()) && !func_317()) && !func_321())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x177281F5FA205A38() || unk_0xB9D80B12FE4456A5()) || unk_0xFD6215BABFD843F2())
		{
		}
		else if (!func_318())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_316(iParam0))
		{
			return 0;
		}
	}
	if (!func_315(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_315(int iParam0)//Position - 0xD057
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_122())
	{
		return 1;
	}
	unk_0xD424C225D6534505(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xBBA20694DE4179EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_316(int iParam0)//Position - 0xD123
{
	int iVar0;
	int iVar1;
	
	if (Global_2492197)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xE3CCAFB1555348DF();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5990 && !Global_262145.f_12250) && iVar1 < Global_262145.f_12251)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13548 && iVar1 < Global_262145.f_13560)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13544 && iVar1 < Global_262145.f_13556)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13545 && iVar1 < Global_262145.f_13557)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13546 && iVar1 < Global_262145.f_13558)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13547 && iVar1 < Global_262145.f_13559)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13549 && iVar1 < Global_262145.f_13561)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13550 && iVar1 < Global_262145.f_13553)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13551 && iVar1 < Global_262145.f_13554)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13552 && iVar1 < Global_262145.f_13555)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16179 && iVar1 < Global_262145.f_16144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16174 && iVar1 < Global_262145.f_16139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16178 && iVar1 < Global_262145.f_16143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16177 && iVar1 < Global_262145.f_16142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16171 && iVar1 < Global_262145.f_16136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16172 && iVar1 < Global_262145.f_16137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16175 && iVar1 < Global_262145.f_16140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16176 && iVar1 < Global_262145.f_16141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16173 && iVar1 < Global_262145.f_16138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16181 && iVar1 < Global_262145.f_16146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16182 && iVar1 < Global_262145.f_16147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16170 && iVar1 < Global_262145.f_16135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16169 && iVar1 < Global_262145.f_16134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16168 && iVar1 < Global_262145.f_16133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16180 && iVar1 < Global_262145.f_16145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16183 && iVar1 < Global_262145.f_16148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16184 && iVar1 < Global_262145.f_16149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16185 && iVar1 < Global_262145.f_16150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16186 && iVar1 < Global_262145.f_16151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16331 && iVar1 < Global_262145.f_16353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16332 && iVar1 < Global_262145.f_16354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16333 && iVar1 < Global_262145.f_16355)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16334 && iVar1 < Global_262145.f_16356)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16335 && iVar1 < Global_262145.f_16357)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16336 && iVar1 < Global_262145.f_16358)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16338 && iVar1 < Global_262145.f_16359)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16339 && iVar1 < Global_262145.f_16360)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16340 && iVar1 < Global_262145.f_16361)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16341 && iVar1 < Global_262145.f_16362)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16342 && iVar1 < Global_262145.f_16363)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16343 && iVar1 < Global_262145.f_16364)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16344 && iVar1 < Global_262145.f_16365)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16350 && iVar1 < Global_262145.f_16372)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16347 && iVar1 < Global_262145.f_16368)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16348 && iVar1 < Global_262145.f_16369)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16349 && iVar1 < Global_262145.f_16370)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16337 && iVar1 < Global_262145.f_16371)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16351 && iVar1 < Global_262145.f_16373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16345 && iVar1 < Global_262145.f_16366)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16346 && iVar1 < Global_262145.f_16367)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16352 && iVar1 < Global_262145.f_16374)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17980 && iVar1 < Global_262145.f_18056)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17981 && iVar1 < Global_262145.f_18057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17982 && iVar1 < Global_262145.f_18058)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17983 && iVar1 < Global_262145.f_18059)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17984 && iVar1 < Global_262145.f_18060)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17985 && iVar1 < Global_262145.f_18061)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17986 && iVar1 < Global_262145.f_18062)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17987 && iVar1 < Global_262145.f_18063)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17988 && iVar1 < Global_262145.f_18064)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17989 && iVar1 < Global_262145.f_18065)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17990 && iVar1 < Global_262145.f_18066)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17991 && iVar1 < Global_262145.f_18067)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17992 && iVar1 < Global_262145.f_18068)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17993 && iVar1 < Global_262145.f_18069)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17994 && iVar1 < Global_262145.f_18070)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17995 && iVar1 < Global_262145.f_18071)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17996 && iVar1 < Global_262145.f_18072)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17997 && iVar1 < Global_262145.f_18073)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17998 && iVar1 < Global_262145.f_18074)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17999 && iVar1 < Global_262145.f_18075)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18000 && iVar1 < Global_262145.f_18076)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18001 && iVar1 < Global_262145.f_18077)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18002 && iVar1 < Global_262145.f_18078)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18003 && iVar1 < Global_262145.f_18079)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18004 && iVar1 < Global_262145.f_18080)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19037 && iVar1 < Global_262145.f_19033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19038 && iVar1 < Global_262145.f_19034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19039 && iVar1 < Global_262145.f_19035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19040 && iVar1 < Global_262145.f_19036)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_19916 && iVar1 < Global_262145.f_19924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_19917 && iVar1 < Global_262145.f_19925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_19918 && iVar1 < Global_262145.f_19926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_19919 && iVar1 < Global_262145.f_19927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_19920 && iVar1 < Global_262145.f_19928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_19921 && iVar1 < Global_262145.f_19929)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_20692 && iVar1 < Global_262145.f_20712)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_20704 && iVar1 < Global_262145.f_20724)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_20695 && iVar1 < Global_262145.f_20715)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_20705 && iVar1 < Global_262145.f_20725)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_20693 && iVar1 < Global_262145.f_20713)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_20709 && iVar1 < Global_262145.f_20729)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_20707 && iVar1 < Global_262145.f_20727)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_20708 && iVar1 < Global_262145.f_20728)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_20703 && iVar1 < Global_262145.f_20723)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_20710 && iVar1 < Global_262145.f_20730)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_20706 && iVar1 < Global_262145.f_20726)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_20702 && iVar1 < Global_262145.f_20722)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_20694 && iVar1 < Global_262145.f_20714)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_20696 && iVar1 < Global_262145.f_20716)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_20697 && iVar1 < Global_262145.f_20717)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_20698 && iVar1 < Global_262145.f_20718)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_20699 && iVar1 < Global_262145.f_20719)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_20700 && iVar1 < Global_262145.f_20720)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_20701 && iVar1 < Global_262145.f_20721)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_21653 && iVar1 < Global_262145.f_21681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_21654 && iVar1 < Global_262145.f_21682)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_21655 && iVar1 < Global_262145.f_21683)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_21656 && iVar1 < Global_262145.f_21684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_21657 && iVar1 < Global_262145.f_21685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_21658 && iVar1 < Global_262145.f_21686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_21659 && iVar1 < Global_262145.f_21687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_21660 && iVar1 < Global_262145.f_21688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_21661 && iVar1 < Global_262145.f_21689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_21662 && iVar1 < Global_262145.f_21690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_21663 && iVar1 < Global_262145.f_21691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_21664 && iVar1 < Global_262145.f_21692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_21665 && iVar1 < Global_262145.f_21693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_21666 && iVar1 < Global_262145.f_21694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_21667 && iVar1 < Global_262145.f_21695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_21668 && iVar1 < Global_262145.f_21696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_21669 && iVar1 < Global_262145.f_21697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_21670 && iVar1 < Global_262145.f_21698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_21671 && iVar1 < Global_262145.f_21699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_21672 && iVar1 < Global_262145.f_21700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_21673 && iVar1 < Global_262145.f_21701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_21674 && iVar1 < Global_262145.f_21702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_21675 && iVar1 < Global_262145.f_21703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_21676 && iVar1 < Global_262145.f_21704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_21677 && iVar1 < Global_262145.f_21705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_21678 && iVar1 < Global_262145.f_21706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_21679 && iVar1 < Global_262145.f_21707)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_21680 && iVar1 < Global_262145.f_21708)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_22787 && iVar1 < Global_262145.f_22803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_22788 && iVar1 < Global_262145.f_22804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_22792 && iVar1 < Global_262145.f_22808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_22795 && iVar1 < Global_262145.f_22811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_22800 && iVar1 < Global_262145.f_22816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_22794 && iVar1 < Global_262145.f_22810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_22786 && iVar1 < Global_262145.f_22802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_22793 && iVar1 < Global_262145.f_22809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_22799 && iVar1 < Global_262145.f_22815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_22798 && iVar1 < Global_262145.f_22814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_22789 && iVar1 < Global_262145.f_22805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_22791 && iVar1 < Global_262145.f_22807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_22801 && iVar1 < Global_262145.f_22817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_22797 && iVar1 < Global_262145.f_22813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_22790 && iVar1 < Global_262145.f_22806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_22796 && iVar1 < Global_262145.f_22812)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_317()//Position - 0xE9AB
{
	return 0;
}

int func_318()//Position - 0xE9B4
{
	return 1;
}

int func_319()//Position - 0xE9BD
{
	return 1;
}

int func_320()//Position - 0xE9C6
{
	if (unk_0x21EA5D4DC72DE119(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_321()//Position - 0xE9DF
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

void func_322(int iParam0, int iParam1, bool bParam2)//Position - 0xEA9A
{
	if (Global_262145.f_9507)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1664862[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0x4B64A8D052027742() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_323(int iParam0)//Position - 0xEADA
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_332(iParam0);
		return func_331(iVar0);
	}
	return (func_324(iParam0, -1) * iParam0);
}

int func_324(int iParam0, int iParam1)//Position - 0xEB89
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_327(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_326(iParam1))
			{
				return 0;
			}
			else if (func_325(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 <= 117 && iParam1 > 0)
			{
				if (Global_1049531[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049531[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049531[iParam1 /*1951*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
	}
	return 0;
}

int func_325(int iParam0, int iParam1)//Position - 0xECE3
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

int func_326(int iParam0)//Position - 0xEDC0
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

int func_327(int iParam0, bool bParam1, bool bParam2)//Position - 0xEDEF
{
	if (bParam2)
	{
		return func_328(unk_0x9EB17624F44A8DA4(), 0);
	}
	if (bParam1)
	{
		if (func_328(unk_0x9EB17624F44A8DA4(), 0))
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

bool func_328(int iParam0, bool bParam1)//Position - 0xEECA
{
	if (Global_1595537 != func_11())
	{
		if (!func_330(Global_1595537))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x9EB17624F44A8DA4() != Global_1595537)
			{
				if (unk_0xC80D31E4B587871C(Global_2422736[Global_1595537 /*420*/].f_210, 24) || func_329(Global_1595537))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_210, 24);
}

int func_329(int iParam0)//Position - 0xEF36
{
	if (iParam0 != func_11())
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_210, 9);
	}
	return 0;
}

int func_330(int iParam0)//Position - 0xEF5C
{
	if (iParam0 != func_11())
	{
		return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 2);
	}
	return 0;
}

int func_331(int iParam0)//Position - 0xEF88
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		default:
	}
	return -1;
}

int func_332(int iParam0)//Position - 0xEFA3
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 1)
	{
		return iParam0;
	}
	return -1;
}

var func_333()//Position - 0xEFC9
{
	var uVar0;
	
	uVar0 = func_335();
	if (!func_107())
	{
		if (func_125() != func_11())
		{
			uVar0 = func_334(func_125()) + 1;
		}
	}
	return uVar0;
}

int func_334(int iParam0)//Position - 0xEFF8
{
	return Global_1627537[iParam0 /*532*/].f_11.f_19;
}

int func_335()//Position - 0xF00D
{
	return func_334(unk_0x9EB17624F44A8DA4()) + 1;
}

int func_336()//Position - 0xF01F
{
	return func_28(6096, -1, 0);
}

int func_337(int iParam0)//Position - 0xF030
{
	if (func_223(iParam0, 1))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_410;
	}
	return -1;
}

void func_338(int iParam0)//Position - 0xF054
{
	if (iParam0 == 0)
	{
	}
	unk_0xAEAF29A3BD6D6C8B(&Global_1668000);
	func_339();
}

void func_339()//Position - 0xF06E
{
	struct<43> Var0;
	
	Global_1668000 = { Var0 };
	Global_1668000.f_23 = 0;
	Global_1668000.f_24 = 0;
	Global_1668000.f_16 = 0;
}

bool func_340(int iParam0)//Position - 0xF097
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 12);
}

bool func_341(int iParam0)//Position - 0xF0B4
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 13);
}

int func_342(int iParam0)//Position - 0xF0D1
{
	if (iParam0 != func_11())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 12) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 13)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_343(int iParam0)//Position - 0xF132
{
	if (iParam0 != func_11())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 0) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 1)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_344(int iParam0)//Position - 0xF190
{
	if (iParam0 != func_11())
	{
		if (((((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 3) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 4)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 5)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 0)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 1)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_345(int iParam0, int iParam1)//Position - 0xF239
{
	if (iParam1 == func_11())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 0))
			{
				return 3;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 3))
			{
				return 2;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 6))
			{
				return 4;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 9))
			{
				return 1;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 12))
			{
				return 7;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 15))
			{
				return 5;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 18))
			{
				return 6;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 21))
			{
				return 0;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 1))
			{
				return 3;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 4))
			{
				return 2;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 7))
			{
				return 4;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 10))
			{
				return 1;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 13))
			{
				return 7;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 16))
			{
				return 5;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 19))
			{
				return 6;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 22))
			{
				return 0;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 2))
			{
				return 3;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 5))
			{
				return 2;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 8))
			{
				return 4;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 11))
			{
				return 1;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 14))
			{
				return 7;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 17))
			{
				return 5;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 20))
			{
				return 6;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 23))
			{
				return 0;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_346(int iParam0)//Position - 0xF58D
{
	if (iParam0 != func_11())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 6) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 7)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_347(int iParam0)//Position - 0xF5EC
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 8);
}

bool func_348(int iParam0)//Position - 0xF609
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 7);
}

bool func_349(int iParam0)//Position - 0xF625
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 9);
}

int func_350(bool bParam0)//Position - 0xF64F
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_351(int iParam0)//Position - 0xF661
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 11);
}

bool func_352(int iParam0)//Position - 0xF68B
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 10);
}

int func_353(int iParam0, int iParam1)//Position - 0xF6B5
{
	return func_28(func_354(iParam1), iParam0, 0);
}

int func_354(int iParam0)//Position - 0xF6CA
{
	switch (iParam0)
	{
		case 0:
			return 3881;
		
		case 1:
			return 3910;
		
		case 2:
			return 3914;
		
		case 3:
			return 3918;
		
		case 4:
			return 3922;
		
		case 5:
			return 5433;
		
		default:
	}
	return 3881;
}

int func_355()//Position - 0xF724
{
	int iVar0;
	
	if (func_121())
	{
		return 4;
	}
	else if (func_107())
	{
		if (func_295(unk_0x9EB17624F44A8DA4()))
		{
			return 8;
		}
		return 6;
	}
	if (func_50(1))
	{
		iVar0 = func_337(unk_0x9EB17624F44A8DA4());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_123(1))
	{
		if (func_295(func_125()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

void func_356(int iParam0)//Position - 0xF797
{
	if (iParam0 == 0)
	{
	}
	unk_0xB3B5EB2045CAF8EA(&Global_1667938);
	func_357();
}

void func_357()//Position - 0xF7B1
{
	struct<62> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Global_1667938 = { Var0 };
	Global_1667938.f_24 = 0;
	Global_1667938.f_25 = 0;
	Global_1667938.f_17 = 0;
}

void func_358(int iParam0)//Position - 0xF915
{
	if (iParam0 == 0)
	{
	}
	unk_0x5F25D506765D3ED6(&Global_1667885);
	func_359();
}

void func_359()//Position - 0xF92F
{
	struct<53> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1667885 = { Var0 };
	Global_1667885.f_29 = 0;
	Global_1667885.f_30 = 0;
	Global_1667885.f_17 = 0;
}

int func_360(int iParam0, int iParam1)//Position - 0xFA5D
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_268(iParam0, iParam1, 2);
	bVar1 = func_268(iParam0, iParam1, 1);
	bVar2 = func_268(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_361(int iParam0, int iParam1)//Position - 0xFB13
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (func_263(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_362(int iParam0, bool bParam1, bool bParam2)//Position - 0xFB72
{
	int iVar0;
	int iVar1;
	
	if (func_96(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17021;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17020;
		}
		else
		{
			iVar0 = Global_262145.f_17002;
		}
		iVar1 = 19;
	}
	else if (func_367(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_37(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17001;
			iVar1 = 20;
		}
	}
	else if (func_47(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17021;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17020;
		}
		else
		{
			iVar0 = Global_262145.f_17002;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0xF2CDA5A7C6ED93BE(func_366(func_125()), func_365(func_125()), func_370(), func_369(), iVar1, iVar0);
	}
	func_364(iVar0);
	func_363(iVar0);
	return iVar0;
}

void func_363(int iParam0)//Position - 0xFC65
{
	int iVar0;
	
	iVar0 = func_28(3951, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_449 = iVar0;
	func_25(3951, iVar0, -1, 1, 0);
}

void func_364(int iParam0)//Position - 0xFCB3
{
	int iVar0;
	
	iVar0 = unk_0x9EB17624F44A8DA4();
	Global_1627537[iVar0 /*532*/].f_11.f_448 = (Global_1627537[iVar0 /*532*/].f_11.f_448 + iParam0);
	if (Global_1627537[iVar0 /*532*/].f_11.f_448 < -9999)
	{
		Global_1627537[iVar0 /*532*/].f_11.f_448 = 9999;
	}
	else if (Global_1627537[iVar0 /*532*/].f_11.f_448 > 9999)
	{
		Global_1627537[iVar0 /*532*/].f_11.f_448 = 9999;
	}
}

int func_365(int iParam0)//Position - 0xFD2D
{
	if (iParam0 == func_11())
	{
		return -1;
	}
	return Global_1627537[iParam0 /*532*/].f_11.f_8[1];
}

int func_366(int iParam0)//Position - 0xFD52
{
	if (iParam0 == func_11())
	{
		return -1;
	}
	return Global_1627537[iParam0 /*532*/].f_11.f_8[0];
}

int func_367(int iParam0)//Position - 0xFD77
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_368(bool bParam0)//Position - 0xFD9D
{
	if (bParam0)
	{
		return 0;
	}
	if (func_64(unk_0x9EB17624F44A8DA4()) || func_75(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	return 0;
}

int func_369()//Position - 0xFDCC
{
	if (Global_1667867.f_3 != 0)
	{
		return Global_1667867.f_3;
	}
	return -1;
}

int func_370()//Position - 0xFDE8
{
	if (Global_1667867.f_2 != 0)
	{
		return Global_1667867.f_2;
	}
	return -1;
}

bool func_371(int iParam0, int iParam1)//Position - 0xFE04
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_4, iParam1);
}

void func_372(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)//Position - 0xFE1F
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<2> Var22;
	
	if (func_492(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_490() || iParam2 == 27)
	{
		if (func_442(iParam1, iParam2, uParam3, Global_1574123, 0, func_488()))
		{
			func_441(1);
			if ((!func_439() && !func_437()) || unk_0xC80D31E4B587871C(Global_2512808.f_4553, 1))
			{
				if (func_436())
				{
					func_434();
				}
				else
				{
					unk_0x73509F6FDA1DB386(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_433(1);
						Global_1574123 = 0;
						iVar19 = -1;
						if (Global_1574308 != 1)
						{
							func_432(iParam1);
							if (unk_0xC80D31E4B587871C(uParam3->f_33, 7))
							{
								unk_0x0EE72DB1CD8A3B86(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_5(unk_0xF6A72924028F588B(iVar17), 0, 1))
								{
									iVar3 = unk_0xF6A72924028F588B(iVar17);
									if (!func_192(iVar3, 0))
									{
										if ((func_431(iVar3) || Global_2422736[iVar3 /*420*/].f_251 != -1) || func_12(iVar3))
										{
											iVar9 = iVar3;
											if (func_108(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_430(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_429(unk_0x9EB17624F44A8DA4(), 0) && func_44(unk_0x9EB17624F44A8DA4()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_427())
							{
								if (func_5(unk_0xF6A72924028F588B(iVar17), 0, 1))
								{
									iVar3 = unk_0xF6A72924028F588B(iVar17);
								}
								else
								{
									iVar3 = func_11();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_426(iVar3) && func_422(iVar3, iParam2)) && func_5(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1595693[iVar9 /*680*/].f_211.f_6;
								Var6 = { func_417(iVar3) };
								if (iVar3 == unk_0x9EB17624F44A8DA4())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0xDE2D3B9654C31EB3(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_148(iVar3) };
								iVar5 = func_411(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0xF85532D53BDB3017(iVar5);
								}
								Global_1574123++;
								if ((uParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_22;
								}
								if ((uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_31;
								}
								if ((uParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_22 != -1f) || (uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_427())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_406(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_405(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_403(iVar3, 0);
								if (bVar2)
								{
									if (func_223(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_402(iParam5))
								{
									func_401(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_401(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								unk_0x872F1C1F8587CCC7(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0xF6A72924028F588B(iVar17);
							if (func_5(iVar3, 0, 1) && !unk_0xC80D31E4B587871C(iVar14, iVar3))
							{
								iVar3 = unk_0xF6A72924028F588B(iVar17);
							}
							else
							{
								iVar3 = func_11();
							}
							if (func_426(iVar3))
							{
								if (func_5(unk_0xF6A72924028F588B(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1595693[iVar9 /*680*/].f_211.f_6;
									Var6 = { func_417(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_148(iVar3) };
									iVar5 = func_411(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0xF85532D53BDB3017(iVar5);
									}
									Global_1574123++;
									iVar16 = func_403(iVar3, 1);
									if (bVar2)
									{
										if (func_223(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_385(iVar3, unk_0xDE2D3B9654C31EB3(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xC80D31E4B587871C(uParam3->f_33, 11))
						{
							func_382(uParam3, iParam1);
						}
						func_8(&(uParam3->f_21));
						func_381();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xC80D31E4B587871C(uParam3->f_33, 7))
						{
							func_380(uParam3, iParam1);
							func_379(iParam1, 0, 1);
							unk_0x872F1C1F8587CCC7(&(uParam3->f_33), 7);
						}
						func_380(uParam3, iParam1);
						if (!unk_0xC80D31E4B587871C(uParam3->f_33, 11))
						{
							unk_0x872F1C1F8587CCC7(&(uParam3->f_33), 11);
						}
						if (func_375(uParam3))
						{
							Global_1574308 = 1;
						}
						func_373(uParam3);
						if (Global_1574308 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574308 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x34D11AB5BA7922C2(*iParam1))
					{
						unk_0x5A66A86A47AC3B57(7);
						unk_0x0EB9853DF8BC0D87(*iParam1, 0,122f, 0,3f, 0,28f, 0,6f, 255, 255, 255, 255, 0);
						unk_0x5A66A86A47AC3B57(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_381();
			func_433(0);
			if (unk_0xC80D31E4B587871C(uParam3->f_33, 7))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam3->f_33), 7);
			}
			if (unk_0xC80D31E4B587871C(uParam3->f_33, 10))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x189EEBAACC5D380A();
}

void func_373(var uParam0)//Position - 0x10470
{
	if (!func_21(&(uParam0->f_21)))
	{
		func_20(&(uParam0->f_21), 0, 0);
	}
	else if (func_19(&(uParam0->f_21), 250, 0))
	{
		func_8(&(uParam0->f_21));
		func_374(0);
	}
}

void func_374(bool bParam0)//Position - 0x104AC
{
	if (bParam0)
	{
		if (Global_1574308 != 2)
		{
			Global_1574308 = 2;
		}
	}
	else
	{
		switch (Global_1574308)
		{
			case 0:
				Global_1574308 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_375(var uParam0)//Position - 0x104F2
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = unk_0xF6A72924028F588B(uParam0->f_37);
	if (iVar3 != func_11() && func_5(iVar3, 0, 1))
	{
		Var2 = { func_148(iVar3) };
		iVar1 = func_378(uParam0, uParam0->f_37);
		if (func_377(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x034854587B6BF3E9(&Var2))
					{
						if (unk_0xA72EA6C94174D289(&Var2))
						{
							iVar4 = 1;
							func_376(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xAE37702876F3FA4D(&Var2))
					{
						iVar4 = 1;
						func_376(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x034854587B6BF3E9(&Var2))
					{
						if (!unk_0xA72EA6C94174D289(&Var2))
						{
							iVar4 = 1;
							func_376(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_376(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x034854587B6BF3E9(&Var2))
					{
						if (!unk_0xAE37702876F3FA4D(&Var2))
						{
							iVar4 = 1;
							func_376(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xAE37702876F3FA4D(&Var2))
					{
						iVar4 = 1;
						func_376(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_376(var uParam0, int iParam1, int iParam2)//Position - 0x1061F
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_377(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x10631
{
	return unk_0xA024F2175B7F181A(&uParam0, 13);
}

var func_378(var uParam0, int iParam1)//Position - 0x10641
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_379(int iParam0, bool bParam1, int iParam2)//Position - 0x10651
{
	if (unk_0x008F3E3CC076EA0E(*iParam0, "COLLAPSE"))
	{
		unk_0x1869584A8A72FEDD(bParam1);
		unk_0x271AA5469AF471B3();
	}
	if (iParam2 == 1)
	{
		if (unk_0x008F3E3CC076EA0E(*iParam0, "DISPLAY_VIEW"))
		{
			unk_0x271AA5469AF471B3();
		}
	}
}

void func_380(var uParam0, int iParam1)//Position - 0x10689
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_33, 10))
	{
		unk_0x008F3E3CC076EA0E(*iParam1, "SET_HIGHLIGHT");
		unk_0xD07D5CD276368D36(uParam0->f_35);
		unk_0x271AA5469AF471B3();
		unk_0x872F1C1F8587CCC7(&(uParam0->f_33), 10);
	}
}

void func_381()//Position - 0x106C1
{
	if (Global_1574308 != 0)
	{
		Global_1574308 = 0;
	}
}

void func_382(var uParam0, int iParam1)//Position - 0x106D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar0);
		if (iVar2 != func_11())
		{
			if (func_5(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_384(uParam0->f_38[iVar0 /*2*/], 0);
					func_383(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1595693[iVar0 /*680*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_383(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x10749
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		if (unk_0x008F3E3CC076EA0E(*uParam0, "SET_ICON"))
		{
			unk_0xD07D5CD276368D36(iParam1);
			unk_0xD07D5CD276368D36(iParam2);
			if (iParam2 == 65)
			{
				unk_0xD07D5CD276368D36(iParam3);
			}
			unk_0x271AA5469AF471B3();
		}
	}
}

int func_384(int iParam0, bool bParam1)//Position - 0x10786
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_385(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x107BA
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_400() && iParam4 < func_399())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574125)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574308 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x008F3E3CC076EA0E(*iParam2, sVar1))
		{
			unk_0xD07D5CD276368D36(iParam4);
			if (unk_0xC80D31E4B587871C(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_398("");
			}
			else
			{
				unk_0xD07D5CD276368D36(iParam10);
			}
			func_398(sParam1);
			unk_0xD07D5CD276368D36(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_398("");
			}
			else
			{
				unk_0xD07D5CD276368D36(65);
			}
			unk_0xD07D5CD276368D36(-1);
			func_398("");
			if (uParam3->f_108 == 6)
			{
				func_398("");
			}
			else
			{
				func_398(&sParam5);
			}
			func_390(uParam3, iParam0);
			unk_0x81D71E37E95798C1(sParam9);
			unk_0x81D71E37E95798C1(sParam9);
			if (func_389(uParam3))
			{
				func_388("DPAD_FRIEND");
			}
			else if (func_387(uParam3))
			{
				func_388("DPAD_FRIEND");
			}
			else if (func_386(uParam3))
			{
				func_388("DPAD_CREW");
			}
			else
			{
				func_388("");
			}
			unk_0x271AA5469AF471B3();
		}
	}
}

bool func_386(var uParam0)//Position - 0x108E9
{
	return unk_0xC80D31E4B587871C(uParam0->f_33, 6);
}

bool func_387(var uParam0)//Position - 0x108FA
{
	return unk_0xC80D31E4B587871C(uParam0->f_33, 5);
}

void func_388(char* sParam0)//Position - 0x1090B
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

int func_389(var uParam0)//Position - 0x1091D
{
	if (func_387(uParam0) && func_386(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_390(var uParam0, int iParam1)//Position - 0x1093E
{
	if (func_397(iParam1))
	{
		unk_0xD07D5CD276368D36(121);
	}
	else if (func_394(iParam1))
	{
		unk_0xD07D5CD276368D36(122);
	}
	else if (((unk_0xC80D31E4B587871C(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xC80D31E4B587871C(Global_2422736[iParam1 /*420*/].f_419, 0))
	{
		unk_0xD07D5CD276368D36(123);
	}
	else
	{
		if (func_391())
		{
			uParam0->f_36 = 0;
		}
		unk_0x1869584A8A72FEDD(uParam0->f_36);
	}
}

int func_391()//Position - 0x109BF
{
	if (unk_0x4916190900E76373())
	{
		if (func_392() || func_212())
		{
			return 1;
		}
	}
	return 0;
}

int func_392()//Position - 0x109E4
{
	if (unk_0x4916190900E76373())
	{
		return func_212();
	}
	return func_393(Global_4456448.f_122309);
}

int func_393(int iParam0)//Position - 0x10A08
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

int func_394(int iParam0)//Position - 0x10A42
{
	if ((func_5(iParam0, 0, 1) && func_395()) && func_51(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_395()//Position - 0x10A6F
{
	if (func_77(unk_0x9EB17624F44A8DA4()) || func_396())
	{
		return 0;
	}
	return 1;
}

int func_396()//Position - 0x10A91
{
	switch (func_44(unk_0x9EB17624F44A8DA4()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_397(int iParam0)//Position - 0x10ACF
{
	if (func_391())
	{
		if (func_5(iParam0, 0, 1))
		{
			return func_108(iParam0);
		}
	}
	if ((func_5(iParam0, 0, 1) && func_395()) && func_41(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_398(char* sParam0)//Position - 0x10B17
{
	unk_0x8686005F83E832AE(sParam0);
}

int func_399()//Position - 0x10B25
{
	int iVar0;
	
	if (Global_1574125)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_400()//Position - 0x10B41
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574125)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_401(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x10B59
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_400() && iParam3 < func_399())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574125)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574308 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x34D11AB5BA7922C2(*iParam1))
		{
			if (unk_0x008F3E3CC076EA0E(*iParam1, sVar1))
			{
				unk_0xD07D5CD276368D36(iParam3);
				if (unk_0xC80D31E4B587871C(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_398("");
				}
				else
				{
					unk_0xD07D5CD276368D36(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xAB019B170BF1309C(sParam16))
				{
					func_388(sParam16);
				}
				else
				{
					func_398(&(uParam2->f_1));
				}
				unk_0xD07D5CD276368D36(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_398("");
				}
				else
				{
					unk_0xD07D5CD276368D36(65);
				}
				if (iParam12 == 1)
				{
					unk_0xD07D5CD276368D36(iVar0);
				}
				else
				{
					unk_0xD07D5CD276368D36(-1);
				}
				if (func_427())
				{
					func_398("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xAB019B170BF1309C(sParam16))
				{
					unk_0x7E099EB35339C80D("FM_AE_ONE_INT");
					unk_0xA6D2B267C377D7B2(sParam16);
					unk_0x6223D539BCD39E76(iParam17);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 5 && !unk_0xAB019B170BF1309C(sParam16))
				{
					unk_0x7E099EB35339C80D("FM_AE_ONE_INT");
					unk_0xA6D2B267C377D7B2(sParam16);
					unk_0x6223D539BCD39E76(iParam17);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 7 && !unk_0xAB019B170BF1309C(sParam16))
				{
					unk_0x7E099EB35339C80D("FM_AE_TWO_INT");
					unk_0xA6D2B267C377D7B2(sParam16);
					unk_0x6223D539BCD39E76(iParam17);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 8 && !unk_0xAB019B170BF1309C(&(uParam2->f_104)))
				{
					unk_0x7E099EB35339C80D("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x32AD2F36F6EF5A1F(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x6223D539BCD39E76(iParam10);
					}
					unk_0xA6D2B267C377D7B2(&(uParam2->f_104));
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x7E099EB35339C80D("FM_AE_CASH");
					unk_0xC4DA7D522991B465(iParam10, 1);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x7E099EB35339C80D("FM_AE_CASH");
						unk_0xC4DA7D522991B465(iParam10, 1);
						unk_0x9748595E4799A2CF();
					}
					else
					{
						unk_0x7E099EB35339C80D("FM_NG_CASH");
						unk_0xC4DA7D522991B465(iParam10, 1);
						unk_0x9748595E4799A2CF();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xAB019B170BF1309C(&(uParam2->f_104)))
					{
						func_388(&(uParam2->f_104));
					}
					else
					{
						func_398("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x7E099EB35339C80D("STRING");
					unk_0xFD1DB5DD208735A3(iParam14, 6);
					unk_0x9748595E4799A2CF();
				}
				else if (fParam13 != -1f)
				{
					unk_0x7E099EB35339C80D("NUMBER");
					unk_0x32AD2F36F6EF5A1F(fParam13, 1);
					unk_0x9748595E4799A2CF();
				}
				else if (iParam10 != -1)
				{
					unk_0xD07D5CD276368D36(iParam10);
				}
				else
				{
					func_398("");
				}
				if (uParam2->f_108 == 6)
				{
					func_398("");
				}
				else
				{
					func_398(&sParam4);
				}
				func_390(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xAB019B170BF1309C(sParam8))
				{
					func_398("");
					func_398("");
				}
				else
				{
					unk_0x81D71E37E95798C1(sParam8);
					unk_0x81D71E37E95798C1(sParam8);
				}
				if (func_389(uParam2))
				{
					func_388("DPAD_FRIEND");
				}
				else if (func_387(uParam2))
				{
					func_388("DPAD_FRIEND");
				}
				else if (func_386(uParam2))
				{
					func_388("DPAD_CREW");
				}
				else
				{
					func_388("");
				}
				unk_0x271AA5469AF471B3();
			}
		}
	}
}

int func_402(int iParam0)//Position - 0x10EBC
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_403(int iParam0, bool bParam1)//Position - 0x10EE0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_77(iParam0)) && !func_75(iParam0))
	{
		iVar0 = func_404();
	}
	iVar1 = func_209(iParam0);
	if (!iVar1 == -1)
	{
		return func_207(iVar1);
	}
	return iVar0;
}

int func_404()//Position - 0x10F2A
{
	return 21;
}

char* func_405(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x10F34
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x485A7F3B0AD1A79D())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x485A7F3B0AD1A79D())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_406(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x110C4
{
	if (func_410(iParam3))
	{
		*fParam1 = (func_407(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_402(iParam3))
	{
		*fParam1 = (func_407(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_407(int iParam0, int iParam1)//Position - 0x11114
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x485A7F3B0AD1A79D())
			{
				return system::to_float(iParam1);
			}
			else
			{
				return func_409(system::to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x485A7F3B0AD1A79D())
			{
				return system::to_float(iParam1);
			}
			else
			{
				return func_408(system::to_float(iParam1));
			}
			break;
	}
	return system::to_float(iParam1);
}

float func_408(float fParam0)//Position - 0x111B7
{
	return (fParam0 / 1,609344f);
}

float func_409(float fParam0)//Position - 0x111C7
{
	return (fParam0 / 0,3048f);
}

int func_410(int iParam0)//Position - 0x111D7
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_411(int iParam0)//Position - 0x11233
{
	int iVar0;
	
	iVar0 = func_414(iParam0);
	if (iVar0 == -1)
	{
		func_412(iParam0, 1);
		return 0;
	}
	Global_1369176[iVar0 /*5*/].f_4 = 1;
	return Global_1369176[iVar0 /*5*/].f_2;
}

void func_412(int iParam0, bool bParam1)//Position - 0x11269
{
	if (!func_5(iParam0, 0, 1))
	{
		return;
	}
	if (func_414(iParam0) != -1)
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
	if (func_413(iParam0))
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

int func_413(int iParam0)//Position - 0x112D5
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

int func_414(int iParam0)//Position - 0x11307
{
	int iVar0;
	
	if (!func_5(iParam0, 0, 1))
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
			func_415(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_415(int iParam0)//Position - 0x11386
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
	func_416(&(Global_1369176[iVar2 /*5*/]));
	Global_1369337 = (Global_1369337 - 1);
}

void func_416(var uParam0)//Position - 0x1143C
{
	*uParam0 = 0;
	uParam0->f_1 = func_11();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x3A711520F83BAE98())
	{
		uParam0->f_3 = unk_0xD1952A425B78FFC0();
	}
}

struct<4> func_417(int iParam0)//Position - 0x11469
{
	char cVar0[32];
	
	if (func_5(iParam0, 0, 1))
	{
		Global_2492157 = { func_148(iParam0) };
		if (unk_0x177281F5FA205A38())
		{
			if (func_377(Global_2492157))
			{
				if (!unk_0x1E81D00FCDFF4BBE(&Global_2492157))
				{
					return cVar0;
				}
			}
		}
		else if (!unk_0xCD032B200A8FAC1A(0))
		{
			return cVar0;
		}
		if (func_421(&Global_2492157))
		{
			Global_2492087 = { func_419(iParam0) };
			func_418(&Global_2492087, &cVar0);
		}
	}
	return cVar0;
}

void func_418(var uParam0, char* sParam1)//Position - 0x114EA
{
	unk_0x22889E844C3772CE(uParam0, 35, sParam1);
}

struct<35> func_419(int iParam0)//Position - 0x114FC
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_420(iParam0))
	{
		return Global_1312886[unk_0x9EB17624F44A8DA4() /*35*/];
	}
	Var0 = { func_148(iParam0) };
	unk_0x5CF21D71A8C4CFA6(&Var1, 35, &Var0);
	return Var1;
}

int func_420(int iParam0)//Position - 0x11538
{
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		return 1;
	}
	return 0;
}

int func_421(var uParam0)//Position - 0x1154E
{
	if (unk_0x5616476F69B90F14())
	{
		if (unk_0x15DBBAF9E2085C7A() && unk_0xA84F967541249268(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_422(int iParam0, int iParam1)//Position - 0x11574
{
	if (iParam1 == 26)
	{
		if ((func_76(iParam0) || func_425(iParam0)) || func_424(iParam0))
		{
			return 0;
		}
	}
	if (!func_423(iParam0))
	{
		return 0;
	}
	if ((!func_431(iParam0) && Global_2422736[iParam0 /*420*/].f_251 == -1) && !func_12(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_423(int iParam0)//Position - 0x115E3
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_142, 22);
}

bool func_424(int iParam0)//Position - 0x115FC
{
	if (func_76(iParam0))
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 8);
}

int func_425(int iParam0)//Position - 0x11622
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 10) || unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 9));
	}
	return 0;
}

int func_426(int iParam0)//Position - 0x11660
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (func_192(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC80D31E4B587871C(Global_1595693[iVar0 /*680*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_427()//Position - 0x116A5
{
	switch (func_44(unk_0x9EB17624F44A8DA4()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_428(unk_0x9EB17624F44A8DA4()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_75(unk_0x9EB17624F44A8DA4()))
	{
		switch (func_44(unk_0x9EB17624F44A8DA4()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	return 0;
}

int func_428(int iParam0)//Position - 0x117D0
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/];
	}
	return -1;
}

int func_429(int iParam0, int iParam1)//Position - 0x117EF
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 && func_36(Global_1627537[iParam0 /*532*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1)
	{
		if (func_36(Global_1627537[iParam0 /*532*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

void func_430(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x11855
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_5(unk_0xF6A72924028F588B(iVar0), 0, 1))
		{
			iVar1 = unk_0xF6A72924028F588B(iVar0);
			if (!func_192(iVar1, 0))
			{
				if ((func_431(iVar1) || Global_2422736[iVar1 /*420*/].f_251 != -1) || func_12(iVar1))
				{
					if (func_576(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_431(int iParam0)//Position - 0x118DF
{
	if (func_5(iParam0, 0, 1))
	{
		if (func_5(unk_0x9EB17624F44A8DA4(), 0, 1))
		{
			if (unk_0xEF6677A51D3956A4(iParam0, unk_0x9EB17624F44A8DA4()) || func_44(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_432(int iParam0)//Position - 0x11920
{
	if (unk_0x34D11AB5BA7922C2(*iParam0))
	{
		unk_0x008F3E3CC076EA0E(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xD07D5CD276368D36(0);
		unk_0x271AA5469AF471B3();
	}
}

void func_433(bool bParam0)//Position - 0x11947
{
	if (bParam0)
	{
		if (Global_1357527.f_2 == 0)
		{
			Global_1357527.f_2 = 1;
		}
	}
	else if (Global_1357527.f_2 == 1)
	{
		Global_1357527.f_2 = 0;
	}
}

void func_434()//Position - 0x11979
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 1))
	{
		if (func_78())
		{
			func_435();
		}
	}
}

void func_435()//Position - 0x1199B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2436181.f_2592[iVar0 /*79*/].f_2 != 0)
		{
			Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			unk_0x872F1C1F8587CCC7(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
		}
		iVar0++;
	}
}

int func_436()//Position - 0x119E6
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 0) && func_78())
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 1) && func_78())
	{
		return 1;
	}
	return 0;
}

int func_437()//Position - 0x11A27
{
	if (func_78())
	{
		if (func_438(Global_2436181.f_2592[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_438(int iParam0)//Position - 0x11A4E
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_439()//Position - 0x11ACE
{
	if (func_78())
	{
		if (func_440(Global_2436181.f_2592[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_440(int iParam0)//Position - 0x11AF5
{
	switch (iParam0)
	{
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
			return 1;
		
		default:
	}
	return 0;
}

void func_441(int iParam0)//Position - 0x11B87
{
	if (Global_1357527.f_1 != Global_1357527)
	{
		Global_1357527.f_1 = Global_1357527;
	}
	if (Global_1357527 != iParam0)
	{
		Global_1357527 = iParam0;
	}
}

int func_442(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x11BB5
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_487(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_486();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_485())
		{
			if (func_484() > 0 && Global_1574125)
			{
				unk_0x0467A3C1EFB3B8F0();
				unk_0xA3E8E2D0F73E92C5(fVar4);
				unk_0x553231E7FC3C570D(18);
				if (unk_0xF491DD47B88AA84E())
				{
					unk_0x873070BEE2844FE5();
				}
				unk_0x553231E7FC3C570D(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_469())
		{
			func_468(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4556, 26))
	{
		func_468(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_21(&(uParam2->f_19)))
	{
		if (func_484() == 1)
		{
			func_467(bVar3, iParam0, 0);
			func_20(&(uParam2->f_19), 0, 0);
			func_468(iParam0, uParam2, 0);
		}
	}
	if (func_21(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xF491DD47B88AA84E())
		{
			unk_0x873070BEE2844FE5();
		}
		unk_0x553231E7FC3C570D(10);
		if (func_19(&(uParam2->f_19), 10000, 0) || (func_484() == 0 && !bParam5))
		{
			func_468(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_466();
				if (iParam1 == 26 || iParam1 == 27)
				{
					unk_0x0467A3C1EFB3B8F0();
				}
				unk_0x553231E7FC3C570D(18);
			}
			if (!unk_0xC80D31E4B587871C(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_466();
					if (iParam1 == 26 || iParam1 == 27)
					{
						unk_0x0467A3C1EFB3B8F0();
					}
					unk_0x553231E7FC3C570D(18);
				}
				unk_0xA3E8E2D0F73E92C5(fVar4);
				if (func_467(bVar3, iParam0, 0))
				{
					func_432(iParam0);
					sVar1 = func_464(iParam1, &(Global_4456448.f_122316), bParam4);
					Var0 = { func_462(iParam1) };
					if (bParam4)
					{
						func_459(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_452(iParam0, func_456(uParam2), func_453(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						func_448(iParam0, func_450(uParam2), func_449(), -1);
					}
					else if (func_391())
					{
						uParam2->f_34 = Global_1574124;
						func_459(iParam0, sVar1, &Var0, 1, -1, Global_1574124, 1);
					}
					else if (bVar2)
					{
						uParam2->f_34 = Global_1574124;
						func_459(iParam0, sVar1, "", 0, -1, Global_1574124, 1);
					}
					else
					{
						iVar5 = func_443(iParam1);
						func_459(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					unk_0x872F1C1F8587CCC7(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xC80D31E4B587871C(uParam2->f_33, 0))
			{
				Global_1574123 = uParam3;
				Global_1574122 = 1;
				unk_0xA3E8E2D0F73E92C5(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574124)
					{
						unk_0x0EE72DB1CD8A3B86(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_443(int iParam0)//Position - 0x11E6B
{
	int iVar0;
	
	iVar0 = -1;
	if (func_447())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_446(unk_0x9EB17624F44A8DA4()))
			{
				iVar0 = 20;
			}
			if (func_445(unk_0x9EB17624F44A8DA4()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_444(unk_0x9EB17624F44A8DA4()))
	{
		iVar0 = 2;
	}
	if (func_171())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_444(int iParam0)//Position - 0x11F7B
{
	return Global_2422736[iParam0 /*420*/].f_130 == 4;
}

bool func_445(int iParam0)//Position - 0x11F90
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

bool func_446(int iParam0)//Position - 0x11FA5
{
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

bool func_447()//Position - 0x11FBA
{
	return Global_4456448.f_1 == 0;
}

void func_448(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x11FCA
{
	if (unk_0x34D11AB5BA7922C2(*iParam0))
	{
		unk_0x008F3E3CC076EA0E(*iParam0, "SET_TITLE");
		if (unk_0xAB019B170BF1309C(sParam2))
		{
			func_388(sParam1);
		}
		else
		{
			unk_0x7E099EB35339C80D("FM_AE_BRACKT");
			unk_0xA6D2B267C377D7B2(sParam1);
			unk_0xA6D2B267C377D7B2(sParam2);
			unk_0x9748595E4799A2CF();
		}
		func_388("");
		if (iParam3 != -1)
		{
			unk_0xD07D5CD276368D36(iParam3);
		}
		unk_0x271AA5469AF471B3();
	}
}

char* func_449()//Position - 0x1202A
{
	switch (func_44(unk_0x9EB17624F44A8DA4()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_450(var uParam0)//Position - 0x12083
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_44(unk_0x9EB17624F44A8DA4()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_39())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_50(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_50(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_451(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_176))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_451(int iParam0)//Position - 0x124B0
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

void func_452(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x124E2
{
	if (unk_0x34D11AB5BA7922C2(*iParam0))
	{
		unk_0x008F3E3CC076EA0E(*iParam0, "SET_TITLE");
		if (unk_0xAB019B170BF1309C(sParam2))
		{
			func_388(sParam1);
		}
		else if (func_428(unk_0x9EB17624F44A8DA4()) == 133)
		{
			unk_0x7E099EB35339C80D("FM_AE_BRACKT_C");
			unk_0xA6D2B267C377D7B2(sParam1);
			unk_0xA6D2B267C377D7B2(sParam2);
			unk_0x9748595E4799A2CF();
		}
		else
		{
			unk_0x7E099EB35339C80D("FM_AE_BRACKT");
			unk_0xA6D2B267C377D7B2(sParam1);
			unk_0xA6D2B267C377D7B2(sParam2);
			unk_0x9748595E4799A2CF();
		}
		func_388("");
		if (iParam3 != -1)
		{
			unk_0xD07D5CD276368D36(iParam3);
		}
		unk_0x271AA5469AF471B3();
	}
}

char* func_453(var uParam0)//Position - 0x1256A
{
	int iVar0;
	
	iVar0 = func_428(unk_0x9EB17624F44A8DA4());
	if (func_455())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_454())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_454()//Position - 0x1271A
{
	if (func_428(unk_0x9EB17624F44A8DA4()) == 133)
	{
		return Global_2512808.f_4777;
	}
	return -1;
}

bool func_455()//Position - 0x1273D
{
	return Global_1595566;
}

char* func_456(var uParam0)//Position - 0x12749
{
	int iVar0;
	
	iVar0 = func_428(unk_0x9EB17624F44A8DA4());
	if (func_455())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_458() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_458() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_454())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_457() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_457()//Position - 0x1293F
{
	return Global_2512808.f_4780;
}

int func_458()//Position - 0x1294E
{
	if (func_428(unk_0x9EB17624F44A8DA4()) == 132)
	{
		return Global_2512808.f_4775;
	}
	return -1;
}

void func_459(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x12971
{
	int iVar0;
	int iVar1;
	
	if (unk_0x34D11AB5BA7922C2(*iParam0))
	{
		unk_0x008F3E3CC076EA0E(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_398(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x7E099EB35339C80D(sParam1);
			unk_0x6223D539BCD39E76(iParam5);
			unk_0x9748595E4799A2CF();
		}
		else
		{
			func_388(sParam1);
		}
		if (func_485() && iParam6)
		{
			if (func_461())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x7E099EB35339C80D("LBD_DPD_CNT");
			unk_0x6223D539BCD39E76(iVar0);
			unk_0x6223D539BCD39E76(iVar1);
			unk_0x9748595E4799A2CF();
		}
		else
		{
			func_388(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xD07D5CD276368D36(iParam4);
			if (func_460(unk_0x9EB17624F44A8DA4()))
			{
				unk_0xD07D5CD276368D36(166);
			}
			else if (func_173())
			{
				unk_0xD07D5CD276368D36(220);
			}
		}
		unk_0x271AA5469AF471B3();
	}
}

int func_460(int iParam0)//Position - 0x12A32
{
	if (func_446(iParam0) || func_445(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_461()//Position - 0x12A54
{
	return Global_1574125;
}

struct<4> func_462(int iParam0)//Position - 0x12A60
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_463(unk_0x9EB17624F44A8DA4()) || func_444(unk_0x9EB17624F44A8DA4()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_33, 16);
			break;
	}
	if (func_391() && unk_0x4916190900E76373())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_33, 16);
	}
	return Var0;
}

bool func_463(int iParam0)//Position - 0x12AFC
{
	return Global_2422736[iParam0 /*420*/].f_130 == 5;
}

char* func_464(int iParam0, char* sParam1, bool bParam2)//Position - 0x12B11
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_391() || unk_0xAB019B170BF1309C(sParam1)))
	{
		uVar0 = func_465();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574326 == 0)
		{
			Global_1574326 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xAB019B170BF1309C(sParam1))
	{
		if (Global_1574326 == 1)
		{
			Global_1574326 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574326 == 0)
		{
			Global_1574326 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_465()//Position - 0x12C6F
{
	if (unk_0x6EFC1E00D9BE5932())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xA5DB684112875CA2())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x20D255A405234ABB())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x1AD32FD15A40AB57())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_466()//Position - 0x12CB3
{
	Global_36765 = 1;
}

bool func_467(bool bParam0, int iParam1, bool bParam2)//Position - 0x12CBF
{
	if (bParam0)
	{
		*iParam1 = unk_0xD704C81492296A37("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0xD704C81492296A37("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0xD704C81492296A37("mp_matchmaking_card");
	}
	return unk_0x34D11AB5BA7922C2(*iParam1);
}

void func_468(int iParam0, var uParam1, bool bParam2)//Position - 0x12CFF
{
	unk_0x0EE72DB1CD8A3B86(&(uParam1->f_33), 7);
	Global_1574123 = 0;
	func_381();
	Global_1574122 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_21(&(uParam1->f_19)))
		{
			func_8(&(uParam1->f_19));
		}
	}
	if (unk_0x34D11AB5BA7922C2(*iParam0))
	{
		unk_0xA68F7B004463AB6F(iParam0);
	}
	if (unk_0xC80D31E4B587871C(uParam1->f_33, 0))
	{
		unk_0x0EE72DB1CD8A3B86(&(uParam1->f_33), 0);
	}
	unk_0xA3E8E2D0F73E92C5(0f);
}

int func_469()//Position - 0x12D65
{
	if (func_483())
	{
		return 0;
	}
	if (func_482())
	{
		return 0;
	}
	if (!func_480())
	{
		return 0;
	}
	if (!func_478())
	{
		return 0;
	}
	if (func_477(8, -1))
	{
		return 0;
	}
	if (func_484() == 2)
	{
		return 0;
	}
	if (Global_2512808.f_4511)
	{
		return 0;
	}
	if (func_476())
	{
		return 0;
	}
	else if (!func_473(unk_0x9EB17624F44A8DA4(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_472(1) || func_470(1)) || Global_17162.f_124) || Global_17162)
	{
		return 0;
	}
	if (unk_0x0F30C1F1717A6437())
	{
		return 0;
	}
	if (func_218(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (Global_1655673)
	{
		return 0;
	}
	if (Global_1655677)
	{
		return 0;
	}
	if (func_181(0))
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 4))
	{
		return 0;
	}
	if (Global_1350989)
	{
		return 0;
	}
	if ((Global_1679652.f_705.f_5 || Global_1682463.f_705.f_5) || Global_1678695.f_705.f_5)
	{
		return 0;
	}
	return 1;
}

int func_470(bool bParam0)//Position - 0x12EAD
{
	if (unk_0x5C9167CD27AB7A44())
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (func_471(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xF2B58F79D29425B4(0, 25) || unk_0xF2B58F79D29425B4(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17162.f_130)
	{
		return 0;
	}
	if (unk_0xF2B58F79D29425B4(0, 19) || (!bParam0 && unk_0x5A632962B08A1872(0, 19)))
	{
		return 1;
	}
	if (unk_0xB9D80B12FE4456A5())
	{
		if (((unk_0xF2B58F79D29425B4(0, 166) || unk_0xF2B58F79D29425B4(0, 167)) || unk_0xF2B58F79D29425B4(0, 168)) || unk_0xF2B58F79D29425B4(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x5A632962B08A1872(0, 166) || unk_0x5A632962B08A1872(0, 167)) || unk_0x5A632962B08A1872(0, 168)) || unk_0x5A632962B08A1872(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_471(int iParam0)//Position - 0x12F98
{
	int iVar0;
	
	if (unk_0x43E3A4534ED4A79C())
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			unk_0x5AD8564EFD5BEC2E(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_472(bool bParam0)//Position - 0x12FF5
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

int func_473(int iParam0, bool bParam1)//Position - 0x1301E
{
	if (bParam1)
	{
		if (func_474(iParam0))
		{
			return 1;
		}
	}
	if (Global_1595693[iParam0 /*680*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_474(int iParam0)//Position - 0x1304A
{
	return func_475(iParam0);
}

bool func_475(int iParam0)//Position - 0x13058
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

bool func_476()//Position - 0x13072
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_196 != 0;
}

bool func_477(int iParam0, int iParam1)//Position - 0x13089
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

int func_478()//Position - 0x130C4
{
	if (func_479() == 0)
	{
		return 1;
	}
	return 0;
}

int func_479()//Position - 0x130D9
{
	return Global_1312466.f_18;
}

int func_480()//Position - 0x130E7
{
	if (func_481())
	{
		return 1;
	}
	if (unk_0x3E9CABD07B829173())
	{
		return 0;
	}
	if (unk_0x2D0EF1D268F33F25() || unk_0x9BB64DDCD9C7B076())
	{
		return 0;
	}
	if (unk_0x0C200A19C058463C())
	{
		return 0;
	}
	return 1;
}

bool func_481()//Position - 0x13126
{
	return Global_1312438;
}

bool func_482()//Position - 0x13132
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 5;
}

bool func_483()//Position - 0x13147
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

int func_484()//Position - 0x1315C
{
	return Global_1357530.f_68;
}

int func_485()//Position - 0x1316A
{
	if (Global_1574124 > 16)
	{
		return 1;
	}
	return 0;
}

float func_486()//Position - 0x13180
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0,6347182f;
	fVar1 = (1f - (1f - unk_0x85D2696CBA462F28()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_487(int iParam0)//Position - 0x131A4
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
			return 1;
			break;
	}
	return 0;
}

int func_488()//Position - 0x131CD
{
	if (func_489(unk_0x9EB17624F44A8DA4()))
	{
		return Global_1316732;
	}
	return 0;
}

int func_489(int iParam0)//Position - 0x131E8
{
	if (unk_0x3A711520F83BAE98())
	{
		if (func_192(iParam0, 0))
		{
			return unk_0xF593490E0BFB2E12(iParam0);
		}
	}
	return 0;
}

int func_490()//Position - 0x1320B
{
	if (func_488())
	{
		return 1;
	}
	if (func_424(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_455())
	{
		return 1;
	}
	if (func_77(unk_0x9EB17624F44A8DA4()))
	{
		switch (func_428(unk_0x9EB17624F44A8DA4()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_491(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_491(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_491(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_491(int iParam0)//Position - 0x132E6
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 4);
}

int func_492(int iParam0)//Position - 0x132FE
{
	if ((iParam0 == 27 && func_77(unk_0x9EB17624F44A8DA4())) && !func_75(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	if (iParam0 == 26)
	{
		if (func_45(unk_0x9EB17624F44A8DA4(), 0) && func_75(unk_0x9EB17624F44A8DA4()))
		{
			return 1;
		}
		if (func_62(unk_0x9EB17624F44A8DA4()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_493(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x13362
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_44(unk_0x9EB17624F44A8DA4());
	if (iParam2 || func_47(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1667885 = iVar0;
		if (func_96(iVar0))
		{
			Global_1667885.f_1 = 4;
		}
		else if (func_367(iVar0))
		{
			Global_1667885.f_1 = 5;
		}
		else if (func_37(iVar0, 0))
		{
			Global_1667885.f_1 = 2;
			if (func_91(iVar0))
			{
				Global_1667885.f_1 = 3;
			}
		}
		else
		{
			Global_1667885.f_1 = 1;
		}
		if (func_125() != func_11())
		{
			Global_1667885.f_4 = func_366(func_125());
			Global_1667885.f_5 = func_365(func_125());
		}
		if (func_29() != func_11())
		{
			func_124(func_29(), &(Global_1667885.f_6), &(Global_1667885.f_7));
		}
		Global_1667885.f_9 = unk_0xE3CCAFB1555348DF();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1667885.f_27 = 1;
			Global_1667885.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1667885.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1667885.f_40 = func_118(iParam1);
			Global_1667885.f_41 = func_514();
			Global_1667885.f_42 = func_271(unk_0x9EB17624F44A8DA4(), iParam1);
			Global_1667885.f_44 = func_361(unk_0x9EB17624F44A8DA4(), iParam1);
		}
	}
	else if (func_89(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1668000 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1668000 = iParam0 + 1;
		}
		else
		{
			Global_1668000 = func_513(unk_0x9EB17624F44A8DA4());
		}
		switch (iVar0)
		{
			case 225:
				if (func_512(unk_0x9EB17624F44A8DA4()) == 0)
				{
					Global_1668000.f_1 = 0;
				}
				else
				{
					Global_1668000.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1668000.f_1 = 2;
				break;
			
			case 227:
				Global_1668000.f_1 = 3;
				break;
		}
		Global_1668000.f_21 = 1;
		Global_1668000.f_22 = 1;
		if (func_125() != func_11())
		{
			Global_1668000.f_4 = func_366(func_125());
			Global_1668000.f_5 = func_365(func_125());
		}
		if (func_29() != func_11())
		{
			func_124(func_29(), &(Global_1668000.f_4), &(Global_1668000.f_5));
		}
		Global_1668000.f_8 = unk_0xE3CCAFB1555348DF();
		if (iParam0 != -1)
		{
			Global_1668000.f_20 = iParam0;
		}
	}
	else if (func_54(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1667938 = iVar0;
		Global_1667885.f_1 = 1;
		if (func_125() != func_11())
		{
			Global_1667938.f_4 = func_366(func_125());
			Global_1667938.f_5 = func_365(func_125());
		}
		if (func_29() != func_11())
		{
			func_124(func_29(), &(Global_1667938.f_6), &(Global_1667938.f_7));
		}
		Global_1667938.f_9 = unk_0xE3CCAFB1555348DF();
		if (iParam0 != -1)
		{
			Global_1667938.f_21 = iParam0;
		}
	}
	else if (func_88(iVar0))
	{
		Global_1668043 = iVar0;
		Global_1668043.f_1 = iParam0;
		Global_1668043.f_21 = 1;
		Global_1668043.f_22 = 1;
		if (func_125() != func_11())
		{
			Global_1668043.f_4 = func_366(func_125());
			Global_1668043.f_5 = func_365(func_125());
		}
		if (func_29() != func_11())
		{
			func_124(func_29(), &(Global_1668043.f_4), &(Global_1668043.f_5));
		}
		Global_1668043.f_8 = unk_0xE3CCAFB1555348DF();
		if (iParam0 != -1)
		{
			Global_1668043.f_20 = iParam0;
		}
		Global_1668043.f_27 = func_353(func_27(), 5);
		Global_1668043.f_28 = func_350(func_249(unk_0x9EB17624F44A8DA4()));
		Global_1668043.f_29 = func_28(6090, -1, 0);
		Global_1668043.f_30 = func_28(6086, -1, 0);
		Global_1668043.f_31 = func_28(6087, -1, 0);
		Global_1668043.f_32 = func_28(6089, -1, 0);
		Global_1668043.f_33 = func_28(6088, -1, 0);
		Global_1668043.f_34 = func_28(6091, -1, 0);
		Global_1668043.f_7 = func_355();
		Global_1668043.f_51 = func_350(bParam4);
	}
	else if (func_87(iVar0))
	{
		Global_1668096 = iVar0;
		Global_1668096.f_1 = iParam0;
		Global_1668096.f_21 = 1;
		Global_1668096.f_22 = 1;
		if (func_125() != func_11())
		{
			Global_1668096.f_4 = func_366(func_125());
			Global_1668096.f_5 = func_365(func_125());
		}
		if (func_29() != func_11())
		{
			func_124(func_29(), &(Global_1668096.f_4), &(Global_1668096.f_5));
		}
		Global_1668096.f_8 = unk_0xE3CCAFB1555348DF();
		if (iParam0 != -1)
		{
			Global_1668096.f_20 = iParam0;
		}
		Global_1668096.f_24 = func_28(6140, -1, 0);
		Global_1668096.f_25 = func_28(6145, -1, 0);
		Global_1668096.f_26 = func_28(6146, -1, 0);
		Global_1668096.f_27 = func_350((((func_309() || func_308()) || func_307()) || func_306(unk_0x9EB17624F44A8DA4())));
		Global_1668096.f_28 = func_28(6147, -1, 0);
		Global_1668096.f_29 = func_350(func_305());
		Global_1668096.f_31 = 0;
		Global_1668096.f_30 = 0;
		Global_1668096.f_32 = 0;
		Global_1668096.f_33 = 0;
		Global_1668096.f_34 = 0;
		Global_1668096.f_16 = 0;
	}
	else
	{
		if (func_125() != func_11())
		{
			Global_1667867 = func_366(func_125());
			Global_1667867.f_1 = func_365(func_125());
		}
		Global_1667867.f_5 = unk_0xE3CCAFB1555348DF();
		Global_1667867.f_13 = func_511();
		Global_1667867.f_15 = 0;
		if (func_123(1))
		{
			if (func_29() == func_125())
			{
				Global_1667867.f_15 = 1;
			}
		}
		if (func_510())
		{
			Global_1668000.f_28 = 1;
		}
		if (((func_509() || func_508()) || func_507()) || func_506())
		{
			Global_1668000.f_30 = 1;
		}
		if (func_504(func_505(-1881846085)))
		{
			Global_1668000.f_32 = 1;
		}
		if (func_497(func_503(joaat("caddy"))))
		{
			Global_1668000.f_31 = 1;
		}
		if (func_352(unk_0x9EB17624F44A8DA4()) || func_351(unk_0x9EB17624F44A8DA4()))
		{
			Global_1668000.f_29 = 1;
		}
		if (func_347(unk_0x9EB17624F44A8DA4()))
		{
			Global_1668000.f_33 = 1;
			Global_1668000.f_34 = 1;
		}
		if (func_348(unk_0x9EB17624F44A8DA4()))
		{
			Global_1668000.f_36 = 1;
		}
		if (func_345(0, unk_0x9EB17624F44A8DA4()) == 1)
		{
			Global_1668000.f_35 = 1;
		}
		if (func_496(unk_0x9EB17624F44A8DA4(), 3, &uVar1))
		{
			Global_1668000.f_37 = 1;
		}
		if (func_496(unk_0x9EB17624F44A8DA4(), 7, &uVar1))
		{
			Global_1668000.f_38 = 1;
		}
		if (func_495(unk_0x9EB17624F44A8DA4()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_494(unk_0x9EB17624F44A8DA4(), iVar2);
				if (func_268(unk_0x9EB17624F44A8DA4(), iVar3, 0))
				{
					Global_1668000.f_39 = 1;
				}
				if (func_268(unk_0x9EB17624F44A8DA4(), iVar3, 2))
				{
					Global_1668000.f_40 = 1;
				}
				if (func_268(unk_0x9EB17624F44A8DA4(), iVar3, 1))
				{
					Global_1668000.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_494(int iParam0, int iParam1)//Position - 0x13A26
{
	var uVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_263(Global_1595693[iParam0 /*680*/].f_266.f_160[iParam1 /*12*/]))
	{
		uVar0 = Global_1595693[iParam0 /*680*/].f_266.f_160[iParam1 /*12*/];
	}
	return uVar0;
}

int func_495(int iParam0)//Position - 0x13A7F
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_496(int iParam0, int iParam1, var uParam2)//Position - 0x13AC1
{
	int iVar0;
	
	if (iParam0 != func_11())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_345(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_497(int iParam0)//Position - 0x13AFB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_502(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_323(11));
		func_322(iVar1, &iVar0, 1);
		iVar2 = func_502(func_499(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_28(func_498(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_498(int iParam0, int iParam1)//Position - 0x13B77
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1626;
				
				case 1:
					return 1633;
				
				case 2:
					return 1640;
				
				case 3:
					return 1647;
				
				case 4:
					return 1654;
				
				case 5:
					return 1661;
				
				case 6:
					return 1668;
				
				case 7:
					return 1675;
				
				case 8:
					return 1682;
				
				case 9:
					return 1689;
				
				case 10:
					return 1696;
				
				case 11:
					return 1702;
				
				case 12:
					return 1708;
				
				case 13:
					return 1714;
				
				case 14:
					return 1792;
				
				case 15:
					return 1799;
				
				case 16:
					return 1806;
				
				case 17:
					return 1813;
				
				case 18:
					return 1820;
				
				case 19:
					return 1827;
				
				case 20:
					return 1834;
				
				case 21:
					return 1841;
				
				case 22:
					return 1848;
				
				case 23:
					return 1855;
				
				case 24:
					return 1861;
				
				case 25:
					return 1867;
				
				case 26:
					return 2162;
				
				case 27:
					return 2169;
				
				case 28:
					return 2176;
				
				case 29:
					return 2183;
				
				case 30:
					return 2190;
				
				case 31:
					return 2197;
				
				case 32:
					return 2204;
				
				case 33:
					return 2211;
				
				case 34:
					return 2218;
				
				case 35:
					return 2225;
				
				case 36:
					return 2232;
				
				case 37:
					return 2238;
				
				case 38:
					return 2244;
				
				case 39:
					return 2817;
				
				case 40:
					return 2824;
				
				case 41:
					return 2831;
				
				case 42:
					return 2838;
				
				case 43:
					return 2845;
				
				case 44:
					return 2852;
				
				case 45:
					return 2859;
				
				case 46:
					return 2866;
				
				case 47:
					return 2873;
				
				case 48:
					return 2880;
				
				case 49:
					return 2887;
				
				case 50:
					return 2893;
				
				case 51:
					return 2899;
				
				case 52:
					return 2941;
				
				case 53:
					return 2948;
				
				case 54:
					return 2955;
				
				case 55:
					return 2962;
				
				case 56:
					return 2969;
				
				case 57:
					return 2976;
				
				case 58:
					return 2983;
				
				case 59:
					return 2990;
				
				case 60:
					return 2997;
				
				case 61:
					return 3004;
				
				case 62:
					return 3011;
				
				case 63:
					return 3017;
				
				case 64:
					return 3023;
				
				case 65:
					return 3224;
				
				case 66:
					return 3232;
				
				case 67:
					return 3240;
				
				case 68:
					return 3248;
				
				case 69:
					return 3256;
				
				case 70:
					return 3264;
				
				case 71:
					return 3272;
				
				case 72:
					return 3280;
				
				case 73:
					return 3288;
				
				case 74:
					return 3296;
				
				case 75:
					return 3304;
				
				case 76:
					return 3312;
				
				case 77:
					return 3320;
				
				case 78:
					return 3328;
				
				case 79:
					return 3336;
				
				case 80:
					return 3344;
				
				case 81:
					return 3352;
				
				case 82:
					return 3360;
				
				case 83:
					return 3368;
				
				case 84:
					return 3376;
				
				case 85:
					return 3384;
				
				case 86:
					return 3391;
				
				case 87:
					return 3398;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4014;
				
				case 89:
					return 4022;
				
				case 90:
					return 4030;
				
				case 91:
					return 4038;
				
				case 92:
					return 4046;
				
				case 93:
					return 4054;
				
				case 94:
					return 4062;
				
				case 95:
					return 4070;
				
				case 96:
					return 4078;
				
				case 97:
					return 4086;
				
				case 98:
					return 4094;
				
				case 99:
					return 4102;
				
				case 100:
					return 4110;
				
				case 101:
					return 4118;
				
				case 102:
					return 4126;
				
				case 103:
					return 4134;
				
				case 104:
					return 4142;
				
				case 105:
					return 4150;
				
				case 106:
					return 4158;
				
				case 107:
					return 4166;
				
				case 108:
					return 4174;
				
				case 109:
					return 4182;
				
				case 110:
					return 4190;
				
				case 111:
					return 4198;
				
				case 112:
					return 4206;
				
				case 113:
					return 4214;
				
				case 114:
					return 4222;
				
				case 115:
					return 4230;
				
				case 116:
					return 4238;
				
				case 117:
					return 4246;
				
				case 118:
					return 4254;
				
				case 119:
					return 4262;
				
				case 120:
					return 4270;
				
				case 121:
					return 4278;
				
				case 122:
					return 4286;
				
				case 123:
					return 4294;
				
				case 124:
					return 4302;
				
				case 125:
					return 4310;
				
				case 126:
					return 4318;
				
				case 127:
					return 4326;
				
				case 128:
					return 4334;
				
				case 129:
					return 4342;
				
				case 130:
					return 4350;
				
				case 131:
					return 4358;
				
				case 132:
					return 4366;
				
				case 133:
					return 4374;
				
				case 134:
					return 4382;
				
				case 135:
					return 4390;
				
				case 136:
					return 4398;
				
				case 137:
					return 4406;
				
				case 138:
					return 4414;
				
				case 139:
					return 4422;
				
				case 140:
					return 4430;
				
				case 141:
					return 4438;
				
				case 142:
					return 4446;
				
				case 143:
					return 4454;
				
				case 144:
					return 4462;
				
				case 145:
					return 4470;
				
				case 146:
					return 4478;
				
				case 147:
					return 4486;
				
				case 148:
					return 4494;
				
				case 149:
					return 4502;
				
				case 150:
					return 4510;
				
				case 151:
					return 4518;
				
				case 152:
					return 4526;
				
				case 153:
					return 4534;
				
				case 154:
					return 4542;
				
				case 155:
					return 4550;
				
				case 156:
					return 4558;
				
				case 157:
					return 4566;
				
				case 158:
					return 5459;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5908;
				
				case 160:
					return 5915;
				
				case 161:
					return 5922;
				
				case 162:
					return 5929;
				
				case 163:
					return 5936;
				
				case 164:
					return 5943;
				
				case 165:
					return 5950;
				
				case 166:
					return 5957;
				
				case 167:
					return 5964;
				
				case 168:
					return 5971;
				
				case 169:
					return 5978;
				
				case 170:
					return 5985;
				
				case 171:
					return 5992;
				
				case 172:
					return 5999;
				
				case 173:
					return 6006;
				
				case 174:
					return 6013;
				
				case 175:
					return 6020;
				
				case 176:
					return 6027;
				
				case 177:
					return 6034;
				
				case 178:
					return 6041;
				
				case 179:
					return 6048;
				
				case 180:
					return 6055;
				
				case 181:
					return 6062;
				
				case 182:
					return 6069;
				
				case 183:
					return 6076;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6153;
				
				case 185:
					return 6160;
				
				case 186:
					return 6167;
				
				case 187:
					return 6174;
				
				case 188:
					return 6181;
				
				case 189:
					return 6188;
				
				case 190:
					return 6195;
				
				case 191:
					return 6202;
				
				case 192:
					return 6209;
				
				case 193:
					return 6216;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1627;
				
				case 1:
					return 1634;
				
				case 2:
					return 1641;
				
				case 3:
					return 1648;
				
				case 4:
					return 1655;
				
				case 5:
					return 1662;
				
				case 6:
					return 1669;
				
				case 7:
					return 1676;
				
				case 8:
					return 1683;
				
				case 9:
					return 1690;
				
				case 10:
					return 1697;
				
				case 11:
					return 1703;
				
				case 12:
					return 1709;
				
				case 13:
					return 1715;
				
				case 14:
					return 1793;
				
				case 15:
					return 1800;
				
				case 16:
					return 1807;
				
				case 17:
					return 1814;
				
				case 18:
					return 1821;
				
				case 19:
					return 1828;
				
				case 20:
					return 1835;
				
				case 21:
					return 1842;
				
				case 22:
					return 1849;
				
				case 23:
					return 1856;
				
				case 24:
					return 1862;
				
				case 25:
					return 1868;
				
				case 26:
					return 2163;
				
				case 27:
					return 2170;
				
				case 28:
					return 2177;
				
				case 29:
					return 2184;
				
				case 30:
					return 2191;
				
				case 31:
					return 2198;
				
				case 32:
					return 2205;
				
				case 33:
					return 2212;
				
				case 34:
					return 2219;
				
				case 35:
					return 2226;
				
				case 36:
					return 2233;
				
				case 37:
					return 2239;
				
				case 38:
					return 2245;
				
				case 39:
					return 2818;
				
				case 40:
					return 2825;
				
				case 41:
					return 2832;
				
				case 42:
					return 2839;
				
				case 43:
					return 2846;
				
				case 44:
					return 2853;
				
				case 45:
					return 2860;
				
				case 46:
					return 2867;
				
				case 47:
					return 2874;
				
				case 48:
					return 2881;
				
				case 49:
					return 2888;
				
				case 50:
					return 2894;
				
				case 51:
					return 2900;
				
				case 52:
					return 2942;
				
				case 53:
					return 2949;
				
				case 54:
					return 2956;
				
				case 55:
					return 2963;
				
				case 56:
					return 2970;
				
				case 57:
					return 2977;
				
				case 58:
					return 2984;
				
				case 59:
					return 2991;
				
				case 60:
					return 2998;
				
				case 61:
					return 3005;
				
				case 62:
					return 3012;
				
				case 63:
					return 3018;
				
				case 64:
					return 3024;
				
				case 65:
					return 3225;
				
				case 66:
					return 3233;
				
				case 67:
					return 3241;
				
				case 68:
					return 3249;
				
				case 69:
					return 3257;
				
				case 70:
					return 3265;
				
				case 71:
					return 3273;
				
				case 72:
					return 3281;
				
				case 73:
					return 3289;
				
				case 74:
					return 3297;
				
				case 75:
					return 3305;
				
				case 76:
					return 3313;
				
				case 77:
					return 3321;
				
				case 78:
					return 3329;
				
				case 79:
					return 3337;
				
				case 80:
					return 3345;
				
				case 81:
					return 3353;
				
				case 82:
					return 3361;
				
				case 83:
					return 3369;
				
				case 84:
					return 3377;
				
				case 85:
					return 3385;
				
				case 86:
					return 3392;
				
				case 87:
					return 3399;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4015;
				
				case 89:
					return 4023;
				
				case 90:
					return 4031;
				
				case 91:
					return 4039;
				
				case 92:
					return 4047;
				
				case 93:
					return 4055;
				
				case 94:
					return 4063;
				
				case 95:
					return 4071;
				
				case 96:
					return 4079;
				
				case 97:
					return 4087;
				
				case 98:
					return 4095;
				
				case 99:
					return 4103;
				
				case 100:
					return 4111;
				
				case 101:
					return 4119;
				
				case 102:
					return 4127;
				
				case 103:
					return 4135;
				
				case 104:
					return 4143;
				
				case 105:
					return 4151;
				
				case 106:
					return 4159;
				
				case 107:
					return 4167;
				
				case 108:
					return 4175;
				
				case 109:
					return 4183;
				
				case 110:
					return 4191;
				
				case 111:
					return 4199;
				
				case 112:
					return 4207;
				
				case 113:
					return 4215;
				
				case 114:
					return 4223;
				
				case 115:
					return 4231;
				
				case 116:
					return 4239;
				
				case 117:
					return 4247;
				
				case 118:
					return 4255;
				
				case 119:
					return 4263;
				
				case 120:
					return 4271;
				
				case 121:
					return 4279;
				
				case 122:
					return 4287;
				
				case 123:
					return 4295;
				
				case 124:
					return 4303;
				
				case 125:
					return 4311;
				
				case 126:
					return 4319;
				
				case 127:
					return 4327;
				
				case 128:
					return 4335;
				
				case 129:
					return 4343;
				
				case 130:
					return 4351;
				
				case 131:
					return 4359;
				
				case 132:
					return 4367;
				
				case 133:
					return 4375;
				
				case 134:
					return 4383;
				
				case 135:
					return 4391;
				
				case 136:
					return 4399;
				
				case 137:
					return 4407;
				
				case 138:
					return 4415;
				
				case 139:
					return 4423;
				
				case 140:
					return 4431;
				
				case 141:
					return 4439;
				
				case 142:
					return 4447;
				
				case 143:
					return 4455;
				
				case 144:
					return 4463;
				
				case 145:
					return 4471;
				
				case 146:
					return 4479;
				
				case 147:
					return 4487;
				
				case 148:
					return 4495;
				
				case 149:
					return 4503;
				
				case 150:
					return 4511;
				
				case 151:
					return 4519;
				
				case 152:
					return 4527;
				
				case 153:
					return 4535;
				
				case 154:
					return 4543;
				
				case 155:
					return 4551;
				
				case 156:
					return 4559;
				
				case 157:
					return 4567;
				
				case 158:
					return 5460;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5909;
				
				case 160:
					return 5916;
				
				case 161:
					return 5923;
				
				case 162:
					return 5930;
				
				case 163:
					return 5937;
				
				case 164:
					return 5944;
				
				case 165:
					return 5951;
				
				case 166:
					return 5958;
				
				case 167:
					return 5965;
				
				case 168:
					return 5972;
				
				case 169:
					return 5979;
				
				case 170:
					return 5986;
				
				case 171:
					return 5993;
				
				case 172:
					return 6000;
				
				case 173:
					return 6007;
				
				case 174:
					return 6014;
				
				case 175:
					return 6021;
				
				case 176:
					return 6028;
				
				case 177:
					return 6035;
				
				case 178:
					return 6042;
				
				case 179:
					return 6049;
				
				case 180:
					return 6056;
				
				case 181:
					return 6063;
				
				case 182:
					return 6070;
				
				case 183:
					return 6077;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6154;
				
				case 185:
					return 6161;
				
				case 186:
					return 6168;
				
				case 187:
					return 6175;
				
				case 188:
					return 6182;
				
				case 189:
					return 6189;
				
				case 190:
					return 6196;
				
				case 191:
					return 6203;
				
				case 192:
					return 6210;
				
				case 193:
					return 6217;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1628;
				
				case 1:
					return 1635;
				
				case 2:
					return 1642;
				
				case 3:
					return 1649;
				
				case 4:
					return 1656;
				
				case 5:
					return 1663;
				
				case 6:
					return 1670;
				
				case 7:
					return 1677;
				
				case 8:
					return 1684;
				
				case 9:
					return 1691;
				
				case 10:
					return 1698;
				
				case 11:
					return 1704;
				
				case 12:
					return 1710;
				
				case 13:
					return 1716;
				
				case 14:
					return 1794;
				
				case 15:
					return 1801;
				
				case 16:
					return 1808;
				
				case 17:
					return 1815;
				
				case 18:
					return 1822;
				
				case 19:
					return 1829;
				
				case 20:
					return 1836;
				
				case 21:
					return 1843;
				
				case 22:
					return 1850;
				
				case 23:
					return 1857;
				
				case 24:
					return 1863;
				
				case 25:
					return 1869;
				
				case 26:
					return 2164;
				
				case 27:
					return 2171;
				
				case 28:
					return 2178;
				
				case 29:
					return 2185;
				
				case 30:
					return 2192;
				
				case 31:
					return 2199;
				
				case 32:
					return 2206;
				
				case 33:
					return 2213;
				
				case 34:
					return 2220;
				
				case 35:
					return 2227;
				
				case 36:
					return 2234;
				
				case 37:
					return 2240;
				
				case 38:
					return 2246;
				
				case 39:
					return 2819;
				
				case 40:
					return 2826;
				
				case 41:
					return 2833;
				
				case 42:
					return 2840;
				
				case 43:
					return 2847;
				
				case 44:
					return 2854;
				
				case 45:
					return 2861;
				
				case 46:
					return 2868;
				
				case 47:
					return 2875;
				
				case 48:
					return 2882;
				
				case 49:
					return 2889;
				
				case 50:
					return 2895;
				
				case 51:
					return 2901;
				
				case 52:
					return 2943;
				
				case 53:
					return 2950;
				
				case 54:
					return 2957;
				
				case 55:
					return 2964;
				
				case 56:
					return 2971;
				
				case 57:
					return 2978;
				
				case 58:
					return 2985;
				
				case 59:
					return 2992;
				
				case 60:
					return 2999;
				
				case 61:
					return 3006;
				
				case 62:
					return 3013;
				
				case 63:
					return 3019;
				
				case 64:
					return 3025;
				
				case 65:
					return 3226;
				
				case 66:
					return 3234;
				
				case 67:
					return 3242;
				
				case 68:
					return 3250;
				
				case 69:
					return 3258;
				
				case 70:
					return 3266;
				
				case 71:
					return 3274;
				
				case 72:
					return 3282;
				
				case 73:
					return 3290;
				
				case 74:
					return 3298;
				
				case 75:
					return 3306;
				
				case 76:
					return 3314;
				
				case 77:
					return 3322;
				
				case 78:
					return 3330;
				
				case 79:
					return 3338;
				
				case 80:
					return 3346;
				
				case 81:
					return 3354;
				
				case 82:
					return 3362;
				
				case 83:
					return 3370;
				
				case 84:
					return 3378;
				
				case 85:
					return 3386;
				
				case 86:
					return 3393;
				
				case 87:
					return 3400;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4016;
				
				case 89:
					return 4024;
				
				case 90:
					return 4032;
				
				case 91:
					return 4040;
				
				case 92:
					return 4048;
				
				case 93:
					return 4056;
				
				case 94:
					return 4064;
				
				case 95:
					return 4072;
				
				case 96:
					return 4080;
				
				case 97:
					return 4088;
				
				case 98:
					return 4096;
				
				case 99:
					return 4104;
				
				case 100:
					return 4112;
				
				case 101:
					return 4120;
				
				case 102:
					return 4128;
				
				case 103:
					return 4136;
				
				case 104:
					return 4144;
				
				case 105:
					return 4152;
				
				case 106:
					return 4160;
				
				case 107:
					return 4168;
				
				case 108:
					return 4176;
				
				case 109:
					return 4184;
				
				case 110:
					return 4192;
				
				case 111:
					return 4200;
				
				case 112:
					return 4208;
				
				case 113:
					return 4216;
				
				case 114:
					return 4224;
				
				case 115:
					return 4232;
				
				case 116:
					return 4240;
				
				case 117:
					return 4248;
				
				case 118:
					return 4256;
				
				case 119:
					return 4264;
				
				case 120:
					return 4272;
				
				case 121:
					return 4280;
				
				case 122:
					return 4288;
				
				case 123:
					return 4296;
				
				case 124:
					return 4304;
				
				case 125:
					return 4312;
				
				case 126:
					return 4320;
				
				case 127:
					return 4328;
				
				case 128:
					return 4336;
				
				case 129:
					return 4344;
				
				case 130:
					return 4352;
				
				case 131:
					return 4360;
				
				case 132:
					return 4368;
				
				case 133:
					return 4376;
				
				case 134:
					return 4384;
				
				case 135:
					return 4392;
				
				case 136:
					return 4400;
				
				case 137:
					return 4408;
				
				case 138:
					return 4416;
				
				case 139:
					return 4424;
				
				case 140:
					return 4432;
				
				case 141:
					return 4440;
				
				case 142:
					return 4448;
				
				case 143:
					return 4456;
				
				case 144:
					return 4464;
				
				case 145:
					return 4472;
				
				case 146:
					return 4480;
				
				case 147:
					return 4488;
				
				case 148:
					return 4496;
				
				case 149:
					return 4504;
				
				case 150:
					return 4512;
				
				case 151:
					return 4520;
				
				case 152:
					return 4528;
				
				case 153:
					return 4536;
				
				case 154:
					return 4544;
				
				case 155:
					return 4552;
				
				case 156:
					return 4560;
				
				case 157:
					return 4568;
				
				case 158:
					return 5461;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5910;
				
				case 160:
					return 5917;
				
				case 161:
					return 5924;
				
				case 162:
					return 5931;
				
				case 163:
					return 5938;
				
				case 164:
					return 5945;
				
				case 165:
					return 5952;
				
				case 166:
					return 5959;
				
				case 167:
					return 5966;
				
				case 168:
					return 5973;
				
				case 169:
					return 5980;
				
				case 170:
					return 5987;
				
				case 171:
					return 5994;
				
				case 172:
					return 6001;
				
				case 173:
					return 6008;
				
				case 174:
					return 6015;
				
				case 175:
					return 6022;
				
				case 176:
					return 6029;
				
				case 177:
					return 6036;
				
				case 178:
					return 6043;
				
				case 179:
					return 6050;
				
				case 180:
					return 6057;
				
				case 181:
					return 6064;
				
				case 182:
					return 6071;
				
				case 183:
					return 6078;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6155;
				
				case 185:
					return 6162;
				
				case 186:
					return 6169;
				
				case 187:
					return 6176;
				
				case 188:
					return 6183;
				
				case 189:
					return 6190;
				
				case 190:
					return 6197;
				
				case 191:
					return 6204;
				
				case 192:
					return 6211;
				
				case 193:
					return 6218;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2820;
				
				case 40:
					return 2827;
				
				case 41:
					return 2834;
				
				case 42:
					return 2841;
				
				case 43:
					return 2848;
				
				case 44:
					return 2855;
				
				case 45:
					return 2862;
				
				case 46:
					return 2869;
				
				case 47:
					return 2876;
				
				case 48:
					return 2883;
				
				case 49:
					return 2890;
				
				case 50:
					return 2896;
				
				case 51:
					return 2902;
				
				case 52:
					return 2944;
				
				case 53:
					return 2951;
				
				case 54:
					return 2958;
				
				case 55:
					return 2965;
				
				case 56:
					return 2972;
				
				case 57:
					return 2979;
				
				case 58:
					return 2986;
				
				case 59:
					return 2993;
				
				case 60:
					return 3000;
				
				case 61:
					return 3007;
				
				case 62:
					return 3014;
				
				case 63:
					return 3020;
				
				case 64:
					return 3026;
				
				case 65:
					return 3227;
				
				case 66:
					return 3235;
				
				case 67:
					return 3243;
				
				case 68:
					return 3251;
				
				case 69:
					return 3259;
				
				case 70:
					return 3267;
				
				case 71:
					return 3275;
				
				case 72:
					return 3283;
				
				case 73:
					return 3291;
				
				case 74:
					return 3299;
				
				case 75:
					return 3307;
				
				case 76:
					return 3315;
				
				case 77:
					return 3323;
				
				case 78:
					return 3331;
				
				case 79:
					return 3339;
				
				case 80:
					return 3347;
				
				case 81:
					return 3355;
				
				case 82:
					return 3363;
				
				case 83:
					return 3371;
				
				case 84:
					return 3379;
				
				case 85:
					return 3387;
				
				case 86:
					return 3394;
				
				case 87:
					return 3401;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4017;
				
				case 89:
					return 4025;
				
				case 90:
					return 4033;
				
				case 91:
					return 4041;
				
				case 92:
					return 4049;
				
				case 93:
					return 4057;
				
				case 94:
					return 4065;
				
				case 95:
					return 4073;
				
				case 96:
					return 4081;
				
				case 97:
					return 4089;
				
				case 98:
					return 4097;
				
				case 99:
					return 4105;
				
				case 100:
					return 4113;
				
				case 101:
					return 4121;
				
				case 102:
					return 4129;
				
				case 103:
					return 4137;
				
				case 104:
					return 4145;
				
				case 105:
					return 4153;
				
				case 106:
					return 4161;
				
				case 107:
					return 4169;
				
				case 108:
					return 4177;
				
				case 109:
					return 4185;
				
				case 110:
					return 4193;
				
				case 111:
					return 4201;
				
				case 112:
					return 4209;
				
				case 113:
					return 4217;
				
				case 114:
					return 4225;
				
				case 115:
					return 4233;
				
				case 116:
					return 4241;
				
				case 117:
					return 4249;
				
				case 118:
					return 4257;
				
				case 119:
					return 4265;
				
				case 120:
					return 4273;
				
				case 121:
					return 4281;
				
				case 122:
					return 4289;
				
				case 123:
					return 4297;
				
				case 124:
					return 4305;
				
				case 125:
					return 4313;
				
				case 126:
					return 4321;
				
				case 127:
					return 4329;
				
				case 128:
					return 4337;
				
				case 129:
					return 4345;
				
				case 130:
					return 4353;
				
				case 131:
					return 4361;
				
				case 132:
					return 4369;
				
				case 133:
					return 4377;
				
				case 134:
					return 4385;
				
				case 135:
					return 4393;
				
				case 136:
					return 4401;
				
				case 137:
					return 4409;
				
				case 138:
					return 4417;
				
				case 139:
					return 4425;
				
				case 140:
					return 4433;
				
				case 141:
					return 4441;
				
				case 142:
					return 4449;
				
				case 143:
					return 4457;
				
				case 144:
					return 4465;
				
				case 145:
					return 4473;
				
				case 146:
					return 4481;
				
				case 147:
					return 4489;
				
				case 148:
					return 4497;
				
				case 149:
					return 4505;
				
				case 150:
					return 4513;
				
				case 151:
					return 4521;
				
				case 152:
					return 4529;
				
				case 153:
					return 4537;
				
				case 154:
					return 4545;
				
				case 155:
					return 4553;
				
				case 156:
					return 4561;
				
				case 157:
					return 4569;
				
				case 158:
					return 5462;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5911;
				
				case 160:
					return 5918;
				
				case 161:
					return 5925;
				
				case 162:
					return 5932;
				
				case 163:
					return 5939;
				
				case 164:
					return 5946;
				
				case 165:
					return 5953;
				
				case 166:
					return 5960;
				
				case 167:
					return 5967;
				
				case 168:
					return 5974;
				
				case 169:
					return 5981;
				
				case 170:
					return 5988;
				
				case 171:
					return 5995;
				
				case 172:
					return 6002;
				
				case 173:
					return 6009;
				
				case 174:
					return 6016;
				
				case 175:
					return 6023;
				
				case 176:
					return 6030;
				
				case 177:
					return 6037;
				
				case 178:
					return 6044;
				
				case 179:
					return 6051;
				
				case 180:
					return 6058;
				
				case 181:
					return 6065;
				
				case 182:
					return 6072;
				
				case 183:
					return 6079;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6156;
				
				case 185:
					return 6163;
				
				case 186:
					return 6170;
				
				case 187:
					return 6177;
				
				case 188:
					return 6184;
				
				case 189:
					return 6191;
				
				case 190:
					return 6198;
				
				case 191:
					return 6205;
				
				case 192:
					return 6212;
				
				case 193:
					return 6219;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2821;
				
				case 40:
					return 2828;
				
				case 41:
					return 2835;
				
				case 42:
					return 2842;
				
				case 43:
					return 2849;
				
				case 44:
					return 2856;
				
				case 45:
					return 2863;
				
				case 46:
					return 2870;
				
				case 47:
					return 2877;
				
				case 48:
					return 2884;
				
				case 49:
					return 2891;
				
				case 50:
					return 2897;
				
				case 51:
					return 2903;
				
				case 52:
					return 2945;
				
				case 53:
					return 2952;
				
				case 54:
					return 2959;
				
				case 55:
					return 2966;
				
				case 56:
					return 2973;
				
				case 57:
					return 2980;
				
				case 58:
					return 2987;
				
				case 59:
					return 2994;
				
				case 60:
					return 3001;
				
				case 61:
					return 3008;
				
				case 62:
					return 3015;
				
				case 63:
					return 3021;
				
				case 64:
					return 3027;
				
				case 65:
					return 3228;
				
				case 66:
					return 3236;
				
				case 67:
					return 3244;
				
				case 68:
					return 3252;
				
				case 69:
					return 3260;
				
				case 70:
					return 3268;
				
				case 71:
					return 3276;
				
				case 72:
					return 3284;
				
				case 73:
					return 3292;
				
				case 74:
					return 3300;
				
				case 75:
					return 3308;
				
				case 76:
					return 3316;
				
				case 77:
					return 3324;
				
				case 78:
					return 3332;
				
				case 79:
					return 3340;
				
				case 80:
					return 3348;
				
				case 81:
					return 3356;
				
				case 82:
					return 3364;
				
				case 83:
					return 3372;
				
				case 84:
					return 3380;
				
				case 85:
					return 3388;
				
				case 86:
					return 3395;
				
				case 87:
					return 3402;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4018;
				
				case 89:
					return 4026;
				
				case 90:
					return 4034;
				
				case 91:
					return 4042;
				
				case 92:
					return 4050;
				
				case 93:
					return 4058;
				
				case 94:
					return 4066;
				
				case 95:
					return 4074;
				
				case 96:
					return 4082;
				
				case 97:
					return 4090;
				
				case 98:
					return 4098;
				
				case 99:
					return 4106;
				
				case 100:
					return 4114;
				
				case 101:
					return 4122;
				
				case 102:
					return 4130;
				
				case 103:
					return 4138;
				
				case 104:
					return 4146;
				
				case 105:
					return 4154;
				
				case 106:
					return 4162;
				
				case 107:
					return 4170;
				
				case 108:
					return 4178;
				
				case 109:
					return 4186;
				
				case 110:
					return 4194;
				
				case 111:
					return 4202;
				
				case 112:
					return 4210;
				
				case 113:
					return 4218;
				
				case 114:
					return 4226;
				
				case 115:
					return 4234;
				
				case 116:
					return 4242;
				
				case 117:
					return 4250;
				
				case 118:
					return 4258;
				
				case 119:
					return 4266;
				
				case 120:
					return 4274;
				
				case 121:
					return 4282;
				
				case 122:
					return 4290;
				
				case 123:
					return 4298;
				
				case 124:
					return 4306;
				
				case 125:
					return 4314;
				
				case 126:
					return 4322;
				
				case 127:
					return 4330;
				
				case 128:
					return 4338;
				
				case 129:
					return 4346;
				
				case 130:
					return 4354;
				
				case 131:
					return 4362;
				
				case 132:
					return 4370;
				
				case 133:
					return 4378;
				
				case 134:
					return 4386;
				
				case 135:
					return 4394;
				
				case 136:
					return 4402;
				
				case 137:
					return 4410;
				
				case 138:
					return 4418;
				
				case 139:
					return 4426;
				
				case 140:
					return 4434;
				
				case 141:
					return 4442;
				
				case 142:
					return 4450;
				
				case 143:
					return 4458;
				
				case 144:
					return 4466;
				
				case 145:
					return 4474;
				
				case 146:
					return 4482;
				
				case 147:
					return 4490;
				
				case 148:
					return 4498;
				
				case 149:
					return 4506;
				
				case 150:
					return 4514;
				
				case 151:
					return 4522;
				
				case 152:
					return 4530;
				
				case 153:
					return 4538;
				
				case 154:
					return 4546;
				
				case 155:
					return 4554;
				
				case 156:
					return 4562;
				
				case 157:
					return 4570;
				
				case 158:
					return 5463;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5912;
				
				case 160:
					return 5919;
				
				case 161:
					return 5926;
				
				case 162:
					return 5933;
				
				case 163:
					return 5940;
				
				case 164:
					return 5947;
				
				case 165:
					return 5954;
				
				case 166:
					return 5961;
				
				case 167:
					return 5968;
				
				case 168:
					return 5975;
				
				case 169:
					return 5982;
				
				case 170:
					return 5989;
				
				case 171:
					return 5996;
				
				case 172:
					return 6003;
				
				case 173:
					return 6010;
				
				case 174:
					return 6017;
				
				case 175:
					return 6024;
				
				case 176:
					return 6031;
				
				case 177:
					return 6038;
				
				case 178:
					return 6045;
				
				case 179:
					return 6052;
				
				case 180:
					return 6059;
				
				case 181:
					return 6066;
				
				case 182:
					return 6073;
				
				case 183:
					return 6080;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6157;
				
				case 185:
					return 6164;
				
				case 186:
					return 6171;
				
				case 187:
					return 6178;
				
				case 188:
					return 6185;
				
				case 189:
					return 6192;
				
				case 190:
					return 6199;
				
				case 191:
					return 6206;
				
				case 192:
					return 6213;
				
				case 193:
					return 6220;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 39:
					return 2823;
				
				case 40:
					return 2830;
				
				case 41:
					return 2837;
				
				case 42:
					return 2844;
				
				case 43:
					return 2851;
				
				case 44:
					return 2858;
				
				case 45:
					return 2865;
				
				case 46:
					return 2872;
				
				case 47:
					return 2879;
				
				case 48:
					return 2886;
				
				case 52:
					return 2947;
				
				case 53:
					return 2954;
				
				case 54:
					return 2961;
				
				case 55:
					return 2968;
				
				case 56:
					return 2975;
				
				case 57:
					return 2982;
				
				case 58:
					return 2989;
				
				case 59:
					return 2996;
				
				case 60:
					return 3003;
				
				case 61:
					return 3010;
				
				case 65:
					return 3231;
				
				case 66:
					return 3239;
				
				case 67:
					return 3247;
				
				case 68:
					return 3255;
				
				case 69:
					return 3263;
				
				case 70:
					return 3271;
				
				case 71:
					return 3279;
				
				case 72:
					return 3287;
				
				case 73:
					return 3295;
				
				case 74:
					return 3303;
				
				case 75:
					return 3311;
				
				case 76:
					return 3319;
				
				case 77:
					return 3327;
				
				case 78:
					return 3335;
				
				case 79:
					return 3343;
				
				case 80:
					return 3351;
				
				case 81:
					return 3359;
				
				case 82:
					return 3367;
				
				case 83:
					return 3375;
				
				case 84:
					return 3383;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4021;
				
				case 89:
					return 4029;
				
				case 90:
					return 4037;
				
				case 91:
					return 4045;
				
				case 92:
					return 4053;
				
				case 93:
					return 4061;
				
				case 94:
					return 4069;
				
				case 95:
					return 4077;
				
				case 96:
					return 4085;
				
				case 97:
					return 4093;
				
				case 98:
					return 4101;
				
				case 99:
					return 4109;
				
				case 100:
					return 4117;
				
				case 101:
					return 4125;
				
				case 102:
					return 4133;
				
				case 103:
					return 4141;
				
				case 104:
					return 4149;
				
				case 105:
					return 4157;
				
				case 106:
					return 4165;
				
				case 107:
					return 4173;
				
				case 108:
					return 4181;
				
				case 109:
					return 4189;
				
				case 110:
					return 4197;
				
				case 111:
					return 4205;
				
				case 112:
					return 4213;
				
				case 113:
					return 4221;
				
				case 114:
					return 4229;
				
				case 115:
					return 4237;
				
				case 116:
					return 4245;
				
				case 117:
					return 4253;
				
				case 118:
					return 4261;
				
				case 119:
					return 4269;
				
				case 120:
					return 4277;
				
				case 121:
					return 4285;
				
				case 122:
					return 4293;
				
				case 123:
					return 4301;
				
				case 124:
					return 4309;
				
				case 125:
					return 4317;
				
				case 126:
					return 4325;
				
				case 127:
					return 4333;
				
				case 128:
					return 4341;
				
				case 129:
					return 4349;
				
				case 130:
					return 4357;
				
				case 131:
					return 4365;
				
				case 132:
					return 4373;
				
				case 133:
					return 4381;
				
				case 134:
					return 4389;
				
				case 135:
					return 4397;
				
				case 136:
					return 4405;
				
				case 137:
					return 4413;
				
				case 138:
					return 4421;
				
				case 139:
					return 4429;
				
				case 140:
					return 4437;
				
				case 141:
					return 4445;
				
				case 142:
					return 4453;
				
				case 143:
					return 4461;
				
				case 144:
					return 4469;
				
				case 145:
					return 4477;
				
				case 146:
					return 4485;
				
				case 147:
					return 4493;
				
				case 148:
					return 4501;
				
				case 149:
					return 4509;
				
				case 150:
					return 4517;
				
				case 151:
					return 4525;
				
				case 152:
					return 4533;
				
				case 153:
					return 4541;
				
				case 154:
					return 4549;
				
				case 155:
					return 4557;
				
				case 156:
					return 4565;
				
				case 157:
					return 4573;
				
				case 158:
					return 5466;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5914;
				
				case 160:
					return 5921;
				
				case 161:
					return 5928;
				
				case 162:
					return 5935;
				
				case 163:
					return 5942;
				
				case 164:
					return 5949;
				
				case 165:
					return 5956;
				
				case 166:
					return 5963;
				
				case 167:
					return 5970;
				
				case 168:
					return 5977;
				
				case 169:
					return 5984;
				
				case 170:
					return 5991;
				
				case 171:
					return 5998;
				
				case 172:
					return 6005;
				
				case 173:
					return 6012;
				
				case 174:
					return 6019;
				
				case 175:
					return 6026;
				
				case 176:
					return 6033;
				
				case 177:
					return 6040;
				
				case 178:
					return 6047;
				
				case 179:
					return 6054;
				
				case 180:
					return 6061;
				
				case 181:
					return 6068;
				
				case 182:
					return 6075;
				
				case 183:
					return 6082;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6159;
				
				case 185:
					return 6166;
				
				case 186:
					return 6173;
				
				case 187:
					return 6180;
				
				case 188:
					return 6187;
				
				case 189:
					return 6194;
				
				case 190:
					return 6201;
				
				case 191:
					return 6208;
				
				case 192:
					return 6215;
				
				case 193:
					return 6222;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2822;
				
				case 40:
					return 2829;
				
				case 41:
					return 2836;
				
				case 42:
					return 2843;
				
				case 43:
					return 2850;
				
				case 44:
					return 2857;
				
				case 45:
					return 2864;
				
				case 46:
					return 2871;
				
				case 47:
					return 2878;
				
				case 48:
					return 2885;
				
				case 49:
					return 2892;
				
				case 50:
					return 2898;
				
				case 51:
					return 2904;
				
				case 52:
					return 2946;
				
				case 53:
					return 2953;
				
				case 54:
					return 2960;
				
				case 55:
					return 2967;
				
				case 56:
					return 2974;
				
				case 57:
					return 2981;
				
				case 58:
					return 2988;
				
				case 59:
					return 2995;
				
				case 60:
					return 3002;
				
				case 61:
					return 3009;
				
				case 62:
					return 3016;
				
				case 63:
					return 3022;
				
				case 64:
					return 3028;
				
				case 65:
					return 3229;
				
				case 66:
					return 3237;
				
				case 67:
					return 3245;
				
				case 68:
					return 3253;
				
				case 69:
					return 3261;
				
				case 70:
					return 3269;
				
				case 71:
					return 3277;
				
				case 72:
					return 3285;
				
				case 73:
					return 3293;
				
				case 74:
					return 3301;
				
				case 75:
					return 3309;
				
				case 76:
					return 3317;
				
				case 77:
					return 3326;
				
				case 78:
					return 3334;
				
				case 79:
					return 3341;
				
				case 80:
					return 3349;
				
				case 81:
					return 3357;
				
				case 82:
					return 3365;
				
				case 83:
					return 3373;
				
				case 84:
					return 3381;
				
				case 85:
					return 3389;
				
				case 86:
					return 3396;
				
				case 87:
					return 3403;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4019;
				
				case 89:
					return 4027;
				
				case 90:
					return 4035;
				
				case 91:
					return 4043;
				
				case 92:
					return 4051;
				
				case 93:
					return 4059;
				
				case 94:
					return 4067;
				
				case 95:
					return 4075;
				
				case 96:
					return 4083;
				
				case 97:
					return 4091;
				
				case 98:
					return 4099;
				
				case 99:
					return 4107;
				
				case 100:
					return 4116;
				
				case 101:
					return 4124;
				
				case 102:
					return 4131;
				
				case 103:
					return 4139;
				
				case 104:
					return 4147;
				
				case 105:
					return 4155;
				
				case 106:
					return 4163;
				
				case 107:
					return 4171;
				
				case 108:
					return 4179;
				
				case 109:
					return 4187;
				
				case 110:
					return 4195;
				
				case 111:
					return 4203;
				
				case 112:
					return 4211;
				
				case 113:
					return 4219;
				
				case 114:
					return 4227;
				
				case 115:
					return 4235;
				
				case 116:
					return 4243;
				
				case 117:
					return 4251;
				
				case 118:
					return 4259;
				
				case 119:
					return 4267;
				
				case 120:
					return 4276;
				
				case 121:
					return 4284;
				
				case 122:
					return 4291;
				
				case 123:
					return 4299;
				
				case 124:
					return 4307;
				
				case 125:
					return 4315;
				
				case 126:
					return 4323;
				
				case 127:
					return 4331;
				
				case 128:
					return 4339;
				
				case 129:
					return 4347;
				
				case 130:
					return 4355;
				
				case 131:
					return 4363;
				
				case 132:
					return 4371;
				
				case 133:
					return 4379;
				
				case 134:
					return 4387;
				
				case 135:
					return 4395;
				
				case 136:
					return 4403;
				
				case 137:
					return 4411;
				
				case 138:
					return 4419;
				
				case 139:
					return 4427;
				
				case 140:
					return 4436;
				
				case 141:
					return 4444;
				
				case 142:
					return 4451;
				
				case 143:
					return 4459;
				
				case 144:
					return 4467;
				
				case 145:
					return 4475;
				
				case 146:
					return 4483;
				
				case 147:
					return 4491;
				
				case 148:
					return 4499;
				
				case 149:
					return 4507;
				
				case 150:
					return 4515;
				
				case 151:
					return 4523;
				
				case 152:
					return 4531;
				
				case 153:
					return 4539;
				
				case 154:
					return 4547;
				
				case 155:
					return 4555;
				
				case 156:
					return 4563;
				
				case 157:
					return 4571;
				
				case 158:
					return 5464;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5913;
				
				case 160:
					return 5920;
				
				case 161:
					return 5927;
				
				case 162:
					return 5934;
				
				case 163:
					return 5941;
				
				case 164:
					return 5948;
				
				case 165:
					return 5955;
				
				case 166:
					return 5962;
				
				case 167:
					return 5969;
				
				case 168:
					return 5976;
				
				case 169:
					return 5983;
				
				case 170:
					return 5990;
				
				case 171:
					return 5997;
				
				case 172:
					return 6004;
				
				case 173:
					return 6011;
				
				case 174:
					return 6018;
				
				case 175:
					return 6025;
				
				case 176:
					return 6032;
				
				case 177:
					return 6039;
				
				case 178:
					return 6046;
				
				case 179:
					return 6053;
				
				case 180:
					return 6060;
				
				case 181:
					return 6067;
				
				case 182:
					return 6074;
				
				case 183:
					return 6081;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6158;
				
				case 185:
					return 6165;
				
				case 186:
					return 6172;
				
				case 187:
					return 6179;
				
				case 188:
					return 6186;
				
				case 189:
					return 6193;
				
				case 190:
					return 6200;
				
				case 191:
					return 6207;
				
				case 192:
					return 6214;
				
				case 193:
					return 6221;
				
				default:
			}
			break;
			break;
	}
	return 1626;
}

int func_499(int iParam0)//Position - 0x17B89
{
	int iVar0;
	
	if (iParam0 < 194)
	{
		iVar0 = 0;
		while (iVar0 < 14)
		{
			if (iParam0 >= func_323(iVar0) && iParam0 < func_500(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_500(int iParam0)//Position - 0x17BCB
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_332(iParam0);
		return func_501(iVar0);
	}
	return (func_324(iParam0, -1) * iParam0 + 1);
}

int func_501(int iParam0)//Position - 0x17C7C
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		default:
	}
	return -1;
}

int func_502(int iParam0, int iParam1)//Position - 0x17C97
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_27();
	}
	if (iParam0 == 7 && !Global_262145.f_16308)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_332(iParam0);
		if (iVar1 == 0 && func_28(5376, iParam1, 0) != 0)
		{
			return 1234;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1368219[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2549282[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 14)
		{
			return 0;
		}
		return Global_2549199[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

int func_503(int iParam0)//Position - 0x17D41
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_504(int iParam0)//Position - 0x17DCA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_322(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_28(func_498(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_505(int iParam0)//Position - 0x17E10
{
	switch (iParam0)
	{
		case -1881846085:
			return 0;
			break;
	}
	return -1;
}

bool func_506()//Position - 0x17E2D
{
	return func_28(6146, -1, 0) != 0;
}

bool func_507()//Position - 0x17E40
{
	return func_28(5363, -1, 0) != 0;
}

bool func_508()//Position - 0x17E53
{
	return func_28(3811, -1, 0) != 0;
}

bool func_509()//Position - 0x17E66
{
	return func_28(3212, -1, 0) != 0;
}

bool func_510()//Position - 0x17E79
{
	return func_28(5362, -1, 0) != 0;
}

int func_511()//Position - 0x17E8C
{
	int iVar0;
	
	iVar0 = func_125();
	if (iVar0 != func_11())
	{
		return Global_1627537[iVar0 /*532*/].f_11.f_93;
	}
	return 0;
}

int func_512(int iParam0)//Position - 0x17EB4
{
	if (func_45(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_176;
	}
	return -1;
}

int func_513(int iParam0)//Position - 0x17ED7
{
	if (func_44(iParam0) == 225 || func_44(iParam0) == 226)
	{
		return func_512(iParam0);
	}
	return -1;
}

var func_514()//Position - 0x17F04
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_270(unk_0x9EB17624F44A8DA4(), iVar0))
		{
			unk_0x872F1C1F8587CCC7(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_515()//Position - 0x17F36
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_516())
	{
		return;
	}
	if (func_576(unk_0x9EB17624F44A8DA4(), func_16(), 1))
	{
		return;
	}
	if (!unk_0x6ADD12BF4D6D2587(unk_0x25D049AAC4603E65(func_16())))
	{
		return;
	}
	vVar0 = { unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(func_16()), 0) };
	vVar1 = { unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(unk_0x9EB17624F44A8DA4()), 0) };
	fVar2 = system::vdist(vVar0, vVar1);
	if (fVar2 < 25f)
	{
		unk_0xBDD6765E5846A7DE(2, vVar0 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0,5f, 0,5f, 0,5f, uLocal_112[0], uLocal_112[1], uLocal_112[2], 100, 1, 1, 2, 0, 0, 0, false);
	}
}

int func_516()//Position - 0x17FE7
{
	if (((func_537(164) || func_67()) || !func_517(1, 1, 1)) || iLocal_98 == 0)
	{
		return 1;
	}
	return 0;
}

int func_517(bool bParam0, bool bParam1, bool bParam2)//Position - 0x18021
{
	if (func_536(unk_0x9EB17624F44A8DA4(), 29))
	{
		return 0;
	}
	if (func_70(unk_0x9EB17624F44A8DA4(), 21))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0xB01117EF93F91860())
		{
			return 0;
		}
	}
	if (!func_423(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x78E929955680CA05())
		{
			return 0;
		}
	}
	if (func_535(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_534())
	{
		return 0;
	}
	if (func_482())
	{
		return 0;
	}
	if (func_533())
	{
		return 0;
	}
	if (func_476())
	{
		return 0;
	}
	if (unk_0x4916190900E76373())
	{
		return 0;
	}
	if (func_474(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (!func_478())
	{
		return 0;
	}
	if (func_70(unk_0x9EB17624F44A8DA4(), 0) || func_70(unk_0x9EB17624F44A8DA4(), 3))
	{
		return 0;
	}
	if ((func_70(unk_0x9EB17624F44A8DA4(), 12) || func_70(unk_0x9EB17624F44A8DA4(), 14)) || func_70(unk_0x9EB17624F44A8DA4(), 13))
	{
		return 0;
	}
	if (func_531(unk_0x9EB17624F44A8DA4(), 0, 0, 0, 0, 0, 0, 0, 1))
	{
		if (!func_523())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_522())
		{
			return 0;
		}
	}
	if (Global_1655673)
	{
		return 0;
	}
	if (func_521(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_520())
	{
		return 0;
	}
	if (func_519(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 4))
	{
		return 0;
	}
	if (func_518(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_518(int iParam0)//Position - 0x181BB
{
	if (Global_2422736[iParam0 /*420*/].f_276.f_4 != 0 || Global_2422736[iParam0 /*420*/].f_276.f_5)
	{
		return 1;
	}
	return 0;
}

int func_519(int iParam0)//Position - 0x181EF
{
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 14))
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 11))
	{
		return 1;
	}
	return 0;
}

int func_520()//Position - 0x1822E
{
	if (Global_4253357.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_521(int iParam0)//Position - 0x18246
{
	if (!func_5(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_35;
}

bool func_522()//Position - 0x18269
{
	return Global_92885.f_316 > 0;
}

int func_523()//Position - 0x1827A
{
	int iVar0;
	
	iVar0 = func_44(unk_0x9EB17624F44A8DA4());
	if (((func_326(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17) || func_530(unk_0x9EB17624F44A8DA4())) || func_529(unk_0x9EB17624F44A8DA4())) || func_528(unk_0x9EB17624F44A8DA4()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_527(unk_0x9EB17624F44A8DA4()))
	{
		if (func_96(iVar0) || func_367(iVar0))
		{
			return 1;
		}
	}
	if (func_60(unk_0x9EB17624F44A8DA4()))
	{
		if (func_367(iVar0))
		{
			return 1;
		}
	}
	if (func_526(unk_0x9EB17624F44A8DA4()))
	{
		if (func_89(iVar0))
		{
			return 1;
		}
	}
	if (func_525(unk_0x9EB17624F44A8DA4()))
	{
		if (func_88(iVar0))
		{
			return 1;
		}
	}
	if (func_524(unk_0x9EB17624F44A8DA4()))
	{
		if (func_87(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_524(int iParam0)//Position - 0x1837F
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_61(Global_2422736[iParam0 /*420*/].f_324.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_525(int iParam0)//Position - 0x183C6
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_61(Global_2422736[iParam0 /*420*/].f_324.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_526(int iParam0)//Position - 0x1840C
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_61(Global_2422736[iParam0 /*420*/].f_324.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_527(int iParam0)//Position - 0x18452
{
	if (func_325(Global_1595693[iParam0 /*680*/].f_266.f_17, -1))
	{
		return 1;
	}
	return 0;
}

int func_528(int iParam0)//Position - 0x18475
{
	if (func_327(Global_1595693[iParam0 /*680*/].f_266.f_17, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_529(int iParam0)//Position - 0x18499
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_61(Global_2422736[iParam0 /*420*/].f_324.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_530(int iParam0)//Position - 0x184DF
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_61(Global_2422736[iParam0 /*420*/].f_324.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_531(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x18525
{
	if (Global_1595693[iParam0 /*680*/].f_266.f_17 > 0)
	{
		if (bParam1)
		{
			if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_530(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_60(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_529(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_526(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_525(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_524(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_532(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_532(int iParam0)//Position - 0x185EB
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_11())
			{
				return func_61(Global_2422736[iParam0 /*420*/].f_324.f_1) == 8;
			}
		}
	}
	return 0;
}

bool func_533()//Position - 0x1864B
{
	return Global_1312854;
}

bool func_534()//Position - 0x18657
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 0);
}

int func_535(int iParam0)//Position - 0x18673
{
	if (func_473(iParam0, 1))
	{
		if (Global_1595693[iParam0 /*680*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_536(int iParam0, int iParam1)//Position - 0x18697
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_5, iParam1);
}

int func_537(int iParam0)//Position - 0x186B2
{
	if (!func_107() && !func_223(unk_0x9EB17624F44A8DA4(), 1))
	{
		if (!func_64(unk_0x9EB17624F44A8DA4()))
		{
			if (func_67())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

void func_538()//Position - 0x1870B
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (func_576(unk_0x9EB17624F44A8DA4(), func_16(), 0))
	{
		return;
	}
	vVar0 = { unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(func_16()), 0) };
	vVar1 = { unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(unk_0x9EB17624F44A8DA4()), 0) };
	fVar2 = system::vdist(vVar0, vVar1);
	if (fVar2 < 25f)
	{
		if (fVar2 < 5f)
		{
			fVar4 = 175f;
		}
		else
		{
			fVar3 = (1f - (func_540(fVar2, 5f, 25f) / 25f));
			fVar4 = func_539(26f, 175f, fVar3);
		}
		unk_0xC4803EF57E953FF3(0, 1000, system::round(fVar4));
	}
}

float func_539(float fParam0, float fParam1, float fParam2)//Position - 0x187A8
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_540(float fParam0, float fParam1, float fParam2)//Position - 0x187BD
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

int func_541(int iParam0)//Position - 0x187E4
{
	if (iParam0 < 0 || iParam0 > 31)
	{
		return 0;
	}
	if (!unk_0xC80D31E4B587871C(vLocal_126[iParam0 /*3*/].f_2, 0))
	{
		return 0;
	}
	return 1;
}

void func_542(int iParam0, int iParam1)//Position - 0x18818
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB80A4DA4C06A76F1(unk_0x42714E8EC2D8F2EA(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x2786E663D1846FFC(unk_0x42714E8EC2D8F2EA(iParam0), "MPBitset");
	}
	unk_0x872F1C1F8587CCC7(&iVar0, iParam1);
	unk_0xD91ED8E8618A1DEF(unk_0x42714E8EC2D8F2EA(iParam0), "MPBitset", iVar0);
}

int func_543(int iParam0, int iParam1)//Position - 0x1885D
{
	if (unk_0x6C5223DB5E5CFD9B("MPBitset", 3))
	{
		if (unk_0xB80A4DA4C06A76F1(unk_0x42714E8EC2D8F2EA(iParam0), "MPBitset"))
		{
			if (unk_0xC80D31E4B587871C(unk_0x2786E663D1846FFC(unk_0x42714E8EC2D8F2EA(iParam0), "MPBitset"), iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_544()//Position - 0x1889E
{
	if (!func_545(unk_0x9EB17624F44A8DA4()))
	{
		func_79(25);
	}
}

bool func_545(int iParam0)//Position - 0x188B8
{
	return func_371(iParam0, 25);
}

void func_546(int iParam0)//Position - 0x188C8
{
	if (iLocal_98 != 2 && iLocal_98 != 3)
	{
		func_435();
		return;
	}
	if (func_516())
	{
		func_435();
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!unk_0xC80D31E4B587871C(iLocal_109, iParam0))
			{
				if (func_575())
				{
					func_570();
					func_568(86, "GB_HTB_BMT0", "GB_HTB_BMS0", func_569(func_16()), iLocal_99, 0, -1, -1, -1, 2, -1);
					unk_0x872F1C1F8587CCC7(&iLocal_109, iParam0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xC80D31E4B587871C(iLocal_109, iParam0))
			{
				if (func_575())
				{
					func_570();
					func_567(86, "GB_HTB_BMT0", "GB_HTB_BMS1", 1, -1, 2);
					unk_0x872F1C1F8587CCC7(&iLocal_109, iParam0);
				}
			}
			break;
		
		case 2:
			if (!unk_0xC80D31E4B587871C(iLocal_109, iParam0))
			{
				if (func_575())
				{
					func_570();
					func_567(86, "GB_HTB_BMT0", "GB_HTB_BMS2", 1, -1, 2);
					unk_0x872F1C1F8587CCC7(&iLocal_109, iParam0);
				}
			}
			break;
		
		case 3:
			if (!unk_0xC80D31E4B587871C(iLocal_109, iParam0))
			{
				if (func_575())
				{
					func_570();
					func_566(87, Local_125.f_5, -1, "GB_HTB_BMS3", "GB_WINNER", 1, -1, 2, -1);
					unk_0x872F1C1F8587CCC7(&iLocal_109, iParam0);
				}
			}
			break;
		
		case 4:
			if (!unk_0xC80D31E4B587871C(iLocal_109, iParam0))
			{
				if (func_575())
				{
					func_570();
					func_566(88, func_6(), -1, "GB_HTB_BMS4", "GB_WORK_OVER", 1, -1, 2, -1);
					unk_0x872F1C1F8587CCC7(&iLocal_109, iParam0);
				}
			}
			break;
		
		case 5:
			if (!unk_0xC80D31E4B587871C(iLocal_109, iParam0))
			{
				if (func_575())
				{
					func_570();
					func_567(87, "GB_WINNER", "GB_HTB_BMS5", 1, -1, 2);
					unk_0x872F1C1F8587CCC7(&iLocal_109, iParam0);
				}
			}
			break;
		
		case 6:
			if (!unk_0xC80D31E4B587871C(iLocal_109, iParam0))
			{
				if (func_575())
				{
					func_570();
					func_567(88, "GB_WORK_OVER", "GB_HTB_BMS5", 1, -1, 2);
					unk_0x872F1C1F8587CCC7(&iLocal_109, iParam0);
				}
			}
			break;
		
		case 7:
			if (!unk_0xC80D31E4B587871C(iLocal_109, iParam0))
			{
				if (func_575())
				{
					func_570();
					func_567(88, "GB_WORK_OVER", "GB_HTB_BMS6", 1, -1, 2);
					unk_0x872F1C1F8587CCC7(&iLocal_109, iParam0);
				}
			}
			break;
		
		case 8:
			if (!unk_0xC80D31E4B587871C(iLocal_109, iParam0))
			{
				if (func_575())
				{
					func_570();
					func_566(88, func_6(), -1, "GB_HTB_BMS7", "GB_WORK_OVER", 1, -1, 2, -1);
					unk_0x872F1C1F8587CCC7(&iLocal_109, iParam0);
				}
			}
			break;
		
		case 9:
			if (!unk_0xC80D31E4B587871C(iLocal_109, iParam0))
			{
				if (func_575())
				{
					func_570();
					func_547(88, "GB_WORK_OVER", "GB_HTB_BMS8", func_560(), iLocal_99, func_6(), 0, 0, 0, -1, -1, -1, 2, -1, 2);
					unk_0x872F1C1F8587CCC7(&iLocal_109, iParam0);
				}
			}
			break;
		
		case 10:
			if (!unk_0xC80D31E4B587871C(iLocal_109, iParam0))
			{
				if (func_575())
				{
					func_570();
					func_567(87, "GB_WINNER", "GB_HTB_BMS9", 1, -1, 2);
					unk_0x872F1C1F8587CCC7(&iLocal_109, iParam0);
				}
			}
			break;
		
		case 11:
			if (!unk_0xC80D31E4B587871C(iLocal_109, iParam0))
			{
				if (func_575())
				{
					func_570();
					func_567(87, "GB_WINNER", "GB_HTB_BMS10", 1, -1, 2);
					unk_0x872F1C1F8587CCC7(&iLocal_109, iParam0);
				}
			}
			break;
		
		case 12:
			if (!unk_0xC80D31E4B587871C(iLocal_109, iParam0))
			{
				if (func_575())
				{
					func_570();
					func_567(88, "GB_WORK_OVER", "GB_HTB_BMS11", 1, -1, 2);
					unk_0x872F1C1F8587CCC7(&iLocal_109, iParam0);
				}
			}
			break;
		
		case 13:
			if (!unk_0xC80D31E4B587871C(iLocal_109, iParam0))
			{
				if (func_575())
				{
					func_570();
					func_567(88, "GB_WORK_OVER", "GB_HTB_BMS12", 1, -1, 2);
					unk_0x872F1C1F8587CCC7(&iLocal_109, iParam0);
				}
			}
			break;
		
		case 14:
			if (!unk_0xC80D31E4B587871C(iLocal_109, iParam0))
			{
				if (func_575())
				{
					func_570();
					func_567(88, "GB_WORK_OVER", "GB_HTB_BMS13", 1, -1, 2);
					unk_0x872F1C1F8587CCC7(&iLocal_109, iParam0);
				}
			}
			break;
		
		case 15:
			if (!unk_0xC80D31E4B587871C(iLocal_109, iParam0))
			{
				if (func_575())
				{
					func_570();
					func_567(88, "GB_WORK_OVER", "GB_HTB_BMS14", 1, -1, 2);
					unk_0x872F1C1F8587CCC7(&iLocal_109, iParam0);
				}
			}
			break;
		
		case 16:
			if (!unk_0xC80D31E4B587871C(iLocal_109, iParam0))
			{
				if (func_575())
				{
					func_570();
					func_567(88, "GB_WORK_OVER", "GB_HTB_BMS15", 1, -1, 2);
					unk_0x872F1C1F8587CCC7(&iLocal_109, iParam0);
				}
			}
			break;
		
		case 17:
			if (!unk_0xC80D31E4B587871C(iLocal_109, iParam0))
			{
				if (func_575())
				{
					func_570();
					func_566(88, func_6(), -1, "GB_HTB_BMS16", "GB_WORK_OVER", 1, -1, 2, -1);
					unk_0x872F1C1F8587CCC7(&iLocal_109, iParam0);
				}
			}
			break;
	}
}

int func_547(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x18D45
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_559(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_16 = iParam5;
	Var0.f_17 = iParam6;
	Var0.f_18 = iParam7;
	StringCopy(&(Var0.f_24), sParam3, 64);
	StringCopy(&(Var0.f_56), sParam8, 16);
	Var0.f_72 = iParam4;
	Var0.f_70 = iParam4;
	Var0.f_6 = iParam13;
	Var0.f_71 = iParam12;
	if (iParam14 != 2)
	{
		Var0.f_70 = iParam14;
	}
	unk_0x872F1C1F8587CCC7(&(Var0.f_68), 2);
	return func_548(&Var0);
}

int func_548(var uParam0)//Position - 0x18DF3
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2436181.f_2910)
		{
			return 0;
		}
	}
	func_558(uParam0, uParam0->f_16);
	func_557(uParam0);
	if (func_173())
	{
		func_557(uParam0);
	}
	if (func_556(uParam0->f_1))
	{
		func_549();
		if (Global_2436181.f_2592[0 /*79*/].f_2 == 0)
		{
			Global_2436181.f_2592[0 /*79*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2436181.f_2592[0 /*79*/].f_1 == 13 || Global_2436181.f_2592[0 /*79*/].f_1 == 53) || Global_2436181.f_2592[0 /*79*/].f_1 == 54) || Global_2436181.f_2592[0 /*79*/].f_1 == 58)
		{
			Global_2436181.f_2592[0 /*79*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2436181.f_2592[iVar0 + 1 /*79*/] = { Global_2436181.f_2592[iVar0 /*79*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2436181.f_2592[1 /*79*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2436181.f_2592[iVar0 /*79*/].f_2 == 0)
		{
			Global_2436181.f_2592[iVar0 /*79*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_549();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 1);
				Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86)
			{
				if (func_438(Global_2436181.f_2592[iVar0 /*79*/].f_1))
				{
					Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
					unk_0x872F1C1F8587CCC7(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_549()//Position - 0x18FB4
{
	bool bVar0;
	
	if (Global_2436181.f_2911)
	{
		return;
	}
	if (!Global_71124)
	{
		Global_71124 = 1;
		bVar0 = true;
	}
	func_550();
	if (bVar0)
	{
		Global_71124 = 0;
	}
}

void func_550()//Position - 0x18FE7
{
	Global_2436181.f_2912 = 0;
	Global_2436181.f_2912.f_578 = 0;
	func_554(&(Global_2436181.f_2912.f_1));
	Global_2436181.f_2912.f_1.f_1 = 0;
	func_551(&(Global_2436181.f_2912.f_1));
}

void func_551(var uParam0)//Position - 0x19028
{
	if (uParam0->f_1 != 0)
	{
		unk_0xA68F7B004463AB6F(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0xB9D80B12FE4456A5())
		{
			unk_0x008F3E3CC076EA0E(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1869584A8A72FEDD(false);
			unk_0x271AA5469AF471B3();
		}
		unk_0xA68F7B004463AB6F(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x7635EA803CE40962(false);
		uParam0->f_564 = 0;
	}
	if (!Global_71124)
	{
		if (!unk_0xC445AB6B86A2138E(unk_0x98EC0789D9F0703B()))
		{
			if (!Global_71125)
			{
				if (unk_0x3E9CABD07B829173() && !func_553(0))
				{
					unk_0x59C3AC31C7544A28(800);
				}
			}
		}
	}
	func_552(0);
}

void func_552(int iParam0)//Position - 0x190CF
{
	Global_71116 = iParam0;
	Global_71117 = iParam0;
}

bool func_553(bool bParam0)//Position - 0x190E3
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_554(var uParam0)//Position - 0x1910E
{
	func_555(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_555(var uParam0)//Position - 0x19138
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0,1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_556(int iParam0)//Position - 0x191B7
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_557(var uParam0)//Position - 0x192B9
{
	if (func_440(uParam0->f_1))
	{
		uParam0->f_71 = func_404();
	}
}

void func_558(var uParam0, int iParam1)//Position - 0x192D4
{
	if (func_440(uParam0->f_1))
	{
		uParam0->f_72 = 1;
	}
	if (iParam1 == func_11() || !func_5(iParam1, 0, 1))
	{
		return;
	}
	if (func_438(uParam0->f_1))
	{
		if (uParam0->f_70 == 1)
		{
			uParam0->f_72 = func_197(iParam1, -2, 0, 0);
		}
	}
}

void func_559(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x1932A
{
	uParam1->f_16 = func_11();
	uParam1->f_17 = func_11();
	uParam1->f_18 = func_11();
	uParam1->f_19 = func_11();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_20), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_70 = 1;
	uParam1->f_73 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 0;
	uParam1->f_76 = 0;
	uParam1->f_72 = 0;
	StringCopy(&(uParam1->f_24), "", 64);
	StringCopy(&(uParam1->f_40), "", 64);
}

char* func_560()//Position - 0x193A5
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_84(unk_0x9EB17624F44A8DA4());
	if (iVar0 != func_11())
	{
		if (iVar0 != unk_0x9EB17624F44A8DA4())
		{
			if (((func_371(iVar0, 28) || func_371(unk_0x9EB17624F44A8DA4(), 28)) || func_565(iVar0)) && !func_564(iVar0))
			{
				return func_562(iVar0, 0);
			}
			if (!unk_0x177281F5FA205A38() && !unk_0x8E095DA8BB18B959(0, -1, 1))
			{
				return func_562(iVar0, 0);
			}
		}
		sVar1 = func_561(&(Global_1627537[iVar0 /*532*/].f_11.f_99));
		if (unk_0xAB019B170BF1309C(sVar1))
		{
			return func_562(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_561(var uParam0)//Position - 0x19457
{
	return uParam0;
}

char* func_562(int iParam0, bool bParam1)//Position - 0x19461
{
	if (!bParam1)
	{
		if (func_51(iParam0, 1))
		{
			return func_563();
		}
	}
	return unk_0xB2E1B414DD88808E("GB_REST_ACC");
}

char* func_563()//Position - 0x19488
{
	return unk_0xB2E1B414DD88808E("GB_REST_ACCM");
}

int func_564(int iParam0)//Position - 0x19498
{
	struct<13> Var0;
	
	Var0 = { func_148(iParam0) };
	if (unk_0x177281F5FA205A38())
	{
		if (unk_0xCD032B200A8FAC1A(0))
		{
			if (unk_0x1E81D00FCDFF4BBE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_565(int iParam0)//Position - 0x194C8
{
	struct<13> Var0;
	
	if (iParam0 != func_11())
	{
		Var0 = { func_148(iParam0) };
		if (unk_0xFD6215BABFD843F2() || unk_0xB9D80B12FE4456A5())
		{
			if (unk_0xCD032B200A8FAC1A(0))
			{
				return 0;
			}
		}
		else if (unk_0x177281F5FA205A38())
		{
			if (unk_0xCD032B200A8FAC1A(0))
			{
				if (unk_0x1E81D00FCDFF4BBE(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_566(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x19521
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_559(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_16 = iParam1;
	Var0.f_70 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_71 = iParam7;
	if (iParam8 != -1)
	{
		unk_0x872F1C1F8587CCC7(&(Var0.f_68), iParam8);
	}
	return func_548(&Var0);
}

int func_567(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1959C
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_559(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_70 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_71 = iParam5;
	return func_548(&Var0);
}

int func_568(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x19600
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_11();
	iVar1 = func_11();
	iVar2 = func_11();
	return func_547(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

char* func_569(int iParam0)//Position - 0x1963B
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		sVar0 = func_561(&(Global_1627537[iParam0 /*532*/].f_11.f_99));
		return sVar0;
	}
	if (Global_1627537[iParam0 /*532*/].f_11.f_115 != Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_115)
	{
		sVar0 = func_562(iParam0, 0);
		return sVar0;
	}
	if (((func_371(iParam0, 28) || func_371(unk_0x9EB17624F44A8DA4(), 28)) || func_565(iParam0)) && !func_564(iParam0))
	{
		return func_562(iParam0, 0);
	}
	iVar1 = func_84(iParam0);
	if (iVar1 != func_11())
	{
		if (iVar1 != unk_0x9EB17624F44A8DA4())
		{
			if (!unk_0x177281F5FA205A38() && !unk_0x8E095DA8BB18B959(0, -1, 1))
			{
				return func_562(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_11())
	{
		sVar0 = func_561(&(Global_1627537[iVar1 /*532*/].f_11.f_99));
		if (unk_0xAB019B170BF1309C(sVar0))
		{
			return func_562(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

void func_570()//Position - 0x19742
{
	if (((((((func_573("GB_HTB_HR1", func_569(func_16()), func_574(func_16())) || func_572("GB_HTB_HR0", func_569(func_16()), func_574(func_16()), "GB_HTB_BLP", func_574(func_16()))) || func_571("GB_HTB_HG0", "GB_HTB_BLP", func_574(func_16()))) || func_34("GB_HTB_HELP2")) || func_34("GB_HTB_HELP3")) || func_34("GB_HTB_HELP4")) || func_34("GB_HTB_HELP5")) || func_34("GB_HTB_HELP7"))
	{
		unk_0x3E80C2F7BC665259(1);
	}
}

int func_571(char* sParam0, char* sParam1, int iParam2)//Position - 0x197F4
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam2);
	}
	unk_0xA6D2B267C377D7B2(sParam1);
	return unk_0x0683D2027E169355(0);
}

int func_572(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x1981B
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam2);
	}
	unk_0x854FACC4E5F40C82(sParam1);
	if (!iParam4 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam4);
	}
	unk_0xA6D2B267C377D7B2(sParam3);
	return unk_0x0683D2027E169355(0);
}

int func_573(char* sParam0, char* sParam1, int iParam2)//Position - 0x19856
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam2);
	}
	unk_0x854FACC4E5F40C82(sParam1);
	return unk_0x0683D2027E169355(0);
}

int func_574(int iParam0)//Position - 0x1987D
{
	int iVar0;
	
	iVar0 = func_209(iParam0);
	if (iVar0 != -1)
	{
		return func_207(iVar0);
	}
	return 1;
}

int func_575()//Position - 0x1989D
{
	if ((func_5(unk_0x9EB17624F44A8DA4(), 1, 1) && !unk_0x0F30C1F1717A6437()) && !func_483())
	{
		return 1;
	}
	return 0;
}

int func_576(int iParam0, int iParam1, bool bParam2)//Position - 0x198CB
{
	if (iParam1 != func_11())
	{
		if (!bParam2)
		{
			if (func_577(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1627537[iParam0 /*532*/].f_11 != func_11())
		{
			return iParam1 == Global_1627537[iParam0 /*532*/].f_11;
		}
	}
	return 0;
}

int func_577(int iParam0, int iParam1)//Position - 0x19915
{
	if (iParam1 != func_11())
	{
		if (iParam0 != func_11())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 != func_11())
			{
				if (Global_1627537[iParam0 /*532*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_578(int iParam0)//Position - 0x1995A
{
	if (func_516())
	{
		func_570();
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!unk_0xC80D31E4B587871C(iLocal_110, iParam0))
			{
				if (func_584(0))
				{
					func_583("GB_HTB_HB0", "GB_HTB_BLP", func_574(func_16()), -1);
					func_49(1);
					unk_0x872F1C1F8587CCC7(&iLocal_110, iParam0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xC80D31E4B587871C(iLocal_110, iParam0))
			{
				if (func_584(0))
				{
					func_582("GB_HTB_HR0", func_569(func_16()), func_574(func_16()), "GB_HTB_BLP", func_574(func_16()), -1);
					func_49(1);
					unk_0x872F1C1F8587CCC7(&iLocal_110, iParam0);
				}
			}
			break;
		
		case 2:
			if (!unk_0xC80D31E4B587871C(iLocal_110, iParam0))
			{
				if (func_584(0))
				{
					func_53("GB_HTB_HELP2", -1);
					func_49(1);
					unk_0x872F1C1F8587CCC7(&iLocal_110, iParam0);
				}
			}
			break;
		
		case 3:
			if (!unk_0xC80D31E4B587871C(iLocal_110, iParam0))
			{
				if (func_584(0))
				{
					func_53("GB_HTB_HELP3", -1);
					func_49(1);
					unk_0x872F1C1F8587CCC7(&iLocal_110, iParam0);
				}
			}
			break;
		
		case 4:
			if (func_584(0))
			{
				func_53("GB_HTB_HELP4", -1);
				func_49(0);
			}
			break;
		
		case 5:
			if (!unk_0xC80D31E4B587871C(iLocal_110, iParam0))
			{
				if (func_584(0))
				{
					func_53("GB_HTB_HELP5", -1);
					func_49(1);
					unk_0x872F1C1F8587CCC7(&iLocal_110, iParam0);
				}
			}
			break;
		
		case 6:
			if (!unk_0xC80D31E4B587871C(iLocal_110, iParam0))
			{
				if (func_584(0))
				{
					func_583("GB_HTB_HG0", "GB_HTB_BLP", func_574(func_16()), -1);
					func_49(1);
					unk_0x872F1C1F8587CCC7(&iLocal_110, iParam0);
				}
			}
			break;
		
		case 7:
			if (!unk_0xC80D31E4B587871C(iLocal_110, iParam0))
			{
				if (func_584(0))
				{
					func_53("GB_HTB_HELP7", -1);
					func_49(1);
					unk_0x872F1C1F8587CCC7(&iLocal_110, iParam0);
					func_580(-129233173, func_581(0));
				}
			}
			break;
		
		case 8:
			if (!unk_0xC80D31E4B587871C(iLocal_110, iParam0))
			{
				if (func_584(0))
				{
					func_579("GB_HTB_HR1", func_569(func_16()), func_574(func_16()), -1);
					func_49(1);
					unk_0x872F1C1F8587CCC7(&iLocal_110, iParam0);
					func_580(-129233173, func_581(0));
				}
			}
			break;
	}
}

void func_579(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x19B8E
{
	unk_0x67129637F30DEB3F(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam2);
	}
	unk_0x854FACC4E5F40C82(sParam1);
	unk_0x376CFA11DE0FE521(0, 0, false, iParam3);
}

void func_580(int iParam0, int iParam1)//Position - 0x19BB9
{
	struct<4> Var0;
	
	Var0 = 1662227603;
	Var0.f_1 = unk_0x9EB17624F44A8DA4();
	Var0.f_2 = iParam0;
	Var0.f_3 = unk_0x63A6486593EC7EC3(0, 9999);
	if (!iParam1 == 0)
	{
		if (unk_0x3A711520F83BAE98())
		{
			unk_0x5A26F0BDEE9F8260(1, &Var0, 4, iParam1);
		}
	}
}

int func_581(bool bParam0)//Position - 0x19BFE
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar1);
		if (func_5(iVar2, 0, 0))
		{
			if (bParam0)
			{
				if (unk_0xC80D31E4B587871C(vLocal_126[iVar1 /*3*/].f_2, 0))
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar2);
				}
			}
			else if (iVar2 != Local_125.f_5)
			{
				if (unk_0xC80D31E4B587871C(vLocal_126[iVar1 /*3*/].f_2, 0))
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_582(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x19C6F
{
	unk_0x67129637F30DEB3F(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam2);
	}
	unk_0x854FACC4E5F40C82(sParam1);
	if (!iParam4 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam4);
	}
	unk_0xA6D2B267C377D7B2(sParam3);
	unk_0x376CFA11DE0FE521(0, 0, false, iParam5);
}

void func_583(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x19CAE
{
	unk_0x67129637F30DEB3F(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam2);
	}
	unk_0xA6D2B267C377D7B2(sParam1);
	unk_0x376CFA11DE0FE521(0, 0, false, iParam3);
}

int func_584(bool bParam0)//Position - 0x19CD9
{
	if ((((!func_483() && !unk_0x0F30C1F1717A6437()) && !unk_0x2918F48A30D03841()) && func_5(unk_0x9EB17624F44A8DA4(), 1, 1)) && !func_78())
	{
		if (bParam0)
		{
			if (!unk_0xF491DD47B88AA84E())
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_585()//Position - 0x19D2F
{
	if (unk_0x9EB17624F44A8DA4() == func_16())
	{
		return 1;
	}
	return 0;
}

void func_586()//Position - 0x19D47
{
	int iVar0;
	var uVar1;
	char* sVar2;
	
	iVar0 = 1;
	iLocal_124 = iLocal_124;
	if (func_21(&(Local_125.f_12)))
	{
		if (func_595(Local_125.f_12, (Global_262145.f_11830 - 35000), 0))
		{
			func_594(&iLocal_123, 3, 1);
		}
		if (func_595(Local_125.f_12, (Global_262145.f_11830 - 30000), 0))
		{
			func_594(&iLocal_123, 4, 1);
		}
		if (func_595(Local_125.f_12, (Global_262145.f_11830 - 27000), 0))
		{
			func_594(&iLocal_123, 5, 1);
		}
		if (func_595(Local_125.f_12, Global_262145.f_11830, 0))
		{
			func_594(&iLocal_123, 2, 1);
		}
	}
	if (func_592(unk_0x9EB17624F44A8DA4(), Global_262145.f_11834, &uVar1, func_594(&iLocal_123, 13, -1), 1123024896, 0))
	{
		func_594(&iLocal_123, 13, 1);
	}
	else
	{
		func_594(&iLocal_123, 13, 0);
	}
	if (bLocal_115 || (!func_590() && !func_594(&iLocal_123, 13, -1)))
	{
		iVar0 = 0;
	}
	switch (func_589(unk_0x622FF3AE4B1D07C3()))
	{
		case 0:
			break;
		
		case 1:
			if (!func_594(&iLocal_123, 12, 1))
			{
				iLocal_124 = unk_0xD1952A425B78FFC0();
			}
			if (iVar0 && !func_594(&iLocal_123, 3, -1))
			{
				if (!func_594(&iLocal_123, 1, -1))
				{
					sVar2 = func_588(func_590(), "BG_HUNT_BOSS_DEFEND_START", "BG_HUNT_BOSS_ATTACK_START");
					if (unk_0xAAB7D68F04F8C8BA(sVar2) && func_594(&iLocal_123, 11, -1))
					{
						unk_0x8810DC630928B398(sVar2);
						func_594(&iLocal_123, 1, 1);
					}
					if (!func_594(&iLocal_123, 11, -1))
					{
						func_587(1);
					}
				}
			}
			else if (func_594(&iLocal_123, 1, -1) && !func_594(&iLocal_123, 3, -1))
			{
				if (unk_0xAAB7D68F04F8C8BA("BG_HUNT_STOP"))
				{
					unk_0x8810DC630928B398("BG_HUNT_STOP");
					func_587(0);
					func_594(&iLocal_123, 1, 0);
				}
			}
			if (func_594(&iLocal_123, 3, -1))
			{
				if (func_594(&iLocal_123, 1, -1))
				{
					if (unk_0xAAB7D68F04F8C8BA("APT_PRE_COUNTDOWN_STOP"))
					{
						unk_0x8810DC630928B398("APT_PRE_COUNTDOWN_STOP");
						func_594(&iLocal_123, 1, 0);
					}
				}
			}
			if (func_594(&iLocal_123, 4, -1))
			{
				if ((!func_594(&iLocal_123, 7, -1) && !func_594(&iLocal_123, 5, -1)) && !(func_516() || iLocal_98 != 3))
				{
					if (unk_0xAAB7D68F04F8C8BA("APT_COUNTDOWN_30S"))
					{
						unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 1);
						unk_0x8810DC630928B398("APT_COUNTDOWN_30S");
						func_594(&iLocal_123, 7, 1);
					}
				}
				if ((!func_594(&iLocal_123, 6, -1) && !func_594(&iLocal_123, 5, -1)) && func_594(&iLocal_123, 7, -1))
				{
					unk_0x22456E02F195550C(0);
					func_594(&iLocal_123, 6, 1);
				}
			}
			break;
		
		case 2:
			if (!func_594(&iLocal_123, 8, -1) && func_594(&iLocal_123, 7, -1))
			{
				if (unk_0xAAB7D68F04F8C8BA("APT_FADE_IN_RADIO"))
				{
					unk_0x8810DC630928B398("APT_FADE_IN_RADIO");
					func_594(&iLocal_123, 8, 1);
				}
			}
			if (func_594(&iLocal_123, 1, -1))
			{
				if (unk_0xAAB7D68F04F8C8BA("BG_HUNT_STOP"))
				{
					unk_0xF4D9AAA3F4BCC684("APT_COUNTDOWN_30S_KILL");
					unk_0x8810DC630928B398("BG_HUNT_STOP");
					func_594(&iLocal_123, 1, 0);
				}
			}
			if (func_594(&iLocal_123, 7, -1) && !func_594(&iLocal_123, 2, -1))
			{
				if (unk_0xAAB7D68F04F8C8BA("APT_COUNTDOWN_30S_KILL"))
				{
					func_594(&iLocal_123, 7, 0);
					unk_0x8810DC630928B398("APT_COUNTDOWN_30S_KILL");
				}
			}
			if (func_594(&iLocal_123, 11, -1))
			{
				func_587(0);
			}
			break;
	}
	if (func_594(&iLocal_123, 6, -1) && (func_594(&iLocal_123, 5, -1) || func_589(unk_0x622FF3AE4B1D07C3()) == 2))
	{
		unk_0x22456E02F195550C(1);
		unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 0);
		func_594(&iLocal_123, 6, 0);
	}
	if (func_21(&(Local_125.f_16)) && func_595(Local_125.f_16, 10000, 0))
	{
		if (!func_594(&iLocal_123, 10, -1))
		{
			iLocal_122 = unk_0xD0CA83418A236CB4();
			unk_0x4AFBCBFDE748D4E0(iLocal_122, "10s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
			func_594(&iLocal_123, 10, 1);
		}
	}
	else if (func_594(&iLocal_123, 10, -1))
	{
		unk_0x0B9D04994D02CC2F(iLocal_122);
		iLocal_122 = -1;
		func_594(&iLocal_123, 10, 0);
	}
}

void func_587(bool bParam0)//Position - 0x1A147
{
	if (bParam0)
	{
		unk_0x1B5A255BF0D63005("DisableFlightMusic", 1);
		unk_0x1B5A255BF0D63005("WantedMusicDisabled", 1);
		func_594(&iLocal_123, 11, 1);
	}
	else
	{
		unk_0x1B5A255BF0D63005("DisableFlightMusic", 0);
		unk_0x1B5A255BF0D63005("WantedMusicDisabled", 0);
		func_594(&iLocal_123, 11, 0);
	}
}

char* func_588(bool bParam0, char* sParam1, char* sParam2)//Position - 0x1A18F
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_589(int iParam0)//Position - 0x1A1A6
{
	return vLocal_126[iParam0 /*3*/].f_1;
}

bool func_590()//Position - 0x1A1B6
{
	return func_591(func_16(), 1);
}

int func_591(int iParam0, bool bParam1)//Position - 0x1A1C7
{
	return func_576(unk_0x9EB17624F44A8DA4(), iParam0, bParam1);
}

int func_592(int iParam0, int iParam1, var uParam2, bool bParam3, float fParam4, bool bParam5)//Position - 0x1A1DB
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = unk_0x25D049AAC4603E65(iParam0);
	fVar1 = func_593(bParam3, 30f, 0f);
	fVar2 = 4f;
	if (!unk_0x6ADD12BF4D6D2587(iVar0))
	{
		return 0;
	}
	*uParam2 = func_15(iVar0, Local_125.f_7, 0);
	if (*uParam2 > (IntToFloat(iParam1) + (fVar1 * fVar2)))
	{
		return 0;
	}
	fVar3 = unk_0x20D66D71CF476CDB(iVar0);
	*uParam2 = func_14(*uParam2, fVar3);
	if (fVar3 > (fParam4 + fVar1) && !bParam5)
	{
		return 0;
	}
	return 1;
}

float func_593(bool bParam0, float fParam1, float fParam2)//Position - 0x1A25A
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_594(int iParam0, int iParam1, int iParam2)//Position - 0x1A271
{
	bool bVar0;
	
	bVar0 = unk_0xC80D31E4B587871C(*iParam0, iParam1);
	if (iParam2 == 0)
	{
		unk_0x0EE72DB1CD8A3B86(iParam0, iParam1);
	}
	else if (iParam2 == 1)
	{
		unk_0x872F1C1F8587CCC7(iParam0, iParam1);
	}
	return bVar0;
}

int func_595(int iParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x1A2A5
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0x3A711520F83BAE98() && !bParam3)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_596()//Position - 0x1A2F8
{
	switch (vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_1)
	{
		case 1:
			if (func_585())
			{
				if (!unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 3))
				{
					if (func_597(82, "GB_INTTXT_HBB", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						unk_0x872F1C1F8587CCC7(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 3);
					}
				}
			}
			else if (func_576(unk_0x9EB17624F44A8DA4(), func_16(), 0))
			{
				if (!unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 3))
				{
					if (func_597(82, "GB_INTTXT_HBG", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						unk_0x872F1C1F8587CCC7(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 3);
					}
				}
			}
			break;
	}
}

int func_597(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x1A3A0
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_598(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3030 = iParam6;
			Global_2933[3 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
			Global_3010 = iParam0;
			unk_0x872F1C1F8587CCC7(&Global_2323, 1);
			unk_0x872F1C1F8587CCC7(&Global_2323, 7);
		}
		return 1;
	}
	return 0;
}

int func_598(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x1A438
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x74C475EB8E73D398(sParam14, sParam15))
	{
	}
	func_608();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14453 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14453 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14453 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502()))
			{
				return 0;
			}
		}
		if (Global_104555.f_14021[Global_14453 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_607() == 0)
	{
		func_605();
		return 0;
	}
	func_604(Global_16823);
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/]), sParam1, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_104555.f_14111[Global_16823 /*104*/].f_24 = iParam2;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_25 = iParam7;
	Global_104555.f_14111[Global_16823 /*104*/].f_26 = uParam8;
	Global_104555.f_14111[Global_16823 /*104*/].f_29 = uParam9;
	Global_104555.f_14111[Global_16823 /*104*/].f_30 = uParam12;
	Global_104555.f_14111[Global_16823 /*104*/].f_31 = uParam11;
	Global_104555.f_14111[Global_16823 /*104*/].f_28 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_33), sParam4, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_50), sParam5, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_83), sParam15, 64);
	if (unk_0xC80D31E4B587871C(Global_2323, 10))
	{
		Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 1;
		Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 1;
		Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 1;
		Global_3029 = 4;
		func_603(0);
		func_603(2);
		func_603(1);
	}
	else
	{
		func_608();
		switch (iParam16)
		{
			case 3:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[Global_14453] = 1;
				break;
			
			case 0:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14453)
			{
				case 0:
					func_603(0);
					Global_3029 = 0;
					break;
				
				case 1:
					func_603(1);
					Global_3029 = 1;
					break;
				
				case 2:
					func_603(2);
					Global_3029 = 2;
					break;
				
				case 3:
					func_603(3);
					Global_3029 = 3;
					break;
				
				default:
					Global_3029 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xC80D31E4B587871C(Global_2323, 10))
		{
			Global_104555.f_14021[0 /*20*/].f_17 = 1;
			Global_104555.f_14021[1 /*20*/].f_17 = 1;
			Global_104555.f_14021[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_104555.f_14021[Global_14453 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_104555.f_14021[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_104555.f_14021[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_104555.f_14021[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16825[Global_16823] = 0;
	if (bParam10)
	{
		func_608();
		if (Global_14396)
		{
			StringCopy(&Global_14442, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14453)
			{
				case 0:
					StringCopy(&Global_14442, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14442, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14442, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14442, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_533())
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Text_Arrive_Tone", &Global_14442, true);
			}
		}
	}
	if (!Global_14616)
	{
		if (Global_14453.f_1 == 6)
		{
			func_602(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_599(1);
			func_602(Global_14434, "DISPLAY_VIEW", 1f, system::to_float(Global_14433), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_599(int iParam0)//Position - 0x1A8EF
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
	
	Global_16824 = 0;
	Global_2928 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2892[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_601(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 3))
								{
									iVar2 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14619 = 0;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_388(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar2);
								unk_0x271AA5469AF471B3();
							}
							if (Global_2456825)
							{
								if (iVar1 == 14)
								{
									func_600(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_104555.f_14111[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104555.f_14111[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104555.f_14111[iVar3 /*104*/].f_99[Global_14453] == 1)
											{
												Global_16824++;
											}
										}
									}
									iVar3++;
								}
								func_600(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16824), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70856)
								{
									iVar4 = 0;
									iVar4 = Global_4265877;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4265878[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4265878[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4265878[iVar5 /*104*/].f_99[Global_14453] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_600(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar4), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14453)
									{
										case 0:
											iVar6 = Global_36998;
											break;
										
										case 1:
											iVar6 = Global_36999;
											break;
										
										case 2:
											iVar6 = Global_37000;
											break;
										
										default:
											break;
									}
									func_600(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar6), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_600(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_388(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(Global_2329);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_388(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar7);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 3))
								{
									iVar8 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14619 = 0;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_388(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar8);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 8)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_388(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if ((iVar1 == 23 && unk_0x74C475EB8E73D398(&(Global_2330[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xC80D31E4B587871C(Global_2324, 6))
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_388(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if (Global_2330[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626277.f_1;
								func_600(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_600(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(0), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_600(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1AE95
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
		func_388(sParam7);
	}
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		func_388(sParam8);
	}
	if (!unk_0xAB019B170BF1309C(sParam9))
	{
		func_388(sParam9);
	}
	if (!unk_0xAB019B170BF1309C(sParam10))
	{
		func_388(sParam10);
	}
	if (!unk_0xAB019B170BF1309C(sParam11))
	{
		func_388(sParam11);
	}
	unk_0x271AA5469AF471B3();
}

bool func_601(int iParam0)//Position - 0x1AF48
{
	return Global_35861 == iParam0;
}

void func_602(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x1AF56
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
	unk_0x271AA5469AF471B3();
}

void func_603(int iParam0)//Position - 0x1AFB9
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_104555.f_14021[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_604(int iParam0)//Position - 0x1AFD8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x2F31FD7674CB6CD3();
	iVar1 = unk_0x95327550F0F2BE7C();
	iVar2 = unk_0x674C9438180770FE();
	iVar3 = unk_0xD3ECC7A5C90D3AA4();
	uVar4 = unk_0xEAF455949B108589() + 1;
	iVar5 = unk_0x93F322D6E98835CC();
	Global_104555.f_14111[iParam0 /*104*/].f_18 = iVar0;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_605()//Position - 0x1B06A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70856)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16823 = 34;
	Global_104555.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_606(Global_104555.f_14111[iVar2 /*104*/].f_18, Global_104555.f_14111[Global_16823 /*104*/].f_18))
		{
			Global_16823 = iVar2;
		}
		iVar2++;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_24 = 1;
}

int func_606(struct<6> Param0, struct<6> Param1)//Position - 0x1B135
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
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

int func_607()//Position - 0x1B220
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70856)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 0)
		{
			Global_16823 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16823 = 34;
	Global_104555.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 0 || Global_104555.f_14111[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_606(Global_104555.f_14111[iVar2 /*104*/].f_18, Global_104555.f_14111[Global_16823 /*104*/].f_18))
			{
				Global_16823 = iVar2;
			}
		}
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16823 == 34)
	{
		return 0;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 0;
	return 1;
}

void func_608()//Position - 0x1B388
{
	if (func_601(14))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_609();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70856)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

var func_609()//Position - 0x1B42A
{
	func_610();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_610()//Position - 0x1B443
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_613(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_612(unk_0xFC1458A37D98B502());
			if (func_611(iVar0) && (!func_601(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_611(Global_104555.f_2353.f_539.f_4301))
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

bool func_611(int iParam0)//Position - 0x1B540
{
	return iParam0 < 3;
}

int func_612(int iParam0)//Position - 0x1B54C
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_613(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_613(int iParam0)//Position - 0x1B589
{
	if (func_611(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_614()//Position - 0x1B5B3
{
	if (func_516())
	{
		if (func_634())
		{
			func_633();
		}
		return;
	}
	if (iLocal_98 != 3)
	{
		if (func_634())
		{
			func_633();
		}
		return;
	}
	switch (func_589(unk_0x622FF3AE4B1D07C3()))
	{
		case 0:
			break;
		
		case 1:
			if (func_585())
			{
				if (func_21(&(Local_125.f_16)))
				{
					if (!func_631("GB_HTB_OT4"))
					{
						func_630("GB_HTB_OT4", 0);
					}
				}
				else if (!func_631("GB_HTB_OT1"))
				{
					func_630("GB_HTB_OT1", 0);
				}
			}
			else if (func_576(unk_0x9EB17624F44A8DA4(), func_16(), 0))
			{
				if (iLocal_98 == 3)
				{
					if (!func_631("GB_HTB_OT2"))
					{
						func_627("GB_HTB_OT2", "GB_BOSS_LC", iLocal_99, 0);
					}
				}
			}
			else if (func_541(unk_0x622FF3AE4B1D07C3()))
			{
				if (!func_631("GB_HTB_OT3"))
				{
					if (func_5(Local_125.f_5, 0, 1))
					{
						func_615("GB_HTB_OT3", Local_125.f_5, "GB_BOSS_LC", iLocal_99, 0);
					}
				}
			}
			break;
		
		case 2:
			if (func_634())
			{
				func_633();
			}
			break;
		
		case 3:
			if (func_634())
			{
				func_633();
			}
			break;
	}
}

void func_615(char* sParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)//Position - 0x1B6D8
{
	if (func_616(sParam0, unk_0xDE2D3B9654C31EB3(iParam1), sParam2, bParam4, iParam3))
	{
		Global_1312576 = 14;
		Global_1312576.f_56 = iParam3;
		Global_1312576.f_54 = iParam1;
	}
}

int func_616(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)//Position - 0x1B70B
{
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam1) > 63)
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam2))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam2) > 63)
	{
		return 0;
	}
	if (func_626(sParam0, sParam1, sParam2) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	func_620();
	Global_1312576 = 10;
	StringCopy(&(Global_1312576.f_1), unk_0x436287B7DB306165(), 32);
	Global_1312576.f_9 = unk_0x8B948C59217A295D(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	StringCopy(&(Global_1312576.f_32), sParam2, 64);
	Global_1312576.f_58 = uParam4;
	Global_1312576.f_56 = uParam4;
	func_619();
	func_618(bParam3);
	func_617();
	return 1;
}

void func_617()//Position - 0x1B7ED
{
	unk_0x872F1C1F8587CCC7(&(Global_1312576.f_59), 1);
}

void func_618(bool bParam0)//Position - 0x1B800
{
	if (bParam0)
	{
		unk_0x872F1C1F8587CCC7(&(Global_1312576.f_59), 0);
		return;
	}
	unk_0x0EE72DB1CD8A3B86(&(Global_1312576.f_59), 0);
}

void func_619()//Position - 0x1B826
{
	Global_1312576.f_10 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), 86400000);
	Global_1312576.f_11 = unk_0xD1952A425B78FFC0();
}

void func_620()//Position - 0x1B84B
{
	func_622();
	func_621(0);
}

void func_621(bool bParam0)//Position - 0x1B85C
{
	bool bVar0;
	
	bVar0 = unk_0x3A711520F83BAE98();
	Global_1312576 = 20;
	StringCopy(&(Global_1312576.f_1), "", 32);
	Global_1312576.f_9 = 0;
	if (bVar0)
	{
		Global_1312576.f_10 = unk_0xD1952A425B78FFC0();
		Global_1312576.f_11 = unk_0xD1952A425B78FFC0();
	}
	StringCopy(&(Global_1312576.f_12), "", 16);
	StringCopy(&(Global_1312576.f_16), "", 64);
	StringCopy(&(Global_1312576.f_32), "", 64);
	Global_1312576.f_52 = 0;
	Global_1312576.f_53 = 0;
	Global_1312576.f_54 = 0;
	Global_1312576.f_55 = -1;
	Global_1312576.f_56 = 0;
	Global_1312576.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_622()//Position - 0x1B8F2
{
	if (!func_625())
	{
	}
	if (func_624())
	{
		unk_0x08EE7E0EF8FAFD9F(&(Global_1312576.f_12));
		func_623();
		unk_0x0BD2F1A526F1459A();
	}
}

void func_623()//Position - 0x1B91B
{
	switch (Global_1312576)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6223D539BCD39E76(Global_1312576.f_52);
			return;
		
		case 2:
			unk_0x6223D539BCD39E76(Global_1312576.f_52);
			unk_0x6223D539BCD39E76(Global_1312576.f_53);
			return;
		
		case 3:
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 4:
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 5:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			return;
		
		case 6:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			return;
		
		case 7:
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 8:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 9:
			unk_0x4ADDDBC65685A05E(&(Global_1312576.f_16));
			return;
		
		case 10:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_32));
			return;
		
		case 12:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 13:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_57);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 11:
			unk_0x4ADDDBC65685A05E(&(Global_1312576.f_16));
			return;
		
		case 14:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 15:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_57);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 17:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_32));
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_48));
			return;
		
		case 16:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			return;
		
		case 19:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 18:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_48));
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_32));
			return;
		
		default:
	}
}

int func_624()//Position - 0x1BB8D
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

int func_625()//Position - 0x1BBA3
{
	if (!func_624())
	{
		return 0;
	}
	unk_0x4AF56F03659830D9(&(Global_1312576.f_12));
	func_623();
	return unk_0xC20F7134D3568246();
}

bool func_626(char* sParam0, char* sParam1, char* sParam2)//Position - 0x1BBC9
{
	if (!func_624())
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam2))
	{
		return 0;
	}
	if (!unk_0x8B948C59217A295D(sParam0) == unk_0x8B948C59217A295D(&(Global_1312576.f_12)))
	{
		return 0;
	}
	if (!unk_0x8B948C59217A295D(sParam1) == unk_0x8B948C59217A295D(&(Global_1312576.f_16)))
	{
		return 0;
	}
	return unk_0x8B948C59217A295D(sParam2) == unk_0x8B948C59217A295D(&(Global_1312576.f_32));
}

void func_627(char* sParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x1BC47
{
	if (func_628(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312576 = 19;
		Global_1312576.f_56 = iParam2;
	}
}

int func_628(char* sParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x1BC6C
{
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return 0;
	}
	if (func_629(sParam0, sParam1) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	func_620();
	Global_1312576 = 3;
	StringCopy(&(Global_1312576.f_1), unk_0x436287B7DB306165(), 32);
	Global_1312576.f_9 = unk_0x8B948C59217A295D(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	Global_1312576.f_58 = uParam3;
	Global_1312576.f_56 = uParam3;
	func_619();
	func_618(bParam2);
	func_617();
	return 1;
}

bool func_629(char* sParam0, char* sParam1)//Position - 0x1BD16
{
	if (!func_624())
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return 0;
	}
	if (!unk_0x8B948C59217A295D(sParam0) == unk_0x8B948C59217A295D(&(Global_1312576.f_12)))
	{
		return 0;
	}
	return unk_0x8B948C59217A295D(sParam1) == unk_0x8B948C59217A295D(&(Global_1312576.f_16));
}

void func_630(char* sParam0, bool bParam1)//Position - 0x1BD6E
{
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return;
	}
	if (unk_0xFDD8E897FECD2912(sParam0) > 23)
	{
		return;
	}
	if (func_631(sParam0))
	{
		return;
	}
	func_620();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), unk_0x436287B7DB306165(), 32);
	Global_1312576.f_9 = unk_0x8B948C59217A295D(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_619();
	func_618(bParam1);
	func_617();
}

bool func_631(char* sParam0)//Position - 0x1BDD9
{
	if (!func_624())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_632(sParam0);
	}
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	return unk_0x8B948C59217A295D(sParam0) == unk_0x8B948C59217A295D(&(Global_1312576.f_12));
}

bool func_632(char* sParam0)//Position - 0x1BE1D
{
	if (!func_624())
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	return unk_0x8B948C59217A295D(sParam0) == unk_0x8B948C59217A295D(&(Global_1312576.f_16));
}

void func_633()//Position - 0x1BE4F
{
	if (!func_624())
	{
		return;
	}
	if (!unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == Global_1312576.f_9)
	{
		return;
	}
	func_620();
}

int func_634()//Position - 0x1BE7C
{
	if (!func_624())
	{
		return 0;
	}
	if (!unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == Global_1312576.f_9)
	{
		return 0;
	}
	return 1;
}

void func_635()//Position - 0x1BEA8
{
	int iVar0;
	
	if (func_516())
	{
		return;
	}
	if (iLocal_98 != 3)
	{
		return;
	}
	switch (func_589(unk_0x622FF3AE4B1D07C3()))
	{
		case 0:
			break;
		
		case 1:
			if (func_585())
			{
				if (func_21(&(Local_125.f_16)))
				{
					iVar0 = (20000 - func_639(&(Local_125.f_16), 0, 0));
					if (iVar0 > 0)
					{
						func_636(iVar0, "GB_HTB_TM2", 0, 0, 20000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_636(0, "GB_HTB_TM2", 0, 0, 0, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					return;
				}
			}
			if (func_21(&(Local_125.f_12)))
			{
				iVar0 = (Global_262145.f_11830 - func_639(&(Local_125.f_12), 0, 0));
				if (iVar0 > 0)
				{
					func_636(iVar0, "GB_WORK_END", 0, 0, 0, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				else
				{
					func_636(0, "GB_WORK_END", 0, 0, 0, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (iLocal_98 == 2 || iLocal_98 == 3)
			{
				if (func_21(&(Local_125.f_14)))
				{
					func_636(0, "GB_WORK_END", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
	}
}

void func_636(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x1BFD9
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_638(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_637(7, iVar0);
		Global_1359035.f_4388[iVar0] = iParam0;
		StringCopy(&(Global_1359035.f_4388.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_4388.f_172[iVar0] = iParam2;
		Global_1359035.f_4388.f_216[iVar0] = iParam3;
		Global_1359035.f_4388.f_183[iVar0] = iParam4;
		Global_1359035.f_4388.f_194[iVar0] = iParam5;
		Global_1359035.f_4388.f_249[iVar0] = iParam6;
		Global_1359035.f_4388.f_260[iVar0] = iParam7;
		Global_1359035.f_4388.f_205[iVar0] = iParam8;
		Global_1359035.f_4388.f_314[iVar0] = iParam9;
		Global_1359035.f_4388.f_325[iVar0] = iParam10;
		Global_1359035.f_4388.f_357[iVar0] = iParam11;
		Global_1359035.f_4388.f_238[iVar0] = iParam12;
		Global_1359035.f_4388.f_271[iVar0] = iParam13;
		Global_1359035.f_4388.f_368[iVar0] = iParam14;
		Global_1359035.f_4388.f_379[iVar0] = iParam15;
		Global_1359035.f_4388.f_390[iVar0] = iParam16;
	}
}

void func_637(int iParam0, int iParam1)//Position - 0x1C129
{
	unk_0x872F1C1F8587CCC7(&(Global_1359035.f_6119[iParam0]), iParam1);
}

bool func_638(int iParam0, int iParam1)//Position - 0x1C142
{
	return unk_0xC80D31E4B587871C(Global_1359035.f_6119[iParam0], iParam1);
}

int func_639(var uParam0, bool bParam1, bool bParam2)//Position - 0x1C15B
{
	if (unk_0x3A711520F83BAE98() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0);
		}
		else
		{
			return unk_0x38F6270C9AE5FE40(unk_0xEBD55014C579F626(), *uParam0);
		}
	}
	return unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), *uParam0);
}

void func_640()//Position - 0x1C1A2
{
	var uVar0;
	int iVar1;
	
	if (func_516())
	{
		func_657();
		return;
	}
	switch (vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_1)
	{
		case 0:
			if (!func_17(Local_125.f_7))
			{
				if (func_576(unk_0x9EB17624F44A8DA4(), func_16(), 1))
				{
					if (func_656(unk_0x9EB17624F44A8DA4(), Global_262145.f_11834, &uVar0, 1123024896, 0))
					{
						if (unk_0xA6DECE14FC9A8C51(iLocal_108))
						{
							unk_0xE30CF11C0EE14316(&iLocal_108);
						}
					}
					else if (!unk_0xA6DECE14FC9A8C51(iLocal_108))
					{
						iLocal_108 = unk_0x6F4378873333A0C2(Local_125.f_7);
						unk_0x9C27373CC69ECF87(iLocal_108, true);
						unk_0x62BD54E491535B76(iLocal_108, "GB_HTB_BLIP1");
						unk_0x0A8FD2D5529E1737(iLocal_108, 1);
						unk_0xAA75C45BC4449A40(iLocal_108, 7000);
						unk_0x4B4040A0EC7DBA81(iLocal_108, 458);
						unk_0xF27F72CA15E148EE(iLocal_108, 12);
						unk_0xA5D25D3F884FF516(iLocal_108, Global_262145.f_11695);
						func_655(&iLocal_108, iLocal_99);
					}
					if (!unk_0xA6DECE14FC9A8C51(iLocal_107))
					{
						iLocal_107 = unk_0xDC4AED8949A17F4B(Local_125.f_7, system::to_float((Global_262145.f_11834 - 1)));
						func_655(&iLocal_107, iLocal_99);
						unk_0x9C27373CC69ECF87(iLocal_107, true);
						unk_0x103AA766DC1F5AAF(iLocal_107, 1);
						unk_0x62BD54E491535B76(iLocal_107, "GB_HTB_BLIP0");
					}
					if (func_654(Local_125.f_5) != iLocal_111)
					{
						iLocal_111 = func_654(Local_125.f_5);
						unk_0xF20857E4CB32A2B7(iLocal_107, iLocal_111);
					}
				}
			}
			break;
		
		case 1:
			if (func_585())
			{
				func_652();
				if (!unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 4))
				{
					if (!func_21(&(Local_125.f_16)) && !func_21(&(Local_125.f_18)))
					{
						if (!unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 2))
						{
							func_651(1, 0);
							unk_0x872F1C1F8587CCC7(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 2);
						}
					}
					else if (unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 2))
					{
						func_651(0, 0);
						unk_0x0EE72DB1CD8A3B86(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 2);
					}
				}
			}
			else
			{
				func_650();
				if (!func_576(unk_0x9EB17624F44A8DA4(), func_16(), 0))
				{
					if (bLocal_114)
					{
						if (vLocal_126[unk_0x87678BB8392EFD41(Local_125.f_5) /*3*/].f_1 == 1 && !unk_0xC80D31E4B587871C(vLocal_126[unk_0x87678BB8392EFD41(Local_125.f_5) /*3*/].f_2, 2))
						{
							if (!unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 10))
							{
								func_648(Local_125.f_5, 432, 1);
								func_643(Local_125.f_5, func_647(iLocal_99), 1);
								if (func_5(func_16(), 1, 1))
								{
									func_641(Local_125.f_5, 1, 0);
								}
								unk_0x872F1C1F8587CCC7(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 10);
							}
						}
						else if (unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 10))
						{
							func_648(Local_125.f_5, 432, 0);
							func_643(Local_125.f_5, func_647(iLocal_99), 0);
							if (func_5(func_16(), 1, 1))
							{
								func_641(Local_125.f_5, 0, 0);
							}
							unk_0x0EE72DB1CD8A3B86(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 10);
						}
					}
				}
			}
			if (!func_17(Local_125.f_7))
			{
				if (func_656(unk_0x9EB17624F44A8DA4(), Global_262145.f_11834, &uVar0, 1123024896, 0))
				{
					if (unk_0xA6DECE14FC9A8C51(iLocal_108))
					{
						unk_0xE30CF11C0EE14316(&iLocal_108);
					}
				}
				else if (!unk_0xA6DECE14FC9A8C51(iLocal_108))
				{
					iLocal_108 = unk_0x6F4378873333A0C2(Local_125.f_7);
					unk_0x9C27373CC69ECF87(iLocal_108, true);
					unk_0x62BD54E491535B76(iLocal_108, "GB_HTB_BLIP1");
					unk_0x0A8FD2D5529E1737(iLocal_108, 1);
					unk_0xAA75C45BC4449A40(iLocal_108, 7000);
					unk_0x4B4040A0EC7DBA81(iLocal_108, 458);
					unk_0xF27F72CA15E148EE(iLocal_108, 12);
					unk_0xA5D25D3F884FF516(iLocal_108, Global_262145.f_11695);
					func_655(&iLocal_108, iLocal_99);
				}
				if (!unk_0xA6DECE14FC9A8C51(iLocal_107))
				{
					iLocal_107 = unk_0xDC4AED8949A17F4B(Local_125.f_7, system::to_float((Global_262145.f_11834 - 1)));
					func_655(&iLocal_107, iLocal_99);
					unk_0x9C27373CC69ECF87(iLocal_107, true);
					unk_0x103AA766DC1F5AAF(iLocal_107, 1);
					unk_0x62BD54E491535B76(iLocal_107, "GB_HTB_BLIP0");
					unk_0xF20857E4CB32A2B7(iLocal_107, Global_262145.f_11579);
				}
				if (func_576(unk_0x9EB17624F44A8DA4(), func_16(), 1) || func_223(unk_0x9EB17624F44A8DA4(), 1))
				{
					if (func_223(unk_0x9EB17624F44A8DA4(), 1))
					{
						iVar1 = func_84(unk_0x9EB17624F44A8DA4());
					}
					else
					{
						iVar1 = Local_125.f_5;
					}
					if (func_654(iVar1) != iLocal_111)
					{
						iLocal_111 = func_654(iVar1);
						unk_0xF20857E4CB32A2B7(iLocal_107, iLocal_111);
					}
				}
			}
			break;
		
		case 2:
		case 3:
			func_657();
			break;
	}
}

void func_641(int iParam0, bool bParam1, bool bParam2)//Position - 0x1C5B6
{
	if (bParam1)
	{
		if (func_5(iParam0, 1, 1))
		{
			Global_2415606.f_710[iParam0] = unk_0xBBA15366508D1BDE();
			unk_0x872F1C1F8587CCC7(&(Global_2415606.f_364), iParam0);
			func_642(iParam0, bParam2);
		}
	}
	else
	{
		func_642(iParam0, bParam2);
		unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_364), iParam0);
		Global_2415606.f_710[iParam0] = -1;
	}
}

void func_642(int iParam0, bool bParam1)//Position - 0x1C619
{
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_2415606.f_365), iParam0);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_365), iParam0);
	}
	if (unk_0xA6DECE14FC9A8C51(Global_2415606[iParam0]))
	{
		if (bParam1)
		{
			unk_0x66DAED36FB41050D(Global_2415606[iParam0], false);
		}
		else
		{
			unk_0x66DAED36FB41050D(Global_2415606[iParam0], true);
		}
	}
}

void func_643(int iParam0, var uParam1, bool bParam2)//Position - 0x1C674
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return;
	}
	if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == func_645())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_644(iParam0))
	{
		if (bParam2)
		{
			unk_0x872F1C1F8587CCC7(&(Global_2415606.f_386), iVar0);
			Global_2415606.f_611[iParam0] = unk_0xBBA15366508D1BDE();
			Global_2415606.f_446[iVar0] = uParam1;
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_386), iVar0);
			Global_2415606.f_611[iParam0] = -1;
		}
	}
}

int func_644(int iParam0)//Position - 0x1C6F4
{
	if (!unk_0x8F05914DD835E69F(Global_2415606.f_611[iParam0]) || Global_2415606.f_611[iParam0] == unk_0xBBA15366508D1BDE())
	{
		return 1;
	}
	return 0;
}

int func_645()//Position - 0x1C72A
{
	switch (func_646())
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

int func_646()//Position - 0x1C75E
{
	return Global_25233;
}

int func_647(int iParam0)//Position - 0x1C769
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0x31758B9A51671C43(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_648(int iParam0, int iParam1, bool bParam2)//Position - 0x1C9D1
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_11())
	{
		return;
	}
	if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == func_645())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0x8F05914DD835E69F(Global_2415606.f_578[iParam0]) || Global_2415606.f_578[iParam0] == unk_0xBBA15366508D1BDE())
	{
		if (bParam2)
		{
			if (!unk_0xC80D31E4B587871C(Global_2415606.f_385, iVar0))
			{
				func_649();
			}
			unk_0x872F1C1F8587CCC7(&(Global_2415606.f_385), iVar0);
			Global_2415606.f_413[iVar0] = uVar1;
			Global_2415606.f_578[iParam0] = unk_0xBBA15366508D1BDE();
		}
		else
		{
			if (unk_0xC80D31E4B587871C(Global_2415606.f_385, iVar0))
			{
				func_649();
			}
			unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_385), iVar0);
			Global_2415606.f_578[iParam0] = -1;
		}
	}
}

void func_649()//Position - 0x1CA9E
{
	Global_2415606.f_1009 = 1;
}

void func_650()//Position - 0x1CAAE
{
	if (unk_0xC80D31E4B587871C(vLocal_126[func_16() /*3*/].f_2, 4))
	{
		if (!unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 9))
		{
			if (func_16() != func_125())
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Boss_Blipped", "GTAO_Magnate_Hunt_Boss_SoundSet", false);
				unk_0x872F1C1F8587CCC7(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 9);
			}
		}
	}
	else if (unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 9))
	{
		unk_0x0EE72DB1CD8A3B86(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 9);
	}
}

void func_651(bool bParam0, bool bParam1)//Position - 0x1CB2B
{
	if ((!unk_0x8F05914DD835E69F(Global_2415606.f_994) || Global_2415606.f_994 == unk_0xBBA15366508D1BDE()) || bParam1)
	{
		if (bParam0)
		{
			Global_2415606.f_994 = unk_0xBBA15366508D1BDE();
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_77.f_2), 23);
		}
		else
		{
			Global_2415606.f_994 = -1;
			unk_0x0EE72DB1CD8A3B86(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_77.f_2), 23);
		}
	}
	else if (!bParam1)
	{
	}
}

void func_652()//Position - 0x1CBAA
{
	if (!func_585())
	{
		return;
	}
	if (func_21(&(Local_125.f_16)) && func_21(&(Local_125.f_18)))
	{
		if (func_21(&uLocal_120))
		{
			func_8(&uLocal_120);
		}
		return;
	}
	if (!func_21(&uLocal_118) && !func_21(&uLocal_120))
	{
		vLocal_116 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		func_20(&uLocal_118, 0, 0);
		iLocal_117 = 0;
	}
	else if (func_21(&uLocal_120))
	{
		if (unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 2))
		{
			func_651(0, 0);
			unk_0x0EE72DB1CD8A3B86(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 2);
		}
		if (func_19(&uLocal_120, system::round(Global_262145.f_11833), 0))
		{
			func_8(&uLocal_120);
			unk_0x0EE72DB1CD8A3B86(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 4);
			func_653(0, -1, 500, 500, 0);
			if (!unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 2))
			{
				func_651(1, 0);
				unk_0x872F1C1F8587CCC7(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 2);
			}
		}
	}
	else if (func_639(&uLocal_118, 0, 0) > (500 * iLocal_117))
	{
		if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_116) > IntToFloat(Global_262145.f_11831))
		{
			func_8(&uLocal_118);
			if (unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 4))
			{
				func_20(&uLocal_120, 0, 0);
			}
		}
		else if (IntToFloat(func_639(&uLocal_118, 0, 0)) > Global_262145.f_11832)
		{
			if (unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 2))
			{
				func_651(0, 0);
				unk_0x0EE72DB1CD8A3B86(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 2);
				func_578(7);
				func_653(1, -1, 2147483647, 0, 0);
			}
			if (!unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 4))
			{
				unk_0x872F1C1F8587CCC7(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 4);
			}
		}
		iLocal_117++;
	}
}

void func_653(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1CD70
{
	if ((!unk_0x8F05914DD835E69F(Global_2415606.f_972) || Global_2415606.f_972 == unk_0xBBA15366508D1BDE()) || bParam4)
	{
		if (bParam0)
		{
			Global_2415606.f_972 = unk_0xBBA15366508D1BDE();
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_77.f_2), 19);
			Global_2415606.f_973 = unk_0xD1952A425B78FFC0();
		}
		else
		{
			Global_2415606.f_972 = -1;
			unk_0x0EE72DB1CD8A3B86(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_77.f_2), 19);
		}
		Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_77.f_4 = iParam2;
		Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_77.f_5 = iParam3;
		Global_2415606.f_975 = iParam1;
	}
	else if (!bParam4)
	{
	}
}

int func_654(int iParam0)//Position - 0x1CE25
{
	var uVar0;
	
	if (iParam0 != func_11())
	{
		if (!func_17(Local_125.f_7))
		{
			if (func_656(iParam0, Global_262145.f_11834, &uVar0, 1123024896, 0))
			{
				return 70;
			}
		}
	}
	return Global_262145.f_11579;
}

void func_655(int iParam0, int iParam1)//Position - 0x1CE68
{
	int iVar0;
	
	if (unk_0xA6DECE14FC9A8C51(*iParam0))
	{
		iVar0 = func_647(iParam1);
		unk_0x0C71C8E276E3EC54(*iParam0, iVar0);
	}
}

int func_656(int iParam0, int iParam1, var uParam2, float fParam3, bool bParam4)//Position - 0x1CE8E
{
	int iVar0;
	float fVar1;
	
	iVar0 = unk_0x25D049AAC4603E65(iParam0);
	if (!unk_0x6ADD12BF4D6D2587(iVar0))
	{
		return 0;
	}
	*uParam2 = func_15(iVar0, Local_125.f_7, 0);
	if (*uParam2 > IntToFloat(iParam1))
	{
		return 0;
	}
	fVar1 = unk_0x20D66D71CF476CDB(iVar0);
	*uParam2 = func_14(*uParam2, fVar1);
	if (fVar1 > fParam3 && !bParam4)
	{
		return 0;
	}
	return 1;
}

void func_657()//Position - 0x1CEF3
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_107))
	{
		unk_0xE30CF11C0EE14316(&iLocal_107);
	}
	if (unk_0xA6DECE14FC9A8C51(iLocal_108))
	{
		unk_0xE30CF11C0EE14316(&iLocal_108);
	}
	if (unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 10))
	{
		func_648(Local_125.f_5, 432, 0);
		func_643(Local_125.f_5, func_647(iLocal_99), 0);
		func_641(Local_125.f_5, 0, 0);
		unk_0x0EE72DB1CD8A3B86(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 10);
	}
}

void func_658()//Position - 0x1CF61
{
	int iVar0;
	int iVar1;
	
	switch (func_589(unk_0x622FF3AE4B1D07C3()))
	{
		case 1:
			iVar0 = 0;
			while (iVar0 < unk_0xAAEEFEC091D0E30B(1))
			{
				iVar1 = unk_0xA387B84DA2EB1BEE(1, iVar0);
				if (iVar1 == 182)
				{
					func_659(iVar0);
				}
				iVar0++;
			}
			break;
	}
}

void func_659(int iParam0)//Position - 0x1CFAB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	int iVar5;
	
	iVar2 = func_11();
	iVar3 = func_11();
	unk_0x575EF325DA5E3F04(1, iParam0, &Var4, 11);
	if (unk_0x6ADD12BF4D6D2587(Var4))
	{
		if (unk_0x52C56492660097C7(Var4))
		{
			iVar0 = unk_0x07F64790D10D1DB5(Var4);
			if (unk_0x1417A5CC924DE120(iVar0))
			{
				iVar2 = unk_0xDF35170AEEFB473B(iVar0);
				if (unk_0xDE597476C8B96D1A(iVar2))
				{
					if (iVar2 != func_11())
					{
						if (func_5(iVar2, 0, 0))
						{
						}
					}
				}
			}
		}
	}
	if (iVar2 == func_16())
	{
		if (unk_0x6ADD12BF4D6D2587(Var4.f_1))
		{
			if (unk_0x52C56492660097C7(Var4.f_1))
			{
				iVar1 = unk_0x07F64790D10D1DB5(Var4.f_1);
				if (unk_0x1417A5CC924DE120(iVar1))
				{
					iVar3 = unk_0xDF35170AEEFB473B(iVar1);
					if (unk_0xDE597476C8B96D1A(iVar3))
					{
						if (unk_0xC80D31E4B587871C(vLocal_126[unk_0x87678BB8392EFD41(iVar3) /*3*/].f_2, 0))
						{
							if (iVar3 != func_11())
							{
								if (func_5(iVar3, 0, 0))
								{
								}
							}
						}
						else
						{
							return;
						}
					}
					else
					{
						return;
					}
				}
			}
		}
		if (iVar3 == unk_0x9EB17624F44A8DA4())
		{
			if (!func_576(unk_0x9EB17624F44A8DA4(), func_16(), 1))
			{
				if (!unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 8))
				{
					func_544();
					unk_0x872F1C1F8587CCC7(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 8);
				}
			}
		}
		if (!Var4.f_3)
		{
			if (unk_0x9EB17624F44A8DA4() == iVar3)
			{
				if (!func_371(unk_0x9EB17624F44A8DA4(), 20))
				{
					func_660(0);
				}
			}
		}
		else
		{
			if (!unk_0x8E1421E2A2A2FBD4())
			{
				return;
			}
			if (iVar3 == iVar2)
			{
				return;
			}
			if (iVar3 != func_11())
			{
				Local_125.f_6 = iVar3;
				unk_0x872F1C1F8587CCC7(&(Local_125.f_2), 3);
				func_18(2);
			}
		}
	}
	else if (iVar2 != func_11() && func_223(iVar2, 0))
	{
		iVar5 = func_84(iVar2);
		if (iVar5 == Local_125.f_5)
		{
			if (unk_0x6ADD12BF4D6D2587(Var4.f_1))
			{
				if (unk_0x52C56492660097C7(Var4.f_1))
				{
					iVar1 = unk_0x07F64790D10D1DB5(Var4.f_1);
					if (unk_0x1417A5CC924DE120(iVar1))
					{
						iVar3 = unk_0xDF35170AEEFB473B(iVar1);
						if (unk_0xDE597476C8B96D1A(iVar3))
						{
							if (iVar3 != func_11())
							{
								if (func_5(iVar3, 0, 0))
								{
								}
							}
						}
					}
				}
			}
			if (iVar3 == unk_0x9EB17624F44A8DA4())
			{
				if (!func_576(unk_0x9EB17624F44A8DA4(), func_16(), 1))
				{
					if (!unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 8))
					{
						func_544();
						unk_0x872F1C1F8587CCC7(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 8);
					}
				}
			}
		}
	}
}

void func_660(int iParam0)//Position - 0x1D1DF
{
	if (!func_75(unk_0x9EB17624F44A8DA4()))
	{
		if (iParam0 || func_62(unk_0x9EB17624F44A8DA4()) != 0)
		{
			func_79(20);
			if (func_77(unk_0x9EB17624F44A8DA4()))
			{
				if (!unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 8))
				{
					unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 8);
				}
			}
		}
	}
}

void func_661()//Position - 0x1D246
{
	var uVar0;
	
	switch (vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_1)
	{
		case 1:
			if (func_656(unk_0x9EB17624F44A8DA4(), (Global_262145.f_11834 - 1), &uVar0, 1123024896, 0))
			{
				if (!unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 8))
				{
					func_544();
					unk_0x872F1C1F8587CCC7(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 8);
				}
			}
			break;
	}
}

void func_662()//Position - 0x1D2AA
{
	var uVar0;
	
	if (!func_17(Local_125.f_7))
	{
		if (Local_125.f_1 >= 1 || func_125() == Local_125.f_5)
		{
			func_687(164, Local_125.f_7, &uLocal_113, 1140457472, 1144750080, 0);
		}
		if (iLocal_98 != func_62(unk_0x9EB17624F44A8DA4()))
		{
			iLocal_98 = func_62(unk_0x9EB17624F44A8DA4());
		}
	}
	if (func_585())
	{
		if (func_677())
		{
			if (!unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 11))
			{
				unk_0x872F1C1F8587CCC7(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 11);
			}
		}
	}
	switch (func_589(unk_0x622FF3AE4B1D07C3()))
	{
		case 1:
			bLocal_115 = (func_67() || func_672(func_585()));
			if (bLocal_115)
			{
				if (unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 0))
				{
					unk_0x0EE72DB1CD8A3B86(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 0);
					if (func_585())
					{
						func_666(0, 0);
						func_665(2);
					}
				}
			}
			else if (func_656(unk_0x9EB17624F44A8DA4(), 500, &uVar0, 1123024896, 0))
			{
				if (!unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 0))
				{
					unk_0x872F1C1F8587CCC7(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 0);
					if (func_585())
					{
						func_666(1, 0);
						func_665(2);
					}
				}
			}
			else if (unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 0))
			{
				unk_0x0EE72DB1CD8A3B86(&(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 0);
				if (func_585())
				{
					func_666(0, 0);
					func_664(2);
				}
			}
			if (!func_663())
			{
				if (func_656(unk_0x9EB17624F44A8DA4(), Global_262145.f_11834, &uVar0, 1123024896, 0))
				{
					if (!func_371(unk_0x9EB17624F44A8DA4(), 20))
					{
						func_660(0);
					}
				}
			}
			break;
	}
}

int func_663()//Position - 0x1D454
{
	if (func_576(unk_0x9EB17624F44A8DA4(), func_16(), 1))
	{
		return 1;
	}
	return 0;
}

void func_664(int iParam0)//Position - 0x1D471
{
	unk_0x0EE72DB1CD8A3B86(&Global_1573340, iParam0);
}

void func_665(int iParam0)//Position - 0x1D483
{
	unk_0x872F1C1F8587CCC7(&Global_1573340, iParam0);
}

void func_666(bool bParam0, bool bParam1)//Position - 0x1D495
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		func_667(iVar0, bParam0, bParam1);
		iVar0++;
	}
}

void func_667(int iParam0, bool bParam1, bool bParam2)//Position - 0x1D4BA
{
	if (bParam1)
	{
		if (!func_671(iParam0, 8, 1))
		{
			func_670(iParam0, 8, 1);
		}
		if (bParam2)
		{
			if (!func_671(iParam0, 30, 1))
			{
				func_670(iParam0, 30, 1);
			}
		}
		else if (func_671(iParam0, 30, 1))
		{
			func_668(iParam0, 30, 1);
		}
	}
	else
	{
		if (func_671(iParam0, 8, 1))
		{
			func_668(iParam0, 8, 1);
		}
		if (func_671(iParam0, 30, 1))
		{
			func_668(iParam0, 30, 1);
		}
	}
}

void func_668(int iParam0, int iParam1, bool bParam2)//Position - 0x1D53D
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_646() == 0)
		{
			iVar0 = func_28(func_669(iParam0), -1, 0);
			unk_0x0EE72DB1CD8A3B86(&iVar0, iParam1);
			func_25(func_669(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

int func_669(int iParam0)//Position - 0x1D5A6
{
	switch (iParam0)
	{
		case 0:
			return 824;
			break;
		
		case 1:
			return 825;
			break;
		
		case 2:
			return 826;
			break;
		
		case 3:
			return 827;
			break;
		
		case 4:
			return 828;
			break;
		
		case 5:
			return 829;
			break;
		
		case 6:
			return 830;
			break;
		
		case 7:
			return 831;
			break;
		
		case 8:
			return 832;
			break;
		
		case 9:
			return 833;
			break;
		
		case 10:
			return 834;
			break;
		
		case 11:
			return 835;
			break;
		
		case 12:
			return 836;
			break;
		
		case 13:
			return 837;
			break;
		
		case 14:
			return 838;
			break;
		
		case 15:
			return 840;
			break;
		
		case 16:
			return 841;
			break;
		
		case 17:
			return 842;
			break;
		
		case 18:
			return 843;
			break;
		
		case 19:
			return 844;
			break;
		
		case 20:
			return 845;
			break;
		
		case 21:
			return 846;
			break;
		
		case 22:
			return 847;
			break;
		
		case 23:
			return 848;
			break;
		
		case 24:
			return 849;
			break;
		
		case 25:
			return 850;
			break;
		
		case 26:
			return 851;
			break;
		
		case 27:
			return 852;
			break;
		
		case 28:
			return 853;
			break;
		
		case 29:
			return 854;
			break;
		
		case 30:
			return 855;
			break;
		
		case 31:
			return 856;
			break;
		
		case 32:
			return 857;
			break;
		
		case 33:
			return 858;
			break;
		
		case 34:
			return 859;
			break;
		
		case 35:
			return 860;
			break;
		
		case 36:
			return 861;
			break;
		
		case 37:
			return 862;
			break;
		
		case 38:
			return 863;
			break;
		
		case 39:
			return 864;
			break;
		
		case 40:
			return 868;
			break;
		
		case 41:
			return 869;
			break;
		
		case 42:
			return 870;
			break;
		
		case 43:
			return 871;
			break;
		
		case 44:
			return 7013;
			break;
		
		case 45:
			return 3791;
			break;
		
		case 46:
			return 5366;
			break;
		
		case 47:
			return 6138;
			break;
		
		default:
			break;
	}
	return 7872;
}

void func_670(int iParam0, int iParam1, bool bParam2)//Position - 0x1D88B
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_646() == 0)
		{
			iVar0 = func_28(func_669(iParam0), -1, 0);
			unk_0x872F1C1F8587CCC7(&iVar0, iParam1);
			func_25(func_669(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

int func_671(int iParam0, int iParam1, bool bParam2)//Position - 0x1D8F4
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_646() == 0)
		{
			return unk_0xC80D31E4B587871C(func_28(func_669(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_672(bool bParam0)//Position - 0x1D954
{
	if (bParam0)
	{
		return 0;
	}
	if (func_531(unk_0x9EB17624F44A8DA4(), 0, 0, 0, 0, 0, 0, 0, 1))
	{
		return 1;
	}
	if (func_673(4))
	{
		return 1;
	}
	if (func_476())
	{
		return 1;
	}
	if (func_70(unk_0x9EB17624F44A8DA4(), 0))
	{
		return 1;
	}
	if (func_522())
	{
		return 1;
	}
	if (unk_0x78E929955680CA05())
	{
		return 1;
	}
	return 0;
}

int func_673(int iParam0)//Position - 0x1D9BA
{
	int iVar0;
	
	if (func_676())
	{
		iVar0 = 0;
		while (iVar0 < 48)
		{
			if (func_675(iVar0) == iParam0)
			{
				if (func_674(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_674(int iParam0)//Position - 0x1D9F5
{
	return func_671(iParam0, 5, 1);
}

int func_675(int iParam0)//Position - 0x1DA05
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
	}
	return 6;
}

bool func_676()//Position - 0x1DC92
{
	return Global_92885.f_315 > 0;
}

int func_677()//Position - 0x1DCA3
{
	if (((((((((func_686() || func_685()) || func_684()) || func_476()) || (func_683() && !unk_0x4916190900E76373())) || (func_680() && !func_679())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_678() == 2 && !unk_0x4916190900E76373()))
	{
		return 1;
	}
	return 0;
}

int func_678()//Position - 0x1DD37
{
	return Global_979886;
}

bool func_679()//Position - 0x1DD43
{
	return unk_0xC80D31E4B587871C(Global_2447174.f_2, 27);
}

int func_680()//Position - 0x1DD57
{
	if (func_682() || func_681())
	{
		return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_98 == 8;
	}
	return 0;
}

var func_681()//Position - 0x1DD84
{
	return Global_2447174.f_622;
}

bool func_682()//Position - 0x1DD93
{
	return unk_0xC80D31E4B587871C(Global_2447174.f_2, 11);
}

bool func_683()//Position - 0x1DDA7
{
	return unk_0xC80D31E4B587871C(Global_2447174, 5);
}

bool func_684()//Position - 0x1DDB8
{
	return unk_0xC80D31E4B587871C(Global_2447174, 2);
}

bool func_685()//Position - 0x1DDC9
{
	return unk_0xC80D31E4B587871C(Global_2447174, 20);
}

bool func_686()//Position - 0x1DDDB
{
	return Global_2447174.f_586;
}

void func_687(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, int iParam5)//Position - 0x1DDEA
{
	float fVar0;
	float fVar1;
	
	if (((func_77(unk_0x9EB17624F44A8DA4()) && !func_76(unk_0x9EB17624F44A8DA4())) && !unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 8)) && (func_66(unk_0x9EB17624F44A8DA4()) || func_65(unk_0x9EB17624F44A8DA4())))
	{
		return;
	}
	Global_1667858 = { vParam1 };
	fVar0 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vParam1);
	func_723(iParam0, fVar0);
	if (unk_0x0F30C1F1717A6437() && unk_0x8B7838D25C063186() == 15)
	{
		if (func_64(unk_0x9EB17624F44A8DA4()) || func_722(unk_0x9EB17624F44A8DA4()))
		{
			if (!unk_0x6D93C18E2EF22A46(1344549371))
			{
				unk_0xAC101DB143C83824(1344549371);
			}
		}
		else if (unk_0x6D93C18E2EF22A46(1344549371))
		{
			unk_0x4C5AB0B8B9B71C4B(1344549371);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!func_70(unk_0x9EB17624F44A8DA4(), 21))
		{
			func_721(vParam1, 1, 0);
		}
		if (!*uParam2 && func_5(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			*uParam2 = 1;
			if (func_720(iParam0))
			{
				unk_0x94BD6F0436473406(func_719(iParam0));
				if (func_718(iParam0, -1))
				{
					unk_0xC0EBC1452FCAB15C(0);
					if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
					{
						unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 1);
						unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 1);
					}
					unk_0x872F1C1F8587CCC7(&(Global_1667858.f_3), 0);
				}
			}
			if (func_717(iParam0))
			{
				fVar1 = func_716(iParam0);
				if (fVar1 != 1f)
				{
					func_715(fVar1);
					unk_0x872F1C1F8587CCC7(&(Global_1667858.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_714(iParam0) && func_64(unk_0x9EB17624F44A8DA4()))
				{
					func_712(1);
					func_711(2);
				}
			}
			func_79(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_371(unk_0x9EB17624F44A8DA4(), 19))
			{
				func_69(19);
			}
		}
		if (*uParam2 && func_5(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			*uParam2 = 0;
			if (func_720(iParam0))
			{
				if (unk_0xC80D31E4B587871C(Global_1667858.f_3, 0))
				{
					unk_0x94BD6F0436473406(1f);
					unk_0xC0EBC1452FCAB15C(5);
					unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 0);
				}
			}
			if (func_717(iParam0))
			{
				func_710();
				unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 1);
			}
			if (iParam5 && !func_77(unk_0x9EB17624F44A8DA4()))
			{
				if (func_44(unk_0x9EB17624F44A8DA4()) != 152)
				{
					func_689();
				}
			}
			if (func_181(2))
			{
				func_712(0);
				func_688(2);
			}
		}
	}
}

void func_688(int iParam0)//Position - 0x1E04F
{
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4856.f_34), iParam0);
}

void func_689()//Position - 0x1E066
{
	unk_0x94A09BF8588CB706(&(Global_2405047.f_24), &Global_2409103, 2);
	unk_0x94A09BF8588CB706(&(Global_2405047.f_26), &Global_2409105, 18);
	func_708();
	func_692(1, 1, 0);
	func_690();
}

void func_690()//Position - 0x1E09C
{
	func_691(0, 0);
}

void func_691(int iParam0, int iParam1)//Position - 0x1E0AA
{
	Global_2405047.f_22 = iParam0;
	Global_2405047.f_23 = iParam1;
}

void func_692(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1E0C2
{
	if (bParam1)
	{
		unk_0x94A09BF8588CB706(&(Global_2405047.f_44), &Global_2409123, 317);
	}
	else
	{
		Global_2405047.f_44 = { Global_2409123 };
		Global_2405047.f_44.f_49 = { Global_2409123.f_49 };
		Global_2405047.f_44.f_52 = Global_2409123.f_52;
		Global_2405047.f_44.f_53 = Global_2409123.f_53;
	}
	if (bParam0)
	{
		func_707();
	}
	if (!bParam2)
	{
		func_695(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_694(0);
	func_693();
}

void func_693()//Position - 0x1E161
{
	struct<6> Var0;
	
	if (Global_2405047.f_483.f_1 == unk_0xBBA15366508D1BDE())
	{
		Global_2405047.f_483 = { Var0 };
	}
}

void func_694(bool bParam0)//Position - 0x1E186
{
	if (bParam0)
	{
		Global_2405047.f_686 = 0;
	}
	else
	{
		Global_2405047.f_686 = 1;
	}
}

void func_695(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x1E1A6
{
	if (bParam0)
	{
		if (func_706())
		{
			func_705();
		}
		Global_2405047.f_687.f_515 = unk_0xBBA15366508D1BDE();
		Global_2405047.f_687.f_504 = iParam1;
		Global_2405047.f_687.f_505 = iParam2;
		Global_2405047.f_687.f_506 = iParam10;
		func_703();
		func_699(8, 0, 0, 0, 0);
		Global_2405047.f_687.f_507 = iParam11;
		Global_2405047.f_687.f_510 = iParam3;
		Global_2405047.f_687.f_511 = iParam4;
		Global_2405047.f_687.f_508 = iParam5;
		Global_2405047.f_687.f_509 = iParam6;
		Global_2405047.f_687.f_512 = iParam7;
		Global_2405047.f_687.f_513 = iParam8;
		Global_2405047.f_687.f_514 = iParam9;
		Global_2405047.f_1720 = 1;
	}
	else
	{
		func_696();
	}
}

void func_696()//Position - 0x1E26D
{
	if (func_706() && !func_698())
	{
		func_705();
	}
	if (func_698())
	{
		func_697();
	}
	else
	{
		func_703();
		func_699(0, 0, 0, 0, 0);
		Global_2405047.f_1720 = 0;
		Global_2405047.f_1719 = 0;
	}
}

void func_697()//Position - 0x1E2B5
{
	unk_0x94A09BF8588CB706(&(Global_2405047.f_687), &(Global_2405047.f_1203), 516);
	Global_2405047.f_483 = { Global_2405047.f_489 };
	if (unk_0xBBA15366508D1BDE() == Global_2405047.f_687.f_515)
	{
		Global_2405047.f_1719 = 0;
	}
}

int func_698()//Position - 0x1E2FD
{
	if ((Global_2405047.f_1719 && !unk_0xBBA15366508D1BDE() == Global_2405047.f_1203.f_515) && unk_0x8F05914DD835E69F(Global_2405047.f_1203.f_515))
	{
		return 1;
	}
	return 0;
}

void func_699(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1E33C
{
	if (Global_2436181.f_1777.f_690.f_16 != func_11())
	{
		if (unk_0xC80D31E4B587871C(Global_2422736[Global_2436181.f_1777.f_690.f_16 /*420*/].f_414, 0) && func_700())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412213 = 0;
	}
	Global_2405047.f_483 = iParam0;
	Global_2405047.f_483.f_1 = unk_0xBBA15366508D1BDE();
	Global_2405047.f_483.f_2 = iParam1;
	Global_2405047.f_483.f_3 = iParam2;
	Global_2405047.f_483.f_4 = iParam3;
	Global_2405047.f_483.f_5 = iParam4;
}

int func_700()//Position - 0x1E3DB
{
	if (((func_44(unk_0x9EB17624F44A8DA4()) == 229 || func_44(unk_0x9EB17624F44A8DA4()) == 191) || func_702()) || func_701())
	{
		return 0;
	}
	return 1;
}

var func_701()//Position - 0x1E41B
{
	return Global_1574307;
}

int func_702()//Position - 0x1E427
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_703()//Position - 0x1E43C
{
	if (func_706() && !func_698())
	{
		func_705();
	}
	func_704();
	Global_2405047.f_687 = 0;
}

void func_704()//Position - 0x1E465
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405047.f_687.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_705()//Position - 0x1E4A0
{
	if (func_698())
	{
		if (Global_2405047.f_687.f_515 == Global_2405047.f_1203.f_515)
		{
			return;
		}
	}
	if (!unk_0xBBA15366508D1BDE() == Global_2405047.f_687.f_515)
	{
		unk_0x94A09BF8588CB706(&(Global_2405047.f_1203), &(Global_2405047.f_687), 516);
		Global_2405047.f_489 = { Global_2405047.f_483 };
		Global_2405047.f_1719 = 1;
	}
}

int func_706()//Position - 0x1E50E
{
	if ((Global_2405047.f_1720 && !unk_0xBBA15366508D1BDE() == Global_2405047.f_687.f_515) && unk_0x8F05914DD835E69F(Global_2405047.f_687.f_515))
	{
		return 1;
	}
	return 0;
}

void func_707()//Position - 0x1E54D
{
	unk_0x94A09BF8588CB706(&(Global_2405047.f_361), &Global_2409440, 121);
}

void func_708()//Position - 0x1E566
{
	func_709();
	Global_2405047.f_2229 = 0;
}

void func_709()//Position - 0x1E57A
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405047.f_2230[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_710()//Position - 0x1E5A6
{
	if (unk_0x8F05914DD835E69F(Global_2512808.f_4852))
	{
		if (!Global_2512808.f_4852 == unk_0xBBA15366508D1BDE() && Global_2512808.f_4851 < 1f)
		{
			return;
		}
	}
	Global_2512808.f_4852 = -1;
	Global_2512808.f_4851 = 1f;
}

void func_711(int iParam0)//Position - 0x1E5ED
{
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4856.f_34), iParam0);
}

void func_712(int iParam0)//Position - 0x1E604
{
	if (func_713() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_713()//Position - 0x1E639
{
	if ((((Global_979886 != -1 && Global_979886 != 33) && Global_979886 != 35) && Global_979886 != 37) && Global_979886 != 21)
	{
		return 1;
	}
	return 0;
}

int func_714(int iParam0)//Position - 0x1E67F
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_715(float fParam0)//Position - 0x1E6CF
{
	float fVar0;
	
	if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == func_645())
	{
		return;
	}
	fVar0 = (Global_2512808.f_4851 - fParam0);
	if (unk_0x8F05914DD835E69F(Global_2512808.f_4852))
	{
		if (!Global_2512808.f_4852 == unk_0xBBA15366508D1BDE() && unk_0xE97272C977DEADD3(fVar0) > 0,001f)
		{
			return;
		}
	}
	Global_2512808.f_4851 = fParam0;
	Global_2512808.f_4852 = unk_0xBBA15366508D1BDE();
}

float func_716(int iParam0)//Position - 0x1E73B
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_717(int iParam0)//Position - 0x1E893
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_718(int iParam0, int iParam1)//Position - 0x1E91F
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_719(int iParam0)//Position - 0x1EA64
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_720(int iParam0)//Position - 0x1EAE0
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

void func_721(vector3 vParam0, int iParam1, int iParam2)//Position - 0x1EBA2
{
	Global_2405047.f_44.f_49 = { vParam0 };
	Global_2405047.f_44.f_52 = iParam1;
	Global_2405047.f_44.f_53 = iParam2;
}

int func_722(int iParam0)//Position - 0x1EBCC
{
	if (func_108(iParam0))
	{
		if (func_64(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_723(int iParam0, float fParam1)//Position - 0x1EBEB
{
	int iVar0;
	
	iVar0 = func_724(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_544();
	}
}

int func_724(int iParam0)//Position - 0x1EC11
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_11862;
		
		case 142:
			return Global_262145.f_11850;
		
		case 157:
			return Global_262145.f_11817;
		
		case 159:
			return Global_262145.f_11800;
		
		case 162:
			return Global_262145.f_11911;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

void func_725()//Position - 0x1EC87
{
	switch (func_728())
	{
		case 1:
			if (func_589(unk_0x622FF3AE4B1D07C3()) != 1)
			{
				func_727(func_663());
				func_726(1);
			}
			break;
		
		case 2:
			if (func_589(unk_0x622FF3AE4B1D07C3()) != 2)
			{
				func_727(func_663());
				func_726(2);
			}
			break;
		
		case 3:
			if (func_589(unk_0x622FF3AE4B1D07C3()) != 3)
			{
				func_727(func_663());
				func_726(3);
			}
			break;
	}
}

void func_726(int iParam0)//Position - 0x1ECFE
{
	vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_1 = iParam0;
}

void func_727(bool bParam0)//Position - 0x1ED12
{
	if (bParam0)
	{
		if (!func_371(unk_0x9EB17624F44A8DA4(), 9))
		{
			if (func_62(unk_0x9EB17624F44A8DA4()) != 0)
			{
				func_79(9);
			}
		}
	}
	else if (func_371(unk_0x9EB17624F44A8DA4(), 9))
	{
		func_69(9);
	}
}

int func_728()//Position - 0x1ED58
{
	return Local_125.f_1;
}

void func_729()//Position - 0x1ED64
{
	iLocal_98 = func_62(unk_0x9EB17624F44A8DA4());
	func_730(164, 1, -1, 0);
	iLocal_99 = func_197(Local_125.f_5, -2, 0, 0);
	unk_0x31758B9A51671C43(iLocal_99, &(uLocal_112[0]), &(uLocal_112[1]), &(uLocal_112[2]), &(uLocal_112[3]));
}

void func_730(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1EDA8
{
	float fVar0;
	
	if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 != iParam0)
	{
		func_744(-1);
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 = iParam0;
		if (func_743() != -1)
		{
			func_742(-1);
		}
		if (func_741() != -1)
		{
			func_740(-1);
		}
		func_739(iParam2);
		func_737(iParam0);
		if (!func_717(iParam0))
		{
			fVar0 = func_716(iParam0);
			if (fVar0 != 1f)
			{
				func_715(fVar0);
				unk_0x872F1C1F8587CCC7(&(Global_1667858.f_3), 1);
			}
		}
		if (!func_720(iParam0) || iParam3)
		{
			if (func_718(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0xC0EBC1452FCAB15C(0);
				if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
					unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
				}
				unk_0x872F1C1F8587CCC7(&(Global_1667858.f_3), 0);
			}
			else if (unk_0xB89B7DB2727D69D6() < 5)
			{
				unk_0x94BD6F0436473406(1f);
				unk_0xC0EBC1452FCAB15C(5);
			}
		}
		if (func_74())
		{
			func_79(27);
		}
		if (bParam1)
		{
			if (!func_67())
			{
				func_712(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xC80D31E4B587871C(Global_2512808.f_4523, 1) || unk_0xC80D31E4B587871C(Global_2512808.f_4523, 4)) || unk_0xC80D31E4B587871C(Global_2512808.f_4523, 0))
			{
				func_187(6);
			}
			func_736();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0x1D29C781A978C4FB(3, false);
			unk_0x1D29C781A978C4FB(5, false);
		}
		if (func_77(unk_0x9EB17624F44A8DA4()) && func_64(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 8);
		}
		func_732();
		if (func_731(iParam0))
		{
			unk_0x1D29C781A978C4FB(3, false);
			unk_0x1D29C781A978C4FB(5, false);
			unk_0x872F1C1F8587CCC7(&(Global_1667858.f_3), 6);
		}
	}
}

int func_731(int iParam0)//Position - 0x1EFA7
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_732()//Position - 0x1EFF1
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_735();
	iVar2 = func_84(unk_0x9EB17624F44A8DA4());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xF6A72924028F588B(iVar0);
		if (unk_0x552F39AE86E07792(iVar1))
		{
			if (func_576(iVar1, iVar2, 1) || func_733(iVar1, unk_0x9EB17624F44A8DA4()))
			{
				unk_0x16BF46A5B08AE23D(unk_0x9EB17624F44A8DA4(), iVar1, bVar3);
				unk_0x16BF46A5B08AE23D(iVar1, unk_0x9EB17624F44A8DA4(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_733(int iParam0, int iParam1)//Position - 0x1F061
{
	if (func_223(iParam0, 1) && func_223(iParam1, 1))
	{
		return (func_734(iParam0) == func_84(iParam1) || func_734(iParam1) == func_84(iParam0));
	}
	return 0;
}

int func_734(int iParam0)//Position - 0x1F0A3
{
	if (func_223(iParam0, 1))
	{
		return Global_1627537[func_84(iParam0) /*532*/].f_11.f_443;
	}
	return func_11();
}

int func_735()//Position - 0x1F0CE
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_125();
	if (iVar0 != func_11())
	{
		if (func_5(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xC80D31E4B587871C(Global_1627537[iVar1 /*532*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_736()//Position - 0x1F10F
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4523, 1))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4523), 1);
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4523, 4))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4523), 4);
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4523, 6))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4523), 6);
	}
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4523), 0);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4523), 2);
	Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_578 = 0;
	if (Global_2512808.f_4525 > 0)
	{
		unk_0xC0EBC1452FCAB15C(Global_2512808.f_4525);
	}
	Global_2512808.f_4524 = 0;
}

void func_737(int iParam0)//Position - 0x1F1AD
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_28(3774, -1, 0);
	iVar1 = func_738(iParam0);
	if (iVar1 != -1)
	{
		unk_0x872F1C1F8587CCC7(&iVar0, iVar1);
		func_25(3774, iVar0, -1, 1, 0);
	}
}

int func_738(int iParam0)//Position - 0x1F1E2
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_739(int iParam0)//Position - 0x1F279
{
	int iVar0;
	
	iVar0 = unk_0x9EB17624F44A8DA4();
	if (Global_1627537[iVar0 /*532*/].f_11.f_176 != iParam0)
	{
		Global_1627537[iVar0 /*532*/].f_11.f_176 = iParam0;
	}
}

void func_740(int iParam0)//Position - 0x1F2A8
{
	if (Global_2512808.f_4856.f_158 != iParam0)
	{
		Global_2512808.f_4856.f_158 = iParam0;
	}
}

int func_741()//Position - 0x1F2C9
{
	return Global_2512808.f_4856.f_158;
}

void func_742(int iParam0)//Position - 0x1F2DA
{
	if (Global_2512808.f_4856.f_157 != iParam0)
	{
		Global_2512808.f_4856.f_157 = iParam0;
	}
}

int func_743()//Position - 0x1F2FB
{
	return Global_2512808.f_4856.f_157;
}

void func_744(int iParam0)//Position - 0x1F30C
{
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_32 = iParam0;
}

void func_745(int iParam0)//Position - 0x1F325
{
	vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/] = iParam0;
}

int func_746()//Position - 0x1F337
{
	return Local_125;
}

int func_747(int iParam0)//Position - 0x1F341
{
	return vLocal_126[iParam0 /*3*/];
}

int func_748(bool bParam0)//Position - 0x1F34F
{
	if (func_749(1))
	{
		return 1;
	}
	if (Global_2512808.f_4856.f_30)
	{
		Global_2512808.f_4856.f_30 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_29() == func_11() || !func_5(func_29(), 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_749(bool bParam0)//Position - 0x1F3A4
{
	bool bVar0;
	
	if (!func_123(1))
	{
		bVar0 = false;
		if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57 != func_11())
		{
			if (func_5(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57, 0, 1))
			{
				if ((Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_24 == 4 || Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_24 == 8) || Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_750(func_44(unk_0x9EB17624F44A8DA4())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_187(31);
				if (func_47(func_44(unk_0x9EB17624F44A8DA4())))
				{
					func_187(81);
				}
				if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57 != func_11() && unk_0x552F39AE86E07792(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57))
				{
					Global_1626121 = func_197(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57, -2, 0, 0);
					if (!func_40(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57))
					{
						func_187(88);
					}
				}
				else
				{
					Global_1626121 = 1;
				}
				Global_1626105 = { Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_99 };
			}
			return 1;
		}
	}
	return 0;
}

int func_750(int iParam0)//Position - 0x1F4F5
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_751()//Position - 0x1F66D
{
	var uVar0;
	
	func_755(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_754())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_753())
	{
		return 1;
	}
	if (func_752(157))
	{
		if (!func_686())
		{
			return 1;
		}
	}
	if (func_752(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_645() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_645()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_752(int iParam0)//Position - 0x1F6F7
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_753()//Position - 0x1F70E
{
	return Global_2456830;
}

bool func_754()//Position - 0x1F71A
{
	return Global_2447174.f_581;
}

void func_755(var uParam0)//Position - 0x1F729
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
					func_756(iVar0);
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

void func_756(int iParam0)//Position - 0x1F79C
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_5(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_757(iVar2, &bVar3))
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

int func_757(int iParam0, var uParam1)//Position - 0x1F81D
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

void func_758()//Position - 0x1F87C
{
	system::wait(0);
}

void func_759()//Position - 0x1F889
{
	if (func_585())
	{
		if (func_543(unk_0x9EB17624F44A8DA4(), 0))
		{
			func_300(unk_0x9EB17624F44A8DA4(), 0);
		}
	}
	if (unk_0x622FF3AE4B1D07C3() != -1)
	{
		if (unk_0xC80D31E4B587871C(vLocal_126[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 7))
		{
			func_302(0, 4, 0, 0, -1, -1, -1, -1, -1);
		}
	}
	if (func_807(2))
	{
		func_664(2);
	}
	if (func_594(&iLocal_123, 10, -1))
	{
		unk_0x0B9D04994D02CC2F(iLocal_122);
		iLocal_122 = -1;
		func_594(&iLocal_123, 10, 0);
	}
	if (func_594(&iLocal_123, 11, -1))
	{
		func_587(0);
	}
	Global_1667867.f_2 = Local_125.f_20;
	Global_1667867.f_3 = Local_125.f_21;
	func_805(Local_125.f_4, -1, -1, -1082130432);
	func_666(0, 0);
	func_760(0, 0);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_760(bool bParam0, int iParam1)//Position - 0x1F944
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1347666.f_1.f_108 != 0)
	{
		Global_1347666.f_1.f_108 = 0;
	}
	Global_1347666.f_1.f_109 = -1;
	Global_1347666.f_1.f_110 = -1;
	if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 == 167 || Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 == 168)
	{
		func_803();
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 4);
	}
	if ((func_121() && iParam1 != 0) && Global_262145.f_16305)
	{
		if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 == 190 || Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 == 192)
		{
			func_785(unk_0x9EB17624F44A8DA4(), iParam1, 1, 0);
		}
	}
	if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 == 164 || Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 == 208)
	{
		unk_0x1D29C781A978C4FB(3, true);
		unk_0x1D29C781A978C4FB(5, true);
	}
	if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 != -1)
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 = -1;
		if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 14) && !func_77(unk_0x9EB17624F44A8DA4()))
		{
			func_712(0);
		}
	}
	else if (func_783(unk_0x9EB17624F44A8DA4()) != -1)
	{
		func_744(-1);
	}
	func_782(func_11());
	if (func_181(16))
	{
		func_688(16);
	}
	func_779(0);
	func_739(-1);
	func_778();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_777(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_774(iVar1);
		iVar1++;
	}
	if (unk_0xC80D31E4B587871C(Global_1667858.f_3, 0))
	{
		unk_0x94BD6F0436473406(1f);
		unk_0xC0EBC1452FCAB15C(5);
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 0);
	}
	if (unk_0xC80D31E4B587871C(Global_1667858.f_3, 5))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 5);
	}
	iVar2 = func_56();
	if ((func_36(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_773(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_96(iVar2))
	{
		func_769(-1, 1);
	}
	else if (((((func_55(iVar2) || func_768(iVar2)) || func_767(iVar2)) || func_89(iVar2)) || func_88(iVar2)) || func_87(iVar2))
	{
	}
	else
	{
		func_769(-1, 1);
	}
	func_69(19);
	func_69(20);
	func_69(21);
	func_69(22);
	func_69(27);
	func_688(3);
	func_688(4);
	func_688(7);
	func_766();
	if (func_64(unk_0x9EB17624F44A8DA4()))
	{
		func_727(0);
	}
	func_69(29);
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57 = func_11();
	if (Global_2512808.f_4856.f_30 != 0)
	{
		Global_2512808.f_4856.f_30 = 0;
	}
	if (bParam0)
	{
		func_689();
	}
	if (!func_77(unk_0x9EB17624F44A8DA4()))
	{
		func_710();
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 1);
	}
	if (unk_0xC80D31E4B587871C(Global_1667858.f_3, 6))
	{
		unk_0x1D29C781A978C4FB(3, true);
		unk_0x1D29C781A978C4FB(5, true);
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 6);
	}
	if (unk_0xC80D31E4B587871C(Global_1667858.f_3, 7))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 7);
	}
	if (unk_0xC80D31E4B587871C(Global_1667858.f_3, 8))
	{
		func_765("IMPEXP_SELFDES", 0);
		func_763("IMPEXP_SELFDES");
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 8);
	}
	func_761(iVar2, 0);
}

void func_761(int iParam0, bool bParam1)//Position - 0x1FCDD
{
	if (bParam1)
	{
		if (!unk_0xC80D31E4B587871C(Global_1667858.f_3, 9))
		{
			unk_0xE859EF37EA7362D3(func_762(iParam0));
			unk_0x872F1C1F8587CCC7(&(Global_1667858.f_3), 9);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_1667858.f_3, 9))
	{
		unk_0xE02E32C69260FBB7(func_762(iParam0));
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 9);
	}
}

char* func_762(int iParam0)//Position - 0x1FD39
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_763(char* sParam0)//Position - 0x1FDB4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x8C1C362CA8299475(&(Global_104555.f_14111[iVar0 /*104*/])))
		{
			if (unk_0x74C475EB8E73D398(&(Global_104555.f_14111[iVar0 /*104*/]), sParam0))
			{
				if (Global_104555.f_14111[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_608();
					Global_104555.f_14111[iVar0 /*104*/].f_99[Global_14453] = 0;
					if (func_764(iVar0))
					{
					}
					else
					{
						Global_104555.f_14111[iVar0 /*104*/].f_24 = 0;
						Global_104555.f_14111[iVar0 /*104*/].f_28 = 0;
						Global_104555.f_14111[iVar0 /*104*/].f_29 = 0;
					}
					unk_0x4B1D93E1A14A667F(Global_104555.f_14111[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_764(int iParam0)//Position - 0x1FE68
{
	if ((Global_104555.f_14111[iParam0 /*104*/].f_99[0] == 1 || Global_104555.f_14111[iParam0 /*104*/].f_99[1] == 1) || Global_104555.f_14111[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_765(char* sParam0, int iParam1)//Position - 0x1FEBD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x8C1C362CA8299475(&(Global_104555.f_14111[iVar0 /*104*/])))
		{
			if (unk_0x74C475EB8E73D398(&(Global_104555.f_14111[iVar0 /*104*/]), sParam0))
			{
				if (Global_104555.f_14111[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_104555.f_14111[iVar0 /*104*/].f_24 = 1;
				if (Global_104555.f_14111[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_104555.f_14111[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_104555.f_14021[0 /*20*/].f_17 = 0;
					}
					if (Global_104555.f_14111[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_104555.f_14021[1 /*20*/].f_17 = 0;
					}
					if (Global_104555.f_14111[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_104555.f_14021[2 /*20*/].f_17 = 0;
					}
					if (Global_104555.f_14111[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_104555.f_14021[3 /*20*/].f_17 = 0;
					}
					Global_104555.f_14111[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_104555.f_14111[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_766()//Position - 0x1FFD5
{
	if (func_545(unk_0x9EB17624F44A8DA4()))
	{
		func_69(25);
	}
}

int func_767(int iParam0)//Position - 0x1FFEE
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_768(int iParam0)//Position - 0x20019
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_769(int iParam0, bool bParam1)//Position - 0x20044
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_56();
	}
	if (iParam0 > 0)
	{
		if (func_125() != func_11())
		{
			if (func_772(unk_0x9EB17624F44A8DA4()) == unk_0x9EB17624F44A8DA4())
			{
				Global_2492493.f_93[func_771(iParam0)] = 1;
			}
		}
		iVar0 = func_771(159);
		if (func_770(iVar0, Global_262145.f_11946, bParam1))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(157);
		if (func_770(iVar0, Global_262145.f_11946, bParam1))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(148);
		if (func_770(iVar0, Global_262145.f_11946, bParam1))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(164);
		if (func_770(iVar0, Global_262145.f_11946, bParam1))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(142);
		if (func_770(iVar0, Global_262145.f_11946, bParam1))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(152);
		if (func_770(iVar0, Global_262145.f_11946, bParam1))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(166);
		if (func_770(iVar0, Global_262145.f_11946, bParam1))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(170);
		if (func_770(iVar0, Global_262145.f_11946, bParam1))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(173);
		if (func_770(iVar0, Global_262145.f_11946, bParam1))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(179);
		if (func_770(iVar0, Global_262145.f_11946, bParam1))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(200);
		if (func_770(iVar0, Global_262145.f_11946, bParam1))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(201);
		if (func_770(iVar0, Global_262145.f_11946, bParam1))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(182);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(183);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(185);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(186);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(180);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(195);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(197);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(198);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(207);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(208);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(209);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(214);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(215);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(216);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(217);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(218);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(219);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(220);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(221);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_770(int iParam0, int iParam1, bool bParam2)//Position - 0x206C0
{
	if (bParam2)
	{
		if ((!func_371(unk_0x9EB17624F44A8DA4(), 19) && !func_371(unk_0x9EB17624F44A8DA4(), 20)) && !func_371(unk_0x9EB17624F44A8DA4(), 9))
		{
			return 0;
		}
	}
	if (Global_2492493.f_93[iParam0] == 1 && func_21(&(Global_2492493[iParam0 /*2*/])))
	{
		if (func_639(&(Global_2492493[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2492493.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_771(int iParam0)//Position - 0x20746
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

int func_772(int iParam0)//Position - 0x20948
{
	return Global_1627537[iParam0 /*532*/].f_11.f_35;
}

void func_773(int iParam0)//Position - 0x2095D
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_56();
	}
	if (iParam0 > 0)
	{
		if (func_125() != func_11())
		{
			Global_2492493.f_93[func_771(iParam0)] = 1;
		}
		iVar0 = func_771(155);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(163);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(160);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(153);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(162);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(154);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(171);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(172);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(199);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(194);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(193);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(210);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(205);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(189);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_771(211);
		if (func_770(iVar0, Global_262145.f_11947, 0))
		{
			func_8(&(Global_2492493[iVar0 /*2*/]));
			func_20(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_774(int iParam0)//Position - 0x20C8E
{
	if (!func_775(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_303[iParam0 /*3*/], func_776(), 0))
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_303[iParam0 /*3*/] = { func_776() };
	}
	if (!func_775(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_290[iParam0 /*3*/], func_776(), 0))
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_290[iParam0 /*3*/] = { func_776() };
	}
}

bool func_775(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x20D10
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_776()//Position - 0x20D57
{
	vector3 vVar0;
	
	return vVar0;
}

void func_777(int iParam0)//Position - 0x20D63
{
	if (!func_775(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_145[iParam0 /*3*/], func_776(), 0))
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_145[iParam0 /*3*/] = { func_776() };
	}
	if (!func_775(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_120[iParam0 /*3*/], func_776(), 0))
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_120[iParam0 /*3*/] = { func_776() };
	}
}

void func_778()//Position - 0x20DE1
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573842 = { Var0 };
	Global_1573842.f_13 = func_11();
	if (unk_0xC80D31E4B587871C(Global_1573340, 3))
	{
		unk_0x0EE72DB1CD8A3B86(&Global_1573340, 3);
	}
}

void func_779(bool bParam0)//Position - 0x20E3B
{
	if (bParam0)
	{
		if (!func_536(unk_0x9EB17624F44A8DA4(), 14))
		{
			func_781(14);
		}
	}
	else if (func_536(unk_0x9EB17624F44A8DA4(), 14))
	{
		func_780(14);
	}
}

void func_780(int iParam0)//Position - 0x20E72
{
	unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_5), iParam0);
}

void func_781(int iParam0)//Position - 0x20E8F
{
	unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_5), iParam0);
}

void func_782(int iParam0)//Position - 0x20EAC
{
	if (func_108(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x9EB17624F44A8DA4() != iParam0)
		{
			if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_443 != iParam0)
			{
				Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_443 = iParam0;
				if (iParam0 != func_11())
				{
				}
			}
		}
	}
}

int func_783(int iParam0)//Position - 0x20EFB
{
	if (func_784(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_32;
	}
	return -1;
}

int func_784(int iParam0, int iParam1)//Position - 0x20F1E
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_32 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_785(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x20F59
{
	int iVar0;
	
	if (func_270(iParam0, iParam1) && func_802(iParam0, iParam1))
	{
		iVar0 = func_269(iParam0, iParam1);
		func_789(iVar0, bParam2, bParam3);
		func_786(iVar0, 1);
	}
}

void func_786(int iParam0, bool bParam1)//Position - 0x20F94
{
	if (!func_788(iParam0))
	{
		return;
	}
	func_256(func_787(iParam0), bParam1, -1, 1);
	Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iParam0 /*12*/].f_6 = bParam1;
}

int func_787(int iParam0)//Position - 0x20FD0
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_788(int iParam0)//Position - 0x2102A
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_789(int iParam0, bool bParam1, bool bParam2)//Position - 0x2103F
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_494(unk_0x9EB17624F44A8DA4(), iParam0);
	if (!bParam1)
	{
		func_801(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2492401[iParam0];
		iVar0 = func_800(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1669398 = -1;
		}
		func_799(iParam0, 0, bParam2);
	}
	else if (func_797(iParam0, bParam2))
	{
		iVar0 = func_796(iVar2, 0);
		iVar3 = func_361(unk_0x9EB17624F44A8DA4(), iVar2);
		iVar4 = func_795(iVar2, bParam2);
		iVar5 = func_796(iVar2, bParam2);
		fVar6 = (system::to_float(iVar5) / system::to_float(iVar4));
		iVar0 = (iVar0 - system::round((system::to_float(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_794(iVar2) && func_793(unk_0x9EB17624F44A8DA4(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_801(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_792(unk_0x9EB17624F44A8DA4(), iVar2) > 0)
		{
			func_791(iParam0, (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iParam0 /*12*/].f_2 - (func_795(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_796(iVar2, bParam2) / func_792(unk_0x9EB17624F44A8DA4(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_794(iVar2) && func_793(unk_0x9EB17624F44A8DA4(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_790(unk_0x9EB17624F44A8DA4(), iVar2, iVar0, bParam2);
}

void func_790(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x211B0
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return;
	}
	if (func_263(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1595693[iParam0 /*680*/].f_266.f_234 = iParam2;
				}
				else
				{
					Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_791(int iParam0, int iParam1)//Position - 0x21224
{
	if (iParam0 != -1 && iParam1 != Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iParam0 /*12*/].f_2)
	{
		Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_792(int iParam0, int iParam1)//Position - 0x21269
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (func_263(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_793(int iParam0, int iParam1)//Position - 0x212C8
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (func_263(iParam1) && func_794(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_794(int iParam0)//Position - 0x21332
{
	return func_118(iParam0) == 5;
}

int func_795(int iParam0, bool bParam1)//Position - 0x21342
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_118(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16276;
			if (func_268(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16281;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16275;
			if (func_268(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16280;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16274;
			if (func_268(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16279;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16272;
			if (func_268(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16277;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16273;
			if (func_268(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16278;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_20371;
				if (func_268(unk_0x9EB17624F44A8DA4(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20372;
				}
			}
			else
			{
				uVar0 = Global_262145.f_20355;
				if (func_268(unk_0x9EB17624F44A8DA4(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20356;
				}
			}
			break;
	}
	return uVar0;
}

int func_796(int iParam0, bool bParam1)//Position - 0x21479
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_118(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16257;
			if (func_268(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16266);
			}
			if (func_268(unk_0x9EB17624F44A8DA4(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16271);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16258;
			if (func_268(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16265);
			}
			if (func_268(unk_0x9EB17624F44A8DA4(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16270);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16259;
			if (func_268(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16264);
			}
			if (func_268(unk_0x9EB17624F44A8DA4(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16269);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16260;
			if (func_268(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16262);
			}
			if (func_268(unk_0x9EB17624F44A8DA4(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16267);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16261;
			if (func_268(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16263);
			}
			if (func_268(unk_0x9EB17624F44A8DA4(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16268);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_20368;
			}
			else
			{
				iVar0 = Global_262145.f_20352;
			}
			if (func_268(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20369);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20353);
				}
			}
			if (func_268(unk_0x9EB17624F44A8DA4(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20370);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20354);
				}
			}
			if (func_793(unk_0x9EB17624F44A8DA4(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_797(int iParam0, bool bParam1)//Position - 0x21683
{
	if (bParam1)
	{
		return func_257(15384, -1, -1);
	}
	return func_257(func_798(iParam0), -1, -1);
}

int func_798(int iParam0)//Position - 0x216A8
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_799(int iParam0, bool bParam1, bool bParam2)//Position - 0x21702
{
	if (bParam2)
	{
		func_256(15384, bParam1, -1, 1);
		return;
	}
	func_256(func_798(iParam0), bParam1, -1, 1);
}

int func_800(int iParam0, bool bParam1)//Position - 0x2172D
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2492401[iParam0];
	iVar1 = func_494(unk_0x9EB17624F44A8DA4(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2492408;
	}
	if (func_794(iVar1))
	{
		if (func_793(unk_0x9EB17624F44A8DA4(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_801(int iParam0, int iParam1, bool bParam2)//Position - 0x21775
{
	if (bParam2)
	{
		Global_2492408 = iParam1;
		return;
	}
	Global_2492401[iParam0] = iParam1;
}

int func_802(int iParam0, int iParam1)//Position - 0x21795
{
	int iVar0;
	
	if (func_270(iParam0, iParam1))
	{
		iVar0 = func_269(iParam0, iParam1);
		if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_4 > 0 && Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_803()//Position - 0x217E9
{
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1711), 28);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1711), 29);
	func_804(24);
}

void func_804(int iParam0)//Position - 0x21811
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4856.f_7[iVar0]), iVar1);
}

void func_805(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2183A
{
	char* sVar0;
	struct<14> Var1;
	struct<17> Var2;
	struct<17> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<16> Var6;
	struct<18> Var7;
	struct<18> Var8;
	struct<19> Var9;
	struct<18> Var10;
	
	sVar0 = unk_0x436287B7DB306165();
	Var1 = Global_1667867;
	Var1.f_1 = Global_1667867.f_1;
	Var1.f_2 = Global_1667867.f_2;
	Var1.f_3 = Global_1667867.f_3;
	Var1.f_4 = Global_1667867.f_4;
	Var1.f_5 = Global_1667867.f_5;
	Var1.f_6 = Global_1667867.f_6;
	Var1.f_7 = Global_1667867.f_7;
	Var1.f_8 = Global_1667867.f_8;
	Var1.f_9 = Global_1667867.f_9;
	Var1.f_10 = Global_1667867.f_10;
	Var1.f_11 = Global_1667867.f_11;
	Var1.f_12 = Global_1667867.f_12;
	Var1.f_13 = Global_1667867.f_14;
	if (unk_0x3A711520F83BAE98())
	{
		if (unk_0x74C475EB8E73D398(sVar0, "GB_DEATHMATCH"))
		{
			Var2 = { Var1 };
			Var2.f_14 = Global_1667867.f_15;
			Var2.f_15 = Global_1667867.f_16;
			Var2.f_16 = Global_1667867.f_17;
			unk_0x74D82435B879FAD5(&Var2);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_YACHT_ROB"))
		{
			Var3 = { Var1 };
			Var3.f_14 = Global_1667867.f_15;
			Var3.f_15 = uParam0;
			Var3.f_16 = iParam1;
			unk_0xD70D34CCB1D634E4(&Var3);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var4 = { Var1 };
			Var4.f_14 = Global_1667867.f_15;
			Var4.f_15 = uParam0;
			unk_0xE9F89A00217C685C(&Var4);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_SIGHTSEER"))
		{
			Var5 = { Var1 };
			Var5.f_14 = Global_1667867.f_15;
			Var5.f_15 = uParam0;
			Var5.f_16 = iParam1;
			unk_0xE2427E99E7433EE3(&Var5);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_ASSAULT"))
		{
			Var6 = { Var1 };
			Var6.f_14 = Global_1667867.f_15;
			Var6.f_15 = uParam0;
			unk_0xD708DF69951B6F82(&Var6);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_BELLYBEAST"))
		{
			Var7 = { Var1 };
			Var7.f_14 = Global_1667867.f_15;
			Var7.f_15 = uParam0;
			Var7.f_16 = iParam1;
			Var7.f_17 = iParam2;
			unk_0x9DEEAC2E0047DF06(&Var7);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_HEADHUNTER"))
		{
			Var8 = { Var1 };
			Var8.f_14 = uParam0;
			Var8.f_15 = iParam1;
			Var8.f_16 = iParam2;
			Var8.f_17 = Global_1667867.f_15;
			unk_0xAB69F4EDF0D15E45(&Var8);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var9 = { Var1 };
			Var9.f_15 = uParam0;
			Var9.f_16 = iParam1;
			Var9.f_17 = iParam2;
			Var9.f_14 = iParam3;
			Var9.f_18 = Global_1667867.f_15;
			unk_0x443B083A340D5723(&Var9);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_AIRFREIGHT"))
		{
			Var10 = { Var1 };
			Var10.f_14 = uParam0;
			Var10.f_15 = iParam1;
			Var10.f_16 = iParam2;
			Var10.f_17 = Global_1667867.f_15;
			unk_0xD66B6A28511DC697(&Var10);
		}
	}
	func_806();
}

void func_806()//Position - 0x21AD2
{
	struct<18> Var0;
	
	Global_1667867 = { Var0 };
}

bool func_807(int iParam0)//Position - 0x21AE6
{
	return unk_0xC80D31E4B587871C(Global_1573340, iParam0);
}

int func_808(struct<21> Param0)//Position - 0x21AF8
{
	func_837(func_838(Param0), Param0);
	func_812(164, 0);
	unk_0xB66EA47EE710E67F(0);
	func_809(0, -1, 0);
	unk_0x6E3ED3AE1C20445F(&Local_125, 22);
	unk_0xE7BC983D1386C9EE(&vLocal_126, 97);
	unk_0x941BE77305BB5695(0);
	return 1;
}

int func_809(int iParam0, int iParam1, bool bParam2)//Position - 0x21B39
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_811();
			}
			else
			{
				return 0;
			}
		}
		if (!func_810())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_811();
					}
					else
					{
						return 0;
					}
				}
				if (func_754())
				{
					if (!bParam2)
					{
						func_811();
					}
					else
					{
						return 0;
					}
				}
				if (func_752(155))
				{
					if (!bParam2)
					{
						func_811();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x6CF53DE0FDF04073())
			{
				if (!bParam2)
				{
					func_811();
				}
				else
				{
					return 0;
				}
			}
		}
		system::wait(0);
		iVar0 = unk_0x8A8E6DE54B880941();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			if (!bParam2)
			{
				func_811();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x6CF53DE0FDF04073())
	{
		if (!bParam2)
		{
			func_811();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_810()//Position - 0x21C4E
{
	return Global_1312831;
}

void func_811()//Position - 0x21C5A
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_812(int iParam0, int iParam1)//Position - 0x21C66
{
	func_836();
	func_814(1);
	if ((iParam0 != 0 && unk_0x552F39AE86E07792(iParam1)) && func_591(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x872F1C1F8587CCC7(&Global_1667853, 0);
				break;
			}
	}
	if (!func_107() && !func_223(unk_0x9EB17624F44A8DA4(), 1))
	{
		if (func_72())
		{
			func_711(3);
		}
	}
	func_711(4);
	if (func_123(0))
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57 = func_125();
	}
	if (func_47(iParam0))
	{
		func_359();
		Global_1667885.f_18 = func_337(func_29());
	}
	else if (func_54(func_783(unk_0x9EB17624F44A8DA4())))
	{
		func_357();
		Global_1667938.f_18 = func_337(func_29());
	}
	func_813();
}

void func_813()//Position - 0x21D34
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1347666.f_532[iVar0 /*42*/].f_1 = func_11();
		Global_1347666.f_532[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

void func_814(bool bParam0)//Position - 0x21D6E
{
	int iVar0;
	
	func_804(33);
	func_804(34);
	func_804(35);
	func_804(36);
	func_804(37);
	func_804(38);
	func_804(39);
	func_804(40);
	func_804(43);
	func_804(41);
	func_804(54);
	func_804(42);
	func_804(47);
	func_835(23);
	func_835(24);
	func_804(92);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1711), 2);
	func_834();
	func_829();
	func_824();
	func_816();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2512808.f_4856.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_815(3))
	{
		func_835(3);
	}
	else if (func_815(4))
	{
		func_835(4);
	}
	else if (func_815(5))
	{
		func_835(5);
	}
	else if (func_815(6))
	{
		func_835(6);
	}
	else if (func_815(7))
	{
		func_835(7);
	}
	else if (((((((((((((((((func_815(0) || func_815(1)) || func_815(2)) || func_815(8)) || func_815(9)) || func_815(10)) || func_815(11)) || func_815(12)) || func_815(13)) || func_815(14)) || func_815(15)) || func_815(16)) || func_815(17)) || func_815(18)) || func_815(19)) || func_815(20)) || func_815(21)) || func_815(22))
	{
		func_835(8);
		func_835(0);
		func_835(1);
		func_835(2);
		func_835(9);
		func_835(10);
		func_835(11);
		func_835(12);
		func_835(13);
		func_835(14);
		func_835(15);
		func_835(16);
		func_835(17);
		func_835(18);
		func_835(19);
		func_835(20);
		func_835(21);
		func_835(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2512808.f_4856.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_815(int iParam0)//Position - 0x21FC8
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_14[iVar0], iVar1);
}

void func_816()//Position - 0x21FF1
{
	if (func_823())
	{
		func_822(0);
		func_822(1);
		func_822(2);
		func_822(3);
		func_822(4);
		func_822(5);
		if (func_821(32))
		{
			if (func_818(func_819(), 3))
			{
				func_817(func_819(), 3);
			}
			func_822(32);
		}
	}
}

void func_817(int iParam0, int iParam1)//Position - 0x22045
{
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_104555.f_28020[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

int func_818(int iParam0, int iParam1)//Position - 0x22088
{
	if (Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_819()//Position - 0x220AD
{
	if (func_820())
	{
		Global_104555.f_28020[12 /*29*/].f_24[Global_14453] = 1;
	}
	return 12;
}

int func_820()//Position - 0x220D1
{
	int iVar0;
	
	iVar0 = func_84(unk_0x9EB17624F44A8DA4());
	if (((iVar0 != unk_0x9EB17624F44A8DA4() && iVar0 != func_11()) && unk_0x552F39AE86E07792(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_821(int iParam0)//Position - 0x22112
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_23[iVar0], iVar1);
}

void func_822(int iParam0)//Position - 0x2213B
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4856.f_23[iVar0]), iVar1);
}

int func_823()//Position - 0x22164
{
	if ((((func_821(1) || func_821(0)) || func_821(2)) || func_821(4)) || func_821(5))
	{
		return 1;
	}
	return 0;
}

void func_824()//Position - 0x221A5
{
	if (func_828())
	{
		func_827(0);
		func_827(1);
		func_827(2);
		func_827(3);
		func_827(4);
		func_827(5);
		func_827(6);
		func_827(7);
		if (func_826(8))
		{
			func_827(8);
		}
		if (func_826(15))
		{
			if (func_818(func_825(), 3))
			{
				func_817(func_825(), 3);
			}
			func_827(15);
		}
	}
}

int func_825()//Position - 0x22212
{
	if (func_820())
	{
		Global_104555.f_28020[20 /*29*/].f_24[Global_14453] = 1;
	}
	return 20;
}

bool func_826(int iParam0)//Position - 0x22236
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_21[iVar0], iVar1);
}

void func_827(int iParam0)//Position - 0x2225F
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4856.f_21[iVar0]), iVar1);
}

int func_828()//Position - 0x22288
{
	if ((((((((func_826(0) || func_826(1)) || func_826(2)) || func_826(3)) || func_826(4)) || func_826(5)) || func_826(6)) || func_826(7)) || func_826(8))
	{
		return 1;
	}
	return 0;
}

void func_829()//Position - 0x222F6
{
	if (func_833())
	{
		func_832(0);
		func_832(1);
		func_832(2);
		func_832(3);
		func_832(4);
		func_832(5);
		func_832(6);
		func_832(7);
		func_832(8);
		func_832(9);
		func_832(10);
		func_832(11);
		func_832(12);
		if (func_831(13))
		{
			if (func_818(func_830(), 3))
			{
				func_817(func_830(), 3);
			}
			func_832(13);
		}
	}
}

int func_830()//Position - 0x22372
{
	if (func_820())
	{
		Global_104555.f_28020[76 /*29*/].f_24[Global_14453] = 1;
	}
	return 76;
}

bool func_831(int iParam0)//Position - 0x22396
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_19[iVar0], iVar1);
}

void func_832(int iParam0)//Position - 0x223BF
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4856.f_19[iVar0]), iVar1);
}

int func_833()//Position - 0x223E8
{
	if ((((((((((((func_831(0) || func_831(1)) || func_831(2)) || func_831(3)) || func_831(4)) || func_831(5)) || func_831(6)) || func_831(7)) || func_831(8)) || func_831(9)) || func_831(10)) || func_831(11)) || func_831(12))
	{
		return 1;
	}
	return 0;
}

void func_834()//Position - 0x22486
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2512808.f_4856.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_835(int iParam0)//Position - 0x224AE
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4856.f_14[iVar0]), iVar1);
}

void func_836()//Position - 0x224D7
{
	struct<14> Var0;
	
	Global_1667867 = { Var0 };
	Global_1667867.f_14 = 0;
	Global_1667867.f_15 = 0;
}

void func_837(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x224F9
{
	if (!unk_0x3A711520F83BAE98())
	{
		func_811();
	}
	unk_0xAEA89A7E72415961(iParam0, 0, Param1.f_16);
}

int func_838(int iParam0)//Position - 0x22518
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 113:
			return 32;
		
		case 114:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 115:
			return 32;
		
		case 116:
			return 32;
		
		case 120:
			return 32;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 2;
		
		case 136:
			return 1;
		
		case 132:
			return 2;
		
		case 133:
			return 4;
		
		case 134:
			return 2;
		
		case 135:
			return 2;
		
		case 117:
			return 1;
		
		case 137:
			return 2;
		
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
			return 0;
		
		case 147:
			return 1;
		
		case 144:
			return 4;
		
		case 145:
			return 16;
		
		case 146:
			return 32;
		
		default:
	}
	return 0;
}

