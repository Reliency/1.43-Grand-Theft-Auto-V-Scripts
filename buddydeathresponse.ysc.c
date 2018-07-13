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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
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
	if (unk_0x7D9C4B359376D38A(2) || unk_0xC79066AA74B1B323())
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	func_1();
}

void func_1()//Position - 0x4F
{
	vector3 vVar0;
	var uVar1;
	
	while (!func_8(&iLocal_20))
	{
		system::wait(0);
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_20))
	{
		if (!Global_89473)
		{
			unk_0xDD29FF4BAB8AFF9C(iLocal_20, true, 1);
			if (unk_0x78F50AA8F955BEFC(iLocal_20, 1435919172) != 7)
			{
				unk_0xB8E08BD5B184DF4E(iLocal_20);
			}
			vVar0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
			unk_0x771A86309E0CA47B(iLocal_20, 1);
			unk_0x6931076730A4AC5D(&uVar1);
			if (!unk_0x88DDBE9908752BF0(iLocal_20, 0))
			{
				if (!unk_0x7ED4D0E480A6EC43(iLocal_20, 0) && !unk_0x88DDBE9908752BF0(iLocal_20, 0))
				{
					unk_0x7FC89099E65488E2(0, vVar0, 6000);
				}
			}
			unk_0xBA54D3D84EF38E3D(0, vVar0, 6000, 0, 2);
			unk_0x1B16DD5C115FE009(uVar1);
			unk_0xAB30B1CF01A198C1(iLocal_20, uVar1);
		}
		func_2(iLocal_20);
	}
	while (!unk_0x3E9CABD07B829173())
	{
		system::wait(0);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_20))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_20))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_20, 1);
		}
		unk_0x486F346ADFE56674(&iLocal_20);
	}
	Global_89473 = 0;
	unk_0x96A3D9A8A4C7AFD4();
}

void func_2(int iParam0)//Position - 0x13C
{
	int iVar0;
	
	iVar0 = unk_0x53C562FD2B9E3AB0() + 1000;
	while (unk_0x53C562FD2B9E3AB0() < iVar0 && !unk_0x3E9CABD07B829173())
	{
		system::wait(0);
	}
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(unk_0xFC1458A37D98B502()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 2)
		{
			switch (func_5(unk_0xFC1458A37D98B502()))
			{
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 0)
		{
			switch (func_5(unk_0xFC1458A37D98B502()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3);
					break;
				
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3);
					break;
				}
			}
	}
}

void func_3(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x234
{
	unk_0xE44A9E63DC81244A(iParam0, sParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)//Position - 0x24D
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

int func_5(int iParam0)//Position - 0x43C
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_6(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_6(int iParam0)//Position - 0x479
{
	if (func_7(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_7(int iParam0)//Position - 0x4A3
{
	return iParam0 < 3;
}

int func_8(var uParam0)//Position - 0x4AF
{
	int iVar0;
	
	iLocal_18 = 0;
	while (iLocal_18 < 9)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90347[iLocal_18]) && !unk_0x3AB6A1A9084FB0A4(Global_90347[iLocal_18]))
		{
			if (Global_90347[iLocal_18] != unk_0xFC1458A37D98B502())
			{
				if (!unk_0x9761C10D57B68069(Global_90347[iLocal_18]))
				{
					if (unk_0x88DDBE9908752BF0(Global_90347[iLocal_18], 0) || !unk_0xDFFD5F8C8ABCB7EF(Global_90347[iLocal_18]))
					{
						if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(Global_90347[iLocal_18], 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), true) < 10f)
						{
							iLocal_19 = func_5(Global_90347[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_9())
								{
									if (unk_0xFFCE4302A2DB825B(Global_90347[iLocal_18], unk_0xFC1458A37D98B502(), 17))
									{
										if (unk_0x88DDBE9908752BF0(Global_90347[iLocal_18], 0))
										{
											iVar0 = unk_0xDFD115BB10FE46A9(Global_90347[iLocal_18], 0);
										}
										if ((unk_0x6ADD12BF4D6D2587(iVar0) && unk_0xB8DE76287EDC4957(iVar0, 0)) || !unk_0x6ADD12BF4D6D2587(iVar0))
										{
											*uParam0 = Global_90347[iLocal_18];
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
		iLocal_18++;
	}
	if (unk_0x3E9CABD07B829173())
	{
		return 1;
	}
	return 0;
}

int func_9()//Position - 0x5F4
{
	func_10();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_10()//Position - 0x60D
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_6(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_5(unk_0xFC1458A37D98B502());
			if (func_7(iVar0) && (!func_11(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_7(Global_104555.f_2353.f_539.f_4301))
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

bool func_11(int iParam0)//Position - 0x70A
{
	return Global_35861 == iParam0;
}

