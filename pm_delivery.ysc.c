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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 3;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 1092616192;
	var uLocal_47 = 1101004800;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 3;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	vector3 vLocal_64 = { 0f, 0f, 0f };
	vector3 vLocal_65 = { 0f, 0f, 0f };
	vector3 vLocal_66 = { 0f, 0f, 0f };
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	bool bLocal_69 = 0;
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
	int iLocal_84[2] = { 0, 0 };
	int iLocal_85[2] = { 0, 0 };
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89[2] = { 0, 0 };
	int iLocal_90 = 0;
	char* sLocal_91 = NULL;
	char* sLocal_92 = NULL;
	char* sLocal_93 = NULL;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = -1;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 1000;
	var uLocal_104 = 1000;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0,0375f;
	fLocal_27 = 0,17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_79 = -1;
	sLocal_91 = "PMDL_OBJ";
	sLocal_92 = "PMDL_LOC";
	sLocal_93 = "PMDL_BCK";
	unk_0xBC03901A15107317(1);
	if (unk_0x7D9C4B359376D38A(3))
	{
		func_139(2);
		func_113();
	}
	iLocal_36 = func_111();
	while (true)
	{
		switch (iLocal_37)
		{
			case 0:
				if (!iLocal_70)
				{
					func_106();
				}
				else
				{
					func_105();
				}
				if (bLocal_69)
				{
					iLocal_71 = 1;
					iLocal_37 = 1;
				}
				break;
			
			case 1:
				if (!func_104())
				{
					switch (iLocal_38)
					{
						case 0:
							func_101();
							break;
						
						case 1:
							if (iLocal_36 == 5 || iLocal_36 == 6)
							{
								func_66();
							}
							else
							{
								func_65();
							}
							break;
						
						case 2:
							func_9();
							if (iLocal_36 < 3)
							{
								func_7();
							}
							else if (iLocal_36 > 6)
							{
								func_7();
								func_2();
							}
							break;
						
						case 3:
						case 4:
							func_1();
							break;
					}
				}
				else
				{
					func_1();
				}
				break;
		}
		system::wait(0);
	}
}

void func_1()//Position - 0x153
{
	func_139(2);
	func_113();
}

void func_2()//Position - 0x164
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iLocal_86))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_86, 0))
		{
			iVar0 = 200;
			iVar1 = (unk_0xDE523AF6F7B269AB(iLocal_86) - 800);
			if (unk_0xF69AD934E7664A7C(iLocal_86))
			{
				unk_0xE01CE1EBCD7EE551(iLocal_86, (unk_0xDE523AF6F7B269AB(iLocal_86) - 5), 0);
			}
			if (iVar1 <= 0)
			{
				iLocal_38 = 4;
			}
			else if (iVar1 < 75)
			{
				func_3(iVar1, iVar0, "PMDL_DMG", 6, 0, 1, 2);
			}
			else
			{
				func_3(iVar1, iVar0, "PMDL_DMG", 1, 0, 1, 2);
			}
		}
		else
		{
			iLocal_38 = 4;
		}
	}
	else
	{
		iLocal_38 = 4;
	}
}

void func_3(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1E7
{
	func_4(iParam0, iParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1);
}

void func_4(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23)//Position - 0x212
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_6(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_5(0, iVar0);
		Global_1359035.f_1093[iVar0] = uParam0;
		Global_1359035.f_1093.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1359035.f_1093.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1359035.f_1093.f_194[iVar0] = uParam3;
		Global_1359035.f_1093.f_183[iVar0] = uParam4;
		Global_1359035.f_1093.f_216[iVar0] = uParam5;
		Global_1359035.f_1093.f_227[iVar0 /*3*/] = fParam6;
		Global_1359035.f_1093.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1359035.f_1093.f_258[iVar0] = iParam8;
		Global_1359035.f_1093.f_269[iVar0] = uParam9;
		Global_1359035.f_1093.f_312[iVar0] = iParam10;
		Global_1359035.f_1093.f_323[iVar0] = iParam11;
		Global_1359035.f_1093.f_334[iVar0] = iParam12;
		Global_1359035.f_1093.f_345[iVar0] = iParam13;
		Global_1359035.f_1088 = 1;
		Global_1359035.f_1093.f_356[iVar0] = iParam14;
		Global_1359035.f_1093.f_367[iVar0] = iParam15;
		Global_1359035.f_1093.f_378[iVar0] = iParam16;
		Global_1359035.f_1093.f_389[iVar0] = iParam17;
		Global_1359035.f_1093.f_400[iVar0] = iParam18;
		Global_1359035.f_1093.f_411[iVar0] = iParam19;
		Global_1359035.f_1093.f_422[iVar0] = iParam20;
		Global_1359035.f_1093.f_433[iVar0] = iParam21;
		Global_1359035.f_1093.f_444[iVar0] = iParam22;
		Global_1359035.f_1093.f_455[iVar0] = iParam23;
	}
}

void func_5(int iParam0, int iParam1)//Position - 0x3DB
{
	unk_0x872F1C1F8587CCC7(&(Global_1359035.f_6119[iParam0]), iParam1);
}

bool func_6(int iParam0, int iParam1)//Position - 0x3F4
{
	return unk_0xC80D31E4B587871C(Global_1359035.f_6119[iParam0], iParam1);
}

void func_7()//Position - 0x40D
{
	int iVar0;
	
	iVar0 = (iLocal_74 - unk_0x53C562FD2B9E3AB0());
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (unk_0x53C562FD2B9E3AB0() >= iLocal_78)
	{
		func_8(iVar0, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_8(iVar0, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	switch (iLocal_75)
	{
		case 0:
			if (unk_0x53C562FD2B9E3AB0() >= (iLocal_74 - 10000))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 1:
			if (unk_0x53C562FD2B9E3AB0() >= (iLocal_74 - 9000))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 2:
			if (unk_0x53C562FD2B9E3AB0() >= (iLocal_74 - 8000))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 3:
			if (unk_0x53C562FD2B9E3AB0() >= (iLocal_74 - 7000))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 4:
			if (unk_0x53C562FD2B9E3AB0() >= (iLocal_74 - 6000))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 5:
			if (unk_0x53C562FD2B9E3AB0() >= (iLocal_74 - 5000))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 6:
			if (unk_0x53C562FD2B9E3AB0() >= (iLocal_74 - 4500))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 7:
			if (unk_0x53C562FD2B9E3AB0() >= (iLocal_74 - 4000))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 8:
			if (unk_0x53C562FD2B9E3AB0() >= (iLocal_74 - 3500))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 9:
			if (unk_0x53C562FD2B9E3AB0() >= (iLocal_74 - 3000))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 10:
			if (unk_0x53C562FD2B9E3AB0() >= (iLocal_74 - 2500))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 11:
			if (unk_0x53C562FD2B9E3AB0() >= (iLocal_74 - 2000))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 12:
			if (unk_0x53C562FD2B9E3AB0() >= (iLocal_74 - 1500))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 13:
			if (unk_0x53C562FD2B9E3AB0() >= (iLocal_74 - 1000))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 14:
			if (unk_0x53C562FD2B9E3AB0() >= (iLocal_74 - 500))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 15:
			if (unk_0x53C562FD2B9E3AB0() >= iLocal_74)
			{
				unk_0x4AFBCBFDE748D4E0(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 16:
			break;
	}
	if (unk_0x53C562FD2B9E3AB0() >= iLocal_74)
	{
		iLocal_38 = 3;
	}
}

void func_8(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x6FB
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_6(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_5(7, iVar0);
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

void func_9()//Position - 0x849
{
	int iVar0;
	int iVar1;
	
	if (iLocal_36 >= 3 && iLocal_36 <= 4)
	{
		iVar0 = 0;
		while (iVar0 < iLocal_85)
		{
			if (!iLocal_72)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_85[iVar0]))
				{
					if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_64, 50f, 50f, 50f, false, true, 0))
					{
						unk_0x1563F8C21480594F(unk_0x9EB17624F44A8DA4(), 2, 0);
						unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
						unk_0xFB19003EF06A954B(unk_0x9EB17624F44A8DA4(), 0f);
						iLocal_72 = 1;
					}
				}
			}
			else if (!unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_85[iVar0]))
				{
					unk_0xD68E88A8E0BE8697(iLocal_85[iVar0], unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
					unk_0xE9B3D12A64CC7C1A(iLocal_85[iVar0], true);
					unk_0x486F346ADFE56674(&(iLocal_85[iVar0]));
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_87))
				{
					unk_0x5380482A432E314E(&iLocal_87);
				}
			}
			iVar0++;
		}
	}
	if (func_21(&iLocal_39, vLocal_65, Global_22, 1, iLocal_86, sLocal_92, "", sLocal_93, 1, 0, 1, -1))
	{
		func_19(iLocal_86, 10,5f, 2, 1056964608, 0, 1, 0);
		unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 2000, 0);
		unk_0xCF5EB2CB1B30F02C(iLocal_86, 0);
		func_14(&iLocal_39, 1, 0);
		func_13();
	}
	iVar1 = 0;
	while (iVar1 < iLocal_84)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_84[iVar1]))
		{
			if (!unk_0xA6DECE14FC9A8C51(uLocal_89[iVar1]))
			{
				uLocal_89[iVar1] = func_10(iLocal_84[iVar1], 1, 145);
				unk_0x6931076730A4AC5D(&iLocal_108);
				unk_0x16416C5B54FDBCBB(0, 0, 0);
				unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
				unk_0x1B16DD5C115FE009(iLocal_108);
				unk_0xAB30B1CF01A198C1(iLocal_84[iVar1], iLocal_108);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_108);
				unk_0xE9B3D12A64CC7C1A(iLocal_84[iVar1], true);
			}
			if (!unk_0x21B6FFFD04C9FF3A(iLocal_84[iVar1], unk_0xFC1458A37D98B502(), 100f, 100f, 100f, 0, 1, 0))
			{
				if (unk_0xA6DECE14FC9A8C51(uLocal_89[iVar1]))
				{
					unk_0xE30CF11C0EE14316(&(uLocal_89[iVar1]));
				}
				unk_0xD68E88A8E0BE8697(iLocal_84[iVar1], unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
				unk_0xE9B3D12A64CC7C1A(iLocal_84[iVar1], true);
				unk_0x486F346ADFE56674(&(iLocal_84[iVar1]));
			}
		}
		else if (unk_0xA6DECE14FC9A8C51(uLocal_89[iVar1]))
		{
			unk_0xE30CF11C0EE14316(&(uLocal_89[iVar1]));
		}
		iVar1++;
	}
}

int func_10(int iParam0, bool bParam1, int iParam2)//Position - 0xA73
{
	int iVar0;
	
	iVar0 = func_11(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(iVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(iVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_11(int iParam0, bool bParam1, bool bParam2)//Position - 0xAC5
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_12(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_12(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_12(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_12(bool bParam0, float fParam1, float fParam2)//Position - 0xB69
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_13()//Position - 0xB80
{
	func_139(1);
	func_113();
}

void func_14(int iParam0, bool bParam1, bool bParam2)//Position - 0xB91
{
	int iVar0;
	
	if (unk_0xC80D31E4B587871C(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_18(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xA6DECE14FC9A8C51(iParam0->f_1[iVar0]))
		{
			unk_0xE30CF11C0EE14316(&(iParam0->f_1[iVar0]));
		}
		func_17(iVar0, iParam0);
		func_16(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), iVar0);
			unk_0x0EE72DB1CD8A3B86(&(iParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0xA6DECE14FC9A8C51(*iParam0))
	{
		unk_0xE30CF11C0EE14316(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[iVar0]))
		{
			unk_0x4ACB9D202CFF8727(iParam0->f_17[iVar0], 1);
			unk_0xEB2D96E7D3F4906C(iParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0xAE01EF4BC84AFE7C(iParam0->f_17[iVar0], 32, true);
				unk_0xAE01EF4BC84AFE7C(iParam0->f_17[iVar0], 305, false);
			}
			unk_0xAE01EF4BC84AFE7C(iParam0->f_17[iVar0], 268, false);
			if (bParam1)
			{
				if (unk_0x4759A34EB65CCA39(iParam0->f_17[iVar0], func_15()) && iParam0->f_17[iVar0] != unk_0xFC1458A37D98B502())
				{
					unk_0x88235B448509228B(iParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xC80D31E4B587871C(iParam0->f_13, 29))
			{
				unk_0xD0A6028E561242DA(iParam0->f_17[iVar0], false, -1, 0);
			}
			iParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0x4ACB9D202CFF8727(unk_0xFC1458A37D98B502(), 1);
		unk_0xEB2D96E7D3F4906C(unk_0xFC1458A37D98B502(), 1);
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (bParam2)
		{
			unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 32, true);
		}
	}
	iParam0->f_21 = 0;
}

int func_15()//Position - 0xD42
{
	return unk_0x7C65CFD05F3B9CE9(unk_0x98EC0789D9F0703B());
}

void func_16(int iParam0, var uParam1)//Position - 0xD52
{
	switch (iParam0)
	{
		case 0:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 19);
			break;
	}
}

void func_17(int iParam0, var uParam1)//Position - 0xD9A
{
	switch (iParam0)
	{
		case 0:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 16);
			break;
	}
}

void func_18(var uParam0)//Position - 0xDE2
{
	if (unk_0xA6DECE14FC9A8C51(uParam0->f_5))
	{
		unk_0xE30CF11C0EE14316(&(uParam0->f_5));
	}
}

int func_19(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xDFD
{
	unk_0x4FB260623DD93924(0, 71, 1);
	unk_0x4FB260623DD93924(0, 72, 1);
	unk_0x4FB260623DD93924(0, 76, 1);
	unk_0x4FB260623DD93924(0, 73, 1);
	unk_0x4FB260623DD93924(0, 59, 1);
	unk_0x4FB260623DD93924(0, 60, 1);
	if (bParam5)
	{
		unk_0x4FB260623DD93924(0, 75, 1);
	}
	unk_0x4FB260623DD93924(0, 80, 1);
	if (!bParam6)
	{
		unk_0x4FB260623DD93924(0, 69, 1);
		unk_0x4FB260623DD93924(0, 70, 1);
		unk_0x4FB260623DD93924(0, 68, 1);
	}
	unk_0x4FB260623DD93924(0, 74, 1);
	unk_0x4FB260623DD93924(0, 86, 1);
	unk_0x4FB260623DD93924(0, 81, 1);
	unk_0x4FB260623DD93924(0, 82, 1);
	unk_0x4FB260623DD93924(0, 138, 1);
	unk_0x4FB260623DD93924(0, 136, 1);
	unk_0x4FB260623DD93924(0, 114, 1);
	unk_0x4FB260623DD93924(0, 107, 1);
	unk_0x4FB260623DD93924(0, 110, 1);
	unk_0x4FB260623DD93924(0, 89, 1);
	unk_0x4FB260623DD93924(0, 89, 1);
	unk_0x4FB260623DD93924(0, 87, 1);
	unk_0x4FB260623DD93924(0, 88, 1);
	unk_0x4FB260623DD93924(0, 113, 1);
	unk_0x4FB260623DD93924(0, 115, 1);
	unk_0x4FB260623DD93924(0, 116, 1);
	unk_0x4FB260623DD93924(0, 117, 1);
	unk_0x4FB260623DD93924(0, 118, 1);
	unk_0x4FB260623DD93924(0, 119, 1);
	unk_0x4FB260623DD93924(0, 131, 1);
	unk_0x4FB260623DD93924(0, 132, 1);
	unk_0x4FB260623DD93924(0, 123, 1);
	unk_0x4FB260623DD93924(0, 126, 1);
	unk_0x4FB260623DD93924(0, 129, 1);
	unk_0x4FB260623DD93924(0, 130, 1);
	unk_0x4FB260623DD93924(0, 133, 1);
	unk_0x4FB260623DD93924(0, 134, 1);
	unk_0x39FCF612EAC7971C();
	func_20(iParam0);
	if ((unk_0x53C562FD2B9E3AB0() - Global_29) > 500)
	{
		unk_0xA1AA40A93CA0F40D(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x53C562FD2B9E3AB0();
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0xE97272C977DEADD3(unk_0x90D5DFB054818BA7(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_20(int iParam0)//Position - 0xF8C
{
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0xE746585056D841A7(iParam0))
		{
			if (unk_0xB8B664A5307FB39B(iParam0))
			{
				unk_0x463DA544A329DE36(iParam0, 0);
			}
		}
	}
}

bool func_21(int iParam0, vector3 vParam1, vector3 vParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)//Position - 0xFB8
{
	return func_22(iParam0, vParam1, vParam2, func_64(), func_64(), bParam3, 5, 0, 0, 0, iParam4, sParam5, func_63(), func_63(), func_63(), func_63(), sParam6, 0, bParam8, sParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

int func_22(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)//Position - 0x1007
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vVar3 = { vParam1 + Vector(1f, 0f, 0f) };
	iParam0->f_17[0] = iParam7;
	iParam0->f_17[1] = iParam8;
	iParam0->f_17[2] = iParam9;
	iParam0->f_16 = iParam7;
	func_62(iParam0);
	func_61(iParam0);
	func_60();
	if (func_44(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_43(sParam12);
		func_43(sParam13);
		func_43(sParam14);
		func_43(sParam15);
		if (unk_0x9F7B586A14398C40())
		{
			bVar1 = false;
			if (unk_0xB8DE76287EDC4957(iParam10, 0))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam10, 0))
				{
					unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 3);
					if (!unk_0xC80D31E4B587871C(iParam0->f_13, 9))
					{
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 4);
					}
					if (unk_0xC80D31E4B587871C(iParam0->f_13, 23))
					{
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 23);
					}
					unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_41(iParam0, iParam21))
				{
					unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 3);
					if (!unk_0xC80D31E4B587871C(iParam0->f_13, 9))
					{
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 4);
					}
					unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_43(sParam16);
				func_43(sParam19);
				func_43("MORE_SEATS");
				if (bParam18 && unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
				{
					if (unk_0xA6DECE14FC9A8C51(iParam0->f_5))
					{
						unk_0xE30CF11C0EE14316(&(iParam0->f_5));
						func_43(sParam11);
					}
					if (unk_0xA6DECE14FC9A8C51(*iParam0))
					{
						unk_0xE30CF11C0EE14316(iParam0);
					}
					if ((!func_37(iParam0, 1) && !func_36(iParam0)) && !unk_0xC80D31E4B587871C(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_34(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[0]))
							{
								func_32(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 0);
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xC80D31E4B587871C(iParam0->f_13, 0))
					{
						func_43("LOSE_WANTED");
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 0);
						unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 1);
					}
					if (unk_0xC80D31E4B587871C(iParam0->f_13, 1))
					{
						if (!func_37(iParam0, 1))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[0]))
							{
								func_32(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 1);
						}
					}
					if (!unk_0xA6DECE14FC9A8C51(iParam0->f_5))
					{
						if (unk_0xA6DECE14FC9A8C51(*iParam0))
						{
							unk_0xE30CF11C0EE14316(iParam0);
						}
						iParam0->f_5 = func_31(vVar3, 0);
						if (!iParam23 == -1)
						{
							unk_0x4B4040A0EC7DBA81(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_30(iParam0->f_5, iParam0);
						}
					}
					else if (!func_29(vVar3, unk_0x67247AA13B7486A3(iParam0->f_5), 0,1f, 0))
					{
						unk_0x645FF8D8B599FD84(iParam0->f_5, vVar3);
						if (bParam27)
						{
							func_30(iParam0->f_5, iParam0);
						}
					}
					if (!func_37(iParam0, 2))
					{
						if (!unk_0xC80D31E4B587871C(iParam0->f_13, 2))
						{
							func_34(iParam0, sParam11, 0);
							unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (unk_0xC80D31E4B587871C(iParam0->f_13, 13))
						{
							bParam5 = false;
						}
					}
					bVar1 = false;
					bVar4 = false;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						bVar4 = true;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vParam1, vParam2, bParam5, bVar4, iVar5);
						if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vParam3, vParam4, fParam28, 0, bVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vParam1, vParam2, bParam5, bVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
									if (!unk_0xA8D0477084E86A92(iParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!unk_0xA8D0477084E86A92(iParam0->f_17[iVar2], iParam10, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x4759A34EB65CCA39(iParam0->f_17[iVar2], func_15()) || !func_27(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_24(iParam0))
							{
								func_43(sParam11);
								func_43(sParam16);
								func_43(sParam12);
								func_43(sParam13);
								func_43(sParam14);
								func_43(sParam15);
								func_43("LOSE_WANTED");
								func_43("MORE_SEATS");
								func_43(sParam19);
								func_14(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0x6ADD12BF4D6D2587(iParam10))
			{
				if ((bParam18 && unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) && (!unk_0xC80D31E4B587871C(iParam0->f_13, 9) && !unk_0xC80D31E4B587871C(iParam0->f_13, 22)))
				{
					func_43(sParam16);
					func_43(sParam19);
					if (unk_0xA6DECE14FC9A8C51(iParam0->f_5) || unk_0xA6DECE14FC9A8C51(*iParam0))
					{
						unk_0xE30CF11C0EE14316(&(iParam0->f_5));
						unk_0xE30CF11C0EE14316(iParam0);
						func_43(sParam11);
					}
					if ((!func_37(iParam0, 1) && !func_36(iParam0)) && !unk_0xC80D31E4B587871C(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_34(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[0]))
							{
								func_32(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 0);
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xC80D31E4B587871C(iParam0->f_13, 0))
					{
						func_43("LOSE_WANTED");
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 0);
						unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 1);
					}
					if (unk_0xC80D31E4B587871C(iParam0->f_13, 1))
					{
						if (!func_37(iParam0, 1))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[0]))
							{
								func_32(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 1);
						}
					}
					if (unk_0xB8DE76287EDC4957(iParam10, 0))
					{
						if (!unk_0xA6DECE14FC9A8C51(*iParam0))
						{
							if (unk_0xA6DECE14FC9A8C51(iParam0->f_5))
							{
								unk_0xE30CF11C0EE14316(&(iParam0->f_5));
								func_43(sParam11);
							}
							*iParam0 = func_23(iParam10, 0, 0);
							unk_0x3ED68ABD7299EAA3(*iParam0, 2);
							if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
							{
								func_30(*iParam0, iParam0);
							}
						}
						if (!func_37(iParam0, 2))
						{
							if (!unk_0xC80D31E4B587871C(iParam0->f_13, 3))
							{
								func_34(iParam0, sParam16, 0);
								unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 3);
								unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 4);
							}
							else if (unk_0xC80D31E4B587871C(iParam0->f_13, 9))
							{
								if (!unk_0x8C1C362CA8299475(sParam19))
								{
									if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
									{
										func_34(iParam0, sParam19, 0);
										unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 4);
									}
								}
								else if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
								{
									func_34(iParam0, sParam16, 0);
									unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 4);
								}
								if (!unk_0xC80D31E4B587871C(iParam0->f_13, 23))
								{
									if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[0]))
									{
										func_32(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xA6DECE14FC9A8C51(iParam0->f_5))
				{
					unk_0xE30CF11C0EE14316(&(iParam0->f_5));
					func_43(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_37(iParam0, 2))
						{
							if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
							{
								if (!unk_0xC80D31E4B587871C(iParam0->f_13, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = unk_0x63A6486593EC7EC3(0, iVar6);
									if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[iVar7]))
									{
										func_32(iParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_34(iParam0, "MORE_SEATS", 0);
									unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 13);
								}
							}
							else if (!unk_0xC80D31E4B587871C(iParam0->f_13, 3))
							{
								func_34(iParam0, sParam16, 0);
								unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 3);
								unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 4);
							}
							else if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
							{
								if (unk_0xC80D31E4B587871C(iParam0->f_13, 9))
								{
									func_34(iParam0, sParam19, 0);
									unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_37(iParam0, 2))
					{
						if (!unk_0xC80D31E4B587871C(iParam0->f_13, 3))
						{
							func_34(iParam0, sParam16, 0);
							unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 3);
							unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 4);
						}
						else if (unk_0xC80D31E4B587871C(iParam0->f_13, 9))
						{
							if (!unk_0x8C1C362CA8299475(sParam19))
							{
								if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
								{
									func_34(iParam0, sParam19, 0);
									unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 4);
								}
							}
							else if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
							{
								func_34(iParam0, sParam16, 0);
								unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xC80D31E4B587871C(iParam0->f_13, 0))
		{
			unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 0);
		}
		func_43(sParam11);
		func_43(sParam16);
		func_43(sParam19);
		func_43(sParam16);
		func_43("LOSE_WANTED");
		if (unk_0xA6DECE14FC9A8C51(iParam0->f_5))
		{
			unk_0xE30CF11C0EE14316(&(iParam0->f_5));
		}
		if (unk_0xA6DECE14FC9A8C51(*iParam0))
		{
			unk_0xE30CF11C0EE14316(iParam0);
		}
	}
	unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 11);
	unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 12);
	return 0;
}

int func_23(int iParam0, bool bParam1, bool bParam2)//Position - 0x1960
{
	return func_11(iParam0, !bParam1, bParam2);
}

int func_24(int iParam0)//Position - 0x1973
{
	if (unk_0xC80D31E4B587871C(iParam0->f_13, 12))
	{
		if (func_26(unk_0xFC1458A37D98B502()))
		{
			if (func_25(1, 0, 1) || unk_0xC80D31E4B587871C(iParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_25(1, 0, 1) || unk_0xC80D31E4B587871C(iParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_25(bool bParam0, bool bParam1, bool bParam2)//Position - 0x19D1
{
	int iVar0;
	
	if (unk_0x586321DCB7FEB6F8())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
		{
			return 0;
		}
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (bParam0)
		{
			if (unk_0x191BE1BC8F26F3C1(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
			{
				if (unk_0x317536BCEA8FA6B0(iVar0, -1, 0) != unk_0xFC1458A37D98B502())
				{
					return 0;
				}
			}
		}
		if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
		{
			if (unk_0x56BEE1F269FB3626(iVar0) < 0,95f || unk_0x56BEE1F269FB3626(iVar0) > 1,011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (!unk_0x217D75C7503660EC(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_26(int iParam0)//Position - 0x1AB6
{
	float fVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		fVar0 = unk_0x90D5DFB054818BA7(iParam0);
		if (fVar0 > -0,5f && fVar0 < 0,5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0, int iParam1)//Position - 0x1AED
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()) && iParam1)
		{
			if (func_28(unk_0xFC1458A37D98B502(), iParam0))
			{
				unk_0xB2442651179CF706(func_15(), 50f);
				return 1;
			}
		}
		else if (unk_0x4759A34EB65CCA39(iParam0, func_15()))
		{
			unk_0xB2442651179CF706(func_15(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0, int iParam1)//Position - 0x1B58
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x1ED974E122CB5C47(iParam0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(iParam0, 0);
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iParam1))
				{
					if (unk_0xAAA8D20859E2D36D(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_29(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x1BA0
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0xE97272C977DEADD3((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0xE97272C977DEADD3((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0xE97272C977DEADD3((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE97272C977DEADD3((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0xE97272C977DEADD3((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_30(int iParam0, int iParam1)//Position - 0x1C1B
{
	if (unk_0xA6DECE14FC9A8C51(iParam0))
	{
		if (unk_0xA6DECE14FC9A8C51(iParam1->f_6))
		{
			unk_0xAAAC88CC20771601(iParam1->f_6, false);
		}
		unk_0xF906FCF8A11CBA9A(0);
		unk_0x981B8A90686AD23E();
		iParam1->f_6 = iParam0;
		unk_0xAAAC88CC20771601(iParam0, true);
	}
}

int func_31(vector3 vParam0, bool bParam1)//Position - 0x1C56
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_12(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(iVar0, bParam1);
	return iVar0;
}

void func_32(int iParam0, char* sParam1, int iParam2)//Position - 0x1C82
{
	unk_0x74D45BB07BD51F8B(iParam0, sParam1, func_33(iParam2), 1);
}

int func_33(int iParam0)//Position - 0x1C99
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

void func_34(int iParam0, char* sParam1, bool bParam2)//Position - 0x1E8B
{
	if (!bParam2)
	{
		if (!unk_0x8C1C362CA8299475(sParam1))
		{
			if (!unk_0x74C475EB8E73D398(sParam1, ""))
			{
				func_35(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_10 = unk_0x53C562FD2B9E3AB0();
}

void func_35(char* sParam0, int iParam1, int iParam2)//Position - 0x1EC2
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 1);
}

int func_36(int iParam0)//Position - 0x1EDB
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_16))
	{
		if (unk_0x33B1D0D0C92D4F18(iParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_37(int iParam0, int iParam1)//Position - 0x1EFF
{
	if (iParam1 != 1 || unk_0x248C9865A96D3EA4())
	{
		if (unk_0x23F2F89E3D1CB7C4())
		{
			return 1;
		}
		if (func_40(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x248C9865A96D3EA4())
	{
		if (func_39() && !func_38())
		{
			return 1;
		}
	}
	return 0;
}

int func_38()//Position - 0x1F57
{
	if (Global_16767 == 1)
	{
		return 1;
	}
	return 0;
}

int func_39()//Position - 0x1F6E
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

int func_40(var uParam0)//Position - 0x1F90
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x53C562FD2B9E3AB0();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_41(var uParam0, int iParam1)//Position - 0x1FB3
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (func_42(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_42(int iParam0, var uParam1, int iParam2)//Position - 0x1FE4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x6ADD12BF4D6D2587(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x95EC8AE7E4F33F6E(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x0CAAAC6B57530706(iParam0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0x0CAAAC6B57530706(iParam0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_43(char* sParam0)//Position - 0x2078
{
	if (!unk_0x8C1C362CA8299475(sParam0))
	{
		unk_0x166954C5648772B6(sParam0);
	}
}

int func_44(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x2090
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	vector3 vVar19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar12[0] = uParam4;
	uVar12[1] = uParam5;
	uVar12[2] = uParam6;
	uVar13[0] = uParam13;
	uVar13[1] = uParam14;
	uVar13[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
		{
			if (!unk_0xC80D31E4B587871C(uParam0->f_13, 29) && !unk_0xC80D31E4B587871C(uParam0->f_13, 28))
			{
				if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
				{
					unk_0xD0A6028E561242DA(uParam0->f_17[iVar0], true, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0xC80D31E4B587871C(uParam0->f_13, 29) && unk_0xC80D31E4B587871C(uParam0->f_13, 28))
		{
			if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
			{
				unk_0xD0A6028E561242DA(uParam0->f_17[iVar0], false, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(uParam0->f_13, 26))
	{
		bVar14 = false;
		if (!unk_0x6ADD12BF4D6D2587(uParam0->f_21))
		{
			iVar16 = 64;
			iVar16 |= 65536;
			iVar16 |= 2048;
			iVar16 |= 1;
			iVar16 |= 2;
			iVar16 |= 4;
			iVar16 |= 32;
			iVar16 |= 16;
			iVar16 |= 8;
			iVar15 = unk_0x87889570F3396ABD(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 50f, 0, iVar16);
			if (unk_0xB8DE76287EDC4957(iVar15, 0))
			{
				uParam0->f_21 = iVar15;
			}
		}
		if (unk_0xB8DE76287EDC4957(uParam0->f_21, 0))
		{
			if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
				{
					if (!unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0) || !bParam17)
					{
						if (func_42(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
								{
									unk_0x5C57ECBE59C08573(uParam0->f_17[iVar0], 1f);
									if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_15()))
									{
										unk_0x88235B448509228B(uParam0->f_17[iVar0]);
									}
									if (unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], -1794415470) == 7 && !func_59(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x9F887157983E8EFC(uParam0->f_17[iVar0]) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0]))
										{
											unk_0x771A86309E0CA47B(uParam0->f_17[iVar0], true);
											unk_0x6F8C8278B7C06889(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0xF6A83791895D5AA1(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar14 = true;
						}
					}
					else
					{
						bVar14 = true;
					}
				}
				else
				{
					bVar14 = true;
				}
			}
			else
			{
				bVar14 = true;
			}
		}
		else
		{
			bVar14 = true;
		}
		if (bVar14)
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
				{
					if (!unk_0x0F299BBD0DC14B18(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0xB8E08BD5B184DF4E(uParam0->f_17[iVar0]);
					}
					if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_15()))
					{
						if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							unk_0x57FB41CABA25835C(uParam0->f_17[iVar0], func_15());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xC80D31E4B587871C(uParam0->f_13, 26))
	{
		if ((!func_56(uParam0) && unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502())) && !unk_0x6ADD12BF4D6D2587(iParam10))
		{
			iVar10 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (unk_0xB8DE76287EDC4957(iVar10, 0))
			{
				if (!unk_0xC80D31E4B587871C(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_37(uParam0, 2))
					{
						iVar17 = 0;
						iVar18 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = unk_0x63A6486593EC7EC3(0, iVar17);
						if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar18]))
						{
							func_32(uParam0->f_17[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_34(uParam0, "MORE_SEATS", 0);
						unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 13);
					}
				}
				bVar9 = true;
			}
		}
		else
		{
			bVar9 = false;
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 13);
			func_43("MORE_SEATS");
		}
		if (!unk_0x6ADD12BF4D6D2587(iParam10))
		{
			if ((!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[0]) || !unk_0x3AB6A1A9084FB0A4(uParam0->f_17[1])) || !unk_0x3AB6A1A9084FB0A4(uParam0->f_17[2]))
			{
				if (!unk_0xC80D31E4B587871C(uParam0->f_13, 31))
				{
					if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()) && !func_37(uParam0, 2))
					{
						iVar10 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
						if (func_55(iVar10, uParam0))
						{
							func_34(uParam0, "CMN_VEHSUIT", 0);
							unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
				{
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 31);
					func_43("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xB8DE76287EDC4957(iParam10, 0))
		{
			if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iParam10))
			{
				if (unk_0xE8C126B7ADBB9D63(0, 75))
				{
					unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0xC80D31E4B587871C(uParam0->f_13, 21))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x6ADD12BF4D6D2587(uParam0->f_17[iVar0]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
				{
					if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_15()))
					{
						unk_0xFF96DC2FA12B7785(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0xFF96DC2FA12B7785(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
					{
						iVar10 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
						if (unk_0xB8DE76287EDC4957(iVar10, 0))
						{
							if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_15()))
							{
								if (!func_56(uParam0) && unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
								{
									if (!func_54(uParam0->f_17[iVar0]))
									{
										unk_0x88235B448509228B(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !unk_0x191BE1BC8F26F3C1(iVar10, 0))
						{
							if (unk_0xAAA8D20859E2D36D(uParam0->f_17[iVar0], iVar10))
							{
								if (unk_0x0BA31FF7931F3DD3(iVar10) && !unk_0x5E0BEAAD15B888F3(iVar10))
								{
									vVar19 = { unk_0xB3328BA8976B416C(iVar10, 1) };
									if (vVar19.z < -1f)
									{
										unk_0x4F8A35D7CBC17327(uParam0->f_17[iVar0], iVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_15()))
					{
						if (unk_0x1ED974E122CB5C47(uParam0->f_17[iVar0]))
						{
							iVar10 = unk_0xDFD115BB10FE46A9(uParam0->f_17[iVar0], 0);
							if (!unk_0x191BE1BC8F26F3C1(iVar10, 0))
							{
								if (unk_0xB8DE76287EDC4957(iParam10, 0))
								{
									if (iVar10 != iParam10)
									{
										if (!unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iVar10))
										{
											if (unk_0x90D5DFB054818BA7(iVar10) > 5f)
											{
												unk_0x4F8A35D7CBC17327(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x4F8A35D7CBC17327(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
									{
										iVar20 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
									}
									if (unk_0xB8DE76287EDC4957(iVar20, 0))
									{
										if (iVar10 != iVar20)
										{
											if (unk_0x90D5DFB054818BA7(iVar10) > 5f)
											{
												unk_0x4F8A35D7CBC17327(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x4F8A35D7CBC17327(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_15()))
					{
						iVar21 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
						if (unk_0x6ADD12BF4D6D2587(iVar21))
						{
							if (func_42(iVar21, uParam0, 0))
							{
								if (func_53(iVar0, uParam0) || !unk_0xC80D31E4B587871C(uParam0->f_13, 27))
								{
									unk_0xF6A83791895D5AA1(uParam0->f_17[iVar0], iVar0);
									func_16(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_53(iVar0, uParam0))
							{
								if (unk_0x82FF3DFBC3965CC0(iVar21) == joaat("sentinel2"))
								{
									unk_0xF6A83791895D5AA1(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0xF6A83791895D5AA1(uParam0->f_17[iVar0], 2);
								}
								func_52(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_15()) && !func_51(uParam0->f_17[iVar0], iParam10)) && !func_50(uParam0->f_17[iVar0], iParam10))
					{
						if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_15()))
							{
								if (((!unk_0x9F887157983E8EFC(uParam0->f_17[iVar0]) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0])) && !unk_0xE4A3B62790C25748(uParam0->f_17[iVar0])) && !unk_0x0F299BBD0DC14B18(uParam0->f_17[iVar0]))
								{
									iVar11 = unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7)
									{
										unk_0xB8E08BD5B184DF4E(uParam0->f_17[iVar0]);
									}
									unk_0x57FB41CABA25835C(uParam0->f_17[iVar0], func_15());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x53C562FD2B9E3AB0();
								uParam0->f_1[iVar0] = func_23(uParam0->f_17[iVar0], 0, 0);
								unk_0x3ED68ABD7299EAA3(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_30(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
					{
						if (((func_27(uParam0->f_17[iVar0], 1) || func_51(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0xB8DE76287EDC4957(iParam10, 0) && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam10, 0)))
						{
							if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
							{
								unk_0xE30CF11C0EE14316(&(uParam0->f_1[iVar0]));
								func_43(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_30(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0xB8DE76287EDC4957(iParam10, 0))
					{
						if (!unk_0xAAA8D20859E2D36D(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x21B6FFFD04C9FF3A(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0xC80D31E4B587871C(uParam0->f_13, 11)) && !((bParam17 && unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam10, 0)))
							{
								if (unk_0x1ED974E122CB5C47(uParam0->f_17[iVar0]))
								{
									if (!unk_0xA8D0477084E86A92(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_27(uParam0->f_17[iVar0], 1))
										{
											if (func_26(uParam0->f_17[iVar0]))
											{
												iVar11 = unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], 451360105);
												if (iVar11 == 7)
												{
													unk_0x16416C5B54FDBCBB(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_15()))
									{
										if ((((!unk_0xE4A3B62790C25748(uParam0->f_17[iVar0]) && !unk_0x9F887157983E8EFC(uParam0->f_17[iVar0])) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0])) && !unk_0x0F299BBD0DC14B18(uParam0->f_17[iVar0])) && !unk_0x6B4C37F2EEC636CC(iParam10))
										{
											unk_0x88235B448509228B(uParam0->f_17[iVar0]);
										}
									}
									iVar11 = unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7 && !func_59(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0xE4A3B62790C25748(uParam0->f_17[iVar0]) && !unk_0xE4A3B62790C25748(unk_0xFC1458A37D98B502())) && !func_49(uParam0->f_17[iVar0], 2f)) && !unk_0x9F887157983E8EFC(uParam0->f_17[iVar0])) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0])) && !unk_0x6B4C37F2EEC636CC(iParam10))
										{
											unk_0x771A86309E0CA47B(uParam0->f_17[iVar0], true);
											if (unk_0xC80D31E4B587871C(uParam0->f_13, 10))
											{
												unk_0x5C57ECBE59C08573(uParam0->f_17[iVar0], 1f);
											}
											unk_0x6F8C8278B7C06889(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0x07224EEE13A1B6AE(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_23(uParam0->f_17[iVar0], 0, 0);
										unk_0x3ED68ABD7299EAA3(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_15()))
							{
								if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!unk_0x9F887157983E8EFC(uParam0->f_17[iVar0]) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0]))
									{
										iVar11 = unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], -1794415470);
										if (iVar11 == 7)
										{
											unk_0xB8E08BD5B184DF4E(uParam0->f_17[iVar0]);
										}
										unk_0x771A86309E0CA47B(uParam0->f_17[iVar0], false);
										unk_0x57FB41CABA25835C(uParam0->f_17[iVar0], func_15());
									}
								}
							}
						}
						else if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iParam10))
						{
							if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_15()))
							{
								if (!unk_0xC80D31E4B587871C(uParam0->f_13, 21))
								{
									unk_0x57FB41CABA25835C(uParam0->f_17[iVar0], func_15());
								}
							}
							else if (unk_0xC80D31E4B587871C(uParam0->f_13, 21))
							{
								unk_0x88235B448509228B(uParam0->f_17[iVar0]);
								unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_15()) && !unk_0x6B4C37F2EEC636CC(iParam10))
						{
							unk_0x88235B448509228B(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
				{
					unk_0xE30CF11C0EE14316(&(uParam0->f_1[iVar0]));
					func_43(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_37(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
						{
							if (func_54(uParam0->f_17[iVar0]) || unk_0x21B6FFFD04C9FF3A(uParam0->f_17[iVar0], unk_0xFC1458A37D98B502(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
					{
						if (!unk_0x21B6FFFD04C9FF3A(uParam0->f_17[iVar0], unk_0xFC1458A37D98B502(), (uParam0->f_8 * 0,85f), (uParam0->f_8 * 0,85f), uParam0->f_8, 0, 1, 0) && !func_54(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x53C562FD2B9E3AB0();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xC80D31E4B587871C(uParam0->f_13, 5))
							{
								func_34(uParam0, sParam7, 0);
								unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_48(iVar0, uParam0))
									{
										if (!unk_0x8C1C362CA8299475(uVar13[iVar0]))
										{
											if (!unk_0x74C475EB8E73D398(uVar13[iVar0], ""))
											{
												func_46(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_45(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_48(iVar0, uParam0))
										{
											func_34(uParam0, uVar12[iVar0], 0);
											func_45(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 10);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
				{
					unk_0xE30CF11C0EE14316(&(uParam0->f_1[iVar0]));
					func_43(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_43("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_45(int iParam0, var uParam1)//Position - 0x3100
{
	switch (iParam0)
	{
		case 0:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 16);
			break;
	}
}

void func_46(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x3148
{
	if (!bParam3)
	{
		if (!unk_0x8C1C362CA8299475(sParam1))
		{
			if (!unk_0x74C475EB8E73D398(sParam1, ""))
			{
				func_47(sParam1, sParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x53C562FD2B9E3AB0();
}

void func_47(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x3181
{
	iParam3 = iParam3;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0xA6D2B267C377D7B2(sParam1);
	unk_0x4D0B431E65A53BFC(iParam2, 1);
}

int func_48(int iParam0, var uParam1)//Position - 0x31A0
{
	switch (iParam0)
	{
		case 0:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 14);
		
		case 1:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 15);
		
		case 2:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_49(int iParam0, float fParam1)//Position - 0x31E9
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(iParam0, 0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(iParam0, 0);
		if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
		{
			if (unk_0x90D5DFB054818BA7(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_50(int iParam0, int iParam1)//Position - 0x3220
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (!unk_0x4759A34EB65CCA39(iParam0, func_15()))
		{
			iVar0 = unk_0x0191A52225EFA665(iParam0);
			if (unk_0xB8DE76287EDC4957(iParam1, 0))
			{
				if (unk_0x21B6FFFD04C9FF3A(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_51(int iParam0, int iParam1)//Position - 0x3287
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(iParam1))
		{
			if (unk_0xB8DE76287EDC4957(iParam1, 0))
			{
				if (unk_0xAAA8D20859E2D36D(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_52(int iParam0, var uParam1)//Position - 0x32BC
{
	switch (iParam0)
	{
		case 0:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 19);
			break;
	}
}

int func_53(int iParam0, var uParam1)//Position - 0x3304
{
	switch (iParam0)
	{
		case 0:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 17);
		
		case 1:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 18);
		
		case 2:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_54(int iParam0)//Position - 0x334D
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		iVar0 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
		if (unk_0xB8DE76287EDC4957(iVar0, 0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iParam0))
			{
				iVar1 = unk_0xC6757F745366DB47(iParam0);
				if (unk_0xB8DE76287EDC4957(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x21B6FFFD04C9FF3A(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_55(int iParam0, var uParam1)//Position - 0x33DA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (unk_0x82FF3DFBC3965CC0(iParam0) == joaat("bus") || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x3AB6A1A9084FB0A4(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0x317536BCEA8FA6B0(iParam0, 0, 0);
			if (!unk_0x3AB6A1A9084FB0A4(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0x317536BCEA8FA6B0(iParam0, 1, 0);
			if (!unk_0x3AB6A1A9084FB0A4(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0x317536BCEA8FA6B0(iParam0, 2, 0);
			if (!unk_0x3AB6A1A9084FB0A4(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_56(var uParam0)//Position - 0x353A
{
	int iVar0;
	
	if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (func_42(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_57(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x3569
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam1))
	{
		if (unk_0x1ED974E122CB5C47(iParam1))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(iParam1, 0);
			if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
			{
				if (unk_0xB8DE76287EDC4957(iVar0, 0))
				{
					if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iVar0))
					{
						if (func_56(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (func_42(iVar0, uParam0, 0))
					{
						if (unk_0xB8DE76287EDC4957(iVar0, 0))
						{
							if (func_58(iVar0))
							{
								return 1;
							}
						}
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
	}
	return 0;
}

int func_58(int iParam0)//Position - 0x3647
{
	float fVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		fVar0 = unk_0x90D5DFB054818BA7(iParam0);
		if (fVar0 > -0,5f && fVar0 < 0,5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0, int iParam1)//Position - 0x367F
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam1, 0))
		{
			iVar0 = unk_0xC6757F745366DB47(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_60()//Position - 0x36AF
{
	int iVar0;
	int iVar1;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		iVar0 = unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502());
		if (unk_0xB8DE76287EDC4957(iVar0, 0))
		{
			iVar1 = unk_0x317536BCEA8FA6B0(iVar0, 0, 0);
			if (!unk_0x3AB6A1A9084FB0A4(iVar1))
			{
				if (iVar1 != unk_0xFC1458A37D98B502())
				{
					if (unk_0x9761C10D57B68069(iVar1))
					{
						if (!unk_0xABF985A1AF8C953F(iVar1, unk_0xFC1458A37D98B502()))
						{
							unk_0x60C06BFD037BB7CF(iVar1, unk_0xFC1458A37D98B502(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_61(var uParam0)//Position - 0x371C
{
	int iVar0;
	
	if (!unk_0xC80D31E4B587871C(uParam0->f_13, 25))
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x6ADD12BF4D6D2587(uParam0->f_17[iVar0]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
				{
					unk_0xAE01EF4BC84AFE7C(uParam0->f_17[iVar0], 32, false);
					unk_0xAE01EF4BC84AFE7C(uParam0->f_17[iVar0], 305, true);
					unk_0xAE01EF4BC84AFE7C(uParam0->f_17[iVar0], 268, true);
					unk_0x07224EEE13A1B6AE(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 25);
	}
}

void func_62(var uParam0)//Position - 0x37BF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x6ADD12BF4D6D2587(uParam0->f_17[iVar0]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
			{
				if (unk_0x1ED974E122CB5C47(uParam0->f_17[iVar0]))
				{
					unk_0x4ACB9D202CFF8727(uParam0->f_17[iVar0], 0);
					unk_0xEB2D96E7D3F4906C(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
			{
				unk_0x4ACB9D202CFF8727(unk_0xFC1458A37D98B502(), 0);
				unk_0xEB2D96E7D3F4906C(unk_0xFC1458A37D98B502(), 0);
			}
		}
	}
}

var func_63()//Position - 0x3855
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_64()//Position - 0x385F
{
	vector3 vVar0;
	
	return vVar0;
}

void func_65()//Position - 0x386B
{
	int iVar0;
	
	if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_86, 0))
	{
		if (unk_0xA6DECE14FC9A8C51(iLocal_90))
		{
			unk_0xE30CF11C0EE14316(&iLocal_90);
		}
		if (iLocal_36 <= 2)
		{
			iLocal_74 = (unk_0xFAECC21412DD9C53() * ((60 * iLocal_76) + iLocal_77));
			iLocal_74 = (iLocal_74 + unk_0x53C562FD2B9E3AB0());
			iLocal_78 = (iLocal_74 - unk_0xFAECC21412DD9C53() * 30);
		}
		else if (iLocal_36 > 6)
		{
			iLocal_74 = (unk_0xFAECC21412DD9C53() * ((60 * iLocal_76) + iLocal_77));
			iLocal_74 = (iLocal_74 + unk_0x53C562FD2B9E3AB0());
			iLocal_78 = (iLocal_74 - unk_0xFAECC21412DD9C53() * 30);
		}
		else if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			iLocal_87 = unk_0xEA60F3B426BB095B(iLocal_83, vLocal_66, fLocal_68, true, true, false);
			iLocal_85[0] = unk_0x00D1A9572426E8DD(iLocal_87, 6, iLocal_81, -1, 1, true);
			iLocal_85[1] = unk_0x00D1A9572426E8DD(iLocal_87, 6, iLocal_81, 0, 1, true);
			unk_0x4DE114E3C7F8B7C2("rghCop", &iLocal_106);
			unk_0xF96119FCCD4D1889(4, iLocal_106, 1862763509);
			unk_0xAE6EBBBBD8B9FB30(iLocal_85[0], 39, true);
			unk_0xAE6EBBBBD8B9FB30(iLocal_85[1], 39, true);
			iVar0 = 0;
			while (iVar0 < iLocal_85)
			{
				unk_0x9E058151726E58DE(iLocal_85[iVar0], joaat("weapon_pistol"), -1, false, true);
				unk_0x253DB96AF5D6551B(iLocal_85[iVar0], 100f);
				unk_0xCE93FCB8A8D8DF0B(iLocal_85[iVar0], iLocal_106);
				iVar0++;
			}
		}
		iLocal_38 = 2;
	}
}

void func_66()//Position - 0x399D
{
	int iVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(iLocal_86, 0))
	{
		if (func_100() || unk_0x3AB6A1A9084FB0A4(iLocal_84[0]))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_84)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_84[iVar0]))
				{
					if (!unk_0xA6DECE14FC9A8C51(uLocal_89[iVar0]))
					{
						uLocal_89[iVar0] = func_10(iLocal_84[iVar0], 1, 145);
						unk_0xAE6EBBBBD8B9FB30(iLocal_84[iVar0], 1, false);
						unk_0x6931076730A4AC5D(&iLocal_108);
						unk_0x16416C5B54FDBCBB(0, 0, 0);
						unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
						unk_0x1B16DD5C115FE009(iLocal_108);
						unk_0xAB30B1CF01A198C1(iLocal_84[iVar0], iLocal_108);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_108);
					}
				}
				else if (unk_0xA6DECE14FC9A8C51(uLocal_89[iVar0]))
				{
					unk_0xE30CF11C0EE14316(&(uLocal_89[iVar0]));
				}
				iVar0++;
			}
		}
		else if (!iLocal_73)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_84[0]))
			{
				if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_84[0], 50f, 50f, 50f, 0, 1, 0))
				{
					unk_0xD2C269DBF147B406(iLocal_84[0], iLocal_86, unk_0xFC1458A37D98B502(), 8, 25f, 786469, -1f, -1f, 1);
					iLocal_73 = 1;
				}
			}
		}
		if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_86, 0))
		{
			if (unk_0xA6DECE14FC9A8C51(iLocal_90))
			{
				unk_0xE30CF11C0EE14316(&iLocal_90);
			}
			func_99(&uLocal_94, 0, 0);
			iLocal_38 = 2;
		}
		else if (unk_0x8EE3A848975DDF21(iLocal_86, -1, 0) || unk_0x3AB6A1A9084FB0A4(iLocal_84[0]))
		{
			func_99(&uLocal_94, 0, 0);
		}
		else
		{
			func_67();
		}
	}
}

void func_67()//Position - 0x3B0B
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_84[0]) && !unk_0x191BE1BC8F26F3C1(iLocal_86, 0))
	{
		if (unk_0xA8D0477084E86A92(iLocal_84[0], iLocal_86, 0))
		{
			func_68(&uLocal_94, iLocal_86, 0, 0, 1, 1, 1);
		}
	}
}

void func_68(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x3B49
{
	func_69(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_69(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x3B66
{
	func_70(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_70(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x3B84
{
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		func_99(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_71(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_71(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x3BBC
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x38DF88792E2574E5())
	{
		if (unk_0x53C562FD2B9E3AB0() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (unk_0x8C1C362CA8299475(iVar0))
	{
		if (!unk_0x3A711520F83BAE98())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_98(iVar0))
	{
		func_97();
	}
	if (func_96(iParam1) && unk_0xDE3C98B57A41E603(iParam1))
	{
		iVar1 = 0;
		if (unk_0x52C56492660097C7(iParam1))
		{
			unk_0x2BBAE63213C46A53(unk_0x07F64790D10D1DB5(iParam1));
			unk_0xCD0F114AD6BF60EF(unk_0x07F64790D10D1DB5(iParam1), 1);
			if (unk_0xE5DC4C97F224C40D(unk_0x07F64790D10D1DB5(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8A3FF8E81B40BB75(iParam1))
		{
			unk_0xCCC628BF28A8DFAA(unk_0x79A6CD762DCCABE4(iParam1));
			if (unk_0xCBEBCF7C9A28DE5C(unk_0x79A6CD762DCCABE4(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x0423B20CB20B7901(iParam1))
		{
			unk_0x18D4723323F29A6F(unk_0xE5D69D5333979D8B(iParam1));
			if (unk_0x28F138D7B5EE3C9A(unk_0xE5D69D5333979D8B(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x38DF88792E2574E5())
		{
			if (func_91(uParam0, bParam5, bParam7, 0))
			{
				func_87(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_76(iVar0))
				{
					if ((unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0)) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if ((iVar1 && !unk_0xF491DD47B88AA84E()) && uParam6)
						{
							if (!func_98(iVar0))
							{
								func_75(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
								{
									func_74(1);
								}
							}
						}
					}
				}
			}
			else if (func_76(iVar0))
			{
				if (unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0))
				{
					if (((unk_0x841ED61760A7D07B(iParam1) && iVar1) && !unk_0xF491DD47B88AA84E()) && uParam6)
					{
						if (!func_98(iVar0))
						{
							func_75(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
							{
								func_74(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x8C1C362CA8299475(sParam3))
			{
				if (func_98(sParam3))
				{
					unk_0x3E80C2F7BC665259(1);
				}
			}
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
			{
				if (unk_0x42CEF0F4671324EA(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(3) == 3 || unk_0x8E8C94609BA4BEA9(3) == 4)
					{
						func_99(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(6) == 3 || unk_0x8E8C94609BA4BEA9(6) == 4)
					{
						func_99(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(4) == 3 || unk_0x8E8C94609BA4BEA9(4) == 4)
					{
						func_99(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(5) == 3 || unk_0x8E8C94609BA4BEA9(5) == 4)
					{
						func_99(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(2) == 3 || unk_0x8E8C94609BA4BEA9(2) == 4)
					{
						func_99(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x60584F41FBCE28CD() == 3 || unk_0x60584F41FBCE28CD() == 4)
				{
					func_99(uParam0, iVar0, 1);
				}
			}
			if (!func_91(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_73(uParam0))
				{
					func_72(uParam0);
				}
			}
		}
	}
	else
	{
		func_99(uParam0, iVar0, 0);
	}
}

void func_72(var uParam0)//Position - 0x3F29
{
	if (func_96(unk_0xFC1458A37D98B502()))
	{
		unk_0xCB3D88C918AA637C(unk_0xFC1458A37D98B502());
	}
	if (unk_0x38DF88792E2574E5())
	{
		unk_0xBC3B7443617858A0(true);
		unk_0x2C5E25A27FEE0F8A(0);
		unk_0xE02E32C69260FBB7("HINT_CAM_SCENE");
		unk_0x704F5ADD5B29DB63("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xA91E83FF512776B6("FocusOut", 0, 0);
			unk_0x4AFBCBFDE748D4E0(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_73(var uParam0)//Position - 0x3F92
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x53C562FD2B9E3AB0()
		{
			return 1;
		}
	}
	return 0;
}

int func_74(bool bParam0)//Position - 0x3FBD
{
	switch (Global_35861)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_104555.f_10019.f_100++;
			}
			return Global_104555.f_10019.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_104555.f_10019.f_101++;
			}
			return Global_104555.f_10019.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_104555.f_10019.f_102++;
			}
			return Global_104555.f_10019.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_75(char* sParam0, int iParam1)//Position - 0x4068
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

int func_76(char* sParam0)//Position - 0x407F
{
	if (!func_77(1, 1, 0))
	{
		if ((!unk_0xAB019B170BF1309C(sParam0) && func_98(sParam0)) || func_98("CMN_HINT"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		return 0;
	}
	switch (Global_35861)
	{
		case 0:
		case 3:
			if (func_74(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_74(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_74(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_77(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4118
{
	if (bParam0)
	{
		if (!unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x1E06D00B67177A18())
	{
		return 0;
	}
	if (func_86(0))
	{
		return 0;
	}
	if (func_85())
	{
		return 0;
	}
	if (unk_0x02BBA5FDE77816B9())
	{
		return 0;
	}
	if (Global_68215)
	{
		return 0;
	}
	if (unk_0x8F38E94BBF3404CD(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53084)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
		{
			if (unk_0x42CEF0F4671324EA(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(3) == 3 || unk_0x8E8C94609BA4BEA9(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(6) == 3 || unk_0x8E8C94609BA4BEA9(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(4) == 3 || unk_0x8E8C94609BA4BEA9(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(5) == 3 || unk_0x8E8C94609BA4BEA9(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(2) == 3 || unk_0x8E8C94609BA4BEA9(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x60584F41FBCE28CD() == 3 || unk_0x60584F41FBCE28CD() == 4)
			{
				return 0;
			}
			if (unk_0x213F4DB5EC433017())
			{
				return 0;
			}
		}
	}
	if ((func_84() || func_83(Global_4456448.f_143970)) || func_82())
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if ((unk_0x841136DE070DD9F6(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), func_81(unk_0xFC1458A37D98B502(), 0)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 562680400 && func_81(unk_0xFC1458A37D98B502(), 0) != -1)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 1181327175 && func_81(unk_0xFC1458A37D98B502(), 0) != -1))
			{
				return 0;
			}
		}
	}
	if (func_78(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)//Position - 0x4343
{
	if (iParam0 != func_80())
	{
		if (func_79(iParam0, 1, 1))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x9EB17624F44A8DA4()) && func_79(iParam0, 1, 0))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

int func_79(int iParam0, bool bParam1, bool bParam2)//Position - 0x43A9
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

int func_80()//Position - 0x43F3
{
	return -1;
}

int func_81(int iParam0, int iParam1)//Position - 0x43FC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x88DDBE9908752BF0(iParam0, iParam1))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(iParam0, iParam1);
			if (unk_0x6ADD12BF4D6D2587(iVar0))
			{
				iVar1 = unk_0xF82225DEA5272C6B(unk_0x82FF3DFBC3965CC0(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x8EE3A848975DDF21(iVar0, iVar3, 0))
					{
						if (unk_0x317536BCEA8FA6B0(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_82()//Position - 0x4481
{
	return Global_2447174.f_16;
}

bool func_83(int iParam0)//Position - 0x448F
{
	return iParam0 == 51;
}

var func_84()//Position - 0x449C
{
	return Global_2447174.f_15;
}

bool func_85()//Position - 0x44AA
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

int func_86(int iParam0)//Position - 0x44BF
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

void func_87(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x4519
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1316747 == 1)
	{
		return;
	}
	if (unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		func_99(uParam0, 0, 0);
	}
	if (func_90(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x52C56492660097C7(iParam1))
		{
			iVar0 = unk_0x07F64790D10D1DB5(iParam1);
			if (!unk_0x88DDBE9908752BF0(iVar0, 0))
			{
				if (unk_0x1417A5CC924DE120(iVar0))
				{
					if (!func_88())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x6668BA66B78B4E7C(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xBC3B7443617858A0(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0xCDB72D70019A533E(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iParam1, -1, iVar3, iVar4);
	unk_0xA91E83FF512776B6("FocusIn", 0, 0);
	unk_0xE859EF37EA7362D3("HINT_CAM_SCENE");
	unk_0x4AFBCBFDE748D4E0(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x53C562FD2B9E3AB0();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_88()//Position - 0x4629
{
	return func_89(unk_0x9EB17624F44A8DA4());
}

int func_89(int iParam0)//Position - 0x4639
{
	if (unk_0x82FF3DFBC3965CC0(unk_0x25D049AAC4603E65(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_90(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x4658
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_91(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x469F
{
	if (uParam0->f_1)
	{
		if (unk_0x53C562FD2B9E3AB0() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
				{
					if (func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_94(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_94(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_73(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x53C562FD2B9E3AB0() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
					{
						if (!func_95(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_94(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_94(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
				{
					if (!func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_94(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_94(bParam1, bParam2, bParam3) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) || unk_0x7760DB8F51041367(unk_0xFC1458A37D98B502(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x53C562FD2B9E3AB0() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
					{
						if (func_93(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_92(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) || func_92(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) || unk_0x7760DB8F51041367(unk_0xFC1458A37D98B502(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_93(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_73(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_77(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_97();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_92(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4A0B
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!unk_0x19A6176969EAC49E(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x4FB260623DD93924(0, 140, 1);
			unk_0x4FB260623DD93924(0, 80, 1);
			if (unk_0x3D96C1C362D3E31D(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_93(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4A5D
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4FB260623DD93924(0, 80, 1);
		if (unk_0x06A32CFD60F8BCE6())
		{
			if (unk_0x3D96C1C362D3E31D(0, 80))
			{
				unk_0xBC3B7443617858A0(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_94(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4AA6
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!unk_0x19A6176969EAC49E(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x4FB260623DD93924(0, 140, 1);
			unk_0x4FB260623DD93924(0, 80, 1);
			if (unk_0x5A632962B08A1872(0, 80) && unk_0x53C562FD2B9E3AB0() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_95(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4B05
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4FB260623DD93924(0, 80, 1);
		if (unk_0x06A32CFD60F8BCE6())
		{
			if (unk_0x5A632962B08A1872(0, 80) && unk_0x53C562FD2B9E3AB0() > Global_116)
			{
				unk_0xBC3B7443617858A0(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_96(int iParam0)//Position - 0x4B5B
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0x8A3FF8E81B40BB75(iParam0))
		{
			if (unk_0xB8DE76287EDC4957(unk_0x79A6CD762DCCABE4(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x52C56492660097C7(iParam0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0x07F64790D10D1DB5(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x0423B20CB20B7901(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_97()//Position - 0x4BB6
{
	unk_0x872F1C1F8587CCC7(&Global_2324, 4);
}

int func_98(char* sParam0)//Position - 0x4BC6
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_99(var uParam0, int iParam1, int iParam2)//Position - 0x4BD9
{
	char* sVar0;
	
	if (unk_0x3A711520F83BAE98())
	{
		if (unk_0xC80D31E4B587871C(Global_2512808.f_4556, 26))
		{
			return;
		}
	}
	if (unk_0x38DF88792E2574E5())
	{
		unk_0x2C5E25A27FEE0F8A(iParam2);
		unk_0x704F5ADD5B29DB63("FocusIn");
		unk_0xE02E32C69260FBB7("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xA91E83FF512776B6("FocusOut", 0, 0);
			unk_0x4AFBCBFDE748D4E0(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0xBC3B7443617858A0(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x8C1C362CA8299475(sVar0))
	{
		if (!unk_0x3A711520F83BAE98())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x8C1C362CA8299475(uParam0->f_3))
	{
		if (func_98(uParam0->f_3))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
	if (!unk_0x8C1C362CA8299475(sVar0))
	{
		if (func_98(sVar0))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
}

int func_100()//Position - 0x4CB6
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_86))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_86, 0))
		{
			if ((((((unk_0xDE523AF6F7B269AB(iLocal_86) < 300 || unk_0xA7B0253B80B52B2B(iLocal_86) < 200f) || unk_0x6B4C37F2EEC636CC(iLocal_86)) || (unk_0x36CA14E4AEA7AA81(iLocal_86, 0, 0) && unk_0x36CA14E4AEA7AA81(iLocal_86, 1, 0))) || (unk_0x36CA14E4AEA7AA81(iLocal_86, 4, 0) && unk_0x36CA14E4AEA7AA81(iLocal_86, 5, 0))) || (unk_0x36CA14E4AEA7AA81(iLocal_86, 0, 0) && unk_0x36CA14E4AEA7AA81(iLocal_86, 4, 0))) || (unk_0x36CA14E4AEA7AA81(iLocal_86, 1, 0) && unk_0x36CA14E4AEA7AA81(iLocal_86, 5, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_101()//Position - 0x4D6E
{
	int iVar0;
	int iVar1;
	
	iLocal_86 = func_103(0);
	if (!unk_0xB8DE76287EDC4957(iLocal_86, 0))
	{
		iLocal_86 = unk_0xEA60F3B426BB095B(iLocal_82, vLocal_64, fLocal_67, true, true, false);
		iVar0 = 1;
		while (iVar0 <= 8)
		{
			unk_0x7B3133EBCD34B431(iLocal_86, iVar0, true);
			iVar0++;
		}
		if (iLocal_79 != -1)
		{
			unk_0x7B3133EBCD34B431(iLocal_86, iLocal_79, false);
		}
	}
	unk_0x02FB01DA09BF7F02(iLocal_86, 1);
	iLocal_90 = func_102(iLocal_86, 0, 0);
	if (iLocal_36 != 5 && iLocal_36 != 6)
	{
		if (iLocal_36 > 6)
		{
			unk_0xD38F266C132F2897(iLocal_86, false, false, false, false, true, false, 0, false);
			unk_0x7CC4363AEEF7EF34(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", iLocal_86, 0, 0, 0);
		}
		func_35(sLocal_91, 7500, 1);
	}
	else
	{
		iLocal_84[0] = unk_0x00D1A9572426E8DD(iLocal_86, 26, iLocal_80, -1, 1, true);
		iLocal_84[1] = unk_0x00D1A9572426E8DD(iLocal_86, 26, iLocal_80, 0, 1, true);
		unk_0x4DE114E3C7F8B7C2("rghCriminal", &iLocal_107);
		unk_0xF96119FCCD4D1889(5, iLocal_107, 1862763509);
		iVar1 = 0;
		while (iVar1 < iLocal_84)
		{
			unk_0x771A86309E0CA47B(iLocal_84[iVar1], true);
			unk_0x9E058151726E58DE(iLocal_84[iVar1], joaat("weapon_sawnoffshotgun"), -1, false, true);
			unk_0xCE93FCB8A8D8DF0B(iLocal_84[iVar1], iLocal_107);
			iVar1++;
		}
		unk_0x96247F0EC873C446(iLocal_84[0], iLocal_86, 25f, 786599);
		func_35("PMDL_REC", 7500, 1);
	}
	if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
	{
		iLocal_88 = unk_0xC733212BF9066BDF();
	}
	iLocal_38 = 1;
}

int func_102(int iParam0, bool bParam1, bool bParam2)//Position - 0x4EC1
{
	return func_11(iParam0, !bParam1, bParam2);
}

int func_103(int iParam0)//Position - 0x4ED4
{
	if (unk_0xB8DE76287EDC4957(Global_103265.f_222[iParam0], 0))
	{
		unk_0xDD29FF4BAB8AFF9C(Global_103265.f_222[iParam0], true, 1);
		return Global_103265.f_222[iParam0];
	}
	return 0;
}

int func_104()//Position - 0x4F0C
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_86))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_86, 0))
		{
			if (!unk_0x21B6FFFD04C9FF3A(iLocal_86, unk_0xFC1458A37D98B502(), 300f, 300f, 300f, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0x3AB6A1A9084FB0A4(iLocal_84[0]))
	{
		if (unk_0xA6DECE14FC9A8C51(uLocal_89[0]))
		{
			unk_0xE30CF11C0EE14316(&(uLocal_89[0]));
		}
	}
	return 0;
}

void func_105()//Position - 0x4F74
{
	unk_0x6FF834D85E2DD4C6(iLocal_82);
	unk_0xBCBC53983EC3B1BA("PMDL", 0);
	if (iLocal_36 >= 3 && iLocal_36 <= 4)
	{
		unk_0x6FF834D85E2DD4C6(iLocal_81);
		unk_0x6FF834D85E2DD4C6(iLocal_83);
	}
	else if (iLocal_36 == 5 || iLocal_36 == 6)
	{
		unk_0x6FF834D85E2DD4C6(iLocal_80);
	}
	unk_0x2E4932E63763FE26(joaat("benson"), true);
	unk_0x2E4932E63763FE26(joaat("pony2"), true);
	if (unk_0x9A0B2ED5055D3F0B(iLocal_82) && unk_0x9F0887BCBFCF3C2F(0))
	{
		if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			if (unk_0x9A0B2ED5055D3F0B(iLocal_81) && unk_0x9A0B2ED5055D3F0B(iLocal_83))
			{
				bLocal_69 = true;
			}
		}
		else if (iLocal_36 == 5 || iLocal_36 == 6)
		{
			if (unk_0x9A0B2ED5055D3F0B(iLocal_80))
			{
				bLocal_69 = true;
			}
		}
		else if (iLocal_36 > 6)
		{
			if (unk_0x1CF95440F1970B4F("Deliveries", false, -1))
			{
				bLocal_69 = true;
			}
		}
		else
		{
			bLocal_69 = true;
		}
	}
}

void func_106()//Position - 0x504E
{
	float fVar0;
	
	vLocal_64 = { func_108(func_110(), iLocal_36) };
	fLocal_67 = func_107(func_110(), iLocal_36);
	if (iLocal_36 > 6)
	{
		sLocal_91 = "PMDL_TRUCK";
		sLocal_92 = "PMDL_BTIM";
		sLocal_93 = "PMDL_BCKT";
		iLocal_82 = joaat("benson");
		iLocal_79 = 2;
	}
	if (func_110() == 10)
	{
		vLocal_65 = { -1161,213f, -1567,068f, 3,4234f };
		iLocal_82 = joaat("pony2");
		if (iLocal_36 == 0)
		{
			iLocal_76 = 2;
			iLocal_77 = 15;
			sLocal_92 = "PMDL_TIM";
		}
		else if (iLocal_36 == 1)
		{
			iLocal_76 = 1;
			iLocal_77 = 30;
			sLocal_92 = "PMDL_TIM";
		}
		else if (iLocal_36 == 2)
		{
			iLocal_76 = 1;
			iLocal_77 = 30;
			sLocal_92 = "PMDL_TIM";
		}
		else if (iLocal_36 == 3)
		{
			vLocal_66 = { -3121,261f, 1152,92f, 19,4047f };
			fLocal_68 = 176,4887f;
			iLocal_83 = joaat("police4");
			iLocal_81 = joaat("s_m_y_cop_01");
		}
		else if (iLocal_36 == 4)
		{
			vLocal_66 = { 1543,145f, 2184,371f, 77,8114f };
			fLocal_68 = 45,3499f;
			iLocal_83 = joaat("police4");
			iLocal_81 = joaat("s_m_y_cop_01");
		}
		else if (iLocal_36 >= 5)
		{
			iLocal_80 = joaat("g_m_y_salvagoon_02");
		}
	}
	else if (func_110() == 14)
	{
		vLocal_65 = { -2169,828f, 4277,365f, 47,9568f };
		fVar0 = unk_0xBE3C4023003180FC(vLocal_64, vLocal_65, true);
		iLocal_77 = system::round((((fVar0 / 16,5f) + 40f) / 2f));
	}
	else if (func_110() == 13)
	{
		vLocal_65 = { -323,356f, 6264,431f, 30,4463f };
		fVar0 = unk_0xBE3C4023003180FC(vLocal_64, vLocal_65, true);
		iLocal_77 = system::round((((fVar0 / 16,5f) + 40f) / 2f));
	}
	else if (func_110() == 12)
	{
		vLocal_65 = { 198,5282f, 342,2399f, 104,9566f };
		fVar0 = unk_0xBE3C4023003180FC(vLocal_64, vLocal_65, true);
		iLocal_77 = system::round((((fVar0 / 16,5f) + 15f) / 2f));
	}
	else if (func_110() == 11)
	{
		vLocal_65 = { -560,0195f, 301,1481f, 82,1436f };
		fVar0 = unk_0xBE3C4023003180FC(vLocal_64, vLocal_65, true);
		iLocal_77 = system::round((((fVar0 / 16,5f) + 15f) / 2f));
	}
	iLocal_75 = 0;
	iLocal_70 = 1;
}

float func_107(int iParam0, int iParam1)//Position - 0x527C
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0,5801f;
					break;
				
				case 1:
					return 177,9306f;
					break;
				
				case 2:
					return 49,6978f;
					break;
				
				case 3:
					return 336,9449f;
					break;
				
				case 4:
					return 80,1639f;
					break;
				
				case 5:
					return 287,983f;
					break;
				
				case 6:
					return 46,7895f;
					break;
			}
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 273,1085f;
					break;
				
				case 8:
					return 256,7899f;
					break;
				
				case 9:
					return 180,9647f;
					break;
				
				case 10:
					return 126,4385f;
					break;
				
				case 11:
					return 123,4767f;
					break;
				
				case 12:
					return 226,219f;
					break;
				
				case 13:
					return 82,6097f;
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_108(int iParam0, int iParam1)//Position - 0x53AC
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return -128,1876f, 1934,495f, 194,9075f;
					break;
				
				case 1:
					return -179,8744f, 586,4468f, 196,6278f;
					break;
				
				case 2:
					return 1390,089f, -605,923f, 73,3378f;
					break;
				
				case 3:
					return -3170,048f, 1098,809f, 19,7817f;
					break;
				
				case 4:
					return 1581,22f, 2194,629f, 78,1062f;
					break;
				
				case 5:
					return 1475,833f, -113,5801f, 141,794f;
					break;
				
				case 6:
					return 1603,071f, -1793,915f, 89,0179f;
					break;
			}
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 642,2169f, 2774,892f, 40,985f;
					break;
				
				case 8:
					return -1916,122f, 2060,313f, 139,7363f;
					break;
				
				case 9:
					return 824,8992f, -1064,192f, 26,9851f;
					break;
				
				case 10:
					return -669,6013f, -1198,664f, 9,6125f;
					break;
				
				case 11:
					return -1465,579f, -390,7494f, 37,5168f;
					break;
				
				case 12:
					return 797,7521f, -1793,008f, 28,3164f;
					break;
				
				case 13:
					return 806,319f, -2017,451f, 28,2215f;
					break;
			}
			break;
	}
	return func_109(iParam0);
}

Vector3 func_109(int iParam0)//Position - 0x556D
{
	switch (iParam0)
	{
		case 2:
			return 2147,317f, 4795,208f, 40,08961f;
			break;
		
		case 9:
			return 1524,329f, -2108,269f, 75,7248f;
			break;
		
		case 10:
			return -1172,195f, -1577,427f, 3,38152f;
			break;
		
		case 1:
			return 898,3718f, -177,0764f, 72,68348f;
			break;
		
		case 4:
			return 1191,302f, 2672,064f, 36,73154f;
			break;
		
		case 3:
			return -1584,333f, 5193,487f, 2,95912f;
			break;
		
		case 0:
			return 408,3429f, -1623,836f, 28,29278f;
			break;
		
		case 8:
			return -1339,489f, -21,19435f, 50,34566f;
			break;
		
		case 5:
			return 336,207f, 172,4251f, 102,2055f;
			break;
		
		case 6:
			return 394,5495f, -703,3795f, 28,27281f;
			break;
		
		case 7:
			return -1413,184f, -206,0555f, 46,29474f;
			break;
		
		case 11:
			return -560,3809f, 274,5476f, 82,02014f;
			break;
		
		case 12:
			return 221,0845f, 340,7849f, 104,5883f;
			break;
		
		case 13:
			return -296,7154f, 6259,732f, 30,49339f;
			break;
		
		case 14:
			return -2201,402f, 4291f, 47,32429f;
			break;
	}
	return 10f, 10f, 10f;
}

int func_110()//Position - 0x5720
{
	return Global_103265.f_20;
}

int func_111()//Position - 0x572E
{
	return func_112(Global_103265.f_20, Global_103265.f_29);
}

int func_112(int iParam0, int iParam1)//Position - 0x5746
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 4;
					break;
				
				case 5:
					return 5;
					break;
				
				case 6:
					return 6;
					break;
			}
			break;
		
		case 11:
		case 12:
			switch (iParam1)
			{
				case 0:
					return 9;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 11;
					break;
				
				case 3:
					return 12;
					break;
				
				case 4:
					return 13;
					break;
			}
			break;
		
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				
				case 1:
					return 7;
					break;
			}
			break;
	}
	return 0;
}

void func_113()//Position - 0x584E
{
	unk_0x2E4932E63763FE26(joaat("benson"), false);
	unk_0x2E4932E63763FE26(joaat("pony2"), false);
	unk_0x77A208B3324C04F2();
	if (iLocal_71)
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_88, 0))
		{
			func_114(iLocal_88, 0, 145);
		}
		unk_0xBD88542932C8F3A2(unk_0x9EB17624F44A8DA4());
		func_99(&uLocal_94, 0, 0);
	}
	unk_0x96A3D9A8A4C7AFD4();
}

int func_114(int iParam0, int iParam1, int iParam2)//Position - 0x589C
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0xA88FE81C0BDF2731(iParam0, &uVar0);
		if (!unk_0xAB019B170BF1309C(sVar1))
		{
			if (unk_0x8B948C59217A295D(sVar1) == unk_0x8B948C59217A295D("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_115(iParam0, iParam2);
	return 1;
}

void func_115(int iParam0, int iParam1)//Position - 0x58DC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_121(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x317536BCEA8FA6B0(iParam0, -1, 0);
		if (!unk_0x6ADD12BF4D6D2587(iVar0))
		{
			iVar0 = unk_0x96D3C6B7ED86BE3A(iParam0, -1);
		}
		if (unk_0x6ADD12BF4D6D2587(iVar0) && !unk_0x3AB6A1A9084FB0A4(iVar0))
		{
			if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_104555.f_2353.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x82FF3DFBC3965CC0(iParam0) == Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xAB019B170BF1309C(&(Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x74C475EB8E73D398(unk_0xF2D2D6860D636A58(iParam0), &(Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_104555.f_32429.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x82FF3DFBC3965CC0(iParam0) == Global_104555.f_32429.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xAB019B170BF1309C(&(Global_104555.f_32429.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x74C475EB8E73D398(unk_0xF2D2D6860D636A58(iParam0), &(Global_104555.f_32429.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_104555.f_32429.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_104555.f_32429.f_5590 = iParam1;
	Global_70583 = iParam0;
	Global_104555.f_32429.f_5588 = 1;
	func_116(iParam0, &(Global_104555.f_32429.f_5510));
}

void func_116(int iParam0, var uParam1)//Position - 0x5ADE
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		func_120(uParam1);
		uParam1->f_66 = unk_0x82FF3DFBC3965CC0(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xF2D2D6860D636A58(iParam0), 16);
		*uParam1 = unk_0xBB95820E68A4EB0D(iParam0);
		unk_0xAEC96F2E5A91C606(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x0DA0B030029E4E6E(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x7869E6E4E193E666(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x55F371CF3DB9BFA1(iParam0);
		uParam1->f_67 = unk_0x7E3C3BFAB9ADD960(iParam0);
		uParam1->f_69 = unk_0x0260F35A831D6738(iParam0);
		uParam1->f_70 = unk_0x37956F2B588E40E6(iParam0);
		unk_0xFBAEDCD645F4B3F7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x063C5BF33FA1D85E(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x378B727FB0126407(iParam0, 2))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
		}
		if (unk_0x378B727FB0126407(iParam0, 3))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
		}
		if (unk_0x378B727FB0126407(iParam0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
		}
		if (unk_0x378B727FB0126407(iParam0, 1))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_119(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x965BEFCC45024E92(iParam0, 0))
		{
			uParam1->f_68 = unk_0xBFAC036AADDA5F9F(iParam0);
		}
		if (unk_0x849A8CFD71854E02(uParam1->f_66))
		{
			if (unk_0xEF8C0B8E0D7402FE(iParam0))
			{
				switch (unk_0xCD44B25535473ABE(iParam0))
				{
					case 3:
					case 0:
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 23);
						unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 23);
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x84EE59E8804FCC8C(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 9);
		}
		if (unk_0xE7F7942A19E7A681(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 10);
		}
		if (unk_0x47833BA8B6BB150B(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 13);
			unk_0x91A0B42E2753BEF7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x11C2F368CD69AADB(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 12);
		}
		func_118(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x7C7056D6F2A31BF6(iParam0, iVar0 + 1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_117(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x3F7A17ABD44B7297(iParam0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 11);
		}
		if (unk_0xB80A4DA4C06A76F1(iParam0, "IgnoredByQuickSave") && unk_0xD5736BCB654EA8FC(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 27);
		}
	}
}

int func_117(int iParam0)//Position - 0x5D89
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_118(int iParam0, var uParam1, var uParam2)//Position - 0x5E39
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB8DE76287EDC4957(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x96E226626970ABA3(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x55F6AB4050FE1F69(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xF928889F6E5C7677(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x8D462BB6E4814682(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x8D462BB6E4814682(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_119(int iParam0)//Position - 0x5F13
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_120(var uParam0)//Position - 0x5F33
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_121(int iParam0)//Position - 0x5FE3
{
	if ((((((((((!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0)) || func_137(iParam0, 0, 0)) || func_137(iParam0, 1, 0)) || func_137(iParam0, 2, 0)) || func_136(iParam0) != 145) || func_135(iParam0)) || func_134(iParam0)) || func_133(iParam0)) || func_132(iParam0)) || !func_122(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		if (func_134(iParam0))
		{
		}
		if (func_134(iParam0))
		{
		}
		if (func_137(iParam0, 0, 0))
		{
		}
		if (func_137(iParam0, 1, 0))
		{
		}
		if (func_137(iParam0, 2, 0))
		{
		}
		if (func_136(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_122(int iParam0)//Position - 0x60C0
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_123(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x428C7026AD2721BA(iParam0) || unk_0x849A8CFD71854E02(iParam0)) || unk_0xF9DDB1C0875FD9E0(iParam0)) || unk_0x3C4FA7AE145B3F72(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_123(int iParam0, bool bParam1)//Position - 0x6271
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
		if (!func_131())
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
		if ((((!func_130() && !func_129()) && !func_128()) && !func_127()) && !func_131())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x177281F5FA205A38() || unk_0xB9D80B12FE4456A5()) || unk_0xFD6215BABFD843F2())
		{
		}
		else if (!func_128())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_126(iParam0))
		{
			return 0;
		}
	}
	if (!func_124(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_124(int iParam0)//Position - 0x63FF
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_125())
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

int func_125()//Position - 0x64CB
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

int func_126(int iParam0)//Position - 0x64E2
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

int func_127()//Position - 0x7D6A
{
	return 0;
}

int func_128()//Position - 0x7D73
{
	return 1;
}

int func_129()//Position - 0x7D7C
{
	return 1;
}

int func_130()//Position - 0x7D85
{
	if (unk_0x21EA5D4DC72DE119(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_131()//Position - 0x7D9E
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

int func_132(int iParam0)//Position - 0x7E59
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	sVar1 = unk_0xF2D2D6860D636A58(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x74C475EB8E73D398(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_123(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_133(int iParam0)//Position - 0x7E9F
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

int func_134(int iParam0)//Position - 0x7EDA
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]) && unk_0xB8DE76287EDC4957(Global_90309[iVar0], 0))
			{
				if (Global_90309[iVar0] == iParam0 && unk_0x82FF3DFBC3965CC0(Global_90309[iVar0]) == unk_0x82FF3DFBC3965CC0(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_135(int iParam0)//Position - 0x7F56
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[24]))
	{
		if (iParam0 == Global_69678.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_69678.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_136(int iParam0)//Position - 0x803E
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 145;
	}
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			if (Global_90309[iVar0] == iParam0)
			{
				return Global_90319[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_137(int iParam0, int iParam1, bool bParam2)//Position - 0x80A1
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_138(iParam1, iVar0, &sVar1, &iVar2))
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

int func_138(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x8112
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

void func_139(int iParam0)//Position - 0x81EA
{
	Global_103265.f_22 = iParam0;
}

