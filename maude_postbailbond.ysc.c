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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	vector3 vVar0;
	vector3 vVar1;
	
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_45 = -1;
	iLocal_46 = -1;
	if (unk_0x7D9C4B359376D38A(19))
	{
		func_55();
	}
	if (!func_52())
	{
		func_55();
	}
	if (!func_51(iLocal_42))
	{
		func_55();
	}
	else
	{
		func_50();
		iLocal_43 = unk_0x53C562FD2B9E3AB0();
		iLocal_45 = func_49();
		iLocal_44 = 0;
		func_48(1, &uLocal_48);
	}
	while (true)
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (!func_51(iLocal_42))
			{
				func_55();
			}
			vVar0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			vVar1 = { unk_0xB3328BA8976B416C(iLocal_42, 1) };
			if (system::vdist2(vVar0, vVar1) >= (100f * 100f))
			{
				func_55();
			}
			switch (iLocal_47)
			{
				case 0:
					func_43(vVar1, vVar0, 18000, 1101004800);
					if (func_25(&iLocal_42, 0))
					{
						func_24();
						func_16(0);
						func_12(vVar1, vVar0);
						unk_0x6450931B826B49D9(func_11());
						iLocal_47 = 1;
					}
					break;
				
				case 1:
					if (func_5(&iLocal_42, &iLocal_39, &iLocal_46))
					{
						iLocal_47 = 2;
					}
					break;
				
				case 2:
					if (!func_4(iLocal_42, 1805844857) && !unk_0xA6FA9E5D08F067AD(iLocal_42))
					{
						if (!unk_0xA5F6598E13F98E08(iLocal_42, func_11(), func_3(), 3))
						{
							func_1();
						}
					}
					else
					{
						func_55();
					}
					break;
				}
		}
		system::wait(0);
	}
}

void func_1()//Position - 0x1B3
{
	if (func_51(iLocal_42))
	{
		func_2(&iLocal_42);
		unk_0xD68E88A8E0BE8697(iLocal_42, unk_0xFC1458A37D98B502(), 10000f, -1, 0, 0);
		unk_0xE9B3D12A64CC7C1A(iLocal_42, true);
	}
}

void func_2(int iParam0)//Position - 0x1E3
{
	if (func_51(*iParam0))
	{
		unk_0xE17958D3FD0F9EE9(*iParam0, 2, false);
		unk_0xE17958D3FD0F9EE9(*iParam0, 64, false);
		unk_0xE17958D3FD0F9EE9(*iParam0, 128, false);
		unk_0xE17958D3FD0F9EE9(*iParam0, 8, false);
		unk_0xE17958D3FD0F9EE9(*iParam0, 1, false);
		unk_0xE17958D3FD0F9EE9(*iParam0, 32, false);
		unk_0xAE6EBBBBD8B9FB30(*iParam0, 5, false);
		unk_0xAE6EBBBBD8B9FB30(*iParam0, 17, true);
		unk_0xAE01EF4BC84AFE7C(*iParam0, 118, true);
	}
}

char* func_3()//Position - 0x24C
{
	return "female_Flee_Table_Left_Maude";
}

int func_4(int iParam0, int iParam1)//Position - 0x256
{
	if (func_51(iParam0))
	{
		if (unk_0x78F50AA8F955BEFC(iParam0, iParam1) == 1 || unk_0x78F50AA8F955BEFC(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_5(int iParam0, int iParam1, int iParam2)//Position - 0x289
{
	int iVar0;
	
	if (func_51(*iParam0))
	{
		if (unk_0xA5F6598E13F98E08(*iParam0, func_10(), func_9(), 3))
		{
			if (!unk_0x9F887157983E8EFC(*iParam0) || unk_0x7CE28D2DD2AF0F42(*iParam0))
			{
				unk_0x6450931B826B49D9(func_11());
				if (unk_0x3A801AA34DD821BE(func_11()))
				{
					*iParam2 = unk_0x8383F9C605E523B7(2727,4f, 4145,56f, 43,68f, 0f, 0f, -92,17f, 2);
					unk_0xD0E12C501EE26329(*iParam2, false);
					unk_0x7122D672EBE0EA6E(*iParam2, false);
					if (func_4(*iParam0, 1785177548))
					{
						unk_0xBD1486160AB0661B(*iParam0, -1000f, 1);
					}
					unk_0x8E628F774C748D93(*iParam0, *iParam2, func_11(), func_3(), 1000f, -4f, 4626, 0, 1148846080, 0);
					unk_0x9A0C1F836B24E46E(*iParam0, 0, 0);
					if (func_8(*iParam1))
					{
						if (unk_0xA5F6598E13F98E08(*iParam1, func_10(), func_7(), 3))
						{
							unk_0xBD1486160AB0661B(*iParam1, -16f, 0);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						unk_0xEBB74134CCA3442E(*iParam1, *iParam2, func_6(), func_11(), 16f, -4f, iVar0, 1148846080);
					}
					return 1;
				}
			}
			else
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

char* func_6()//Position - 0x3D5
{
	return "Female_Flee_Table_Left_Maude_Chair";
}

char* func_7()//Position - 0x3E0
{
	return "base_chair";
}

int func_8(int iParam0)//Position - 0x3EB
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

char* func_9()//Position - 0x40C
{
	return "base";
}

char* func_10()//Position - 0x417
{
	return "special_ped@maude@base";
}

char* func_11()//Position - 0x422
{
	return "special_ped@maude@exit_flee";
}

void func_12(vector3 vParam0, vector3 vParam1)//Position - 0x42D
{
	if (func_51(iLocal_42))
	{
		if (!unk_0x33B1D0D0C92D4F18(iLocal_42))
		{
			if (system::vdist2(vParam1, vParam0) < (35f * 35f))
			{
				func_13(&iLocal_42, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
			}
		}
	}
}

void func_13(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x473
{
	bool bVar0;
	
	if (func_51(*iParam0))
	{
		bVar0 = unk_0x7E2C8B0B99E0B3C2(*iParam0);
		if (bVar0)
		{
			unk_0x8BB5ECF21DDE505B(*iParam0, 0);
		}
		func_14(*iParam0, sParam1, sParam2, iParam3);
		if (bVar0)
		{
			unk_0x8BB5ECF21DDE505B(*iParam0, 1);
		}
	}
}

void func_14(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x4B5
{
	unk_0xE44A9E63DC81244A(iParam0, sParam1, sParam2, func_15(iParam3), 0);
}

int func_15(int iParam0)//Position - 0x4CE
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_16(bool bParam0)//Position - 0x6BE
{
	struct<6> Var0;
	char* sVar1;
	
	if (func_23())
	{
		Var0 = { func_22() };
		sVar1 = func_21();
		if (unk_0x74C475EB8E73D398(&Var0, sVar1))
		{
			if (bParam0)
			{
				func_19();
			}
			else
			{
				func_17();
			}
		}
	}
}

void func_17()//Position - 0x6F6
{
	Global_14622 = 0;
	func_18();
}

void func_18()//Position - 0x706
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

void func_19()//Position - 0x727
{
	Global_14622 = 0;
	func_20();
}

void func_20()//Position - 0x737
{
	if (unk_0x42111BD51D233AAB())
	{
		unk_0x495EB1DD7306493A();
		Global_16767 = 0;
		unk_0xB31CEFB00C146C91(true);
		Global_15756 = 6;
		return;
	}
}

char* func_21()//Position - 0x75B
{
	if (unk_0xC80D31E4B587871C(Global_104555.f_24956, 3))
	{
		return "BB4_loiter";
	}
	else if (unk_0xC80D31E4B587871C(Global_104555.f_24956, 2))
	{
		return "BB3_loiter";
	}
	else if (unk_0xC80D31E4B587871C(Global_104555.f_24956, 1))
	{
		return "BB2_loiter";
	}
	else if (unk_0xC80D31E4B587871C(Global_104555.f_24956, 0))
	{
		return "BB1_loiter";
	}
	return "MAUDE_loiter";
}

struct<6> func_22()//Position - 0x7C8
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		return Global_15375;
	}
	return Var0;
}

int func_23()//Position - 0x7EC
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_24()//Position - 0x80E
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_41))
	{
		unk_0xEDC33A771FAEB393(iLocal_41, false);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_40))
	{
		unk_0xEDC33A771FAEB393(iLocal_40, false);
	}
}

int func_25(int iParam0, bool bParam1)//Position - 0x836
{
	if (func_51(*iParam0))
	{
		if ((unk_0x9479D23F28CA059C(*iParam0) || unk_0xC545C64D901C635F(*iParam0)) || unk_0x55ABE3023BD038CC(*iParam0))
		{
			return 1;
		}
		if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
		{
			if (unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), *iParam0))
			{
				return 1;
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_39))
			{
				if (unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), iLocal_39))
				{
					return 1;
				}
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_40))
			{
				if (unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), iLocal_40))
				{
					return 1;
				}
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_41))
			{
				if (unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), iLocal_41))
				{
					return 1;
				}
			}
		}
		if (unk_0x47B14B07B2FD8217(*iParam0, 60))
		{
			return 1;
		}
		if (unk_0x9F887157983E8EFC(*iParam0))
		{
			if (unk_0x21B6FFFD04C9FF3A(*iParam0, unk_0xFC1458A37D98B502(), 3f, 3f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (unk_0x47B14B07B2FD8217(*iParam0, 50))
		{
			return 1;
		}
		if (func_33(*iParam0, 1126825984))
		{
			return 1;
		}
		if (func_26(*iParam0, 1, 0, 0, 0))
		{
			return 1;
		}
		if (unk_0x4E69510C44147A5C(-1, unk_0xB3328BA8976B416C(*iParam0, 1), 15f))
		{
			return 1;
		}
		if (unk_0x47B14B07B2FD8217(*iParam0, 72))
		{
			return 1;
		}
		if (bParam1)
		{
			if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
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

int func_26(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x988
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1,86f;
		fVar1 = 1,86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_8(unk_0xFC1458A37D98B502()) && func_8(iParam0))
	{
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_32(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_27(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x9C8F5918B4DF54D8(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x5679106BC7ED79EE(unk_0xB3328BA8976B416C(iParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1,86f;
					fVar1 = 1,86f;
				}
				if (func_32(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_27(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_27(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0xA83
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	vVar1 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar1.x = (vVar1.x + fParam1);
	vVar1.y = (vVar1.y + fParam1);
	vVar1.z = (vVar1.z + fParam1);
	if (bParam2)
	{
		if (((unk_0x692364B06AD5AF40(unk_0xB3328BA8976B416C(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x692364B06AD5AF40(unk_0xB3328BA8976B416C(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x692364B06AD5AF40(unk_0xB3328BA8976B416C(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x692364B06AD5AF40(unk_0xB3328BA8976B416C(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_28(iParam0, fParam1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_28(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF1DE6FAA2EFAA34F(vVar0, vVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_28(int iParam0, float fParam1)//Position - 0xB8F
{
	var uVar0;
	vector3 vVar1;
	
	if ((((unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_29(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0xC24
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_31(vParam1 - unk_0xB3328BA8976B416C(iParam0, 1)) };
	if (fParam2 < 0,1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { unk_0xCE3B2111021F7234(iParam0) };
	}
	else
	{
		vVar1 = { func_31(unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 5f, 0f) - unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_30(vVar1, vVar0);
	if (fVar2 <= system::cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_30(vector3 vParam0, vector3 vParam1)//Position - 0xCB2
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_31(vector3 vParam0)//Position - 0xCD3
{
	float fVar0;
	float fVar1;
	
	fVar0 = system::vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_32(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0xD12
{
	if (bParam1)
	{
		if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
		{
			if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x5679106BC7ED79EE(unk_0xB3328BA8976B416C(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0, float fParam1)//Position - 0xD5A
{
	float fVar0;
	
	if (func_8(unk_0xFC1458A37D98B502()) && func_8(iParam0))
	{
		if (func_42(iParam0) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iParam0))
		{
			if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_34(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_34(int iParam0, float fParam1)//Position - 0xDD0
{
	return func_35(iParam0, unk_0xFC1458A37D98B502(), fParam1, 1, 250, 7);
}

bool func_35(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xDE8
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_41(iParam0, iParam1);
	if (!func_8(iParam0) || !func_8(iParam1))
	{
		if (iVar2 != -1)
		{
			func_40(&(Local_37[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_39(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_38();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_37[iVar2 /*4*/].f_1 = iParam0;
		Local_37[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_36(&(Local_37[iVar2 /*4*/]), vVar1, iParam1, &(Local_37[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x53C562FD2B9E3AB0() - Local_37[iVar2 /*4*/].f_3) < iParam4);
}

int func_36(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)//Position - 0xEA9
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_8(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_37(iParam2, iParam5) };
		*uParam0 = unk_0x8941008352A0F66A(vParam1, vVar1 + vVar1 - vParam1 * Vector(0,1f, 0,1f, 0,1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = unk_0x16ACABF450EB00B4(*uParam0, &uVar0, &vVar1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x52C56492660097C7(iVar3))
	{
		func_8(iVar3);
		if (unk_0x07F64790D10D1DB5(iVar3) == iParam2)
		{
			if (bLocal_38)
			{
				unk_0x93C9563BFC895A66(vParam1, unk_0xB3328BA8976B416C(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = unk_0x53C562FD2B9E3AB0();
			return 1;
		}
		return 0;
	}
	if (unk_0x8A3FF8E81B40BB75(iVar3))
	{
		func_8(iVar3);
		if (unk_0x88DDBE9908752BF0(iParam2, 0))
		{
			if (unk_0x79A6CD762DCCABE4(iVar3) == unk_0xDFD115BB10FE46A9(iParam2, 0))
			{
				if (bLocal_38)
				{
					unk_0x93C9563BFC895A66(vParam1, unk_0xB3328BA8976B416C(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = unk_0x53C562FD2B9E3AB0();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_37(int iParam0, int iParam1)//Position - 0xFD5
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x63A6486593EC7EC3(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xB3328BA8976B416C(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0xD0E00576168D19BB(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0xD0E00576168D19BB(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0xD0E00576168D19BB(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0xD0E00576168D19BB(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0xD0E00576168D19BB(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xB3328BA8976B416C(iParam0, 1);
}

int func_38()//Position - 0x109A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_39(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x10E4
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_31(unk_0xB3328BA8976B416C(iParam1, 1) - unk_0xB3328BA8976B416C(iParam0, 1)) };
	if (fParam2 < 0,1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { unk_0xCE3B2111021F7234(iParam0) };
	}
	else
	{
		vVar1 = { func_31(unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 5f, 0f) - unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_30(vVar1, vVar0);
	if (fVar2 <= system::cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

void func_40(var uParam0)//Position - 0x1175
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_41(int iParam0, int iParam1)//Position - 0x1190
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_42(int iParam0)//Position - 0x11CF
{
	if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iParam0) && unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
	{
		return 1;
	}
	return 0;
}

int func_43(vector3 vParam0, vector3 vParam1, int iParam2, float fParam3)//Position - 0x11F7
{
	var uVar0;
	char[] cVar1[8];
	char* sVar2;
	
	if (iLocal_44 < iLocal_45)
	{
		if (!func_23())
		{
			if (system::vdist2(vParam1, vParam0) < (fParam3 * fParam3))
			{
				if (unk_0x53C562FD2B9E3AB0() - iLocal_43) > (iParam2 + unk_0x63A6486593EC7EC3(0, 2000))
				{
					uVar0 = 16;
					func_47(&uVar0, 3, iLocal_42, "MAUDE", 0, 1);
					cVar1 = func_46();
					sVar2 = func_21();
					func_44(&uVar0, cVar1, sVar2, 7, 0, 0);
					iLocal_43 = unk_0x53C562FD2B9E3AB0();
					iLocal_44++;
					return 1;
				}
			}
		}
		else
		{
			iLocal_43 = unk_0x53C562FD2B9E3AB0();
		}
	}
	return 0;
}

void func_44(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1281
{
	func_45(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0x872F1C1F8587CCC7(&Global_14622, 0);
	Global_15759 = iParam3;
	StringCopy(&Global_15746, sParam2, 24);
}

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x12BC
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = iParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

char* func_46()//Position - 0x1312
{
	if (unk_0xC80D31E4B587871C(Global_104555.f_24956, 3))
	{
		return "BB4AUD";
	}
	else if (unk_0xC80D31E4B587871C(Global_104555.f_24956, 2))
	{
		return "BB3AUD";
	}
	else if (unk_0xC80D31E4B587871C(Global_104555.f_24956, 1))
	{
		return "BB2AUD";
	}
	else if (unk_0xC80D31E4B587871C(Global_104555.f_24956, 0))
	{
		return "BB1AUD";
	}
	return "MAUDEAU";
}

void func_47(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x137F
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70856)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4ACB9D202CFF8727(iParam2, 0);
			}
			else
			{
				unk_0x4ACB9D202CFF8727(iParam2, 1);
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 0);
			}
			else
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 1);
			}
		}
	}
}

void func_48(bool bParam0, var uParam1)//Position - 0x141A
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 2711,198f, 4134,425f, 32,90168f };
	vVar1 = { 2739,981f, 4155,221f, 50,28859f };
	if (bParam0)
	{
		*uParam1 = unk_0xCB389937EDB1519A(vVar0, vVar1, 0, 1, 1, 1);
		unk_0xBB0951717202666D(vVar0, vVar1);
		unk_0x4C15495E88D71C61(vVar0, vVar1, false, 1);
		unk_0x2EB451A3616DA1F8(vVar0, vVar1, 0);
		unk_0xBF98CCF1EA4B13E9(2697,222f, 4119,894f, 42,79107f, 2746,04f, 4162,974f, 43,62732f, false, 1);
		unk_0x247EAA2E93D4A021(2728,333f, 4144,778f, 43,29292f, 7,5f, 1, 0, 0, false);
	}
	else
	{
		unk_0xCA107A9AAF17E75F(*uParam1, 0);
		unk_0xD581373770173F1F();
		unk_0x4C15495E88D71C61(vVar0, vVar1, true, 1);
		unk_0xD855BC7E9D7EC87F(2697,222f, 4119,894f, 42,79107f, 2746,04f, 4162,974f, 43,62732f, true);
	}
}

int func_49()//Position - 0x1507
{
	if (unk_0xC80D31E4B587871C(Global_104555.f_24956, 3))
	{
		return 4;
	}
	else if (unk_0xC80D31E4B587871C(Global_104555.f_24956, 2))
	{
		return 4;
	}
	else if (unk_0xC80D31E4B587871C(Global_104555.f_24956, 1))
	{
		return 4;
	}
	else if (unk_0xC80D31E4B587871C(Global_104555.f_24956, 0))
	{
		return 3;
	}
	return 4;
}

void func_50()//Position - 0x1565
{
	vector3 vVar0;
	
	if (func_51(iLocal_42))
	{
		if (!unk_0x9761C10D57B68069(iLocal_42))
		{
			unk_0xDD29FF4BAB8AFF9C(iLocal_42, true, 0);
		}
		unk_0x771A86309E0CA47B(iLocal_42, true);
		unk_0x6D624C6A284D7D07(iLocal_42, 0);
		unk_0x5C5D33A1B2711D21(iLocal_42, false);
		unk_0xCE93FCB8A8D8DF0B(iLocal_42, 1862763509);
		unk_0x08B32ADD0F9764A2(iLocal_42, 0);
		unk_0x42202EF248A87783(iLocal_42, 0);
		unk_0xAE01EF4BC84AFE7C(iLocal_42, 118, false);
		vVar0 = { 2728,33f, 4145,6f, 43,89f };
		if (unk_0x50126692B8A3590A(vVar0, 10f, -380698483, 0))
		{
			iLocal_40 = unk_0xCBD07018689DF383(vVar0, 10f, -380698483, 1, 0, 1);
			if (func_8(iLocal_40))
			{
				unk_0xBD8D47FDC6902B2D(iLocal_40, 2727,4f, 4145,56f, 43,68f, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(iLocal_40, -92,17f);
				unk_0xEDC33A771FAEB393(iLocal_40, true);
			}
		}
		if (unk_0x50126692B8A3590A(vVar0, 10f, 1385417869, 0))
		{
			iLocal_41 = unk_0xCBD07018689DF383(vVar0, 10f, 1385417869, 0, 0, 1);
			if (func_8(iLocal_41))
			{
				if (!unk_0x9761C10D57B68069(iLocal_41))
				{
					unk_0xDD29FF4BAB8AFF9C(iLocal_41, true, 0);
				}
				unk_0xBD8D47FDC6902B2D(iLocal_41, 2727,686f, 4145,715f, 44,08f, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(iLocal_41, 71f);
				unk_0xEDC33A771FAEB393(iLocal_41, true);
			}
		}
		if (unk_0x50126692B8A3590A(vVar0, 10f, -741944541, 0))
		{
			iLocal_39 = unk_0xCBD07018689DF383(vVar0, 10f, -741944541, 0, 0, 1);
			if (func_8(iLocal_39))
			{
				if (!unk_0x9761C10D57B68069(iLocal_39))
				{
					unk_0xDD29FF4BAB8AFF9C(iLocal_39, true, 0);
				}
				unk_0xBD8D47FDC6902B2D(iLocal_39, 2728,35f, 4145,59f, 43,3f, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(iLocal_39, -91,28f);
			}
		}
	}
}

int func_51(int iParam0)//Position - 0x1712
{
	if (func_8(iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_52()//Position - 0x1732
{
	int iVar0;
	int iVar1;
	var uVar2[32];
	
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		iVar0 = unk_0xD1A659E6867D8FF6(unk_0xFC1458A37D98B502(), &uVar2, -1);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (func_51(uVar2[iVar1]))
			{
				if (unk_0x82FF3DFBC3965CC0(uVar2[iVar1]) == func_53(62))
				{
					iLocal_42 = uVar2[iVar1];
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_53(int iParam0)//Position - 0x1799
{
	if (!func_54(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_54(int iParam0)//Position - 0x17C4
{
	return iParam0 < 3;
}

void func_55()//Position - 0x17D0
{
	func_48(0, &uLocal_48);
	if (func_8(iLocal_41))
	{
		unk_0xEDC33A771FAEB393(iLocal_41, false);
	}
	func_57(&iLocal_41, 0);
	if (func_8(iLocal_40))
	{
		unk_0xEDC33A771FAEB393(iLocal_40, false);
	}
	func_57(&iLocal_40, 0);
	if (func_8(iLocal_39))
	{
		unk_0xEDC33A771FAEB393(iLocal_39, false);
		if (unk_0xA5F6598E13F98E08(iLocal_39, "special_ped@maude@base", "base_chair", 3))
		{
			unk_0x9C16A63EBDA5A08E(iLocal_39, "base_chair", "special_ped@maude@base", -1000f);
			unk_0xBD1486160AB0661B(iLocal_39, -1000f, 1);
		}
		else if (unk_0xA5F6598E13F98E08(iLocal_39, func_11(), "Female_Flee_Table_Left_Maude_Chair", 3))
		{
			unk_0x9C16A63EBDA5A08E(iLocal_39, "Female_Flee_Table_Left_Maude_Chair", func_11(), -1000f);
			unk_0xBD1486160AB0661B(iLocal_39, -1000f, 1);
		}
	}
	func_57(&iLocal_39, 0);
	if (func_51(iLocal_42))
	{
		unk_0xE9B3D12A64CC7C1A(iLocal_42, true);
		unk_0xAE01EF4BC84AFE7C(iLocal_42, 118, true);
	}
	func_56(&iLocal_42, 1, 0, 1);
	unk_0xFCCDDE0E48CF9588(func_11());
	unk_0x96A3D9A8A4C7AFD4();
}

void func_56(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x18B5
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(*iParam0))
		{
			unk_0xCFF0CD14B439821D(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				unk_0x2CEA76A7F93740C6(*iParam0);
			}
			unk_0xE9B3D12A64CC7C1A(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x771A86309E0CA47B(*iParam0, false);
			}
		}
		unk_0x486F346ADFE56674(iParam0);
	}
}

void func_57(int iParam0, bool bParam1)//Position - 0x1905
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (unk_0x6049C20F5D5C185B(*iParam0))
		{
			unk_0x6B7C10B19928914F(*iParam0, 1, true);
		}
		if (!bParam1)
		{
			unk_0x3A703774620FDB42(iParam0);
		}
		else
		{
			unk_0x3B426B73C7C1DBB0(*iParam0);
		}
	}
}

