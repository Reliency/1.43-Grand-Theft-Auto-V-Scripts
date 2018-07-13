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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	struct<14> Local_47[30];
	var uLocal_48 = 0;
	var uLocal_49 = -1;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = -1;
	var uLocal_54 = -1;
	var uLocal_55 = -1;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
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
	if (func_75())
	{
		while (!func_62())
		{
			func_11();
			system::wait(0);
		}
	}
	func_1();
}

void func_1()//Position - 0x90
{
	unk_0x0EE72DB1CD8A3B86(&Global_1573918, 1);
	func_3(&Local_47);
	func_2();
}

void func_2()//Position - 0xAB
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_3(int iParam0)//Position - 0xB7
{
	func_9(&(iParam0->f_421.f_5));
	func_4(iParam0, 1);
}

void func_4(var uParam0, bool bParam1)//Position - 0xD1
{
	if (func_5(uParam0))
	{
		unk_0x3E80C2F7BC665259(1);
	}
	if (bParam1)
	{
		func_9(&(uParam0->f_421.f_5));
	}
}

bool func_5(var uParam0)//Position - 0xF7
{
	char* sVar0;
	char* sVar1;
	
	func_7(uParam0, uParam0->f_421.f_2, &sVar0);
	func_7(uParam0, uParam0->f_421.f_2, &sVar1);
	return (func_6(&sVar0) || func_6(&sVar1));
}

int func_6(char* sParam0)//Position - 0x12F
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_7(var uParam0, int iParam1, char* sParam2)//Position - 0x142
{
	if (func_8(&(uParam0->f_421), 7))
	{
		Stack.Push(uParam0[iParam1 /*14*/]);
		Stack.Push(iParam1);
		Stack.Push(sParam2);
		Call_Loc(uParam0->f_421.f_14);
	}
	else
	{
		StringCopy(sParam2, "MPJAC_EXIT", 16);
	}
}

bool func_8(var uParam0, int iParam1)//Position - 0x173
{
	return unk_0xC80D31E4B587871C(*uParam0, iParam1);
}

void func_9(var uParam0)//Position - 0x184
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_10(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/])
		{
			Global_36565[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_10(int iParam0)//Position - 0x1DB
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_11()//Position - 0x216
{
	func_19(&Local_47);
	if (Global_1595543 == unk_0x9EB17624F44A8DA4() && !unk_0xC80D31E4B587871C(Global_1683696[unk_0xF19B3230511B7F9F() /*39*/].f_27, 5))
	{
		if (func_18(&Local_47, 1, 1))
		{
			func_17(&Local_47);
		}
		if (func_18(&Local_47, 0, 0))
		{
			unk_0x872F1C1F8587CCC7(&Global_1573918, 1);
			if ((((((iLocal_64 == 0 && !unk_0xC80D31E4B587871C(Global_1683696[unk_0xF19B3230511B7F9F() /*39*/].f_27, 3)) && !func_16()) && !unk_0x0F30C1F1717A6437()) && !func_15(0)) && !func_14()) && unk_0x4CD14B4B1E8BD8BA(0, 225))
			{
				func_12(&Local_47);
			}
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&Global_1573918, 1);
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_1573918, 1);
	}
	iLocal_64 = 0;
	if (unk_0xC80D31E4B587871C(Global_1683696[unk_0xF19B3230511B7F9F() /*39*/].f_27, 3))
	{
		unk_0x872F1C1F8587CCC7(&iLocal_64, 0);
	}
	if (func_16())
	{
		unk_0x872F1C1F8587CCC7(&iLocal_64, 1);
	}
	if (unk_0x0F30C1F1717A6437())
	{
		unk_0x872F1C1F8587CCC7(&iLocal_64, 2);
	}
	if (func_14())
	{
		unk_0x872F1C1F8587CCC7(&iLocal_64, 4);
	}
	if (func_15(0))
	{
		unk_0x872F1C1F8587CCC7(&iLocal_64, 3);
	}
}

void func_12(int iParam0)//Position - 0x33B
{
	func_13(&(iParam0->f_421), 10);
}

void func_13(int iParam0, int iParam1)//Position - 0x34E
{
	unk_0x872F1C1F8587CCC7(iParam0, iParam1);
}

bool func_14()//Position - 0x35E
{
	return Global_68215;
}

int func_15(int iParam0)//Position - 0x36A
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

int func_16()//Position - 0x3C4
{
	if (Global_2436181.f_1040.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_17(int iParam0)//Position - 0x3DE
{
	func_13(&(iParam0->f_421), 9);
}

bool func_18(int iParam0, int iParam1, int iParam2)//Position - 0x3F1
{
	return ((iParam0->f_421.f_4 > 2 && (iParam1 || func_8(&(iParam0->f_421), 11))) && (iParam2 || iParam0->f_421.f_4 < 8));
}

void func_19(int iParam0)//Position - 0x431
{
	char* sVar0;
	char* sVar1;
	struct<14> Var2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	func_60(iParam0);
	func_58(iParam0);
	Var2.f_1.f_6 = 1061158912;
	Var2 = { *(iParam0[iParam0->f_421.f_2 /*14*/]) };
	switch (iParam0->f_421.f_4)
	{
		case 0:
			func_57(&(iParam0->f_421), 11);
			func_56(iParam0, 1);
			break;
		
		case 1:
			if (func_55(iParam0))
			{
				iParam0->f_421.f_6 = unk_0x53C562FD2B9E3AB0();
				func_56(iParam0, 2);
			}
			break;
		
		case 2:
			if (func_54(unk_0xFC1458A37D98B502(), iParam0[iParam0->f_421.f_2 /*14*/]))
			{
				if ((func_53(iParam0) || func_51(iParam0)) || !func_50(iParam0))
				{
					func_4(iParam0, 1);
					func_56(iParam0, 1);
				}
				else if (iParam0->f_421.f_5 == -1)
				{
					if ((unk_0x53C562FD2B9E3AB0() - iParam0->f_421.f_6) > 150)
					{
						func_49(&(iParam0->f_421.f_5), 4, "MPJAC_SIT", 0, 0, 0, 0);
					}
				}
				else if (unk_0xE8C126B7ADBB9D63(0, 51))
				{
					func_9(&(iParam0->f_421.f_5));
					func_46(iParam0);
					func_56(iParam0, 3);
				}
			}
			else
			{
				func_4(iParam0, 1);
				func_56(iParam0, 1);
			}
			break;
		
		case 3:
			func_45(iParam0, &sVar0);
			unk_0x6450931B826B49D9(&sVar0);
			if (unk_0x3A801AA34DD821BE(&sVar0))
			{
				func_56(iParam0, 4);
			}
			break;
		
		case 4:
			func_45(iParam0, &sVar0);
			func_44(iParam0, &sVar1);
			if (Var2 != 3)
			{
				vVar3 = { unk_0x09E51060F59912ED(&sVar0, &sVar1, func_43(iParam0), func_42(iParam0), 0, 2) };
				vVar4 = { unk_0x4AA2C5A4980B3F34(&sVar0, &sVar1, func_43(iParam0), func_42(iParam0), 0f, 2) };
				iVar5 = vVar4.z;
				unk_0x6EF694689373EE8D(unk_0xFC1458A37D98B502(), vVar3, 1f, 500, iVar5, 0,15f);
			}
			func_56(iParam0, 5);
			break;
		
		case 5:
			func_33(iParam0);
			func_45(iParam0, &sVar0);
			func_44(iParam0, &sVar1);
			if (Var2 == 3)
			{
				iVar6 = unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 1920390111);
			}
			else
			{
				iVar6 = unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 2106541073);
			}
			if (iVar6 != 1 && iVar6 != 0)
			{
				iParam0->f_421.f_1 = unk_0x9CEC233AE69E2D39(func_43(iParam0), func_42(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
				unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iParam0->f_421.f_1, &sVar0, &sVar1, 2f, -1000f, 13, 16, 1,5f, 0);
				unk_0x9C39944AA129D284(iParam0->f_421.f_1);
				iParam0->f_421.f_8.f_4 = unk_0x53C562FD2B9E3AB0();
				func_13(&(iParam0->f_421), 8);
				func_56(iParam0, 6);
			}
			break;
		
		case 6:
			if (func_8(&(iParam0->f_421), 10))
			{
				func_57(&(iParam0->f_421), 10);
				func_32(iParam0);
			}
			func_33(iParam0);
			func_26(iParam0);
			iVar7 = unk_0x45D90ED1F569A489(iParam0->f_421.f_1);
			if (unk_0xD56F740235B1E8F0(iVar7))
			{
				if (unk_0x463C4747B41E35A3(iVar7) >= 1f)
				{
					func_20(iParam0, 0);
					func_45(iParam0, &sVar0);
					func_44(iParam0, &sVar1);
					iParam0->f_421.f_1 = unk_0x9CEC233AE69E2D39(func_43(iParam0), func_42(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
					unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iParam0->f_421.f_1, &sVar0, &sVar1, 4f, -1,5f, 13, 16, 1000f, 0);
					unk_0x9C39944AA129D284(iParam0->f_421.f_1);
					func_13(&(iParam0->f_421), 8);
					func_13(&(iParam0->f_421), 11);
				}
				else
				{
					func_57(&(iParam0->f_421), 8);
				}
			}
			else if (!func_8(&(iParam0->f_421), 8))
			{
				func_56(iParam0, 8);
			}
			break;
		
		case 7:
			unk_0x0B0BB26D99CD7575(iParam0->f_421.f_1);
			func_56(iParam0, 8);
			break;
		
		case 8:
			iVar8 = unk_0x45D90ED1F569A489(iParam0->f_421.f_1);
			if (unk_0xD56F740235B1E8F0(iVar8))
			{
				if ((unk_0x463C4747B41E35A3(iVar8) >= 1f || unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), 364629851)) || unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), 2116425869))
				{
					unk_0x0B0BB26D99CD7575(iParam0->f_421.f_1);
					func_4(iParam0, 1);
					func_56(iParam0, 0);
				}
			}
			else
			{
				func_4(iParam0, 1);
				func_56(iParam0, 0);
			}
			break;
	}
}

void func_20(var uParam0, bool bParam1)//Position - 0x862
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam1)
	{
		iVar1 = func_21(uParam0);
		if (iVar1 != uParam0->f_421.f_8.f_1)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + uParam0->f_421.f_8.f_1);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = uParam0->f_421.f_8.f_2;
		}
		iVar1 = uParam0->f_421.f_8.f_1;
	}
	else if (uParam0->f_421.f_8.f_2 == 5)
	{
		iVar1 = uParam0->f_421.f_8.f_1;
		iVar2 = 3;
		iVar0 = unk_0x63A6486593EC7EC3(0, iVar2);
		if (iVar0 == uParam0->f_421.f_8.f_3)
		{
			iVar0 = (iVar0 + 1 % iVar2);
		}
	}
	else
	{
		if (uParam0->f_421.f_8.f_2 > 6)
		{
			iVar1 = func_21(uParam0);
			uParam0->f_421.f_8.f_4 = unk_0x53C562FD2B9E3AB0();
		}
		else
		{
			iVar1 = uParam0->f_421.f_8.f_1;
		}
		if ((unk_0x53C562FD2B9E3AB0() - uParam0->f_421.f_8.f_4) >= 90000)
		{
			iVar1 = func_21(uParam0);
			if (iVar1 != uParam0->f_421.f_8.f_1)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + uParam0->f_421.f_8.f_1);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = uParam0->f_421.f_8.f_1;
		}
		else
		{
			iVar0 = 5;
		}
	}
	uParam0->f_421.f_8.f_3 = uParam0->f_421.f_8.f_2;
	uParam0->f_421.f_8.f_2 = iVar0;
	uParam0->f_421.f_8.f_1 = iVar1;
}

int func_21(var uParam0)//Position - 0x9AD
{
	if (uParam0->f_421.f_8 == 2)
	{
		return uParam0->f_421.f_8.f_1;
	}
	return (uParam0->f_421.f_8.f_1 + 1 % func_22(uParam0->f_421.f_8));
}

int func_22(int iParam0)//Position - 0x9E3
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return func_23(func_24(), 4, 5);
		
		case 2:
			return 5;
		
		default:
	}
	return 0;
}

int func_23(bool bParam0, int iParam1, int iParam2)//Position - 0xA1A
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_24()//Position - 0xA31
{
	return func_25(unk_0x9EB17624F44A8DA4());
}

int func_25(int iParam0)//Position - 0xA41
{
	if (unk_0x82FF3DFBC3965CC0(unk_0x25D049AAC4603E65(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_26(var uParam0)//Position - 0xA60
{
	vector3 vVar0;
	float fVar1;
	
	if (uParam0->f_421.f_4 == 6)
	{
		vVar0 = { unk_0x869308DF4F5FB0C3(0, 218), unk_0x869308DF4F5FB0C3(0, 219), 0f };
		fVar1 = system::vmag(vVar0);
		if ((uParam0->f_421.f_4 == 6 && !unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), -1322051853)) && !func_8(&(uParam0->f_421), 12))
		{
			if (fVar1 >= 0,35f)
			{
				func_31(uParam0);
			}
		}
		if (unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), -1322051853))
		{
			func_4(uParam0, 1);
		}
		else if (func_30(uParam0))
		{
			func_4(uParam0, 1);
		}
		else
		{
			unk_0xD67F08F0EFD84A54(2);
			unk_0x4FB260623DD93924(0, 24, 1);
			unk_0x4FB260623DD93924(0, 257, 1);
			unk_0x4FB260623DD93924(0, 142, 1);
			unk_0x4FB260623DD93924(0, 141, 1);
			unk_0x4FB260623DD93924(0, 140, 1);
			unk_0x4FB260623DD93924(0, 263, 1);
			unk_0x4FB260623DD93924(0, 264, 1);
			unk_0x4FB260623DD93924(0, 143, 1);
			unk_0x4FB260623DD93924(2, 200, 1);
			if (((((!unk_0x0F30C1F1717A6437() && !func_8(&(uParam0->f_421), 0)) && !func_8(&(uParam0->f_421), 4)) && !func_29()) && !func_27(1)) && uParam0->f_421.f_8.f_2 != 3)
			{
				if (uParam0->f_421.f_5 == -1)
				{
					func_49(&(uParam0->f_421.f_5), 4, "MPJAC_EXIT", 0, 0, 0, 0);
				}
				if (uParam0->f_421.f_4 == 6)
				{
					if (unk_0xE8C126B7ADBB9D63(0, 51))
					{
						func_32(uParam0);
					}
				}
			}
		}
	}
	func_57(&(uParam0->f_421), 9);
}

int func_27(bool bParam0)//Position - 0xBDE
{
	if (unk_0x5C9167CD27AB7A44())
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (func_28(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xF2B58F79D29425B4(0, 25) || unk_0xF2B58F79D29425B4(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17162.f_130)
	{
		return 0;
	}
	if (unk_0xF2B58F79D29425B4(0, 19) || (!bParam0 && unk_0x5A632962B08A1872(0, 19)))
	{
		return 1;
	}
	if (unk_0xB9D80B12FE4456A5())
	{
		if (((unk_0xF2B58F79D29425B4(0, 166) || unk_0xF2B58F79D29425B4(0, 167)) || unk_0xF2B58F79D29425B4(0, 168)) || unk_0xF2B58F79D29425B4(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x5A632962B08A1872(0, 166) || unk_0x5A632962B08A1872(0, 167)) || unk_0x5A632962B08A1872(0, 168)) || unk_0x5A632962B08A1872(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_28(int iParam0)//Position - 0xCC9
{
	int iVar0;
	
	if (unk_0x43E3A4534ED4A79C())
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			unk_0x5AD8564EFD5BEC2E(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_29()//Position - 0xD26
{
	if (Global_2436181.f_1040.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_30(var uParam0)//Position - 0xD40
{
	return func_8(&(uParam0->f_421), 9);
}

void func_31(var uParam0)//Position - 0xD53
{
	char* sVar0;
	char* sVar1;
	
	if (((func_21(uParam0) != uParam0->f_421.f_8.f_1 && uParam0->f_421.f_8.f_2 < 6) && uParam0->f_421.f_8.f_2 != 3) && uParam0->f_421.f_8.f_2 != 4)
	{
		func_20(uParam0, 1);
		func_45(uParam0, &sVar0);
		func_44(uParam0, &sVar1);
		uParam0->f_421.f_1 = unk_0x9CEC233AE69E2D39(func_43(uParam0), func_42(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
		unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_421.f_1, &sVar0, &sVar1, 4f, -1,5f, 13, 16, 1000f, 0);
		unk_0x9C39944AA129D284(uParam0->f_421.f_1);
		func_13(&(uParam0->f_421), 8);
		unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 0, 0);
	}
}

void func_32(var uParam0)//Position - 0xE1C
{
	char* sVar0;
	
	uParam0->f_421.f_1 = unk_0x9CEC233AE69E2D39(func_43(uParam0), func_42(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
	func_45(uParam0, &sVar0);
	unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_421.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1000f, 0);
	unk_0x9C39944AA129D284(uParam0->f_421.f_1);
	func_9(&(uParam0->f_421.f_5));
	func_56(uParam0, 8);
}

void func_33(var uParam0)//Position - 0xE92
{
	int iVar0;
	
	switch (uParam0->f_421.f_4)
	{
		case 4:
		case 8:
			func_38(1);
		
		case 6:
			unk_0x3A257DFDA1E817FD();
			unk_0xD3F2448EEDC2073A(0);
			unk_0xB4EC0371FF9BD363(0);
			unk_0x553231E7FC3C570D(19);
			unk_0x553231E7FC3C570D(2);
			unk_0xFBC7FEE83651FB30();
			func_37();
			if (unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar0, 1) && iVar0 != joaat("weapon_unarmed"))
			{
				unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
			}
			unk_0x4FB260623DD93924(0, 37, 1);
			func_35(1);
			func_34();
			break;
	}
}

void func_34()//Position - 0xF1B
{
	Global_17162.f_6 = 1;
}

void func_35(bool bParam0)//Position - 0xF29
{
	if (bParam0)
	{
		if (func_36())
		{
			Global_2447174.f_33 = 1;
		}
	}
	else
	{
		Global_2447174.f_33 = 0;
	}
}

bool func_36()//Position - 0xF4E
{
	return unk_0xC80D31E4B587871C(Global_2447174.f_2, 11);
}

void func_37()//Position - 0xF62
{
	unk_0x872F1C1F8587CCC7(&Global_2324, 4);
}

void func_38(int iParam0)//Position - 0xF72
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_15(0))
		{
			func_39(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

void func_39(int iParam0)//Position - 0xF9B
{
	if (Global_14615)
	{
		func_41(0, 0);
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
	if (!func_40())
	{
		Global_14453.f_1 = 3;
	}
}

int func_40()//Position - 0x100B
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_41(bool bParam0, bool bParam1)//Position - 0x1032
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

Vector3 func_42(var uParam0)//Position - 0x10A6
{
	vector3 vVar0;
	
	vVar0 = { (uParam0[uParam0->f_421.f_2 /*14*/])->f_8.f_3 };
	if (func_24() && uParam0->f_421.f_8 == 0)
	{
		vVar0.z = (vVar0.z - 4f);
	}
	return vVar0;
}

Vector3 func_43(var uParam0)//Position - 0x10E6
{
	return (uParam0[uParam0->f_421.f_2 /*14*/])->f_8;
}

void func_44(var uParam0, char* sParam1)//Position - 0x10FD
{
	switch (uParam0->f_421.f_8.f_2)
	{
		case 0:
			StringCopy(sParam1, "IDLE_A", 16);
			break;
		
		case 1:
			StringCopy(sParam1, "IDLE_B", 16);
			break;
		
		case 2:
			StringCopy(sParam1, "IDLE_C", 16);
			break;
		
		case 3:
			StringCopy(sParam1, "ENTER", 16);
			break;
		
		case 5:
			StringCopy(sParam1, "BASE", 16);
			break;
		
		case 4:
			StringCopy(sParam1, "EXIT", 16);
			break;
		
		case 7:
			StringCopy(sParam1, "A_TO_B", 16);
			break;
		
		case 8:
			StringCopy(sParam1, "B_TO_C", 16);
			break;
		
		case 9:
			StringCopy(sParam1, "C_TO_D", 16);
			break;
		
		case 10:
			StringCopy(sParam1, "D_TO_E", 16);
			break;
		
		case 12:
			StringCopy(sParam1, "B_TO_E", 16);
			break;
		
		case 13:
			StringCopy(sParam1, "C_TO_A", 16);
			break;
		
		case 14:
			StringCopy(sParam1, "D_TO_A", 16);
			break;
		
		case 15:
			StringCopy(sParam1, "E_TO_A", 16);
			break;
		
		default:
			StringCopy(sParam1, "invalid_clip", 16);
	}
}

void func_45(var uParam0, char* sParam1)//Position - 0x11FA
{
	switch (uParam0->f_421.f_8)
	{
		case 0:
			StringCopy(sParam1, "ANIM@AMB@CLUBHOUSE@SEATING", 64);
			break;
		
		case 1:
			StringCopy(sParam1, "ANIM@AMB@OFFICE@SEATING", 64);
			break;
		
		case 2:
			StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
			break;
	}
	if (func_24())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (uParam0->f_421.f_8)
	{
		case 1:
		case 0:
			switch (uParam0->f_421.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@BASE@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@BASE@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@BASE@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@BASE@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@BASE@", 64);
					break;
			}
			break;
		
		case 2:
			switch (uParam0->f_421.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@", 64);
					break;
			}
			break;
	}
}

void func_46(var uParam0)//Position - 0x133E
{
	uParam0->f_421.f_8 = func_48((*uParam0)[uParam0->f_421.f_2 /*14*/]);
	uParam0->f_421.f_8.f_1 = func_47(uParam0);
	uParam0->f_421.f_8.f_2 = 3;
	uParam0->f_421.f_8.f_3 = 3;
}

int func_47(var uParam0)//Position - 0x137F
{
	int iVar0;
	
	switch (uParam0->f_421.f_8)
	{
		case 2:
			iVar0 = unk_0x63A6486593EC7EC3(0, 4);
			if (iVar0 >= 1)
			{
				iVar0++;
			}
			break;
		
		default:
			iVar0 = unk_0x63A6486593EC7EC3(0, func_22(uParam0->f_421.f_8));
	}
	return iVar0;
}

int func_48(int iParam0)//Position - 0x13C4
{
	if (iParam0 >= 11)
	{
		return 0;
	}
	else if (iParam0 >= 9)
	{
		return 0;
	}
	else if (iParam0 >= 7)
	{
		return 0;
	}
	else if (iParam0 >= 4)
	{
		return 0;
	}
	else if (iParam0 > 1)
	{
		return 2;
	}
	return 0;
}

void func_49(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x140D
{
	int iVar0;
	
	if (unk_0x8F38E94BBF3404CD(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x1E06D00B67177A18())
	{
		if (!*uParam0 == -1)
		{
			func_9(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36565[iVar0 /*32*/])
		{
			Global_36565[iVar0 /*32*/] = 1;
			Global_36565[iVar0 /*32*/].f_1 = Global_36766;
			Global_36766++;
			Global_36565[iVar0 /*32*/].f_4 = 0;
			Global_36565[iVar0 /*32*/].f_29 = 0;
			Global_36565[iVar0 /*32*/].f_5 = 0;
			Global_36565[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36565[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36565[iVar0 /*32*/].f_6 = iParam3;
			Global_36565[iVar0 /*32*/].f_31 = unk_0xBBA15366508D1BDE();
			Global_36565[iVar0 /*32*/].f_7 = 0;
			Global_36565[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xAB019B170BF1309C(sParam4))
			{
				Global_36565[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36565[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36565[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36565[iVar0 /*32*/].f_12 = 0;
				Global_36565[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_36565[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_50(var uParam0)//Position - 0x1538
{
	Stack.Push(!func_8(&(uParam0->f_421), 5));
	Stack.Push(uParam0[uParam0->f_421.f_2 /*14*/]);
	Stack.Push(uParam0->f_421.f_2);
	Call_Loc(uParam0->f_421.f_13);
	return (StackVal || StackVal);
}

int func_51(var uParam0)//Position - 0x156B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
		{
			iVar1 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0));
			if ((iVar1 != unk_0x9EB17624F44A8DA4() && func_52(iVar1, 1, 1)) && func_54(unk_0x25D049AAC4603E65(iVar1), uParam0[uParam0->f_421.f_2 /*14*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_52(int iParam0, bool bParam1, bool bParam2)//Position - 0x15D7
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

bool func_53(var uParam0)//Position - 0x1621
{
	return uParam0->f_421 & 31 > 0;
}

bool func_54(int iParam0, var uParam1)//Position - 0x1633
{
	return unk_0x0F3033474C49912D(iParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, 0, 1, 0);
}

int func_55(var uParam0)//Position - 0x1658
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_54(unk_0xFC1458A37D98B502(), uParam0[uParam0->f_421.f_2 /*14*/]))
		{
			return 1;
		}
		else
		{
			uParam0->f_421.f_2 = (uParam0->f_421.f_2 + 1 % 30);
		}
		iVar0++;
	}
	return 0;
}

void func_56(var uParam0, int iParam1)//Position - 0x16A3
{
	uParam0->f_421.f_4 = iParam1;
}

void func_57(int iParam0, int iParam1)//Position - 0x16B4
{
	unk_0x0EE72DB1CD8A3B86(iParam0, iParam1);
}

void func_58(var uParam0)//Position - 0x16C4
{
	if (uParam0->f_421.f_4 == 6)
	{
	}
	else if (uParam0->f_421.f_4 > 4)
	{
		unk_0x3B60E1A32FD1AE85(unk_0xFC1458A37D98B502());
		unk_0x91AD7123A61E33F8(unk_0xFC1458A37D98B502(), func_59(uParam0));
		uParam0->f_421.f_7 = unk_0x4B64A8D052027742();
	}
	else if (uParam0->f_421.f_4 > 1)
	{
		unk_0x91AD7123A61E33F8(unk_0xFC1458A37D98B502(), func_59(uParam0));
		uParam0->f_421.f_7 = unk_0x4B64A8D052027742();
	}
	else if ((unk_0x4B64A8D052027742() - uParam0->f_421.f_7) < 5)
	{
		unk_0x91AD7123A61E33F8(unk_0xFC1458A37D98B502(), func_59(uParam0));
	}
}

float func_59(var uParam0)//Position - 0x174E
{
	switch ((*uParam0)[uParam0->f_421.f_2 /*14*/])
	{
		case 12:
		case 10:
		case 6:
			return 0,24f;
		
		case 2:
			return 0,16f;
		
		case 3:
			return 0,18f;
		
		default:
	}
	return 0,13f;
}

void func_60(var uParam0)//Position - 0x17A1
{
	func_61(&(uParam0->f_421), 4, func_14());
	func_61(&(uParam0->f_421), 1, unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0));
	func_61(&(uParam0->f_421), 3, unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1));
	func_61(&(uParam0->f_421), 0, func_15(0));
	func_61(&(uParam0->f_421), 2, unk_0xA57E3BD5C64527C7(unk_0xFC1458A37D98B502()));
}

void func_61(int iParam0, int iParam1, bool bParam2)//Position - 0x17FE
{
	int iVar0;
	
	iVar0 = iParam1;
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(iParam0, iVar0);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(iParam0, iVar0);
	}
}

int func_62()//Position - 0x1822
{
	if (!func_74(unk_0xFC1458A37D98B502()))
	{
		return 1;
	}
	if (func_64())
	{
		return 1;
	}
	if (Global_1595543 == func_63())
	{
		return 1;
	}
	return 0;
}

int func_63()//Position - 0x1855
{
	return -1;
}

int func_64()//Position - 0x185E
{
	var uVar0;
	
	func_71(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_70())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_69())
	{
		return 1;
	}
	if (func_68(157))
	{
		if (!func_67())
		{
			return 1;
		}
	}
	if (func_68(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_65() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_65()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_65()//Position - 0x18E8
{
	switch (func_66())
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

int func_66()//Position - 0x191C
{
	return Global_25233;
}

bool func_67()//Position - 0x1927
{
	return Global_2447174.f_586;
}

int func_68(int iParam0)//Position - 0x1936
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_69()//Position - 0x194D
{
	return Global_2456830;
}

bool func_70()//Position - 0x1959
{
	return Global_2447174.f_581;
}

void func_71(var uParam0)//Position - 0x1968
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
					func_72(iVar0);
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

void func_72(int iParam0)//Position - 0x19DB
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_52(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_73(iVar2, &bVar3))
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

int func_73(int iParam0, var uParam1)//Position - 0x1A5C
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

bool func_74(int iParam0)//Position - 0x1ABB
{
	return unk_0x0F3033474C49912D(iParam0, 354,4375f, 4877,2f, -62,34054f, 345,1211f, 4864,095f, -55,11187f, 16f, 0, 1, 0);
}

int func_75()//Position - 0x1AEF
{
	if (Global_1595543 != func_63())
	{
		if (unk_0xA357031C5C05DD94("base_heist_seats", Global_1595543, 1, 0))
		{
			return 0;
		}
		unk_0xAEA89A7E72415961(32, 0, Global_1595543);
		func_87(0, -1, 0);
		unk_0x941BE77305BB5695(0);
		func_76();
		return 1;
	}
	return 0;
}

void func_76()//Position - 0x1B3B
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_86() };
	vVar1 = { func_85() };
	func_82(0, func_84(343,93f, 4875,389f, -60,44f, -90f), -90f, vVar0, vVar1);
	func_82(1, func_84(344,08f, 4874,239f, -60,44f, -86f), -86f, vVar0, vVar1);
	func_82(2, func_84(344,33f, 4873,189f, -60,44f, -78f), -78f, vVar0, vVar1);
	func_82(3, func_84(344,7f, 4872,239f, -60,44f, -72f), -72f, vVar0, vVar1);
	func_82(4, func_84(345,06f, 4871,48f, -60,44f, -67f), -67f, vVar0, vVar1);
	func_82(5, func_84(345,86f, 4870,289f, -60,44f, -60f), -60f, vVar0, vVar1);
	func_82(6, func_84(350,41f, 4867,05f, -60,44f, -26f), -26f, vVar0, vVar1);
	func_82(7, func_84(351,51f, 4866,75f, -60,44f, -17f), -17f, vVar0, vVar1);
	func_82(8, func_84(352,66f, 4866,6f, -60,44f, -10f), -10f, vVar0, vVar1);
	func_82(9, func_84(353,6f, 4866,58f, -60,44f, -4f), -4f, vVar0, vVar1);
	func_82(10, func_84(354,7f, 4866,68f, -60,44f, 4f), 4f, vVar0, vVar1);
	func_82(11, func_84(355,85f, 4866,91f, -60,44f, 10f), 10f, vVar0, vVar1);
	func_82(12, func_84(346,02f, 4876,871f, -60,838f, -102f), -102f, vVar0, vVar1);
	func_82(13, func_84(345,97f, 4875,721f, -60,838f, -93f), -93f, vVar0, vVar1);
	func_82(14, func_84(346,19f, 4874,21f, -60,838f, -81f), -81f, vVar0, vVar1);
	func_82(15, func_84(346,62f, 4873,01f, -60,838f, -73f), -73f, vVar0, vVar1);
	func_82(16, func_84(347,27f, 4871,86f, -60,838f, -62f), -62f, vVar0, vVar1);
	func_82(17, func_84(351,57f, 4868,86f, -60,838f, -20f), -20f, vVar0, vVar1);
	func_82(18, func_84(352,89f, 4868,65f, -60,838f, -9f), -9f, vVar0, vVar1);
	func_82(19, func_84(354,17f, 4868,68f, -60,838f, 0f), 0f, vVar0, vVar1);
	func_82(20, func_84(355,12f, 4868,85f, -60,838f, 10f), 8f, vVar0, vVar1);
	func_82(21, func_84(356,58f, 4869,38f, -60,838f, 10f), 20f, vVar0, vVar1);
	func_82(22, func_84(348,2f, 4876,56f, -61,24f, -101f), -101f, vVar0, vVar1);
	func_82(23, func_84(348,2f, 4875,31f, -61,24f, -88f), -88f, vVar0, vVar1);
	func_82(24, func_84(348,47f, 4874,28f, -61,24f, -76f), -76f, vVar0, vVar1);
	func_82(25, func_84(349,17f, 4872,97f, -61,24f, -60f), -60f, vVar0, vVar1);
	func_82(26, func_84(352,12f, 4870,98f, -61,24f, -20f), -20f, vVar0, vVar1);
	func_82(27, func_84(353,42f, 4870,84f, -61,24f, -6f), -6f, vVar0, vVar1);
	func_82(28, func_84(354,67f, 4870,995f, -61,24f, 8f), 8f, vVar0, vVar1);
	func_82(29, func_84(356,02f, 4871,545f, -61,24f, 25f), 25f, vVar0, vVar1);
	func_77(&Local_47, 8298/*func_78*/);
}

void func_77(int iParam0, int iParam1)//Position - 0x204F
{
	iParam0->f_421.f_13 = iParam1;
	func_13(&(iParam0->f_421), 5);
}

bool func_78(var uParam0, int iParam1)//Position - 0x206A
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	bool bVar5;
	
	if (iParam1 < 22)
	{
		return 1;
	}
	if (!unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) || unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		return 0;
	}
	if (func_81(unk_0x9EB17624F44A8DA4()) || unk_0xC80D31E4B587871C(iLocal_64, 0))
	{
		return 0;
	}
	vVar0 = { uParam0->f_1 };
	vVar1 = { uParam0->f_1.f_3 };
	vVar0.z = 0f;
	vVar1.z = 0f;
	vVar2 = { func_80(vVar0 - vVar1) };
	vVar3 = { unk_0xCE3B2111021F7234(unk_0xFC1458A37D98B502()) };
	fVar4 = func_79(vVar2, vVar3);
	bVar5 = fVar4 > 0,36f;
	return bVar5;
}

float func_79(vector3 vParam0, vector3 vParam1)//Position - 0x2110
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_80(vector3 vParam0)//Position - 0x2131
{
	float fVar0;
	float fVar1;
	
	fVar0 = system::vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_81(int iParam0)//Position - 0x2170
{
	if (iParam0 != func_63())
	{
		if (func_52(iParam0, 1, 1))
		{
			if (unk_0xC80D31E4B587871C(Global_1683696[iParam0 /*39*/].f_27, 3))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_82(int iParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4)//Position - 0x21A3
{
	Local_47[iParam0 /*14*/] = 3;
	Local_47[iParam0 /*14*/].f_1 = { vParam1 + func_83(vParam3, (fParam2 - 180f)) };
	Local_47[iParam0 /*14*/].f_1.f_3 = { vParam1 + func_83(vParam4, (fParam2 - 180f)) };
	Local_47[iParam0 /*14*/].f_1.f_6 = 1f;
	Local_47[iParam0 /*14*/].f_8 = { vParam1 };
	Local_47[iParam0 /*14*/].f_8.f_3 = { 0f, 0f, fParam2 };
}

Vector3 func_83(vector3 vParam0, float fParam1)//Position - 0x221B
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = system::sin(fParam1);
	fVar2 = system::cos(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

Vector3 func_84(vector3 vParam0, float fParam1)//Position - 0x225F
{
	return vParam0 + func_83(0f, 0,01f, 0,015f, fParam1);
}

Vector3 func_85()//Position - 0x227D
{
	return 0f, -0,7f, -1f;
}

Vector3 func_86()//Position - 0x228C
{
	return 0f, 0,1f, 1f;
}

int func_87(int iParam0, int iParam1, bool bParam2)//Position - 0x229B
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
		if (!func_88())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_70())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_68(155))
				{
					if (!bParam2)
					{
						func_2();
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
					func_2();
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
				func_2();
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
			func_2();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_88()//Position - 0x23B0
{
	return Global_1312831;
}

