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
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	struct<48> Local_98 = { 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, -808831384, 588969535, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_99 = 0;
	vector3 vLocal_100[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	struct<8> Local_116[3];
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	struct<21> Local_119 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_94 = ((0,05f + 0,275f) - 0,01f);
	iLocal_105 = 1076369579;
	iLocal_106 = 20;
	if (unk_0x3A711520F83BAE98() && func_225(unk_0x9EB17624F44A8DA4(), 0, 1))
	{
		func_216(ScriptParam_119);
	}
	else
	{
		func_212();
	}
	while (true)
	{
		func_211();
		if (func_201() || func_197(17))
		{
			func_212();
		}
		if (unk_0xB01117EF93F91860())
		{
			func_212();
		}
		switch (func_196(unk_0x622FF3AE4B1D07C3()))
		{
			case 0:
				if (func_195() == 1)
				{
					func_194();
					func_192();
					if (func_191(60000))
					{
						if (!func_189())
						{
							if (!unk_0x125CDF69FA6EF560(Local_98.f_10))
							{
								func_188("DSV_HELP1", -1);
							}
							else
							{
								func_188("DSV_HELP2", -1);
							}
						}
					}
					vLocal_100[unk_0x622FF3AE4B1D07C3() /*3*/] = 1;
				}
				else if (func_195() == 4)
				{
					vLocal_100[unk_0x622FF3AE4B1D07C3() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_195() == 1)
				{
					func_43();
				}
				else if (func_195() == 4)
				{
					vLocal_100[unk_0x622FF3AE4B1D07C3() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_42(&(Local_98.f_45));
				if (func_41(&(Local_98.f_45)))
				{
					vLocal_100[unk_0x622FF3AE4B1D07C3() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_100[unk_0x622FF3AE4B1D07C3() /*3*/] = 4;
			
			case 4:
				func_212();
				break;
		}
		if (unk_0x8E1421E2A2A2FBD4())
		{
			switch (func_195())
			{
				case 0:
					if (func_10())
					{
						func_194();
						func_9(&(Local_98.f_43), 0, 0);
						Local_98 = 1;
					}
					break;
				
				case 1:
					func_8();
					func_7();
					if (func_1())
					{
						Local_98 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x216
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x22A
{
	struct<14> Var0;
	struct<14> Var1;
	
	if (Local_98.f_42 == 0)
	{
		if (Local_98 != 4)
		{
			if (unk_0x191BE1BC8F26F3C1(unk_0xF32FBF2453AC1753(Local_98.f_2), 0))
			{
				if (func_6(&(Local_98.f_47), 3000, 0))
				{
					if (Local_98.f_8 == func_5())
					{
						Var0.f_2 = -1006699532;
						func_3(Var0, func_4(1));
					}
					else
					{
						Var0.f_2 = 838796889;
						Var0.f_10 = Local_98.f_8;
						func_3(Var0, func_4(1));
					}
					return 1;
				}
			}
			if (func_6(&(Local_98.f_43), Global_262145.f_10472, 0))
			{
				Var1.f_2 = 746156368;
				func_3(Var1, func_4(1));
				return 1;
			}
		}
	}
	return 0;
}

void func_3(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x2D6
{
	Param0 = -1942454564;
	Param0.f_1 = unk_0x9EB17624F44A8DA4();
	if (!iParam13 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Param0, 14, iParam13);
	}
}

int func_4(int iParam0)//Position - 0x303
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
		{
			iVar2 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar1));
			if (func_225(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x9EB17624F44A8DA4() || iParam0)
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_5()//Position - 0x360
{
	return -1;
}

int func_6(var uParam0, int iParam1, bool bParam2)//Position - 0x369
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_9(uParam0, bParam2, 0);
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

void func_7()//Position - 0x3C7
{
	switch (Local_98.f_42)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_8()//Position - 0x3EA
{
	struct<14> Var0;
	int iVar1;
	
	if (Local_98 != 4)
	{
		iLocal_103 = 0;
		while (iLocal_103 < unk_0xB72D370CB7ABC3EF())
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iLocal_103)))
			{
				iVar1 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iLocal_103));
				if (unk_0xC80D31E4B587871C(vLocal_100[iLocal_103 /*3*/].f_1, 0))
				{
					Var0.f_2 = 838796889;
					Var0.f_10 = iVar1;
					Local_98.f_8 = iVar1;
					func_3(Var0, func_4(1));
					Local_98 = 4;
					return;
				}
				if (!unk_0xC80D31E4B587871C(Local_98.f_1, 0))
				{
					if (unk_0xC80D31E4B587871C(vLocal_100[iLocal_103 /*3*/].f_1, 1))
					{
						unk_0x872F1C1F8587CCC7(&(Local_98.f_1), 0);
					}
					if (unk_0xC80D31E4B587871C(vLocal_100[iLocal_103 /*3*/].f_1, 2))
					{
						unk_0x872F1C1F8587CCC7(&(Local_98.f_1), 0);
					}
				}
				else
				{
					if (!unk_0xC80D31E4B587871C(Local_98.f_1, 1))
					{
						if (unk_0xC80D31E4B587871C(vLocal_100[iLocal_103 /*3*/].f_1, 3))
						{
							unk_0x872F1C1F8587CCC7(&(Local_98.f_1), 1);
						}
					}
					if (!unk_0xC80D31E4B587871C(Local_98.f_1, 2))
					{
						if (unk_0xC80D31E4B587871C(vLocal_100[iLocal_103 /*3*/].f_1, 4))
						{
							unk_0x872F1C1F8587CCC7(&(Local_98.f_1), 2);
						}
					}
					if (!unk_0xC80D31E4B587871C(Local_98.f_1, 3))
					{
						if (unk_0xC80D31E4B587871C(vLocal_100[iLocal_103 /*3*/].f_1, 5))
						{
							unk_0x872F1C1F8587CCC7(&(Local_98.f_1), 3);
						}
					}
					if (!unk_0xC80D31E4B587871C(Local_98.f_1, 4))
					{
						if (unk_0xC80D31E4B587871C(vLocal_100[iLocal_103 /*3*/].f_1, 6))
						{
							unk_0x872F1C1F8587CCC7(&(Local_98.f_1), 4);
						}
					}
				}
			}
			iLocal_103++;
		}
	}
}

void func_9(var uParam0, bool bParam1, bool bParam2)//Position - 0x539
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

int func_10()//Position - 0x57E
{
	if (func_40(Local_98.f_10) && func_40(Local_98.f_11))
	{
		if ((func_21() && func_19()) && func_11())
		{
			unk_0x14776E43F90DD454(Local_98.f_10);
			unk_0x14776E43F90DD454(Local_98.f_11);
			return 1;
		}
	}
	return 0;
}

int func_11()//Position - 0x5CC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_98.f_14)
	{
		if ((!unk_0x93C304998B457C45(Local_98.f_4[iVar0]) && func_40(Local_98.f_11)) && unk_0x93C304998B457C45(Local_98.f_2))
		{
			if (func_17(Local_98.f_2))
			{
				if (Local_98.f_12 == 0)
				{
					if (func_16(&(Local_98.f_4[iVar0]), Local_98.f_2, 22, Local_98.f_11, iVar0, 1, 1, 1))
					{
						func_13(&(Local_98.f_4[iVar0]));
					}
				}
				else if (func_12(&(Local_98.f_4[iVar0]), 22, Local_98.f_11, Local_98.f_28[iVar0 /*3*/], Local_98.f_38[iVar0], 1, 1, 1))
				{
					func_13(&(Local_98.f_4[iVar0]));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_98.f_14)
	{
		if (!unk_0x93C304998B457C45(Local_98.f_4[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_12(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x6B3
{
	int iVar0;
	
	if (!unk_0x7A419CA188B4A665(1))
	{
		return 0;
	}
	iVar0 = unk_0xAC992EFAD62C33BF(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = unk_0xABF6E3937F555048(iVar0);
	if (unk_0x93C304998B457C45(*uParam0))
	{
		unk_0xFBA991D3A851E195(iVar0, iParam7);
		if (unk_0x0D4BF24EE51A419A(iVar0))
		{
			if (bParam5)
			{
				unk_0x9CE66BFF230839CE(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_13(var uParam0)//Position - 0x712
{
	int iVar0;
	
	unk_0xCE93FCB8A8D8DF0B(unk_0x47BA76CE3C825A08(*uParam0), Global_1574760);
	unk_0x230697B667C63948(unk_0x47BA76CE3C825A08(*uParam0), 0);
	unk_0xE9B3D12A64CC7C1A(unk_0x47BA76CE3C825A08(*uParam0), 1);
	unk_0x8135E0D869A8ECFC(unk_0x47BA76CE3C825A08(*uParam0), func_15(), 25000, 1);
	iVar0 = unk_0x63A6486593EC7EC3(0, 10);
	if (iVar0 == 0 || iVar0 == 1)
	{
		unk_0x2C8C730E9565B998(unk_0x47BA76CE3C825A08(*uParam0), 0);
	}
	else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
	{
		unk_0x2C8C730E9565B998(unk_0x47BA76CE3C825A08(*uParam0), 2);
	}
	else
	{
		unk_0x2C8C730E9565B998(unk_0x47BA76CE3C825A08(*uParam0), 1);
	}
	iVar0 = unk_0x63A6486593EC7EC3(0, 10);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 2)
	{
		unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(*uParam0), 5, 1);
	}
	else if (iVar0 == 3)
	{
		unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(*uParam0), 17, 1);
	}
	else if ((iVar0 == 4 || iVar0 == 5) || iVar0 == 6)
	{
		unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(*uParam0), 13, 1);
	}
	if (func_14())
	{
		unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(*uParam0), 20, 1);
	}
	unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(*uParam0), 2, 1);
	iVar0 = unk_0x63A6486593EC7EC3(0, 4);
	if (iVar0 == 0)
	{
		unk_0x4F9A62E773100FDC(unk_0x47BA76CE3C825A08(*uParam0), 2);
	}
	else if (iVar0 == 1)
	{
		unk_0x4F9A62E773100FDC(unk_0x47BA76CE3C825A08(*uParam0), 1);
	}
	else if (iVar0 == 2)
	{
		unk_0x4F9A62E773100FDC(unk_0x47BA76CE3C825A08(*uParam0), 3);
	}
	unk_0xB2611CD2553D4C80(unk_0x47BA76CE3C825A08(*uParam0), 1);
	unk_0x07224EEE13A1B6AE(unk_0x47BA76CE3C825A08(*uParam0), 1);
	unk_0xAE01EF4BC84AFE7C(unk_0x47BA76CE3C825A08(*uParam0), 29, true);
	unk_0xB4AF8E4D052DCD63(unk_0x47BA76CE3C825A08(*uParam0), 3);
	unk_0xE01CE1EBCD7EE551(unk_0x47BA76CE3C825A08(*uParam0), system::round((200f * Global_262145.f_153)), 0);
}

int func_14()//Position - 0x8DB
{
	if (unk_0xC80D31E4B587871C(unk_0x63A6486593EC7EC3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_15()//Position - 0x8FC
{
	switch (Local_98.f_11)
	{
		case joaat("g_m_y_ballaorig_01"):
		case joaat("g_m_y_ballaeast_01"):
			switch (unk_0x63A6486593EC7EC3(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_mexgoon_02"):
		case joaat("g_f_y_vagos_01"):
			switch (unk_0x63A6486593EC7EC3(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_lost_01"):
		case joaat("g_f_y_lost_01"):
			switch (unk_0x63A6486593EC7EC3(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_m_chigoon_02"):
		case joaat("g_m_m_chigoon_01"):
			switch (unk_0x63A6486593EC7EC3(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_advancedrifle");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
		
		case joaat("g_m_m_armgoon_01"):
		case joaat("g_m_y_armgoon_02"):
			switch (unk_0x63A6486593EC7EC3(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
		
		case joaat("a_m_m_hillbilly_02"):
		case joaat("a_m_m_hillbilly_01"):
			switch (unk_0x63A6486593EC7EC3(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_combatmg");
				
				default:
			}
			break;
		
		case joaat("g_m_y_salvagoon_01"):
		case joaat("g_m_y_salvagoon_02"):
			switch (unk_0x63A6486593EC7EC3(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_strpunk_01"):
		case joaat("g_m_y_strpunk_02"):
			switch (unk_0x63A6486593EC7EC3(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		default:
			switch (unk_0x63A6486593EC7EC3(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_combatmg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
	}
	return joaat("weapon_pistol");
}

int func_16(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0xC66
{
	if (!unk_0x7A419CA188B4A665(1))
	{
		return 0;
	}
	if (!unk_0x93C304998B457C45(uParam1))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(unk_0xF32FBF2453AC1753(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xABF6E3937F555048(unk_0x00D1A9572426E8DD(unk_0xF32FBF2453AC1753(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x93C304998B457C45(*uParam0))
	{
		unk_0xFBA991D3A851E195(unk_0x47BA76CE3C825A08(*uParam0), iParam7);
		if (unk_0x0D4BF24EE51A419A(unk_0x47BA76CE3C825A08(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9CE66BFF230839CE(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_17(var uParam0)//Position - 0xCEE
{
	if (unk_0x93C304998B457C45(uParam0))
	{
		return !func_18(unk_0xF32FBF2453AC1753(uParam0));
	}
	return 0;
}

int func_18(int iParam0)//Position - 0xD0E
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_19()//Position - 0xD47
{
	if ((!unk_0x93C304998B457C45(Local_98.f_3) && func_40(Local_98.f_11)) && unk_0x93C304998B457C45(Local_98.f_2))
	{
		if (func_17(Local_98.f_2))
		{
			if (Local_98.f_12 == 1)
			{
				if (func_12(&(Local_98.f_3), 22, Local_98.f_11, Local_98.f_24, Local_98.f_27, 1, 1, 1))
				{
					func_13(&(Local_98.f_3));
					func_20();
				}
			}
			else if (func_16(&(Local_98.f_3), Local_98.f_2, 22, Local_98.f_11, -1, 1, 1, 1))
			{
				func_13(&(Local_98.f_3));
				func_20();
			}
		}
	}
	if (!unk_0x93C304998B457C45(Local_98.f_3))
	{
		return 0;
	}
	return 1;
}

void func_20()//Position - 0xDEB
{
	if (Local_98.f_12 == 0)
	{
		if (func_14())
		{
			unk_0x96247F0EC873C446(unk_0x47BA76CE3C825A08(Local_98.f_3), unk_0xF32FBF2453AC1753(Local_98.f_2), unk_0x5B811202FCBE9E9D(7f, 18f), 786468);
		}
		else
		{
			unk_0x96247F0EC873C446(unk_0x47BA76CE3C825A08(Local_98.f_3), unk_0xF32FBF2453AC1753(Local_98.f_2), unk_0x5B811202FCBE9E9D(7f, 18f), 786599);
		}
	}
	else if (Local_98.f_12 == 2)
	{
		func_194();
		unk_0xAB30B1CF01A198C1(unk_0x47BA76CE3C825A08(Local_98.f_3), uLocal_102);
	}
}

int func_21()//Position - 0xE69
{
	int iVar0;
	
	if (!unk_0x93C304998B457C45(Local_98.f_2))
	{
		if (func_40(Local_98.f_10))
		{
			if (func_23(&(Local_98.f_16), &(Local_98.f_19)))
			{
				if (func_22(&(Local_98.f_2), Local_98.f_10, Local_98.f_16, Local_98.f_19, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					unk_0xEDC33A771FAEB393(unk_0xF32FBF2453AC1753(Local_98.f_2), false);
					unk_0x42B3DBD52AED7B7D(unk_0xF32FBF2453AC1753(Local_98.f_2), 1);
					unk_0x764B52EA8B8FFFA3(unk_0xF32FBF2453AC1753(Local_98.f_2));
					unk_0xA15269351F50F113(unk_0xF32FBF2453AC1753(Local_98.f_2), 1, 1, 0);
					unk_0xFBA991D3A851E195(unk_0xF32FBF2453AC1753(Local_98.f_2), 0);
					if (unk_0x6C5223DB5E5CFD9B("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0xD91ED8E8618A1DEF(unk_0xF32FBF2453AC1753(Local_98.f_2), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x6C5223DB5E5CFD9B("MPBitset", 3))
					{
						if (unk_0xB80A4DA4C06A76F1(unk_0xF32FBF2453AC1753(Local_98.f_2), "MPBitset"))
						{
							iVar0 = unk_0x2786E663D1846FFC(unk_0xF32FBF2453AC1753(Local_98.f_2), "MPBitset");
						}
						unk_0x872F1C1F8587CCC7(&iVar0, 10);
						unk_0xD91ED8E8618A1DEF(unk_0xF32FBF2453AC1753(Local_98.f_2), "MPBitset", iVar0);
					}
					if (Local_98.f_12 == 0)
					{
						if (unk_0x95EC8AE7E4F33F6E(unk_0xF32FBF2453AC1753(Local_98.f_2)) < Local_98.f_14)
						{
							Local_98.f_14 = unk_0x95EC8AE7E4F33F6E(unk_0xF32FBF2453AC1753(Local_98.f_2));
						}
					}
				}
			}
		}
	}
	if (!unk_0x93C304998B457C45(Local_98.f_2))
	{
		return 0;
	}
	return 1;
}

int func_22(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0xF9C
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x3B0047CED068C463(iParam1))
	{
		return 0;
	}
	if (!unk_0x49DB840E3FC89FEE(1))
	{
		return 0;
	}
	fVar0 = 1,5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x9B8406983378711E(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0xEA60F3B426BB095B(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0x6ADD12BF4D6D2587(iVar1))
	{
		*uParam0 = unk_0x278BFDB9CDC5B182(iVar1);
		Global_2512808.f_5827 = iVar1;
		if (unk_0x93C304998B457C45(*uParam0))
		{
			if (bParam13)
			{
				unk_0xB2CBFA871D3387B6(iVar1, 1);
			}
			unk_0xFBA991D3A851E195(iVar1, iParam8);
			if (unk_0x0D4BF24EE51A419A(iVar1))
			{
				if (bParam6)
				{
					unk_0x9CE66BFF230839CE(*uParam0, 1);
				}
				else
				{
					unk_0x9CE66BFF230839CE(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0xB8D999BCBD1CD195(*uParam0, unk_0x9EB17624F44A8DA4(), 1);
				}
			}
			unk_0xD2557AC67FBCFB9D(iVar1, bParam7);
			unk_0xB2B20F580CFB38F4(iVar1, 1);
			if (bParam10)
			{
				unk_0x27344352C09F0519(iVar1);
				unk_0x30C37143C720F2AA(iVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

bool func_23(var uParam0, var uParam1)//Position - 0x1096
{
	bool bVar0;
	int iVar1;
	var uVar2;
	vector3 vVar3;
	
	vVar3 = { func_39(unk_0x9EB17624F44A8DA4()) };
	if (Local_98.f_12 == 1)
	{
		return 1;
	}
	if (!bVar0)
	{
		if (unk_0x07D358D46AA46CB3(&vVar3, uParam0, &uVar2, 0f, 180f, 150f, 0, 1, 1))
		{
			unk_0x5C41B0B656C02102(*uParam0, 1, uParam0, uParam1, &iVar1, 4, 3f, 0f);
			if (iVar1 >= 1)
			{
				if (unk_0xBE3C4023003180FC(-1367,557f, -3220,598f, 12,9448f, vVar3, 1) >= 600f && unk_0xBE3C4023003180FC(750f, -3200f, 6f, vVar3, 1) >= 700f)
				{
					if (iLocal_107 <= 5)
					{
						if (func_24(*uParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
						{
							bVar0 = true;
						}
					}
					else
					{
						Local_98 = 4;
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_106 += 4;
		if (iLocal_106 >= 80)
		{
			iLocal_106 = 20;
			iLocal_107++;
		}
	}
	return bVar0;
}

int func_24(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x1197
{
	Global_2405047.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x717FFCE23DE4C8C8(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x0D3330EAF6340496(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0x0D3330EAF6340496(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x83A4DE08E23A2F1F(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam11)
	{
		if (unk_0xAA0BDFF32B6BC02A(vParam0, 2,5f) > 0)
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (fParam12 > 0f)
	{
		if (func_33(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_25(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405047.f_2++;
	return 1;
}

int func_25(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x12A8
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_225(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (!unk_0x3E9CABD07B829173())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xBE3C4023003180FC(func_30(unk_0x9EB17624F44A8DA4()), vParam0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x9E06F0EE20F58CED(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_225(iVar1, 1, 1))
		{
			if (!func_27(iVar1, 0) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x9EB17624F44A8DA4()))
				{
					if ((func_26(iVar1) || !bParam8) && !Global_2422736[iVar1 /*420*/].f_274)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0x917EE18109C5ACEA(iVar1) == unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x917EE18109C5ACEA(iVar1) != unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))) || unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0xBE3C4023003180FC(func_30(iVar1), vParam0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x917EE18109C5ACEA(iVar1) != iParam6 || unk_0x917EE18109C5ACEA(iVar1) == -1)
						{
							if (unk_0xBE3C4023003180FC(func_30(iVar1), vParam0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_26(int iParam0)//Position - 0x1460
{
	if (unk_0xCF308053A6212001(unk_0x25D049AAC4603E65(iParam0)) || Global_2422736[iParam0 /*420*/].f_260)
	{
		return 1;
	}
	return 0;
}

bool func_27(int iParam0, int iParam1)//Position - 0x148C
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_28(-1, 0) == 8;
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

int func_28(int iParam0, bool bParam1)//Position - 0x14D7
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
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

int func_29()//Position - 0x1518
{
	return Global_1312736;
}

Vector3 func_30(int iParam0)//Position - 0x1524
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_32() && Global_1595693[iVar0 /*680*/].f_673) && !func_31(Global_1595693[iVar0 /*680*/].f_674))
	{
		return Global_1595693[iVar0 /*680*/].f_674;
	}
	return func_39(iParam0);
}

int func_31(vector3 vParam0)//Position - 0x1577
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_32()//Position - 0x15A1
{
	return Global_2447174.f_16;
}

int func_33(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x15AF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x9EB17624F44A8DA4() != iVar1) || iParam6 == 0)
		{
			if (func_225(iVar1, bParam2, bParam3))
			{
				if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
				{
					if (!bParam5 || (!unk_0x3AB6A1A9084FB0A4(unk_0x25D049AAC4603E65(iVar1)) && func_26(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) != unk_0x917EE18109C5ACEA(iVar1))) || unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
						{
							if (((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && uParam7) && bParam4) && func_34(iVar1))
							{
							}
							else if (unk_0x6ADD12BF4D6D2587(unk_0x25D049AAC4603E65(iVar1)))
							{
								if (unk_0xBE3C4023003180FC(func_39(iVar1), vParam0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x16AB
{
	if (func_38(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	Global_2492157 = { func_37(iParam0) };
	if (unk_0xFFE9B6D8F03AC353(&Global_2492157))
	{
		return 1;
	}
	if (func_35(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_35(int iParam0, int iParam1)//Position - 0x16F2
{
	int iVar0;
	
	iVar0 = func_36(iParam0);
	if (!iVar0 == func_5())
	{
		if (iVar0 == func_36(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_36(int iParam0)//Position - 0x171D
{
	if (iParam0 != func_5())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_5();
}

struct<13> func_37(int iParam0)//Position - 0x1740
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

int func_38(int iParam0, int iParam1)//Position - 0x1757
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		Global_2492157 = { func_37(iParam0) };
		Global_2492170 = { func_37(iParam1) };
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

Vector3 func_39(int iParam0)//Position - 0x17C4
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

bool func_40(int iParam0)//Position - 0x17D7
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x6FF834D85E2DD4C6(iParam0);
	return unk_0x9A0B2ED5055D3F0B(iParam0);
}

int func_41(var uParam0)//Position - 0x17F5
{
	if (uParam0->f_1)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_42(var uParam0)//Position - 0x181E
{
	if (!uParam0->f_1)
	{
		if (unk_0x8E1421E2A2A2FBD4())
		{
			func_9(uParam0, 0, 0);
		}
	}
}

void func_43()//Position - 0x183D
{
	switch (vLocal_100[unk_0x622FF3AE4B1D07C3() /*3*/].f_2)
	{
		case 0:
			func_192();
			func_49();
			func_44();
			if (Local_98.f_42 > 0)
			{
				vLocal_100[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_212();
			break;
	}
}

void func_44()//Position - 0x1889
{
	int iVar0;
	
	func_45(Local_98.f_3, &iLocal_108, -1082130432, 0, 0, 0, 0, -1, -1, 1);
	iVar0 = 0;
	while (iVar0 < Local_98.f_14)
	{
		func_45(Local_98.f_4[iVar0], &(Local_116[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		iVar0++;
	}
	if (unk_0xC80D31E4B587871C(Local_98.f_1, 0))
	{
		if (!unk_0xC80D31E4B587871C(Local_98.f_1, 1) && !unk_0xC80D31E4B587871C(vLocal_100[unk_0x622FF3AE4B1D07C3() /*3*/].f_1, 3))
		{
			if (unk_0x93C304998B457C45(Local_98.f_3))
			{
				if (unk_0xE53FD7AF7F25C0A8(Local_98.f_3) || (!unk_0x0070DE1A1E73C71C(Local_98.f_3) && unk_0x8E1421E2A2A2FBD4()))
				{
					unk_0xCE93FCB8A8D8DF0B(unk_0x47BA76CE3C825A08(Local_98.f_3), Global_1574761);
					unk_0x872F1C1F8587CCC7(&(vLocal_100[unk_0x622FF3AE4B1D07C3() /*3*/].f_1), 3);
				}
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!unk_0xC80D31E4B587871C(Local_98.f_1, (2 + iVar0)) && !unk_0xC80D31E4B587871C(vLocal_100[unk_0x622FF3AE4B1D07C3() /*3*/].f_1, (4 + iVar0)))
			{
				if (unk_0x93C304998B457C45(Local_98.f_4[iVar0]))
				{
					if (unk_0xE53FD7AF7F25C0A8(Local_98.f_4[iVar0]) || (!unk_0x0070DE1A1E73C71C(Local_98.f_4[iVar0]) && unk_0x8E1421E2A2A2FBD4()))
					{
						unk_0xCE93FCB8A8D8DF0B(unk_0x47BA76CE3C825A08(Local_98.f_4[iVar0]), Global_1574761);
						if (!unk_0x3AB6A1A9084FB0A4(unk_0x47BA76CE3C825A08(Local_98.f_4[iVar0])))
						{
							unk_0x992E814DF611C58C(unk_0x47BA76CE3C825A08(Local_98.f_4[iVar0]), 100f, 0);
						}
						unk_0x872F1C1F8587CCC7(&(vLocal_100[unk_0x622FF3AE4B1D07C3() /*3*/].f_1), (4 + iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

void func_45(var uParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x1A1A
{
	if (unk_0x93C304998B457C45(uParam0))
	{
		if (func_48())
		{
			Global_2436181 = unk_0x9EB17624F44A8DA4();
		}
		if (bParam3)
		{
			func_47(unk_0x47BA76CE3C825A08(uParam0), iParam1, 1, Global_2436181, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_47(unk_0x47BA76CE3C825A08(uParam0), iParam1, -1, Global_2436181, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xA6DECE14FC9A8C51(*iParam1))
	{
		func_46(iParam1);
	}
}

void func_46(int iParam0)//Position - 0x1A95
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xA6DECE14FC9A8C51(*iParam0))
	{
		unk_0xE30CF11C0EE14316(iParam0);
		bVar0 = true;
	}
	if (unk_0xA6DECE14FC9A8C51(iParam0->f_1))
	{
		unk_0xE30CF11C0EE14316(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x6ADD12BF4D6D2587(iParam0->f_7))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0->f_7, 0))
		{
			if (unk_0x48253D71C3FC0054(iParam0->f_7))
			{
				unk_0x36EE765E851207BF(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_47(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x1B07
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x98EC0789D9F0703B();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (!unk_0x48253D71C3FC0054(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x36EE765E851207BF(iParam0, 1);
			}
			else
			{
				unk_0xDE82468C21A54EFA(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0xFC583ECBA11F5D22(iParam0, iParam2);
			unk_0xC1D7C47530C3F5D1(iParam0, fParam6);
			if (unk_0xA6DECE14FC9A8C51(*uParam1))
			{
				unk_0xF27F72CA15E148EE(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x0BAF2928041A6C65(iParam0, iParam9);
		}
		unk_0xA0BF5158BEAE8C9B(iParam0, iParam4);
		unk_0xD73FCB9663FBC508(iParam0, iParam5);
		*uParam1 = unk_0x0B2160EA38790943(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xA6DECE14FC9A8C51(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x0C71C8E276E3EC54(*uParam1, iParam8);
				}
				if (!unk_0xAB019B170BF1309C(sParam7))
				{
					unk_0xDFC5BBDAEC7D6330("STRING");
					if (bParam10)
					{
						unk_0x854FACC4E5F40C82(sParam7);
					}
					else
					{
						unk_0xA6D2B267C377D7B2(sParam7);
					}
					unk_0x476C008681363650(*uParam1);
				}
				unk_0xF27F72CA15E148EE(*uParam1, 7);
			}
		}
		if (!unk_0xC80D31E4B587871C(uParam1->f_6, 2))
		{
			if (unk_0xA6DECE14FC9A8C51(*uParam1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x88DDBE9908752BF0(iParam0, 0))
		{
			uParam1->f_1 = unk_0xB683B450B8E9F408(iParam0);
			if (!unk_0xC80D31E4B587871C(uParam1->f_6, 3))
			{
				if (unk_0xA6DECE14FC9A8C51(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x0C71C8E276E3EC54(uParam1->f_1, iParam8);
					}
					if (!unk_0xAB019B170BF1309C(sParam7))
					{
						unk_0xDFC5BBDAEC7D6330("STRING");
						if (bParam10)
						{
							unk_0x854FACC4E5F40C82(sParam7);
						}
						else
						{
							unk_0xA6D2B267C377D7B2(sParam7);
						}
						unk_0x476C008681363650(uParam1->f_1);
					}
					unk_0xF27F72CA15E148EE(uParam1->f_1, 7);
					unk_0x872F1C1F8587CCC7(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xA6DECE14FC9A8C51(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x0EE72DB1CD8A3B86(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xA6DECE14FC9A8C51(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_48()//Position - 0x1CDC
{
	return Global_1312831;
}

void func_49()//Position - 0x1CE8
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (unk_0x93C304998B457C45(Local_98.f_2))
	{
		if (!unk_0xC80D31E4B587871C(vLocal_100[unk_0x622FF3AE4B1D07C3() /*3*/].f_1, 0))
		{
			if (!unk_0xB8DE76287EDC4957(unk_0xF32FBF2453AC1753(Local_98.f_2), 0))
			{
			}
			if (unk_0x191BE1BC8F26F3C1(unk_0xF32FBF2453AC1753(Local_98.f_2), 0))
			{
			}
			if (unk_0x191BE1BC8F26F3C1(unk_0xF32FBF2453AC1753(Local_98.f_2), 0))
			{
				if (unk_0x9EB17624F44A8DA4() == unk_0xDFB139FC1B23446B(Local_98.f_2, &uVar0))
				{
					func_185(2101, 1, -1);
					func_182(68, 1, -1);
					func_133(0, unk_0xFC1458A37D98B502(), "XPT_KAIE", -875716015, 1504756458, Global_262145.f_7492, 1, -1, 0, 0, 0);
					if (func_14())
					{
						func_120(86, "DSV_PASS0", 0, 0, -99);
					}
					else
					{
						func_120(86, "DSV_PASS1", 0, 0, -99);
					}
					iVar1 = Global_262145.f_7493;
					Global_2459022 = iVar1;
					func_71(&iVar1, 1);
					if (iVar1 > 0)
					{
						func_67(iVar1, 1, 1, 1092616192);
						if (func_66())
						{
							func_57(-1922554349, iVar1, &uVar2, 0, 0, 0);
						}
						else
						{
							unk_0x432E164230431523(iVar1, "AM_DESTROY_VEH", &uVar3);
						}
					}
					unk_0x872F1C1F8587CCC7(&(vLocal_100[unk_0x622FF3AE4B1D07C3() /*3*/].f_1), 0);
				}
			}
			else
			{
				if (!unk_0xC80D31E4B587871C(Local_98.f_1, 0))
				{
					if (!unk_0xC80D31E4B587871C(vLocal_100[unk_0x622FF3AE4B1D07C3() /*3*/].f_1, 1))
					{
						if (func_56(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_98.f_2), 1))
						{
							unk_0x872F1C1F8587CCC7(&(vLocal_100[unk_0x622FF3AE4B1D07C3() /*3*/].f_1), 1);
						}
					}
					if (!unk_0xC80D31E4B587871C(vLocal_100[unk_0x622FF3AE4B1D07C3() /*3*/].f_1, 2))
					{
						if (unk_0xEBE499597C718EB8(unk_0xF32FBF2453AC1753(Local_98.f_2), unk_0xFC1458A37D98B502(), 1))
						{
							unk_0x872F1C1F8587CCC7(&(vLocal_100[unk_0x622FF3AE4B1D07C3() /*3*/].f_1), 2);
						}
					}
				}
				if (func_225(unk_0x9EB17624F44A8DA4(), 1, 1) && func_56(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_98.f_2), 0))
				{
					if (!unk_0xC80D31E4B587871C(Global_2512808.f_4557, 1))
					{
						unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4557), 1);
					}
				}
				else if (unk_0xC80D31E4B587871C(Global_2512808.f_4557, 1))
				{
					unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4557), 1);
				}
				func_50();
			}
		}
	}
}

void func_50()//Position - 0x1EE2
{
	if (!unk_0xC80D31E4B587871C(iLocal_101, 0))
	{
		if (func_55(27, -1) == 0)
		{
			if (func_225(unk_0x9EB17624F44A8DA4(), 1, 1))
			{
				if (func_56(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_98.f_2), 0))
				{
					if (func_6(&uLocal_117, 300000, 0))
					{
						func_53(27, 1, -1);
						unk_0x872F1C1F8587CCC7(&iLocal_101, 0);
					}
				}
				else if (func_52(&uLocal_117))
				{
					func_51(&uLocal_117);
				}
			}
			else if (func_52(&uLocal_117))
			{
				func_51(&uLocal_117);
			}
		}
		else
		{
			unk_0x872F1C1F8587CCC7(&iLocal_101, 0);
		}
	}
}

void func_51(var uParam0)//Position - 0x1F71
{
	uParam0->f_1 = 0;
}

bool func_52(var uParam0)//Position - 0x1F7E
{
	return uParam0->f_1;
}

void func_53(int iParam0, int iParam1, int iParam2)//Position - 0x1F8A
{
	int iVar0;
	
	iVar0 = Global_2549053[iParam0 /*3*/][func_54(iParam2)];
	unk_0x41495934EA1DEC56(iVar0, iParam1, 1);
}

int func_54(int iParam0)//Position - 0x1FAE
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
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

int func_55(int iParam0, int iParam1)//Position - 0x1FE2
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2549053[iParam0 /*3*/][func_54(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_56(int iParam0, int iParam1, int iParam2)//Position - 0x200E
{
	if (unk_0x6ADD12BF4D6D2587(iParam0) && !unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0x6ADD12BF4D6D2587(iParam1) && !unk_0x191BE1BC8F26F3C1(iParam1, 0))
		{
			if (unk_0xA8D0477084E86A92(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_57(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x2054
{
	int iVar0;
	
	if (!func_66())
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
				func_58(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_58(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_58(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x24DE
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_66())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x02404400A68A3D5B(func_29()) || unk_0xD7D895B4B5395982())
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
			*uParam0 = func_65(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
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
			func_64(1, iParam4);
			Global_4262414 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_59(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_59(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2682
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_137.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_60(iParam0);
	}
}

void func_60(int iParam0)//Position - 0x26BA
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_66())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_63(iParam0))
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
		func_61(&(Global_4261865[iParam0 /*80*/]));
	}
}

void func_61(var uParam0)//Position - 0x270C
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
	func_62(&(uParam0->f_8.f_3));
	func_62(&(uParam0->f_8.f_16));
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

void func_62(var uParam0)//Position - 0x2802
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

int func_63(int iParam0)//Position - 0x284A
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_64(int iParam0, int iParam1)//Position - 0x2872
{
	Global_2459156 = iParam1;
	Global_2459155 = iParam0;
}

int func_65(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0x2886
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_66())
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

int func_66()//Position - 0x297F
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

void func_67(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x2996
{
	func_68(iParam0, iParam1, iParam2, fParam3);
}

void func_68(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x29AA
{
	func_69(iParam0, iParam1, iParam2, fParam3);
}

void func_69(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x29BE
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = system::floor((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_4 = iVar1;
	Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_3 = (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_70(iVar1, 0);
	}
}

void func_70(int iParam0, bool bParam1)//Position - 0x2A41
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_71(var uParam0, int iParam1)//Position - 0x2A52
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_119())
		{
			if (func_118(0))
			{
				if (!func_114(0))
				{
					if (unk_0x552F39AE86E07792(func_113()))
					{
						if (func_112() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_112());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_110(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_77("GB_BCUT_TICK1", func_113(), iVar0, 0, 0, 1, 1);
						}
						func_76(20);
						func_72(func_113(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_72(int iParam0, int iParam1, int iParam2)//Position - 0x2AF2
{
	struct<8> Var0;
	
	if (func_225(iParam0, 0, 1))
	{
		Var0 = 887219908;
		Var0.f_1 = unk_0x9EB17624F44A8DA4();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_75(iParam0);
		func_74(&(Var0.f_6), &(Var0.f_7));
		unk_0x5A26F0BDEE9F8260(1, &Var0, 8, func_73(iParam0));
	}
}

var func_73(int iParam0)//Position - 0x2B48
{
	var uVar0;
	
	unk_0x872F1C1F8587CCC7(&uVar0, iParam0);
	return uVar0;
}

void func_74(var uParam0, var uParam1)//Position - 0x2B5A
{
	*uParam0 = Global_1644563.f_9;
	*uParam1 = Global_1644563.f_10;
}

var func_75(int iParam0)//Position - 0x2B74
{
	return Global_1627537[iParam0 /*532*/].f_469;
}

void func_76(int iParam0)//Position - 0x2B88
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4856.f_7[iVar0]), iVar1);
}

int func_77(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x2BB1
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
		unk_0xF92B835A141C6BDD(func_84(iParam1, -2, 1, 0));
		unk_0x854FACC4E5F40C82(func_82(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xF92B835A141C6BDD(iParam3);
		}
		unk_0x6223D539BCD39E76(iParam2);
		iVar0 = unk_0x65F0733C4A64907A(0, 1);
		func_78(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_78(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x2C48
{
	int iVar0;
	
	if ((!func_81() || !unk_0x4916190900E76373()) || !func_27(unk_0x9EB17624F44A8DA4(), 0))
	{
		return;
	}
	iVar0 = func_79(iParam2);
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

int func_79(int iParam0)//Position - 0x2D50
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1664509 - 1))
	{
		if (iParam0 > Global_1664509.f_5[iVar0 /*53*/].f_1)
		{
			func_80(iVar0);
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

void func_80(int iParam0)//Position - 0x2DB2
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1664509.f_5[iVar0 /*53*/] = { Global_1664509.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_81()//Position - 0x2DEB
{
	return unk_0x21EA5D4DC72DE119(-1762644250);
}

var func_82(char* sParam0)//Position - 0x2DFC
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_83(&cVar0);
}

var func_83(char[4] cParam0)//Position - 0x2E1E
{
	return cParam0;
}

int func_84(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2E28
{
	int iVar0;
	int iVar1;
	
	if (func_108(iParam0))
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
	if ((func_108(unk_0x9EB17624F44A8DA4()) || (func_107() && func_106())) && !unk_0xC80D31E4B587871C(Global_2512808.f_4556, 31))
	{
		iVar1 = func_105();
		if (unk_0x6ADD12BF4D6D2587(iVar1))
		{
			if (unk_0x1417A5CC924DE120(iVar1))
			{
				if (unk_0xDF35170AEEFB473B(iVar1) != -1)
				{
					if (func_225(unk_0xDF35170AEEFB473B(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
						{
							if (Global_4456448.f_117386[iParam1] != -1)
							{
								return func_103(iParam1, iParam0, 0);
							}
							else
							{
								return func_92(iParam0, unk_0xDF35170AEEFB473B(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_92(iParam0, unk_0xDF35170AEEFB473B(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
			{
				if (Global_4456448.f_117386[iParam1] != -1)
				{
					return func_103(iParam1, iParam0, 0);
				}
				else
				{
					return func_85(0, -1, 0);
				}
			}
			else
			{
				return func_85(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
	{
		if (Global_4456448.f_117386[iParam1] != -1)
		{
			return func_103(iParam1, iParam0, 0);
		}
		else
		{
			return func_92(iParam0, unk_0x9EB17624F44A8DA4(), iParam1, bParam2, bParam3);
		}
	}
	return func_92(iParam0, unk_0x9EB17624F44A8DA4(), iParam1, bParam2, bParam3);
}

int func_85(bool bParam0, int iParam1, bool bParam2)//Position - 0x2FF8
{
	return func_86(unk_0x9EB17624F44A8DA4(), bParam0, iParam1, bParam2);
}

int func_86(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x300E
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
			if (func_91(iVar0, iParam2, 0) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_90(1);
				}
				else
				{
					return func_90(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_4, 20))
			{
				return func_87(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_87(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_90(1);
	}
	return func_90(0);
}

int func_87(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x30D2
{
	int iVar0;
	
	iVar0 = func_89(iParam0, iParam1, iParam3);
	if (func_88(Global_4456448.f_122309))
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

int func_88(int iParam0)//Position - 0x31E9
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

int func_89(int iParam0, int iParam1, int iParam2)//Position - 0x3222
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
			if (!func_91(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_90(bool bParam0)//Position - 0x3269
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_91(int iParam0, int iParam1, int iParam2)//Position - 0x3280
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

int func_92(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x344B
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
			if (func_100(1))
			{
				iVar3 = func_97(iParam0);
				if (!iVar3 == -1)
				{
					return func_95(iVar3);
				}
			}
			if ((func_94(iParam1, iParam0, iVar0, 0) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18)) || ((func_91(unk_0x917EE18109C5ACEA(iParam1), unk_0x917EE18109C5ACEA(iParam0), 0) && unk_0xC80D31E4B587871C(Global_4456448.f_15, 23)) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18)))
			{
				return func_90(1);
			}
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_15, 26))
			{
				return func_93(1);
			}
			else
			{
				return func_86(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574312 || Global_1574303) || Global_1595693[iParam0 /*680*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574312 == 1 && Global_1574322 == 0))
			{
				return func_90(1);
			}
			else
			{
				return func_86(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574307 && Global_1573842.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_97(iParam0);
	if (!iVar4 == -1)
	{
		return func_95(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_93(bool bParam0)//Position - 0x35EF
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_94(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3606
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

int func_95(int iParam0)//Position - 0x367E
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_96(iParam0);
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

var func_96(int iParam0)//Position - 0x3741
{
	return Global_2416800.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_97(int iParam0)//Position - 0x3758
{
	if (!iParam0 == func_5())
	{
		if (func_98(iParam0, 1))
		{
			return Global_2416800.f_2071.f_11[func_36(iParam0)];
		}
	}
	return -1;
}

bool func_98(int iParam0, bool bParam1)//Position - 0x378A
{
	if (!bParam1)
	{
		if (func_99(iParam0))
		{
			return 0;
		}
	}
	return Global_1627537[iParam0 /*532*/].f_11 != func_5();
}

int func_99(int iParam0)//Position - 0x37B5
{
	if (iParam0 != func_5())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_5())
		{
			return Global_1627537[iParam0 /*532*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_100(int iParam0)//Position - 0x37EA
{
	if ((func_102() || func_101()) || (func_32() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_101()//Position - 0x3819
{
	return Global_2447174.f_15;
}

var func_102()//Position - 0x3827
{
	return Global_2447174.f_14;
}

int func_103(int iParam0, int iParam1, bool bParam2)//Position - 0x3835
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_980513.f_12[iParam0];
	if (func_100(1))
	{
		iVar2 = func_97(iParam1);
		if (!iVar2 == -1)
		{
			return func_95(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xC80D31E4B587871C(Global_4456448.f_97[iParam0 /*10024*/].f_5191[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_5())
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
			iVar0 = func_86(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xC80D31E4B587871C(Global_4456448.f_21, 13))
		{
			iVar0 = func_104(iParam0);
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

int func_104(int iParam0)//Position - 0x399A
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

var func_105()//Position - 0x3A6F
{
	return Global_2359302.f_2;
}

bool func_106()//Position - 0x3A7D
{
	return unk_0xC80D31E4B587871C(Global_2359302, 4);
}

bool func_107()//Position - 0x3A8E
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

int func_108(int iParam0)//Position - 0x3AAB
{
	if (func_27(iParam0, 0))
	{
		return 1;
	}
	if (func_109())
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

bool func_109()//Position - 0x3AED
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

void func_110(int iParam0, bool bParam1)//Position - 0x3AFE
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_111(1);
	}
	else
	{
		iVar1 = func_111(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_111(bool bParam0)//Position - 0x3B30
{
	if (bParam0)
	{
		return system::round((0,05f * 100f));
	}
	return Global_262145.f_11730;
}

int func_112()//Position - 0x3B56
{
	return Global_262145.f_11729;
}

int func_113()//Position - 0x3B65
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11;
}

bool func_114(bool bParam0)//Position - 0x3B7A
{
	return func_115(unk_0x9EB17624F44A8DA4(), bParam0);
}

int func_115(int iParam0, bool bParam1)//Position - 0x3B8C
{
	return func_116(iParam0, bParam1, 1);
}

int func_116(int iParam0, bool bParam1, int iParam2)//Position - 0x3B9D
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_117(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1627537[iParam0 /*532*/].f_11;
	if (iVar0 != func_5() && Global_1627537[iVar0 /*532*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_117(int iParam0, int iParam1)//Position - 0x3BF9
{
	if (iParam0 != func_5())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_5())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 == iParam0 && Global_1627537[iParam0 /*532*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_118(bool bParam0)//Position - 0x3C48
{
	return func_98(unk_0x9EB17624F44A8DA4(), bParam0);
}

bool func_119()//Position - 0x3C5A
{
	return func_99(unk_0x9EB17624F44A8DA4());
}

void func_120(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)//Position - 0x3C6A
{
	func_121(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_121(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0x3C81
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_122(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_122(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)//Position - 0x3CA2
{
	int iVar0;
	
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return;
	}
	if (unk_0xFDD8E897FECD2912(sParam1) > 15)
	{
		return;
	}
	if (!unk_0xAB019B170BF1309C(sParam4))
	{
		if (unk_0xFDD8E897FECD2912(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_131();
	if (iVar0 == -1)
	{
		return;
	}
	func_130(iVar0);
	func_129(iVar0, uParam0);
	func_128(iVar0, uParam2, bParam3);
	func_127(iVar0, sParam1);
	if (unk_0xAB019B170BF1309C(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_126(iVar0);
	if (!unk_0xAB019B170BF1309C(sParam4))
	{
		func_124(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_123(iVar0, iParam6);
	}
}

void func_123(int iParam0, int iParam1)//Position - 0x3D4E
{
	Global_1351013.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_124(int iParam0, char* sParam1, bool bParam2)//Position - 0x3D64
{
	StringCopy(&(Global_1351013.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_125(iParam0);
}

void func_125(int iParam0)//Position - 0x3D8B
{
	unk_0x872F1C1F8587CCC7(&(Global_1351013.f_59[iParam0 /*16*/]), 5);
}

void func_126(int iParam0)//Position - 0x3DA2
{
	unk_0x872F1C1F8587CCC7(&(Global_1351013.f_59[iParam0 /*16*/]), 4);
}

void func_127(int iParam0, char* sParam1)//Position - 0x3DB9
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1351013.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_128(int iParam0, var uParam1, bool bParam2)//Position - 0x3DD9
{
	Global_1351013.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_1351013.f_59[iParam0 /*16*/]), 2);
		unk_0x0EE72DB1CD8A3B86(&(Global_1351013.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Global_1351013.f_59[iParam0 /*16*/]), 3);
		unk_0x0EE72DB1CD8A3B86(&(Global_1351013.f_59[iParam0 /*16*/]), 2);
	}
}

void func_129(int iParam0, var uParam1)//Position - 0x3E33
{
	Global_1351013.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_130(int iParam0)//Position - 0x3E49
{
	unk_0x872F1C1F8587CCC7(&(Global_1351013.f_59[iParam0 /*16*/]), 0);
}

int func_131()//Position - 0x3E60
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_132(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_132(int iParam0)//Position - 0x3E8E
{
	return unk_0xC80D31E4B587871C(Global_1351013.f_59[iParam0 /*16*/], 0);
}

int func_133(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x3EA5
{
	return func_134(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_134(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x3EC7
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_144(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam1))
		{
			if (unk_0x52C56492660097C7(iParam1))
			{
				iVar1 = unk_0x07F64790D10D1DB5(iParam1);
				func_140(unk_0xD0E00576168D19BB(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_135(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_135(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x3F40
{
	vector3 vVar0;
	
	vVar0 = { func_138(iParam0, 1) };
	if (iParam0 == func_137(unk_0xFC1458A37D98B502()))
	{
		func_136(1);
	}
	func_140(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_136(int iParam0)//Position - 0x3F74
{
	Global_2436181.f_1774 = iParam0;
}

int func_137(int iParam0)//Position - 0x3F85
{
	return iParam0;
}

Vector3 func_138(int iParam0, bool bParam1)//Position - 0x3F8F
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
	if (iParam0 == func_139(unk_0xFC1458A37D98B502()) && unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
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

int func_139(int iParam0)//Position - 0x4055
{
	return iParam0;
}

void func_140(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x405F
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
			Global_2436181.f_1173[iVar1 /*30*/].f_4 = func_143(Global_2436181.f_1173[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2436181.f_1173[iVar1 /*30*/].f_7 = unk_0xD1952A425B78FFC0();
			Global_2436181.f_1173[iVar1 /*30*/].f_3 = iParam1;
			Global_2436181.f_1173[iVar1 /*30*/].f_8 = iParam2;
			Global_2436181.f_1173[iVar1 /*30*/].f_9 = func_142();
			Global_2436181.f_1173[iVar1 /*30*/].f_10 = func_141();
			StringCopy(&(Global_2436181.f_1173[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2436181.f_1173[iVar1 /*30*/].f_26 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), iParam4);
		}
	}
}

int func_141()//Position - 0x4176
{
	if (Global_2436181.f_1774)
	{
		Global_2436181.f_1774 = 0;
		return 1;
	}
	Global_2436181.f_1774 = 0;
	return 0;
}

var func_142()//Position - 0x41A0
{
	var uVar0;
	
	uVar0 = Global_2436181.f_1776;
	Global_2436181.f_1776 = 1;
	return uVar0;
}

float func_143(vector3 vParam0, var uParam1, var uParam2)//Position - 0x41BB
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xBE3C4023003180FC(unk_0x90CC871EBA5B70FA(), vParam0, 1);
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

var func_144(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x4254
{
	var uVar0;
	
	uVar0 = func_145(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_145(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x4277
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_181(unk_0x9EB17624F44A8DA4()) || func_180(unk_0x9EB17624F44A8DA4()))
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
	else if (func_178() || func_174(unk_0x9EB17624F44A8DA4()))
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
	if (func_173(sParam2))
	{
	}
	if (func_172())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = system::round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_170(iVar1);
		fVar3 = (system::to_float(iVar1) * Global_262145.f_1);
		iVar1 = system::round(fVar3);
		if (bParam10)
		{
			iVar1 = func_169(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_167(0, &iVar1);
					break;
				
				case 3:
					func_167(1, &iVar1);
					break;
				
				case 1:
					func_165(&iVar1);
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
			func_185(1161, iVar1, -1);
			if (iParam1 == 0)
			{
				func_155((func_164(unk_0x9EB17624F44A8DA4()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x0367F69CE26830AB(iVar1, iParam8, iParam9);
				if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_2 != -1)
				{
					func_185(1162, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_150(iVar1);
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
				func_146((func_148(unk_0x9EB17624F44A8DA4()) + iVar1));
			}
			else
			{
				func_146((func_148(unk_0x9EB17624F44A8DA4()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_146(int iParam0)//Position - 0x4475
{
	if (func_172())
	{
		Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_5 = iParam0;
		func_147(joaat("mpply_globalxp"), iParam0);
	}
}

void func_147(int iParam0, int iParam1)//Position - 0x44A0
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, 1);
	}
}

int func_148(int iParam0)//Position - 0x44BC
{
	if (iParam0 > -1)
	{
		if (func_225(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x9EB17624F44A8DA4())
			{
				return func_149(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_5;
			}
		}
		else
		{
			return func_149(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_149(int iParam0)//Position - 0x450D
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

void func_150(int iParam0)//Position - 0x452B
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_37(unk_0x9EB17624F44A8DA4()) };
	if (unk_0x15DBBAF9E2085C7A())
	{
		if (unk_0xA84F967541249268(&Var0))
		{
			iVar1 = func_153(func_154(&Var0));
			if (iVar1 == 0)
			{
				func_152(&Global_1368098, iParam0);
				func_151(joaat("mpply_crew_local_xp_0"), Global_1368098);
			}
			else if (iVar1 == 1)
			{
				func_152(&Global_1368099, iParam0);
				func_151(joaat("mpply_crew_local_xp_1"), Global_1368099);
			}
			else if (iVar1 == 2)
			{
				func_152(&Global_1368100, iParam0);
				func_151(joaat("mpply_crew_local_xp_2"), Global_1368100);
			}
			else if (iVar1 == 3)
			{
				func_152(&Global_1368101, iParam0);
				func_151(joaat("mpply_crew_local_xp_3"), Global_1368101);
			}
			else if (iVar1 == 4)
			{
				func_152(&Global_1368102, iParam0);
				func_151(joaat("mpply_crew_local_xp_4"), Global_1368102);
			}
		}
	}
}

void func_151(int iParam0, int iParam1)//Position - 0x45FF
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

void func_152(var uParam0, int iParam1)//Position - 0x4724
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_153(int iParam0)//Position - 0x4735
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

int func_154(var uParam0)//Position - 0x4792
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

void func_155(int iParam0, int iParam1, int iParam2)//Position - 0x47B5
{
	if (func_172())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8947 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1368213[func_54(-1)])
				{
					unk_0x0367F69CE26830AB(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1368213[func_54(-1)])
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
		if (func_163(unk_0x9EB17624F44A8DA4()))
		{
			Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_1 = iParam0;
			Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_6 = func_161(iParam0, 1);
		}
		func_160(636, iParam0, -1, 1);
		func_159(637, func_161(iParam0, 1), -1, 1, 0);
		Global_1368213[func_54(-1)] = iParam0;
		func_156(7, 0);
	}
}

void func_156(int iParam0, int iParam1)//Position - 0x48D6
{
	int iVar0;
	
	if (func_158(iParam0, iParam1))
	{
		iVar0 = func_157();
		Global_2456735[iVar0] = iParam0;
	}
}

int func_157()//Position - 0x48F9
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

int func_158(int iParam0, var uParam1)//Position - 0x492E
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

void func_159(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x49B4
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_54(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x49E4
{
	int iVar0;
	
	iVar0 = Global_2523060[iParam0 /*3*/][func_54(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1368159[func_54(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1368165[func_54(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1368171[func_54(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1368177[func_54(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1368135[func_54(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1368141[func_54(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1368147[func_54(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1368153[func_54(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1368111[func_54(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1368117[func_54(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1368123[func_54(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1368129[func_54(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1368183[func_54(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1368189[func_54(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1368195[func_54(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1368201[func_54(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1368207[func_54(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1368213[func_54(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1368219[func_54(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2549199[0 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2549199[1 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2549199[2 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2549199[3 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 7052:
			Global_2549282[func_54(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1368225[func_54(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1368231[func_54(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1368237[func_54(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1368243[func_54(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2549239[0 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2549239[1 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2549239[2 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2549239[3 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2549239[4 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549285[0 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549285[1 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549285[2 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549285[3 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549285[4 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549301[0 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549301[1 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549301[2 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549301[3 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549301[4 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2549239[5 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2549199[4 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549317[func_54(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549326[func_54(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549320[func_54(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549329[func_54(iParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549323[func_54(iParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549332[func_54(iParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549335[func_54(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2549239[6 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2549199[5 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2549239[7 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2549199[6 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2549239[8 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2549199[7 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2549239[9 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2549199[8 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2549239[10 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2549199[9 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2549239[11 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2549199[10 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2549239[12 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2549199[11 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2549239[13 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2549199[12 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_161(int iParam0, bool bParam1)//Position - 0x50AF
{
	if (bParam1)
	{
	}
	return func_162(iParam0, 0);
}

int func_162(int iParam0, int iParam1)//Position - 0x50C3
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

int func_163(int iParam0)//Position - 0x5182
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

int func_164(int iParam0)//Position - 0x51A7
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x9EB17624F44A8DA4())
			{
				return Global_1368213[func_54(-1)];
			}
			else if (func_163(iParam0))
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1368213[func_54(-1)];
	}
	return 0;
}

void func_165(int iParam0)//Position - 0x5204
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
				if (unk_0x917EE18109C5ACEA(iVar5) == iVar1 || func_91(unk_0x917EE18109C5ACEA(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x9EB17624F44A8DA4())
					{
						if (func_38(unk_0x9EB17624F44A8DA4(), iVar5))
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
		iVar6 = system::round((func_166(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = system::round((func_166(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_166(int iParam0, int iParam1)//Position - 0x52EF
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = system::to_float(iParam0);
	fVar1 = system::to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_167(bool bParam0, int iParam1)//Position - 0x5310
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
				if (func_225(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x9EB17624F44A8DA4())
					{
						iVar1++;
						if (func_38(unk_0x9EB17624F44A8DA4(), iVar4))
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
			if (func_225(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x9EB17624F44A8DA4())
				{
					if (func_168(unk_0x9EB17624F44A8DA4(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_38(unk_0x9EB17624F44A8DA4(), iVar4))
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
		iVar5 = system::round((func_166(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = system::round((func_166(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_168(int iParam0, int iParam1)//Position - 0x5428
{
	return system::vdist(func_39(iParam0), func_39(iParam1));
	return 0f;
}

int func_169(int iParam0)//Position - 0x5444
{
	int iVar0;
	
	if (unk_0xEF96DAAD69CD3E8A() != 3)
	{
		return *iParam0;
	}
	iVar0 = system::round((func_166(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_170(int iParam0)//Position - 0x547B
{
	if (iParam0 < 0)
	{
		if (unk_0xB89BB11E0945F6F0(iParam0) > func_164(unk_0x9EB17624F44A8DA4()))
		{
			iParam0 = -func_164(unk_0x9EB17624F44A8DA4());
		}
	}
	if (func_171(8000, 0, 0) > 0)
	{
		if (func_171(8000, 0, 0) < (iParam0 + func_164(unk_0x9EB17624F44A8DA4())))
		{
			iParam0 = (func_171(8000, 0, 0) - func_164(unk_0x9EB17624F44A8DA4()));
		}
	}
	return iParam0;
}

int func_171(int iParam0, bool bParam1, int iParam2)//Position - 0x54DF
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

int func_172()//Position - 0x5507
{
	return 1;
}

int func_173(char* sParam0)//Position - 0x5510
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

int func_174(int iParam0)//Position - 0x5548
{
	return func_175(func_176(iParam0));
}

int func_175(int iParam0)//Position - 0x555A
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_176(int iParam0)//Position - 0x5574
{
	if (func_177(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

int func_177(int iParam0, int iParam1)//Position - 0x5597
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_178()//Position - 0x55D2
{
	if (unk_0x4916190900E76373())
	{
		return func_32();
	}
	return func_179(Global_4456448.f_122309);
}

int func_179(int iParam0)//Position - 0x55F6
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

bool func_180(int iParam0)//Position - 0x5630
{
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

bool func_181(int iParam0)//Position - 0x5645
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

void func_182(int iParam0, int iParam1, int iParam2)//Position - 0x565A
{
	int iVar0;
	
	iVar0 = func_184(iParam0, func_54(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_183(iParam0, iVar0, iParam2);
}

void func_183(int iParam0, int iParam1, var uParam2)//Position - 0x5681
{
	int iVar0;
	
	iVar0 = Global_2548785[iParam0 /*3*/][func_54(uParam2)];
	unk_0xBFFF62F75445099D(iVar0, iParam1, 1);
}

int func_184(int iParam0, int iParam1)//Position - 0x56A5
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2548785[iParam0 /*3*/][func_54(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_185(int iParam0, int iParam1, int iParam2)//Position - 0x56D1
{
	int iVar0;
	
	iVar0 = func_187(iParam0, func_54(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_186(iParam0))
	{
		func_159(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_160(iParam0, iVar0, iParam2, 1);
	}
}

int func_186(int iParam0)//Position - 0x5713
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

int func_187(int iParam0, int iParam1, int iParam2)//Position - 0x58C9
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_54(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_188(char* sParam0, int iParam1)//Position - 0x58FB
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

int func_189()//Position - 0x5912
{
	if (func_190(20))
	{
		return 1;
	}
	if (func_190(0))
	{
		return 1;
	}
	return 0;
}

bool func_190(int iParam0)//Position - 0x5934
{
	int iVar0;
	
	iVar0 = func_187(2469, -1, 0);
	return unk_0xC80D31E4B587871C(iVar0, iParam0);
}

bool func_191(int iParam0)//Position - 0x594F
{
	return unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(Global_2413422, unk_0xD1952A425B78FFC0())) > iParam0;
}

void func_192()//Position - 0x596A
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_104))
	{
		if (func_189() || func_193())
		{
			unk_0x3ED68ABD7299EAA3(iLocal_104, 0);
		}
		else
		{
			unk_0x3ED68ABD7299EAA3(iLocal_104, 4);
		}
	}
	else if (unk_0x918CA1BFFAA03556(Local_98.f_2))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xF32FBF2453AC1753(Local_98.f_2), 0))
		{
			iLocal_104 = unk_0xCA43F0FC44D9B846(unk_0xF32FBF2453AC1753(Local_98.f_2));
			if (!unk_0x125CDF69FA6EF560(Local_98.f_10))
			{
				unk_0x4B4040A0EC7DBA81(iLocal_104, 225);
			}
			else
			{
				unk_0x4B4040A0EC7DBA81(iLocal_104, 348);
			}
			unk_0x0C71C8E276E3EC54(iLocal_104, 1);
			unk_0xAA75C45BC4449A40(iLocal_104, 7000);
			unk_0xF27F72CA15E148EE(iLocal_104, 6);
			unk_0x62BD54E491535B76(iLocal_104, "DSV_BLIP");
			if (func_189())
			{
				unk_0x3ED68ABD7299EAA3(iLocal_104, 0);
			}
		}
	}
}

var func_193()//Position - 0x5A18
{
	return Global_2415606.f_1190;
}

void func_194()//Position - 0x5A27
{
	if (Local_98.f_12 == 2)
	{
		if (unk_0x918CA1BFFAA03556(Local_98.f_2))
		{
			if (unk_0xB8DE76287EDC4957(unk_0xF32FBF2453AC1753(Local_98.f_2), 0))
			{
				unk_0x6931076730A4AC5D(&uLocal_102);
				unk_0x94B94B1663C8D232(0, unk_0xF32FBF2453AC1753(Local_98.f_2), Local_98.f_20, 7f, iLocal_105, 3f);
				unk_0x16416C5B54FDBCBB(0, 0, 0);
				unk_0x380C1E7B7740D618(0, Local_98.f_24, 1f, -1, 0,25f, 0, Local_98.f_27);
				unk_0x1B16DD5C115FE009(uLocal_102);
			}
		}
	}
}

int func_195()//Position - 0x5A93
{
	return Local_98;
}

int func_196(int iParam0)//Position - 0x5A9D
{
	return vLocal_100[iParam0 /*3*/];
}

bool func_197(int iParam0)//Position - 0x5AAB
{
	return !func_198(iParam0);
}

int func_198(int iParam0)//Position - 0x5ABA
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6051)
			{
				return 0;
			}
			if (func_200(unk_0x9EB17624F44A8DA4(), 7))
			{
				return 0;
			}
			if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 0) || unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6052)
			{
				return 0;
			}
			if (func_200(unk_0x9EB17624F44A8DA4(), 7))
			{
				return 0;
			}
			if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 0) || unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6053)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6054)
			{
				return 0;
			}
			if (func_200(unk_0x9EB17624F44A8DA4(), 7))
			{
				return 0;
			}
			if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 0) || unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_199(4))
			{
				return 0;
			}
			if (func_200(unk_0x9EB17624F44A8DA4(), 7))
			{
				return 0;
			}
			if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 0) || unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_199(4))
			{
				return 0;
			}
			if (func_200(unk_0x9EB17624F44A8DA4(), 7))
			{
				return 0;
			}
			if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 0) || unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_199(4))
			{
				return 0;
			}
			if (func_200(unk_0x9EB17624F44A8DA4(), 7))
			{
				return 0;
			}
			if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 0) || unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_199(4))
			{
				return 0;
			}
			if (func_200(unk_0x9EB17624F44A8DA4(), 7))
			{
				return 0;
			}
			if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 0) || unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_199(4))
			{
				return 0;
			}
			if (func_200(unk_0x9EB17624F44A8DA4(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_199(4))
			{
				return 0;
			}
			if (func_200(unk_0x9EB17624F44A8DA4(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_199(int iParam0)//Position - 0x5E18
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_225(unk_0xF6A72924028F588B(iVar0), 0, 1))
		{
			if (unk_0xC80D31E4B587871C(Global_2422736[iVar0 /*420*/].f_223, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_200(int iParam0, int iParam1)//Position - 0x5E5E
{
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_223, iParam1);
}

int func_201()//Position - 0x5E77
{
	var uVar0;
	
	func_208(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_207())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_206())
	{
		return 1;
	}
	if (func_205(157))
	{
		if (!func_204())
		{
			return 1;
		}
	}
	if (func_205(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_202() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_202()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_202()//Position - 0x5F01
{
	switch (func_203())
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

int func_203()//Position - 0x5F35
{
	return Global_25233;
}

bool func_204()//Position - 0x5F40
{
	return Global_2447174.f_586;
}

int func_205(int iParam0)//Position - 0x5F4F
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_206()//Position - 0x5F66
{
	return Global_2456830;
}

bool func_207()//Position - 0x5F72
{
	return Global_2447174.f_581;
}

void func_208(var uParam0)//Position - 0x5F81
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
					func_209(iVar0);
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

void func_209(int iParam0)//Position - 0x5FF4
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_225(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_210(iVar2, &bVar3))
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

int func_210(int iParam0, var uParam1)//Position - 0x6075
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x9761C10D57B68069(iParam0))
		{
			if (unk_0x828686E167EA3FD3(iParam0))
			{
				if (!unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(iParam0)))
				{
					unk_0xDD29FF4BAB8AFF9C(iParam0, 0, 1);
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

void func_211()//Position - 0x60D4
{
	system::wait(0);
}

void func_212()//Position - 0x60E1
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_104))
	{
		unk_0xE30CF11C0EE14316(&iLocal_104);
	}
	func_215();
	if (func_195() == 4 && Local_98.f_10 != 0)
	{
		unk_0x2E4932E63763FE26(Local_98.f_10, 0);
	}
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4557), 1);
	func_214(17, 0);
	func_213();
}

void func_213()//Position - 0x6130
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_214(int iParam0, bool bParam1)//Position - 0x613C
{
	if (bParam1)
	{
		if (!unk_0xC80D31E4B587871C(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_223, iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_223), iParam0);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_223, iParam0))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_223), iParam0);
	}
}

void func_215()//Position - 0x619F
{
	if (Local_98.f_12 == 2)
	{
		unk_0xFAA3EF7FF92E1F9E(&uLocal_102);
	}
}

void func_216(struct<21> Param0)//Position - 0x61B5
{
	func_223(func_224(Param0), Param0);
	unk_0xBC60D873F181A18E(4);
	unk_0x7BC094E5B24A760D(1);
	func_222(0, -1, 0);
	unk_0x6E3ED3AE1C20445F(&Local_98, 49);
	unk_0xE7BC983D1386C9EE(&vLocal_100, 97);
	if (!func_221())
	{
		func_212();
	}
	if (unk_0x3A711520F83BAE98())
	{
		unk_0x941BE77305BB5695(0);
		if (unk_0x8E1421E2A2A2FBD4())
		{
			func_217();
			Local_98.f_8 = func_5();
		}
		func_214(17, 1);
		vLocal_100[unk_0x622FF3AE4B1D07C3() /*3*/] = 0;
	}
	else
	{
		func_212();
	}
}

void func_217()//Position - 0x6230
{
	func_220();
	Local_98.f_12 = unk_0x63A6486593EC7EC3(0, 3);
	if (Local_98.f_12 == 1 || Local_98.f_12 == 2)
	{
		Local_98.f_15 = unk_0x63A6486593EC7EC3(0, 5);
		if (Local_98.f_12 == 1)
		{
			func_219(&(Local_98.f_16), &(Local_98.f_19));
		}
		else
		{
			func_219(&(Local_98.f_20), &(Local_98.f_23));
		}
		func_218();
	}
	Local_98.f_14 = unk_0x63A6486593EC7EC3(0, 3);
	if (Global_262145.f_7496 >= 0 && Global_262145.f_7496 < 5)
	{
		Local_98.f_13 = Global_262145.f_7496;
	}
	else
	{
		Local_98.f_13 = unk_0x63A6486593EC7EC3(0, 5);
	}
}

void func_218()//Position - 0x62C8
{
	switch (Local_98.f_15)
	{
		case 0:
			Local_98.f_24 = { -2195,782f, -420,2502f, 12,0819f };
			Local_98.f_27 = 117,3927f;
			Local_98.f_28[0 /*3*/] = { -2189,975f, -422,8502f, 12,0709f };
			Local_98.f_38[0] = 152,6699f;
			Local_98.f_28[1 /*3*/] = { -2184,031f, -400,948f, 12,2027f };
			Local_98.f_38[1] = 337,9892f;
			Local_98.f_28[2 /*3*/] = { -2175,282f, -426,3756f, 12,128f };
			Local_98.f_38[2] = 12,2947f;
			break;
		
		case 1:
			Local_98.f_24 = { -981,5774f, -1487,319f, 4,5867f };
			Local_98.f_27 = 300,0815f;
			Local_98.f_28[0 /*3*/] = { -977,8269f, -1494,568f, 4,5867f };
			Local_98.f_38[0] = 0,731f;
			Local_98.f_28[1 /*3*/] = { -977,7324f, -1491,717f, 4,5867f };
			Local_98.f_38[1] = 173,7717f;
			Local_98.f_28[2 /*3*/] = { -954,6693f, -1486,713f, 4,16f };
			Local_98.f_38[2] = 304,8721f;
			break;
		
		case 2:
			Local_98.f_24 = { 697,3923f, -1375,27f, 25,196f };
			Local_98.f_27 = 111,1953f;
			Local_98.f_28[0 /*3*/] = { 717,8624f, -1360,491f, 25,0461f };
			Local_98.f_38[0] = 55,1674f;
			Local_98.f_28[1 /*3*/] = { 703,9843f, -1361,094f, 24,6728f };
			Local_98.f_38[1] = 306,7133f;
			Local_98.f_28[2 /*3*/] = { 707,1707f, -1388,706f, 25,2759f };
			Local_98.f_38[2] = 204,5666f;
			break;
		
		case 3:
			Local_98.f_24 = { -258,5791f, 302,4799f, 91,0086f };
			Local_98.f_27 = 180,4109f;
			Local_98.f_28[0 /*3*/] = { -244,9193f, 299,3712f, 91,0424f };
			Local_98.f_38[0] = 43,0354f;
			Local_98.f_28[1 /*3*/] = { -248,7361f, 305,6155f, 91,1444f };
			Local_98.f_38[1] = 191,8736f;
			Local_98.f_28[2 /*3*/] = { -232,4524f, 299,4706f, 91,2088f };
			Local_98.f_38[2] = 199,8353f;
			break;
		
		case 4:
			Local_98.f_24 = { 862,7026f, 2875,148f, 56,9868f };
			Local_98.f_27 = 206,7217f;
			Local_98.f_28[0 /*3*/] = { 880,2893f, 2862,074f, 55,6697f };
			Local_98.f_38[0] = 191,0122f;
			Local_98.f_28[1 /*3*/] = { 865,2399f, 2853,536f, 56,2583f };
			Local_98.f_38[1] = 305,8056f;
			Local_98.f_28[2 /*3*/] = { 867,6559f, 2841,155f, 56,944f };
			Local_98.f_38[2] = 235,4465f;
			break;
	}
}

void func_219(var uParam0, var uParam1)//Position - 0x65B8
{
	switch (Local_98.f_15)
	{
		case 0:
			*uParam0 = { -2192,39f, -419,3334f, 12,0959f };
			*uParam1 = 71,2404f;
			break;
		
		case 1:
			*uParam0 = { -977,0366f, -1482,866f, 4,0099f };
			*uParam1 = 124,7807f;
			break;
		
		case 2:
			*uParam0 = { 702,5064f, -1370,477f, 25,0573f };
			*uParam1 = 279,9129f;
			break;
		
		case 3:
			*uParam0 = { -253,3582f, 299,4982f, 90,9592f };
			*uParam1 = 184,8169f;
			break;
		
		case 4:
			*uParam0 = { 868,8133f, 2868,439f, 55,9186f };
			*uParam1 = 200,5778f;
			break;
	}
}

void func_220()//Position - 0x667D
{
	int iVar0;
	
	iVar0 = unk_0x63A6486593EC7EC3(0, 8);
	if (Global_262145.f_7495 >= 0 && Global_262145.f_7495 < 8)
	{
		iVar0 = Global_262145.f_7495;
	}
	switch (iVar0)
	{
		case 0:
			if (func_14())
			{
				Local_98.f_10 = joaat("baller");
			}
			else
			{
				Local_98.f_10 = joaat("zion");
			}
			if (func_14())
			{
				Local_98.f_11 = joaat("g_m_y_ballaorig_01");
			}
			else
			{
				Local_98.f_11 = joaat("g_m_y_ballaeast_01");
			}
			break;
		
		case 1:
			if (func_14())
			{
				Local_98.f_10 = joaat("emperor");
			}
			else
			{
				Local_98.f_10 = joaat("cavalcade2");
			}
			if (func_14())
			{
				Local_98.f_11 = joaat("g_m_y_mexgoon_02");
			}
			else
			{
				Local_98.f_11 = joaat("g_f_y_vagos_01");
			}
			break;
		
		case 2:
			if (func_14())
			{
				Local_98.f_10 = joaat("daemon");
			}
			else
			{
				Local_98.f_10 = joaat("gburrito");
			}
			if (func_14())
			{
				Local_98.f_11 = joaat("g_m_y_lost_01");
			}
			else
			{
				Local_98.f_11 = joaat("g_f_y_lost_01");
			}
			break;
		
		case 3:
			if (func_14())
			{
				Local_98.f_10 = joaat("pcj");
			}
			else
			{
				Local_98.f_10 = joaat("bjxl");
			}
			if (func_14())
			{
				Local_98.f_11 = joaat("g_m_m_chigoon_02");
			}
			else
			{
				Local_98.f_11 = joaat("g_m_m_chigoon_01");
			}
			break;
		
		case 4:
			if (func_14())
			{
				Local_98.f_10 = joaat("rocoto");
			}
			else
			{
				Local_98.f_10 = joaat("emperor");
			}
			if (func_14())
			{
				Local_98.f_11 = joaat("g_m_m_armgoon_01");
			}
			else
			{
				Local_98.f_11 = joaat("g_m_y_armgoon_02");
			}
			break;
		
		case 5:
			if (func_14())
			{
				Local_98.f_10 = joaat("journey");
			}
			else
			{
				Local_98.f_10 = joaat("sandking");
			}
			if (func_14())
			{
				Local_98.f_11 = joaat("a_m_m_hillbilly_02");
			}
			else
			{
				Local_98.f_11 = joaat("a_m_m_hillbilly_01");
			}
			break;
		
		case 6:
			if (func_14())
			{
				Local_98.f_10 = joaat("habanero");
			}
			else
			{
				Local_98.f_10 = joaat("sanchez2");
			}
			if (func_14())
			{
				Local_98.f_11 = joaat("g_m_y_salvagoon_01");
			}
			else
			{
				Local_98.f_11 = joaat("g_m_y_salvagoon_02");
			}
			break;
		
		case 7:
			if (func_14())
			{
				Local_98.f_10 = joaat("buffalo2");
			}
			else
			{
				Local_98.f_10 = joaat("dubsta");
			}
			if (func_14())
			{
				Local_98.f_11 = joaat("g_m_y_strpunk_01");
			}
			else
			{
				Local_98.f_11 = joaat("g_m_y_strpunk_02");
			}
			break;
	}
}

int func_221()//Position - 0x68C1
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x3A711520F83BAE98())
		{
			return 0;
		}
		if (unk_0x6303B0CB83943C5E())
		{
			return 1;
		}
		if (func_207())
		{
			return 0;
		}
		if (func_205(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		system::wait(0);
	}
	return 0;
}

int func_222(int iParam0, int iParam1, bool bParam2)//Position - 0x691A
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_213();
			}
			else
			{
				return 0;
			}
		}
		if (!func_48())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_213();
					}
					else
					{
						return 0;
					}
				}
				if (func_207())
				{
					if (!bParam2)
					{
						func_213();
					}
					else
					{
						return 0;
					}
				}
				if (func_205(155))
				{
					if (!bParam2)
					{
						func_213();
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
					func_213();
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
				func_213();
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
			func_213();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_223(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x6A2F
{
	if (!unk_0x3A711520F83BAE98())
	{
		func_213();
	}
	unk_0xAEA89A7E72415961(iParam0, 0, Param1.f_16);
}

int func_224(int iParam0)//Position - 0x6A4E
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

int func_225(int iParam0, bool bParam1, bool bParam2)//Position - 0x706B
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

