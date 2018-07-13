#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	if (unk_0x7D9C4B359376D38A(83))
	{
		func_10();
	}
	unk_0x03A64A3B1EE29DB1(0);
	unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_9986.f_25), 1);
	func_7();
	unk_0x7635EA803CE40962(true);
	if (!unk_0x3E9CABD07B829173())
	{
		unk_0xAE83ED4C9081AE6F(0);
	}
	iLocal_0 = unk_0xD704C81492296A37("OPENING_CREDITS");
	while (!unk_0x34D11AB5BA7922C2(iLocal_0))
	{
		func_7();
		system::wait(0);
	}
	while (!unk_0x3E9CABD07B829173())
	{
		func_7();
		system::wait(0);
	}
	func_6("TITLE", 0f, 1f, 1,5f, 1f, 0f, 1,5f, 15f);
	iLocal_1 = (unk_0x53C562FD2B9E3AB0() + 8000 + system::round((2f * 1000f)));
	while (!unk_0xA8113D347D14630F())
	{
		func_7();
		if (!unk_0xC80D31E4B587871C(Global_104555.f_9986.f_25, 1))
		{
			unk_0x28E092B1E386EB67(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0x53C562FD2B9E3AB0() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0x53C562FD2B9E3AB0() + system::round((2f * 1000f)));
				}
			}
			else if (unk_0x53C562FD2B9E3AB0() > iLocal_1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_9986.f_25), 1);
				if (unk_0x28965277572D2813() || unk_0xB9D80B12FE4456A5())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
		system::wait(0);
	}
	func_10();
}

void func_1()//Position - 0x13E
{
	Global_92872 = 1;
}

int func_2()//Position - 0x14B
{
	if (func_3(0))
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

bool func_3(bool bParam0)//Position - 0x196
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_4(int iParam0, int iParam1)//Position - 0x1C1
{
	Global_92872.f_7 = iParam0;
	Global_92872.f_8 = iParam1;
}

void func_5(char* sParam0)//Position - 0x1D9
{
	unk_0x008F3E3CC076EA0E(iLocal_0, "HIDE_LOGO");
	unk_0x7E099EB35339C80D("STRING");
	unk_0x854FACC4E5F40C82(sParam0);
	unk_0x9748595E4799A2CF();
	unk_0x271AA5469AF471B3();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)//Position - 0x200
{
	unk_0x008F3E3CC076EA0E(iLocal_0, "SHOW_LOGO");
	unk_0x7E099EB35339C80D("STRING");
	unk_0x854FACC4E5F40C82(sParam0);
	unk_0x9748595E4799A2CF();
	unk_0x9499D7329FB840A2(fParam1);
	unk_0x9499D7329FB840A2(fParam2);
	unk_0x9499D7329FB840A2(fParam3);
	unk_0x9499D7329FB840A2(fParam4);
	unk_0x9499D7329FB840A2(fParam5);
	unk_0x9499D7329FB840A2(fParam6);
	unk_0x9499D7329FB840A2(fParam7);
	unk_0x271AA5469AF471B3();
}

void func_7()//Position - 0x251
{
	unk_0x2F18DFDBFA4AA0E4();
	unk_0x4FB260623DD93924(2, 199, 1);
	unk_0x5A66A86A47AC3B57(7);
	func_8();
}

void func_8()//Position - 0x26E
{
	unk_0x9B16F08390FCC31C();
	func_9();
}

void func_9()//Position - 0x27E
{
	Global_17162.f_134 = 1;
}

void func_10()//Position - 0x28C
{
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_9986.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0xA68F7B004463AB6F(&iLocal_0);
	}
	unk_0x5A66A86A47AC3B57(4);
	unk_0x7635EA803CE40962(false);
	unk_0x03A64A3B1EE29DB1(1);
	unk_0x96A3D9A8A4C7AFD4();
}

