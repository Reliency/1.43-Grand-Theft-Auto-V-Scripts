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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	struct<8> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	struct<11> Local_48[50];
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0,0375f;
	fLocal_29 = 0,17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	bLocal_40 = true;
	bLocal_41 = true;
	iLocal_49 = 15;
	if (unk_0x7D9C4B359376D38A(210))
	{
		func_54();
	}
	if (unk_0x8F38E94BBF3404CD(joaat("spaceshipparts")) > 1)
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	func_53(14);
	func_51();
	func_50(&Local_42, 0, joaat("prop_power_cell"), "SSHIP_COLLECT");
	func_48(&Local_42, joaat("num_hidden_packages_1"), 755, 50);
	while (true)
	{
		system::wait(0);
		func_47(unk_0xFC1458A37D98B502());
		if (func_15(&Local_42, &Local_48) || func_14(107) == 1)
		{
			if (!bLocal_51)
			{
				bLocal_51 = func_10(367701416, 1, 2, 69, 5000, 10000, -1, 179, -1, 32, 1);
			}
			if (bLocal_51)
			{
				if (!func_4() == 1)
				{
					func_1("SSHIP_SWITCH", 1, 0, 20000, 10000, 3, 0, 0, 0);
				}
				func_54();
			}
		}
	}
}

void func_1(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x12D
{
	func_2(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_2(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x14E
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
		func_3();
	}
}

void func_3()//Position - 0x321
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

int func_4()//Position - 0x441
{
	func_5();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_5()//Position - 0x45A
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_9(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_8(unk_0xFC1458A37D98B502());
			if (func_7(iVar0) && (!func_6(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_7(Global_104555.f_2353.f_539.f_4301))
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

bool func_6(int iParam0)//Position - 0x557
{
	return Global_35861 == iParam0;
}

bool func_7(int iParam0)//Position - 0x565
{
	return iParam0 < 3;
}

int func_8(int iParam0)//Position - 0x571
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_9(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_9(int iParam0)//Position - 0x5AE
{
	if (func_7(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_10(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x5D8
{
	struct<14> Var0;
	
	if (func_13(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0xC80D31E4B587871C(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_104555.f_7658.f_764 < 8)
	{
		Var0 = iParam0;
		Var0.f_3 = func_12(iParam1);
		Var0.f_4 = (unk_0x53C562FD2B9E3AB0() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_13 = iParam10;
		unk_0x0EE72DB1CD8A3B86(&(Var0.f_1), 0);
		Global_104555.f_7658.f_651[Global_104555.f_7658.f_764 /*14*/] = { Var0 };
		Global_104555.f_7658.f_764++;
		func_11(0);
		func_11(1);
		func_11(2);
		return 1;
	}
	return 0;
}

void func_11(int iParam0)//Position - 0x6F3
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_7(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_7658.f_136)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_7658[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_104555.f_7658[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_104555.f_7658[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_104555.f_7658.f_764)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_7658.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_104555.f_7658.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_104555.f_7658.f_919[iParam0] = iVar1;
}

int func_12(int iParam0)//Position - 0x7B7
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

bool func_13(bool bParam0)//Position - 0x821
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

int func_14(int iParam0)//Position - 0x84C
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_99.f_58[iParam0];
}

int func_15(var uParam0, int iParam1)//Position - 0x879
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	if (!func_6(14) && !unk_0x3E9CABD07B829173())
	{
		unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502());
		vVar2 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		iVar0 = 0;
		while (iVar0 < 1)
		{
			bVar1 = func_46(&(uParam0->f_1), uParam0->f_10);
			if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
			{
				if (!bVar1)
				{
					if (uParam0->f_10 == iLocal_49)
					{
						func_44(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 1, 0, 2);
						if (unk_0xB8B3E5529EDB87D4((iParam1[uParam0->f_10 /*11*/])->f_1))
						{
							unk_0x6E795A41127FC848((iParam1[uParam0->f_10 /*11*/])->f_1, "GtaMloRoomTun5");
						}
					}
					else if ((((uParam0->f_10 == 6 || uParam0->f_10 == 14) || uParam0->f_10 == 21) || uParam0->f_10 == 34) || uParam0->f_10 == 39)
					{
						func_44(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 2);
					}
					else
					{
						func_44(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
					}
				}
			}
			else if (!bVar1)
			{
				func_27(uParam0, iParam1, vVar2);
			}
			uParam0->f_10++;
			if (uParam0->f_10 >= *iParam1)
			{
				uParam0->f_10 = 0;
			}
			iVar0++;
		}
		if (!Global_71116)
		{
			func_16(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 0, &iLocal_50, &iLocal_52, "SSHIP_TITLE", "SSHIP_COLLECT");
		}
		if (!bLocal_51)
		{
			if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
			{
				bLocal_51 = func_10(367701416, 1, 2, 69, 5000, 10000, -1, 179, -1, 32, 1);
			}
		}
		if (!uParam0->f_12 && !uParam0->f_11)
		{
			return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
		}
	}
	return 0;
}

void func_16(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7)//Position - 0xA42
{
	int iVar0;
	
	func_26(0);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0:
				*iParam5 = unk_0xD704C81492296A37("MIDSIZED_MESSAGE");
				if (unk_0x34D11AB5BA7922C2(*iParam5))
				{
					iVar0 = unk_0xD0CA83418A236CB4();
					if (iParam3 == 6)
					{
						unk_0x4AFBCBFDE748D4E0(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", true);
					}
					else
					{
						unk_0x4AFBCBFDE748D4E0(iVar0, "COLLECTED", "HUD_AWARDS", true);
					}
					*iParam4++;
				}
				break;
			
			case 1:
				unk_0x008F3E3CC076EA0E(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0x7E099EB35339C80D(sParam6);
				unk_0x9748595E4799A2CF();
				unk_0x7E099EB35339C80D(sParam7);
				unk_0x6223D539BCD39E76(func_18(iParam3));
				unk_0x9748595E4799A2CF();
				unk_0x271AA5469AF471B3();
				*uParam2 = unk_0x53C562FD2B9E3AB0();
				*iParam4++;
				break;
			
			case 2:
				if ((unk_0x53C562FD2B9E3AB0() - *uParam2) > 7000)
				{
					unk_0x008F3E3CC076EA0E(*iParam5, "SHARD_ANIM_OUT");
					unk_0xD07D5CD276368D36(1);
					unk_0x9499D7329FB840A2(0,33f);
					unk_0x271AA5469AF471B3();
					*iParam4++;
				}
				else if (!func_17())
				{
					if (unk_0x34D11AB5BA7922C2(*iParam5))
					{
						func_26(1);
						unk_0x28E092B1E386EB67(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((unk_0x53C562FD2B9E3AB0() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_17())
				{
					if (unk_0x34D11AB5BA7922C2(*iParam5))
					{
						func_26(1);
						unk_0x28E092B1E386EB67(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (unk_0x34D11AB5BA7922C2(*iParam5))
				{
					unk_0xA68F7B004463AB6F(iParam5);
				}
				func_26(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

int func_17()//Position - 0xBC5
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

int func_18(int iParam0)//Position - 0xBEF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_25(iParam0))
		{
			if (unk_0xC80D31E4B587871C(Global_104555.f_10019.f_108, func_24(func_25(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		unk_0xFA3CE529DBB66C85(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		unk_0xFA3CE529DBB66C85(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		unk_0xFA3CE529DBB66C85(joaat("num_hidden_packages_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_25(iParam0))
		{
			iVar2 = (func_23(iParam0) + iVar1);
			if (func_19(iVar2, -1, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_19(int iParam0, int iParam1, int iParam2)//Position - 0xCB7
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_22();
	}
	iVar1 = func_21(iParam0, iParam1);
	uVar2 = func_20(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_20(int iParam0)//Position - 0xCF4
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xDBE4A47179904C7B((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xDBE4A47179904C7B((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xDBE4A47179904C7B((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xDBE4A47179904C7B((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xDBE4A47179904C7B((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xDBE4A47179904C7B((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xDBE4A47179904C7B((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xDBE4A47179904C7B((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xDBE4A47179904C7B((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xDBE4A47179904C7B((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xDBE4A47179904C7B((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xDBE4A47179904C7B((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xDBE4A47179904C7B((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xDBE4A47179904C7B((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xDBE4A47179904C7B((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0xDBE4A47179904C7B((iParam0 - 18098)) * 64);
	}
	return iVar0;
}

int func_21(int iParam0, int iParam1)//Position - 0xFB4
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_22();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x88B5FB6273C3123E((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x88B5FB6273C3123E((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	return iVar0;
}

int func_22()//Position - 0x124E
{
	return Global_1312736;
}

int func_23(int iParam0)//Position - 0x125A
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_24(int iParam0, int iParam1)//Position - 0x12A1
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_25(int iParam0)//Position - 0x12BD
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_26(int iParam0)//Position - 0x130D
{
	if (Global_71123 != iParam0)
	{
		Global_71123 = iParam0;
	}
}

int func_27(var uParam0, var uParam1, vector3 vParam2)//Position - 0x1327
{
	int iVar0;
	
	iVar0 = uParam0->f_10;
	if ((uParam1[iVar0 /*11*/])->f_10)
	{
		if ((uParam1[iVar0 /*11*/])->f_1 != 0)
		{
			if (unk_0x58786AA7A9E510C0((uParam1[iVar0 /*11*/])->f_1) || func_42((uParam1[iVar0 /*11*/])->f_1))
			{
				func_29(uParam0, uParam1, iVar0);
				return 1;
			}
		}
	}
	if (unk_0xB8B3E5529EDB87D4((uParam1[iVar0 /*11*/])->f_1))
	{
		if ((system::vdist2(vParam2, unk_0x20752E4B9ABBF6F5((uParam1[iVar0 /*11*/])->f_1)) > (60f * 60f) || func_6(13)) || func_6(14))
		{
			func_28(&((uParam1[iVar0 /*11*/])->f_1));
			(uParam1[iVar0 /*11*/])->f_1 = 0;
			(uParam1[iVar0 /*11*/])->f_10 = 0;
		}
	}
	return 0;
}

void func_28(var uParam0)//Position - 0x13E4
{
	if (unk_0xB8B3E5529EDB87D4(*uParam0))
	{
		unk_0x60727D07B2D72C82(*uParam0);
	}
}

void func_29(var uParam0, var uParam1, int iParam2)//Position - 0x13FD
{
	int iVar0;
	
	iVar0 = (func_23(*uParam0) + iParam2);
	func_28(&((uParam1[iParam2 /*11*/])->f_1));
	func_41(&((uParam1[iParam2 /*11*/])->f_2));
	(uParam1[iParam2 /*11*/])->f_1 = 0;
	(uParam1[iParam2 /*11*/])->f_10 = 0;
	func_40(&(uParam0->f_1), iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_39(*uParam0, iParam2, 1);
	}
	unk_0xC4803EF57E953FF3(0, 200, 250);
	unk_0xA28FBFF41378592F(uParam0->f_6, 1f);
	if (bLocal_41)
	{
		func_38(&(uParam0->f_1), iParam2);
	}
	else
	{
		func_35(&(uParam0->f_1));
	}
	func_32();
	unk_0xA82005B4A27F86C3(iVar0);
	func_31(1, 0);
	func_30();
	uParam0->f_11 = 1;
}

int func_30()//Position - 0x14A8
{
	if (func_13(0))
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

void func_31(int iParam0, int iParam1)//Position - 0x14F3
{
	Global_92872.f_7 = iParam0;
	Global_92872.f_8 = iParam1;
}

void func_32()//Position - 0x150B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	unk_0xFA3CE529DBB66C85(func_34(0), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_33(18, iVar0);
	}
	unk_0xFA3CE529DBB66C85(func_34(1), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_33(19, iVar0);
	}
	unk_0xFA3CE529DBB66C85(func_34(3), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_33(20, iVar0);
	}
	iVar2 = ((func_25(0) + func_25(1)) + func_25(3));
	if (iVar2 > 0)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	unk_0xBFFF62F75445099D(joaat("percent_hidden_packages"), iVar3, 1);
}

int func_33(int iParam0, int iParam1)//Position - 0x15AE
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xDE008D1391A23FFE(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x2FD2B2D208844275(iParam0, iParam1);
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x15FF
{
	if (iParam0 == 3)
	{
		return joaat("num_hidden_packages_3");
	}
	if (iParam0 == 1)
	{
		return joaat("num_hidden_packages_0");
	}
	if (iParam0 == 0)
	{
		return joaat("num_hidden_packages_1");
	}
	if (iParam0 == 5)
	{
		return joaat("num_hidden_packages_4");
	}
	return joaat("num_hidden_packages_2");
}

void func_35(var uParam0)//Position - 0x1650
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_46(uParam0, iVar0))
		{
			iVar1++;
			func_37((uParam0->f_2 + iVar0), 1, -1, 1);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_36(168, 0);
	}
}

void func_36(int iParam0, int iParam1)//Position - 0x16D3
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_104555.f_8583[iParam0] = 1;
	Global_104555.f_8583.f_236[iParam0] = (unk_0x53C562FD2B9E3AB0() + iParam1);
}

int func_37(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1710
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_22();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xA7C33AF584635A56((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xDBE4A47179904C7B((iParam0 - 0)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xA7C33AF584635A56((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xDBE4A47179904C7B((iParam0 - 192)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xA7C33AF584635A56((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xDBE4A47179904C7B((iParam0 - 513)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xA7C33AF584635A56((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xDBE4A47179904C7B((iParam0 - 705)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x88B5FB6273C3123E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xDBE4A47179904C7B((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x88B5FB6273C3123E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xDBE4A47179904C7B((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x7CD64EB2C84F32FF((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xDBE4A47179904C7B((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x7CD64EB2C84F32FF((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xDBE4A47179904C7B((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x7CD64EB2C84F32FF((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xDBE4A47179904C7B((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x7CD64EB2C84F32FF((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xDBE4A47179904C7B((iParam0 - 7385)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x7CD64EB2C84F32FF((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xDBE4A47179904C7B((iParam0 - 7321)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x7CD64EB2C84F32FF((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xDBE4A47179904C7B((iParam0 - 9361)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x7CD64EB2C84F32FF((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xDBE4A47179904C7B((iParam0 - 15369)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x7CD64EB2C84F32FF((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xDBE4A47179904C7B((iParam0 - 15562)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x7CD64EB2C84F32FF((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xDBE4A47179904C7B((iParam0 - 15946)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x7CD64EB2C84F32FF((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xDBE4A47179904C7B((iParam0 - 18098)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar17, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_38(var uParam0, int iParam1)//Position - 0x1BD4
{
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	if (iParam1 >= uParam0->f_3)
	{
	}
	if (func_46(uParam0, iParam1))
	{
		uParam0->f_4++;
		func_37((uParam0->f_2 + iParam1), 1, -1, 1);
		if (bLocal_40)
		{
		}
	}
	if (bLocal_40)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_36(168, 0);
	}
}

void func_39(int iParam0, int iParam1, bool bParam2)//Position - 0x1C48
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_10019.f_122), iParam1);
			}
			else
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_10019.f_122), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_10019.f_122.f_1), (iParam1 - 32));
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_10019.f_122.f_1), (iParam1 - 32));
		}
	}
	else if (iParam0 == 0)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_10019.f_125), iParam1);
			}
			else
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_10019.f_125), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_10019.f_125.f_1), (iParam1 - 32));
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_10019.f_125.f_1), (iParam1 - 32));
		}
	}
}

void func_40(int iParam0, int iParam1, bool bParam2)//Position - 0x1D34
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam1 <= 31)
	{
		if (bParam2)
		{
			unk_0x872F1C1F8587CCC7(iParam0, iParam1);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(iParam0, iParam1);
		}
		return;
	}
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(iParam0->f_1), (iParam1 - 32));
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(iParam0->f_1), (iParam1 - 32));
	}
}

void func_41(int iParam0)//Position - 0x1D95
{
	if (unk_0xA6DECE14FC9A8C51(*iParam0))
	{
		unk_0xAAAC88CC20771601(*iParam0, false);
		unk_0xE30CF11C0EE14316(iParam0);
	}
}

int func_42(int iParam0)//Position - 0x1DB5
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB8B3E5529EDB87D4(iParam0))
	{
		return 0;
	}
	if (func_43(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			iVar1 = unk_0x82FF3DFBC3965CC0(iVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0x20752E4B9ABBF6F5(iParam0)) < (5f * 5f) || unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), unk_0x7B240E77AB38C348(iParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_43(int iParam0)//Position - 0x1E41
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_44(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x1E62
{
	int iVar0;
	
	if (!uParam0->f_10)
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (!func_6(13) && !func_6(14))
			{
				if (!unk_0xB8B3E5529EDB87D4(uParam0->f_1))
				{
					if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), uParam0->f_3) <= (50f * 50f))
					{
						unk_0x6FF834D85E2DD4C6(iParam1);
						while (!unk_0x9A0B2ED5055D3F0B(iParam1))
						{
							unk_0x6FF834D85E2DD4C6(iParam1);
							system::wait(0);
						}
						if (bParam3)
						{
							func_45(uParam0->f_3);
						}
						unk_0x247EAA2E93D4A021(uParam0->f_3, 2,5f, 0, 0, 0, false);
						if (bParam4)
						{
							unk_0x872F1C1F8587CCC7(&iVar0, 1);
							uParam0->f_1 = unk_0x85CE54AA667066FE(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, iVar0, -1, iParam5, 1, iParam1);
						}
						else
						{
							unk_0x872F1C1F8587CCC7(&iVar0, 3);
							unk_0x872F1C1F8587CCC7(&iVar0, 4);
							unk_0x872F1C1F8587CCC7(&iVar0, 8);
							unk_0x872F1C1F8587CCC7(&iVar0, 1);
							uParam0->f_1 = unk_0x06583789B8C15A6C(iParam2, uParam0->f_3, iVar0, -1, 1, iParam1);
						}
						unk_0x14776E43F90DD454(iParam1);
					}
				}
			}
			if (unk_0xB8B3E5529EDB87D4(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}

void func_45(vector3 vParam0)//Position - 0x1F7B
{
	int iVar0;
	
	iVar0 = unk_0xD3BB1A515B0A47F3(vParam0);
	if (unk_0x2C2E1E35924B9FF2(iVar0))
	{
		unk_0xFF9ADA7B95619F7E(iVar0);
		while (!unk_0x1A595E6882473810(iVar0))
		{
			system::wait(0);
		}
		system::wait(0);
		unk_0xA1451353A1AED1A5(iVar0);
	}
}

bool func_46(var uParam0, int iParam1)//Position - 0x1FB9
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return 0;
	}
	if (iParam1 <= 31)
	{
		return unk_0xC80D31E4B587871C(*uParam0, iParam1);
	}
	return unk_0xC80D31E4B587871C(uParam0->f_1, (iParam1 - 32));
}

bool func_47(int iParam0)//Position - 0x1FF7
{
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	return !unk_0x191BE1BC8F26F3C1(iParam0, 0);
}

void func_48(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2015
{
	uParam0->f_6 = iParam1;
	func_49(&(uParam0->f_1), iParam2, iParam3);
}

void func_49(int iParam0, var uParam1, var uParam2)//Position - 0x202F
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	*iParam0 = 0;
	iParam0->f_1 = 0;
	iParam0->f_2 = uParam1;
	iParam0->f_3 = uParam2;
	if (bLocal_40)
	{
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_3)
	{
		if (func_19((iParam0->f_2 + iVar0), -1, -1))
		{
			iVar1++;
			func_40(iParam0, iVar0, 1);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	iParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
}

void func_50(var uParam0, int iParam1, int iParam2, char* sParam3)//Position - 0x2098
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

void func_51()//Position - 0x20B6
{
	int iVar0;
	
	iLocal_50 = 0;
	Global_104555.f_10019.f_125.f_2 = 1;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Local_48[iVar0 /*11*/].f_3 = { func_52(iVar0, 0) };
		Local_48[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	Local_48[0 /*11*/].f_9 = 179,4746f;
	Local_48[1 /*11*/].f_9 = 198f;
	Local_48[2 /*11*/].f_9 = 104f;
	Local_48[3 /*11*/].f_9 = 321,5f;
	Local_48[4 /*11*/].f_9 = 256,25f;
	Local_48[5 /*11*/].f_9 = 286,5f;
	Local_48[6 /*11*/].f_9 = 0f;
	Local_48[6 /*11*/].f_6 = { 0f, 0f, 1f };
	Local_48[7 /*11*/].f_9 = -165,6051f;
	Local_48[8 /*11*/].f_9 = 91,5f;
	Local_48[9 /*11*/].f_9 = 116f;
	Local_48[10 /*11*/].f_9 = 15f;
	Local_48[11 /*11*/].f_9 = 305,5f;
	Local_48[12 /*11*/].f_9 = 0f;
	Local_48[13 /*11*/].f_9 = 95f;
	Local_48[14 /*11*/].f_9 = 40f;
	Local_48[15 /*11*/].f_9 = 40f;
	Local_48[16 /*11*/].f_9 = 40f;
	Local_48[17 /*11*/].f_9 = 40f;
	Local_48[18 /*11*/].f_9 = 40f;
	Local_48[19 /*11*/].f_9 = 40f;
	Local_48[20 /*11*/].f_9 = 40f;
	Local_48[21 /*11*/].f_6 = { 90f, 0f, 57f };
	Local_48[22 /*11*/].f_9 = 40f;
	Local_48[23 /*11*/].f_9 = 40f;
	Local_48[24 /*11*/].f_9 = 40f;
	Local_48[25 /*11*/].f_9 = 40f;
	Local_48[26 /*11*/].f_9 = 40f;
	Local_48[27 /*11*/].f_9 = 40f;
	Local_48[28 /*11*/].f_9 = 40f;
	Local_48[29 /*11*/].f_9 = 40f;
	Local_48[29 /*11*/].f_6 = { -24,35f, 15,74f, 14,31f };
	Local_48[30 /*11*/].f_9 = 40f;
	Local_48[31 /*11*/].f_9 = 40f;
	Local_48[32 /*11*/].f_9 = 40f;
	Local_48[33 /*11*/].f_9 = 40f;
	Local_48[34 /*11*/].f_6 = { 0f, 0f, -15f };
	Local_48[35 /*11*/].f_9 = 40f;
	Local_48[36 /*11*/].f_9 = 40f;
	Local_48[37 /*11*/].f_9 = 40f;
	Local_48[38 /*11*/].f_9 = 40f;
	Local_48[38 /*11*/].f_6 = { 20,18f, -0,87f, 20,46f };
	Local_48[39 /*11*/].f_6 = { 0f, 0f, -4,39f };
	Local_48[40 /*11*/].f_9 = 40f;
	Local_48[41 /*11*/].f_9 = 80f;
	Local_48[42 /*11*/].f_9 = 198f;
	Local_48[43 /*11*/].f_9 = 198f;
	Local_48[44 /*11*/].f_9 = 198f;
	Local_48[45 /*11*/].f_9 = 198f;
	Local_48[46 /*11*/].f_9 = 198f;
	Local_48[47 /*11*/].f_9 = 198f;
	Local_48[48 /*11*/].f_9 = 198f;
	Local_48[49 /*11*/].f_9 = 198f;
}

Vector3 func_52(int iParam0, int iParam1)//Position - 0x23C3
{
	switch (iParam0)
	{
		case 0:
			return -1219f, -3495,9f, 12,9448f;
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return 606,8925f, -3250,188f, 5,06951f;
			}
			else
			{
				return 634,5865f, -3232,79f, -16,5774f;
			}
			break;
		
		case 2:
			return 1590,6f, -2810,174f, 3,4494f;
			break;
		
		case 3:
			if (iParam1 == 1)
			{
				return 327,99f, -2757,61f, 4,99f;
			}
			else
			{
				return 338,4039f, -2762,106f, 42,6543f;
			}
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 1134,422f, -2607,024f, 14,77071f;
			}
			else
			{
				return 1133,688f, -2605,073f, 14,9729f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 368,9316f, -2118,533f, 15,40341f;
			}
			else
			{
				return 369,945f, -2116,756f, 16,1688f;
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				return 1741,82f, -1623,85f, 111,41f;
			}
			else
			{
				return 1742,024f, -1618,777f, 111,8313f;
			}
			break;
		
		case 7:
			return 287,7294f, -1444,4f, 45,5095f;
			break;
		
		case 8:
			return 17,5926f, -1213,207f, 28,3678f;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return -910,0172f, -1147,44f, 1,06785f;
			}
			else
			{
				return -900,3597f, -1165,551f, 31,8047f;
			}
			break;
		
		case 10:
			if (iParam1 == 1)
			{
				return 1237,728f, -1099,15f, 37,52579f;
			}
			else
			{
				return 1231,973f, -1102,308f, 34,4289f;
			}
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 87,69075f, 810,3736f, 210,1258f;
			}
			else
			{
				return 81,2213f, 814,0283f, 213,2917f;
			}
			break;
		
		case 12:
			if (iParam1 == 1)
			{
				return -1900,951f, 1389,582f, 218,1509f;
			}
			else
			{
				return -1907,515f, 1388,69f, 217,9728f;
			}
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 467,369f, -730,7552f, 26,36373f;
			}
			else
			{
				return 469,8529f, -730,8f, 26,3985f;
			}
			break;
		
		case 14:
			return 202,1081f, -569,7198f, 128,18f;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 163,0531f, -566,3394f, 21,029f;
			}
			else
			{
				return 159,39f, -563,82f, 21f;
			}
			break;
		
		case 16:
			if (iParam1 == 1)
			{
				return -1183,152f, -518,5386f, 38,53018f;
			}
			else
			{
				return -1182,538f, -525,5859f, 39,9114f;
			}
			break;
		
		case 17:
			return -228,0476f, -236,4184f, 49,1361f;
			break;
		
		case 18:
			return -407,7026f, -151,7918f, 63,5505f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -1169,397f, -56,76701f, 44,45705f;
			}
			else
			{
				return -1175,488f, -65,4649f, 44,6563f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return 1679,056f, 39,44059f, 160,7736f;
			}
			else
			{
				return 1684,664f, 40,7142f, 153,4074f;
			}
			break;
		
		case 21:
			if (iParam1 == 1)
			{
				return 1964,25f, 553,68f, 160,72f;
			}
			else
			{
				return 1965,58f, 555,99f, 160,79f;
			}
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 24,21706f, 637,1212f, 206,3897f;
			}
			else
			{
				return 22,4492f, 638,8155f, 189,6085f;
			}
			break;
		
		case 23:
			return 2901,204f, 796,1192f, 3,3556f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return -1531,895f, 870,3203f, 180,6775f;
			}
			else
			{
				return -1529,722f, 871,4257f, 180,6421f;
			}
			break;
		
		case 25:
			return -404,3191f, 1100,889f, 331,535f;
			break;
		
		case 26:
			return -2809,354f, 1449,643f, 99,928f;
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 3144,045f, 2184,413f, -5,2961f;
			}
			else
			{
				return 3144,045f, 2184,413f, -5,2961f;
			}
			break;
		
		case 28:
			return 815,7574f, 1850,879f, 120,1796f;
			break;
		
		case 29:
			return -1944,24f, 1941,07f, 162,8f;
			break;
		
		case 30:
			if (iParam1 == 1)
			{
				return -1452,23f, 2127,41f, 42,84f;
			}
			else
			{
				return -1436,87f, 2130,22f, 26,78f;
			}
			break;
		
		case 31:
			return 1367,413f, 2180,632f, 96,6914f;
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return 170,1652f, 2217,637f, 89,30811f;
			}
			else
			{
				return 172,1426f, 2220,131f, 89,7842f;
			}
			break;
		
		case 33:
			return 889,3209f, 2870,052f, 55,2834f;
			break;
		
		case 34:
			if (iParam1 == 1)
			{
				return 1980,2f, 2914,79f, 45,48f;
			}
			else
			{
				return 1963,55f, 2922,81f, 57,76f;
			}
			break;
		
		case 35:
			return -390,384f, 2963,26f, 18,2713f;
			break;
		
		case 36:
			return 71,6642f, 3279,368f, 30,3918f;
			break;
		
		case 37:
			return 1924,186f, 3471,256f, 50,3238f;
			break;
		
		case 38:
			return -583,1569f, 3580,375f, 266,2471f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return 2514,302f, 3789,519f, 52,077f;
			}
			else
			{
				return 2516,98f, 3789,35f, 53,79f;
			}
			break;
		
		case 40:
			if (iParam1 == 1)
			{
				return 1517,613f, 3803,926f, 30,95605f;
			}
			else
			{
				return 1486,047f, 3857,217f, 22,2905f;
			}
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -530,2739f, 4474,358f, 59,45993f;
			}
			else
			{
				return -528,8246f, 4440,644f, 31,7384f;
			}
			break;
		
		case 42:
			if (iParam1 == 1)
			{
				return 3815,055f, 4447,343f, 2,06631f;
			}
			else
			{
				return 3820,813f, 4441,683f, 1,8007f;
			}
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return -1946,95f, 4584,36f, 56,06f;
			}
			else
			{
				return -1943,055f, 4585,194f, 46,6362f;
			}
			break;
		
		case 44:
			return 2437,545f, 4779,959f, 33,5101f;
			break;
		
		case 45:
			return -1441,495f, 5414,888f, 23,3f;
			break;
		
		case 46:
			return 2196,251f, 5599,034f, 52,7129f;
			break;
		
		case 47:
			if (iParam1 == 1)
			{
				return -503,95f, 5673,55f, 51,24f;
			}
			else
			{
				return -503,2193f, 5665,61f, 48,8487f;
			}
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return -378,4192f, 6080,782f, 30,44296f;
			}
			else
			{
				return -381,291f, 6086,949f, 38,6147f;
			}
			break;
		
		case 49:
			return 440,9546f, 6459,642f, 27,7432f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_53(int iParam0)//Position - 0x2C0F
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

void func_54()//Position - 0x2C69
{
	int iVar0;
	
	Global_104555.f_10019.f_125.f_2 = 0;
	iVar0 = 0;
	while (iVar0 < Local_48)
	{
		func_41(&(Local_48[iVar0 /*11*/].f_2));
		func_28(&(Local_48[iVar0 /*11*/].f_1));
		iVar0++;
	}
	if (func_59(&(Local_42.f_1)) || func_14(107) == 1)
	{
		func_58(107, 1);
		func_56();
		func_55(14);
	}
	unk_0x14776E43F90DD454(Local_42.f_7);
	unk_0x96A3D9A8A4C7AFD4();
}

int func_55(int iParam0)//Position - 0x2CDF
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

void func_56()//Position - 0x2D39
{
	int iVar0;
	
	iVar0 = func_57(63);
	Global_2413945[iVar0 /*83*/] = 63;
	StringCopy(&(Global_2413945[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_57(int iParam0)//Position - 0x2D65
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2413945[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2413945[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_58(int iParam0, int iParam1)//Position - 0x2DB2
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_104555.f_9055.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_104555.f_9055.f_99.f_58[iParam0] = iParam1;
}

bool func_59(var uParam0)//Position - 0x2DF7
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

