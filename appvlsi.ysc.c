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
	int iLocal_21 = 0;
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
	unk_0x252CDD3D0F299441();
	iLocal_21 = 0;
	if (iLocal_20 == 0)
	{
		func_10();
		func_9();
		iLocal_20 = 1;
	}
	while (true)
	{
		system::wait(0);
		if (Global_14453.f_1 != 9)
		{
			switch (Global_14453.f_1)
			{
				case 7:
					if (iLocal_21 == 1)
					{
						if (func_8(2, Global_14422, 0))
						{
							unk_0x4AFBCBFDE748D4E0(-1, "Lester_Laugh_Phone", "DLC_HEIST_HACKING_SNAKE_SOUNDS", 1);
							Global_14431 = 1;
							func_10();
							func_5();
							system::settimera(0);
							system::settimerb(0);
						}
					}
					if (iLocal_21 == 2)
					{
						if (system::timerb() > 499)
						{
							system::settimerb(0);
						}
						if (system::timera() > 2200)
						{
							iLocal_21 = 3;
						}
					}
					if (iLocal_21 == 3)
					{
						Global_1573867 = 1;
					}
					break;
				
				case 8:
					if (func_8(2, Global_14421, 0))
					{
						func_4();
						Global_14431 = 1;
						if (Global_14453.f_1 > 3)
						{
							Global_14453.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_14455 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()//Position - 0x126
{
	if (((Global_14453.f_1 == 1 || Global_14453.f_1 == 3) || Global_14453.f_1 == 0) || Global_14397 == 1)
	{
		Global_14440 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x169
{
	unk_0x751FF861325F816B("DLC_MPHEIST/HEIST_HACK_SNAKE");
	unk_0x96A3D9A8A4C7AFD4();
}

int func_3()//Position - 0x17C
{
	if (Global_2929 == 1 || Global_14453.f_1 < 7)
	{
		Global_14440 = 1;
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x1A5
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Menu_Back", &Global_14442, 1);
	}
}

void func_5()//Position - 0x1C6
{
	if (Global_14441)
	{
		func_6(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
}

void func_6(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x258
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
		func_7(sParam7);
	}
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		func_7(sParam8);
	}
	if (!unk_0xAB019B170BF1309C(sParam9))
	{
		func_7(sParam9);
	}
	if (!unk_0xAB019B170BF1309C(sParam10))
	{
		func_7(sParam10);
	}
	if (!unk_0xAB019B170BF1309C(sParam11))
	{
		func_7(sParam11);
	}
	unk_0x271AA5469AF471B3();
}

void func_7(char* sParam0)//Position - 0x30B
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

int func_8(int iParam0, int iParam1, int iParam2)//Position - 0x31D
{
	if (unk_0xE8C126B7ADBB9D63(iParam0, iParam1) || (iParam2 == 1 && unk_0x4CD14B4B1E8BD8BA(iParam0, iParam1)))
	{
		if (unk_0xB9D80B12FE4456A5())
		{
			if (unk_0xE59B25D23E4C4B3E() == 0 || (unk_0x02BBA5FDE77816B9() && unk_0x4C4813CAAD70E814(2)))
			{
				return 0;
			}
		}
		if (unk_0x0F30C1F1717A6437() || unk_0x08D525BE62A22AE0())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_9()//Position - 0x38F
{
	if (Global_14441)
	{
		func_6(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
}

void func_10()//Position - 0x421
{
	if (iLocal_21 == 0)
	{
		unk_0x1CF95440F1970B4F("DLC_MPHEIST/HEIST_HACK_SNAKE", 0, -1);
		while (unk_0x1CF95440F1970B4F("DLC_MPHEIST/HEIST_HACK_SNAKE", 0, -1) == 0)
		{
			system::wait(0);
		}
		func_11(Global_14434, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
		unk_0xD07D5CD276368D36(23);
		unk_0xD07D5CD276368D36(0);
		unk_0xD07D5CD276368D36(-99);
		unk_0xD07D5CD276368D36(0);
		unk_0xD07D5CD276368D36(100);
		unk_0xD07D5CD276368D36(2);
		unk_0x1869584A8A72FEDD(false);
		if (unk_0xC80D31E4B587871C(Global_2325, 1))
		{
			unk_0x9499D7329FB840A2(0f);
		}
		unk_0x271AA5469AF471B3();
		func_11(Global_14434, "DISPLAY_VIEW", 23f, system::to_float(1), -1082130432, -1082130432, -1082130432);
		iLocal_21 = 1;
	}
	else if (iLocal_21 == 1)
	{
		func_11(Global_14434, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
		unk_0xD07D5CD276368D36(23);
		unk_0xD07D5CD276368D36(0);
		unk_0xD07D5CD276368D36(-99);
		unk_0xD07D5CD276368D36(0);
		unk_0xD07D5CD276368D36(100);
		unk_0xD07D5CD276368D36(3);
		unk_0x1869584A8A72FEDD(false);
		if (unk_0xC80D31E4B587871C(Global_2325, 1))
		{
			unk_0x9499D7329FB840A2(0f);
		}
		unk_0x271AA5469AF471B3();
		func_11(Global_14434, "DISPLAY_VIEW", 23f, system::to_float(1), -1082130432, -1082130432, -1082130432);
		iLocal_21 = 2;
	}
}

void func_11(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x575
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

