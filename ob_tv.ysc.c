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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	vector3 vLocal_31 = { 0f, 0f, 0f };
	float fLocal_32 = 0f;
	int iLocal_33 = 0;
	bool bLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	char cLocal_44[64] = "";
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	char cLocal_53[64] = "";
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	vector3 vLocal_64 = { 0f, 0f, 0f };
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	vector3 vLocal_68 = { 0f, 0f, 0f };
	int iLocal_69 = 0;
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
	iLocal_21 = 3;
	iLocal_25 = 1;
	iLocal_33 = -1;
	iLocal_40 = -1;
	iLocal_41 = -1;
	iLocal_42 = -1;
	StringCopy(&cLocal_44, "NULL", 64);
	StringCopy(&cLocal_53, "NULL", 64);
	if (unk_0x7D9C4B359376D38A(2))
	{
		func_66();
	}
	if (unk_0x6ADD12BF4D6D2587(iScriptParam_69))
	{
		iLocal_35 = iScriptParam_69;
		iLocal_38 = iScriptParam_69;
	}
	while (true)
	{
		system::wait(0);
		func_65();
		if (unk_0x6ADD12BF4D6D2587(iScriptParam_69))
		{
			if ((iLocal_41 != -1 && (func_64() && !func_63())) && !func_62(iLocal_41))
			{
				func_66();
			}
			if ((unk_0x1E06D00B67177A18() && unk_0x950AEA4C7FFF9EA4() != 3) && unk_0x70522E2561AD22FE() == 3)
			{
				func_66();
			}
			if (func_61(13) || func_61(14))
			{
				func_66();
			}
			if (unk_0xEE6BA6C2ABB48CC3(iScriptParam_69))
			{
				func_66();
			}
			if (unk_0xC8F310BD22DD910A(iScriptParam_69))
			{
				if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
				{
					func_60();
					if (unk_0xDE523AF6F7B269AB(iScriptParam_69) < 950)
					{
						func_66();
					}
					switch (iLocal_29)
					{
						case 0:
							func_57();
							if (iLocal_41 == 5)
							{
								if (func_56(18) == 1 && func_56(20) == 0)
								{
									uLocal_39 = unk_0x0B4BABF632AE674E(-809,962f, 170,919f, 75,7407f, 3f, "des_tvsmash");
									if (unk_0xCA61C7E425DAB6B3(uLocal_39))
									{
										unk_0xD0C906ABF8DD7B95(uLocal_39, 9);
									}
									unk_0x96A3D9A8A4C7AFD4();
								}
							}
							if (iLocal_41 == -1)
							{
								func_66();
							}
							else
							{
								func_55();
								unk_0x0DA95A6376F4B030("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								unk_0xA3A57BA8F775CAFF(0);
								Global_25293[iLocal_41 /*11*/].f_2 = 0;
								Global_25293[iLocal_41 /*11*/].f_6 = 1;
								Global_25293[iLocal_41 /*11*/] = unk_0x63A6486593EC7EC3(0, 2);
								Global_25293[iLocal_41 /*11*/].f_1 = 0;
								Global_25293[iLocal_41 /*11*/].f_4 = 0;
								Global_25293[iLocal_41 /*11*/].f_7 = 0;
								Global_25293[iLocal_41 /*11*/].f_8 = 0;
								Global_25293[iLocal_41 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_53(&iLocal_26);
								func_51();
								func_50();
								system::wait(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
							{
								system::wait(0);
							}
							else if (unk_0xA73DEC876598C594(iLocal_35) && unk_0x3B9B1F02BCD69306(iLocal_35, 90f))
							{
								if (func_42() || Global_25293[iLocal_41 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								func_41(&iLocal_40);
							}
							break;
						
						case 2:
							func_51();
							if (!func_62(iLocal_41))
							{
								func_41(&iLocal_40);
								if (func_40("TV_HLP1"))
								{
									unk_0x3E80C2F7BC665259(1);
								}
							}
							if (unk_0x6ADD12BF4D6D2587(iLocal_35))
							{
								if (!unk_0xDE3C98B57A41E603(iLocal_35))
								{
									unk_0xB3A8974D2C811672(iLocal_35, true, 0);
								}
							}
							if (unk_0x6ADD12BF4D6D2587(iLocal_37))
							{
								if (!unk_0xDE3C98B57A41E603(iLocal_37))
								{
									unk_0xB3A8974D2C811672(iLocal_37, true, 0);
								}
							}
							if (unk_0x6ADD12BF4D6D2587(iLocal_36))
							{
								if (unk_0xDE3C98B57A41E603(iLocal_36))
								{
									unk_0xB3A8974D2C811672(iLocal_36, false, 0);
								}
							}
							if (!unk_0x74C475EB8E73D398(&cLocal_44, "NULL"))
							{
								unk_0xD4BB744A696E8ABF(&cLocal_44, false);
							}
							unk_0xF90C46813ACB09D0(0);
							system::wait(0);
							if (unk_0x6ADD12BF4D6D2587(iLocal_38))
							{
								unk_0xCFE5D4549A07AAF6(iLocal_38);
							}
							if (!func_62(iLocal_41))
							{
								if ((Global_25293[iLocal_41 /*11*/] == 3 || Global_25293[iLocal_41 /*11*/] == 2) || Global_25293[iLocal_41 /*11*/] == -1)
								{
									Global_25293[iLocal_41 /*11*/] = unk_0x63A6486593EC7EC3(0, 2);
								}
								unk_0xF34343DA0C0FCB16(Global_25293[iLocal_41 /*11*/]);
								unk_0x0C9F5FCE45A93B6E(fLocal_30);
							}
							else
							{
								iLocal_42 = Global_25293[iLocal_41 /*11*/];
								iLocal_43 = Global_25293[iLocal_41 /*11*/].f_1;
								unk_0x914DEB324EC111CB(iLocal_42, func_39(iLocal_43), Global_25293[iLocal_41 /*11*/].f_9);
								unk_0xF34343DA0C0FCB16(iLocal_42);
								if (Global_25293[iLocal_41 /*11*/].f_7)
								{
									Global_25293[iLocal_41 /*11*/].f_5 = 0;
									Global_25293[iLocal_41 /*11*/].f_7 = 0;
								}
							}
							Global_25293[iLocal_41 /*11*/].f_2 = 1;
							func_38(133, 1);
							func_38(131, 1);
							func_38(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_25293[iLocal_41 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_25293[iLocal_41 /*11*/].f_7 && func_62(iLocal_41))
							{
								Global_25293[iLocal_41 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_36(iLocal_41))
							{
								func_35();
								iLocal_29 = 5;
							}
							else
							{
								func_33();
								if (unk_0x01679AA6AF3AE4FC() == -1)
								{
									unk_0xF34343DA0C0FCB16(Global_25293[iLocal_41 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 6;
								}
							}
							break;
						
						case 5:
							if (func_36(iLocal_41))
							{
								iLocal_29 = 2;
							}
							if (Global_25293[iLocal_41 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_40 != -1)
							{
								func_41(&iLocal_40);
							}
							Global_25293[iLocal_41 /*11*/].f_5 = 0;
							Global_25293[iLocal_41 /*11*/].f_4 = 0;
							Global_25293[iLocal_41 /*11*/].f_1 = 0;
							Global_25293[iLocal_41 /*11*/].f_2 = 0;
							Global_25293[iLocal_41 /*11*/].f_7 = 0;
							Global_25293[iLocal_41 /*11*/].f_8 = 0;
							Global_25293[iLocal_41 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_66();
			unk_0x96A3D9A8A4C7AFD4();
		}
	}
	func_66();
	unk_0x96A3D9A8A4C7AFD4();
}

void func_1()//Position - 0x4E5
{
	if (iLocal_41 != -1)
	{
		Global_25293[iLocal_41 /*11*/] = unk_0x01679AA6AF3AE4FC();
	}
	fLocal_30 = unk_0x887497A6B0677BCC();
	unk_0xF34343DA0C0FCB16(-1);
	func_4();
	if (unk_0x8F38E94BBF3404CD(joaat("family5")) == 0)
	{
		if (!unk_0x74C475EB8E73D398(&cLocal_44, "NULL"))
		{
			unk_0xD4BB744A696E8ABF(&cLocal_44, true);
		}
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x3E80C2F7BC665259(1);
	}
	func_3();
	func_50();
	if (unk_0x6ADD12BF4D6D2587(iLocal_36))
	{
		if (!unk_0xDE3C98B57A41E603(iLocal_36))
		{
			unk_0xB3A8974D2C811672(iLocal_36, true, 0);
		}
	}
	unk_0x73B4BF8740FF03B4(0);
	func_2();
}

void func_2()//Position - 0x58F
{
	if (unk_0xB9D80B12FE4456A5())
	{
		if (iLocal_67 == 1)
		{
			unk_0xDFAC9ADC0F004412();
			iLocal_67 = 0;
		}
	}
}

void func_3()//Position - 0x5AB
{
	if (!iLocal_33 == -1)
	{
		unk_0x7913685BF7335C7B(iLocal_33);
		if (unk_0x6ADD12BF4D6D2587(iLocal_35))
		{
			if (unk_0x82FF3DFBC3965CC0(iLocal_35) == joaat("v_ilev_mm_screen2") || unk_0x82FF3DFBC3965CC0(iLocal_35) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0xB3A8974D2C811672(iLocal_35, false, 0);
				if (unk_0x82FF3DFBC3965CC0(iLocal_35) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0x09C2CBFA4CD804AC(0,5f, 0,5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0x09C2CBFA4CD804AC(0,5f, 0,5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_37))
	{
		unk_0xB3A8974D2C811672(iLocal_37, false, 0);
	}
}

void func_4()//Position - 0x642
{
	if (iLocal_65)
	{
		unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
		if (unk_0xD85097DDDA5447BE(iLocal_62))
		{
			unk_0x7849794435F39D49(iLocal_62, false);
		}
		unk_0x02934BABFD4CD384(iLocal_62, 0);
		unk_0xBB9A3C553EECB180(0f);
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), false);
			unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
			unk_0xBA54D3D84EF38E3D(unk_0xFC1458A37D98B502(), vLocal_31, 1, 0, 2);
			if (!unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
			{
				if (bLocal_34 == 1)
				{
					bLocal_34 = false;
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
				}
			}
			unk_0xB3A8974D2C811672(unk_0xFC1458A37D98B502(), true, 0);
		}
		if (!unk_0x74C475EB8E73D398(&cLocal_53, "NULL"))
		{
			if (unk_0x771D0F8F56A5FE6C(&cLocal_53))
			{
				unk_0xE02E32C69260FBB7(&cLocal_53);
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_37))
		{
			unk_0xB3A8974D2C811672(iLocal_37, true, 0);
		}
		func_5(0, 1, 0, 0);
		unk_0x73B4BF8740FF03B4(0);
		iLocal_65 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x70B
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_14(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_13())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_14(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_10(unk_0x9EB17624F44A8DA4())) && !func_7(unk_0x9EB17624F44A8DA4(), 0)) && !func_6())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_10(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_6()//Position - 0x824
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_7(int iParam0, int iParam1)//Position - 0x841
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_8(-1, 0) == 8;
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

int func_8(int iParam0, bool bParam1)//Position - 0x88C
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
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

int func_9()//Position - 0x8CD
{
	return Global_1312736;
}

int func_10(int iParam0)//Position - 0x8D9
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
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

bool func_11()//Position - 0x91B
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_12(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x92C
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0x1746AAD73B7DFC1B() != iParam0 && uParam2)
		{
			unk_0x035AB8AAB511237A(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_13()//Position - 0x95F
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)//Position - 0x986
{
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2323, 13);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 13);
	}
}

int func_15()//Position - 0x9A9
{
	if (!func_62(iLocal_41))
	{
		if (((((((func_29(&iLocal_26) >= 1f && unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_68, 1f, 1f, 1,5f, false, true, 0)) && unk_0x1ACD6691B9C9AA46(iLocal_35) == unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502())) && !func_28(8, -1)) && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && unk_0x151F9FFE4C5F866B(unk_0xFC1458A37D98B502(), vLocal_31, 90f)) && !unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) && !unk_0x1E06D00B67177A18())
		{
			if (iLocal_40 == -1)
			{
				func_27();
				func_26(&iLocal_40, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_24(iLocal_40, 1))
			{
				func_41(&iLocal_40);
				func_53(&iLocal_26);
				Global_25293[iLocal_41 /*11*/].f_7 = 0;
				if (unk_0x56A9DDE5521F38CB("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_40("TV_HLP5"))
			{
				unk_0x3E80C2F7BC665259(1);
			}
			func_2();
			func_41(&iLocal_40);
		}
	}
	return 0;
}

void func_16()//Position - 0xAB5
{
	if (iLocal_65 == 0)
	{
		unk_0x01B48CB2F72AE113(2, 222);
		if (unk_0xE8C126B7ADBB9D63(2, 222))
		{
			func_41(&iLocal_40);
			func_26(&iLocal_40, 3, "TV_HLP6", 0, 0, 0, 0);
			func_23();
		}
	}
	else
	{
		unk_0x4FB260623DD93924(2, 200, 1);
		if (unk_0xDE3C98B57A41E603(unk_0xFC1458A37D98B502()))
		{
			unk_0xB3A8974D2C811672(unk_0xFC1458A37D98B502(), false, 0);
		}
		if (bLocal_34)
		{
			if (unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
			}
		}
		unk_0x36853D5037847BF3();
		unk_0xF06CE2248BE8B8D8(unk_0xFC1458A37D98B502());
		func_21(1, 1);
		unk_0x01B48CB2F72AE113(2, 222);
		func_17(0);
		if (unk_0xE8C126B7ADBB9D63(2, 222) || (unk_0x4C4813CAAD70E814(2) && unk_0x3D96C1C362D3E31D(2, 200)))
		{
			func_41(&iLocal_40);
			func_4();
		}
	}
}

void func_17(int iParam0)//Position - 0xB6F
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_20(0))
		{
			func_18(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

void func_18(int iParam0)//Position - 0xB98
{
	if (Global_14615)
	{
		func_19(0, 0);
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
	if (!func_13())
	{
		Global_14453.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)//Position - 0xC08
{
	if (bParam0)
	{
		if (func_20(0))
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

int func_20(int iParam0)//Position - 0xC7C
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

void func_21(bool bParam0, bool bParam1)//Position - 0xCD6
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_22(0))
		{
			if (!iLocal_22)
			{
				if (unk_0x56A9DDE5521F38CB("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, true);
				}
				if (unk_0x01679AA6AF3AE4FC() == 0)
				{
					unk_0xF34343DA0C0FCB16(1);
				}
				else
				{
					unk_0xF34343DA0C0FCB16(0);
				}
				iLocal_22 = 1;
			}
		}
		else if (iLocal_22)
		{
			iLocal_22 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (unk_0x9473DAD46D61B987(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x887497A6B0677BCC();
				fVar2 = (fVar2 - 0,5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0x0C9F5FCE45A93B6E(fVar2);
				iLocal_24 = unk_0x53C562FD2B9E3AB0();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x887497A6B0677BCC();
				fVar2 = (fVar2 + 0,5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0x0C9F5FCE45A93B6E(fVar2);
				iLocal_24 = unk_0x53C562FD2B9E3AB0();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (unk_0x56A9DDE5521F38CB("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0x4AFBCBFDE748D4E0(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, true);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || unk_0x53C562FD2B9E3AB0() > iLocal_24 + 24)
			{
				iLocal_23 = 0;
			}
		}
	}
}

int func_22(int iParam0)//Position - 0xE1D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (unk_0x9473DAD46D61B987(2, 218) - 127);
	if (iParam0 || system::timera() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			system::settimera(0);
			return 1;
		}
	}
	return 0;
}

void func_23()//Position - 0xE69
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_65 == 0)
	{
		iLocal_62 = unk_0xC84BA58897A54045("DEFAULT_SCRIPTED_CAMERA", vLocal_63, vLocal_64, fVar0, 0, 2);
		unk_0xFB661BD3E2CB0A49(iLocal_62, 100f);
		unk_0x7849794435F39D49(iLocal_62, true);
		unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
		if (unk_0x6ADD12BF4D6D2587(iLocal_37))
		{
			unk_0xB3A8974D2C811672(iLocal_37, false, 0);
		}
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), true);
			unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
			if (unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
				bLocal_34 = true;
			}
			unk_0xBA54D3D84EF38E3D(unk_0xFC1458A37D98B502(), vLocal_31, -1, 0, 2);
			unk_0xB3A8974D2C811672(unk_0xFC1458A37D98B502(), false, 0);
		}
		if (!unk_0x74C475EB8E73D398(&cLocal_53, "NULL"))
		{
			if (!unk_0x771D0F8F56A5FE6C(&cLocal_53))
			{
				unk_0xE859EF37EA7362D3(&cLocal_53);
			}
		}
		func_5(1, 1, 0, 0);
		unk_0x73B4BF8740FF03B4(1);
		iLocal_65 = 1;
	}
}

int func_24(int iParam0, bool bParam1)//Position - 0xF3D
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5BEF7A5AB8F17255(unk_0x98EC0789D9F0703B()))
	{
		return 0;
	}
	if (func_20(0))
	{
		return 0;
	}
	if (unk_0xA8113D347D14630F())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/] == 1 && Global_36565[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36565[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36565[iVar0 /*32*/].f_5 = 1;
			Global_36565[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36565[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36565[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_25(int iParam0)//Position - 0xFF5
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

void func_26(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x1030
{
	int iVar0;
	
	if (unk_0x8F38E94BBF3404CD(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x1E06D00B67177A18())
	{
		if (!*iParam0 == -1)
		{
			func_41(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
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
			*iParam0 = Global_36565[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_27()//Position - 0x115B
{
	if (unk_0xB9D80B12FE4456A5())
	{
		if (iLocal_67 == 0)
		{
			unk_0x1338C63C6C9CC948("TV_Controls");
			iLocal_67 = 1;
		}
	}
}

bool func_28(int iParam0, int iParam1)//Position - 0x117B
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357530.f_203[iParam1];
			}
			break;
	}
	return unk_0xC80D31E4B587871C(Global_1357530.f_1048, iParam0);
}

float func_29(int iParam0)//Position - 0x11B6
{
	if (func_32(iParam0))
	{
		if (func_31(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_30(unk_0xC80D31E4B587871C(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_30(bool bParam0)//Position - 0x11F5
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = system::to_float(unk_0x53C562FD2B9E3AB0());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x3A711520F83BAE98())
	{
		iVar2 = unk_0xD1952A425B78FFC0();
		fVar3 = system::to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (system::to_float(unk_0x53C562FD2B9E3AB0()) / 1000f);
}

bool func_31(var uParam0)//Position - 0x124D
{
	return unk_0xC80D31E4B587871C(*uParam0, 2);
}

bool func_32(var uParam0)//Position - 0x125D
{
	return unk_0xC80D31E4B587871C(*uParam0, 1);
}

void func_33()//Position - 0x126D
{
	float fVar0;
	
	fVar0 = 1f;
	func_34(&fVar0);
	unk_0x7913685BF7335C7B(iLocal_33);
	unk_0x5A66A86A47AC3B57(4);
	unk_0xAE8C92295C8F2D18(1);
	unk_0x4622CC617F190489(0,5f, 0,5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0x7913685BF7335C7B(unk_0x01AB8D4D92922004());
}

void func_34(float fParam0)//Position - 0x12AE
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xB6936205ED728A9D(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_35()//Position - 0x12EB
{
	Global_25293[iLocal_41 /*11*/].f_7 = 0;
	Global_25293[iLocal_41 /*11*/] = unk_0x01679AA6AF3AE4FC();
	fLocal_30 = unk_0x887497A6B0677BCC();
	if (unk_0x771D0F8F56A5FE6C(&cLocal_53))
	{
		unk_0xE02E32C69260FBB7(&cLocal_53);
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x3E80C2F7BC665259(1);
	}
	func_41(&iLocal_40);
	unk_0xF34343DA0C0FCB16(-1);
	system::wait(0);
	func_3();
	func_50();
}

int func_36(int iParam0)//Position - 0x136B
{
	vector3 vVar0;
	
	vVar0 = { func_37(unk_0x9EB17624F44A8DA4()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
			break;
		
		case 4:
			if (vVar0.z < 74f)
			{
				return 1;
			}
			break;
		
		case 5:
			if (vVar0.z > 75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_37(int iParam0)//Position - 0x13E0
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

void func_38(int iParam0, int iParam1)//Position - 0x13F3
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51645[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x3A711520F83BAE98())
	{
		return;
	}
	if (Global_51645[iParam0 /*7*/])
	{
		unk_0xFA3CE529DBB66C85(Global_51645[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xBFFF62F75445099D(Global_51645[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

char* func_39(int iParam0)//Position - 0x1450
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

int func_40(char* sParam0)//Position - 0x152F
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_41(int iParam0)//Position - 0x1542
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_25(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/])
		{
			Global_36565[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_42()//Position - 0x1599
{
	if (func_29(&iLocal_26) < 1f)
	{
		func_41(&iLocal_40);
		return 0;
	}
	if ((!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_68, 1f, 1f, 1,5f, false, true, 0) || !unk_0x151F9FFE4C5F866B(unk_0xFC1458A37D98B502(), vLocal_31, 90f)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
	{
		func_41(&iLocal_40);
		return 0;
	}
	if (unk_0x1ACD6691B9C9AA46(iLocal_35) != unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()))
	{
		func_41(&iLocal_40);
		return 0;
	}
	if (func_28(8, -1))
	{
		func_41(&iLocal_40);
		return 0;
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		func_41(&iLocal_40);
		return 0;
	}
	if (Global_89906)
	{
		func_41(&iLocal_40);
		return 0;
	}
	if (Global_25293[iLocal_41 /*11*/].f_8)
	{
		func_41(&iLocal_40);
		return 0;
	}
	if (iLocal_40 == -1)
	{
		func_26(&iLocal_40, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_24(iLocal_40, 1))
	{
		func_41(&iLocal_40);
		func_53(&iLocal_26);
		Global_25293[iLocal_41 /*11*/].f_7 = 1;
		if (unk_0x56A9DDE5521F38CB("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
		{
			unk_0x4AFBCBFDE748D4E0(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
		}
		func_43(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_43(int iParam0, int iParam1, int iParam2)//Position - 0x16C8
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
		func_49((891 + iParam0), 1, -1, 1);
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
		func_44();
	}
}

void func_44()//Position - 0x17B0
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
		func_48(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_47() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_45();
				}
			}
		}
	}
}

int func_45()//Position - 0x1C71
{
	if (func_46(0))
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

bool func_46(bool bParam0)//Position - 0x1CBC
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

int func_47()//Position - 0x1CE7
{
	return Global_25233;
}

int func_48(int iParam0, int iParam1)//Position - 0x1CF2
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

int func_49(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1D43
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
		iParam2 = func_9();
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

void func_50()//Position - 0x220F
{
	system::wait(0);
	if (unk_0x7118556A56307B25("tvscreen"))
	{
		unk_0xEE203D16F93269FA("tvscreen");
		iLocal_33 = -1;
		unk_0x7913685BF7335C7B(unk_0x01AB8D4D92922004());
	}
}

void func_51()//Position - 0x223B
{
	int iVar0;
	
	if (iLocal_41 == 4)
	{
		func_52();
	}
	if (unk_0x7118556A56307B25("tvscreen"))
	{
		unk_0xEE203D16F93269FA("tvscreen");
	}
	system::wait(0);
	if (!unk_0x6ADD12BF4D6D2587(iLocal_35))
	{
		func_66();
	}
	iVar0 = unk_0x82FF3DFBC3965CC0(iLocal_35);
	unk_0xD6C700D60B3E88BC("tvscreen", 0);
	unk_0xC4ED0C74AE77D371(iVar0);
	system::wait(0);
	if (iLocal_41 != 4)
	{
		while (!unk_0xB3A480393C690E8F(iVar0))
		{
			if (!unk_0x6ADD12BF4D6D2587(iLocal_35))
			{
				func_66();
			}
			if (!unk_0xC8F310BD22DD910A(iLocal_35))
			{
				func_66();
			}
			if (!unk_0x7118556A56307B25("tvscreen"))
			{
				unk_0xD6C700D60B3E88BC("tvscreen", 0);
			}
			if (!unk_0xB3A480393C690E8F(iVar0))
			{
				unk_0xC4ED0C74AE77D371(iVar0);
			}
			system::wait(0);
		}
	}
	iLocal_33 = unk_0x3B46B5E6947B1597("tvscreen");
	func_3();
}

void func_52()//Position - 0x22F9
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_35))
	{
		if (unk_0x82FF3DFBC3965CC0(iLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_35 = 0;
	iLocal_35 = unk_0x9A331BBF019DCAD2(joaat("v_ilev_mm_screen2"), vLocal_31, true, true, false);
	unk_0x48ED7B2293A96722(iLocal_35, fLocal_32);
	unk_0xEDC33A771FAEB393(iLocal_35, true);
	unk_0xB3A8974D2C811672(iLocal_35, false, 0);
	iLocal_37 = 0;
	iLocal_37 = unk_0x9A331BBF019DCAD2(joaat("v_ilev_mm_screen2_vl"), vLocal_31, true, true, false);
	unk_0x48ED7B2293A96722(iLocal_37, fLocal_32);
	unk_0xEDC33A771FAEB393(iLocal_37, true);
	unk_0xB3A8974D2C811672(iLocal_37, false, 0);
}

void func_53(int iParam0)//Position - 0x2376
{
	func_54(iParam0, 0f);
}

void func_54(int iParam0, float fParam1)//Position - 0x2385
{
	iParam0->f_1 = (func_30(unk_0xC80D31E4B587871C(*iParam0, 4)) - fParam1);
	unk_0x872F1C1F8587CCC7(iParam0, 1);
	unk_0x0EE72DB1CD8A3B86(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_55()//Position - 0x23B3
{
}

int func_56(int iParam0)//Position - 0x23BB
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_330[iParam0 /*6*/];
}

void func_57()//Position - 0x23E7
{
	vLocal_31 = { unk_0xB3328BA8976B416C(iLocal_35, 1) };
	fLocal_32 = unk_0xF0371FE6E2BF9599(iLocal_35);
	func_59();
	if (unk_0x82FF3DFBC3965CC0(iLocal_35) == -897601557)
	{
		if (system::vdist(vLocal_31, -9,541955f, -1440,917f, 31,34692f) < 3f)
		{
			iLocal_41 = 0;
			vLocal_63 = { -9,8135f, -1440,913f, 31,3654f };
			vLocal_64 = { 0f, 0f, -134,3211f };
			vLocal_68 = { -9,3078f, -1440,931f, 30,1015f };
			StringCopy(&cLocal_44, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (unk_0x82FF3DFBC3965CC0(iLocal_35) == joaat("prop_trev_tv_01"))
	{
		if (system::vdist(vLocal_31, 1978,425f, 3819,657f, 34,26763f) < 3f)
		{
			iLocal_41 = 2;
			vLocal_63 = { 1978,23f, 3819,65f, 34,2724f };
			vLocal_64 = { 0f, 0f, -105,15f };
			vLocal_68 = { 1978,33f, 3819,717f, 32,4501f };
			func_58();
			StringCopy(&cLocal_44, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0x82FF3DFBC3965CC0(iLocal_35) == joaat("prop_tv_flat_01"))
	{
		if (system::vdist(vLocal_31, 3,6654f, 529,8486f, 173,6281f) < 3f)
		{
			iLocal_41 = 1;
			vLocal_63 = { 2,5724f, 527,9989f, 176,1619f };
			vLocal_64 = { 0f, 0f, -29,9488f };
			vLocal_68 = { 3,6654f, 529,8486f, 173,6281f };
			StringCopy(&cLocal_44, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (unk_0x82FF3DFBC3965CC0(iLocal_35) == 1340914825)
	{
		if (system::vdist(vLocal_31, -1160,695f, -1520,745f, 10,49168f) < 3f)
		{
			iLocal_41 = 3;
			vLocal_63 = { -1160,502f, -1520,76f, 10,7393f };
			vLocal_64 = { 0f, 0f, 60,061f };
			vLocal_68 = { -1160,143f, -1520,495f, 9,6555f };
			StringCopy(&cLocal_44, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_53, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (unk_0x82FF3DFBC3965CC0(iLocal_35) == joaat("v_ilev_mm_screen2") || unk_0x82FF3DFBC3965CC0(iLocal_35) == joaat("v_ilev_mm_scre_off"))
	{
		if (system::vdist(vLocal_31, -802,2527f, 173,0374f, 74,35708f) < 3f)
		{
			iLocal_41 = 4;
			vLocal_63 = { -802,8972f, 172,537f, 74,5801f };
			vLocal_64 = { 0f, 0f, -69,0273f };
			vLocal_68 = { -800,7292f, 173,2194f, 71,8348f };
			StringCopy(&cLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_53, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (unk_0x82FF3DFBC3965CC0(iLocal_35) == joaat("des_tvsmash_start"))
	{
		if (system::vdist(vLocal_31, -809,962f, 170,919f, 75,7407f) < 3f)
		{
			iLocal_41 = 5;
			vLocal_63 = { -808,3051f, 171,2623f, 77,2822f };
			vLocal_64 = { 1,8886f, 0f, 110,9232f };
			vLocal_68 = { -809,962f, 170,919f, 75,7407f };
			StringCopy(&cLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_53, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_58()//Position - 0x26D6
{
	iLocal_36 = unk_0x9A331BBF019DCAD2(joaat("prop_tt_screenstatic"), vLocal_31, true, true, false);
	unk_0x48ED7B2293A96722(iLocal_36, fLocal_32);
	unk_0xB3A8974D2C811672(iLocal_36, true, 0);
	unk_0xEDC33A771FAEB393(iLocal_36, true);
}

void func_59()//Position - 0x2707
{
	unk_0x914DEB324EC111CB(0, func_39(1), 0);
	if (func_56(22))
	{
		unk_0x914DEB324EC111CB(1, func_39(12), 0);
	}
	else
	{
		unk_0x914DEB324EC111CB(1, func_39(2), 0);
	}
}

void func_60()//Position - 0x273D
{
	if (iLocal_41 == -1)
	{
		return;
	}
	if (Global_25293[iLocal_41 /*11*/].f_10 == 0)
	{
		if (iLocal_66 == 1)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_38))
			{
				unk_0x1A0806871323CD16(iLocal_38, false);
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_35))
			{
				unk_0x1A0806871323CD16(iLocal_35, false);
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_37))
			{
				unk_0x1A0806871323CD16(iLocal_37, false);
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_36))
			{
				unk_0x1A0806871323CD16(iLocal_36, false);
			}
			iLocal_66 = 0;
		}
	}
	else if (iLocal_66 == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_38))
		{
			unk_0x1A0806871323CD16(iLocal_38, true);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_35))
		{
			unk_0x1A0806871323CD16(iLocal_35, true);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_37))
		{
			unk_0x1A0806871323CD16(iLocal_37, true);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_36))
		{
			unk_0x1A0806871323CD16(iLocal_36, true);
		}
		iLocal_66 = 1;
	}
}

bool func_61(int iParam0)//Position - 0x27F0
{
	return Global_35861 == iParam0;
}

int func_62(int iParam0)//Position - 0x27FE
{
	if (iParam0 != -1)
	{
		if (Global_25293[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_63()//Position - 0x281D
{
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0x19E08ED08C79C477() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64()//Position - 0x283A
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

void func_65()//Position - 0x2860
{
}

void func_66()//Position - 0x2868
{
	if (iLocal_41 == -1)
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	func_41(&iLocal_40);
	if (iLocal_41 != -1)
	{
		func_1();
		Global_25293[iLocal_41 /*11*/].f_6 = 0;
		Global_25293[iLocal_41 /*11*/].f_7 = 0;
		Global_25293[iLocal_41 /*11*/].f_8 = 0;
		Global_25293[iLocal_41 /*11*/].f_4 = 0;
		Global_25293[iLocal_41 /*11*/].f_5 = 0;
		Global_25293[iLocal_41 /*11*/].f_2 = 0;
		Global_25293[iLocal_41 /*11*/] = -1;
		Global_25293[iLocal_41 /*11*/].f_1 = 0;
		Global_25293[iLocal_41 /*11*/].f_10 = 0;
	}
	if ((func_40("TV_HLP1") || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x3E80C2F7BC665259(1);
	}
	system::wait(0);
	func_67();
	if (unk_0x771D0F8F56A5FE6C(&cLocal_53))
	{
		unk_0xE02E32C69260FBB7(&cLocal_53);
	}
	unk_0x5C629B1F76E12421();
	func_2();
	unk_0x96A3D9A8A4C7AFD4();
}

void func_67()//Position - 0x292F
{
	func_50();
	if (unk_0x6ADD12BF4D6D2587(iLocal_35))
	{
		if (unk_0x82FF3DFBC3965CC0(iLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			unk_0x452336926718D62A(&iLocal_35);
			unk_0x14776E43F90DD454(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_37))
	{
		unk_0x452336926718D62A(&iLocal_37);
		unk_0x14776E43F90DD454(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_36))
	{
		unk_0x452336926718D62A(&iLocal_36);
		unk_0x14776E43F90DD454(joaat("prop_tt_screenstatic"));
	}
}

