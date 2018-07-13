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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
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
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
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
	char* sLocal_70 = NULL;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	float fLocal_78 = 0f;
	int iLocal_79 = 0;
	int iLocal_80[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	fLocal_21 = 0f;
	fLocal_25 = -0,0375f;
	fLocal_26 = 0,17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = 1;
	iLocal_47 = 1;
	iLocal_48 = 1;
	iLocal_49 = 1;
	iLocal_50 = 1;
	iLocal_51 = 1;
	iLocal_52 = 1;
	iLocal_53 = 1;
	iLocal_54 = 1;
	iLocal_55 = 1;
	iLocal_56 = 1;
	iLocal_57 = 1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	iLocal_60 = 1;
	iLocal_61 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	iLocal_64 = 1;
	iLocal_65 = 1;
	iLocal_66 = 1;
	iLocal_67 = joaat("bmx");
	iLocal_73 = 300000;
	fLocal_78 = 1f;
	if (unk_0x7D9C4B359376D38A(34))
	{
		func_112();
	}
	Global_25479 = 0;
	Global_25478 = 0;
	Global_25480 = 0;
	Global_25481 = 0;
	Global_25483 = 0;
	Global_25482 = 0;
	func_111();
	while (true)
	{
		func_2();
		if (((unk_0x3A711520F83BAE98() && func_1(unk_0x9EB17624F44A8DA4(), 1, 1)) && !Global_1574139) && Global_25233 == 0)
		{
			func_112();
		}
		system::wait(0);
	}
}

int func_1(int iParam0, bool bParam1, bool bParam2)//Position - 0x127
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

void func_2()//Position - 0x171
{
	func_87();
	func_67();
	func_21();
	func_3(iLocal_67);
}

void func_3(int iParam0)//Position - 0x18B
{
	switch (iLocal_46)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0x44D4288AF355A8D8())
			{
				func_20("CHEAT_VEHICLE_SPAWN_DENIED");
				iLocal_46 = 1;
			}
			else
			{
				func_19(iParam0);
			}
			break;
		
		case 4:
			func_4(iParam0);
			break;
		
		default:
			break;
	}
}

void func_4(int iParam0)//Position - 0x1E0
{
	vector3 vVar0;
	float fVar1;
	bool bVar2;
	
	bVar2 = false;
	if (unk_0x9A0B2ED5055D3F0B(iParam0))
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_68))
			{
				if (!unk_0x191BE1BC8F26F3C1(iLocal_68, 0))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_68, 0))
					{
						vVar0 = { unk_0xB3328BA8976B416C(iLocal_68, 1) };
						fVar1 = unk_0xF0371FE6E2BF9599(iLocal_68);
						unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), vVar0.x, vVar0.y, (vVar0.z + 4f), 1, 0, 0, 1);
						bVar2 = true;
					}
				}
				unk_0xC91FE17AD7353B70(&iLocal_68);
			}
			if (!bVar2)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					vVar0 = { unk_0x3F90543934DCD7E6(unk_0xFC1458A37D98B502(), -1,5f, 3,5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					vVar0 = { unk_0x3F90543934DCD7E6(unk_0xFC1458A37D98B502(), 0f, 6f, 2f) };
				}
				else
				{
					vVar0 = { unk_0x3F90543934DCD7E6(unk_0xFC1458A37D98B502(), 0f, 3,5f, 1f) };
				}
				fVar1 = (unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502()) + 90f);
			}
			if (func_17(iParam0, vVar0, fVar1))
			{
				iLocal_68 = unk_0xEA60F3B426BB095B(iParam0, vVar0, fVar1, 0, 1, 0);
				unk_0xACE486395AA1867D(iLocal_68, 1084227584);
				unk_0x14776E43F90DD454(iParam0);
				unk_0x5380482A432E314E(&iLocal_68);
				func_15(sLocal_70);
				func_5(20);
			}
			else
			{
				unk_0x14776E43F90DD454(iParam0);
				func_20("CHEAT_VEHICLE_SPAWN_DENIED");
			}
			iLocal_46 = 1;
		}
	}
}

void func_5(int iParam0)//Position - 0x323
{
	if (!func_14(14) && !func_13(""))
	{
		unk_0x872F1C1F8587CCC7(&Global_25480, iParam0);
		Global_25483 = 1;
		func_6();
	}
}

void func_6()//Position - 0x356
{
	int iVar0;
	
	iVar0 = func_8();
	switch (iVar0)
	{
		case 0:
			func_7(joaat("sp0_times_cheated"), 1);
			break;
		
		case 1:
			func_7(joaat("sp1_times_cheated"), 1);
			break;
		
		case 2:
			func_7(joaat("sp2_times_cheated"), 1);
			break;
	}
}

void func_7(int iParam0, int iParam1)//Position - 0x3A4
{
	int iVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xBFFF62F75445099D(iParam0, iVar0, 1);
}

int func_8()//Position - 0x3C7
{
	func_9();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_9()//Position - 0x3E0
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_12(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_11(unk_0xFC1458A37D98B502());
			if (func_10(iVar0) && (!func_14(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_10(Global_104555.f_2353.f_539.f_4301))
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

bool func_10(int iParam0)//Position - 0x4DD
{
	return iParam0 < 3;
}

int func_11(int iParam0)//Position - 0x4E9
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)//Position - 0x526
{
	if (func_10(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_13(char* sParam0)//Position - 0x550
{
	if (iLocal_84 != 0)
	{
		if (func_14(14) && unk_0x9F7B586A14398C40())
		{
			if (unk_0x74C475EB8E73D398(sParam0, "CHEAT_SUPER_JUMP") && unk_0x44D4288AF355A8D8())
			{
				return 0;
			}
			if ((unk_0x74C475EB8E73D398(sParam0, "CHEAT_GRAVITY_MOON") && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0)) && unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_14(int iParam0)//Position - 0x5BA
{
	return Global_35861 == iParam0;
}

void func_15(char* sParam0)//Position - 0x5C8
{
	if (func_13(""))
	{
	}
	else
	{
		unk_0xE3C33644878DCCFD("CHEAT_ACTIVATED");
		unk_0xA6D2B267C377D7B2(sParam0);
		func_16(unk_0x65F0733C4A64907A(0, 1));
		unk_0x4766EC20CC9D9DB8(sParam0);
	}
}

void func_16(int iParam0)//Position - 0x5FA
{
	iLocal_80[iLocal_81] = iParam0;
	iLocal_81++;
	if (iLocal_81 >= 10)
	{
		iLocal_81 = 0;
	}
}

int func_17(int iParam0, vector3 vParam1, float fParam2)//Position - 0x61A
{
	vector3 vVar0[9];
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	
	unk_0x04FE252E98FAA4C3(iParam0, &vVar1, &vVar2);
	vVar3.x = (unk_0xE97272C977DEADD3((vVar2.x - vVar1.x)) / 2f);
	vVar3.y = (unk_0xE97272C977DEADD3((vVar2.y - vVar1.y)) / 2f);
	vVar3.z = (unk_0xE97272C977DEADD3((vVar2.z - vVar1.z)) / 2f);
	vVar0[0 /*3*/] = { vParam1 };
	vVar0[1 /*3*/] = { unk_0x9EA50C5EC175E58E(vParam1, fParam2, -vVar3.x, -vVar3.y, -vVar3.z) };
	vVar0[2 /*3*/] = { unk_0x9EA50C5EC175E58E(vParam1, fParam2, vVar3.x, -vVar3.y, -vVar3.z) };
	vVar0[3 /*3*/] = { unk_0x9EA50C5EC175E58E(vParam1, fParam2, vVar3.x, vVar3.y, -vVar3.z) };
	vVar0[4 /*3*/] = { unk_0x9EA50C5EC175E58E(vParam1, fParam2, -vVar3.x, vVar3.y, -vVar3.z) };
	vVar0[5 /*3*/] = { unk_0x9EA50C5EC175E58E(vParam1, fParam2, -vVar3.x, -vVar3.y, vVar3.z) };
	vVar0[6 /*3*/] = { unk_0x9EA50C5EC175E58E(vParam1, fParam2, vVar3.x, -vVar3.y, vVar3.z) };
	vVar0[7 /*3*/] = { unk_0x9EA50C5EC175E58E(vParam1, fParam2, vVar3.x, vVar3.y, vVar3.z) };
	vVar0[8 /*3*/] = { unk_0x9EA50C5EC175E58E(vParam1, fParam2, -vVar3.x, vVar3.y, vVar3.z) };
	if (!unk_0xD42907FA80A6F327(vParam1))
	{
		return 0;
	}
	iVar13 = unk_0x42CC5D678D736D74(func_18(unk_0x9EB17624F44A8DA4()) + Vector(1f, 0f, 0f), vParam1, 87, unk_0xFC1458A37D98B502(), 0);
	unk_0x16ACABF450EB00B4(iVar13, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar7 = unk_0x42CC5D678D736D74(vVar0[1 /*3*/], vVar0[3 /*3*/], 87, unk_0xFC1458A37D98B502(), 0);
	unk_0x16ACABF450EB00B4(iVar7, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar8 = unk_0x42CC5D678D736D74(vVar0[2 /*3*/], vVar0[4 /*3*/], 87, unk_0xFC1458A37D98B502(), 0);
	unk_0x16ACABF450EB00B4(iVar8, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar9 = unk_0x42CC5D678D736D74(vVar0[5 /*3*/], vVar0[7 /*3*/], 87, unk_0xFC1458A37D98B502(), 0);
	unk_0x16ACABF450EB00B4(iVar9, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar10 = unk_0x42CC5D678D736D74(vVar0[6 /*3*/], vVar0[8 /*3*/], 87, unk_0xFC1458A37D98B502(), 0);
	unk_0x16ACABF450EB00B4(iVar10, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar11 = unk_0x42CC5D678D736D74(vVar0[1 /*3*/], vVar0[8 /*3*/], 87, unk_0xFC1458A37D98B502(), 0);
	unk_0x16ACABF450EB00B4(iVar11, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar12 = unk_0x42CC5D678D736D74(vVar0[2 /*3*/], vVar0[7 /*3*/], 87, unk_0xFC1458A37D98B502(), 0);
	unk_0x16ACABF450EB00B4(iVar12, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_18(int iParam0)//Position - 0x8D6
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

void func_19(int iParam0)//Position - 0x8E9
{
	if (unk_0xA8698D7EBA72C3DA(iParam0))
	{
		unk_0x6FF834D85E2DD4C6(iParam0);
		if (unk_0x9A0B2ED5055D3F0B(iParam0))
		{
			iLocal_46 = 4;
		}
	}
}

void func_20(char* sParam0)//Position - 0x90C
{
	if (!func_14(14))
	{
		unk_0xE3C33644878DCCFD("CHEAT_DENIED");
		unk_0xA6D2B267C377D7B2(sParam0);
		func_16(unk_0x65F0733C4A64907A(0, 1));
	}
}

void func_21()//Position - 0x938
{
	func_64();
	func_63();
	func_44();
	func_43();
	func_42();
	func_38();
	func_35();
	func_31();
	func_22();
}

void func_22()//Position - 0x964
{
	switch (iLocal_66)
	{
		case 1:
			break;
		
		case 4:
			func_30(19, 1);
			func_29();
			break;
		
		case 5:
			if ((((!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) || func_27()) || func_26(23)) || func_26(21)) || func_26(19))
			{
				iLocal_66 = 9;
				return;
			}
			func_24();
			break;
		
		case 9:
			func_23("CHEAT_AIM_SLOW_MO");
			func_30(19, 0);
			unk_0x41390D2B41D5502D(1f);
			iLocal_77 = 0;
			iLocal_66 = 1;
			break;
		
		default:
			break;
	}
}

void func_23(char* sParam0)//Position - 0xA03
{
	if (func_13(sParam0))
	{
	}
	else
	{
		unk_0xE3C33644878DCCFD("CHEAT_DEACTIVATED");
		unk_0xA6D2B267C377D7B2(sParam0);
		func_16(unk_0x65F0733C4A64907A(0, 1));
	}
}

void func_24()//Position - 0xA2E
{
	if (unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()))
	{
		if (unk_0xF2B58F79D29425B4(2, 25))
		{
			if (func_25(unk_0xFC1458A37D98B502()) != joaat("weapon_unarmed") && func_25(unk_0xFC1458A37D98B502()) != joaat("object"))
			{
				unk_0x41390D2B41D5502D(fLocal_78);
			}
			else
			{
				unk_0x41390D2B41D5502D(1f);
			}
		}
		else
		{
			unk_0x41390D2B41D5502D(1f);
		}
	}
}

int func_25(int iParam0)//Position - 0xA85
{
	var uVar0;
	
	unk_0x5AD8564EFD5BEC2E(iParam0, &uVar0, 1);
	return uVar0;
}

int func_26(int iParam0)//Position - 0xA99
{
	if (unk_0xC80D31E4B587871C(Global_25478, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_27()//Position - 0xAB2
{
	if (((((((func_14(0) || func_14(11)) || func_14(4)) || func_14(9)) || func_14(10)) || func_14(3)) || func_14(2)) || func_28(35))
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0)//Position - 0xB18
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_99.f_58[iParam0];
}

void func_29()//Position - 0xB45
{
	iLocal_77++;
	if (iLocal_77 > 3)
	{
		iLocal_77 = 0;
		iLocal_66 = 9;
		return;
	}
	switch (iLocal_77)
	{
		case 1:
			func_15("CHEAT_AIM_SLOW_MO1");
			fLocal_78 = 0,6f;
			break;
		
		case 2:
			func_15("CHEAT_AIM_SLOW_MO2");
			fLocal_78 = 0,4f;
			break;
		
		case 3:
			func_15("CHEAT_AIM_SLOW_MO3");
			fLocal_78 = 0,2f;
			break;
		
		default:
			break;
	}
	iLocal_66 = 5;
}

void func_30(int iParam0, bool bParam1)//Position - 0xBB5
{
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&Global_25479, iParam0);
		func_5(iParam0);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_25479, iParam0);
	}
}

void func_31()//Position - 0xBDD
{
	switch (iLocal_63)
	{
		case 1:
			break;
		
		case 4:
			func_30(16, 1);
			func_34();
			break;
		
		case 5:
			unk_0x4FB260623DD93924(2, 37, 1);
			unk_0x4FB260623DD93924(2, 19, 1);
			if ((((((((!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) || func_27()) || func_33()) || func_32(1)) || unk_0x4CD14B4B1E8BD8BA(2, 37)) || unk_0x4CD14B4B1E8BD8BA(2, 19)) || func_26(23)) || func_26(21)) || func_26(16))
			{
				iLocal_63 = 9;
			}
			break;
		
		case 9:
			unk_0x4FB260623DD93924(2, 37, 1);
			unk_0x4FB260623DD93924(2, 19, 1);
			func_23("CHEAT_SLOW_MO");
			func_30(16, 0);
			iLocal_76 = 0;
			unk_0x41390D2B41D5502D(1f);
			iLocal_63 = 1;
			break;
		
		default:
			break;
	}
}

bool func_32(bool bParam0)//Position - 0xCC4
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

int func_33()//Position - 0xCED
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

void func_34()//Position - 0xD09
{
	iLocal_76++;
	if (iLocal_76 > 3)
	{
		iLocal_63 = 9;
		return;
	}
	switch (iLocal_76)
	{
		case 1:
			func_15("CHEAT_SLOW_MO1");
			unk_0x41390D2B41D5502D(0,6f);
			break;
		
		case 2:
			func_15("CHEAT_SLOW_MO2");
			unk_0x41390D2B41D5502D(0,4f);
			break;
		
		case 3:
			func_15("CHEAT_SLOW_MO3");
			unk_0x41390D2B41D5502D(0,2f);
			break;
		
		default:
			break;
	}
	iLocal_63 = 5;
}

void func_35()//Position - 0xD7C
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	switch (iLocal_64)
	{
		case 1:
			break;
		
		case 2:
			func_30(17, 1);
			unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), true);
			unk_0x8FA21D9CF7681249(unk_0x9EB17624F44A8DA4(), 1);
			unk_0xD38F266C132F2897(unk_0xFC1458A37D98B502(), true, true, true, true, true, 0, 0, 0);
			unk_0x9E058151726E58DE(unk_0xFC1458A37D98B502(), joaat("gadget_parachute"), 1, false, true);
			vVar0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			fVar1 = unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502());
			unk_0x7367FB97975F1E29(vVar0, &fVar2, 0, 0);
			fVar2 = (fVar2 + 500f);
			unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), vVar0.x, vVar0.y, fVar2, 1, 0, 0, 1);
			unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), fVar1);
			iLocal_72 = unk_0x53C562FD2B9E3AB0();
			unk_0xAE83ED4C9081AE6F(0);
			iLocal_64 = 3;
			break;
		
		case 3:
			if (func_37(1000, iLocal_72))
			{
				unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), false);
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
				iLocal_72 = unk_0x53C562FD2B9E3AB0();
				iLocal_64 = 4;
			}
			break;
		
		case 4:
			if (func_37(1000, iLocal_72))
			{
				unk_0x4FB260623DD93924(0, 144, 1);
				unk_0x4FB260623DD93924(0, 149, 1);
				if (func_8() == 0)
				{
					unk_0x03924C68EFCBC511(unk_0xFC1458A37D98B502(), 9, 0, 0, 0);
				}
				else
				{
					unk_0x03924C68EFCBC511(unk_0xFC1458A37D98B502(), 8, 0, 0, 0);
				}
				unk_0x59C3AC31C7544A28(250);
				iLocal_72 = unk_0x53C562FD2B9E3AB0();
				func_15("CHEAT_SKYFALL");
				unk_0xC234848D21B6064E(2);
				iLocal_64 = 5;
			}
			break;
		
		case 5:
			if ((((!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) || func_27()) || func_26(23)) || func_26(21)) || func_26(17))
			{
				iLocal_64 = 9;
				break;
			}
			unk_0x4FB260623DD93924(0, 144, 1);
			unk_0x553231E7FC3C570D(2);
			if (unk_0xA9287933382DAD33(unk_0xFC1458A37D98B502()))
			{
				unk_0xB8D9F55BA414128D(unk_0xFC1458A37D98B502(), 1, 0f, 200f, 2,5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
				if (unk_0x9A3C64A7BB4588B3(unk_0xFC1458A37D98B502()))
				{
					iLocal_64 = 9;
				}
			}
			else
			{
				iLocal_64 = 9;
			}
			break;
		
		case 9:
			func_36();
			func_23("CHEAT_SKYFALL");
			func_30(17, 0);
			iLocal_64 = 1;
			break;
		
		default:
			break;
	}
}

void func_36()//Position - 0xF7C
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0xABBEF2EAC74A02EB(unk_0xFC1458A37D98B502(), joaat("gadget_parachute"));
	}
	if (iLocal_62 != 5)
	{
		unk_0x8FA21D9CF7681249(unk_0x9EB17624F44A8DA4(), 0);
		unk_0xD38F266C132F2897(unk_0xFC1458A37D98B502(), false, false, false, false, false, 0, 0, 0);
	}
	unk_0xC234848D21B6064E(0);
}

int func_37(int iParam0, int iParam1)//Position - 0xFC1
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x53C562FD2B9E3AB0();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_38()//Position - 0xFE2
{
	vector3 vVar0;
	
	switch (iLocal_62)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_INVINCIBILITY");
			func_30(15, 1);
			iLocal_62 = 5;
			iLocal_74 = unk_0x53C562FD2B9E3AB0();
			unk_0x8FA21D9CF7681249(unk_0x9EB17624F44A8DA4(), 1);
			unk_0xD38F266C132F2897(unk_0xFC1458A37D98B502(), true, true, true, true, true, 0, 0, 0);
			break;
		
		case 5:
			if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) || unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iLocal_62 = 9;
				return;
			}
			vVar0 = { func_18(unk_0x9EB17624F44A8DA4()) };
			if (((((func_27() || func_33()) || func_26(23)) || func_26(21)) || func_26(15)) || vVar0.z <= -170f)
			{
				iLocal_62 = 9;
				return;
			}
			iLocal_75 = (unk_0x53C562FD2B9E3AB0() - iLocal_74);
			if (unk_0x8F38E94BBF3404CD(joaat("appinternet")) == 0)
			{
				func_39((iLocal_73 - iLocal_75), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			if (iLocal_75 >= (iLocal_73 - 1000))
			{
				iLocal_62 = 9;
				return;
			}
			unk_0x8FA21D9CF7681249(unk_0x9EB17624F44A8DA4(), 1);
			unk_0xD38F266C132F2897(unk_0xFC1458A37D98B502(), true, true, true, true, true, 0, 0, 0);
			unk_0xB7ECAD7C42800593();
			break;
		
		case 9:
			func_23("CHEAT_INVINCIBILITY_OFF");
			func_30(15, 0);
			iLocal_62 = 1;
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0x8FA21D9CF7681249(unk_0x9EB17624F44A8DA4(), 0);
				unk_0xD38F266C132F2897(unk_0xFC1458A37D98B502(), false, false, false, false, false, 0, 0, 0);
			}
			break;
		
		default:
			break;
	}
}

void func_39(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x115C
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_41(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_40(7, iVar0);
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

void func_40(int iParam0, int iParam1)//Position - 0x12AA
{
	unk_0x872F1C1F8587CCC7(&(Global_1359035.f_6119[iParam0]), iParam1);
}

bool func_41(int iParam0, int iParam1)//Position - 0x12C3
{
	return unk_0xC80D31E4B587871C(Global_1359035.f_6119[iParam0], iParam1);
}

void func_42()//Position - 0x12DC
{
	switch (iLocal_59)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_FLAMING_BULLETS");
			func_30(12, 1);
			iLocal_59 = 5;
			break;
		
		case 5:
			if (((!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) || func_26(23)) || func_26(21)) || func_26(12))
			{
				iLocal_59 = 9;
				return;
			}
			if (func_27())
			{
				iLocal_59 = 9;
				return;
			}
			unk_0xFE3E0AED4B03521D(unk_0x9EB17624F44A8DA4());
			break;
		
		case 9:
			func_23("CHEAT_FLAMING_BULLETS");
			func_30(12, 0);
			iLocal_59 = 1;
			break;
		
		default:
			break;
	}
}

void func_43()//Position - 0x1383
{
	switch (iLocal_60)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_EXPLOSIVE_MELEE");
			func_30(13, 1);
			iLocal_60 = 5;
			break;
		
		case 5:
			if ((((!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) || func_26(23)) || func_26(21)) || func_26(13)) || func_27())
			{
				iLocal_60 = 9;
				return;
			}
			unk_0x626DED4C5DA91228(unk_0x9EB17624F44A8DA4());
			break;
		
		case 9:
			func_23("CHEAT_EXPLOSIVE_MELEE");
			func_30(13, 0);
			iLocal_60 = 1;
			break;
		
		default:
			break;
	}
}

void func_44()//Position - 0x1426
{
	switch (iLocal_65)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_DRUNK");
			func_30(18, 1);
			func_59(unk_0xFC1458A37D98B502());
			func_57(30000, 1050253722, 1065353216, 0);
			iLocal_65 = 5;
			break;
		
		case 5:
			if ((((func_27() || !unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4())) || func_26(23)) || func_26(21)) || func_26(18))
			{
				iLocal_65 = 9;
			}
			break;
		
		case 9:
			func_23("CHEAT_DRUNK");
			func_30(18, 0);
			func_48(unk_0xFC1458A37D98B502());
			func_47(1000);
			iLocal_65 = 1;
			break;
		
		case 10:
			func_45(1);
			func_30(18, 0);
			iLocal_65 = 1;
			break;
		
		default:
			break;
	}
}

void func_45(bool bParam0)//Position - 0x1500
{
	unk_0xC2C53B09E215C30E(0f);
	unk_0xCA95F6B458E05D16(0f);
	unk_0xFBF9D5E16F28DD3E(0f);
	unk_0xB0F1C81988F1DD0D(1);
	unk_0x8C236B20FA7F87E5(0f);
	unk_0xFB9C126263C6C9C2(1);
	unk_0xE38BD72F7068FCD3(0);
	if (unk_0x771D0F8F56A5FE6C("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xE02E32C69260FBB7("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xAB019B170BF1309C(&Global_36971))
	{
		if (unk_0x771D0F8F56A5FE6C(&Global_36971))
		{
			unk_0xE02E32C69260FBB7(&Global_36971);
		}
	}
	if (unk_0x8EA3C8E091EA5BA4(Global_36960))
	{
		if (unk_0xEB6CE9F449EBE42F(Global_36960))
		{
			unk_0x2D506790E8BD950D(Global_36960, 0f);
			unk_0x3C6F9A723015D90F(Global_36960, 1);
		}
	}
	if (unk_0xACF167683DFA8C87())
	{
		unk_0x713DAB30E8D8DE8F(0);
	}
	if (bParam0)
	{
		if (unk_0x4102DE1B9F707D57() != -1 || unk_0x174776B22B5B9EEE() != -1)
		{
			unk_0xBAD7096AD4E946DE();
		}
		else if (unk_0x1E06D00B67177A18())
		{
			unk_0xBAD7096AD4E946DE();
		}
	}
	Global_36966 = 0f;
	StringCopy(&Global_36967, "", 16);
	StringCopy(&Global_36971, "", 64);
	StringCopy(&Global_36987, "", 16);
	func_46();
}

void func_46()//Position - 0x15DC
{
	Global_36959 = 0;
	Global_36960 = 0;
	Global_36961 = 0;
	Global_36962 = 30000;
	Global_36963 = 0f;
	Global_36965 = 0f;
	Global_36964 = 0f;
	Global_36966 = 0f;
	StringCopy(&Global_36967, "", 16);
}

void func_47(int iParam0)//Position - 0x160E
{
	int iVar0;
	
	if (!Global_36959)
	{
		return;
	}
	iVar0 = unk_0x53C562FD2B9E3AB0();
	Global_36961 = (iVar0 + iParam0);
	Global_36962 = iParam0;
}

void func_48(int iParam0)//Position - 0x1633
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return;
	}
	iVar0 = func_56(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36796[iVar0 /*5*/];
		func_51(1, iVar1, 1);
		return;
	}
	iVar2 = func_50(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_49(iVar2);
}

void func_49(int iParam0)//Position - 0x168C
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36770[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36770[iParam0 /*5*/].f_1 == unk_0xFC1458A37D98B502())
		{
			Global_36991 = 0;
		}
	}
	Global_36770[iParam0 /*5*/] = 13;
	Global_36770[iParam0 /*5*/].f_1 = 0;
	Global_36770[iParam0 /*5*/].f_2 = 0;
	Global_36770[iParam0 /*5*/].f_3 = 0;
	Global_36770[iParam0 /*5*/].f_4 = 0;
	Global_36769 = (Global_36769 - 1);
	if (Global_36769 < 0)
	{
		Global_36769 = 0;
	}
}

int func_50(int iParam0)//Position - 0x170F
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36770[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_51(int iParam0, int iParam1, int iParam2)//Position - 0x1740
{
	func_52(iParam0, iParam1, iParam2, 0, 0);
}

void func_52(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1754
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_54(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_53();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36877[iVar0 /*5*/] = iParam0;
	Global_36877[iVar0 /*5*/].f_1 = iParam1;
	Global_36877[iVar0 /*5*/].f_2 = iParam2;
	Global_36877[iVar0 /*5*/].f_3 = iParam3;
	Global_36877[iVar0 /*5*/].f_4 = iParam4;
}

int func_53()//Position - 0x17CB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36877[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_54(int iParam0, int iParam1, int iParam2)//Position - 0x17FC
{
	if (func_55(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_55(int iParam0, int iParam1, int iParam2)//Position - 0x1817
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36877[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36877[iVar0 /*5*/])
			{
				if (iParam1 == Global_36877[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_56(int iParam0)//Position - 0x1863
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_36796[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36796[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_57(int iParam0, float fParam1, float fParam2, int iParam3)//Position - 0x18AC
{
	func_58(-1, iParam0, fParam1, fParam2, iParam3, 1);
}

void func_58(int iParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x18C2
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_36959)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!unk_0x4D09F78E02924CE0())
	{
		unk_0x2269709BAFC7A1E5("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0xE4D04BC85D5121A4())
	{
		unk_0x48256C3D23186EAF("DRUNK_SHAKE", (fParam3 * Global_36958));
	}
	if (unk_0x8EA3C8E091EA5BA4(iParam4))
	{
		unk_0x7E4FCDC8BAD0CF6D(iParam4, "DRUNK_SHAKE", fParam3);
		Global_36960 = iParam4;
	}
	else
	{
		Global_36960 = 0;
	}
	Global_36959 = 1;
	iVar0 = unk_0x53C562FD2B9E3AB0();
	Global_36961 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_36961 = -1;
		}
	}
	Global_36962 = uParam1;
	Global_36963 = fParam2;
	Global_36965 = fParam3;
	Global_36964 = fParam3;
}

int func_59(int iParam0)//Position - 0x197D
{
	return func_60(iParam0, -1, 1);
}

int func_60(int iParam0, int iParam1, bool bParam2)//Position - 0x198D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = func_62(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_50(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_61();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_36770[iVar2 /*5*/] = 0;
	Global_36770[iVar2 /*5*/].f_1 = iParam0;
	Global_36770[iVar2 /*5*/].f_2 = iParam1;
	Global_36770[iVar2 /*5*/].f_3 = iParam1;
	Global_36770[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0xFC1458A37D98B502())
	{
		Global_36991 = 1;
	}
	Global_36769++;
	return 1;
}

int func_61()//Position - 0x1A49
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36770[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_62(int iParam0)//Position - 0x1A78
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36796[iVar0 /*5*/].f_1)
		{
			return Global_36796[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_63()//Position - 0x1AB9
{
	switch (iLocal_58)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_BANG_BANG");
			func_30(11, 1);
			iLocal_58 = 5;
			break;
		
		case 5:
			if (((!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) || func_26(23)) || func_26(21)) || func_26(11))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_27())
			{
				iLocal_58 = 9;
				return;
			}
			unk_0x2E7191097C57817F(unk_0x9EB17624F44A8DA4());
			break;
		
		case 9:
			func_23("CHEAT_BANG_BANG");
			func_30(11, 0);
			iLocal_58 = 1;
			break;
		
		default:
			break;
	}
}

void func_64()//Position - 0x1B60
{
	switch (iLocal_61)
	{
		case 1:
			break;
		
		case 4:
			func_5(14);
			func_30(14, 1);
			func_66();
			break;
		
		case 5:
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if ((((((!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) || func_27()) || func_26(23)) || func_26(21)) || func_26(14)) || func_65(17)) || unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()))
				{
					iLocal_61 = 9;
				}
			}
			else
			{
				iLocal_61 = 9;
			}
			break;
		
		case 9:
			func_23("CHEAT_GRAVITY_MOON");
			func_30(14, 0);
			unk_0x528DD2D606871804(0);
			iLocal_79 = 0;
			iLocal_61 = 1;
			break;
		
		default:
			break;
	}
}

int func_65(int iParam0)//Position - 0x1C2B
{
	if (unk_0xC80D31E4B587871C(Global_25479, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_66()//Position - 0x1C44
{
	iLocal_79++;
	if (iLocal_79 > 1)
	{
		iLocal_61 = 9;
		return;
	}
	switch (iLocal_79)
	{
		case 1:
			func_15("CHEAT_GRAVITY_MOON");
			unk_0x528DD2D606871804(1);
			break;
		
		default:
			break;
	}
	iLocal_61 = 5;
}

void func_67()//Position - 0x1C81
{
	func_86();
	func_80();
	func_79();
	func_78();
	func_77();
	func_76();
	func_75();
	func_73();
	func_72();
	func_71();
	func_68();
}

void func_68()//Position - 0x1CB5
{
	if (iLocal_57 == 4)
	{
		iLocal_57 = 1;
		if ((func_26(23) || func_26(22)) || func_26(10))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			func_15("CHEAT_GIVE_PARACHUTE");
			unk_0x9E058151726E58DE(unk_0xFC1458A37D98B502(), joaat("gadget_parachute"), 1, true, true);
			func_5(10);
		}
	}
}

int func_69()//Position - 0x1D2D
{
	if (iLocal_83)
	{
		iLocal_83 = 0;
		return 0;
	}
	if (func_70(0))
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0)//Position - 0x1D4E
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

void func_71()//Position - 0x1DA8
{
	int iVar0;
	
	if (iLocal_56 == 4)
	{
		iLocal_56 = 1;
		if ((func_26(23) || func_26(22)) || func_26(9))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0xB89B7DB2727D69D6() == 0)
			{
				func_20("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4());
			if (iVar0 > 0)
			{
				func_15("CHEAT_WANTED_DOWN");
				unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), (iVar0 - 1), 0);
				func_5(9);
			}
			else
			{
				func_20("CHEAT_WANTED_DOWN_DENIED");
			}
		}
	}
}

void func_72()//Position - 0x1E4B
{
	int iVar0;
	
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
		if ((func_26(23) || func_26(22)) || func_26(8))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0xB89B7DB2727D69D6() == 0)
			{
				func_20("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4());
			if (iVar0 < unk_0xB89B7DB2727D69D6())
			{
				unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), iVar0 + 1, 0);
				unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
				func_15("CHEAT_WANTED_UP");
				func_5(8);
			}
			else
			{
				func_20("CHEAT_WANTED_UP_DENIED");
			}
		}
	}
}

void func_73()//Position - 0x1EFA
{
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
		if ((((((func_26(23) || func_26(22)) || func_26(7)) || func_14(9)) || func_14(10)) || !unk_0x7D26F392248D486A(func_74())) || !unk_0x329B85FFF5E9EF10(unk_0x9EB17624F44A8DA4()))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0xA94D4506CF328732(unk_0x9EB17624F44A8DA4(), 1);
			func_15("CHEAT_SPECIAL_ABILITY");
			func_5(7);
		}
	}
}

int func_74()//Position - 0x1F9F
{
	return unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502());
}

void func_75()//Position - 0x1FAF
{
	int iVar0;
	
	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
		if ((((func_26(23) || func_26(22)) || func_26(6)) || func_14(9)) || func_14(10))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			func_15("CHEAT_HEALTH_ARMOR");
			func_5(6);
			unk_0xE01CE1EBCD7EE551(unk_0xFC1458A37D98B502(), unk_0xC1643F33913289BD(unk_0xFC1458A37D98B502()), 0);
			unk_0x456AE4EC30CCDA1D(unk_0xFC1458A37D98B502(), (unk_0x5CF9DB6C88EBECE1(unk_0x9EB17624F44A8DA4()) - unk_0x8027E7B955FF320D(unk_0xFC1458A37D98B502())));
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iVar0 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
					{
						unk_0xB3C8DB09F4A4DE89(iVar0);
					}
				}
			}
		}
	}
}

void func_76()//Position - 0x2087
{
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
		if ((func_26(23) || func_26(22)) || func_26(5))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		func_5(5);
		switch (iLocal_71)
		{
			case 0:
				iLocal_71 = 1;
			
			case 1:
				unk_0xFFFAC2063552BF4D("EXTRASUNNY");
				unk_0x087D097B0C8C07B9();
				func_15("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_71 = 2;
				break;
			
			case 2:
				unk_0xFFFAC2063552BF4D("CLEAR");
				unk_0x087D097B0C8C07B9();
				func_15("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_71 = 3;
				break;
			
			case 3:
				unk_0xFFFAC2063552BF4D("CLOUDS");
				unk_0x087D097B0C8C07B9();
				func_15("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_71 = 4;
				break;
			
			case 4:
				unk_0xFFFAC2063552BF4D("SMOG");
				unk_0x087D097B0C8C07B9();
				func_15("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_71 = 6;
				break;
			
			case 6:
				unk_0xFFFAC2063552BF4D("OVERCAST");
				unk_0x087D097B0C8C07B9();
				func_15("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_71 = 7;
				break;
			
			case 7:
				unk_0xFFFAC2063552BF4D("RAIN");
				unk_0x087D097B0C8C07B9();
				func_15("CHEAT_ADVANCE_WEATHER_RAIN");
				func_30(5, 1);
				iLocal_71 = 8;
				break;
			
			case 8:
				unk_0xFFFAC2063552BF4D("THUNDER");
				unk_0x087D097B0C8C07B9();
				func_15("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_71 = 9;
				break;
			
			case 9:
				unk_0xFFFAC2063552BF4D("CLEARING");
				unk_0x087D097B0C8C07B9();
				func_15("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_71 = 11;
				break;
			
			case 11:
				unk_0xFFFAC2063552BF4D("XMAS");
				unk_0x087D097B0C8C07B9();
				func_15("CHEAT_ADVANCE_WEATHER_SNOW");
				iLocal_71 = 0;
				break;
			
			default:
				break;
			}
	}
}

void func_77()//Position - 0x2216
{
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
		if ((func_26(23) || func_26(22)) || func_26(4))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		func_15("CHEAT_GIVE_WEAPONS");
		func_5(4);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x8135E0D869A8ECFC(unk_0xFC1458A37D98B502(), joaat("weapon_knife"), -1, false);
			unk_0x8135E0D869A8ECFC(unk_0xFC1458A37D98B502(), joaat("weapon_smg"), 300, false);
			unk_0x8135E0D869A8ECFC(unk_0xFC1458A37D98B502(), joaat("weapon_assaultrifle"), 300, true);
			unk_0x8135E0D869A8ECFC(unk_0xFC1458A37D98B502(), joaat("weapon_pumpshotgun"), 150, false);
			unk_0x8135E0D869A8ECFC(unk_0xFC1458A37D98B502(), joaat("weapon_sniperrifle"), 30, false);
			unk_0x8135E0D869A8ECFC(unk_0xFC1458A37D98B502(), joaat("weapon_grenade"), 5, false);
			unk_0x8135E0D869A8ECFC(unk_0xFC1458A37D98B502(), joaat("weapon_rpg"), 5, false);
		}
	}
}

void func_78()//Position - 0x22EB
{
	switch (iLocal_50)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_FAST_SWIM");
			func_30(3, 1);
			iLocal_50 = 5;
			break;
		
		case 5:
			if (((!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) || func_26(23)) || func_26(22)) || func_26(3))
			{
				iLocal_50 = 9;
			}
			else
			{
				unk_0xF6B7FFFC1C257E61(unk_0x9EB17624F44A8DA4(), 1,49f);
				unk_0xB7ECAD7C42800593();
			}
			break;
		
		case 9:
			unk_0xF6B7FFFC1C257E61(unk_0x9EB17624F44A8DA4(), 1f);
			func_23("CHEAT_FAST_SWIM");
			func_30(3, 0);
			iLocal_50 = 1;
			break;
		
		default:
			break;
	}
}

void func_79()//Position - 0x2393
{
	switch (iLocal_49)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_FAST_RUN");
			func_30(2, 1);
			iLocal_49 = 5;
			break;
		
		case 5:
			if ((((!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) || unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502())) || func_26(23)) || func_26(22)) || func_26(2))
			{
				iLocal_49 = 9;
			}
			else
			{
				if (unk_0xA57E3BD5C64527C7(unk_0xFC1458A37D98B502()) || (unk_0xCA87B182A4F3C252(unk_0xFC1458A37D98B502()) && !unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())))
				{
					unk_0x519894EC8BE42A78(unk_0x9EB17624F44A8DA4(), 1,49f);
				}
				else
				{
					unk_0x519894EC8BE42A78(unk_0x9EB17624F44A8DA4(), 1f);
				}
				unk_0xB7ECAD7C42800593();
			}
			break;
		
		case 9:
			unk_0x519894EC8BE42A78(unk_0x9EB17624F44A8DA4(), 1f);
			func_23("CHEAT_FAST_RUN");
			func_30(2, 0);
			iLocal_49 = 1;
			break;
		
		default:
			break;
	}
}

void func_80()//Position - 0x247C
{
	int iVar0;
	
	switch (iLocal_48)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_SLIDEY_CARS");
			func_30(1, 1);
			iLocal_48 = 5;
			break;
		
		case 5:
			if (((!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) || func_26(23)) || func_26(22)) || func_26(1))
			{
				iLocal_48 = 9;
			}
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
				{
					if (unk_0x317536BCEA8FA6B0(iVar0, -1, 0) == unk_0xFC1458A37D98B502())
					{
						if (iLocal_69 == 0)
						{
							iLocal_69 = iVar0;
							if (!unk_0x191BE1BC8F26F3C1(iLocal_69, 0))
							{
								if (func_81(1))
								{
									unk_0xF0E90144B0EB02A3(iLocal_69, 1);
								}
								else
								{
									iLocal_69 = 0;
								}
							}
						}
						else if (iLocal_69 != iVar0)
						{
							if (!unk_0x191BE1BC8F26F3C1(iLocal_69, 0))
							{
								unk_0xF0E90144B0EB02A3(iLocal_69, 0);
							}
							iLocal_69 = 0;
						}
					}
				}
			}
			break;
		
		case 9:
			func_23("CHEAT_SLIDEY_CARS");
			iLocal_48 = 10;
			break;
		
		case 10:
			if (!unk_0x191BE1BC8F26F3C1(iLocal_69, 0))
			{
				unk_0xF0E90144B0EB02A3(iLocal_69, 0);
				iLocal_69 = 0;
			}
			func_30(1, 0);
			iLocal_48 = 1;
			break;
		
		default:
			break;
	}
}

int func_81(int iParam0)//Position - 0x25A3
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	char* sVar4;
	
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		iVar0 = unk_0xC733212BF9066BDF();
		if (unk_0x6ADD12BF4D6D2587(iVar0))
		{
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				iVar1 = unk_0x82FF3DFBC3965CC0(iVar0);
				iVar2 = func_8();
				if (iParam0 & 1 != 0)
				{
					if (!unk_0xC1514CFCEC68CA4A(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!unk_0x125CDF69FA6EF560(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!unk_0xF9DDB1C0875FD9E0(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!unk_0x428C7026AD2721BA(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (unk_0xD323488FDDE4A80F(iVar0, "door_dside_r") != -1 || unk_0xD323488FDDE4A80F(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (unk_0xD323488FDDE4A80F(iVar0, "door_dside_r") == -1 || unk_0xD323488FDDE4A80F(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (unk_0x125CDF69FA6EF560(iVar1))
					{
						if (unk_0xD323488FDDE4A80F(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (unk_0xD323488FDDE4A80F(iVar0, "seat_dside_r") != -1 || unk_0xD323488FDDE4A80F(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (unk_0xD323488FDDE4A80F(iVar0, "seat_dside_r") == -1 || unk_0xD323488FDDE4A80F(iVar0, "seat_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 256 != 0)
				{
					if (!func_10(iVar2))
					{
						return 0;
					}
					if (func_84(iVar2, 0) != iVar1)
					{
						return 0;
					}
				}
				if (iParam0 & 512 != 0)
				{
					if (!unk_0xC1514CFCEC68CA4A(iVar1) && !unk_0x125CDF69FA6EF560(iVar1))
					{
						return 0;
					}
					if (unk_0x8F1CCD9A61E026D8(iVar0))
					{
						return 0;
					}
					sVar4 = unk_0xA88FE81C0BDF2731(iVar0, &uVar3);
					if (!unk_0xAB019B170BF1309C(sVar4))
					{
						if (unk_0x8B948C59217A295D(sVar4) == unk_0x8B948C59217A295D("taxiService"))
						{
							return 0;
						}
					}
					if (func_82(iVar0, iVar2, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_82(int iParam0, int iParam1, bool bParam2)//Position - 0x27A4
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_83(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xC80D31E4B587871C(Global_104555.f_7199[iVar2], 0))
		{
			if (unk_0x7840B5C83A85E7C6(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_83(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x2815
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_84(int iParam0, int iParam1)//Position - 0x28ED
{
	struct<82> Var0;
	
	if (func_10(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_85(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_85(int iParam0, var uParam1, int iParam2)//Position - 0x292F
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_104555.f_9055.f_99.f_58[128] && !Global_104555.f_9055.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14,9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_104555.f_9055.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_104555.f_9055.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_86()//Position - 0x2B8B
{
	switch (iLocal_47)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_SUPER_JUMP");
			func_30(0, 1);
			iLocal_47 = 5;
			break;
		
		case 5:
			if ((((!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) || func_26(23)) || func_26(22)) || func_26(0)) || unk_0x44D4288AF355A8D8())
			{
				iLocal_47 = 9;
				return;
			}
			unk_0xF27D63F6381AB4B9(unk_0x9EB17624F44A8DA4());
			unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 217, 1);
			break;
		
		case 9:
			func_23("CHEAT_SUPER_JUMP");
			func_30(0, 0);
			iLocal_47 = 1;
			break;
		
		default:
			break;
	}
}

void func_87()//Position - 0x2C34
{
	if ((func_110() || iLocal_84 != 0) || func_14(14))
	{
		unk_0x4FB260623DD93924(2, 243, 1);
	}
	func_109();
	if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		return;
	}
	if (unk_0x12A8D89D51ADF8A6(unk_0xFC1458A37D98B502()))
	{
		return;
	}
	if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		return;
	}
	if (!unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
	{
		return;
	}
	if (func_33() || unk_0x1E06D00B67177A18())
	{
		return;
	}
	if (func_108())
	{
		if (!iLocal_82)
		{
			func_107();
			iLocal_82 = 1;
		}
		return;
	}
	iLocal_82 = 0;
	iLocal_83 = 0;
	if ((func_106(988027572, 12) || unk_0x146754A18072928D(joaat("buzzoff"))) || func_105(20, joaat("buzzard")))
	{
		func_102(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((func_106(-1134279030, 11) || unk_0x146754A18072928D(joaat("bandit"))) || func_105(20, joaat("bmx")))
	{
		func_102(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((func_106(971352167, 10) || unk_0x146754A18072928D(joaat("holein1"))) || func_105(20, joaat("caddy")))
	{
		func_102(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((func_106(-269863225, 10) || unk_0x146754A18072928D(joaat("comet"))) || func_105(20, joaat("comet2")))
	{
		func_102(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((func_106(458579068, 12) || unk_0x146754A18072928D(joaat("flyspray"))) || func_105(20, joaat("duster")))
	{
		func_102(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((func_106(-666513193, 12) || unk_0x146754A18072928D(joaat("rocket"))) || func_105(20, joaat("pcj")))
	{
		func_102(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((func_106(-1245984749, 10) || unk_0x146754A18072928D(joaat("rapidgt"))) || func_105(20, joaat("rapidgt")))
	{
		func_102(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((func_106(2076774618, 12) || unk_0x146754A18072928D(joaat("offroad"))) || func_105(20, joaat("sanchez")))
	{
		func_102(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((func_106(855685457, 9) || unk_0x146754A18072928D(joaat("vinewood"))) || func_105(20, joaat("stretch")))
	{
		func_102(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((func_106(-591395876, 12) || unk_0x146754A18072928D(joaat("barnstorm"))) || func_105(20, joaat("stunt")))
	{
		func_102(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((func_106(-1399217582, 10) || unk_0x146754A18072928D(joaat("trashed"))) || func_105(20, joaat("trash")))
	{
		func_102(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_101())
	{
		if ((func_106(-375917581, 10) || unk_0x146754A18072928D(joaat("extinct"))) || func_105(20, joaat("dodo")))
		{
			func_102(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((func_106(-2124307881, 10) || unk_0x146754A18072928D(joaat("deathcar"))) || func_105(20, joaat("dukes2")))
		{
			func_102(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((func_106(1028964594, 9) || unk_0x146754A18072928D(joaat("bubbles"))) || func_105(20, joaat("submersible2")))
		{
			func_102(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((func_106(-393416581, 11) || unk_0x146754A18072928D(joaat("hoptoit"))) || func_105(0, 0))
	{
		func_100();
	}
	if ((func_106(-296509791, 8) || unk_0x146754A18072928D(joaat("snowday"))) || func_105(1, 0))
	{
		func_99();
	}
	if ((func_106(1120820643, 7) || unk_0x146754A18072928D(joaat("catchme"))) || func_105(2, 0))
	{
		func_98();
	}
	if ((func_106(-421458016, 9) || unk_0x146754A18072928D(joaat("gotgills"))) || func_105(3, 0))
	{
		func_97();
	}
	if ((func_106(372390926, 12) || unk_0x146754A18072928D(joaat("toolup"))) || func_105(4, 0))
	{
		iLocal_51 = 4;
	}
	if ((func_106(606506837, 8) || unk_0x146754A18072928D(joaat("makeitrain"))) || func_105(5, 0))
	{
		iLocal_52 = 4;
	}
	if ((func_106(453014206, 12) || unk_0x146754A18072928D(joaat("turtle"))) || func_105(6, 0))
	{
		iLocal_53 = 4;
	}
	if ((func_106(1773187142, 9) || unk_0x146754A18072928D(joaat("powerup"))) || func_105(7, 0))
	{
		iLocal_54 = 4;
	}
	if ((func_106(1173296014, 10) || unk_0x146754A18072928D(joaat("fugitive"))) || func_105(8, 0))
	{
		iLocal_55 = 4;
	}
	if ((func_106(-381269753, 10) || unk_0x146754A18072928D(joaat("lawyerup"))) || func_105(9, 0))
	{
		iLocal_56 = 4;
	}
	if ((func_106(-2023988698, 11) || unk_0x146754A18072928D(joaat("skydive"))) || func_105(10, 0))
	{
		iLocal_57 = 4;
	}
	if ((func_106(-835863906, 12) || unk_0x146754A18072928D(joaat("highex"))) || func_105(11, 0))
	{
		func_96();
	}
	if ((func_106(1958387485, 12) || unk_0x146754A18072928D(joaat("incendiary"))) || func_105(12, 0))
	{
		func_95();
	}
	if ((func_106(-903985180, 9) || unk_0x146754A18072928D(joaat("hothands"))) || func_105(13, 0))
	{
		func_94();
	}
	if ((func_106(2087642905, 9) || unk_0x146754A18072928D(joaat("floater"))) || func_105(14, 0))
	{
		func_93();
	}
	if ((func_106(1257820019, 10) || unk_0x146754A18072928D(joaat("painkiller"))) || func_105(15, 0))
	{
		func_92();
	}
	if ((func_106(1540206179, 7) || unk_0x146754A18072928D(joaat("slowmo"))) || func_105(16, 0))
	{
		func_91();
	}
	if ((func_106(115565392, 16) || unk_0x146754A18072928D(joaat("skyfall"))) || func_105(17, 0))
	{
		func_90();
	}
	if ((func_106(-1276513277, 8) || unk_0x146754A18072928D(joaat("liquor"))) || func_105(18, 0))
	{
		func_89();
	}
	if ((func_106(2040433593, 9) || unk_0x146754A18072928D(joaat("deadeye"))) || func_105(19, 0))
	{
		func_88();
	}
}

void func_88()//Position - 0x3398
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(16))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_63 != 1)
	{
		func_20("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_66 = 4;
	}
}

void func_89()//Position - 0x3404
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		iLocal_65 = 1;
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		iLocal_65 = 1;
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(18))
	{
		func_20("CHEAT_NOT_NOW");
		iLocal_65 = 1;
		return;
	}
	if (iLocal_65 == 1)
	{
		iLocal_65 = 4;
	}
	else if (iLocal_65 == 5)
	{
		iLocal_65 = 9;
	}
}

void func_90()//Position - 0x347B
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (unk_0x44D4288AF355A8D8())
	{
		func_20("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_64 != 1)
	{
		func_20("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_26(23) || func_26(21)) || func_26(17)) || func_65(0)) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) || !unk_0x4AA5DF29899B96D6())
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if ((unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x8F38E94BBF3404CD(joaat("respawn_controller")) > 0)
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	iLocal_64 = 2;
}

void func_91()//Position - 0x3554
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(16))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_66 != 1)
	{
		func_20("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_63 = 4;
	}
}

void func_92()//Position - 0x35C0
{
	vector3 vVar0;
	
	vVar0 = { func_18(unk_0x9EB17624F44A8DA4()) };
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (((func_26(23) || func_26(21)) || func_26(15)) || vVar0.z <= -170f)
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_62 == 1)
	{
		iLocal_62 = 4;
	}
	else if (iLocal_62 == 5)
	{
		iLocal_62 = 9;
	}
}

void func_93()//Position - 0x364A
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if ((((func_26(23) || func_26(21)) || func_26(14)) || func_65(17)) || unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	iLocal_61 = 4;
}

void func_94()//Position - 0x36BF
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		iLocal_60 = 1;
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		iLocal_60 = 1;
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(13))
	{
		func_20("CHEAT_NOT_NOW");
		iLocal_60 = 1;
		return;
	}
	if (iLocal_60 == 1)
	{
		iLocal_60 = 4;
	}
	else if (iLocal_60 == 5)
	{
		iLocal_60 = 9;
	}
}

void func_95()//Position - 0x3736
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		iLocal_59 = 1;
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		iLocal_59 = 1;
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(12))
	{
		func_20("CHEAT_NOT_NOW");
		iLocal_59 = 1;
		return;
	}
	if (iLocal_59 == 1)
	{
		iLocal_59 = 4;
	}
	else if (iLocal_59 == 5)
	{
		iLocal_59 = 9;
	}
}

void func_96()//Position - 0x37AD
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		iLocal_58 = 1;
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		iLocal_58 = 1;
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(11))
	{
		func_20("CHEAT_NOT_NOW");
		iLocal_58 = 1;
		return;
	}
	if (iLocal_58 == 1)
	{
		iLocal_58 = 4;
	}
	else if (iLocal_58 == 5)
	{
		iLocal_58 = 9;
	}
}

void func_97()//Position - 0x3824
{
	if ((((func_26(23) || func_26(22)) || func_26(3)) || func_14(9)) || func_14(10))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_50 == 1)
	{
		iLocal_50 = 4;
	}
	else if (iLocal_50 == 5)
	{
		iLocal_50 = 9;
	}
}

void func_98()//Position - 0x3897
{
	if ((((func_26(23) || func_26(22)) || func_26(2)) || func_14(9)) || func_14(10))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_49 == 1)
	{
		iLocal_49 = 4;
	}
	else if (iLocal_49 == 5)
	{
		iLocal_49 = 9;
	}
}

void func_99()//Position - 0x390A
{
	if ((func_26(23) || func_26(22)) || func_26(1))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_48 == 1)
	{
		iLocal_48 = 4;
	}
	else if (iLocal_48 == 5)
	{
		iLocal_48 = 9;
	}
}

void func_100()//Position - 0x3965
{
	if (((func_26(23) || func_26(22)) || func_26(0)) || unk_0x44D4288AF355A8D8())
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_47 == 1)
	{
		iLocal_47 = 4;
	}
	else if (iLocal_47 == 5)
	{
		iLocal_47 = 9;
	}
}

int func_101()//Position - 0x39CA
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

void func_102(int iParam0, char* sParam1)//Position - 0x3A85
{
	if (iLocal_46 == 1)
	{
		if (((((func_14(9) || unk_0x8F38E94BBF3404CD(joaat("barry1")) > 0) || unk_0x8F38E94BBF3404CD(joaat("tennis")) > 0) || func_26(23)) || func_26(22)) || func_26(20))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (!func_103(iParam0))
		{
			func_20("CHEAT_VEHICLE_LOCKED_DENIED");
			return;
		}
		iLocal_67 = iParam0;
		sLocal_70 = sParam1;
		iLocal_46 = 2;
	}
}

int func_103(int iParam0)//Position - 0x3B1F
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (func_104(66, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("dukes2"):
			if (func_104(64, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("submersible2"):
			if (func_104(63, 0) == 0)
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_104(int iParam0, int iParam1)//Position - 0x3B77
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_104555.f_32429[iParam0], iParam1);
}

int func_105(int iParam0, int iParam1)//Position - 0x3B9A
{
	if (unk_0xC80D31E4B587871C(Global_25481, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_25482)
			{
				unk_0x0EE72DB1CD8A3B86(&Global_25481, iParam0);
				iLocal_83 = 1;
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&Global_25481, iParam0);
			iLocal_83 = 1;
			return 1;
		}
	}
	return 0;
}

int func_106(int iParam0, int iParam1)//Position - 0x3BE7
{
	if (!func_14(14))
	{
		return unk_0x3586AB674E8181A9(iParam0, iParam1);
	}
	return 0;
}

void func_107()//Position - 0x3C05
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_80[iVar0] != -1)
		{
			unk_0x4B1D93E1A14A667F(iLocal_80[iVar0]);
			iLocal_80[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_108()//Position - 0x3C3B
{
	if (((Global_92833 == 13 || Global_92833 == 10) || Global_92833 == 11) || Global_92833 == 12)
	{
		return 0;
	}
	return 1;
}

void func_109()//Position - 0x3C79
{
	if (func_14(14) || (!unk_0x9F7B586A14398C40() && iLocal_84 != 0))
	{
		iLocal_84 = unk_0x53C562FD2B9E3AB0();
	}
	if (iLocal_84 != 0)
	{
		if (!func_14(14))
		{
			if ((unk_0x53C562FD2B9E3AB0() - iLocal_84) > 1000)
			{
				iLocal_84 = 0;
			}
		}
	}
}

int func_110()//Position - 0x3CC4
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

void func_111()//Position - 0x3CEE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_80[iVar0] = -1;
		iVar0++;
	}
	iLocal_82 = 0;
	iLocal_81 = 0;
}

void func_112()//Position - 0x3D16
{
	unk_0xA74AC08837BCE244(0);
	if (iLocal_64 == 5)
	{
		func_36();
	}
	if (iLocal_65 == 5)
	{
		func_45(1);
	}
	if (iLocal_63 == 5 || iLocal_66 == 5)
	{
		unk_0x41390D2B41D5502D(1f);
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (iLocal_62 == 5)
		{
			unk_0x8FA21D9CF7681249(unk_0x9EB17624F44A8DA4(), 0);
			unk_0xD38F266C132F2897(unk_0xFC1458A37D98B502(), false, false, false, false, false, 0, 0, 0);
		}
		unk_0x519894EC8BE42A78(unk_0x9EB17624F44A8DA4(), 1f);
		unk_0xF6B7FFFC1C257E61(unk_0x9EB17624F44A8DA4(), 1f);
	}
	unk_0x528DD2D606871804(0);
	Global_25479 = 0;
	Global_25478 = 0;
	Global_25480 = 0;
	Global_25481 = 0;
	Global_25483 = 0;
	Global_25482 = 0;
	unk_0x96A3D9A8A4C7AFD4();
}

