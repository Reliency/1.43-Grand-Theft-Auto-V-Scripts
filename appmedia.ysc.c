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
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<6> Local_27[25];
	int iLocal_28 = 0;
	vector3 vLocal_29 = { 0f, 0f, 0f };
	vector3 vLocal_30 = { 0f, 0f, 0f };
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
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
	func_27();
	func_26();
	while (true)
	{
		system::wait(0);
		if (iLocal_24 == 0)
		{
			if (Global_14453.f_1 != 9)
			{
				switch (Global_14453.f_1)
				{
					case 7:
						if ((iLocal_31 == 0 && iLocal_32 == 0) && Global_16791 == 0)
						{
							func_22();
							func_16();
						}
						break;
					
					case 8:
						if ((func_15(2, Global_14421, 0) && iLocal_31 == 0) && iLocal_32 == 0)
						{
							func_14();
							Global_14431 = 1;
							if (Global_14453.f_1 > 3)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 15))
								{
								}
								func_13();
							}
						}
						break;
					
					default:
						break;
				}
				if (func_12())
				{
					func_11();
				}
				if (iLocal_31)
				{
					func_9();
				}
				if (iLocal_32)
				{
					func_8();
				}
			}
			else
			{
				Global_14455 = 6;
				func_11();
			}
		}
		else
		{
			func_2();
		}
		if (func_1())
		{
			func_11();
		}
	}
}

int func_1()//Position - 0x117
{
	if (((Global_14453.f_1 == 1 || Global_14453.f_1 == 3) || Global_14453.f_1 == 0) || Global_14397 == 1)
	{
		Global_14440 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x15A
{
	iLocal_25 = unk_0x15A3997A02E7BA70(0);
	switch (iLocal_25)
	{
		case 0:
			iLocal_24 = 0;
			func_3();
			break;
		
		case 1:
			break;
		
		case 2:
			Global_14453.f_1 = 3;
			func_11();
			break;
	}
}

void func_3()//Position - 0x19C
{
	int iVar0;
	
	func_7(Global_14434, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_21 = unk_0x29983D99ECDDB3FA();
	iLocal_22 = 0;
	iVar0 = 0;
	while (iLocal_22 < iLocal_21)
	{
		if (unk_0xE5981F49E3BF8074(iLocal_22))
		{
			func_6(Global_14434, "SET_DATA_SLOT", system::to_float(18), system::to_float(iVar0), system::to_float(0), -1f, -1f, &(Local_27[iLocal_22 /*6*/]), 0, 0, 0, 0);
			iLocal_26[iVar0] = iLocal_22;
			iVar0++;
		}
		iLocal_22++;
	}
	func_7(Global_14434, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_4(Global_14434, "SET_HEADER", "CELL_MSMENU_1", 0, 0, 0, 0);
	if (Global_14441)
	{
		func_6(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_6(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
}

void func_4(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x2CE
{
	unk_0x008F3E3CC076EA0E(iParam0, sParam1);
	func_5(sParam2);
	if (!unk_0xAB019B170BF1309C(sParam3))
	{
		func_5(sParam3);
	}
	if (!unk_0xAB019B170BF1309C(sParam4))
	{
		func_5(sParam4);
	}
	if (!unk_0xAB019B170BF1309C(sParam5))
	{
		func_5(sParam5);
	}
	if (!unk_0xAB019B170BF1309C(sParam6))
	{
		func_5(sParam6);
	}
	unk_0x271AA5469AF471B3();
}

void func_5(char* sParam0)//Position - 0x329
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_6(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x33B
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
		func_5(sParam7);
	}
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		func_5(sParam8);
	}
	if (!unk_0xAB019B170BF1309C(sParam9))
	{
		func_5(sParam9);
	}
	if (!unk_0xAB019B170BF1309C(sParam10))
	{
		func_5(sParam10);
	}
	if (!unk_0xAB019B170BF1309C(sParam11))
	{
		func_5(sParam11);
	}
	unk_0x271AA5469AF471B3();
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x3EE
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

void func_8()//Position - 0x451
{
	if (iLocal_31 == 0 && iLocal_32 == 1)
	{
		if (iLocal_36)
		{
			vLocal_30.x = (vLocal_30.x + 1f);
		}
		if (vLocal_30.x > vLocal_29.x || vLocal_30.x == vLocal_29.x)
		{
			vLocal_30.x = vLocal_29.x;
			iLocal_36 = 0;
		}
		if (iLocal_37)
		{
			vLocal_30.y = (vLocal_30.y - 2f);
		}
		if (vLocal_30.y < vLocal_29.y || vLocal_30.y == vLocal_29.y)
		{
			vLocal_30.y = vLocal_29.y;
			iLocal_37 = 0;
		}
		if (iLocal_38)
		{
			vLocal_30.z = (vLocal_30.z - 7f);
		}
		if (vLocal_30.z < vLocal_29.z || vLocal_30.z == vLocal_29.z)
		{
			vLocal_30.z = vLocal_29.z;
			iLocal_38 = 0;
		}
		if ((iLocal_36 == 0 && iLocal_37 == 0) && iLocal_38 == 0)
		{
			iLocal_32 = 0;
			if (Global_14453.f_1 > 3)
			{
				Global_14453.f_1 = 7;
				unk_0x3E80C2F7BC665259(1);
				Global_16793 = 1;
				func_26();
			}
		}
		unk_0x59F9FBA80E3B1114(vLocal_30, 0);
	}
}

void func_9()//Position - 0x539
{
	if ((iLocal_31 == 1 && iLocal_32 == 0) && Global_16791 == 6)
	{
		if (iLocal_33)
		{
			vLocal_30.x = (vLocal_30.x - 1f);
		}
		if (vLocal_30.x < vLocal_29.x || vLocal_30.x == vLocal_29.x)
		{
			vLocal_30.x = vLocal_29.x;
			iLocal_33 = 0;
		}
		if (iLocal_34)
		{
			vLocal_30.y = (vLocal_30.y - 0,5f);
		}
		if (vLocal_30.y < vLocal_29.y || vLocal_30.y == vLocal_29.y)
		{
			vLocal_30.y = vLocal_29.y;
			iLocal_34 = 0;
		}
		if (iLocal_35)
		{
			vLocal_30.z = (vLocal_30.z + 7f);
		}
		if (vLocal_30.z > vLocal_29.z || vLocal_30.z == vLocal_29.z)
		{
			vLocal_30.z = vLocal_29.z;
			iLocal_35 = 0;
		}
		if ((iLocal_33 == 0 && iLocal_34 == 0) && iLocal_35 == 0)
		{
			iLocal_31 = 0;
			func_10("CELL_MSHELP_2");
		}
		unk_0x59F9FBA80E3B1114(vLocal_30, 0);
	}
	if (unk_0xC80D31E4B587871C(Global_2324, 15))
	{
		iLocal_31 = 0;
		iLocal_32 = 0;
		func_7(Global_14434, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_6(Global_14434, "SET_DATA_SLOT", system::to_float(18), system::to_float(0), system::to_float(0), -1f, -1f, "CELL_MSMENU_3", 0, 0, 0, 0);
		if (Global_14441)
		{
			func_6(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
			func_6(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_6(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_6(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_6(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
		func_7(Global_14434, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_4(Global_14434, "SET_HEADER", &(Local_27[iLocal_23 /*6*/]), 0, 0, 0, 0);
	}
}

void func_10(char* sParam0)//Position - 0x722
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 1, 1, -1);
}

void func_11()//Position - 0x738
{
	Global_16793 = 1;
	unk_0x3E80C2F7BC665259(1);
	unk_0x96A3D9A8A4C7AFD4();
}

int func_12()//Position - 0x74D
{
	if (Global_2929 == 1 || Global_14453.f_1 < 7)
	{
		Global_14440 = 1;
		return 1;
	}
	return 0;
}

void func_13()//Position - 0x776
{
	if (iLocal_31 == 0)
	{
		unk_0x61E6BFC0C93FDD65(&vLocal_30, 0);
		vLocal_29 = { Global_14413 };
		iLocal_32 = 1;
		iLocal_36 = 1;
		iLocal_37 = 1;
		iLocal_38 = 1;
	}
}

void func_14()//Position - 0x7A0
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Menu_Back", &Global_14442, 1);
	}
}

int func_15(int iParam0, int iParam1, int iParam2)//Position - 0x7C1
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

void func_16()//Position - 0x833
{
	if (iLocal_28)
	{
		if (system::timera() > 50)
		{
			iLocal_28 = 0;
		}
	}
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (func_15(2, 181, 0))
		{
			func_20();
		}
		if (func_15(2, 180, 0))
		{
			func_17();
		}
	}
	if (iLocal_28 == 0)
	{
		if (func_15(2, Global_14429, 0))
		{
			func_20();
			iLocal_28 = 1;
			system::settimera(0);
		}
		if (func_15(2, Global_14430, 0))
		{
			func_17();
			iLocal_28 = 1;
			system::settimera(0);
		}
	}
}

void func_17()//Position - 0x8A8
{
	func_7(Global_14434, "SET_INPUT_EVENT", system::to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
	func_18();
}

void func_18()//Position - 0x8E3
{
	if (func_19())
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

int func_19()//Position - 0x906
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

void func_20()//Position - 0x94D
{
	func_7(Global_14434, "SET_INPUT_EVENT", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
	func_21();
}

void func_21()//Position - 0x988
{
	if (func_19())
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

void func_22()//Position - 0x9AB
{
	int iVar0;
	
	if (Global_14431 == 0)
	{
		if (func_15(2, Global_14422, 0))
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2324, 15);
			func_24();
			Global_14431 = 1;
			unk_0x008F3E3CC076EA0E(Global_14434, "GET_CURRENT_SELECTION");
			uLocal_20 = unk_0x8E8D3D52EE7CEFD3();
			while (!unk_0x042804C27782882D(uLocal_20))
			{
				system::wait(0);
			}
			iVar0 = unk_0x8EA167BD67A3F619(uLocal_20);
			if (iVar0 > -1)
			{
				iLocal_23 = iLocal_26[iVar0];
				if (Global_14453.f_1 > 3)
				{
					if (Global_16791 == 0)
					{
						func_7(Global_14434, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_6(Global_14434, "SET_DATA_SLOT", system::to_float(18), system::to_float(0), system::to_float(0), -1f, -1f, "CELL_MSMENU_2", 0, 0, 0, 0);
						func_7(Global_14434, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_4(Global_14434, "SET_HEADER", &(Local_27[iLocal_23 /*6*/]), 0, 0, 0, 0);
						if (Global_14441)
						{
							func_6(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
							func_6(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
						}
						else
						{
							func_6(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
							func_6(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_6(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
						Global_16795 = iLocal_23;
						Global_16791 = 12;
						Global_14453.f_1 = 8;
						func_23();
					}
				}
			}
		}
	}
}

void func_23()//Position - 0xB2B
{
	if (iLocal_32 == 0)
	{
		unk_0x61E6BFC0C93FDD65(&vLocal_30, 0);
		vLocal_29 = { -90,3f, -0,8f, 90f };
		iLocal_31 = 1;
		iLocal_33 = 1;
		iLocal_34 = 1;
		iLocal_35 = 1;
	}
}

void func_24()//Position - 0xB5F
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Menu_Accept", &Global_14442, 1);
		func_25();
	}
}

void func_25()//Position - 0xB84
{
	if (func_19())
	{
		unk_0x4EF44BE7DE3DC97E(5);
	}
}

void func_26()//Position - 0xB98
{
	if ((unk_0x04E8D1E1170F25E1() || unk_0x177281F5FA205A38()) || unk_0xB9D80B12FE4456A5())
	{
		unk_0x1F1F32B1F6EBFC17();
		if (unk_0x5584B9099CE4A9B0(0))
		{
			iLocal_24 = 1;
		}
		else
		{
			Global_16793 = 1;
			Global_14453.f_1 = 3;
			func_11();
		}
	}
	else
	{
		func_3();
	}
}

void func_27()//Position - 0xBE2
{
	StringCopy(&(Local_27[0 /*6*/]), "CELL_MSSLOT_1", 24);
	StringCopy(&(Local_27[1 /*6*/]), "CELL_MSSLOT_2", 24);
	StringCopy(&(Local_27[2 /*6*/]), "CELL_MSSLOT_3", 24);
	StringCopy(&(Local_27[3 /*6*/]), "CELL_MSSLOT_4", 24);
	StringCopy(&(Local_27[4 /*6*/]), "CELL_MSSLOT_5", 24);
	StringCopy(&(Local_27[5 /*6*/]), "CELL_MSSLOT_6", 24);
	StringCopy(&(Local_27[6 /*6*/]), "CELL_MSSLOT_7", 24);
	StringCopy(&(Local_27[7 /*6*/]), "CELL_MSSLOT_8", 24);
	StringCopy(&(Local_27[8 /*6*/]), "CELL_MSSLOT_9", 24);
	StringCopy(&(Local_27[9 /*6*/]), "CELL_MSSLOT_10", 24);
	StringCopy(&(Local_27[10 /*6*/]), "CELL_MSSLOT_11", 24);
	StringCopy(&(Local_27[11 /*6*/]), "CELL_MSSLOT_12", 24);
	StringCopy(&(Local_27[12 /*6*/]), "CELL_MSSLOT_13", 24);
	StringCopy(&(Local_27[13 /*6*/]), "CELL_MSSLOT_14", 24);
	StringCopy(&(Local_27[14 /*6*/]), "CELL_MSSLOT_15", 24);
	StringCopy(&(Local_27[15 /*6*/]), "CELL_MSSLOT_16", 24);
	StringCopy(&(Local_27[16 /*6*/]), "CELL_MSSLOT_17", 24);
	StringCopy(&(Local_27[17 /*6*/]), "CELL_MSSLOT_18", 24);
	StringCopy(&(Local_27[18 /*6*/]), "CELL_MSSLOT_19", 24);
	StringCopy(&(Local_27[19 /*6*/]), "CELL_MSSLOT_20", 24);
}

