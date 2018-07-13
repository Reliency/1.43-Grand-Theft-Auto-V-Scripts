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
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	vector3 vLocal_58[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<21> Local_59 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
		func_37(ScriptParam_59);
	}
	else
	{
		func_34();
	}
	iLocal_53 = unk_0x53C562FD2B9E3AB0();
	while (true)
	{
		func_33();
		if ((func_23() || unk_0xB01117EF93F91860()) || (func_22(unk_0x9EB17624F44A8DA4()) || func_21(unk_0x9EB17624F44A8DA4())))
		{
			func_34();
		}
		if (unk_0x3A711520F83BAE98())
		{
			func_2();
			func_1();
			iLocal_54++;
			if (iLocal_54 >= unk_0xB72D370CB7ABC3EF())
			{
				iLocal_54 = 0;
			}
		}
		else
		{
			func_34();
		}
	}
}

void func_1()//Position - 0xF2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xF19B3230511B7F9F();
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if ((iLocal_54 % iVar0) == 0)
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
			{
				iVar2 = unk_0x25D049AAC4603E65(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0)));
				if (!unk_0x191BE1BC8F26F3C1(iVar2, 0))
				{
					if (vLocal_58[iVar0 /*3*/].f_2)
					{
						if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), unk_0xB3328BA8976B416C(iVar2, 1)) <= 22500f)
						{
							if (!iLocal_56)
							{
								unk_0x6450931B826B49D9("mini@prostitutes@sexlow_veh");
								unk_0x6450931B826B49D9("mini@prostitutes@sexnorm_veh");
								unk_0x6450931B826B49D9("mini@prostitutes@sexlow_veh_first_person");
								unk_0x6450931B826B49D9("mini@prostitutes@sexnorm_veh_first_person");
								iLocal_56 = 1;
							}
							if (!unk_0xC80D31E4B587871C(iLocal_55, iVar0))
							{
								unk_0x872F1C1F8587CCC7(&iLocal_55, iVar0);
							}
						}
						else if (unk_0xC80D31E4B587871C(iLocal_55, iVar0))
						{
							unk_0x0EE72DB1CD8A3B86(&iLocal_55, iVar0);
						}
					}
					else if (unk_0xC80D31E4B587871C(iLocal_55, iVar0))
					{
						unk_0x0EE72DB1CD8A3B86(&iLocal_55, iVar0);
					}
				}
				else if (unk_0xC80D31E4B587871C(iLocal_55, iVar0))
				{
					unk_0x0EE72DB1CD8A3B86(&iLocal_55, iVar0);
				}
			}
		}
		iVar0++;
	}
	if ((iLocal_55 == 0 && iLocal_56) && !vLocal_58[iVar1 /*3*/].f_2)
	{
		unk_0xFCCDDE0E48CF9588("mini@prostitutes@sexlow_veh");
		unk_0xFCCDDE0E48CF9588("mini@prostitutes@sexnorm_veh");
		unk_0xFCCDDE0E48CF9588("mini@prostitutes@sexlow_veh_first_person");
		unk_0xFCCDDE0E48CF9588("mini@prostitutes@sexnorm_veh_first_person");
		iLocal_56 = 0;
	}
}

void func_2()//Position - 0x222
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		return;
	}
	if (iLocal_53 > unk_0x53C562FD2B9E3AB0())
	{
		return;
	}
	iVar0 = 0;
	iVar2 = unk_0xF19B3230511B7F9F();
	bVar3 = false;
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar1 = unk_0xFC1458A37D98B502();
			if (func_20(&iVar1))
			{
				bVar3 = true;
			}
		}
	}
	switch (iLocal_52)
	{
		case 0:
			if ((func_17(unk_0x9EB17624F44A8DA4(), 1) || func_16()) || !bVar3)
			{
				iLocal_52 = 4;
			}
			else
			{
				iVar0 = func_12();
				if (iVar0 != func_11(iVar2) && iVar0 != 0)
				{
					func_10(iVar0);
					iLocal_53 = unk_0x53C562FD2B9E3AB0();
					iLocal_52 = 2;
				}
				else
				{
					iLocal_53 = unk_0x53C562FD2B9E3AB0() + 500;
				}
			}
			break;
		
		case 2:
			if (func_3())
			{
				Global_25386 = 0f;
				unk_0xD9E2C360120FEB7C("pb_prostitute");
				iLocal_53 = unk_0x53C562FD2B9E3AB0() + 250;
				vLocal_58[iVar2 /*3*/].f_2 = 0;
				iLocal_52 = 3;
			}
			else
			{
				iLocal_53 = unk_0x53C562FD2B9E3AB0() + 250;
			}
			break;
		
		case 3:
			if ((unk_0x3B6F9DF9C5FEB3A4("pb_prostitute") && unk_0x8F38E94BBF3404CD(joaat("pb_prostitute")) <= 0) && !unk_0xA357031C5C05DD94("pb_prostitute", unk_0xF19B3230511B7F9F(), 1, 0))
			{
				iVar4 = func_11(iVar2);
				iLocal_57 = system::start_new_script_with_args("pb_prostitute", &iVar4, 1, 2050);
				unk_0x9D2418D7FC697249("pb_prostitute");
				iLocal_52 = 0;
			}
			iLocal_53 = unk_0x53C562FD2B9E3AB0();
			break;
		
		case 4:
			if (func_3())
			{
				vLocal_58[iVar2 /*3*/].f_2 = 0;
				iLocal_53 = unk_0x53C562FD2B9E3AB0() + 250;
				iLocal_52 = 5;
			}
			else
			{
				iLocal_53 = unk_0x53C562FD2B9E3AB0() + 500;
			}
			break;
		
		case 5:
			if ((!func_17(unk_0x9EB17624F44A8DA4(), 1) && !func_16()) && bVar3)
			{
				iLocal_53 = unk_0x53C562FD2B9E3AB0() + 250;
				iLocal_52 = 0;
			}
			else
			{
				iLocal_53 = unk_0x53C562FD2B9E3AB0() + 500;
			}
			break;
	}
}

int func_3()//Position - 0x3EE
{
	if (unk_0x8F38E94BBF3404CD(joaat("pb_prostitute")) <= 0 && !unk_0xA357031C5C05DD94("pb_prostitute", unk_0xF19B3230511B7F9F(), 1, 0))
	{
		return 1;
	}
	if (iLocal_57 == 0)
	{
		return 1;
	}
	if (unk_0x3A711520F83BAE98())
	{
		func_4();
	}
	else
	{
		unk_0xA7F6BED6895B1541("pb_prostitute", 1);
	}
	return 0;
}

void func_4()//Position - 0x43C
{
	struct<2> Var0;
	int iVar1;
	
	Var0 = 1795998897;
	Var0.f_1 = unk_0x9EB17624F44A8DA4();
	iVar1 = func_5(1, 1);
	if (iVar1 != 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Var0, 2, iVar1);
	}
}

var func_5(int iParam0, bool bParam1)//Position - 0x46B
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar1);
		if (func_9(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x9EB17624F44A8DA4() || iParam0)
			{
				if (bParam1)
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
				else if (!func_6(iVar2, 0))
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_6(int iParam0, int iParam1)//Position - 0x4D0
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_7(-1, 0) == 8;
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

int func_7(int iParam0, bool bParam1)//Position - 0x51B
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
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

int func_8()//Position - 0x55C
{
	return Global_1312736;
}

int func_9(int iParam0, bool bParam1, bool bParam2)//Position - 0x568
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

void func_10(int iParam0)//Position - 0x5B2
{
	vLocal_58[unk_0xF19B3230511B7F9F() /*3*/] = iParam0;
}

int func_11(int iParam0)//Position - 0x5C4
{
	if (iParam0 == -1)
	{
		return vLocal_58[unk_0xF19B3230511B7F9F() /*3*/];
	}
	return vLocal_58[iParam0 /*3*/];
}

int func_12()//Position - 0x5E3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	float fVar8;
	
	iVar0 = func_13();
	iVar1 = unk_0xF19B3230511B7F9F();
	if (!unk_0x6ADD12BF4D6D2587(func_11(iVar1)))
	{
		func_10(0);
		return iVar0;
	}
	if (iLocal_57 != 0 && unk_0x8F05914DD835E69F(iLocal_57))
	{
		if (vLocal_58[iVar1 /*3*/].f_2)
		{
			return func_11(iVar1);
		}
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iVar2 = unk_0xFC1458A37D98B502();
				if (func_20(&iVar2))
				{
					iVar3 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					if (unk_0x6ADD12BF4D6D2587(iVar3))
					{
						if (func_11(iVar1) == unk_0x317536BCEA8FA6B0(iVar3, 0, 0) || unk_0xA8D0477084E86A92(func_11(iVar1), iVar3, 1))
						{
							vLocal_58[iVar1 /*3*/].f_2 = 1;
							return func_11(iVar1);
						}
					}
					if (iVar0 == 0)
					{
						return func_11(iVar1);
					}
					vVar4 = { unk_0xB3328BA8976B416C(func_11(iVar1), 0) };
					vVar5 = { unk_0xB3328BA8976B416C(iVar0, 0) };
					vVar6 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
					fVar7 = system::vdist(vVar4, vVar6);
					fVar8 = system::vdist(vVar6, vVar5);
					if (fVar7 > fVar8)
					{
						if ((fVar7 - fVar8) > 25f)
						{
							return iVar0;
						}
						else if (fVar8 < 6f && fVar7 > 11f)
						{
							return iVar0;
						}
						else
						{
							return func_11(iVar1);
						}
					}
					else
					{
						return func_11(iVar1);
					}
				}
			}
		}
	}
	return iVar0;
}

int func_13()//Position - 0x749
{
	int iVar0;
	var uVar1[8];
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar2 = unk_0xD1A659E6867D8FF6(unk_0xFC1458A37D98B502(), &uVar1, -1);
	if (iVar2 > 0)
	{
		iVar3 = 0;
		while (iVar3 <= 7)
		{
			if (!unk_0x3AB6A1A9084FB0A4(uVar1[iVar3]))
			{
				if (unk_0x249997FC5AF56FA8(uVar1[iVar3], "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS") || unk_0x249997FC5AF56FA8(uVar1[iVar3], "WORLD_HUMAN_PROSTITUTE_LOW_CLASS"))
				{
					if (func_15(uVar1[iVar3]))
					{
						if (!func_14(uVar1[iVar3]))
						{
							if (!unk_0xA6FA9E5D08F067AD(uVar1[iVar3]))
							{
								return uVar1[iVar3];
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	return iVar0;
}

int func_14(int iParam0)//Position - 0x7E4
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (vLocal_58[iVar0 /*3*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_15(int iParam0)//Position - 0x812
{
	var uVar0;
	char* sVar1;
	
	sVar1 = unk_0xA88FE81C0BDF2731(iParam0, &uVar0);
	if (!unk_0xAB019B170BF1309C(sVar1))
	{
		if (unk_0x74C475EB8E73D398(sVar1, "GB_VEHICLE_EXPORT"))
		{
			return 0;
		}
	}
	return 1;
}

bool func_16()//Position - 0x83F
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 0);
}

int func_17(int iParam0, bool bParam1)//Position - 0x85B
{
	if (bParam1)
	{
		if (func_18(iParam0))
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

bool func_18(int iParam0)//Position - 0x887
{
	return func_19(iParam0);
}

bool func_19(int iParam0)//Position - 0x895
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

int func_20(int iParam0)//Position - 0x8AF
{
	if (unk_0x88DDBE9908752BF0(*iParam0, 0))
	{
		if (unk_0x317536BCEA8FA6B0(unk_0xC6757F745366DB47(*iParam0), -1, 0) == *iParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_21(int iParam0)//Position - 0x8DA
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

bool func_22(int iParam0)//Position - 0x8EF
{
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

int func_23()//Position - 0x904
{
	var uVar0;
	
	func_30(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_29())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_28())
	{
		return 1;
	}
	if (func_27(157))
	{
		if (!func_26())
		{
			return 1;
		}
	}
	if (func_27(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_24() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_24()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_24()//Position - 0x98E
{
	switch (func_25())
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

int func_25()//Position - 0x9C2
{
	return Global_25233;
}

bool func_26()//Position - 0x9CD
{
	return Global_2447174.f_586;
}

int func_27(int iParam0)//Position - 0x9DC
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_28()//Position - 0x9F3
{
	return Global_2456830;
}

bool func_29()//Position - 0x9FF
{
	return Global_2447174.f_581;
}

void func_30(var uParam0)//Position - 0xA0E
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
					func_31(iVar0);
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

void func_31(int iParam0)//Position - 0xA81
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_9(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_32(iVar2, &bVar3))
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

int func_32(int iParam0, var uParam1)//Position - 0xB02
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

void func_33()//Position - 0xB61
{
	system::wait(0);
}

void func_34()//Position - 0xB6E
{
	if (iLocal_56)
	{
		unk_0xFCCDDE0E48CF9588("mini@prostitutes@sexlow_veh");
		unk_0xFCCDDE0E48CF9588("mini@prostitutes@sexnorm_veh");
		unk_0xFCCDDE0E48CF9588("mini@prostitutes@sexlow_veh_first_person");
		unk_0xFCCDDE0E48CF9588("mini@prostitutes@sexnorm_veh_first_person");
	}
	func_36();
	func_3();
	if (unk_0x3A711520F83BAE98())
	{
		func_4();
	}
	else
	{
		unk_0xA7F6BED6895B1541("pb_prostitute", 1);
	}
	Global_2512808.f_4 = 0;
	func_35();
}

void func_35()//Position - 0xBC0
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_36()//Position - 0xBCC
{
	Global_2436181.f_1040.f_10 = 0;
}

void func_37(struct<21> Param0)//Position - 0xBDE
{
	func_40(func_41(Param0), Param0);
	func_38(0, -1, 0);
	unk_0xE7BC983D1386C9EE(&vLocal_58, 97);
	if (unk_0x3A711520F83BAE98())
	{
		func_4();
	}
	else
	{
		unk_0xA7F6BED6895B1541("pb_prostitute", 1);
	}
	unk_0x941BE77305BB5695(0);
}

int func_38(int iParam0, int iParam1, bool bParam2)//Position - 0xC20
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_35();
			}
			else
			{
				return 0;
			}
		}
		if (!func_39())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_35();
					}
					else
					{
						return 0;
					}
				}
				if (func_29())
				{
					if (!bParam2)
					{
						func_35();
					}
					else
					{
						return 0;
					}
				}
				if (func_27(155))
				{
					if (!bParam2)
					{
						func_35();
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
					func_35();
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
				func_35();
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
			func_35();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_39()//Position - 0xD35
{
	return Global_1312831;
}

void func_40(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0xD41
{
	if (!unk_0x3A711520F83BAE98())
	{
		func_35();
	}
	unk_0xAEA89A7E72415961(iParam0, 0, Param1.f_16);
}

int func_41(int iParam0)//Position - 0xD60
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

