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
	int iLocal_22 = 0;
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
	if (unk_0x7D9C4B359376D38A(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0xB9D80B12FE4456A5()) && unk_0x28965277572D2813())
	{
		unk_0x7635EA803CE40962(true);
		if (!unk_0x3E9CABD07B829173())
		{
			if (!unk_0x2D0EF1D268F33F25())
			{
				unk_0xAE83ED4C9081AE6F(800);
			}
		}
		iLocal_20 = unk_0xD704C81492296A37("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0xD704C81492296A37("INSTRUCTIONAL_BUTTONS");
		while (!unk_0x34D11AB5BA7922C2(iLocal_20) || !unk_0x34D11AB5BA7922C2(iLocal_21))
		{
			system::wait(0);
		}
		unk_0x008F3E3CC076EA0E(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0x271AA5469AF471B3();
		unk_0x008F3E3CC076EA0E(iLocal_21, "SET_DATA_SLOT_EMPTY");
		unk_0x271AA5469AF471B3();
		unk_0x008F3E3CC076EA0E(iLocal_21, "SET_DATA_SLOT");
		unk_0xD07D5CD276368D36(0);
		func_4(unk_0xC9C4B2A22DE54C69(2, 201, true));
		func_5("HUD_CONTINUE");
		unk_0x271AA5469AF471B3();
		unk_0x008F3E3CC076EA0E(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x1869584A8A72FEDD(false);
		unk_0x271AA5469AF471B3();
		while (!unk_0x3E9CABD07B829173())
		{
			system::wait(0);
		}
		unk_0xFC924B6303467FD8();
		while (!iLocal_22)
		{
			unk_0x2F18DFDBFA4AA0E4();
			unk_0x5A66A86A47AC3B57(7);
			unk_0x28E092B1E386EB67(iLocal_20, 255, 255, 255, 0, 0);
			unk_0x28E092B1E386EB67(iLocal_21, 255, 255, 255, 0, 0);
			if (unk_0xF2B58F79D29425B4(2, 201))
			{
				iLocal_22 = 1;
			}
			system::wait(0);
		}
		unk_0x7635EA803CE40962(false);
		func_3(1, 1);
		func_1();
	}
	Global_71125.f_1 = 0;
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_9986.f_25), 0);
	func_6();
}

int func_1()//Position - 0x17D
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_92872.f_8)
	{
		if (Global_92872.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92872.f_10 > 1)
	{
		return 0;
	}
	Global_92872.f_10++;
	return 1;
}

bool func_2(bool bParam0)//Position - 0x1C8
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_3(int iParam0, int iParam1)//Position - 0x1F3
{
	Global_92872.f_7 = iParam0;
	Global_92872.f_8 = iParam1;
}

void func_4(char* sParam0)//Position - 0x20B
{
	unk_0x8686005F83E832AE(sParam0);
}

void func_5(char* sParam0)//Position - 0x219
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_6()//Position - 0x22B
{
	if (iLocal_20 != 0)
	{
		unk_0xA68F7B004463AB6F(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		unk_0xA68F7B004463AB6F(&iLocal_21);
	}
	unk_0x5A66A86A47AC3B57(4);
	unk_0x7635EA803CE40962(false);
	unk_0x96A3D9A8A4C7AFD4();
}

