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
	int iLocal_18[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
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
	fLocal_25 = 0,82f;
	fLocal_26 = 0,42f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	unk_0x252CDD3D0F299441();
	func_28();
	iLocal_24 = 1;
	func_27();
	func_26();
	while (true)
	{
		system::wait(0);
		if (Global_14453.f_1 != 9)
		{
			switch (Global_14453.f_1)
			{
				case 7:
					func_21();
					if (iLocal_24)
					{
						func_18();
					}
					else
					{
						func_12();
					}
					break;
				
				case 8:
					func_21();
					func_12();
					if (func_11(2, Global_14421, 0))
					{
						func_10();
						Global_14431 = 1;
						func_9(Global_14434, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26();
						if (Global_14453.f_1 > 3)
						{
							Global_14453.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
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

int func_1()//Position - 0x113
{
	if (((Global_14453.f_1 == 1 || Global_14453.f_1 == 3) || Global_14453.f_1 == 0) || Global_14397 == 1)
	{
		Global_14440 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x156
{
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	unk_0x96A3D9A8A4C7AFD4();
}

void func_3()//Position - 0x172
{
	if (Global_3128[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3128[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3128[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3128[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3128[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3128[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 25);
	unk_0x872F1C1F8587CCC7(&Global_2324, 11);
}

int func_4(int iParam0)//Position - 0x1EF
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_5(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)//Position - 0x211
{
	return func_6(iParam0, Global_35861);
}

int func_6(int iParam0, int iParam1)//Position - 0x222
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

void func_7()//Position - 0x403
{
	func_28();
	Global_3128[Global_14453 /*2811*/][0 /*281*/].f_124[2] = 1;
}

int func_8()//Position - 0x422
{
	if (Global_2929 == 1 || Global_14453.f_1 < 7)
	{
		Global_14440 = 1;
		return 1;
	}
	return 0;
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x44B
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

void func_10()//Position - 0x4AE
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Menu_Back", &Global_14442, 1);
	}
}

int func_11(int iParam0, int iParam1, int iParam2)//Position - 0x4CF
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

void func_12()//Position - 0x541
{
	if (Global_14431 == 0)
	{
		if (func_11(2, Global_14422, 0))
		{
			func_15();
			Global_14431 = 1;
			func_28();
			unk_0x008F3E3CC076EA0E(Global_14434, "GET_CURRENT_SELECTION");
			uLocal_21 = unk_0x8E8D3D52EE7CEFD3();
			while (!unk_0x042804C27782882D(uLocal_21))
			{
				system::wait(0);
			}
			Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[unk_0x8EA167BD67A3F619(uLocal_21)];
			func_13(Global_14434, "SET_HEADER", &(Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_7[Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
			{
				func_9(Global_14434, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else
			{
				func_9(Global_14434, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x638
{
	unk_0x008F3E3CC076EA0E(uParam0, sParam1);
	func_14(sParam2);
	if (!unk_0xAB019B170BF1309C(sParam3))
	{
		func_14(sParam3);
	}
	if (!unk_0xAB019B170BF1309C(sParam4))
	{
		func_14(sParam4);
	}
	if (!unk_0xAB019B170BF1309C(sParam5))
	{
		func_14(sParam5);
	}
	if (!unk_0xAB019B170BF1309C(sParam6))
	{
		func_14(sParam6);
	}
	unk_0x271AA5469AF471B3();
}

void func_14(char* sParam0)//Position - 0x693
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_15()//Position - 0x6A5
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Menu_Accept", &Global_14442, 1);
		func_16();
	}
}

void func_16()//Position - 0x6CA
{
	if (func_17())
	{
		unk_0x4EF44BE7DE3DC97E(5);
	}
}

int func_17()//Position - 0x6DE
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

void func_18()//Position - 0x725
{
	Global_14431 = 1;
	iLocal_23 = 0;
	iLocal_24 = 0;
	func_19();
}

void func_19()//Position - 0x73B
{
	int iVar0[15];
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_9(Global_14434, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_28();
	iLocal_19 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		iVar2 = 0;
		iVar3 = 9;
		Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_84[iVar3] = 5000;
		while (iVar2 < 9)
		{
			if (Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_124[iVar2] == 1)
			{
				if (iVar0[iVar2] == 0)
				{
					if (Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_84[iVar2] < Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_84[iVar3])
					{
						iVar3 = iVar2;
						func_20(Global_14434, "SET_DATA_SLOT", system::to_float(13), system::to_float(iVar1), system::to_float(Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_104[iVar3]), -1f, -1f, &(Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_7[iVar3 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar2++;
		}
		iLocal_18[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_124[iVar1] == 1)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_9(Global_14434, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_14434, "SET_HEADER", &(Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_7[Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_14441)
	{
		func_20(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_20(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_20(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
}

void func_20(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x942
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
		func_14(sParam7);
	}
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		func_14(sParam8);
	}
	if (!unk_0xAB019B170BF1309C(sParam9))
	{
		func_14(sParam9);
	}
	if (!unk_0xAB019B170BF1309C(sParam10))
	{
		func_14(sParam10);
	}
	if (!unk_0xAB019B170BF1309C(sParam11))
	{
		func_14(sParam11);
	}
	unk_0x271AA5469AF471B3();
}

void func_21()//Position - 0x9F5
{
	if (iLocal_29)
	{
		if (system::timera() > 50)
		{
			iLocal_29 = 0;
		}
	}
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (func_11(2, 181, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			func_24();
		}
		if (func_11(2, 180, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			func_22();
		}
	}
	if (iLocal_29 == 0)
	{
		if (func_11(2, Global_14429, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			func_24();
			iLocal_29 = 1;
			system::settimera(0);
		}
		if (func_11(2, Global_14430, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			func_22();
			iLocal_29 = 1;
			system::settimera(0);
		}
	}
}

void func_22()//Position - 0xAA2
{
	func_9(Global_14434, "SET_INPUT_EVENT", system::to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
	func_23();
}

void func_23()//Position - 0xADD
{
	if (func_17())
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

void func_24()//Position - 0xB00
{
	func_9(Global_14434, "SET_INPUT_EVENT", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
	func_25();
}

void func_25()//Position - 0xB3B
{
	if (func_17())
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

void func_26()//Position - 0xB5E
{
	int iVar0[15];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_19 = 0;
	iVar1 = 0;
	func_28();
	while (iVar1 < 9)
	{
		iVar2 = 0;
		iVar3 = 9;
		Global_3128[Global_14453 /*2811*/][iVar3 /*281*/] = 5000;
		while (iVar2 < 9)
		{
			if (Global_3128[Global_14453 /*2811*/][iVar2 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar2] == 0)
				{
					if (iVar2 == 0)
					{
						if (Global_3128[Global_14453 /*2811*/][iVar2 /*281*/] < Global_3128[Global_14453 /*2811*/][iVar3 /*281*/])
						{
							iVar3 = iVar2;
							func_20(Global_14434, "SET_DATA_SLOT", system::to_float(2), system::to_float(iVar1), -1f, -1f, -1f, &(Global_3128[Global_14453 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar2++;
		}
		iLocal_18[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_3128[Global_14453 /*2811*/][iVar1 /*281*/].f_280 == 1)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_9(Global_14434, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_14434, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_14441)
	{
		func_20(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_20(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_20(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
}

void func_27()//Position - 0xCF9
{
	if (Global_35861 != 15)
	{
		func_28();
		Global_3128[Global_14453 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

void func_28()//Position - 0xD20
{
	if (func_34(14))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_29();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70856)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

var func_29()//Position - 0xDC2
{
	func_30();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_30()//Position - 0xDDB
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_33(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_32(unk_0xFC1458A37D98B502());
			if (func_31(iVar0) && (!func_34(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_31(Global_104555.f_2353.f_539.f_4301))
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

bool func_31(int iParam0)//Position - 0xED8
{
	return iParam0 < 3;
}

int func_32(int iParam0)//Position - 0xEE4
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)//Position - 0xF21
{
	if (func_31(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_34(int iParam0)//Position - 0xF4B
{
	return Global_35861 == iParam0;
}

