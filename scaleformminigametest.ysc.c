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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23 = 0;
	bool bLocal_24 = 0;
	float fLocal_25 = 0f;
	bool bLocal_26 = 0;
	bool bLocal_27 = 0;
	float fLocal_28 = 0f;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	float fLocal_31 = 0f;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	float fLocal_34 = 0f;
	bool bLocal_35 = 0;
	bool bLocal_36 = 0;
	float fLocal_37 = 0f;
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	float fLocal_40 = 0f;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	float fLocal_43 = 0f;
	bool bLocal_44 = 0;
	bool bLocal_45 = 0;
	float fLocal_46 = 0f;
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
	iLocal_20 = unk_0x6F4378873333A0C2(100f, 100f, 30f);
	iLocal_22 = 1;
	fLocal_25 = 0f;
	fLocal_28 = 0f;
	fLocal_31 = 0f;
	fLocal_34 = 0f;
	fLocal_37 = 0f;
	fLocal_40 = 0f;
	fLocal_43 = 0f;
	fLocal_46 = 0f;
	if (unk_0x3E9CABD07B829173())
	{
		unk_0x59C3AC31C7544A28(500);
	}
	if (unk_0x7D9C4B359376D38A(3))
	{
		func_2();
	}
	iLocal_18 = unk_0xD704C81492296A37("p_bubblegum");
	while (!unk_0x34D11AB5BA7922C2(iLocal_18))
	{
		system::wait(0);
	}
	while (true)
	{
		if (iLocal_21 == 1)
		{
		}
		if (iLocal_22 == 1)
		{
			iLocal_22 = 0;
			iLocal_19 = unk_0x4562AC7F06CD71B3("DEFAULT_SCRIPTED_CAMERA", true);
			if (unk_0x8EA3C8E091EA5BA4(iLocal_19))
			{
				unk_0xA6DE0FBA9218D7F0(iLocal_19, -160,6632f, -1072,144f, -1615,471f, -89,4999f, -0,2863f, 58,1189f, 45f, 0, 1, 1, 2);
				unk_0x7A5CBE84E165CD64(iLocal_19, 0,01f);
				unk_0xFB661BD3E2CB0A49(iLocal_19, 0,02f);
				unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
			}
			unk_0x4B4040A0EC7DBA81(iLocal_20, 66);
		}
		iLocal_21 = 1;
		unk_0x0EB9853DF8BC0D87(iLocal_18, 0,5f, 0,5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_18);
		system::wait(0);
	}
}

void func_1(int iParam0)//Position - 0x13F
{
	if (Global_14432 == 0)
	{
		if (unk_0xF2B58F79D29425B4(2, 189) || unk_0xF2B58F79D29425B4(2, 190))
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
		if (unk_0xE8C126B7ADBB9D63(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (unk_0xF2B58F79D29425B4(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (!unk_0xF2B58F79D29425B4(2, 189))
		{
			bLocal_23 = false;
			fLocal_25 = 0f;
		}
		if (!bLocal_23 == bLocal_24)
		{
			bLocal_24 = bLocal_23;
			unk_0x008F3E3CC076EA0E(iParam0, "SET_INPUT_EVENT");
			unk_0xD07D5CD276368D36(10);
			unk_0x9499D7329FB840A2(fLocal_25);
			unk_0x271AA5469AF471B3();
		}
		if (unk_0xE8C126B7ADBB9D63(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (unk_0xF2B58F79D29425B4(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (!unk_0xF2B58F79D29425B4(2, 190))
		{
			bLocal_26 = false;
			fLocal_28 = 0f;
		}
		if (!bLocal_26 == bLocal_27)
		{
			bLocal_27 = bLocal_26;
			unk_0x008F3E3CC076EA0E(iParam0, "SET_INPUT_EVENT");
			unk_0xD07D5CD276368D36(11);
			unk_0x9499D7329FB840A2(fLocal_28);
			unk_0x271AA5469AF471B3();
		}
		if (unk_0xE8C126B7ADBB9D63(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (unk_0xF2B58F79D29425B4(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (!unk_0xF2B58F79D29425B4(2, 188))
		{
			bLocal_29 = false;
			fLocal_31 = 0f;
		}
		if (!bLocal_29 == bLocal_30)
		{
			bLocal_30 = bLocal_29;
			unk_0x008F3E3CC076EA0E(iParam0, "SET_INPUT_EVENT");
			unk_0xD07D5CD276368D36(8);
			unk_0x9499D7329FB840A2(fLocal_31);
			unk_0x271AA5469AF471B3();
		}
		if (unk_0xE8C126B7ADBB9D63(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (unk_0xF2B58F79D29425B4(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (!unk_0xF2B58F79D29425B4(2, 187))
		{
			bLocal_32 = false;
			fLocal_34 = 0f;
		}
		if (!bLocal_32 == bLocal_33)
		{
			bLocal_33 = bLocal_32;
			unk_0x008F3E3CC076EA0E(iParam0, "SET_INPUT_EVENT");
			unk_0xD07D5CD276368D36(9);
			unk_0x9499D7329FB840A2(fLocal_34);
			unk_0x271AA5469AF471B3();
		}
		if (unk_0xE8C126B7ADBB9D63(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (unk_0xF2B58F79D29425B4(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (!unk_0xF2B58F79D29425B4(2, 202))
		{
			bLocal_35 = false;
			fLocal_37 = 0f;
		}
		if (!bLocal_35 == bLocal_36)
		{
			bLocal_36 = bLocal_35;
			unk_0x008F3E3CC076EA0E(iParam0, "SET_INPUT_EVENT");
			unk_0xD07D5CD276368D36(17);
			unk_0x9499D7329FB840A2(fLocal_37);
			unk_0x271AA5469AF471B3();
		}
		if (unk_0xE8C126B7ADBB9D63(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (unk_0xF2B58F79D29425B4(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (!unk_0xF2B58F79D29425B4(2, 204))
		{
			bLocal_38 = false;
			fLocal_40 = 0f;
		}
		if (!bLocal_38 == bLocal_39)
		{
			bLocal_39 = bLocal_38;
			unk_0x008F3E3CC076EA0E(iParam0, "SET_INPUT_EVENT");
			unk_0xD07D5CD276368D36(15);
			unk_0x9499D7329FB840A2(fLocal_40);
			unk_0x271AA5469AF471B3();
		}
		if (unk_0xE8C126B7ADBB9D63(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (unk_0xF2B58F79D29425B4(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (!unk_0xF2B58F79D29425B4(2, 201))
		{
			bLocal_41 = false;
			fLocal_43 = 0f;
		}
		if (!bLocal_41 == bLocal_42)
		{
			bLocal_42 = bLocal_41;
			unk_0x008F3E3CC076EA0E(iParam0, "SET_INPUT_EVENT");
			unk_0xD07D5CD276368D36(16);
			unk_0x9499D7329FB840A2(fLocal_43);
			unk_0x271AA5469AF471B3();
		}
		if (unk_0xE8C126B7ADBB9D63(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (unk_0xF2B58F79D29425B4(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (!unk_0xF2B58F79D29425B4(2, 203))
		{
			bLocal_44 = false;
			fLocal_46 = 0f;
		}
		if (!bLocal_44 == bLocal_45)
		{
			bLocal_45 = bLocal_44;
			unk_0x008F3E3CC076EA0E(iParam0, "SET_INPUT_EVENT");
			unk_0xD07D5CD276368D36(14);
			unk_0x9499D7329FB840A2(fLocal_46);
			unk_0x271AA5469AF471B3();
		}
	}
}

void func_2()//Position - 0x43D
{
	if (unk_0x8EA3C8E091EA5BA4(iLocal_19))
	{
		unk_0x02934BABFD4CD384(iLocal_19, 0);
	}
	unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
	func_3(0);
	unk_0x6ACDC20166AA3FAC(0);
	unk_0x3E80C2F7BC665259(1);
	unk_0xA68F7B004463AB6F(&iLocal_18);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_3(bool bParam0)//Position - 0x47A
{
	if (bParam0)
	{
		func_8();
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			unk_0x872F1C1F8587CCC7(&Global_2324, 16);
		}
		Global_14453.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
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

void func_4(int iParam0)//Position - 0x4DD
{
	if (Global_14615)
	{
		func_6(0, 0);
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
	if (!func_5())
	{
		Global_14453.f_1 = 3;
	}
}

int func_5()//Position - 0x54D
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)//Position - 0x574
{
	if (bParam0)
	{
		if (func_7(0))
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

int func_7(int iParam0)//Position - 0x5E8
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

void func_8()//Position - 0x642
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
	}
}

