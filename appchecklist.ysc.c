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
	int iLocal_20[94] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26[5] = { 0, 0, 0, 0, 0 };
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	bool bLocal_31 = 0;
	struct<6> Local_32[5];
	int iLocal_33[5] = { 0, 0, 0, 0, 0 };
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
	func_33(Global_14434, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_31();
	func_30();
	while (true)
	{
		system::wait(0);
		if (Global_14453.f_1 != 9)
		{
			switch (Global_14453.f_1)
			{
				case 7:
					func_25();
					if (iLocal_25 == 0)
					{
						func_15();
					}
					break;
				
				case 8:
					if (iLocal_25 == 2)
					{
						func_25();
						if (bLocal_31)
						{
							func_10();
						}
					}
					if (iLocal_25 == 1)
					{
						func_25();
					}
					if (func_9(2, Global_14421, 0))
					{
						func_8();
						Global_14431 = 1;
						if (iLocal_25 == 2 || iLocal_25 == 1)
						{
							func_33(Global_14434, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_30();
							if (Global_14453.f_1 > 3)
							{
								Global_14453.f_1 = 7;
							}
						}
						if (iLocal_25 == 3)
						{
							func_33(Global_14434, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_4();
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

int func_1()//Position - 0x16A
{
	if (((Global_14453.f_1 == 1 || Global_14453.f_1 == 3) || Global_14453.f_1 == 0) || Global_14397 == 1)
	{
		Global_14440 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x1AD
{
	unk_0x96A3D9A8A4C7AFD4();
}

int func_3()//Position - 0x1B9
{
	if (Global_2929 == 1 || Global_14453.f_1 < 7)
	{
		Global_14440 = 1;
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x1E2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	bLocal_31 = false;
	func_31();
	iLocal_21 = 0;
	func_33(Global_14434, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	if (Global_14449 == 0)
	{
		while (iVar0 < 5)
		{
			func_7(Global_14434, "SET_DATA_SLOT", system::to_float(18), system::to_float(iLocal_21), system::to_float(0), -1f, -1f, &(Local_32[iVar0 /*6*/]), 0, 0, 0, 0);
			iLocal_26[iLocal_21] = iVar0;
			iLocal_21++;
			iVar0++;
		}
	}
	if (Global_14449 == 1)
	{
		iVar1 = 0;
		iVar2 = 0;
		while (iVar2 < 5)
		{
			iLocal_33[iVar2] = 0;
			iVar2++;
		}
		iVar1 = (5 - 1);
		while (iVar0 < 5)
		{
			if (Local_32[iVar1 /*6*/].f_5 > 0)
			{
				if (iLocal_33[iVar1] == 0)
				{
					func_7(Global_14434, "SET_DATA_SLOT", system::to_float(18), system::to_float(iLocal_21), system::to_float(0), -1f, -1f, &(Local_32[iVar1 /*6*/]), 0, 0, 0, 0);
					iLocal_26[iLocal_21] = iVar1;
					iLocal_21++;
					iLocal_33[iVar1] = 1;
				}
			}
			if (iVar1 > 0)
			{
				iVar1 = (iVar1 - 1);
			}
			iVar0++;
		}
	}
	if (iLocal_21 == 0)
	{
		func_7(Global_14434, "SET_DATA_SLOT", system::to_float(18), system::to_float(0), system::to_float(0), -1f, -1f, "CELL_3092", 0, 0, 0, 0);
	}
	else
	{
		bLocal_31 = true;
	}
	func_33(Global_14434, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_5(Global_14434, "SET_HEADER", "CELL_23", 0, 0, 0, 0);
	if (Global_14441)
	{
		func_7(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_7(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		func_7(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0, 0, 0, 0);
		unk_0x872F1C1F8587CCC7(&Global_2323, 17);
	}
	else
	{
		func_7(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x872F1C1F8587CCC7(&Global_2323, 17);
	}
	iLocal_25 = 2;
}

void func_5(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x400
{
	unk_0x008F3E3CC076EA0E(uParam0, sParam1);
	func_6(sParam2);
	if (!unk_0xAB019B170BF1309C(sParam3))
	{
		func_6(sParam3);
	}
	if (!unk_0xAB019B170BF1309C(sParam4))
	{
		func_6(sParam4);
	}
	if (!unk_0xAB019B170BF1309C(sParam5))
	{
		func_6(sParam5);
	}
	if (!unk_0xAB019B170BF1309C(sParam6))
	{
		func_6(sParam6);
	}
	unk_0x271AA5469AF471B3();
}

void func_6(char* sParam0)//Position - 0x45B
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_7(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x46D
{
	unk_0x008F3E3CC076EA0E(uParam0, sParam1);
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
		func_6(sParam7);
	}
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		func_6(sParam8);
	}
	if (!unk_0xAB019B170BF1309C(sParam9))
	{
		func_6(sParam9);
	}
	if (!unk_0xAB019B170BF1309C(sParam10))
	{
		func_6(sParam10);
	}
	if (!unk_0xAB019B170BF1309C(sParam11))
	{
		func_6(sParam11);
	}
	unk_0x271AA5469AF471B3();
}

void func_8()//Position - 0x520
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Menu_Back", &Global_14442, 1);
	}
}

int func_9(int iParam0, int iParam1, int iParam2)//Position - 0x541
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

void func_10()//Position - 0x5B3
{
	int iVar0;
	
	if (Global_14431 == 0)
	{
		if (func_9(2, Global_14422, 0))
		{
			func_12();
			Global_14431 = 1;
			unk_0x008F3E3CC076EA0E(Global_14434, "GET_CURRENT_SELECTION");
			uLocal_30 = unk_0x8E8D3D52EE7CEFD3();
			while (!unk_0x042804C27782882D(uLocal_30))
			{
				system::wait(0);
			}
			iVar0 = unk_0x8EA167BD67A3F619(uLocal_30);
			iLocal_23 = iLocal_26[iVar0];
			if (Global_14453.f_1 > 3)
			{
				Global_14453.f_1 = 8;
			}
			func_33(Global_14434, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (iLocal_23 == 1)
			{
			}
			func_11();
			unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
			unk_0xD07D5CD276368D36(18);
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(0);
			unk_0x7E099EB35339C80D("CELL_3206");
			unk_0x6223D539BCD39E76(iLocal_27);
			unk_0x9748595E4799A2CF();
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
			unk_0xD07D5CD276368D36(18);
			unk_0xD07D5CD276368D36(1);
			unk_0xD07D5CD276368D36(0);
			unk_0x7E099EB35339C80D("CELL_3101");
			unk_0x6223D539BCD39E76(iLocal_28);
			unk_0x9748595E4799A2CF();
			unk_0x271AA5469AF471B3();
			func_33(Global_14434, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_5(Global_14434, "SET_HEADER", &(Local_32[iLocal_23 /*6*/]), 0, 0, 0, 0);
			func_7(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_7(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
			if (Global_14441)
			{
				func_7(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_7(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			iLocal_25 = 3;
		}
	}
}

void func_11()//Position - 0x743
{
	switch (iLocal_23)
	{
		case 0:
			iLocal_27 = Global_104274;
			iLocal_28 = Global_104291;
			break;
		
		case 1:
			iLocal_27 = (Global_104275 + Global_104276);
			iLocal_28 = (Global_104292 + Global_104293);
			break;
		
		case 2:
			iLocal_27 = Global_104277;
			iLocal_28 = Global_104294;
			break;
		
		case 3:
			iLocal_27 = Global_104278;
			iLocal_28 = Global_104295;
			break;
		
		case 4:
			iLocal_27 = (Global_104279 + Global_104280);
			iLocal_28 = (Global_104296 + Global_104297);
			break;
		
		default:
			iLocal_27 = 0;
			iLocal_28 = 0;
			break;
	}
}

void func_12()//Position - 0x7D8
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Menu_Accept", &Global_14442, 1);
		func_13();
	}
}

void func_13()//Position - 0x7FD
{
	if (func_14())
	{
		unk_0x4EF44BE7DE3DC97E(5);
	}
}

int func_14()//Position - 0x811
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70856)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x666DEE82C2B4C5B5();
	iVar1 = unk_0x8E8C94609BA4BEA9(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4267357 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_15()//Position - 0x858
{
	if (Global_14431 == 0)
	{
		if (func_9(2, Global_14422, 0))
		{
			func_12();
			Global_14431 = 1;
			unk_0x008F3E3CC076EA0E(Global_14434, "GET_CURRENT_SELECTION");
			uLocal_30 = unk_0x8E8D3D52EE7CEFD3();
			while (!unk_0x042804C27782882D(uLocal_30))
			{
				system::wait(0);
			}
			iLocal_29 = unk_0x8EA167BD67A3F619(uLocal_30);
			if (Global_14453.f_1 > 3)
			{
				Global_14453.f_1 = 8;
				if (iLocal_29 == 0)
				{
					iLocal_25 = 1;
					func_16();
				}
				else
				{
					iLocal_25 = 2;
					func_4();
				}
			}
		}
	}
}

void func_16()//Position - 0x8CD
{
	int iVar0;
	
	iLocal_21 = 0;
	func_20();
	iVar0 = 0;
	func_33(Global_14434, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_17(0))
	{
		func_7(Global_14434, "SET_DATA_SLOT", system::to_float(18), system::to_float(iVar0), system::to_float(0), -1f, -1f, "CELL_229", 0, 0, 0, 0);
	}
	else
	{
		while (iVar0 < Global_87979)
		{
			func_7(Global_14434, "SET_DATA_SLOT", system::to_float(18), system::to_float(iVar0), system::to_float(0), -1f, -1f, &(Global_87770[iVar0 /*4*/]), 0, 0, 0, 0);
			iLocal_21++;
			iLocal_20[iVar0] = iVar0;
			iVar0++;
		}
	}
	if (iLocal_20[1] == 99)
	{
	}
	func_33(Global_14434, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_5(Global_14434, "SET_HEADER", "CELL_3301", 0, 0, 0, 0);
	if (func_17(0) || Global_87979 == 0)
	{
		func_7(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
		func_7(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
		if (Global_14441)
		{
			func_7(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
	else if (Global_14441)
	{
		func_7(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_7(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		func_7(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0, 0, 0, 0);
	}
	else
	{
		func_7(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	iLocal_25 = 1;
}

int func_17(int iParam0)//Position - 0xACD
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_18(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_18(int iParam0)//Position - 0xAEF
{
	return func_19(iParam0, Global_35861);
}

int func_19(int iParam0, int iParam1)//Position - 0xB00
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

void func_20()//Position - 0xCE1
{
	int iVar0;
	int iVar1;
	
	Global_87979 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_83730[iVar0 /*5*/] != -1)
		{
			if (Global_87979 < 52)
			{
				iVar1 = Global_71125.f_109[Global_83730[iVar0 /*5*/] /*4*/];
				MemCopy(&(Global_87770[Global_87979 /*4*/]), {func_24(iVar1)}, 4);
				Global_87979++;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		if ((unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar0 /*6*/], 0) && unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar0 /*6*/], 1)) && !unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar0 /*6*/], 3))
		{
			if (Global_87979 < 52)
			{
				MemCopy(&(Global_87770[Global_87979 /*4*/]), {func_22(iVar0)}, 4);
				Global_87979++;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_9055.f_99.f_219[0], iVar0))
		{
			if (Global_87979 < 52)
			{
				StringCopy(&(Global_87770[Global_87979 /*4*/]), func_21(iVar0), 16);
				Global_87979++;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}

char* func_21(int iParam0)//Position - 0xE1C
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_22(int iParam0)//Position - 0xF68
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_23(iParam0) };
	if (unk_0xAB019B170BF1309C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_23(int iParam0)//Position - 0xFA0
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<2> func_24(int iParam0)//Position - 0x13ED
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_83766[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_104555.f_9055.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

void func_25()//Position - 0x1456
{
	if (iLocal_24)
	{
		if (system::timera() > 50)
		{
			iLocal_24 = 0;
		}
	}
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (func_9(2, 181, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
			}
			func_28();
		}
		if (func_9(2, 180, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_21)
			{
				iLocal_22 = 0;
			}
			func_26();
		}
	}
	if (iLocal_24 == 0)
	{
		if (func_9(2, Global_14429, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
			}
			func_28();
			iLocal_24 = 1;
			system::settimera(0);
		}
		if (func_9(2, Global_14430, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_21)
			{
				iLocal_22 = 0;
			}
			func_26();
			iLocal_24 = 1;
			system::settimera(0);
		}
	}
}

void func_26()//Position - 0x1503
{
	func_33(Global_14434, "SET_INPUT_EVENT", system::to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
	func_27();
}

void func_27()//Position - 0x1540
{
	if (func_14())
	{
		if (Global_14620 == 0)
		{
			unk_0x4EF44BE7DE3DC97E(2);
		}
		else
		{
			unk_0x4EF44BE7DE3DC97E(1);
		}
	}
}

void func_28()//Position - 0x1563
{
	func_33(Global_14434, "SET_INPUT_EVENT", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
	func_29();
}

void func_29()//Position - 0x15A0
{
	if (func_14())
	{
		if (Global_14620 == 0)
		{
			unk_0x4EF44BE7DE3DC97E(1);
		}
		else
		{
			unk_0x4EF44BE7DE3DC97E(2);
		}
	}
}

void func_30()//Position - 0x15C3
{
	func_33(Global_14434, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_7(Global_14434, "SET_DATA_SLOT", system::to_float(18), system::to_float(0), system::to_float(0), -1f, -1f, "CELL_3301", 0, 0, 0, 0);
	func_7(Global_14434, "SET_DATA_SLOT", system::to_float(18), system::to_float(1), system::to_float(0), -1f, -1f, "CELL_3302", 0, 0, 0, 0);
	iLocal_21 = 2;
	func_33(Global_14434, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_5(Global_14434, "SET_HEADER", "CELL_23", 0, 0, 0, 0);
	if (Global_14441)
	{
		func_7(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_7(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		func_7(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0, 0, 0, 0);
	}
	else
	{
		func_7(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	iLocal_25 = 0;
}

void func_31()//Position - 0x16FD
{
	func_32(0, "CELL_3001", 1, Global_104291);
	func_32(1, "CELL_3008", 3, Global_104291);
	func_32(2, "CELL_3004", 7, Global_104294);
	func_32(3, "CELL_3005", 9, Global_104295);
	func_32(4, "CELL_3007", 11, Global_104296);
}

void func_32(int iParam0, char* sParam1, int iParam2, var uParam3)//Position - 0x174D
{
	StringCopy(&(Local_32[iParam0 /*6*/]), sParam1, 16);
	Local_32[iParam0 /*6*/].f_4 = iParam2;
	Local_32[iParam0 /*6*/].f_5 = uParam3;
	if (Local_32[0 /*6*/].f_4 == 1)
	{
	}
}

void func_33(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x177E
{
	unk_0x008F3E3CC076EA0E(uParam0, sParam1);
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

