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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0,0375f;
	fLocal_26 = 0,17f;
	func_4(21);
	if (unk_0x7D9C4B359376D38A(18))
	{
		if (unk_0xB4918C73B5AFD8E2() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		system::wait(0);
		if (unk_0x8F38E94BBF3404CD(joaat("docks_setup")) == 0)
		{
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					iLocal_28 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				}
				else
				{
					iLocal_28 = 0;
				}
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_28))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_28, 0))
				{
					if (unk_0xB0DA749C8A7CCBBF(iLocal_28, joaat("handler")))
					{
						unk_0x01B48CB2F72AE113(0, 51);
						if (!unk_0x8670EA65BF5FE2F9(iLocal_28))
						{
							if (iLocal_32 == 0)
							{
								if (!unk_0x6ADD12BF4D6D2587(iLocal_29) || (unk_0x6ADD12BF4D6D2587(iLocal_29) && unk_0xCBD07018689DF383(unk_0xB3328BA8976B416C(iLocal_28, 1), 15f, 874602658, 1, 0, 1) != iLocal_29))
								{
									iLocal_29 = unk_0xCBD07018689DF383(unk_0xB3328BA8976B416C(iLocal_28, 1), 15f, 874602658, 1, 0, 1);
								}
								if (unk_0x6ADD12BF4D6D2587(iLocal_29))
								{
									if (func_1(&iLocal_30, 1000))
									{
										if (unk_0x06FBCEC1E3535A55(iLocal_28, iLocal_29))
										{
											if (unk_0xE8C126B7ADBB9D63(0, 51))
											{
												unk_0x2A8C2D60B4240F99(iLocal_28, iLocal_29);
												iLocal_31 = 1;
												iLocal_32 = 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if (iLocal_31 == 1)
							{
								iLocal_30 = unk_0x53C562FD2B9E3AB0();
								iLocal_31 = 0;
								iLocal_32 = 0;
							}
							if (unk_0xE8C126B7ADBB9D63(0, 51))
							{
							}
						}
					}
				}
			}
		}
	}
}

int func_1(var uParam0, int iParam1)//Position - 0x18E
{
	int iVar0;
	
	iVar0 = unk_0x53C562FD2B9E3AB0();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x1AC
{
	unk_0x96A3D9A8A4C7AFD4();
}

int func_3(int iParam0)//Position - 0x1B8
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_9055.f_99.f_219[iVar0], iVar1))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_9055.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

int func_4(int iParam0)//Position - 0x212
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_9055.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_9055.f_99.f_219[iVar0]), iVar1);
	return 1;
}

