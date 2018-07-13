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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	struct<10> Local_60 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_61 = 0;
	vector3 vLocal_62[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	bool bLocal_68 = 0;
	struct<21> Local_69 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0,0375f;
	fLocal_33 = 0,17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_234(ScriptParam_69))
		{
			func_228();
		}
		if (ScriptParam_69.f_16 >= 32)
		{
			if (func_227(unk_0x9EB17624F44A8DA4()) != 1 && !unk_0xC80D31E4B587871C(Global_2512808.f_842.f_7, 0))
			{
				func_228();
			}
		}
	}
	uLocal_64 = ScriptParam_69.f_19;
	while (true)
	{
		func_226();
		if (func_216())
		{
			func_228();
		}
		if (ScriptParam_69.f_16 >= 32)
		{
			if (func_227(unk_0x9EB17624F44A8DA4()) != 1 && Global_1626122 == 0)
			{
				func_228();
			}
		}
		if (unk_0xB01117EF93F91860() != bLocal_68)
		{
			func_228();
		}
		unk_0x938EE52364C18007();
		switch (func_215(unk_0x622FF3AE4B1D07C3()))
		{
			case 0:
				if (func_214())
				{
					if (func_213() == 1)
					{
						vLocal_62[unk_0x622FF3AE4B1D07C3() /*3*/] = 1;
					}
					else if (func_213() == 4)
					{
						vLocal_62[unk_0x622FF3AE4B1D07C3() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_213() == 1)
				{
					func_178();
				}
				else if (func_213() == 4)
				{
					vLocal_62[unk_0x622FF3AE4B1D07C3() /*3*/] = 3;
				}
				if (vLocal_62[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 == 0)
				{
					if ((!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), Local_60.f_3, 500f, 500f, 500f, 0, 1, 0) && func_227(unk_0x9EB17624F44A8DA4()) != 1) && !unk_0xC80D31E4B587871C(Global_2512808.f_842.f_7, 0))
					{
						vLocal_62[unk_0x622FF3AE4B1D07C3() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_176(&(Local_60.f_9));
				if (func_175(&(Local_60.f_9)))
				{
					vLocal_62[unk_0x622FF3AE4B1D07C3() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_62[unk_0x622FF3AE4B1D07C3() /*3*/] = 4;
			
			case 4:
				func_228();
				break;
		}
		if (unk_0x8E1421E2A2A2FBD4())
		{
			switch (func_213())
			{
				case 0:
					if (func_6())
					{
						Local_60 = 1;
					}
					break;
				
				case 1:
					func_5();
					func_4();
					if (func_1())
					{
						Local_60 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x25A
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x26E
{
	if (Local_60.f_7 >= 32 && func_227(unk_0x9EB17624F44A8DA4()) == 1)
	{
		if (func_3(Global_2512808.f_842.f_1))
		{
			return 1;
		}
	}
	if (Local_60.f_8 == 2)
	{
		return 1;
	}
	return 0;
}

int func_3(vector3 vParam0)//Position - 0x2B2
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x2DC
{
	switch (Local_60.f_8)
	{
		case 0:
			if (!unk_0x93C304998B457C45(Local_60.f_2) || Local_60.f_6 != -1)
			{
				Local_60.f_8 = 1;
			}
			break;
		
		case 1:
			Local_60.f_8 = 2;
			break;
		
		case 2:
			break;
	}
}

void func_5()//Position - 0x32A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
		{
			if (Local_60.f_6 == -1)
			{
				if (unk_0xC80D31E4B587871C(vLocal_62[iVar0 /*3*/].f_1, 0))
				{
					Local_60.f_6 = iVar0;
				}
			}
			if (!unk_0xC80D31E4B587871C(Local_60.f_1, 7))
			{
				if (unk_0xC80D31E4B587871C(vLocal_62[iVar0 /*3*/].f_1, 1))
				{
					unk_0x872F1C1F8587CCC7(&(Local_60.f_1), 7);
				}
			}
		}
		iVar0++;
	}
}

int func_6()//Position - 0x398
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	int iVar6;
	struct<26> Var7;
	
	if (!unk_0x93C304998B457C45(Local_60.f_2))
	{
		if (func_214())
		{
			if (unk_0x1887812F0A3EB4F6(1))
			{
				fVar3 = 250f;
				vVar4 = { Local_60.f_3 };
				if (unk_0xC80D31E4B587871C(Local_60.f_1, 8))
				{
					vVar0 = { Global_2512808.f_842.f_1 };
					fVar1 = Global_2512808.f_842.f_4;
				}
				if (func_227(unk_0x9EB17624F44A8DA4()) == 7)
				{
					iVar6 = unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4());
					if (Global_4456448.f_97[iVar6 /*10024*/].f_1242[0 /*30*/].f_10 > 0f)
					{
						vVar4 = { Global_4456448.f_97[iVar6 /*10024*/].f_1242[0 /*30*/].f_3 };
						vVar5 = { Global_4456448.f_97[iVar6 /*10024*/].f_1242[0 /*30*/].f_6 };
						fVar3 = Global_4456448.f_97[iVar6 /*10024*/].f_1242[0 /*30*/].f_10;
						iVar2 = 1;
					}
					else if (Global_4456448.f_97[iVar6 /*10024*/].f_1242[0 /*30*/].f_9 > 0f)
					{
						vVar4 = { Global_4456448.f_97[iVar6 /*10024*/].f_1242[0 /*30*/] };
						fVar3 = Global_4456448.f_97[iVar6 /*10024*/].f_1242[0 /*30*/].f_9;
					}
				}
				Var7.f_5 = 1115815936;
				Var7.f_13 = 2;
				Var7.f_20 = 2;
				Var7.f_25 = -1082130432;
				Var7.f_4 = 1;
				Var7.f_5 = 30f;
				Var7.f_10 = 1;
				if (iVar2 == 0)
				{
					if (unk_0xC80D31E4B587871C(Local_60.f_1, 8) || func_174(vVar4, fVar3, &vVar0, &fVar1, Var7))
					{
						if (Local_60.f_7 >= 32 || func_227(unk_0x9EB17624F44A8DA4()) == 1)
						{
							Local_60.f_2 = unk_0x02E026B1C5CE86B4(unk_0xAEE6FC463D735D1F(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_60.f_2 = unk_0x02E026B1C5CE86B4(unk_0xAC1D28421232D41B(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
						}
						unk_0x48ED7B2293A96722(unk_0xE8BC72FED1586931(Local_60.f_2), fVar1);
					}
				}
				else if (unk_0xC80D31E4B587871C(Local_60.f_1, 8) || func_7(vVar4, vVar5, fVar3, &vVar0, &fVar1, Var7))
				{
					if (Local_60.f_7 >= 32 || func_227(unk_0x9EB17624F44A8DA4()) == 1)
					{
						Local_60.f_2 = unk_0x02E026B1C5CE86B4(unk_0xAEE6FC463D735D1F(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_60.f_2 = unk_0x02E026B1C5CE86B4(unk_0xAC1D28421232D41B(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
					}
					unk_0x48ED7B2293A96722(unk_0xE8BC72FED1586931(Local_60.f_2), fVar1);
				}
			}
		}
	}
	if (unk_0x93C304998B457C45(Local_60.f_2))
	{
		return 1;
	}
	return 0;
}

int func_7(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3, float fParam4, struct<8> Param5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23)//Position - 0x61C
{
	struct<17> Var0;
	struct<25> Var1;
	
	if (Param5.f_5 < 20f)
	{
		Param5.f_5 = 20f;
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 2;
	Var1.f_8 = { vParam0 };
	Var1.f_11 = { vParam1 };
	Var1.f_14 = fParam2;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	Param5.f_7 = 0;
	if (func_8(&Var1, &Param5, &Var0))
	{
		*uParam3 = { Var0[0 /*3*/] };
		*fParam4 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_8(var uParam0, var uParam1, var uParam2)//Position - 0x6CC
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	bool bVar13;
	struct<56> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405047.f_2433 == *uParam0 || !Global_2405047.f_2433.f_1 == uParam0->f_1) || !Global_2405047.f_2433.f_2 == uParam0->f_2) || !Global_2405047.f_2436 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405047.f_2447 == uParam0->f_8 || !Global_2405047.f_2447.f_1 == uParam0->f_8.f_1) || !Global_2405047.f_2447.f_2 == uParam0->f_8.f_2) || !Global_2405047.f_2450 == uParam0->f_11) || !Global_2405047.f_2450.f_1 == uParam0->f_11.f_1) || !Global_2405047.f_2450.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405047.f_2447 == uParam0->f_8 || !Global_2405047.f_2447.f_1 == uParam0->f_8.f_1) || !Global_2405047.f_2447.f_2 == uParam0->f_8.f_2) || !Global_2405047.f_2450 == uParam0->f_11) || !Global_2405047.f_2450.f_1 == uParam0->f_11.f_1) || !Global_2405047.f_2450.f_2 == uParam0->f_11.f_2) || !Global_2405047.f_2453 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (bVar13)
	{
		if (Global_2405047.f_2431 == 1)
		{
			if (unk_0x8F05914DD835E69F(Global_2405047.f_2440))
			{
				if (Global_2405047.f_2440 == unk_0xBBA15366508D1BDE())
				{
					if (unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2437) < func_173(0))
					{
						return 0;
					}
				}
				else if (unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2437) < func_173(0))
				{
					return 0;
				}
			}
			unk_0x9F99C09A1147E75A();
			unk_0x4D1DF3388A933CF8();
			func_172();
		}
		Global_2405047.f_2431 = 0;
	}
	else if (unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2437) > func_173(0))
	{
		Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
		func_166();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0,5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0,5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0,5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0,5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0,5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0,5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0,5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0,5f * uParam0->f_14));
			}
			break;
	}
	unk_0x590D9654A4367AA1(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		vVar6 = { *uParam0 };
	}
	else
	{
		vVar6 = { uParam0->f_8 + uParam0->f_11 * Vector(0,5f, 0,5f, 0,5f) };
	}
	vVar7 = { vVar6 + Vector(-0,1f, -0,1f, -0,1f) };
	vVar8 = { vVar6 + Vector(0,1f, 0,1f, 0,1f) };
	if (!Global_2405047.f_2431)
	{
		unk_0x9F99C09A1147E75A();
		unk_0x4D1DF3388A933CF8();
		func_172();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (system::vmag(*uParam0) > 0f)
			{
				if (func_165(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0x1A1094F3B2B73324())
		{
			Global_2405047.f_2454 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405047.f_2433 = { *uParam0 };
					Global_2405047.f_2436 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405047.f_2447 = { uParam0->f_8 };
					Global_2405047.f_2450 = { uParam0->f_11 };
					Global_2405047.f_2453 = 0f;
					Global_2405047.f_2433 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405047.f_2447 = { uParam0->f_8 };
					Global_2405047.f_2450 = { uParam0->f_11 };
					Global_2405047.f_2453 = uParam0->f_14;
					Global_2405047.f_2433 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_164(vVar6.x, vVar6.y);
			}
			Global_2405047.f_2432 = 1;
			Global_2405047.f_2431 = 1;
			Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
			Global_2405047.f_2437 = unk_0xD1952A425B78FFC0();
			Global_2405047.f_2440 = unk_0xBBA15366508D1BDE();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405047.f_2431)
	{
		if (Global_2405047.f_2432 == 1)
		{
			if (unk_0x9C0571C926F68BED(fVar2, fVar3, fVar4, fVar5) || unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2438) > 5000)
			{
				Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_25 > 0f)
					{
						Var14.f_6 = uParam1->f_25;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_23;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (func_163(Global_4456448.f_143970))
					{
						Var14.f_9 = 1;
					}
					func_141(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_140(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405047.f_2432 = 9;
				}
				else
				{
					Global_2405047.f_2432 = 2;
				}
			}
		}
		if (Global_2405047.f_2432 == 2)
		{
			if ((unk_0x99C56B529F029F9E(vVar7, vVar8) || unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2438) > 15000) || unk_0x6A53B51B72E7941B(vVar7, vVar8) == 0)
			{
				Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
				if (uParam0->f_5 && !func_137(unk_0x9EB17624F44A8DA4(), 0))
				{
					Global_2405047.f_2432 = 3;
				}
				else
				{
					Global_2405047.f_2432 = 4;
				}
			}
			else if (unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2442) > 7000)
			{
				func_136(vVar6.x, vVar6.y);
			}
		}
		if (Global_2405047.f_2432 == 3)
		{
			if (func_135() || unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2438) > 10000)
			{
				Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
				Global_2405047.f_2432 = 4;
			}
		}
		if (Global_2405047.f_2432 == 4)
		{
			if (unk_0x1A1094F3B2B73324())
			{
				unk_0x9F99C09A1147E75A();
				unk_0x4D1DF3388A933CF8();
			}
			else
			{
				iVar0 = 0;
				func_166();
				if (uParam0->f_5)
				{
					if (system::vmag(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0xCCF32B3FD0FF4C53(unk_0x9EB17624F44A8DA4(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
								Global_2405047.f_2432 = 5;
							}
							break;
						
						case 1:
							func_134(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
							if (unk_0xD6D9916F15673C93(unk_0x9EB17624F44A8DA4(), vVar10, vVar11, uVar12, *uParam1, iVar0))
							{
								Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
								Global_2405047.f_2432 = 5;
							}
							break;
						
						case 2:
							if (unk_0xD6D9916F15673C93(unk_0x9EB17624F44A8DA4(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
								Global_2405047.f_2432 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
					Global_2405047.f_2432 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x8814134CB7E5C28B(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_134(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
							unk_0xA6B4B94DC0DE8A5F(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0xA6B4B94DC0DE8A5F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405047.f_2432 == 5)
		{
			if (func_59(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405047.f_2458.f_5)
				{
					Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
					Global_2405047.f_2432 = 6;
				}
				else
				{
					Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
					if (!uParam0->f_5)
					{
						if (!system::vmag(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0xA67DD8488EBA5F6D(vVar1.x, vVar1.y);
						}
					}
					Global_2405047.f_2432 = 9;
				}
			}
			else if (unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2438) > 20000)
			{
				unk_0x9F99C09A1147E75A();
				unk_0x4D1DF3388A933CF8();
				Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
				Global_2405047.f_2432 = 8;
			}
		}
		if (Global_2405047.f_2432 == 6)
		{
			iVar0 = 0;
			Global_2405047.f_2458.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_58(uParam0->f_4))
				{
					if (unk_0x2C2E1E35924B9FF2(unk_0xD3BB1A515B0A47F3(vVar6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_57(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x2C2E1E35924B9FF2(unk_0xD3BB1A515B0A47F3(vVar6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
			Global_2405047.f_2432 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x8814134CB7E5C28B(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_134(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
					unk_0xA6B4B94DC0DE8A5F(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0xA6B4B94DC0DE8A5F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405047.f_2432 == 7)
		{
			if (func_59(uParam2, uParam0, uParam1, 1))
			{
				if (system::vmag(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (system::vmag(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!system::vmag(Global_2405047.f_2587[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_140(Global_2405047.f_2587[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405047.f_2587[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_55(Global_2405047.f_2587[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405047.f_2587[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x8AE9E5E8F6DC40C9(Global_2405047.f_2587[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2405047.f_2587[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (system::vmag(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_11(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
				if (!system::vmag(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						vVar1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = unk_0xA67DD8488EBA5F6D(vVar1.x, vVar1.y);
						iVar9++;
					}
				}
				Global_2405047.f_2432 = 9;
			}
			else if (unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2438) > 20000)
			{
				Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
				Global_2405047.f_2432 = 8;
			}
		}
		if (Global_2405047.f_2432 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_10(Global_2405047.f_482))
				{
				}
			}
			else if (Global_2405047.f_2458.f_2)
			{
				func_9(uParam2, &(Global_2405047.f_2458.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405047.f_2433 };
				func_11(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
			Global_2405047.f_2432 = 9;
		}
		if (Global_2405047.f_2432 == 9)
		{
			Global_2405047.f_2431 = 0;
			unk_0x9F99C09A1147E75A();
			unk_0x4D1DF3388A933CF8();
			func_172();
			return 1;
		}
		Global_2405047.f_2437 = unk_0xD1952A425B78FFC0();
	}
	return 0;
}

void func_9(var uParam0, var uParam1)//Position - 0x1685
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*9*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*9*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*9*/];
		iVar0++;
	}
}

int func_10(int iParam0)//Position - 0x16CF
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_11(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x16EE
{
	vector3 vVar0;
	var uVar1;
	struct<56> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar7 = { *uParam5 };
						if (func_58(uParam5->f_4) || !unk_0x2C2E1E35924B9FF2(unk_0xD3BB1A515B0A47F3(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						vVar7 = { uParam5->f_8 + uParam5->f_11 * Vector(0,5f, 0,5f, 0,5f) };
						if (func_57(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x2C2E1E35924B9FF2(unk_0xD3BB1A515B0A47F3(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						vVar7 = { uParam5->f_8 + uParam5->f_11 * Vector(0,5f, 0,5f, 0,5f) };
						if (func_57(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x2C2E1E35924B9FF2(unk_0xD3BB1A515B0A47F3(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_13(*uParam0, &vVar0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		vVar0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_25 > 0f)
		{
			Var2.f_6 = uParam6->f_25;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_23;
		Var2.f_55 = uParam5->f_16;
		func_141(&vVar0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_11 };
				break;
			
			case 2:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!func_12(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
		{
			if (func_13(*uParam0, &vVar0, iVar6, iParam3, 0))
			{
				if (!func_12(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar8 + vVar9 * Vector(0,5f, 0,5f, 0,5f) };
					}
					else
					{
						vVar0 = { vVar8 };
					}
					if (unk_0x7367FB97975F1E29(vVar0, &uVar3, 0, 0))
					{
						vVar0.z = uVar3;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar8 + vVar9 * Vector(0,5f, 0,5f, 0,5f) };
				}
				else
				{
					vVar0 = { vVar8 };
				}
				if (unk_0x7367FB97975F1E29(vVar0, &uVar3, 0, 0))
				{
					vVar0.z = uVar3;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_2405047.f_642 = 1;
}

int func_12(vector3 vParam0, int iParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x1B26
{
	switch (iParam1)
	{
		case 0:
			if (system::vdist(vParam0, vParam2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_55(vParam0, vParam2, vParam3, 0, 0);
			break;
		
		case 2:
			return unk_0x8AE9E5E8F6DC40C9(vParam0, vParam2, vParam3, fParam4, 0, 1);
			break;
	}
	return 0;
}

int func_13(vector3 vParam0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1B93
{
	if (func_54(vParam0, uParam1))
	{
		if (func_14(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (unk_0x3F3EC0940E331911(vParam0, 0, uParam1, iParam2))
	{
		if (func_14(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_14(vector3 vParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x1BEF
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = system::vdist(vParam0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_34(Global_2405047.f_505, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_21(*uParam1, 1056964608))
			{
				if (!func_15(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_15(var uParam0, bool bParam1)//Position - 0x1C74
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { *uParam0 };
	iVar2 = func_20(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411037[iVar2])
	{
		if (func_19(vVar1, &(Global_2409893[iVar2 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_16(&vVar1, Global_2409893[iVar2 /*127*/][iVar0 /*7*/], Global_2409893[iVar2 /*127*/][iVar0 /*7*/].f_3, Global_2409893[iVar2 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411037[8])
	{
		if (func_19(vVar1, &(Global_2409893[8 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_16(&vVar1, Global_2409893[8 /*127*/][iVar0 /*7*/], Global_2409893[8 /*127*/][iVar0 /*7*/].f_3, Global_2409893[8 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_16(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x1D81
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	
	vVar0 = { vParam2 - vParam1 };
	vVar0.z = 0f;
	vVar1 = { *uParam0 - vParam1 };
	vVar1.z = 0f;
	vVar2 = { func_18(0f, 0f, 1f, vVar0) };
	vVar2 = { vVar2 / FtoV(system::vmag(vVar2)) };
	fVar3 = (system::vmag(vVar1) * system::sin(unk_0xAF3D7D969F2C195C(vVar0.x, vVar0.y, vVar1.x, vVar1.y)));
	if (fVar3 < (fParam3 * 0,5f))
	{
		if (!bParam5)
		{
			if (func_17(vVar2, vVar1) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fParam3 * 0,5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fParam3 * 0,5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_17(vVar2, vVar1) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fParam3 * 0,5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fParam3 * 0,5f) + fVar3) + fParam4)) };
		}
		vVar4 = { *uParam0 + vVar2 };
		fVar6 = system::vdist(vParam1.x, vParam1.y, 0f, vParam2.x, vParam2.y, 0f);
		vVar7 = { vParam1 + vParam2 / Vector(2f, 2f, 2f) };
		vVar7.z = 0f;
		vVar2 = { func_18(0f, 0f, 1f, vVar0) };
		vVar2 = { vVar2 / FtoV(system::vmag(vVar2)) };
		vVar2 = { vVar2 * FtoV((fParam3 * 0,5f)) };
		vVar8 = { vVar7 - vVar2 };
		vVar9 = { vVar7 + vVar2 };
		vVar10 = { vVar9 - vVar8 };
		vVar10.z = 0f;
		vVar11 = { *uParam0 - vVar8 };
		vVar11.z = 0f;
		vVar2 = { func_18(0f, 0f, 1f, vVar10) };
		vVar2 = { vVar2 / FtoV(system::vmag(vVar2)) };
		fVar3 = (system::vmag(vVar11) * system::sin(unk_0xAF3D7D969F2C195C(vVar10.x, vVar10.y, vVar11.x, vVar11.y)));
		if (!bParam5)
		{
			if (func_17(vVar2, vVar11) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fVar6 * 0,5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fVar6 * 0,5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_17(vVar2, vVar11) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fVar6 * 0,5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fVar6 * 0,5f) + fVar3) + fParam4)) };
		}
		vVar5 = { *uParam0 + vVar2 };
		if (system::vdist(vVar4, *uParam0, uParam0->f_1, 0f) < system::vdist(vVar5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar4 };
		}
		else
		{
			*uParam0 = { vVar5 };
		}
	}
}

float func_17(vector3 vParam0, vector3 vParam1)//Position - 0x2050
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_18(vector3 vParam0, vector3 vParam1)//Position - 0x2071
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

bool func_19(vector3 vParam0, var uParam1)//Position - 0x20AA
{
	return unk_0x8AE9E5E8F6DC40C9(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_20(struct<2> Param0, var uParam1)//Position - 0x20CA
{
	if (Param0.f_1 > Global_2411047[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411047[1])
	{
		if (Param0 < Global_2411051[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411047[2])
	{
		if (Param0 < Global_2411051[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411051[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411051[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_21(vector3 vParam0, float fParam1)//Position - 0x2165
{
	int iVar0;
	
	if (func_31(unk_0x9EB17624F44A8DA4(), 1))
	{
		if (Global_4456448.f_54288 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_54288)
			{
				if (Global_4456448.f_54289[iVar0 /*71*/].f_7 != 0)
				{
					if (func_22(vParam0, Global_4456448.f_54289[iVar0 /*71*/], Global_4456448.f_54289[iVar0 /*71*/].f_6, Global_4456448.f_54289[iVar0 /*71*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_51079 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_51079)
			{
				if (Global_4456448.f_51082[iVar0 /*130*/].f_16 != 0)
				{
					if (func_22(vParam0, Global_4456448.f_51082[iVar0 /*130*/], Global_4456448.f_51082[iVar0 /*130*/].f_3, Global_4456448.f_51082[iVar0 /*130*/].f_16, 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_71947 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_71947)
			{
				if (Global_4456448.f_71951[iVar0 /*213*/].f_12 != 0)
				{
					if (func_22(vParam0, Global_4456448.f_71951[iVar0 /*213*/], Global_4456448.f_71951[iVar0 /*213*/].f_3, Global_4456448.f_71951[iVar0 /*213*/].f_12, 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_22(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)//Position - 0x22EE
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (system::vdist(vParam0, vParam1) < func_30(iParam3, 1008981770))
	{
		func_23(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, vVar0, vVar1, fVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_23(vector3 vParam0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)//Position - 0x2341
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 1f, 0f };
	func_29(&vVar0, 0f, 0f, fParam1);
	vVar0 = { vVar0 / FtoV(system::vmag(vVar0)) };
	func_24(iParam2, &vVar1, &vVar2, 1086324736, 1080033280, 1077936128);
	vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
	vVar3.z = (vVar3.z - ((0,5f * unk_0xE97272C977DEADD3((vVar2.z - vVar1.z))) + fParam6));
	vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
	vVar4.z = (vVar4.z + ((0,5f * unk_0xE97272C977DEADD3((vVar2.z - vVar1.z))) + fParam6));
	*uParam3 = { vVar3 };
	*uParam4 = { vVar4 };
	*uParam5 = unk_0xE97272C977DEADD3((vVar2.x - vVar1.x));
}

void func_24(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x240D
{
	int iVar0;
	
	if (unk_0x3B0047CED068C463(iParam0))
	{
		unk_0x04FE252E98FAA4C3(iParam0, fParam1, fParam2);
	}
	else
	{
		iVar0 = func_27(iParam0);
		if (iVar0 != 0)
		{
			func_25(iVar0, fParam1, fParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (system::vmag(*fParam1) <= 0,01f || system::vmag(*fParam2) <= 0,01f)
	{
		*fParam1 = (0f - (fParam4 * 0,5f));
		*fParam2 = (0f + (fParam4 * 0,5f));
		fParam1->f_1 = (0f - (fParam3 * 0,5f));
		fParam2->f_1 = (0f + (fParam3 * 0,5f));
		fParam1->f_2 = (0f - (fParam5 * 0,5f));
		fParam2->f_2 = (0f + (fParam5 * 0,5f));
	}
}

void func_25(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x24CC
{
	int iVar0;
	
	func_26(iParam0, &Global_1315788);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x3B0047CED068C463(Global_1315788[iVar0]))
		{
			unk_0x04FE252E98FAA4C3(Global_1315788[iVar0], &(Global_1315792[iVar0 /*3*/]), &(Global_1315799[iVar0 /*3*/]));
		}
		if (system::vmag(Global_1315792[iVar0 /*3*/]) <= 0,01f || system::vmag(Global_1315799[iVar0 /*3*/]) <= 0,01f)
		{
			Global_1315792[iVar0 /*3*/] = (0f - (fParam4 * 0,5f));
			Global_1315799[iVar0 /*3*/] = (0f + (fParam4 * 0,5f));
			Global_1315792[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0,5f));
			Global_1315799[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0,5f));
			Global_1315792[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0,5f));
			Global_1315799[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0,5f));
		}
		Global_1315806[iVar0] = (Global_1315799[iVar0 /*3*/] - Global_1315792[iVar0 /*3*/]);
		Global_1315809[iVar0] = (Global_1315799[iVar0 /*3*/].f_1 - Global_1315792[iVar0 /*3*/].f_1);
		Global_1315812[iVar0] = (Global_1315799[iVar0 /*3*/].f_2 - Global_1315792[iVar0 /*3*/].f_2);
		if (Global_1315806[iVar0] > Global_1315815)
		{
			Global_1315815 = Global_1315806[iVar0];
		}
		if (Global_1315812[iVar0] > Global_1315816)
		{
			Global_1315816 = Global_1315812[iVar0];
		}
		iVar0++;
	}
	Global_1315817 = (Global_1315815 * -0,5f);
	Global_1315820 = (Global_1315815 * 0,5f);
	Global_1315817.f_1 = ((((0,5f * Global_1315809[0]) + Global_1315809[1]) + Global_1315788.f_3) * -1f);
	Global_1315820.f_1 = (0,5f * Global_1315809[0]);
	Global_1315817.f_2 = (Global_1315812[0] * -0,5f);
	Global_1315820.f_2 = (Global_1315812[0] * 0,5f);
	*fParam1 = { Global_1315817 };
	*fParam2 = { Global_1315820 };
}

void func_26(int iParam0, var uParam1)//Position - 0x26D8
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = 387748548;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2,6f;
			break;
		
		case 2:
			(*uParam1)[0] = 177270108;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2,6f;
			break;
		
		case 3:
			(*uParam1)[0] = 433954513;
			(*uParam1)[1] = -1881846085;
			uParam1->f_3 = 0,5f;
			break;
	}
}

int func_27(int iParam0)//Position - 0x2759
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_28(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_28(int iParam0)//Position - 0x2788
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_29(var uParam0, vector3 vParam1)//Position - 0x279A
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = system::cos(vParam1.x);
	fVar1 = system::sin(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = system::cos(vParam1.y);
	fVar1 = system::sin(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = system::cos(vParam1.z);
	fVar1 = system::sin(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

float func_30(int iParam0, float fParam1)//Position - 0x2871
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_24(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	vVar2 = { vVar1 - vVar0 };
	fVar3 = (system::sqrt(((((vVar2.x * 0,5f) * (vVar2.x * 0,5f)) + ((vVar2.y * 0,5f) * (vVar2.y * 0,5f))) + ((vVar2.z * 0,5f) * (vVar2.z * 0,5f)))) + fParam1);
	return fVar3;
}

int func_31(int iParam0, bool bParam1)//Position - 0x28F1
{
	if (bParam1)
	{
		if (func_32(iParam0))
		{
			return 1;
		}
	}
	if (Global_1595693[iParam0 /*680*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_32(int iParam0)//Position - 0x291D
{
	return func_33(iParam0);
}

bool func_33(int iParam0)//Position - 0x292B
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

int func_34(vector3 vParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x2945
{
	int iVar0;
	bool bVar1;
	
	if (func_47(vParam0))
	{
		if (func_46(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_37(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_36(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (system::vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_35(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

void func_35(var uParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4, float fParam5)//Position - 0x2A01
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (system::vmag(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(system::vmag(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_29(&vVar0, 0f, 0f, unk_0x5B811202FCBE9E9D(0f, 360f));
		}
		else
		{
			func_29(&vVar0, 0f, 0f, fParam5);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		vVar1 = { vParam1 + vVar0 };
	}
	else
	{
		vVar1 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar1.x;
	uParam0->f_1 = vVar1.y;
}

int func_36(vector3 vParam0, float fParam1)//Position - 0x2AA9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (system::vdist(vParam0, Global_2405047.f_2695[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_37(var uParam0, bool bParam1, bool bParam2)//Position - 0x2AE4
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_42(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_39(&vVar2, &(Global_2405047.f_361[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_42(vVar2, &uVar1) || func_38(vVar2))
			{
				vVar2 = { *uParam0 };
				func_39(&vVar2, &(Global_2405047.f_361[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_38(vector3 vParam0)//Position - 0x2B68
{
	float fVar0;
	
	if (Global_2405047.f_577 > 0f)
	{
		fVar0 = system::vdist(vParam0, Global_2405047.f_574);
		if (fVar0 < Global_2405047.f_577)
		{
			return 1;
		}
	}
	return 0;
}

void func_39(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x2BA1
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_41(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405047.f_2693) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_41(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_41(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_35(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405047.f_2693) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_40(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_16(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_40(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)//Position - 0x2CAB
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	vVar0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	vVar0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				vVar0.x = (Param1 - fParam5);
			}
			else
			{
				vVar0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			vVar0.y = (Param1.f_1 - fParam5);
		}
		else
		{
			vVar0.y = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			vVar0.x = (Param3 + fParam5);
		}
		else
		{
			vVar0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		vVar0.y = (Param3.f_1 + fParam5);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam5);
	}
	*uParam0 = { vVar0 };
}

Vector3 func_41(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, bool bParam6)//Position - 0x2DAA
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam4)
	{
		case 0:
			func_35(&vParam0, vParam1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_40(&vParam0, vParam1, vParam2, fParam5, bParam6);
			break;
		
		case 2:
			func_16(&vParam0, vParam1, vParam2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x49A7AD0000D6AF17(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_140(vVar1, vParam1, fParam3, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_55(vVar1, vParam1, vParam2, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!unk_0x8AE9E5E8F6DC40C9(vVar1, vParam1, vParam2, fParam3, 0, 1))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_42(vector3 vParam0, var uParam1)//Position - 0x2EAD
{
	int iVar0;
	int iVar1;
	
	if (func_45())
	{
		return 0;
	}
	iVar1 = func_44();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405047.f_361[iVar0 /*12*/].f_9 == 1)
		{
			if (func_43(vParam0, &(Global_2405047.f_361[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_43(vector3 vParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x2F11
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_140(vParam0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2405047.f_2693) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_55(vParam0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return unk_0x8AE9E5E8F6DC40C9(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
			}
			else if (bParam3)
			{
				if (unk_0x8AE9E5E8F6DC40C9(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(vParam0.z < uParam1->f_2 && vParam0.z < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (unk_0x8AE9E5E8F6DC40C9(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(vParam0.z > uParam1->f_2 && vParam0.z > uParam1->f_3.f_2))
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
				return unk_0x8AE9E5E8F6DC40C9(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_44()//Position - 0x3072
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405047.f_361[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_45()//Position - 0x30A5
{
	return Global_1669535.f_28;
}

int func_46(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x30B3
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2409756[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409756[iVar0 /*17*/].f_16))
			{
				if (func_43(*uParam0, &(Global_2409756[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409756[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409756[iVar0 /*17*/].f_13 };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_39(&vVar1, &(Global_2409756[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_46(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_39(&vVar1, &(Global_2409756[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_47(vector3 vParam0)//Position - 0x318E
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_2405047.f_508 && !Global_2405047.f_509)
	{
		if (!Global_2405047.f_44.f_314)
		{
			if (!func_51(unk_0x9EB17624F44A8DA4(), 1))
			{
				return 1;
			}
			if (!func_50(vParam0, 1008981770))
			{
				if (!func_46(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_46(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_49(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_48(&(Global_2405047.f_44[iVar0 /*12*/])) };
					if (!func_46(&vVar1, 0, 0, 0, 1))
					{
						if (!func_46(&vParam0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_48(var uParam0)//Position - 0x324E
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0,5f, 0,5f, 0,5f);
			break;
	}
	return *uParam0;
}

int func_49(vector3 vParam0, float fParam1)//Position - 0x3297
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405047.f_44[iVar0 /*12*/].f_9)
		{
			if (func_43(vParam0, &(Global_2405047.f_44[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_50(vector3 vParam0, float fParam1)//Position - 0x32DF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405047.f_44[iVar0 /*12*/].f_9)
		{
			if (func_43(vParam0, &(Global_2405047.f_44[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_51(int iParam0, bool bParam1)//Position - 0x3326
{
	if (Global_1312447 != 0)
	{
		return func_52(iParam0) != 0;
	}
	return func_31(iParam0, bParam1);
}

int func_52(int iParam0)//Position - 0x334C
{
	if (func_53(iParam0, 0, 1))
	{
		return Global_2422736[iParam0 /*420*/].f_1;
	}
	return 0;
}

int func_53(int iParam0, bool bParam1, bool bParam2)//Position - 0x336E
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

int func_54(vector3 vParam0, var uParam1)//Position - 0x33B8
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999,9f;
	if (Global_2405047.f_2229 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405047.f_2229)
		{
			fVar3 = system::vdist(Global_2405047.f_2230[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam1 = { Global_2405047.f_2230[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_55(vector3 vParam0, vector3 vParam1, vector3 vParam2, bool bParam3, bool bParam4)//Position - 0x3432
{
	func_56(&vParam1, &vParam2);
	if (((!vParam0.x >= vParam1.x || !vParam0.y >= vParam1.y) || !vParam0.x <= vParam2.x) || !vParam0.y <= vParam2.y)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (vParam0.z >= vParam1.z)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (vParam0.z <= vParam2.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam1.z && vParam0.z <= vParam2.z)
	{
		return 1;
	}
	return 0;
}

void func_56(var uParam0, var uParam1)//Position - 0x34DD
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_57(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x353F
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (vParam0.x > vParam1.x)
	{
		vVar1.x = vParam0.x;
		vVar0.x = vParam1.x;
	}
	else
	{
		vVar1.x = vParam1.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam1.y)
	{
		vVar1.y = vParam0.y;
		vVar0.y = vParam1.y;
	}
	else
	{
		vVar1.y = vParam1.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam1.z)
	{
		vVar1.z = vParam0.z;
		vVar0.z = vParam1.z;
	}
	else
	{
		vVar1.z = vParam1.z;
		vVar0.z = vParam0.z;
	}
	if (system::vmag(vVar1 - vVar0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_58(float fParam0)//Position - 0x35EA
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_59(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x3602
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_2405047.f_2458.f_1 == 0 && Global_2405047.f_2458 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x22D98A042592706D(&(Global_2405047.f_2458.f_1)))
			{
				case 0:
					func_132(uParam1, uParam2);
					if (!Global_2405047.f_2458.f_2)
					{
						if (uParam2->f_7 && Global_2405047.f_539.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2405047.f_2433 };
							}
							if (uParam1->f_5 && func_10(Global_2405047.f_482))
							{
								if (!Global_2405047.f_2458.f_5)
								{
									Global_2405047.f_2458.f_5 = 1;
								}
								else
								{
									func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_11(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = unk_0x5B811202FCBE9E9D(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_132(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0x1A1094F3B2B73324())
		{
			if (!unk_0x998311CC2C553D30())
			{
				if (unk_0x63B0243EB1873848())
				{
					func_132(uParam1, uParam2);
					Global_2405047.f_2458.f_1 = unk_0x90740CF1CC0202BB();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x4D1DF3388A933CF8();
				func_132(uParam1, uParam2);
				if (!Global_2405047.f_2458.f_2)
				{
					Global_2405047.f_2458.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_129(Global_2405047.f_539, &(Global_2405047.f_2458.f_52), &(Global_2405047.f_2458.f_85));
	}
	if (uParam2->f_7 && !Global_2405047.f_2458.f_4)
	{
		Global_2405047.f_2458.f_4 = 1;
		func_67(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2405047.f_2458.f_1 > 0 || Global_2405047.f_2458 > 0)
	{
		if (uParam1->f_5 || unk_0x1A1094F3B2B73324())
		{
			iVar2 = 0;
			while (iVar2 < Global_2405047.f_2458.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2405047.f_2458.f_3)
					{
						iVar2 = Global_2405047.f_2458.f_3 + 1;
					}
					if (iVar2 > (Global_2405047.f_2458.f_1 - 1))
					{
						iVar2 = (Global_2405047.f_2458.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0xEA80F1CF460B38B7(iVar2, &vVar0, &fVar1);
						fVar1 = (fVar1 * 57,29578f);
					}
					else
					{
						unk_0x8808EFD99B7C618E(iVar2, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = unk_0x5CBCFAA65C2870A1(iVar2);
					}
					else
					{
						unk_0xC8B6E30ABF9D63FC(iVar2, &iVar3);
					}
					func_67(vVar0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2405047.f_2458.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2405047.f_2458.f_1;
		}
		if (Global_2405047.f_2458.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2405047.f_2847)
			{
				func_61(&(Global_2405047.f_2458.f_6[0 /*9*/]), &(Global_2405047.f_2458.f_6[1 /*9*/]), &(Global_2405047.f_2458.f_6[2 /*9*/]));
			}
			if (uParam1->f_5 && func_10(Global_2405047.f_482))
			{
				if (Global_2405047.f_2458.f_2)
				{
					func_9(uParam0, &(Global_2405047.f_2458.f_6));
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405047.f_2433 };
					func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x5B811202FCBE9E9D(0f, 360f);
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405047.f_2458.f_2)
			{
				func_9(uParam0, &(Global_2405047.f_2458.f_6));
				func_60(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = unk_0x63A6486593EC7EC3(0, Global_2405047.f_2458.f_1);
				unk_0xEA80F1CF460B38B7(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_15(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57,29578f);
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405047.f_2433 };
					func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x5B811202FCBE9E9D(0f, 360f);
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405047.f_2433 };
				func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0x5B811202FCBE9E9D(0f, 360f);
				func_60(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405047.f_2433 };
		if (uParam1->f_5 && func_10(Global_2405047.f_482))
		{
			if (!Global_2405047.f_2458.f_5)
			{
				Global_2405047.f_2458.f_5 = 1;
			}
			else
			{
				func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_11(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = unk_0x5B811202FCBE9E9D(0f, 360f);
		func_60(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_60(vector3 vParam0)//Position - 0x3BC9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405047.f_2587[(3 - iVar0) /*3*/] = { Global_2405047.f_2587[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405047.f_2587[0 /*3*/] = { vParam0 };
}

void func_61(var uParam0, var uParam1, var uParam2)//Position - 0x3C19
{
	if (func_10(Global_2405047.f_482) && func_66() < 4096)
	{
		func_65(uParam0, 0f);
		func_65(uParam1, uParam0->f_2);
		func_65(uParam2, uParam1->f_2);
	}
	else
	{
		func_64(uParam0);
		func_63(uParam2, uParam0->f_4);
		func_62(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_62(var uParam0, vector3 vParam1, vector3 vParam2)//Position - 0x3C7E
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > 0)
		{
			fVar2 = system::vdist(Global_2407922[iVar0 /*9*/].f_4, vParam1);
			fVar3 = system::vdist(Global_2407922[iVar0 /*9*/].f_4, vParam2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407922[iVar0 /*9*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407922[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_63(var uParam0, vector3 vParam1)//Position - 0x3D1D
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<9> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > 0)
		{
			fVar2 = system::vdist(Global_2407922[iVar0 /*9*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_2407922[iVar0 /*9*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407922[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_64(var uParam0)//Position - 0x3D9F
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > 0)
		{
			if (Global_2407922[iVar0 /*9*/].f_1 > fVar1)
			{
				fVar1 = Global_2407922[iVar0 /*9*/].f_1;
				Var2 = { Global_2407922[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_65(var uParam0, float fParam1)//Position - 0x3E0C
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = 999999,9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > 0)
		{
			if (Global_2407922[iVar0 /*9*/].f_2 < fVar1 && Global_2407922[iVar0 /*9*/].f_2 > fParam1)
			{
				fVar1 = Global_2407922[iVar0 /*9*/].f_2;
				Var2 = { Global_2407922[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_66()//Position - 0x3E8F
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > iVar1)
		{
			iVar1 = Global_2407922[iVar0 /*9*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_67(vector3 vParam0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x3EC6
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	vector3 vVar11;
	bool bVar12;
	int iVar13;
	vector3 vVar14;
	vector3 vVar15;
	float fVar16;
	int iVar17;
	struct<9> Var18;
	bool bVar19;
	bool bVar20;
	
	iVar9 = 0;
	iVar7 = 0;
	bVar8 = false;
	if (uParam2->f_5)
	{
		if (Global_2405047.f_482 == 1)
		{
			if (unk_0xE97272C977DEADD3((Global_2405047.f_505.f_2 - vParam0.z)) < 25f)
			{
				iVar7++;
			}
		}
		else
		{
			iVar7++;
		}
	}
	else
	{
		iVar7++;
	}
	if (uParam2->f_5)
	{
		if (func_125(unk_0x9EB17624F44A8DA4()))
		{
			if (iParam5 == -1)
			{
				bVar8 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar8 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar7 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar7 += 2;
		}
	}
	else
	{
		iVar7 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_124(vParam0, 1084227584, 1123024896, 0))
		{
			iVar7 += 4;
		}
	}
	else
	{
		iVar7 += 4;
	}
	if (uParam2->f_5)
	{
		if (!unk_0x15BCAEC850B1E33D(unk_0xFC1458A37D98B502(), vParam0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x15BCAEC850B1E33D(unk_0xFC1458A37D98B502(), vParam0, 20f))
		{
			iVar7 += 8;
		}
	}
	else
	{
		iVar7 += 8;
		iVar7 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_123(vParam0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar7 += 32;
		}
	}
	else
	{
		iVar7 += 32;
	}
	bVar12 = true;
	iVar10 = 0;
	while (iVar10 < 2)
	{
		if (system::vmag(uParam3->f_13[iVar10 /*3*/]) > 0f)
		{
			if (!system::vdist(vParam0, uParam3->f_13[iVar10 /*3*/]) > uParam3->f_20[iVar10])
			{
				bVar12 = false;
			}
		}
		iVar10++;
	}
	if (bVar12)
	{
		iVar7 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_117(vParam0, fParam1, uParam2->f_15, func_122(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2405047.f_3;
		}
	}
	else if (!func_114(vParam0, 25f, unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3,5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_111(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_111(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405047.f_674)
		{
			vVar11 = { Global_2405047.f_505 };
			if (Global_2405047.f_482 == 26)
			{
				vVar11 = { Global_2405047.f_539.f_18 };
			}
			if (!func_36(vParam0, 0,5f))
			{
				if (func_47(vVar11))
				{
					if (!func_46(&vParam0, 0, 0, 0, 1) && !func_110(&vParam0, 0))
					{
						iVar7 += 512;
					}
				}
				else if (!func_110(&vParam0, 0))
				{
					iVar7 += 512;
				}
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_109(vParam0, 2,5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_108(unk_0x9EB17624F44A8DA4()) && func_106(unk_0x9EB17624F44A8DA4())))
		{
			if (!func_105(&vParam0, &(Global_2405047.f_2458.f_85), 0, 1065353216))
			{
				iVar7 += 1024;
			}
		}
		else
		{
			iVar7 += 1024;
		}
	}
	else
	{
		iVar7 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_106(unk_0x9EB17624F44A8DA4()))
		{
			if (!func_104(vParam0, &(Global_2405047.f_2458.f_52), &(Global_2405047.f_2458.f_85), 1073741824))
			{
				iVar7 += 2048;
			}
		}
		else
		{
			iVar7 += 2048;
		}
	}
	else
	{
		iVar7 += 2048;
	}
	if (func_103(vParam0))
	{
		if (uParam2->f_5)
		{
			if (func_10(Global_2405047.f_482))
			{
				if (func_50(vParam0, 0,01f))
				{
					iVar7 += 4096;
				}
			}
			else
			{
				iVar7 += 4096;
			}
		}
		else
		{
			iVar7 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_102(vParam0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2405047.f_44.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (unk_0x2C2E1E35924B9FF2(unk_0xD3BB1A515B0A47F3(vParam0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (unk_0x2C2E1E35924B9FF2(unk_0xD3BB1A515B0A47F3(vParam0)))
		{
			iVar7 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405047.f_674)
		{
			if (!func_37(&vParam0, 0, 0))
			{
				iVar7 = (iVar7 + 32768);
			}
		}
		else
		{
			iVar7 = (iVar7 + 32768);
		}
	}
	else
	{
		iVar7 = (iVar7 + 32768);
	}
	if (!func_15(&vParam0, 0))
	{
		iVar7 = (iVar7 + 65536);
	}
	else
	{
		iVar13 = func_49(vParam0, 1008981770);
		if (iVar13 > -1)
		{
			func_101(vParam0, &vVar14, &vVar15, &fVar16);
			if (!func_96(&(Global_2405047.f_44[iVar13 /*12*/]), vVar14, vVar15, fVar16))
			{
				iVar7 = -1;
			}
		}
		else
		{
			iVar7 = -1;
		}
	}
	if (func_21(vParam0, 1056964608))
	{
		iVar7 = -1;
	}
	if (uParam2->f_5)
	{
	}
	else if (func_95(vParam0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var18.f_2 = 1176256410;
	bVar19 = false;
	bVar20 = false;
	if (Global_2405047.f_2847 && uParam2->f_5)
	{
		if (iVar7 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = func_87(vParam0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar9, &(Var18.f_8));
			}
			else
			{
				fVar0 = func_87(vParam0, Global_2405047.f_2433, uParam3->f_6, uParam3->f_4, bVar4, iVar9, &(Var18.f_8));
			}
			if (bVar8)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_10(Global_2405047.f_482) && iVar7 < 4096)
			{
				Var18.f_2 = func_85(vParam0);
			}
			Var18.f_4 = { vParam0 };
			Var18.f_7 = fParam1;
			Var18 = iVar7;
			Var18.f_1 = fVar0;
			func_84(Var18);
			Global_2405047.f_2458.f_2 = 1;
		}
	}
	else
	{
		iVar17 = 0;
		while (iVar17 < 5)
		{
			if (iVar7 >= Global_2405047.f_2458.f_6[iVar17 /*9*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar19)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = func_87(vParam0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar9, &(Var18.f_8));
						}
						else
						{
							fVar0 = func_87(vParam0, Global_2405047.f_2433, uParam3->f_6, uParam3->f_4, bVar4, iVar9, &(Var18.f_8));
						}
						if (bVar8)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar19 = true;
					}
					if ((func_10(Global_2405047.f_482) && iVar7 == Global_2405047.f_2458.f_6[iVar17 /*9*/]) && iVar7 < 4096)
					{
						if (!bVar20)
						{
							fVar2 = func_85(vParam0);
							bVar20 = true;
						}
						if (fVar2 < Global_2405047.f_2458.f_6[iVar17 /*9*/].f_2)
						{
							Var18.f_4 = { vParam0 };
							Var18.f_7 = fParam1;
							Var18 = iVar7;
							Var18.f_1 = fVar0;
							Var18.f_2 = fVar2;
							func_83(Var18, iVar17);
							Global_2405047.f_2458.f_2 = 1;
							return;
						}
					}
					else if (iVar7 > Global_2405047.f_2458.f_6[iVar17 /*9*/] || (iVar7 == Global_2405047.f_2458.f_6[iVar17 /*9*/] && fVar0 > Global_2405047.f_2458.f_6[iVar17 /*9*/].f_1))
					{
						Var18.f_4 = { vParam0 };
						Var18.f_7 = fParam1;
						Var18 = iVar7;
						Var18.f_1 = fVar0;
						func_83(Var18, iVar17);
						Global_2405047.f_2458.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar19)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3,5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_82(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_69(vParam0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_68(fVar5, 0f, 80f, 160f, 1f, 1,2f);
						}
						else
						{
							fVar3 = func_68(fVar6, 0f, 80f, 160f, 0f, 0,2f);
						}
						bVar19 = true;
					}
					if (iVar7 > Global_2405047.f_2458.f_6[iVar17 /*9*/] || (iVar7 == Global_2405047.f_2458.f_6[iVar17 /*9*/] && fVar3 > Global_2405047.f_2458.f_6[iVar17 /*9*/].f_3))
					{
						Var18.f_4 = { vParam0 };
						Var18.f_7 = fParam1;
						Var18 = iVar7;
						Var18.f_3 = fVar3;
						func_83(Var18, iVar17);
						Global_2405047.f_2458.f_2 = 1;
						return;
					}
				}
			}
			iVar17++;
		}
	}
}

float func_68(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x47DF
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0,5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_69(vector3 vParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x487D
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	fVar3 = 999999,9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_53(iVar7, 1, 1))
		{
			if (!iVar7 == unk_0x9EB17624F44A8DA4() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_72(iVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (unk_0x917EE18109C5ACEA(iVar7) == unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))
					{
						if (!unk_0x917EE18109C5ACEA(iVar7) == -1 || !func_51(unk_0x9EB17624F44A8DA4(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar7) || !bParam4)
					{
						if (func_71(iVar7))
						{
							vVar5 = { func_70(iVar7) };
							if (!iVar7 == unk_0x9EB17624F44A8DA4())
							{
								vVar6 = { unk_0xC2E51FC090040CBB(unk_0x25D049AAC4603E65(iVar7)) };
							}
							else
							{
								vVar6 = { vVar5 };
							}
							if (!bParam4)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar6.z < -100f)
								{
									vVar6.z = vParam0.z;
								}
							}
							fVar1 = unk_0xBE3C4023003180FC(vParam0, vVar5, 1);
							fVar2 = unk_0xBE3C4023003180FC(vParam0, vVar6, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

Vector3 func_70(int iParam0)//Position - 0x49C9
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

int func_71(int iParam0)//Position - 0x49DC
{
	if (unk_0xCF308053A6212001(unk_0x25D049AAC4603E65(iParam0)) || Global_2422736[iParam0 /*420*/].f_260)
	{
		return 1;
	}
	return 0;
}

int func_72(int iParam0)//Position - 0x4A08
{
	if (func_53(iParam0, 0, 1))
	{
		if (!func_80(iParam0))
		{
			if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iParam0))
			{
				if (!unk_0x917EE18109C5ACEA(iParam0) == unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))
				{
					if (func_31(unk_0x9EB17624F44A8DA4(), 1))
					{
						if (!func_79(unk_0x917EE18109C5ACEA(iParam0), unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x917EE18109C5ACEA(iParam0) == -1 && unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
				{
					if (!func_31(unk_0x9EB17624F44A8DA4(), 1))
					{
						if (!func_73(iParam0))
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
		}
	}
	return 0;
}

int func_73(int iParam0)//Position - 0x4AB3
{
	if (func_78(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	Global_2492157 = { func_77(iParam0) };
	if (unk_0xFFE9B6D8F03AC353(&Global_2492157))
	{
		return 1;
	}
	if (func_74(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_74(int iParam0, int iParam1)//Position - 0x4AFA
{
	int iVar0;
	
	iVar0 = func_76(iParam0);
	if (!iVar0 == func_75())
	{
		if (iVar0 == func_76(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_75()//Position - 0x4B25
{
	return -1;
}

int func_76(int iParam0)//Position - 0x4B2E
{
	if (iParam0 != func_75())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_75();
}

struct<13> func_77(int iParam0)//Position - 0x4B51
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

int func_78(int iParam0, int iParam1)//Position - 0x4B68
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		Global_2492157 = { func_77(iParam0) };
		Global_2492170 = { func_77(iParam1) };
		if (unk_0xA84F967541249268(&Global_2492157))
		{
			if (unk_0xA84F967541249268(&Global_2492170))
			{
				unk_0x5CF21D71A8C4CFA6(&Global_2492087, 35, &Global_2492157);
				unk_0x5CF21D71A8C4CFA6(&Global_2492122, 35, &Global_2492170);
				if (Global_2492087 == Global_2492122)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_79(int iParam0, int iParam1, int iParam2)//Position - 0x4BD5
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

int func_80(int iParam0)//Position - 0x4DA0
{
	if (func_137(iParam0, 0))
	{
		return 1;
	}
	if (func_81())
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

bool func_81()//Position - 0x4DE2
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

float func_82(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x4DF3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_53(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (!unk_0x3E9CABD07B829173())
			{
				if (unk_0x9E06F0EE20F58CED(vParam0, fParam1))
				{
					fVar4 = system::vdist2(vParam0, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_53(iVar1, 1, 1))
		{
			if (!func_137(iVar1, 0) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x9EB17624F44A8DA4()))
				{
					if (func_71(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x917EE18109C5ACEA(iVar1) != unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))) || unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
								{
									fVar4 = system::vdist2(vParam0, unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x917EE18109C5ACEA(iVar1) != iParam5 || unk_0x917EE18109C5ACEA(iVar1) == -1)
						{
							if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
							{
								fVar4 = system::vdist2(vParam0, unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return system::sqrt(fVar3);
	}
	return -1f;
}

void func_83(struct<9> Param0, int iParam1)//Position - 0x4F8A
{
	struct<9> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405047.f_2458.f_6[iParam1 /*9*/] };
	Global_2405047.f_2458.f_6[iParam1 /*9*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_83(Var0, iParam1 + 1);
	}
}

void func_84(struct<9> Param0)//Position - 0x4FDC
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_66();
	if (Param0 > iVar2)
	{
		iVar2 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] < iVar2)
		{
			Global_2407922[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] == 0)
		{
			Global_2407922[iVar0 /*9*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999,9f;
	iVar4 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > 0)
		{
			if (Global_2407922[iVar0 /*9*/].f_1 < fVar3)
			{
				fVar3 = Global_2407922[iVar0 /*9*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > -1)
	{
		Global_2407922[iVar4 /*9*/] = { Param0 };
	}
}

float func_85(vector3 vParam0)//Position - 0x50D0
{
	var uVar0;
	
	return func_86(vParam0, &(Global_2405047.f_44), &uVar0);
}

float func_86(vector3 vParam0, var uParam1, var uParam2)//Position - 0x50E8
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = system::vdist(*(uParam1[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405047.f_2693) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (vParam0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_87(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)//Position - 0x5264
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (system::to_float(iParam5) / system::to_float(8));
	}
	if (bParam2)
	{
		fVar0 = func_68(system::vdist(vParam0, vParam1), 0f, 0f, 200f, 1f, 0,1f);
		fVar1 = (fVar1 * (fVar0 * 0,95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_69(vParam0, 1, 0, 0, 1);
	fVar0 = func_68(fVar4, 0f, func_94(), func_92(), 0f, 0,3f);
	fVar1 = (fVar1 * (fVar0 * 0,95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_90(vParam0);
	fVar0 = func_68(fVar4, 0f, 0f, 60f, 0,5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0,95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && !func_51(unk_0x9EB17624F44A8DA4(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_89(vParam0, unk_0x9EB17624F44A8DA4(), 0);
	fVar0 = func_68(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0,95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_88(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0,5f)
			{
				fVar3 = 0,5f;
			}
			fVar0 = func_68(fVar2, 0f, 0f, 200f, 1f, 0,1f);
			fVar0 = (fVar0 + func_68(fVar3, 0f, 0f, 6f, 1f, 0,5f));
			fVar0 = (fVar0 * 0,5f);
			fVar1 = (fVar1 * (fVar0 * 0,85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_68(system::vdist(Global_2405047.f_505, vParam0), 0f, 100f, 200f, 0,1f, 0,1f);
		fVar1 = (fVar1 * (fVar0 * 0,9f));
	}
	return fVar1;
}

int func_88(vector3 vParam0, var uParam1, var uParam2)//Position - 0x544A
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = unk_0xC35B067544C496CB(vParam0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (unk_0x415CDAC83972AD02(iVar1))
	{
		unk_0x52854081FE5E271E(iVar1, &vVar0);
		*uParam1 = system::vdist(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam2 = unk_0xE97272C977DEADD3((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_89(vector3 vParam0, int iParam1, int iParam2)//Position - 0x54A3
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999,9f;
	if (func_53(iParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (func_53(iVar3, 0, 1))
				{
					if (unk_0x917EE18109C5ACEA(iVar3) != unk_0x917EE18109C5ACEA(iParam1) || (unk_0x917EE18109C5ACEA(iVar3) == -1 && unk_0x917EE18109C5ACEA(iParam1) == -1))
					{
						if (Global_2416800.f_261[iVar2])
						{
							fVar1 = system::vdist(Global_2416800.f_131[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_90(vector3 vParam0)//Position - 0x554F
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = unk_0xD1A659E6867D8FF6(unk_0xFC1458A37D98B502(), &uVar4, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (unk_0x6ADD12BF4D6D2587(uVar4[iVar2]))
		{
			if (!unk_0x191BE1BC8F26F3C1(uVar4[iVar2], 0))
			{
				if (func_91(uVar4[iVar2]))
				{
					vVar3 = { unk_0xB3328BA8976B416C(uVar4[iVar2], 1) };
					fVar1 = unk_0xBE3C4023003180FC(vParam0, vVar3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

int func_91(int iParam0)//Position - 0x55DC
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x1479B36DFB6174A5(iParam0);
	switch (unk_0x8801269555D2E37F(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0x7FC5297E8F508B26(Global_1574725[unk_0x9EB17624F44A8DA4()]))
	{
		switch (unk_0x8801269555D2E37F(iVar0, Global_1574725[unk_0x9EB17624F44A8DA4()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 0)
	{
		iVar1 = unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0x7FC5297E8F508B26(Global_1574436[iVar1]))
			{
				switch (unk_0x8801269555D2E37F(iVar0, Global_1574436[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_92()//Position - 0x56A7
{
	if (func_93())
	{
		if ((unk_0x849A8CFD71854E02(Global_2405047.f_44.f_67) || unk_0xF9DDB1C0875FD9E0(Global_2405047.f_44.f_67)) || Global_2405047.f_44.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_93()//Position - 0x5703
{
	if (Global_2405047.f_44.f_65 && !Global_2405047.f_44.f_301)
	{
		if (!func_80(unk_0x9EB17624F44A8DA4()))
		{
			return 1;
		}
	}
	return 0;
}

float func_94()//Position - 0x5739
{
	if (func_93())
	{
		if ((unk_0x849A8CFD71854E02(Global_2405047.f_44.f_67) || unk_0xF9DDB1C0875FD9E0(Global_2405047.f_44.f_67)) || Global_2405047.f_44.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_95(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)//Position - 0x5795
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && unk_0x717FFCE23DE4C8C8(vParam0, fParam5)) || (fVar0 > 0f && unk_0x0D3330EAF6340496(vParam0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && unk_0x83A4DE08E23A2F1F(vParam0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && unk_0x83A4DE08E23A2F1F(vParam0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_96(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x5824
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_100(*uParam0, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_99(*uParam0, uParam0->f_3, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_97(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_97(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4, float fParam5)//Position - 0x58B0
{
	vector3 vVar0[8];
	int iVar1;
	
	func_98(vParam0, vParam1, fParam2, &vVar0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x8AE9E5E8F6DC40C9(vVar0[iVar1 /*3*/], vParam3, vParam4, fParam5, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_98(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3)//Position - 0x5902
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	var uVar3;
	
	if (vParam0.z == vParam1.z)
	{
		vParam1.z = (vParam1.z + 0,01f);
	}
	vVar0 = { vParam0 - vParam1 };
	vVar1 = { func_18(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar1 = { vVar1 / FtoV(system::vmag(vVar1)) };
	vVar1 = { vVar1 * FtoV((fParam2 * 0,5f)) };
	if (vParam0.z > vParam1.z)
	{
		uVar2 = vParam1.z;
		uVar3 = vParam0.z;
	}
	else
	{
		uVar2 = vParam0.z;
		uVar3 = vParam1.z;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) + vVar1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) + vVar1 };
}

int func_99(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x5A2F
{
	vector3 vVar0[8];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam1.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam1.y, vParam1.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam1.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam1.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam1.x, vParam0.y, vParam1.z };
	vVar0[6 /*3*/] = { vParam1.x, vParam1.y, vParam1.z };
	vVar0[7 /*3*/] = { vParam1.x, vParam1.y, vParam0.z };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x8AE9E5E8F6DC40C9(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_100(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x5AF9
{
	vector3 vVar0[4];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam1, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam1), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam1) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!unk_0x8AE9E5E8F6DC40C9(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_101(vector3 vParam0, var uParam1, var uParam2, var uParam3)//Position - 0x5B7D
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { vParam0 };
	iVar2 = func_20(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411037[iVar2])
	{
		if (func_19(vVar1, &(Global_2409893[iVar2 /*127*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2409893[iVar2 /*127*/][iVar0 /*7*/] };
			*uParam2 = { Global_2409893[iVar2 /*127*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2409893[iVar2 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411037[8])
	{
		if (func_19(vVar1, &(Global_2409893[8 /*127*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2409893[8 /*127*/][iVar0 /*7*/] };
			*uParam2 = { Global_2409893[8 /*127*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2409893[8 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_102(vector3 vParam0)//Position - 0x5C6B
{
	int iVar0;
	int iVar1;
	
	if (Global_2405047.f_44.f_55)
	{
		if (unk_0x2C2E1E35924B9FF2(Global_2405047.f_44.f_56))
		{
			if (!unk_0xD42907FA80A6F327(vParam0))
			{
				iVar0 = unk_0xD3BB1A515B0A47F3(vParam0);
				if (unk_0x2C2E1E35924B9FF2(iVar0))
				{
					iVar1 = unk_0x0BD7EF76BF7CFC43(iVar0);
					if (!iVar1 == Global_2405047.f_44.f_57)
					{
						return 0;
					}
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
	}
	return 1;
}

int func_103(vector3 vParam0)//Position - 0x5CD6
{
	switch (Global_2405047.f_2454)
	{
		case 0:
			return func_140(vParam0, Global_2405047.f_2433, Global_2405047.f_2436, 0, 0);
			break;
		
		case 1:
			return func_55(vParam0, Global_2405047.f_2447, Global_2405047.f_2450, 0, 0);
			break;
		
		case 2:
			return unk_0x8AE9E5E8F6DC40C9(vParam0, Global_2405047.f_2447, Global_2405047.f_2450, Global_2405047.f_2453, 0, 1);
			break;
	}
	return 0;
}

int func_104(vector3 vParam0, var uParam1, var uParam2, float fParam3)//Position - 0x5D68
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (system::vdist(*(uParam1[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		vVar2 = { *(uParam2[iVar1 /*10*/]) };
		vVar3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, vVar2, vVar3, fVar4, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_105(var uParam0, var uParam1, bool bParam2, float fParam3)//Position - 0x5E16
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (system::vdist((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_35(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_106(int iParam0)//Position - 0x5E89
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_107(iParam0))
			{
				if (Global_1595693[iParam0 /*680*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_107(int iParam0)//Position - 0x5EBF
{
	return Global_1595693[iParam0 /*680*/].f_196 != 0;
}

int func_108(int iParam0)//Position - 0x5ED4
{
	if (func_31(iParam0, 1))
	{
		if (Global_1595693[iParam0 /*680*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_109(vector3 vParam0, float fParam1, int iParam2)//Position - 0x5EF8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (system::vdist2(Global_2405047.f_2587[iVar0 /*3*/], vParam0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_110(var uParam0, bool bParam1)//Position - 0x5F36
{
	var uVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_38(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar2 = unk_0x5B811202FCBE9E9D(0,01f, 360f);
			func_35(&vVar1, Global_2405047.f_574, Global_2405047.f_577, 1036831949, 0, fVar2);
			if (func_42(vVar1, &uVar0) || func_38(vVar1))
			{
				vVar1 = { *uParam0 };
				func_35(&vVar1, Global_2405047.f_574, Global_2405047.f_577, 1036831949, 1, fVar2);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_111(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x5FCE
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_53(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (!unk_0x3E9CABD07B829173())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xBE3C4023003180FC(func_112(unk_0x9EB17624F44A8DA4()), vParam0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x9E06F0EE20F58CED(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_53(iVar1, 1, 1))
		{
			if (!func_137(iVar1, 0) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x9EB17624F44A8DA4()))
				{
					if ((func_71(iVar1) || !bParam8) && !Global_2422736[iVar1 /*420*/].f_274)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0x917EE18109C5ACEA(iVar1) == unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x917EE18109C5ACEA(iVar1) != unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))) || unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0xBE3C4023003180FC(func_112(iVar1), vParam0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x917EE18109C5ACEA(iVar1) != iParam6 || unk_0x917EE18109C5ACEA(iVar1) == -1)
						{
							if (unk_0xBE3C4023003180FC(func_112(iVar1), vParam0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_112(int iParam0)//Position - 0x6186
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_113() && Global_1595693[iVar0 /*680*/].f_673) && !func_3(Global_1595693[iVar0 /*680*/].f_674))
	{
		return Global_1595693[iVar0 /*680*/].f_674;
	}
	return func_70(iParam0);
}

var func_113()//Position - 0x61D9
{
	return Global_2447174.f_16;
}

int func_114(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x61E7
{
	if (func_116(vParam0, fParam1, iParam2, iParam3, 0) || func_115(vParam0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_115(vector3 vParam0, int iParam1, int iParam2)//Position - 0x6218
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_22(vParam0, Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_53(iVar2, 0, 1) && func_53(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_116(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x62DA
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_53(iVar1, 0, 1) && func_53(iParam2, 0, 1))
				{
					if (unk_0x917EE18109C5ACEA(iVar1) == unk_0x917EE18109C5ACEA(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_53(iVar1, 0, 1) && func_53(iParam2, 0, 1))
				{
					if (Global_2416800.f_261[iVar0])
					{
						if (system::vdist(Global_2416800.f_131[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 1;
						}
					}
					else if (system::vdist(func_70(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2416800.f_261[iVar0])
				{
					if (system::vdist(Global_2416800.f_131[iVar0 /*3*/], vParam0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_53(iVar1, 0, 1))
				{
					if (system::vdist(func_70(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_117(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)//Position - 0x63F7
{
	Global_2405047.f_3 = 0;
	if (!func_114(vParam0, 0,5f, unk_0x9EB17624F44A8DA4(), 0, 0))
	{
		Global_2405047.f_3++;
		if (bParam3)
		{
			if (func_165(vParam0, 3,65f, 0,5f, 1,5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
				if (!func_121(vParam0, fParam10))
				{
					Global_2405047.f_3++;
					if (!func_21(vParam0, 1056964608))
					{
						Global_2405047.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_165(vParam0, 3,65f, 0,5f, 1,5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
				if (!func_121(vParam0, fParam10))
				{
					Global_2405047.f_3++;
					if (!func_118(vParam0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_2405047.f_3++;
						if (!func_21(vParam0, 1056964608))
						{
							Global_2405047.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
			}
		}
		else if (func_165(vParam0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
			if (!func_121(vParam0, fParam10))
			{
				Global_2405047.f_3++;
				if (!func_118(vParam0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_2405047.f_3++;
					if (!func_21(vParam0, 1056964608))
					{
						Global_2405047.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
		}
	}
	return 0;
}

int func_118(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x6637
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x9EB17624F44A8DA4() == iVar1)
		{
			if ((func_53(iVar1, 1, 1) && func_71(iVar1)) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
			{
				if (!func_120(unk_0x9EB17624F44A8DA4(), iVar1, -2, 0))
				{
					if (func_119(func_70(iVar1), vParam0, fParam1, fParam2, fParam3, fParam4))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_119(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x66B6
{
	vector3 vVar0;
	vector3 vVar1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	vVar0.x = system::sin(fParam2);
	vVar0.y = system::cos(fParam2);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(system::vmag(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam3, fParam3, fParam3) };
	vVar1 = { vParam1 + vVar0 };
	vVar1.z = vParam1.z;
	vVar1.z = (vVar1.z + fParam5);
	vParam1.z = (vParam1.z + fParam5);
	return unk_0x8AE9E5E8F6DC40C9(vParam0, vParam1, vVar1, fParam4, 0, 1);
}

bool func_120(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6742
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

int func_121(vector3 vParam0, float fParam1)//Position - 0x67BA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_53(iVar1, 1, 1) && func_71(iVar1)) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
		{
			if ((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && unk_0x917EE18109C5ACEA(iVar1) == -1) && !func_51(unk_0x9EB17624F44A8DA4(), 1))
			{
				return 0;
			}
			else if ((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && !unk_0x9EB17624F44A8DA4() == iVar1) || !func_120(unk_0x9EB17624F44A8DA4(), iVar1, -2, 0))
			{
				if (system::vdist(vParam0, func_70(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_122(int iParam0)//Position - 0x6876
{
	if ((Global_2405047.f_482 == 9 || Global_2405047.f_482 == 9) || (Global_2405047.f_482 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_123(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x68B9
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x9EB17624F44A8DA4() != iVar1) || iParam6 == 0)
		{
			if (func_53(iVar1, bParam2, bParam3))
			{
				if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
				{
					if (!bParam5 || (!unk_0x3AB6A1A9084FB0A4(unk_0x25D049AAC4603E65(iVar1)) && func_71(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) != unk_0x917EE18109C5ACEA(iVar1))) || unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
						{
							if (((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && iParam7) && bParam4) && func_73(iVar1))
							{
							}
							else if (unk_0x6ADD12BF4D6D2587(unk_0x25D049AAC4603E65(iVar1)))
							{
								if (unk_0xBE3C4023003180FC(func_70(iVar1), vParam0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_124(vector3 vParam0, float fParam1, int iParam2, float fParam3)//Position - 0x69B5
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_53(iVar1, 1, 1))
			{
				if ((!func_137(iVar1, 0) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1)) && iVar1 != unk_0x9EB17624F44A8DA4())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!unk_0x917EE18109C5ACEA(iVar1) == -1)
						{
							if (unk_0x917EE18109C5ACEA(iVar1) == unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (unk_0x917EE18109C5ACEA(iVar1) == iVar3)
					{
						if (unk_0xBE3C4023003180FC(func_70(iVar1), vParam0, 1) <= (fVar2 + fParam1))
						{
							if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_125(int iParam0)//Position - 0x6A7A
{
	if (((func_51(iParam0, 1) || func_128(iParam0)) || func_127(iParam0, 0)) || func_126(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_126(int iParam0)//Position - 0x6AB6
{
	if (!func_53(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_35;
}

int func_127(int iParam0, int iParam1)//Position - 0x6AD9
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0)//Position - 0x6B14
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/] != -1;
	}
	return 0;
}

void func_129(vector3 vParam0, var uParam1, var uParam2)//Position - 0x6B35
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<8> Var3;
	vector3 vVar4;
	vector3 vVar5;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var2 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!unk_0xC80D31E4B587871C(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (system::vmag(*(uParam1[iVar0 /*4*/])) == 0f || system::vdist(Global_2359721[iVar1 /*26*/].f_3, vParam0) < system::vdist(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var2 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_131(&Var2, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			vVar4 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0,5f, 0,5f, 0,5f) };
			vVar5 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0,5f, 0,5f, 0,5f) };
			if (system::vmag(*(uParam2[iVar0 /*10*/])) == 0f || system::vdist(vVar4, vParam0) < system::vdist(vVar5, vParam0))
			{
				Var3 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var3.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var3.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var3.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_130(&Var3, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_130(var uParam0, var uParam1, int iParam2)//Position - 0x6D1D
{
	Global_2412035 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_130(&Global_2412035, uParam1, iParam2 + 1);
	}
}

void func_131(var uParam0, var uParam1, int iParam2)//Position - 0x6D5B
{
	Global_2412031 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_131(&Global_2412031, uParam1, iParam2 + 1);
	}
}

void func_132(var uParam0, var uParam1)//Position - 0x6D95
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Global_2405047.f_2229 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405047.f_2229)
		{
			if (func_133(Global_2405047.f_2230[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2405047.f_2230[iVar0 /*4*/].f_3;
				if (system::vmag(*uParam1) > 0,01f)
				{
					vVar1 = { *uParam1 - Global_2405047.f_2230[iVar0 /*4*/] };
					fVar2 = unk_0xA67DD8488EBA5F6D(vVar1.x, vVar1.y);
				}
				func_67(Global_2405047.f_2230[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, -1);
				Global_2405047.f_2458++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405047.f_2847)
	{
		func_61(&(Global_2405047.f_2458.f_6[0 /*9*/]), &(Global_2405047.f_2458.f_6[1 /*9*/]), &(Global_2405047.f_2458.f_6[2 /*9*/]));
	}
}

int func_133(vector3 vParam0, var uParam1)//Position - 0x6E82
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_12(vParam0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_12(vParam0, uParam1->f_7, uParam1->f_8, uParam1->f_11, uParam1->f_14);
		
		default:
	}
	return 0;
}

void func_134(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)//Position - 0x6EDF
{
	float fVar0;
	
	func_56(&vParam0, &vParam1);
	fVar0 = (vParam1.x - vParam0.x);
	*uParam2 = (vParam0.x + (fVar0 * 0,5f));
	uParam2->f_1 = vParam0.y;
	uParam2->f_2 = vParam0.z;
	*uParam3 = *uParam2;
	uParam3->f_1 = vParam1.y;
	uParam3->f_2 = vParam1.z;
	*uParam4 = (fVar0 * 0,5f);
}

var func_135()//Position - 0x6F35
{
	return Global_1310987.f_4;
}

void func_136(var uParam0, var uParam1)//Position - 0x6F43
{
	func_172();
	func_164(uParam0, uParam1);
}

bool func_137(int iParam0, int iParam1)//Position - 0x6F57
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_138(-1, 0) == 8;
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

int func_138(int iParam0, bool bParam1)//Position - 0x6FA2
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_139();
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

int func_139()//Position - 0x6FE3
{
	return Global_1312736;
}

bool func_140(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x6FEF
{
	if (bParam3 && bParam4)
	{
		vParam0.z = 0f;
		vParam1.z = 0f;
		return system::vdist(vParam0, vParam1) < (fParam2 + 0,01f);
	}
	else if (bParam3)
	{
		if (vParam0.z > vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return system::vdist(vParam0, vParam1) < (fParam2 + 0,01f);
	}
	else if (bParam4)
	{
		if (vParam0.z < vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return system::vdist(vParam0, vParam1) < (fParam2 + 0,01f);
	}
	return system::vdist(vParam0, vParam1) < (fParam2 + 0,01f);
}

void func_141(var uParam0, var uParam1, var uParam2)//Position - 0x70A2
{
	if (Global_2405047.f_1721 > 0 && func_160(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_142(uParam0, uParam1, uParam2);
	}
}

void func_142(var uParam0, var uParam1, var uParam2)//Position - 0x70D2
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	vector3 vVar25;
	var uVar26;
	vector3 vVar27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!system::vmag(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_34(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999,9f;
			uParam2->f_7 = 9999,9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999,9f;
	}
	if (uParam2->f_48)
	{
		if (func_159(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999,9f;
		uParam2->f_7 = 9999,9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2,75f;
			fVar12 = 7,5f;
			break;
		
		default:
			fVar11 = 2,5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2412045.f_162 = 0;
	Global_2412045.f_163 = 0;
	Global_2412045.f_164 = -99;
	Global_2412045.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2412045[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2412045.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_27(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999,9f;
		uParam2->f_7 = 9999,9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = unk_0xC35B067544C496CB(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (unk_0x415CDAC83972AD02(iVar6))
		{
			unk_0x52854081FE5E271E(iVar6, &vVar1);
			bVar10 = false;
			if (Global_2412045.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2412045.f_165 = { vVar1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x81B7CF786E5C8681(iVar6)) || unk_0xAEB36CE218651907(iVar6))
			{
				unk_0x77EC37553A5DBA63(vVar1, &uVar4, &uVar5);
				if (system::vdist(vVar1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_110(&vVar1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_158(vVar1))
									{
										vVar1 = { func_156(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51) };
										if (system::vmag(vVar1) > 0f)
										{
											if (!func_21(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (vVar1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_155(vVar1, uParam2))
														{
															if ((uParam2->f_48 && !func_159(&vVar1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (system::vmag(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && system::vdist(vVar1.x, vVar1.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_151(vVar1, fVar2, uParam2->f_34, unk_0x9EB17624F44A8DA4(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_34(uParam2->f_35, &vVar1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0,375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0,375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_150(vVar1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_165(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_165(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_148(vVar1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_147(vVar1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412045.f_162)
																										{
																											Global_2412045[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2412045.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2412045.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412045.f_162 == 0)
																									{
																										Global_2412045[0 /*3*/] = { vVar1 };
																										Global_2412045.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412045.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (system::vdist2(vVar1, uParam2->f_35) < system::vdist2(Global_2412045[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_146(vVar1, fVar2, iVar14);
																													iVar14 = Global_2412045.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2412045.f_162++;
																									if (Global_2412045.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412045.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412045[Global_2412045.f_162 /*3*/] = { vVar1 };
																									Global_2412045.f_121[Global_2412045.f_162] = fVar2;
																									Global_2412045.f_162++;
																									if (func_155(vVar1, uParam2))
																									{
																										Global_2412045.f_163++;
																									}
																									if (Global_2412045.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412045.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar2;
																							return;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar2;
																					return;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2412045.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412045[0 /*3*/] };
						*uParam1 = Global_2412045.f_121[0];
						return;
					}
					else
					{
						if (Global_2412045.f_163 > 0 && !Global_2412045.f_163 == Global_2412045.f_162)
						{
							func_144(0, uParam2);
						}
						iVar24 = unk_0x63A6486593EC7EC3(0, Global_2412045.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						vVar25 = { Global_2412045[0 /*3*/] };
						uVar26 = Global_2412045.f_121[0];
						Global_2412045[0 /*3*/] = { Global_2412045[iVar24 /*3*/] };
						Global_2412045.f_121[0] = Global_2412045.f_121[iVar24];
						Global_2412045[iVar24 /*3*/] = { vVar25 };
						Global_2412045.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2412045[0 /*3*/] };
						*uParam1 = Global_2412045.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_142(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x63A6486593EC7EC3((1 + iVar13), (40 + iVar13));
						unk_0x5C41B0B656C02102(*uParam0, iVar0, &vVar1, &fVar2, &iVar7, iVar3, fVar11, fVar12);
						vVar1 = { func_156(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, 0, 0, uParam2->f_51) };
						vVar27 = { vVar1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_34(uParam2->f_35, &vVar27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_159(&vVar27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999,9f;
								uParam2->f_7 = 9999,9f;
								func_142(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								return;
							}
						}
						else
						{
							*uParam0 = { vVar27 };
							*uParam1 = fVar28;
							return;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				func_142(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_143(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2412045.f_164 = iVar6;
	}
}

void func_143(var uParam0, var uParam1, var uParam2, vector3 vParam3)//Position - 0x7B41
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = system::vdist(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_114(*(uParam0[iVar2 /*4*/]), 5f, unk_0x9EB17624F44A8DA4(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_144(int iParam0, var uParam1)//Position - 0x7BC5
{
	if (!func_155(Global_2412045[iParam0 /*3*/], uParam1))
	{
		Global_2412045.f_162 = (Global_2412045.f_162 - 1);
		func_145(iParam0);
		if (Global_2412045.f_162 > Global_2412045.f_163)
		{
			func_144(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_144(iParam0 + 1, uParam1);
	}
}

void func_145(int iParam0)//Position - 0x7C20
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412045[iParam0 /*3*/] = { Global_2412045[iParam0 + 1 /*3*/] };
			Global_2412045.f_121[iParam0] = Global_2412045.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_146(vector3 vParam0, float fParam1, int iParam2)//Position - 0x7C6B
{
	vector3 vVar0;
	var uVar1;
	
	vVar0 = { Global_2412045[iParam2 /*3*/] };
	uVar1 = Global_2412045.f_121[iParam2];
	Global_2412045[iParam2 /*3*/] = { vParam0 };
	Global_2412045.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2412045.f_162 && iParam2 < 39)
	{
		if (system::vmag(vVar0) > 0f)
		{
			func_146(vVar0, uVar1, iParam2 + 1);
		}
	}
}

int func_147(vector3 vParam0, float fParam1, float fParam2)//Position - 0x7CD8
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999,9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_72(iVar3))
		{
			vVar1 = { func_70(iVar3) };
			fVar5 = system::vdist(vParam0, vVar1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_148(vector3 vParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x7D40
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && unk_0x9EB17624F44A8DA4() != iVar1) || iParam7 == 0)
		{
			if (func_53(iVar1, bParam3, bParam4))
			{
				if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
				{
					if (!bParam6 || (!unk_0x3AB6A1A9084FB0A4(unk_0x25D049AAC4603E65(iVar1)) && func_71(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) != unk_0x917EE18109C5ACEA(iVar1))) || unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
						{
							if (((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && iParam8) && bParam5) && func_73(iVar1))
							{
							}
							else if (unk_0x6ADD12BF4D6D2587(unk_0x25D049AAC4603E65(iVar1)))
							{
								fVar2 = 0,1f;
								if (unk_0x88DDBE9908752BF0(unk_0x25D049AAC4603E65(iVar1), 0))
								{
									iVar3 = unk_0xDFD115BB10FE46A9(unk_0x25D049AAC4603E65(iVar1), 0);
									if (unk_0x6ADD12BF4D6D2587(iVar3) && !unk_0x191BE1BC8F26F3C1(iVar3, 0))
									{
										iVar4 = unk_0x82FF3DFBC3965CC0(iVar3);
										vVar5 = { unk_0xB3328BA8976B416C(iVar3, 0) };
										fVar6 = unk_0xF0371FE6E2BF9599(iVar3);
										if (func_149(vParam0, fParam1, iParam2, vVar5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_22(func_70(iVar1), vParam0, fParam1, iParam2, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_149(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)//Position - 0x7EB3
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (func_22(vParam0, vParam3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_24(iParam2, &vVar2, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar4 = { 0f, vVar3.y, 0f };
	func_29(&vVar4, 0f, 0f, fParam1);
	vVar5 = { 0f, vVar2.y, 0f };
	func_29(&vVar5, 0f, 0f, fParam1);
	vVar6 = { (unk_0xE97272C977DEADD3((vVar3.x - vVar2.x)) * 0,5f), 0f, 0f };
	func_29(&vVar6, 0f, 0f, fParam1);
	vVar1[0 /*3*/] = { vParam0 + vVar4 + vVar6 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0,5f * unk_0xE97272C977DEADD3((vVar3.z - vVar2.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar4 - vVar6 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0,5f * unk_0xE97272C977DEADD3((vVar3.z - vVar2.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar5 + vVar6 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0,5f * unk_0xE97272C977DEADD3((vVar3.z - vVar2.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar5 - vVar6 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0,5f * unk_0xE97272C977DEADD3((vVar3.z - vVar2.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_22(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_149(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_150(vector3 vParam0, float fParam1, int iParam2)//Position - 0x806E
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = unk_0x87889570F3396ABD(vParam0, 30f, 0, iVar0);
	if (unk_0x6ADD12BF4D6D2587(iVar1) && !unk_0x191BE1BC8F26F3C1(iVar1, 0))
	{
		iVar2 = unk_0x82FF3DFBC3965CC0(iVar1);
		vVar3 = { unk_0xB3328BA8976B416C(iVar1, 0) };
		fVar4 = unk_0xF0371FE6E2BF9599(iVar1);
		if (func_149(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0x87889570F3396ABD(vParam0, 30f, 0, iVar0);
	if (unk_0x6ADD12BF4D6D2587(iVar1) && !unk_0x191BE1BC8F26F3C1(iVar1, 0))
	{
		iVar2 = unk_0x82FF3DFBC3965CC0(iVar1);
		vVar3 = { unk_0xB3328BA8976B416C(iVar1, 0) };
		fVar4 = unk_0xF0371FE6E2BF9599(iVar1);
		if (func_149(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_151(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x817A
{
	if (func_154(vParam0, fParam1, iParam2, iParam3, iParam4) || func_152(vParam0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_152(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x81B0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_153(vParam0, iParam2, Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_149(vParam0, fParam1, iParam2, Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_53(iVar2, 0, 1) && func_53(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_153(vector3 vParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x828A
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_30(iParam1, 1008981770);
	fVar1 = func_30(iParam3, 1008981770);
	fVar2 = system::vdist(vParam0, vParam2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_154(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x82CA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_53(iVar1, 0, 1) && func_53(iParam3, 0, 1))
			{
				if (Global_2416800.f_261[iVar0])
				{
					if (func_22(Global_2416800.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_22(func_70(iVar1), vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2416800.f_261[iVar0])
			{
				if (func_22(Global_2416800.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_53(iVar1, 0, 0))
			{
				if (unk_0x6ADD12BF4D6D2587(unk_0x25D049AAC4603E65(iVar1)))
				{
					if (func_22(func_70(iVar1), vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_155(vector3 vParam0, var uParam1)//Position - 0x83D9
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_140(vParam0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_55(vParam0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x8AE9E5E8F6DC40C9(vParam0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_156(vector3 vParam0, float fParam1, int iParam2, bool bParam3, vector3 vParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0x846A
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	vector3 vVar13;
	vector3 vVar14;
	vector3 vVar15;
	
	if (bParam11)
	{
		if (system::vmag(vParam4) > 0f)
		{
			if (!func_157(vParam0, *fParam1, vParam4))
			{
				*fParam1 = (*fParam1 + 180f);
			}
		}
		return vParam0;
	}
	unk_0x77EC37553A5DBA63(vParam0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		unk_0xA72AB170F6ACDE36(vParam0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*bParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *bParam8)
		{
			*fParam1 = (*fParam1 + 180f);
			if (*fParam1 > 360f)
			{
				*fParam1 = (*fParam1 + -360f);
			}
		}
		if (*fParam1 <= 90f || *fParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4,2f * (system::to_float(iVar4) * 0,5f));
				}
				else
				{
					fVar7 = (4,2f * system::to_float(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4,2f * (system::to_float(iVar5) * 0,5f));
				}
				else
				{
					fVar7 = (4,2f * system::to_float(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0,95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0,5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4,2f * -0,5f));
			}
			if (!iParam7 == 0)
			{
				func_24(iParam7, &fVar10, &fVar11, 1086324736, 1080033280, 1077936128);
				fVar12 = (fVar11 - fVar10);
				if (fVar12 > 1,8f)
				{
					fVar7 = (fVar7 + ((fVar12 - 1,8f) * -0,5f));
				}
			}
		}
	}
	if (system::vmag(vParam4) > 0f)
	{
		if (!func_157(vParam0, *fParam1, vParam4))
		{
			if (bParam3 || ((uVar2 & 1024 != 0 || vParam0.z == 0f) && bParam6))
			{
				*fParam1 = (*fParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	vVar0 = { unk_0x9EA50C5EC175E58E(vParam0, *fParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0x4DDE76238079885E(vParam0, *fParam1, &vVar13))
		{
			vVar14 = { vVar13 - vParam0 };
			if (!iParam7 == 0)
			{
				vVar15 = { vVar14 / FtoV(system::vmag(vVar14)) };
				func_24(iParam7, &fVar10, &fVar11, 1086324736, 1080033280, 1077936128);
				fVar12 = (fVar11 - fVar10);
				vVar15 = { vVar15 * FtoV((fVar12 * 0,5f)) };
				vVar14 = { vVar14 - vVar15 };
				vVar13 = { vParam0 + vVar14 };
			}
			vVar15 = { vVar0 - vVar13 };
			vVar0 = { vVar13 };
		}
	}
	return vVar0;
}

int func_157(vector3 vParam0, float fParam1, vector3 vParam2)//Position - 0x8889
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 0f, 1f, 0f };
	func_29(&vVar0, 0f, 0f, fParam1);
	vVar1 = { vParam2 - vParam0 };
	if (func_17(vVar1, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_158(vector3 vParam0)//Position - 0x88C5
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_20(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2411759[iVar1])
	{
		if (func_19(vParam0, &(Global_2411056[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411759[8])
	{
		if (func_19(vParam0, &(Global_2411056[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_159(var uParam0, bool bParam1)//Position - 0x8940
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405047.f_26.f_17)
	{
		switch (Global_2405047.f_26.f_16)
		{
			case 0:
				if (func_140(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_15, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_55(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_12, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x8AE9E5E8F6DC40C9(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_12, Global_2405047.f_26.f_15, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_41(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_12, Global_2405047.f_26.f_15, Global_2405047.f_26.f_16, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_160(var uParam0, var uParam1, var uParam2)//Position - 0x8A32
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	vector3 vVar13;
	var uVar14;
	
	if (Global_2405047.f_1721 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!system::vmag(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_34(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999,9f;
				uParam2->f_7 = 9999,9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_159(uParam0, 1))
			{
				uParam2->f_6 = 9999,9f;
				uParam2->f_7 = 9999,9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999,9f;
			uParam2->f_7 = 9999,9f;
		}
		Global_2412045.f_162 = 0;
		Global_2412045.f_163 = 0;
		iVar4 = 0;
		while (iVar4 < 40)
		{
			Global_2412045[iVar4 /*3*/] = { 0f, 0f, 0f };
			Global_2412045.f_121[iVar4] = 0f;
			iVar4++;
		}
		func_161(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405047.f_1721)
		{
			iVar1 = Global_2405047.f_2127[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_2405047.f_1722[iVar1 /*4*/] };
				fVar3 = Global_2405047.f_1722[iVar1 /*4*/].f_3;
				if (system::vmag(vVar2) > 0f)
				{
					if ((uParam2->f_57 && system::vdist(vVar2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && system::vdist(vVar2.x, vVar2.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_151(vVar2, fVar3, uParam2->f_34, unk_0x9EB17624F44A8DA4(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_34(uParam2->f_35, &vVar2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar5 = uParam2->f_31;
										bVar6 = true;
										iVar7 = 1;
										fVar8 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											fVar8 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar8 = (fVar8 * 0,375f);
											}
										}
										else
										{
											bVar6 = true;
											iVar7 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar8 = (fVar8 * 0,375f);
												}
											}
										}
										bVar9 = false;
										if (!func_150(vVar2, fVar3, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_165(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar9 = true;
												}
											}
											else if (func_165(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_148(vVar2, fVar3, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar9 = true;
											}
										}
										if (bVar9)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar11 = 0f;
												if (uParam2->f_52)
												{
													iVar10 = func_147(vVar2, uParam2->f_54, &fVar11);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar10 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar10 < uParam2->f_53)
														{
															iVar4 = 0;
															while (iVar4 < Global_2412045.f_162)
															{
																Global_2412045[iVar4 /*3*/] = { 0f, 0f, 0f };
																Global_2412045.f_121[iVar4] = 0f;
																iVar4++;
															}
															Global_2412045.f_162 = 0;
															uParam2->f_53 = iVar10;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412045.f_162 == 0)
														{
															Global_2412045[0 /*3*/] = { vVar2 };
															Global_2412045.f_121[0] = fVar3;
														}
														else
														{
															iVar4 = 0;
															while (iVar4 < Global_2412045.f_162 + 1)
															{
																if (iVar4 < 40)
																{
																	if (system::vdist2(vVar2, uParam2->f_35) < system::vdist2(Global_2412045[iVar4 /*3*/], uParam2->f_35))
																	{
																		func_146(vVar2, fVar3, iVar4);
																		iVar4 = Global_2412045.f_162 + 1;
																	}
																}
																iVar4++;
															}
														}
														Global_2412045.f_162++;
														if (Global_2412045.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405047.f_1721;
															}
															else if (Global_2412045.f_162 == 40)
															{
																iVar0 = Global_2405047.f_1721;
															}
														}
													}
													else
													{
														Global_2412045[Global_2412045.f_162 /*3*/] = { vVar2 };
														Global_2412045.f_121[Global_2412045.f_162] = fVar3;
														Global_2412045.f_162++;
														if (Global_2412045.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405047.f_1721;
															}
															else if (Global_2412045.f_162 == 40)
															{
																iVar0 = Global_2405047.f_1721;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar3;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar3;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2412045.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412045[0 /*3*/] };
				*uParam1 = Global_2412045.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412045.f_163 > 0 && !Global_2412045.f_163 == Global_2412045.f_162)
				{
					func_144(0, uParam2);
				}
				iVar12 = unk_0x63A6486593EC7EC3(0, Global_2412045.f_162);
				vVar13 = { Global_2412045[0 /*3*/] };
				uVar14 = Global_2412045.f_121[0];
				Global_2412045[0 /*3*/] = { Global_2412045[iVar12 /*3*/] };
				Global_2412045.f_121[0] = Global_2412045.f_121[iVar12];
				Global_2412045[iVar12 /*3*/] = { vVar13 };
				Global_2412045.f_121[iVar12] = uVar14;
				*uParam0 = { Global_2412045[0 /*3*/] };
				*uParam1 = Global_2412045.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_160(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_142(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_161(vector3 vParam0)//Position - 0x9082
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405047.f_1721)
	{
		uVar1 = func_162(vParam0, fVar0, &fVar0);
		Global_2405047.f_2127[iVar2] = uVar1;
		iVar2++;
	}
}

int func_162(vector3 vParam0, float fParam1, float fParam2)//Position - 0x90BD
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405047.f_1721)
	{
		fVar2 = system::vdist2(vParam0, Global_2405047.f_1722[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

bool func_163(int iParam0)//Position - 0x911F
{
	return iParam0 == 50;
}

void func_164(var uParam0, var uParam1)//Position - 0x912C
{
	unk_0xC38F0D30350641A3(uParam0, uParam1, 0,1f);
	Global_2405047.f_2441 = unk_0xBBA15366508D1BDE();
	Global_2405047.f_2439 = 1;
	Global_2405047.f_2442 = unk_0xD1952A425B78FFC0();
}

int func_165(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x915F
{
	Global_2405047.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x717FFCE23DE4C8C8(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x0D3330EAF6340496(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0x0D3330EAF6340496(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x83A4DE08E23A2F1F(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam11)
	{
		if (unk_0xAA0BDFF32B6BC02A(vParam0, 2,5f) > 0)
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (fParam12 > 0f)
	{
		if (func_123(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_111(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405047.f_2++;
	return 1;
}

void func_166()//Position - 0x9270
{
	func_171();
	func_170();
	func_169();
	func_168();
	func_167();
}

void func_167()//Position - 0x928C
{
	struct<9> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_2407922[iVar1 /*9*/] = { Var0 };
		iVar1++;
	}
}

void func_168()//Position - 0x92C4
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_2405047.f_2458.f_85[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_169()//Position - 0x92F3
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_2405047.f_2458.f_52[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_170()//Position - 0x9321
{
	struct<9> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_2405047.f_2458.f_6[iVar1 /*9*/] = { Var0 };
		iVar1++;
	}
}

void func_171()//Position - 0x935D
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2405047.f_2458 = { Var0 };
}

void func_172()//Position - 0x937B
{
	if (Global_2405047.f_2439)
	{
		if (unk_0xBBA15366508D1BDE() == Global_2405047.f_2441)
		{
			unk_0xA97AB0E9B7AF96B6();
		}
		else
		{
			unk_0xA97AB0E9B7AF96B6();
		}
		Global_2405047.f_2439 = 0;
	}
}

int func_173(bool bParam0)//Position - 0x93AE
{
	if (unk_0x3E9CABD07B829173())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_174(vector3 vParam0, float fParam1, var uParam2, var uParam3, struct<13> Param4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)//Position - 0x93D1
{
	struct<17> Var0;
	struct<18> Var1;
	vector3 vVar2;
	
	if (Param4.f_5 > (fParam1 - 20f))
	{
		Param4.f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1 = { vParam0 };
	Var1.f_3 = Param4.f_11;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	if (func_8(&Var1, &Param4, &Var0))
	{
		if ((Param4.f_12 > 0f && Param4.f_7) && Param4.f_8)
		{
			vVar2 = { vParam0 - Var0[0 /*3*/] };
			if (vVar2.z > Param4.f_12)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_16[0] = Param4.f_11;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_175(var uParam0)//Position - 0x94CB
{
	if (uParam0->f_1)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_176(var uParam0)//Position - 0x94F4
{
	if (!uParam0->f_1)
	{
		if (unk_0x8E1421E2A2A2FBD4())
		{
			func_177(uParam0, 0, 0);
		}
	}
}

void func_177(var uParam0, bool bParam1, bool bParam2)//Position - 0x9513
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x3A711520F83BAE98() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD1952A425B78FFC0();
			}
			else
			{
				*uParam0 = unk_0xEBD55014C579F626();
			}
		}
		else
		{
			*uParam0 = unk_0x53C562FD2B9E3AB0();
		}
		uParam0->f_1 = 1;
	}
}

void func_178()//Position - 0x9558
{
	switch (vLocal_62[unk_0x622FF3AE4B1D07C3() /*3*/].f_2)
	{
		case 0:
			func_212();
			func_211();
			if (func_200())
			{
				func_198();
				func_197();
				func_179(35);
				vLocal_62[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 1;
			}
			else if (Local_60.f_8 >= 1)
			{
				func_197();
				vLocal_62[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_60.f_8 >= 2)
			{
				vLocal_62[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_179(int iParam0)//Position - 0x95DF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_7960)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_196() /*12130*/].f_7676.f_3809[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_196() /*12130*/].f_7676.f_3809[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_196() /*12130*/].f_7676.f_3809[iVar2 /*3*/].f_1)
			{
				func_192(iVar2, 1);
				unk_0x872F1C1F8587CCC7(&Global_2492674, (8 + iVar2));
				func_187(2107, -1);
				func_183(67, -1);
				func_187(2570, -1);
				func_183(69, -1);
				unk_0x858AD516F5EB3631(1000, iVar1);
				if (iVar3 < 2)
				{
					if (!unk_0xC80D31E4B587871C(Global_2492674, 12))
					{
						func_180(7, 0);
					}
					else
					{
						func_180(15, 0);
					}
				}
			}
		}
	}
}

void func_180(int iParam0, int iParam1)//Position - 0x96D6
{
	int iVar0;
	
	if (func_182(iParam0, iParam1))
	{
		iVar0 = func_181();
		Global_2456735[iVar0] = iParam0;
	}
}

int func_181()//Position - 0x96F9
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2456735[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_182(int iParam0, var uParam1)//Position - 0x972E
{
	if (Global_1312842)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312854) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_183(int iParam0, int iParam1)//Position - 0x97B4
{
	int iVar0;
	
	iVar0 = func_185(iParam0, func_186(iParam1));
	iVar0++;
	func_184(iParam0, iVar0, iParam1);
}

void func_184(int iParam0, int iParam1, var uParam2)//Position - 0x97DA
{
	int iVar0;
	
	iVar0 = Global_2548785[iParam0 /*3*/][func_186(uParam2)];
	unk_0xBFFF62F75445099D(iVar0, iParam1, 1);
}

int func_185(int iParam0, int iParam1)//Position - 0x97FE
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2548785[iParam0 /*3*/][func_186(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_186(var uParam0)//Position - 0x982A
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_139();
		if (iVar1 > -1)
		{
			Global_2522773 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522773 = 1;
		}
	}
	return iVar0;
}

void func_187(int iParam0, int iParam1)//Position - 0x985E
{
	int iVar0;
	
	iVar0 = func_191(iParam0, func_186(iParam1), 0);
	iVar0++;
	if (!func_190(iParam0))
	{
		func_189(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_188(iParam0, iVar0, iParam1, 1);
	}
}

void func_188(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x989F
{
	int iVar0;
	
	iVar0 = Global_2523060[iParam0 /*3*/][func_186(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1368159[func_186(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1368165[func_186(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1368171[func_186(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1368177[func_186(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1368135[func_186(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1368141[func_186(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1368147[func_186(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1368153[func_186(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1368111[func_186(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1368117[func_186(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1368123[func_186(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1368129[func_186(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1368183[func_186(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1368189[func_186(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1368195[func_186(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1368201[func_186(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1368207[func_186(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1368213[func_186(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1368219[func_186(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2549199[0 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2549199[1 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2549199[2 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2549199[3 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 7052:
			Global_2549282[func_186(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1368225[func_186(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1368231[func_186(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1368237[func_186(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1368243[func_186(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2549239[0 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2549239[1 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2549239[2 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2549239[3 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2549239[4 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549285[0 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549285[1 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549285[2 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549285[3 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549285[4 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549301[0 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549301[1 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549301[2 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549301[3 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549301[4 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2549239[5 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2549199[4 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549317[func_186(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549326[func_186(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549320[func_186(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549329[func_186(iParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549323[func_186(iParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549332[func_186(iParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549335[func_186(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2549239[6 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2549199[5 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2549239[7 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2549199[6 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2549239[8 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2549199[7 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2549239[9 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2549199[8 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2549239[10 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2549199[9 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2549239[11 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2549199[10 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2549239[12 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2549199[11 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2549239[13 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2549199[12 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_189(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x9F6A
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_186(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_190(int iParam0)//Position - 0x9F9A
{
	if (Global_1368092)
	{
		switch (iParam0)
		{
			case 784:
			case 785:
			case 786:
			case 787:
			case 774:
			case 775:
			case 776:
			case 777:
			case 764:
			case 765:
			case 766:
			case 767:
			case 754:
			case 755:
			case 756:
			case 757:
			case 1300:
			case 636:
			case 1275:
			case 761:
			case 762:
			case 763:
			case 1233:
			case 1873:
			case 2264:
			case 2918:
			case 3047:
			case 7052:
			case 3042:
			case 3043:
			case 3044:
			case 3045:
			case 3046:
			case 3221:
			case 3223:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3631:
			case 3632:
			case 3633:
			case 3634:
			case 3216:
			case 3210:
			case 3652:
			case 3653:
			case 3654:
			case 3655:
			case 3656:
			case 3657:
			case 3678:
			case 3219:
			case 3218:
			case 4003:
			case 4002:
			case 4006:
			case 4005:
			case 4009:
			case 4008:
			case 4012:
			case 4011:
			case 6093:
			case 6092:
			case 6151:
			case 6150:
				return 1;
				break;
			}
	}
	return 0;
}

int func_191(int iParam0, int iParam1, int iParam2)//Position - 0xA150
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_186(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_192(int iParam0, int iParam1)//Position - 0xA182
{
	if (Global_2097152[func_196() /*12130*/].f_7676.f_3809[iParam0 /*3*/].f_1 != iParam1)
	{
		Global_2097152[func_196() /*12130*/].f_7676.f_3809[iParam0 /*3*/].f_1 = iParam1;
		func_193(func_195(iParam0), iParam1, -1, 1);
	}
}

void func_193(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA1CD
{
	int iVar0;
	
	if (func_194())
	{
		iVar0 = Global_2547365[iParam0 /*3*/][func_186(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x41495934EA1DEC56(iVar0, iParam1, iParam3);
		}
	}
}

int func_194()//Position - 0xA1FF
{
	return 1;
	return 0;
}

int func_195(int iParam0)//Position - 0xA20C
{
	switch (iParam0)
	{
		case 0:
			return 169;
		
		case 1:
			return 170;
		
		case 2:
			return 171;
		
		default:
	}
	return 169;
}

int func_196()//Position - 0xA23E
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_197()//Position - 0xA24B
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_65))
	{
		unk_0xE30CF11C0EE14316(&iLocal_65);
	}
}

void func_198()//Position - 0xA262
{
	if (!unk_0xC80D31E4B587871C(Global_2436181.f_3760, 0))
	{
		unk_0x872F1C1F8587CCC7(&(Global_2436181.f_3760), 0);
		func_199();
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Global_2436181.f_3760), 1);
	}
}

void func_199()//Position - 0xA299
{
	func_187(1185, -1);
}

int func_200()//Position - 0xA2A9
{
	struct<14> Var0;
	
	if (unk_0x93C304998B457C45(Local_60.f_2))
	{
		if (unk_0x918CA1BFFAA03556(Local_60.f_2))
		{
			if (unk_0x5D67DB68EF61B3E1(unk_0xE8BC72FED1586931(Local_60.f_2), unk_0xFC1458A37D98B502()) && func_210(Local_60.f_2))
			{
				func_209(&(Local_60.f_2));
				if (unk_0xA6DECE14FC9A8C51(iLocal_65))
				{
					unk_0xE30CF11C0EE14316(&iLocal_65);
				}
				if (!func_208(1))
				{
					func_203("ABB_BOXCT", 1);
				}
				Var0.f_2 = -1835929197;
				Var0.f_10 = unk_0x9EB17624F44A8DA4();
				Var0.f_3 = uLocal_64;
				func_201(Var0, func_202(1));
				unk_0x872F1C1F8587CCC7(&(vLocal_62[unk_0x622FF3AE4B1D07C3() /*3*/].f_1), 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_201(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0xA348
{
	Param0 = -1942454564;
	Param0.f_1 = unk_0x9EB17624F44A8DA4();
	if (!iParam13 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Param0, 14, iParam13);
	}
}

int func_202(int iParam0)//Position - 0xA375
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
		{
			iVar2 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar1));
			if (func_53(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x9EB17624F44A8DA4() || iParam0)
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_203(char* sParam0, int iParam1)//Position - 0xA3D2
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xE3C33644878DCCFD(sParam0);
	iVar0 = unk_0x65F0733C4A64907A(0, 1);
	func_204(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_204(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xA3FE
{
	int iVar0;
	
	if ((!func_207() || !unk_0x4916190900E76373()) || !func_137(unk_0x9EB17624F44A8DA4(), 0))
	{
		return;
	}
	iVar0 = func_205(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1664509.f_5[iVar0 /*53*/] = iParam0;
		Global_1664509.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1664509.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1664509.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1664509.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1664509.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1664509.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_205(int iParam0)//Position - 0xA506
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1664509 - 1))
	{
		if (iParam0 > Global_1664509.f_5[iVar0 /*53*/].f_1)
		{
			func_206(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1664509++;
	if (Global_1664509 > 5)
	{
		Global_1664509 = 5;
		return Global_1664509;
	}
	return (Global_1664509 - 1);
}

void func_206(int iParam0)//Position - 0xA568
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1664509.f_5[iVar0 /*53*/] = { Global_1664509.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_207()//Position - 0xA5A1
{
	return unk_0x21EA5D4DC72DE119(-1762644250);
}

int func_208(int iParam0)//Position - 0xA5B2
{
	switch (iParam0)
	{
		case 1:
			return Global_1626122 > 0;
		
		case 2:
			return Global_1626122.f_1 > 0;
		
		case 3:
			return Global_1626122.f_2 > 0;
		
		case 4:
			return Global_1626122.f_4 > 0;
		
		case 5:
			return Global_1626122.f_3 > 0;
		
		default:
	}
	return 0;
}

void func_209(var uParam0)//Position - 0xA615
{
	var uVar0;
	
	if (unk_0x93C304998B457C45(*uParam0))
	{
		if (!unk_0xE53FD7AF7F25C0A8(*uParam0))
		{
		}
	}
	if (unk_0x918CA1BFFAA03556(*uParam0))
	{
		uVar0 = unk_0x29AB7D6D0DE18055(*uParam0);
		unk_0xFA8AA9E856FCF99B(&uVar0);
	}
}

int func_210(var uParam0)//Position - 0xA64E
{
	if (unk_0x93C304998B457C45(uParam0))
	{
		unk_0x04092215B40E1262(uParam0);
		return unk_0xE53FD7AF7F25C0A8(uParam0);
	}
	return 0;
}

void func_211()//Position - 0xA670
{
	if (!unk_0xA6DECE14FC9A8C51(iLocal_65))
	{
		if (unk_0x93C304998B457C45(Local_60.f_2))
		{
			iLocal_65 = unk_0xCA43F0FC44D9B846(unk_0xE8BC72FED1586931(Local_60.f_2));
			unk_0xA5D25D3F884FF516(iLocal_65, 1,2f);
			unk_0x4B4040A0EC7DBA81(iLocal_65, 403);
			unk_0x0C71C8E276E3EC54(iLocal_65, 2);
			unk_0x62BD54E491535B76(iLocal_65, "ABB_BLIPN");
		}
	}
}

void func_212()//Position - 0xA6BF
{
	int iVar0;
	
	if (!unk_0xF491DD47B88AA84E())
	{
		iVar0 = func_191(1187, -1, 0);
		if (!unk_0xC80D31E4B587871C(iVar0, 14))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 14);
			func_189(1187, iVar0, -1, 1, 0);
		}
	}
}

int func_213()//Position - 0xA6FA
{
	return Local_60;
}

int func_214()//Position - 0xA704
{
	unk_0x6FF834D85E2DD4C6(joaat("prop_drug_package_02"));
	if (unk_0x9A0B2ED5055D3F0B(joaat("prop_drug_package_02")))
	{
		return 1;
	}
	return 0;
}

int func_215(int iParam0)//Position - 0xA726
{
	return vLocal_62[iParam0 /*3*/];
}

int func_216()//Position - 0xA734
{
	var uVar0;
	
	func_223(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_222())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_221())
	{
		return 1;
	}
	if (func_220(157))
	{
		if (!func_219())
		{
			return 1;
		}
	}
	if (func_220(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_217() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_217()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_217()//Position - 0xA7BE
{
	switch (func_218())
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

int func_218()//Position - 0xA7F2
{
	return Global_25233;
}

bool func_219()//Position - 0xA7FD
{
	return Global_2447174.f_586;
}

int func_220(int iParam0)//Position - 0xA80C
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_221()//Position - 0xA823
{
	return Global_2456830;
}

bool func_222()//Position - 0xA82F
{
	return Global_2447174.f_581;
}

void func_223(var uParam0)//Position - 0xA83E
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
					func_224(iVar0);
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

void func_224(int iParam0)//Position - 0xA8B1
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_53(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_225(iVar2, &bVar3))
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

int func_225(int iParam0, var uParam1)//Position - 0xA932
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x9761C10D57B68069(iParam0))
		{
			if (unk_0x828686E167EA3FD3(iParam0))
			{
				if (!unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(iParam0)))
				{
					unk_0xDD29FF4BAB8AFF9C(iParam0, 0, 1);
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

void func_226()//Position - 0xA991
{
	system::wait(0);
}

int func_227(int iParam0)//Position - 0xA99E
{
	return Global_1595693[iParam0 /*680*/];
}

void func_228()//Position - 0xA9AF
{
	Global_1368309 = -1;
	if (unk_0xA6DECE14FC9A8C51(iLocal_65))
	{
		unk_0xE30CF11C0EE14316(&iLocal_65);
	}
	func_231();
	if (unk_0x3A711520F83BAE98())
	{
		if (unk_0x8E1421E2A2A2FBD4())
		{
			if (unk_0x93C304998B457C45(Local_60.f_2) && unk_0xE53FD7AF7F25C0A8(Local_60.f_2))
			{
				func_209(&(Local_60.f_2));
			}
			Local_60 = 4;
		}
	}
	if (unk_0xC80D31E4B587871C(Local_60.f_1, 8))
	{
		func_230();
	}
	func_229();
}

void func_229()//Position - 0xAA15
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_230()//Position - 0xAA21
{
	Global_2512808.f_842 = 0;
	Global_2512808.f_842.f_1 = { 0f, 0f, 0f };
	Global_2512808.f_842.f_4 = 0f;
	Global_2512808.f_842.f_8 = 0;
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_842.f_7), 0);
}

void func_231()//Position - 0xAA61
{
	if (unk_0xC80D31E4B587871C(iLocal_63, 4))
	{
		unk_0xC6279E3ABB557EC4(unk_0x9EB17624F44A8DA4(), 0,72f);
		unk_0x1339A65CEBFE3F23(unk_0x9EB17624F44A8DA4(), 1f, 1);
		unk_0xB70471C41406AD79(unk_0x9EB17624F44A8DA4(), 1f);
		unk_0x8DF28ECC420BF14D(unk_0x9EB17624F44A8DA4(), 1f);
		func_232(1);
		unk_0x0EE72DB1CD8A3B86(&iLocal_63, 5);
		unk_0x0EE72DB1CD8A3B86(&iLocal_63, 7);
		unk_0x0EE72DB1CD8A3B86(&iLocal_63, 4);
	}
}

void func_232(int iParam0)//Position - 0xAAB6
{
	char* sVar0;
	
	sVar0 = func_233(iParam0, 0);
	unk_0x704F5ADD5B29DB63(sVar0);
}

char* func_233(int iParam0, bool bParam1)//Position - 0xAACD
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "MP_Bull_tost_Out";
			}
			else
			{
				return "MP_Bull_tost";
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return "MP_Powerplay_Out";
			}
			else
			{
				return "MP_Powerplay";
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return "MP_Killstreak_Out";
			}
			else
			{
				return "MP_Killstreak";
			}
			break;
		
		case 4:
			if (bParam1)
			{
				return "MP_Loser_Streak_Out";
			}
			else
			{
				return "MP_Loser_Streak";
			}
			break;
		
		case 6:
			if (bParam1)
			{
				return "BikerFilterOut";
			}
			else
			{
				return "BikerFilter";
			}
			break;
	}
	return "";
}

int func_234(struct<21> Param0)//Position - 0xAB70
{
	func_238(func_239(Param0), Param0);
	unk_0xB66EA47EE710E67F(1);
	func_236(0, -1, 0);
	unk_0x6E3ED3AE1C20445F(&Local_60, 11);
	unk_0xE7BC983D1386C9EE(&vLocal_62, 97);
	if (!func_235())
	{
		return 0;
	}
	unk_0x941BE77305BB5695(0);
	if (unk_0x8E1421E2A2A2FBD4())
	{
		Local_60.f_7 = Param0.f_16;
		Global_1368309 = Local_60.f_7;
		Local_60.f_3 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
		if (!func_3(Global_2512808.f_842.f_1))
		{
			unk_0x872F1C1F8587CCC7(&(Local_60.f_1), 8);
		}
	}
	bLocal_68 = unk_0xB01117EF93F91860();
	vLocal_62[unk_0x622FF3AE4B1D07C3() /*3*/] = 0;
	return 1;
}

int func_235()//Position - 0xAC08
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x3A711520F83BAE98())
		{
			return 0;
		}
		if (unk_0x6303B0CB83943C5E())
		{
			return 1;
		}
		if (func_222())
		{
			return 0;
		}
		if (func_220(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		system::wait(0);
	}
	return 0;
}

int func_236(int iParam0, int iParam1, bool bParam2)//Position - 0xAC61
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_229();
			}
			else
			{
				return 0;
			}
		}
		if (!func_237())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_229();
					}
					else
					{
						return 0;
					}
				}
				if (func_222())
				{
					if (!bParam2)
					{
						func_229();
					}
					else
					{
						return 0;
					}
				}
				if (func_220(155))
				{
					if (!bParam2)
					{
						func_229();
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
					func_229();
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
				func_229();
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
			func_229();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_237()//Position - 0xAD76
{
	return Global_1312831;
}

void func_238(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0xAD82
{
	if (!unk_0x3A711520F83BAE98())
	{
		func_229();
	}
	unk_0xAEA89A7E72415961(iParam0, 0, Param1.f_16);
}

int func_239(int iParam0)//Position - 0xADA1
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 113:
			return 32;
		
		case 114:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 115:
			return 32;
		
		case 116:
			return 32;
		
		case 120:
			return 32;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 2;
		
		case 136:
			return 1;
		
		case 132:
			return 2;
		
		case 133:
			return 4;
		
		case 134:
			return 2;
		
		case 135:
			return 2;
		
		case 117:
			return 1;
		
		case 137:
			return 2;
		
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
			return 0;
		
		case 147:
			return 1;
		
		case 144:
			return 4;
		
		case 145:
			return 16;
		
		case 146:
			return 32;
		
		default:
	}
	return 0;
}

