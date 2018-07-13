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
	int iLocal_19[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
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
	var uLocal_33 = 0;
	struct<16> Local_34 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_35[39];
	struct<16> Local_36[39];
	int iLocal_37 = 0;
	vector3 vLocal_38 = { 0f, 0f, 0f };
	vector3 vLocal_39 = { 0f, 0f, 0f };
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	bool bLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<314> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) == 0)
	{
		func_52();
	}
	func_51();
	Global_16822 = 0;
	Global_104555.f_14021[Global_14453 /*20*/].f_18 = 0;
	Global_14614 = 0;
	func_50();
	func_49(Global_14434, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_47();
	func_45();
	if (Global_14453.f_1 > 3)
	{
		Global_14453.f_1 = 7;
	}
	iLocal_31 = unk_0x53C562FD2B9E3AB0();
	Global_14457 = 0;
	unk_0x494F5FA1BF017D58(&vLocal_39);
	vLocal_38 = { vLocal_39 };
	vLocal_38.x = (vLocal_38.x - 10f);
	vLocal_38.y = (vLocal_38.y + 20f);
	Global_16789 = 0;
	Global_16790 = 1;
	while (true)
	{
		system::wait(0);
		if (Global_16790 == 0 && Global_16789 == 1)
		{
			func_44();
		}
		if (Global_16790 == 1 && Global_16789 == 0)
		{
			func_39();
		}
		if (iLocal_30 == 0)
		{
			iLocal_32 = unk_0x53C562FD2B9E3AB0();
			if ((iLocal_32 - iLocal_31) > 500)
			{
				iLocal_30 = 1;
			}
		}
		if ((Global_14453.f_1 != 9 && Global_16790 == 0) && Global_16789 == 0)
		{
			switch (Global_14453.f_1)
			{
				case 7:
					if (Global_16822 == 0)
					{
						if (Global_2521686 == 0)
						{
							func_38();
							func_32();
						}
					}
					break;
				
				case 8:
					if (Global_16822 == 1)
					{
						func_11();
						func_5();
					}
					break;
				
				default:
					break;
			}
			if (Global_16822 == 0)
			{
				if (func_4())
				{
					Global_16789 = 1;
				}
			}
			else if (func_3(2, Global_14421, 0) || unk_0xC80D31E4B587871C(Global_2324, 12))
			{
				if (unk_0x74C475EB8E73D398(&(Global_4265878[iLocal_24 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					system::wait(0);
					unk_0x0EE72DB1CD8A3B86(&Global_2324, 12);
					func_2();
					Global_14431 = 1;
					Global_16822 = 0;
					if (Global_14453.f_1 > 3)
					{
						Global_14453.f_1 = 7;
					}
					if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) == 0)
					{
						func_52();
					}
					func_49(Global_14434, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_47();
					func_45();
					if (Global_4265878[iLocal_24 /*104*/].f_29 > 0)
					{
						if (Global_4265878[iLocal_24 /*104*/].f_31 == 1)
						{
							Global_4265878[iLocal_24 /*104*/].f_29 = 4;
							Global_4265878[iLocal_24 /*104*/].f_24 = 1;
						}
						else
						{
							Global_4265878[iLocal_24 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) == 0)
		{
			func_52();
		}
		if (func_1())
		{
			func_52();
		}
	}
}

int func_1()//Position - 0x29C
{
	if (((Global_14453.f_1 == 1 || Global_14453.f_1 == 3) || Global_14453.f_1 == 0) || Global_14397 == 1)
	{
		Global_14440 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x2DF
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Menu_Back", &Global_14442, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)//Position - 0x300
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

int func_4()//Position - 0x372
{
	if (Global_2929 == 1 || Global_14453.f_1 < 7)
	{
		Global_14440 = 1;
		return 1;
	}
	return 0;
}

void func_5()//Position - 0x39B
{
	if (iLocal_27)
	{
		if (system::timera() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (func_3(2, 181, 0))
		{
			func_9();
		}
		if (func_3(2, 180, 0))
		{
			func_6();
		}
	}
	if (iLocal_27 == 0)
	{
		if (func_3(2, Global_14429, 0))
		{
			func_9();
			iLocal_27 = 1;
			system::settimera(0);
		}
		if (func_3(2, Global_14430, 0))
		{
			func_6();
			iLocal_27 = 1;
			system::settimera(0);
		}
	}
}

void func_6()//Position - 0x410
{
	func_49(Global_14434, "SET_INPUT_EVENT", system::to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
	func_7();
}

void func_7()//Position - 0x44B
{
	if (func_8())
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

int func_8()//Position - 0x46E
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

void func_9()//Position - 0x4B5
{
	func_49(Global_14434, "SET_INPUT_EVENT", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
	func_10();
}

void func_10()//Position - 0x4F0
{
	if (func_8())
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

void func_11()//Position - 0x513
{
	func_12();
}

void func_12()//Position - 0x51F
{
	if (Global_4265878[iLocal_24 /*104*/].f_24 == 1)
	{
		if (Global_14431 == 0)
		{
			if (unk_0xF2B58F79D29425B4(2, Global_14424))
			{
				func_2();
				Global_14431 = 1;
				func_26();
				if (Global_4265878[iLocal_24 /*104*/].f_27 == 1)
				{
					Global_4265878[iLocal_24 /*104*/].f_99[0] = 0;
					Global_4265878[iLocal_24 /*104*/].f_99[1] = 0;
					Global_4265878[iLocal_24 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_4265878[iLocal_24 /*104*/].f_99[Global_14453] = 0;
				}
				if (func_25(iLocal_24))
				{
				}
				else
				{
					Global_4265878[iLocal_24 /*104*/].f_24 = 0;
					Global_4265878[iLocal_24 /*104*/].f_28 = 0;
				}
				unk_0x4B1D93E1A14A667F(Global_4265878[iLocal_24 /*104*/].f_16);
				func_49(Global_14434, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_47();
				if (iLocal_22 > 0)
				{
					iLocal_22 = (iLocal_22 - 1);
				}
				func_45();
				if (Global_14453.f_1 > 3)
				{
					Global_14453.f_1 = 7;
					Global_16822 = 0;
				}
			}
		}
	}
	else if (Global_14431 == 0)
	{
		if (unk_0xF2B58F79D29425B4(2, Global_14425))
		{
			if (iLocal_26 == 1)
			{
				if (Global_14453.f_1 > 3)
				{
					StringCopy(&Global_68199, unk_0xB2E1B414DD88808E(&Global_16797), 64);
					if (unk_0x74C475EB8E73D398(&Global_68199, "HARDCODED_4207156"))
					{
						Global_14453.f_1 = 3;
						Global_1685022 = 1;
					}
					else
					{
						Global_68328 = 7;
						unk_0x872F1C1F8587CCC7(&Global_2324, 10);
						Global_14453.f_1 = 6;
					}
				}
				func_52();
			}
		}
	}
	if (Global_4265878[iLocal_24 /*104*/].f_31 == 1)
	{
		if (Global_14431 == 0)
		{
			if (func_3(2, Global_14425, 0))
			{
				func_23();
				Global_14431 = 1;
				Global_4265878[iLocal_24 /*104*/].f_29 = 2;
				Global_4265878[iLocal_24 /*104*/].f_24 = 1;
				Global_4265878[iLocal_24 /*104*/].f_31 = 0;
				unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
				Global_16822 = 0;
				if (Global_14453.f_1 > 3)
				{
					Global_14453.f_1 = 7;
				}
				func_49(Global_14434, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_47();
				func_45();
			}
		}
	}
	if (Global_14431 == 0 && iLocal_30 == 1)
	{
		if (func_3(2, Global_14422, 0))
		{
			Global_14431 = 1;
			if (Global_4265878[iLocal_24 /*104*/].f_29 > 0)
			{
				func_23();
				Global_4265878[iLocal_24 /*104*/].f_29 = 3;
				Global_4265878[iLocal_24 /*104*/].f_24 = 1;
				Global_16822 = 0;
				if (Global_14453.f_1 > 3)
				{
					Global_14453.f_1 = 7;
				}
				func_49(Global_14434, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_47();
				func_45();
			}
			else if (Global_4265878[iLocal_24 /*104*/].f_30 == 1)
			{
				func_23();
				Global_1638 = 144;
				if (Global_14453.f_1 > 3)
				{
					Global_14453.f_1 = 10;
					func_21();
				}
				func_20("appContacts");
				Global_14451 = system::start_new_script("appContacts", 4000);
				unk_0x9D2418D7FC697249("appContacts");
				Global_1638 = Global_4265878[iLocal_24 /*104*/].f_17;
				if (Global_104555.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
				{
					func_19(Global_14434, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_117[Global_1638 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_19(Global_14434, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_104555.f_28020[Global_1638 /*29*/].f_3), &(Global_104555.f_28020[Global_1638 /*29*/].f_7), "CELL_211", &(Global_104555.f_28020[Global_1638 /*29*/].f_3), 0);
				}
				func_13();
				func_52();
			}
		}
	}
}

void func_13()//Position - 0x882
{
	vector3 vVar0[24];
	
	if (Global_14436 == 1)
	{
		return;
	}
	if (Global_14453.f_1 < 4)
	{
		return;
	}
	while (!unk_0x34D11AB5BA7922C2(Global_14434))
	{
		system::wait(0);
	}
	switch (Global_14453.f_1)
	{
		case 6:
			func_49(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_17(Global_2928);
			if (Global_2928 == 1)
			{
				func_49(Global_14434, "DISPLAY_VIEW", 1f, system::to_float(Global_14457), -1082130432, -1082130432, -1082130432);
				Global_14433 = Global_14457;
			}
			else
			{
				func_49(Global_14434, "DISPLAY_VIEW", 1f, system::to_float(Global_14458), -1082130432, -1082130432, -1082130432);
				Global_14433 = Global_14458;
			}
			if (Global_14441)
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14617 == 0)
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
			}
			else if (Global_70856)
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
			}
			else
			{
				if (Global_14616 == 1)
				{
					if (Global_14441)
					{
						func_19(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14441)
				{
					func_19(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x872F1C1F8587CCC7(&Global_2323, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_49(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_19(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
			if (unk_0xC80D31E4B587871C(Global_2323, 20))
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14396)
				{
					func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14452 == 1)
			{
				func_16();
				func_49(Global_14434, "SET_THEME", system::to_float(Global_104555.f_14021[Global_14453 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15769)
				{
					unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(4);
					unk_0xD07D5CD276368D36(0);
					unk_0xD07D5CD276368D36(2);
					unk_0x7E099EB35339C80D("CELL_CONDFON");
					unk_0x854FACC4E5F40C82(&Global_15771);
					unk_0x9748595E4799A2CF();
					func_15("CELL_300");
					func_15("CELL_217");
					func_15("CELL_217");
					unk_0x271AA5469AF471B3();
				}
				else if (Global_104555.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
				{
					func_19(Global_14434, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(2), -1f, -1f, &(Global_117[Global_1638 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_19(Global_14434, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(2), -1f, -1f, &(Global_104555.f_28020[Global_1638 /*29*/].f_3), &(Global_104555.f_28020[Global_1638 /*29*/].f_7), "CELL_217", &(Global_104555.f_28020[Global_1638 /*29*/].f_3), 0);
				}
				func_49(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15756 == 4 || Global_15756 == 3)
			{
				func_49(Global_14434, "SET_THEME", system::to_float(Global_104555.f_14021[Global_14453 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_16();
				if (Global_15769)
				{
					unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(4);
					unk_0xD07D5CD276368D36(0);
					unk_0xD07D5CD276368D36(2);
					unk_0x7E099EB35339C80D("CELL_CONDFON");
					unk_0x854FACC4E5F40C82(&Global_15771);
					unk_0x9748595E4799A2CF();
					func_15("CELL_300");
					func_15("CELL_219");
					func_15("CELL_219");
					unk_0x271AA5469AF471B3();
				}
				else
				{
					if (Global_16014)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_104555.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
					{
						func_49(Global_14434, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_14434, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_117[Global_1638 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_49(Global_14434, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_14434, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_104555.f_28020[Global_1638 /*29*/].f_3), &(Global_104555.f_28020[Global_1638 /*29*/].f_7), &cVar0, &(Global_104555.f_28020[Global_1638 /*29*/].f_3), 0);
					}
				}
				func_49(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_14();
			break;
		
		default:
			break;
	}
}

void func_14()//Position - 0xE25
{
	if (unk_0x34D11AB5BA7922C2(Global_14434))
	{
		if (Global_14452 == 1)
		{
			if (Global_14441)
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15803)
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xC80D31E4B587871C(Global_2323, 20))
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
		}
		else
		{
			func_19(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
			if (unk_0xC80D31E4B587871C(Global_2323, 20))
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14396)
				{
					func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_15(char* sParam0)//Position - 0xFA5
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_16()//Position - 0xFB7
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

void func_17(int iParam0)//Position - 0x122E
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
	
	Global_16824 = 0;
	Global_2928 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2892[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_18(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 3))
								{
									iVar2 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14619 = 0;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_15(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar2);
								unk_0x271AA5469AF471B3();
							}
							if (Global_2456825)
							{
								if (iVar1 == 14)
								{
									func_19(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_104555.f_14111[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104555.f_14111[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104555.f_14111[iVar3 /*104*/].f_99[Global_14453] == 1)
											{
												Global_16824++;
											}
										}
									}
									iVar3++;
								}
								func_19(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16824), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70856)
								{
									iVar4 = 0;
									iVar4 = Global_4265877;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4265878[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4265878[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4265878[iVar5 /*104*/].f_99[Global_14453] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_19(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar4), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14453)
									{
										case 0:
											iVar6 = Global_36998;
											break;
										
										case 1:
											iVar6 = Global_36999;
											break;
										
										case 2:
											iVar6 = Global_37000;
											break;
										
										default:
											break;
									}
									func_19(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar6), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_19(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_15(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(Global_2329);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_15(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar7);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 3))
								{
									iVar8 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14619 = 0;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_15(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar8);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 8)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_15(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if ((iVar1 == 23 && unk_0x74C475EB8E73D398(&(Global_2330[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xC80D31E4B587871C(Global_2324, 6))
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_15(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if (Global_2330[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626277.f_1;
								func_19(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_19(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(0), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_18(int iParam0)//Position - 0x17C7
{
	return Global_35861 == iParam0;
}

void func_19(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x17D5
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
		func_15(sParam7);
	}
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		func_15(sParam8);
	}
	if (!unk_0xAB019B170BF1309C(sParam9))
	{
		func_15(sParam9);
	}
	if (!unk_0xAB019B170BF1309C(sParam10))
	{
		func_15(sParam10);
	}
	if (!unk_0xAB019B170BF1309C(sParam11))
	{
		func_15(sParam11);
	}
	unk_0x271AA5469AF471B3();
}

void func_20(char* sParam0)//Position - 0x1888
{
	unk_0xD9E2C360120FEB7C(sParam0);
	while (!unk_0x3B6F9DF9C5FEB3A4(sParam0))
	{
		system::wait(0);
	}
}

void func_21()//Position - 0x18A8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (func_22() && unk_0xACB5C13823C09021(unk_0xFC1458A37D98B502(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_70856)
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && iVar1 == 0)
		{
			iVar2 = unk_0x742D2DEFFDC66EB8(unk_0xFC1458A37D98B502(), 0);
			if (Global_70856)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x97610277C0BBC6FC(unk_0xFC1458A37D98B502()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x97610277C0BBC6FC(unk_0xFC1458A37D98B502()))
			{
				iVar0 = 1;
			}
			if (!Global_14396)
			{
				if (Global_1638 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
						{
							if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
							{
							}
							else
							{
								if (Global_70856)
								{
									unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 244, false);
									unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 243, false);
									unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 242, false);
								}
								unk_0x872F1C1F8587CCC7(&Global_2323, 11);
								unk_0xB42437AE1AC08FDC(unk_0xFC1458A37D98B502(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_22()//Position - 0x19CB
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x666DEE82C2B4C5B5();
	iVar1 = unk_0x8E8C94609BA4BEA9(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_23()//Position - 0x19EF
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Menu_Accept", &Global_14442, 1);
		func_24();
	}
}

void func_24()//Position - 0x1A15
{
	if (func_8())
	{
		unk_0x4EF44BE7DE3DC97E(5);
	}
}

int func_25(int iParam0)//Position - 0x1A29
{
	if ((Global_104555.f_14111[iParam0 /*104*/].f_99[0] == 1 || Global_104555.f_14111[iParam0 /*104*/].f_99[1] == 1) || Global_104555.f_14111[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_26()//Position - 0x1A7E
{
	if (func_18(14))
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
		Global_14453 = func_27();
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

var func_27()//Position - 0x1B20
{
	func_28();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_28()//Position - 0x1B39
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_31(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_30(unk_0xFC1458A37D98B502());
			if (func_29(iVar0) && (!func_18(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_29(Global_104555.f_2353.f_539.f_4301))
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

bool func_29(int iParam0)//Position - 0x1C36
{
	return iParam0 < 3;
}

int func_30(int iParam0)//Position - 0x1C42
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_31(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_31(int iParam0)//Position - 0x1C7F
{
	if (func_29(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_32()//Position - 0x1CA9
{
	struct<16> Var0;
	
	if (Global_14431 == 0)
	{
		if ((func_3(2, Global_14422, 0) || Global_4267128 == 1) || Global_16816 == 1)
		{
			if (Global_4267128 == 0 && Global_16816 == 0)
			{
				func_23();
			}
			Global_14431 = 1;
			iLocal_30 = 0;
			func_19(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
			iLocal_24 = iLocal_19[iLocal_22];
			if (iLocal_22 == iLocal_21 || iLocal_22 > iLocal_21)
			{
				if (Global_14453.f_1 > 3)
				{
					Global_14453.f_1 = 8;
					Global_16822 = 1;
					iLocal_23 = iLocal_22;
					unk_0x09ECF9503E9F4C96(iLocal_19[iLocal_22], &Local_45);
				}
				system::settimerb(0);
				iLocal_28 = 0;
				unk_0x008F3E3CC076EA0E(Global_14434, "GET_CURRENT_SELECTION");
				uLocal_33 = unk_0x8E8D3D52EE7CEFD3();
				while (!unk_0x042804C27782882D(uLocal_33) && iLocal_28 == 0)
				{
					system::wait(0);
					if (system::timerb() > 2000)
					{
						iLocal_28 = 1;
					}
				}
				func_37();
				unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
				unk_0xD07D5CD276368D36(9);
				unk_0xD07D5CD276368D36(0);
				func_15("CELL_1");
				unk_0x7E099EB35339C80D("CELL_TO_FIELD");
				unk_0x854FACC4E5F40C82(unk_0xDE2D3B9654C31EB3(unk_0x9EB17624F44A8DA4()));
				unk_0x9748595E4799A2CF();
				unk_0x7E099EB35339C80D("CELL_FROM_FIELD");
				unk_0x854FACC4E5F40C82(&(Local_45.f_2));
				unk_0x9748595E4799A2CF();
				unk_0x7E099EB35339C80D("CELL_EMAIL_BCON");
				unk_0x854FACC4E5F40C82(&(Local_45.f_56[0 /*16*/]));
				unk_0x854FACC4E5F40C82(&(Local_45.f_56[1 /*16*/]));
				unk_0x854FACC4E5F40C82(&(Local_45.f_56[2 /*16*/]));
				unk_0x854FACC4E5F40C82(&(Local_45.f_56[3 /*16*/]));
				unk_0x854FACC4E5F40C82(&(Local_45.f_56[4 /*16*/]));
				unk_0x854FACC4E5F40C82(&(Local_45.f_56[5 /*16*/]));
				unk_0x854FACC4E5F40C82(&(Local_45.f_56[6 /*16*/]));
				unk_0x854FACC4E5F40C82(&(Local_45.f_56[7 /*16*/]));
				unk_0x854FACC4E5F40C82(&(Local_45.f_56[8 /*16*/]));
				unk_0x854FACC4E5F40C82(&(Local_45.f_56[9 /*16*/]));
				unk_0x9748595E4799A2CF();
				unk_0x7E099EB35339C80D("CELL_2000");
				unk_0x854FACC4E5F40C82(&(Local_45.f_2));
				unk_0x9748595E4799A2CF();
				switch (Local_45.f_313)
				{
					case 0:
						break;
					
					case 1:
						break;
					
					case 2:
						unk_0x81D71E37E95798C1("EmailAds_Dock_Tease");
						unk_0x1869584A8A72FEDD(true);
						break;
					
					case 3:
						unk_0x81D71E37E95798C1("EmailAds_Warstock");
						unk_0x1869584A8A72FEDD(true);
						break;
					
					case 4:
						unk_0x81D71E37E95798C1("EmailAds_Legendary_Motorsport");
						unk_0x1869584A8A72FEDD(true);
						break;
					
					case 5:
						unk_0x81D71E37E95798C1("EmailAds_LS_Customs");
						unk_0x1869584A8A72FEDD(true);
						break;
					
					case 6:
						unk_0x81D71E37E95798C1("EmailAds_Elitas_Travel");
						unk_0x1869584A8A72FEDD(true);
						break;
					
					case 7:
						unk_0x81D71E37E95798C1("EmailAds_LS_Tourist_Info");
						unk_0x1869584A8A72FEDD(true);
						break;
					
					case 8:
						unk_0x81D71E37E95798C1("emailads_dynasty8");
						unk_0x1869584A8A72FEDD(true);
						break;
					
					case 9:
						unk_0x81D71E37E95798C1("emailads_bennys");
						unk_0x1869584A8A72FEDD(true);
						break;
					
					case 10:
						unk_0x81D71E37E95798C1("emailads_ammunation");
						unk_0x1869584A8A72FEDD(true);
						break;
					
					case 11:
						unk_0x81D71E37E95798C1("emailads_SSSA");
						unk_0x1869584A8A72FEDD(true);
						break;
					
					case 12:
						unk_0x81D71E37E95798C1("emailads_maze_bank");
						unk_0x1869584A8A72FEDD(true);
						break;
					
					case 13:
						unk_0x81D71E37E95798C1("emailads_shark");
						unk_0x1869584A8A72FEDD(true);
						break;
					
					case 14:
						unk_0x81D71E37E95798C1("emailads_RP");
						unk_0x1869584A8A72FEDD(true);
						break;
				}
				unk_0x271AA5469AF471B3();
				func_19(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_49(Global_14434, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (iLocal_22 == iLocal_21)
				{
					if (unk_0xC80D31E4B587871C(Global_4267143, 25))
					{
						unk_0x0EE72DB1CD8A3B86(&Global_4267143, 25);
					}
					if (Global_4265877 > 0)
					{
						func_34(7016, iLocal_40, -1, 1, 0);
						if (Global_4265877 > 0)
						{
							Global_4265877 = 0;
						}
					}
				}
				return;
			}
			if (Global_4265878[iLocal_24 /*104*/].f_24 != 0)
			{
				if (Global_14453.f_1 > 3)
				{
					Global_14453.f_1 = 8;
				}
				if (Global_4267128 == 1 || Global_16816 == 1)
				{
					iLocal_24 = iLocal_19[0];
					iLocal_23 = 0;
					if (Global_4267128 == 1)
					{
					}
					Global_16816 = 0;
				}
				else
				{
					system::settimerb(0);
					iLocal_28 = 0;
					unk_0x008F3E3CC076EA0E(Global_14434, "GET_CURRENT_SELECTION");
					uLocal_33 = unk_0x8E8D3D52EE7CEFD3();
					while (!unk_0x042804C27782882D(uLocal_33) && iLocal_28 == 0)
					{
						system::wait(0);
						if (system::timerb() > 2000)
						{
							iLocal_28 = 1;
						}
					}
					if (iLocal_28 == 1)
					{
						iLocal_29 = 0;
					}
					else
					{
						iLocal_29 = unk_0x8EA167BD67A3F619(uLocal_33);
					}
					if (iLocal_29 < 0)
					{
						iLocal_29 = 0;
					}
					iLocal_24 = iLocal_19[iLocal_22];
					iLocal_23 = iLocal_22;
				}
				Global_4265878[iLocal_24 /*104*/].f_28 = 1;
				iLocal_26 = 0;
				StringCopy(&Global_16797, "NO_HYPERLINK", 64);
				Var0 = { Global_4265878[iLocal_24 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0xA1800C71952C596F(&Var0))
				{
					Global_16797 = { Var0 };
					iLocal_26 = 1;
					if (Global_14441)
					{
						func_19(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0x872F1C1F8587CCC7(&Global_2323, 17);
					Global_4265878[iLocal_24 /*104*/].f_26 = 1;
					Global_4265878[iLocal_24 /*104*/].f_24 = 2;
				}
				if (Global_4265878[iLocal_24 /*104*/].f_26 == 0)
				{
					Global_4265878[iLocal_24 /*104*/].f_24 = 1;
				}
				func_37();
				unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
				unk_0xD07D5CD276368D36(9);
				unk_0xD07D5CD276368D36(0);
				func_15("CELL_1");
				unk_0x7E099EB35339C80D("CELL_TO_FIELD");
				unk_0x854FACC4E5F40C82(unk_0xDE2D3B9654C31EB3(unk_0x9EB17624F44A8DA4()));
				unk_0x9748595E4799A2CF();
				if (Global_4265878[iLocal_24 /*104*/].f_17 == 145)
				{
					unk_0x7E099EB35339C80D("CELL_FROM_FIELD");
					unk_0x854FACC4E5F40C82(&(Global_4265878[iLocal_24 /*104*/].f_50));
					unk_0x9748595E4799A2CF();
				}
				else
				{
					unk_0x7E099EB35339C80D("CELL_FROM_FIELD");
					unk_0xA6D2B267C377D7B2(&(Global_104555.f_28020[Global_4265878[iLocal_24 /*104*/].f_17 /*29*/].f_3));
					unk_0x9748595E4799A2CF();
				}
				switch (Global_4265878[iLocal_24 /*104*/].f_32)
				{
					case 0:
						func_15(&(Global_4265878[iLocal_24 /*104*/]));
						break;
					
					case 1:
						unk_0x7E099EB35339C80D(&(Global_4265878[iLocal_24 /*104*/]));
						unk_0x854FACC4E5F40C82(&(Global_4265878[iLocal_24 /*104*/].f_33));
						if (Global_4265878[iLocal_24 /*104*/].f_66 == 1 && !unk_0x74C475EB8E73D398(&(Global_4265878[iLocal_24 /*104*/].f_67), "NULL"))
						{
							unk_0x854FACC4E5F40C82(&(Global_4265878[iLocal_24 /*104*/].f_67));
						}
						if ((Global_4265878[iLocal_24 /*104*/].f_66 == 2 && !unk_0x74C475EB8E73D398(&(Global_4265878[iLocal_24 /*104*/].f_67), "NULL")) && !unk_0x74C475EB8E73D398(&(Global_4265878[iLocal_24 /*104*/].f_83), "NULL"))
						{
							if (unk_0xA1800C71952C596F(&(Global_4265878[iLocal_24 /*104*/].f_67)))
							{
								unk_0xA6D2B267C377D7B2(&(Global_4265878[iLocal_24 /*104*/].f_67));
							}
							else
							{
								unk_0x854FACC4E5F40C82(&(Global_4265878[iLocal_24 /*104*/].f_67));
							}
							if (unk_0xA1800C71952C596F(&(Global_4265878[iLocal_24 /*104*/].f_83)))
							{
								unk_0xA6D2B267C377D7B2(&(Global_4265878[iLocal_24 /*104*/].f_83));
							}
							else
							{
								unk_0x854FACC4E5F40C82(&(Global_4265878[iLocal_24 /*104*/].f_83));
							}
						}
						unk_0x9748595E4799A2CF();
						break;
					
					case 2:
						unk_0x7E099EB35339C80D(&(Global_4265878[iLocal_24 /*104*/]));
						unk_0x6223D539BCD39E76(Global_4265878[iLocal_24 /*104*/].f_49);
						unk_0x9748595E4799A2CF();
						break;
					
					case 3:
						unk_0x7E099EB35339C80D(&(Global_4265878[iLocal_24 /*104*/]));
						unk_0x854FACC4E5F40C82(&(Global_4265878[iLocal_24 /*104*/].f_33));
						unk_0x6223D539BCD39E76(Global_4265878[iLocal_24 /*104*/].f_49);
						if (Global_4265878[iLocal_24 /*104*/].f_66 == 1 && !unk_0x74C475EB8E73D398(&(Global_4265878[iLocal_24 /*104*/].f_67), "NULL"))
						{
							unk_0x854FACC4E5F40C82(&(Global_4265878[iLocal_24 /*104*/].f_67));
						}
						if ((Global_4265878[iLocal_24 /*104*/].f_66 == 2 && !unk_0x74C475EB8E73D398(&(Global_4265878[iLocal_24 /*104*/].f_67), "NULL")) && !unk_0x74C475EB8E73D398(&(Global_4265878[iLocal_24 /*104*/].f_83), "NULL"))
						{
							if (unk_0xA1800C71952C596F(&(Global_4265878[iLocal_24 /*104*/].f_67)))
							{
								unk_0xA6D2B267C377D7B2(&(Global_4265878[iLocal_24 /*104*/].f_67));
							}
							else
							{
								unk_0x854FACC4E5F40C82(&(Global_4265878[iLocal_24 /*104*/].f_67));
							}
							if (unk_0xA1800C71952C596F(&(Global_4265878[iLocal_24 /*104*/].f_83)))
							{
								unk_0xA6D2B267C377D7B2(&(Global_4265878[iLocal_24 /*104*/].f_83));
							}
							else
							{
								unk_0x854FACC4E5F40C82(&(Global_4265878[iLocal_24 /*104*/].f_83));
							}
						}
						unk_0x9748595E4799A2CF();
						break;
					
					case 4:
						func_33(iLocal_24);
						break;
					
					case 5:
						func_33(iLocal_24);
						break;
					
					case 6:
						func_33(iLocal_24);
						break;
					
					case 7:
						func_33(iLocal_24);
						break;
					
					case 8:
						func_33(iLocal_24);
						break;
					
					case 9:
						func_33(iLocal_24);
						break;
					
					case 10:
						func_33(iLocal_24);
						break;
					
					case 11:
						func_33(iLocal_24);
						break;
				}
				if (Global_4265878[iLocal_24 /*104*/].f_17 == 145)
				{
					unk_0x7E099EB35339C80D("CELL_2000");
					unk_0x854FACC4E5F40C82(&(Global_4265878[iLocal_24 /*104*/].f_50));
					unk_0x9748595E4799A2CF();
				}
				else
				{
					func_15(&(Global_104555.f_28020[Global_4265878[iLocal_24 /*104*/].f_17 /*29*/].f_3));
				}
				if (Global_4265878[iLocal_24 /*104*/].f_17 == 149)
				{
					unk_0x81D71E37E95798C1("emailads_maze_bank");
					unk_0x1869584A8A72FEDD(true);
				}
				if (Global_4265878[iLocal_24 /*104*/].f_17 == 140)
				{
					unk_0x81D71E37E95798C1("EmailAds_Warstock");
					unk_0x1869584A8A72FEDD(true);
				}
				unk_0x271AA5469AF471B3();
				Global_16822 = 1;
				func_49(Global_14434, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x4B1D93E1A14A667F(Global_4265878[iLocal_24 /*104*/].f_16);
				if (Global_4265878[iLocal_24 /*104*/].f_29 > 0)
				{
					if (Global_14441)
					{
						func_19(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_4265878[iLocal_24 /*104*/].f_30 == 1)
				{
					if (Global_14441)
					{
						func_19(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_19(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4265878[iLocal_24 /*104*/].f_29 > 0)
				{
					if (unk_0x74C475EB8E73D398(&(Global_4265878[iLocal_24 /*104*/]), "CELL_FINV"))
					{
						if (Global_14441)
						{
							func_19(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_14441)
					{
						func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14441)
				{
					func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4265878[iLocal_24 /*104*/].f_24 == 2)
				{
					if (Global_4265878[iLocal_24 /*104*/].f_31 == 1)
					{
						iLocal_26 = 0;
						if (Global_14441)
						{
							func_19(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0x872F1C1F8587CCC7(&Global_2323, 17);
					}
					else if (iLocal_26 == 0)
					{
						func_19(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
					}
				}
				else if (Global_14441)
				{
					func_19(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0x872F1C1F8587CCC7(&Global_2323, 17);
				}
				else
				{
					func_19(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x872F1C1F8587CCC7(&Global_2323, 17);
				}
				Global_104555.f_14021[Global_14453 /*20*/].f_18 = 0;
				Global_4267128 = 0;
			}
			else
			{
				Global_104555.f_14021[Global_14453 /*20*/].f_18 = 0;
				Global_4267128 = 0;
			}
		}
		if (Global_2521686 == 0)
		{
			if (Global_70856)
			{
			}
		}
	}
}

void func_33(int iParam0)//Position - 0x283B
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_104555.f_14111[iParam0 /*104*/].f_49)
	{
		case 1:
			unk_0x7E099EB35339C80D("CELL_CL01");
			break;
		
		case 2:
			unk_0x7E099EB35339C80D("CELL_CL02");
			break;
		
		case 3:
			unk_0x7E099EB35339C80D("CELL_CL03");
			break;
		
		case 4:
			unk_0x7E099EB35339C80D("CELL_CL04");
			break;
		
		case 5:
			unk_0x7E099EB35339C80D("CELL_CL05");
			break;
		
		case 6:
			unk_0x7E099EB35339C80D("CELL_CL06");
			break;
		
		case 7:
			unk_0x7E099EB35339C80D("CELL_CL07");
			break;
		
		case 8:
			unk_0x7E099EB35339C80D("CELL_CL08");
			break;
		
		case 9:
			unk_0x7E099EB35339C80D("CELL_CL09");
			break;
	}
	unk_0xA6D2B267C377D7B2(&(Global_104555.f_14111[iParam0 /*104*/]));
	while (iVar0 < Global_104555.f_14111[iParam0 /*104*/].f_49)
	{
		switch (Global_104555.f_14111[iParam0 /*104*/].f_32)
		{
			case 4:
				unk_0xA6D2B267C377D7B2(&(Global_2512808.f_1637[iVar0 /*4*/]));
				break;
			
			case 5:
				unk_0xA6D2B267C377D7B2(&(Global_1655682[iVar0 /*4*/]));
				break;
			
			case 6:
				unk_0xA6D2B267C377D7B2(&(Global_1655723[iVar0 /*4*/]));
				break;
			
			case 7:
				unk_0xA6D2B267C377D7B2(&(Global_1655744[iVar0 /*4*/]));
				break;
			
			case 8:
				unk_0xA6D2B267C377D7B2(&(Global_1655761[iVar0 /*4*/]));
				break;
			
			case 9:
				unk_0xA6D2B267C377D7B2(&(Global_1655774[iVar0 /*4*/]));
				break;
			
			case 10:
				unk_0xA6D2B267C377D7B2(&(Global_1655787[iVar0 /*4*/]));
				break;
			
			case 11:
				unk_0xA6D2B267C377D7B2(&(Global_1655800[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0x9748595E4799A2CF();
}

void func_34(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x29DC
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_35(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_35(var uParam0)//Position - 0x2A0C
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
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

var func_36()//Position - 0x2A40
{
	return Global_1312736;
}

void func_37()//Position - 0x2A4C
{
	int iVar0;
	
	if (iLocal_37)
	{
		unk_0x137FC8E0F58D9E0B(&Local_34);
	}
	iLocal_37 = 0;
	if (Global_4265878[iLocal_24 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (unk_0x74C475EB8E73D398(&(Global_4265878[iLocal_24 /*104*/]), &(Local_35[iVar0 /*6*/])))
			{
				Local_34 = { Local_36[iVar0 /*16*/] };
				iLocal_37 = 1;
				unk_0x128A5DCCD09CCA17(&Local_34, 0);
				while (!unk_0xA51ADD51711B4A15(&Local_34))
				{
					system::wait(100);
				}
			}
			iVar0++;
		}
	}
}

void func_38()//Position - 0x2AC7
{
	if (iLocal_27)
	{
		if (system::timera() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (func_3(2, 181, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
				func_9();
			}
		}
		if (func_3(2, 180, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_20)
			{
				iLocal_22 = 0;
			}
			func_6();
		}
	}
	if (iLocal_27 == 0)
	{
		if (func_3(2, Global_14429, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
				func_9();
			}
			iLocal_27 = 1;
			system::settimera(0);
		}
		if (func_3(2, Global_14430, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_20)
			{
				iLocal_22 = 0;
			}
			func_6();
			iLocal_27 = 1;
			system::settimera(0);
		}
	}
}

void func_39()//Position - 0x2B74
{
	float fVar0;
	
	fVar0 = func_40(vLocal_39, vLocal_38, Global_14413, -90f, 0f, 90f, 350f, 0);
	unk_0x82B09271510E28E1((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_16790 = 0;
		iLocal_18 = 0;
	}
}

float func_40(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5)//Position - 0x2BC2
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_4267358 == 0)
	{
		if (unk_0xC80D31E4B587871C(Global_2323, 14) && Global_14453.f_1 < 4)
		{
			unk_0x494F5FA1BF017D58(&Var0);
			if (Global_14406[Global_14398 /*3*/].f_1 == Var0.f_1)
			{
				Global_4267358 = 1;
			}
		}
	}
	if (func_43() && Global_4267358 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x53C562FD2B9E3AB0();
	}
	fVar1 = func_42((system::to_float((unk_0x53C562FD2B9E3AB0() - iLocal_18)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0,670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = system::sin((fVar1 * 90f));
		}
		Global_14381 = { func_41(vParam0, vParam1, fVar2) };
		Global_14384 = { func_41(vParam2, vParam3, fVar2) };
	}
	else
	{
		Global_14381 = { vParam1 };
		Global_14384 = { vParam3 };
	}
	unk_0x0D75BB9393CE608D(Global_14381);
	unk_0x59F9FBA80E3B1114(Global_14384, 0);
	return fVar1;
}

Vector3 func_41(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x2CD4
{
	return vParam0 + vParam1 - vParam0 * Vector(fParam2, fParam2, fParam2);
}

float func_42(float fParam0, float fParam1, float fParam2)//Position - 0x2CEE
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_43()//Position - 0x2D15
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			if (Global_14396 == 0)
			{
				if (Global_1638 != 128)
				{
					if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if (Global_15756 != 2)
						{
						}
					}
				}
			}
		}
		if (func_18(14))
		{
			return 0;
		}
		if (unk_0xACB5C13823C09021(unk_0xFC1458A37D98B502(), 0))
		{
			return 0;
		}
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (!unk_0xBABB179B9D27EF62())
			{
				if (unk_0x0BA31FF7931F3DD3(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502()) || unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502())) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x6CCC46F395931037(unk_0xFC1458A37D98B502()))
		{
			return 0;
		}
		if (Global_103603)
		{
			return 0;
		}
	}
	if (Global_70856)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x666DEE82C2B4C5B5();
	iVar1 = unk_0x8E8C94609BA4BEA9(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xBABB179B9D27EF62()))
	{
		iVar2 = 1;
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iVar3 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				if ((((((((unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(iVar3)) || unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(iVar3))) || unk_0x49A1CABC032F7E16(unk_0x82FF3DFBC3965CC0(iVar3))) || unk_0x82FF3DFBC3965CC0(iVar3) == joaat("seashark")) || unk_0x82FF3DFBC3965CC0(iVar3) == joaat("seashark2")) || unk_0x82FF3DFBC3965CC0(iVar3) == joaat("rhino")) || unk_0x82FF3DFBC3965CC0(iVar3) == joaat("submersible")) || unk_0x82FF3DFBC3965CC0(iVar3) == joaat("submersible2")) || unk_0x82FF3DFBC3965CC0(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4267357 || iVar2 == 1)
	{
		if (unk_0x8F38E94BBF3404CD(joaat("apptrackify")) > 0 || Global_104555.f_14021.f_89)
		{
			if (unk_0x8F38E94BBF3404CD(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_44()//Position - 0x2F3C
{
	float fVar0;
	
	fVar0 = func_40(vLocal_38, vLocal_39, -90f, 0f, 90f, Global_14413, 350f, 0);
	unk_0x82B09271510E28E1((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_16789 = 0;
		func_52();
		iLocal_18 = 0;
	}
}

void func_45()//Position - 0x2F90
{
	if (Global_4267128 == 0)
	{
		if (iLocal_23 < 0)
		{
			iLocal_23 = 0;
		}
		func_46(Global_14434, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_49(Global_14434, "DISPLAY_VIEW", 8f, system::to_float(iLocal_23), -1082130432, -1082130432, -1082130432);
		if (Global_14441)
		{
			if (iLocal_20 > 0)
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_20 > 0)
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_70856)
		{
			func_19(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
		}
		else
		{
			func_19(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
		}
	}
	else
	{
		iLocal_23 = 0;
	}
}

void func_46(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x30C2
{
	unk_0x008F3E3CC076EA0E(iParam0, sParam1);
	func_15(sParam2);
	if (!unk_0xAB019B170BF1309C(sParam3))
	{
		func_15(sParam3);
	}
	if (!unk_0xAB019B170BF1309C(sParam4))
	{
		func_15(sParam4);
	}
	if (!unk_0xAB019B170BF1309C(sParam5))
	{
		func_15(sParam5);
	}
	if (!unk_0xAB019B170BF1309C(sParam6))
	{
		func_15(sParam6);
	}
	unk_0x271AA5469AF471B3();
}

void func_47()//Position - 0x311D
{
	int iVar0[12];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<8> Var5;
	int iVar6[10];
	int iVar7;
	
	iLocal_20 = 0;
	iLocal_21 = 0;
	func_26();
	iVar1 = 0;
	iVar2 = 0;
	while (iVar1 < 11)
	{
		if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) == 0)
		{
			func_52();
		}
		iVar3 = 0;
		iVar4 = 11;
		Global_4265878[iVar4 /*104*/].f_18 = -1;
		Global_4265878[iVar4 /*104*/].f_18.f_1 = 0;
		Global_4265878[iVar4 /*104*/].f_18.f_2 = 0;
		Global_4265878[iVar4 /*104*/].f_18.f_3 = 0;
		Global_4265878[iVar4 /*104*/].f_18.f_5 = 0;
		while (iVar3 < 12)
		{
			if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) == 0)
			{
				func_52();
			}
			if (iVar0[iVar3] == 0)
			{
				if (Global_4265878[iVar3 /*104*/].f_24 != 0)
				{
					if (Global_4265878[iVar3 /*104*/].f_99[Global_14453] == 1)
					{
						if (func_48(Global_4265878[iVar3 /*104*/].f_18, Global_4265878[iVar4 /*104*/].f_18))
						{
							iVar4 = iVar3;
							if (Global_4265878[iVar4 /*104*/].f_28 == 0)
							{
								iLocal_25 = 0;
							}
							else
							{
								iLocal_25 = 1;
							}
						}
					}
				}
			}
			iVar3++;
		}
		iLocal_19[iVar1] = iVar4;
		iVar0[iVar4] = 1;
		if (Global_4265878[iVar4 /*104*/].f_24 != 0)
		{
			if (Global_4265878[iVar4 /*104*/].f_99[Global_14453] == 1)
			{
				unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
				unk_0xD07D5CD276368D36(8);
				unk_0xD07D5CD276368D36(iVar1);
				unk_0xD07D5CD276368D36(iLocal_25);
				unk_0x1869584A8A72FEDD(false);
				if (Global_4265878[iVar4 /*104*/].f_17 == 145)
				{
					unk_0x7E099EB35339C80D("CELL_2000");
					unk_0x854FACC4E5F40C82(&(Global_4265878[iVar4 /*104*/].f_50));
					unk_0x9748595E4799A2CF();
				}
				else
				{
					func_15(&(Global_104555.f_28020[Global_4265878[iVar4 /*104*/].f_17 /*29*/].f_3));
				}
				Var5 = { Global_4265878[iVar4 /*104*/] };
				StringConCat(&Var5, "_SUB", 64);
				func_15(&Var5);
				unk_0x271AA5469AF471B3();
				iLocal_20++;
				iLocal_21++;
			}
		}
		iVar1++;
	}
	iVar1 = iLocal_20;
	iVar7 = 0;
	while (iVar1 < (iLocal_44 + iLocal_20))
	{
		iVar2 = 0;
		iVar7 = 0;
		while (iVar2 < iLocal_44 && iVar7 == 0)
		{
			unk_0x09ECF9503E9F4C96(iVar2, &Local_45);
			if (iVar6[iVar2] == 0)
			{
				unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
				unk_0xD07D5CD276368D36(8);
				unk_0xD07D5CD276368D36(iVar1);
				if (iVar1 == 0)
				{
					if (Global_4265877 == 0)
					{
						unk_0xD07D5CD276368D36(1);
					}
					else
					{
						unk_0xD07D5CD276368D36(0);
					}
				}
				else
				{
					unk_0xD07D5CD276368D36(1);
				}
				unk_0x1869584A8A72FEDD(false);
				unk_0x7E099EB35339C80D("CELL_2000");
				unk_0x854FACC4E5F40C82(&(Local_45.f_2));
				unk_0x9748595E4799A2CF();
				unk_0x7E099EB35339C80D("CELL_EMAIL_SUBJ");
				unk_0x854FACC4E5F40C82(&(Local_45.f_23[0 /*16*/]));
				unk_0x854FACC4E5F40C82(&(Local_45.f_23[1 /*16*/]));
				unk_0x9748595E4799A2CF();
				unk_0x271AA5469AF471B3();
				iVar6[iVar2] = 1;
				iLocal_19[iVar1] = iVar2;
				iVar7 = 1;
				iLocal_20++;
				if (iVar2 == 0)
				{
					iLocal_40 = Local_45.f_1;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
}

int func_48(struct<6> Param0, struct<6> Param1)//Position - 0x33E5
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_49(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x34D0
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

void func_50()//Position - 0x3533
{
	switch (unk_0xC45D692E0BD4797B())
	{
		case -1:
			unk_0x4BC26E72D36B068E("gta5mkt_en");
			break;
		
		case 0:
			unk_0x4BC26E72D36B068E("gta5mkt_en");
			break;
		
		case 1:
			unk_0x4BC26E72D36B068E("gta5mkt_fr");
			break;
		
		case 2:
			unk_0x4BC26E72D36B068E("gta5mkt_ge");
			break;
		
		case 3:
			unk_0x4BC26E72D36B068E("gta5mkt_it");
			break;
		
		case 4:
			unk_0x4BC26E72D36B068E("gta5mkt_sp");
			break;
		
		case 5:
			unk_0x4BC26E72D36B068E("gta5mkt_pt");
			break;
		
		case 6:
			unk_0x4BC26E72D36B068E("gta5mkt_pl");
			break;
		
		case 7:
			unk_0x4BC26E72D36B068E("gta5mkt_ru");
			break;
		
		case 8:
			unk_0x4BC26E72D36B068E("gta5mkt_ko");
			break;
		
		case 9:
			unk_0x4BC26E72D36B068E("gta5mkt_ch");
			break;
		
		case 10:
			unk_0x4BC26E72D36B068E("gta5mkt_ja");
			break;
		
		case 11:
			unk_0x4BC26E72D36B068E("gta5mkt_me");
			break;
		
		case 12:
			unk_0x4BC26E72D36B068E("gta5mkt_cn");
			break;
	}
	unk_0xD03BD3A7F31F812A(0, 6);
	system::wait(0);
	iLocal_41 = 1;
	bLocal_42 = false;
	while (iLocal_41 && Global_14453.f_1 > 3)
	{
		system::wait(0);
		iLocal_43 = unk_0x0FB83F325E4B85F0();
		if (func_4())
		{
			Global_14453.f_1 = 3;
			iLocal_41 = 0;
			bLocal_42 = false;
		}
		switch (iLocal_43)
		{
			case 3:
				iLocal_41 = 0;
				bLocal_42 = true;
				break;
			
			case 0:
				iLocal_41 = 0;
				bLocal_42 = true;
				break;
			
			case 1:
				break;
			
			case 4:
				iLocal_41 = 0;
				bLocal_42 = false;
				break;
			
			case 2:
				iLocal_41 = 0;
				bLocal_42 = false;
				break;
		}
	}
	if (bLocal_42)
	{
		iLocal_44 = unk_0xBA2CC1CAFAFA6601();
	}
	else
	{
		iLocal_44 = 0;
	}
}

void func_51()//Position - 0x36F2
{
	StringCopy(&(Local_35[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_36[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_36[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_36[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[3 /*6*/]), "MAPEMAIL_TXT", 24);
	StringCopy(&(Local_36[3 /*16*/]), "NHP_PHOTO_19", 64);
	StringCopy(&(Local_35[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_36[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_35[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_36[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_35[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_36[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_36[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_36[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_36[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_36[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_36[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_36[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_35[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_36[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_35[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_36[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_35[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_36[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_36[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_36[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_36[18 /*16*/]), "executiveproducer", 64);
	StringCopy(&(Local_35[19 /*6*/]), "MAPEMAIL_TXT1", 24);
	StringCopy(&(Local_36[19 /*16*/]), "NHP_PHOTO_18", 64);
	StringCopy(&(Local_35[20 /*6*/]), "MAPEMAIL_TXT2", 24);
	StringCopy(&(Local_36[20 /*16*/]), "NHP_PHOTO_11", 64);
	StringCopy(&(Local_35[21 /*6*/]), "MAPEMAIL_TXT3", 24);
	StringCopy(&(Local_36[21 /*16*/]), "NHP_PHOTO_13", 64);
	StringCopy(&(Local_35[22 /*6*/]), "MAPEMAIL_TXT4", 24);
	StringCopy(&(Local_36[22 /*16*/]), "NHP_PHOTO_5", 64);
	StringCopy(&(Local_35[23 /*6*/]), "MAPEMAIL_TXT5", 24);
	StringCopy(&(Local_36[23 /*16*/]), "NHP_PHOTO_12", 64);
	StringCopy(&(Local_35[24 /*6*/]), "MAPEMAIL_TXT6", 24);
	StringCopy(&(Local_36[24 /*16*/]), "NHP_PHOTO_3", 64);
	StringCopy(&(Local_35[25 /*6*/]), "MAPEMAIL_TXT7", 24);
	StringCopy(&(Local_36[25 /*16*/]), "NHP_PHOTO_1", 64);
	StringCopy(&(Local_35[26 /*6*/]), "MAPEMAIL_TXT8", 24);
	StringCopy(&(Local_36[26 /*16*/]), "NHP_PHOTO_10", 64);
	StringCopy(&(Local_35[27 /*6*/]), "MAPEMAIL_TXT9", 24);
	StringCopy(&(Local_36[27 /*16*/]), "NHP_PHOTO_6", 64);
	StringCopy(&(Local_35[28 /*6*/]), "MAPEMAIL_TXT10", 24);
	StringCopy(&(Local_36[28 /*16*/]), "NHP_PHOTO_20", 64);
	StringCopy(&(Local_35[29 /*6*/]), "MAPEMAIL_TXT11", 24);
	StringCopy(&(Local_36[29 /*16*/]), "NHP_PHOTO_7", 64);
	StringCopy(&(Local_35[30 /*6*/]), "MAPEMAIL_TXT12", 24);
	StringCopy(&(Local_36[30 /*16*/]), "NHP_PHOTO_14", 64);
	StringCopy(&(Local_35[31 /*6*/]), "MAPEMAIL_TXT13", 24);
	StringCopy(&(Local_36[31 /*16*/]), "NHP_PHOTO_4", 64);
	StringCopy(&(Local_35[32 /*6*/]), "MAPEMAIL_TXT14", 24);
	StringCopy(&(Local_36[32 /*16*/]), "NHP_PHOTO_17", 64);
	StringCopy(&(Local_35[33 /*6*/]), "MAPEMAIL_TXT15", 24);
	StringCopy(&(Local_36[33 /*16*/]), "NHP_PHOTO_2", 64);
	StringCopy(&(Local_35[34 /*6*/]), "MAPEMAIL_TXT16", 24);
	StringCopy(&(Local_36[34 /*16*/]), "NHP_PHOTO_15", 64);
	StringCopy(&(Local_35[35 /*6*/]), "MAPEMAIL_TXT17", 24);
	StringCopy(&(Local_36[35 /*16*/]), "NHP_PHOTO_8", 64);
	StringCopy(&(Local_35[36 /*6*/]), "MAPEMAIL_TXT18", 24);
	StringCopy(&(Local_36[36 /*16*/]), "NHP_PHOTO_9", 64);
	StringCopy(&(Local_35[37 /*6*/]), "MAPEMAIL_TXT19", 24);
	StringCopy(&(Local_36[37 /*16*/]), "NHP_PHOTO_16", 64);
	StringCopy(&(Local_35[38 /*6*/]), "MC_EMAIL_0", 24);
	StringCopy(&(Local_36[38 /*16*/]), "NHP_prep_mines", 64);
}

void func_52()//Position - 0x3AB9
{
	if (func_43() == 0)
	{
		unk_0x0D75BB9393CE608D(Global_14406[Global_14398 /*3*/]);
	}
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) == 0)
	{
		func_53(0);
	}
	if (iLocal_37)
	{
		unk_0x137FC8E0F58D9E0B(&Local_34);
	}
	Global_16790 = 0;
	Global_16789 = 0;
	unk_0x96A3D9A8A4C7AFD4();
}

void func_53(int iParam0)//Position - 0x3B01
{
	if (Global_14615)
	{
		func_55(0, 0);
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
	if (!func_54())
	{
		Global_14453.f_1 = 3;
	}
}

int func_54()//Position - 0x3B71
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_55(bool bParam0, bool bParam1)//Position - 0x3B98
{
	if (bParam0)
	{
		if (func_56(0))
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

int func_56(int iParam0)//Position - 0x3C0C
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

