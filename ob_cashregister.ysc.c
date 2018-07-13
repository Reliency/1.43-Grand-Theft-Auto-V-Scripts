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
	vector3 vLocal_19 = { 0f, 0f, 0f };
	int iLocal_20 = 0;
	int iLocal_21 = 0;
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
	if (unk_0x3A711520F83BAE98())
	{
		if (unk_0xC80D31E4B587871C(Global_1369394, 1))
		{
			func_17();
		}
		else
		{
			unk_0xAEA89A7E72415961(32, 0, -1);
			func_14(0, -1, 0);
			unk_0x941BE77305BB5695(0);
			iLocal_20 = 1;
		}
	}
	else if (unk_0x7D9C4B359376D38A(2))
	{
		func_17();
	}
	while (true)
	{
		system::wait(0);
		if (iLocal_20 == 1)
		{
			if (func_3())
			{
				func_17();
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iScriptParam_21))
		{
			if (unk_0xC8F310BD22DD910A(iScriptParam_21))
			{
				switch (iLocal_18)
				{
					case 0:
						if (unk_0xD5BF96615F17406E(iScriptParam_21))
						{
							vLocal_19 = { unk_0xB3328BA8976B416C(iScriptParam_21, 1) };
							iLocal_18 = 1;
						}
						break;
					
					case 1:
						if ((unk_0xEE6BA6C2ABB48CC3(iScriptParam_21) && unk_0xDE3C98B57A41E603(iScriptParam_21)) && !unk_0x9761C10D57B68069(iScriptParam_21))
						{
							func_1();
							iLocal_18 = 2;
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_17();
			}
		}
		else
		{
			func_17();
		}
	}
}

void func_1()//Position - 0x113
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = joaat("prop_money_bag_01");
	iVar1 = joaat("pickup_money_med_bag");
	iVar3 = unk_0x63A6486593EC7EC3(70, 121);
	if (unk_0x3A711520F83BAE98())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = unk_0x63A6486593EC7EC3(50, 101);
		iVar3 = func_2(iVar3, 1);
	}
	unk_0x872F1C1F8587CCC7(&iVar2, 3);
	unk_0x872F1C1F8587CCC7(&iVar2, 4);
	unk_0x6FF834D85E2DD4C6(iVar0);
	while (!unk_0x9A0B2ED5055D3F0B(iVar0))
	{
		system::wait(0);
	}
	unk_0x06583789B8C15A6C(iVar1, unk_0xCC1609D1BF2658E4(vLocal_19, 1,2f, 1,5f), iVar2, iVar3, 0, iVar0);
}

int func_2(int iParam0, int iParam1)//Position - 0x198
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (system::to_float(iParam0) * Global_262145);
				iParam0 = system::round(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_3()//Position - 0x1D9
{
	var uVar0;
	
	func_10(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_9())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_8())
	{
		return 1;
	}
	if (func_7(157))
	{
		if (!func_6())
		{
			return 1;
		}
	}
	if (func_7(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_4() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_4()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_4()//Position - 0x263
{
	switch (func_5())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_5()//Position - 0x297
{
	return Global_25233;
}

bool func_6()//Position - 0x2A2
{
	return Global_2447174.f_586;
}

int func_7(int iParam0)//Position - 0x2B1
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_8()//Position - 0x2C8
{
	return Global_2456830;
}

bool func_9()//Position - 0x2D4
{
	return Global_2447174.f_581;
}

void func_10(var uParam0)//Position - 0x2E3
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(1))
	{
		iVar1 = unk_0xA387B84DA2EB1BEE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x575EF325DA5E3F04(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1155637934:
					func_11(iVar0);
					break;
				
				case 1662227603:
					unk_0x575EF325DA5E3F04(1, iVar0, &vVar3, 4);
					if (vVar3.z == 1204917378)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_11(int iParam0)//Position - 0x356
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_13(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_12(iVar2, &bVar3))
						{
							unk_0x38CCEC620E3BB265(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x5380482A432E314E(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_12(int iParam0, var uParam1)//Position - 0x3D7
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x9761C10D57B68069(iParam0))
		{
			if (unk_0x828686E167EA3FD3(iParam0))
			{
				if (!unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(iParam0)))
				{
					unk_0xDD29FF4BAB8AFF9C(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xCB234F3DD6FF9368(iParam0, 0))
		{
			if (unk_0xA0BF73C5030D3F60(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_13(int iParam0, bool bParam1, bool bParam2)//Position - 0x436
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5BEF7A5AB8F17255(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436181.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_14(int iParam0, int iParam1, bool bParam2)//Position - 0x480
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_16();
			}
			else
			{
				return 0;
			}
		}
		if (!func_15())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_16();
					}
					else
					{
						return 0;
					}
				}
				if (func_9())
				{
					if (!bParam2)
					{
						func_16();
					}
					else
					{
						return 0;
					}
				}
				if (func_7(155))
				{
					if (!bParam2)
					{
						func_16();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x6CF53DE0FDF04073())
			{
				if (!bParam2)
				{
					func_16();
				}
				else
				{
					return 0;
				}
			}
		}
		system::wait(0);
		iVar0 = unk_0x8A8E6DE54B880941();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			if (!bParam2)
			{
				func_16();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x6CF53DE0FDF04073())
	{
		if (!bParam2)
		{
			func_16();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_15()//Position - 0x595
{
	return Global_1312831;
}

void func_16()//Position - 0x5A1
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_17()//Position - 0x5AD
{
	unk_0x96A3D9A8A4C7AFD4();
}

