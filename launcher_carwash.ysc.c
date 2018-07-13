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
	struct<24> Local_40[2];
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = -1;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	bool bLocal_58 = 0;
	vector3 vLocal_59[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_60[2] = { 0, 0 };
	int iLocal_61[2] = { 0, 0 };
	struct<2> Local_62 = { 0, 5 } ;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 5;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	int iVar3;
	
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
	vVar2 = { ScriptParam_62.f_1[0 /*3*/] };
	if (unk_0x8F38E94BBF3404CD(joaat("launcher_carwash")) > 1)
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	if (unk_0x3A711520F83BAE98())
	{
		unk_0x252CDD3D0F299441();
		unk_0x941BE77305BB5695(0);
	}
	else if (unk_0x7D9C4B359376D38A(99))
	{
		func_70();
	}
	if (Global_2621550)
	{
		if (unk_0x8F38E94BBF3404CD(-949873222) == 0)
		{
			unk_0x8A719502FC5D36F1(-949873222);
			while (!unk_0x2674C3EBFAFF7678(-949873222))
			{
				system::wait(0);
			}
			system::start_new_script_with_name_hash_and_args(-949873222, &ScriptParam_62, 23, 1424);
		}
		unk_0x96A3D9A8A4C7AFD4();
	}
	if (func_69(unk_0xFC1458A37D98B502()))
	{
	}
	func_63();
	while (true)
	{
		func_69(unk_0xFC1458A37D98B502());
		if (func_62(unk_0xFC1458A37D98B502(), vVar2, 0) > (100f + 20f))
		{
			func_70();
		}
		bVar0 = false;
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar1 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			bVar0 = (func_59(iVar1) || func_58(iVar1));
			bLocal_58 = unk_0x003430E96281C9D9(iVar1);
			func_57(bLocal_58);
		}
		iVar3 = 0;
		while (iVar3 < Local_40)
		{
			func_56(iVar3);
			iVar3++;
		}
		if (func_1(&Local_40, &uLocal_41, bVar0, 0, 1, 1424))
		{
			func_70();
		}
		system::wait(0);
	}
}

int func_1(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x196
{
	int iVar0;
	
	if (uParam1->f_10)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			func_51(iParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_13)
	{
		case 0:
			iVar0 = 0;
			if (func_44(uParam1->f_16))
			{
				iVar0 = 0;
				while (iVar0 < *iParam0)
				{
					if (func_41(iParam0[iVar0 /*24*/]) && (*iParam0)[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
						if ((iParam0[iVar0 /*24*/])->f_7 || (unk_0x5A0744D504CC705F() && uParam1->f_16 == 0))
						{
							func_40(uParam1, 6);
						}
						else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
						{
							func_40(uParam1, 8);
						}
						else if (bParam2)
						{
							func_40(uParam1, 3);
						}
						else if ((iParam0[iVar0 /*24*/])->f_8)
						{
							func_40(uParam1, 2);
						}
						else if (func_30() < (iParam0[uParam1->f_12 /*24*/])->f_9)
						{
							func_40(uParam1, 1);
						}
						else if (func_25())
						{
							func_40(uParam1, 7);
						}
						else
						{
							func_40(uParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				func_24(uParam1);
			}
			break;
		
		case 2:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_6);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || (iParam0[iVar0 /*24*/])->f_8 == 0)
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 1:
			if (!uParam1->f_9)
			{
				func_13(uParam1, uParam1->f_2, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || func_30() >= (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 6:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_1);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_44(uParam1->f_16))
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 3:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_3);
			}
			if ((func_18(iParam0[uParam1->f_12 /*24*/]) || bParam2 == 0) || !func_44(uParam1->f_16))
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 7:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_5);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_44(uParam1->f_16))
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 8:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_4);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 9:
			if (!uParam1->f_9)
			{
				if (func_12())
				{
					func_22(uParam1, uParam1->f_7);
				}
				else
				{
					func_22(uParam1, uParam1->f_8);
				}
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || func_9(iParam0[uParam1->f_12 /*24*/]))
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 4:
			unk_0x01B48CB2F72AE113(2, 51);
			unk_0x4FB260623DD93924(0, 101, 1);
			func_8();
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
			{
				func_40(uParam1, 8);
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_8)
			{
				func_40(uParam1, 2);
				return 0;
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_44(uParam1->f_16))
			{
				func_40(uParam1, 0);
				return 0;
			}
			if (Global_68215)
			{
				return 0;
			}
			if (func_5(1))
			{
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || func_4(unk_0xFC1458A37D98B502(), 0) != -1)
				{
					func_40(uParam1, 0);
					return 0;
				}
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_7 || (unk_0x5A0744D504CC705F() && uParam1->f_16 == 0))
			{
				func_40(uParam1, 6);
				return 0;
			}
			if (func_25())
			{
				func_40(uParam1, 7);
				return 0;
			}
			if (func_30() < (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_40(uParam1, 1);
				return 0;
			}
			if (!uParam1->f_9)
			{
				func_13(uParam1, *uParam1, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && !unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
			}
			if (unk_0x0F30C1F1717A6437() || unk_0x04D7390E1D7464B7())
			{
				return 0;
			}
			if (unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()))
			{
				if ((unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502()) || unk_0x1C2D46BE328E3124(unk_0xFC1458A37D98B502())) || unk_0xE4A3B62790C25748(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if ((unk_0x8E403242846BCC9B(unk_0xFC1458A37D98B502()) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x7CE28D2DD2AF0F42(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x1E5BEC57385A771D(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x6609DF209E7283C5(unk_0xFC1458A37D98B502()) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) > 0,05f)
				{
					return 0;
				}
			}
			if (unk_0xE8C126B7ADBB9D63(2, 51) && uParam1->f_9 == 1)
			{
				if (!func_9(iParam0[uParam1->f_12 /*24*/]))
				{
					func_40(uParam1, 9);
				}
				else
				{
					func_40(uParam1, 5);
				}
			}
			break;
		
		case 5:
			func_24(uParam1);
			(iParam0[uParam1->f_12 /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				func_40(uParam1, 0);
				return 1;
			}
			unk_0x3E80C2F7BC665259(1);
			unk_0xA896149A4DE38DEA(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 20f, 0);
			if (!unk_0xAB019B170BF1309C((iParam0[uParam1->f_12 /*24*/])->f_5))
			{
				unk_0xD9E2C360120FEB7C((iParam0[uParam1->f_12 /*24*/])->f_5);
				while (!unk_0x3B6F9DF9C5FEB3A4((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					func_8();
					if (func_69(unk_0xFC1458A37D98B502()))
					{
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && !Global_70856)
						{
							func_2(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 2f, 1, 1056964608, 0, 1, 0);
							unk_0xD6A0F9B258FE2F82(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0);
						}
					}
					unk_0x01B48CB2F72AE113(2, 51);
					unk_0xD9E2C360120FEB7C((iParam0[uParam1->f_12 /*24*/])->f_5);
					unk_0x4FB260623DD93924(0, 101, 1);
					unk_0x4FB260623DD93924(0, 75, 1);
					unk_0x4FB260623DD93924(0, 23, 1);
					system::wait(0);
				}
				if (bParam3)
				{
					unk_0xAE83ED4C9081AE6F(250);
				}
				if (unk_0x3B6F9DF9C5FEB3A4((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!unk_0x3E9CABD07B829173())
						{
							if (func_69(unk_0xFC1458A37D98B502()))
							{
								if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && !Global_70856)
								{
									func_2(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 2f, 1, 1056964608, 0, 1, 0);
									unk_0xD6A0F9B258FE2F82(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0);
								}
							}
							unk_0x01B48CB2F72AE113(2, 51);
							unk_0x4FB260623DD93924(0, 101, 1);
							unk_0x4FB260623DD93924(0, 75, 1);
							unk_0x4FB260623DD93924(0, 23, 1);
							func_8();
							system::wait(0);
						}
					}
					system::start_new_script((iParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					unk_0x9D2418D7FC697249((iParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_2(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x8D8
{
	unk_0x4FB260623DD93924(0, 71, 1);
	unk_0x4FB260623DD93924(0, 72, 1);
	unk_0x4FB260623DD93924(0, 76, 1);
	unk_0x4FB260623DD93924(0, 73, 1);
	unk_0x4FB260623DD93924(0, 59, 1);
	unk_0x4FB260623DD93924(0, 60, 1);
	if (bParam5)
	{
		unk_0x4FB260623DD93924(0, 75, 1);
	}
	unk_0x4FB260623DD93924(0, 80, 1);
	if (!bParam6)
	{
		unk_0x4FB260623DD93924(0, 69, 1);
		unk_0x4FB260623DD93924(0, 70, 1);
		unk_0x4FB260623DD93924(0, 68, 1);
	}
	unk_0x4FB260623DD93924(0, 74, 1);
	unk_0x4FB260623DD93924(0, 86, 1);
	unk_0x4FB260623DD93924(0, 81, 1);
	unk_0x4FB260623DD93924(0, 82, 1);
	unk_0x4FB260623DD93924(0, 138, 1);
	unk_0x4FB260623DD93924(0, 136, 1);
	unk_0x4FB260623DD93924(0, 114, 1);
	unk_0x4FB260623DD93924(0, 107, 1);
	unk_0x4FB260623DD93924(0, 110, 1);
	unk_0x4FB260623DD93924(0, 89, 1);
	unk_0x4FB260623DD93924(0, 89, 1);
	unk_0x4FB260623DD93924(0, 87, 1);
	unk_0x4FB260623DD93924(0, 88, 1);
	unk_0x4FB260623DD93924(0, 113, 1);
	unk_0x4FB260623DD93924(0, 115, 1);
	unk_0x4FB260623DD93924(0, 116, 1);
	unk_0x4FB260623DD93924(0, 117, 1);
	unk_0x4FB260623DD93924(0, 118, 1);
	unk_0x4FB260623DD93924(0, 119, 1);
	unk_0x4FB260623DD93924(0, 131, 1);
	unk_0x4FB260623DD93924(0, 132, 1);
	unk_0x4FB260623DD93924(0, 123, 1);
	unk_0x4FB260623DD93924(0, 126, 1);
	unk_0x4FB260623DD93924(0, 129, 1);
	unk_0x4FB260623DD93924(0, 130, 1);
	unk_0x4FB260623DD93924(0, 133, 1);
	unk_0x4FB260623DD93924(0, 134, 1);
	unk_0x39FCF612EAC7971C();
	func_3(iParam0);
	if ((unk_0x53C562FD2B9E3AB0() - Global_29) > 500)
	{
		unk_0xA1AA40A93CA0F40D(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x53C562FD2B9E3AB0();
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0xE97272C977DEADD3(unk_0x90D5DFB054818BA7(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_3(int iParam0)//Position - 0xA67
{
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0xE746585056D841A7(iParam0))
		{
			if (unk_0xB8B664A5307FB39B(iParam0))
			{
				unk_0x463DA544A329DE36(iParam0, 0);
			}
		}
	}
}

int func_4(int iParam0, int iParam1)//Position - 0xA93
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x88DDBE9908752BF0(iParam0, iParam1))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(iParam0, iParam1);
			if (unk_0x6ADD12BF4D6D2587(iVar0))
			{
				iVar1 = unk_0xF82225DEA5272C6B(unk_0x82FF3DFBC3965CC0(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x8EE3A848975DDF21(iVar0, iVar3, 0))
					{
						if (unk_0x317536BCEA8FA6B0(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_5(bool bParam0)//Position - 0xB18
{
	if (bParam0)
	{
		if (func_7())
		{
			return 1;
		}
	}
	if (func_6(14))
	{
		return 1;
	}
	return 0;
}

bool func_6(int iParam0)//Position - 0xB3E
{
	return Global_35861 == iParam0;
}

int func_7()//Position - 0xB4C
{
	if (Global_103500)
	{
		return 1;
	}
	if (!func_6(14) && unk_0x8F38E94BBF3404CD(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_8()//Position - 0xB7E
{
	Global_17162.f_6 = 1;
}

int func_9(var uParam0)//Position - 0xB8C
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = unk_0xFC1458A37D98B502();
	if (uParam0->f_15 == 360f)
	{
		return 1;
	}
	if (func_11(uParam0->f_12))
	{
		return 1;
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iVar1 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (func_69(iVar1))
		{
			vVar0 = { unk_0xDB824D597B53CC40(iVar1, 2) };
			if (vVar0.y > 45f || vVar0.y < -45f)
			{
				return 0;
			}
			iVar2 = iVar1;
		}
	}
	vVar0 = { unk_0xCE3B2111021F7234(iVar2) };
	if (func_10(uParam0->f_12, vVar0) > system::cos(uParam0->f_15))
	{
		return 1;
	}
	return 0;
}

float func_10(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0xC35
{
	return ((Param0 * Param2) + (Param0.f_1 * Param2.f_1));
}

int func_11(vector3 vParam0)//Position - 0xC4C
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_12()//Position - 0xC76
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		return unk_0x3B9B1F02BCD69306(iVar0, 90f);
	}
	return unk_0x3B9B1F02BCD69306(unk_0xFC1458A37D98B502(), 90f);
}

int func_13(var uParam0, char* sParam1, int iParam2)//Position - 0xCB0
{
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return 0;
	}
	if (func_15(uParam0) || !unk_0xF491DD47B88AA84E())
	{
		unk_0x3E80C2F7BC665259(1);
		func_14(sParam1, iParam2);
		uParam0->f_14 = sParam1;
		uParam0->f_15 = iParam2;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_14(char* sParam0, int iParam1)//Position - 0xCFC
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x6223D539BCD39E76(iParam1);
	unk_0x376CFA11DE0FE521(0, 1, true, -1);
}

int func_15(var uParam0)//Position - 0xD18
{
	if (unk_0xAB019B170BF1309C(uParam0->f_14))
	{
		return 0;
	}
	if (!unk_0xF491DD47B88AA84E())
	{
		return 0;
	}
	if (unk_0x74C475EB8E73D398(*uParam0, uParam0->f_14) || unk_0x74C475EB8E73D398(uParam0->f_2, uParam0->f_14))
	{
		return func_17(uParam0->f_14, uParam0->f_15);
	}
	return func_16(uParam0->f_14);
}

int func_16(char* sParam0)//Position - 0xD72
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

int func_17(char* sParam0, int iParam1)//Position - 0xD85
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	unk_0x6223D539BCD39E76(iParam1);
	return unk_0x0683D2027E169355(0);
}

bool func_18(var uParam0)//Position - 0xD9E
{
	struct<8> Var0;
	
	Var0 = 2;
	if (uParam0->f_6 == 0)
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			return 1;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			return 1;
		}
		if (func_4(unk_0xFC1458A37D98B502(), 0) != -1)
		{
			return 1;
		}
	}
	if (uParam0->f_11 == 0)
	{
		return !func_21(unk_0xFC1458A37D98B502(), uParam0->f_1, (uParam0->f_10 + 2f));
	}
	Var0 = { func_19(uParam0->f_16, 2f) };
	return !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, 0, true, 0);
}

struct<8> func_19(struct<8> Param0, float fParam1)//Position - 0xE41
{
	struct<8> Var0;
	vector3 vVar1;
	
	Var0 = 2;
	vVar1 = { func_20(Param0[1 /*3*/] - Param0[0 /*3*/]) * Vector(fParam1, fParam1, fParam1) };
	Var0[0 /*3*/] = { Param0[0 /*3*/] - vVar1 };
	Var0[1 /*3*/] = { Param0[1 /*3*/] + vVar1 };
	Var0.f_7 = (Param0.f_7 + (fParam1 * 2f));
	return Var0;
}

Vector3 func_20(vector3 vParam0)//Position - 0xEA3
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

bool func_21(int iParam0, vector3 vParam1, float fParam2)//Position - 0xEE2
{
	return system::vdist2(unk_0xB3328BA8976B416C(iParam0, 1), vParam1) <= (fParam2 * fParam2);
}

int func_22(var uParam0, char* sParam1)//Position - 0xEFF
{
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return 0;
	}
	if (func_15(uParam0) || !unk_0xF491DD47B88AA84E())
	{
		unk_0x3E80C2F7BC665259(1);
		func_23(sParam1);
		uParam0->f_14 = sParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_23(char* sParam0)//Position - 0xF48
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 1, true, -1);
}

void func_24(var uParam0)//Position - 0xF5E
{
	if (func_15(uParam0))
	{
		unk_0x3E80C2F7BC665259(1);
	}
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	if (uParam0->f_9 == 1)
	{
		uParam0->f_9 = 0;
	}
}

bool func_25()//Position - 0xF8B
{
	int iVar0;
	
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		return 0;
	}
	iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
	if (unk_0x6B4C37F2EEC636CC(iVar0))
	{
		return 1;
	}
	if (func_29(iVar0))
	{
		return 1;
	}
	if (func_26(iVar0, 3))
	{
		return 1;
	}
	return !unk_0xB8DE76287EDC4957(iVar0, 0);
}

int func_26(int iParam0, int iParam1)//Position - 0xFDF
{
	int iVar0;
	
	if (func_27(iParam0))
	{
		iVar0 = 0;
		if (unk_0x36CA14E4AEA7AA81(iParam0, 0, 0) && unk_0x36CA14E4AEA7AA81(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x36CA14E4AEA7AA81(iParam0, 4, 0) && unk_0x36CA14E4AEA7AA81(iParam0, 5, 0))
		{
			return 1;
		}
		if (unk_0x36CA14E4AEA7AA81(iParam0, 0, 0))
		{
			iVar0++;
		}
		if (unk_0x36CA14E4AEA7AA81(iParam0, 1, 0))
		{
			iVar0++;
		}
		if (unk_0x36CA14E4AEA7AA81(iParam0, 4, 0))
		{
			iVar0++;
		}
		if (unk_0x36CA14E4AEA7AA81(iParam0, 5, 0))
		{
			iVar0++;
		}
		if (iVar0 >= iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)//Position - 0x107B
{
	if (func_28(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (!unk_0x6B4C37F2EEC636CC(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_28(int iParam0)//Position - 0x10A5
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

int func_29(int iParam0)//Position - 0x10C6
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (!unk_0x6B4C37F2EEC636CC(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_30()//Position - 0x1109
{
	if (unk_0x3A711520F83BAE98())
	{
		return func_37(unk_0x9EB17624F44A8DA4());
	}
	switch (func_32())
	{
		case 2:
			return func_31(2);
		
		case 0:
			return func_31(0);
		
		case 1:
			return func_31(1);
		
		default:
	}
	return 0;
}

var func_31(int iParam0)//Position - 0x1157
{
	return Global_53077[iParam0];
}

int func_32()//Position - 0x1166
{
	func_33();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_33()//Position - 0x117F
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_36(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_35(unk_0xFC1458A37D98B502());
			if (func_34(iVar0) && (!func_6(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_34(Global_104555.f_2353.f_539.f_4301))
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

bool func_34(int iParam0)//Position - 0x127C
{
	return iParam0 < 3;
}

int func_35(int iParam0)//Position - 0x1288
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)//Position - 0x12C5
{
	if (func_34(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_37(int iParam0)//Position - 0x12EF
{
	var uVar0;
	
	uVar0 = func_38(iParam0);
	return uVar0;
}

int func_38(int iParam0)//Position - 0x1301
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x9EB17624F44A8DA4())
		{
			return unk_0x3C5A2E3D125A1FB1(-1);
		}
		else if (func_39(iParam0))
		{
			return Global_1595693[iParam0 /*680*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_39(int iParam0)//Position - 0x1344
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_2436181.f_1, iParam0);
	}
	return 1;
}

void func_40(var uParam0, int iParam1)//Position - 0x1369
{
	uParam0->f_13 = iParam1;
	func_24(uParam0);
}

bool func_41(var uParam0)//Position - 0x137D
{
	func_69(unk_0xFC1458A37D98B502());
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (func_43(0))
	{
		return 0;
	}
	if (func_42())
	{
		return 0;
	}
	if (uParam0->f_6 == 0)
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			return 0;
		}
		if (func_4(unk_0xFC1458A37D98B502(), 0) != -1)
		{
			return 0;
		}
	}
	if (uParam0->f_11 == 1)
	{
		return unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, 0, true, 0);
	}
	return func_21(unk_0xFC1458A37D98B502(), uParam0->f_1, uParam0->f_10);
}

bool func_42()//Position - 0x1435
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

bool func_43(bool bParam0)//Position - 0x144A
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

int func_44(int iParam0)//Position - 0x1473
{
	if (iParam0 == 0)
	{
		if (func_50())
		{
			return 0;
		}
	}
	if (unk_0x0F30C1F1717A6437())
	{
		return 0;
	}
	if (unk_0x04D7390E1D7464B7())
	{
		return 0;
	}
	if (func_42())
	{
		return 0;
	}
	if (Global_55897)
	{
		return 0;
	}
	if (func_43(0))
	{
		return 0;
	}
	if (func_49(0))
	{
		return 0;
	}
	if (func_45(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0)//Position - 0x14DF
{
	if (func_48(iParam0))
	{
		return 1;
	}
	if (func_46(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_46(int iParam0)//Position - 0x1502
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_47(iParam0, 9);
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)//Position - 0x1520
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_4, iParam1);
}

int func_48(var uParam0)//Position - 0x153B
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 0);
	}
	return 0;
}

int func_49(int iParam0)//Position - 0x1561
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

int func_50()//Position - 0x15BB
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	return 1;
}

void func_51(var uParam0)//Position - 0x15D0
{
	if (uParam0->f_11 == 1)
	{
		func_53(&(uParam0->f_16), 255, 100, 0, 100);
	}
	else
	{
		func_52(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}

void func_52(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1605
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	fVar1 = (360f / system::to_float(iParam6));
	vVar2 = { vParam0 };
	vVar3 = { vParam0 };
	fVar4 = 0f;
	vVar2 = { vParam0 };
	vVar2.x = (vVar2.x + (system::sin((fVar4 - fVar1)) * fParam1));
	vVar2.y = (vVar2.y + (system::cos((fVar4 - fVar1)) * fParam1));
	iVar0 = 0;
	while (iVar0 <= iParam6)
	{
		vVar3 = { vParam0 };
		vVar3.x = (vVar3.x + (system::sin(fVar4) * fParam1));
		vVar3.y = (vVar3.y + (system::cos(fVar4) * fParam1));
		unk_0xCABB2FDE746B45D3(vVar2, vVar3, iParam2, iParam3, iParam4, iParam5);
		vVar2 = { vVar3 };
		fVar4 = (fVar4 + fVar1);
		iVar0++;
	}
}

void func_53(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x16BA
{
	func_54(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_54(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x16E0
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5[8];
	int iVar6;
	
	if (fParam2 == 0f)
	{
		return;
	}
	vVar0 = { func_20(vParam1 - vParam0) };
	vVar1 = { func_55(vVar0, 0f, 0f, 1f) };
	fVar2 = (fParam2 / 2f);
	vVar3 = { vParam0 };
	vVar4 = { vParam1 };
	vVar4.z = vParam0.z;
	vVar5[0 /*3*/] = { vVar3 - vVar1 * Vector(fVar2, fVar2, fVar2) };
	vVar5[1 /*3*/] = { vVar3 + vVar1 * Vector(fVar2, fVar2, fVar2) };
	vVar5[2 /*3*/] = { vVar4 + vVar1 * Vector(fVar2, fVar2, fVar2) };
	vVar5[3 /*3*/] = { vVar4 - vVar1 * Vector(fVar2, fVar2, fVar2) };
	unk_0xCABB2FDE746B45D3(vVar5[0 /*3*/], vVar5[1 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0xCABB2FDE746B45D3(vVar5[1 /*3*/], vVar5[2 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0xCABB2FDE746B45D3(vVar5[2 /*3*/], vVar5[3 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0xCABB2FDE746B45D3(vVar5[3 /*3*/], vVar5[0 /*3*/], iParam3, iParam4, iParam5, iParam6);
	iVar6 = 0;
	while (iVar6 <= 3)
	{
		vVar5[(4 + iVar6) /*3*/] = { vVar5[iVar6 /*3*/] };
		vVar5[(4 + iVar6) /*3*/].f_2 = vParam1.z;
		iVar6++;
	}
	unk_0xCABB2FDE746B45D3(vVar5[4 /*3*/], vVar5[5 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0xCABB2FDE746B45D3(vVar5[5 /*3*/], vVar5[6 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0xCABB2FDE746B45D3(vVar5[6 /*3*/], vVar5[7 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0xCABB2FDE746B45D3(vVar5[7 /*3*/], vVar5[4 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0xCABB2FDE746B45D3(vVar5[0 /*3*/], vVar5[4 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0xCABB2FDE746B45D3(vVar5[1 /*3*/], vVar5[5 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0xCABB2FDE746B45D3(vVar5[2 /*3*/], vVar5[6 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0xCABB2FDE746B45D3(vVar5[3 /*3*/], vVar5[7 /*3*/], iParam3, iParam4, iParam5, iParam6);
}

Vector3 func_55(vector3 vParam0, vector3 vParam1)//Position - 0x18F0
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

void func_56(int iParam0)//Position - 0x1929
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (!func_41(&(Local_40[iParam0 /*24*/])))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_61[iParam0] = 0;
		return;
	}
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_61[iParam0] = 0;
		return;
	}
	if (iLocal_61[iParam0] == 0)
	{
		if (unk_0x53C562FD2B9E3AB0() > uLocal_60[iParam0])
		{
			iLocal_61[iParam0] = unk_0x46B117663893ED70(vLocal_59[iParam0 /*3*/], vLocal_59[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2, unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 4);
		}
	}
	else
	{
		iVar0 = unk_0x16ACABF450EB00B4(iLocal_61[iParam0], &iVar4, &uVar2, &uVar3, &iVar1);
		if (iVar0 == 2)
		{
			Local_40[iParam0 /*24*/].f_8 = 0;
			if (iVar4 > 0)
			{
				if (unk_0x6ADD12BF4D6D2587(iVar1))
				{
					if (unk_0x8A3FF8E81B40BB75(iVar1))
					{
						Local_40[iParam0 /*24*/].f_8 = 1;
					}
				}
			}
			iLocal_61[iParam0] = 0;
		}
		if (iVar0 == 0)
		{
			iLocal_61[iParam0] = 0;
		}
		uLocal_60[iParam0] = unk_0x53C562FD2B9E3AB0() + 250;
	}
}

void func_57(bool bParam0)//Position - 0x1A1A
{
	if (bParam0)
	{
	}
}

int func_58(int iParam0)//Position - 0x1A27
{
	if (!unk_0xC1514CFCEC68CA4A(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		return 1;
	}
	if (unk_0x178CF89BBA808451(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x178CF89BBA808451(iParam0, 1))
	{
		return 1;
	}
	if (unk_0x178CF89BBA808451(iParam0, 2))
	{
		return 1;
	}
	if (unk_0x178CF89BBA808451(iParam0, 3))
	{
		return 1;
	}
	if (unk_0x965BEFCC45024E92(iParam0, 1))
	{
		if (unk_0xBFAC036AADDA5F9F(iParam0) == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0)//Position - 0x1A92
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!func_28(iParam0))
	{
		return 0;
	}
	if (!unk_0x003430E96281C9D9(iParam0))
	{
		return 1;
	}
	if (unk_0xC9CE174229996043(iParam0))
	{
		return 1;
	}
	if (!unk_0xC1514CFCEC68CA4A(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		return 1;
	}
	if (unk_0x6B4C37F2EEC636CC(iParam0))
	{
		return 1;
	}
	if (func_60(iParam0))
	{
		return 1;
	}
	unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iParam0), &vVar0, &vVar1);
	if (unk_0xE97272C977DEADD3((vVar1.x - vVar0.x)) > 3,4f)
	{
		return 1;
	}
	if (unk_0xE97272C977DEADD3((vVar1.z - vVar0.z)) > 2,9f)
	{
		return 1;
	}
	if (Global_70856)
	{
		if (!unk_0xA0BF73C5030D3F60(iParam0))
		{
			return 0;
		}
	}
	if (unk_0x965BEFCC45024E92(iParam0, 1) && !unk_0x003430E96281C9D9(iParam0))
	{
		return 1;
	}
	if (!unk_0x965BEFCC45024E92(iParam0, 1) && !unk_0x003430E96281C9D9(iParam0))
	{
		return 1;
	}
	if (unk_0x82FF3DFBC3965CC0(iParam0) == joaat("btype") || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("btype3"))
	{
		if (((((func_28(unk_0x317536BCEA8FA6B0(iParam0, 3, 0)) || func_28(unk_0x317536BCEA8FA6B0(iParam0, 4, 0))) || func_28(unk_0x317536BCEA8FA6B0(iParam0, 5, 0))) || func_28(unk_0x317536BCEA8FA6B0(iParam0, 6, 0))) || func_28(unk_0x317536BCEA8FA6B0(iParam0, 7, 0))) || func_28(unk_0x317536BCEA8FA6B0(iParam0, 8, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x1C07
{
	int iVar0;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	if (func_61(iVar0))
	{
		return 1;
	}
	if (iVar0 == joaat("regina"))
	{
		if (unk_0x7C7056D6F2A31BF6(iParam0, 2))
		{
			return 1;
		}
		if (unk_0x7C7056D6F2A31BF6(iParam0, 3) && unk_0x7C7056D6F2A31BF6(iParam0, 4))
		{
			return 1;
		}
	}
	if (iVar0 == joaat("banshee") && unk_0x7C7056D6F2A31BF6(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("peyote") && unk_0x7C7056D6F2A31BF6(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("coquette") && !unk_0x003430E96281C9D9(iParam0))
	{
		return 1;
	}
	if (iVar0 == joaat("manana") && unk_0x7C7056D6F2A31BF6(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("mesa") && !unk_0x7C7056D6F2A31BF6(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("voltic") && unk_0x7C7056D6F2A31BF6(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("bobcatxl") && !unk_0x7C7056D6F2A31BF6(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("ruiner"))
	{
		if (unk_0x7C7056D6F2A31BF6(iParam0, 3) && !unk_0x7C7056D6F2A31BF6(iParam0, 7))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_61(int iParam0)//Position - 0x1D3F
{
	if (!unk_0xC1514CFCEC68CA4A(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("ambulance"):
		case joaat("armytrailer"):
		case joaat("airtug"):
		case joaat("bifta"):
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("bodhi2"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("bulldozer"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dubsta3"):
		case joaat("dump"):
		case joaat("dune"):
		case joaat("dloader"):
		case joaat("forklift"):
		case joaat("guardian"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kalahari"):
		case joaat("mesa3"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("ratloader"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("ripley"):
		case joaat("riot"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("scrap"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("technical"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tornado4"):
		case joaat("tourbus"):
		case joaat("limo2"):
		case joaat("raptor"):
		case joaat("ratloader2"):
		case 1897744184:
		case joaat("dune4"):
		case joaat("dune5"):
		case -1242608589:
		case 1483171323:
		case 1254014755:
			return 1;
		
		default:
	}
	return 0;
}

float func_62(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x1EBD
{
	vector3 vVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	}
	return unk_0xBE3C4023003180FC(vVar0, vParam1, bParam2);
}

void func_63()//Position - 0x1EF7
{
	func_67(&(Local_40[0 /*24*/]), 1, "Carwash1", func_68(156), 15, "", 0, 4f);
	func_67(&(Local_40[1 /*24*/]), 1, "Carwash2", func_68(157), 15, "", 0, 4f);
	func_65(&(Local_40[0 /*24*/]), -1f, 0f, 0f, 360f);
	func_65(&(Local_40[1 /*24*/]), 0f, -1f, 0f, 360f);
	func_64(&uLocal_41, 0);
	vLocal_59[0 /*3*/] = { 47,6f, -1392f, 29,4f };
	vLocal_59[1 /*3*/] = { -700f, -925,3f, 19f };
}

void func_64(var uParam0, int iParam1)//Position - 0x1F85
{
	*uParam0 = "CWASH_RIDEHLP";
	uParam0->f_1 = "";
	uParam0->f_3 = "CWASH_NOWAY";
	uParam0->f_4 = "CWASH_WANTED";
	uParam0->f_5 = "CWASH_CARBROKE";
	uParam0->f_6 = "CWASH_BLOCKED";
	uParam0->f_7 = "CWASH_WRONGWAY";
	uParam0->f_8 = "CWASH_UPSIDEDO";
	uParam0->f_16 = iParam1;
	if (!Global_70856)
	{
		uParam0->f_2 = "CWASH_NOMONEY";
		return;
	}
	if (unk_0x8A81E55A71641BC1() || unk_0xFD6215BABFD843F2())
	{
		uParam0->f_2 = "CWASH_POOR_PSN";
	}
	else if (unk_0x04E8D1E1170F25E1() || unk_0x177281F5FA205A38())
	{
		uParam0->f_2 = "CWASH_POOR_XBX";
	}
	else
	{
		uParam0->f_2 = "CWASH_POOR_STD";
	}
}

void func_65(var uParam0, vector3 vParam1, float fParam2)//Position - 0x2019
{
	uParam0->f_12 = { func_20(vParam1 * Vector(5f, 5f, 5f)) };
	uParam0->f_15 = func_66(fParam2, 0f, 360f);
}

float func_66(float fParam0, float fParam1, float fParam2)//Position - 0x2042
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_67(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam4, char* sParam5, int iParam6, float fParam7)//Position - 0x2069
{
	uParam0->f_5 = sParam2;
	uParam0->f_1 = { vParam3 };
	uParam0->f_4 = sParam5;
	uParam0->f_9 = iParam4;
	uParam0->f_7 = iParam6;
	uParam0->f_6 = iParam1;
	uParam0->f_11 = 0;
	*uParam0 = 1;
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 360f;
	if (iParam1 == 0)
	{
		uParam0->f_10 = 2,75f;
	}
	else
	{
		uParam0->f_10 = (2,75f * 2f);
	}
	if (fParam7 > 0f)
	{
		uParam0->f_10 = fParam7;
	}
}

Vector3 func_68(int iParam0)//Position - 0x20DE
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_25578[iVar0 /*23*/][0 /*3*/];
}

bool func_69(int iParam0)//Position - 0x20F6
{
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	return !unk_0x191BE1BC8F26F3C1(iParam0, 0);
}

void func_70()//Position - 0x2114
{
	func_71(&Local_40);
	func_24(&uLocal_41);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_71(var uParam0)//Position - 0x212C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_72(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
}

void func_72(var uParam0)//Position - 0x2155
{
	*uParam0 = 0;
}

