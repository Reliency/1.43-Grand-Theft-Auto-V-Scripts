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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<68> ScriptParam_0 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0,0375f;
	fLocal_26 = 0,17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (unk_0x7D9C4B359376D38A(3))
	{
		func_17();
	}
	while (true)
	{
		switch (iLocal_45)
		{
			case 0:
				iLocal_46 = unk_0xD704C81492296A37("mission_complete");
				iLocal_45 = 1;
				break;
			
			case 1:
				if (unk_0x34D11AB5BA7922C2(iLocal_46))
				{
					iLocal_45 = 2;
				}
				break;
			
			case 2:
				unk_0xC7F83B0C1AF5D19C(iLocal_46, "SET_MISSION_TITLE", ScriptParam_50, ScriptParam_50.f_1, 0, 0, 0);
				unk_0x311B18D03904DAAA(iLocal_46, "SET_MISSION_TITLE_COLOUR", ScriptParam_50.f_2, ScriptParam_50.f_2, ScriptParam_50.f_2, -1082130432, -1082130432);
				if (ScriptParam_50.f_5.f_1 != -1f && !unk_0x8C1C362CA8299475(ScriptParam_50.f_5.f_2))
				{
					unk_0x9F7EE0CB5D370080(iLocal_46, "SET_TOTAL", system::to_float(ScriptParam_50.f_5), ScriptParam_50.f_5.f_1, -1f, -1f, -1f, ScriptParam_50.f_5.f_2, 0, 0, 0, 0);
				}
				unk_0x311B18D03904DAAA(iLocal_46, "SET_MEDAL", system::to_float(ScriptParam_50.f_5), -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x311B18D03904DAAA(iLocal_46, "SET_SOCIAL_CLUB_INFO", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				iVar0 = 0;
				while (iVar0 < ScriptParam_50.f_66 + 1)
				{
					unk_0x008F3E3CC076EA0E(iLocal_46, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(ScriptParam_50.f_9[iVar0 /*7*/]);
					unk_0xD07D5CD276368D36(ScriptParam_50.f_9[iVar0 /*7*/].f_1);
					if (ScriptParam_50.f_9[iVar0 /*7*/].f_2 == 4)
					{
						unk_0xD07D5CD276368D36(2);
						unk_0xD07D5CD276368D36(0);
						unk_0xD07D5CD276368D36(0);
						unk_0x7E099EB35339C80D("STRING");
						unk_0xFD1DB5DD208735A3(system::floor((ScriptParam_50.f_9[iVar0 /*7*/].f_3 * 1000f)), 6);
						unk_0x9748595E4799A2CF();
						if (!unk_0x8C1C362CA8299475(ScriptParam_50.f_9[iVar0 /*7*/].f_5))
						{
							func_16(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
						}
					}
					else if (ScriptParam_50.f_9[iVar0 /*7*/].f_2 == 8)
					{
						if (!unk_0x8C1C362CA8299475(ScriptParam_50.f_9[iVar0 /*7*/].f_5) && !unk_0x8C1C362CA8299475(ScriptParam_50.f_9[iVar0 /*7*/].f_6))
						{
							unk_0x7E099EB35339C80D(ScriptParam_50.f_9[iVar0 /*7*/].f_6);
							unk_0x854FACC4E5F40C82(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
							unk_0x9748595E4799A2CF();
						}
					}
					else
					{
						unk_0xD07D5CD276368D36(ScriptParam_50.f_9[iVar0 /*7*/].f_2);
						if ((ScriptParam_50.f_9[iVar0 /*7*/].f_3 % 1f) == 0f)
						{
							unk_0x9499D7329FB840A2(ScriptParam_50.f_9[iVar0 /*7*/].f_3);
						}
						else
						{
							unk_0x7E099EB35339C80D("NUMBER");
							unk_0x32AD2F36F6EF5A1F(ScriptParam_50.f_9[iVar0 /*7*/].f_3, 2);
							unk_0x9748595E4799A2CF();
						}
						if ((ScriptParam_50.f_9[iVar0 /*7*/].f_4 % 1f) == 0f)
						{
							unk_0x9499D7329FB840A2(ScriptParam_50.f_9[iVar0 /*7*/].f_4);
						}
						else
						{
							unk_0x7E099EB35339C80D("NUMBER");
							unk_0x32AD2F36F6EF5A1F(ScriptParam_50.f_9[iVar0 /*7*/].f_4, 2);
							unk_0x9748595E4799A2CF();
						}
						if (!unk_0x8C1C362CA8299475(ScriptParam_50.f_9[iVar0 /*7*/].f_5))
						{
							func_16(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
						}
						if (!unk_0x8C1C362CA8299475(ScriptParam_50.f_9[iVar0 /*7*/].f_6))
						{
							func_16(ScriptParam_50.f_9[iVar0 /*7*/].f_6);
						}
					}
					unk_0x271AA5469AF471B3();
					iVar0++;
				}
				if (ScriptParam_50.f_5 != 0 && !unk_0x8C1C362CA8299475(ScriptParam_50.f_5.f_2))
				{
					unk_0x008F3E3CC076EA0E(iLocal_46, "SET_TOTAL");
					unk_0xD07D5CD276368D36(ScriptParam_50.f_5);
					if (!unk_0x8C1C362CA8299475(ScriptParam_50.f_5.f_3))
					{
						func_16(ScriptParam_50.f_5.f_3);
					}
					else
					{
						unk_0x9499D7329FB840A2(ScriptParam_50.f_5.f_1);
					}
					func_16(ScriptParam_50.f_5.f_2);
					unk_0x271AA5469AF471B3();
				}
				unk_0x008F3E3CC076EA0E(iLocal_46, "DRAW_MENU_LIST");
				unk_0x271AA5469AF471B3();
				func_12(1);
				func_9(&iLocal_47);
				if (!func_8(Global_104555.f_19067, 4096))
				{
					func_6(&(Global_104555.f_19067), 4096);
				}
				iLocal_45 = 3;
				break;
			
			case 3:
				if (((func_2(&iLocal_47) > ScriptParam_50.f_67 && ScriptParam_50.f_67 != -1f) || unk_0x3E9CABD07B829173()) || Global_25377)
				{
					func_17();
				}
				else
				{
					func_1(1);
					unk_0x0EB9853DF8BC0D87(iLocal_46, 0,1495f, 0,3159f, 0,2021f, 0,5111f, 255, 255, 255, 0, 0);
					if (unk_0x170B4D4E7CE48DA5(10))
					{
						unk_0x553231E7FC3C570D(10);
					}
				}
				break;
		}
		system::wait(0);
	}
	func_17();
}

void func_1(int iParam0)//Position - 0x447
{
	Global_71116 = iParam0;
	Global_71117 = iParam0;
}

float func_2(int iParam0)//Position - 0x45B
{
	if (func_5(iParam0))
	{
		if (func_4(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_3(unk_0xC80D31E4B587871C(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_3(bool bParam0)//Position - 0x49A
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = system::to_float(unk_0x53C562FD2B9E3AB0());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x3A711520F83BAE98())
	{
		iVar2 = unk_0xD1952A425B78FFC0();
		fVar3 = system::to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (system::to_float(unk_0x53C562FD2B9E3AB0()) / 1000f);
}

bool func_4(var uParam0)//Position - 0x4F2
{
	return unk_0xC80D31E4B587871C(*uParam0, 2);
}

bool func_5(var uParam0)//Position - 0x502
{
	return unk_0xC80D31E4B587871C(*uParam0, 1);
}

void func_6(var uParam0, int iParam1)//Position - 0x512
{
	func_7(uParam0, iParam1);
}

void func_7(var uParam0, var uParam1)//Position - 0x522
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_8(var uParam0, int iParam1)//Position - 0x533
{
	return (uParam0 && iParam1) != 0;
}

void func_9(int iParam0)//Position - 0x542
{
	if (!func_5(iParam0))
	{
		func_10(iParam0);
	}
}

void func_10(int iParam0)//Position - 0x55A
{
	func_11(iParam0, 0f);
}

void func_11(int iParam0, float fParam1)//Position - 0x569
{
	iParam0->f_1 = (func_3(unk_0xC80D31E4B587871C(*iParam0, 4)) - fParam1);
	unk_0x872F1C1F8587CCC7(iParam0, 1);
	unk_0x0EE72DB1CD8A3B86(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_12(int iParam0)//Position - 0x597
{
	if (Global_14615)
	{
		func_14(0, 0);
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
	if (!func_13())
	{
		Global_14453.f_1 = 3;
	}
}

int func_13()//Position - 0x607
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)//Position - 0x62E
{
	if (bParam0)
	{
		if (func_15(0))
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

int func_15(int iParam0)//Position - 0x6A2
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

void func_16(char* sParam0)//Position - 0x6FC
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_17()//Position - 0x70E
{
	unk_0xA68F7B004463AB6F(&iLocal_46);
	Global_25377 = 0;
	func_1(0);
	unk_0x96A3D9A8A4C7AFD4();
}

