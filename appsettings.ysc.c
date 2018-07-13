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
	int iLocal_18[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	int iLocal_42 = 0;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	fLocal_38 = 0,82f;
	fLocal_39 = 0,42f;
	fLocal_40 = 0f;
	fLocal_41 = 0f;
	unk_0x252CDD3D0F299441();
	func_45(Global_14434, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_44();
	if (Global_14398 == 0)
	{
		fLocal_43 = 0,75f;
		fLocal_44 = 0,8f;
	}
	else
	{
		fLocal_43 = 0,65f;
		fLocal_44 = 0,77f;
	}
	Global_3128[Global_14453 /*2811*/][2 /*281*/].f_259 = Global_104555.f_14021[Global_14453 /*20*/].f_6;
	Global_3128[Global_14453 /*2811*/][4 /*281*/].f_259 = Global_104555.f_14021[Global_14453 /*20*/].f_9;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_70856)
		{
			Global_3128[Global_14453 /*2811*/][1 /*281*/].f_259 = func_43(1195, -1, 0);
			Global_3128[Global_14453 /*2811*/][2 /*281*/].f_259 = func_43(2025, -1, 0);
			Global_3128[Global_14453 /*2811*/][4 /*281*/].f_259 = func_43(2024, -1, 0);
		}
		else if (unk_0x74C475EB8E73D398(&(Global_104555.f_14021[Global_14453 /*20*/].f_11), &(Global_3128[Global_14453 /*2811*/][1 /*281*/].f_144[iVar0 /*6*/])))
		{
			Global_3128[Global_14453 /*2811*/][1 /*281*/].f_259 = iVar0;
		}
		iVar0++;
	}
	if (Global_70856)
	{
		Global_104555.f_14021[3 /*20*/].f_10 = func_43(1194, -1, 0);
	}
	Global_3128[Global_14453 /*2811*/][3 /*281*/].f_259 = Global_104555.f_14021[Global_14453 /*20*/].f_10;
	func_42();
	if (Global_70856)
	{
		Global_3128[3 /*2811*/][0 /*281*/] = 190;
		Global_3128[3 /*2811*/][0 /*281*/].f_1 = 190;
		StringCopy(&(Global_3128[3 /*2811*/][0 /*281*/].f_2), "CELL_701", 16);
		Global_3128[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_3128[3 /*2811*/][0 /*281*/].f_280 = 1;
		StringCopy(&(Global_3128[3 /*2811*/][0 /*281*/].f_7[0 /*4*/]), "CELL_704", 16);
		Global_3128[3 /*2811*/][0 /*281*/].f_124[0] = 1;
		Global_3128[3 /*2811*/][0 /*281*/].f_84[0] = 170;
		Global_3128[3 /*2811*/][0 /*281*/].f_104[0] = 19;
		StringCopy(&(Global_3128[3 /*2811*/][0 /*281*/].f_7[1 /*4*/]), "CELL_703", 16);
		Global_3128[3 /*2811*/][0 /*281*/].f_124[1] = 1;
		Global_3128[3 /*2811*/][0 /*281*/].f_84[1] = 175;
		Global_3128[3 /*2811*/][0 /*281*/].f_104[1] = 19;
		StringCopy(&(Global_3128[3 /*2811*/][0 /*281*/].f_7[2 /*4*/]), "CELL_801", 16);
		Global_3128[3 /*2811*/][0 /*281*/].f_124[2] = 0;
		Global_3128[3 /*2811*/][0 /*281*/].f_84[2] = 190;
		Global_3128[3 /*2811*/][0 /*281*/].f_104[2] = 26;
		if (func_43(2087, -1, 0) == 0)
		{
			Global_3128[3 /*2811*/][0 /*281*/].f_259 = 0;
		}
		else
		{
			Global_3128[3 /*2811*/][0 /*281*/].f_259 = 1;
		}
	}
	func_33();
	while (true)
	{
		system::wait(0);
		if (iLocal_30)
		{
			if (system::timerb() > 3500)
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					unk_0x3365671C6E2D3EFD(unk_0xFC1458A37D98B502());
				}
				iLocal_30 = 0;
			}
		}
		if (Global_14453.f_1 != 9)
		{
			switch (Global_14453.f_1)
			{
				case 7:
					func_28();
					func_26();
					break;
				
				case 8:
					if (bLocal_36 || iLocal_37)
					{
						if (bLocal_36)
						{
							bLocal_36 = false;
							system::settimerb(0);
							Global_104555.f_14021.f_82 = 1;
							iLocal_37 = 1;
						}
						else if (system::timerb() > 7500)
						{
							iLocal_37 = 0;
							unk_0x3E80C2F7BC665259(1);
						}
					}
					else
					{
						func_28();
						func_12();
						if (iLocal_33)
						{
							func_11();
						}
						if (func_10(2, Global_14421, 0))
						{
							if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
							{
								unk_0x3365671C6E2D3EFD(unk_0xFC1458A37D98B502());
							}
							iLocal_33 = 0;
							func_9();
							Global_14431 = 1;
							func_45(Global_14434, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_33();
							if (Global_14453.f_1 > 3)
							{
								Global_14453.f_1 = 7;
							}
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

int func_1()//Position - 0x44E
{
	if (((Global_14453.f_1 == 1 || Global_14453.f_1 == 3) || Global_14453.f_1 == 0) || Global_14397 == 1)
	{
		Global_14440 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x491
{
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x3365671C6E2D3EFD(unk_0xFC1458A37D98B502());
	}
	if (bLocal_36)
	{
		unk_0x3E80C2F7BC665259(1);
	}
	if (Global_104555.f_14021.f_83 == 0 || Global_104555.f_14021.f_82 == 0)
	{
		func_3();
	}
	unk_0x6ACDC20166AA3FAC(0);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_3()//Position - 0x4F4
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

int func_4(int iParam0)//Position - 0x571
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

bool func_5(int iParam0)//Position - 0x593
{
	return func_6(iParam0, Global_35861);
}

int func_6(int iParam0, int iParam1)//Position - 0x5A4
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

void func_7()//Position - 0x785
{
	func_44();
	Global_3128[Global_14453 /*2811*/][0 /*281*/].f_124[2] = 1;
}

int func_8()//Position - 0x7A4
{
	if (Global_2929 == 1 || Global_14453.f_1 < 7)
	{
		Global_14440 = 1;
		return 1;
	}
	return 0;
}

void func_9()//Position - 0x7CD
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Menu_Back", &Global_14442, 1);
	}
}

int func_10(int iParam0, int iParam1, int iParam2)//Position - 0x7EE
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

void func_11()//Position - 0x860
{
	int iVar0;
	
	iLocal_34 = unk_0x53C562FD2B9E3AB0();
	iVar0 = (iLocal_34 - iLocal_35);
	if ((iVar0 % 600) <= 300 && iVar0 < 3000)
	{
		unk_0xC4803EF57E953FF3(0, 100, 100);
	}
}

void func_12()//Position - 0x895
{
	int iVar0;
	var uVar1;
	struct<13> Var2;
	int iVar3;
	
	if (iLocal_23 == 1)
	{
		if (iLocal_32)
		{
			iLocal_34 = unk_0x53C562FD2B9E3AB0();
			if ((iLocal_34 - iLocal_35) > 1000)
			{
				iLocal_31 = 1;
				iLocal_32 = 0;
			}
		}
		if (unk_0x4C4813CAAD70E814(2))
		{
			if (unk_0xE8C126B7ADBB9D63(2, 180))
			{
				iLocal_45 = 1;
				iLocal_46 = 0;
			}
			if (unk_0xE8C126B7ADBB9D63(2, 181))
			{
				iLocal_45 = 0;
				iLocal_46 = 1;
			}
		}
		if ((((func_10(2, Global_14429, 0) || func_10(2, Global_14430, 0)) || iLocal_31) || iLocal_45 == 1) || iLocal_46 == 1)
		{
			iLocal_45 = 0;
			iLocal_46 = 0;
			iLocal_31 = 0;
			iLocal_32 = 0;
			system::settimerb(0);
			iLocal_30 = 1;
			unk_0x008F3E3CC076EA0E(Global_14434, "GET_CURRENT_SELECTION");
			uLocal_21 = unk_0x8E8D3D52EE7CEFD3();
			while (!unk_0x042804C27782882D(uLocal_21))
			{
				system::wait(0);
			}
			iLocal_27 = iLocal_18[unk_0x8EA167BD67A3F619(uLocal_21)];
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				unk_0x3365671C6E2D3EFD(unk_0xFC1458A37D98B502());
				system::wait(100);
				if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					if (!unk_0x17D9882FFC415C7C(unk_0xFC1458A37D98B502()))
					{
						if (unk_0x74C475EB8E73D398(&(Global_3128[Global_14453 /*2811*/][1 /*281*/].f_144[iLocal_27 /*6*/]), "Silent Ringtone Dummy"))
						{
						}
						else
						{
							unk_0x18DA1ABF249DBA6F(&(Global_3128[Global_14453 /*2811*/][1 /*281*/].f_144[iLocal_27 /*6*/]), unk_0xFC1458A37D98B502(), 1);
						}
					}
				}
			}
		}
	}
	if (Global_14431 == 0)
	{
		if (func_10(2, Global_14422, 0))
		{
			func_23();
			Global_14431 = 1;
			unk_0x008F3E3CC076EA0E(Global_14434, "GET_CURRENT_SELECTION");
			uLocal_21 = unk_0x8E8D3D52EE7CEFD3();
			while (!unk_0x042804C27782882D(uLocal_21))
			{
				system::wait(0);
			}
			iLocal_26 = unk_0x8EA167BD67A3F619(uLocal_21);
			if (iLocal_26 < 0)
			{
				iLocal_26 = 0;
			}
			Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
			if (iLocal_23 == 2)
			{
				iVar0 = Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_259;
				Global_104555.f_14021[Global_14453 /*20*/].f_6 = Global_3128[Global_14453 /*2811*/][2 /*281*/].f_260[iVar0];
				func_45(Global_14434, "SET_THEME", system::to_float(Global_104555.f_14021[Global_14453 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_70856)
				{
					Global_4267355 = Global_3128[3 /*2811*/][2 /*281*/].f_259;
					func_20(2025, Global_3128[3 /*2811*/][2 /*281*/].f_259, -1, 1, 0);
					func_45(Global_14434, "SET_THEME", system::to_float(Global_4267355), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_45(Global_14434, "SET_THEME", system::to_float(Global_104555.f_14021[Global_14453 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_19();
				func_18(Global_14434, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_25), system::to_float(23), -1f, -1f, &(Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
				func_18(Global_14434, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_26), system::to_float(48), -1f, -1f, &(Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iLocal_26;
				func_45(Global_14434, "DISPLAY_VIEW", 22f, system::to_float(iLocal_26), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_23 == 4)
			{
				Global_104555.f_14021[Global_14453 /*20*/].f_9 = Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_259;
				if (Global_70856)
				{
					Global_4267356 = Global_3128[3 /*2811*/][4 /*281*/].f_259;
					func_20(2024, Global_3128[3 /*2811*/][4 /*281*/].f_259, -1, 1, 0);
					if (Global_4267356 == 0)
					{
						Var2 = { func_17(unk_0x9EB17624F44A8DA4()) };
						iVar3 = 0;
						if (unk_0xCD032B200A8FAC1A(0) == 0)
						{
						}
						if ((unk_0xA84F967541249268(&Var2) && unk_0xCD032B200A8FAC1A(0)) && Global_4267359 == 0)
						{
							system::settimera(0);
							while (!unk_0xE009D69C861D7648(&Var2, &uVar1) && system::timera() < 3000)
							{
								system::wait(0);
								if (system::timera() > 2999)
								{
									iVar3 = 1;
								}
							}
							if (iVar3 == 0)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_BACKGROUND_CREW_IMAGE");
								unk_0x7E099EB35339C80D("CELL_2000");
								unk_0x854FACC4E5F40C82(&uVar1);
								unk_0x9748595E4799A2CF();
								unk_0x271AA5469AF471B3();
							}
						}
						else
						{
							func_45(Global_14434, "SET_BACKGROUND_IMAGE", system::to_float(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
					else
					{
						func_45(Global_14434, "SET_BACKGROUND_IMAGE", system::to_float(Global_4267356), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					func_45(Global_14434, "SET_BACKGROUND_IMAGE", system::to_float(Global_104555.f_14021[Global_14453 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_18(Global_14434, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_25), system::to_float(23), -1f, -1f, &(Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
				func_18(Global_14434, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_26), system::to_float(48), -1f, -1f, &(Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iLocal_26;
				func_45(Global_14434, "DISPLAY_VIEW", 22f, system::to_float(iLocal_26), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_23 == 1)
			{
				Global_104555.f_14021[Global_14453 /*20*/].f_11 = { Global_3128[Global_14453 /*2811*/][1 /*281*/].f_144[Global_3128[Global_14453 /*2811*/][1 /*281*/].f_259 /*6*/] };
				if (Global_70856)
				{
					func_20(1195, Global_3128[3 /*2811*/][1 /*281*/].f_259, -1, 1, 0);
				}
				func_18(Global_14434, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_25), system::to_float(18), -1f, -1f, &(Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
				func_18(Global_14434, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_26), system::to_float(48), -1f, -1f, &(Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iLocal_26;
				func_45(Global_14434, "DISPLAY_VIEW", 22f, system::to_float(iLocal_26), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_23 == 3)
			{
				Global_104555.f_14021[Global_14453 /*20*/].f_10 = Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_259;
				if (Global_70856)
				{
					func_20(1194, Global_104555.f_14021[3 /*20*/].f_10, -1, 1, 0);
				}
				if (Global_104555.f_14021[Global_14453 /*20*/].f_10 == 1)
				{
					iLocal_33 = 1;
					iLocal_35 = unk_0x53C562FD2B9E3AB0();
				}
				else
				{
					iLocal_33 = 0;
				}
			}
			if (iLocal_23 == 0)
			{
				if (Global_70856 == 1)
				{
					Global_3128[3 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
					func_18(Global_14434, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_25), system::to_float(19), -1f, -1f, &(Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
					func_18(Global_14434, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_26), system::to_float(48), -1f, -1f, &(Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
					iLocal_25 = iLocal_26;
					func_45(Global_14434, "DISPLAY_VIEW", 22f, system::to_float(iLocal_26), -1082130432, -1082130432, -1082130432);
					func_20(2087, Global_3128[3 /*2811*/][iLocal_23 /*281*/].f_259, -1, 1, 0);
				}
				else
				{
					Global_3128[0 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
					Global_3128[1 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
					Global_3128[2 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
					if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
					{
						if (Global_35861 == 15)
						{
							if (Global_104555.f_14021.f_82 == 0)
							{
								unk_0x3E80C2F7BC665259(1);
								func_16("CELL_7050");
								if (fLocal_43 == fLocal_44)
								{
								}
								bLocal_36 = true;
							}
							else
							{
								func_45(Global_14434, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								unk_0x872F1C1F8587CCC7(&Global_2323, 25);
								unk_0x872F1C1F8587CCC7(&Global_2324, 11);
								if (Global_104555.f_14021.f_83 == 0)
								{
									unk_0x3E80C2F7BC665259(1);
									func_15("CELL_7051", -1);
									Global_104555.f_14021.f_83 = 1;
								}
							}
						}
					}
					else
					{
						func_45(Global_14434, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						unk_0x0EE72DB1CD8A3B86(&Global_2323, 25);
						unk_0x872F1C1F8587CCC7(&Global_2324, 11);
					}
				}
			}
			func_13(Global_14434, "SET_HEADER", &(Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_7[Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x1152
{
	unk_0x008F3E3CC076EA0E(iParam0, sParam1);
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

void func_14(char* sParam0)//Position - 0x11AD
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_15(char* sParam0, int iParam1)//Position - 0x11BF
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

void func_16(char* sParam0)//Position - 0x11D6
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 1, 1, -1);
}

struct<13> func_17(int iParam0)//Position - 0x11EC
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

void func_18(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1203
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

void func_19()//Position - 0x12B6
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (Global_14453 == 0)
		{
			switch (Global_104555.f_14021[Global_14453 /*20*/].f_6)
			{
				case 1:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 0);
					break;
				
				case 2:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 1);
					break;
				
				case 3:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 2);
					break;
				
				case 4:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 3);
					break;
				
				case 5:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 4);
					break;
				
				case 6:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 5);
					break;
				
				case 7:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14453 == 1)
		{
			switch (Global_104555.f_14021[Global_14453 /*20*/].f_6)
			{
				case 1:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 6);
					break;
				
				case 2:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 0);
					break;
				
				case 3:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 1);
					break;
				
				case 4:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 2);
					break;
				
				case 5:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 3);
					break;
				
				case 6:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 4);
					break;
				
				case 7:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14453 == 2)
		{
			switch (Global_104555.f_14021[Global_14453 /*20*/].f_6)
			{
				case 1:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 5);
					break;
				
				case 2:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 6);
					break;
				
				case 3:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 1);
					break;
				
				case 4:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 0);
					break;
				
				case 5:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 2);
					break;
				
				case 6:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 3);
					break;
				
				case 7:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14453 == 3)
		{
			switch (Global_4267355)
			{
				case 1:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 0);
					break;
				
				case 2:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 1);
					break;
				
				case 3:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 2);
					break;
				
				case 4:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 3);
					break;
				
				case 5:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 4);
					break;
				
				case 6:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 5);
					break;
				
				case 7:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_20(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x152D
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_21(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_21(var uParam0)//Position - 0x155D
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_22();
		if (iVar1 > -1)
		{
			Global_2522773 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522773 = 1;
		}
	}
	return iVar0;
}

var func_22()//Position - 0x1591
{
	return Global_1312736;
}

void func_23()//Position - 0x159D
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Menu_Accept", &Global_14442, 1);
		func_24();
	}
}

void func_24()//Position - 0x15C2
{
	if (func_25())
	{
		unk_0x4EF44BE7DE3DC97E(5);
	}
}

int func_25()//Position - 0x15D6
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

void func_26()//Position - 0x161D
{
	if (Global_14431 == 0)
	{
		if (func_10(2, Global_14422, 0))
		{
			func_23();
			Global_14431 = 1;
			unk_0x008F3E3CC076EA0E(Global_14434, "GET_CURRENT_SELECTION");
			uLocal_21 = unk_0x8E8D3D52EE7CEFD3();
			while (!unk_0x042804C27782882D(uLocal_21))
			{
				system::wait(0);
			}
			iLocal_24 = unk_0x8EA167BD67A3F619(uLocal_21);
			iLocal_23 = iLocal_18[iLocal_24];
			switch (iLocal_23)
			{
				case 0:
					if (Global_70856 == 0)
					{
						if (Global_35861 == 15)
						{
							if (Global_104555.f_14021.f_82 == 0)
							{
								unk_0x3E80C2F7BC665259(1);
								func_16("CELL_7050");
								if (fLocal_43 == fLocal_44)
								{
								}
								bLocal_36 = true;
							}
						}
					}
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 3:
					break;
			}
			if (Global_14453.f_1 > 3)
			{
				Global_14453.f_1 = 8;
			}
			func_27();
			iLocal_32 = 1;
			iLocal_35 = unk_0x53C562FD2B9E3AB0();
		}
	}
}

void func_27()//Position - 0x16EF
{
	int iVar0[19];
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	func_45(Global_14434, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_19 = 0;
	iVar1 = 0;
	if (Global_70856)
	{
		StringCopy(&(Global_3128[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_CREWEMB", 16);
		Var2 = { func_17(unk_0x9EB17624F44A8DA4()) };
		if (!unk_0xA84F967541249268(&Var2))
		{
			StringCopy(&(Global_3128[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_840", 16);
		}
	}
	while (iVar1 < 19)
	{
		iVar3 = 0;
		iVar4 = 18;
		Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_84[iVar4] = 5000;
		while (iVar3 < 19)
		{
			if (Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_124[iVar3] == 1)
			{
				if (iVar0[iVar3] == 0)
				{
					if (Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_84[iVar3] < Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_84[iVar4])
					{
						iVar4 = iVar3;
						func_18(Global_14434, "SET_DATA_SLOT", system::to_float(22), system::to_float(iVar1), system::to_float(Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_104[iVar4]), -1f, -1f, &(Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar3++;
		}
		iLocal_18[iVar1] = iVar4;
		iVar0[iVar4] = 1;
		if (unk_0x74C475EB8E73D398(&(Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_7[Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_259 /*4*/]), &(Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/])))
		{
			iLocal_28 = iVar1;
			if (iLocal_28 < 0)
			{
				iLocal_28 = 0;
			}
			if ((iLocal_23 == 1 || iLocal_23 == 4) || iLocal_23 == 2)
			{
				func_18(Global_14434, "SET_DATA_SLOT", system::to_float(22), system::to_float(iVar1), system::to_float(48), -1f, -1f, &(Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iVar1;
			}
			if (iLocal_23 == 0 && Global_70856 == 1)
			{
				func_18(Global_14434, "SET_DATA_SLOT", system::to_float(22), system::to_float(iVar1), system::to_float(48), -1f, -1f, &(Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iVar1;
			}
		}
		if (Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_124[iVar1] == 1)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_45(Global_14434, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_14434, "SET_HEADER", &(Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_7[Global_3128[Global_14453 /*2811*/][iLocal_23 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_14441)
	{
		func_18(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
}

void func_28()//Position - 0x1A34
{
	if (iLocal_42)
	{
		if (system::timera() > 50)
		{
			iLocal_42 = 0;
		}
	}
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (func_10(2, 181, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			func_31();
		}
		if (func_10(2, 180, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			func_29();
		}
	}
	if (iLocal_42 == 0)
	{
		if (func_10(2, Global_14429, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			func_31();
			iLocal_42 = 1;
			system::settimera(0);
		}
		if (func_10(2, Global_14430, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			func_29();
			iLocal_42 = 1;
			system::settimera(0);
		}
	}
}

void func_29()//Position - 0x1AE1
{
	func_45(Global_14434, "SET_INPUT_EVENT", system::to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
	func_30();
}

void func_30()//Position - 0x1B1E
{
	if (func_25())
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

void func_31()//Position - 0x1B41
{
	func_45(Global_14434, "SET_INPUT_EVENT", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
	func_32();
}

void func_32()//Position - 0x1B7E
{
	if (func_25())
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

void func_33()//Position - 0x1BA1
{
	int iVar0[20];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_19 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		iVar2 = 0;
		iVar3 = 9;
		Global_3128[Global_14453 /*2811*/][iVar3 /*281*/] = 5000;
		if (unk_0x496616BFA56C89EB(2) == 0)
		{
			Global_3128[Global_14453 /*2811*/][3 /*281*/].f_280 = 0;
		}
		else
		{
			Global_3128[Global_14453 /*2811*/][3 /*281*/].f_280 = 1;
		}
		while (iVar2 < 9)
		{
			if (Global_3128[Global_14453 /*2811*/][iVar2 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar2] == 0)
				{
					if (Global_3128[Global_14453 /*2811*/][iVar2 /*281*/] < Global_3128[Global_14453 /*2811*/][iVar3 /*281*/])
					{
						if (Global_70856)
						{
							if (iVar2 == 0)
							{
								iVar3 = iVar2;
								func_41(iVar2, iVar3);
								func_18(Global_14434, "SET_DATA_SLOT", system::to_float(13), system::to_float(iVar1), system::to_float(iLocal_29), -1f, -1f, &(Global_3128[Global_14453 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								iVar3 = iVar2;
								func_41(iVar2, iVar3);
								func_18(Global_14434, "SET_DATA_SLOT", system::to_float(13), system::to_float(iVar1), system::to_float(iLocal_29), -1f, -1f, &(Global_3128[Global_14453 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (func_34() == 2)
						{
							if (iVar2 == 4 || iVar2 == 5)
							{
							}
							else
							{
								iVar3 = iVar2;
								func_41(iVar2, iVar3);
								func_18(Global_14434, "SET_DATA_SLOT", system::to_float(13), system::to_float(iVar1), system::to_float(iLocal_29), -1f, -1f, &(Global_3128[Global_14453 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (iVar2 == 5)
						{
						}
						else
						{
							iVar3 = iVar2;
							func_41(iVar2, iVar3);
							func_18(Global_14434, "SET_DATA_SLOT", system::to_float(13), system::to_float(iVar1), system::to_float(iLocal_29), -1f, -1f, &(Global_3128[Global_14453 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
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
	func_45(Global_14434, "DISPLAY_VIEW", 13f, system::to_float(iLocal_24), -1082130432, -1082130432, -1082130432);
	func_13(Global_14434, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_14441)
	{
		func_18(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
}

int func_34()//Position - 0x1E6D
{
	if (Global_70856)
	{
		Global_14453 = 3;
	}
	else
	{
		Global_14453 = func_35();
	}
	if (Global_14453 > 3)
	{
		Global_14453 = 3;
	}
	return Global_104555.f_14021[Global_14453 /*20*/].f_7;
}

var func_35()//Position - 0x1EA3
{
	func_36();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_36()//Position - 0x1EBC
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_40(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_39(unk_0xFC1458A37D98B502());
			if (func_38(iVar0) && (!func_37(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_38(Global_104555.f_2353.f_539.f_4301))
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

bool func_37(int iParam0)//Position - 0x1FB9
{
	return Global_35861 == iParam0;
}

bool func_38(int iParam0)//Position - 0x1FC7
{
	return iParam0 < 3;
}

int func_39(int iParam0)//Position - 0x1FD3
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_40(int iParam0)//Position - 0x2010
{
	if (func_38(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_41(int iParam0, int iParam1)//Position - 0x203A
{
	switch (iParam0)
	{
		case 0:
			if (Global_70856)
			{
				iLocal_29 = 19;
			}
			else if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
			{
				iLocal_29 = 26;
			}
			else
			{
				iLocal_29 = 25;
			}
			break;
		
		case 3:
			if (Global_3128[Global_14453 /*2811*/][3 /*281*/].f_259 == 1)
			{
				iLocal_29 = 20;
			}
			else
			{
				iLocal_29 = 21;
			}
			break;
		
		default:
			iLocal_29 = Global_3128[Global_14453 /*2811*/][iParam1 /*281*/].f_6;
			break;
	}
}

void func_42()//Position - 0x20BC
{
	if (Global_35861 != 15)
	{
		func_44();
		Global_3128[Global_14453 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

int func_43(int iParam0, int iParam1, int iParam2)//Position - 0x20E3
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_21(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_44()//Position - 0x2115
{
	if (func_37(14))
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
		Global_14453 = func_35();
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

void func_45(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x21B7
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

