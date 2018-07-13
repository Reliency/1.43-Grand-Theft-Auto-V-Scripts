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
	struct<17> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_21 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	if (unk_0x7D9C4B359376D38A(50))
	{
		func_22();
	}
	while (true)
	{
		if (Global_104555.f_20380.f_145 > 0 || Global_103195)
		{
			if (!Global_103195)
			{
				if ((Global_35861 != 6 && Global_35861 != 15) && !Global_88985)
				{
					func_22();
				}
				if (!Global_103194)
				{
					if (Global_104555.f_20380.f_145 > 0)
					{
						if (func_19(&(Global_104555.f_20380[iLocal_21 /*16*/])))
						{
							if (func_17(func_18()))
							{
								if (unk_0xC80D31E4B587871C(Global_104555.f_20380[iLocal_21 /*16*/].f_11, func_12()))
								{
									if (Global_104555.f_20380[iLocal_21 /*16*/].f_12 == Global_104555.f_20380.f_146[func_12()])
									{
										if (unk_0x53C562FD2B9E3AB0() > Global_103197)
										{
											if (unk_0x53C562FD2B9E3AB0() > Global_104555.f_20380[iLocal_21 /*16*/].f_8)
											{
												if (unk_0x74C475EB8E73D398(&(Global_104555.f_20380[iLocal_21 /*16*/].f_4), ""))
												{
													unk_0x082F06A6565F4379(1);
													func_11(&(Global_104555.f_20380[iLocal_21 /*16*/]));
												}
												else
												{
													unk_0x082F06A6565F4379(1);
													func_10(&(Global_104555.f_20380[iLocal_21 /*16*/]), &(Global_104555.f_20380[iLocal_21 /*16*/].f_4));
												}
												if (Global_104555.f_20380[iLocal_21 /*16*/].f_13 != 0)
												{
													func_9(Global_104555.f_20380[iLocal_21 /*16*/].f_13, 0);
												}
												Local_20 = { Global_104555.f_20380[iLocal_21 /*16*/] };
												Local_20.f_4 = { Global_104555.f_20380[iLocal_21 /*16*/].f_4 };
												Local_20.f_8 = Global_104555.f_20380[iLocal_21 /*16*/].f_8;
												Local_20.f_10 = Global_104555.f_20380[iLocal_21 /*16*/].f_10;
												Local_20.f_9 = Global_104555.f_20380[iLocal_21 /*16*/].f_9;
												Local_20.f_11 = Global_104555.f_20380[iLocal_21 /*16*/].f_11;
												Local_20.f_12 = Global_104555.f_20380[iLocal_21 /*16*/].f_12;
												Local_20.f_13 = Global_104555.f_20380[iLocal_21 /*16*/].f_13;
												Local_20.f_14 = Global_104555.f_20380[iLocal_21 /*16*/].f_14;
												Local_20.f_15 = Global_104555.f_20380[iLocal_21 /*16*/].f_15;
												Local_20.f_16 = 0;
												Global_103198 = { Global_104555.f_20380[iLocal_21 /*16*/] };
												Global_103196 = unk_0x53C562FD2B9E3AB0();
												iVar0 = iLocal_21;
												while (iVar0 <= (Global_104555.f_20380.f_145 - 2))
												{
													func_8(iVar0, iVar0 + 1);
													iVar0++;
												}
												func_7((Global_104555.f_20380.f_145 - 1));
												Global_104555.f_20380.f_145 = (Global_104555.f_20380.f_145 - 1);
												func_6();
												Global_103195 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!func_4())
			{
				if (unk_0x74C475EB8E73D398(&(Local_20.f_4), ""))
				{
					if (func_3(&Local_20))
					{
						unk_0x3E80C2F7BC665259(0);
					}
				}
				else if (func_2(&Local_20, &(Local_20.f_4)))
				{
					unk_0x3E80C2F7BC665259(0);
				}
				if ((unk_0x53C562FD2B9E3AB0() - Global_103196) > 4000 || Local_20.f_16)
				{
					if (Local_20.f_14 != 0)
					{
						func_9(Local_20.f_14, 0);
					}
					Global_103197 = unk_0x53C562FD2B9E3AB0() + 250;
				}
				else
				{
					if (Local_20.f_10 != -1)
					{
						iVar1 = 20000;
					}
					else
					{
						iVar1 = -1;
					}
					func_1(&Local_20, &(Local_20.f_4), Local_20.f_12, 1000, iVar1, Local_20.f_9, Local_20.f_11, Local_20.f_13, Local_20.f_14, Local_20.f_15);
				}
				StringCopy(&Local_20, "", 16);
				StringCopy(&(Local_20.f_4), "", 16);
				Local_20.f_8 = 0;
				Local_20.f_9 = 0;
				Local_20.f_10 = -1;
				Local_20.f_11 = 0;
				Local_20.f_12 = 0;
				Local_20.f_13 = 0;
				Local_20.f_14 = 0;
				Local_20.f_15 = 0;
				Local_20.f_16 = 0;
				Global_103196 = 0;
				Global_103195 = 0;
			}
			if (!unk_0x74C475EB8E73D398(&(Global_104555.f_20380[iLocal_21 /*16*/]), &Local_20) && !unk_0x74C475EB8E73D398(&(Global_104555.f_20380[iLocal_21 /*16*/]), ""))
			{
				if (Global_104555.f_20380[iLocal_21 /*16*/].f_10 != -1)
				{
					if (unk_0x53C562FD2B9E3AB0() > Global_104555.f_20380[iLocal_21 /*16*/].f_10)
					{
						iVar2 = iLocal_21;
						while (iVar2 <= (Global_104555.f_20380.f_145 - 2))
						{
							func_8(iVar2, iVar2 + 1);
							iVar2++;
						}
						func_7((Global_104555.f_20380.f_145 - 1));
						Global_104555.f_20380.f_145 = (Global_104555.f_20380.f_145 - 1);
						func_6();
					}
				}
			}
			iLocal_21++;
			if (iLocal_21 >= Global_104555.f_20380.f_145)
			{
				iLocal_21 = 0;
			}
		}
		else if ((Global_35861 != 6 && Global_35861 != 15) && !Global_88985)
		{
			func_22();
		}
		system::wait(0);
	}
}

void func_1(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x475
{
	int iVar0;
	
	if (unk_0x74C475EB8E73D398(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (unk_0x74C475EB8E73D398(&(Global_104555.f_20380[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_104555.f_20380.f_145 < 9)
	{
		StringCopy(&(Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_4), sParam1, 16);
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_8 = (unk_0x53C562FD2B9E3AB0() + iParam3);
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_9 = iParam5;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_11 = iParam6;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_12 = uParam2;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_13 = iParam7;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_14 = iParam8;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_10 = ((unk_0x53C562FD2B9E3AB0() + iParam3) + iParam4);
		}
		else
		{
			Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_10 = -1;
		}
		Global_104555.f_20380.f_145++;
		func_6();
	}
}

int func_2(char* sParam0, char* sParam1)//Position - 0x647
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	unk_0xA6D2B267C377D7B2(sParam1);
	return unk_0x0683D2027E169355(0);
}

int func_3(char* sParam0)//Position - 0x660
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

int func_4()//Position - 0x673
{
	if (unk_0xA8113D347D14630F())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (Local_20.f_9 != -1 && (unk_0x53C562FD2B9E3AB0() - Global_103196) > Local_20.f_9)
	{
		return 0;
	}
	if (Global_103194)
	{
		return 0;
	}
	if (unk_0xA8113D347D14630F())
	{
		return 0;
	}
	if (unk_0x74C475EB8E73D398(&(Local_20.f_4), ""))
	{
		if (!func_3(&Local_20))
		{
			Local_20.f_16 = 1;
			return 0;
		}
	}
	else if (!func_2(&Local_20, &(Local_20.f_4)))
	{
		Local_20.f_16 = 1;
		return 0;
	}
	return 1;
}

int func_5()//Position - 0x702
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_6()//Position - 0x71C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_104555.f_20380.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_20380[iVar0 /*16*/].f_11, 0))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[0])
			{
				Global_104555.f_20380.f_146[0] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xC80D31E4B587871C(Global_104555.f_20380[iVar0 /*16*/].f_11, 1))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[1])
			{
				Global_104555.f_20380.f_146[1] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xC80D31E4B587871C(Global_104555.f_20380[iVar0 /*16*/].f_11, 2))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[2])
			{
				Global_104555.f_20380.f_146[2] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_7(int iParam0)//Position - 0x83C
{
	StringCopy(&(Global_104555.f_20380[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_104555.f_20380[iParam0 /*16*/].f_4), "", 16);
	Global_104555.f_20380[iParam0 /*16*/].f_8 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_9 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_11 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_10 = -1;
	Global_104555.f_20380[iParam0 /*16*/].f_12 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_13 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_14 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_15 = 0;
}

void func_8(int iParam0, int iParam1)//Position - 0x8D4
{
	Global_104555.f_20380[iParam0 /*16*/] = { Global_104555.f_20380[iParam1 /*16*/] };
	Global_104555.f_20380[iParam0 /*16*/].f_4 = { Global_104555.f_20380[iParam1 /*16*/].f_4 };
	Global_104555.f_20380[iParam0 /*16*/].f_8 = Global_104555.f_20380[iParam1 /*16*/].f_8;
	Global_104555.f_20380[iParam0 /*16*/].f_10 = Global_104555.f_20380[iParam1 /*16*/].f_10;
	Global_104555.f_20380[iParam0 /*16*/].f_9 = Global_104555.f_20380[iParam1 /*16*/].f_9;
	Global_104555.f_20380[iParam0 /*16*/].f_11 = Global_104555.f_20380[iParam1 /*16*/].f_11;
	Global_104555.f_20380[iParam0 /*16*/].f_12 = Global_104555.f_20380[iParam1 /*16*/].f_12;
	Global_104555.f_20380[iParam0 /*16*/].f_13 = Global_104555.f_20380[iParam1 /*16*/].f_13;
	Global_104555.f_20380[iParam0 /*16*/].f_14 = Global_104555.f_20380[iParam1 /*16*/].f_14;
	Global_104555.f_20380[iParam0 /*16*/].f_15 = Global_104555.f_20380[iParam1 /*16*/].f_15;
}

void func_9(int iParam0, int iParam1)//Position - 0x9E4
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_104555.f_8583[iParam0] = 1;
	Global_104555.f_8583.f_236[iParam0] = (unk_0x53C562FD2B9E3AB0() + iParam1);
}

void func_10(char* sParam0, char* sParam1)//Position - 0xA21
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0xA6D2B267C377D7B2(sParam1);
	unk_0x376CFA11DE0FE521(0, 1, 1, -1);
}

void func_11(char* sParam0)//Position - 0xA3D
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 1, 1, -1);
}

int func_12()//Position - 0xA53
{
	func_13();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_13()//Position - 0xA6C
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_16(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_15(unk_0xFC1458A37D98B502());
			if (func_17(iVar0) && (!func_14(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_17(Global_104555.f_2353.f_539.f_4301))
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

bool func_14(int iParam0)//Position - 0xB69
{
	return Global_35861 == iParam0;
}

int func_15(int iParam0)//Position - 0xB77
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)//Position - 0xBB4
{
	if (func_17(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_17(int iParam0)//Position - 0xBDE
{
	return iParam0 < 3;
}

int func_18()//Position - 0xBEA
{
	func_13();
	return Global_104555.f_2353.f_539.f_4301;
}

int func_19(var uParam0)//Position - 0xC03
{
	if (unk_0xF491DD47B88AA84E())
	{
		return 0;
	}
	if (unk_0xA8113D347D14630F())
	{
		return 0;
	}
	if (!unk_0x9F7B586A14398C40())
	{
		return 0;
	}
	if (unk_0x08D525BE62A22AE0())
	{
		return 0;
	}
	if (func_21())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (uParam0->f_12 < 3)
	{
		if (func_20())
		{
			return 0;
		}
		if (Global_70854)
		{
			return 0;
		}
		if (Global_89898)
		{
			return 0;
		}
		if (!unk_0xC80D31E4B587871C(uParam0->f_15, 1))
		{
			if (Global_89906)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_20()//Position - 0xC90
{
	if (Global_71116)
	{
		return 1;
	}
	else if (Global_55897 && !Global_55903)
	{
		return 1;
	}
	return 0;
}

int func_21()//Position - 0xCBA
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

void func_22()//Position - 0xCD6
{
	if (Global_103195)
	{
		if (unk_0x74C475EB8E73D398(&(Local_20.f_4), ""))
		{
			if (func_3(&Local_20))
			{
				unk_0x3E80C2F7BC665259(1);
			}
		}
		else if (func_2(&Local_20, &(Local_20.f_4)))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
	Global_103196 = 0;
	Global_103195 = 0;
	unk_0x96A3D9A8A4C7AFD4();
}

