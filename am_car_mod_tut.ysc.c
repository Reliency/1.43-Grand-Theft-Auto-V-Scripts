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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
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
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	float fLocal_60 = 0f;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 32;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
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
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 32;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	int iLocal_137 = 0;
	vector3 vLocal_138[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	struct<21> Local_151 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0,0375f;
	fLocal_34 = 0,17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_60 = ((0,05f + 0,275f) - 0,01f);
	iLocal_139 = -1;
	func_195(ScriptParam_151);
	while (true)
	{
		func_194();
		if (func_185())
		{
			func_175();
		}
		switch (func_174(unk_0x622FF3AE4B1D07C3()))
		{
			case 0:
				if (func_173() == 2)
				{
					vLocal_138[unk_0x622FF3AE4B1D07C3() /*3*/] = 2;
				}
				else if (func_173() == 6)
				{
					vLocal_138[unk_0x622FF3AE4B1D07C3() /*3*/] = 5;
				}
				break;
			
			case 2:
				if (func_173() == 2)
				{
					if (!func_172(0))
					{
						func_74();
					}
					else if (!unk_0xC80D31E4B587871C(vLocal_138[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 1))
					{
						func_8();
					}
				}
				else if (func_173() == 6)
				{
					vLocal_138[unk_0x622FF3AE4B1D07C3() /*3*/] = 5;
				}
				break;
			
			case 5:
				func_6(&(vLocal_61.f_2));
				if (func_5(&(vLocal_61.f_2)))
				{
					vLocal_138[unk_0x622FF3AE4B1D07C3() /*3*/] = 6;
				}
				break;
			
			case 3:
				vLocal_138[unk_0x622FF3AE4B1D07C3() /*3*/] = 6;
			
			case 6:
				func_175();
				break;
		}
		if (unk_0x8E1421E2A2A2FBD4())
		{
			switch (func_173())
			{
				case 0:
					vLocal_61.x = 2;
					break;
				
				case 2:
					func_3();
					func_2();
					if (func_1())
					{
						vLocal_61.x = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1AE
{
	if (unk_0xC80D31E4B587871C(vLocal_61.y, 0))
	{
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x1C7
{
	if (unk_0x8E1421E2A2A2FBD4())
	{
	}
}

void func_3()//Position - 0x1D6
{
	int iVar0;
	int iVar1;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		if (iLocal_137 == 0)
		{
			unk_0x0EE72DB1CD8A3B86(&iLocal_140, 0);
			unk_0x872F1C1F8587CCC7(&iLocal_140, 1);
		}
		iVar0 = iLocal_137;
		if (unk_0x012BC3F18B8C7807(iVar0))
		{
			iVar1 = unk_0x43E1A43A1AA9E0BE(iVar0);
			if (!unk_0xC80D31E4B587871C(vLocal_138[iLocal_137 /*3*/].f_2, 0))
			{
				unk_0x0EE72DB1CD8A3B86(&iLocal_140, 1);
			}
			if (func_4(iVar1, 0, 1))
			{
				if (!unk_0xC80D31E4B587871C(Global_1595693[iLocal_137 /*680*/].f_146, 4))
				{
				}
			}
		}
		iLocal_137++;
		if (iLocal_137 == 32)
		{
			if (unk_0xC80D31E4B587871C(iLocal_140, 1))
			{
				unk_0x872F1C1F8587CCC7(&(vLocal_61.f_1), 0);
			}
			unk_0x872F1C1F8587CCC7(&iLocal_140, 0);
			iLocal_137 = 0;
		}
	}
}

int func_4(int iParam0, bool bParam1, bool bParam2)//Position - 0x26F
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

int func_5(var uParam0)//Position - 0x2B9
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

void func_6(var uParam0)//Position - 0x2E2
{
	if (!uParam0->f_1)
	{
		if (unk_0x8E1421E2A2A2FBD4())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_7(var uParam0, bool bParam1, bool bParam2)//Position - 0x301
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

void func_8()//Position - 0x346
{
	if (iLocal_139 != -1)
	{
		func_72(iLocal_139, 0);
		func_71(iLocal_139, 0);
		iLocal_139 = -1;
	}
	unk_0x872F1C1F8587CCC7(&(vLocal_138[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 0);
	unk_0x872F1C1F8587CCC7(&(vLocal_138[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 1);
	func_70(10, 0);
	func_69(0);
	func_30(1);
	func_23();
	func_9(43, 1, 0);
	func_9(42, 1, 0);
}

void func_9(int iParam0, bool bParam1, int iParam2)//Position - 0x3A8
{
	if (bParam1)
	{
		if (!func_22(iParam0, 0, 0))
		{
			if (iParam2 && Global_92885.f_18[iParam0])
			{
				if (func_21(iParam0) == 3 && !func_20(iParam0))
				{
					func_19(iParam0);
					func_18(iParam0, 0, 0);
					func_11(iParam0, 1, 0);
					func_10(iParam0);
				}
				else
				{
					func_18(iParam0, 1, 0);
					func_10(iParam0);
				}
			}
			else
			{
				func_18(iParam0, 0, 0);
				func_11(iParam0, 1, 0);
				func_10(iParam0);
			}
		}
		else
		{
			func_11(iParam0, 1, 0);
			func_10(iParam0);
		}
	}
	else if (func_22(iParam0, 0, 0))
	{
		func_11(iParam0, 0, 0);
		func_11(iParam0, 1, 0);
		func_10(iParam0);
	}
}

void func_10(int iParam0)//Position - 0x467
{
	Global_92885.f_166[iParam0] = 1;
	Global_92885.f_165 = 1;
}

void func_11(int iParam0, int iParam1, bool bParam2)//Position - 0x481
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_17() == 0)
		{
			iVar0 = func_15(func_16(iParam0), -1, 0);
			unk_0x0EE72DB1CD8A3B86(&iVar0, iParam1);
			func_12(func_16(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

void func_12(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x4EA
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_13(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_13(int iParam0)//Position - 0x51A
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
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

int func_14()//Position - 0x54E
{
	return Global_1312736;
}

int func_15(int iParam0, int iParam1, int iParam2)//Position - 0x55A
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_13(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_16(int iParam0)//Position - 0x58C
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

int func_17()//Position - 0x871
{
	return Global_25233;
}

void func_18(int iParam0, int iParam1, bool bParam2)//Position - 0x87C
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_17() == 0)
		{
			iVar0 = func_15(func_16(iParam0), -1, 0);
			unk_0x872F1C1F8587CCC7(&iVar0, iParam1);
			func_12(func_16(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

void func_19(int iParam0)//Position - 0x8E5
{
	if (Global_92885.f_18[iParam0])
	{
		func_18(iParam0, 10, 1);
		func_18(iParam0, 19, 1);
	}
}

bool func_20(int iParam0)//Position - 0x90C
{
	return func_22(iParam0, 5, 1);
}

int func_21(int iParam0)//Position - 0x91C
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

int func_22(int iParam0, int iParam1, bool bParam2)//Position - 0xBA9
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_17() == 0)
		{
			return unk_0xC80D31E4B587871C(func_15(func_16(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_23()//Position - 0xC09
{
	if (!func_29())
	{
		return;
	}
	if (!unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == Global_1312576.f_9)
	{
		return;
	}
	func_24();
}

void func_24()//Position - 0xC36
{
	func_26();
	func_25(0);
}

void func_25(bool bParam0)//Position - 0xC47
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

void func_26()//Position - 0xCD5
{
	if (!func_28())
	{
	}
	if (func_29())
	{
		unk_0x08EE7E0EF8FAFD9F(&(Global_1312576.f_12));
		func_27();
		unk_0x0BD2F1A526F1459A();
	}
}

void func_27()//Position - 0xCFE
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

int func_28()//Position - 0xF70
{
	if (!func_29())
	{
		return 0;
	}
	unk_0x4AF56F03659830D9(&(Global_1312576.f_12));
	func_27();
	return unk_0xC20F7134D3568246();
}

int func_29()//Position - 0xF96
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

void func_30(bool bParam0)//Position - 0xFAC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1312446)
	{
		if (!func_68())
		{
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				Global_1574396[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_65(unk_0x9EB17624F44A8DA4(), bParam0);
	iVar2 = func_63(iVar1, bParam0);
	if (!func_62(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			Global_1574396[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_1574396[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 248)
	{
		iVar3 = func_61(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_59(iVar4))
			{
				func_50(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_44(func_45(59, 0, 0), 0);
	func_40(func_45(135, 0, 0), 1);
	func_38(func_45(22, 0, 0), func_45(73, 0, 0));
	if (func_68())
	{
		if (func_37(77, -1))
		{
			func_36(1);
			func_35(1);
		}
	}
	if (func_34() || func_33())
	{
		func_31(77, 1, -1, 1);
		if (unk_0x3A711520F83BAE98())
		{
			func_9(28, 1, 0);
			func_9(29, 1, 0);
			func_9(30, 1, 0);
			func_9(31, 1, 0);
			func_9(32, 1, 0);
			func_9(33, 1, 0);
			func_9(34, 1, 0);
			func_9(35, 1, 0);
			func_9(36, 1, 0);
			func_9(37, 1, 0);
			func_9(38, 1, 0);
		}
	}
	if (func_45(21, 0, 0))
	{
		unk_0xF8F6DA428993DAF2(0);
	}
	Global_979888 = 0;
}

void func_31(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1152
{
	int iVar0;
	
	if (func_32())
	{
		iVar0 = Global_2547365[iParam0 /*3*/][func_13(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x41495934EA1DEC56(iVar0, iParam1, iParam3);
		}
	}
}

int func_32()//Position - 0x1184
{
	return 1;
	return 0;
}

bool func_33()//Position - 0x1191
{
	return Global_1312842;
}

bool func_34()//Position - 0x119D
{
	return Global_1312844;
}

void func_35(bool bParam0)//Position - 0x11A9
{
	if (!unk_0x3A711520F83BAE98())
	{
		return;
	}
	func_9(28, bParam0, 0);
	func_9(30, bParam0, 0);
	func_9(31, bParam0, 0);
	func_9(33, bParam0, 0);
	func_9(34, bParam0, 0);
	func_9(38, bParam0, 0);
}

void func_36(bool bParam0)//Position - 0x11F2
{
	if (!unk_0x3A711520F83BAE98())
	{
		return;
	}
	func_9(29, bParam0, 0);
	func_9(32, bParam0, 0);
	func_9(36, bParam0, 0);
	func_9(35, bParam0, 0);
	func_9(37, bParam0, 0);
}

int func_37(int iParam0, int iParam1)//Position - 0x1232
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547365[iParam0 /*3*/][func_13(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_38(bool bParam0, bool bParam1)//Position - 0x125E
{
	bool bVar0;
	
	if (!unk_0x3A711520F83BAE98())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_9(0, bParam0, 1);
	func_9(1, bParam0, 1);
	func_9(2, bParam0, 1);
	func_9(3, bParam0, 1);
	func_9(4, bParam0, 1);
	func_9(5, bParam0, 1);
	func_9(6, bParam0, 1);
	func_9(7, bParam0, bVar0);
	func_9(8, bParam0, 1);
	func_9(9, bParam0, 1);
	func_9(10, bParam0, 1);
	func_9(11, bParam0, 1);
	func_9(12, bParam0, bVar0);
	func_9(13, bParam0, 1);
	func_9(21, bParam0, 1);
	func_9(14, bParam0, 1);
	func_9(15, bParam0, 1);
	func_9(16, bParam0, 1);
	func_9(17, bParam0, 1);
	func_9(18, bParam0, 1);
	func_9(19, bParam0, 1);
	func_9(20, bParam0, 1);
	func_9(22, bParam0, 1);
	func_9(23, bParam0, 1);
	func_9(24, bParam0, 1);
	func_9(25, bParam0, 1);
	func_9(26, bParam0, 1);
	func_9(27, bParam0, 1);
	func_39(1, !bParam1);
	if (!bVar0)
	{
		func_19(12);
	}
}

void func_39(int iParam0, bool bParam1)//Position - 0x1386
{
	if (bParam1)
	{
		Global_92885.f_9[iParam0] = 1;
	}
	else
	{
		Global_92885.f_9[iParam0] = 0;
	}
}

void func_40(bool bParam0, bool bParam1)//Position - 0x13AC
{
	bool bVar0;
	
	if (!unk_0x3A711520F83BAE98())
	{
		return;
	}
	bVar0 = func_172(0);
	if (Global_262145.f_63 == 1 && func_45(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && bVar0))
	{
		func_9(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_20(44))
		{
			func_19(44);
		}
	}
	if (bParam0)
	{
		if (func_41(0) > 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_2512808.f_1710), 10);
		}
	}
}

int func_41(int iParam0)//Position - 0x1432
{
	int iVar0;
	
	if (Global_1665269[iParam0 /*8*/] == -1)
	{
		iVar0 = func_15(func_43(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_42(iParam0, 0);
			iVar0 = 0;
		}
		Global_1665269[iParam0 /*8*/] = iVar0;
	}
	return Global_1665269[iParam0 /*8*/];
}

void func_42(int iParam0, int iParam1)//Position - 0x1476
{
	Global_1665269[iParam0 /*8*/] = iParam1;
	func_12(func_43(iParam0), iParam1, -1, 1, 0);
}

int func_43(int iParam0)//Position - 0x1497
{
	switch (iParam0)
	{
		case 0:
			return 7014;
		
		default:
	}
	return 7014;
}

void func_44(bool bParam0, bool bParam1)//Position - 0x14B5
{
	bool bVar0;
	
	if (!unk_0x3A711520F83BAE98())
	{
		return;
	}
	bVar0 = func_172(0);
	func_9(39, bParam0, 0);
	func_9(40, bParam0, 0);
	func_9(41, bParam0, 0);
	if (!bParam0 || (bParam0 && bVar0))
	{
		func_9(43, bParam0, 0);
		func_9(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_20(39))
		{
			func_19(39);
		}
		if (!func_20(40))
		{
			func_19(40);
		}
		if (!func_20(41))
		{
			func_19(41);
		}
		if (!func_20(42))
		{
			func_19(42);
		}
		if (!func_20(43))
		{
			func_19(43);
		}
	}
}

bool func_45(int iParam0, bool bParam1, bool bParam2)//Position - 0x1566
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_7075 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_47(unk_0x9EB17624F44A8DA4(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4716 == 1)
		{
			return 1;
		}
	}
	if (func_34() || func_33())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_46())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1574396[iVar1], iVar0);
}

int func_46()//Position - 0x16D4
{
	int iVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_1706, 23))
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	iVar0 = Global_1368207[func_13(-1)];
	if (unk_0xC80D31E4B587871C(iVar0, 7))
	{
		unk_0x872F1C1F8587CCC7(&(Global_2512808.f_1706), 23);
		return 1;
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)//Position - 0x173A
{
	var uVar0;
	int iVar1;
	
	if (!func_68())
	{
		return 0;
	}
	if (func_49())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_48(iParam1);
	iVar1 = uVar0;
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_557, iVar1);
}

int func_48(int iParam0)//Position - 0x1782
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		default:
	}
	return 1;
}

bool func_49()//Position - 0x17E2
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_146, 3);
}

void func_50(int iParam0, bool bParam1)//Position - 0x17FC
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_58(-1))
			{
				if (!func_68())
				{
					return;
				}
			}
			if (!func_58(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_57() && !func_56())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_55())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_58(-1))
				{
					if (!func_51())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		unk_0x872F1C1F8587CCC7(&(Global_1574396[iVar1]), iVar0);
	}
}

int func_51()//Position - 0x1895
{
	int iVar0;
	
	if (func_54(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	iVar0 = Global_1368207[func_13(-1)];
	if (unk_0xC80D31E4B587871C(iVar0, 2))
	{
		func_52(1);
		return 1;
	}
	return 0;
}

void func_52(bool bParam0)//Position - 0x18CD
{
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_142, 25))
		{
			func_53(unk_0x9EB17624F44A8DA4(), 12);
			unk_0x872F1C1F8587CCC7(&(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_142), 25);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_142, 25))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_142), 25);
	}
}

void func_53(int iParam0, int iParam1)//Position - 0x193A
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_48(iParam1);
	iVar1 = uVar0;
	unk_0x872F1C1F8587CCC7(&(Global_1595693[iParam0 /*680*/].f_557), iVar1);
}

bool func_54(int iParam0)//Position - 0x1960
{
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_142, 25);
}

int func_55()//Position - 0x198F
{
	int iVar0;
	
	if (unk_0xC80D31E4B587871C(Global_2512808.f_1706, 6))
	{
		return 1;
	}
	iVar0 = Global_1368207[func_13(-1)];
	if (unk_0xC80D31E4B587871C(iVar0, 0))
	{
		if (!unk_0xC80D31E4B587871C(Global_2512808.f_1706, 6))
		{
			unk_0x872F1C1F8587CCC7(&(Global_2512808.f_1706), 6);
		}
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return 0;
}

bool func_56()//Position - 0x19F8
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_146, 7);
}

int func_57()//Position - 0x1A12
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return func_37(121, -1);
}

bool func_58(int iParam0)//Position - 0x1A42
{
	return func_37(123, iParam0);
}

int func_59(int iParam0)//Position - 0x1A52
{
	int iVar0;
	int iVar1;
	
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			iVar1 = iParam0;
			iVar1 = (iVar1 % 32);
			iVar0 = func_15(func_60(iParam0), -1, 0);
			if (unk_0xC80D31E4B587871C(iVar0, iVar1))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x1C84
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1197;
		
		case 1:
			return 1198;
		
		case 2:
			return 1199;
		
		case 3:
			return 1200;
		
		case 4:
			return 1201;
		
		case 5:
			return 1203;
		
		case 6:
			return 3798;
		
		case 7:
			return 4001;
		
		case 8:
			return 5455;
		
		default:
	}
	return 1197;
}

int func_61(int iParam0)//Position - 0x1D24
{
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
			if (!func_58(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
		case 156:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 78:
		case 103:
		case 124:
		case 126:
		case 127:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

int func_62(int iParam0)//Position - 0x1FE0
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return func_37(119, iParam0);
}

int func_63(int iParam0, bool bParam1)//Position - 0x2011
{
	if (bParam1)
	{
	}
	return func_64(iParam0, 0);
}

int func_64(int iParam0, int iParam1)//Position - 0x2025
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

int func_65(int iParam0, bool bParam1)//Position - 0x20E4
{
	if (bParam1)
	{
	}
	return func_66(iParam0);
}

int func_66(int iParam0)//Position - 0x20F7
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x9EB17624F44A8DA4())
			{
				return Global_1368213[func_13(-1)];
			}
			else if (func_67(iParam0))
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1368213[func_13(-1)];
	}
	return 0;
}

int func_67(int iParam0)//Position - 0x2154
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

int func_68()//Position - 0x2179
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return func_37(120, -1);
}

void func_69(bool bParam0)//Position - 0x21A9
{
	if (bParam0)
	{
		unk_0x872F1C1F8587CCC7(&(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_146), 18);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_146), 18);
	}
}

void func_70(int iParam0, bool bParam1)//Position - 0x21DF
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

void func_71(int iParam0, bool bParam1)//Position - 0x2242
{
	if (bParam1)
	{
	}
	if (unk_0xA6DECE14FC9A8C51(Global_92885.f_215[iParam0]))
	{
	}
}

void func_72(int iParam0, bool bParam1)//Position - 0x2260
{
	switch (iParam0)
	{
		case 39:
			func_73(39, bParam1);
			break;
		
		case 40:
			func_73(40, bParam1);
			break;
		
		case 41:
			func_73(41, bParam1);
			break;
		
		case 42:
			func_73(42, bParam1);
			break;
		
		case 43:
			func_73(43, bParam1);
			break;
		
		case 44:
			func_73(44, bParam1);
			break;
		
		default:
			break;
	}
}

void func_73(int iParam0, bool bParam1)//Position - 0x22D8
{
	if (bParam1)
	{
		if (!func_22(iParam0, 8, 0))
		{
			func_18(iParam0, 8, 0);
			func_10(iParam0);
		}
	}
	else if (func_22(iParam0, 8, 0))
	{
		func_11(iParam0, 8, 0);
		func_10(iParam0);
	}
}

void func_74()//Position - 0x231F
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	switch (vLocal_138[unk_0x622FF3AE4B1D07C3() /*3*/].f_1)
	{
		case 0:
			if (!unk_0xC80D31E4B587871C(vLocal_138[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					if (!unk_0xC80D31E4B587871C(iLocal_140, 5))
					{
						if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
						{
							if (unk_0xC80D31E4B587871C(iLocal_140, 3))
							{
								unk_0x0EE72DB1CD8A3B86(&iLocal_140, 10);
							}
							if (!unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
							{
								if (unk_0xC80D31E4B587871C(iLocal_140, 3))
								{
									unk_0x0EE72DB1CD8A3B86(&iLocal_140, 3);
								}
								if (unk_0xC80D31E4B587871C(iLocal_140, 7))
								{
									unk_0x0EE72DB1CD8A3B86(&iLocal_140, 7);
								}
								if (unk_0xC80D31E4B587871C(iLocal_140, 8))
								{
									unk_0x0EE72DB1CD8A3B86(&iLocal_140, 8);
								}
								if (unk_0xC80D31E4B587871C(iLocal_140, 11))
								{
									unk_0x0EE72DB1CD8A3B86(&iLocal_140, 11);
								}
								if (!unk_0xC80D31E4B587871C(iLocal_140, 2))
								{
									if (iLocal_139 != -1)
									{
										func_72(iLocal_139, 0);
										func_71(iLocal_139, 0);
										iLocal_139 = -1;
									}
									unk_0x0EE72DB1CD8A3B86(&iLocal_140, 3);
									func_168("FM_CTUT_CAR", 0);
									unk_0x872F1C1F8587CCC7(&iLocal_140, 2);
								}
							}
							else
							{
								if (unk_0xC80D31E4B587871C(iLocal_140, 2))
								{
									unk_0x0EE72DB1CD8A3B86(&iLocal_140, 2);
								}
								iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
								if ((!func_146(iVar0, 0, &uVar1) || !func_145(iVar0)) || func_144(unk_0x82FF3DFBC3965CC0(iVar0)))
								{
									if (func_143())
									{
										func_142(0);
									}
									if (unk_0xC80D31E4B587871C(iLocal_140, 3))
									{
										unk_0x0EE72DB1CD8A3B86(&iLocal_140, 3);
									}
									if (!unk_0xC80D31E4B587871C(iLocal_140, 7))
									{
										func_168("FM_CTUT_ANO", 0);
										unk_0x872F1C1F8587CCC7(&iLocal_140, 7);
									}
									if (!unk_0xC80D31E4B587871C(iLocal_140, 8))
									{
										if (func_137())
										{
											if (unk_0xB8DE76287EDC4957(iVar0, 0))
											{
												if (iLocal_148 > 0)
												{
													if (func_144(unk_0x82FF3DFBC3965CC0(iVar0)))
													{
														func_136("FM_CTUT_PRM", -1);
														unk_0x872F1C1F8587CCC7(&iLocal_140, 8);
														unk_0x872F1C1F8587CCC7(&iLocal_140, 11);
														func_7(&uLocal_145, 0, 0);
													}
													else if (!func_145(iVar0))
													{
														unk_0x872F1C1F8587CCC7(&iLocal_140, 8);
														func_136("FM_CTUT_DRI", -1);
													}
													else if (!func_146(iVar0, 0, &uVar1))
													{
														unk_0x872F1C1F8587CCC7(&iLocal_140, 8);
														func_136("FM_CTUT_HMD", -1);
													}
												}
											}
										}
									}
									else if (unk_0xC80D31E4B587871C(iLocal_140, 11))
									{
										if (func_135(&uLocal_145, 30000, 0))
										{
											if (func_144(unk_0x82FF3DFBC3965CC0(iVar0)))
											{
												if (func_137())
												{
													func_136("FM_CTUT_PRM", -1);
													func_134(&uLocal_145);
													func_7(&uLocal_145, 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0xC80D31E4B587871C(iLocal_140, 7))
									{
										unk_0x0EE72DB1CD8A3B86(&iLocal_140, 7);
									}
									if (!func_143())
									{
										func_142(1);
									}
									if (func_133("FM_CTUT_HMD"))
									{
										unk_0x3E80C2F7BC665259(1);
									}
									if (!func_132() || (func_132() && unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())))
									{
										if (!unk_0xC80D31E4B587871C(iLocal_140, 3))
										{
											func_168("FM_CTUT_MOD", 0);
											unk_0x872F1C1F8587CCC7(&iLocal_140, 3);
											func_134(&uLocal_141);
											func_7(&uLocal_141, 0, 0);
											if (!func_131(unk_0x9EB17624F44A8DA4()))
											{
												func_69(1);
											}
											if (iLocal_139 == -1)
											{
												iLocal_139 = func_117(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 4, -1);
												if (iLocal_139 != -1)
												{
													func_72(iLocal_139, 1);
													func_71(iLocal_139, 1);
												}
											}
										}
									}
									else if (func_132() && !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
									{
										if (!unk_0xC80D31E4B587871C(iLocal_140, 3))
										{
											unk_0x872F1C1F8587CCC7(&iLocal_140, 3);
										}
									}
								}
							}
							if (!unk_0xC80D31E4B587871C(iLocal_140, 4))
							{
								if (unk_0xC80D31E4B587871C(iLocal_140, 3))
								{
									if (func_135(&uLocal_141, 10000, 0))
									{
										if (!unk_0x0F30C1F1717A6437())
										{
											if (!func_116())
											{
												if (func_137())
												{
													unk_0x872F1C1F8587CCC7(&iLocal_140, 4);
												}
											}
										}
									}
								}
							}
						}
						else
						{
							if (!unk_0xC80D31E4B587871C(iLocal_140, 10))
							{
								if (!unk_0xC80D31E4B587871C(iLocal_140, 9))
								{
									func_168("FM_IHELP_LCP", 0);
									if (iLocal_139 != -1)
									{
										func_72(iLocal_139, 0);
										func_71(iLocal_139, 0);
										iLocal_139 = -1;
									}
									unk_0x0EE72DB1CD8A3B86(&iLocal_140, 3);
									unk_0x0EE72DB1CD8A3B86(&iLocal_140, 2);
									unk_0x0EE72DB1CD8A3B86(&iLocal_140, 7);
									unk_0x0EE72DB1CD8A3B86(&iLocal_140, 8);
									unk_0x872F1C1F8587CCC7(&iLocal_140, 10);
								}
							}
							if (func_143())
							{
								if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
								{
									if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
									{
										iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
										if ((!func_146(iVar0, 0, &uVar2) || !func_145(iVar0)) || func_144(unk_0x82FF3DFBC3965CC0(iVar0)))
										{
											func_142(0);
										}
									}
									else
									{
										func_142(0);
									}
								}
							}
						}
					}
					if (unk_0xC80D31E4B587871C(iLocal_140, 3) || (func_132() && unk_0xC80D31E4B587871C(iLocal_140, 10)))
					{
						if (func_132())
						{
							if (((func_133("FM_IHELP_CAR") || func_133("FM_IHELP_MOD")) || func_133("FM_CMOD_GPS")) || func_133("FM_CMOD_STOL"))
							{
								unk_0x3E80C2F7BC665259(1);
							}
							if (func_113("FM_IHELP_LCP"))
							{
								func_23();
							}
							if (!unk_0xC80D31E4B587871C(iLocal_140, 9))
							{
								if (func_111())
								{
									unk_0x872F1C1F8587CCC7(&iLocal_140, 9);
									unk_0x872F1C1F8587CCC7(&(Global_2512808.f_1704), 25);
									if (func_113("FM_CTUT_MOD"))
									{
										func_23();
									}
								}
							}
							if (func_110())
							{
								if (!unk_0xC80D31E4B587871C(Global_2512808.f_1704, 25))
								{
									unk_0x872F1C1F8587CCC7(&(Global_2512808.f_1704), 25);
								}
								if (!func_109(unk_0x9EB17624F44A8DA4()))
								{
									if (!func_108(unk_0x9EB17624F44A8DA4()))
									{
										func_107(1);
										iLocal_147 = 1;
										func_30(1);
									}
								}
								if ((func_113("FM_CTUT_RSP") || func_113("FM_IHELP_PTRK")) || func_113("FM_IHELP_PINS"))
								{
									func_23();
								}
							}
							else if (unk_0xC80D31E4B587871C(iLocal_140, 9))
							{
								if (func_106(unk_0x9EB17624F44A8DA4()) || (!func_104() && func_103()))
								{
									iVar3 = func_100(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0));
									if (iVar3 > 0)
									{
										if (!func_113("FM_CTUT_REP"))
										{
											func_168("FM_CTUT_REP", 0);
										}
									}
									else if (!func_98())
									{
										if (!func_113("FM_CTUT_RSP"))
										{
											func_168("FM_CTUT_RSP", 0);
										}
									}
									else if (!func_96())
									{
										if (!func_113("FM_IHELP_PTRK"))
										{
											func_168("FM_IHELP_PTRK", 0);
										}
									}
									else if (!func_93())
									{
										if (!func_113("FM_IHELP_PINS"))
										{
											func_168("FM_IHELP_PINS", 0);
										}
									}
								}
							}
						}
						else if (unk_0xC80D31E4B587871C(iLocal_140, 9))
						{
							if (!func_110())
							{
								if (unk_0x9F7B586A14398C40())
								{
									unk_0x0EE72DB1CD8A3B86(&iLocal_140, 9);
									unk_0x0EE72DB1CD8A3B86(&iLocal_140, 3);
									unk_0x0EE72DB1CD8A3B86(&iLocal_140, 10);
									func_23();
									iLocal_139 = -1;
									func_85(unk_0x9EB17624F44A8DA4(), 1, 0);
								}
							}
							else if (!unk_0xC80D31E4B587871C(vLocal_138[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 0))
							{
								unk_0x872F1C1F8587CCC7(&(vLocal_138[unk_0x622FF3AE4B1D07C3() /*3*/].f_2), 0);
							}
						}
					}
					else if (unk_0xC80D31E4B587871C(iLocal_140, 9))
					{
						unk_0x0EE72DB1CD8A3B86(&iLocal_140, 9);
						unk_0x0EE72DB1CD8A3B86(&iLocal_140, 3);
						unk_0x0EE72DB1CD8A3B86(&iLocal_140, 10);
						func_23();
						iLocal_139 = -1;
					}
					if (!unk_0xC80D31E4B587871C(iLocal_140, 5))
					{
						if (((func_82(unk_0x9EB17624F44A8DA4(), 1) || func_81()) || func_80() > 0) || (!func_78() && !func_132()))
						{
							unk_0x872F1C1F8587CCC7(&iLocal_140, 5);
							func_23();
						}
					}
					else if (unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()) || func_132())
					{
						if (unk_0x9F7B586A14398C40())
						{
							if ((((!func_82(unk_0x9EB17624F44A8DA4(), 1) && !func_81()) && func_80() == 0) && func_78()) || func_132())
							{
								if (!func_77(&uLocal_143))
								{
									func_7(&uLocal_143, 0, 0);
								}
								else if (func_135(&uLocal_143, 7000, 0) || func_132())
								{
									unk_0x0EE72DB1CD8A3B86(&iLocal_140, 5);
									unk_0x0EE72DB1CD8A3B86(&iLocal_140, 2);
									unk_0x0EE72DB1CD8A3B86(&iLocal_140, 3);
									unk_0x0EE72DB1CD8A3B86(&iLocal_140, 7);
									unk_0x0EE72DB1CD8A3B86(&iLocal_140, 10);
									func_134(&uLocal_143);
									if (iLocal_139 != -1)
									{
										func_72(iLocal_139, 0);
										func_71(iLocal_139, 0);
										iLocal_139 = -1;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
	if (!unk_0xC80D31E4B587871C(vLocal_138[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 1))
	{
		if (func_76())
		{
			func_8();
		}
		else
		{
			func_75();
		}
	}
}

void func_75()//Position - 0x2ACC
{
	if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) != 0)
	{
		return;
	}
	if (func_132())
	{
		return;
	}
	switch (iLocal_148)
	{
		case 0:
			if (!unk_0xF491DD47B88AA84E())
			{
				func_136("FM_IHELP_CAR", -1);
				iLocal_148++;
			}
			break;
		
		case 1:
			if (unk_0xC80D31E4B587871C(iLocal_140, 3))
			{
				if (!unk_0xF491DD47B88AA84E())
				{
					func_136("FM_IHELP_MOD", -1);
					iLocal_148++;
				}
			}
			break;
		
		case 2:
			if (unk_0xC80D31E4B587871C(iLocal_140, 3))
			{
				if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
					{
						if (!unk_0xF491DD47B88AA84E())
						{
							if (!func_77(&uLocal_149))
							{
								func_7(&uLocal_149, 0, 0);
							}
							else if (func_135(&uLocal_149, 1000, 0))
							{
								func_136("FM_CMOD_GPS", -1);
								iLocal_148++;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0xC80D31E4B587871C(iLocal_140, 3))
			{
				if (!unk_0xF491DD47B88AA84E())
				{
					if (!func_77(&uLocal_149))
					{
						func_7(&uLocal_149, 0, 0);
					}
					else if (func_135(&uLocal_149, 1000, 0))
					{
						func_136("FM_CMOD_STOL", -1);
						iLocal_148++;
					}
				}
			}
			break;
		
		case 4:
			if (unk_0xC80D31E4B587871C(iLocal_140, 3))
			{
				if (!unk_0xF491DD47B88AA84E())
				{
					if (!func_77(&uLocal_149))
					{
						func_7(&uLocal_149, 0, 0);
					}
					else if (func_135(&uLocal_149, 5000, 0))
					{
						func_136("FM_IHELP_BLP", -1);
						iLocal_148++;
					}
				}
			}
			break;
		
		case 5:
			if (unk_0xC80D31E4B587871C(iLocal_140, 3))
			{
				if (!unk_0xF491DD47B88AA84E())
				{
					iLocal_148++;
				}
			}
			break;
	}
}

int func_76()//Position - 0x2C55
{
	if (unk_0xC80D31E4B587871C(vLocal_138[unk_0x622FF3AE4B1D07C3() /*3*/].f_2, 0))
	{
		return 1;
	}
	return 0;
}

bool func_77(var uParam0)//Position - 0x2C74
{
	return uParam0->f_1;
}

int func_78()//Position - 0x2C80
{
	if (func_79() == 0)
	{
		return 1;
	}
	return 0;
}

int func_79()//Position - 0x2C95
{
	return Global_1312466.f_18;
}

int func_80()//Position - 0x2CA3
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_197;
}

bool func_81()//Position - 0x2CB8
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 0);
}

int func_82(int iParam0, bool bParam1)//Position - 0x2CD4
{
	if (bParam1)
	{
		if (func_83(iParam0))
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

bool func_83(int iParam0)//Position - 0x2D00
{
	return func_84(iParam0);
}

bool func_84(int iParam0)//Position - 0x2D0E
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

void func_85(int iParam0, bool bParam1, int iParam2)//Position - 0x2D28
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
			unk_0x7635EA803CE40962(0);
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
		if (!func_78())
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
				else if (bVar13 || (!func_91(unk_0x9EB17624F44A8DA4(), 0) && !func_90()))
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
				if (!func_89(iVar25) && !unk_0xDDF5130488C0B76A(iVar25))
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
				func_88();
				func_87();
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
				if (!func_89(iVar25) && !unk_0xDDF5130488C0B76A(iVar25))
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
					if (func_86(Global_4456448.f_143970))
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

bool func_86(int iParam0)//Position - 0x310A
{
	return iParam0 == 17;
}

void func_87()//Position - 0x3117
{
	vector3 vVar0;
	
	Global_2436181.f_1117 = 0;
	Global_2436181.f_1118 = 0;
	Global_2436181.f_1119 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2436181.f_1124 = -1;
	Global_2436181.f_1125 = 0;
	Global_2405047.f_2650 = { vVar0 };
}

void func_88()//Position - 0x3164
{
	Global_2405047.f_675 = 0;
	Global_2405047.f_2693 = 0;
	Global_2405047.f_508 = 0;
	Global_2405047.f_587 = 0;
	Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_222 = 0;
	Global_2405047.f_2649 = 0;
}

int func_89(int iParam0)//Position - 0x31A2
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

bool func_90()//Position - 0x31D3
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

bool func_91(int iParam0, int iParam1)//Position - 0x31E4
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_92(-1, 0) == 8;
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

int func_92(int iParam0, bool bParam1)//Position - 0x322F
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_14();
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

int func_93()//Position - 0x3270
{
	if (Global_92885.f_1383)
	{
		return 1;
	}
	if (func_94() >= 0)
	{
		if (unk_0xC80D31E4B587871C(Global_1320310[func_94() /*141*/].f_102, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_94()//Position - 0x32A7
{
	return Global_2097152[func_95() /*12130*/].f_7676.f_2;
}

int func_95()//Position - 0x32BF
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_96()//Position - 0x32CC
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (func_97(iVar0, 1) || Global_92885.f_1382)
		{
			return 1;
		}
	}
	return 0;
}

int func_97(int iParam0, bool bParam1)//Position - 0x3307
{
	if (Global_70856)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam0) && (!bParam1 || unk_0xB8DE76287EDC4957(iParam0, 0)))
		{
			if (unk_0xB80A4DA4C06A76F1(iParam0, "Player_Vehicle"))
			{
				if (unk_0x2786E663D1846FFC(iParam0, "Player_Vehicle") == unk_0xDFD4F88AAFDE2371(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_98()//Position - 0x3359
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (func_99(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_99(int iParam0)//Position - 0x3386
{
	return unk_0xB80A4DA4C06A76F1(iParam0, "Sprayed_Vehicle_Decorator");
}

int func_100(int iParam0)//Position - 0x3397
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	fVar3 = unk_0xBED420B2B3B64B88(iParam0);
	if (fVar3 > 10f)
	{
		iVar9 = 8;
	}
	else if (fVar3 > 5f)
	{
		iVar9 = 4;
	}
	fVar3 = (unk_0xA7B0253B80B52B2B(iParam0) / 1000f);
	if (fVar3 > 0,99f)
	{
		iVar5 = 0;
	}
	else if (fVar3 > 0,8f)
	{
		iVar5 = 20;
	}
	else if (fVar3 > 0,6f)
	{
		iVar5 = 40;
	}
	else if (fVar3 > 0,4f)
	{
		iVar5 = 80;
	}
	else
	{
		iVar5 = 100;
	}
	fVar3 = (unk_0x32DFD9C17763ABE0(iParam0) / 1000f);
	if (fVar3 > 0,99f)
	{
		iVar6 = 0;
	}
	else if (fVar3 > 0,8f)
	{
		iVar6 = 20;
	}
	else if (fVar3 > 0,6f)
	{
		iVar6 = 40;
	}
	else if (fVar3 > 0,4f)
	{
		iVar6 = 60;
	}
	else
	{
		iVar6 = 75;
	}
	fVar3 = (system::to_float(unk_0xDE523AF6F7B269AB(iParam0)) / 1000f);
	if (fVar3 > 0,99f)
	{
		iVar8 = 0;
	}
	else if (fVar3 > 0,8f)
	{
		iVar8 = 40;
	}
	else if (fVar3 > 0,6f)
	{
		iVar8 = 80;
	}
	else if (fVar3 > 0,4f)
	{
		iVar8 = 150;
	}
	else
	{
		iVar8 = 200;
	}
	if (unk_0x1B6C737F4ED24399(iParam0))
	{
		iVar8 += 50;
	}
	if (unk_0xD29635EFF2A67134(iParam0, 1))
	{
		iVar8 += 50;
	}
	else if (unk_0xE6031FF76E6EDE3F(iParam0, 1))
	{
		iVar8 += 25;
	}
	if (unk_0xD29635EFF2A67134(iParam0, 0))
	{
		iVar8 += 50;
	}
	else if (unk_0xE6031FF76E6EDE3F(iParam0, 0))
	{
		iVar8 += 25;
	}
	if (!unk_0x50BDEF5D23EBD3D4(iParam0))
	{
		iVar10 += 20;
		if (!unk_0x1FE6625767FB8CBF(iParam0, 6))
		{
			iVar10 += 40;
		}
		if (!unk_0x1FE6625767FB8CBF(iParam0, 7))
		{
			iVar10 += 40;
		}
	}
	if (unk_0xC1514CFCEC68CA4A(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		iVar1 = 0;
		if (unk_0x178CF89BBA808451(iParam0, 0))
		{
			iVar1++;
		}
		if (unk_0x178CF89BBA808451(iParam0, 1))
		{
			iVar1++;
		}
		if (unk_0x178CF89BBA808451(iParam0, 2))
		{
			iVar1++;
		}
		if (unk_0x178CF89BBA808451(iParam0, 3))
		{
			iVar1++;
		}
		if (unk_0x178CF89BBA808451(iParam0, 4))
		{
			iVar1++;
		}
		if (unk_0x178CF89BBA808451(iParam0, 5))
		{
			iVar1++;
		}
		iVar8 = (iVar8 + iVar1 * 25);
	}
	if (unk_0xFFB184B10B47E4C7(iParam0))
	{
		iVar8 += 15;
	}
	if (unk_0xE530E0B093E4C674(iParam0))
	{
		iVar8 += 15;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (unk_0x36CA14E4AEA7AA81(iParam0, iVar2, 0))
		{
			iVar1++;
		}
		iVar2++;
	}
	iVar7 = iVar1 * 25;
	if (unk_0x609B212F09C8934B(iParam0))
	{
		iVar11 = 50;
	}
	iVar0 = (((((((iVar4 + iVar5) + iVar6) + iVar8) + iVar7) + iVar9) + iVar10) + iVar11);
	if (func_102(unk_0x82FF3DFBC3965CC0(iParam0), 0))
	{
		iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_10892));
		if (iVar0 > system::floor((4f * Global_262145.f_10892)))
		{
			iVar4 = Global_262145.f_10890;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_10891)
		{
			iVar0 = Global_262145.f_10891;
		}
	}
	else if (func_101(iParam0))
	{
		iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_10895));
		if (iVar0 > system::floor((4f * Global_262145.f_10895)))
		{
			iVar4 = Global_262145.f_10893;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_10894)
		{
			iVar0 = Global_262145.f_10894;
		}
	}
	else
	{
		if (iVar0 > 0)
		{
			iVar4 = 50;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > 1250)
		{
			iVar0 = 1250;
		}
	}
	return iVar0;
}

int func_101(int iParam0)//Position - 0x3717
{
	switch (unk_0x82FF3DFBC3965CC0(iParam0))
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

int func_102(int iParam0, int iParam1)//Position - 0x3768
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_13545)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_13546)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_13544)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_13547)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_13549)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_13548)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_17990)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_17992)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_17996)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_17993)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18000)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_17998)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18003)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_19922)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_19923)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
	}
	return 0;
}

bool func_103()//Position - 0x39DB
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

int func_104()//Position - 0x39F0
{
	if (((((func_105(39) || func_105(40)) || func_105(41)) || func_105(42)) || func_105(43)) || func_105(44))
	{
		return 1;
	}
	return 0;
}

int func_105(int iParam0)//Position - 0x3A42
{
	return func_22(iParam0, 20, 1);
}

bool func_106(int iParam0)//Position - 0x3A53
{
	if (!unk_0x3A711520F83BAE98())
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_146, 19);
}

void func_107(bool bParam0)//Position - 0x3A78
{
	if (bParam0)
	{
		unk_0x872F1C1F8587CCC7(&(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_146), 20);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_146), 20);
	}
}

bool func_108(int iParam0)//Position - 0x3AAE
{
	if (!unk_0x3A711520F83BAE98())
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_146, 20);
}

bool func_109(int iParam0)//Position - 0x3AD3
{
	if (!unk_0x3A711520F83BAE98())
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_146, 21);
}

int func_110()//Position - 0x3AF8
{
	if (!func_96())
	{
		return 0;
	}
	if (!func_93())
	{
		return 0;
	}
	if (!func_98())
	{
		return 0;
	}
	return 1;
}

int func_111()//Position - 0x3B25
{
	if (((((func_112(39) || func_112(40)) || func_112(41)) || func_112(42)) || func_112(43)) || func_112(44))
	{
		return 1;
	}
	return 0;
}

int func_112(int iParam0)//Position - 0x3B77
{
	return func_22(iParam0, 6, 1);
}

int func_113(char* sParam0)//Position - 0x3B87
{
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	if (!func_29())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		if (unk_0xFDD8E897FECD2912(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0xFDD8E897FECD2912(sParam0) > 23)
	{
		return 0;
	}
	return func_114(sParam0);
}

bool func_114(char* sParam0)//Position - 0x3BD8
{
	if (!func_29())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_115(sParam0);
	}
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	return unk_0x8B948C59217A295D(sParam0) == unk_0x8B948C59217A295D(&(Global_1312576.f_12));
}

bool func_115(char* sParam0)//Position - 0x3C1C
{
	if (!func_29())
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	return unk_0x8B948C59217A295D(sParam0) == unk_0x8B948C59217A295D(&(Global_1312576.f_16));
}

bool func_116()//Position - 0x3C4E
{
	return Global_1312854;
}

int func_117(vector3 vParam0, int iParam1, int iParam2)//Position - 0x3C5A
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 47)
	{
		if (iParam1 == 6 || iParam1 == func_21(iVar0))
		{
			iVar4 = iVar0;
			if (func_130(iVar4))
			{
				fVar1 = unk_0xBE3C4023003180FC(vParam0, func_118(iVar0, 0), 1);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_118(int iParam0, bool bParam1)//Position - 0x3CDB
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821,9946f, -187,1776f, 36,5689f;
			break;
		
		case 1:
			return 133,5702f, -1710,918f, 28,2916f;
			break;
		
		case 2:
			return -1287,082f, -1116,558f, 5,9901f;
			break;
		
		case 3:
			return 1933,119f, 3726,079f, 31,8444f;
			break;
		
		case 4:
			return 1208,333f, -470,917f, 65,208f;
			break;
		
		case 5:
			return -30,7448f, -148,4921f, 56,0765f;
			break;
		
		case 6:
			return -280,8165f, 6231,771f, 30,6955f;
			break;
		
		case 7:
			return 80,665f, -1391,669f, 28,3761f;
			break;
		
		case 8:
			return 1687,881f, 4820,55f, 41,0096f;
			break;
		
		case 9:
			return 419,531f, -807,5787f, 28,4896f;
			break;
		
		case 10:
			return -1094,049f, 2704,171f, 18,0873f;
			break;
		
		case 11:
			return 1197,972f, 2704,22f, 37,1572f;
			break;
		
		case 12:
			return -818,6218f, -1077,533f, 10,3282f;
			break;
		
		case 13:
			return -0,2361f, 6516,045f, 30,8684f;
			break;
		
		case 14:
			return -1199,809f, -776,6886f, 16,3237f;
			break;
		
		case 15:
			return 618,1857f, 2752,567f, 41,0881f;
			break;
		
		case 16:
			return 126,6853f, -212,5027f, 53,5578f;
			break;
		
		case 17:
			return -3168,966f, 1055,287f, 19,8632f;
			break;
		
		case 18:
			return -715,3598f, -155,7742f, 36,4105f;
			break;
		
		case 19:
			return -158,2199f, -304,9663f, 38,735f;
			break;
		
		case 20:
			return -1455,005f, -233,1862f, 48,7936f;
			break;
		
		case 21:
			return -1335,973f, -1278,555f, 3,8598f;
			break;
		
		case 22:
			return 321,6098f, 179,4165f, 102,5865f;
			break;
		
		case 23:
			return 1861,685f, 3750,08f, 32,0318f;
			break;
		
		case 24:
			return -290,1603f, 6199,095f, 30,4871f;
			break;
		
		case 25:
			return -1153,948f, -1425,019f, 3,9544f;
			break;
		
		case 26:
			return 1322,455f, -1651,125f, 51,1885f;
			break;
		
		case 27:
			return -3169,42f, 1074,727f, 19,8343f;
			break;
		
		case 28:
			return 17,6804f, -1114,288f, 28,797f;
			break;
		
		case 29:
			return 1697,979f, 3753,2f, 33,7053f;
			break;
		
		case 30:
			return 245,2711f, -45,8126f, 68,941f;
			break;
		
		case 31:
			return 844,1248f, -1025,571f, 27,1948f;
			break;
		
		case 32:
			return -325,8904f, 6077,026f, 30,4548f;
			break;
		
		case 33:
			return -664,2178f, -943,3646f, 20,8292f;
			break;
		
		case 34:
			return -1313,948f, -390,9637f, 35,592f;
			break;
		
		case 35:
			return -1111,238f, 2688,463f, 17,6131f;
			break;
		
		case 36:
			return -3165,231f, 1082,855f, 19,8438f;
			break;
		
		case 37:
			return 2569,612f, 302,576f, 107,7349f;
			break;
		
		case 38:
			return 811,8699f, -2149,102f, 28,6363f;
			break;
		
		case 39:
			return -1147,314f, -1992,434f, 12,1803f;
			break;
		
		case 40:
			return 724,524f, -1089,081f, 21,1692f;
			break;
		
		case 41:
			return -354,5272f, -135,4011f, 38,185f;
			break;
		
		case 42:
			return 113,2615f, 6624,28f, 30,7871f;
			break;
		
		case 43:
			return 1174,707f, 2644,45f, 36,7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211,5f, -1324,2f, 30,296f;
			}
			else
			{
				return -205,6654f, -1311,113f, 30,296f;
			}
			break;
		
		case 45:
			return func_129(Global_94374);
			break;
		
		case 46:
			if (Global_1595538 != func_128())
			{
				if (func_127(Global_1595538))
				{
					return func_120(2, 2);
				}
				else if (func_119(Global_1595538))
				{
					return func_120(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510,1f, 4749,5f, -69f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_119(int iParam0)//Position - 0x427C
{
	if (iParam0 != func_128())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 0) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 1)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_120(int iParam0, int iParam1)//Position - 0x42DA
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1595538 != func_128())
	{
		if (iParam1 == 3)
		{
			if (func_121(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xC80D31E4B587871C(Global_1595693[Global_1595538 /*680*/].f_266.f_236, 4))
			{
				if (func_121(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[Global_1595538 /*680*/].f_266.f_236, 5))
			{
				if (func_121(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_121(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x4388
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_126(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_126(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_124(iParam0) };
	}
	else
	{
		Var2 = { func_123(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_122(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_122(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x9EA50C5EC175E58E(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_122(vector3 vParam0, float fParam1)//Position - 0x441D
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

struct<6> func_123(int iParam0)//Position - 0x4461
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 1:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 2:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 3:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 4:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 5:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 6:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 7:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 8:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
	}
	return Var0;
}

struct<6> func_124(int iParam0)//Position - 0x45E5
{
	return func_125(iParam0);
}

struct<6> func_125(int iParam0)//Position - 0x45F3
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105,22f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104,105f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105,22f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104,105f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011,925f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38,125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103,213f, -3013,483f, -39,03f };
			Var0.f_3 = { 0f, 0f, 31,32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101,408f, -3012,32f, -38,45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103,037f, -3012,318f, -39,99874f };
			break;
		
		case 7:
			Var0 = { 1105,645f, -3012,04f, -39,542f };
			Var0.f_3 = { 0f, 0f, -86,04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104,063f, -3012,368f, -39,99875f };
			break;
		
		case 9:
			Var0 = { 1105,665f, -3012,334f, -38,50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102,504f, -3012,35f, -39,341f };
			Var0.f_3 = { 0f, 0f, -96,48f };
			break;
		
		case 11:
			Var0 = { 1102,928f, -3012,693f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102,942f, -3011,315f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101,994f, -3012,878f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103,152f, -3013,032f, -38,24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102,465f, -3009,515f, -39,341f };
			Var0.f_3 = { 0f, 0f, -12,96f };
			break;
		
		case 14:
			Var0 = { 1102,917f, -3009,525f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102,922f, -3010,887f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101,682f, -3009,227f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102,453f, -3008,51f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104,684f, -3009,561f, -39,341f };
			Var0.f_3 = { 0f, 0f, 169,56f };
			break;
		
		case 17:
			Var0 = { 1104,34f, -3008,698f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104,344f, -3009,618f, -37,98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105,459f, -3009,793f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104,783f, -3010,433f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104,025f, -3007,316f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 24:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 25:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 26:
			Var0 = { 1102,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 31:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 32:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 33:
			Var0 = { 1102,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 38:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 39:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
		
		case 40:
			Var0 = { 1102,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011,9f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38,115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105,174f, -3004,16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105,175f, -3005,818f, -37,91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106,6f, -3000,847f, -39,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106,601f, -3002,171f, -37,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101,95f, -3011,9f, -39,2f };
			Var0.f_3 = { 0f, 0f, 49,5f };
			break;
		
		case 52:
			Var0 = { 1101,95f, -3010f, -39,2f };
			Var0.f_3 = { 0f, 0f, 130,32f };
			break;
		
		case 53:
			Var0 = { 1105,16f, -3009,06f, -39,2f };
			Var0.f_3 = { 0f, 0f, -44,64f };
			break;
		
		case 54:
			Var0 = { 1102,476f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103,593f, -3008,27f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103,565f, -3014f, -39,988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103,55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103,55f, -3013,762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103,55f, -3006,186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103,6f, -3013,933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_126(int iParam0, var uParam1)//Position - 0x50BA
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103,562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103,562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103,562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_127(int iParam0)//Position - 0x513C
{
	if (iParam0 != func_128())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 3) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 4)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_128()//Position - 0x519A
{
	return -1;
}

Vector3 func_129(int iParam0)//Position - 0x51A3
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974,9542f, -3000,091f, -35f;
			break;
		
		case 6:
			return -1586,36f, -566,6f, 106,17f;
			break;
		
		case 7:
			return -1389,87f, -465,17f, 82,68f;
			break;
		
		case 8:
			return -145,81f, -590,2f, 171,13f;
			break;
		
		case 9:
			return -62,49f, -823,55f, 288,74f;
			break;
		
		case 4:
			return 1102,515f, -3158,888f, -38,5186f;
			break;
		
		case 5:
			return 1005,861f, -3156,162f, -39,907f;
			break;
		
		case 10:
			return 1103,562f, -3000f, -40f;
			break;
		
		case 11:
			return 938,3077f, -3196,112f, -100f;
			break;
		
		case 12:
			return -1266,802f, -3014,836f, -49,4895f;
			break;
		
		case 13:
			return 520,0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345,0041f, 4842,001f, -59,9997f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

bool func_130(int iParam0)//Position - 0x5340
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 39:
			bVar0 = unk_0xA6DECE14FC9A8C51(Global_92885.f_215[39]);
			break;
		
		case 40:
			bVar0 = unk_0xA6DECE14FC9A8C51(Global_92885.f_215[40]);
			break;
		
		case 41:
			bVar0 = unk_0xA6DECE14FC9A8C51(Global_92885.f_215[41]);
			break;
		
		case 42:
			bVar0 = unk_0xA6DECE14FC9A8C51(Global_92885.f_215[42]);
			break;
		
		case 43:
			bVar0 = unk_0xA6DECE14FC9A8C51(Global_92885.f_215[43]);
			break;
		
		case 44:
			bVar0 = unk_0xA6DECE14FC9A8C51(Global_92885.f_215[44]);
			break;
	}
	return bVar0;
}

bool func_131(int iParam0)//Position - 0x53E7
{
	if (!unk_0x3A711520F83BAE98())
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_146, 18);
}

int func_132()//Position - 0x540C
{
	if (((((func_20(39) || func_20(40)) || func_20(41)) || func_20(42)) || func_20(43)) || func_20(44))
	{
		return 1;
	}
	return 0;
}

bool func_133(char* sParam0)//Position - 0x545E
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_134(var uParam0)//Position - 0x5471
{
	uParam0->f_1 = 0;
}

int func_135(var uParam0, int iParam1, bool bParam2)//Position - 0x547E
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
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

void func_136(char* sParam0, int iParam1)//Position - 0x54DC
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

int func_137()//Position - 0x54F3
{
	if (((((((((((((!func_4(unk_0x9EB17624F44A8DA4(), 1, 1) || unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502())) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || func_141(8, -1)) || func_141(15, -1)) || func_140()) || func_141(3, -1)) || unk_0xF491DD47B88AA84E()) || func_82(unk_0x9EB17624F44A8DA4(), 1)) || func_81()) || func_103()) || func_139()) || func_138()) || unk_0x0F30C1F1717A6437())
	{
		return 0;
	}
	return 1;
}

var func_138()//Position - 0x55A6
{
	return Global_2436181.f_2912.f_578;
}

bool func_139()//Position - 0x55B8
{
	return Global_92885.f_316 > 0;
}

var func_140()//Position - 0x55C9
{
	return Global_2394809;
}

bool func_141(int iParam0, int iParam1)//Position - 0x55D5
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

void func_142(bool bParam0)//Position - 0x5610
{
	if (bParam0)
	{
		unk_0x872F1C1F8587CCC7(&(Global_2512808.f_1707), 4);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1707), 4);
	}
}

bool func_143()//Position - 0x5638
{
	return unk_0xC80D31E4B587871C(Global_2512808.f_1707, 4);
}

int func_144(int iParam0)//Position - 0x564C
{
	switch (iParam0)
	{
		case joaat("adder"):
		case joaat("bullet"):
		case joaat("carbonizzare"):
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("coquette"):
		case joaat("entityxf"):
		case joaat("exemplar"):
		case joaat("feltzer2"):
		case joaat("infernus"):
		case joaat("jb700"):
		case joaat("monroe"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rapidgt2"):
		case joaat("rapidgt"):
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("superd"):
		case joaat("vacca"):
		case joaat("ztype"):
		case joaat("akuma"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("elegy2"):
		case joaat("khamelion"):
		case joaat("hotknife"):
		case joaat("carbonrs"):
		case joaat("voltic"):
		case joaat("comet2"):
		case joaat("surano"):
		case joaat("banshee"):
		case joaat("blazer3"):
		case joaat("jester"):
		case joaat("massacro"):
		case joaat("turismor"):
		case joaat("zentorno"):
		case joaat("huntley"):
		case joaat("alpha"):
		case joaat("paradise"):
		case joaat("bifta"):
		case joaat("kalahari"):
		case joaat("btype"):
		case joaat("thrust"):
		case joaat("dubsta3"):
		case joaat("blade"):
		case joaat("glendale"):
		case joaat("rhapsody"):
		case joaat("warrener"):
		case joaat("panto"):
		case joaat("pigalle"):
		case joaat("coquette2"):
		case joaat("monster"):
		case joaat("sovereign"):
		case joaat("innovation"):
		case joaat("hakuchou"):
		case joaat("furoregt"):
		case joaat("boxville4"):
		case joaat("casco"):
		case joaat("dinghy3"):
		case joaat("enduro"):
		case joaat("gburrito2"):
		case joaat("guardian"):
		case joaat("hydra"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kuruma"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("mule3"):
		case joaat("savage"):
		case joaat("technical"):
		case joaat("valkyrie"):
		case joaat("velum2"):
		case joaat("blista2"):
		case joaat("dodo"):
		case joaat("dukes"):
		case joaat("marshall"):
		case joaat("stalion"):
		case joaat("submersible2"):
		case joaat("blista3"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("buffalo3"):
		case joaat("dominator2"):
		case joaat("dukes2"):
		case joaat("gauntlet2"):
		case joaat("stalion2"):
		case joaat("blimp2"):
		case joaat("jester2"):
		case joaat("massacro2"):
		case joaat("ratloader2"):
		case joaat("slamvan"):
		case joaat("barracks3"):
		case joaat("slamvan2"):
		case joaat("brawler"):
		case joaat("chino"):
		case joaat("coquette3"):
		case joaat("feltzer3"):
		case joaat("luxor2"):
		case joaat("osiris"):
		case joaat("swift2"):
		case joaat("t20"):
		case joaat("toro"):
		case joaat("vindicator"):
		case joaat("virgo"):
		case joaat("windsor"):
		case joaat("faction"):
		case joaat("moonbeam"):
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
		case joaat("btype2"):
		case joaat("lurcher"):
		case joaat("faction3"):
		case joaat("minivan2"):
		case joaat("sabregt2"):
		case joaat("slamvan3"):
		case joaat("tornado5"):
		case joaat("virgo2"):
		case joaat("virgo3"):
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("baller5"):
		case joaat("baller6"):
		case joaat("cog55"):
		case joaat("cog552"):
		case joaat("cognoscenti"):
		case joaat("cognoscenti2"):
		case joaat("mamba"):
		case joaat("nightshade"):
		case joaat("schafter3"):
		case joaat("schafter5"):
		case joaat("schafter4"):
		case joaat("schafter6"):
		case joaat("verlierer2"):
		case joaat("tampa"):
		case joaat("banshee2"):
		case joaat("sultanrs"):
		case joaat("btype3"):
		case joaat("bestiagts"):
		case joaat("brickade"):
		case joaat("fmj"):
		case joaat("nimbus"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("rumpo3"):
		case joaat("seven70"):
		case joaat("tug"):
		case joaat("volatus"):
		case joaat("windsor2"):
		case joaat("xls"):
		case joaat("xls2"):
		case joaat("reaper"):
		case joaat("le7b"):
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("contender"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("tyrus"):
		case joaat("sheava"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("lynx"):
		case joaat("avarus"):
		case joaat("blazer4"):
		case joaat("chimera"):
		case joaat("daemon2"):
		case joaat("defiler"):
		case joaat("esskey"):
		case joaat("faggio3"):
		case joaat("faggio"):
		case joaat("hakuchou2"):
		case joaat("manchez"):
		case joaat("nightblade"):
		case joaat("raptor"):
		case joaat("ratbike"):
		case joaat("sanctus"):
		case joaat("shotaro"):
		case joaat("tornado6"):
		case joaat("vortex"):
		case joaat("wolfsbane"):
		case joaat("youga2"):
		case joaat("zombiea"):
		case joaat("zombieb"):
		case joaat("comet2"):
		case joaat("comet3"):
		case joaat("diablous"):
		case joaat("diablous2"):
		case joaat("elegy2"):
		case joaat("elegy"):
		case joaat("fcr"):
		case joaat("fcr2"):
		case joaat("italigtb"):
		case joaat("italigtb2"):
		case joaat("nero"):
		case joaat("nero2"):
		case joaat("penetrator"):
		case joaat("specter"):
		case joaat("specter2"):
		case joaat("tempesta"):
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("ruiner2"):
		case joaat("ruiner3"):
		case joaat("technical2"):
		case joaat("voltic2"):
		case joaat("wastelander"):
		case 1234311532:
		case -1405937764:
		case 719660200:
		case -982130927:
		case 159274291:
		case 1939284556:
		case 223240013:
		case 433954513:
		case 1504306544:
		case 917809321:
		case 562680400:
		case -32236122:
		case 1897744184:
		case -1881846085:
		case -1924433270:
		case 1356124575:
		case 884483972:
		case -1210451983:
		case 1392481335:
		case 2049897956:
		case 1841130506:
		case -998177792:
		case -1242608589:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 1483171323:
		case 886810209:
		case -1693015116:
		case -692292317:
		case -1435527158:
		case 1181327175:
		case 1489874736:
		case -212993243:
		case 447548909:
		case 1561920505:
		case -1848994066:
		case 1741861769:
		case 1104234922:
		case 1871995513:
		case 1352136073:
		case -313185164:
		case -2079788230:
		case 600450546:
		case -410205223:
		case 867799010:
		case -1529242755:
		case 903794909:
		case -1532697517:
		case 15219735:
		case 661493923:
		case 838982985:
		case -391595372:
		case -121446169:
		case 1909189272:
		case 1617472902:
		case -1267543371:
		case 931280609:
		case 1046206681:
		case -1259134696:
		case 1115909093:
		case 1031562256:
		case -376434238:
		case -986944621:
		case -1134706562:
		case -2120700196:
		case -214906006:
		case -988501280:
		case 1254014755:
		case -726768679:
			return 1;
			break;
	}
	return 0;
}

int func_145(int iParam0)//Position - 0x5D33
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		iVar0 = unk_0x317536BCEA8FA6B0(iParam0, -1, 0);
		if (iVar0 == unk_0xFC1458A37D98B502())
		{
			return 1;
		}
	}
	return 0;
}

int func_146(int iParam0, bool bParam1, var uParam2)//Position - 0x5D5D
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xC8A14E3C7BE76201(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	if ((!func_166(iVar0, bParam1, uParam2) && !func_165(unk_0x9EB17624F44A8DA4())) && !func_151(iParam0))
	{
		return 0;
	}
	if (func_165(unk_0x9EB17624F44A8DA4()))
	{
		if (func_150(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_148(unk_0x9EB17624F44A8DA4()) && (unk_0xF9DDB1C0875FD9E0(iVar0) || unk_0x849A8CFD71854E02(iVar0)))
	{
		bVar1 = true;
	}
	if ((((((unk_0x8F1CCD9A61E026D8(iParam0) && unk_0x82FF3DFBC3965CC0(iParam0) != -32236122) && unk_0x82FF3DFBC3965CC0(iParam0) != 177270108) && unk_0x82FF3DFBC3965CC0(iParam0) != 387748548) && unk_0x82FF3DFBC3965CC0(iParam0) != 1502869817) && unk_0x82FF3DFBC3965CC0(iParam0) != -1881846085) && !bVar1)
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x3A711520F83BAE98())
	{
		if ((func_147(iParam0) && unk_0x82FF3DFBC3965CC0(iParam0) != joaat("sentinel2")) && unk_0x82FF3DFBC3965CC0(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_147(int iParam0)//Position - 0x5EBD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90339[iVar0]))
		{
			if (Global_90339[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_148(int iParam0)//Position - 0x5EF8
{
	if (iParam0 != func_128())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_149(Global_2422736[iParam0 /*420*/].f_324.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_149(int iParam0)//Position - 0x5F3E
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

int func_150(int iParam0)//Position - 0x6202
{
	switch (iParam0)
	{
		case -2118308144:
		case 1489874736:
		case -1693015116:
		case -692292317:
		case -1435527158:
			return 1;
			break;
	}
	return 0;
}

int func_151(int iParam0)//Position - 0x6237
{
	if (func_164(unk_0x9EB17624F44A8DA4()) || func_163(unk_0x9EB17624F44A8DA4()))
	{
		if (func_152(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_152(int iParam0)//Position - 0x6266
{
	if ((!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0)) || unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		return 0;
	}
	if (func_155(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xB80A4DA4C06A76F1(iParam0, "Player_Vehicle"))
	{
		if (unk_0x2786E663D1846FFC(iParam0, "Player_Vehicle") == unk_0xDFD4F88AAFDE2371(unk_0x9EB17624F44A8DA4()))
		{
			if (func_153(iParam0))
			{
				return 1;
			}
			switch (unk_0x82FF3DFBC3965CC0(iParam0))
			{
				case 159274291:
				case 433954513:
				case 1483171323:
				case 886810209:
				case 1561920505:
				case -410205223:
				case 903794909:
				case -391595372:
				case 1254014755:
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_153(int iParam0)//Position - 0x631B
{
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	if (func_154(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0)//Position - 0x6351
{
	switch (iParam0)
	{
		case 562680400:
		case 1897744184:
		case -32236122:
		case 884483972:
		case -1210451983:
		case 1356124575:
		case -1924433270:
		case -1242608589:
		case -212993243:
			return 1;
			break;
	}
	return 0;
}

int func_155(int iParam0, bool bParam1)//Position - 0x639E
{
	switch (unk_0x82FF3DFBC3965CC0(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_157(unk_0x82FF3DFBC3965CC0(iParam0), 0))
			{
				if (Global_2512808.f_289 == iParam0)
				{
					return 1;
				}
				else if (func_156(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_156(int iParam0)//Position - 0x63F9
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2436181.f_611[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_157(int iParam0, int iParam1)//Position - 0x6433
{
	if (iParam1 == 0)
	{
		if (func_102(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_162();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_13545)
			{
				return func_161();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_13546)
			{
				return func_161();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_13544)
			{
				return func_161();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_13547)
			{
				return func_161();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_13549)
			{
				return func_161();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_160();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_17990)
			{
				return func_159();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_17992)
			{
				return func_159();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_17996)
			{
				return func_159();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_17993)
			{
				return func_159();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_18000)
			{
				return func_159();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_17998)
			{
				return func_159();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_18003)
			{
				return func_159();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_19922)
			{
				return func_158();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_19923)
			{
				return func_158();
			}
			break;
	}
	return 0;
}

bool func_158()//Position - 0x6613
{
	return unk_0x21EA5D4DC72DE119(2067165443);
}

bool func_159()//Position - 0x6624
{
	return unk_0x21EA5D4DC72DE119(-957277403);
}

bool func_160()//Position - 0x6635
{
	return unk_0x21EA5D4DC72DE119(210122941);
}

bool func_161()//Position - 0x6646
{
	return unk_0x21EA5D4DC72DE119(-1894522408);
}

bool func_162()//Position - 0x6657
{
	return unk_0x21EA5D4DC72DE119(1630677557);
}

int func_163(int iParam0)//Position - 0x6668
{
	if (iParam0 != func_128())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_128())
			{
				return func_149(Global_2422736[iParam0 /*420*/].f_324.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_164(int iParam0)//Position - 0x66C7
{
	if (iParam0 != func_128())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_128())
			{
				return func_149(Global_2422736[iParam0 /*420*/].f_324.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_165(int iParam0)//Position - 0x6727
{
	if (iParam0 != func_128())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_149(Global_2422736[iParam0 /*420*/].f_324.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_166(int iParam0, bool bParam1, var uParam2)//Position - 0x676E
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == 1938952078) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_148(unk_0x9EB17624F44A8DA4()) && (unk_0xF9DDB1C0875FD9E0(iParam0) || unk_0x849A8CFD71854E02(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((!unk_0xC1514CFCEC68CA4A(iParam0) && !unk_0x125CDF69FA6EF560(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != 1502869817) && iParam0 != -1881846085) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x3A711520F83BAE98())
	{
		if (func_167(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x3A711520F83BAE98())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_167(int iParam0)//Position - 0x6B86
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

void func_168(char* sParam0, bool bParam1)//Position - 0x6BAF
{
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return;
	}
	if (unk_0xFDD8E897FECD2912(sParam0) > 23)
	{
		return;
	}
	if (func_114(sParam0))
	{
		return;
	}
	func_24();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), unk_0x436287B7DB306165(), 32);
	Global_1312576.f_9 = unk_0x8B948C59217A295D(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_171();
	func_170(bParam1);
	func_169();
}

void func_169()//Position - 0x6C1A
{
	unk_0x872F1C1F8587CCC7(&(Global_1312576.f_59), 1);
}

void func_170(bool bParam0)//Position - 0x6C2D
{
	if (bParam0)
	{
		unk_0x872F1C1F8587CCC7(&(Global_1312576.f_59), 0);
		return;
	}
	unk_0x0EE72DB1CD8A3B86(&(Global_1312576.f_59), 0);
}

void func_171()//Position - 0x6C53
{
	Global_1312576.f_10 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), 86400000);
	Global_1312576.f_11 = unk_0xD1952A425B78FFC0();
}

int func_172(bool bParam0)//Position - 0x6C78
{
	int iVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_2512808.f_1701, 26))
		{
			iVar0 = func_15(1188, -1, 0);
			if (!unk_0xC80D31E4B587871C(iVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_37(122, -1);
}

int func_173()//Position - 0x6CD9
{
	return vLocal_61.x;
}

int func_174(int iParam0)//Position - 0x6CE3
{
	return vLocal_138[iParam0 /*3*/];
}

void func_175()//Position - 0x6CF1
{
	func_23();
	func_70(10, 0);
	if (func_55())
	{
		func_177();
	}
	if (iLocal_139 != -1)
	{
		func_72(iLocal_139, 0);
		func_71(iLocal_139, 0);
	}
	if (!func_172(0))
	{
		if (func_108(unk_0x9EB17624F44A8DA4()) || iLocal_147)
		{
			func_31(122, 1, -1, 1);
		}
	}
	func_69(0);
	func_176();
}

void func_176()//Position - 0x6D57
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_177()//Position - 0x6D63
{
	if (!func_184(1, -1))
	{
		func_182(1, -1);
	}
	if (func_116() && func_17() == 0)
	{
	}
	else
	{
		unk_0xC1B075F8A65D6642(0);
	}
	if (func_181(1))
	{
		unk_0x2A06B74E1D2D3C31(1);
	}
	else
	{
		unk_0x2A06B74E1D2D3C31(0);
	}
	Global_2447174.f_630 = 0;
	if (func_178())
	{
		if (!func_37(133, -1))
		{
			func_31(133, 1, -1, 1);
		}
	}
}

int func_178()//Position - 0x6DCD
{
	if (func_180() && func_179(0))
	{
		return 1;
	}
	return 0;
}

var func_179(int iParam0)//Position - 0x6DEB
{
	return Global_1312373[iParam0];
}

var func_180()//Position - 0x6DFB
{
	return func_179(func_14() + 1);
}

bool func_181(int iParam0)//Position - 0x6E0D
{
	return Global_1655819.f_16[iParam0 /*44*/].f_3;
}

void func_182(int iParam0, int iParam1)//Position - 0x6E21
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
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
			iVar1 = func_183(iParam1);
			iVar0 = unk_0x496616BFA56C89EB(iVar1);
			break;
		
		default:
			iVar1 = func_183(iParam1);
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
			func_31(120, 0, iParam1, 1);
			func_31(124, 0, iParam1, 1);
			func_31(115, 0, iParam1, 1);
			func_31(119, 0, iParam1, 1);
			func_31(121, 0, iParam1, 1);
			func_31(122, 0, iParam1, 1);
			func_31(125, 0, iParam1, 1);
			func_12(1300, 0, iParam1, 1, 0);
			break;
	}
}

int func_183(int iParam0)//Position - 0x6F00
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_14();
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

bool func_184(int iParam0, int iParam1)//Position - 0x6F63
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar0 = func_183(iParam1);
	iVar1 = unk_0x496616BFA56C89EB(iVar0);
	return unk_0xC80D31E4B587871C(iVar1, iParam0);
}

int func_185()//Position - 0x6F8F
{
	var uVar0;
	
	func_191(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_190())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_189())
	{
		return 1;
	}
	if (func_188(157))
	{
		if (!func_187())
		{
			return 1;
		}
	}
	if (func_188(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_186() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_186()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_186()//Position - 0x7019
{
	switch (func_17())
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

bool func_187()//Position - 0x704D
{
	return Global_2447174.f_586;
}

int func_188(int iParam0)//Position - 0x705C
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_189()//Position - 0x7073
{
	return Global_2456830;
}

bool func_190()//Position - 0x707F
{
	return Global_2447174.f_581;
}

void func_191(var uParam0)//Position - 0x708E
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
					func_192(iVar0);
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

void func_192(int iParam0)//Position - 0x7101
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_4(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_193(iVar2, &bVar3))
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

int func_193(int iParam0, var uParam1)//Position - 0x7182
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

void func_194()//Position - 0x71E1
{
	system::wait(0);
}

void func_195(struct<21> Param0)//Position - 0x71EE
{
	func_201(func_202(Param0), Param0);
	func_199(0, -1, 0);
	unk_0x6E3ED3AE1C20445F(&vLocal_61, 78);
	unk_0xE7BC983D1386C9EE(&vLocal_138, 97);
	unk_0x941BE77305BB5695(0);
	if (!func_198())
	{
		func_175();
	}
	func_70(10, 1);
	func_196();
}

void func_196()//Position - 0x7239
{
	unk_0xC1B075F8A65D6642(1);
	func_197(1, -1);
	unk_0x2A06B74E1D2D3C31(1);
	if (func_37(133, -1))
	{
		func_31(133, 0, -1, 1);
	}
	Global_2447174.f_630 = 1;
}

void func_197(int iParam0, int iParam1)//Position - 0x726C
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xA6B401698EA40CF7(0, iParam1);
			break;
		
		default:
			iVar1 = func_183(iParam1);
			iVar0 = unk_0x496616BFA56C89EB(iVar1);
			if (unk_0xC80D31E4B587871C(iVar0, iParam0))
			{
				unk_0x0EE72DB1CD8A3B86(&iVar0, iParam0);
				unk_0xA6B401698EA40CF7(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_31(120, 0, iParam1, 1);
			func_31(124, 0, iParam1, 1);
			func_31(115, 0, iParam1, 1);
			func_31(119, 0, iParam1, 1);
			break;
	}
}

int func_198()//Position - 0x7300
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
		if (func_190())
		{
			return 0;
		}
		if (func_188(155))
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

int func_199(int iParam0, int iParam1, bool bParam2)//Position - 0x7359
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_176();
			}
			else
			{
				return 0;
			}
		}
		if (!func_200())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_176();
					}
					else
					{
						return 0;
					}
				}
				if (func_190())
				{
					if (!bParam2)
					{
						func_176();
					}
					else
					{
						return 0;
					}
				}
				if (func_188(155))
				{
					if (!bParam2)
					{
						func_176();
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
					func_176();
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
				func_176();
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
			func_176();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_200()//Position - 0x746E
{
	return Global_1312831;
}

void func_201(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x747A
{
	if (!unk_0x3A711520F83BAE98())
	{
		func_176();
	}
	unk_0xAEA89A7E72415961(iParam0, 0, Param1.f_16);
}

int func_202(int iParam0)//Position - 0x7499
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

