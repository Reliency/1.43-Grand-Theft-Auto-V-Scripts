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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0,0375f;
	fLocal_33 = 0,17f;
	if (unk_0x7D9C4B359376D38A(98))
	{
		func_15();
	}
	func_14();
	iVar0 = 0;
	while (true)
	{
		system::wait(500);
		iVar1 = 0;
		vVar2 = { 0f, 0f, 0f };
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			vVar2 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		}
		while (iVar1 != 2)
		{
			if (func_13(&(Global_25539[iVar0 /*7*/])))
			{
				if (func_12(iVar0, vVar2))
				{
					func_11(&(Global_25539[iVar0 /*7*/]), 2);
					if (Global_25539[iVar0 /*7*/].f_5 != 0)
					{
						if (unk_0x8F05914DD835E69F(Global_25539[iVar0 /*7*/].f_5))
						{
							unk_0x41EEB5CC27E31010(Global_25539[iVar0 /*7*/].f_5, 1);
						}
						Global_25539[iVar0 /*7*/].f_5 = 0;
					}
				}
			}
			else if (!func_10(Global_25539[iVar0 /*7*/], 4))
			{
				if (func_5(&(Global_25539[iVar0 /*7*/]), vVar2))
				{
					func_1(iVar0);
				}
			}
			iVar1++;
			iVar0++;
			if (iVar0 == 5)
			{
				iVar0 = 0;
			}
		}
	}
}

void func_1(int iParam0)//Position - 0x14A
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar2 = 1424;
	bVar3 = true;
	switch (iParam0)
	{
		case 0:
			sVar0 = "re_ArmyBase";
			iVar1 = joaat("re_armybase");
			break;
		
		case 1:
			iVar2 = 4500;
			sVar0 = "golf_ai_foursome";
			iVar1 = joaat("golf_ai_foursome");
			bVar3 = false;
			break;
		
		case 3:
			sVar0 = "re_Prison";
			iVar1 = joaat("re_prison");
			break;
		
		case 2:
			iVar2 = 4500;
			sVar0 = "golf_ai_foursome_putting";
			iVar1 = joaat("golf_ai_foursome_putting");
			bVar3 = false;
			break;
		
		case 4:
			iVar2 = 2050;
			sVar0 = "stripclub";
			iVar1 = joaat("stripclub");
			bVar3 = false;
			break;
	}
	if (!bVar3 && func_3())
	{
		return;
	}
	if (unk_0x96AAAC172E3B9680(sVar0) != 0)
	{
		if (unk_0x8F38E94BBF3404CD(iVar1) == 0)
		{
			unk_0xD9E2C360120FEB7C(sVar0);
			while (!unk_0x3B6F9DF9C5FEB3A4(sVar0))
			{
				system::wait(0);
			}
			Global_25539[iParam0 /*7*/].f_5 = system::start_new_script(sVar0, iVar2);
			unk_0x9D2418D7FC697249(sVar0);
			if (Global_25539[iParam0 /*7*/].f_5 != 0)
			{
				func_2(&(Global_25539[iParam0 /*7*/]), 2);
			}
		}
	}
}

void func_2(var uParam0, int iParam1)//Position - 0x24F
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_3()//Position - 0x260
{
	if (func_4() == 0)
	{
		return 1;
	}
	return 0;
}

int func_4()//Position - 0x275
{
	return Global_25233;
}

int func_5(var uParam0, vector3 vParam1)//Position - 0x280
{
	if (!func_10(*uParam0, 1))
	{
		if (func_9() && !func_6(6))
		{
			return 0;
		}
	}
	if (system::vdist2(vParam1, uParam0->f_2) > uParam0->f_1)
	{
		return 0;
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -2080,115f, 3292,193f, -11,667f, -2112,049f, 3224,331f, 11,667f, 115f, 1, 0, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_6(int iParam0)//Position - 0x306
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_7(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_7(int iParam0)//Position - 0x328
{
	return func_8(iParam0, Global_35861);
}

int func_8(int iParam0, int iParam1)//Position - 0x339
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_9()//Position - 0x51A
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	return 1;
}

bool func_10(var uParam0, int iParam1)//Position - 0x52F
{
	return (uParam0 && iParam1) != 0;
}

void func_11(var uParam0, int iParam1)//Position - 0x53E
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_12(int iParam0, vector3 vParam1)//Position - 0x553
{
	vParam1.z = 0f;
	if (!unk_0x8F05914DD835E69F(Global_25539[iParam0 /*7*/].f_5))
	{
		return 1;
	}
	if (func_10(Global_25539[iParam0 /*7*/], 4))
	{
		return 1;
	}
	if (func_9() && !func_6(6))
	{
		if (!func_10(Global_25539[iParam0 /*7*/], 1))
		{
			if (iParam0 == 1 || iParam0 == 2)
			{
				if (unk_0x8F38E94BBF3404CD(joaat("golf")) == 0)
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	if (system::vdist2(Global_25539[iParam0 /*7*/].f_2, vParam1) > (Global_25539[iParam0 /*7*/].f_1 + 400f))
	{
		return 1;
	}
	return 0;
}

bool func_13(var uParam0)//Position - 0x5FE
{
	return func_10(*uParam0, 2);
}

void func_14()//Position - 0x60E
{
	int iVar0;
	
	Global_25539[0 /*7*/].f_2 = { -2189,545f, 3129,613f, 0f };
	Global_25539[0 /*7*/].f_1 = (1000f * 1000f);
	Global_25539[0 /*7*/] = 0;
	Global_25539[0 /*7*/].f_5 = 0;
	Global_25539[1 /*7*/].f_2 = { -1172,822f, 66,5235f, 0f };
	Global_25539[1 /*7*/].f_1 = (300f * 300f);
	Global_25539[1 /*7*/] = 0;
	Global_25539[1 /*7*/].f_5 = 0;
	Global_25539[3 /*7*/].f_2 = { 1692,147f, 2562,313f, 0f };
	Global_25539[3 /*7*/].f_1 = (300f * 300f);
	Global_25539[3 /*7*/] = 0;
	Global_25539[3 /*7*/].f_5 = 0;
	Global_25539[2 /*7*/].f_2 = { -1329,68f, 60,3478f, 0f };
	Global_25539[2 /*7*/].f_1 = (250f * 250f);
	Global_25539[2 /*7*/] = 0;
	Global_25539[2 /*7*/].f_5 = 0;
	Global_25539[4 /*7*/].f_2 = { 114,64f, -1290,34f, 0f };
	Global_25539[4 /*7*/].f_1 = (100f * 100f);
	Global_25539[4 /*7*/] = 1;
	Global_25539[4 /*7*/].f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		Global_25539[iVar0 /*7*/].f_2.f_2 = 0f;
		iVar0++;
	}
}

void func_15()//Position - 0x74E
{
	unk_0x96A3D9A8A4C7AFD4();
}

