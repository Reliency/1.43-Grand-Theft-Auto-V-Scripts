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
	vector3 vLocal_21 = { 0f, 0f, 0f };
	struct<18> Local_22 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_41 = 0;
	struct<178> Local_42[27];
	var uLocal_43 = 0;
	struct<24> Local_44[30];
	var uLocal_45 = 0;
	struct<24> Local_46[24];
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	bool bLocal_64 = 0;
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
	iLocal_41 = 29;
	fLocal_49 = 0,075f;
	fLocal_50 = 0,725f;
	iLocal_57 = 1;
	iLocal_58 = 1;
	bLocal_64 = true;
	unk_0xBC03901A15107317(1);
	if (unk_0x7D9C4B359376D38A(3))
	{
		func_40();
	}
	unk_0xAE83ED4C9081AE6F(0);
	unk_0x5BB655320D4DDEF6(1);
	func_35(1);
	unk_0x393584863A2F304E("les_1b_mcs_2", 8);
	func_18(1);
	func_8(1, 1, 1, 0);
	while (true)
	{
		unk_0xAD6F3DFB1F960182(0f);
		unk_0x72CB9F3FA10C599B(0f);
		func_7(unk_0xFC1458A37D98B502());
		if (func_2())
		{
			func_40();
		}
		if (bLocal_56)
		{
			unk_0x8D95497078BC0E3B(0,5f, 0,5f);
			func_1(0,1f, 0,1f, "NUMBER", 171, 0);
		}
		system::wait(0);
	}
}

void func_1(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xDC
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x6223D539BCD39E76(iParam3);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, iParam4);
}

int func_2()//Position - 0xFA
{
	unk_0x7FF44F2CA1AA5702(vLocal_21.x, vLocal_21.y, vLocal_21.z);
	unk_0x84B0C18CA14830B4(-1f);
	switch (iLocal_59)
	{
		case 0:
			unk_0x59C3AC31C7544A28(0);
			func_6();
			unk_0x59C3AC31C7544A28(500);
			unk_0xD0BFA95B279C174F(0);
			iLocal_59++;
			break;
		
		case 1:
			if (!unk_0x6F1392C5F51B32A4())
			{
				if (bLocal_64)
				{
					func_4();
				}
				unk_0x7913685BF7335C7B(iLocal_53);
				unk_0x0EB9853DF8BC0D87(iLocal_51, 0,2f, 0,34f, 0,410001f, 0,69f, 100, 100, 100, 255, 0);
				unk_0x7913685BF7335C7B(iLocal_54);
				if (bLocal_55)
				{
					unk_0x008F3E3CC076EA0E(iLocal_52, "SET_TEXT");
					func_3("KEYNOTE_NAME");
					func_3("KEYNOTE_TITLE");
					unk_0x271AA5469AF471B3();
					unk_0x0EB9853DF8BC0D87(iLocal_52, 0,5f, 0,5f, 1f, 1f, 100, 100, 100, 255, 0);
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_3(char* sParam0)//Position - 0x1D3
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_4()//Position - 0x1E5
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xE57A999388F7FD02();
	iVar1 = 0;
	while (iVar1 <= (16 - 1))
	{
		if (Local_22[iVar1] != -1)
		{
			if ((!unk_0xC80D31E4B587871C(iLocal_39, iVar1) && iVar0 >= Local_22[iVar1]) && iVar0 < Local_22.f_17[iVar1])
			{
				func_5();
				unk_0x872F1C1F8587CCC7(&iLocal_39, iVar1);
			}
		}
		iVar1++;
	}
}

void func_5()//Position - 0x248
{
}

void func_6()//Position - 0x250
{
}

bool func_7(int iParam0)//Position - 0x258
{
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	return !unk_0x191BE1BC8F26F3C1(iParam0, 0);
}

void func_8(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x276
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_17(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_16())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_15(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_17(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_15(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_13(unk_0x9EB17624F44A8DA4())) && !func_10(unk_0x9EB17624F44A8DA4(), 0)) && !func_9())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_13(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_9()//Position - 0x38F
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_10(int iParam0, int iParam1)//Position - 0x3AC
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_11(-1, 0) == 8;
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

int func_11(int iParam0, bool bParam1)//Position - 0x3F7
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

int func_12()//Position - 0x438
{
	return Global_1312736;
}

int func_13(int iParam0)//Position - 0x444
{
	if (func_10(iParam0, 0))
	{
		return 1;
	}
	if (func_14())
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

bool func_14()//Position - 0x486
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_15(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x497
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

int func_16()//Position - 0x4CA
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_17(int iParam0)//Position - 0x4F1
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

void func_18(bool bParam0)//Position - 0x514
{
	int iVar0;
	
	if (func_7(unk_0xFC1458A37D98B502()))
	{
		unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 689,1f, 586,5f, 130,5f, 1, false, 0, 1);
		unk_0x60225D4F755DFDB1(689,1f, 586,5f, 130,5f, 500f, 0);
		unk_0x7346A36E01E18FEC(unk_0xFC1458A37D98B502(), 1);
	}
	func_34(0);
	func_33(&iLocal_63, 0);
	unk_0x32C900DD9B686F75(689,1f, 586,5f, 130,5f, 80f, 0);
	while (!unk_0x64D098EABB2F6F13())
	{
		system::wait(0);
	}
	unk_0x81BCCFFE3F019672();
	if (bParam0)
	{
		unk_0xBC469A15B0FBB2B3("LInvader");
		while (!unk_0xAB84FBE3AB3FFAD3("LInvader"))
		{
			system::wait(0);
		}
	}
	unk_0xFFFAC2063552BF4D("EXTRASUNNY");
	iLocal_40[0] = joaat("a_m_y_hipster_01");
	iLocal_40[1] = joaat("a_m_y_hipster_02");
	iLocal_40[2] = joaat("a_m_y_hipster_03");
	iLocal_40[3] = joaat("a_f_y_hipster_01");
	iLocal_40[4] = joaat("a_f_y_hipster_02");
	iLocal_40[5] = joaat("a_f_y_hipster_03");
	iLocal_40[6] = joaat("a_f_y_hipster_04");
	iLocal_40[7] = joaat("a_f_y_bevhills_01");
	iLocal_40[8] = joaat("a_m_m_business_01");
	iLocal_40[9] = joaat("a_m_m_bevhills_02");
	iLocal_40[10] = joaat("a_m_m_skater_01");
	iLocal_40[11] = joaat("a_m_y_beachvesp_01");
	iLocal_40[12] = joaat("a_m_y_bevhills_01");
	iLocal_40[13] = joaat("a_f_m_bevhills_01");
	iLocal_40[14] = joaat("a_m_m_ktown_01");
	iLocal_40[15] = joaat("a_m_y_busicas_01");
	iLocal_40[16] = joaat("a_m_y_business_02");
	iLocal_40[17] = joaat("a_m_y_gay_01");
	iLocal_40[18] = joaat("a_m_y_ktown_02");
	iLocal_40[19] = joaat("a_m_m_bevhills_02");
	iLocal_40[20] = joaat("a_m_y_business_03");
	iLocal_40[21] = joaat("a_m_y_gay_02");
	iLocal_40[22] = joaat("a_m_m_malibu_01");
	iLocal_40[22] = joaat("a_m_y_gay_02");
	iLocal_40[23] = joaat("a_m_y_eastsa_02");
	iLocal_40[24] = joaat("a_m_y_soucent_02");
	iLocal_40[25] = joaat("a_m_y_vinewood_01");
	iLocal_40[26] = joaat("a_m_y_vinewood_02");
	iLocal_40[27] = joaat("a_m_y_vinewood_03");
	iLocal_40[28] = joaat("a_m_y_vinewood_04");
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		func_31(func_32(iVar0), 1);
		iVar0++;
	}
	func_31("misslester1b_crowdlow@14@", 1);
	func_31("misslester1b_crowdlow@24@", 1);
	func_30("BREAKING_NEWS", &iLocal_52, 1);
	func_30("lifeinvader_presentation", &iLocal_51, 1);
	func_29("LEST1", 0, 1, 0);
	iVar0 = 0;
	while (iVar0 <= 26)
	{
		func_23(&(Local_42[iVar0 /*178*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_22(&(Local_44[iVar0 /*24*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		func_21(&(Local_46[iVar0 /*24*/]), iVar0);
		iVar0++;
	}
	unk_0x5A66A86A47AC3B57(1);
	unk_0xD6C700D60B3E88BC("Big_Disp", 0);
	unk_0xC4ED0C74AE77D371(joaat("prop_huge_display_01"));
	unk_0xC4ED0C74AE77D371(joaat("prop_huge_display_02"));
	iLocal_53 = unk_0x3B46B5E6947B1597("Big_Disp");
	iLocal_54 = unk_0x01AB8D4D92922004();
	while (unk_0xFC27C6A251089B18(unk_0xFC1458A37D98B502()))
	{
		system::wait(0);
	}
	while (!unk_0xA3DDC3767EC660CD())
	{
		system::wait(0);
	}
	system::wait(2000);
	iLocal_59 = 0;
	vLocal_21.x = 12;
	vLocal_21.y = 0;
	vLocal_21.z = 0;
	iVar0 = 0;
	while (iVar0 <= (16 - 1))
	{
		func_19(iVar0);
		iVar0++;
	}
	if (bLocal_56)
	{
	}
}

void func_19(int iParam0)//Position - 0x848
{
	switch (iParam0)
	{
		case 0:
			func_20(iParam0, 0, 10000);
			break;
		
		case 1:
			func_20(iParam0, 9000, 10000);
			break;
		
		case 2:
			func_20(iParam0, 27000, 32000);
			break;
		
		case 3:
			func_20(iParam0, 32000, 42000);
			break;
		
		case 4:
			func_20(iParam0, 51000, 63000);
			break;
		
		case 5:
			func_20(iParam0, 63600, 69000);
			break;
		
		case 6:
			func_20(iParam0, 66000, 70200);
			break;
		
		case 7:
			func_20(iParam0, 69600, 79200);
			break;
		
		case 8:
			func_20(iParam0, 77400, 84000);
			break;
		
		case 12:
			func_20(iParam0, 81000, 93600);
			break;
		
		case 9:
			func_20(iParam0, -1, -1);
			break;
		
		case 11:
			func_20(iParam0, 90000, 154200);
			break;
		
		case 10:
			func_20(iParam0, 129600, 133200);
			break;
		
		case 13:
			func_20(iParam0, 144600, 154200);
			break;
		
		case 14:
			func_20(iParam0, 152700, 154200);
			break;
		
		case 15:
			func_20(iParam0, 154200, 154200);
			break;
	}
}

void func_20(int iParam0, int iParam1, int iParam2)//Position - 0x9B8
{
	Local_22[iParam0] = iParam1;
	Local_22.f_17[iParam0] = iParam2;
}

void func_21(var uParam0, int iParam1)//Position - 0x9D2
{
	uParam0->f_22 = 0;
	unk_0x0EE72DB1CD8A3B86(&uLocal_47, iParam1);
	if (iParam1 == 0 && uParam0->f_22 == 0)
	{
	}
}

void func_22(var uParam0, int iParam1)//Position - 0x9FA
{
	uParam0->f_22 = 0;
	unk_0x0EE72DB1CD8A3B86(&uLocal_45, iParam1);
	if (iParam1 == 0 && uParam0->f_22 == 0)
	{
	}
}

void func_23(var uParam0, int iParam1)//Position - 0xA22
{
	vector3 vVar0;
	
	func_28(uParam0);
	unk_0x0EE72DB1CD8A3B86(&uLocal_43, iParam1);
	switch (iParam1)
	{
		case 0:
			vVar0 = { 0f, 0f, (func_27(-4,29f) + 180f) };
			func_25(uParam0, 82047830, 667,319f, 572,133f, 128,521f, vVar0, 6, 0, 0);
			func_25(uParam0, 83248680, 666,312f, 571,675f, 128,521f, vVar0, 6, 1, 0);
			func_25(uParam0, 71526810, 665,235f, 571,183f, 128,521f, vVar0, 6, 2, 0);
			func_25(uParam0, 49826530, 664,124f, 570,679f, 128,521f, vVar0, 6, 0, 0);
			func_25(uParam0, 78575440, 663,029f, 570,181f, 128,521f, vVar0, 6, 1, 0);
			func_25(uParam0, 12133230, 661,937f, 569,685f, 128,521f, vVar0, 6, 2, 0);
			func_25(uParam0, 89665750, 660,839f, 569,194f, 128,521f, vVar0, 6, 0, 0);
			func_25(uParam0, 65990810, 659,537f, 569,392f, 128,521f, vVar0, 6, 1, 0);
			func_25(uParam0, 21233450, 658,187f, 569,572f, 128,523f, vVar0, 4, 0, 1f);
			func_24(&(uParam0->f_155[0 /*11*/]), 659,867f, 571,539f, 128,531f, vVar0, 0, 0,5f, -1,5f);
			func_24(&(uParam0->f_155[1 /*11*/]), 660,646f, 567,108f, 128,521f, vVar0, 0, 0,5f, -1,5f);
			break;
		
		case 1:
			vVar0 = { 0f, 0f, (func_27(-3,98f) + 180f) };
			func_25(uParam0, 21091970, 670,312f, 568,023f, 128,521f, vVar0, 5, 0, 0,5f);
			func_25(uParam0, 97482490, 669,189f, 567,502f, 128,522f, vVar0, 6, 1, 0);
			func_25(uParam0, 66764240, 668,28f, 566,688f, 128,522f, vVar0, 6, 0, 0);
			func_25(uParam0, 82832850, 667,384f, 565,885f, 128,522f, vVar0, 6, 2, 0);
			func_25(uParam0, 33636100, 666,491f, 565,085f, 128,522f, vVar0, 6, 0, 0);
			func_25(uParam0, 22769640, 665,595f, 564,282f, 128,522f, vVar0, 6, 1, 0);
			break;
		
		case 2:
			vVar0 = { 0f, 0f, (func_27(-3,78f) + 180f) };
			func_25(uParam0, 91480760, 673,7f, 564,799f, 128,521f, vVar0, 6, 0, 0);
			func_25(uParam0, 64996320, 672,996f, 563,847f, 128,521f, vVar0, 6, 1, 0);
			func_25(uParam0, 30855220, 672,271f, 562,865f, 128,521f, vVar0, 6, 2, 0);
			func_25(uParam0, 98921990, 671,557f, 561,897f, 128,521f, vVar0, 6, 0, 0);
			func_25(uParam0, 73357200, 670,258f, 561,366f, 128,522f, vVar0, 6, 1, 0);
			func_24(&(uParam0->f_155[0 /*11*/]), 669,564f, 563,469f, 128,521f, vVar0, 2, -1,5f, -1,5f);
			func_24(&(uParam0->f_155[1 /*11*/]), 672,34f, 559,914f, 128,522f, vVar0, 2, -1,5f, -1,5f);
			break;
		
		case 3:
			vVar0 = { 0f, 0f, (func_27(-3,38f) + 180f) };
			func_25(uParam0, 89689390, 681,517f, 555,801f, 128,522f, vVar0, 6, 0, 0);
			func_25(uParam0, 71057000, 681,796f, 556,967f, 128,522f, vVar0, 6, 1, 0);
			func_25(uParam0, 26206390, 682,076f, 558,137f, 128,522f, vVar0, 6, 2, 0);
			func_25(uParam0, 58207860, 682,36f, 559,342f, 128,522f, vVar0, 6, 0, 0);
			func_25(uParam0, 43622440, 682,635f, 560,475f, 128,522f, vVar0, 6, 1, 0);
			break;
		
		case 4:
			vVar0 = { 0f, 0f, (func_27(-3,17f) + 180f) };
			func_25(uParam0, 78555440, 687,841f, 559,785f, 128,522f, vVar0, 6, 0, 0);
			func_25(uParam0, 12324420, 687,807f, 558,602f, 128,522f, vVar0, 6, 1, 0);
			func_25(uParam0, 4083210, 687,771f, 557,382f, 128,522f, vVar0, 6, 2, 0);
			func_25(uParam0, 2021980, 688,465f, 556,159f, 128,522f, vVar0, 6, 0, 0);
			func_25(uParam0, 21091970, 688,431f, 554,961f, 128,521f, vVar0, 6, 1, 0);
			func_24(&(uParam0->f_155[0 /*11*/]), 685,931f, 556,306f, 128,522f, vVar0, 0, 0,5f, -1,5f);
			func_24(&(uParam0->f_155[1 /*11*/]), 685,897f, 555,108f, 128,521f, vVar0, 1, -1,5f, -1,5f);
			break;
		
		case 5:
			vVar0 = { 0f, 0f, (func_27(-2,97f) + 180f) };
			func_25(uParam0, 31491440, 692,632f, 559,992f, 128,522f, vVar0, 5, 2, -0,5f);
			func_25(uParam0, 34393340, 693,189f, 558,886f, 128,522f, vVar0, 6, 0, 0);
			func_25(uParam0, 94762900, 693,396f, 557,684f, 128,522f, vVar0, 6, 1, 0);
			func_25(uParam0, 95283980, 693,6f, 556,498f, 128,522f, vVar0, 6, 2, 0);
			func_25(uParam0, 92416940, 693,803f, 555,317f, 128,522f, vVar0, 6, 0, 0);
			func_25(uParam0, 53597080, 694,007f, 554,131f, 128,522f, vVar0, 6, 1, 0);
			break;
		
		case 6:
			vVar0 = { 0f, 0f, (func_27(-2,7f) + 180f) };
			func_25(uParam0, 86170110, 697,492f, 561,188f, 128,522f, vVar0, 6, 0, 0);
			func_25(uParam0, 62247860, 697,964f, 560,188f, 128,522f, vVar0, 6, 1, 0);
			func_25(uParam0, 43665230, 698,467f, 559,116f, 128,522f, vVar0, 6, 2, 0);
			func_25(uParam0, 32906070, 698,988f, 558,013f, 128,522f, vVar0, 6, 0, 0);
			func_25(uParam0, 70836820, 699,502f, 556,925f, 128,522f, vVar0, 6, 1, 0);
			func_25(uParam0, 67800350, 700,014f, 555,841f, 128,522f, vVar0, 6, 2, 0);
			func_25(uParam0, 41115560, 701,184f, 555,063f, 128,521f, vVar0, 6, 0, 0);
			func_25(uParam0, 98430790, 701,005f, 553,758f, 128,522f, vVar0, 6, 1, 0);
			func_24(&(uParam0->f_155[0 /*11*/]), 698,861f, 554,048f, 128,521f, vVar0, 0, 0,5f, -1,5f);
			func_24(&(uParam0->f_155[1 /*11*/]), 703,267f, 554,91f, 128,522f, vVar0, 0, 0,5f, -1,5f);
			break;
		
		case 7:
			vVar0 = { 0f, 0f, (func_27(-3,99f) + 180f) };
			func_25(uParam0, 13168530, 652,833f, 570,052f, 128,529f, vVar0, 6, 0, 0);
			func_25(uParam0, 92127780, 652,006f, 569,319f, 128,528f, vVar0, 6, 1, 0);
			func_25(uParam0, 51664260, 651,136f, 568,538f, 128,729f, vVar0, 6, 2, 0);
			func_25(uParam0, 35914010, 650,242f, 567,746f, 128,729f, vVar0, 6, 0, 0);
			func_25(uParam0, 43076060, 649,661f, 566,94f, 128,929f, vVar0, 6, 1, 0);
			func_25(uParam0, 21755390, 648,426f, 566,137f, 128,929f, vVar0, 6, 2, 0);
			break;
		
		case 8:
			vVar0 = { 0f, 0f, (func_27(-3,9f) + 180f) };
			func_25(uParam0, 20501110, 656,955f, 565,868f, 128,53f, vVar0, 6, 0, 0);
			func_25(uParam0, 10114780, 656,193f, 565,067f, 128,53f, vVar0, 6, 1, 0);
			func_25(uParam0, 12664730, 655,358f, 564,19f, 128,73f, vVar0, 6, 2, 0);
			func_25(uParam0, 32956570, 654,534f, 563,324f, 128,73f, vVar0, 6, 0, 0);
			func_25(uParam0, 11862860, 653,696f, 562,443f, 128,93f, vVar0, 6, 1, 0);
			func_25(uParam0, 87809290, 652,862f, 561,566f, 128,93f, vVar0, 6, 2, 0);
			break;
		
		case 9:
			vVar0 = { 0f, 0f, (func_27(-3,76f) + 180f) };
			func_25(uParam0, 75170110, 662,947f, 560,965f, 128,529f, vVar0, 6, 0, 0);
			func_25(uParam0, 62246860, 662,306f, 560,065f, 128,529f, vVar0, 6, 1, 0);
			func_25(uParam0, 83665250, 661,603f, 559,079f, 128,73f, vVar0, 6, 2, 0);
			func_25(uParam0, 22016170, 660,91f, 558,106f, 128,73f, vVar0, 6, 0, 0);
			func_25(uParam0, 41846840, 660,204f, 557,116f, 128,929f, vVar0, 6, 1, 0);
			func_25(uParam0, 10000350, 659,502f, 556,13f, 128,929f, vVar0, 6, 2, 0);
			break;
		
		case 10:
			vVar0 = { 0f, 0f, (func_27(-3,68f) + 180f) };
			func_25(uParam0, 86878180, 667,872f, 557,785f, 128,53f, vVar0, 6, 0, 0);
			func_25(uParam0, 22242820, 667,31f, 556,833f, 128,53f, vVar0, 6, 1, 0);
			func_25(uParam0, 93969290, 666,693f, 555,791f, 128,73f, vVar0, 6, 2, 0);
			func_25(uParam0, 12101010, 666,086f, 554,762f, 128,73f, vVar0, 6, 0, 0);
			func_25(uParam0, 20232220, 665,467f, 553,715f, 128,93f, vVar0, 6, 1, 0);
			func_25(uParam0, 57707370, 664,852f, 552,673f, 128,93f, vVar0, 6, 2, 0);
			break;
		
		case 11:
			vVar0 = { 0f, 0f, (func_27(-3,53f) + 180f) };
			func_25(uParam0, 13130110, 674,882f, 554,326f, 128,529f, vVar0, 6, 0, 0);
			func_25(uParam0, 97845810, 674,46f, 553,305f, 128,529f, vVar0, 6, 1, 0);
			func_25(uParam0, 12345670, 673,997f, 552,186f, 128,73f, vVar0, 6, 2, 0);
			func_25(uParam0, 89101110, 673,541f, 551,081f, 128,73f, vVar0, 6, 0, 0);
			func_25(uParam0, 12131410, 673,076f, 549,958f, 128,929f, vVar0, 6, 1, 0);
			func_25(uParam0, 51617180, 672,613f, 548,839f, 128,929f, vVar0, 6, 2, 0);
			break;
		
		case 12:
			vVar0 = { 0f, 0f, (func_27(-3,45f) + 180f) };
			func_25(uParam0, 60616260, 680,396f, 552,335f, 128,53f, vVar0, 6, 0, 0);
			func_25(uParam0, 36465660, 680,063f, 551,281f, 128,53f, vVar0, 6, 1, 0);
			func_25(uParam0, 67686970, 679,697f, 550,127f, 128,73f, vVar0, 6, 2, 0);
			func_25(uParam0, 71727370, 679,336f, 548,988f, 128,73f, vVar0, 6, 0, 0);
			func_25(uParam0, 47576770, 678,969f, 547,829f, 128,93f, vVar0, 6, 1, 0);
			func_25(uParam0, 78798080, 678,603f, 546,674f, 128,93f, vVar0, 6, 2, 0);
			break;
		
		case 13:
			vVar0 = { 0f, 0f, (func_27(-3,31f) + 180f) };
			func_25(uParam0, 11511610, 688,034f, 550,483f, 128,529f, vVar0, 6, 0, 0);
			func_25(uParam0, 17118110, 687,853f, 549,393f, 128,529f, vVar0, 6, 1, 0);
			func_25(uParam0, 91201210, 687,653f, 548,199f, 128,73f, vVar0, 6, 2, 0);
			func_25(uParam0, 12212310, 687,457f, 547,02f, 128,73f, vVar0, 6, 0, 0);
			func_25(uParam0, 23124120, 687,257f, 545,821f, 128,929f, vVar0, 6, 1, 0);
			func_25(uParam0, 51261270, 687,058f, 544,627f, 128,929f, vVar0, 6, 2, 0);
			break;
		
		case 14:
			vVar0 = { 0f, 0f, (func_27(-3,22f) + 180f) };
			func_25(uParam0, 15515610, 693,855f, 549,783f, 128,53f, vVar0, 6, 0, 0);
			func_25(uParam0, 57158150, 693,767f, 548,682f, 128,53f, vVar0, 6, 1, 0);
			func_25(uParam0, 91601610, 693,67f, 547,474f, 128,73f, vVar0, 6, 2, 0);
			func_25(uParam0, 16216310, 693,575f, 546,283f, 128,73f, vVar0, 6, 0, 0);
			func_25(uParam0, 64165160, 693,478f, 545,071f, 128,93f, vVar0, 6, 1, 0);
			func_25(uParam0, 61671680, 693,381f, 543,865f, 128,93f, vVar0, 6, 2, 0);
			break;
		
		case 15:
			vVar0 = { 0f, 0f, (func_27(-3,08f) + 180f) };
			func_25(uParam0, 19920020, 701,652f, 549,708f, 128,529f, vVar0, 6, 0, 0);
			func_25(uParam0, 1202200, 701,721f, 548,605f, 128,529f, vVar0, 6, 1, 0);
			func_25(uParam0, 32042050, 701,795f, 547,396f, 128,729f, vVar0, 6, 2, 0);
			func_25(uParam0, 20620720, 701,869f, 546,203f, 128,729f, vVar0, 6, 0, 0);
			func_25(uParam0, 8209210, 701,944f, 544,99f, 128,929f, vVar0, 6, 1, 0);
			func_25(uParam0, 2112120, 702,019f, 543,781f, 128,929f, vVar0, 6, 2, 0);
			break;
		
		case 16:
			vVar0 = { 0f, 0f, (func_27(-2,99f) + 180f) };
			func_25(uParam0, 24024120, 707,482f, 550,335f, 128,53f, vVar0, 6, 0, 0);
			func_25(uParam0, 43244240, 707,644f, 549,242f, 128,53f, vVar0, 6, 1, 0);
			func_25(uParam0, 42452460, 707,821f, 548,044f, 128,73f, vVar0, 6, 2, 0);
			func_25(uParam0, 24724820, 707,996f, 546,862f, 128,73f, vVar0, 6, 0, 0);
			func_25(uParam0, 48249250, 708,174f, 545,659f, 128,929f, vVar0, 6, 1, 0);
			func_25(uParam0, 2512520, 708,351f, 544,461f, 128,929f, vVar0, 6, 2, 0);
			break;
		
		case 17:
			vVar0 = { 0f, 0f, (func_27(-3,98f) + 180f) };
			func_25(uParam0, 46779100, 646,434f, 564,522f, 128,927f, vVar0, 6, 0, 0);
			func_25(uParam0, 93643160, 645,612f, 563,784f, 128,927f, vVar0, 6, 1, 0);
			func_25(uParam0, 34729570, 644,71f, 562,975f, 129,127f, vVar0, 6, 2, 0);
			func_25(uParam0, 28556490, 643,821f, 562,177f, 129,127f, vVar0, 6, 0, 0);
			func_25(uParam0, 75335160, 642,916f, 561,365f, 129,327f, vVar0, 6, 1, 0);
			func_25(uParam0, 84872300, 642,015f, 560,557f, 129,327f, vVar0, 6, 2, 0);
			break;
		
		case 18:
			vVar0 = { 0f, 0f, (func_27(-3,91f) + 180f) };
			func_25(uParam0, 65187100, 651,092f, 559,707f, 128,926f, vVar0, 6, 0, 0);
			func_25(uParam0, 87514460, 650,325f, 558,912f, 128,926f, vVar0, 6, 1, 0);
			func_25(uParam0, 46165810, 649,483f, 558,04f, 128,127f, vVar0, 6, 2, 0);
			func_25(uParam0, 12560720, 648,654f, 557,18f, 129,127f, vVar0, 6, 0, 0);
			func_25(uParam0, 27854880, 647,809f, 556,306f, 129,326f, vVar0, 6, 1, 0);
			func_25(uParam0, 97601360, 646,968f, 555,435f, 129,326f, vVar0, 6, 2, 0);
			break;
		
		case 19:
			vVar0 = { 0f, 0f, (func_27(-3,75f) + 180f) };
			func_25(uParam0, 55178130, 657,925f, 554,108f, 128,927f, vVar0, 6, 0, 0);
			func_25(uParam0, 75148880, 657,29f, 553,204f, 128,927f, vVar0, 6, 1, 0);
			func_25(uParam0, 88865540, 656,593f, 552,213f, 129,127f, vVar0, 6, 2, 0);
			func_25(uParam0, 64916770, 655,906f, 551,235f, 129,127f, vVar0, 6, 0, 0);
			func_25(uParam0, 70536220, 655,207f, 550,241f, 129,327f, vVar0, 6, 1, 0);
			func_25(uParam0, 17101310, 654,512f, 549,25f, 129,327f, vVar0, 6, 2, 0);
			break;
		
		case 20:
			vVar0 = { 0f, 0f, (func_27(-3,68f) + 180f) };
			func_25(uParam0, 76870120, 663,545f, 550,463f, 128,926f, vVar0, 6, 0, 0);
			func_25(uParam0, 32147850, 662,977f, 549,515f, 128,926f, vVar0, 6, 1, 0);
			func_25(uParam0, 97662220, 662,353f, 548,477f, 129,127f, vVar0, 6, 2, 0);
			func_25(uParam0, 12107070, 661,738f, 547,453f, 129,127f, vVar0, 6, 0, 0);
			func_25(uParam0, 60841880, 661,111f, 546,411f, 129,326f, vVar0, 6, 1, 0);
			func_25(uParam0, 27803350, 660,489f, 545,373f, 129,326f, vVar0, 6, 2, 0);
			break;
		
		case 21:
			vVar0 = { 0f, 0f, (func_27(-3,53f) + 180f) };
			func_25(uParam0, 19202120, 671,531f, 546,515f, 128,927f, vVar0, 6, 0, 0);
			func_25(uParam0, 22232420, 671,116f, 545,491f, 128,927f, vVar0, 6, 1, 0);
			func_25(uParam0, 52627280, 670,66f, 544,369f, 129,127f, vVar0, 6, 2, 0);
			func_25(uParam0, 29303130, 670,211f, 543,262f, 129,127f, vVar0, 6, 0, 0);
			func_25(uParam0, 23334350, 669,753f, 542,135f, 129,327f, vVar0, 6, 1, 0);
			func_25(uParam0, 36373830, 669,298f, 541,014f, 129,327f, vVar0, 6, 2, 0);
			break;
		
		case 22:
			vVar0 = { 0f, 0f, (func_27(-3,46f) + 180f) };
			func_25(uParam0, 18283840, 677,828f, 544,227f, 128,926f, vVar0, 6, 0, 0);
			func_25(uParam0, 85858680, 677,487f, 543,176f, 128,926f, vVar0, 6, 1, 0);
			func_25(uParam0, 78889900, 677,112f, 542,024f, 129,127f, vVar0, 6, 2, 0);
			func_25(uParam0, 91929390, 676,744f, 540,888f, 129,127f, vVar0, 6, 0, 0);
			func_25(uParam0, 49596970, 676,368f, 539,731f, 129,326f, vVar0, 6, 1, 0);
			func_25(uParam0, 98991000, 675,994f, 538,58f, 129,326f, vVar0, 6, 2, 0);
			break;
		
		case 23:
			vVar0 = { 0f, 0f, (func_27(-3,3f) + 180f) };
			func_25(uParam0, 12812910, 686,526f, 542,118f, 128,927f, vVar0, 6, 0, 0);
			func_25(uParam0, 30131130, 686,352f, 541,027f, 128,927f, vVar0, 6, 1, 0);
			func_25(uParam0, 21331340, 686,16f, 539,831f, 129,127f, vVar0, 6, 1, 0);
			func_25(uParam0, 13513610, 685,972f, 538,652f, 129,127f, vVar0, 6, 0, 0);
			func_25(uParam0, 37138130, 685,779f, 537,451f, 129,327f, vVar0, 6, 1, 0);
			func_25(uParam0, 91401410, 685,588f, 536,256f, 129,327f, vVar0, 6, 2, 0);
			break;
		
		case 24:
			vVar0 = { 0f, 0f, (func_27(-3,23f) + 180f) };
			func_25(uParam0, 16917010, 693,176f, 541,306f, 128,926f, vVar0, 6, 0, 0);
			func_25(uParam0, 71172170, 693,08f, 540,205f, 128,926f, vVar0, 6, 1, 0);
			func_25(uParam0, 31741750, 692,975f, 538,998f, 129,127f, vVar0, 6, 2, 0);
			func_25(uParam0, 17617810, 692,871f, 537,808f, 129,127f, vVar0, 6, 0, 0);
			func_25(uParam0, 79180180, 692,765f, 536,597f, 129,326f, vVar0, 6, 1, 0);
			func_25(uParam0, 21831840, 692,66f, 535,391f, 129,326f, vVar0, 6, 2, 0);
			break;
		
		case 25:
			vVar0 = { 0f, 0f, (func_27(-3,07f) + 180f) };
			func_25(uParam0, 21321420, 702,065f, 541,218f, 128,927f, vVar0, 6, 0, 0);
			func_25(uParam0, 15216210, 702,14f, 540,116f, 128,927f, vVar0, 6, 1, 0);
			func_25(uParam0, 72182190, 702,223f, 538,907f, 129,127f, vVar0, 6, 2, 0);
			func_25(uParam0, 22022120, 702,304f, 537,715f, 129,127f, vVar0, 6, 0, 0);
			func_25(uParam0, 22223220, 702,387f, 536,502f, 129,327f, vVar0, 6, 1, 0);
			func_25(uParam0, 42252260, 703,116f, 526,841f, 129,618f, vVar0, 6, 2, 0);
			break;
		
		case 26:
			vVar0 = { 0f, 0f, (func_27(-3f) + 180f) };
			func_25(uParam0, 25325420, 708,727f, 541,922f, 128,926f, vVar0, 6, 0, 0);
			func_25(uParam0, 55256250, 709,881f, 539,828f, 128,926f, vVar0, 6, 1, 0);
			func_25(uParam0, 72582590, 709,05f, 539,628f, 129,127f, vVar0, 6, 2, 0);
			func_25(uParam0, 26026120, 709,217f, 538,445f, 129,127f, vVar0, 6, 0, 0);
			func_25(uParam0, 62263260, 709,386f, 537,241f, 129,326f, vVar0, 6, 1, 0);
			func_25(uParam0, 42652650, 709,555f, 536,043f, 129,326f, vVar0, 6, 2, 0);
			break;
		
		default:
			break;
	}
}

void func_24(var uParam0, vector3 vParam1, vector3 vParam2, int iParam3, float fParam4, float fParam5)//Position - 0x23C7
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam2 };
	uParam0->f_7 = iParam3;
	*uParam0 = 1;
	uParam0->f_8 = fParam4;
	uParam0->f_9 = fParam5;
}

void func_25(var uParam0, int iParam1, vector3 vParam2, vector3 vParam3, int iParam4, int iParam5, int iParam6)//Position - 0x23F9
{
	if (uParam0->f_154 >= *uParam0)
	{
		return;
	}
	func_26(uParam0[uParam0->f_154 /*17*/], iParam1, vParam2, vParam3, iParam4, iParam5, iParam6);
	uParam0->f_154++;
}

void func_26(var uParam0, var uParam1, vector3 vParam2, vector3 vParam3, var uParam4, var uParam5, var uParam6)//Position - 0x2434
{
	*uParam0 = { vParam2 };
	uParam0->f_3 = { vParam3 };
	uParam0->f_6 = uParam4;
	uParam0->f_7 = uParam1;
	uParam0->f_8 = uParam5;
	uParam0->f_9 = uParam6;
}

float func_27(float fParam0)//Position - 0x2466
{
	return (fParam0 * 57,29578f);
}

void func_28(var uParam0)//Position - 0x2476
{
	uParam0->f_154 = 0;
	uParam0->f_155[0 /*11*/] = 0;
	uParam0->f_155[1 /*11*/] = 0;
}

int func_29(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2493
{
	int iVar0;
	
	iVar0 = unk_0x53C562FD2B9E3AB0() + 7500;
	unk_0xBCBC53983EC3B1BA(sParam0, iParam1);
	if (unk_0x9F0887BCBFCF3C2F(iParam1) && !bParam3)
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		return 1;
	}
	while (!unk_0x9F0887BCBFCF3C2F(iParam1))
	{
		system::wait(0);
		if (unk_0x53C562FD2B9E3AB0() > iVar0 && !unk_0x9F0887BCBFCF3C2F(iParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_30(char* sParam0, var uParam1, int iParam2)//Position - 0x24F8
{
	int iVar0;
	
	iVar0 = unk_0x53C562FD2B9E3AB0() + 7500;
	if (*uParam1 == 0)
	{
		*uParam1 = unk_0xD704C81492296A37(sParam0);
	}
	if (unk_0x34D11AB5BA7922C2(*uParam1))
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		return 1;
	}
	while (!unk_0x34D11AB5BA7922C2(*uParam1))
	{
		system::wait(0);
		if (unk_0x53C562FD2B9E3AB0() > iVar0 && !unk_0x34D11AB5BA7922C2(*uParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_31(char* sParam0, int iParam1)//Position - 0x2560
{
	int iVar0;
	
	iVar0 = unk_0x53C562FD2B9E3AB0() + 7500;
	unk_0x6450931B826B49D9(sParam0);
	if (unk_0x3A801AA34DD821BE(sParam0))
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	while (!unk_0x3A801AA34DD821BE(sParam0))
	{
		system::wait(0);
		if (unk_0x53C562FD2B9E3AB0() > iVar0 && !unk_0x3A801AA34DD821BE(sParam0))
		{
			return 0;
		}
	}
	return 1;
}

char* func_32(int iParam0)//Position - 0x25BB
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "misslester1b_crowd@a_";
			break;
		
		case 1:
			sVar0 = "misslester1b_crowd@b_";
			break;
		
		case 2:
			sVar0 = "misslester1b_crowd@c_";
			break;
		
		case 3:
			sVar0 = "misslester1b_crowd@d_";
			break;
		
		case 4:
			sVar0 = "misslester1b_crowd@e_";
			break;
		
		case 5:
			sVar0 = "misslester1b_crowd@f_";
			break;
		
		case 6:
			sVar0 = "misslester1b_crowd@g_";
			break;
		
		case 7:
			sVar0 = "misslester1b_crowd@h_";
			break;
		
		case 8:
			sVar0 = "misslester1b_crowd@i_";
			break;
		
		case 9:
			sVar0 = "misslester1b_crowd@j_";
			break;
		
		case 10:
			sVar0 = "misslester1b_crowd@k_";
			break;
		
		case 11:
			sVar0 = "misslester1b_crowd@l_";
			break;
		
		case 12:
			sVar0 = "misslester1b_crowd@m_";
			break;
	}
	return sVar0;
}

void func_33(int iParam0, int iParam1)//Position - 0x268B
{
	unk_0x1D60449E9FA475EF(0);
	unk_0xA2AB07A46A0D6A4D(true);
	unk_0x1E56F4F04588C11A(0);
	unk_0xA12843789DC58EC9(true);
	unk_0x512840F67B7219D4(unk_0x9EB17624F44A8DA4(), 0);
	unk_0xC1CEF375B44856F4(false);
	unk_0x88D24C9A11A48F64(1);
	*iParam0 = unk_0xCB389937EDB1519A(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0, 1, 1, 1);
	unk_0xFA85ECEE588094C7("DRIVE", false);
	unk_0x4C15495E88D71C61(-7000f, -7000f, -100f, 7000f, 7000f, 315f, false, 1);
	unk_0x2EB451A3616DA1F8(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0);
	if (func_7(unk_0xFC1458A37D98B502()) && iParam1 == 1)
	{
		unk_0x60225D4F755DFDB1(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 500f, 0);
	}
}

void func_34(bool bParam0)//Position - 0x275A
{
	unk_0x1D29C781A978C4FB(2, bParam0);
	unk_0x1D29C781A978C4FB(3, bParam0);
	unk_0x1D29C781A978C4FB(4, bParam0);
	unk_0x1D29C781A978C4FB(5, bParam0);
	unk_0x1D29C781A978C4FB(6, bParam0);
	unk_0x1D29C781A978C4FB(7, bParam0);
	unk_0x1D29C781A978C4FB(8, bParam0);
	unk_0x1D29C781A978C4FB(9, bParam0);
	unk_0x1D29C781A978C4FB(10, bParam0);
	unk_0x1D29C781A978C4FB(11, bParam0);
	unk_0x1D29C781A978C4FB(12, bParam0);
}

void func_35(bool bParam0)//Position - 0x27B4
{
	if (bParam0)
	{
		func_39();
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			unk_0x872F1C1F8587CCC7(&Global_2324, 16);
		}
		Global_14453.f_1 = 1;
		if (func_38(0))
		{
			func_36(0);
		}
	}
	else if (Global_14453.f_1 == 1)
	{
		if (!Global_14453.f_1 == 0)
		{
			Global_14453.f_1 = 3;
		}
	}
}

void func_36(int iParam0)//Position - 0x2817
{
	if (Global_14615)
	{
		func_37(0, 0);
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
	if (!func_16())
	{
		Global_14453.f_1 = 3;
	}
}

void func_37(bool bParam0, bool bParam1)//Position - 0x2887
{
	if (bParam0)
	{
		if (func_38(0))
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

int func_38(int iParam0)//Position - 0x28FB
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

void func_39()//Position - 0x2955
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
	}
}

void func_40()//Position - 0x297E
{
	func_41();
	func_8(0, 1, 1, 0);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_41()//Position - 0x2996
{
	int iVar0;
	
	if (unk_0x6C97EEC6339FB45C())
	{
		if (unk_0xA8113D347D14630F())
		{
			unk_0xCFA828389A0C5B6B();
		}
		unk_0xA6C03E3E2533F8F3();
	}
	func_51(&iLocal_60);
	unk_0xEE203D16F93269FA("Big_Disp");
	unk_0x990A0EC8D6FEA4BB("LInvader");
	unk_0xA68F7B004463AB6F(&iLocal_51);
	unk_0xA68F7B004463AB6F(&iLocal_52);
	unk_0x087D097B0C8C07B9();
	iVar0 = 0;
	while (iVar0 < Local_42)
	{
		func_48(&(Local_42[iVar0 /*178*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_44)
	{
		func_45(&(Local_44[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_46)
	{
		func_45(&(Local_46[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_40)
	{
		func_44(iLocal_40[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		func_43(func_32(iVar0));
		iVar0++;
	}
	func_42(iLocal_63);
	func_8(0, 1, 1, 0);
}

void func_42(int iParam0)//Position - 0x2A89
{
	unk_0xA2AB07A46A0D6A4D(false);
	unk_0x1D60449E9FA475EF(3);
	unk_0xA12843789DC58EC9(false);
	unk_0x1E56F4F04588C11A(3);
	unk_0x512840F67B7219D4(unk_0x9EB17624F44A8DA4(), 1);
	unk_0xC1CEF375B44856F4(true);
	unk_0x88D24C9A11A48F64(0);
	unk_0xCA107A9AAF17E75F(iParam0, 0);
	unk_0xFA85ECEE588094C7("DRIVE", true);
	unk_0x4C15495E88D71C61(-7000f, -7000f, -100f, 7000f, 7000f, 315f, true, 1);
}

void func_43(char* sParam0)//Position - 0x2AEC
{
	unk_0xFCCDDE0E48CF9588(sParam0);
}

void func_44(int iParam0)//Position - 0x2AFA
{
	if (iParam0 != 0)
	{
		unk_0x14776E43F90DD454(iParam0);
	}
}

void func_45(var uParam0)//Position - 0x2B0E
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	
	sVar1 = func_47(uParam0->f_16);
	sVar2 = func_46(uParam0->f_16);
	iVar0 = 0;
	while (iVar0 < uParam0->f_17)
	{
		if (unk_0x6ADD12BF4D6D2587(uParam0->f_17[iVar0]) && !unk_0x191BE1BC8F26F3C1(uParam0->f_17[iVar0], 0))
		{
			unk_0x9C16A63EBDA5A08E(uParam0->f_17[iVar0], sVar2, sVar1, -1000f);
		}
		func_51(&(uParam0->f_17[iVar0]));
		iVar0++;
	}
}

char* func_46(int iParam0)//Position - 0x2B83
{
	char* sVar0;
	
	if (iParam0 == 0)
	{
	}
	sVar0 = "001077_01_14";
	return sVar0;
}

char* func_47(int iParam0)//Position - 0x2B99
{
	char* sVar0;
	
	if (iParam0 == 0)
	{
	}
	sVar0 = "misslester1b_crowdlow@14@";
	return sVar0;
}

void func_48(var uParam0)//Position - 0x2BAE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_50(uParam0[iVar0 /*17*/]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_155)
	{
		func_49(&(uParam0->f_155[iVar0 /*11*/].f_10));
		iVar0++;
	}
}

void func_49(int iParam0)//Position - 0x2BFA
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(*iParam0, 0))
		{
			unk_0xCFF0CD14B439821D(*iParam0, false, 1);
		}
		if (!unk_0x9761C10D57B68069(*iParam0))
		{
			unk_0xDD29FF4BAB8AFF9C(*iParam0, true, 0);
		}
		unk_0x68433819717660CF(iParam0);
	}
}

void func_50(var uParam0)//Position - 0x2C3B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_10)
	{
		func_49(&(uParam0->f_10[iVar0]));
		iVar0++;
	}
}

void func_51(int iParam0)//Position - 0x2C64
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (unk_0x6049C20F5D5C185B(*iParam0))
		{
			unk_0x6B7C10B19928914F(*iParam0, 1, true);
		}
		unk_0x452336926718D62A(iParam0);
	}
}

