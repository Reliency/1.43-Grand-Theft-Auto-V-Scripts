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
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<8> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<11> Local_50[50];
	int iLocal_51 = 0;
	char* sLocal_52 = NULL;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	char* sLocal_57[4] = { NULL, NULL, NULL, NULL };
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
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
	iLocal_51 = 4;
	sLocal_52 = "id1_11_tunnel6_int";
	if (unk_0x7D9C4B359376D38A(210))
	{
		func_73();
	}
	if (unk_0x8F38E94BBF3404CD(joaat("letterscraps")) > 1)
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	func_72(12);
	if (func_71(106) == 1)
	{
		func_70(12);
		func_67(287, 0, 0);
		func_66(106, 1);
		func_65(168, 0);
		func_73();
	}
	while (true)
	{
		system::wait(0);
		func_64(unk_0xFC1458A37D98B502());
		switch (iLocal_42)
		{
			case 0:
				func_19();
				break;
			
			case 1:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0xF8
{
	switch (iLocal_43)
	{
		case 0:
			if (unk_0x8F38E94BBF3404CD(joaat("startup_positioning")) > 0)
			{
				iLocal_43 = 2;
			}
			else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x9F7B586A14398C40())
				{
					if (!func_18())
					{
						if (((!unk_0x0DBDCC9C5537E157() && !func_12()) && !func_11()) && !func_10())
						{
							iLocal_58 = 0;
							iLocal_56 = 0;
							sLocal_57[0] = "LETTERS_PAGE_ONE";
							sLocal_57[1] = "LETTERS_PAGE_TWO";
							sLocal_57[2] = "LETTERS_PAGE_THREE";
							sLocal_57[3] = "LETTERS_PAGE_FOUR";
							iLocal_55 = unk_0xD704C81492296A37("LETTER_SCRAPS");
							while (!unk_0x34D11AB5BA7922C2(iLocal_55))
							{
								system::wait(0);
							}
							unk_0x008F3E3CC076EA0E(iLocal_55, "SET_LETTER_TEXT");
							func_9(sLocal_57[0]);
							unk_0x271AA5469AF471B3();
							unk_0xAE8C92295C8F2D18(1);
							func_6(1);
							func_5(1, 1, 1, 0);
							unk_0x39A975B87A12AB75("LETTERS_HELP2", 0);
							unk_0x6ACDC20166AA3FAC(1);
							unk_0x9B47B379EE749C38(false);
							iLocal_43 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			func_3(0);
			unk_0x7D709D41AE28CA49();
			unk_0xAE8C92295C8F2D18(1);
			unk_0x5A66A86A47AC3B57(1);
			if (iLocal_56 < 4)
			{
				if (!iLocal_58)
				{
					if (unk_0xF2B58F79D29425B4(2, 190))
					{
						if (iLocal_56 >= 0 && iLocal_56 < 3)
						{
							iLocal_56++;
							unk_0x008F3E3CC076EA0E(iLocal_55, "SET_LETTER_TEXT");
							func_9(sLocal_57[iLocal_56]);
							unk_0x271AA5469AF471B3();
						}
						iLocal_58 = 1;
					}
					else if (unk_0xF2B58F79D29425B4(2, 189))
					{
						if (iLocal_56 > 0 && iLocal_56 < 4)
						{
							iLocal_56 = (iLocal_56 - 1);
							unk_0x008F3E3CC076EA0E(iLocal_55, "SET_LETTER_TEXT");
							func_9(sLocal_57[iLocal_56]);
							unk_0x271AA5469AF471B3();
						}
						iLocal_58 = 1;
					}
					else if (unk_0x58F436C557A0FD7A(2, 202))
					{
						iLocal_43 = 2;
					}
				}
				else if (!func_2())
				{
					iLocal_58 = 0;
				}
				unk_0x28E092B1E386EB67(iLocal_55, 255, 255, 255, 255, 0);
			}
			else
			{
				iLocal_43 = 2;
			}
			break;
		
		case 2:
			unk_0x9B47B379EE749C38(true);
			unk_0x3E80C2F7BC665259(1);
			func_5(0, 1, 1, 0);
			func_70(12);
			func_73();
			break;
	}
}

int func_2()//Position - 0x304
{
	if ((unk_0xF2B58F79D29425B4(2, 190) || unk_0xF2B58F79D29425B4(2, 189)) || unk_0xF2B58F79D29425B4(2, 202))
	{
		return 1;
	}
	return 0;
}

void func_3(int iParam0)//Position - 0x335
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_4(0))
		{
			func_6(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

int func_4(int iParam0)//Position - 0x35E
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

int func_5(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3B8
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0x1746AAD73B7DFC1B() != iParam0 && iParam2)
		{
			unk_0x035AB8AAB511237A(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_6(int iParam0)//Position - 0x3EB
{
	if (Global_14615)
	{
		func_8(0, 0);
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
	if (!func_7())
	{
		Global_14453.f_1 = 3;
	}
}

int func_7()//Position - 0x45B
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_8(bool bParam0, bool bParam1)//Position - 0x482
{
	if (bParam0)
	{
		if (func_4(0))
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

void func_9(char* sParam0)//Position - 0x4F6
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

bool func_10()//Position - 0x508
{
	return Global_1315637;
}

int func_11()//Position - 0x514
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2456735[iVar1] != 0)
		{
			Global_1315638 = iVar1;
			iVar0 = 1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_12()//Position - 0x54D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_103207)
	{
		if (func_13(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_13(int iParam0)//Position - 0x57B
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x74C475EB8E73D398(&(Global_103207[iParam0 /*28*/]), "") && !unk_0x8C1C362CA8299475(&(Global_103207[iParam0 /*28*/])))
	{
		if (unk_0xC80D31E4B587871C(Global_103207[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0xC80D31E4B587871C(Global_103207[iParam0 /*28*/].f_27, 2))
			{
				return func_17(iVar0, &(Global_103207[iParam0 /*28*/]), &(Global_103207[iParam0 /*28*/].f_4), Global_103207[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_16(iVar0, &(Global_103207[iParam0 /*28*/]), &(Global_103207[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0xC80D31E4B587871C(Global_103207[iParam0 /*28*/].f_27, 2))
		{
			return func_15(iVar0, &(Global_103207[iParam0 /*28*/]), Global_103207[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_14(iVar0, &(Global_103207[iParam0 /*28*/]));
		}
	}
	return 0;
}

int func_14(int iParam0, char* sParam1)//Position - 0x658
{
	unk_0x5BE7193BC62CE2CE(sParam1);
	return unk_0x0683D2027E169355((1 + iParam0));
}

int func_15(int iParam0, char* sParam1, int iParam2)//Position - 0x66E
{
	unk_0x5BE7193BC62CE2CE(sParam1);
	unk_0x6223D539BCD39E76(iParam2);
	return unk_0x0683D2027E169355((1 + iParam0));
}

int func_16(int iParam0, char* sParam1, char* sParam2)//Position - 0x68A
{
	unk_0x5BE7193BC62CE2CE(sParam1);
	unk_0xA6D2B267C377D7B2(sParam2);
	return unk_0x0683D2027E169355((1 + iParam0));
}

int func_17(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x6A6
{
	unk_0x5BE7193BC62CE2CE(sParam1);
	unk_0xA6D2B267C377D7B2(sParam2);
	unk_0x6223D539BCD39E76(iParam3);
	return unk_0x0683D2027E169355((1 + iParam0));
}

int func_18()//Position - 0x6C8
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	return 1;
}

void func_19()//Position - 0x6DD
{
	switch (iLocal_43)
	{
		case 0:
			func_62();
			func_61(&Local_44, 1, joaat("prop_ld_scrap"), "LETTERS_COLLECT");
			func_59(&Local_44, joaat("num_hidden_packages_0"), 705, 50);
			iLocal_43 = 1;
			iLocal_60 = 1;
			break;
		
		case 1:
			if (!func_58(14) && !unk_0x3E9CABD07B829173())
			{
				if (func_21(&Local_44, &Local_50) || uLocal_59)
				{
					iLocal_43 = 2;
				}
				if (Local_44.f_1.f_4 == Local_44.f_1.f_3)
				{
					if (func_71(106) == 0)
					{
						func_66(106, 1);
						func_65(168, 0);
					}
				}
			}
			break;
		
		case 2:
			func_66(106, 1);
			func_65(168, 0);
			func_20(1);
			break;
	}
}

void func_20(int iParam0)//Position - 0x796
{
	iLocal_42 = iParam0;
	iLocal_43 = 0;
}

int func_21(var uParam0, int iParam1)//Position - 0x7A5
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar3;
	
	bVar3 = (!func_18() && !func_18());
	unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502());
	vVar2 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar1 = func_57(&(uParam0->f_1), uParam0->f_10);
		if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
		{
			if (!bVar1)
			{
				if (((((((uParam0->f_10 == 1 || uParam0->f_10 == 5) || uParam0->f_10 == 7) || uParam0->f_10 == 13) || uParam0->f_10 == 18) || uParam0->f_10 == 20) || uParam0->f_10 == 37) || uParam0->f_10 == 42)
				{
					func_55(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 2);
				}
				else if (uParam0->f_10 == iLocal_51)
				{
					func_55(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 2);
					if (unk_0xB8B3E5529EDB87D4((iParam1[uParam0->f_10 /*11*/])->f_1))
					{
						unk_0x6E795A41127FC848((iParam1[uParam0->f_10 /*11*/])->f_1, sLocal_52);
					}
				}
				else
				{
					func_55(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bVar1)
		{
			if (func_38(uParam0, iParam1, vVar2))
			{
				if (bVar3)
				{
					if (!func_37(33))
					{
						func_34("LETTERS_FIRST", 1, 0, -1, 10000, 7, 0, 0, 0);
						func_33(33);
					}
				}
			}
		}
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1)
		{
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (uParam0->f_11)
	{
		if (!Global_71116)
		{
			func_22(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 1, &iLocal_53, &iLocal_54, "LETTERS_TITLE", "LETTERS_COLLECT");
		}
	}
	if (!uParam0->f_12 && !uParam0->f_11)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

void func_22(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7)//Position - 0x98D
{
	int iVar0;
	
	func_32(0);
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
				unk_0x6223D539BCD39E76(func_24(iParam3));
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
				else if (!func_23())
				{
					if (unk_0x34D11AB5BA7922C2(*iParam5))
					{
						func_32(1);
						unk_0x28E092B1E386EB67(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((unk_0x53C562FD2B9E3AB0() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_23())
				{
					if (unk_0x34D11AB5BA7922C2(*iParam5))
					{
						func_32(1);
						unk_0x28E092B1E386EB67(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (unk_0x34D11AB5BA7922C2(*iParam5))
				{
					unk_0xA68F7B004463AB6F(iParam5);
				}
				func_32(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

int func_23()//Position - 0xB11
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

int func_24(int iParam0)//Position - 0xB3B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_31(iParam0))
		{
			if (unk_0xC80D31E4B587871C(Global_104555.f_10019.f_108, func_30(func_31(iParam0), iVar1)))
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
		while (iVar1 < func_31(iParam0))
		{
			iVar2 = (func_29(iParam0) + iVar1);
			if (func_25(iVar2, -1, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_25(int iParam0, int iParam1, int iParam2)//Position - 0xC03
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_28();
	}
	iVar1 = func_27(iParam0, iParam1);
	uVar2 = func_26(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_26(int iParam0)//Position - 0xC40
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

int func_27(int iParam0, int iParam1)//Position - 0xF00
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_28();
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

int func_28()//Position - 0x11A2
{
	return Global_1312736;
}

int func_29(int iParam0)//Position - 0x11AE
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

int func_30(int iParam0, int iParam1)//Position - 0x11F5
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_31(int iParam0)//Position - 0x1211
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

void func_32(int iParam0)//Position - 0x1261
{
	if (Global_71123 != iParam0)
	{
		Global_71123 = iParam0;
	}
}

void func_33(int iParam0)//Position - 0x127B
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_20380.f_150[iVar1]), iVar0);
	}
}

void func_34(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x12BD
{
	func_35(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_35(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x12DE
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
		func_36();
	}
}

void func_36()//Position - 0x14B1
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

int func_37(int iParam0)//Position - 0x15D1
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20380.f_150[iVar1], iVar0);
	}
	return 0;
}

int func_38(var uParam0, var uParam1, vector3 vParam2)//Position - 0x1614
{
	int iVar0;
	
	iVar0 = uParam0->f_10;
	if ((uParam1[iVar0 /*11*/])->f_10)
	{
		if ((uParam1[iVar0 /*11*/])->f_1 != 0)
		{
			if (unk_0x58786AA7A9E510C0((uParam1[iVar0 /*11*/])->f_1) || func_53((uParam1[iVar0 /*11*/])->f_1))
			{
				func_40(uParam0, uParam1, iVar0);
				return 1;
			}
		}
	}
	if (unk_0xB8B3E5529EDB87D4((uParam1[iVar0 /*11*/])->f_1))
	{
		if ((system::vdist2(vParam2, unk_0x20752E4B9ABBF6F5((uParam1[iVar0 /*11*/])->f_1)) > (60f * 60f) || func_58(13)) || func_58(14))
		{
			func_39(&((uParam1[iVar0 /*11*/])->f_1));
			(uParam1[iVar0 /*11*/])->f_1 = 0;
			(uParam1[iVar0 /*11*/])->f_10 = 0;
		}
	}
	return 0;
}

void func_39(var uParam0)//Position - 0x16D1
{
	if (unk_0xB8B3E5529EDB87D4(*uParam0))
	{
		unk_0x60727D07B2D72C82(*uParam0);
	}
}

void func_40(var uParam0, var uParam1, int iParam2)//Position - 0x16EA
{
	int iVar0;
	
	iVar0 = (func_29(*uParam0) + iParam2);
	func_39(&((uParam1[iParam2 /*11*/])->f_1));
	func_52(&((uParam1[iParam2 /*11*/])->f_2));
	(uParam1[iParam2 /*11*/])->f_1 = 0;
	(uParam1[iParam2 /*11*/])->f_10 = 0;
	func_51(&(uParam0->f_1), iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_50(*uParam0, iParam2, 1);
	}
	unk_0xC4803EF57E953FF3(0, 200, 250);
	unk_0xA28FBFF41378592F(uParam0->f_6, 1f);
	if (bLocal_41)
	{
		func_49(&(uParam0->f_1), iParam2);
	}
	else
	{
		func_47(&(uParam0->f_1));
	}
	func_44();
	unk_0xA82005B4A27F86C3(iVar0);
	func_43(1, 0);
	func_41();
	uParam0->f_11 = 1;
}

int func_41()//Position - 0x1795
{
	if (func_42(0))
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

bool func_42(bool bParam0)//Position - 0x17E0
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_43(int iParam0, int iParam1)//Position - 0x180B
{
	Global_92872.f_7 = iParam0;
	Global_92872.f_8 = iParam1;
}

void func_44()//Position - 0x1823
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	unk_0xFA3CE529DBB66C85(func_46(0), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_45(18, iVar0);
	}
	unk_0xFA3CE529DBB66C85(func_46(1), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_45(19, iVar0);
	}
	unk_0xFA3CE529DBB66C85(func_46(3), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_45(20, iVar0);
	}
	iVar2 = ((func_31(0) + func_31(1)) + func_31(3));
	if (iVar2 > 0)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	unk_0xBFFF62F75445099D(joaat("percent_hidden_packages"), iVar3, 1);
}

int func_45(int iParam0, int iParam1)//Position - 0x18C6
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

int func_46(int iParam0)//Position - 0x1917
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

void func_47(var uParam0)//Position - 0x1968
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
		if (func_57(uParam0, iVar0))
		{
			iVar1++;
			func_48((uParam0->f_2 + iVar0), 1, -1, 1);
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
		func_65(168, 0);
	}
}

int func_48(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x19EB
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
		iParam2 = func_28();
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

void func_49(var uParam0, int iParam1)//Position - 0x1EB7
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
	if (func_57(uParam0, iParam1))
	{
		uParam0->f_4++;
		func_48((uParam0->f_2 + iParam1), 1, -1, 1);
		if (bLocal_40)
		{
		}
	}
	if (bLocal_40)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_65(168, 0);
	}
}

void func_50(int iParam0, int iParam1, bool bParam2)//Position - 0x1F2B
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

void func_51(int iParam0, int iParam1, bool bParam2)//Position - 0x2017
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

void func_52(int iParam0)//Position - 0x2078
{
	if (unk_0xA6DECE14FC9A8C51(*iParam0))
	{
		unk_0xAAAC88CC20771601(*iParam0, false);
		unk_0xE30CF11C0EE14316(iParam0);
	}
}

int func_53(int iParam0)//Position - 0x2098
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB8B3E5529EDB87D4(iParam0))
	{
		return 0;
	}
	if (func_54(unk_0xFC1458A37D98B502()))
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

int func_54(int iParam0)//Position - 0x2124
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

void func_55(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x2145
{
	int iVar0;
	
	if (!uParam0->f_10)
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (!func_58(13) && !func_58(14))
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
							func_56(uParam0->f_3);
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

void func_56(vector3 vParam0)//Position - 0x225E
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

bool func_57(var uParam0, int iParam1)//Position - 0x229C
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

bool func_58(int iParam0)//Position - 0x22DA
{
	return Global_35861 == iParam0;
}

void func_59(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x22E8
{
	uParam0->f_6 = iParam1;
	func_60(&(uParam0->f_1), iParam2, iParam3);
}

void func_60(int iParam0, var uParam1, var uParam2)//Position - 0x2302
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
		if (func_25((iParam0->f_2 + iVar0), -1, -1))
		{
			iVar1++;
			func_51(iParam0, iVar0, 1);
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

void func_61(var uParam0, int iParam1, int iParam2, char* sParam3)//Position - 0x236B
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

void func_62()//Position - 0x2389
{
	int iVar0;
	
	Global_104555.f_10019.f_122.f_2 = 1;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Local_50[iVar0 /*11*/].f_3 = { func_63(iVar0, 0) };
		Local_50[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	iLocal_53 = 0;
	Local_50[0 /*11*/].f_9 = 179,4746f;
	Local_50[1 /*11*/].f_6 = { 0f, 0f, 198f };
	Local_50[2 /*11*/].f_9 = 104f;
	Local_50[3 /*11*/].f_9 = 321,5f;
	Local_50[4 /*11*/].f_6 = { 0f, 0f, 49f };
	Local_50[5 /*11*/].f_6 = { 0f, 0f, 286,5f };
	Local_50[6 /*11*/].f_9 = 278,0092f;
	Local_50[7 /*11*/].f_6 = { 5,3f, -1801,4f, 15,57f };
	Local_50[8 /*11*/].f_9 = 80,5f;
	Local_50[9 /*11*/].f_9 = 116f;
	Local_50[10 /*11*/].f_9 = 15f;
	Local_50[11 /*11*/].f_9 = 305,5f;
	Local_50[12 /*11*/].f_9 = 0f;
	Local_50[13 /*11*/].f_9 = 95f;
	Local_50[13 /*11*/].f_6 = { -0,91f, -0,03f, -0,81f };
	Local_50[14 /*11*/].f_9 = 40f;
	Local_50[15 /*11*/].f_9 = 40f;
	Local_50[16 /*11*/].f_9 = 40f;
	Local_50[17 /*11*/].f_9 = 90f;
	Local_50[17 /*11*/].f_6 = { -0,55f, 0f, 0,78f };
	Local_50[18 /*11*/].f_6 = { 0f, 0f, 0f };
	Local_50[19 /*11*/].f_9 = 40f;
	Local_50[20 /*11*/].f_6 = { 0f, 2f, 15f };
	Local_50[21 /*11*/].f_9 = 40f;
	Local_50[22 /*11*/].f_9 = 40f;
	Local_50[23 /*11*/].f_9 = 40f;
	Local_50[24 /*11*/].f_9 = 40f;
	Local_50[25 /*11*/].f_9 = 40f;
	Local_50[26 /*11*/].f_9 = 40f;
	Local_50[26 /*11*/].f_6 = { -6f, 10f, 0f };
	Local_50[27 /*11*/].f_9 = 40f;
	Local_50[27 /*11*/].f_6 = { -4,66f, 8,7f, 67,03f };
	Local_50[28 /*11*/].f_9 = 40f;
	Local_50[28 /*11*/].f_6 = { 1,54f, -8,31f, -19,94f };
	Local_50[29 /*11*/].f_9 = 40f;
	Local_50[30 /*11*/].f_9 = 40f;
	Local_50[30 /*11*/].f_6 = { 27,21f, -3,11f, -2,09f };
	Local_50[31 /*11*/].f_9 = 40f;
	Local_50[32 /*11*/].f_9 = 40f;
	Local_50[33 /*11*/].f_9 = 40f;
	Local_50[33 /*11*/].f_6 = { -9,89f, 0,3f, -0,01f };
	Local_50[34 /*11*/].f_9 = 40f;
	Local_50[35 /*11*/].f_9 = 40f;
	Local_50[36 /*11*/].f_9 = 40f;
	Local_50[36 /*11*/].f_6 = { 6,5f, -4,41f, -0,62f };
	Local_50[37 /*11*/].f_6 = { -9f, 5,3f, -2f };
	Local_50[38 /*11*/].f_9 = 40f;
	Local_50[38 /*11*/].f_6 = { -13,32f, -0,57f, -0,15f };
	Local_50[39 /*11*/].f_9 = 40f;
	Local_50[39 /*11*/].f_6 = { 4,71f, -21,26f, -0,06f };
	Local_50[40 /*11*/].f_9 = 40f;
	Local_50[41 /*11*/].f_9 = 80f;
	Local_50[42 /*11*/].f_6 = { -2f, 9f, 1f };
	Local_50[43 /*11*/].f_9 = 198f;
	Local_50[44 /*11*/].f_9 = 198f;
	Local_50[44 /*11*/].f_6 = { 0f, -20f, 0f };
	Local_50[45 /*11*/].f_9 = 198f;
	Local_50[46 /*11*/].f_9 = 198f;
	Local_50[47 /*11*/].f_9 = 198f;
	Local_50[48 /*11*/].f_9 = 198f;
	Local_50[49 /*11*/].f_9 = 198f;
}

Vector3 func_63(int iParam0, int iParam1)//Position - 0x277F
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				return 1034,274f, -3026,275f, 4,90197f;
			}
			else
			{
				return 1026,705f, -3026,052f, 13,3323f;
			}
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return -1040,979f, -2743,509f, 12,94983f;
			}
			else
			{
				return -1048,604f, -2734,218f, 12,8895f;
			}
			break;
		
		case 2:
			if (iParam1 == 1)
			{
				return -93,9012f, -2711,314f, 5,01752f;
			}
			else
			{
				return -81,1199f, -2726,511f, 7,74f;
			}
			break;
		
		case 3:
			return -917,6909f, -2527,384f, 22,3218f;
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 746,45f, -2310,32f, 26,03f;
			}
			else
			{
				return 748,922f, -2298,114f, 19,624f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 1509,742f, -2126,038f, 75,21973f;
			}
			else
			{
				return 1509,099f, -2120,551f, 75,61f;
			}
			break;
		
		case 6:
			return 76,0032f, -1970,475f, 20,1302f;
			break;
		
		case 7:
			if (iParam1 == 1)
			{
				return -1,82327f, -1732,614f, 28,29367f;
			}
			else
			{
				return 0,067f, -1734,027f, 30,606f;
			}
			break;
		
		case 8:
			if (iParam1 == 1)
			{
				return -1377,766f, -1409,837f, 4,63205f;
			}
			else
			{
				return -1380,491f, -1404,374f, 1,7273f;
			}
			break;
		
		case 9:
			return 2864,808f, -1372,84f, 1,3151f;
			break;
		
		case 10:
			return -1035,812f, -1273,077f, 0,8919f;
			break;
		
		case 11:
			return -1821,136f, -1201,36f, 18,1698f;
			break;
		
		case 12:
			return 643,0116f, -1035,65f, 35,8891f;
			break;
		
		case 13:
			return -119,0616f, -977,2228f, 303,23f;
			break;
		
		case 14:
			if (iParam1 == 1)
			{
				return -1243,104f, -507,8057f, 30,10775f;
			}
			else
			{
				return -1238,766f, -506,7138f, 37,6019f;
			}
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 83,79993f, -431,9302f, 36,55315f;
			}
			else
			{
				return 86,4f, -433,9f, 36f;
			}
			break;
		
		case 16:
			return 1095,953f, -210,4642f, 54,9477f;
			break;
		
		case 17:
			return -1724,522f, -196f, 57,2387f;
			break;
		
		case 18:
			return 265,374f, -199,546f, 60,795f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -3020,475f, 36,55431f, 9,11777f;
			}
			else
			{
				return -3021,4f, 38f, 10,2945f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return -347,5277f, 53,37161f, 52,97814f;
			}
			else
			{
				return -347,3f, 54,865f, 53,921f;
			}
			break;
		
		case 21:
			return 1052,248f, 167,611f, 87,7406f;
			break;
		
		case 22:
			return -2303,798f, 217,4301f, 166,6017f;
			break;
		
		case 23:
			return -138,9423f, 868,3885f, 231,6956f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return 688,1073f, 1204,671f, 323,3438f;
			}
			else
			{
				return 682,4505f, 1204,928f, 344,3322f;
			}
			break;
		
		case 25:
			return -1548,763f, 1380,173f, 125,3728f;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return -432,14f, 1598,46f, 355,73f;
			}
			else
			{
				return -432,0034f, 1597,129f, 356,613f;
			}
			break;
		
		case 27:
			return 3081,93f, 1648,29f, 2,42f;
			break;
		
		case 28:
			return -594,38f, 2092f, 130,57f;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 3069,213f, 2160,988f, 1,1327f;
			}
			else
			{
				return 3063,583f, 2212,63f, 2,5863f;
			}
			break;
		
		case 30:
			return 180,21f, 2263,83f, 91,87f;
			break;
		
		case 31:
			if (iParam1 == 1)
			{
				return 926,96f, 2445,36f, 49,09f;
			}
			else
			{
				return 929,6946f, 2444,115f, 48,43f;
			}
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return -2380,212f, 2655,176f, 0,832f;
			}
			else
			{
				return -2379,948f, 2656,953f, 1,4906f;
			}
			break;
		
		case 33:
			return -861,38f, 2753,3f, 12,867f;
			break;
		
		case 34:
			return -289,0195f, 2848,853f, 53,331f;
			break;
		
		case 35:
			if (iParam1 == 1)
			{
				return 288,8409f, 2871,912f, 42,6422f;
			}
			else
			{
				return 265,7415f, 2866,416f, 73,19f;
			}
			break;
		
		case 36:
			if (iParam1 == 1)
			{
				return 1297,378f, 2988,71f, 40,11787f;
			}
			else
			{
				return 1294,2f, 3001,9f, 57,7f;
			}
			break;
		
		case 37:
			return 1568,65f, 3572,8f, 32,294f;
			break;
		
		case 38:
			return -1608,62f, 4274,25f, 102,95f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return -3,51812f, 4332,451f, 31,21602f;
			}
			else
			{
				return -1,9585f, 4334,787f, 32,3702f;
			}
			break;
		
		case 40:
			return 1336,737f, 4307,2f, 37,1325f;
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -1007,103f, 4836,936f, 268,5488f;
			}
			else
			{
				return -1001,48f, 4851,322f, 273,6112f;
			}
			break;
		
		case 42:
			return 1877,09f, 5078,98f, 50,49f;
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return 3366,099f, 5182,461f, 0,68317f;
			}
			else
			{
				return 3436,453f, 5176,911f, 6,386f;
			}
			break;
		
		case 44:
			if (iParam1 == 1)
			{
				return -576,12f, 5472,24f, 59,28f;
			}
			else
			{
				return -578,8057f, 5470,164f, 59,0295f;
			}
			break;
		
		case 45:
			return 444,6518f, 5571,781f, 780,1888f;
			break;
		
		case 46:
			return -402,9948f, 6319,279f, 31,2256f;
			break;
		
		case 47:
			return 1439,599f, 6335,208f, 22,9485f;
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return 1466,109f, 6552,266f, 12,95773f;
			}
			else
			{
				return 1469,632f, 6552,174f, 13,6854f;
			}
			break;
		
		case 49:
			if (iParam1 == 1)
			{
				return 66,19278f, 6668,888f, 30,80633f;
			}
			else
			{
				return 66,7136f, 6663,198f, 30,7821f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_64(int iParam0)//Position - 0x2F5F
{
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	return !unk_0x191BE1BC8F26F3C1(iParam0, 0);
}

void func_65(int iParam0, int iParam1)//Position - 0x2F7D
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_104555.f_8583[iParam0] = 1;
	Global_104555.f_8583.f_236[iParam0] = (unk_0x53C562FD2B9E3AB0() + iParam1);
}

void func_66(int iParam0, int iParam1)//Position - 0x2FBA
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

void func_67(int iParam0, int iParam1, int iParam2)//Position - 0x2FFF
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_48((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_104555.f_10164[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104555.f_10164[iParam0 /*12*/].f_6 == 11 || Global_104555.f_10164[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104555.f_10164[iParam0 /*12*/].f_5 = 1;
		Global_104555.f_10164[iParam0 /*12*/].f_10 = iParam1;
		Global_104555.f_10164[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x02D73F783D6C1AFA(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x02D73F783D6C1AFA(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x02D73F783D6C1AFA(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_68();
	}
}

void func_68()//Position - 0x30E7
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_104291 = 0;
	Global_104292 = 0;
	Global_104293 = 0;
	Global_104294 = 0;
	Global_104295 = 0;
	Global_104296 = 0;
	Global_104297 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104555.f_10164.f_3853;
	Global_104555.f_10164.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104555.f_10164[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104555.f_10164[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104291++;
					fVar1 = (fVar1 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104292++;
					fVar2 = (fVar2 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104293++;
					fVar3 = (fVar3 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104294++;
					fVar4 = (fVar4 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104295++;
					fVar5 = (fVar5 + (Global_104555.f_10164[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104296++;
					fVar6 = (fVar6 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104297++;
					fVar7 = (fVar7 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104274 > 0)
	{
		if (Global_104291 == Global_104274)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104275 > 0)
	{
		if (Global_104292 == Global_104275)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104276 > 0)
	{
		if (Global_104293 == Global_104276)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104277 > 0)
	{
		if (Global_104294 == Global_104277)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104278 > 0)
	{
		if (((Global_104295 == Global_104278 || (Global_104278 * 10 / Global_104295) < 41) || Global_104295 > Global_104281) || Global_104295 == Global_104281)
		{
			if (!unk_0xC80D31E4B587871C(Global_104555.f_10164.f_3856, 14))
			{
				if (Global_104295 == Global_104278)
				{
					unk_0x02D73F783D6C1AFA(joaat("num_rndevents_completed"), Global_104278, 0);
					unk_0x872F1C1F8587CCC7(&(Global_104555.f_10164.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104279 > 0)
	{
		if (Global_104296 == Global_104279)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104280 > 0)
	{
		if (Global_104297 == Global_104280)
		{
			fVar7 = 5f;
		}
	}
	Global_104555.f_10164.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104295 > Global_104281 || Global_104295 == Global_104281)
	{
		iVar9 = Global_104281;
	}
	else
	{
		iVar9 = Global_104295;
	}
	unk_0xBFFF62F75445099D(joaat("num_missions_completed"), Global_104291, 1);
	unk_0xBFFF62F75445099D(joaat("num_missions_available"), Global_104274, 1);
	unk_0xBFFF62F75445099D(joaat("num_minigames_completed"), Global_104292, 1);
	unk_0xBFFF62F75445099D(joaat("num_minigames_available"), Global_104275, 1);
	unk_0xBFFF62F75445099D(joaat("num_oddjobs_completed"), Global_104293, 1);
	unk_0xBFFF62F75445099D(joaat("num_oddjobs_available"), Global_104276, 1);
	unk_0xBFFF62F75445099D(joaat("num_rndpeople_completed"), Global_104294, 1);
	unk_0xBFFF62F75445099D(joaat("num_rndpeople_available"), Global_104277, 1);
	unk_0xBFFF62F75445099D(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xBFFF62F75445099D(joaat("num_rndevents_available"), Global_104281, 1);
	unk_0xBFFF62F75445099D(joaat("num_misc_completed"), (Global_104297 + Global_104296), 1);
	unk_0xBFFF62F75445099D(joaat("num_misc_available"), (Global_104280 + Global_104279), 1);
	Global_104298 = (Global_104291 * 100 / Global_104274);
	Global_104300 = ((Global_104293 + Global_104292) * 100 / (Global_104276 + Global_104275));
	Global_104299 = ((Global_104294 + iVar9) * 100 / (Global_104277 + Global_104281));
	Global_104301 = ((Global_104296 + Global_104297) * 100 / (Global_104279 + Global_104280));
	unk_0x00E69ADBDAF11A90(joaat("total_progress_made"), Global_104555.f_10164.f_3853, 1);
	unk_0xBFFF62F75445099D(joaat("percent_story_missions"), Global_104298, 1);
	unk_0xBFFF62F75445099D(joaat("percent_ambient_missions"), Global_104299, 1);
	unk_0xBFFF62F75445099D(joaat("percent_oddjobs"), Global_104300, 1);
	if (fVar8 > 0f && system::floor(fVar8) < system::floor(Global_104555.f_10164.f_3853))
	{
		func_45(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_69() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_41();
				}
			}
		}
	}
}

int func_69()//Position - 0x35A8
{
	return Global_25233;
}

int func_70(int iParam0)//Position - 0x35B3
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

int func_71(int iParam0)//Position - 0x360D
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_99.f_58[iParam0];
}

int func_72(int iParam0)//Position - 0x363A
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

void func_73()//Position - 0x3694
{
	int iVar0;
	
	unk_0xAE8C92295C8F2D18(0);
	unk_0xA68F7B004463AB6F(&iLocal_55);
	unk_0x6ACDC20166AA3FAC(0);
	Global_104555.f_10019.f_122.f_2 = 0;
	iVar0 = 0;
	while (iVar0 < Local_50)
	{
		func_52(&(Local_50[iVar0 /*11*/].f_2));
		func_39(&(Local_50[iVar0 /*11*/].f_1));
		Local_50[iVar0 /*11*/].f_1 = 0;
		iVar0++;
	}
	if (func_71(106) == 1)
	{
		func_66(106, 1);
		func_75();
		func_70(12);
	}
	else if (func_74(&(Local_44.f_1)))
	{
		func_66(106, 1);
		func_75();
		func_70(12);
	}
	else
	{
		func_72(12);
	}
	if (iLocal_60)
	{
		unk_0x14776E43F90DD454(Local_44.f_7);
	}
	unk_0x96A3D9A8A4C7AFD4();
}

bool func_74(var uParam0)//Position - 0x3745
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

void func_75()//Position - 0x375E
{
	int iVar0;
	
	iVar0 = func_76(64);
	Global_2413945[iVar0 /*83*/] = 64;
	StringCopy(&(Global_2413945[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_76(int iParam0)//Position - 0x378A
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

