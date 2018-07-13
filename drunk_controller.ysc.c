#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	float fLocal_4 = 0f;
	float fLocal_5[8] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_6 = 0f;
#endregion

void __EntryFunction__()//Position - 0x0
{
	fLocal_4 = -99f;
	fLocal_6 = -1f;
	unk_0x252CDD3D0F299441();
	if (unk_0x7D9C4B359376D38A(32))
	{
		func_30();
	}
	while (true)
	{
		system::wait(0);
		func_29(0);
		func_28();
		func_21();
		func_18();
		func_13();
		func_2();
		iLocal_1++;
		if (iLocal_1 >= 16)
		{
			iLocal_1 = 0;
		}
		iLocal_2++;
		if (iLocal_2 >= 16)
		{
			iLocal_2 = 0;
		}
		iLocal_3++;
		if (iLocal_3 >= 5)
		{
			iLocal_3 = 0;
		}
		if (!func_1())
		{
			func_30();
		}
	}
}

int func_1()//Position - 0x83
{
	if (Global_36959)
	{
		return 1;
	}
	if (unk_0x8EA3C8E091EA5BA4(Global_36960))
	{
		return 1;
	}
	if (unk_0x8F38E94BBF3404CD(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_36769 > 0)
	{
		return 1;
	}
	return 0;
}

void func_2()//Position - 0xC0
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	
	if (!Global_36959)
	{
		return;
	}
	iVar1 = unk_0x53C562FD2B9E3AB0();
	if (Global_36961 > iVar1 || Global_36961 == -1)
	{
		if (unk_0x1E06D00B67177A18())
		{
			return;
		}
		iVar2 = func_12();
		iVar0 = (fLocal_5 - 1);
		while (iVar0 >= 1)
		{
			fLocal_5[iVar0] = fLocal_5[(iVar0 - 1)];
			iVar0 = (iVar0 + -1);
		}
		fLocal_5[0] = iVar2;
		iVar4 = 0;
		iVar0 = 0;
		while (iVar0 < fLocal_5)
		{
			fVar3 = (fVar3 + fLocal_5[iVar0]);
			iVar4++;
			iVar0++;
		}
		fVar3 = (fVar3 / IntToFloat(iVar4));
		fVar5 = func_7();
		if (Global_36964 != Global_36965)
		{
			fVar6 = (Global_36965 - Global_36964);
			Global_36964 = (Global_36964 + (fVar6 * 0,1f));
			if (unk_0xE97272C977DEADD3((Global_36964 - Global_36965)) < 0,01f)
			{
				Global_36964 = Global_36965;
			}
		}
		if (!unk_0x4D09F78E02924CE0())
		{
			unk_0x2269709BAFC7A1E5("DRUNK_SHAKE", ((Global_36964 * fVar3) * fVar5));
		}
		if ((unk_0x53C562FD2B9E3AB0() % 100) == 0)
		{
			if (Global_36961 == -1)
			{
			}
			else
			{
				if (fLocal_6 == -1f)
				{
					fLocal_6 = fVar3;
				}
				unk_0xFBF9D5E16F28DD3E(((Global_36964 * fVar3) * fVar5));
				unk_0xC2C53B09E215C30E(((Global_36963 * fVar3) * fVar5));
				fLocal_6 = fVar3;
			}
		}
		if (((Global_36963 * fVar3) * fVar5) < 1f)
		{
			unk_0xCA95F6B458E05D16(((Global_36963 * fVar3) * fVar5));
		}
		else
		{
			unk_0xCA95F6B458E05D16(1f);
		}
		if (!unk_0xE4D04BC85D5121A4())
		{
			unk_0x48256C3D23186EAF("DRUNK_SHAKE", (((Global_36964 * Global_36958) * fVar3) * fVar5));
		}
		unk_0x8C236B20FA7F87E5((((Global_36964 * Global_36958) * fVar3) * fVar5));
		if (unk_0x8EA3C8E091EA5BA4(Global_36960))
		{
			if (unk_0xEB6CE9F449EBE42F(Global_36960))
			{
				unk_0x2D506790E8BD950D(Global_36960, ((Global_36964 * fVar3) * fVar5));
			}
		}
		if (!unk_0xAB019B170BF1309C(&Global_36987) && !unk_0xAB019B170BF1309C(&Global_36971))
		{
			unk_0xE859EF37EA7362D3(&Global_36971);
			StringCopy(&Global_36987, "", 16);
		}
		unk_0x3A257DFDA1E817FD();
		if (Global_36966 > 0f)
		{
			if (fLocal_4 != Global_36966)
			{
				if (unk_0x174776B22B5B9EEE() != -1)
				{
				}
				else
				{
					unk_0x9809684338316BE9(&Global_36967, 15f);
					fLocal_4 = Global_36966;
				}
			}
			else
			{
				if (unk_0x174776B22B5B9EEE() != -1 && unk_0x4102DE1B9F707D57() != -1)
				{
					fLocal_4 = -99f;
				}
				unk_0xE38BD72F7068FCD3(2);
				iVar7 = (Global_36961 - iVar1);
				if (iVar7 <= (Global_36962 / 2))
				{
					bVar8 = false;
					if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
					{
						if (unk_0xAFFA17B5D5E2F248(unk_0xFC1458A37D98B502()))
						{
							bVar8 = true;
						}
					}
					if (func_5(unk_0xFC1458A37D98B502()))
					{
						Global_36961 += 1000;
					}
					else if (bVar8)
					{
						Global_36961 += 1000;
					}
					else if (unk_0x174776B22B5B9EEE() != -1)
					{
						Global_36961 += 1000;
					}
					else
					{
						if (unk_0x4102DE1B9F707D57() != -1)
						{
							unk_0x14A5FD7C329BCCCD((system::to_float((Global_36962 / 2)) / 1000f));
						}
						fLocal_4 = -99f;
						Global_36966 = 0f;
						StringCopy(&Global_36967, "", 16);
					}
				}
			}
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < fLocal_5)
	{
		fLocal_5[iVar0] = 0f;
		iVar0++;
	}
	fLocal_6 = -1f;
	func_3(1);
	iLocal_0 = 1;
}

void func_3(bool bParam0)//Position - 0x39B
{
	unk_0xC2C53B09E215C30E(0f);
	unk_0xCA95F6B458E05D16(0f);
	unk_0xFBF9D5E16F28DD3E(0f);
	unk_0xB0F1C81988F1DD0D(1);
	unk_0x8C236B20FA7F87E5(0f);
	unk_0xFB9C126263C6C9C2(1);
	unk_0xE38BD72F7068FCD3(0);
	if (unk_0x771D0F8F56A5FE6C("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xE02E32C69260FBB7("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xAB019B170BF1309C(&Global_36971))
	{
		if (unk_0x771D0F8F56A5FE6C(&Global_36971))
		{
			unk_0xE02E32C69260FBB7(&Global_36971);
		}
	}
	if (unk_0x8EA3C8E091EA5BA4(Global_36960))
	{
		if (unk_0xEB6CE9F449EBE42F(Global_36960))
		{
			unk_0x2D506790E8BD950D(Global_36960, 0f);
			unk_0x3C6F9A723015D90F(Global_36960, 1);
		}
	}
	if (unk_0xACF167683DFA8C87())
	{
		unk_0x713DAB30E8D8DE8F(0);
	}
	if (bParam0)
	{
		if (unk_0x4102DE1B9F707D57() != -1 || unk_0x174776B22B5B9EEE() != -1)
		{
			unk_0xBAD7096AD4E946DE();
		}
		else if (unk_0x1E06D00B67177A18())
		{
			unk_0xBAD7096AD4E946DE();
		}
	}
	Global_36966 = 0f;
	StringCopy(&Global_36967, "", 16);
	StringCopy(&Global_36971, "", 64);
	StringCopy(&Global_36987, "", 16);
	func_4();
}

void func_4()//Position - 0x475
{
	Global_36959 = 0;
	Global_36960 = 0;
	Global_36961 = 0;
	Global_36962 = 30000;
	Global_36963 = 0f;
	Global_36965 = 0f;
	Global_36964 = 0f;
	Global_36966 = 0f;
	StringCopy(&Global_36967, "", 16);
}

int func_5(int iParam0)//Position - 0x4A7
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_6(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_6(int iParam0)//Position - 0x4C8
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_36796[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36796[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

float func_7()//Position - 0x511
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 0,1f;
	iVar1 = func_11(unk_0xFC1458A37D98B502());
	iVar2 = func_8(unk_0xFC1458A37D98B502());
	if (iVar2 == 0)
	{
		if (iVar1 == 0)
		{
			fVar0 = 0,1f;
		}
		else
		{
			fVar0 = (system::to_float(iVar1) / system::to_float(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 == 0)
	{
		fVar0 = 0,1f;
	}
	else
	{
		fVar0 = (system::to_float(iVar2) / system::to_float(5));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_8(int iParam0)//Position - 0x590
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36796[iVar1 /*5*/].f_4;
}

int func_9(int iParam0)//Position - 0x5D3
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36796[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_10(int iParam0)//Position - 0x603
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36796[iVar0 /*5*/].f_1)
		{
			return Global_36796[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_11(int iParam0)//Position - 0x644
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36796[iVar1 /*5*/].f_3;
}

float func_12()//Position - 0x687
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x53C562FD2B9E3AB0();
	fVar1 = 1f;
	iVar2 = (Global_36961 - iVar0);
	if (iVar2 <= Global_36962)
	{
		if (Global_36961 != -1)
		{
			fVar1 = (system::to_float(iVar2) / system::to_float(Global_36962));
		}
	}
	return fVar1;
}

void func_13()//Position - 0x6C1
{
	if (Global_36770[iLocal_3 /*5*/] == 0)
	{
		func_14(iLocal_3);
	}
}

void func_14(int iParam0)//Position - 0x6DA
{
	int iVar0;
	struct<5> Var1;
	
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (unk_0x191BE1BC8F26F3C1(Global_36770[iParam0 /*5*/].f_1, 0))
	{
		func_17(iParam0);
		return;
	}
	if (func_5(Global_36770[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (!unk_0x3B6F9DF9C5FEB3A4("drunk"))
	{
		unk_0xD9E2C360120FEB7C("drunk");
		return;
	}
	iVar0 = func_16();
	if (iVar0 == -1)
	{
		func_17(iParam0);
		return;
	}
	Global_36796[iVar0 /*5*/] = func_15();
	Global_36796[iVar0 /*5*/].f_1 = Global_36770[iParam0 /*5*/].f_1;
	Global_36796[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_36770[iParam0 /*5*/] };
	system::start_new_script_with_args("drunk", &Var1, 5, 1424);
	unk_0x9D2418D7FC697249("drunk");
	func_17(iParam0);
}

var func_15()//Position - 0x7A2
{
	var uVar0;
	
	uVar0 = Global_36768;
	Global_36768++;
	return uVar0;
}

int func_16()//Position - 0x7B9
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36796[iVar0 /*5*/] == -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_17(int iParam0)//Position - 0x7E8
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36770[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36770[iParam0 /*5*/].f_1 == unk_0xFC1458A37D98B502())
		{
			Global_36991 = 0;
		}
	}
	Global_36770[iParam0 /*5*/] = 13;
	Global_36770[iParam0 /*5*/].f_1 = 0;
	Global_36770[iParam0 /*5*/].f_2 = 0;
	Global_36770[iParam0 /*5*/].f_3 = 0;
	Global_36770[iParam0 /*5*/].f_4 = 0;
	Global_36769 = (Global_36769 - 1);
	if (Global_36769 < 0)
	{
		Global_36769 = 0;
	}
}

void func_18()//Position - 0x86B
{
	if (!Global_36877[iLocal_1 /*5*/].f_2 == 6)
	{
		if (Global_36877[iLocal_1 /*5*/].f_1 == 0)
		{
			func_20(iLocal_1);
			func_19(iLocal_1);
		}
	}
}

void func_19(int iParam0)//Position - 0x89B
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_36877[iParam0 /*5*/] = -1;
	Global_36877[iParam0 /*5*/].f_1 = -1;
	Global_36877[iParam0 /*5*/].f_2 = 6;
	Global_36877[iParam0 /*5*/].f_3 = 0;
	Global_36877[iParam0 /*5*/].f_4 = 0;
}

void func_20(int iParam0)//Position - 0x8E8
{
	int iVar0;
	
	iVar0 = Global_36877[iParam0 /*5*/].f_2;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
		
		default:
			break;
	}
}

void func_21()//Position - 0x932
{
	int iVar0;
	
	iVar0 = -1;
	if (!Global_36796[iLocal_2 /*5*/] == -1)
	{
		iVar0 = func_27(Global_36796[iLocal_2 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_22(Global_36796[iLocal_2 /*5*/]);
		}
		else
		{
			func_19(iVar0);
		}
	}
}

void func_22(int iParam0)//Position - 0x972
{
	int iVar0;
	
	func_25(iParam0);
	iVar0 = func_24(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_23(iVar0);
}

void func_23(int iParam0)//Position - 0x997
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_36796[iParam0 /*5*/] = -1;
	Global_36796[iParam0 /*5*/].f_1 = 0;
	Global_36796[iParam0 /*5*/].f_2 = -1;
	Global_36796[iParam0 /*5*/].f_3 = 0;
	Global_36796[iParam0 /*5*/].f_4 = 0;
}

int func_24(int iParam0)//Position - 0x9E4
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36796[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25(int iParam0)//Position - 0xA14
{
	func_29(iParam0);
	func_26(iParam0);
}

void func_26(int iParam0)//Position - 0xA28
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36877[iVar0 /*5*/].f_1)
		{
			func_19(iVar0);
		}
		iVar0++;
	}
}

int func_27(int iParam0, int iParam1)//Position - 0xA5A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam1 == Global_36877[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36877[iVar0 /*5*/])
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_28()//Position - 0xA98
{
	if (Global_36877[iLocal_1 /*5*/] == 1)
	{
		Global_36877[iLocal_1 /*5*/] = 0;
	}
}

void func_29(int iParam0)//Position - 0xAB3
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36877[iVar0 /*5*/])
		{
			func_19(iVar0);
		}
		iVar0++;
	}
}

void func_30()//Position - 0xAE3
{
	func_31();
	if (!iLocal_0)
	{
		func_3(1);
	}
	unk_0x96A3D9A8A4C7AFD4();
}

void func_31()//Position - 0xAFE
{
	func_34();
	func_33();
	func_32();
	func_4();
	Global_36992 = 0;
	Global_36991 = 0;
	Global_36769 = 0;
	unk_0xB78F9271050618A3("drunk");
}

void func_32()//Position - 0xB29
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_19(iVar0);
		iVar0++;
	}
}

void func_33()//Position - 0xB4D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_23(iVar0);
		iVar0++;
	}
}

void func_34()//Position - 0xB71
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_17(iVar0);
		iVar0++;
	}
}

