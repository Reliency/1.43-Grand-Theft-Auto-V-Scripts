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
	if (unk_0x3E9CABD07B829173())
	{
		unk_0x59C3AC31C7544A28(500);
	}
	if (unk_0x7D9C4B359376D38A(3))
	{
		func_5();
	}
	iLocal_19 = unk_0xD704C81492296A37("instructional_buttons");
	while (!unk_0x34D11AB5BA7922C2(iLocal_19))
	{
		system::wait(0);
	}
	while (true)
	{
		unk_0x28E092B1E386EB67(iLocal_19, 255, 255, 255, 0, 0);
		func_4();
		func_1(iLocal_18, iLocal_19);
		system::wait(0);
	}
}

void func_1(int iParam0, int iParam1)//Position - 0x8D
{
	switch (iParam0)
	{
		case 0:
			unk_0x008F3E3CC076EA0E(iParam1, "CLEAR_ALL");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iParam1, "SET_CLEAR_SPACE");
			unk_0xD07D5CD276368D36(200);
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iParam1, "SET_DATA_SLOT");
			unk_0xD07D5CD276368D36(0);
			func_3(unk_0xC9C4B2A22DE54C69(2, 191, true));
			func_2("PRESS A");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iParam1, "SET_DATA_SLOT");
			unk_0xD07D5CD276368D36(1);
			func_3(unk_0xC9C4B2A22DE54C69(2, 194, true));
			func_2("PRESS B");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iParam1, "SET_DATA_SLOT");
			unk_0xD07D5CD276368D36(2);
			func_3(unk_0xC9C4B2A22DE54C69(2, 193, true));
			func_2("PRESS X");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iParam1, "SET_DATA_SLOT");
			unk_0xD07D5CD276368D36(3);
			func_3(unk_0xC9C4B2A22DE54C69(2, 192, true));
			func_2("PRESS Y");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iParam1, "SET_BACKGROUND_COLOUR");
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(80);
			unk_0x271AA5469AF471B3();
			iLocal_18 = -1;
			break;
		
		case 1:
			unk_0x008F3E3CC076EA0E(iParam1, "CLEAR_ALL");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iParam1, "SET_CLEAR_SPACE");
			unk_0xD07D5CD276368D36(200);
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iParam1, "SET_DATA_SLOT");
			unk_0xD07D5CD276368D36(0);
			func_3(unk_0xC9C4B2A22DE54C69(2, 187, true));
			func_2("DOWN");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iParam1, "SET_DATA_SLOT");
			unk_0xD07D5CD276368D36(1);
			func_3(unk_0xC9C4B2A22DE54C69(2, 188, true));
			func_2("UP");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iParam1, "SET_DATA_SLOT");
			unk_0xD07D5CD276368D36(2);
			func_3(unk_0xC9C4B2A22DE54C69(2, 190, true));
			func_2("LEFT");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iParam1, "SET_DATA_SLOT");
			unk_0xD07D5CD276368D36(3);
			func_3(unk_0xC9C4B2A22DE54C69(2, 189, true));
			func_2("RIGHT");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iParam1, "SET_BACKGROUND_COLOUR");
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(80);
			unk_0x271AA5469AF471B3();
			iLocal_18 = -1;
			break;
		
		case 2:
			unk_0x008F3E3CC076EA0E(iParam1, "CLEAR_ALL");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iParam1, "SET_CLEAR_SPACE");
			unk_0xD07D5CD276368D36(200);
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iParam1, "SET_DATA_SLOT");
			unk_0xD07D5CD276368D36(0);
			func_3(unk_0xC9C4B2A22DE54C69(2, 202, true));
			func_2("BACK");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iParam1, "SET_BACKGROUND_COLOUR");
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(80);
			unk_0x271AA5469AF471B3();
			iLocal_18 = -1;
			break;
		
		default:
			break;
	}
}

void func_2(char* sParam0)//Position - 0x312
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_3(char* sParam0)//Position - 0x324
{
	unk_0x8686005F83E832AE(sParam0);
}

void func_4()//Position - 0x332
{
	if (Global_14432 == 0)
	{
		if (((((((((unk_0xF2B58F79D29425B4(2, 189) || unk_0xF2B58F79D29425B4(2, 190)) || unk_0xF2B58F79D29425B4(2, 188)) || unk_0xF2B58F79D29425B4(2, 187)) || unk_0xF2B58F79D29425B4(2, 205)) || unk_0xF2B58F79D29425B4(2, 206)) || unk_0xF2B58F79D29425B4(2, 207)) || unk_0xF2B58F79D29425B4(2, 208)) || unk_0xF2B58F79D29425B4(2, 201)) || unk_0xF2B58F79D29425B4(2, 202))
		{
			Global_14432 = 1;
			system::settimera(0);
		}
	}
	else if (system::timera() > 50)
	{
		Global_14432 = 0;
	}
	if (Global_14432 == 0)
	{
		if (unk_0xF2B58F79D29425B4(2, 217))
		{
			iLocal_18 = 1;
		}
		if (unk_0xF2B58F79D29425B4(2, 189))
		{
			iLocal_18 = 2;
		}
		if (unk_0xF2B58F79D29425B4(2, 190))
		{
			iLocal_18 = 2;
		}
		if (unk_0xF2B58F79D29425B4(2, 205))
		{
		}
		if (unk_0xF2B58F79D29425B4(2, 206))
		{
		}
		if (unk_0xF2B58F79D29425B4(2, 207))
		{
		}
		if (unk_0xF2B58F79D29425B4(2, 208))
		{
		}
		if (unk_0xF2B58F79D29425B4(2, 188))
		{
			iLocal_18 = 2;
		}
		if (unk_0xF2B58F79D29425B4(2, 187))
		{
			iLocal_18 = 2;
		}
		if (unk_0xF2B58F79D29425B4(2, 201))
		{
			iLocal_18 = 1;
		}
		if (unk_0xF2B58F79D29425B4(2, 202))
		{
			iLocal_18 = 0;
		}
		if (unk_0xF2B58F79D29425B4(2, 203))
		{
			iLocal_18 = 1;
		}
		if (unk_0xF2B58F79D29425B4(2, 204))
		{
			iLocal_18 = 1;
		}
	}
}

void func_5()//Position - 0x47D
{
	func_6(0);
	unk_0x6ACDC20166AA3FAC(0);
	unk_0xA68F7B004463AB6F(&iLocal_19);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_6(bool bParam0)//Position - 0x499
{
	if (bParam0)
	{
		func_11();
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			unk_0x872F1C1F8587CCC7(&Global_2324, 16);
		}
		Global_14453.f_1 = 1;
		if (func_10(0))
		{
			func_7(0);
		}
	}
	else if (Global_14453.f_1 == 1)
	{
		if (!Global_14453.f_1 == 0)
		{
			Global_14453.f_1 = 3;
		}
	}
}

void func_7(int iParam0)//Position - 0x4FC
{
	if (Global_14615)
	{
		func_9(0, 0);
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
	if (!func_8())
	{
		Global_14453.f_1 = 3;
	}
}

int func_8()//Position - 0x56C
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)//Position - 0x593
{
	if (bParam0)
	{
		if (func_10(0))
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

int func_10(int iParam0)//Position - 0x607
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

void func_11()//Position - 0x661
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
	}
}

