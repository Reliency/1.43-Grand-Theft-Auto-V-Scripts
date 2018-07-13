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
	vector3 vLocal_20 = { 0f, 0f, 0f };
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	int iLocal_29 = 0;
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
	fLocal_25 = 9,99f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	unk_0x252CDD3D0F299441();
	func_10();
	func_7();
	system::settimera(0);
	system::settimerb(0);
	while (true)
	{
		system::wait(0);
		if (Global_14453.f_1 != 9)
		{
			switch (Global_14453.f_1)
			{
				case 7:
					if (system::timera() > 125)
					{
						func_10();
						system::settimera(0);
					}
					if (system::timerb() > system::floor(fLocal_27) * 30 && system::timerb() > 150)
					{
						unk_0x008F3E3CC076EA0E(Global_14434, "APP_FUNCTION");
						unk_0xD07D5CD276368D36(1);
						unk_0x271AA5469AF471B3();
						system::settimerb(0);
					}
					if (system::timerb() > 2000)
					{
						unk_0x008F3E3CC076EA0E(Global_14434, "APP_FUNCTION");
						unk_0xD07D5CD276368D36(1);
						unk_0x271AA5469AF471B3();
						system::settimerb(0);
					}
					break;
				
				case 8:
					if (func_6(2, Global_14421, 0))
					{
						func_5();
						Global_14431 = 1;
						func_10();
						func_7();
						if (Global_14453.f_1 > 3)
						{
							Global_14453.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_4())
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

int func_1()//Position - 0x144
{
	if (((Global_14453.f_1 == 1 || Global_14453.f_1 == 3) || Global_14453.f_1 == 0) || Global_14397 == 1)
	{
		Global_14440 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x187
{
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	unk_0x0EE72DB1CD8A3B86(&Global_2324, 22);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_3(int iParam0, int iParam1)//Position - 0x1BA
{
	Global_4267348[iParam0] = iParam1;
}

int func_4()//Position - 0x1CC
{
	if (Global_2929 == 1 || Global_14453.f_1 < 7)
	{
		Global_14440 = 1;
		return 1;
	}
	return 0;
}

void func_5()//Position - 0x1F5
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Menu_Back", &Global_14442, 1);
	}
}

int func_6(int iParam0, int iParam1, int iParam2)//Position - 0x216
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

void func_7()//Position - 0x288
{
	if (Global_14441)
	{
		func_8(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_8(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_8(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
}

void func_8(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x31A
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
		func_9(sParam7);
	}
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0xAB019B170BF1309C(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0xAB019B170BF1309C(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0xAB019B170BF1309C(sParam11))
	{
		func_9(sParam11);
	}
	unk_0x271AA5469AF471B3();
}

void func_9(char* sParam0)//Position - 0x3CD
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_10()//Position - 0x3DF
{
	int iVar0;
	bool bVar1;
	
	if (func_18() == 0)
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			vLocal_20 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			fLocal_21 = unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502());
			func_17();
			func_16();
			func_15();
			fLocal_22 = (360f - fLocal_21);
			fLocal_25 = (fLocal_25 - fLocal_22);
			if (fLocal_25 < 0f)
			{
				fLocal_25 = (fLocal_25 + 360f);
			}
			if (iLocal_29 == 0)
			{
				unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
				unk_0xD07D5CD276368D36(23);
				unk_0xD07D5CD276368D36(0);
				if (unk_0xC80D31E4B587871C(Global_2324, 30))
				{
					unk_0xD07D5CD276368D36(-99);
					unk_0xD07D5CD276368D36(0);
				}
				else
				{
					unk_0xD07D5CD276368D36(system::floor(fLocal_25));
					unk_0xD07D5CD276368D36(system::floor(fLocal_26));
				}
				unk_0xD07D5CD276368D36(100);
				if (unk_0xC80D31E4B587871C(Global_2324, 22))
				{
					unk_0xD07D5CD276368D36(1);
				}
				else
				{
					unk_0xD07D5CD276368D36(0);
				}
				if (unk_0xC80D31E4B587871C(Global_2324, 29))
				{
					unk_0x1869584A8A72FEDD(false);
				}
				else
				{
					unk_0x1869584A8A72FEDD(true);
				}
				if (unk_0xC80D31E4B587871C(Global_2325, 1))
				{
					unk_0x9499D7329FB840A2(fLocal_28);
				}
				unk_0x271AA5469AF471B3();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_14434, "DISPLAY_VIEW", 23f, system::to_float(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		vLocal_20 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		fLocal_21 = unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502());
		if (Global_4267354 > 5)
		{
		}
		iVar0 = 0;
		while (iVar0 < Global_4267354)
		{
			func_13(iVar0);
			func_12(iVar0);
			func_11(iVar0);
			fLocal_22 = (360f - fLocal_21);
			fLocal_25 = (fLocal_25 - fLocal_22);
			if (fLocal_25 < 0f)
			{
				fLocal_25 = (fLocal_25 + 360f);
			}
			if (iLocal_29 == 0)
			{
				unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
				unk_0xD07D5CD276368D36(23);
				unk_0xD07D5CD276368D36(iVar0);
				bVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (unk_0xC80D31E4B587871C(Global_4267143, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (unk_0xC80D31E4B587871C(Global_4267143, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (unk_0xC80D31E4B587871C(Global_4267143, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (unk_0xC80D31E4B587871C(Global_4267143, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					unk_0xD07D5CD276368D36(-99);
					unk_0xD07D5CD276368D36(0);
				}
				else
				{
					unk_0xD07D5CD276368D36(system::floor(fLocal_25));
					unk_0xD07D5CD276368D36(system::floor(fLocal_26));
				}
				unk_0xD07D5CD276368D36(100);
				if (unk_0xC80D31E4B587871C(Global_2324, 22))
				{
					unk_0x1869584A8A72FEDD(true);
				}
				else
				{
					unk_0x1869584A8A72FEDD(true);
				}
				if (unk_0xC80D31E4B587871C(Global_2324, 29))
				{
					unk_0x1869584A8A72FEDD(false);
				}
				else
				{
					unk_0x1869584A8A72FEDD(true);
				}
				unk_0x9499D7329FB840A2(fLocal_28);
				unk_0xD07D5CD276368D36(Global_4267348[iVar0]);
				unk_0x271AA5469AF471B3();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_14434, "DISPLAY_VIEW", 23f, system::to_float(1), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

float func_11(int iParam0)//Position - 0x6AB
{
	fLocal_23 = (Global_4267332[iParam0 /*3*/] - vLocal_20.x);
	fLocal_24 = (system::cos(((3,14159f / 180f) * vLocal_20.x)) * (Global_4267332[iParam0 /*3*/].f_1 - vLocal_20.y));
	fLocal_25 = unk_0xF5596B3A7E5F3C68(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_12(int iParam0)//Position - 0x701
{
	fLocal_27 = system::sqrt(system::vdist2(Global_4267332[iParam0 /*3*/], vLocal_20));
	fLocal_28 = (Global_4267332[iParam0 /*3*/].f_2 - vLocal_20.z);
	return fLocal_27;
}

float func_13(int iParam0)//Position - 0x734
{
	fLocal_26 = system::sqrt((((Global_4267332[iParam0 /*3*/] - vLocal_20.x) * (Global_4267332[iParam0 /*3*/] - vLocal_20.x)) + ((Global_4267332[iParam0 /*3*/].f_1 - vLocal_20.y) * (Global_4267332[iParam0 /*3*/].f_1 - vLocal_20.y))));
	return fLocal_26;
}

void func_14(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x77B
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

float func_15()//Position - 0x7DE
{
	fLocal_23 = (Global_16862 - vLocal_20.x);
	fLocal_24 = (system::cos(((3,14159f / 180f) * vLocal_20.x)) * (Global_16862.f_1 - vLocal_20.y));
	fLocal_25 = unk_0xF5596B3A7E5F3C68(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_16()//Position - 0x82A
{
	fLocal_27 = system::sqrt(system::vdist2(Global_16862, vLocal_20));
	fLocal_28 = (Global_16862.f_2 - vLocal_20.z);
	return fLocal_27;
}

float func_17()//Position - 0x853
{
	fLocal_26 = system::sqrt((((Global_16862 - vLocal_20.x) * (Global_16862 - vLocal_20.x)) + ((Global_16862.f_1 - vLocal_20.y) * (Global_16862.f_1 - vLocal_20.y))));
	return fLocal_26;
}

int func_18()//Position - 0x886
{
	if (Global_70856 == 1)
	{
		return 1;
	}
	return 0;
}

