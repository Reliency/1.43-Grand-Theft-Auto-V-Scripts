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
	func_10();
	while (true)
	{
		system::wait(0);
		if (func_9())
		{
			return;
		}
		func_1();
	}
}

void func_1()//Position - 0x49
{
	func_2();
}

void func_2()//Position - 0x55
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(2))
	{
		iVar1 = unk_0xA387B84DA2EB1BEE(2, iVar0);
		if (func_7(iVar1))
		{
			func_6(&Var2);
			func_5(2, iVar0, iVar1, &Var2);
			Var2.f_1 = (unk_0x4B64A8D052027742() - 1);
			Var2 = iVar1;
			if (!func_4(&Var2, &uVar3))
			{
				func_3(&Var2);
			}
		}
		iVar0++;
	}
}

int func_3(int iParam0)//Position - 0xB7
{
	if (Global_25507.f_31 < 10)
	{
		Global_25507[Global_25507.f_31 /*3*/] = { *iParam0 };
		Global_25507.f_31++;
		return 1;
	}
	return 0;
}

int func_4(int iParam0, var uParam1)//Position - 0xEA
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_25507.f_31)
	{
		if (Global_25507[*uParam1 /*3*/] == *iParam0 && Global_25507[*uParam1 /*3*/].f_2 == iParam0->f_2)
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

void func_5(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x138
{
	var uVar0;
	
	if (((iParam2 == 236 || iParam2 == 237) || iParam2 == 238) || iParam2 == 239)
	{
		if (unk_0x575EF325DA5E3F04(iParam0, iParam1, &uVar0, 1))
		{
			uParam3->f_2 = uVar0;
		}
	}
}

void func_6(var uParam0)//Position - 0x17D
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_7(int iParam0)//Position - 0x193
{
	return func_8(iParam0);
}

bool func_8(int iParam0)//Position - 0x1A1
{
	return (((iParam0 == 237 || iParam0 == 238) || iParam0 == 239) || iParam0 == 236);
}

int func_9()//Position - 0x1CF
{
	return 0;
}

void func_10()//Position - 0x1D8
{
	unk_0x252CDD3D0F299441();
}

