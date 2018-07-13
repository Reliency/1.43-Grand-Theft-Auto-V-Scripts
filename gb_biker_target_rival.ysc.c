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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	func_74();
	while (true)
	{
		func_73();
		if (func_65())
		{
			func_64();
		}
		if (Global_2512808.f_4856.f_567 == 0)
		{
			func_64();
		}
		switch (iLocal_35)
		{
			case 0:
				iLocal_35 = 1;
				break;
			
			case 1:
				if (func_11())
				{
					iLocal_35 = 2;
				}
				break;
			
			case 2:
				if (!func_1())
				{
					iLocal_35 = 4;
				}
				break;
			
			case 4:
				func_64();
				break;
		}
	}
}

int func_1()//Position - 0xD3
{
	int iVar0;
	
	if (func_7(1))
	{
		iVar0 = Global_2512808.f_4856.f_566;
		if (iVar0 != func_6())
		{
			if (func_4(iVar0))
			{
				func_2(iVar0);
				return 0;
			}
		}
		else
		{
			func_2(iVar0);
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_2(int iParam0)//Position - 0x120
{
	if (iParam0 != func_6())
	{
		func_3(iParam0);
	}
	Global_2512808.f_4856.f_566 = func_6();
}

void func_3(int iParam0)//Position - 0x145
{
	int iVar0;
	
	iVar0 = iParam0;
	unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_385), iVar0);
	unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_386), iVar0);
	unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_387), iVar0);
	unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_389), iVar0);
	unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_393), iVar0);
	unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_388), iVar0);
}

int func_4(int iParam0)//Position - 0x19F
{
	if (!func_5(iParam0, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1, bool bParam2)//Position - 0x1B8
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

int func_6()//Position - 0x202
{
	return -1;
}

bool func_7(bool bParam0)//Position - 0x20B
{
	return func_8(unk_0x9EB17624F44A8DA4(), bParam0);
}

int func_8(int iParam0, bool bParam1)//Position - 0x21D
{
	return func_9(iParam0, bParam1, 1);
}

int func_9(int iParam0, bool bParam1, int iParam2)//Position - 0x22E
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_10(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1627537[iParam0 /*532*/].f_11;
	if (iVar0 != func_6() && Global_1627537[iVar0 /*532*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0, int iParam1)//Position - 0x28A
{
	if (iParam0 != func_6())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_6())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 == iParam0 && Global_1627537[iParam0 /*532*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11()//Position - 0x2D9
{
	int iVar0;
	
	if (func_7(1))
	{
		iVar0 = Global_2512808.f_4856.f_566;
		if (iVar0 != func_6())
		{
			if (func_12(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_12(int iParam0)//Position - 0x30C
{
	if (func_5(iParam0, 0, 1))
	{
		func_62(iParam0, 432, 1);
		if (func_61(iParam0))
		{
			func_58(iParam0, func_59(func_60(unk_0x9EB17624F44A8DA4())), 1);
		}
		if (func_57(iParam0))
		{
			func_55(iParam0, 1, 1);
		}
		func_52(iParam0, 1);
		func_13(iParam0, 1, 5000);
		return 1;
	}
	return 0;
}

void func_13(int iParam0, bool bParam1, int iParam2)//Position - 0x36C
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (iParam0 == Global_2436181)
		{
		}
		else if (unk_0xA6DECE14FC9A8C51(Global_2415606[iVar0]))
		{
			unk_0x872F1C1F8587CCC7(&(Global_2415606.f_367), iVar0);
			unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_372), iVar0);
			unk_0x0A8FD2D5529E1737(Global_2415606[iVar0], 1);
			unk_0x6E89BBF3A7864ED8(Global_2415606[iVar0], 250);
			func_14(iParam0);
			if (iParam2 < 0)
			{
				unk_0x872F1C1F8587CCC7(&(Global_2415606.f_372), iVar0);
			}
			else
			{
				Global_2415606.f_198[iVar0] = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), iParam2);
			}
		}
		else
		{
			unk_0x872F1C1F8587CCC7(&(Global_2415606.f_367), iVar0);
			unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_372), iVar0);
			if (iParam2 < 0)
			{
				unk_0x872F1C1F8587CCC7(&(Global_2415606.f_372), iVar0);
			}
			else
			{
				Global_2415606.f_198[iVar0] = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_367), iVar0);
		unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_372), iVar0);
		if (unk_0xA6DECE14FC9A8C51(Global_2415606[iVar0]))
		{
			func_14(iParam0);
			unk_0x0A8FD2D5529E1737(Global_2415606[iVar0], 0);
		}
	}
}

void func_14(int iParam0)//Position - 0x4A1
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0, 1))
	{
		if (unk_0xA6DECE14FC9A8C51(Global_2415606[iVar0]))
		{
			Global_2415606.f_901[iVar0] = func_15(iParam0);
			unk_0xF27F72CA15E148EE(Global_2415606[iVar0], Global_2415606.f_901[iVar0]);
		}
	}
}

int func_15(int iParam0)//Position - 0x4EF
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0, 1))
	{
		if (unk_0xA6DECE14FC9A8C51(Global_2415606[iVar0]))
		{
			iVar1 = unk_0xD946FA1B9E94071E(Global_2415606[iVar0]);
			if (unk_0xC80D31E4B587871C(Global_2415606.f_383, iVar0) || unk_0xC80D31E4B587871C(Global_2415606.f_382, iVar0))
			{
				return 1;
			}
			else if ((unk_0xC80D31E4B587871C(Global_2415606.f_368, iVar0) || unk_0xC80D31E4B587871C(Global_2415606.f_367, iVar0)) || unk_0xC80D31E4B587871C(Global_2415606.f_385, iVar0))
			{
				return func_49(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_49(7);
						break;
					
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_49(11);
						break;
					
					case 254:
						if (unk_0x917EE18109C5ACEA(iParam0) == unk_0x917EE18109C5ACEA(Global_2436181))
						{
							return func_49(6);
						}
						else
						{
							return func_49(5);
						}
						break;
					
					case 271:
						if (unk_0x917EE18109C5ACEA(iParam0) == unk_0x917EE18109C5ACEA(Global_2436181))
						{
							return func_49(6);
						}
						else
						{
							return func_49(5);
						}
						break;
					
					case 163:
					case 164:
						if (func_48(Global_2436181, iParam0, -2, 0))
						{
							return func_49(6);
						}
						else
						{
							return func_49(5);
						}
						break;
					
					case 303:
					case 418:
						return func_49(10);
						break;
					
					case 364:
						if (func_16(Global_2436181, iParam0, 1))
						{
							return func_49(10);
						}
						else
						{
							return func_49(5);
						}
						break;
					
					case 478:
					case 501:
					case 523:
					case 556:
						return func_49(10);
						break;
					
					case 417:
						if (func_16(Global_2436181, iParam0, 1))
						{
							return func_49(6);
						}
						else
						{
							return func_49(5);
						}
						break;
					
					case 256:
					case 268:
					default:
						if (func_16(Global_2436181, iParam0, 1))
						{
							return func_49(6);
						}
						else
						{
							return func_49(5);
						}
						break;
					}
				}
			}
	}
	return 1;
}

int func_16(int iParam0, int iParam1, bool bParam2)//Position - 0x72C
{
	if (func_19(iParam0, -2, 0, 0) == func_19(iParam1, -2, 0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (func_17(func_19(iParam0, -2, 0, 0)) && func_17(func_19(iParam1, -2, 0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_17(int iParam0)//Position - 0x781
{
	if (iParam0 == func_18(1) || iParam0 == func_18(0))
	{
		return 1;
	}
	return 0;
}

int func_18(bool bParam0)//Position - 0x7A7
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_19(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x7BE
{
	int iVar0;
	int iVar1;
	
	if (func_43(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x917EE18109C5ACEA(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_117386[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_43(unk_0x9EB17624F44A8DA4()) || (func_42() && func_41())) && !unk_0xC80D31E4B587871C(Global_2512808.f_4556, 31))
	{
		iVar1 = func_40();
		if (unk_0x6ADD12BF4D6D2587(iVar1))
		{
			if (unk_0x1417A5CC924DE120(iVar1))
			{
				if (unk_0xDF35170AEEFB473B(iVar1) != -1)
				{
					if (func_5(unk_0xDF35170AEEFB473B(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
						{
							if (Global_4456448.f_117386[iParam1] != -1)
							{
								return func_38(iParam1, iParam0, 0);
							}
							else
							{
								return func_26(iParam0, unk_0xDF35170AEEFB473B(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_26(iParam0, unk_0xDF35170AEEFB473B(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
			{
				if (Global_4456448.f_117386[iParam1] != -1)
				{
					return func_38(iParam1, iParam0, 0);
				}
				else
				{
					return func_20(0, -1, 0);
				}
			}
			else
			{
				return func_20(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
	{
		if (Global_4456448.f_117386[iParam1] != -1)
		{
			return func_38(iParam1, iParam0, 0);
		}
		else
		{
			return func_26(iParam0, unk_0x9EB17624F44A8DA4(), iParam1, bParam2, bParam3);
		}
	}
	return func_26(iParam0, unk_0x9EB17624F44A8DA4(), iParam1, bParam2, bParam3);
}

int func_20(bool bParam0, int iParam1, bool bParam2)//Position - 0x98E
{
	return func_21(unk_0x9EB17624F44A8DA4(), bParam0, iParam1, bParam2);
}

int func_21(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x9A4
{
	int iVar0;
	
	if (!unk_0x552F39AE86E07792(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x917EE18109C5ACEA(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_25(iVar0, iParam2, 0) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_18(1);
				}
				else
				{
					return func_18(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_4, 20))
			{
				return func_22(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_22(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_18(1);
	}
	return func_18(0);
}

int func_22(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xA68
{
	int iVar0;
	
	iVar0 = func_24(iParam0, iParam1, iParam3);
	if (func_23(Global_4456448.f_122309))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_23(int iParam0)//Position - 0xB7F
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8408[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_24(int iParam0, int iParam1, int iParam2)//Position - 0xBB8
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_25(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_25(int iParam0, int iParam1, int iParam2)//Position - 0xBFF
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 0);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 1);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 2);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 4);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 5);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 6);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 8);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 9);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 10);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 12);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 13);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 14);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_26(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xDCA
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x917EE18109C5ACEA(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1595693[iVar2 /*680*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_34(1))
			{
				iVar3 = func_30(iParam0);
				if (!iVar3 == -1)
				{
					return func_28(iVar3);
				}
			}
			if ((func_48(iParam1, iParam0, iVar0, 0) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18)) || ((func_25(unk_0x917EE18109C5ACEA(iParam1), unk_0x917EE18109C5ACEA(iParam0), 0) && unk_0xC80D31E4B587871C(Global_4456448.f_15, 23)) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18)))
			{
				return func_18(1);
			}
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_15, 26))
			{
				return func_27(1);
			}
			else
			{
				return func_21(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574312 || Global_1574303) || Global_1595693[iParam0 /*680*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574312 == 1 && Global_1574322 == 0))
			{
				return func_18(1);
			}
			else
			{
				return func_21(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574307 && Global_1573842.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_30(iParam0);
	if (!iVar4 == -1)
	{
		return func_28(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_27(bool bParam0)//Position - 0xF6E
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_28(int iParam0)//Position - 0xF85
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_29(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_29(int iParam0)//Position - 0x1048
{
	return Global_2416800.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_30(int iParam0)//Position - 0x105F
{
	if (!iParam0 == func_6())
	{
		if (func_32(iParam0, 1))
		{
			return Global_2416800.f_2071.f_11[func_31(iParam0)];
		}
	}
	return -1;
}

int func_31(int iParam0)//Position - 0x1091
{
	if (iParam0 != func_6())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_6();
}

bool func_32(int iParam0, bool bParam1)//Position - 0x10B4
{
	if (!bParam1)
	{
		if (func_33(iParam0))
		{
			return 0;
		}
	}
	return Global_1627537[iParam0 /*532*/].f_11 != func_6();
}

int func_33(int iParam0)//Position - 0x10DF
{
	if (iParam0 != func_6())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_6())
		{
			return Global_1627537[iParam0 /*532*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x1114
{
	if ((func_37() || func_36()) || (func_35() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_35()//Position - 0x1143
{
	return Global_2447174.f_16;
}

var func_36()//Position - 0x1151
{
	return Global_2447174.f_15;
}

var func_37()//Position - 0x115F
{
	return Global_2447174.f_14;
}

int func_38(int iParam0, int iParam1, bool bParam2)//Position - 0x116D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_980513.f_12[iParam0];
	if (func_34(1))
	{
		iVar2 = func_30(iParam1);
		if (!iVar2 == -1)
		{
			return func_28(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xC80D31E4B587871C(Global_4456448.f_97[iParam0 /*10024*/].f_5191[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_6())
	{
		if (Global_4456448.f_117386[iParam0] != -1 && Global_4456448.f_117386[iParam0] <= 4)
		{
			if (Global_4456448.f_117386[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_117386[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_117386[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_117386[iParam0] == 4)
			{
				if (unk_0xC80D31E4B587871C(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_117386[iParam0];
			}
		}
		else
		{
			iVar0 = func_21(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xC80D31E4B587871C(Global_4456448.f_21, 13))
		{
			iVar0 = func_39(iParam0);
		}
		if (unk_0xC80D31E4B587871C(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_39(int iParam0)//Position - 0x12D2
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_144012;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_144013;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_144014;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_144015;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_40()//Position - 0x13A7
{
	return Global_2359302.f_2;
}

bool func_41()//Position - 0x13B5
{
	return unk_0xC80D31E4B587871C(Global_2359302, 4);
}

bool func_42()//Position - 0x13C6
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

int func_43(int iParam0)//Position - 0x13E3
{
	if (func_45(iParam0, 0))
	{
		return 1;
	}
	if (func_44())
	{
		if (iParam0 == unk_0x9EB17624F44A8DA4())
		{
			return 1;
		}
	}
	if (unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_44()//Position - 0x1425
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

bool func_45(int iParam0, int iParam1)//Position - 0x1436
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_46(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595693[iParam0 /*680*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			bVar0 = unk_0x917EE18109C5ACEA(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_46(int iParam0, bool bParam1)//Position - 0x1481
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
	}
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_47()//Position - 0x14C2
{
	return Global_1312736;
}

bool func_48(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x14CE
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x917EE18109C5ACEA(iParam0) == -1 && unk_0x917EE18109C5ACEA(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x917EE18109C5ACEA(iParam0) == unk_0x917EE18109C5ACEA(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x917EE18109C5ACEA(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x917EE18109C5ACEA(iParam0) == iParam2;
	}
	return unk_0x917EE18109C5ACEA(iParam0) == iParam2;
}

int func_49(int iParam0)//Position - 0x1546
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_51())
			{
				if (iParam0 == 5)
				{
					iParam0 = 6;
				}
				else
				{
					iParam0 = 5;
				}
			}
			break;
	}
	return func_50(iParam0);
}

int func_50(int iParam0)//Position - 0x1580
{
	switch (iParam0)
	{
		case 10:
			return 9;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 7;
			break;
		
		case 8:
			return 6;
			break;
		
		case 7:
			return 4;
			break;
		
		case 4:
		case 11:
			return 2;
			break;
		
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
			break;
	}
	return 1;
}

int func_51()//Position - 0x160B
{
	int iVar0;
	
	iVar0 = unk_0x917EE18109C5ACEA(Global_2436181);
	if (iVar0 > -1 && iVar0 < 4)
	{
		return unk_0xC80D31E4B587871C(Global_4456448.f_97[iVar0 /*10024*/].f_5228, 4);
	}
	return 0;
}

void func_52(int iParam0, bool bParam1)//Position - 0x1644
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == func_53())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0x8F05914DD835E69F(Global_2415606.f_809) || Global_2415606.f_809 == unk_0xBBA15366508D1BDE())
	{
		if (bParam1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_2415606.f_390), iVar0);
			Global_2415606.f_809 = unk_0xBBA15366508D1BDE();
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_390), iVar0);
			if (Global_2415606.f_390 == 0)
			{
				Global_2415606.f_809 = -1;
			}
		}
	}
}

int func_53()//Position - 0x16D2
{
	switch (func_54())
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

int func_54()//Position - 0x1706
{
	return Global_25233;
}

void func_55(int iParam0, bool bParam1, bool bParam2)//Position - 0x1711
{
	if (bParam1)
	{
		if (func_5(iParam0, 1, 1))
		{
			Global_2415606.f_710[iParam0] = unk_0xBBA15366508D1BDE();
			unk_0x872F1C1F8587CCC7(&(Global_2415606.f_364), iParam0);
			func_56(iParam0, bParam2);
		}
	}
	else
	{
		func_56(iParam0, bParam2);
		unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_364), iParam0);
		Global_2415606.f_710[iParam0] = -1;
	}
}

void func_56(int iParam0, bool bParam1)//Position - 0x1774
{
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_2415606.f_365), iParam0);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_365), iParam0);
	}
	if (unk_0xA6DECE14FC9A8C51(Global_2415606[iParam0]))
	{
		if (bParam1)
		{
			unk_0x66DAED36FB41050D(Global_2415606[iParam0], false);
		}
		else
		{
			unk_0x66DAED36FB41050D(Global_2415606[iParam0], true);
		}
	}
}

int func_57(int iParam0)//Position - 0x17CF
{
	if (unk_0x8F05914DD835E69F(Global_2415606.f_710[iParam0]))
	{
		if (!Global_2415606.f_710[iParam0] == unk_0xBBA15366508D1BDE())
		{
			return 0;
		}
	}
	return 1;
}

void func_58(int iParam0, var uParam1, bool bParam2)//Position - 0x1802
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == func_53())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_61(iParam0))
	{
		if (bParam2)
		{
			unk_0x872F1C1F8587CCC7(&(Global_2415606.f_386), iVar0);
			Global_2415606.f_611[iParam0] = unk_0xBBA15366508D1BDE();
			Global_2415606.f_446[iVar0] = uParam1;
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_386), iVar0);
			Global_2415606.f_611[iParam0] = -1;
		}
	}
}

int func_59(int iParam0)//Position - 0x1882
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0x31758B9A51671C43(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_60(int iParam0)//Position - 0x1AEA
{
	int iVar0;
	
	iVar0 = func_30(iParam0);
	if (iVar0 != -1)
	{
		return func_28(iVar0);
	}
	return 1;
}

int func_61(int iParam0)//Position - 0x1B0A
{
	if (!unk_0x8F05914DD835E69F(Global_2415606.f_611[iParam0]) || Global_2415606.f_611[iParam0] == unk_0xBBA15366508D1BDE())
	{
		return 1;
	}
	return 0;
}

void func_62(int iParam0, int iParam1, bool bParam2)//Position - 0x1B40
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == func_53())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0x8F05914DD835E69F(Global_2415606.f_578[iParam0]) || Global_2415606.f_578[iParam0] == unk_0xBBA15366508D1BDE())
	{
		if (bParam2)
		{
			if (!unk_0xC80D31E4B587871C(Global_2415606.f_385, iVar0))
			{
				func_63();
			}
			unk_0x872F1C1F8587CCC7(&(Global_2415606.f_385), iVar0);
			Global_2415606.f_413[iVar0] = uVar1;
			Global_2415606.f_578[iParam0] = unk_0xBBA15366508D1BDE();
		}
		else
		{
			if (unk_0xC80D31E4B587871C(Global_2415606.f_385, iVar0))
			{
				func_63();
			}
			unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_385), iVar0);
			Global_2415606.f_578[iParam0] = -1;
		}
	}
}

void func_63()//Position - 0x1C0D
{
	Global_2415606.f_1009 = 1;
}

void func_64()//Position - 0x1C1D
{
	func_2(Global_2512808.f_4856.f_566);
	unk_0x96A3D9A8A4C7AFD4();
}

int func_65()//Position - 0x1C37
{
	var uVar0;
	
	func_70(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_69())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_68())
	{
		return 1;
	}
	if (func_67(157))
	{
		if (!func_66())
		{
			return 1;
		}
	}
	if (func_67(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_53() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_53()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_66()//Position - 0x1CC1
{
	return Global_2447174.f_586;
}

int func_67(int iParam0)//Position - 0x1CD0
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_68()//Position - 0x1CE7
{
	return Global_2456830;
}

bool func_69()//Position - 0x1CF3
{
	return Global_2447174.f_581;
}

void func_70(var uParam0)//Position - 0x1D02
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
					func_71(iVar0);
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

void func_71(int iParam0)//Position - 0x1D75
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_5(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_72(iVar2, &bVar3))
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

int func_72(int iParam0, var uParam1)//Position - 0x1DF6
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

void func_73()//Position - 0x1E55
{
	system::wait(0);
}

int func_74()//Position - 0x1E62
{
	unk_0x941BE77305BB5695(0);
	return 1;
}

