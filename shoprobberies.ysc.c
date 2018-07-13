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
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	vector3 vLocal_49 = { 0f, 0f, 0f };
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
	struct<487> Local_66 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1500, 45, 1103626240, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	bool bLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	char* sLocal_90 = NULL;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	struct<33> Local_96 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_97 = 1;
	int iLocal_98[3] = { 0, 0, 0 };
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 5;
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
	var uLocal_137 = 5;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_49 = { 500f, 500f, 500f };
	iLocal_107 = 3;
	if (unk_0x7D9C4B359376D38A(98))
	{
		func_313();
	}
	if (func_310(0))
	{
		bLocal_86 = true;
		iLocal_83 = unk_0xB89B7DB2727D69D6();
	}
	if (Global_3)
	{
		unk_0x3E80C2F7BC665259(1);
		unk_0x96A3D9A8A4C7AFD4();
	}
	if (func_309(14))
	{
		unk_0x3E80C2F7BC665259(1);
		unk_0x96A3D9A8A4C7AFD4();
	}
	func_308(&Local_96, 3);
	func_299(&uScriptParam_120);
	vVar0 = { 24,088f, -1345,623f, 29,5082f };
	vVar1 = { 24,94562f, -1344,954f, 29,49f };
	vVar2 = { vVar0 - vVar1 };
	vVar2 = { vVar1 - vVar0 };
	fVar4 = 147,297f;
	vVar3 = { -1228,443f, -905,3416f, 13,523f };
	vVar2 = { vVar3 - Vector(12,31f, -907,8234f, -1222,331f) };
	vVar2 = { func_298(vVar2, fVar4) };
	if ((((func_297() && !func_296()) || Global_104499) || Global_25235) || Global_104544 != -1)
	{
		if (func_297() && !func_296())
		{
		}
		else if (Global_104499)
		{
		}
		else if (Global_25235)
		{
		}
		else if (Global_104544 != -1)
		{
		}
		if (!func_295())
		{
			func_293(&(Local_66.f_470), 64);
			func_291(1);
		}
		else
		{
			func_291(0);
		}
		func_313();
	}
	else if (Global_104555.f_20005[iLocal_80] > 0)
	{
		if (func_290())
		{
			func_288(iLocal_80, Local_66.f_486.f_9.f_2, &vVar5, &vVar6);
			unk_0x60225D4F755DFDB1(Local_66.f_181, 15f, 0);
			iLocal_79 = unk_0xCB389937EDB1519A(vVar5, vVar6, 0, 1, 1, 1);
			if (!func_295())
			{
				func_291(1);
			}
			else
			{
				func_291(0);
				func_286(&(Local_66.f_470), 512);
			}
			iLocal_65 = 2;
		}
		else
		{
			func_291(0);
		}
		if (!func_285())
		{
			iLocal_62 = 10;
			iVar7 = unk_0x63A6486593EC7EC3(0, 3);
			if (iVar7 == 0)
			{
				Local_66.f_2.f_12 = 1;
			}
			else
			{
				Local_66.f_2.f_12 = 0;
			}
		}
	}
	else
	{
		func_291(0);
	}
	while (true)
	{
		func_282(&Local_96);
		if (func_277())
		{
			func_313();
		}
		if (!bLocal_86)
		{
			if (func_310(0))
			{
				func_276();
				bLocal_86 = true;
			}
		}
		switch (iLocal_65)
		{
			case 0:
				func_247();
				break;
			
			case 1:
				func_5();
				break;
			
			case 2:
				if (func_295())
				{
					if (!unk_0xF491DD47B88AA84E())
					{
						if (!func_3("SHOP_CLOSED", func_4(iLocal_80)))
						{
							unk_0x082F06A6565F4379(0);
							func_2("SHOP_CLOSED", func_4(iLocal_80));
						}
					}
				}
				else
				{
					if (func_3("SHOP_CLOSED", func_4(iLocal_80)))
					{
						unk_0x3E80C2F7BC665259(1);
					}
					if (func_1(Local_66.f_470, 512))
					{
						func_291(1);
						func_293(&(Local_66.f_470), 512);
					}
				}
				break;
			
			case 3:
				break;
		}
		system::wait(0);
	}
}

bool func_1(var uParam0, int iParam1)//Position - 0x35E
{
	return (uParam0 && iParam1) != 0;
}

void func_2(char* sParam0, char* sParam1)//Position - 0x36D
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0xA6D2B267C377D7B2(sParam1);
	unk_0x376CFA11DE0FE521(0, 1, true, -1);
}

int func_3(char* sParam0, char* sParam1)//Position - 0x389
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	unk_0xA6D2B267C377D7B2(sParam1);
	return unk_0x0683D2027E169355(0);
}

char* func_4(int iParam0)//Position - 0x3A2
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "SHR_GAS";
		
		case 5:
			return "SHR_LIQ1";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "SHR_LIQ2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "SHR_CONV";
		
		case -2:
			return "SHR_ACE";
		
		default:
	}
	return "";
}

void func_5()//Position - 0x44A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_244();
	func_241();
	func_236();
	func_230();
	func_212();
	func_190();
	func_184();
	func_66();
	func_65();
	func_64();
	func_54();
	func_53();
	func_50();
	if (!func_49())
	{
		func_36();
		func_26();
	}
	if (unk_0x6ADD12BF4D6D2587(Local_66))
	{
		unk_0x5AD8564EFD5BEC2E(Local_66, &iVar0, 1);
	}
	else
	{
		return;
	}
	bLocal_88 = false;
	if (!unk_0x3AB6A1A9084FB0A4(Local_66.f_2) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar1, 1))
		{
			if ((iVar1 != joaat("weapon_unarmed") && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare"))
			{
				if ((((unk_0xFE2BE49C250EFD09(unk_0x9EB17624F44A8DA4()) && unk_0xCA3C40448996C9BA(unk_0xFC1458A37D98B502(), Local_66.f_2, 45f)) && unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), Local_66.f_2, 5f, 5f, 2f, 0, 1, 0)) || unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), Local_66.f_2)) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), Local_66.f_2))
				{
					if (!func_25() && !unk_0x43E3A4534ED4A79C())
					{
						bLocal_88 = true;
					}
				}
			}
		}
	}
	if (bLocal_88)
	{
		if (!iLocal_89 && func_1(Local_66.f_470, 4))
		{
			iVar2 = func_24(unk_0xFC1458A37D98B502());
			iVar3 = unk_0x684DC0C684AE74CA(iVar2);
			if (iVar3 == 416676503)
			{
				sLocal_90 = "hold_up_head_additive_pistol";
				unk_0x12C9D41D52A560D6(unk_0xFC1458A37D98B502(), "mp_am_hold_up", sLocal_90, 8f, -8f, -1, 305, 0, 0, 0, 0);
			}
			else if ((((iVar3 == 1159398588 || iVar3 == 970310034) || iVar3 == 860033945) || iVar3 == -1212426201) || iVar3 == -957766203)
			{
				sLocal_90 = "hold_up_head_additive_rifle";
				unk_0x12C9D41D52A560D6(unk_0xFC1458A37D98B502(), "mp_am_hold_up", sLocal_90, 8f, -8f, -1, 305, 0, 0, 0, 0);
			}
			else
			{
				sLocal_90 = "";
			}
			iLocal_89 = 1;
		}
	}
	else if (iLocal_89)
	{
		if (!unk_0xAB019B170BF1309C(sLocal_90))
		{
			if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "mp_am_hold_up", sLocal_90, 3))
			{
				unk_0x7976C9958C60E354(unk_0xFC1458A37D98B502(), "mp_am_hold_up", sLocal_90, -8f);
			}
		}
		iLocal_89 = 0;
	}
	switch (iLocal_62)
	{
		case 0:
			if (func_295())
			{
				if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
				{
					iLocal_62 = 12;
				}
				else
				{
					iLocal_50 = 2;
					iLocal_57 = 1;
					if (!unk_0x191BE1BC8F26F3C1(Local_66, 0))
					{
						if (!unk_0x88DDBE9908752BF0(Local_66, 0))
						{
							if ((func_24(Local_66) == joaat("weapon_unarmed") || func_24(Local_66) == joaat("object")) || func_24(Local_66) == joaat("weapon_briefcase"))
							{
								iLocal_60 = 1;
								iLocal_62 = 1;
							}
							else if (!func_1(Local_66.f_470, 1))
							{
								if (iVar0 == joaat("weapon_bat"))
								{
									iLocal_60 = 2;
									iLocal_62 = 5;
								}
								else if ((iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer")) || iVar0 == joaat("weapon_bottle"))
								{
									iLocal_60 = 3;
									iLocal_62 = 5;
								}
								else if (iVar0 == joaat("weapon_stickybomb"))
								{
									iLocal_60 = 4;
									iLocal_62 = 5;
								}
								else
								{
									iLocal_62 = 2;
								}
								func_286(&(Local_66.f_470), 1);
							}
						}
						else
						{
							iLocal_62 = 3;
						}
					}
				}
			}
			else if (func_23())
			{
				iLocal_50 = 2;
				iLocal_62 = 3;
			}
			else if (!func_295() && func_20(Local_66, Local_66.f_2, &(Local_66.f_451), 1))
			{
				iLocal_62 = 12;
			}
			break;
		
		case 1:
			if (!func_1(Local_66.f_470, 2))
			{
				iLocal_51 = 1;
				iLocal_56 = 1;
				func_286(&(Local_66.f_470), 2);
			}
			iLocal_62 = 5;
			break;
		
		case 2:
			iLocal_51 = 5;
			iLocal_56 = 3;
			iLocal_62 = 5;
			break;
		
		case 3:
			iLocal_51 = 6;
			iLocal_56 = 4;
			iLocal_62 = 5;
			break;
		
		case 5:
			if (!func_295() && !func_1(Local_66.f_470, 1))
			{
				iLocal_62 = 0;
			}
			break;
		
		case 6:
			if (iLocal_51 >= 13)
			{
				if (Local_66.f_2.f_12)
				{
					if (!func_19())
					{
						iLocal_62 = 7;
					}
				}
				else
				{
					iLocal_62 = 8;
				}
				iLocal_52 = 1;
			}
			break;
		
		case 7:
			if (func_1(Local_66.f_470, 256))
			{
				func_18();
				unk_0x0EE72DB1CD8A3B86(&Global_88829, 3);
				iLocal_62 = 13;
			}
			break;
		
		case 8:
			if (func_1(Local_66.f_470, 16))
			{
				if (func_16())
				{
					if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
					{
						if (!unk_0x9F887157983E8EFC(Local_66.f_2))
						{
							if (func_295())
							{
								if (Local_66.f_486 >= 0)
								{
									if (unk_0xD56F740235B1E8F0(Local_66.f_486))
									{
										unk_0x12C9D41D52A560D6(Local_66.f_2, Local_66.f_486.f_1, "handsup_base", 4f, -8f, -1, 1, 0, 0, 0, 0);
										iLocal_58 = 10;
									}
								}
							}
							else
							{
								unk_0xD68E88A8E0BE8697(Local_66.f_2, unk_0xFC1458A37D98B502(), 100f, -1, 0, 0);
								iLocal_58 = 10;
							}
						}
					}
					unk_0x0EE72DB1CD8A3B86(&Global_88829, 3);
					iLocal_62 = 13;
				}
			}
			break;
		
		case 9:
			func_15(2, 0);
			iLocal_59 = 7;
			if (iLocal_63 == 1)
			{
				iLocal_62 = 8;
			}
			else
			{
				iLocal_62 = 13;
			}
			break;
		
		case 10:
			if (func_295())
			{
				iLocal_62 = 11;
			}
			break;
		
		case 11:
			if (!func_14(&(Local_66.f_477)))
			{
				if (!Local_66.f_2.f_12)
				{
					iLocal_51 = 28;
				}
				else
				{
					iLocal_51 = 29;
				}
				func_11(&(Local_66.f_477));
			}
			else if (func_8(&(Local_66.f_477)) > 5f)
			{
				func_15(1, 0);
				iLocal_62 = 13;
			}
			else if (func_8(&(Local_66.f_477)) > 1,5f)
			{
				if (!func_19())
				{
					if (iLocal_58 != 12)
					{
						iLocal_58 = 12;
						if (!Local_66.f_2.f_12)
						{
							func_7();
						}
						else
						{
							func_18();
						}
					}
				}
			}
			break;
		
		case 12:
			if (!func_14(&(Local_66.f_477)))
			{
				func_6();
				iLocal_51 = 30;
				iLocal_58 = 12;
				func_11(&(Local_66.f_477));
			}
			else if (func_8(&(Local_66.f_477)) > 3f)
			{
				iLocal_62 = 13;
			}
			break;
		
		case 13:
			break;
	}
}

void func_6()//Position - 0xA25
{
	int iVar0;
	
	if (unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
	{
		return;
	}
	unk_0x6931076730A4AC5D(&iVar0);
	unk_0x380C1E7B7740D618(0, Local_66.f_2.f_6, 2f, -1, 0,25f, 0, Local_66.f_2.f_9);
	unk_0xF21E6EBE8EFDCC28(0, -1);
	unk_0x1B16DD5C115FE009(iVar0);
	unk_0xAB30B1CF01A198C1(Local_66.f_2, iVar0);
	unk_0xFAA3EF7FF92E1F9E(&iVar0);
	func_286(&(Local_66.f_470), 128);
}

void func_7()//Position - 0xA84
{
	if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
	{
		unk_0xFAA3EF7FF92E1F9E(&iLocal_78);
		unk_0x6931076730A4AC5D(&iLocal_78);
		unk_0xF21E6EBE8EFDCC28(0, 5000);
		unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 100f, -1, 0, 0);
		unk_0x1B16DD5C115FE009(iLocal_78);
		unk_0xAB30B1CF01A198C1(Local_66.f_2, iLocal_78);
	}
}

float func_8(int iParam0)//Position - 0xAD2
{
	if (func_14(iParam0))
	{
		if (func_10(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_9(unk_0xC80D31E4B587871C(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_9(bool bParam0)//Position - 0xB11
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = system::to_float(unk_0x53C562FD2B9E3AB0());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x3A711520F83BAE98())
	{
		iVar2 = unk_0xD1952A425B78FFC0();
		fVar3 = system::to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (system::to_float(unk_0x53C562FD2B9E3AB0()) / 1000f);
}

bool func_10(int iParam0)//Position - 0xB69
{
	return unk_0xC80D31E4B587871C(*iParam0, 2);
}

void func_11(int iParam0)//Position - 0xB79
{
	if (!func_14(iParam0))
	{
		func_12(iParam0);
	}
}

void func_12(int iParam0)//Position - 0xB91
{
	func_13(iParam0, 0f);
}

void func_13(int iParam0, float fParam1)//Position - 0xBA0
{
	iParam0->f_1 = (func_9(unk_0xC80D31E4B587871C(*iParam0, 4)) - fParam1);
	unk_0x872F1C1F8587CCC7(iParam0, 1);
	unk_0x0EE72DB1CD8A3B86(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_14(int iParam0)//Position - 0xBCE
{
	return unk_0xC80D31E4B587871C(*iParam0, 1);
}

void func_15(int iParam0, bool bParam1)//Position - 0xBDE
{
	if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) < iParam0 && (!bLocal_86 || (bLocal_86 && iParam0 < iLocal_83)))
	{
		unk_0xB926B9A87AB986E6(unk_0x98EC0789D9F0703B(), iParam0, 0);
		unk_0xCFB8D84F848CAA39(unk_0x98EC0789D9F0703B(), 0);
		Local_66.f_158 = 1;
		if (bParam1)
		{
			unk_0xC0EBC1452FCAB15C(iParam0);
		}
		else
		{
			unk_0xC0EBC1452FCAB15C(5);
		}
	}
	else if (bLocal_86 && iParam0 > iLocal_83)
	{
	}
}

int func_16()//Position - 0xC51
{
	func_17();
	switch (iLocal_54)
	{
		case 0:
			Local_66.f_486 = unk_0x8383F9C605E523B7(Local_66.f_486.f_6, Local_66.f_486.f_9, 2);
			if (!unk_0xA7E3B4C3A60721A5(Local_66.f_2, 1))
			{
				if (!unk_0x191BE1BC8F26F3C1(Local_66.f_28, 0))
				{
					if (Local_66.f_486 >= 0)
					{
						unk_0xB18E1DBC397238E1(Local_66.f_28, true, 0);
						unk_0x42B3DBD52AED7B7D(Local_66.f_28, 1);
						unk_0x8E628F774C748D93(Local_66.f_2, Local_66.f_486, Local_66.f_486.f_1, Local_66.f_486.f_3, 8f, -1,5f, 25, 0, 1148846080, 0);
						unk_0xEBB74134CCA3442E(Local_66.f_28, Local_66.f_486, Local_66.f_486.f_4, Local_66.f_486.f_1, 1000f, 8f, 137, 1148846080);
						unk_0xEBB74134CCA3442E(Local_66.f_96.f_1, Local_66.f_486, Local_66.f_486.f_5, Local_66.f_486.f_1, 1000f, 8f, 137, 1148846080);
					}
					else
					{
						return 1;
					}
					iLocal_55 = 1;
					iLocal_58 = 5;
					iLocal_54 = 2;
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
			break;
		
		case 1:
			if (Local_66.f_486 >= 0)
			{
				if (unk_0xD56F740235B1E8F0(Local_66.f_486))
				{
					if (unk_0x463C4747B41E35A3(Local_66.f_486) > 0,478f)
					{
						if (!unk_0x191BE1BC8F26F3C1(Local_66.f_28, 0))
						{
							unk_0xEBB74134CCA3442E(Local_66.f_28, Local_66.f_486, Local_66.f_486.f_4, Local_66.f_486.f_1, 1000f, 8f, 137, 1148846080);
							Local_66.f_28.f_7 = { Local_66.f_28.f_7, Local_66.f_28.f_7.f_1, (Local_66.f_28.f_7.f_2 + 0,2f) };
						}
						iLocal_54 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_66.f_486 >= 0)
			{
				if (unk_0xD56F740235B1E8F0(Local_66.f_486))
				{
					if (unk_0x463C4747B41E35A3(Local_66.f_486) > 0,447f)
					{
						if (!unk_0x191BE1BC8F26F3C1(Local_66.f_28, 0))
						{
							if (!unk_0xDE3C98B57A41E603(Local_66.f_28))
							{
								unk_0xB3A8974D2C811672(Local_66.f_28, true, 0);
							}
						}
					}
					if (Local_66.f_467)
					{
						if (unk_0x49EDC56156DD7035(Local_66.f_486) != 1,45f)
						{
							unk_0x3A17FED900F99299(Local_66.f_486, 1,45f);
						}
					}
					if (unk_0x463C4747B41E35A3(Local_66.f_486) > 0,894f)
					{
						iLocal_54 = 3;
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_28, 0))
			{
				if (Local_66.f_486 >= 0)
				{
					if (unk_0xD56F740235B1E8F0(Local_66.f_486))
					{
						if (iLocal_53 >= 4)
						{
							if (unk_0x463C4747B41E35A3(Local_66.f_486) < 0,871f)
							{
								iLocal_55 = 4;
							}
							unk_0xBD1486160AB0661B(Local_66.f_28, -16f, 1);
							unk_0x764B52EA8B8FFFA3(Local_66.f_28);
						}
					}
				}
			}
			iLocal_54 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_17()//Position - 0xEF6
{
	if (Local_66.f_486 >= 0)
	{
		if (unk_0xD56F740235B1E8F0(Local_66.f_486))
		{
			if (unk_0x463C4747B41E35A3(Local_66.f_486) >= 0f)
			{
				if (unk_0x463C4747B41E35A3(Local_66.f_486) < 0,117f)
				{
					iLocal_53 = 1;
				}
				else if (unk_0x463C4747B41E35A3(Local_66.f_486) < 0,154f)
				{
					iLocal_53 = 2;
				}
				else if (unk_0x463C4747B41E35A3(Local_66.f_486) < 0,477f)
				{
					iLocal_53 = 3;
				}
				else if (unk_0x463C4747B41E35A3(Local_66.f_486) < 0,487f)
				{
					iLocal_53 = 4;
				}
				else if (unk_0x463C4747B41E35A3(Local_66.f_486) < 0,809f)
				{
					iLocal_53 = 5;
				}
				else if (unk_0x463C4747B41E35A3(Local_66.f_486) < 0,871f)
				{
					iLocal_53 = 6;
				}
				else if (unk_0x463C4747B41E35A3(Local_66.f_486) < 0,894f)
				{
					iLocal_53 = 7;
				}
				else if (unk_0x463C4747B41E35A3(Local_66.f_486) < 0,999f)
				{
					iLocal_53 = 8;
				}
				else if (iLocal_53 == 9)
				{
				}
			}
			else
			{
				iLocal_53 = 0;
			}
		}
		else if (iLocal_53 == 0)
		{
		}
	}
	else
	{
		iLocal_53 = 0;
	}
}

void func_18()//Position - 0xFFE
{
	if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
	{
		unk_0x9E058151726E58DE(Local_66.f_2, joaat("weapon_pumpshotgun"), 12, false, true);
		unk_0x385A213BEB355C2B(Local_66.f_2, joaat("weapon_pumpshotgun"), false);
		unk_0xCE93FCB8A8D8DF0B(Local_66.f_2, -2065892691);
		unk_0x6931076730A4AC5D(&(Local_66.f_2.f_22));
		unk_0x9627C22EF3C3F4D6(0, Local_66, 2000, 0);
		unk_0xDF28F1574E61F9EA(0, Local_66, 4000, -957453492);
		unk_0x992E814DF611C58C(0, 25f, 0);
		unk_0x1B16DD5C115FE009(Local_66.f_2.f_22);
		unk_0xAB30B1CF01A198C1(Local_66.f_2, Local_66.f_2.f_22);
	}
}

int func_19()//Position - 0x1086
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

int func_20(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x10A8
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam1, 1) };
	}
	if (unk_0x5679106BC7ED79EE(vVar0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x4FB2BF5239979F9A(vVar0, system::to_float(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0xC931425E2B416A2F(iParam0, 2))
	{
		if (unk_0x08765A6321A42CA1(iParam0))
		{
			if (unk_0x0C88267282FD588F(iParam1, unk_0xB3328BA8976B416C(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (unk_0xCA3C40448996C9BA(unk_0x07F64790D10D1DB5(iParam1), iParam0, 120f) && unk_0xFFCE4302A2DB825B(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x88DDBE9908752BF0(unk_0x07F64790D10D1DB5(iParam1), 0))
			{
				iVar1 = unk_0xDFD115BB10FE46A9(unk_0x07F64790D10D1DB5(iParam1), 0);
			}
			if (unk_0x0A1D4A2F0A088C25(iParam0) || func_21(iVar1))
			{
				if (unk_0x0C88267282FD588F(iParam1, unk_0xB3328BA8976B416C(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (unk_0xCA3C40448996C9BA(unk_0x07F64790D10D1DB5(iParam1), iParam0, 120f) && unk_0xFFCE4302A2DB825B(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0xF1DE6FAA2EFAA34F((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0)//Position - 0x1221
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (unk_0x317536BCEA8FA6B0(iParam0, -1, 0) != 0)
			{
				if (unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_22(unk_0xFC1458A37D98B502(), iParam0, 1) < 40f)
						{
							if (unk_0xF004845B6324D7F1(unk_0x9EB17624F44A8DA4(), &iVar1))
							{
								if ((unk_0x8A3FF8E81B40BB75(iVar1) && unk_0x79A6CD762DCCABE4(iVar1) == iParam0) || (unk_0x52C56492660097C7(iVar1) && unk_0x07F64790D10D1DB5(iVar1) == unk_0x317536BCEA8FA6B0(iParam0, -1, 0)))
								{
									if ((unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()) && unk_0xF2B58F79D29425B4(0, 24)) || (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0xF2B58F79D29425B4(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_22(int iParam0, int iParam1, bool bParam2)//Position - 0x12EF
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	}
	if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		vVar1 = { unk_0xB3328BA8976B416C(iParam1, 1) };
	}
	else
	{
		vVar1 = { unk_0xB3328BA8976B416C(iParam1, 0) };
	}
	return unk_0xBE3C4023003180FC(vVar0, vVar1, bParam2);
}

int func_23()//Position - 0x134D
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!unk_0x191BE1BC8F26F3C1(Local_66, 0))
	{
		if (unk_0x88DDBE9908752BF0(Local_66, 0))
		{
			iVar1 = unk_0xDFD115BB10FE46A9(Local_66, 0);
			bVar0 = true;
		}
		else if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
		{
			iVar1 = unk_0xC733212BF9066BDF();
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!unk_0x191BE1BC8F26F3C1(iVar1, 0))
		{
			if (unk_0x0F3033474C49912D(iVar1, Local_66.f_186, Local_66.f_189, Local_66.f_192, 0, true, 0))
			{
				return 1;
			}
			else if (unk_0x0F3033474C49912D(iVar1, Local_66.f_200, Local_66.f_203, Local_66.f_206, 0, true, 0))
			{
				return 1;
			}
			else if (unk_0x0F3033474C49912D(iVar1, Local_66.f_207, Local_66.f_210, Local_66.f_213, 0, true, 0))
			{
				return 1;
			}
			else if (Local_66.f_199 != -1f)
			{
				if (unk_0x0F3033474C49912D(iVar1, Local_66.f_193, Local_66.f_196, Local_66.f_199, 0, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_24(int iParam0)//Position - 0x1435
{
	var uVar0;
	
	unk_0x5AD8564EFD5BEC2E(iParam0, &uVar0, 1);
	return uVar0;
}

int func_25()//Position - 0x1449
{
	if (unk_0x8F38E94BBF3404CD(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_26()//Position - 0x1466
{
	switch (iLocal_50)
	{
		case 0:
			break;
		
		case 2:
			if (!func_49())
			{
				if (func_295())
				{
					if (!func_1(Global_104555.f_20005.f_20, 1))
					{
						switch (func_35("SHR_HOLDUP_1"))
						{
							case 2:
								func_33("SHR_HOLDUP_1", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_286(&(Global_104555.f_20005.f_20), 1);
								iLocal_50 = 1;
								break;
						}
						if (iLocal_63 > 0)
						{
							if (func_32("SHR_HOLDUP_1"))
							{
								func_28("SHR_HOLDUP_1", 1);
								iLocal_50 = 4;
							}
						}
						if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
						{
						}
					}
					else
					{
						iLocal_50 = 1;
					}
				}
				else if (func_32("SHR_HOLDUP_1"))
				{
					func_28("SHR_HOLDUP_1", 1);
				}
			}
			break;
		
		case 1:
			if (!func_49())
			{
				if (func_295())
				{
					if (!func_1(Global_104555.f_20005.f_20, 2))
					{
						switch (func_35("SHR_SNK_TUT"))
						{
							case 2:
								func_33("SHR_SNK_TUT", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_286(&(Global_104555.f_20005.f_20), 2);
								iLocal_50 = 4;
								break;
						}
					}
					else
					{
						iLocal_50 = 4;
					}
				}
				else if (func_32("SHR_SNK_TUT"))
				{
					func_28("SHR_SNK_TUT", 1);
				}
			}
			break;
		
		case 3:
			if (func_27("SHR_HOLDUP_1") || func_27("SHR_SNK_TUT"))
			{
				unk_0x3E80C2F7BC665259(1);
			}
			if (func_32("SHR_SNK_TUT") && !func_1(Global_104555.f_20005.f_20, 2))
			{
				func_28("SHR_SNK_TUT", 1);
			}
			if (func_32("SHR_HOLDUP_1") && !func_1(Global_104555.f_20005.f_20, 1))
			{
				func_28("SHR_HOLDUP_1", 1);
			}
			iLocal_50 = 4;
			break;
		
		case 4:
			if ((!func_295() && func_32("SHR_HOLDUP_1")) && !func_1(Global_104555.f_20005.f_20, 1))
			{
				func_28("SHR_HOLDUP_1", 1);
				iLocal_50 = 2;
			}
			if ((!func_295() && func_32("SHR_SNK_TUT")) && !func_1(Global_104555.f_20005.f_20, 2))
			{
				func_28("SHR_SNK_TUT", 1);
				iLocal_50 = 2;
			}
			break;
	}
}

int func_27(char* sParam0)//Position - 0x1693
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_28(char* sParam0, int iParam1)//Position - 0x16A6
{
	int iVar0;
	int iVar1;
	
	if (Global_103195 && iParam1)
	{
		if (func_27(sParam0) && !unk_0x64F06B8ECC39BBC2())
		{
			unk_0x3E80C2F7BC665259(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (unk_0x74C475EB8E73D398(sParam0, &(Global_104555.f_20380[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_104555.f_20380.f_145 - 2))
			{
				func_31(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_30((Global_104555.f_20380.f_145 - 1));
			Global_104555.f_20380.f_145 = (Global_104555.f_20380.f_145 - 1);
			func_29();
			return;
		}
		iVar0++;
	}
}

void func_29()//Position - 0x1753
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_104555.f_20380.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_20380[iVar0 /*16*/].f_11, 0))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[0])
			{
				Global_104555.f_20380.f_146[0] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xC80D31E4B587871C(Global_104555.f_20380[iVar0 /*16*/].f_11, 1))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[1])
			{
				Global_104555.f_20380.f_146[1] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xC80D31E4B587871C(Global_104555.f_20380[iVar0 /*16*/].f_11, 2))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[2])
			{
				Global_104555.f_20380.f_146[2] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_30(int iParam0)//Position - 0x1873
{
	StringCopy(&(Global_104555.f_20380[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_104555.f_20380[iParam0 /*16*/].f_4), "", 16);
	Global_104555.f_20380[iParam0 /*16*/].f_8 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_9 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_11 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_10 = -1;
	Global_104555.f_20380[iParam0 /*16*/].f_12 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_13 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_14 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_15 = 0;
}

void func_31(int iParam0, int iParam1)//Position - 0x190D
{
	Global_104555.f_20380[iParam0 /*16*/] = { Global_104555.f_20380[iParam1 /*16*/] };
	Global_104555.f_20380[iParam0 /*16*/].f_4 = { Global_104555.f_20380[iParam1 /*16*/].f_4 };
	Global_104555.f_20380[iParam0 /*16*/].f_8 = Global_104555.f_20380[iParam1 /*16*/].f_8;
	Global_104555.f_20380[iParam0 /*16*/].f_10 = Global_104555.f_20380[iParam1 /*16*/].f_10;
	Global_104555.f_20380[iParam0 /*16*/].f_9 = Global_104555.f_20380[iParam1 /*16*/].f_9;
	Global_104555.f_20380[iParam0 /*16*/].f_11 = Global_104555.f_20380[iParam1 /*16*/].f_11;
	Global_104555.f_20380[iParam0 /*16*/].f_12 = Global_104555.f_20380[iParam1 /*16*/].f_12;
	Global_104555.f_20380[iParam0 /*16*/].f_13 = Global_104555.f_20380[iParam1 /*16*/].f_13;
	Global_104555.f_20380[iParam0 /*16*/].f_14 = Global_104555.f_20380[iParam1 /*16*/].f_14;
	Global_104555.f_20380[iParam0 /*16*/].f_15 = Global_104555.f_20380[iParam1 /*16*/].f_15;
}

int func_32(char* sParam0)//Position - 0x1A1D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (unk_0x74C475EB8E73D398(sParam0, &(Global_104555.f_20380[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_33(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1A58
{
	func_34(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_34(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1A79
{
	int iVar0;
	
	if (unk_0x74C475EB8E73D398(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (unk_0x74C475EB8E73D398(&(Global_104555.f_20380[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_104555.f_20380.f_145 < 9)
	{
		StringCopy(&(Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_4), sParam1, 16);
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_8 = (unk_0x53C562FD2B9E3AB0() + iParam3);
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_9 = iParam5;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_11 = iParam6;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_12 = uParam2;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_13 = iParam7;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_14 = iParam8;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_10 = ((unk_0x53C562FD2B9E3AB0() + iParam3) + iParam4);
		}
		else
		{
			Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_10 = -1;
		}
		Global_104555.f_20380.f_145++;
		func_29();
	}
}

int func_35(char* sParam0)//Position - 0x1C4C
{
	if (unk_0x74C475EB8E73D398(sParam0, &Global_103198))
	{
		return 1;
	}
	if (func_32(sParam0))
	{
		return 0;
	}
	return 2;
}

void func_36()//Position - 0x1C73
{
	if (func_295())
	{
		if (!unk_0x191BE1BC8F26F3C1(Local_66, 0))
		{
		}
	}
	if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
	{
	}
	switch (iLocal_51)
	{
		case 1:
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_GREET", 3);
			}
			iLocal_51 = 14;
			break;
		
		case 2:
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, func_45(bLocal_94, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 3:
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, func_45(bLocal_94, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 4:
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, func_45(bLocal_94, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 5:
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, func_45(bLocal_94, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 6:
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, func_45(bLocal_94, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 15:
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_STUBBORN", 3);
			}
			iLocal_51 = 14;
			break;
		
		case 7:
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_51 = 14;
			break;
		
		case 8:
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_51 = 14;
			break;
		
		case 36:
			if (!func_19())
			{
				if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
				{
					func_47(Local_66.f_2, "SHOP_THREATENED", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 9:
			if (!func_19())
			{
				if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
				{
					func_47(Local_66.f_2, "BUMP", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 10:
			if (!func_19())
			{
				if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
				{
					func_47(Local_66.f_2, "GENERIC_FRIGHTENED_HIGH", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 11:
			if (!func_19())
			{
				if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
				{
					func_47(Local_66.f_2, "SHOP_BRAVE", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 14:
			if (func_44() || func_43())
			{
				if (func_44())
				{
					if (!iLocal_91)
					{
						iLocal_51 = 7;
						iLocal_91 = 1;
					}
				}
				else if (func_43())
				{
					if (!iLocal_92)
					{
						iLocal_51 = 8;
						iLocal_92 = 1;
					}
				}
				if (!func_14(&(Local_66.f_483)))
				{
					func_11(&(Local_66.f_483));
				}
				else if (func_10(&(Local_66.f_483)))
				{
					func_42(&(Local_66.f_483));
				}
				else if (func_8(&(Local_66.f_483)) > 10f)
				{
					if (!func_1(Local_66.f_470, 32))
					{
						if (!unk_0x3AB6A1A9084FB0A4(Local_66.f_2) && func_1(Local_66.f_470, 4))
						{
							unk_0x12C9D41D52A560D6(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_51 = 36;
						func_15(1, 0);
						func_286(&(Local_66.f_470), 32);
					}
				}
			}
			else if (func_14(&(Local_66.f_483)) && !func_10(&(Local_66.f_483)))
			{
				func_41(&(Local_66.f_483));
			}
			break;
		
		case 12:
			if (!unk_0x33B1D0D0C92D4F18(unk_0xFC1458A37D98B502()))
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					func_47(unk_0xFC1458A37D98B502(), "SHOP_HOLDUP", 8);
				}
				func_12(&(Local_66.f_471));
				if (Local_66.f_2.f_11)
				{
					iLocal_51 = 37;
				}
				else
				{
					iLocal_51 = 13;
				}
			}
			else
			{
				unk_0x3D1231846F809DA4(unk_0xFC1458A37D98B502());
			}
			break;
		
		case 13:
			if (func_40(&(Local_66.f_471)) > 3f)
			{
				if (Local_66.f_2.f_12)
				{
					iLocal_51 = 22;
				}
				else if (Local_66.f_458)
				{
					iLocal_51 = 17;
				}
				else if (Local_66.f_459)
				{
					iLocal_51 = 18;
				}
				else if (Local_66.f_460)
				{
					iLocal_51 = 19;
				}
				else if (Local_66.f_461)
				{
					iLocal_51 = 20;
				}
				else if (Local_66.f_462)
				{
					iLocal_51 = 21;
				}
				else
				{
					iLocal_51 = 16;
				}
				func_39(&(Local_66.f_471));
			}
			break;
		
		case 16:
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 17:
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 18:
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 19:
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 20:
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 21:
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 22:
			if (!unk_0x33B1D0D0C92D4F18(unk_0xFC1458A37D98B502()))
			{
				if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
				{
					func_47(Local_66.f_2, "SHOP_BRAVE", 8);
				}
				func_286(&(Local_66.f_470), 256);
				iLocal_51 = 37;
			}
			break;
		
		case 23:
			if (!unk_0x33B1D0D0C92D4F18(unk_0xFC1458A37D98B502()))
			{
				if (Local_66.f_28.f_14)
				{
					if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
					{
						func_47(Local_66.f_2, "SHOP_GAVE_YOU_EVERYTHING", 3);
					}
				}
				iLocal_51 = 37;
			}
			else
			{
				unk_0x3D1231846F809DA4(unk_0xFC1458A37D98B502());
			}
			break;
		
		case 24:
			if (unk_0xB8DE76287EDC4957(Local_66.f_46.f_4[0], 0))
			{
				unk_0xBB4910CCAB2BEDFA(Local_66.f_46.f_4[0], false);
			}
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_46[0], 0))
			{
				func_47(Local_66.f_46[0], "SURROUNDED", 15);
			}
			iLocal_51 = 25;
			break;
		
		case 25:
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				func_47(unk_0xFC1458A37D98B502(), "SPOT_POLICE", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 26:
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_POUR_CAN", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 27:
			if (!func_19())
			{
				if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
				{
					func_47(Local_66.f_2, "SCREAM_PANIC", 3);
				}
				iLocal_51 = 37;
			}
			else
			{
				func_37();
			}
			break;
		
		case 28:
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_51 = 37;
			break;
		
		case 29:
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_51 = 37;
			break;
		
		case 30:
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_NO_COPS", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 31:
			if (!func_19())
			{
				iLocal_51 = 37;
			}
			break;
		
		case 33:
			if (!unk_0x33B1D0D0C92D4F18(unk_0xFC1458A37D98B502()) && !unk_0x33B1D0D0C92D4F18(Local_66.f_2))
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					func_47(unk_0xFC1458A37D98B502(), "SHOP_HURRY", 11);
				}
				func_12(&(Local_66.f_471));
				iLocal_51 = 32;
			}
			break;
		
		case 32:
			if (func_40(&(Local_66.f_471)) > 1f)
			{
				if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
				{
					func_47(Local_66.f_2, "SHOP_HURRYING", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 34:
			if (!func_19())
			{
				if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
				{
					func_47(Local_66.f_2, "SHOP_SELL", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 35:
			if (!func_19())
			{
				if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
				{
					func_47(Local_66.f_2, "SHOP_STEAL", 3);
				}
				iLocal_51 = 37;
			}
			break;
	}
}

void func_37()//Position - 0x24B2
{
	Global_14622 = 0;
	func_38();
}

void func_38()//Position - 0x24C2
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

void func_39(int iParam0)//Position - 0x24E3
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_40(var uParam0)//Position - 0x24F9
{
	if (func_14(uParam0))
	{
		if (func_10(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_9(unk_0xC80D31E4B587871C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_41(int iParam0)//Position - 0x2535
{
	if (func_14(iParam0))
	{
		if (!func_10(iParam0))
		{
			iParam0->f_2 = (func_9(unk_0xC80D31E4B587871C(*iParam0, 4)) - iParam0->f_1);
			unk_0x872F1C1F8587CCC7(iParam0, 2);
		}
	}
}

void func_42(int iParam0)//Position - 0x256F
{
	if (func_14(iParam0))
	{
		if (func_10(iParam0))
		{
			iParam0->f_1 = (func_9(unk_0xC80D31E4B587871C(*iParam0, 4)) - iParam0->f_2);
			iParam0->f_2 = 0f;
			unk_0x0EE72DB1CD8A3B86(iParam0, 2);
		}
	}
}

int func_43()//Position - 0x25AD
{
	if (!unk_0x191BE1BC8F26F3C1(Local_66, 0))
	{
		if (unk_0x0F3033474C49912D(Local_66, Local_66.f_200, Local_66.f_203, Local_66.f_206, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_44()//Position - 0x25E1
{
	if (!unk_0x191BE1BC8F26F3C1(Local_66, 0))
	{
		if (unk_0x0F3033474C49912D(Local_66, Local_66.f_214, Local_66.f_217, Local_66.f_220, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_45(bool bParam0, char* sParam1, char* sParam2)//Position - 0x2615
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_46()//Position - 0x262C
{
	if (unk_0xC80D31E4B587871C(unk_0x63A6486593EC7EC3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_47(int iParam0, char* sParam1, int iParam2)//Position - 0x264D
{
	unk_0x74D45BB07BD51F8B(iParam0, sParam1, func_48(iParam2), 1);
}

int func_48(int iParam0)//Position - 0x2664
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

bool func_49()//Position - 0x2859
{
	return Global_17160;
}

void func_50()//Position - 0x2864
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_295() && iLocal_64 != 3)
	{
		iVar2 = 0;
		while (iVar2 < unk_0xAAEEFEC091D0E30B(0))
		{
			iVar0 = unk_0xA387B84DA2EB1BEE(0, iVar2);
			switch (iVar0)
			{
				case 140:
					unk_0x575EF325DA5E3F04(0, iVar2, &iVar1, 1);
					if (func_52(iVar1))
					{
						if (unk_0x52C56492660097C7(iVar1))
						{
							if (iVar1 != func_51(Local_66.f_2) && iVar1 != func_51(unk_0xFC1458A37D98B502()))
							{
								func_286(&(Local_66.f_470), 8);
							}
						}
						if (!unk_0x52C56492660097C7(iVar1) && !unk_0x8A3FF8E81B40BB75(iVar1))
						{
							func_286(&(Local_66.f_470), 8);
						}
					}
					break;
				
				case 139:
					unk_0x575EF325DA5E3F04(0, iVar2, &iVar1, 1);
					if (func_52(iVar1))
					{
						if (unk_0x52C56492660097C7(iVar1))
						{
							if (iVar1 != func_51(Local_66.f_2) && iVar1 != func_51(unk_0xFC1458A37D98B502()))
							{
								func_286(&(Local_66.f_470), 8);
							}
						}
						if (!unk_0x52C56492660097C7(iVar1) && !unk_0x8A3FF8E81B40BB75(iVar1))
						{
							func_286(&(Local_66.f_470), 8);
						}
					}
					break;
			}
			iVar2++;
		}
	}
}

int func_51(int iParam0)//Position - 0x2982
{
	return iParam0;
}

int func_52(int iParam0)//Position - 0x298C
{
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0x1ACD6691B9C9AA46(iParam0) == Local_66.f_185)
		{
			return 1;
		}
		else if (unk_0x0F3033474C49912D(iParam0, Local_66.f_186, Local_66.f_189, Local_66.f_192, 0, true, 0))
		{
			return 1;
		}
		else if (unk_0x0F3033474C49912D(iParam0, Local_66.f_200, Local_66.f_203, Local_66.f_206, 0, true, 0))
		{
			return 1;
		}
		else if (unk_0x0F3033474C49912D(iParam0, Local_66.f_207, Local_66.f_210, Local_66.f_213, 0, true, 0))
		{
			return 1;
		}
		else if (Local_66.f_199 != -1f)
		{
			if (unk_0x0F3033474C49912D(iParam0, Local_66.f_193, Local_66.f_196, Local_66.f_199, 0, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_53()//Position - 0x2A49
{
	int iVar0;
	var uVar1[10];
	int iVar2;
	int iVar3;
	
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (func_295())
		{
			if (!unk_0xC80D31E4B587871C(Local_66.f_162.f_18, 0))
			{
				iVar2 = 0;
				iVar3 = 0;
				iVar2 = unk_0xD1A659E6867D8FF6(unk_0xFC1458A37D98B502(), &uVar1, -1);
				iVar0 = 0;
				while (iVar0 < Local_66.f_162)
				{
					Local_66.f_162[iVar0] = 0;
					iVar0++;
				}
				iVar0 = 0;
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					if (iVar0 < Local_66.f_162)
					{
						if ((unk_0x6ADD12BF4D6D2587(uVar1[iVar3]) && !unk_0x3AB6A1A9084FB0A4(uVar1[iVar3])) && !unk_0x88DDBE9908752BF0(uVar1[iVar3], 0))
						{
							if (unk_0x4759A34EB65CCA39(uVar1[iVar3], unk_0x7C65CFD05F3B9CE9(unk_0x9EB17624F44A8DA4())))
							{
								Local_66.f_162[iVar0] = uVar1[iVar3];
								Local_66.f_162.f_5[iVar0 /*3*/] = { unk_0xB3328BA8976B416C(uVar1[iVar3], 1) };
								iVar0++;
							}
						}
					}
					iVar3++;
				}
				unk_0x872F1C1F8587CCC7(&(Local_66.f_162.f_18), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_66.f_162)
			{
				if ((unk_0x6ADD12BF4D6D2587(Local_66.f_162[iVar0]) && !unk_0x3AB6A1A9084FB0A4(Local_66.f_162[iVar0])) && !unk_0x88DDBE9908752BF0(Local_66.f_162[iVar0], 0))
				{
					if (unk_0xC80D31E4B587871C(Local_66.f_162.f_18, 1))
					{
						if ((unk_0x53C562FD2B9E3AB0() % 1500) < 50)
						{
						}
						unk_0xB3A8974D2C811672(Local_66.f_162[iVar0], false, 0);
						unk_0xB18E1DBC397238E1(Local_66.f_162[iVar0], false, 0);
						unk_0xEDC33A771FAEB393(Local_66.f_162[iVar0], true);
						unk_0xAA93B7B448E10E40(Local_66.f_162[iVar0], Local_66.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
					else if (!unk_0xDE3C98B57A41E603(Local_66.f_162[iVar0]))
					{
						unk_0xB3A8974D2C811672(Local_66.f_162[iVar0], true, 0);
						unk_0xB18E1DBC397238E1(Local_66.f_162[iVar0], true, 0);
						unk_0xEDC33A771FAEB393(Local_66.f_162[iVar0], false);
						unk_0xAA93B7B448E10E40(Local_66.f_162[iVar0], Local_66.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				iVar0++;
			}
		}
		else
		{
			if (unk_0xC80D31E4B587871C(Local_66.f_162.f_18, 0))
			{
				unk_0x0EE72DB1CD8A3B86(&(Local_66.f_162.f_18), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_66.f_162)
			{
				if ((unk_0x6ADD12BF4D6D2587(Local_66.f_162[iVar0]) && !unk_0x3AB6A1A9084FB0A4(Local_66.f_162[iVar0])) && !unk_0x88DDBE9908752BF0(Local_66.f_162[iVar0], 0))
				{
					if (!unk_0xDE3C98B57A41E603(Local_66.f_162[iVar0]))
					{
						unk_0xB3A8974D2C811672(Local_66.f_162[iVar0], true, 0);
						unk_0xB18E1DBC397238E1(Local_66.f_162[iVar0], true, 0);
						unk_0xEDC33A771FAEB393(Local_66.f_162[iVar0], false);
						unk_0xAA93B7B448E10E40(Local_66.f_162[iVar0], Local_66.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				iVar0++;
			}
		}
	}
}

void func_54()//Position - 0x2CFA
{
	switch (iLocal_99)
	{
		case 0:
			if (func_295())
			{
				unk_0xA5D622458FE6D993(unk_0x9EB17624F44A8DA4());
				unk_0x6450931B826B49D9("oddjobs@shop_robbery@rob_till");
				unk_0x6450931B826B49D9("misscommon@response");
				unk_0x128A5DCCD09CCA17(func_63(iLocal_80), false);
				unk_0x6FF834D85E2DD4C6(joaat("prop_choc_ego"));
				unk_0x6FF834D85E2DD4C6(joaat("prop_choc_meto"));
				unk_0x6FF834D85E2DD4C6(joaat("prop_choc_pq"));
				if (!bLocal_86)
				{
					unk_0x6FF834D85E2DD4C6(Local_66.f_46.f_26);
					unk_0x6FF834D85E2DD4C6(Local_66.f_46.f_27);
				}
				iLocal_99 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x1CF95440F1970B4F("SCRIPT\MARKET_CASH_REGISTER", false, -1))
			{
				return;
			}
			if (!unk_0x3A801AA34DD821BE("oddjobs@shop_robbery@rob_till"))
			{
				return;
			}
			if (!unk_0x3A801AA34DD821BE("misscommon@response"))
			{
				return;
			}
			if (!unk_0x9A0B2ED5055D3F0B(joaat("prop_choc_ego")))
			{
				return;
			}
			if (!unk_0x9A0B2ED5055D3F0B(joaat("prop_choc_meto")))
			{
				return;
			}
			if (!unk_0x9A0B2ED5055D3F0B(joaat("prop_choc_pq")))
			{
				return;
			}
			if (!bLocal_86)
			{
				if (!unk_0x9A0B2ED5055D3F0B(Local_66.f_46.f_26))
				{
					return;
				}
				if (!unk_0x9A0B2ED5055D3F0B(Local_66.f_46.f_27))
				{
					return;
				}
			}
			if (!func_61("SNK_MNU", iLocal_80, 0))
			{
				return;
			}
			if (!func_1(Local_66.f_470, 4))
			{
				if (!func_1(Local_66.f_470, 1024))
				{
					iLocal_98[0] = unk_0x5E35CF35E65D69B9(func_60(0), func_59(0), true, true, false);
					iLocal_98[1] = unk_0x5E35CF35E65D69B9(func_60(1), func_59(1), true, true, false);
					iLocal_98[2] = unk_0x5E35CF35E65D69B9(func_60(2), func_59(2), true, true, false);
					unk_0xB3A8974D2C811672(iLocal_98[0], false, 0);
					unk_0xB3A8974D2C811672(iLocal_98[1], false, 0);
					unk_0xB3A8974D2C811672(iLocal_98[2], false, 0);
					func_286(&(Local_66.f_470), 1024);
				}
				func_286(&(Local_66.f_470), 4);
				iLocal_99 = 2;
			}
			break;
		
		case 2:
			if (!func_295())
			{
				func_55();
				func_293(&(Local_66.f_470), 4);
				iLocal_99 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_66.f_470, 4))
			{
				func_55();
				func_293(&(Local_66.f_470), 4);
			}
			break;
	}
}

void func_55()//Position - 0x2F04
{
	unk_0xFCCDDE0E48CF9588("oddjobs@shop_robbery@rob_till");
	unk_0xFCCDDE0E48CF9588("misscommon@response");
	unk_0x751FF861325F816B("SCRIPT\MARKET_CASH_REGISTER");
	unk_0x137FC8E0F58D9E0B(func_63(iLocal_80));
	unk_0x14776E43F90DD454(joaat("prop_choc_ego"));
	unk_0x14776E43F90DD454(joaat("prop_choc_meto"));
	unk_0x14776E43F90DD454(joaat("prop_choc_pq"));
	func_56(1, iLocal_80);
	if (!bLocal_86)
	{
		unk_0x14776E43F90DD454(Local_66.f_46.f_26);
		unk_0x14776E43F90DD454(Local_66.f_46.f_27);
	}
}

void func_56(bool bParam0, int iParam1)//Position - 0x2F6D
{
	int iVar0;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17301.f_7931)
	{
		unk_0x3B235F54BDEDFCB5(15);
		Global_17301.f_7931 = 0;
	}
	unk_0xA3E8E2D0F73E92C5(0f);
	if (Global_17301.f_5498[iVar0])
	{
		unk_0xF40900F61CC88931(9, false);
		Global_17301.f_5498[iVar0] = 0;
	}
	if (Global_17301.f_5484[iVar0])
	{
		unk_0x137FC8E0F58D9E0B("CommonMenu");
		Global_17301.f_5484[iVar0] = 0;
	}
	if (Global_17301.f_5491[iVar0])
	{
		unk_0x137FC8E0F58D9E0B("MPShopSale");
		Global_17301.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_57(&(Global_17301.f_5530[iVar0 /*10*/]));
		Global_17301.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17301.f_5591[iVar0] = 0;
	}
}

void func_57(int iParam0)//Position - 0x302B
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x34D11AB5BA7922C2(*iParam0))
		{
			unk_0xA68F7B004463AB6F(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_58(var uParam0, bool bParam1, int iParam2)//Position - 0x3054
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x3A711520F83BAE98() && unk_0x8C504A60C2F379BD())
		{
			iParam2 = unk_0x4362A980E5B3780B();
		}
	}
	StringCopy(&cVar0, unk_0x436287B7DB306165(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x8B948C59217A295D(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_17301.f_5591[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_17301.f_5591[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_17301.f_5591[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

Vector3 func_59(int iParam0)//Position - 0x30F1
{
	switch (iParam0)
	{
		case 0:
			return Local_66.f_486.f_6 - Vector(1f, 0f, 0,1f);
		
		case 1:
			return Local_66.f_486.f_6 - Vector(1f, 0f, 0f);
		
		case 2:
			return Local_66.f_486.f_6 - Vector(1f, 0f, -0,1f);
		
		default:
	}
	return Local_66.f_486.f_6 - Vector(1f, 0f, -0,1f);
}

int func_60(int iParam0)//Position - 0x315B
{
	switch (iParam0)
	{
		case 0:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		default:
	}
	return joaat("prop_choc_pq");
}

bool func_61(char* sParam0, int iParam1, bool bParam2)//Position - 0x3199
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_58(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17301.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xAB019B170BF1309C(&(Global_17301.f_5505[iVar0 /*4*/])))
	{
		unk_0xBCBC53983EC3B1BA(&(Global_17301.f_5505[iVar0 /*4*/]), 9);
		Global_17301.f_5498[iVar0] = 1;
		if (!unk_0x1A0FBC430E1424B4(&(Global_17301.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x128A5DCCD09CCA17("CommonMenu", false);
	Global_17301.f_5484[iVar0] = 1;
	if (!unk_0xA51ADD51711B4A15("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x128A5DCCD09CCA17("MPShopSale", false);
		Global_17301.f_5491[iVar0] = 1;
		if (!unk_0xA51ADD51711B4A15("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17301.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_62(&(Global_17301.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_62(var uParam0)//Position - 0x328F
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x34D11AB5BA7922C2(*uParam0))
			{
				*uParam0 = unk_0xD704C81492296A37(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x34D11AB5BA7922C2(*uParam0))
					{
						uParam0->f_8 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x53C562FD2B9E3AB0();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x34D11AB5BA7922C2(*uParam0))
			{
				uParam0->f_8 = unk_0x53C562FD2B9E3AB0();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x34D11AB5BA7922C2(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

char* func_63(int iParam0)//Position - 0x3331
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

void func_64()//Position - 0x33DD
{
	switch (iLocal_100)
	{
		case 0:
			if (func_295())
			{
				unk_0x6450931B826B49D9(Local_66.f_486.f_1);
				iLocal_100 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x3A801AA34DD821BE(Local_66.f_486.f_1))
			{
				return;
			}
			if (!func_1(Local_66.f_470, 16))
			{
				func_286(&(Local_66.f_470), 16);
				iLocal_100 = 2;
			}
			break;
		
		case 2:
			if (!func_295() && iLocal_63 != 1)
			{
				unk_0xFCCDDE0E48CF9588(Local_66.f_486.f_1);
				func_293(&(Local_66.f_470), 16);
				iLocal_100 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_66.f_470, 16))
			{
				unk_0xFCCDDE0E48CF9588(Local_66.f_486.f_1);
				func_293(&(Local_66.f_470), 16);
			}
			break;
	}
}

void func_65()//Position - 0x34A6
{
	switch (iLocal_119)
	{
		case 0:
			if (Local_66.f_158)
			{
				iLocal_119 = 1;
			}
			break;
		
		case 1:
			if (func_295())
			{
				if (func_14(&(Local_66.f_158.f_1)))
				{
					func_39(&(Local_66.f_158.f_1));
				}
				if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
				{
				}
				if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
				{
					unk_0x2A20836DCD45A0B0(unk_0x9EB17624F44A8DA4());
				}
			}
			else
			{
				func_12(&(Local_66.f_158.f_1));
				iLocal_119 = 2;
			}
			break;
		
		case 2:
			if (func_295())
			{
				iLocal_119 = 1;
			}
			break;
		
		case 3:
			break;
	}
}

void func_66()//Position - 0x3540
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	char* sVar5;
	var uVar6;
	
	func_183();
	if (((((iLocal_58 == 1 || iLocal_58 == 2) && unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0) && !unk_0x3AB6A1A9084FB0A4(Local_66)) && !func_182(-1082130432)) && !unk_0x3AB6A1A9084FB0A4(Local_66.f_2))
	{
		iVar1 = unk_0xDE523AF6F7B269AB(unk_0xFC1458A37D98B502());
		iVar2 = unk_0xC1643F33913289BD(unk_0xFC1458A37D98B502());
		if (((iLocal_64 != 2 && iLocal_64 != 3) && iLocal_64 != 4) && func_295())
		{
			if (!unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			}
		}
		iVar4 = 0;
		switch (iLocal_64)
		{
			case 0:
				if (func_1(Local_66.f_470, 4) && func_24(Local_66) == joaat("weapon_unarmed"))
				{
					if (func_181(iLocal_80, &(Local_66.f_486.f_6), Local_66.f_486.f_9.f_2, &(Local_66.f_102.f_26[0 /*3*/]), &(Local_66.f_102.f_26[1 /*3*/]), &(Local_66.f_102.f_33), &(Local_66.f_102.f_36)))
					{
						vVar3 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
						if (unk_0xBE3C4023003180FC(vVar3, Local_66.f_102.f_33, true) < 5f)
						{
							if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_66.f_102.f_26[0 /*3*/], Local_66.f_102.f_26[1 /*3*/], Local_66.f_102.f_36, 0, true, 0))
							{
								if (unk_0x151F9FFE4C5F866B(unk_0xFC1458A37D98B502(), Local_66.f_102.f_33, 135f))
								{
									if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
									{
									}
									if (((!func_27("SHR_HOLDUP_1") && !func_27("SHR_MENU")) && !func_49()) && func_180())
									{
										func_179("SHR_MENU");
									}
									Local_66.f_469 = -1;
									func_178(&(Local_66.f_469), 4, "SHR_MENU", 0, 0, 0, 0);
									unk_0x0EE72DB1CD8A3B86(&(Local_66.f_162.f_18), 1);
									unk_0x0EE72DB1CD8A3B86(&(Local_66.f_162.f_18), 0);
									iLocal_64 = 1;
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (!unk_0x151F9FFE4C5F866B(unk_0xFC1458A37D98B502(), Local_66.f_102.f_33, 135f) || !func_24(Local_66) == joaat("weapon_unarmed"))
				{
					if (func_27("SHR_MENU"))
					{
						unk_0x3E80C2F7BC665259(1);
					}
					Local_66.f_102.f_22 = -1;
					func_177(&(Local_66.f_469));
					iLocal_64 = 0;
				}
				else if (((!func_27("SHR_MENU") && !func_27("SHR_HOLDUP_1")) && func_180()) && !func_176(Local_66.f_469, 0))
				{
					func_179("SHR_MENU");
				}
				if ((!unk_0xA57E3BD5C64527C7(unk_0xFC1458A37D98B502()) && !unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) && !unk_0x1C2D46BE328E3124(unk_0xFC1458A37D98B502()))
				{
					if (func_174(Local_66.f_469, 1))
					{
						if (func_27("SHR_MENU"))
						{
							unk_0x3E80C2F7BC665259(1);
						}
						unk_0x872F1C1F8587CCC7(&(Local_66.f_162.f_18), 1);
						func_12(&(Local_66.f_102.f_53));
						func_177(&(Local_66.f_469));
						func_173(23, 1);
						if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !unk_0x3AB6A1A9084FB0A4(Local_66.f_2))
						{
							unk_0xAC838A977FB6E6BC(unk_0xFC1458A37D98B502(), Local_66.f_2, 0);
						}
						iLocal_64 = 2;
					}
				}
				break;
			
			case 2:
				if (!unk_0x8EA3C8E091EA5BA4(iLocal_118))
				{
					iLocal_118 = unk_0x5AC38B4D80D4E352(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				func_172(iLocal_80, Local_66.f_486.f_6, Local_66.f_486.f_9.f_2, &(Local_66.f_102), &(Local_66.f_102.f_3), &uVar6);
				unk_0xA215B2F25E63FA31(iLocal_118, Local_66.f_102);
				unk_0xBEBD5CAE3510CD2A(iLocal_118, Local_66.f_102.f_3, 2);
				unk_0xE43C573FE3C5D758(iLocal_118, 35f);
				unk_0x7E4FCDC8BAD0CF6D(iLocal_118, "HAND_SHAKE", 0,1f);
				unk_0x7849794435F39D49(iLocal_118, true);
				unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
				if (unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
				{
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
					func_286(&(Local_66.f_470), 2048);
				}
				Local_66.f_102.f_46 = func_63(iLocal_80);
				Local_66.f_102.f_23 = 0;
				Local_66.f_102.f_24 = 3;
				func_171(0);
				func_170(1, 1, 0, 0, 0);
				func_169(1, 2, 1, 1, 1);
				func_168(func_4(iLocal_80));
				func_166(1, Local_66.f_102.f_46, Local_66.f_102.f_46);
				func_165();
				func_161(0, "SNK_ITEM1", 0, 1, 0, 0);
				func_161(0, "ITEM_COST", 1, 1, 0, 0);
				func_157(func_160(0), 0);
				func_161(1, "SNK_ITEM2", 0, 1, 0, 0);
				func_161(1, "ITEM_COST", 1, 1, 0, 0);
				func_157(func_160(1), 0);
				func_161(2, "SNK_ITEM3", 0, 1, 0, 0);
				func_161(2, "ITEM_COST", 1, 1, 0, 0);
				func_157(func_160(2), 0);
				func_156(0);
				func_155(Local_66.f_102.f_23, 1, 1);
				func_154("SNK_ITEM1_D", 0, 0);
				func_153(201, "ITEM_SELECT", -1, 0);
				func_153(202, "ITEM_BACK", -1, 0);
				func_153(203, "SNK_LIFT", -1, 0);
				iLocal_64 = 3;
				break;
			
			case 3:
				iVar4 = 0;
				if (unk_0xB9D80B12FE4456A5())
				{
					if (unk_0x2E4EC2FA6A038490(2))
					{
						unk_0x4FB260623DD93924(0, 1, 1);
						unk_0x4FB260623DD93924(0, 2, 1);
						unk_0x2DB625A7D089C175(0, 237, 1);
						unk_0x2DB625A7D089C175(0, 238, 1);
						unk_0x2DB625A7D089C175(0, 241, 1);
						unk_0x2DB625A7D089C175(0, 242, 1);
						func_150(0, 0, 0, 1);
						func_149(0, -1, 1);
						if (func_148())
						{
							if (Global_4265875 != Local_66.f_102.f_23)
							{
								unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								Local_66.f_102.f_23 = Global_4265875;
								func_155(Local_66.f_102.f_23, 1, 1);
								Local_66.f_102.f_37 = 0;
								Local_66.f_102.f_41 = 0;
								Local_66.f_102.f_42 = 0;
								sVar5 = func_147(Local_66.f_102.f_23);
								if (unk_0xA1800C71952C596F(sVar5))
								{
									func_154(sVar5, 0, 0);
								}
							}
							else
							{
								iVar4 = 1;
							}
						}
					}
				}
				func_110(1, iLocal_80, 1, 0, 1, -1082130432, 0, 0);
				func_106();
				if (unk_0x4CD14B4B1E8BD8BA(2, 201) || iVar4 == 1)
				{
					Local_66.f_102.f_37 = 1;
					Local_66.f_102.f_41 = 0;
					Local_66.f_102.f_42 = 0;
					if (Local_66.f_102.f_40 && Local_66.f_102.f_43)
					{
						Local_66.f_102.f_44 = 1;
						unk_0x4AFBCBFDE748D4E0(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", true);
						iLocal_108 = 1;
						iLocal_111 = Local_66.f_102.f_23;
						iLocal_64 = 4;
					}
					else
					{
						Local_66.f_102.f_44 = 0;
						unk_0x4AFBCBFDE748D4E0(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", true);
					}
				}
				if (unk_0x4CD14B4B1E8BD8BA(2, 203))
				{
					iLocal_64 = 6;
					unk_0x4AFBCBFDE748D4E0(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", true);
					func_105();
				}
				if (unk_0x4CD14B4B1E8BD8BA(2, 202) || unk_0x58F436C557A0FD7A(2, 238))
				{
					iLocal_64 = 7;
					Local_66.f_102.f_45 = unk_0x53C562FD2B9E3AB0();
					unk_0x4AFBCBFDE748D4E0(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", true);
					func_105();
				}
				break;
			
			case 4:
				func_110(1, iLocal_80, 1, 0, 1, -1082130432, 0, 0);
				switch (Local_66.f_102.f_23)
				{
					case 0:
						iVar0 = func_160(Local_66.f_102.f_23);
						if (iVar1 + 10 > iVar2)
						{
							unk_0xE01CE1EBCD7EE551(unk_0xFC1458A37D98B502(), iVar2, 0);
						}
						else
						{
							unk_0xE01CE1EBCD7EE551(unk_0xFC1458A37D98B502(), iVar1 + 10, 0);
						}
						break;
					
					case 1:
						iVar0 = func_160(Local_66.f_102.f_23);
						if (iVar1 + 20 > iVar2)
						{
							unk_0xE01CE1EBCD7EE551(unk_0xFC1458A37D98B502(), iVar2, 0);
						}
						else
						{
							unk_0xE01CE1EBCD7EE551(unk_0xFC1458A37D98B502(), iVar1 + 20, 0);
						}
						break;
					
					case 2:
						iVar0 = func_160(Local_66.f_102.f_23);
						if (iVar1 + 15 > iVar2)
						{
							unk_0xE01CE1EBCD7EE551(unk_0xFC1458A37D98B502(), iVar2, 0);
						}
						else
						{
							unk_0xE01CE1EBCD7EE551(unk_0xFC1458A37D98B502(), iVar1 + 15, 0);
						}
						break;
				}
				func_68(func_100(), 97, iVar0);
				if (!Local_66.f_102.f_39)
				{
					iLocal_51 = 34;
					Local_66.f_102.f_39 = 1;
				}
				func_12(&(Local_66.f_102.f_53));
				iLocal_64 = 3;
				break;
			
			case 5:
				if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					if (!bLocal_86)
					{
					}
					iLocal_64 = 6;
				}
				break;
			
			case 6:
				switch (Local_66.f_102.f_23)
				{
					case 0:
						if (iVar1 + 10 > iVar2)
						{
							unk_0xE01CE1EBCD7EE551(unk_0xFC1458A37D98B502(), iVar2, 0);
						}
						else
						{
							unk_0xE01CE1EBCD7EE551(unk_0xFC1458A37D98B502(), iVar1 + 10, 0);
						}
						break;
					
					case 1:
						if (iVar1 + 20 > iVar2)
						{
							unk_0xE01CE1EBCD7EE551(unk_0xFC1458A37D98B502(), iVar2, 0);
						}
						else
						{
							unk_0xE01CE1EBCD7EE551(unk_0xFC1458A37D98B502(), iVar1 + 20, 0);
						}
						break;
					
					case 2:
						if (iVar1 + 15 > iVar2)
						{
							unk_0xE01CE1EBCD7EE551(unk_0xFC1458A37D98B502(), iVar2, 0);
						}
						else
						{
							unk_0xE01CE1EBCD7EE551(unk_0xFC1458A37D98B502(), iVar1 + 15, 0);
						}
						break;
				}
				unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), true, 0);
				func_173(23, 0);
				iLocal_51 = 35;
				if (!unk_0x3AB6A1A9084FB0A4(Local_66.f_2) && func_1(Local_66.f_470, 4))
				{
					unk_0x12C9D41D52A560D6(Local_66.f_2, "misscommon@response", "give_me_a_break", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
				if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) < 1)
				{
					func_15(1, 0);
				}
				iLocal_64 = 8;
				break;
			
			case 7:
				if ((unk_0x53C562FD2B9E3AB0() - Local_66.f_102.f_45) > 1000)
				{
					iLocal_64 = 0;
				}
				else
				{
					unk_0x01B48CB2F72AE113(2, 193);
					unk_0x01B48CB2F72AE113(2, 202);
					unk_0x01B48CB2F72AE113(2, 188);
					unk_0x01B48CB2F72AE113(2, 187);
					unk_0x01B48CB2F72AE113(2, 189);
					unk_0x01B48CB2F72AE113(2, 190);
				}
				break;
			
			case 8:
				break;
		}
	}
	else
	{
		if (iLocal_64 != 8 && func_1(Local_66.f_470, 4))
		{
			if ((iLocal_64 == 3 || iLocal_64 == 2) || iLocal_64 == 4)
			{
				func_105();
			}
			iLocal_64 = 8;
		}
		if (func_27("SHR_SNACKS"))
		{
			unk_0x3E80C2F7BC665259(1);
			func_177(&(Local_66.f_469));
		}
		if (func_27("SHR_MENU"))
		{
			unk_0x3E80C2F7BC665259(1);
			func_177(&(Local_66.f_469));
		}
		if (unk_0xC80D31E4B587871C(Local_66.f_162.f_18, 1) && iLocal_101 < 2)
		{
			unk_0x0EE72DB1CD8A3B86(&(Local_66.f_162.f_18), 1);
		}
		if (func_1(Local_66.f_470, 4))
		{
			func_67();
		}
	}
}

void func_67()//Position - 0x3ED2
{
	if (func_1(Local_66.f_470, 2048))
	{
		if (!unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
			}
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			func_293(&(Local_66.f_470), 2048);
		}
	}
	Local_66.f_102.f_37 = 0;
	unk_0x0EE72DB1CD8A3B86(&(Local_66.f_162.f_18), 1);
	if (unk_0x8EA3C8E091EA5BA4(iLocal_118))
	{
		unk_0x02934BABFD4CD384(iLocal_118, 0);
	}
}

int func_68(int iParam0, int iParam1, int iParam2)//Position - 0x3F43
{
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_69(Global_104555.f_28020[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_69(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3F8C
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_99();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_98(99, 1);
					func_97(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_97(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_97(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_82(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_78(5))
					{
						fVar0 = 0,9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_97(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_97(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_97(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_78(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_97(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_97(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_97(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_97(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_97(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_97(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
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
					switch (iParam0)
					{
						case 0:
							func_97(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_97(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_97(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x5D6DB7DE15F99EF2())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_97(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_97(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_97(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_97(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_97(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_97(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_78(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_97(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_97(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_97(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_97(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_97(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_97(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_77(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_98(95, iParam3);
					break;
				
				case 1:
					func_98(97, iParam3);
					break;
				
				case 2:
					func_98(96, iParam3);
					break;
			}
			func_98(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_72(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_72(iVar1);
	}
	iVar5 = (Global_53077[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53077[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53077[iVar2] = 2147483647;
				}
				else
				{
					Global_53077[iVar2] = (Global_53077[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_97(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_97(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_97(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53077[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53077[iVar2];
			Global_53077[iVar2] = (Global_53077[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_104555.f_20534.f_233[iVar2 /*69*/].f_2[Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_104555.f_20534.f_233[iVar2 /*69*/].f_2[Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_104555.f_20534.f_233[iVar2 /*69*/].f_2[Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_104555.f_20534.f_233[iVar2 /*69*/]++;
		Global_104555.f_20534.f_233[iVar2 /*69*/].f_1++;
		if (Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_71(iParam0);
	if (Global_35861 == 15)
	{
		func_70(0);
	}
	return 1;
}

void func_70(bool bParam0)//Position - 0x458C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53085[iVar0 /*3*/][0] = Global_104555.f_20534[iVar0];
		Global_53085.f_31[iVar0 /*3*/][0] = Global_104555.f_20534.f_11[iVar0];
		Global_53085.f_62[iVar0 /*3*/][0] = Global_104555.f_20534.f_22[iVar0];
		Global_53085.f_93[iVar0 /*3*/][0] = Global_104555.f_20534.f_33[iVar0];
		Global_53085.f_124[iVar0 /*3*/][0] = Global_104555.f_20534.f_44[iVar0];
		Global_53085.f_155[iVar0 /*3*/][0] = Global_104555.f_20534.f_55[iVar0];
		Global_53085.f_186[iVar0 /*3*/][0] = Global_104555.f_20534.f_66[iVar0];
		Global_53085.f_217[iVar0 /*3*/][0] = Global_104555.f_20534.f_77[iVar0];
		Global_53085.f_248[iVar0 /*3*/][0] = Global_104555.f_20534.f_88[iVar0];
		if (!bParam0)
		{
			Global_53085[iVar0 /*3*/][1] = Global_104555.f_20534[iVar0];
			Global_53085.f_31[iVar0 /*3*/][1] = Global_104555.f_20534.f_11[iVar0];
			Global_53085.f_62[iVar0 /*3*/][1] = Global_104555.f_20534.f_22[iVar0];
			Global_53085.f_93[iVar0 /*3*/][1] = Global_104555.f_20534.f_33[iVar0];
			Global_53085.f_124[iVar0 /*3*/][1] = Global_104555.f_20534.f_44[iVar0];
			Global_53085.f_155[iVar0 /*3*/][1] = Global_104555.f_20534.f_55[iVar0];
			Global_53085.f_186[iVar0 /*3*/][1] = Global_104555.f_20534.f_66[iVar0];
			Global_53085.f_217[iVar0 /*3*/][1] = Global_104555.f_20534.f_77[iVar0];
			Global_53085.f_248[iVar0 /*3*/][1] = Global_104555.f_20534.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_71(int iParam0)//Position - 0x480E
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

void func_72(int iParam0)//Position - 0x4868
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_75(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x3A711520F83BAE98())
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0) || unk_0xC80D31E4B587871C(Global_2097152[func_74() /*12130*/].f_7676.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Global_2097152[func_74() /*12130*/].f_7676.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xE3C33644878DCCFD("COUP_RED");
		unk_0xA6D2B267C377D7B2(func_73(iParam0));
		unk_0x9F42263EE935D84B(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_73(int iParam0)//Position - 0x493E
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		default:
	}
	return "";
}

int func_74()//Position - 0x49C5
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_75(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x49D2
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
		iParam2 = func_76();
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

int func_76()//Position - 0x4E9E
{
	return Global_1312736;
}

void func_77(int iParam0)//Position - 0x4EAA
{
	func_98(93, iParam0);
	func_98(29, iParam0);
	func_98(30, iParam0);
}

bool func_78(int iParam0)//Position - 0x4ECA
{
	if (iParam0 == 8)
	{
		return func_79(129, -1, -1);
	}
	if (!unk_0x3A711520F83BAE98())
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2097152[func_74() /*12130*/].f_7676.f_10, iParam0);
}

int func_79(int iParam0, int iParam1, int iParam2)//Position - 0x4F18
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_76();
	}
	iVar1 = func_81(iParam0, iParam1);
	uVar2 = func_80(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_80(int iParam0)//Position - 0x4F55
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

int func_81(int iParam0, int iParam1)//Position - 0x5215
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_76();
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

int func_82(bool bParam0)//Position - 0x54B7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xF9F3676C0864728D(27))
	{
		return 0;
	}
	if (unk_0xFA3CE529DBB66C85(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xFA3CE529DBB66C85(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xFA3CE529DBB66C85(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xFA3CE529DBB66C85(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xBFFF62F75445099D(joaat("num_cash_spent"), iVar1, 1);
		func_96(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_83(27, 1);
	return 1;
}

int func_83(int iParam0, int iParam1)//Position - 0x556E
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_84(iParam0, iParam1);
}

int func_84(int iParam0, int iParam1)//Position - 0x5589
{
	if (func_309(14) && !func_95(iParam0))
	{
		return 0;
	}
	if (unk_0xF9F3676C0864728D(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25480 != 0 && !Global_70856)
	{
		return 0;
	}
	if (func_94(&Global_4267379))
	{
		if (func_92(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_85(&Global_4267379, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x603018B05987F5A9(iParam0))
		{
			return 0;
		}
		if (unk_0xF9F3676C0864728D(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_85(var uParam0, int iParam1)//Position - 0x5626
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_309(14) && !func_95(iParam1))
	{
		return 0;
	}
	if (func_92(uParam0, iParam1))
	{
		return 0;
	}
	if (func_91(uParam0) < 0f)
	{
		func_90(uParam0, 0);
	}
	func_88(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_86(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_86(var uParam0, int iParam1)//Position - 0x56D7
{
	int iVar0;
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_309(14) && !func_95(iParam1))
	{
		return 0;
	}
	if (func_92(uParam0, iParam1))
	{
		return 0;
	}
	if (func_91(uParam0) < 0f)
	{
		func_90(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_87(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_87(var uParam0, int iParam1)//Position - 0x5752
{
	return (*uParam0)[iParam1] == 78;
}

void func_88(var uParam0)//Position - 0x5763
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_89(uParam0, iVar0);
		iVar0++;
	}
	func_90(uParam0, (Global_4267378 - 0,5f));
}

void func_89(var uParam0, int iParam1)//Position - 0x5797
{
	(*uParam0)[iParam1] = 78;
}

void func_90(var uParam0, float fParam1)//Position - 0x57A7
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_91(var uParam0)//Position - 0x57C4
{
	return uParam0->f_80;
}

bool func_92(var uParam0, int iParam1)//Position - 0x57D0
{
	return func_93(uParam0, iParam1) != -1;
}

int func_93(var uParam0, int iParam1)//Position - 0x57E2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_94(var uParam0)//Position - 0x580F
{
	return uParam0->f_79 == 1;
}

int func_95(int iParam0)//Position - 0x581D
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

int func_96(int iParam0, int iParam1)//Position - 0x586D
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xDE008D1391A23FFE(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x2FD2B2D208844275(iParam0, iParam1);
	}
	return 0;
}

void func_97(int iParam0, int iParam1)//Position - 0x58BE
{
	int iVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xBFFF62F75445099D(iParam0, iVar0, 1);
}

void func_98(int iParam0, int iParam1)//Position - 0x58E1
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51645[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x3A711520F83BAE98())
	{
		return;
	}
	if (Global_51645[iParam0 /*7*/])
	{
		unk_0xFA3CE529DBB66C85(Global_51645[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xBFFF62F75445099D(Global_51645[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_99()//Position - 0x593E
{
	int iVar0;
	
	if (unk_0x4CAC17F5502E6EEB())
	{
		unk_0xFA3CE529DBB66C85(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53077[0] == iVar0)
		{
			Global_53077[0] = iVar0;
		}
		unk_0xFA3CE529DBB66C85(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53077[1] == iVar0)
		{
			Global_53077[1] = iVar0;
		}
		unk_0xFA3CE529DBB66C85(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53077[2] == iVar0)
		{
			Global_53077[2] = iVar0;
		}
	}
}

int func_100()//Position - 0x59B3
{
	func_101();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_101()//Position - 0x59CC
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_104(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_103(unk_0xFC1458A37D98B502());
			if (func_102(iVar0) && (!func_309(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_102(Global_104555.f_2353.f_539.f_4301))
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

bool func_102(int iParam0)//Position - 0x5AC9
{
	return iParam0 < 3;
}

int func_103(int iParam0)//Position - 0x5AD5
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_104(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_104(int iParam0)//Position - 0x5B12
{
	if (func_102(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_105()//Position - 0x5B3C
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
	}
	func_293(&(Local_66.f_470), 2048);
	unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
	unk_0xBB9A3C553EECB180(0f);
	unk_0x7C9705890EF6612E(0f, 1065353216);
	func_173(23, 0);
	Local_66.f_102.f_37 = 0;
	unk_0x0EE72DB1CD8A3B86(&(Local_66.f_162.f_18), 1);
	if (unk_0x8EA3C8E091EA5BA4(iLocal_118))
	{
		unk_0x02934BABFD4CD384(iLocal_118, 0);
	}
	unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
}

void func_106()//Position - 0x5BB4
{
	char* sVar0;
	
	unk_0x01B48CB2F72AE113(2, 193);
	unk_0x01B48CB2F72AE113(2, 202);
	unk_0x01B48CB2F72AE113(2, 188);
	unk_0x01B48CB2F72AE113(2, 187);
	unk_0x01B48CB2F72AE113(2, 189);
	unk_0x01B48CB2F72AE113(2, 190);
	if (func_109())
	{
		Local_66.f_102.f_37 = 0;
		func_39(&(Local_66.f_102.f_53));
		Local_66.f_102.f_23 = (Local_66.f_102.f_23 - 1);
		if (Local_66.f_102.f_23 < 0)
		{
			Local_66.f_102.f_23 = (Local_66.f_102.f_24 - 1);
		}
		unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_155(Local_66.f_102.f_23, 1, 1);
		sVar0 = func_147(Local_66.f_102.f_23);
		Local_66.f_102.f_41 = 0;
		Local_66.f_102.f_42 = 0;
		if (unk_0xA1800C71952C596F(sVar0))
		{
			func_154(sVar0, 0, 0);
		}
	}
	if (func_108())
	{
		Local_66.f_102.f_37 = 0;
		func_39(&(Local_66.f_102.f_53));
		Local_66.f_102.f_23++;
		if (Local_66.f_102.f_23 > (Local_66.f_102.f_24 - 1))
		{
			Local_66.f_102.f_23 = 0;
		}
		unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_155(Local_66.f_102.f_23, 1, 1);
		sVar0 = func_147(Local_66.f_102.f_23);
		Local_66.f_102.f_41 = 0;
		Local_66.f_102.f_42 = 0;
		if (unk_0xA1800C71952C596F(sVar0))
		{
			func_154(sVar0, 0, 0);
		}
	}
	if (!Local_66.f_102.f_41)
	{
		Local_66.f_102.f_40 = func_107(func_103(unk_0xFC1458A37D98B502())) >= func_160(Local_66.f_102.f_23);
		Local_66.f_102.f_41 = 1;
	}
	if (!Local_66.f_102.f_42)
	{
		Local_66.f_102.f_43 = unk_0xDE523AF6F7B269AB(unk_0xFC1458A37D98B502()) < unk_0xC1643F33913289BD(unk_0xFC1458A37D98B502());
		Local_66.f_102.f_42 = 1;
	}
	if (Local_66.f_102.f_37)
	{
		if (func_40(&(Local_66.f_102.f_53)) < 3f)
		{
			if (Local_66.f_102.f_44)
			{
				func_154("SNK_BOUGHT", 0, 0);
			}
			else if (!Local_66.f_102.f_40)
			{
				func_154("SNK_AFFORD", 0, 0);
			}
			else if (!Local_66.f_102.f_43)
			{
				func_154("SNK_NEEDED", 0, 0);
			}
		}
		else
		{
			Local_66.f_102.f_37 = 0;
			Local_66.f_102.f_44 = 0;
			func_39(&(Local_66.f_102.f_53));
			sVar0 = func_147(Local_66.f_102.f_23);
			if (unk_0xA1800C71952C596F(sVar0))
			{
				func_154(sVar0, 0, 0);
			}
		}
	}
}

int func_107(int iParam0)//Position - 0x5DD3
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0xFA3CE529DBB66C85(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xFA3CE529DBB66C85(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xFA3CE529DBB66C85(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_108()//Position - 0x5E2B
{
	float fVar0;
	
	fVar0 = unk_0x869308DF4F5FB0C3(2, 219);
	if ((fVar0 > 0,8f || unk_0xF2B58F79D29425B4(2, 187)) || unk_0xE8C126B7ADBB9D63(2, 242))
	{
		if (!func_14(&iLocal_115))
		{
			func_11(&iLocal_115);
			return 1;
		}
		else if (func_8(&iLocal_115) > 0,25f)
		{
			func_12(&iLocal_115);
			return 1;
		}
	}
	else if (func_14(&iLocal_115))
	{
		func_39(&iLocal_115);
	}
	return 0;
}

int func_109()//Position - 0x5EAA
{
	float fVar0;
	
	fVar0 = unk_0x869308DF4F5FB0C3(2, 219);
	if ((fVar0 < -0,8f || unk_0xF2B58F79D29425B4(2, 188)) || unk_0xE8C126B7ADBB9D63(2, 241))
	{
		if (!func_14(&iLocal_112))
		{
			func_11(&iLocal_112);
			return 1;
		}
		else if (func_8(&iLocal_112) > 0,25f)
		{
			func_12(&iLocal_112);
			return 1;
		}
	}
	else if (func_14(&iLocal_112))
	{
		func_39(&iLocal_112);
	}
	return 0;
}

void func_110(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0x5F29
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
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	int iVar53;
	bool bVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar65[64];
	float fVar66;
	int iVar67;
	float fVar68;
	float fVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_144(0, bParam6))
	{
		return;
	}
	unk_0x73509F6FDA1DB386(76, 84);
	unk_0xE7C11B6F2CF973B6(-0,05f, -0,05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17301)
	{
		if (func_142(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = fVar37;
			fVar57 = fVar36;
			fVar56 = (fVar56 + 0f);
		}
		else
		{
			Global_17301 = 0;
		}
	}
	if (unk_0x8B948C59217A295D(&(Global_17301.f_1)) == unk_0x8B948C59217A295D("HIDE"))
	{
		fVar58 = Global_17299;
	}
	else
	{
		fVar58 = (((Global_17299 + fVar56) + 0,034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17300;
	}
	fVar61 = 1f;
	if (bParam7)
	{
		unk_0x5113D2C928A121B2(&iVar59, &iVar60);
		fVar62 = unk_0xB6936205ED728A9D(0);
		if (func_141())
		{
			iVar59 = system::round((system::to_float(iVar60) * fVar62));
		}
		fVar63 = (system::to_float(iVar59) / system::to_float(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_141())
		{
			fVar61 = 1f;
		}
		iVar59 = system::round((system::to_float(iVar59) / fVar61));
		iVar60 = system::round((system::to_float(iVar60) / fVar61));
	}
	else
	{
		unk_0x9A72C8F89A53C2D1(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17301.f_5598)
		{
			if (unk_0x8B948C59217A295D(&(Global_17301.f_1)) == unk_0x8B948C59217A295D("HIDE"))
			{
				fVar49 = Global_17299;
			}
			else
			{
				if (Global_17301)
				{
					StringCopy(&cVar64, func_140(29), 64);
					StringCopy(&cVar65, func_137(29, 1), 64);
					if (unk_0x8B948C59217A295D(&(Global_17301.f_6719[29 /*16*/])) == -1487683087)
					{
						func_136(Global_17298, Global_17299, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
						unk_0xEFB3EC0CDCC33841(&cVar64, &cVar65, (Global_17298 + (fParam5 * 0,5f)), (Global_17299 + ((fVar56 - 0f) * 0,5f)), fVar57, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xEFB3EC0CDCC33841(&cVar64, &cVar65, (Global_17298 + (fParam5 * 0,5f)), (Global_17299 + ((fVar56 - 0f) * 0,5f)), fParam5, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17301.f_7901)
				{
					iVar1 = Global_17301.f_7897;
					iVar2 = Global_17301.f_7898;
					iVar3 = Global_17301.f_7899;
					iVar4 = Global_17301.f_7900;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_136(Global_17298, (Global_17299 + fVar56), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17299 + fVar56) + 0,034722f) + 0f);
				if (unk_0x8B948C59217A295D(&(Global_17301.f_1)) != 0)
				{
					func_135();
					unk_0x76CCD673085CBF57(&(Global_17301.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17301.f_68)
					{
						if (Global_17301.f_5[iVar14] == 2)
						{
							unk_0x6223D539BCD39E76(Global_17301.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17301.f_5[iVar14] == 3)
						{
							unk_0x32AD2F36F6EF5A1F(Global_17301.f_14[iVar16], Global_17301.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17301.f_5[iVar14] == 1)
						{
							unk_0xA6D2B267C377D7B2(&(Global_17301.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17301.f_5[iVar14] == 8)
						{
							unk_0xA6D2B267C377D7B2(&(Global_17301.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17301.f_5[iVar14] == 5)
						{
							unk_0x854FACC4E5F40C82(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 6)
						{
							unk_0xA6D2B267C377D7B2(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 7)
						{
							unk_0x854FACC4E5F40C82(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 9)
						{
							unk_0x854FACC4E5F40C82(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xD3DA9EADE295C3C5((Global_17298 + 0,00390625f), ((Global_17299 + fVar56) + 0,00416664f), 0);
				}
				if (Global_17301.f_5601 > Global_17301.f_5095)
				{
					if (Global_17301.f_5604 != 0)
					{
						func_135();
						func_133((((Global_17298 + fParam5) - 0,00390625f) - func_134("CM_ITEM_COUNT", Global_17301.f_5604, Global_17301.f_5603)), ((Global_17299 + fVar56) + 0,00416664f), "CM_ITEM_COUNT", Global_17301.f_5604, Global_17301.f_5603);
					}
				}
			}
			iVar6 = Global_17301.f_5605;
			iVar9 = 0;
			fVar66 = fVar49;
			if (Global_17301.f_7911)
			{
				iVar1 = Global_17301.f_7907;
				iVar2 = Global_17301.f_7908;
				iVar3 = Global_17301.f_7909;
				iVar4 = Global_17301.f_7910;
			}
			else
			{
				unk_0x31758B9A51671C43(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17301.f_5095 && iVar6 <= Global_17301.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17301.f_5355[iVar6])
					{
						if (Global_17301.f_5226[iVar6] && iVar6 != Global_17301.f_5605)
						{
							fVar49 = (fVar49 + 0,00277776f);
						}
						fVar55 = 0,034722f;
						if (Global_17301.f_5612[iVar6] != 0f)
						{
							fVar55 = Global_17301.f_5612[iVar6];
						}
						fVar49 = (fVar49 + fVar55);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar55 = 0,034722f;
					fVar49 = (fVar49 + fVar55);
					iVar9++;
					if (Global_17301.f_5088 <= 1)
					{
						Global_17301.f_5088++;
					}
					iVar53 = 1;
				}
			}
			unk_0xEFB3EC0CDCC33841("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0,5f)), ((fVar66 + ((fVar49 - fVar66) * 0,5f)) - 0,00138888f), fParam5, (fVar49 - fVar66), 0f, 255, 255, 255, 255, 0);
			if (Global_17301.f_5601 > Global_17301.f_5095)
			{
				if (Global_17301.f_7916)
				{
					iVar1 = Global_17301.f_7912;
					iVar2 = Global_17301.f_7913;
					iVar3 = Global_17301.f_7914;
					iVar4 = Global_17301.f_7915;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_136(Global_17298, (fVar49 + 0f), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { unk_0x62415D7FD7ADB9EE("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0,5f / fVar61));
				vVar38.y = (vVar38.y * (0,5f / fVar61));
				if (Global_17301.f_7929)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x31758B9A51671C43(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEFB3EC0CDCC33841("CommonMenu", "shop_arrows_upANDdown", (Global_17298 + (fParam5 * 0,5f)), ((fVar49 + 0f) + (0,034722f * 0,5f)), ((vVar38.x / 1280f) * fVar61), ((vVar38.y / 720f) * fVar61), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0,034722f));
			}
			if (unk_0x8B948C59217A295D(&(Global_17301.f_4562)) != 0 && Global_17301.f_4636 != -1)
			{
				fVar49 = (fVar49 + (0,00277776f * 2f));
				fVar40 = (Global_17298 + 0,0046875f);
				if (Global_17301.f_4638 != 0)
				{
					func_142(Global_17301.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17298 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_132(fVar40);
				unk_0x359D94A1D62654F7(&(Global_17301.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17301.f_4632)
				{
					if (Global_17301.f_4566[iVar14] == 2)
					{
						unk_0x6223D539BCD39E76(Global_17301.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17301.f_4566[iVar14] == 3)
					{
						unk_0x32AD2F36F6EF5A1F(Global_17301.f_4575[iVar16], Global_17301.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17301.f_4566[iVar14] == 1)
					{
						unk_0xA6D2B267C377D7B2(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 5)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 6)
					{
						unk_0xA6D2B267C377D7B2(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 7)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 9)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x019EBC578ADE3C09(fVar40, (fVar49 + 0,00277776f));
				unk_0x31758B9A51671C43(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_136(Global_17298, (fVar49 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17301.f_7921)
				{
					iVar1 = Global_17301.f_7917;
					iVar2 = Global_17301.f_7918;
					iVar3 = Global_17301.f_7919;
					iVar4 = Global_17301.f_7920;
				}
				else
				{
					unk_0x31758B9A51671C43(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEFB3EC0CDCC33841("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0,5f)), ((fVar49 + ((((unk_0xAF6F79C616D36B6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0xAF6F79C616D36B6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_132(fVar40);
				unk_0x76CCD673085CBF57(&(Global_17301.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17301.f_4632)
				{
					if (Global_17301.f_4566[iVar14] == 2)
					{
						unk_0x6223D539BCD39E76(Global_17301.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17301.f_4566[iVar14] == 3)
					{
						unk_0x32AD2F36F6EF5A1F(Global_17301.f_4575[iVar16], Global_17301.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17301.f_4566[iVar14] == 1)
					{
						unk_0xA6D2B267C377D7B2(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 5)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 6)
					{
						unk_0xA6D2B267C377D7B2(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 7)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 9)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 8)
					{
						unk_0xA6D2B267C377D7B2(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xD3DA9EADE295C3C5(fVar40, (fVar49 + 0,00277776f), 0);
				if (Global_17301.f_4638 != 0)
				{
					func_142(Global_17301.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					func_131(Global_17301.f_4638, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xEFB3EC0CDCC33841(func_140(Global_17301.f_4638), func_137(Global_17301.f_4638, 1), ((Global_17298 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar49 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0xAF6F79C616D36B6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17301.f_4636 > 0)
				{
					if ((unk_0x53C562FD2B9E3AB0() - Global_17301.f_4637) > Global_17301.f_4636)
					{
						StringCopy(&(Global_17301.f_4562), "", 16);
						Global_17301.f_4636 = -1;
					}
				}
			}
			if (unk_0x8B948C59217A295D(&(Global_4265799.f_21)) != 0 && Global_4265799.f_65 != -1)
			{
				fVar49 = (fVar49 + (0,00277776f * 2f));
				fVar40 = (Global_17298 + 0,0046875f);
				if (Global_4265799.f_67 != 0)
				{
					func_142(Global_4265799.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17298 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_132(fVar40);
				unk_0x359D94A1D62654F7(&(Global_4265799.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4265799.f_61)
				{
					if (Global_4265799.f_25[iVar14] == 2)
					{
						unk_0x6223D539BCD39E76(Global_4265799.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4265799.f_25[iVar14] == 3)
					{
						unk_0x32AD2F36F6EF5A1F(Global_4265799.f_34[iVar16], Global_4265799.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4265799.f_25[iVar14] == 1)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 5)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 6)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 7)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 9)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 8)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x019EBC578ADE3C09(fVar40, (fVar49 + 0,00277776f));
				unk_0x31758B9A51671C43(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_136(Global_17298, (fVar49 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17301.f_7921)
				{
					iVar1 = Global_17301.f_7917;
					iVar2 = Global_17301.f_7918;
					iVar3 = Global_17301.f_7919;
					iVar4 = Global_17301.f_7920;
				}
				else
				{
					unk_0x31758B9A51671C43(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEFB3EC0CDCC33841("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0,5f)), ((fVar49 + ((((unk_0xAF6F79C616D36B6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0xAF6F79C616D36B6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_132(fVar40);
				unk_0x76CCD673085CBF57(&(Global_4265799.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4265799.f_61)
				{
					if (Global_4265799.f_25[iVar14] == 2)
					{
						unk_0x6223D539BCD39E76(Global_4265799.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4265799.f_25[iVar14] == 3)
					{
						unk_0x32AD2F36F6EF5A1F(Global_4265799.f_34[iVar16], Global_4265799.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4265799.f_25[iVar14] == 1)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 8)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 5)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 6)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 7)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 9)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xD3DA9EADE295C3C5(fVar40, (fVar49 + 0,00277776f), 0);
				if (Global_4265799.f_67 != 0)
				{
					func_142(Global_4265799.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_131(Global_4265799.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xEFB3EC0CDCC33841(func_140(Global_4265799.f_67), func_137(Global_4265799.f_67, 1), ((Global_17298 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar49 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0xAF6F79C616D36B6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4265799.f_65 > 0)
				{
					if ((unk_0x53C562FD2B9E3AB0() - Global_4265799.f_66) > Global_4265799.f_65)
					{
						StringCopy(&(Global_4265799.f_21), "", 16);
						Global_4265799.f_65 = -1;
					}
				}
			}
			func_124(iVar59, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x73509F6FDA1DB386(76, 84);
			unk_0xE7C11B6F2CF973B6(-0,05f, -0,05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17301.f_5598)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar67 = Global_17301.f_5088;
			if (Global_17301.f_5599)
			{
				iVar67 = (Global_17301.f_5602 - 1);
			}
			fVar68 = 0f;
			fVar69 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar67)
			{
				fVar55 = 0,034722f;
				if (Global_17301.f_5612[iVar6] != 0f)
				{
					fVar55 = Global_17301.f_5612[iVar6];
				}
				if (Global_17301.f_5599)
				{
					iVar6 = Global_17301.f_7552[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_17301.f_5605 && iVar9 < Global_17301.f_5095)
				{
					bVar33 = true;
					if (Global_17301.f_5606 == iVar6)
					{
						fVar69 = fVar68;
					}
					if (Global_17301.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar58 + fVar68) + (0,00277776f * IntToFloat(iVar12))) + 0,00277776f);
				}
				Global_17301.f_5746[iVar6] = fVar35;
				fVar34 = (Global_17298 + 0,0046875f);
				bVar39 = false;
				bVar32 = Global_17301.f_5606 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_17301.f_7923)
					{
						unk_0x31758B9A51671C43(Global_17301.f_7922, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0x31758B9A51671C43(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0xEFB3EC0CDCC33841("CommonMenu", "Gradient_Nav", (Global_17298 + (fParam5 * 0,5f)), (((fVar58 + fVar69) + (0,00277776f * IntToFloat(iVar12))) + (fVar55 * 0,5f)), fParam5, fVar55, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_17301.f_5744 = fVar35;
				}
				if (iVar53 && iVar7 == iVar67)
				{
					func_122(bVar32, 1, 0, 0, 0, 0, 0);
					unk_0x76CCD673085CBF57("DFLT_MNU_OPT");
					unk_0xD3DA9EADE295C3C5(fVar34, fVar35, 0);
					bVar39 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17301.f_5096)
					{
						if (unk_0xC80D31E4B587871C(Global_17301.f_4959[iVar6], iVar8) || Global_17301.f_4926[iVar8] == 5)
						{
							if (Global_17301.f_5599)
							{
								iVar19 = Global_17301.f_7568[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar20 = Global_17301.f_7609[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar21 = Global_17301.f_7650[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar22 = Global_17301.f_7691[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar23 = Global_17301.f_7732[((iVar9 * Global_17301.f_5096) + iVar8)];
							}
							else
							{
								Global_17301.f_7568[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar19;
								Global_17301.f_7609[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar20;
								Global_17301.f_7650[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar21;
								Global_17301.f_7691[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar22;
								Global_17301.f_7732[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar23;
							}
							iVar74 = 0;
							bVar54 = false;
							if (Global_17301.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17301.f_5875[0])
								{
									bVar54 = true;
									iVar74 = 0;
								}
							}
							if (Global_17301.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17301.f_5875[1])
								{
									bVar54 = true;
									iVar74 = 1;
								}
							}
							if (Global_17301.f_4932[iVar8] != -1f)
							{
								fVar34 = ((Global_17298 + 0,0046875f) + Global_17301.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17301.f_4932[iVar8 + 1] != -1f) && fVar34 < Global_17301.f_4932[iVar8 + 1])
							{
								fVar44 = (Global_17301.f_4932[iVar8 + 1] - fVar34);
							}
							else
							{
								fVar44 = (((Global_17298 + Global_17300) - 0,0046875f) - fVar34);
							}
							if ((Global_17301.f_4945[iVar8] && Global_17301.f_5741) && bVar32)
							{
								bVar52 = true;
							}
							else
							{
								bVar52 = false;
							}
							switch (Global_17301.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											fVar41 = 0f;
											fVar42 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												bVar51 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar51 = true;
													}
													else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_122(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, iVar74, bVar51, bVar50);
												unk_0x0792909D8327DAEA(&(Global_17301.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xA6D2B267C377D7B2(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xA6D2B267C377D7B2(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xA6D2B267C377D7B2(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x6223D539BCD39E76(Global_17301.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x32AD2F36F6EF5A1F(Global_17301.f_4175[(iVar21 + iVar27)], Global_17301.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
											{
												fVar41 = unk_0xF2A1AF58CC57C564(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_142(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + fVar36);
														if (iVar14 > 0)
														{
															fVar42 = (fVar42 - (0,00078125f * 4f));
														}
														if (Global_17301.f_4433[(iVar22 + iVar14)] == 2 || Global_17301.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar42 = (fVar42 - (0,00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar40 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0,00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - ((fVar41 + fVar42) * 0,5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar40;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar41;
											Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar41 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar42 = Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_142(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0,5f);
												if (func_142(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_131(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_140(26), func_137(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_142(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0,5f);
												if (func_142(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_131(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_140(27), func_137(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar31 = 0;
										if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_122(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_121(bVar32);
											}
											unk_0x76CCD673085CBF57(&(Global_17301.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xA6D2B267C377D7B2(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 1;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xA6D2B267C377D7B2(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 8;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 5;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xA6D2B267C377D7B2(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 6;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 7;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 9;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6223D539BCD39E76(Global_17301.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar31 = 2;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x32AD2F36F6EF5A1F(Global_17301.f_4175[(iVar21 + iVar27)], Global_17301.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar31 = 3;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17301.f_4433[(iVar22 + iVar28)] == 2 || Global_17301.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_142(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0,5f));
														if (func_142(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_131(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17301.f_4953[iVar8] == 2)
															{
																unk_0xEFB3EC0CDCC33841(func_140(Global_17301.f_4433[(iVar22 + iVar28)]), func_137(Global_17301.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xEFB3EC0CDCC33841(func_140(Global_17301.f_4433[(iVar22 + iVar28)]), func_137(Global_17301.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0,00078125f * 8f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															fVar40 = (fVar40 + (0,00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar31 = 4;
											}
											iVar14++;
										}
										if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar31 == 4 && Global_17301.f_4953[iVar8] == 2)
											{
												unk_0xD3DA9EADE295C3C5(((fVar34 + fVar40) + (0,00078125f * 7f)), fVar35, 0);
											}
											else
											{
												unk_0xD3DA9EADE295C3C5((fVar34 + fVar40), fVar35, 0);
												if (func_120() && unk_0x8F38E94BBF3404CD(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_122(0, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
														StringCopy(&cVar75, "TEST_LABEL", 16);
														fVar76 = 0f;
														fVar77 = 55f;
														fVar78 = 0,0185f;
														fVar79 = 0,004f;
														fVar80 = 0,02f;
														unk_0x8D95497078BC0E3B(0f, (0,35f * 0,7f));
														unk_0xA54B8BFDEBB2AF89(255, 255, 255, 150);
														unk_0x09C2CBFA4CD804AC((fVar34 - (fVar80 * 0,6f)), (fVar35 + (fVar78 * 0,75f)), 0,0175f, 0,035f, system::floor(fVar76), system::floor(fVar76), system::floor(fVar76), system::floor(fVar77), 0);
														unk_0x76CCD673085CBF57(&cVar75);
														unk_0x6223D539BCD39E76((Global_17301.f_5605 + iVar30));
														unk_0xD3DA9EADE295C3C5((fVar34 - fVar80), (fVar35 + fVar79), 0);
														iVar30++;
													}
												}
											}
										}
										if (iVar28 > 0)
										{
											fVar40 = (fVar40 + (6f * 0,00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17301.f_4433[(iVar22 + iVar14)] != 2 && Global_17301.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_142(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0,5f));
														if (func_142(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_131(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17301.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0xEFB3EC0CDCC33841(func_140(Global_17301.f_4433[(iVar22 + iVar14)]), func_137(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), (Global_17298 + (fVar36 * 0,5f)), (((fVar35 + 0,00277776f) + (fVar37 * 0,5f)) - (0,00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_17301.f_4953[iVar8] == 2)
															{
																unk_0xEFB3EC0CDCC33841(func_140(Global_17301.f_4433[(iVar22 + iVar14)]), func_137(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xEFB3EC0CDCC33841(func_140(Global_17301.f_4433[(iVar22 + iVar14)]), func_137(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0,00078125f * 12f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (12f * 0,00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar39 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											func_122(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_121(bVar32);
											}
											unk_0x0792909D8327DAEA("NUMBER");
											unk_0x6223D539BCD39E76(Global_17301.f_3918[iVar20]);
											fVar41 = unk_0xF2A1AF58CC57C564(1);
											fVar40 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0,00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - (fVar41 * 0,5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar40;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar41 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_142(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0,5f);
												if (func_142(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_131(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_140(26), func_137(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_142(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0,5f);
												if (func_142(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_131(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_140(27), func_137(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_122(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
										func_119((fVar34 + fVar40), fVar35, "NUMBER", Global_17301.f_3918[iVar20], 0);
									}
									bVar39 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											func_122(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_121(bVar32);
											}
											unk_0x0792909D8327DAEA("NUMBER");
											unk_0x32AD2F36F6EF5A1F(Global_17301.f_4175[iVar21], Global_17301.f_4304[iVar21]);
											fVar41 = unk_0xF2A1AF58CC57C564(1);
											fVar40 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0,00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - (fVar41 * 0,5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar40;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar41 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_142(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0,5f);
												if (func_142(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_131(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_140(26), func_137(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_142(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0,5f);
												if (func_142(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_131(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_140(27), func_137(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_122(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
										func_118((fVar34 + fVar40), fVar35, "NUMBER", Global_17301.f_4175[iVar21], Global_17301.f_4304[iVar21]);
									}
									bVar39 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_142(Global_17301.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
										{
											if (!Global_17301.f_5599)
											{
												fVar42 = fVar36;
												fVar40 = 0f;
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 + ((fVar44 - fVar42) + (0,00078125f * 1f)));
												}
												else if (Global_17301.f_4953[iVar8] == 0)
												{
													fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - (fVar42 * 0,5f)));
												}
												Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar40;
												Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
											}
											else
											{
												fVar40 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
												fVar42 = Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)];
											}
											if (bVar52)
											{
												if (func_142(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_17301.f_4953[iVar8] == 2)
													{
														fVar40 = (fVar40 - (fVar36 * 2f));
													}
													fVar43 = (fVar36 * 0,5f);
													if (func_142(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_131(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0xEFB3EC0CDCC33841(func_140(26), func_137(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
												if (func_142(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + fVar36);
													fVar43 = (fVar36 * 0,5f);
													if (func_142(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_131(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0xEFB3EC0CDCC33841(func_140(27), func_137(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_142(Global_17301.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_131(Global_17301.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0xEFB3EC0CDCC33841(func_140(Global_17301.f_4433[iVar22]), func_137(Global_17301.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0,5f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), (fVar36 * func_117(Global_17301.f_4433[iVar22])), (fVar37 * func_117(Global_17301.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
									bVar39 = true;
									iVar22++;
									break;
								
								case 5:
									bVar39 = true;
									break;
							}
							if (Global_17301.f_4926[iVar8] == 5)
							{
								if (Global_17301.f_4938[iVar8] > 0,05f)
								{
									fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
								}
								else
								{
									fVar34 = (fVar34 + 0,05f);
								}
							}
							else
							{
								fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
								if (Global_17301.f_4945[iVar8])
								{
									if (func_142(26, 1, 1, &fVar36, &fVar37, bParam7))
									{
										fVar34 = (fVar34 - fVar36);
									}
								}
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_17301.f_7552[iVar9] = iVar6;
						Global_17301.f_5607 = iVar6;
						iVar9++;
						if (Global_17301.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17301.f_5612[iVar6] != 0f)
						{
							fVar68 = (fVar68 + Global_17301.f_5612[iVar6]);
						}
						else
						{
							fVar68 = (fVar68 + 0,034722f);
						}
					}
					if (!Global_17301.f_5598)
					{
						Global_17301.f_5355[iVar6] = 1;
						if (Global_17301.f_5097[iVar6])
						{
							if (bVar32)
							{
								Global_17301.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_17301.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17301.f_5598)
			{
				Global_17301.f_5600 = ((fVar58 + fVar68) + (0,00277776f * IntToFloat(iVar12)));
				Global_17301.f_5603 = iVar11;
				Global_17301.f_5601 = iVar10;
				Global_17301.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17301.f_5599)
	{
		Global_17301.f_5602 = iVar9;
		Global_17301.f_5599 = 1;
	}
	Global_17301.f_5743 = fVar49;
	Global_17301.f_5745 = unk_0x53C562FD2B9E3AB0();
	unk_0xA3E8E2D0F73E92C5(Global_17301.f_5743);
	if (!Global_17301.f_7896)
	{
		func_112(0);
	}
	Global_17301.f_7896 = 0;
	if (bParam2)
	{
		unk_0x553231E7FC3C570D(10);
	}
	unk_0x553231E7FC3C570D(6);
	unk_0x553231E7FC3C570D(7);
	unk_0x553231E7FC3C570D(9);
	unk_0x553231E7FC3C570D(8);
	if (bParam0)
	{
		func_111(1);
	}
	unk_0x189EEBAACC5D380A();
}

void func_111(int iParam0)//Position - 0x8B8C
{
	Global_1359035.f_1079 = iParam0;
}

void func_112(int iParam0)//Position - 0x8B9D
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_116(0))
		{
			func_113(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

void func_113(int iParam0)//Position - 0x8BC6
{
	if (Global_14615)
	{
		func_115(0, 0);
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
	if (!func_114())
	{
		Global_14453.f_1 = 3;
	}
}

int func_114()//Position - 0x8C36
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_115(bool bParam0, bool bParam1)//Position - 0x8C5D
{
	if (bParam0)
	{
		if (func_116(0))
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

int func_116(int iParam0)//Position - 0x8CD1
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

float func_117(int iParam0)//Position - 0x8D2B
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 50:
		case 43:
		case 44:
		case 45:
			return 0,85f;
			break;
	}
	return 1f;
}

void func_118(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x8D9A
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x32AD2F36F6EF5A1F(fParam3, iParam4);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, 0);
}

void func_119(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x8DB9
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x6223D539BCD39E76(iParam3);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, iParam4);
}

bool func_120()//Position - 0x8DD7
{
	return unk_0x21EA5D4DC72DE119(-1762644250);
}

void func_121(bool bParam0)//Position - 0x8DE8
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x31758B9A51671C43(Global_17301.f_7924[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x31758B9A51671C43(Global_17301.f_7924[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, 255);
}

void func_122(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x8E2E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_123(Global_17301.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x31758B9A51671C43(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x31758B9A51671C43(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x31758B9A51671C43(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xA54B8BFDEBB2AF89(155, 155, 155, 255);
		}
		else
		{
			unk_0xA54B8BFDEBB2AF89(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xA54B8BFDEBB2AF89(0, 0, 0, system::floor((255f * 0,8f)));
		}
		else
		{
			unk_0x31758B9A51671C43(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xA54B8BFDEBB2AF89(155, 155, 155, 255);
	}
	else
	{
		unk_0xA54B8BFDEBB2AF89(155, 155, 155, 255);
	}
	unk_0x8D95497078BC0E3B(0f, 0,35f);
	unk_0xA2E2179985C59E40(1);
	if (bParam5)
	{
		unk_0x8D95497078BC0E3B(0f, 0,425f);
		unk_0x8F5DFDE59FA7D0D0(4);
	}
	else if (bParam6)
	{
		unk_0x8D95497078BC0E3B(0f, 0,425f);
		unk_0x8F5DFDE59FA7D0D0(6);
	}
	else
	{
		unk_0x8F5DFDE59FA7D0D0(0);
	}
	unk_0xEDC290CB1C56B732(0f, 1f);
	unk_0x0BC5BE26BB7006D2(0);
	unk_0x69A8FC5C344FD5BE(0, 0, 0, 0, 0);
	unk_0xC222AEE842F645C3(0, 0, 0, 0, 0);
}

void func_123(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x8FDC
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_124(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x9266
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_144(bParam4, bParam8))
	{
		return;
	}
	if (func_129())
	{
		return;
	}
	if (unk_0x02BBA5FDE77816B9())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_127(unk_0x9EB17624F44A8DA4(), 0))
		{
			return;
		}
	}
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0xE59B25D23E4C4B3E() == 0 || unk_0x02BBA5FDE77816B9())
		{
			return;
		}
	}
	if (Global_17301.f_4639 != 0)
	{
		if (unk_0x8CFF76532FEF34D4(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17301.f_4639)
			{
				if (Global_17301.f_4896[iVar1] != 358)
				{
					StringCopy(&(Global_17301.f_4641[iVar1 /*16*/]), unk_0xC9C4B2A22DE54C69(2, Global_17301.f_4896[iVar1], true), 64);
				}
				else if (Global_17301.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17301.f_4641[iVar1 /*16*/]), unk_0x715308393E136EA8(2, Global_17301.f_4909[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_17301.f_4640 = 0;
		}
		if (!Global_17301.f_4640)
		{
			unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x9499D7329FB840A2((1f - (Global_17301.f_4951 / 100f)));
			unk_0x271AA5469AF471B3();
			if (unk_0xB9D80B12FE4456A5())
			{
				unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x1869584A8A72FEDD(true);
				unk_0x271AA5469AF471B3();
			}
			iVar1 = 0;
			while (iVar1 < Global_17301.f_4639)
			{
				if (unk_0x8B948C59217A295D(&(Global_17301.f_4834[iVar1 /*4*/])) != unk_0x8B948C59217A295D("PREV"))
				{
					unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(iVar1);
					func_126(&(Global_17301.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x8B948C59217A295D(&(Global_17301.f_4834[iVar2 /*4*/])) == unk_0x8B948C59217A295D("PREV"))
					{
						func_126(&(Global_17301.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17301.f_4883[iVar1] == -1)
					{
						func_125(&(Global_17301.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x7E099EB35339C80D(&(Global_17301.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xFD1DB5DD208735A3(iParam2, 70);
						}
						else
						{
							unk_0x6223D539BCD39E76(iParam2);
						}
						unk_0x9748595E4799A2CF();
					}
					if (unk_0xB9D80B12FE4456A5())
					{
						if (Global_17301.f_4896[iVar1] != 358 && unk_0xC80D31E4B587871C(Global_17301.f_4922, iVar1))
						{
							unk_0x1869584A8A72FEDD(true);
							unk_0xD07D5CD276368D36(Global_17301.f_4896[iVar1]);
						}
						else
						{
							unk_0x1869584A8A72FEDD(false);
							unk_0xD07D5CD276368D36(358);
						}
					}
					unk_0x271AA5469AF471B3();
				}
				iVar1++;
			}
			if (unk_0x8B948C59217A295D(&(Global_4265799.f_16)) != unk_0x8B948C59217A295D(""))
			{
				unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xD07D5CD276368D36(Global_17301.f_4639);
				func_126(&Global_4265799);
				if (Global_4265799.f_20 == -1)
				{
					func_125(&(Global_4265799.f_16));
				}
				else
				{
					unk_0x7E099EB35339C80D(&(Global_4265799.f_16));
					if (bParam5)
					{
						unk_0xFD1DB5DD208735A3(iParam2, 70);
					}
					else
					{
						unk_0x6223D539BCD39E76(iParam2);
					}
					unk_0x9748595E4799A2CF();
				}
				unk_0x271AA5469AF471B3();
			}
			unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(80);
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17301.f_4952)
			{
				unk_0xD07D5CD276368D36(1);
			}
			else
			{
				unk_0xD07D5CD276368D36(0);
			}
			unk_0x271AA5469AF471B3();
			Global_17301.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17301.f_4639)
		{
			if (Global_17301.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xD07D5CD276368D36(iVar1);
					unk_0x7E099EB35339C80D(&(Global_17301.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xFD1DB5DD208735A3(iParam2, 70);
					}
					else
					{
						unk_0x6223D539BCD39E76(iParam2);
					}
					unk_0x9748595E4799A2CF();
					unk_0x271AA5469AF471B3();
				}
			}
			iVar1++;
		}
		if (Global_4265799.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xD07D5CD276368D36(iVar1);
				unk_0x7E099EB35339C80D(&(Global_4265799.f_16));
				if (bParam5)
				{
					unk_0xFD1DB5DD208735A3(iParam2, 70);
				}
				else
				{
					unk_0x6223D539BCD39E76(iParam2);
				}
				unk_0x9748595E4799A2CF();
				unk_0x271AA5469AF471B3();
			}
		}
		unk_0x73509F6FDA1DB386(76, 66);
		unk_0xE7C11B6F2CF973B6(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17301.f_7931)
			{
				unk_0x76F7AB2157E33DD9(15, 0f, -0,0375f);
				Global_17301.f_7931 = 1;
			}
		}
		else if (Global_17301.f_7931)
		{
			unk_0x3B235F54BDEDFCB5(15);
			Global_17301.f_7931 = 0;
		}
		unk_0x189EEBAACC5D380A();
		if (Global_17301.f_4925)
		{
			unk_0x73509F6FDA1DB386(82, 66);
			unk_0xE7C11B6F2CF973B6(0f, 0f, 0f, 0f);
			unk_0x0EB9853DF8BC0D87(Global_17301.f_5530[iVar0 /*10*/], Global_17301.f_4923, Global_17301.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x189EEBAACC5D380A();
		}
		else
		{
			unk_0x28E092B1E386EB67(Global_17301.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_125(char* sParam0)//Position - 0x9741
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_126(char* sParam0)//Position - 0x9753
{
	unk_0x8686005F83E832AE(sParam0);
}

bool func_127(int iParam0, int iParam1)//Position - 0x9761
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_128(-1, 0) == 8;
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

int func_128(int iParam0, bool bParam1)//Position - 0x97AC
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_76();
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

int func_129()//Position - 0x97ED
{
	vector3 vVar0;
	
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	if (func_130())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x494F5FA1BF017D58(&vVar0);
		if (Global_14398 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_130()//Position - 0x985B
{
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_131(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x9875
{
	unk_0x31758B9A51671C43(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 50:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 51:
			*iParam5 = 100;
			break;
	}
}

void func_132(float fParam0)//Position - 0x9948
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x31758B9A51671C43(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x8F5DFDE59FA7D0D0(0);
	unk_0x8D95497078BC0E3B(0f, 0,35f);
	unk_0x4E55BC7DE7AF6FFC(2);
	unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, iVar3);
	unk_0xEDC290CB1C56B732(fParam0, ((Global_17298 + Global_17300) - 0,0046875f));
	unk_0x0BC5BE26BB7006D2(0);
	unk_0x69A8FC5C344FD5BE(0, 0, 0, 0, 0);
	unk_0xC222AEE842F645C3(0, 0, 0, 0, 0);
}

void func_133(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x99A7
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x6223D539BCD39E76(iParam3);
	unk_0x6223D539BCD39E76(iParam4);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, 0);
}

float func_134(char* sParam0, int iParam1, int iParam2)//Position - 0x99CA
{
	if (!unk_0x8C1C362CA8299475(sParam0))
	{
		if (unk_0x8B948C59217A295D(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_135();
	unk_0x0792909D8327DAEA(sParam0);
	unk_0x6223D539BCD39E76(iParam1);
	unk_0x6223D539BCD39E76(iParam2);
	return unk_0xF2A1AF58CC57C564(1);
}

void func_135()//Position - 0x9A0C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x31758B9A51671C43(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17301.f_7906)
	{
		iVar0 = Global_17301.f_7902;
		iVar1 = Global_17301.f_7903;
		iVar2 = Global_17301.f_7904;
		iVar3 = Global_17301.f_7905;
	}
	unk_0x8F5DFDE59FA7D0D0(0);
	unk_0x8D95497078BC0E3B(0f, 0,35f);
	unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, iVar3);
	unk_0xEDC290CB1C56B732((Global_17298 + 0,0046875f), ((Global_17298 + Global_17300) - 0,0046875f));
	unk_0x0BC5BE26BB7006D2(0);
	unk_0x69A8FC5C344FD5BE(0, 0, 0, 0, 0);
	unk_0xC222AEE842F645C3(0, 0, 0, 0, 0);
}

void func_136(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x9A96
{
	unk_0x09C2CBFA4CD804AC((fParam0 + (fParam2 * 0,5f)), (fParam1 + (fParam3 * 0,5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_137(int iParam0, bool bParam1)//Position - 0x9AC5
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xAB019B170BF1309C(&(Global_17301.f_6719[iParam0 /*16*/])))
	{
		if (unk_0x8B948C59217A295D(&(Global_17301.f_6719[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_139(unk_0x9EB17624F44A8DA4()) };
			if (unk_0xE009D69C861D7648(&Var2, &uVar1))
			{
				return func_138(&uVar1);
			}
		}
		else
		{
			return func_138(&(Global_17301.f_6719[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_138(var uParam0)//Position - 0x9F15
{
	return uParam0;
}

struct<13> func_139(int iParam0)//Position - 0x9F1F
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

char* func_140(int iParam0)//Position - 0x9F36
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xAB019B170BF1309C(&(Global_17301.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x8B948C59217A295D(&(Global_17301.f_5886[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_139(unk_0x9EB17624F44A8DA4()) };
			unk_0xE009D69C861D7648(&Var1, &uVar0);
			return func_138(&uVar0);
		}
		else
		{
			return func_138(&(Global_17301.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_141()//Position - 0x9FAB
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x5113D2C928A121B2(&iVar0, &iVar1);
	fVar2 = (system::to_float(iVar0) / system::to_float(iVar1));
	if (fVar2 > 3,5f)
	{
		return 1;
	}
	return 0;
}

int func_142(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x9FDD
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_140(iParam0), 64);
	StringCopy(&cVar1, func_137(iParam0, bParam1), 64);
	if (unk_0x8B948C59217A295D(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x5113D2C928A121B2(&iVar2, &iVar3);
			fVar5 = unk_0xB6936205ED728A9D(0);
			if (func_141())
			{
				iVar2 = system::round((system::to_float(iVar3) * fVar5));
			}
			fVar6 = (system::to_float(iVar2) / system::to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_141())
			{
				fVar4 = 1f;
			}
			if (unk_0x8F38E94BBF3404CD(joaat("director_mode")) > 0)
			{
				unk_0x9A72C8F89A53C2D1(&iVar2, &iVar3);
			}
			iVar2 = system::round((system::to_float(iVar2) / fVar4));
			iVar3 = system::round((system::to_float(iVar3) / fVar4));
		}
		else
		{
			unk_0x9A72C8F89A53C2D1(&iVar2, &iVar3);
		}
		vVar7 = { unk_0x62415D7FD7ADB9EE(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_143(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_143(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && unk_0x8B948C59217A295D(&(Global_17301.f_6719[29 /*16*/])) == -1487683087)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x41226DC6540EC9AA() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1,33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17300)
			{
				*fParam4 = (*fParam4 * (Global_17300 / *fParam3));
				*fParam3 = Global_17300;
			}
		}
		return 1;
	}
	return 0;
}

float func_143(int iParam0)//Position - 0xA18E
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0,5f;
			break;
	}
	return 1f;
}

int func_144(bool bParam0, bool bParam1)//Position - 0xA22D
{
	if (Global_2436181.f_1777.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x9F7B586A14398C40() || (func_146(8, -1) && func_145() != 64)) || (unk_0x8B7838D25C063186() != 0 && !bParam1)) || (unk_0x1E06D00B67177A18() && !bParam0)) || unk_0x9A4EAADB45DA07DB()) || Global_71116) || Global_17301.f_7930) || unk_0x08D525BE62A22AE0()) || Global_92885.f_1377)
	{
		return 0;
	}
	return 1;
}

int func_145()//Position - 0xA2CA
{
	return Global_1312789;
}

bool func_146(int iParam0, int iParam1)//Position - 0xA2D6
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

char* func_147(int iParam0)//Position - 0xA311
{
	switch (iParam0)
	{
		case 0:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		default:
	}
	return "";
}

int func_148()//Position - 0xA34A
{
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (Global_4265875 > -1)
		{
			if (unk_0xE8C126B7ADBB9D63(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_149(int iParam0, int iParam1, bool bParam2)//Position - 0xA371
{
	if (!unk_0x4C4813CAAD70E814(2))
	{
		return 0;
	}
	if (unk_0x0F30C1F1717A6437() || unk_0x08D525BE62A22AE0())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x15F5D3F996CB934F();
	}
	if (Global_4265875 == -6)
	{
		unk_0x045FE6847C82E3A6(4);
		if (iParam0 && unk_0xF2B58F79D29425B4(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4265875 = -1;
			return 0;
		}
	}
	if (((Global_4265875 > -1 || Global_4265875 == -3) || Global_4265875 == -2) || unk_0x1B3327E02DE17064())
	{
		unk_0x045FE6847C82E3A6(1);
		return 0;
	}
	if (Global_4265875 == -1 && iParam0)
	{
		if (unk_0xF2B58F79D29425B4(2, 237))
		{
			unk_0x045FE6847C82E3A6(4);
			Global_4265875 = -6;
			return 1;
		}
		else
		{
			unk_0x045FE6847C82E3A6(3);
			return 0;
		}
	}
	unk_0x045FE6847C82E3A6(1);
	return 0;
}

void func_150(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xA451
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0,034722f / 2f);
	iVar13 = -1;
	if (!unk_0x4C4813CAAD70E814(2))
	{
		Global_4265875 = -1;
		return;
	}
	unk_0x1791FD56B0FECC40(1);
	fVar0 = Global_17298;
	fVar2 = (fVar0 + Global_17300);
	fVar3 = Global_17301.f_5600;
	fVar1 = (Global_17301.f_5600 - (IntToFloat(Global_17301.f_5602) * 0,034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0,034722f);
		fVar1 = (fVar1 + 0,034722f);
	}
	if (Global_17301.f_5602 < 1)
	{
		fVar1 = (Global_17301.f_5600 - 0,034722f);
	}
	unk_0x73509F6FDA1DB386(76, 84);
	unk_0xE7C11B6F2CF973B6(-0,05f, -0,05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xB3BC3A562B00E8B9(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xB3BC3A562B00E8B9(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x189EEBAACC5D380A();
	func_152();
	if (Global_4265875 == -6)
	{
		return;
	}
	Global_4265875 = -1;
	fVar7 = Global_4265869;
	fVar8 = Global_4265870;
	if (Global_17301.f_5603 > Global_17301.f_5602)
	{
		if (((Global_4265869 >= fVar0 && Global_4265869 <= fVar2) && Global_4265870 >= fVar3) && Global_4265870 < (fVar3 + fVar6))
		{
			Global_4265875 = -2;
			if (bParam3)
			{
				func_151(0);
			}
			return;
		}
		if (((Global_4265869 >= fVar0 && Global_4265869 <= fVar2) && Global_4265870 >= (fVar3 + fVar6)) && Global_4265870 < (fVar3 + 0,034722f))
		{
			Global_4265875 = -3;
			if (bParam3)
			{
				func_151(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = system::floor((fVar9 / 0,034722f));
		if (Global_17301.f_5603 == -1)
		{
			Global_4265875 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17301.f_5602);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x73509F6FDA1DB386(76, 84);
				unk_0xE7C11B6F2CF973B6(-0,05f, -0,05f, 0f, 0f);
				func_136(fVar4, (fVar5 + (IntToFloat(iVar13) * 0,034722f)), Global_17300, (0,034722f - 0,0015f), 255, 255, 255, iVar10);
				unk_0x189EEBAACC5D380A();
			}
		}
		Global_4265875 = Global_17301.f_7552[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4265875 = -4;
			return;
		}
		if (fVar8 > 0,9f)
		{
			Global_4265875 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0,25f))
	{
		Global_4265875 = -4;
		return;
	}
	Global_4265875 = -1;
}

void func_151(bool bParam0)//Position - 0xA6FD
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0,034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17298;
	fVar1 = Global_17301.f_5600;
	unk_0x73509F6FDA1DB386(76, 84);
	unk_0xE7C11B6F2CF973B6(-0,05f, -0,05f, 0f, 0f);
	if (Global_4265875 == -2)
	{
		func_136(fVar0, fVar1, Global_17300, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4265875 == -3)
	{
		func_136(fVar0, (fVar1 + fVar2), Global_17300, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x189EEBAACC5D380A();
}

void func_152()//Position - 0xA786
{
	Global_4265871 = Global_4265869;
	Global_4265872 = Global_4265870;
	Global_4265869 = unk_0x84326F8D8D6875EC(2, 239);
	Global_4265870 = unk_0x84326F8D8D6875EC(2, 240);
	Global_4265873 = (Global_4265869 - Global_4265871);
	Global_4265874 = (Global_4265870 - Global_4265872);
}

void func_153(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0xA7CE
{
	char* sVar0;
	
	sVar0 = unk_0xC9C4B2A22DE54C69(2, iParam0, true);
	if (Global_17301.f_4639 >= 12)
	{
		StringCopy(&Global_4265799, sVar0, 64);
		StringCopy(&(Global_4265799.f_16), sParam1, 16);
		Global_4265799.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x872F1C1F8587CCC7(&(Global_17301.f_4922), Global_17301.f_4639);
	}
	StringCopy(&(Global_17301.f_4641[Global_17301.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17301.f_4834[Global_17301.f_4639 /*4*/]), sParam1, 16);
	Global_17301.f_4883[Global_17301.f_4639] = iParam2;
	Global_17301.f_4896[Global_17301.f_4639] = iParam0;
	Global_17301.f_4909[Global_17301.f_4639] = 32;
	Global_17301.f_4639++;
}

void func_154(char* sParam0, int iParam1, int iParam2)//Position - 0xA883
{
	int iVar0;
	
	StringCopy(&(Global_17301.f_4562), sParam0, 16);
	Global_17301.f_4632 = 0;
	Global_17301.f_4633 = 0;
	Global_17301.f_4634 = 0;
	Global_17301.f_4635 = 0;
	Global_17301.f_4636 = iParam1;
	Global_17301.f_4637 = unk_0x53C562FD2B9E3AB0();
	Global_17301.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_4566[iVar0] = 0;
		iVar0++;
	}
}

void func_155(var uParam0, bool bParam1, int iParam2)//Position - 0xA8E8
{
	int iVar0;
	int iVar1;
	
	Global_17301.f_5606 = uParam0;
	Global_17301.f_5741 = iParam2;
	if (Global_17301.f_5606 < Global_17301.f_5605)
	{
		Global_17301.f_5605 = Global_17301.f_5606;
	}
	else if ((Global_17301.f_5599 && Global_17301.f_5606 > Global_17301.f_5607) || (!Global_17301.f_5599 && Global_17301.f_5606 >= (Global_17301.f_5605 + Global_17301.f_5095)))
	{
		iVar0 = Global_17301.f_5605;
		while (iVar0 <= Global_17301.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17301.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17301.f_5095 && Global_17301.f_5605 < 128)
		{
			Global_17301.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17301.f_5605;
			while (iVar0 <= Global_17301.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17301.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17301.f_5598 = 0;
	Global_17301.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17301.f_4562), "", 16);
		StringCopy(&(Global_4265799.f_21), "", 16);
	}
}

void func_156(int iParam0)//Position - 0xAA38
{
	Global_17301.f_5605 = iParam0;
}

void func_157(var uParam0, bool bParam1)//Position - 0xAA48
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17301.f_5092 >= 256)
	{
		return;
	}
	if (Global_17301.f_5610 >= 4)
	{
		return;
	}
	if (Global_17301.f_5611 != 1)
	{
		return;
	}
	if (Global_17301.f_5610 >= Global_17301.f_5608)
	{
		return;
	}
	Global_17301.f_3918[Global_17301.f_5092] = uParam0;
	Global_17301.f_5092++;
	Global_17301.f_2124[Global_17301.f_5609 /*5*/][Global_17301.f_5610] = 2;
	Global_17301.f_5610++;
	if (Global_17301.f_5610 >= Global_17301.f_5608)
	{
		fVar0 = func_159();
		if (Global_17301.f_4945[Global_17301.f_5089] && Global_17301.f_5610 == Global_17301.f_5608)
		{
			func_142(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17301.f_4938[(Global_17301.f_5089 - 1)])
		{
			Global_17301.f_4938[(Global_17301.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17301.f_5610 >= Global_17301.f_5608)
		{
			fVar3 = func_158();
			if (fVar3 > Global_17301.f_5612[Global_17301.f_5088])
			{
				Global_17301.f_5612[Global_17301.f_5088] = fVar3;
			}
		}
	}
}

float func_158()//Position - 0xAB83
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17301.f_5610)
	{
		if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17301.f_4433[((Global_17301.f_5094 - iVar1) + iVar0)] != 0)
		{
			if (func_142(Global_17301.f_4433[((Global_17301.f_5094 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0xAF6F79C616D36B6E(0,35f, 0))
	{
		return fVar2;
	}
	return unk_0xAF6F79C616D36B6E(0,35f, 0);
}

float func_159()//Position - 0xAC36
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_17301.f_5610)
	{
		if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_122(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x8B948C59217A295D(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
	{
		unk_0x0792909D8327DAEA(&(Global_17301.f_73[Global_17301.f_5609 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17301.f_5610)
	{
		if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x8B948C59217A295D(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0xA6D2B267C377D7B2(&(Global_17301.f_73[(Global_17301.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x8B948C59217A295D(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0xA6D2B267C377D7B2(&(Global_17301.f_73[(Global_17301.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 2)
		{
			if (unk_0x8B948C59217A295D(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0x6223D539BCD39E76(Global_17301.f_3918[((Global_17301.f_5092 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 3)
		{
			if (unk_0x8B948C59217A295D(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0x32AD2F36F6EF5A1F(Global_17301.f_4175[((Global_17301.f_5093 - iVar4) + iVar10)], Global_17301.f_4304[((Global_17301.f_5093 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 5)
		{
			if (unk_0x8B948C59217A295D(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0x854FACC4E5F40C82(&(Global_2457366[((Global_17301.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 6)
		{
			if (unk_0x8B948C59217A295D(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0xA6D2B267C377D7B2(&(Global_2457366[((Global_17301.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 7)
		{
			if (unk_0x8B948C59217A295D(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0x854FACC4E5F40C82(&(Global_2457366[((Global_17301.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 9)
		{
			if (unk_0x8B948C59217A295D(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0x854FACC4E5F40C82(&(Global_2457366[((Global_17301.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x8B948C59217A295D(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
	{
		fVar0 = unk_0xF2A1AF58CC57C564(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17301.f_4433[((Global_17301.f_5094 - iVar5) + iVar7)] != 0)
		{
			func_142(Global_17301.f_4433[((Global_17301.f_5094 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_160(int iParam0)//Position - 0xB07D
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 4;
		
		default:
	}
	return 0;
}

void func_161(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0xB0AB
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17301.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17301.f_5088 >= 128)
	{
		return;
	}
	if (Global_17301.f_5090 >= 256)
	{
		return;
	}
	if (Global_17301.f_5610 < Global_17301.f_5608)
	{
		return;
	}
	if (Global_17301.f_5088 != iParam0)
	{
		Global_17301.f_5088 = iParam0;
		Global_17301.f_5089 = 0;
	}
	iVar0 = Global_17301.f_4926[Global_17301.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17301.f_5089 < 4 && iVar0 != 1)
		{
			Global_17301.f_5089++;
			iVar0 = Global_17301.f_4926[Global_17301.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0xAB019B170BF1309C(sParam1) && !unk_0xA1800C71952C596F(sParam1))
	{
	}
	Global_17301.f_1610[Global_17301.f_5090] = bParam3;
	Global_17301.f_1867[Global_17301.f_5090] = iParam4;
	Global_17301.f_5090++;
	if (!bParam3)
	{
		func_164(Global_17301.f_5088, 1);
	}
	else
	{
		func_164(Global_17301.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_163(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]));
		if (Global_17301.f_4945[Global_17301.f_5089])
		{
			func_142(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17301.f_4938[Global_17301.f_5089])
		{
			Global_17301.f_4938[Global_17301.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_162(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]));
			if (fVar4 > Global_17301.f_5612[iParam0])
			{
				Global_17301.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0x872F1C1F8587CCC7(&(Global_17301.f_4959[iParam0]), Global_17301.f_5089);
	Global_17301.f_5089++;
	Global_17301.f_5611 = 1;
	Global_17301.f_5609 = (Global_17301.f_5090 - 1);
	Global_17301.f_5610 = 0;
	Global_17301.f_5608 = iParam2;
}

float func_162(char* sParam0)//Position - 0xB2B7
{
	if (!unk_0xA1800C71952C596F(sParam0))
	{
	}
	return unk_0xAF6F79C616D36B6E(0,35f, 0);
}

float func_163(char* sParam0)//Position - 0xB2D3
{
	if (!unk_0x8C1C362CA8299475(sParam0))
	{
		if (unk_0x8B948C59217A295D(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_122(0, 1, 0, 0, 0, 0, 0);
	unk_0x0792909D8327DAEA(sParam0);
	return unk_0xF2A1AF58CC57C564(1);
}

void func_164(int iParam0, bool bParam1)//Position - 0xB310
{
	int iVar0;
	
	iVar0 = system::floor((system::to_float(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_17301.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_17301.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_165()//Position - 0xB35C
{
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0xCD439FD7E3A8589E(0,325f, 0,3f);
	}
}

void func_166(int iParam0, char* sParam1, char* sParam2)//Position - 0xB37A
{
	Global_17301 = iParam0;
	func_167(29, sParam1, sParam2);
}

void func_167(int iParam0, char* sParam1, char* sParam2)//Position - 0xB391
{
	StringCopy(&(Global_17301.f_5886[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17301.f_6719[iParam0 /*16*/]), sParam2, 64);
}

void func_168(char* sParam0)//Position - 0xB3B5
{
	int iVar0;
	
	StringCopy(&(Global_17301.f_1), sParam0, 16);
	Global_17301.f_68 = 0;
	Global_17301.f_69 = 0;
	Global_17301.f_70 = 0;
	Global_17301.f_71 = 0;
	Global_17301.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_169(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xB400
{
	Global_17301.f_4953[0] = iParam0;
	Global_17301.f_4953[1] = iParam1;
	Global_17301.f_4953[2] = iParam2;
	Global_17301.f_4953[3] = iParam3;
	Global_17301.f_4953[4] = iParam4;
}

void func_170(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xB43F
{
	Global_17301.f_4926[0] = iParam0;
	Global_17301.f_4926[1] = iParam1;
	Global_17301.f_4926[2] = iParam2;
	Global_17301.f_4926[3] = iParam3;
	Global_17301.f_4926[4] = iParam4;
	Global_17301.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17301.f_5096++;
	}
}

void func_171(bool bParam0)//Position - 0xB4E9
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17301.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17301.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2457366[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17301.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4959[iVar0] = 0;
		Global_17301.f_5097[iVar0] = 0;
		Global_17301.f_5226[iVar0] = 0;
		Global_17301.f_5746[iVar0] = 0f;
		Global_17301.f_5355[iVar0] = 0;
		Global_17301.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17301.f_4926[iVar0] = 0;
		Global_17301.f_4938[iVar0] = 0f;
		Global_17301.f_4932[iVar0] = -1f;
		Global_17301.f_4945[iVar0] = 0;
		Global_17301.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17301.f_4834[iVar0 /*4*/]), "", 16);
		Global_17301.f_4883[iVar0] = -1;
		Global_17301.f_4896[iVar0] = 358;
		Global_17301.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 52)
	{
		StringCopy(&(Global_17301.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17301.f_6719[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_4265799.f_16), "", 16);
	Global_4265799.f_20 = -1;
	Global_17301 = 0;
	Global_17301.f_5088 = 0;
	Global_17301.f_5089 = 0;
	Global_17301.f_5090 = 0;
	Global_17301.f_5092 = 0;
	Global_17301.f_5093 = 0;
	Global_17301.f_5094 = 0;
	Global_17301.f_5091 = 0;
	Global_17301.f_5741 = 0;
	Global_17301.f_5606 = 0;
	Global_17301.f_5605 = 0;
	Global_17301.f_5607 = 0;
	StringCopy(&(Global_17301.f_4562), "", 16);
	Global_17301.f_4632 = 0;
	Global_17301.f_4633 = 0;
	Global_17301.f_4634 = 0;
	Global_17301.f_4635 = 0;
	Global_17301.f_4636 = 0;
	Global_17301.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_4638 = 0;
	StringCopy(&(Global_4265799.f_21), "", 16);
	Global_4265799.f_61 = 0;
	Global_4265799.f_62 = 0;
	Global_4265799.f_63 = 0;
	Global_4265799.f_64 = 0;
	Global_4265799.f_65 = 0;
	Global_4265799.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4265799.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4265799.f_67 = 0;
	StringCopy(&(Global_17301.f_1), "", 16);
	Global_17301.f_4944 = 0f;
	Global_17301.f_68 = 0;
	Global_17301.f_69 = 0;
	Global_17301.f_70 = 0;
	Global_17301.f_71 = 0;
	Global_17301.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_5611 = 0;
	Global_17301.f_5610 = 0;
	Global_17301.f_5608 = 0;
	Global_17301.f_5609 = 0;
	Global_17301.f_4639 = 0;
	Global_17301.f_4640 = 0;
	Global_17301.f_5095 = 10;
	Global_17301.f_5096 = 0;
	Global_17301.f_5743 = 0f;
	Global_17301.f_5744 = 0f;
	Global_17301.f_5598 = 0;
	Global_17301.f_5599 = 0;
	Global_17301.f_5600 = 0f;
	Global_17301.f_5601 = 0;
	Global_17301.f_5603 = 0;
	Global_17301.f_5602 = 0;
	Global_17301.f_5604 = 0;
	Global_17301.f_7927 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17301.f_5875[iVar0] = -1;
		Global_17301.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17301.f_4951 = 0f;
	Global_17301.f_4922 = 0;
	Global_17301.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17301.f_5881)
	{
		Global_17301.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_7906 = 0;
	Global_17301.f_7901 = 0;
	Global_17301.f_7911 = 0;
	Global_17301.f_7916 = 0;
	Global_17301.f_7921 = 0;
	Global_17301.f_7923 = 0;
	Global_17301.f_7929 = 0;
	Global_17298 = 0,05f;
	Global_17299 = 0,05f;
	Global_17300 = 0,225f;
	fVar2 = unk_0xB6936205ED728A9D(0);
	if (bParam0)
	{
		Global_17300 = (0,225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1,77777f)
	{
		Global_17300 = (0,225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17300 = 0,225f;
	}
}

int func_172(int iParam0, vector3 vParam1, float fParam2, var uParam3, var uParam4, var uParam5)//Position - 0xB99E
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { unk_0x9EA50C5EC175E58E(vParam1, fParam2, 2,40015f, -7,75244f, 1,0825f) };
			*uParam4 = -4,2069f;
			uParam4->f_1 = -0,027f;
			uParam4->f_2 = (fParam2 + 22,8175f);
			*uParam5 = 32,8283f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { unk_0x9EA50C5EC175E58E(vParam1, fParam2, 3,80296f, -5,391f, 1,213f) };
			*uParam4 = -9,3866f;
			uParam4->f_1 = -0,0011f;
			uParam4->f_2 = (fParam2 + 46,9866f);
			*uParam5 = 35f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { unk_0x9EA50C5EC175E58E(vParam1, fParam2, 2,97963f, -3,39452f, 0,934498f) };
			*uParam4 = -8,483f;
			uParam4->f_1 = 0,0149f;
			uParam4->f_2 = (fParam2 + 53,5519f);
			*uParam5 = 35f;
			break;
		
		case -2:
			*uParam3 = { 1390,653f, 3598,966f, 35,6115f };
			*uParam4 = { -3,6091f, 0,022f, -8,6461f };
			*uParam5 = 35f;
			break;
	}
	return 1;
}

void func_173(int iParam0, bool bParam1)//Position - 0xBB26
{
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&Global_25478, iParam0);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_25478, iParam0);
	}
}

int func_174(int iParam0, bool bParam1)//Position - 0xBB48
{
	int iVar0;
	
	iVar0 = func_175(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5BEF7A5AB8F17255(unk_0x98EC0789D9F0703B()))
	{
		return 0;
	}
	if (func_116(0))
	{
		return 0;
	}
	if (unk_0xA8113D347D14630F())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/] == 1 && Global_36565[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36565[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36565[iVar0 /*32*/].f_5 = 1;
			Global_36565[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36565[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36565[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_175(int iParam0)//Position - 0xBC00
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

int func_176(int iParam0, int iParam1)//Position - 0xBC3B
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_175(iParam0);
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

void func_177(var uParam0)//Position - 0xBCF0
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_175(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/])
		{
			Global_36565[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

void func_178(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0xBD47
{
	int iVar0;
	
	if (unk_0x8F38E94BBF3404CD(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x1E06D00B67177A18())
	{
		if (!*uParam0 == -1)
		{
			func_177(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36565[iVar0 /*32*/])
		{
			Global_36565[iVar0 /*32*/] = 1;
			Global_36565[iVar0 /*32*/].f_1 = Global_36766;
			Global_36766++;
			Global_36565[iVar0 /*32*/].f_4 = 0;
			Global_36565[iVar0 /*32*/].f_29 = 0;
			Global_36565[iVar0 /*32*/].f_5 = 0;
			Global_36565[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36565[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36565[iVar0 /*32*/].f_6 = iParam3;
			Global_36565[iVar0 /*32*/].f_31 = unk_0xBBA15366508D1BDE();
			Global_36565[iVar0 /*32*/].f_7 = 0;
			Global_36565[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xAB019B170BF1309C(sParam4))
			{
				Global_36565[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36565[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36565[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36565[iVar0 /*32*/].f_12 = 0;
				Global_36565[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_36565[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_179(char* sParam0)//Position - 0xBE72
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 1, true, -1);
}

int func_180()//Position - 0xBE88
{
	if (Global_104555.f_20380.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

int func_181(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xBEA5
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { unk_0x9EA50C5EC175E58E(*uParam1, fParam2, 1,46991f, -0,814453f, -0,97226f) };
			*uParam4 = { unk_0x9EA50C5EC175E58E(*uParam1, fParam2, -1,5828f, -0,814453f, 0,84774f) };
			*uParam5 = { unk_0x9EA50C5EC175E58E(*uParam1, fParam2, 0,0586548f, 0,178162f, 0f) };
			*uParam6 = 0,75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { unk_0x9EA50C5EC175E58E(*uParam1, fParam2, -1,55054f, -0,920414f, -0,998837f) };
			*uParam4 = { unk_0x9EA50C5EC175E58E(*uParam1, fParam2, 1,54138f, -0,920414f, 0,901165f) };
			*uParam5 = { unk_0x9EA50C5EC175E58E(*uParam1, fParam2, 0,0586548f, 0,178162f, 0f) };
			*uParam6 = 0,75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { unk_0x9EA50C5EC175E58E(*uParam1, fParam2, -2,60296f, -0,851523f, -0,999289f) };
			*uParam4 = { unk_0x9EA50C5EC175E58E(*uParam1, fParam2, 0,443411f, -0,851523f, 0,820711f) };
			*uParam5 = { unk_0x9EA50C5EC175E58E(*uParam1, fParam2, -1,17421f, 0,39005f, 0f) };
			*uParam6 = 0,75f;
			break;
		
		case -2:
			*uParam3 = { 1390,955f, 3604,379f, 33,98091f };
			*uParam4 = { 1394,475f, 3605,664f, 35,98091f };
			*uParam5 = { 1392,551f, 3605,449f, 35,30949f };
			*uParam6 = 0,75f;
			break;
	}
	return 1;
}

int func_182(float fParam0)//Position - 0xC08C
{
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (fParam0 <= 0f)
		{
			return unk_0x5F89DE0953A72822(unk_0xFC1458A37D98B502()) > 0;
		}
		else
		{
			return unk_0x55C62ED885188FCD(unk_0xFC1458A37D98B502(), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), fParam0) > 0;
		}
	}
	return 0;
}

void func_183()//Position - 0xC0DE
{
	if (iLocal_108)
	{
		if (iLocal_107 == 3)
		{
			iLocal_107 = 0;
		}
		iLocal_108 = 0;
	}
	switch (iLocal_107)
	{
		case 0:
			unk_0xB3A8974D2C811672(iLocal_98[iLocal_111], true, 0);
			iLocal_109 = unk_0x8383F9C605E523B7(unk_0x9EA50C5EC175E58E(Local_66.f_486.f_6, Local_66.f_486.f_9.f_2, -0,07f, 0,06f, -0,02f), Local_66.f_486.f_9, 2);
			if (!unk_0x3AB6A1A9084FB0A4(Local_66.f_2))
			{
				unk_0x8E628F774C748D93(Local_66.f_2, iLocal_109, "mp_am_hold_up", "purchase_chocbar_shopkeeper", 1,5f, -1,5f, 0, 0, 1148846080, 0);
				unk_0xEBB74134CCA3442E(iLocal_98[iLocal_111], iLocal_109, "purchase_chocbar", "mp_am_hold_up", 1000f, 8f, 1, 1148846080);
				iLocal_107 = 1;
			}
			break;
		
		case 1:
			if (unk_0xD56F740235B1E8F0(iLocal_109))
			{
				if (unk_0x463C4747B41E35A3(iLocal_109) == 1f)
				{
					if (!unk_0x3AB6A1A9084FB0A4(Local_66.f_2))
					{
						unk_0xB8E08BD5B184DF4E(Local_66.f_2);
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_98[iLocal_111]))
					{
						unk_0x42B3DBD52AED7B7D(iLocal_98[iLocal_111], 1);
					}
					iLocal_110 = unk_0x53C562FD2B9E3AB0();
					iLocal_107 = 2;
				}
			}
			else
			{
				iLocal_110 = unk_0x53C562FD2B9E3AB0();
				iLocal_107 = 2;
			}
			break;
		
		case 2:
			if ((unk_0x53C562FD2B9E3AB0() - iLocal_110) > 1000)
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_98[iLocal_111]))
				{
					unk_0xB3A8974D2C811672(iLocal_98[iLocal_111], false, 0);
					unk_0xBD8D47FDC6902B2D(iLocal_98[iLocal_111], func_59(iLocal_111), 1, false, 0, 1);
					unk_0x42B3DBD52AED7B7D(iLocal_98[iLocal_111], 0);
				}
				iLocal_107 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

void func_184()//Position - 0xC27B
{
	if (iLocal_52 != 6)
	{
		switch (iLocal_52)
		{
			case 1:
				if (func_189())
				{
					iLocal_52 = 2;
				}
				else
				{
					iLocal_52 = 6;
				}
				break;
			
			case 2:
				if (!unk_0x191BE1BC8F26F3C1(Local_66.f_86, 0))
				{
					func_188();
					func_11(&(Local_66.f_86.f_7));
					iLocal_52 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x191BE1BC8F26F3C1(Local_66.f_86, 0))
				{
					if ((func_187(&(Local_66.f_86.f_7), 5f) || func_185(Local_66.f_2, &(Local_66.f_451))) || unk_0x9F887157983E8EFC(Local_66.f_86))
					{
						iLocal_52 = 4;
					}
				}
				break;
			
			case 4:
				if (!unk_0x191BE1BC8F26F3C1(Local_66.f_86, 0))
				{
					iLocal_51 = 31;
					unk_0xD68E88A8E0BE8697(Local_66.f_86, Local_66, 500f, -1, 0, 0);
					iLocal_52 = 5;
				}
				func_39(&(Local_66.f_86.f_7));
				break;
			}
	}
}

int func_185(int iParam0, var uParam1)//Position - 0xC351
{
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 7))
		{
			if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iParam0) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iParam0))
			{
				if (unk_0xCA3C40448996C9BA(iParam0, unk_0xFC1458A37D98B502(), 90f))
				{
					if (func_186(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x53C562FD2B9E3AB0();
						}
						else if ((unk_0x53C562FD2B9E3AB0() - uParam1->f_1) > uParam1->f_3)
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

float func_186(int iParam0, bool bParam1)//Position - 0xC3D6
{
	return func_22(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B()), iParam0, bParam1);
}

int func_187(var uParam0, float fParam1)//Position - 0xC3EE
{
	if (func_14(uParam0))
	{
		if (func_8(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_188()//Position - 0xC410
{
	if (!unk_0x191BE1BC8F26F3C1(Local_66.f_86, 0))
	{
		unk_0x6931076730A4AC5D(&(Local_66.f_86.f_6));
		unk_0xAC838A977FB6E6BC(0, Local_66, 0);
		unk_0x60C06BFD037BB7CF(0, Local_66, 2500, 0, 2);
		unk_0x2955A31540EE0E4F(0, 2500, 0, -1, 0);
		unk_0x1B16DD5C115FE009(Local_66.f_86.f_6);
		unk_0xAB30B1CF01A198C1(Local_66.f_86, Local_66.f_86.f_6);
	}
}

int func_189()//Position - 0xC466
{
	unk_0xB7AF4220260C2ACD(Local_66.f_86.f_2, Local_66.f_86.f_5, 1, 0, &(Local_66.f_86), 0, 1, -1);
	if (!unk_0x191BE1BC8F26F3C1(Local_66.f_86, 0))
	{
		if (unk_0x82FF3DFBC3965CC0(Local_66.f_86) == Local_66.f_86.f_1)
		{
			unk_0xDD29FF4BAB8AFF9C(Local_66.f_86, true, 0);
			unk_0x771A86309E0CA47B(Local_66.f_86, true);
			return 1;
		}
	}
	return 0;
}

void func_190()//Position - 0xC4C6
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	
	if (iLocal_101 > 1 && iLocal_101 < 5)
	{
		if (func_211())
		{
			unk_0xAE83ED4C9081AE6F(500);
			iLocal_101 = 6;
		}
	}
	switch (iLocal_101)
	{
		case 0:
			if ((((unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0) || !func_210()) || func_1(Local_66.f_470, 128)) && iLocal_55 < 3) && unk_0xAA0BDFF32B6BC02A(Local_66.f_2.f_1, 1,5f) == 0)
			{
				if ((func_44() && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && !func_209(0))
				{
					func_208("SHR_ROBTILL", -1);
					Local_66.f_469 = -1;
					func_178(&(Local_66.f_469), 4, "SHR_ROBTILL", 0, 0, 0, 0);
					unk_0x0EE72DB1CD8A3B86(&(Local_66.f_162.f_18), 1);
					unk_0x0EE72DB1CD8A3B86(&(Local_66.f_162.f_18), 0);
					iLocal_101 = 1;
				}
			}
			else if (!unk_0x3AB6A1A9084FB0A4(Local_66.f_2))
			{
			}
			else if (iLocal_55 == 7)
			{
			}
			else if (unk_0xAA0BDFF32B6BC02A(Local_66.f_2.f_1, 1,5f) > 0)
			{
			}
			break;
		
		case 1:
			if (func_44())
			{
				if (func_174(Local_66.f_469, 1))
				{
					if (!unk_0x191BE1BC8F26F3C1(Local_66, 0))
					{
						if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
						{
							iVar3 = unk_0xC733212BF9066BDF();
							if (unk_0x0F3033474C49912D(iVar3, Local_66.f_214, Local_66.f_217, Local_66.f_220, 0, true, 0))
							{
								unk_0xBD8D47FDC6902B2D(iVar3, unk_0x9EA50C5EC175E58E(Local_66.f_486.f_6, Local_66.f_486.f_9.f_2, -0,7961f, -1,562f, -0,4215f), 0, false, 0, 1);
							}
						}
					}
					unk_0x872F1C1F8587CCC7(&(Local_66.f_162.f_18), 1);
					if (func_27("SHR_ROBTILL"))
					{
						unk_0x3E80C2F7BC665259(1);
					}
					func_177(&(Local_66.f_469));
					bVar2 = unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iLocal_105, 1);
					if (bVar2)
					{
						unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
					}
					unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), false, 0);
					unk_0x49779D62887BC4A2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 15f);
					unk_0xAE3DF717857FE7CA(0);
					func_113(0);
					func_202(1, 1, 1, 0);
					unk_0x9B47B379EE749C38(false);
					func_173(23, 1);
					unk_0xA896149A4DE38DEA(Local_66.f_2.f_1, 3f, 0);
					iLocal_101 = 2;
				}
				else if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
				{
					if (Local_66.f_469 <= 0)
					{
						Local_66.f_469 = -1;
						func_178(&(Local_66.f_469), 4, "SHR_ROBTILL", 0, 0, 0, 0);
					}
				}
			}
			else
			{
				if (func_27("SHR_ROBTILL"))
				{
					unk_0x3E80C2F7BC665259(1);
				}
				func_177(&(Local_66.f_469));
				iLocal_101 = 0;
			}
			break;
		
		case 2:
			if (unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
			{
				unk_0xB18E1DBC397238E1(Local_66.f_2, false, 0);
				unk_0xEDC33A771FAEB393(Local_66.f_2, true);
			}
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), unk_0x9EA50C5EC175E58E(Local_66.f_2.f_1, Local_66.f_2.f_4, -0,75f, 0f, -1f), 1, false, 0, 1);
				unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), Local_66.f_2.f_4);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_78);
				unk_0x6931076730A4AC5D(&iLocal_78);
				unk_0x12C9D41D52A560D6(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 1, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -1,5f, -1, 0, 0, 0, 0, 0);
				unk_0x1B16DD5C115FE009(iLocal_78);
				unk_0xAB30B1CF01A198C1(unk_0xFC1458A37D98B502(), iLocal_78);
				if (!unk_0x8EA3C8E091EA5BA4(iLocal_102))
				{
					iLocal_102 = unk_0x5AC38B4D80D4E352(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0x1F2D9CBE337F9DB2(iLocal_102, unk_0xFC1458A37D98B502(), -0,1878f, 3,0635f, 0,68f, 1);
				unk_0xAA7DE567B3D55DDB(iLocal_102, unk_0xFC1458A37D98B502(), -0,0129f, 0,0927f, 0,3008f, 1);
				unk_0xE43C573FE3C5D758(iLocal_102, 35f);
				unk_0x7E4FCDC8BAD0CF6D(iLocal_102, "HAND_SHAKE", 0,1f);
				unk_0x7849794435F39D49(iLocal_102, true);
				unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
			}
			iLocal_101 = 3;
			break;
		
		case 3:
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (!unk_0x8EA3C8E091EA5BA4(iLocal_103))
				{
					iLocal_103 = unk_0x5AC38B4D80D4E352(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0x1F2D9CBE337F9DB2(iLocal_103, unk_0xFC1458A37D98B502(), -1,0346f, 2,9183f, 0,68f, 1);
				unk_0xAA7DE567B3D55DDB(iLocal_103, unk_0xFC1458A37D98B502(), -0,0574f, 0,1074f, 0,3008f, 1);
				unk_0xE43C573FE3C5D758(iLocal_103, 35f);
				unk_0x7E4FCDC8BAD0CF6D(iLocal_103, "HAND_SHAKE", 0,3f);
				unk_0xF10DA1539629CC3F(iLocal_103, iLocal_102, 8000, 1, 1);
			}
			iLocal_106 = unk_0x53C562FD2B9E3AB0();
			iLocal_101 = 4;
			break;
		
		case 4:
			if (((unk_0x53C562FD2B9E3AB0() - iLocal_106) > 4800 || (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))) || unk_0xAA0BDFF32B6BC02A(Local_66.f_2.f_1, 3f) > 0)
			{
				iLocal_101 = 5;
			}
			else if ((unk_0x53C562FD2B9E3AB0() - iLocal_106) > 4500)
			{
				if (func_201())
				{
					if (!iLocal_95)
					{
						unk_0xA91E83FF512776B6("CamPushInNeutral", 0, 0);
						unk_0x4AFBCBFDE748D4E0(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_95 = 1;
					}
				}
			}
			else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "oddjobs@shop_robbery@rob_till", "loop", 3))
			{
				fVar0 = unk_0x7A70772AE40E3821(unk_0xFC1458A37D98B502(), "oddjobs@shop_robbery@rob_till", "loop");
				if ((fVar0 > 0,374f && fVar0 <= 0,484f) || (fVar0 > 0,824f && fVar0 <= 0,92f))
				{
					if (!iLocal_104)
					{
						iVar1 = unk_0x63A6486593EC7EC3(10, 51);
						func_200(func_100(), 1, iVar1, 0, 0);
						iLocal_81 = (iLocal_81 + iVar1);
						Local_66.f_28.f_6 = unk_0xD0CA83418A236CB4();
						unk_0x4AFBCBFDE748D4E0(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
						iLocal_104 = 1;
					}
				}
				else if (iLocal_104)
				{
					iLocal_104 = 0;
				}
			}
			break;
		
		case 5:
			if (unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
			{
				unk_0xB18E1DBC397238E1(Local_66.f_2, true, 0);
				unk_0xEDC33A771FAEB393(Local_66.f_2, false);
			}
			unk_0xBB9A3C553EECB180(0f);
			unk_0x7C9705890EF6612E(0f, 1065353216);
			if (unk_0x8EA3C8E091EA5BA4(iLocal_102))
			{
				unk_0x02934BABFD4CD384(iLocal_102, 0);
			}
			if (unk_0x8EA3C8E091EA5BA4(iLocal_103))
			{
				unk_0x02934BABFD4CD384(iLocal_103, 0);
			}
			unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
			if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
			{
				iVar3 = unk_0xC733212BF9066BDF();
				vVar4 = { unk_0xB3328BA8976B416C(iVar3, 1) };
			}
			if (iLocal_105 != joaat("weapon_unarmed") && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), iLocal_105, true);
			}
			if (unk_0xC80D31E4B587871C(Local_66.f_162.f_18, 1))
			{
				unk_0x0EE72DB1CD8A3B86(&(Local_66.f_162.f_18), 1);
			}
			func_199(1, 1, 1);
			func_15(1, 0);
			iLocal_60 = 12;
			func_196();
			func_191(297, 0, 0);
			Local_66.f_468 = 1;
			iLocal_101 = 7;
			break;
		
		case 6:
			if (unk_0x3E9CABD07B829173())
			{
				unk_0x7849794435F39D49(iLocal_103, false);
				unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
				if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
				}
				if (iLocal_81 < 15)
				{
					iVar1 = unk_0x63A6486593EC7EC3(25, 65);
					func_200(func_100(), 1, iVar1, 0, 0);
					iLocal_81 = (iLocal_81 + iVar1);
				}
				unk_0x59C3AC31C7544A28(500);
				iLocal_101 = 5;
			}
			break;
	}
}

void func_191(int iParam0, int iParam1, int iParam2)//Position - 0xCBED
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_75((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_104555.f_10164[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104555.f_10164[iParam0 /*12*/].f_6 == 11 || Global_104555.f_10164[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104555.f_10164[iParam0 /*12*/].f_5 = 1;
		Global_104555.f_10164[iParam0 /*12*/].f_10 = iParam1;
		Global_104555.f_10164[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x02D73F783D6C1AFA(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x02D73F783D6C1AFA(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x02D73F783D6C1AFA(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_192();
	}
}

void func_192()//Position - 0xCCD5
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_104291 = 0;
	Global_104292 = 0;
	Global_104293 = 0;
	Global_104294 = 0;
	Global_104295 = 0;
	Global_104296 = 0;
	Global_104297 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104555.f_10164.f_3853;
	Global_104555.f_10164.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104555.f_10164[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104555.f_10164[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104291++;
					fVar1 = (fVar1 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104292++;
					fVar2 = (fVar2 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104293++;
					fVar3 = (fVar3 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104294++;
					fVar4 = (fVar4 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104295++;
					fVar5 = (fVar5 + (Global_104555.f_10164[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104296++;
					fVar6 = (fVar6 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104297++;
					fVar7 = (fVar7 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104274 > 0)
	{
		if (Global_104291 == Global_104274)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104275 > 0)
	{
		if (Global_104292 == Global_104275)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104276 > 0)
	{
		if (Global_104293 == Global_104276)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104277 > 0)
	{
		if (Global_104294 == Global_104277)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104278 > 0)
	{
		if (((Global_104295 == Global_104278 || (Global_104278 * 10 / Global_104295) < 41) || Global_104295 > Global_104281) || Global_104295 == Global_104281)
		{
			if (!unk_0xC80D31E4B587871C(Global_104555.f_10164.f_3856, 14))
			{
				if (Global_104295 == Global_104278)
				{
					unk_0x02D73F783D6C1AFA(joaat("num_rndevents_completed"), Global_104278, 0);
					unk_0x872F1C1F8587CCC7(&(Global_104555.f_10164.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104279 > 0)
	{
		if (Global_104296 == Global_104279)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104280 > 0)
	{
		if (Global_104297 == Global_104280)
		{
			fVar7 = 5f;
		}
	}
	Global_104555.f_10164.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104295 > Global_104281 || Global_104295 == Global_104281)
	{
		iVar9 = Global_104281;
	}
	else
	{
		iVar9 = Global_104295;
	}
	unk_0xBFFF62F75445099D(joaat("num_missions_completed"), Global_104291, 1);
	unk_0xBFFF62F75445099D(joaat("num_missions_available"), Global_104274, 1);
	unk_0xBFFF62F75445099D(joaat("num_minigames_completed"), Global_104292, 1);
	unk_0xBFFF62F75445099D(joaat("num_minigames_available"), Global_104275, 1);
	unk_0xBFFF62F75445099D(joaat("num_oddjobs_completed"), Global_104293, 1);
	unk_0xBFFF62F75445099D(joaat("num_oddjobs_available"), Global_104276, 1);
	unk_0xBFFF62F75445099D(joaat("num_rndpeople_completed"), Global_104294, 1);
	unk_0xBFFF62F75445099D(joaat("num_rndpeople_available"), Global_104277, 1);
	unk_0xBFFF62F75445099D(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xBFFF62F75445099D(joaat("num_rndevents_available"), Global_104281, 1);
	unk_0xBFFF62F75445099D(joaat("num_misc_completed"), (Global_104297 + Global_104296), 1);
	unk_0xBFFF62F75445099D(joaat("num_misc_available"), (Global_104280 + Global_104279), 1);
	Global_104298 = (Global_104291 * 100 / Global_104274);
	Global_104300 = ((Global_104293 + Global_104292) * 100 / (Global_104276 + Global_104275));
	Global_104299 = ((Global_104294 + iVar9) * 100 / (Global_104277 + Global_104281));
	Global_104301 = ((Global_104296 + Global_104297) * 100 / (Global_104279 + Global_104280));
	unk_0x00E69ADBDAF11A90(joaat("total_progress_made"), Global_104555.f_10164.f_3853, 1);
	unk_0xBFFF62F75445099D(joaat("percent_story_missions"), Global_104298, 1);
	unk_0xBFFF62F75445099D(joaat("percent_ambient_missions"), Global_104299, 1);
	unk_0xBFFF62F75445099D(joaat("percent_oddjobs"), Global_104300, 1);
	if (fVar8 > 0f && system::floor(fVar8) < system::floor(Global_104555.f_10164.f_3853))
	{
		func_96(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_195() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_193();
				}
			}
		}
	}
}

int func_193()//Position - 0xD196
{
	if (func_194(0))
	{
		return 0;
	}
	if (Global_92872.f_8)
	{
		if (Global_92872.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92872.f_10 > 1)
	{
		return 0;
	}
	Global_92872.f_10++;
	return 1;
}

bool func_194(bool bParam0)//Position - 0xD1E1
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

int func_195()//Position - 0xD20C
{
	return Global_25233;
}

void func_196()//Position - 0xD217
{
	if (!iLocal_87)
	{
		Global_104555.f_20005[iLocal_80]++;
		Global_104555.f_20005.f_62[iLocal_80] = Local_66.f_1;
		if (func_100() == 0)
		{
			func_197(5);
		}
		iLocal_87 = 1;
	}
}

void func_197(int iParam0)//Position - 0xD266
{
	switch (iParam0)
	{
		case 0:
			func_198(&Global_89446, 1);
			break;
		
		case 1:
			func_198(&Global_89448, 3);
			break;
		
		case 2:
			func_198(&Global_89452, 1);
			break;
		
		case 3:
			func_198(&Global_89454, 1);
			break;
		
		case 4:
			func_198(&Global_89456, 1);
			break;
		
		case 5:
			func_198(&Global_89458, 1);
			break;
		
		case 6:
			func_198(&Global_89460, 1);
			break;
		
		case 7:
			func_198(&Global_89462, 2);
			break;
		
		case 8:
			func_198(&Global_89465, 1);
			break;
		
		case 9:
			func_198(&Global_89467, 1);
			break;
	}
}

void func_198(var uParam0, int iParam1)//Position - 0xD329
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (iVar0 < (iParam1 - 1))
		{
			(*uParam0)[iVar0] = (*uParam0)[iVar0 + 1];
		}
		else
		{
			(*uParam0)[iVar0] = unk_0x53C562FD2B9E3AB0();
		}
		iVar0++;
	}
}

void func_199(bool bParam0, bool bParam1, int iParam2)//Position - 0xD368
{
	if (bParam0)
	{
		unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), true, 0);
	}
	unk_0xAE3DF717857FE7CA(1);
	func_202(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0x9B47B379EE749C38(true);
		unk_0x4255E93FCCDE108E(true);
	}
	func_173(23, 0);
}

void func_200(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xD3A3
{
	int iVar0;
	int iVar1;
	
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_69(Global_104555.f_28020[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0xFA3CE529DBB66C85(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xBFFF62F75445099D(iVar1, iVar0, 1);
	}
}

int func_201()//Position - 0xD48A
{
	if (unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_202(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xD4A3
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_207(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_114())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_206(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_207(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_206(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_204(unk_0x9EB17624F44A8DA4())) && !func_127(unk_0x9EB17624F44A8DA4(), 0)) && !func_203())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_204(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_203()//Position - 0xD5BC
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

int func_204(int iParam0)//Position - 0xD5D9
{
	if (func_127(iParam0, 0))
	{
		return 1;
	}
	if (func_205())
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

bool func_205()//Position - 0xD61B
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_206(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0xD62C
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0x1746AAD73B7DFC1B() != iParam0 && uParam2)
		{
			unk_0x035AB8AAB511237A(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_207(int iParam0)//Position - 0xD65F
{
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2323, 13);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 13);
	}
}

void func_208(char* sParam0, int iParam1)//Position - 0xD682
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

int func_209(int iParam0)//Position - 0xD699
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xC80D31E4B587871C(Global_2323, 14))
			{
				if (Global_14452 == 1)
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
		else
		{
			return 0;
		}
	}
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_14452 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_14453.f_1 > 3)
	{
		if (Global_14452 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_210()//Position - 0xD71D
{
	if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
	{
		if (unk_0x1ACD6691B9C9AA46(Local_66.f_2) == Local_66.f_185)
		{
			return 1;
		}
		else if (unk_0x0F3033474C49912D(Local_66.f_2, Local_66.f_186, Local_66.f_189, Local_66.f_192, 0, true, 0))
		{
			return 1;
		}
		else if (unk_0x0F3033474C49912D(Local_66.f_2, Local_66.f_200, Local_66.f_203, Local_66.f_206, 0, true, 0))
		{
			return 1;
		}
		else if (unk_0x0F3033474C49912D(Local_66.f_2, Local_66.f_207, Local_66.f_210, Local_66.f_213, 0, true, 0))
		{
			return 1;
		}
		else if (Local_66.f_199 != -1f)
		{
			if (unk_0x0F3033474C49912D(Local_66.f_2, Local_66.f_193, Local_66.f_196, Local_66.f_199, 0, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_211()//Position - 0xD7E3
{
	if (unk_0x0F30C1F1717A6437())
	{
		return 0;
	}
	if (unk_0xE8C126B7ADBB9D63(0, 18) || unk_0xE8C126B7ADBB9D63(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_212()//Position - 0xD815
{
	int iVar0;
	
	func_229();
	func_226();
	if (unk_0x6ADD12BF4D6D2587(Local_66))
	{
		unk_0x5AD8564EFD5BEC2E(Local_66, &iVar0, 1);
		if ((iLocal_58 == 1 && iLocal_99 == 2) && ((unk_0x43213E9B2334AA57(unk_0x9EB17624F44A8DA4()) || func_225()) || func_224()))
		{
			unk_0xA5D622458FE6D993(unk_0x9EB17624F44A8DA4());
			func_15(1, 0);
			iLocal_58 = 9;
		}
	}
	else
	{
		return;
	}
	func_221();
	if (!bLocal_86)
	{
		func_220();
	}
	switch (iLocal_58)
	{
		case 1:
			if (func_295())
			{
				if ((func_20(Local_66, Local_66.f_2, &(Local_66.f_451), 1) || (func_185(Local_66.f_2, &(Local_66.f_451)) && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))) && iVar0 != joaat("weapon_unarmed"))
				{
					func_219();
					unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
					iLocal_51 = 12;
					iLocal_50 = 3;
					iLocal_58 = 5;
					unk_0x872F1C1F8587CCC7(&Global_88829, 3);
					func_218();
				}
				if (func_1(Local_66.f_470, 8))
				{
					if (!func_1(Local_66.f_470, 32))
					{
						if (!unk_0x3AB6A1A9084FB0A4(Local_66.f_2) && func_1(Local_66.f_470, 4))
						{
							unk_0x12C9D41D52A560D6(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_51 = 36;
						func_15(1, 0);
						func_217();
						func_286(&(Local_66.f_470), 32);
					}
				}
			}
			break;
		
		case 2:
			if (func_295())
			{
				if (func_185(Local_66.f_2, &(Local_66.f_451)) && iVar0 != joaat("weapon_unarmed"))
				{
					unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
					Local_66.f_2.f_11 = 1;
					func_196();
					iLocal_51 = 12;
					iLocal_50 = 3;
					iLocal_60 = 11;
					iLocal_58 = 3;
					unk_0x872F1C1F8587CCC7(&Global_88829, 3);
					func_218();
				}
				else if (func_20(Local_66, Local_66.f_2, &(Local_66.f_451), 1))
				{
					unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
					func_217();
					func_219();
					iLocal_51 = 12;
					iLocal_58 = 5;
					func_218();
				}
				else if (func_1(Local_66.f_470, 8))
				{
					if (!func_1(Local_66.f_470, 32))
					{
						if (!unk_0x3AB6A1A9084FB0A4(Local_66.f_2) && func_1(Local_66.f_470, 4))
						{
							unk_0x12C9D41D52A560D6(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_51 = 36;
						func_15(1, 0);
						func_217();
						func_286(&(Local_66.f_470), 32);
					}
				}
			}
			break;
		
		case 3:
			if (iLocal_51 >= 13)
			{
				if (!unk_0x33B1D0D0C92D4F18(unk_0xFC1458A37D98B502()) && !unk_0x33B1D0D0C92D4F18(Local_66.f_2))
				{
					iLocal_51 = 15;
					iLocal_56 = 5;
					iLocal_60 = 12;
					iLocal_58 = 4;
				}
			}
			break;
		
		case 4:
			if (func_20(Local_66, Local_66.f_2, &(Local_66.f_451), 1) && func_295())
			{
				func_219();
				if (Local_66.f_2.f_12)
				{
					iLocal_51 = 22;
				}
				else
				{
					iLocal_51 = 16;
				}
				iLocal_58 = 5;
			}
			break;
		
		case 5:
			if (Local_66.f_486 >= 0)
			{
				if (func_20(Local_66, Local_66.f_2, &(Local_66.f_451), 1) && func_295())
				{
					if (unk_0xD56F740235B1E8F0(Local_66.f_486) && !Local_66.f_467)
					{
						iLocal_51 = 33;
						Local_66.f_467 = 1;
					}
				}
			}
			if (iLocal_53 >= 1 && iLocal_53 < 7)
			{
				unk_0xA5D622458FE6D993(unk_0x98EC0789D9F0703B());
				if (func_215(Local_66.f_2, 0, 1, 0, 1, 1) || !unk_0xD56F740235B1E8F0(Local_66.f_486))
				{
					iLocal_58 = 6;
				}
			}
			break;
		
		case 6:
			if (iLocal_54 != 3 && iLocal_54 != 4)
			{
				iLocal_54 = 4;
			}
			unk_0x0EE72DB1CD8A3B86(&Global_88829, 3);
			if (!unk_0x9F887157983E8EFC(Local_66.f_2))
			{
				func_6();
				iLocal_58 = 0;
			}
			break;
		
		case 7:
			if (!unk_0x9F887157983E8EFC(Local_66.f_2))
			{
				func_214();
				iLocal_51 = 36;
				func_15(1, 0);
				func_286(&(Local_66.f_470), 32);
				iLocal_56 = 7;
				iLocal_58 = 8;
			}
			break;
		
		case 8:
			if (((func_20(Local_66, Local_66.f_2, &(Local_66.f_451), 1) || func_185(Local_66.f_2, &(Local_66.f_451))) && func_295()) && iVar0 != joaat("weapon_unarmed"))
			{
				if (!Local_66.f_2.f_12)
				{
					iLocal_51 = 10;
					iLocal_58 = 9;
				}
				else
				{
					func_18();
					iLocal_51 = 11;
					iLocal_58 = 0;
				}
				Local_66.f_2.f_13 = 0;
			}
			break;
		
		case 9:
			func_6();
			iLocal_58 = 12;
			break;
		
		case 10:
			if ((((func_20(Local_66, Local_66.f_2, &(Local_66.f_451), 1) || func_185(Local_66.f_2, &(Local_66.f_451))) && func_295()) && iVar0 != joaat("weapon_unarmed")) && !func_14(&(Local_66.f_480)))
			{
				func_11(&(Local_66.f_480));
				if (unk_0x9F887157983E8EFC(Local_66.f_2))
				{
					func_6();
				}
				iLocal_51 = 23;
			}
			else if (func_40(&(Local_66.f_480)) > 10f)
			{
				if (!unk_0x3AB6A1A9084FB0A4(Local_66.f_2))
				{
					unk_0xD68E88A8E0BE8697(Local_66.f_2, unk_0xFC1458A37D98B502(), 100f, -1, 0, 0);
				}
				iLocal_58 = 12;
			}
			break;
		
		case 11:
			func_213();
			iLocal_58 = 12;
			break;
	}
}

void func_213()//Position - 0xDD27
{
	if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
	{
		unk_0x771A86309E0CA47B(Local_66.f_2, false);
	}
}

void func_214()//Position - 0xDD45
{
	if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
	{
		unk_0x60C06BFD037BB7CF(Local_66.f_2, Local_66, -1, 0, 2);
	}
}

int func_215(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xDD67
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_45)
		{
			iLocal_46 = unk_0xDE523AF6F7B269AB(iParam0);
			bLocal_45 = true;
		}
		iLocal_47 = unk_0xDE523AF6F7B269AB(iParam0);
		iLocal_48 = (iLocal_46 - iLocal_47);
		iVar0 = unk_0xC733212BF9066BDF();
		if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
		{
			if (unk_0xEBE499597C718EB8(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_45)
		{
			if (unk_0xEBE499597C718EB8(iParam0, unk_0xFC1458A37D98B502(), 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xEBE499597C718EB8(iParam0, unk_0xFC1458A37D98B502(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0xC733212BF9066BDF();
		if (!unk_0x191BE1BC8F26F3C1(iVar1, 0))
		{
			if (unk_0xEBE499597C718EB8(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			if (unk_0x27C8A4034A05DC21(iParam0))
			{
				if (unk_0x4EAE4CAB6D3C4502(iParam0) == unk_0xFC1458A37D98B502())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()))
		{
			if (unk_0x0C88267282FD588F(iParam0, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 10f, 10f, 10f, false, true, 0))
			{
				if (unk_0x43213E9B2334AA57(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xE72696884FB34FE1(unk_0xFC1458A37D98B502()))
	{
		if (unk_0xD9E1B7C62F05F2A0(iParam0))
		{
			return 1;
		}
	}
	if (func_216(unk_0xFC1458A37D98B502(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x9F887157983E8EFC(iParam0) && func_186(iParam0, 1) < 1,5f)
		{
			return 1;
		}
		else if (unk_0x88DDBE9908752BF0(iParam0, 0))
		{
			if (unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), unk_0xDFD115BB10FE46A9(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), iParam0))
		{
			return 1;
		}
		if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
		{
			if (unk_0xEBE499597C718EB8(iParam1, unk_0xFC1458A37D98B502(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_216(int iParam0, int iParam1)//Position - 0xDF2F
{
	int iVar0;
	
	unk_0x5AD8564EFD5BEC2E(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x08765A6321A42CA1(iParam0))
		{
			if (system::vdist(unk_0xB3328BA8976B416C(iParam0, 1), unk_0xB3328BA8976B416C(iParam1, 1)) < 2,5f)
			{
				if (unk_0xCA3C40448996C9BA(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_217()//Position - 0xDF84
{
	var uVar0[2];
	int iVar1;
	int iVar2;
	
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && func_295())
	{
		iVar1 = unk_0xD1A659E6867D8FF6(unk_0xFC1458A37D98B502(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if ((((uVar0[iVar2] != unk_0xFC1458A37D98B502() && uVar0[iVar2] != Local_66.f_2) && !unk_0x3AB6A1A9084FB0A4(uVar0[iVar2])) && !unk_0x9761C10D57B68069(uVar0[iVar2])) && !unk_0x7ED4D0E480A6EC43(uVar0[iVar2], 0))
			{
				unk_0xDD29FF4BAB8AFF9C(uVar0[iVar2], true, 1);
				unk_0xD68E88A8E0BE8697(uVar0[iVar2], unk_0xFC1458A37D98B502(), 100f, -1, 0, 0);
			}
			iVar2++;
		}
	}
}

void func_218()//Position - 0xE03B
{
	var uVar0[2];
	int iVar1;
	int iVar2;
	
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && func_295())
	{
		iVar1 = unk_0xD1A659E6867D8FF6(unk_0xFC1458A37D98B502(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if ((uVar0[iVar2] != unk_0xFC1458A37D98B502() && uVar0[iVar2] != Local_66.f_2) && !unk_0x9761C10D57B68069(uVar0[iVar2]))
			{
				unk_0xDD29FF4BAB8AFF9C(uVar0[iVar2], true, 1);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_78);
				unk_0x6931076730A4AC5D(&iLocal_78);
				unk_0xF21E6EBE8EFDCC28(0, 5000);
				unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 100f, -1, 0, 0);
				unk_0x1B16DD5C115FE009(iLocal_78);
				unk_0xAB30B1CF01A198C1(uVar0[iVar2], iLocal_78);
			}
			iVar2++;
		}
	}
}

void func_219()//Position - 0xE0F6
{
	if (func_24(Local_66) == joaat("weapon_rpg"))
	{
		Local_66.f_458 = 1;
	}
	else if (func_24(Local_66) == joaat("weapon_knife"))
	{
		Local_66.f_459 = 1;
	}
	else if (((func_24(Local_66) == joaat("weapon_hammer") || func_24(Local_66) == joaat("weapon_crowbar")) || func_24(Local_66) == joaat("weapon_bat")) || func_24(Local_66) == joaat("weapon_bottle"))
	{
		Local_66.f_460 = 1;
	}
	else if ((func_24(Local_66) == joaat("weapon_grenade") || func_24(Local_66) == joaat("weapon_smokegrenade")) || func_24(Local_66) == joaat("weapon_molotov"))
	{
		Local_66.f_461 = 1;
	}
	else if (func_24(Local_66) == joaat("weapon_stickybomb"))
	{
		Local_66.f_462 = 1;
	}
	iLocal_60 = 12;
	func_196();
	iLocal_59 = 2;
	iLocal_63 = 1;
	iLocal_62 = 6;
	Local_66.f_2.f_13 = 0;
}

void func_220()//Position - 0xE1E2
{
	if (iLocal_53 == 0)
	{
		if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
		{
			switch (iLocal_56)
			{
				case 1:
					iLocal_56 = 0;
					break;
				
				case 2:
					unk_0x12C9D41D52A560D6(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_17, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				
				case 3:
					unk_0x12C9D41D52A560D6(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_18, 8f, -4f, -1, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				
				case 4:
					unk_0x12C9D41D52A560D6(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_19, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				
				case 5:
					unk_0x12C9D41D52A560D6(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_20, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				
				case 6:
					iLocal_56 = 0;
					break;
				
				case 7:
					unk_0x12C9D41D52A560D6(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_21, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				}
			}
	}
}

void func_221()//Position - 0xE30C
{
	switch (iLocal_57)
	{
		case 1:
			func_214();
			iLocal_57 = 2;
			break;
		
		case 2:
			if (iLocal_53 == 2)
			{
				func_223();
				Local_66.f_2.f_13 = 0;
				iLocal_57 = 3;
			}
			if ((func_44() || func_43()) && !Local_66.f_2.f_13)
			{
				Local_66.f_2.f_13 = 1;
			}
			if (!Local_66.f_2.f_14)
			{
				if (!unk_0x3AB6A1A9084FB0A4(Local_66.f_2) && unk_0xA6FA9E5D08F067AD(Local_66.f_2))
				{
					Local_66.f_2.f_14 = 1;
				}
			}
			if ((Local_66.f_2.f_13 && !unk_0x3AB6A1A9084FB0A4(Local_66.f_2)) && !iLocal_58 == 12)
			{
				func_222();
			}
			break;
		
		case 3:
			if (iLocal_53 >= 7)
			{
				func_214();
				iLocal_57 = 4;
			}
			break;
	}
}

void func_222()//Position - 0xE3D2
{
	if ((unk_0x53C562FD2B9E3AB0() - Local_66.f_2.f_10) > 5000)
	{
		unk_0xFAA3EF7FF92E1F9E(&(Local_66.f_2.f_24));
		unk_0x6931076730A4AC5D(&(Local_66.f_2.f_24));
		unk_0xAC838A977FB6E6BC(0, Local_66, 0);
		unk_0x60C06BFD037BB7CF(0, Local_66, -1, 0, 2);
		unk_0x1B16DD5C115FE009(Local_66.f_2.f_24);
		unk_0xAB30B1CF01A198C1(Local_66.f_2, Local_66.f_2.f_24);
		Local_66.f_2.f_10 = unk_0x53C562FD2B9E3AB0();
	}
}

void func_223()//Position - 0xE433
{
	if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
	{
		unk_0xCB3D88C918AA637C(Local_66.f_2);
	}
}

int func_224()//Position - 0xE450
{
	if (unk_0x31DBB84AFB5DFAB7(Local_66.f_186, Local_66.f_189, Local_66.f_192, 1))
	{
		return 1;
	}
	return 0;
}

int func_225()//Position - 0xE475
{
	if (unk_0x34D9850FEBB1F859(-1, Local_66.f_186, Local_66.f_189, Local_66.f_192))
	{
		return 1;
	}
	return 0;
}

void func_226()//Position - 0xE49A
{
	if (!Local_66.f_465)
	{
		if (func_227())
		{
			if (!func_14(&(Local_66.f_474)))
			{
				func_11(&(Local_66.f_474));
			}
			else if (func_187(&(Local_66.f_474), 1f))
			{
				Local_66.f_465 = 1;
				iLocal_51 = 26;
				if (!unk_0x3AB6A1A9084FB0A4(Local_66.f_2))
				{
					unk_0xD68E88A8E0BE8697(Local_66.f_2, unk_0xFC1458A37D98B502(), 100f, -1, 0, 0);
					func_15(1, 0);
				}
			}
		}
		else if (func_14(&(Local_66.f_474)))
		{
			func_39(&(Local_66.f_474));
		}
	}
}

int func_227()//Position - 0xE520
{
	int iVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(Local_66, 0))
	{
		if (func_228())
		{
			unk_0x5AD8564EFD5BEC2E(Local_66, &iVar0, 1);
			if (iVar0 == joaat("weapon_petrolcan"))
			{
				if (unk_0x08765A6321A42CA1(Local_66))
				{
					if (unk_0xCA3C40448996C9BA(Local_66.f_2, Local_66, 180f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_228()//Position - 0xE56E
{
	if (!unk_0x191BE1BC8F26F3C1(Local_66, 0))
	{
		if (unk_0x0F3033474C49912D(Local_66, Local_66.f_186, Local_66.f_189, Local_66.f_192, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_229()//Position - 0xE5A2
{
	if (iLocal_58 != 12)
	{
		if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
		{
			if (unk_0xA6FA9E5D08F067AD(Local_66.f_2))
			{
				unk_0xD68E88A8E0BE8697(Local_66.f_2, Local_66, 100f, -1, 0, 0);
				iLocal_58 = 12;
				iLocal_57 = 4;
				iLocal_56 = 8;
				iLocal_60 = 15;
				if (iLocal_63 == 1)
				{
					iLocal_63 = 2;
				}
				else
				{
					iLocal_63 = 3;
				}
				iLocal_62 = 13;
				iLocal_51 = 27;
				if (!Local_66.f_2.f_14)
				{
					Local_66.f_2.f_14 = 1;
				}
			}
		}
	}
}

void func_230()//Position - 0xE612
{
	switch (iLocal_55)
	{
		case 1:
			if (Local_66.f_486 >= 0)
			{
				if (unk_0xD56F740235B1E8F0(Local_66.f_486))
				{
					if (unk_0x463C4747B41E35A3(Local_66.f_486) > 0,876f)
					{
						iLocal_55 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_66.f_486 >= 0)
			{
				if (unk_0xD56F740235B1E8F0(Local_66.f_486))
				{
					if (unk_0x463C4747B41E35A3(Local_66.f_486) > 0,894f || (unk_0x463C4747B41E35A3(Local_66.f_486) > 0,871f && system::vdist2(unk_0xB3328BA8976B416C(Local_66.f_28, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < 1f))
					{
						iLocal_55 = 3;
					}
				}
			}
			break;
		
		case 3:
			func_15(1, 0);
			func_231(0);
			unk_0x61EF72AFBDCBE53F(Local_66.f_28, 0, 0);
			iLocal_55 = 5;
			break;
		
		case 4:
			func_15(1, 0);
			func_231(1);
			unk_0xB3A8974D2C811672(Local_66.f_28, false, 0);
			iLocal_55 = 5;
			break;
		
		case 5:
			if (unk_0x5D67DB68EF61B3E1(Local_66.f_28, unk_0xFC1458A37D98B502()))
			{
				func_200(func_100(), 1, iLocal_81, 0, 0);
				unk_0xB3A8974D2C811672(Local_66.f_28, false, 0);
				if (unk_0xA6DECE14FC9A8C51(Local_66.f_28.f_2))
				{
					unk_0xE30CF11C0EE14316(&(Local_66.f_28.f_2));
				}
				if (iLocal_60 != 12)
				{
					iLocal_60 = 12;
				}
				func_191(297, 0, 0);
				Local_66.f_468 = 1;
				Local_66.f_28.f_6 = unk_0xD0CA83418A236CB4();
				unk_0x4AFBCBFDE748D4E0(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
				func_12(&(Local_66.f_28.f_15));
				iLocal_55 = 6;
			}
			else if (!unk_0x191BE1BC8F26F3C1(Local_66.f_28, 0) && unk_0xDE3C98B57A41E603(Local_66.f_28))
			{
			}
			break;
		
		case 6:
			if (func_8(&(Local_66.f_28.f_15)) > 2,5f)
			{
				if (unk_0x6ADD12BF4D6D2587(Local_66.f_28) && unk_0x5D67DB68EF61B3E1(Local_66.f_28, unk_0xFC1458A37D98B502()))
				{
					unk_0x6B7C10B19928914F(unk_0xFC1458A37D98B502(), 1, true);
					unk_0x452336926718D62A(&(Local_66.f_28));
				}
				iLocal_55 = 7;
			}
			break;
	}
}

void func_231(bool bParam0)//Position - 0xE7EB
{
	Local_66.f_28.f_3 = 0;
	unk_0x872F1C1F8587CCC7(&(Local_66.f_28.f_3), 3);
	unk_0x872F1C1F8587CCC7(&(Local_66.f_28.f_3), 4);
	if (!bParam0)
	{
		iLocal_81 = unk_0x63A6486593EC7EC3(Local_66.f_28.f_4, Local_66.f_28.f_5);
		if (!unk_0xA6DECE14FC9A8C51(Local_66.f_28.f_2))
		{
			Local_66.f_28.f_2 = func_234(Local_66.f_28);
			unk_0x0C71C8E276E3EC54(Local_66.f_28.f_2, 2);
		}
		unk_0xC17855BA6280F7B3(Local_66.f_28, -0,2f, 1);
	}
	else
	{
		iLocal_81 = unk_0x63A6486593EC7EC3(50, Local_66.f_28.f_4);
		Local_66.f_28.f_1 = unk_0x06583789B8C15A6C(joaat("pickup_money_variable"), unk_0xB3328BA8976B416C(Local_66.f_28, 1), Local_66.f_28.f_3, iLocal_81, 1, 0);
		if (!unk_0xA6DECE14FC9A8C51(Local_66.f_28.f_2))
		{
			Local_66.f_28.f_2 = func_232(Local_66.f_28.f_1);
		}
	}
	Local_66.f_28.f_14 = 1;
}

int func_232(int iParam0)//Position - 0xE8B8
{
	int iVar0;
	
	if (!unk_0xB8B3E5529EDB87D4(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x4DFBD39F0EACA5CC(iParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_233(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	return iVar0;
}

float func_233(bool bParam0, float fParam1, float fParam2)//Position - 0xE8F0
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_234(int iParam0)//Position - 0xE907
{
	return func_235(iParam0, 1, 0);
}

int func_235(int iParam0, bool bParam1, bool bParam2)//Position - 0xE917
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_233(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_233(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_233(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

void func_236()//Position - 0xE9BB
{
	int iVar0;
	int iVar1;
	
	if (Local_66.f_464)
	{
		switch (iLocal_59)
		{
			case 2:
				if (func_1(Local_66.f_470, 4))
				{
					func_240();
					Local_66.f_46.f_39 = unk_0x53C562FD2B9E3AB0();
					iLocal_59 = 3;
				}
				break;
			
			case 3:
				if (unk_0x53C562FD2B9E3AB0() - Local_66.f_46.f_39) > unk_0x63A6486593EC7EC3(1000, 3000)
				{
					if (unk_0xB8DE76287EDC4957(Local_66.f_46.f_4[0], 0))
					{
						unk_0xBB4910CCAB2BEDFA(Local_66.f_46.f_4[0], true);
					}
					iLocal_59 = 4;
				}
				break;
			
			case 4:
				if (func_239() && func_238())
				{
					iLocal_59 = 5;
				}
				break;
			
			case 5:
				iLocal_51 = 24;
				func_15(1, 0);
				iLocal_59 = 6;
				break;
			
			case 6:
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if ((((unk_0x3AB6A1A9084FB0A4(Local_66.f_46[iVar0]) || (!unk_0x191BE1BC8F26F3C1(Local_66.f_46[iVar0], 0) && unk_0x613CDAB05D8C57C8(Local_66.f_46[iVar0], 0, 2))) || unk_0x3AB6A1A9084FB0A4(Local_66.f_2)) || (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0) && unk_0x613CDAB05D8C57C8(Local_66.f_2, 0, 2))) || func_20(Local_66, Local_66.f_2, &(Local_66.f_451), 1))
					{
						func_15(2, 0);
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!unk_0x3AB6A1A9084FB0A4(Local_66.f_46[iVar1]))
							{
								unk_0xD7F5B2902EBBD04E(Local_66.f_46[iVar1], unk_0xFC1458A37D98B502(), 0, 16);
								unk_0x771A86309E0CA47B(Local_66.f_46[iVar1], false);
							}
							iVar1++;
						}
						iLocal_59 = 0;
					}
					iVar0++;
				}
				break;
			
			case 7:
				func_237();
				iLocal_59 = 0;
				break;
			}
	}
}

void func_237()//Position - 0xEB5D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x191BE1BC8F26F3C1(Local_66.f_46[iVar0], 0))
		{
			unk_0x771A86309E0CA47B(Local_66.f_46[iVar0], false);
		}
		iVar0++;
	}
}

int func_238()//Position - 0xEB95
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x191BE1BC8F26F3C1(Local_66.f_46[iVar0], 0))
		{
			if (!unk_0x88DDBE9908752BF0(Local_66.f_46[iVar0], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_239()//Position - 0xEBD6
{
	int iVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(Local_66, 0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_46[iVar0], 0))
			{
				if (!unk_0xEC211A86AB3726B6(Local_66.f_46[iVar0]))
				{
					return 1;
				}
			}
			if (!unk_0x191BE1BC8F26F3C1(Local_66.f_46.f_4[iVar0], 0))
			{
				if (!unk_0xEC211A86AB3726B6(Local_66.f_46.f_4[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_240()//Position - 0xEC4A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_66.f_46[iVar0] = unk_0xAC992EFAD62C33BF(6, Local_66.f_46.f_26, Local_66.f_46.f_8[iVar0 /*3*/], Local_66.f_46.f_18[iVar0], 1, true);
		unk_0xDD29FF4BAB8AFF9C(Local_66.f_46[iVar0], true, 0);
		unk_0x771A86309E0CA47B(Local_66.f_46[iVar0], true);
		Local_66.f_46.f_4[iVar0] = unk_0xEA60F3B426BB095B(Local_66.f_46.f_27, Local_66.f_46.f_8[iVar0 /*3*/], Local_66.f_46.f_18[iVar0], true, true, false);
		unk_0xDD29FF4BAB8AFF9C(Local_66.f_46.f_4[iVar0], true, 0);
		if (!(unk_0x191BE1BC8F26F3C1(Local_66.f_46[iVar0], 0) && unk_0x191BE1BC8F26F3C1(Local_66.f_46.f_4[iVar0], 0)))
		{
			unk_0xBB0358802AA14401(Local_66.f_46[iVar0], Local_66.f_46.f_4[iVar0], -1);
			unk_0x9E058151726E58DE(Local_66.f_46[iVar0], joaat("weapon_pistol"), 99, false, true);
		}
		unk_0x6931076730A4AC5D(&(Local_66.f_46.f_35[iVar0]));
		unk_0x87A3E70B0AB01608(0, Local_66.f_46.f_4[iVar0], Local_66.f_46.f_22, (unk_0x617EA99D340A37ED(Local_66.f_46.f_4[iVar0]) - 8f), 1, Local_66.f_46.f_27, 786981, Local_66.f_46.f_25, -1f);
		unk_0x16416C5B54FDBCBB(0, 0, 0);
		unk_0x9627C22EF3C3F4D6(0, Local_66, -1, 0);
		unk_0x1B16DD5C115FE009(Local_66.f_46.f_35[iVar0]);
		unk_0xAB30B1CF01A198C1(Local_66.f_46[iVar0], Local_66.f_46.f_35[iVar0]);
		iVar0++;
	}
}

void func_241()//Position - 0xEDB7
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(Local_66))
	{
		unk_0x5AD8564EFD5BEC2E(Local_66, &iVar0, 1);
	}
	else
	{
		return;
	}
	iVar1 = 0;
	switch (iLocal_60)
	{
		case 1:
			iLocal_60 = 6;
			break;
		
		case 2:
			iLocal_51 = 2;
			iLocal_60 = 5;
			break;
		
		case 3:
			iLocal_51 = 3;
			iLocal_60 = 5;
			break;
		
		case 4:
			iLocal_51 = 4;
			iLocal_60 = 5;
			break;
		
		case 5:
			if (((((func_24(Local_66) != joaat("weapon_unarmed") && iVar0 != joaat("weapon_bat")) && iVar0 != joaat("weapon_hammer")) && iVar0 != joaat("weapon_crowbar")) && iVar0 != joaat("weapon_bottle")) && func_295())
			{
				iLocal_60 = 7;
			}
			break;
		
		case 6:
			if (func_24(Local_66) != joaat("weapon_unarmed") && func_295())
			{
				if (iVar0 == joaat("weapon_bat"))
				{
					iLocal_60 = 8;
				}
				else if ((iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer")) || iVar0 == joaat("weapon_bottle"))
				{
					iLocal_60 = 9;
				}
				else if (iVar0 == joaat("weapon_stickybomb"))
				{
					iLocal_60 = 10;
				}
				else if ((iVar0 != joaat("weapon_petrolcan") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_briefcase"))
				{
					iLocal_60 = 7;
				}
			}
			break;
		
		case 7:
			iLocal_51 = 5;
			iLocal_56 = 3;
			iLocal_60 = 15;
			break;
		
		case 8:
			iLocal_51 = 2;
			iLocal_56 = 2;
			iLocal_60 = 5;
			break;
		
		case 9:
			iLocal_51 = 3;
			iLocal_56 = 2;
			iLocal_60 = 5;
			break;
		
		case 10:
			iLocal_51 = 4;
			iLocal_56 = 2;
			iLocal_60 = 5;
			break;
		
		case 11:
			if (func_20(Local_66, Local_66.f_2, &(Local_66.f_451), 1))
			{
				func_219();
				iLocal_58 = 5;
			}
			break;
		
		case 12:
			if (!func_295())
			{
				if (!Local_66.f_464)
				{
					iLocal_62 = 9;
					iLocal_60 = 15;
				}
				else
				{
					iLocal_60 = 13;
				}
			}
			break;
		
		case 13:
			if (unk_0x90D5DFB054818BA7(Local_66) < 0,1f && !func_243())
			{
				func_242();
				iLocal_60 = 14;
			}
			else if (func_243() && !func_295())
			{
				iLocal_60 = 14;
			}
			break;
		
		case 14:
			if (func_243() && !func_295())
			{
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!unk_0x3AB6A1A9084FB0A4(Local_66.f_46[iVar1]))
					{
						unk_0xD7F5B2902EBBD04E(Local_66.f_46[iVar1], unk_0xFC1458A37D98B502(), 0, 16);
						unk_0x771A86309E0CA47B(Local_66.f_46[iVar1], false);
					}
					iVar1++;
				}
				iLocal_62 = 9;
				iLocal_60 = 15;
			}
			break;
	}
}

void func_242()//Position - 0xF047
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x191BE1BC8F26F3C1(Local_66.f_46[iVar0], 0))
		{
			if (!unk_0xD4BFB37D19BFF2E5(Local_66.f_46[iVar0]))
			{
				unk_0xB8E08BD5B184DF4E(Local_66.f_46[iVar0]);
				unk_0x121437322D07DD56(Local_66.f_46[iVar0], Local_66);
			}
		}
		iVar0++;
	}
}

int func_243()//Position - 0xF09C
{
	if (!unk_0x191BE1BC8F26F3C1(Local_66, 0))
	{
		if (unk_0x0F3033474C49912D(Local_66, Local_66.f_46.f_28, Local_66.f_46.f_31, Local_66.f_46.f_34, 0, true, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_244()//Position - 0xF0D6
{
	switch (iLocal_63)
	{
		case 0:
			if (!iLocal_93)
			{
				if (func_245())
				{
					iLocal_51 = 9;
					iLocal_58 = 7;
					iLocal_50 = 3;
					iLocal_62 = 13;
					iLocal_63 = 3;
					iLocal_93 = 1;
				}
			}
			break;
		
		case 1:
			break;
	}
}

int func_245()//Position - 0xF11A
{
	int iVar0;
	vector3 vVar1;
	
	if (unk_0x6ADD12BF4D6D2587(Local_66))
	{
		unk_0x5AD8564EFD5BEC2E(Local_66, &iVar0, 1);
	}
	else
	{
		return 0;
	}
	if (!func_1(Local_66.f_470, 128))
	{
		if ((unk_0x9F887157983E8EFC(Local_66.f_2) || (unk_0xEBE499597C718EB8(Local_66.f_2, Local_66, 1) && iVar0 == joaat("weapon_unarmed"))) || func_246(Local_66.f_2, Local_66.f_2.f_1, 1) > 1,15f)
		{
			if (unk_0x9F887157983E8EFC(Local_66.f_2))
			{
			}
			if (unk_0xEBE499597C718EB8(Local_66.f_2, Local_66, 1) && iVar0 == joaat("weapon_unarmed"))
			{
			}
			if (func_246(Local_66.f_2, Local_66.f_2.f_1, 1) > 1,15f)
			{
			}
			if (!unk_0x0C88267282FD588F(Local_66.f_2, Local_66.f_2.f_1, 0,35f, 0,35f, 1f, false, true, 0))
			{
				vVar1 = { unk_0xB3328BA8976B416C(Local_66.f_2, 1) };
				vVar1 = { Local_66.f_2.f_1 };
			}
			return 1;
		}
	}
	return 0;
}

float func_246(int iParam0, vector3 vParam1, bool bParam2)//Position - 0xF211
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

void func_247()//Position - 0xF24B
{
	switch (iLocal_61)
	{
		case 0:
			if (func_275())
			{
				iLocal_61 = 1;
			}
			break;
		
		case 1:
			func_268();
			iLocal_61 = 2;
			break;
		
		case 2:
			func_264();
			iLocal_61 = 3;
			break;
		
		case 3:
			if (func_259())
			{
				iLocal_61 = 4;
			}
			break;
		
		case 4:
			func_248();
			unk_0xA5D622458FE6D993(unk_0x9EB17624F44A8DA4());
			iLocal_65 = 1;
			break;
	}
}

void func_248()//Position - 0xF2B8
{
	func_252();
	func_251();
	func_250();
	if (unk_0x2C2E1E35924B9FF2(Local_66.f_185))
	{
		unk_0x27D745D0C70FD05F(Local_66.f_2, Local_66.f_185);
		unk_0x27D745D0C70FD05F(Local_66.f_28, Local_66.f_185);
		if (!bLocal_86)
		{
			unk_0x27D745D0C70FD05F(Local_66.f_96.f_1, Local_66.f_185);
		}
	}
	func_249();
}

void func_249()//Position - 0xF30B
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
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	
	iVar0 = unk_0x63A6486593EC7EC3(1, 11);
	iVar1 = unk_0x63A6486593EC7EC3(1, 5);
	iVar2 = unk_0x63A6486593EC7EC3(1, 5);
	iVar3 = unk_0x63A6486593EC7EC3(1, 3);
	iVar4 = unk_0x63A6486593EC7EC3(1, 6);
	iVar5 = unk_0x63A6486593EC7EC3(1, 4);
	iVar6 = unk_0x63A6486593EC7EC3(1, 5);
	iVar7 = unk_0x63A6486593EC7EC3(1, 4);
	iVar8 = unk_0x63A6486593EC7EC3(1, 4);
	iVar9 = unk_0x63A6486593EC7EC3(1, 5);
	iVar10 = unk_0x63A6486593EC7EC3(1, 5);
	iVar11 = unk_0x63A6486593EC7EC3(1, 5);
	iVar12 = unk_0x63A6486593EC7EC3(1, 5);
	iVar13 = unk_0x63A6486593EC7EC3(1, 9);
	iVar14 = unk_0x63A6486593EC7EC3(1, 3);
	iVar15 = unk_0x63A6486593EC7EC3(1, 5);
	iVar16 = unk_0x63A6486593EC7EC3(1, 3);
	iVar17 = unk_0x63A6486593EC7EC3(1, 6);
	iVar18 = unk_0x63A6486593EC7EC3(1, 5);
	iVar19 = unk_0x63A6486593EC7EC3(1, 4);
	iVar20 = unk_0x63A6486593EC7EC3(1, 4);
	iVar21 = unk_0x63A6486593EC7EC3(1, 4);
	iVar22 = unk_0x63A6486593EC7EC3(1, 6);
	iVar23 = unk_0x63A6486593EC7EC3(1, 6);
	iVar24 = unk_0x63A6486593EC7EC3(1, 6);
	iVar25 = unk_0x63A6486593EC7EC3(1, 6);
	iVar26 = unk_0x63A6486593EC7EC3(1, 4);
	iVar27 = unk_0x63A6486593EC7EC3(1, 3);
	iVar28 = unk_0x63A6486593EC7EC3(1, 4);
	iVar29 = unk_0x63A6486593EC7EC3(1, 4);
	if (func_100() == 0)
	{
		switch (iVar12)
		{
			case 1:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_1";
				break;
			
			case 2:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_2";
				break;
			
			case 3:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_3";
				break;
			
			case 4:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_4";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_66.f_221.f_220 = "OJSR_COPS_1";
				break;
			
			case 2:
				Local_66.f_221.f_220 = "OJSR_COPS_2";
				break;
			
			case 3:
				Local_66.f_221.f_220 = "OJSR_COPS_3";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_1";
				break;
			
			case 2:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_2";
				break;
		}
	}
	else if (func_100() == 1)
	{
		switch (iVar12)
		{
			case 1:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_5";
				break;
			
			case 2:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_6";
				break;
			
			case 3:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_7";
				break;
			
			case 4:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_8";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_66.f_221.f_220 = "OJSR_COPS_5";
				break;
			
			case 2:
				Local_66.f_221.f_220 = "OJSR_COPS_6";
				break;
			
			case 3:
				Local_66.f_221.f_220 = "OJSR_COPS_7";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_3";
				break;
			
			case 2:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_4";
				break;
		}
	}
	else if (func_100() == 2)
	{
		switch (iVar12)
		{
			case 1:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_9";
				break;
			
			case 2:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_10";
				break;
			
			case 3:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_11";
				break;
			
			case 4:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_12";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_66.f_221.f_220 = "OJSR_COPS_9";
				break;
			
			case 2:
				Local_66.f_221.f_220 = "OJSR_COPS_10";
				break;
			
			case 3:
				Local_66.f_221.f_220 = "OJSR_COPS_11";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_5";
				break;
			
			case 2:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_6";
				break;
			}
	}
	switch (iVar0)
	{
		case 1:
			Local_66.f_221.f_198 = "OJSR_GREET_1";
			break;
		
		case 2:
			Local_66.f_221.f_198 = "OJSR_GREET_2";
			break;
		
		case 3:
			Local_66.f_221.f_198 = "OJSR_GREET_3";
			break;
		
		case 4:
			Local_66.f_221.f_198 = "OJSR_GREET_4";
			break;
		
		case 5:
			Local_66.f_221.f_198 = "OJSR_GREET_5";
			break;
		
		case 6:
			Local_66.f_221.f_198 = "OJSR_GREET_6";
			break;
		
		case 7:
			Local_66.f_221.f_198 = "OJSR_GREET_7";
			break;
		
		case 8:
			Local_66.f_221.f_198 = "OJSR_GREET_8";
			break;
		
		case 9:
			Local_66.f_221.f_198 = "OJSR_GREET_9";
			break;
		
		case 10:
			Local_66.f_221.f_198 = "OJSR_GREET_10";
			break;
	}
	switch (iVar1)
	{
		case 1:
			Local_66.f_221.f_199 = "OJSR_BATEQ_1";
			break;
		
		case 2:
			Local_66.f_221.f_199 = "OJSR_BATEQ_2";
			break;
		
		case 3:
			Local_66.f_221.f_199 = "OJSR_BATEQ_3";
			break;
		
		case 4:
			Local_66.f_221.f_199 = "OJSR_BATEQ_4";
			break;
	}
	switch (iVar2)
	{
		case 1:
			Local_66.f_221.f_200 = "OJSR_TOOLEQ_1";
			break;
		
		case 2:
			Local_66.f_221.f_200 = "OJSR_TOOLEQ_2";
			break;
		
		case 3:
			Local_66.f_221.f_200 = "OJSR_TOOLEQ_3";
			break;
		
		case 4:
			Local_66.f_221.f_200 = "OJSR_TOOLEQ_4";
			break;
	}
	switch (iVar3)
	{
		case 1:
			Local_66.f_221.f_201 = "OJSR_STICKEQ_1";
			break;
		
		case 2:
			Local_66.f_221.f_201 = "OJSR_STICKEQ_2";
			break;
	}
	switch (iVar4)
	{
		case 1:
			Local_66.f_221.f_202 = "OJSR_WORRY_1";
			break;
		
		case 2:
			Local_66.f_221.f_202 = "OJSR_WORRY_2";
			break;
		
		case 3:
			Local_66.f_221.f_202 = "OJSR_WORRY_3";
			break;
		
		case 4:
			Local_66.f_221.f_202 = "OJSR_WORRY_4";
			break;
		
		case 5:
			Local_66.f_221.f_202 = "OJSR_WORRY_5";
			break;
	}
	switch (iVar5)
	{
		case 1:
			Local_66.f_221.f_203 = "OJSR_SHOCK_1";
			break;
		
		case 2:
			Local_66.f_221.f_203 = "OJSR_SHOCK_2";
			break;
		
		case 3:
			Local_66.f_221.f_203 = "OJSR_SHOCK_3";
			break;
	}
	switch (iVar6)
	{
		case 1:
			Local_66.f_221.f_204 = "OJSR_STUBBRN_1";
			break;
		
		case 2:
			Local_66.f_221.f_204 = "OJSR_STUBBRN_2";
			break;
		
		case 3:
			Local_66.f_221.f_204 = "OJSR_STUBBRN_3";
			break;
		
		case 4:
			Local_66.f_221.f_204 = "OJSR_STUBBRN_4";
			break;
	}
	switch (iVar7)
	{
		case 1:
			Local_66.f_221.f_205 = "OJSR_COUNTER_1";
			break;
		
		case 2:
			Local_66.f_221.f_205 = "OJSR_COUNTER_2";
			break;
		
		case 3:
			Local_66.f_221.f_205 = "OJSR_COUNTER_3";
			break;
	}
	switch (iVar8)
	{
		case 1:
			Local_66.f_221.f_206 = "OJSR_BACKRM_1";
			break;
		
		case 2:
			Local_66.f_221.f_206 = "OJSR_BACKRM_2";
			break;
		
		case 3:
			Local_66.f_221.f_206 = "OJSR_BACKRM_3";
			break;
	}
	switch (iVar9)
	{
		case 1:
			Local_66.f_221.f_207 = "OJSR_BUMP_1";
			break;
		
		case 2:
			Local_66.f_221.f_207 = "OJSR_BUMP_2";
			break;
		
		case 3:
			Local_66.f_221.f_207 = "OJSR_BUMP_3";
			break;
		
		case 4:
			Local_66.f_221.f_207 = "OJSR_BUMP_4";
			break;
	}
	switch (iVar10)
	{
		case 1:
			Local_66.f_221.f_208 = "OJSR_BPAIM_1";
			break;
		
		case 2:
			Local_66.f_221.f_208 = "OJSR_BPAIM_2";
			break;
		
		case 3:
			Local_66.f_221.f_208 = "OJSR_BPAIM_3";
			break;
		
		case 4:
			Local_66.f_221.f_208 = "OJSR_BPAIM_4";
			break;
	}
	switch (iVar11)
	{
		case 1:
			Local_66.f_221.f_209 = "OJSR_BPAIMAG_1";
			break;
		
		case 2:
			Local_66.f_221.f_209 = "OJSR_BPAIMAG_2";
			break;
		
		case 3:
			Local_66.f_221.f_209 = "OJSR_BPAIMAG_3";
			break;
		
		case 4:
			Local_66.f_221.f_209 = "OJSR_BPAIMAG_4";
			break;
	}
	switch (iVar13)
	{
		case 1:
			Local_66.f_221.f_211 = "OJSR_SCARED_1";
			break;
		
		case 2:
			Local_66.f_221.f_211 = "OJSR_SCARED_2";
			break;
		
		case 3:
			Local_66.f_221.f_211 = "OJSR_SCARED_3";
			break;
		
		case 4:
			Local_66.f_221.f_211 = "OJSR_SCARED_4";
			break;
		
		case 5:
			Local_66.f_221.f_211 = "OJSR_SCARED_5";
			break;
		
		case 6:
			Local_66.f_221.f_211 = "OJSR_SCARED_6";
			break;
		
		case 7:
			Local_66.f_221.f_211 = "OJSR_SCARED_7";
			break;
		
		case 8:
			Local_66.f_221.f_211 = "OJSR_SCARED_8";
			break;
	}
	switch (iVar14)
	{
		case 1:
			Local_66.f_221.f_213 = "OJSR_SCARED_9";
			break;
		
		case 2:
			Local_66.f_221.f_213 = "OJSR_SCARED_10";
			break;
	}
	switch (iVar15)
	{
		case 1:
			Local_66.f_221.f_216 = "OJSR_GRANAIM_1";
			break;
		
		case 2:
			Local_66.f_221.f_216 = "OJSR_GRANAIM_2";
			break;
		
		case 3:
			Local_66.f_221.f_216 = "OJSR_GRANAIM_3";
			break;
		
		case 4:
			Local_66.f_221.f_216 = "OJSR_GRANAIM_4";
			break;
	}
	switch (iVar16)
	{
		case 1:
			Local_66.f_221.f_217 = "OJSR_STICAIM_1";
			break;
		
		case 2:
			Local_66.f_221.f_217 = "OJSR_STICAIM_2";
			break;
	}
	switch (iVar17)
	{
		case 1:
			Local_66.f_221.f_212 = "OJSR_BRAVE_1";
			break;
		
		case 2:
			Local_66.f_221.f_212 = "OJSR_BRAVE_2";
			break;
		
		case 3:
			Local_66.f_221.f_212 = "OJSR_BRAVE_3";
			break;
		
		case 4:
			Local_66.f_221.f_212 = "OJSR_BRAVE_4";
			break;
		
		case 5:
			Local_66.f_221.f_212 = "OJSR_BRAVE_5";
			break;
	}
	switch (iVar18)
	{
		case 1:
			Local_66.f_221.f_218 = "OJSR_MOREAIM_1";
			break;
		
		case 2:
			Local_66.f_221.f_218 = "OJSR_MOREAIM_2";
			break;
		
		case 3:
			Local_66.f_221.f_218 = "OJSR_MOREAIM_3";
			break;
		
		case 4:
			Local_66.f_221.f_218 = "OJSR_MOREAIM_4";
			break;
	}
	switch (iVar19)
	{
		case 1:
			Local_66.f_221.f_219 = "OJSR_SURNDER_1";
			break;
		
		case 2:
			Local_66.f_221.f_219 = "OJSR_SURNDER_2";
			break;
		
		case 3:
			Local_66.f_221.f_219 = "OJSR_SURNDER_3";
			break;
	}
	switch (iVar21)
	{
		case 1:
			Local_66.f_221.f_221 = "OJSR_POURCAN_1";
			break;
		
		case 2:
			Local_66.f_221.f_221 = "OJSR_POURCAN_2";
			break;
		
		case 3:
			Local_66.f_221.f_221 = "OJSR_POURCAN_3";
			break;
	}
	switch (iVar22)
	{
		case 1:
			Local_66.f_221.f_222 = "OJSR_FLEE_1";
			break;
		
		case 2:
			Local_66.f_221.f_222 = "OJSR_FLEE_2";
			break;
		
		case 3:
			Local_66.f_221.f_222 = "OJSR_FLEE_3";
			break;
		
		case 4:
			Local_66.f_221.f_222 = "OJSR_FLEE_4";
			break;
		
		case 5:
			Local_66.f_221.f_222 = "OJSR_FLEE_5";
			break;
	}
	switch (iVar23)
	{
		case 1:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_1";
			break;
		
		case 2:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_2";
			break;
		
		case 3:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_3";
			break;
		
		case 4:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_4";
			break;
		
		case 5:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_5";
			break;
	}
	switch (iVar24)
	{
		case 1:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_1";
			break;
		
		case 2:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_2";
			break;
		
		case 3:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_3";
			break;
		
		case 4:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_4";
			break;
		
		case 5:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_5";
			break;
	}
	switch (iVar25)
	{
		case 1:
			Local_66.f_221.f_225 = "OJSR_CSTMER_1";
			break;
		
		case 2:
			Local_66.f_221.f_225 = "OJSR_CSTMER_2";
			break;
		
		case 3:
			Local_66.f_221.f_225 = "OJSR_CSTMER_3";
			break;
		
		case 4:
			Local_66.f_221.f_225 = "OJSR_CSTMER_4";
			break;
		
		case 5:
			Local_66.f_221.f_225 = "OJSR_CSTMER_5";
			break;
	}
	switch (iVar26)
	{
		case 1:
			Local_66.f_221.f_226 = "OJSR_MOSC_1";
			break;
		
		case 2:
			Local_66.f_221.f_226 = "OJSR_MOSC_2";
			break;
		
		case 3:
			Local_66.f_221.f_226 = "OJSR_MOSC_3";
			break;
	}
	switch (iVar28)
	{
		case 1:
			Local_66.f_221.f_228 = "OJSR_BUY_1";
			break;
		
		case 2:
			Local_66.f_221.f_228 = "OJSR_BUY_2";
			break;
		
		case 3:
			Local_66.f_221.f_228 = "OJSR_BUY_3";
			break;
	}
	switch (iVar29)
	{
		case 1:
			Local_66.f_221.f_229 = "OJSR_STEAL_1";
			break;
		
		case 2:
			Local_66.f_221.f_229 = "OJSR_STEAL_2";
			break;
		
		case 3:
			Local_66.f_221.f_229 = "OJSR_STEAL_3";
			break;
	}
	Local_66.f_221.f_166 = "OJSRAUD";
	Local_66.f_221.f_167 = "OJSR_GREET";
	Local_66.f_221.f_168 = "OJSR_BATEQ";
	Local_66.f_221.f_169 = "OJSR_TOOLEQ";
	Local_66.f_221.f_170 = "OJSR_STICKEQ";
	Local_66.f_221.f_171 = "OJSR_WORRY";
	Local_66.f_221.f_172 = "OJSR_SHOCK";
	Local_66.f_221.f_173 = "OJSR_STUBBRN";
	Local_66.f_221.f_174 = "OJSR_COUNTER";
	Local_66.f_221.f_175 = "OJSR_BACKRM";
	Local_66.f_221.f_176 = "OJSR_BUMP";
	Local_66.f_221.f_177 = "OJSR_BPAIM";
	Local_66.f_221.f_178 = "OJSR_BPAIMAG";
	Local_66.f_221.f_179 = "OJSR_HOLDUP";
	Local_66.f_221.f_180 = "OJSR_SCARED";
	Local_66.f_221.f_181 = "OJSR_KNIFAIM";
	Local_66.f_221.f_182 = "OJSR_TOOLAIM";
	Local_66.f_221.f_183 = "OJSR_GRANAIM";
	Local_66.f_221.f_184 = "OJSR_STICAIM";
	Local_66.f_221.f_185 = "OJSR_BRAVE";
	Local_66.f_221.f_186 = "OJSR_MOREAIM";
	Local_66.f_221.f_187 = "OJSR_SURNDER";
	Local_66.f_221.f_188 = "OJSR_COPS";
	Local_66.f_221.f_189 = "OJSR_POURCAN";
	Local_66.f_221.f_190 = "OJSR_FLEE";
	Local_66.f_221.f_191 = "OJSR_RECSCAR";
	Local_66.f_221.f_192 = "OJSR_RECAGGR";
	Local_66.f_221.f_193 = "OJSR_CSTMER";
	Local_66.f_221.f_194 = "OJSR_MOSC";
	Local_66.f_221.f_195 = "OJSR_PLRHUR";
	Local_66.f_221.f_196 = "OJSR_BUY";
	Local_66.f_221.f_197 = "OJSR_STEAL";
	iLocal_91 = 0;
	iLocal_92 = 0;
	iLocal_93 = 0;
}

void func_250()//Position - 0x10097
{
	unk_0xA25B44929E552182(Local_66.f_486.f_6, 0,5f, 303280717, 1);
	unk_0xA25B44929E552182(Local_66.f_486.f_6, 0,5f, joaat("prop_till_02"), 1);
	unk_0xA25B44929E552182(Local_66.f_486.f_6, 0,5f, joaat("prop_till_03"), 1);
	Local_66.f_96.f_1 = unk_0x5E35CF35E65D69B9(Local_66.f_96, Local_66.f_486.f_6, true, true, false);
	unk_0x48ED7B2293A96722(Local_66.f_96.f_1, Local_66.f_96.f_5);
	unk_0xEDC33A771FAEB393(Local_66.f_96.f_1, true);
}

void func_251()//Position - 0x1011C
{
	Local_66.f_28 = unk_0xAEE6FC463D735D1F(joaat("pickup_portable_crate_unfixed"), Local_66.f_28.f_7, false, Local_66.f_28.f_13);
	unk_0x59AF3B40AE222194(Local_66.f_28, Local_66.f_28.f_10, 2, 1);
	unk_0xB3A8974D2C811672(Local_66.f_28, false, 0);
	unk_0x61EF72AFBDCBE53F(Local_66.f_28, 1, 0);
	Local_66.f_28.f_14 = 0;
}

void func_252()//Position - 0x1016D
{
	int iVar0;
	int iVar1;
	
	Local_66.f_2 = unk_0xAC992EFAD62C33BF(4, Local_66.f_2.f_5, Local_66.f_2.f_1, Local_66.f_2.f_4, 1, true);
	func_258(iLocal_80, &iVar1, &iVar0);
	unk_0x03924C68EFCBC511(Local_66.f_2, 0, iVar1, iVar0, 0);
	func_257(&iVar1, &iVar0);
	unk_0x03924C68EFCBC511(Local_66.f_2, 2, iVar1, iVar0, 0);
	func_256(&iVar1, &iVar0);
	unk_0x03924C68EFCBC511(Local_66.f_2, 3, iVar1, iVar0, 0);
	func_255(&iVar1, &iVar0);
	unk_0x03924C68EFCBC511(Local_66.f_2, 4, iVar1, iVar0, 0);
	func_254(&iVar1, &iVar0);
	unk_0x03924C68EFCBC511(Local_66.f_2, 8, iVar1, iVar0, 0);
	unk_0x771A86309E0CA47B(Local_66.f_2, true);
	if (Local_66.f_2.f_12)
	{
		func_253();
	}
}

void func_253()//Position - 0x1021C
{
	if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
	{
	}
}

void func_254(int iParam0, int iParam1)//Position - 0x10231
{
	*iParam0 = unk_0x63A6486593EC7EC3(0, 2);
	if (*iParam0 == 0)
	{
		*iParam1 = unk_0x63A6486593EC7EC3(0, 2);
	}
	else
	{
		*iParam1 = 0;
	}
}

void func_255(int iParam0, int iParam1)//Position - 0x10259
{
	*iParam0 = 0;
	*iParam1 = unk_0x63A6486593EC7EC3(0, 2);
}

void func_256(int iParam0, int iParam1)//Position - 0x1026E
{
	*iParam0 = unk_0x63A6486593EC7EC3(0, 2);
	*iParam1 = unk_0x63A6486593EC7EC3(0, 3);
}

void func_257(int iParam0, int iParam1)//Position - 0x10288
{
	*iParam0 = unk_0x63A6486593EC7EC3(0, 3);
	if (*iParam0 > 0)
	{
		*iParam1 = unk_0x63A6486593EC7EC3(0, 2);
	}
	else
	{
		*iParam1 = 0;
	}
}

void func_258(int iParam0, var uParam1, var uParam2)//Position - 0x102B0
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam1 = 0;
			*uParam2 = unk_0x63A6486593EC7EC3(0, 3);
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam1 = 2;
			*uParam2 = unk_0x63A6486593EC7EC3(0, 3);
			break;
	}
}

int func_259()//Position - 0x1035C
{
	if (!func_260(&Local_96))
	{
		return 0;
	}
	if (!bLocal_86)
	{
		if (!unk_0x3A801AA34DD821BE(Local_66.f_2.f_15))
		{
			return 0;
		}
	}
	if (!unk_0x1A595E6882473810(Local_66.f_185))
	{
		return 0;
	}
	unk_0xB8E96DD2D2EF0BC3(0);
	return 1;
}

int func_260(var uParam0)//Position - 0x103A2
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_261(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_261(var uParam0)//Position - 0x10404
{
	return func_262(*uParam0, "NULL", uParam0->f_1);
}

int func_262(int iParam0, char* sParam1, int iParam2)//Position - 0x10419
{
	if (unk_0xC80D31E4B587871C(iParam0, 30))
	{
		if (unk_0xC80D31E4B587871C(iParam0, 29))
		{
			switch (func_263(iParam0))
			{
				case 0:
					return unk_0x9A0B2ED5055D3F0B(iParam2);
					break;
				
				case 1:
					return unk_0x3A801AA34DD821BE(sParam1);
					break;
				
				case 2:
					return unk_0xD9C499EAA1D3F82A(sParam1);
					break;
				
				case 3:
					return unk_0xA51ADD51711B4A15(sParam1);
					break;
				
				case 4:
					return unk_0x0840F461D7BD8859(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xC316B5E3E7ACF515(sParam1);
					break;
				
				case 6:
					return unk_0x1CF95440F1970B4F(sParam1, unk_0xC80D31E4B587871C(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x2674C3EBFAFF7678(iParam2);
					break;
				
				case 8:
					return unk_0x9F0887BCBFCF3C2F(iParam2);
					break;
				
				case 9:
					return unk_0xFEDD99169EC73AA6();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_263(int iParam0)//Position - 0x1050D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xC80D31E4B587871C(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_264()//Position - 0x10539
{
	unk_0xB8E96DD2D2EF0BC3(1);
	if (!bLocal_86)
	{
		unk_0x6450931B826B49D9(Local_66.f_2.f_15);
		Local_96.f_32 = unk_0x4B64A8D052027742();
	}
	func_265(&Local_96, Local_66.f_2.f_5);
	func_265(&Local_96, Local_66.f_28.f_13);
	func_265(&Local_96, Local_66.f_96);
	Local_66.f_466 = 1;
}

void func_265(var uParam0, int iParam1)//Position - 0x1058B
{
	func_266(uParam0, 0, iParam1, 0);
}

void func_266(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1059D
{
	int iVar0;
	
	if (!func_267(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0x872F1C1F8587CCC7(uParam0[iVar0 /*2*/], iParam1);
			unk_0x872F1C1F8587CCC7(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_267(int iParam0)//Position - 0x10660
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
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
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_268()//Position - 0x106FF
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	func_273(iLocal_80, &(Local_66.f_46.f_8), &(Local_66.f_46.f_18), &(Local_66.f_46.f_22), &(Local_66.f_46.f_25), &(Local_66.f_46.f_26), &(Local_66.f_46.f_27), &(Local_66.f_46.f_28), &(Local_66.f_46.f_31), &(Local_66.f_46.f_34));
	func_271(iLocal_80);
	vVar0 = { -3244,573f, 1000,658f, 12,83f };
	fVar3 = 175,074f;
	vVar1 = { -3242,008f, 1001,202f, 11,83071f };
	vVar2 = { vVar1 - vVar0 };
	vVar2 = { func_298(vVar2, fVar3) };
	vVar1 = { -3245,088f, 1001,468f, 13,65071f };
	vVar2 = { vVar1 - vVar0 };
	vVar2 = { func_298(vVar2, fVar3) };
	vVar1 = { -3243,37f, 1000,37f, 12,83f };
	vVar2 = { vVar1 - vVar0 };
	vVar2 = { func_298(vVar2, fVar3) };
	Local_66.f_469 = -1;
	Local_66.f_102.f_22 = -1;
	Local_66.f_96 = joaat("p_till_01_s");
	Local_66.f_96.f_2 = { Local_66.f_486.f_6 };
	Local_66.f_96.f_5 = (Local_66.f_486.f_9.f_2 + 180f);
	Local_66.f_451.f_3 = 0;
	Local_66.f_458 = 0;
	Local_66.f_459 = 0;
	Local_66.f_460 = 0;
	Local_66.f_461 = 0;
	Local_66.f_462 = 0;
	Local_66.f_465 = 0;
	func_270(iLocal_80, &(Local_66.f_2.f_6), &(Local_66.f_2.f_9));
	func_269();
}

void func_269()//Position - 0x1086E
{
	Local_66.f_86.f_1 = joaat("a_m_y_soucent_04");
	Local_66.f_86.f_2 = { -1224,15f, -907,2f, 12,33f };
	Local_66.f_86.f_5 = 2f;
}

void func_270(int iParam0, var uParam1, var uParam2)//Position - 0x1089F
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -709,7998f, -907,1352f, 18,2156f };
			*uParam2 = 291,6504f;
			break;
		
		case 1:
			*uParam1 = { -41,8128f, -1749,685f, 28,421f };
			*uParam2 = 214,6526f;
			break;
		
		case 2:
			*uParam1 = { 1159,682f, -314,254f, 68,2051f };
			*uParam2 = 232,6337f;
			break;
		
		case 3:
			*uParam1 = { 1707,303f, 4918,31f, 41,0636f };
			*uParam2 = 24,9178f;
			break;
		
		case 4:
			*uParam1 = { -1828,907f, 799,6096f, 137,1776f };
			*uParam2 = 247,1234f;
			break;
		
		case 5:
			*uParam1 = { 1168,971f, 2719,118f, 36,0632f };
			*uParam2 = 136,5945f;
			break;
		
		case 6:
			*uParam1 = { -2962,983f, 391,9788f, 14,0433f };
			*uParam2 = 176,1174f;
			break;
		
		case 7:
			*uParam1 = { -1218,283f, -915,7103f, 10,3264f };
			*uParam2 = 43,8031f;
			break;
		
		case 8:
			*uParam1 = { 1130,155f, -979,2816f, 45,4158f };
			*uParam2 = 269,2587f;
			break;
		
		case 9:
			*uParam1 = { -1479,163f, -375,0302f, 38,1633f };
			*uParam2 = 36,5415f;
			break;
		
		case 10:
			*uParam1 = { -3249,114f, 1006,558f, 11,8307f };
			*uParam2 = 191,594f;
			break;
		
		case 11:
			*uParam1 = { -3047,512f, 588,9807f, 6,9089f };
			*uParam2 = 178,8753f;
			break;
		
		case 12:
			*uParam1 = { 543,0796f, 2663,967f, 41,1565f };
			*uParam2 = 228,4295f;
			break;
		
		case 13:
			*uParam1 = { 2549,85f, 387,1622f, 107,623f };
			*uParam2 = 197,2994f;
			break;
		
		case 14:
			*uParam1 = { 2671,351f, 3283,136f, 54,2411f };
			*uParam2 = 296,5427f;
			break;
		
		case 15:
			*uParam1 = { 1733,967f, 6421,495f, 34,0372f };
			*uParam2 = 130,9518f;
			break;
		
		case 16:
			*uParam1 = { 1958,92f, 3746,267f, 31,3438f };
			*uParam2 = 73,6245f;
			break;
		
		case 17:
			*uParam1 = { 30,5721f, -1339,782f, 28,4939f };
			*uParam2 = 110,7699f;
			break;
		
		case 18:
			*uParam1 = { 376,2976f, 331,8158f, 102,5664f };
			*uParam2 = 52,0064f;
			break;
		
		case -2:
			*uParam1 = { 1958,92f, 3746,267f, 31,3438f };
			*uParam2 = 73,6245f;
			break;
	}
}

void func_271(int iParam0)//Position - 0x10B7E
{
	vector3 vVar0;
	
	vVar0 = { func_272(Local_66.f_186, Local_66.f_189) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Local_66.f_185 = unk_0xC0765AFBFA616644(vVar0, "v_gasstation");
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			Local_66.f_185 = unk_0xC0765AFBFA616644(vVar0, "v_gen_liquor");
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			Local_66.f_185 = unk_0xC0765AFBFA616644(vVar0, "v_shop_247");
			break;
	}
}

Vector3 func_272(vector3 vParam0, vector3 vParam1)//Position - 0x10C4C
{
	vector3 vVar0;
	
	vVar0.x = ((vParam0.x + vParam1.x) / 2f);
	vVar0.y = ((vParam0.y + vParam1.y) / 2f);
	vVar0.z = ((vParam0.z + vParam1.z) / 2f);
	return vVar0;
}

void func_273(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)//Position - 0x10C7F
{
	if (!func_274(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			*(uParam1[0 /*3*/]) = { -677,0792f, -952,9478f, 20,4712f };
			(*uParam2)[0] = 90,5427f;
			*(uParam1[1 /*3*/]) = { -668,8872f, -961,7076f, 20,6313f };
			(*uParam2)[1] = 90,5427f;
			*(uParam1[2 /*3*/]) = { -749,7003f, -901,2264f, 19,6691f };
			(*uParam2)[2] = 170,7498f;
			*uParam3 = { -715,81f, -930,27f, 18,04f };
			*uParam4 = 8,81f;
			*uParam7 = { -714,079f, -918,088f, 18,196f };
			*uParam8 = { -709,079f, -918,166f, 22,196f };
			*uParam9 = 3,7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 1:
			*(uParam1[0 /*3*/]) = { -133,86f, -1764,29f, 29,39f };
			(*uParam2)[0] = 297,87f;
			*(uParam1[1 /*3*/]) = { -63,16f, -1793,14f, 27,23f };
			(*uParam2)[1] = 50,66f;
			*(uParam1[2 /*3*/]) = { -56,5f, -1810,22f, 26,6f };
			(*uParam2)[2] = 50,67f;
			*uParam3 = { -68,92f, -1764,16f, 28,23f };
			*uParam4 = 9f;
			*uParam7 = { -55,922f, -1756,021f, 28,196f };
			*uParam8 = { -52,122f, -1759,271f, 32,196f };
			*uParam9 = 3,7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 2:
			*(uParam1[0 /*3*/]) = { 1103,004f, -378,3616f, 66,6258f };
			(*uParam2)[0] = 310,6741f;
			*(uParam1[1 /*3*/]) = { 1186,703f, -289,3757f, 68,5913f };
			(*uParam2)[1] = 214,1061f;
			*(uParam1[2 /*3*/]) = { 1251,639f, -371,6591f, 68,7078f };
			(*uParam2)[2] = 164,5987f;
			*uParam3 = { 1161,84f, -339,25f, 67,29f };
			*uParam4 = 9,17f;
			*uParam7 = { 1157,417f, -328,616f, 68,048f };
			*uParam8 = { 1162,351f, -327,81f, 72,048f };
			*uParam9 = 3,7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 3:
			*(uParam1[0 /*3*/]) = { 1667,82f, 4916,04f, 41,71f };
			(*uParam2)[0] = 346,32f;
			*(uParam1[1 /*3*/]) = { 1710,43f, 4963,03f, 43,92f };
			(*uParam2)[1] = 112,11f;
			*(uParam1[2 /*3*/]) = { 1727,59f, 4986,13f, 46,4f };
			(*uParam2)[2] = 132,27f;
			*uParam3 = { 1692,99f, 4939,56f, 41,16f };
			*uParam4 = 10f;
			*uParam7 = { 1699,338f, 4932,104f, 41,083f };
			*uParam8 = { 1696,313f, 4928,124f, 45,083f };
			*uParam9 = 3,7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 4:
			*(uParam1[0 /*3*/]) = { -1862,436f, 732,8416f, 130,8709f };
			(*uParam2)[0] = 301,6958f;
			*(uParam1[1 /*3*/]) = { -1870,955f, 722,3616f, 129,6428f };
			(*uParam2)[1] = 300,6013f;
			*(uParam1[2 /*3*/]) = { -1711,103f, 873,6471f, 145,9411f };
			(*uParam2)[2] = 146,5694f;
			*uParam3 = { -1814,22f, 782,55f, 136,57f };
			*uParam4 = 7,24f;
			*uParam7 = { -1823,281f, 785,687f, 137,027f };
			*uParam8 = { -1819,465f, 788,918f, 141,027f };
			*uParam9 = 3,7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 5:
			*(uParam1[0 /*3*/]) = { 1127,43f, 2680,61f, 38,02f };
			(*uParam2)[0] = 268,18f;
			*(uParam1[1 /*3*/]) = { 1205,02f, 2687,1f, 37,34f };
			(*uParam2)[1] = 91,37f;
			*(uParam1[2 /*3*/]) = { 1218,17f, 2677,4f, 37,27f };
			(*uParam2)[2] = 88,15f;
			*uParam3 = { 1164,39f, 2683,2f, 37,06f };
			*uParam4 = 8,49f;
			*uParam7 = { 1164,771f, 2702,528f, 38,162f };
			*uParam8 = { 1167,771f, 2702,548f, 41,162f };
			*uParam9 = 3f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 6:
			*(uParam1[0 /*3*/]) = { -3021,405f, 236,3884f, 15,6982f };
			(*uParam2)[0] = 354,8025f;
			*(uParam1[1 /*3*/]) = { -3021,883f, 207,4436f, 15,7511f };
			(*uParam2)[1] = 2,3146f;
			*(uParam1[2 /*3*/]) = { -3015,012f, 640,891f, 21,0514f };
			(*uParam2)[2] = 193,5162f;
			*uParam3 = { -2990,03f, 391,19f, 13,83f };
			*uParam4 = 9,41f;
			*uParam7 = { -2974,55f, 393,338f, 14,037f };
			*uParam8 = { -2975,084f, 388,366f, 18,037f };
			*uParam9 = 3,7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 7:
			*(uParam1[0 /*3*/]) = { -1270,806f, -944,262f, 10,8025f };
			(*uParam2)[0] = 17,2662f;
			*(uParam1[1 /*3*/]) = { -1327,767f, -855,9691f, 16,4331f };
			(*uParam2)[1] = 216,1689f;
			*(uParam1[2 /*3*/]) = { -1155,798f, -862,4445f, 13,4857f };
			(*uParam2)[2] = 36,347f;
			*uParam3 = { -1233,36f, -891,39f, 11,35f };
			*uParam4 = 5,7f;
			*uParam7 = { -1225,2f, -899,881f, 11,275f };
			*uParam8 = { -1229,293f, -902,753f, 15,275f };
			*uParam9 = 3,7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 8:
			*(uParam1[0 /*3*/]) = { 1132,016f, -956,2646f, 47,2548f };
			(*uParam2)[0] = 278,2335f;
			*(uParam1[1 /*3*/]) = { 1121,218f, -959,5676f, 46,788f };
			(*uParam2)[1] = 289,4738f;
			*(uParam1[2 /*3*/]) = { 1236,959f, -1153,587f, 37,1736f };
			(*uParam2)[2] = 27,5191f;
			*uParam3 = { 1154,17f, -979,23f, 45,36f };
			*uParam4 = 6,02f;
			*uParam7 = { 1142,794f, -983,315f, 45,205f };
			*uParam8 = { 1142,519f, -978,322f, 49,205f };
			*uParam9 = 3,7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 9:
			*(uParam1[0 /*3*/]) = { -1525,77f, -389,17f, 41,39f };
			(*uParam2)[0] = 229,73f;
			*(uParam1[1 /*3*/]) = { -1537,28f, -378,84f, 43,02f };
			(*uParam2)[1] = 226,22f;
			*(uParam1[2 /*3*/]) = { -1475,06f, -418,35f, 35,71f };
			(*uParam2)[2] = 45,71f;
			*uParam3 = { -1502,71f, -400,39f, 38,41f };
			*uParam4 = 7,86f;
			*uParam7 = { -1493,544f, -382,617f, 38,994f };
			*uParam8 = { -1489,947f, -386,09f, 42,994f };
			*uParam9 = 3,7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 10:
			*(uParam1[0 /*3*/]) = { -3218,999f, 1105,409f, 9,9489f };
			(*uParam2)[0] = 175,7402f;
			*(uParam1[1 /*3*/]) = { -3210,846f, 1114,875f, 9,8453f };
			(*uParam2)[1] = 152,4543f;
			*(uParam1[2 /*3*/]) = { -3201,518f, 920,3387f, 13,8887f };
			(*uParam2)[2] = 54,6774f;
			*uParam3 = { -3230,27f, 1003,54f, 11,31f };
			*uParam4 = 5,42f;
			*uParam7 = { -3238,442f, 1001,727f, 11,161f };
			*uParam8 = { -3238,268f, 1006,724f, 15,161f };
			*uParam9 = 3,7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 11:
			*(uParam1[0 /*3*/]) = { -3061,218f, 658,6545f, 9,6541f };
			(*uParam2)[0] = 216,9221f;
			*(uParam1[1 /*3*/]) = { -3017,391f, 509,7967f, 6,7435f };
			(*uParam2)[1] = 348,3592f;
			*(uParam1[2 /*3*/]) = { -3029,232f, 521,1291f, 6,975f };
			(*uParam2)[2] = 337,5117f;
			*uParam3 = { -3027,51f, 594,25f, 6,87f };
			*uParam4 = 5,89f;
			*uParam7 = { -3036,615f, 587,625f, 6,818f };
			*uParam8 = { -3038,087f, 592,404f, 10,818f };
			*uParam9 = 3,7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 12:
			*(uParam1[0 /*3*/]) = { 523,8614f, 2658,057f, 42,068f };
			(*uParam2)[0] = 2,8999f;
			*(uParam1[1 /*3*/]) = { 471,6328f, 2657,835f, 42,9164f };
			(*uParam2)[1] = 329,1264f;
			*(uParam1[2 /*3*/]) = { 656,9346f, 2731,927f, 41,5306f };
			(*uParam2)[2] = 183,28f;
			*uParam3 = { 545,05f, 2684,96f, 41,3f };
			*uParam4 = 6,77f;
			*uParam7 = { 546,505f, 2674,393f, 41,152f };
			*uParam8 = { 541,547f, 2673,75f, 45,152f };
			*uParam9 = 3,7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 13:
			*(uParam1[0 /*3*/]) = { 2593,841f, 273,2788f, 104,926f };
			(*uParam2)[0] = 345,1121f;
			*(uParam1[1 /*3*/]) = { 2595,69f, 262,9971f, 104,2577f };
			(*uParam2)[1] = 350,3949f;
			*(uParam1[2 /*3*/]) = { 2591,545f, 256,5517f, 103,7544f };
			(*uParam2)[2] = 343,9362f;
			*uParam3 = { 2575,75f, 385,11f, 107,46f };
			*uParam4 = 11,61f;
			*uParam7 = { 2560,435f, 382,891f, 107,626f };
			*uParam8 = { 2560,67f, 387,886f, 111,626f };
			*uParam9 = 3,7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 14:
			*(uParam1[0 /*3*/]) = { 2672,64f, 3259,44f, 54,87f };
			(*uParam2)[0] = 324,3f;
			*(uParam1[1 /*3*/]) = { 2703,37f, 3294,47f, 55,31f };
			(*uParam2)[1] = 152,87f;
			*(uParam1[2 /*3*/]) = { 2699,45f, 3299,76f, 55,35f };
			(*uParam2)[2] = 152,55f;
			*uParam3 = { 2691,41f, 3275,22f, 54,24f };
			*uParam4 = 7,56f;
			*uParam7 = { 2681,77f, 3279,805f, 54,245f };
			*uParam8 = { 2684,297f, 3284,12f, 58,245f };
			*uParam9 = 3,7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 15:
			*(uParam1[0 /*3*/]) = { 1740,035f, 6378,202f, 35,0341f };
			(*uParam2)[0] = 81,6255f;
			*(uParam1[1 /*3*/]) = { 1755,786f, 6375,046f, 36,2501f };
			(*uParam2)[1] = 76,057f;
			*(uParam1[2 /*3*/]) = { 1752,839f, 6367,344f, 36,135f };
			(*uParam2)[2] = 75,9713f;
			*uParam3 = { 1725,56f, 6400,85f, 33,42f };
			*uParam4 = 7,09f;
			*uParam7 = { 1728,266f, 6411,254f, 34,006f };
			*uParam8 = { 1732,739f, 6409,022f, 38,006f };
			*uParam9 = 3,7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 16:
			*(uParam1[0 /*3*/]) = { 1942,142f, 3738,897f, 31,9693f };
			(*uParam2)[0] = 210,3384f;
			*(uParam1[1 /*3*/]) = { 2024,891f, 3780,588f, 31,9156f };
			(*uParam2)[1] = 210,1552f;
			*(uParam1[2 /*3*/]) = { 1879,631f, 3673,292f, 33,1966f };
			(*uParam2)[2] = 302,2257f;
			*uParam3 = { 1968,55f, 3731,03f, 31,36f };
			*uParam4 = 6,12f;
			*uParam7 = { 1963,491f, 3738,337f, 31,324f };
			*uParam8 = { 1967,792f, 3740,886f, 35,324f };
			*uParam9 = 3,7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 17:
			*(uParam1[0 /*3*/]) = { 73,57f, -1359,63f, 28,96f };
			(*uParam2)[0] = 93,85f;
			*(uParam1[1 /*3*/]) = { 77,26f, -1364,69f, 28,97f };
			(*uParam2)[1] = 88,25f;
			*(uParam1[2 /*3*/]) = { -17,95f, -1366,03f, 28,97f };
			(*uParam2)[2] = 267,29f;
			*uParam3 = { 30,98f, -1362,09f, 28,33f };
			*uParam4 = 6f;
			*uParam7 = { 27,296f, -1350,255f, 28,33232f };
			*uParam8 = { 30,795f, -1350,308f, 30,82019f };
			*uParam9 = 3f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 18:
			*(uParam1[0 /*3*/]) = { 424,9115f, 314,1133f, 102,622f };
			(*uParam2)[0] = 155,4277f;
			*(uParam1[1 /*3*/]) = { 439,6049f, 292,7892f, 102,5935f };
			(*uParam2)[1] = 74,6758f;
			*(uParam1[2 /*3*/]) = { 275,961f, 331,2577f, 105,1467f };
			(*uParam2)[2] = 250,7508f;
			*uParam3 = { 372,79f, 313f, 102,47f };
			*uParam4 = 3,94f;
			*uParam7 = { 373,907f, 322,739f, 102,439f };
			*uParam8 = { 378,778f, 321,61f, 106,439f };
			*uParam9 = 3,7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
	}
}

int func_274(int iParam0)//Position - 0x11AF5
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= -1)
	{
		return 0;
	}
	return 1;
}

int func_275()//Position - 0x11B16
{
	vector3 vVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(Local_66, 0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(Local_66, 1) };
		if (unk_0xBE3C4023003180FC(vVar0, Local_66.f_181, true) < 50f)
		{
			return 1;
		}
	}
	return 0;
}

void func_276()//Position - 0x11B51
{
	if (Local_66.f_46.f_26 != 0)
	{
		unk_0x14776E43F90DD454(Local_66.f_46.f_26);
	}
	if (Local_66.f_46.f_27 != 0)
	{
		unk_0x14776E43F90DD454(Local_66.f_46.f_27);
	}
	if (!unk_0xAB019B170BF1309C(Local_66.f_2.f_15))
	{
		unk_0xFCCDDE0E48CF9588(Local_66.f_2.f_15);
	}
}

int func_277()//Position - 0x11B99
{
	if (Global_104555.f_9055)
	{
		if (!func_281(56))
		{
			return 1;
		}
	}
	if (func_280())
	{
		return 1;
	}
	if (!unk_0x42F1FE4C7EC5F51E())
	{
		return 1;
	}
	if (func_297() && !func_296())
	{
		return 1;
	}
	if (func_279() && func_278())
	{
		return 1;
	}
	if (Global_25235)
	{
		unk_0x3E80C2F7BC665259(1);
		unk_0x96A3D9A8A4C7AFD4();
	}
	return 0;
}

bool func_278()//Position - 0x11C09
{
	return Global_104273 > 0;
}

int func_279()//Position - 0x11C17
{
	if (Global_89900 != -1)
	{
		return 1;
	}
	return 0;
}

int func_280()//Position - 0x11C2C
{
	vector3 vVar0;
	float fVar1;
	
	if (!unk_0x191BE1BC8F26F3C1(Local_66, 0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(Local_66, 1) };
		fVar1 = unk_0xBE3C4023003180FC(vVar0, Local_66.f_181, true);
		if (fVar1 > Local_66.f_184)
		{
			return 1;
		}
	}
	return 0;
}

int func_281(int iParam0)//Position - 0x11C6A
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_99.f_58[iParam0];
}

void func_282(var uParam0)//Position - 0x11C97
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0x4B64A8D052027742() >= (uParam0->f_32 + uParam0->f_33) || unk_0xC80D31E4B587871C(Global_92833.f_20, 2)) || unk_0xC80D31E4B587871C(Global_92833.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], 29))
					{
						func_283(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0x4B64A8D052027742();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_283(int iParam0)//Position - 0x11D21
{
	func_284(iParam0, "NULL", iParam0->f_1);
}

void func_284(int iParam0, char* sParam1, int iParam2)//Position - 0x11D35
{
	if (unk_0xC80D31E4B587871C(*iParam0, 30))
	{
		switch (func_263(*iParam0))
		{
			case 0:
				unk_0x6FF834D85E2DD4C6(iParam2);
				break;
			
			case 1:
				unk_0x6450931B826B49D9(sParam1);
				break;
			
			case 2:
				unk_0x7C0C9D9129095E19(sParam1);
				break;
			
			case 3:
				unk_0x128A5DCCD09CCA17(sParam1, unk_0xC80D31E4B587871C(*iParam0, 28));
				break;
			
			case 4:
				unk_0x0D9525F20FB71C52(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x307EAE14C924E2E7(sParam1);
				break;
			
			case 6:
				unk_0x1CF95440F1970B4F(sParam1, unk_0xC80D31E4B587871C(*iParam0, 27), -1);
				break;
			
			case 7:
				unk_0x8A719502FC5D36F1(iParam2);
				break;
			
			case 8:
				unk_0xBCBC53983EC3B1BA(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x36905B9EE07F38CC();
				break;
			
			default:
				break;
		}
		unk_0x872F1C1F8587CCC7(iParam0, 29);
	}
}

int func_285()//Position - 0x11E0F
{
	int iVar0;
	
	if (Local_66.f_1 != Global_104555.f_20005.f_62[iLocal_80])
	{
		return 1;
	}
	iVar0 = (unk_0xD3ECC7A5C90D3AA4() - Global_104555.f_20005.f_42[iLocal_80]);
	iLocal_85 = 2;
	if (iVar0 < 0)
	{
		iVar0 = unk_0xD3ECC7A5C90D3AA4() + 31;
		iVar0 = (iVar0 - Global_104555.f_20005.f_42[iLocal_80]);
	}
	if (iVar0 < iLocal_85)
	{
		return 0;
	}
	return 1;
}

void func_286(var uParam0, int iParam1)//Position - 0x11E7A
{
	func_287(uParam0, iParam1);
}

void func_287(var uParam0, var uParam1)//Position - 0x11E8A
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_288(int iParam0, float fParam1, var uParam2, var uParam3)//Position - 0x11E9B
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam2 = { unk_0x9EA50C5EC175E58E(func_289(iParam0), fParam1, 5,95155f, -8,251f, -0,2377f) };
			*uParam3 = { unk_0x9EA50C5EC175E58E(func_289(iParam0), fParam1, -12,7268f, 7,21174f, 2,93854f) };
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam2 = { unk_0x9EA50C5EC175E58E(func_289(iParam0), fParam1, -6,52428f, -8,8002f, -0,657398f) };
			*uParam3 = { unk_0x9EA50C5EC175E58E(func_289(iParam0), fParam1, 3,54253f, 16,8382f, 3,20474f) };
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam2 = { unk_0x9EA50C5EC175E58E(func_289(iParam0), fParam1, -4,55363f, -7,52366f, -0,75f) };
			*uParam3 = { unk_0x9EA50C5EC175E58E(func_289(iParam0), fParam1, 11,8868f, 7,00122f, 3,9688f) };
			break;
	}
	return 1;
}

Vector3 func_289(int iParam0)//Position - 0x11FE0
{
	if (!func_274(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711,8212f, -915,9057f, 18,2377f;
		
		case 1:
			return -52,7185f, -1756,175f, 28,4432f;
		
		case 2:
			return 1159,441f, -325,6666f, 68,2272f;
		
		case 3:
			return 1699,429f, 4928,642f, 41,0858f;
		
		case 4:
			return -1822,926f, 788,9531f, 137,212f;
		
		case 5:
			return 1166,427f, 2703,528f, 37,1574f;
		
		case 6:
			return -2973,414f, 390,6885f, 14,0433f;
		
		case 7:
			return -1225,86f, -903,5782f, 11,3263f;
		
		case 8:
			return 1140,659f, -981,0806f, 45,4158f;
		
		case 9:
			return -1490,275f, -382,8514f, 39,1634f;
		
		case 10:
			return -3240,719f, 1004,508f, 11,8468f;
		
		case 11:
			return -3039,249f, 589,3831f, 6,9251f;
		
		case 12:
			return 544,4275f, 2672,061f, 41,1726f;
		
		case 13:
			return 2558,754f, 385,599f, 107,6391f;
		
		case 14:
			return 2681,511f, 3282,763f, 54,2573f;
		
		case 15:
			return 1731,153f, 6411,633f, 34,0373f;
		
		case 16:
			return 1964,931f, 3741,207f, 31,3599f;
		
		case 17:
			return 29,0707f, -1348,773f, 28,5101f;
		
		case 18:
			return 376,8503f, 323,9777f, 102,5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_290()//Position - 0x121CA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (unk_0x674C9438180770FE() - Global_104555.f_20005.f_21[iLocal_80]);
	iVar1 = (unk_0xD3ECC7A5C90D3AA4() - Global_104555.f_20005.f_42[iLocal_80]);
	iLocal_84 = 2;
	if (iVar0 < 0)
	{
		iVar0 = unk_0x674C9438180770FE() + 24;
		iVar0 = (iVar0 - Global_104555.f_20005.f_21[iLocal_80]);
		iVar2 = 1;
	}
	if ((iVar0 < iLocal_84 && iVar1 == 0) || (iVar0 < iLocal_84 && iVar2))
	{
		return 1;
	}
	return 0;
}

void func_291(bool bParam0)//Position - 0x12251
{
	int iVar0;
	var uVar1[2];
	var uVar2[2];
	vector3 vVar3[2];
	
	func_292(iLocal_80, &uVar1, &uVar2, &vVar3);
	if (!func_1(Local_66.f_470, 64))
	{
		if (!unk_0x546F10CBA6C484DA(uVar1[iVar0]))
		{
			unk_0x050E4C90F7375618(uVar1[0], uVar2[0], vVar3[0 /*3*/], 0, 0, 0);
			if (uVar1[1] != -1)
			{
				unk_0x050E4C90F7375618(uVar1[1], uVar2[1], vVar3[1 /*3*/], 0, 0, 0);
			}
		}
		func_286(&(Local_66.f_470), 64);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x546F10CBA6C484DA(uVar1[iVar0]))
		{
			if (bParam0)
			{
				if (unk_0x656A318921183B10(uVar1[iVar0]) != 1)
				{
					unk_0xB94AAB49E0BB01DB(uVar1[iVar0], 1, 0, 0);
				}
			}
			else if (unk_0x656A318921183B10(uVar1[iVar0]) != 0)
			{
				unk_0xB94AAB49E0BB01DB(uVar1[iVar0], 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_292(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1233C
{
	switch (iParam0)
	{
		case 0:
			(*uParam1)[0] = unk_0x8B948C59217A295D("eCRIM_HUP_GAS_2A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -713,07f, -916,54f, 19,37f };
			(*uParam1)[1] = unk_0x8B948C59217A295D("eCRIM_HUP_GAS_2B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -710,47f, -916,54f, 19,37f };
			break;
		
		case 1:
			(*uParam1)[0] = unk_0x8B948C59217A295D("eCRIM_HUP_GAS_3A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -53,96f, -1755,72f, 29,57f };
			(*uParam1)[1] = unk_0x8B948C59217A295D("eCRIM_HUP_GAS_3B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -51,97f, -1757,39f, 29,57f };
			break;
		
		case 2:
			(*uParam1)[0] = unk_0x8B948C59217A295D("eCRIM_HUP_GAS_4A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1158,36f, -326,82f, 69,36f };
			(*uParam1)[1] = unk_0x8B948C59217A295D("eCRIM_HUP_GAS_4B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1160,93f, -326,36f, 69,36f };
			break;
		
		case 3:
			(*uParam1)[0] = unk_0x8B948C59217A295D("eCRIM_HUP_GAS_1A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1699,66f, 4930,28f, 42,21f };
			(*uParam1)[1] = unk_0x8B948C59217A295D("eCRIM_HUP_GAS_1B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1698,17f, 4928,15f, 42,21f };
			break;
		
		case 4:
			(*uParam1)[0] = unk_0x8B948C59217A295D("eCRIM_HUP_GAS_5A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -1823,28f, 787,37f, 138,36f };
			(*uParam1)[1] = unk_0x8B948C59217A295D("eCRIM_HUP_GAS_5B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -1821,37f, 789,13f, 138,31f };
			break;
		
		case 5:
			(*uParam1)[0] = unk_0x8B948C59217A295D("eCRIM_HUP_LIQUOR_1A");
			(*uParam2)[0] = -1212951353;
			*(uParam3[0 /*3*/]) = { 1167,13f, 2703,75f, 38,3f };
			(*uParam1)[1] = -1;
			break;
		
		case 6:
			(*uParam1)[0] = unk_0x8B948C59217A295D("eCRIM_HUP_LIQUOR_2A");
			(*uParam2)[0] = -1212951353;
			*(uParam3[0 /*3*/]) = { -2973,53f, 390,14f, 15,19f };
			(*uParam1)[1] = -1;
			break;
		
		case 7:
			(*uParam1)[0] = unk_0x8B948C59217A295D("eCRIM_HUP_LIQUOR_3A");
			(*uParam2)[0] = -1212951353;
			*(uParam3[0 /*3*/]) = { -1226,89f, -903,12f, 12,47f };
			(*uParam1)[1] = -1;
			break;
		
		case 8:
			(*uParam1)[0] = unk_0x8B948C59217A295D("eCRIM_HUP_LIQUOR_4A");
			(*uParam2)[0] = -1212951353;
			*(uParam3[0 /*3*/]) = { 1141,04f, -980,32f, 46,56f };
			(*uParam1)[1] = -1;
			break;
		
		case 9:
			(*uParam1)[0] = unk_0x8B948C59217A295D("eCRIM_HUP_LIQUOR_5A");
			(*uParam2)[0] = -1212951353;
			*(uParam3[0 /*3*/]) = { -1490,41f, -383,85f, 40,31f };
			(*uParam1)[1] = -1;
			break;
		
		case 10:
			(*uParam1)[0] = unk_0x8B948C59217A295D("eCRIM_HUP_SHOP247_3A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3240,13f, 1003,16f, 12,98f };
			(*uParam1)[1] = unk_0x8B948C59217A295D("eCRIM_HUP_SHOP247_3B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3239,9f, 1005,75f, 12,98f };
			break;
		
		case 11:
			(*uParam1)[0] = unk_0x8B948C59217A295D("eCRIM_HUP_SHOP247_2A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3038,22f, 588,29f, 8,06f };
			(*uParam1)[1] = unk_0x8B948C59217A295D("eCRIM_HUP_SHOP247_2B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3039,01f, 590,76f, 8,06f };
			break;
		
		case 12:
			(*uParam1)[0] = unk_0x8B948C59217A295D("eCRIM_HUP_SHOP247_4A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 545,5f, 2672,75f, 42,31f };
			(*uParam1)[1] = unk_0x8B948C59217A295D("eCRIM_HUP_SHOP247_4B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 542,93f, 2672,41f, 42,31f };
			break;
		
		case 13:
			(*uParam1)[0] = unk_0x8B948C59217A295D("eCRIM_HUP_SHOP247_5A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2559,2f, 384,09f, 108,77f };
			(*uParam1)[1] = unk_0x8B948C59217A295D("eCRIM_HUP_SHOP247_5B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2559,3f, 386,69f, 108,77f };
			break;
		
		case 14:
			(*uParam1)[0] = unk_0x8B948C59217A295D("eCRIM_HUP_SHOP247_6A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2681,29f, 3281,43f, 55,39f };
			(*uParam1)[1] = unk_0x8B948C59217A295D("eCRIM_HUP_SHOP247_6B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2682,56f, 3283,7f, 55,39f };
			break;
		
		case 15:
			(*uParam1)[0] = unk_0x8B948C59217A295D("eCRIM_HUP_SHOP247_7A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1730,03f, 6412,07f, 35,19f };
			(*uParam1)[1] = unk_0x8B948C59217A295D("eCRIM_HUP_SHOP247_7B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1732,36f, 6410,92f, 35,19f };
			break;
		
		case 16:
			(*uParam1)[0] = unk_0x8B948C59217A295D("eCRIM_HUP_SHOP247_8A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1963,92f, 3740,08f, 32,49f };
			(*uParam1)[1] = unk_0x8B948C59217A295D("eCRIM_HUP_SHOP247_8B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1966,17f, 3741,38f, 32,49f };
			break;
		
		case 17:
			(*uParam1)[0] = unk_0x8B948C59217A295D("eCRIM_HUP_SHOP247_9A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 27,82f, -1349,17f, 29,65f };
			(*uParam1)[1] = unk_0x8B948C59217A295D("eCRIM_HUP_SHOP247_9B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 30,42f, -1349,17f, 29,65f };
			break;
		
		case 18:
			(*uParam1)[0] = unk_0x8B948C59217A295D("eCRIM_HUP_SHOP247_10A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 375,35f, 323,8f, 103,72f };
			(*uParam1)[1] = unk_0x8B948C59217A295D("eCRIM_HUP_SHOP247_10B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 377,88f, 323,17f, 103,72f };
			break;
	}
}

void func_293(var uParam0, int iParam1)//Position - 0x129E1
{
	func_294(uParam0, iParam1);
}

void func_294(var uParam0, var uParam1)//Position - 0x129F1
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_295()//Position - 0x12A06
{
	if (!unk_0x191BE1BC8F26F3C1(Local_66, 0))
	{
		if (unk_0x0F3033474C49912D(Local_66, Local_66.f_186, Local_66.f_189, Local_66.f_192, 0, true, 0))
		{
			return 1;
		}
		else if (unk_0x0F3033474C49912D(Local_66, Local_66.f_200, Local_66.f_203, Local_66.f_206, 0, true, 0))
		{
			return 1;
		}
		else if (unk_0x0F3033474C49912D(Local_66, Local_66.f_207, Local_66.f_210, Local_66.f_213, 0, true, 0))
		{
			return 1;
		}
		else if (Local_66.f_199 != -1f)
		{
			if (unk_0x0F3033474C49912D(Local_66, Local_66.f_193, Local_66.f_196, Local_66.f_199, 0, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_296()//Position - 0x12AAC
{
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0x19E08ED08C79C477() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_297()//Position - 0x12AC9
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

Vector3 func_298(vector3 vParam0, float fParam1)//Position - 0x12AEF
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

void func_299(var uParam0)//Position - 0x12B33
{
	iLocal_65 = 0;
	iLocal_63 = 0;
	iLocal_61 = 0;
	iLocal_62 = 0;
	iLocal_60 = 0;
	iLocal_59 = 1;
	iLocal_55 = 0;
	iLocal_58 = 1;
	iLocal_57 = 0;
	iLocal_54 = 0;
	iLocal_53 = 0;
	iLocal_51 = 0;
	iLocal_50 = 0;
	Local_66 = unk_0xFC1458A37D98B502();
	func_307(&(uParam0->f_1[0 /*3*/]), &(Local_66.f_181), &iLocal_80);
	if ((((((((iLocal_80 == 10 || iLocal_80 == 11) || iLocal_80 == 12) || iLocal_80 == 13) || iLocal_80 == 14) || iLocal_80 == 15) || iLocal_80 == 16) || iLocal_80 == 17) || iLocal_80 == 18)
	{
		bLocal_94 = true;
	}
	Local_66.f_184 = 150f;
	Local_66.f_2.f_15 = "random@shop_robbery_reactions@";
	Local_66.f_2.f_16 = "absolutely";
	Local_66.f_2.f_17 = "is_this_it";
	Local_66.f_2.f_18 = "shock";
	Local_66.f_2.f_19 = "anger_a";
	Local_66.f_2.f_20 = "screw_you";
	Local_66.f_2.f_21 = "but_why";
	Local_66.f_486.f_1 = "mp_am_hold_up";
	Local_66.f_486.f_2 = "guard_handsup_loop";
	Local_66.f_486.f_3 = "holdup_victim_20s";
	Local_66.f_486.f_4 = "holdup_victim_20s_bag";
	Local_66.f_486.f_5 = "holdup_victim_20s_till";
	iLocal_82 = func_306();
	if (!bLocal_86)
	{
		func_302();
	}
	iLocal_87 = 0;
	if (iLocal_80 != 7)
	{
		iLocal_52 = 6;
	}
	else
	{
		iLocal_52 = 0;
	}
	if (func_100() == 0)
	{
		Local_66.f_1 = 0;
	}
	else if (func_100() == 1)
	{
		Local_66.f_1 = 1;
	}
	else if (func_100() == 2)
	{
		Local_66.f_1 = 2;
	}
	func_301(iLocal_80, &(Local_66.f_186), &(Local_66.f_189), &(Local_66.f_192), &(Local_66.f_193), &(Local_66.f_196), &(Local_66.f_199), &(Local_66.f_200), &(Local_66.f_203), &(Local_66.f_206), &(Local_66.f_207), &(Local_66.f_210), &(Local_66.f_213), &(Local_66.f_214), &(Local_66.f_217), &(Local_66.f_220), &(Local_66.f_102.f_6), &(Local_66.f_102.f_9));
	func_300(iLocal_80, &(Local_66.f_486.f_6), &(Local_66.f_486.f_9), &(Local_66.f_2.f_1), &(Local_66.f_2.f_4), &(Local_66.f_2.f_5), &(Local_66.f_28.f_7), &(Local_66.f_28.f_10), &(Local_66.f_28.f_13), &(Local_66.f_28.f_4), &(Local_66.f_28.f_5), &(Local_66.f_102.f_21));
}

void func_300(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)//Position - 0x12D62
{
	switch (iParam0)
	{
		case 0:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -706,6382f, -913,6887f, 19,21f };
			*uParam2 = { 0f, 0f, -89,999f };
			break;
		
		case 1:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -47,19871f, -1757,67f, 29,42f };
			*uParam2 = { 0f, 0f, -130f };
			break;
		
		case 2:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1164,21f, -322,89f, 69,2f };
			*uParam2 = { 0f, 0f, -80f };
			break;
		
		case 3:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1698,307f, 4923,371f, 42,06f };
			*uParam2 = { 0f, 0f, 145f };
			break;
		
		case 4:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1820,465f, 793,8166f, 138,09f };
			*uParam2 = { 0f, 0f, -47,53f };
			break;
		
		case 5:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1165,958f, 2710,201f, 38,14286f };
			*uParam2 = { 0f, 0f, -1,15f };
			break;
		
		case 6:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -2967,027f, 390,9038f, 15,02f };
			*uParam2 = { 0f, 0f, -94,76f };
			break;
		
		case 7:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1222,331f, -907,8234f, 12,31f };
			*uParam2 = { 0f, 0f, -147,297f };
			break;
		
		case 8:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1134,811f, -982,3615f, 46,4f };
			*uParam2 = { 0f, 0f, 96,68562f };
			break;
		
		case 9:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1486,673f, -378,4638f, 40,15f };
			*uParam2 = { 0f, 0f, -46,229f };
			break;
		
		case 10:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3244,573f, 1000,658f, 12,83f };
			*uParam2 = { 0f, 0f, 175,074f };
			break;
		
		case 11:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3041,357f, 584,2665f, 7,9f };
			*uParam2 = { 0f, 0f, -162,241f };
			break;
		
		case 12:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 548,9015f, 2668,941f, 42,15f };
			*uParam2 = { 0f, 0f, -82,5f };
			break;
		
		case 13:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2554,875f, 381,3857f, 108,62f };
			*uParam2 = { 0f, 0f, 177,716f };
			break;
		
		case 14:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2676,212f, 3280,969f, 55,24f };
			*uParam2 = { 0f, 0f, 150,87f };
			break;
		
		case 15:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1729,329f, 6417,123f, 35,03f };
			*uParam2 = { 0f, 0f, 63,641f };
			break;
		
		case 16:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1959,323f, 3742,29f, 32,34f };
			*uParam2 = { 0f, 0f, 120f };
			break;
		
		case 17:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 24,94562f, -1344,954f, 29,49f };
			*uParam2 = { 0f, 0f, 90f };
			break;
		
		case 18:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 373,5954f, 328,5892f, 103,56f };
			*uParam2 = { 0f, 0f, 75,885f };
			break;
	}
	*uParam9 = 220;
	*uParam10 = 787;
	*uParam3 = { unk_0x9EA50C5EC175E58E(*uParam1, uParam2->f_2, -0,668213f, 0,85762f, 0,0181999f) };
	*uParam4 = (180f + uParam2->f_2);
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam6 = { unk_0x9EA50C5EC175E58E(*uParam1, uParam2->f_2, -0,040857f, (0,366089f - 0,088f), -0,428174f) };
			*uParam11 = 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam6 = { unk_0x9EA50C5EC175E58E(*uParam1, uParam2->f_2, -0,040857f, (0,366089f - 0,033f), -0,398174f) };
			*uParam11 = 2;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam6 = { unk_0x9EA50C5EC175E58E(*uParam1, uParam2->f_2, -0,040857f, (0,366089f - 0,077f), -0,378174f) };
			*uParam11 = 3;
			break;
	}
	*uParam7 = { 5f, 0f, uParam2->f_2 };
}

Vector3 func_301(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)//Position - 0x132C4
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -711,81f, -916,36f, 18,22f };
			*uParam2 = { -711,74f, -908,75f, 21,72f };
			*uParam3 = 13,92f;
			*uParam4 = { -705,76f, -908,76f, 18,22f };
			*uParam5 = { -705,8f, -903,16f, 21,24f };
			*uParam6 = 2,32f;
			*uParam7 = { -709,02f, -907,72f, 18,22f };
			*uParam8 = { -708,96f, -903,15f, 21,25f };
			*uParam9 = 3,66f;
			*uParam10 = { -707,05f, -907,18f, 18,23f };
			*uParam11 = { -707,04f, -905,9f, 20,51f };
			*uParam12 = 0,75f;
			*uParam13 = { -704,528f, -913,948f, 18f };
			*uParam14 = { -706,528f, -913,948f, 22,221f };
			*uParam15 = 4f;
			*uParam16 = { -711,2905f, -913,7919f, 19,1156f };
			*uParam17 = 1,05f;
			break;
		
		case 1:
			*uParam1 = { -52,86f, -1756,43f, 28,42f };
			*uParam2 = { -47,94f, -1750,6f, 31,93f };
			*uParam3 = 13,92f;
			*uParam4 = { -43,36f, -1754,47f, 28,44f };
			*uParam5 = { -39,78f, -1750,15f, 31,46f };
			*uParam6 = 2,32f;
			*uParam7 = { -45,14f, -1751,51f, 28,43f };
			*uParam8 = { -42,23f, -1748,08f, 31,48f };
			*uParam9 = 3,66f;
			*uParam10 = { -43,3f, -1752,4f, 28,48f };
			*uParam11 = { -42,5f, -1751,44f, 30,71f };
			*uParam12 = 0,75f;
			*uParam13 = { -45,23195f, -1756,996f, 28,42101f };
			*uParam14 = { -47,68424f, -1759,943f, 31,92101f };
			*uParam15 = 1,8f;
			*uParam16 = { -50,83334f, -1754,827f, 29,321f };
			*uParam17 = 1,05f;
			break;
		
		case 2:
			*uParam1 = { 1159,64f, -326,47f, 68,21f };
			*uParam2 = { 1158,33f, -318,91f, 71,71f };
			*uParam3 = 13,92f;
			*uParam4 = { 1164,22f, -317,89f, 68,21f };
			*uParam5 = { 1163,26f, -312,51f, 71,2f };
			*uParam6 = 2,32f;
			*uParam7 = { 1160,91f, -317,34f, 68,21f };
			*uParam8 = { 1160,11f, -313,19f, 71,13f };
			*uParam9 = 3,66f;
			*uParam10 = { 1162,68f, -316,51f, 68,23f };
			*uParam11 = { 1162,46f, -315,28f, 70,49f };
			*uParam12 = 0,75f;
			*uParam13 = { 1164,222f, -323,349f, 68,21f };
			*uParam14 = { 1166,191f, -323,001f, 72,21f };
			*uParam15 = 4f;
			*uParam16 = { 1159,639f, -323,7686f, 69,1051f };
			*uParam17 = 1,05f;
			break;
		
		case 3:
			*uParam1 = { 1699,09f, 4929,01f, 41,06f };
			*uParam2 = { 1705,3f, 4924,67f, 44,58f };
			*uParam3 = 13,92f;
			*uParam4 = { 1701,85f, 4919,78f, 41,06f };
			*uParam5 = { 1706,43f, 4916,54f, 44,1f };
			*uParam6 = 2,32f;
			*uParam7 = { 1704,57f, 4921,8f, 41,06f };
			*uParam8 = { 1708,29f, 4919,18f, 44,1f };
			*uParam9 = 3,66f;
			*uParam10 = { 1703,9f, 4919,88f, 41,09f };
			*uParam11 = { 1704,92f, 4919,15f, 43,36f };
			*uParam12 = 0,75f;
			*uParam13 = { 1698,032f, 4923,538f, 41,069f };
			*uParam14 = { 1696,99f, 4921,831f, 45,069f };
			*uParam15 = 4f;
			*uParam16 = { 1700,856f, 4927,15f, 41,96366f };
			*uParam17 = 1,05f;
			break;
		
		case 4:
			*uParam1 = { -1822,46f, 788,35f, 137,19f };
			*uParam2 = { -1827,54f, 794,02f, 140,72f };
			*uParam3 = 13,92f;
			*uParam4 = { -1823,17f, 798,02f, 137,1f };
			*uParam5 = { -1826,81f, 802,05f, 140,12f };
			*uParam6 = 2,32f;
			*uParam7 = { -1826,25f, 796,63f, 137,16f };
			*uParam8 = { -1829,17f, 799,88f, 140,16f };
			*uParam9 = 3,66f;
			*uParam10 = { -1825,16f, 798,33f, 137,13f };
			*uParam11 = { -1826f, 799,31f, 139,43f };
			*uParam12 = 0,75f;
			*uParam13 = { -1820,332f, 793,679f, 137,084f };
			*uParam14 = { -1818,891f, 795,067f, 141,084f };
			*uParam15 = 4f;
			*uParam16 = { -1823,841f, 790,7311f, 138,0864f };
			*uParam17 = 1,05f;
			break;
		
		case 5:
			*uParam1 = { 1170,182f, 2708,049f, 37,6f };
			*uParam2 = { 1162,385f, 2708,255f, 40,6f };
			*uParam3 = 8,8f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1170,399f, 2716,422f, 37f };
			*uParam8 = { 1162,601f, 2716,628f, 41,19f };
			*uParam9 = 9f;
			*uParam10 = { 1170,7f, 2712,368f, 37,7f };
			*uParam11 = { 1168,3f, 2712,431f, 40,73f };
			*uParam12 = 1,5f;
			*uParam13 = { 1165,149f, 2712,433f, 37,138f };
			*uParam14 = { 1165,132f, 2710,033f, 41,138f };
			*uParam15 = 5f;
			*uParam16 = { 1165,946f, 2709,136f, 37,96316f };
			*uParam17 = 1f;
			break;
		
		case 6:
			*uParam1 = { -2973,31f, 390,75f, 14,04f };
			*uParam2 = { -2964,67f, 390,23f, 17,65f };
			*uParam3 = 7,5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -2956,98f, 389,73f, 13,21f };
			*uParam8 = { -2964,11f, 390,19f, 17,65f };
			*uParam9 = 7,5f;
			*uParam10 = { -2964,86f, 388,43f, 14,05f };
			*uParam11 = { -2964,98f, 386,49f, 17,63f };
			*uParam12 = 1,72f;
			*uParam13 = { -2964,645f, 391,391f, 14,048f };
			*uParam14 = { -2966,636f, 391,577f, 18,048f };
			*uParam15 = 4,5f;
			*uParam16 = { -2967,906f, 391,0424f, 14,94331f };
			*uParam17 = 1f;
			break;
		
		case 7:
			*uParam1 = { -1226,29f, -902,84f, 11,33f };
			*uParam2 = { -1221,4f, -910,16f, 14,93f };
			*uParam3 = 7,5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1217,01f, -916,41f, 10,47f };
			*uParam8 = { -1221,13f, -910,58f, 14,89f };
			*uParam9 = 7,5f;
			*uParam10 = { -1222,99f, -911,03f, 11,33f };
			*uParam11 = { -1224,59f, -912,13f, 14,93f };
			*uParam12 = 1,72f;
			*uParam13 = { -1220,512f, -909,343f, 11,331f };
			*uParam14 = { -1221,766f, -907,785f, 15,331f };
			*uParam15 = 4,5f;
			*uParam16 = { -1222,687f, -907,0001f, 12,22635f };
			*uParam17 = 1,15f;
			break;
		
		case 8:
			*uParam1 = { 1141f, -980,98f, 45,42f };
			*uParam2 = { 1132,3f, -982,16f, 48,99f };
			*uParam3 = 7,5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1124,73f, -983,22f, 44,57f };
			*uParam8 = { 1131,81f, -982,24f, 48,99f };
			*uParam9 = 7,5f;
			*uParam10 = { 1132,21f, -980,35f, 45,42f };
			*uParam11 = { 1131,91f, -978,44f, 49,02f };
			*uParam12 = 1,72f;
			*uParam13 = { 1132,764f, -983,742f, 45,42f };
			*uParam14 = { 1134,692f, -983,21f, 49,42f };
			*uParam15 = 4,5f;
			*uParam16 = { 1135,651f, -982,4113f, 46,31583f };
			*uParam17 = 1,05f;
			break;
		
		case 9:
			*uParam1 = { -1490,78f, -383,33f, 39,16f };
			*uParam2 = { -1484,56f, -377,1f, 42,74f };
			*uParam3 = 7,5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1479,17f, -371,69f, 38,33f };
			*uParam8 = { -1484,2f, -376,75f, 42,73f };
			*uParam9 = 7,5f;
			*uParam10 = { -1483,39f, -378,48f, 39,17f };
			*uParam11 = { -1482,01f, -379,86f, 42,77f };
			*uParam12 = 1,72f;
			*uParam13 = { -1485,5f, -376,545f, 39,167f };
			*uParam14 = { -1486,889f, -377,985f, 43,167f };
			*uParam15 = 4,5f;
			*uParam16 = { -1487,306f, -378,922f, 39,81341f };
			*uParam17 = 1,05f;
			break;
		
		case 10:
			*uParam1 = { -3240,12f, 1004,46f, 11,84f };
			*uParam2 = { -3247,19f, 1005,06f, 15,36f };
			*uParam3 = 11,21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3249,75f, 999,74f, 11,83f };
			*uParam8 = { -3249,05f, 1007,41f, 15,2f };
			*uParam9 = 3,66f;
			*uParam10 = { -3247,71f, 1000,33f, 11,83f };
			*uParam11 = { -3247,59f, 1001,62f, 14,13f };
			*uParam12 = 0,75f;
			*uParam13 = { -3242,573f, 999,168f, 11,835f };
			*uParam14 = { -3242,482f, 1000,365f, 15,835f };
			*uParam15 = 4,2f;
			*uParam16 = { -3241,872f, 1006,54f, 12,73071f };
			*uParam17 = 1f;
			break;
		
		case 11:
			*uParam1 = { -3038,7f, 589,51f, 6,92f };
			*uParam2 = { -3045,47f, 587,31f, 10,45f };
			*uParam3 = 11,21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3045,77f, 581,47f, 6,91f };
			*uParam8 = { -3048,23f, 589,1f, 10,43f };
			*uParam9 = 3,66f;
			*uParam10 = { -3044,12f, 582,75f, 6,9f };
			*uParam11 = { -3044,51f, 583,99f, 9,21f };
			*uParam12 = 0,75f;
			*uParam13 = { -3039,04f, 583,639f, 6,914f };
			*uParam14 = { -3039,453f, 584,766f, 10,914f };
			*uParam15 = 4,2f;
			*uParam16 = { -3041,18f, 590,7718f, 7,808933f };
			*uParam17 = 1f;
			break;
		
		case 12:
			*uParam1 = { 544,21f, 2672,5f, 41,16f };
			*uParam2 = { 545,16f, 2665,44f, 44,68f };
			*uParam3 = 11,21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 550,96f, 2664,13f, 41,16f };
			*uParam8 = { 542,86f, 2663,05f, 44,69f };
			*uParam9 = 3,66f;
			*uParam10 = { 549,89f, 2665,96f, 41,17f };
			*uParam11 = { 548,61f, 2665,78f, 43,46f };
			*uParam12 = 0,75f;
			*uParam13 = { 549,913f, 2671,202f, 41,161f };
			*uParam14 = { 548,726f, 2671,024f, 45,161f };
			*uParam15 = 4,2f;
			*uParam16 = { 542,5831f, 2670,376f, 42,05651f };
			*uParam17 = 1f;
			break;
		
		case 13:
			*uParam1 = { 2559,12f, 385,39f, 107,62f };
			*uParam2 = { 2552,06f, 385,68f, 111,17f };
			*uParam3 = 11,21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam10 = { 2551,76f, 380,95f, 107,65f };
			*uParam11 = { 2551,82f, 382,21f, 109,92f };
			*uParam12 = 0,75f;
			*uParam13 = { 2556,854f, 379,973f, 107,627f };
			*uParam14 = { 2556,845f, 381,173f, 111,627f };
			*uParam15 = 4,2f;
			*uParam16 = { 2557,248f, 387,3177f, 108,523f };
			*uParam17 = 1f;
			break;
		
		case 14:
			*uParam1 = { 2681,84f, 3282,62f, 54,24f };
			*uParam2 = { 2675,63f, 3286,07f, 57,79f };
			*uParam3 = 11,21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 2671,06f, 3282,22f, 54,48f };
			*uParam8 = { 2675,1f, 3289,37f, 57,77f };
			*uParam9 = 3,66f;
			*uParam10 = { 2673,23f, 3281,96f, 54,25f };
			*uParam11 = { 2673,85f, 3283,09f, 56,53f };
			*uParam12 = 0,75f;
			*uParam13 = { 2677,411f, 3278,796f, 54,246f };
			*uParam14 = { 2677,978f, 3279,854f, 58,246f };
			*uParam15 = 4,2f;
			*uParam16 = { 2680,964f, 3285,271f, 55,14115f };
			*uParam17 = 1f;
			break;
		
		case 15:
			*uParam1 = { 1731,25f, 6411,58f, 34,04f };
			*uParam2 = { 1734,35f, 6417,97f, 37,58f };
			*uParam3 = 11,21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1730,29f, 6422,24f, 34,23f };
			*uParam8 = { 1737,68f, 6418,66f, 37,59f };
			*uParam9 = 3,66f;
			*uParam10 = { 1730,17f, 6420,17f, 34,04f };
			*uParam11 = { 1731,33f, 6419,58f, 36,34f };
			*uParam12 = 0,75f;
			*uParam13 = { 1727,219f, 6415,816f, 34,042f };
			*uParam14 = { 1728,296f, 6415,289f, 38,042f };
			*uParam15 = 4,2f;
			*uParam16 = { 1733,865f, 6412,566f, 34,93724f };
			*uParam17 = 1f;
			break;
		
		case 16:
			*uParam1 = { 1964,96f, 3740,86f, 31,38f };
			*uParam2 = { 1961,43f, 3746,95f, 34,89f };
			*uParam3 = 11,21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1955,68f, 3746,02f, 31,4f };
			*uParam8 = { 1962,38f, 3749,91f, 34,72f };
			*uParam9 = 3,66f;
			*uParam10 = { 1957,3f, 3744,68f, 31,35f };
			*uParam11 = { 1958,38f, 3745,33f, 33,63f };
			*uParam12 = 0,75f;
			*uParam13 = { 1959,255f, 3739,774f, 31,349f };
			*uParam14 = { 1960,274f, 3740,408f, 35,349f };
			*uParam15 = 4,2f;
			*uParam16 = { 1965,634f, 3743,55f, 32,24376f };
			*uParam17 = 1f;
			break;
		
		case 17:
			*uParam1 = { 34,84f, -1345,6f, 27f };
			*uParam2 = { 23,34f, -1345,56f, 32f };
			*uParam3 = 7,2f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 27,44f, -1341,815f, 27,01f };
			*uParam8 = { 27,46f, -1337,815f, 32,01f };
			*uParam9 = 9f;
			*uParam10 = { 24,05f, -1341,89f, 27f };
			*uParam11 = { 26,05f, -1341,87f, 32f };
			*uParam12 = 1f;
			*uParam13 = { 23,566f, -1346,956f, 27f };
			*uParam14 = { 25,065f, -1346,901f, 32f };
			*uParam15 = 4f;
			*uParam16 = { 30,97348f, -1347,115f, 29,39393f };
			*uParam17 = 1f;
			break;
		
		case 18:
			*uParam1 = { 376,65f, 323,6f, 102,57f };
			*uParam2 = { 378,35f, 330,47f, 106,12f };
			*uParam3 = 11,21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 373,45f, 333,81f, 102,58f };
			*uParam8 = { 381,42f, 331,81f, 106,11f };
			*uParam9 = 3,66f;
			*uParam10 = { 373,79f, 331,72f, 102,58f };
			*uParam11 = { 375,03f, 331,41f, 104,86f };
			*uParam12 = 0,75f;
			*uParam13 = { 371,789f, 326,823f, 102,571f };
			*uParam14 = { 372,957f, 326,548f, 106,571f };
			*uParam15 = 4,2f;
			*uParam16 = { 378,9936f, 325,0343f, 103,4664f };
			*uParam17 = 1f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_302()//Position - 0x14497
{
	func_305();
	func_304();
	func_303();
}

void func_303()//Position - 0x144AB
{
	int iVar0;
	
	if (iLocal_82 >= 9)
	{
		if (Global_104555.f_20005.f_41 > 3)
		{
			if (iLocal_82 == 9)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = unk_0x63A6486593EC7EC3(0, 5);
			}
			if (iVar0 < 1)
			{
				Local_66.f_464 = 1;
				Global_104555.f_20005.f_41 = 0;
			}
			else
			{
				Local_66.f_464 = 0;
				Global_104555.f_20005.f_41++;
			}
		}
		else
		{
			Global_104555.f_20005.f_41++;
		}
	}
	else
	{
		Global_104555.f_20005.f_41++;
	}
}

void func_304()//Position - 0x1453F
{
	int iVar0;
	
	if (iLocal_82 >= 3)
	{
		if (iLocal_82 == 3)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = unk_0x63A6486593EC7EC3(0, 10);
		}
		if (iVar0 < 1)
		{
			Local_66.f_2.f_12 = 1;
		}
		else
		{
			Local_66.f_2.f_12 = 0;
		}
	}
}

void func_305()//Position - 0x1457E
{
	int iVar0;
	
	if (iLocal_82 >= 6)
	{
		if (iLocal_82 == 6)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = unk_0x63A6486593EC7EC3(0, 7);
		}
		if (iVar0 < 1)
		{
			iLocal_58 = 2;
		}
		else
		{
			iLocal_58 = 1;
		}
	}
}

int func_306()//Position - 0x145B4
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = (iVar0 + Global_104555.f_20005[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_307(var uParam0, var uParam1, int iParam2)//Position - 0x145E4
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	*iParam2 = 0;
	fVar0 = system::vdist2(func_289(0), *uParam0);
	fVar2 = 0f;
	iVar1 = 1;
	while (iVar1 <= (19 - 1))
	{
		fVar2 = system::vdist2(*uParam0, func_289(iVar1));
		if (fVar2 < fVar0)
		{
			*iParam2 = iVar1;
			fVar0 = fVar2;
		}
		iVar1++;
	}
	*uParam1 = { func_289(*iParam2) };
}

void func_308(var uParam0, int iParam1)//Position - 0x14643
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

bool func_309(int iParam0)//Position - 0x1465A
{
	return Global_35861 == iParam0;
}

int func_310(int iParam0)//Position - 0x14668
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_311(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_311(int iParam0)//Position - 0x1468A
{
	return func_312(iParam0, Global_35861);
}

int func_312(int iParam0, int iParam1)//Position - 0x1469B
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

void func_313()//Position - 0x1487C
{
	if (((iLocal_63 == 1 || iLocal_63 == 2) || iLocal_101 == 7) || (unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0) && iLocal_65 == 1))
	{
		if (iLocal_63 == 1)
		{
		}
		if (iLocal_63 == 2)
		{
		}
		if (iLocal_101 == 7)
		{
		}
		if (unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0) && iLocal_65 == 1)
		{
		}
		Global_104555.f_20005.f_21[iLocal_80] = unk_0x674C9438180770FE();
		Global_104555.f_20005.f_42[iLocal_80] = unk_0xD3ECC7A5C90D3AA4();
	}
	if ((unk_0xDEC0EB6EAE9BC575() && func_324()) && Local_66.f_468)
	{
		func_320(&iLocal_80, &iLocal_87, &iLocal_81);
	}
	func_319();
	iLocal_87 = 0;
	iLocal_91 = 0;
	iLocal_92 = 0;
	iLocal_93 = 0;
	if (!bLocal_86)
	{
		unk_0xC0EBC1452FCAB15C(5);
	}
	unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
	unk_0xCA107A9AAF17E75F(iLocal_79, 0);
	func_28("SHR_HOLDUP_1", 1);
	func_28("SHR_SNK_TUT", 1);
	if ((func_27("SHR_MENU") || func_27("SHR_HOLDUP_1")) || func_27("SHR_SNK_TUT"))
	{
		unk_0x3E80C2F7BC665259(1);
	}
	if (func_1(Local_66.f_470, 1024))
	{
		if ((unk_0x6ADD12BF4D6D2587(iLocal_98[0]) && unk_0x6ADD12BF4D6D2587(iLocal_98[1])) && unk_0x6ADD12BF4D6D2587(iLocal_98[2]))
		{
			unk_0x452336926718D62A(&(iLocal_98[0]));
			unk_0x452336926718D62A(&(iLocal_98[1]));
			unk_0x452336926718D62A(&(iLocal_98[2]));
		}
	}
	if (iLocal_100 == 2)
	{
		unk_0xFCCDDE0E48CF9588(Local_66.f_486.f_1);
	}
	func_314(&Local_96, 0);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_314(var uParam0, bool bParam1)//Position - 0x14A15
{
	int iVar0;
	
	if (!bParam1)
	{
		func_316(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_315(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_315(var uParam0)//Position - 0x14A55
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_316(var uParam0)//Position - 0x14A66
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], 30))
		{
			func_317(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_317(var uParam0)//Position - 0x14A9F
{
	func_318(*uParam0, "NULL", uParam0->f_1);
}

void func_318(int iParam0, char* sParam1, int iParam2)//Position - 0x14AB4
{
	if (unk_0xC80D31E4B587871C(iParam0, 30))
	{
		switch (func_263(iParam0))
		{
			case 0:
				unk_0x14776E43F90DD454(iParam2);
				break;
			
			case 1:
				unk_0xFCCDDE0E48CF9588(sParam1);
				break;
			
			case 2:
				unk_0x736CC1A30C230950(sParam1);
				break;
			
			case 3:
				unk_0x137FC8E0F58D9E0B(sParam1);
				break;
			
			case 4:
				unk_0x9E6ACDF1473CD846(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xD22D83D359390CC6(sParam1);
				break;
			
			case 6:
				unk_0x77A208B3324C04F2();
				break;
			
			case 7:
				unk_0x7A0F3E22D109C816(iParam2);
				break;
			
			case 8:
				unk_0xF40900F61CC88931(iParam2, unk_0xC80D31E4B587871C(iParam0, 26));
				break;
			
			case 9:
				unk_0x74FDC371ED12544B();
				break;
			
			default:
				break;
		}
	}
}

void func_319()//Position - 0x14B74
{
	if (!unk_0x191BE1BC8F26F3C1(Local_66.f_2, 0))
	{
		unk_0xB8E08BD5B184DF4E(Local_66.f_2);
	}
	if (unk_0x6ADD12BF4D6D2587(Local_66.f_2))
	{
		func_213();
		unk_0x486F346ADFE56674(&(Local_66.f_2));
	}
	if (unk_0x6ADD12BF4D6D2587(Local_66.f_86))
	{
		unk_0x486F346ADFE56674(&(Local_66.f_86));
	}
	if (!unk_0x191BE1BC8F26F3C1(Local_66.f_28, 0))
	{
		if (iLocal_53 >= 4)
		{
			unk_0xBD1486160AB0661B(Local_66.f_28, -8f, 1);
			unk_0xB8D9F55BA414128D(Local_66.f_28, 1, 0f, 0f, -0,1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
		}
	}
	if (unk_0x6ADD12BF4D6D2587(Local_66.f_28))
	{
		unk_0x3A703774620FDB42(&(Local_66.f_28));
	}
	if (unk_0x6ADD12BF4D6D2587(Local_66.f_96.f_1))
	{
		unk_0x452336926718D62A(&(Local_66.f_96.f_1));
		unk_0x143DCD09D82EE129(Local_66.f_486.f_6, 0,5f, 303280717, false);
		unk_0x143DCD09D82EE129(Local_66.f_486.f_6, 0,5f, joaat("prop_till_02"), false);
		unk_0x143DCD09D82EE129(Local_66.f_486.f_6, 0,5f, joaat("prop_till_03"), false);
	}
	if (unk_0xB8B3E5529EDB87D4(Local_66.f_28.f_1))
	{
		unk_0x60727D07B2D72C82(Local_66.f_28.f_1);
	}
	if (func_14(&(Local_66.f_477)))
	{
		func_39(&(Local_66.f_477));
	}
	if (Local_66.f_466)
	{
		if (!bLocal_86)
		{
			unk_0xFCCDDE0E48CF9588(Local_66.f_2.f_15);
		}
		Local_66.f_466 = 0;
	}
}

void func_320(int iParam0, var uParam1, var uParam2)//Position - 0x14CB3
{
	int iVar0;
	struct<6> Var1[3];
	struct<8> Var2[2];
	
	iVar0 = func_323(*uParam1, 1, 0);
	StringCopy(&(Var2[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var2[1 /*8*/]), "Location", 32);
	StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	MemCopy(&(Var1[1 /*6*/]), {func_322(iParam0)}, 6);
	if (func_321(276, &Var1, &Var2, 2, -1, 0, 0))
	{
		unk_0xEC4FA25E0FA458DA(131, *uParam2, system::to_float(*uParam2));
		unk_0xEC4FA25E0FA458DA(114, iVar0, system::to_float(iVar0));
	}
}

int func_321(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x14D30
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0xDEC0EB6EAE9BC575())
	{
	}
	if ((!unk_0x6681C497ECD12BEA() && (unk_0x0A51F536ECBFA795() || !unk_0x464F779D23F6440D())) && unk_0x5248D53D4E6A7964())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x15DBBAF9E2085C7A())
			{
				Var2 = { func_139(unk_0x9EB17624F44A8DA4()) };
				if (unk_0xA84F967541249268(&Var2))
				{
					if (unk_0x5CF21D71A8C4CFA6(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x3A711520F83BAE98() && Global_2455152.f_3)
			{
				unk_0xC42924E8061737DB(&Var0, &(Global_1655819.f_10));
			}
			else
			{
				unk_0x9EE3C5408D4CD343(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x6681C497ECD12BEA())
	{
	}
	if (!unk_0x0A51F536ECBFA795())
	{
	}
	if (unk_0x464F779D23F6440D())
	{
	}
	if (!unk_0x5248D53D4E6A7964())
	{
	}
	return 0;
}

struct<8> func_322(var uParam0)//Position - 0x14E64
{
	struct<8> Var0;
	
	switch (*uParam0)
	{
		case -2:
		case -1:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			StringCopy(&Var0, "SHR_GAS", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "SHR_LIQ1", 32);
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			StringCopy(&Var0, "SHR_LIQ2", 32);
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			StringCopy(&Var0, "SHR_CONV", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

int func_323(bool bParam0, int iParam1, int iParam2)//Position - 0x14F35
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_324()//Position - 0x14F4C
{
	if (func_326() && func_325(0))
	{
		return 1;
	}
	return 0;
}

var func_325(int iParam0)//Position - 0x14F6A
{
	return Global_1312373[iParam0];
}

var func_326()//Position - 0x14F7A
{
	return func_325(func_76() + 1);
}

