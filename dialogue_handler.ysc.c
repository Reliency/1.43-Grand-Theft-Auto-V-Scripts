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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	vector3 vLocal_38[24] = "";
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	vector3 vLocal_42[24] = "";
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	char cLocal_46[64] = "";
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	vector3 vLocal_55[24] = "";
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	char* sLocal_59 = NULL;
	vector3 vLocal_60[24] = "";
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	char* sLocal_64 = NULL;
	char* sLocal_65 = NULL;
	char* sLocal_66 = NULL;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	vector3 vLocal_70[24] = "";
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	char* sLocal_74 = NULL;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_95[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_96[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_97[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_98 = 0;
	var uLocal_99 = 0;
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
	fLocal_22 = 0f;
	fLocal_26 = -0,0375f;
	fLocal_27 = 0,17f;
	iLocal_34 = 5000;
	iLocal_35 = 5000;
	unk_0x252CDD3D0F299441();
	while (true)
	{
		system::wait(0);
		if (unk_0xC80D31E4B587871C(Global_2324, 1))
		{
			if (!unk_0xC80D31E4B587871C(Global_2323, 20))
			{
				if (unk_0x0DBDCC9C5537E157())
				{
					if (Global_14441)
					{
						func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_14396)
						{
							func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0x0EE72DB1CD8A3B86(&Global_2324, 1);
				}
			}
		}
		if (unk_0xC80D31E4B587871C(Global_14622, 0))
		{
			if (!func_105())
			{
				if (!unk_0xC80D31E4B587871C(Global_14622, 1))
				{
					unk_0x872F1C1F8587CCC7(&Global_14622, 1);
					if (unk_0x3A711520F83BAE98())
					{
						iLocal_89 = unk_0xD1952A425B78FFC0();
					}
					else
					{
						iLocal_85 = unk_0x53C562FD2B9E3AB0();
					}
				}
				if (unk_0x3A711520F83BAE98())
				{
					iLocal_91 = unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), iLocal_89);
				}
				else
				{
					iLocal_86 = unk_0x53C562FD2B9E3AB0();
					iLocal_91 = (iLocal_86 - iLocal_85);
				}
				if (iLocal_91 < 3000)
				{
					if (func_103(&Global_15210, &Global_15826, &Global_15746, Global_15759, Global_16741, Global_16742, 0))
					{
						Global_14622 = 0;
					}
				}
				else
				{
					Global_14622 = 0;
				}
			}
		}
		if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0xC80D31E4B587871C(Global_4456448.f_17, 4))
		{
			if (Global_15756 != 0)
			{
				if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) == 0)
				{
					func_102();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_98();
		}
		switch (Global_15756)
		{
			case 0:
				break;
			
			case 1:
				if (Global_15762)
				{
					if (Global_15752 == 0)
					{
						func_96();
					}
					else
					{
						func_95();
						func_96();
					}
				}
				else if (Global_15752 == 0)
				{
					func_85();
				}
				else
				{
					func_95();
					func_67();
				}
				break;
			
			case 2:
				func_61();
				break;
			
			case 3:
				func_57();
				break;
			
			case 4:
				if (Global_15762)
				{
					if (Global_15764)
					{
						func_56();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			
			case 5:
				func_4();
				break;
			
			case 6:
				func_1();
				break;
			
			default:
				break;
		}
	}
}

void func_1()//Position - 0x24E
{
	Global_15766 = 0;
	Global_14452 = 0;
	func_2();
}

void func_2()//Position - 0x262
{
	Global_2621441 = 0;
	Global_2621442 = 0;
	Global_15767 = 0;
	Global_15768 = 0;
	Global_15769 = 0;
	Global_15770 = 0;
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
	Global_15760 = 0;
	Global_15761 = 0;
	Global_15803 = 0;
	Global_15804 = 0;
	Global_15807 = 0;
	Global_15809 = 0;
	Global_15808 = 0;
	Global_15811 = 0;
	Global_15810 = 0;
	Global_16773 = 0;
	Global_15813 = 0;
	if (Global_14453.f_1 == 10)
	{
	}
	else if (unk_0xC80D31E4B587871C(Global_2323, 11))
	{
		func_3();
	}
	Global_15762 = 0;
	Global_15763 = 0;
	Global_15764 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16746 = 0;
	Global_16753 = 0;
	Global_16752 = 0;
	Global_16749 = 0;
	Global_16748 = 0;
	Global_16750 = 0;
	Global_16751 = 0;
	Global_15752 = 0;
	Global_15753 = 0;
	Global_15754 = 0;
	Global_15755 = 0;
	Global_16014 = 0;
	Global_16777 = 5000;
	Global_14436 = 0;
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 20);
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 24);
	unk_0x0EE72DB1CD8A3B86(&Global_2324, 23);
	unk_0x0EE72DB1CD8A3B86(&Global_2325, 0);
	unk_0x0EE72DB1CD8A3B86(&Global_2324, 9);
	unk_0x0EE72DB1CD8A3B86(&Global_2324, 31);
	unk_0x0EE72DB1CD8A3B86(&Global_2324, 17);
	unk_0x0EE72DB1CD8A3B86(&Global_2325, 5);
	Global_16740 = 0;
	Global_16739 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		Global_15756 = 4;
	}
	else
	{
		Global_15756 = 0;
		Global_16767 = 0;
		Global_16778 = unk_0x53C562FD2B9E3AB0();
	}
}

void func_3()//Position - 0x398
{
	if (!Global_70856)
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (unk_0xC80D31E4B587871C(Global_2323, 11))
			{
				if (!Global_14396)
				{
					unk_0xB42437AE1AC08FDC(unk_0xFC1458A37D98B502(), 0, 1);
				}
				if (Global_70856)
				{
					unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 244, true);
					unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 243, true);
					unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 242, true);
				}
				unk_0x0EE72DB1CD8A3B86(&Global_2323, 11);
			}
		}
	}
}

void func_4()//Position - 0x402
{
	Global_15766 = 0;
	Global_14452 = 0;
	func_2();
}

void func_5()//Position - 0x416
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502()))
		{
			if (Global_15812 == 0)
			{
				func_6();
			}
		}
	}
	if (iLocal_33 == 1)
	{
		func_6();
		func_6();
	}
	if (Global_16748 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_16767 == 1)
			{
				unk_0x5601C51854E56CAD(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_16767 == 0)
		{
			unk_0x495EB1DD7306493A();
			iLocal_31 = 0;
		}
	}
	else if (Global_16750 > 0)
	{
		iLocal_37 = unk_0x53C562FD2B9E3AB0();
		if ((iLocal_37 - iLocal_36) > Global_16750)
		{
			unk_0x278F19E969607FAC();
			Global_16748 = 0;
		}
	}
	if (Global_16767 == 0)
	{
		if (!unk_0x42111BD51D233AAB())
		{
			Global_15756 = 6;
		}
	}
}

void func_6()//Position - 0x4B0
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

void func_7()//Position - 0x4D1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x0DBDCC9C5537E157())
	{
		if (!unk_0xC80D31E4B587871C(Global_2323, 11))
		{
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					if (Global_70856 == 0)
					{
						func_54();
					}
				}
			}
		}
		else if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
			{
				if (Global_70856 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_70856 == 0)
	{
		func_53();
	}
	if (iLocal_33 == 1)
	{
		func_50(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_16767 == 1)
		{
			if (Global_16768 == 1)
			{
				unk_0x5601C51854E56CAD(1);
				iLocal_31 = 1;
				Global_16768 = 0;
			}
		}
	}
	else if (Global_16767 == 0)
	{
		if (Global_16768 == 1)
		{
			unk_0x495EB1DD7306493A();
			iLocal_31 = 0;
			Global_16768 = 0;
		}
	}
	if (Global_15809 == 0)
	{
		if (!Global_15769)
		{
			if (!unk_0xC80D31E4B587871C(Global_2324, 31))
			{
				if (!unk_0xC80D31E4B587871C(Global_2324, 27))
				{
					if (func_49())
					{
						if (Global_14453.f_1 > 6)
						{
							unk_0x872F1C1F8587CCC7(&Global_2324, 24);
							unk_0x872F1C1F8587CCC7(&Global_2324, 27);
							unk_0x0EE72DB1CD8A3B86(&Global_2324, 26);
							unk_0x0EE72DB1CD8A3B86(&Global_2324, 25);
						}
					}
				}
			}
		}
	}
	if (unk_0x0DBDCC9C5537E157() == 0 && Global_15769 == 0)
	{
		if (Global_15809 == 1)
		{
			unk_0x872F1C1F8587CCC7(&Global_2324, 23);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2324, 23);
		}
		if (Global_15813)
		{
			if (Global_15809 == 0)
			{
				Global_15375 = { Global_15814 };
				Global_15832 = { Global_15820 };
				Global_15766 = 0;
				Global_16773 = 6;
				func_48();
				return;
			}
		}
		if (!Global_15811)
		{
			while (Global_15809 == 1)
			{
				system::wait(0);
				if (Global_14453.f_1 < 6)
				{
					Global_15809 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						if (Global_15811)
						{
							iLocal_30 = 1;
							Global_16771 = 1;
							func_106(Global_14434, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(4), -1f, -1f, &Global_15898, &(Global_104555.f_28020[Global_1638 /*29*/].f_7), &(Global_104555.f_28020[Global_1638 /*29*/].f_3), &(Global_104555.f_28020[Global_1638 /*29*/].f_3), 0);
							func_46(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_14441)
							{
								func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_106(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								unk_0x872F1C1F8587CCC7(&Global_2323, 17);
								func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_106(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								unk_0x872F1C1F8587CCC7(&Global_2323, 17);
								func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_16769 = 1;
							if (Global_104555.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
							{
								func_106(Global_14434, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(4), -1f, -1f, &Global_15898, "CELL_300", &(Global_117[Global_1638 /*10*/].f_4), "CELL_195", 0);
								func_46(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_106(Global_14434, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(4), -1f, -1f, &Global_15898, &(Global_104555.f_28020[Global_1638 /*29*/].f_7), &(Global_104555.f_28020[Global_1638 /*29*/].f_3), &(Global_104555.f_28020[Global_1638 /*29*/].f_3), 0);
								func_46(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_14441)
							{
								func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_106(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
						}
					}
					if (func_45(2, Global_14422, 0))
					{
						func_43();
						Global_14379 = 0,19f;
						Global_15809 = 0;
						func_41();
						if (Global_15811)
						{
							Global_15375 = { Global_15892 };
							Global_16773 = 5;
						}
						else if (Global_15754 > 0)
						{
							Global_16014 = 1;
							Global_15756 = 0;
							Global_16777 = 0;
							if (unk_0xC80D31E4B587871C(Global_2324, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_16740 + 1)
								{
									uLocal_94[iVar0] = func_40(&(Global_16015[iVar0 /*6*/]));
									uLocal_95[iVar0] = func_40(&(Global_16377[iVar0 /*6*/]));
									iVar0++;
								}
								func_39(Global_16740, &Global_15045, Global_1638, &Global_15832, &uLocal_94, &uLocal_95, 9, 0, 0, 0, 0);
							}
							else if (Global_15754 == 2)
							{
								func_22(&Global_15045, Global_1638, &Global_15832, &(Global_15910[0 /*6*/]), &(Global_15962[0 /*6*/]), &(Global_15910[1 /*6*/]), &(Global_15962[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_16773 = 1;
							Global_16769 = 0;
							Global_16771 = 0;
							Global_15766 = 0;
							func_21();
							return;
						}
						else
						{
							Global_15375 = { Global_15850 };
							Global_16773 = 1;
						}
						Global_16769 = 0;
						Global_16771 = 0;
						Global_15766 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14423, 0) || unk_0xC80D31E4B587871C(Global_2323, 24))
					{
						func_43();
						Global_14379 = 0,19f;
						Global_15809 = 0;
						func_41();
						if (Global_15811)
						{
							Global_15375 = { Global_15886 };
							Global_16773 = 4;
						}
						else if (Global_15754 > 0)
						{
							Global_16014 = 1;
							Global_15756 = 0;
							Global_16777 = 0;
							if (unk_0xC80D31E4B587871C(Global_2324, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_16739 + 1)
								{
									uLocal_96[iVar1] = func_40(&(Global_16196[iVar1 /*6*/]));
									uLocal_97[iVar1] = func_40(&(Global_16558[iVar1 /*6*/]));
									iVar1++;
								}
								func_39(Global_16739, &Global_15045, Global_1638, &Global_15832, &uLocal_96, &uLocal_97, 9, 0, 0, 0, 0);
							}
							else if (Global_15754 == 2)
							{
								func_22(&Global_15045, Global_1638, &Global_15832, &(Global_15923[0 /*6*/]), &(Global_15975[0 /*6*/]), &(Global_15923[1 /*6*/]), &(Global_15975[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_16773 = 2;
							Global_16769 = 0;
							Global_16771 = 0;
							Global_15766 = 0;
							func_21();
							return;
						}
						else
						{
							Global_15375 = { Global_15856 };
							Global_16773 = 2;
						}
						Global_16769 = 0;
						Global_16771 = 0;
						Global_15766 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14425, 0))
					{
						if (Global_15811)
						{
							Global_14379 = 0,19f;
							Global_15809 = 0;
							func_41();
							func_43();
							Global_15375 = { Global_15880 };
							Global_16773 = 3;
							Global_16769 = 0;
							Global_16771 = 0;
							Global_15766 = 0;
							func_21();
							func_48();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_15809)
			{
				system::wait(0);
				if (Global_14453.f_1 < 6)
				{
					Global_15809 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						func_46(Global_14434, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_106(Global_14434, "SET_DATA_SLOT", system::to_float(18), system::to_float(0), system::to_float(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_106(Global_14434, "SET_DATA_SLOT", system::to_float(18), system::to_float(1), system::to_float(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_106(Global_14434, "SET_DATA_SLOT", system::to_float(18), system::to_float(2), system::to_float(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_46(Global_14434, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_20(Global_14434, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_14441)
						{
							func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_106(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
						iLocal_98 = 0;
						iLocal_30 = 1;
					}
					func_14();
					if (func_45(2, Global_14422, 0))
					{
						func_43();
						Global_15809 = 0;
						func_41();
						unk_0x008F3E3CC076EA0E(Global_14434, "GET_CURRENT_SELECTION");
						uLocal_99 = unk_0x8E8D3D52EE7CEFD3();
						while (!unk_0x042804C27782882D(uLocal_99))
						{
							system::wait(0);
						}
						iVar2 = unk_0x8EA167BD67A3F619(uLocal_99);
						switch (iVar2)
						{
							case 0:
								Global_15375 = { Global_15886 };
								Global_16773 = 4;
								break;
							
							case 1:
								Global_15375 = { Global_15880 };
								Global_16773 = 3;
								break;
							
							case 2:
								Global_15375 = { Global_15892 };
								Global_16773 = 5;
								break;
						}
						Global_16769 = 0;
						Global_16771 = 0;
						Global_15766 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14423, 0))
					{
						Global_15809 = 0;
						func_41();
					}
				}
			}
		}
		if (Global_15757 == 0)
		{
			unk_0xB31CEFB00C146C91(false);
			system::settimera(0);
			while (system::timera() < 900 && Global_14453.f_1 == 9)
			{
				system::wait(0);
			}
			Global_15756 = 6;
		}
		unk_0x4AFBCBFDE748D4E0(-1, "Hang_Up", &Global_14442, 1);
		func_13();
		Global_14453.f_1 = Global_14455;
		func_8();
	}
	else if (Global_14615 == 0)
	{
		if (func_45(2, Global_14421, 0))
		{
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
				{
					if (unk_0xC80D31E4B587871C(Global_2323, 20))
					{
					}
					else
					{
						Global_14431 = 1;
						func_41();
						unk_0xB31CEFB00C146C91(false);
						Global_15805 = 1;
						Global_15806 = 1;
						Global_15756 = 6;
						func_13();
						Global_14453.f_1 = Global_14455;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()//Position - 0xE40
{
	vector3 vVar0[24];
	
	if (Global_14436 == 1)
	{
		return;
	}
	if (Global_14453.f_1 < 4)
	{
		return;
	}
	while (!unk_0x34D11AB5BA7922C2(Global_14434))
	{
		system::wait(0);
	}
	switch (Global_14453.f_1)
	{
		case 6:
			func_46(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_2928);
			if (Global_2928 == 1)
			{
				func_46(Global_14434, "DISPLAY_VIEW", 1f, system::to_float(Global_14457), -1082130432, -1082130432, -1082130432);
				Global_14433 = Global_14457;
			}
			else
			{
				func_46(Global_14434, "DISPLAY_VIEW", 1f, system::to_float(Global_14458), -1082130432, -1082130432, -1082130432);
				Global_14433 = Global_14458;
			}
			if (Global_14441)
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14617 == 0)
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
			}
			else if (Global_70856)
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
			}
			else
			{
				if (Global_14616 == 1)
				{
					if (Global_14441)
					{
						func_106(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_106(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14441)
				{
					func_106(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_106(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x872F1C1F8587CCC7(&Global_2323, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_46(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_106(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
			if (unk_0xC80D31E4B587871C(Global_2323, 20))
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14396)
				{
					func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14452 == 1)
			{
				func_10();
				func_46(Global_14434, "SET_THEME", system::to_float(Global_104555.f_14021[Global_14453 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15769)
				{
					unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(4);
					unk_0xD07D5CD276368D36(0);
					unk_0xD07D5CD276368D36(2);
					unk_0x7E099EB35339C80D("CELL_CONDFON");
					unk_0x854FACC4E5F40C82(&Global_15771);
					unk_0x9748595E4799A2CF();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0x271AA5469AF471B3();
				}
				else if (Global_104555.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
				{
					func_106(Global_14434, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(2), -1f, -1f, &(Global_117[Global_1638 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_106(Global_14434, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(2), -1f, -1f, &(Global_104555.f_28020[Global_1638 /*29*/].f_3), &(Global_104555.f_28020[Global_1638 /*29*/].f_7), "CELL_217", &(Global_104555.f_28020[Global_1638 /*29*/].f_3), 0);
				}
				func_46(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15756 == 4 || Global_15756 == 3)
			{
				func_46(Global_14434, "SET_THEME", system::to_float(Global_104555.f_14021[Global_14453 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_15769)
				{
					unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(4);
					unk_0xD07D5CD276368D36(0);
					unk_0xD07D5CD276368D36(2);
					unk_0x7E099EB35339C80D("CELL_CONDFON");
					unk_0x854FACC4E5F40C82(&Global_15771);
					unk_0x9748595E4799A2CF();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					unk_0x271AA5469AF471B3();
				}
				else
				{
					if (Global_16014)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_104555.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
					{
						func_46(Global_14434, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_106(Global_14434, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_117[Global_1638 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_46(Global_14434, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_106(Global_14434, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_104555.f_28020[Global_1638 /*29*/].f_3), &(Global_104555.f_28020[Global_1638 /*29*/].f_7), &cVar0, &(Global_104555.f_28020[Global_1638 /*29*/].f_3), 0);
					}
				}
				func_46(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_21();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)//Position - 0x13D7
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_10()//Position - 0x13E9
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (Global_14453 == 0)
		{
			switch (Global_104555.f_14021[Global_14453 /*20*/].f_6)
			{
				case 1:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 0);
					break;
				
				case 2:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 1);
					break;
				
				case 3:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 2);
					break;
				
				case 4:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 3);
					break;
				
				case 5:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 4);
					break;
				
				case 6:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 5);
					break;
				
				case 7:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14453 == 1)
		{
			switch (Global_104555.f_14021[Global_14453 /*20*/].f_6)
			{
				case 1:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 6);
					break;
				
				case 2:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 0);
					break;
				
				case 3:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 1);
					break;
				
				case 4:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 2);
					break;
				
				case 5:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 3);
					break;
				
				case 6:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 4);
					break;
				
				case 7:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14453 == 2)
		{
			switch (Global_104555.f_14021[Global_14453 /*20*/].f_6)
			{
				case 1:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 5);
					break;
				
				case 2:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 6);
					break;
				
				case 3:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 1);
					break;
				
				case 4:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 0);
					break;
				
				case 5:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 2);
					break;
				
				case 6:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 3);
					break;
				
				case 7:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14453 == 3)
		{
			switch (Global_4267355)
			{
				case 1:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 0);
					break;
				
				case 2:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 1);
					break;
				
				case 3:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 2);
					break;
				
				case 4:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 3);
					break;
				
				case 5:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 4);
					break;
				
				case 6:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 5);
					break;
				
				case 7:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_11(int iParam0)//Position - 0x1660
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
	
	Global_16824 = 0;
	Global_2928 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2892[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_12(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 3))
								{
									iVar2 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14619 = 0;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_9(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar2);
								unk_0x271AA5469AF471B3();
							}
							if (Global_2456825)
							{
								if (iVar1 == 14)
								{
									func_106(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_104555.f_14111[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104555.f_14111[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104555.f_14111[iVar3 /*104*/].f_99[Global_14453] == 1)
											{
												Global_16824++;
											}
										}
									}
									iVar3++;
								}
								func_106(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16824), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70856)
								{
									iVar4 = 0;
									iVar4 = Global_4265877;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4265878[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4265878[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4265878[iVar5 /*104*/].f_99[Global_14453] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_106(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar4), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14453)
									{
										case 0:
											iVar6 = Global_36998;
											break;
										
										case 1:
											iVar6 = Global_36999;
											break;
										
										case 2:
											iVar6 = Global_37000;
											break;
										
										default:
											break;
									}
									func_106(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar6), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_106(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_9(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(Global_2329);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_9(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar7);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 3))
								{
									iVar8 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14619 = 0;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_9(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar8);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 8)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_9(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if ((iVar1 == 23 && unk_0x74C475EB8E73D398(&(Global_2330[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xC80D31E4B587871C(Global_2324, 6))
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_9(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if (Global_2330[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626277.f_1;
								func_106(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_106(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(0), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_12(int iParam0)//Position - 0x1BF9
{
	return Global_35861 == iParam0;
}

void func_13()//Position - 0x1C07
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return;
	}
	switch (Global_14455)
	{
		case 5:
			Global_14455 = 6;
			break;
		
		case 6:
			if (unk_0xC80D31E4B587871C(Global_2324, 5))
			{
				Global_14455 = 6;
				unk_0x0EE72DB1CD8A3B86(&Global_2324, 5);
			}
			else
			{
				Global_14455 = 3;
			}
			break;
		
		case 7:
			Global_14455 = 3;
			break;
		
		case 3:
			if (unk_0xC80D31E4B587871C(Global_2324, 5))
			{
				Global_14455 = 6;
				unk_0x0EE72DB1CD8A3B86(&Global_2324, 5);
			}
			else
			{
				Global_14455 = 3;
			}
			break;
		
		default:
			Global_14455 = 3;
			break;
	}
}

void func_14()//Position - 0x1CA0
{
	if (iLocal_98)
	{
		if (system::timera() > 50)
		{
			iLocal_98 = 0;
		}
	}
	if (iLocal_98 == 0)
	{
		if (func_45(2, Global_14429, 0) || unk_0xE8C126B7ADBB9D63(2, 181))
		{
			func_18();
			iLocal_98 = 1;
			system::settimera(0);
		}
		if (func_45(2, Global_14430, 0) || unk_0xE8C126B7ADBB9D63(2, 180))
		{
			func_15();
			iLocal_98 = 1;
			system::settimera(0);
		}
	}
}

void func_15()//Position - 0x1D09
{
	func_46(Global_14434, "SET_INPUT_EVENT", system::to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
	func_16();
}

void func_16()//Position - 0x1D46
{
	if (func_17())
	{
		if (Global_14620 == 0)
		{
			unk_0x4EF44BE7DE3DC97E(2);
		}
		else
		{
			unk_0x4EF44BE7DE3DC97E(1);
		}
	}
}

int func_17()//Position - 0x1D69
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70856)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x666DEE82C2B4C5B5();
	iVar1 = unk_0x8E8C94609BA4BEA9(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4267357 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_18()//Position - 0x1DB0
{
	func_46(Global_14434, "SET_INPUT_EVENT", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
	func_19();
}

void func_19()//Position - 0x1DED
{
	if (func_17())
	{
		if (Global_14620 == 0)
		{
			unk_0x4EF44BE7DE3DC97E(1);
		}
		else
		{
			unk_0x4EF44BE7DE3DC97E(2);
		}
	}
}

void func_20(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x1E10
{
	unk_0x008F3E3CC076EA0E(iParam0, sParam1);
	func_9(sParam2);
	if (!unk_0xAB019B170BF1309C(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0xAB019B170BF1309C(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0xAB019B170BF1309C(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0xAB019B170BF1309C(sParam6))
	{
		func_9(sParam6);
	}
	unk_0x271AA5469AF471B3();
}

void func_21()//Position - 0x1E6B
{
	if (unk_0x34D11AB5BA7922C2(Global_14434))
	{
		if (Global_14452 == 1)
		{
			if (Global_14441)
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15803)
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xC80D31E4B587871C(Global_2323, 20))
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_106(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
		}
		else
		{
			func_106(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
			if (unk_0xC80D31E4B587871C(Global_2323, 20))
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14396)
				{
					func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_22(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x1FE0
{
	var uVar0;
	var uVar1;
	
	func_38(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_37();
	if (iParam8 == 1)
	{
		Global_15768 = 1;
	}
	else
	{
		Global_15768 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_35(2, &uVar0, &uVar1, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_23(&uVar0, &uVar1, iParam7, bParam11);
}

int func_23(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x203F
{
	int iVar0;
	
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam2 > Global_15758)
			{
				if (bParam3 == 0)
				{
					unk_0xB31CEFB00C146C91(false);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
				}
				else
				{
					func_102();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x42111BD51D233AAB())
		{
			return 0;
		}
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_33();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16752 = Global_16753;
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15375.f_370 = Global_16745;
		Global_15752 = Global_15753;
		Global_15754 = Global_15755;
		if (Global_16014 == 0)
		{
			Global_15910[0 /*6*/] = { Global_15936[0 /*6*/] };
			Global_15910[1 /*6*/] = { Global_15936[1 /*6*/] };
			Global_15962[0 /*6*/] = { Global_15988[0 /*6*/] };
			Global_15962[1 /*6*/] = { Global_15988[1 /*6*/] };
			Global_15923[0 /*6*/] = { Global_15949[0 /*6*/] };
			Global_15923[1 /*6*/] = { Global_15949[1 /*6*/] };
			Global_15975[0 /*6*/] = { Global_16001[0 /*6*/] };
			Global_15975[1 /*6*/] = { Global_16001[1 /*6*/] };
		}
		if (Global_15762)
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 20);
			unk_0x0EE72DB1CD8A3B86(&Global_2324, 17);
			unk_0x0EE72DB1CD8A3B86(&Global_2325, 0);
			if (bParam3)
			{
				func_27();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (func_26())
				{
					return 0;
				}
				if (unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0xA9287933382DAD33(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x63D4520BD966ECD5(unk_0xFC1458A37D98B502(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70856)
				{
					if (Global_16014 == 0)
					{
						if (unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()))
						{
							return 0;
						}
						if (unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4()))
						{
							return 0;
						}
						if (unk_0x0A1D4A2F0A088C25(unk_0xFC1458A37D98B502()))
						{
							return 0;
						}
						if (unk_0x8E1DC2E7000CD6A1(unk_0x9EB17624F44A8DA4()))
						{
							return 0;
						}
					}
				}
			}
			if (func_25())
			{
				return 0;
			}
			else
			{
				switch (Global_14453.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
					}
			}
			func_24();
			Global_15766 = bParam3;
		}
		Global_15758 = iParam2;
		if (Global_15752 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15752)
			{
				StringCopy(&(Global_15375.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15375.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14622 = 0;
		func_48();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15758 || iParam2 == Global_15758)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_102();
	}
	return 0;
}

void func_24()//Position - 0x23A9
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	unk_0x0EE72DB1CD8A3B86(&Global_2324, 16);
}

int func_25()//Position - 0x243E
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_26()//Position - 0x2465
{
	int iVar0;
	int iVar1;
	
	if (Global_70856)
	{
		iVar0 = 0;
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar1, 1);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x689303135DD1F2F5() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xBAEC0BAAC7E135C7(unk_0xFC1458A37D98B502(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_27()//Position - 0x24FE
{
	if (func_12(14))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_28();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70856)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

var func_28()//Position - 0x25A0
{
	func_29();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_29()//Position - 0x25B9
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_32(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_31(unk_0xFC1458A37D98B502());
			if (func_30(iVar0) && (!func_12(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_30(Global_104555.f_2353.f_539.f_4301))
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

bool func_30(int iParam0)//Position - 0x26B6
{
	return iParam0 < 3;
}

int func_31(int iParam0)//Position - 0x26C2
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_32(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_32(int iParam0)//Position - 0x26FF
{
	if (func_30(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_33()//Position - 0x2729
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

bool func_34(int iParam0, int iParam1)//Position - 0x2781
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

void func_35(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x27BC
{
	func_36(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_36(var uParam0)//Position - 0x282C
{
	Global_15753 = uParam0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
}

void func_37()//Position - 0x2852
{
	Global_15804 = 0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_15770 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 0;
	Global_15810 = 0;
	Global_2621441 = 0;
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x288B
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = iParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

int func_39(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x28E1
{
	func_38(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_37();
	if (iParam7 == 1)
	{
		Global_15768 = 1;
	}
	else
	{
		Global_15768 = 0;
	}
	func_36(uParam0);
	return func_23(uParam4, uParam5, iParam6, bParam10);
}

var func_40(var uParam0)//Position - 0x291F
{
	return uParam0;
}

void func_41()//Position - 0x2929
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Menu_Accept", &Global_14442, 1);
		func_42();
	}
}

void func_42()//Position - 0x294F
{
	if (func_17())
	{
		unk_0x4EF44BE7DE3DC97E(5);
	}
}

void func_43()//Position - 0x2963
{
	if (func_44())
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				if (!Global_14396)
				{
					if (!unk_0xC80D31E4B587871C(Global_2323, 11))
					{
						func_54();
					}
				}
			}
		}
	}
}

int func_44()//Position - 0x29A3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			if (Global_14396 == 0)
			{
				if (Global_1638 != 128)
				{
					if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if (Global_15756 != 2)
						{
						}
					}
				}
			}
		}
		if (func_12(14))
		{
			return 0;
		}
		if (unk_0xACB5C13823C09021(unk_0xFC1458A37D98B502(), 0))
		{
			return 0;
		}
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (!unk_0xBABB179B9D27EF62())
			{
				if (unk_0x0BA31FF7931F3DD3(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502()) || unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502())) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x6CCC46F395931037(unk_0xFC1458A37D98B502()))
		{
			return 0;
		}
		if (Global_103603)
		{
			return 0;
		}
	}
	if (Global_70856)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x666DEE82C2B4C5B5();
	iVar1 = unk_0x8E8C94609BA4BEA9(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xBABB179B9D27EF62()))
	{
		iVar2 = 1;
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iVar3 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				if ((((((((unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(iVar3)) || unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(iVar3))) || unk_0x49A1CABC032F7E16(unk_0x82FF3DFBC3965CC0(iVar3))) || unk_0x82FF3DFBC3965CC0(iVar3) == joaat("seashark")) || unk_0x82FF3DFBC3965CC0(iVar3) == joaat("seashark2")) || unk_0x82FF3DFBC3965CC0(iVar3) == joaat("rhino")) || unk_0x82FF3DFBC3965CC0(iVar3) == joaat("submersible")) || unk_0x82FF3DFBC3965CC0(iVar3) == joaat("submersible2")) || unk_0x82FF3DFBC3965CC0(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4267357 || iVar2 == 1)
	{
		if (unk_0x8F38E94BBF3404CD(joaat("apptrackify")) > 0 || Global_104555.f_14021.f_89)
		{
			if (unk_0x8F38E94BBF3404CD(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

int func_45(int iParam0, int iParam1, int iParam2)//Position - 0x2BCA
{
	if (unk_0xE8C126B7ADBB9D63(iParam0, iParam1) || (iParam2 == 1 && unk_0x4CD14B4B1E8BD8BA(iParam0, iParam1)))
	{
		if (unk_0xB9D80B12FE4456A5())
		{
			if (unk_0xE59B25D23E4C4B3E() == 0 || (unk_0x02BBA5FDE77816B9() && unk_0x4C4813CAAD70E814(2)))
			{
				return 0;
			}
		}
		if (unk_0x0F30C1F1717A6437() || unk_0x08D525BE62A22AE0())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_46(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x2C3C
{
	unk_0x008F3E3CC076EA0E(iParam0, sParam1);
	unk_0xD07D5CD276368D36(system::round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam6));
	}
	unk_0x271AA5469AF471B3();
}

void func_47()//Position - 0x2C9F
{
	if (func_44())
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				if (!Global_14396)
				{
					if (unk_0xC80D31E4B587871C(Global_2323, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_48()//Position - 0x2CDE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB31CEFB00C146C91(false);
	Global_15756 = 1;
}

int func_49()//Position - 0x2D10
{
	if (unk_0x3A711520F83BAE98())
	{
		iLocal_91 = unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), iLocal_90);
	}
	else
	{
		iLocal_88 = unk_0x53C562FD2B9E3AB0();
		iLocal_91 = (iLocal_88 - iLocal_87);
	}
	return 0;
}

void func_50(int iParam0)//Position - 0x2D3C
{
	if (Global_14615)
	{
		func_51(0, 0);
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
	if (!func_25())
	{
		Global_14453.f_1 = 3;
	}
}

void func_51(bool bParam0, bool bParam1)//Position - 0x2DAC
{
	if (bParam0)
	{
		if (func_52(0))
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

int func_52(int iParam0)//Position - 0x2E20
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

void func_53()//Position - 0x2E7A
{
	if (func_45(2, Global_14430, 0))
	{
		if (Global_16767 == 0)
		{
			if (Global_15762)
			{
				if (unk_0xC80D31E4B587871C(Global_2324, 17))
				{
				}
				else
				{
					unk_0xCC3A36F62E916826();
				}
			}
		}
	}
}

void func_54()//Position - 0x2EAE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (func_55() && unk_0xACB5C13823C09021(unk_0xFC1458A37D98B502(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_70856)
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && iVar1 == 0)
		{
			iVar2 = unk_0x742D2DEFFDC66EB8(unk_0xFC1458A37D98B502(), 0);
			if (Global_70856)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x97610277C0BBC6FC(unk_0xFC1458A37D98B502()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x97610277C0BBC6FC(unk_0xFC1458A37D98B502()))
			{
				iVar0 = 1;
			}
			if (!Global_14396)
			{
				if (Global_1638 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
						{
							if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
							{
							}
							else
							{
								if (Global_70856)
								{
									unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 244, false);
									unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 243, false);
									unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 242, false);
								}
								unk_0x872F1C1F8587CCC7(&Global_2323, 11);
								unk_0xB42437AE1AC08FDC(unk_0xFC1458A37D98B502(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_55()//Position - 0x2FD1
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x666DEE82C2B4C5B5();
	iVar1 = unk_0x8E8C94609BA4BEA9(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_56()//Position - 0x2FF5
{
	if (Global_70856 == 0)
	{
		func_53();
	}
	if (iLocal_33 == 1)
	{
		func_50(0);
	}
	if (iLocal_30 == 0)
	{
		iLocal_30 = 1;
		Global_16769 = 1;
		if (Global_104555.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
		{
			func_106(Global_14434, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(4), -1f, -1f, &Global_15898, "CELL_300", "CELL_195", "CELL_195", 0);
			func_46(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_106(Global_14434, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(4), -1f, -1f, &Global_15898, &(Global_104555.f_28020[Global_1638 /*29*/].f_7), &(Global_104555.f_28020[Global_1638 /*29*/].f_3), &(Global_104555.f_28020[Global_1638 /*29*/].f_3), 0);
			func_46(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_14379 = 0,2f;
		if (Global_14441)
		{
			func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_106(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
	}
	if (Global_15809 == 1)
	{
		if (Global_14453.f_1 < 6)
		{
			Global_15809 = 0;
		}
		else
		{
			if (Global_14393 == 0)
			{
				if (func_45(2, Global_14422, 0))
				{
					Global_14379 = 0,19f;
					Global_15809 = 0;
					func_41();
					Global_16774 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_45(2, Global_14423, 0))
			{
				Global_14379 = 0,19f;
				Global_15809 = 0;
				func_41();
				Global_16774 = 2;
			}
		}
	}
	else if (Global_16774 == 2)
	{
		if (Global_15757 == 0)
		{
			unk_0xB31CEFB00C146C91(false);
			Global_15756 = 6;
		}
		func_13();
		Global_14453.f_1 = Global_14455;
		func_8();
	}
	else if (!unk_0x0DBDCC9C5537E157())
	{
		iLocal_32 = 0;
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
		unk_0x4AFBCBFDE748D4E0(-1, "Hang_Up", &Global_14442, 1);
		func_13();
		Global_14453.f_1 = Global_14455;
		func_8();
	}
}

void func_57()//Position - 0x3237
{
	if (Global_14623 == 1)
	{
		if (unk_0x0DBDCC9C5537E157())
		{
			if (unk_0x673A4EC010B5CE7A())
			{
				Global_14623 = 0;
			}
		}
		if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			Global_14623 = 0;
			unk_0xB31CEFB00C146C91(false);
			Global_15756 = 6;
		}
	}
	if (system::timerb() > iLocal_35)
	{
		if (Global_14623 == 1)
		{
			Global_14623 = 0;
		}
	}
	if (system::timera() < Global_16777 || Global_14623 == 1)
	{
		if (func_45(2, Global_14421, 0))
		{
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
				{
					if (unk_0xC80D31E4B587871C(Global_2323, 20))
					{
					}
					else
					{
						Global_14431 = 1;
						func_41();
						unk_0xB31CEFB00C146C91(false);
						Global_15805 = 1;
						Global_15756 = 6;
						unk_0x0EE72DB1CD8A3B86(&Global_2323, 27);
						if (!Global_15767)
						{
							unk_0x872F1C1F8587CCC7(&Global_2324, 5);
						}
						func_13();
						Global_14453.f_1 = Global_14455;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 27);
		Global_15756 = 4;
		Global_15813 = 0;
		func_60();
		func_59();
		if (!Global_15769)
		{
			if (Global_16773 == 0)
			{
				if (!unk_0xC80D31E4B587871C(Global_2325, 5))
				{
					unk_0x278F19E969607FAC();
				}
				unk_0x0EE72DB1CD8A3B86(&Global_2325, 5);
			}
			else
			{
				unk_0x66B904A0B2B549DB(Global_15375.f_368, Global_15375.f_369);
			}
		}
		func_58();
	}
}

void func_58()//Position - 0x3364
{
	if (unk_0x3A711520F83BAE98())
	{
		iLocal_90 = unk_0xD1952A425B78FFC0();
	}
	else
	{
		iLocal_87 = unk_0x53C562FD2B9E3AB0();
	}
}

void func_59()//Position - 0x3382
{
	if (Global_15769)
	{
		if (Global_70856)
		{
			if (unk_0x34D11AB5BA7922C2(Global_14434))
			{
				if (!unk_0xB9D80B12FE4456A5())
				{
					func_106(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					unk_0x872F1C1F8587CCC7(&(Global_2512808.f_1707), 15);
				}
			}
		}
	}
}

void func_60()//Position - 0x33D0
{
	if (unk_0x34D11AB5BA7922C2(Global_14434))
	{
		if (!Global_15764)
		{
			func_106(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
			if (unk_0xC80D31E4B587871C(Global_2323, 20))
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14396)
				{
					func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15769)
			{
				unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
				unk_0xD07D5CD276368D36(4);
				unk_0xD07D5CD276368D36(0);
				unk_0xD07D5CD276368D36(2);
				unk_0x7E099EB35339C80D("CELL_CONDFON");
				unk_0x854FACC4E5F40C82(&Global_15771);
				unk_0x9748595E4799A2CF();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				unk_0x271AA5469AF471B3();
			}
			else if (Global_104555.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
			{
				func_106(Global_14434, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_117[Global_1638 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_106(Global_14434, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_104555.f_28020[Global_1638 /*29*/].f_3), &(Global_104555.f_28020[Global_1638 /*29*/].f_7), "CELL_219", &(Global_104555.f_28020[Global_1638 /*29*/].f_3), 0);
			}
		}
		func_46(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_61()//Position - 0x3583
{
	if (unk_0x3A711520F83BAE98())
	{
		iLocal_92 = unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), iLocal_78);
		iLocal_93 = unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), iLocal_81);
	}
	else
	{
		iLocal_77 = unk_0x53C562FD2B9E3AB0();
		iLocal_92 = (iLocal_77 - iLocal_76);
		iLocal_80 = unk_0x53C562FD2B9E3AB0();
		iLocal_93 = (iLocal_80 - iLocal_79);
	}
	if (Global_15803 == 1)
	{
		if (func_44())
		{
			if (iLocal_92 > 4000)
			{
				if (unk_0xC80D31E4B587871C(Global_2323, 14))
				{
					if (unk_0x34D11AB5BA7922C2(Global_14434))
					{
						func_41();
						Global_14452 = 2;
						func_60();
						func_59();
					}
				}
			}
		}
		else if (iLocal_92 > 2000)
		{
			if (unk_0xC80D31E4B587871C(Global_2323, 14))
			{
				if (unk_0x34D11AB5BA7922C2(Global_14434))
				{
					func_41();
					Global_14452 = 2;
					func_60();
					func_59();
				}
			}
		}
	}
	if (iLocal_93 > 10000)
	{
		Global_14452 = 3;
	}
	if (Global_14452 == 2)
	{
		iLocal_30 = 0;
		Global_15756 = 4;
		func_54();
		Global_15813 = 0;
		func_60();
		func_59();
		if (!Global_15769)
		{
			if (Global_16773 == 0)
			{
				unk_0x278F19E969607FAC();
			}
			else
			{
				unk_0x66B904A0B2B549DB(Global_15375.f_368, Global_15375.f_369);
			}
		}
		func_58();
		Global_16772 = 0;
	}
	if (Global_15803 == 0)
	{
		if (Global_14452 == 3)
		{
			if (Global_15769)
			{
				func_63();
				func_50(0);
			}
			else
			{
				func_62();
				Global_16772 = 1;
				unk_0xB31CEFB00C146C91(false);
				Global_15756 = 6;
				func_13();
				Global_14453.f_1 = Global_14455;
				func_8();
			}
		}
	}
	else if (Global_14452 == 3)
	{
	}
}

void func_62()//Position - 0x36D7
{
}

void func_63()//Position - 0x36DF
{
	Global_2518688.f_2 = 1;
	Global_2518688.f_38 = 1;
	if (unk_0xDEC0EB6EAE9BC575())
	{
		if (unk_0x19733C00399875C0())
		{
			while (unk_0x2EEBA8A2DF2CA2C6())
			{
				system::wait(0);
			}
			unk_0xE0A8DD52CBB7AA93();
			Global_2518688 = 0;
			Global_2518688.f_2 = 0;
		}
		else if (func_66(Global_2518688.f_20))
		{
			if (unk_0xFFE9B6D8F03AC353(&(Global_2518688.f_20)))
			{
				if (!unk_0xC021F9C062ACF697(&(Global_2518688.f_20)))
				{
					func_64();
				}
			}
		}
		else
		{
			func_64();
		}
	}
	else
	{
		func_64();
	}
	if (Global_2518688.f_37)
	{
		func_50(0);
	}
	Global_2518688.f_37 = 0;
	Global_2518688.f_3 = 0;
}

void func_64()//Position - 0x377F
{
	Global_2518688.f_1 = 0;
	Global_2518688 = 0;
	Global_2518688.f_2 = 0;
	Global_2518688.f_33 = -1;
	Global_2518688.f_34 = -1;
	StringCopy(&(Global_2518688.f_4), "", 64);
	StringCopy(&(Global_2518688.f_39[0 /*16*/]), "", 64);
	Global_2518688.f_38 = 0;
	Global_2518688.f_56 = 0;
	Global_2518688.f_57 = 0;
	Global_2518688.f_58 = -2;
	Global_2518688.f_3 = 0;
	func_65(&(Global_2518688.f_20));
}

void func_65(var uParam0)//Position - 0x37F2
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

bool func_66(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x383A
{
	return unk_0xA024F2175B7F181A(&uParam0, 13);
}

void func_67()//Position - 0x384A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	
	iLocal_75 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	while (iLocal_75 < Global_15752)
	{
		func_84();
		func_83();
		func_82();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_42 = { Global_15375.f_6[iLocal_75 /*6*/] };
			StringConCat(&cLocal_42, "A", 24);
			Global_14624[iVar2 /*6*/] = { Global_15375.f_6[iLocal_75 /*6*/] };
			StringConCat(&(Global_14624[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_14624[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_14624[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (unk_0xA1800C71952C596F(&cLocal_38))
			{
				StringCopy(&cLocal_46, unk_0xB2E1B414DD88808E(&cLocal_38), 64);
				iVar3 = func_81(iVar13);
				iVar4 = func_80(iVar13);
				uVar5 = func_78(iVar13);
				uLocal_67 = func_77();
				uLocal_68 = func_76();
				uLocal_69 = func_75();
				uVar6 = func_74(iVar13);
				uVar7 = func_73(iVar13);
				uVar8 = func_72(iVar13);
				uVar12 = func_71(iVar13);
				uVar9 = func_70(iVar13);
				uVar10 = func_69(iVar13);
				uVar11 = func_68(iVar13);
				if (unk_0xA1800C71952C596F(&(Global_14624[iVar2 /*6*/])))
				{
					if (unk_0x74C475EB8E73D398(&(Global_14624[iVar2 /*6*/]), &(Global_15375.f_187[iLocal_75 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						unk_0x3DB9345F87A86C29(iVar3, &cLocal_46, &(Global_14624[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (unk_0xA1800C71952C596F(&cLocal_42))
			{
				StringCopy(&cLocal_46, unk_0xB2E1B414DD88808E(&cLocal_42), 64);
				iVar3 = func_81(0);
				iVar4 = func_80(0);
				uVar5 = func_78(0);
				uLocal_67 = func_77();
				uLocal_68 = func_76();
				uLocal_69 = func_75();
				uVar6 = func_74(0);
				uVar7 = func_73(0);
				uVar8 = func_72(0);
				uVar12 = func_71(0);
				uVar9 = func_70(0);
				uVar10 = func_69(0);
				uVar11 = func_68(0);
				unk_0x3DB9345F87A86C29(iVar3, &cLocal_46, &(Global_15375.f_6[iLocal_75 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_14624[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_14624[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_75++;
		iLocal_29 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_15762 == 0)
	{
		unk_0xC3571B43120052D3(uLocal_68);
		unk_0xF6D66A19E8A2574B(uLocal_69);
		unk_0xA4B9E1306A867108(Global_15375.f_368, Global_15375.f_369, Global_15375.f_370, uLocal_67);
		Global_15756 = 4;
	}
}

int func_68(int iParam0)//Position - 0x3AC9
{
	char* sVar0;
	
	sVar0 = unk_0x2E978FB1119B1F4A(unk_0xB2E1B414DD88808E(&cLocal_70), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (unk_0x74C475EB8E73D398(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_69(int iParam0)//Position - 0x3AFE
{
	char* sVar0;
	
	sVar0 = unk_0x2E978FB1119B1F4A(unk_0xB2E1B414DD88808E(&cLocal_70), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (unk_0x74C475EB8E73D398(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_70(int iParam0)//Position - 0x3B33
{
	char* sVar0;
	
	sVar0 = unk_0x2E978FB1119B1F4A(unk_0xB2E1B414DD88808E(&cLocal_70), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (unk_0x74C475EB8E73D398(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_71(int iParam0)//Position - 0x3B68
{
	char* sVar0;
	
	sVar0 = unk_0x2E978FB1119B1F4A(unk_0xB2E1B414DD88808E(&cLocal_70), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (unk_0x74C475EB8E73D398(sVar0, "0"))
	{
		return 1;
	}
	if (unk_0x74C475EB8E73D398(sVar0, "1"))
	{
		return 1;
	}
	if (unk_0x74C475EB8E73D398(sVar0, "2"))
	{
		return 2;
	}
	if (unk_0x74C475EB8E73D398(sVar0, "3"))
	{
		return 3;
	}
	if (unk_0x74C475EB8E73D398(sVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_72(int iParam0)//Position - 0x3BDE
{
	char* sVar0;
	
	sVar0 = unk_0x2E978FB1119B1F4A(unk_0xB2E1B414DD88808E(&cLocal_70), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (unk_0x74C475EB8E73D398(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_73(int iParam0)//Position - 0x3C13
{
	char* sVar0;
	
	sVar0 = unk_0x2E978FB1119B1F4A(unk_0xB2E1B414DD88808E(&cLocal_70), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (unk_0x74C475EB8E73D398(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0)//Position - 0x3C48
{
	char* sVar0;
	
	sVar0 = unk_0x2E978FB1119B1F4A(unk_0xB2E1B414DD88808E(&cLocal_70), iParam0 * 7, iParam0 * 7 + 1);
	if (unk_0x74C475EB8E73D398(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_75()//Position - 0x3C7B
{
	char* sVar0;
	
	sVar0 = unk_0x2E978FB1119B1F4A(unk_0xB2E1B414DD88808E(&cLocal_60), 2, 3);
	if (unk_0x74C475EB8E73D398(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76()//Position - 0x3CA6
{
	char* sVar0;
	
	sVar0 = unk_0x2E978FB1119B1F4A(unk_0xB2E1B414DD88808E(&cLocal_60), 1, 2);
	if (unk_0x74C475EB8E73D398(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77()//Position - 0x3CD1
{
	char* sVar0;
	
	sVar0 = unk_0x2E978FB1119B1F4A(unk_0xB2E1B414DD88808E(&cLocal_60), 0, 1);
	if (unk_0x74C475EB8E73D398(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)//Position - 0x3CFC
{
	char* sVar0;
	
	sVar0 = unk_0x2E978FB1119B1F4A(unk_0xB2E1B414DD88808E(&cLocal_55), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_79(sVar0);
}

int func_79(char* sParam0)//Position - 0x3D22
{
	if (unk_0x74C475EB8E73D398(sParam0, "0"))
	{
		return 0;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "1"))
	{
		return 1;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "2"))
	{
		return 2;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "3"))
	{
		return 3;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "4"))
	{
		return 4;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "5"))
	{
		return 5;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "6"))
	{
		return 6;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "7"))
	{
		return 7;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "8"))
	{
		return 8;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "9"))
	{
		return 9;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "A"))
	{
		return 10;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "B"))
	{
		return 11;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "C"))
	{
		return 12;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "D"))
	{
		return 13;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "E"))
	{
		return 14;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "F"))
	{
		return 15;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "G"))
	{
		return 16;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "H"))
	{
		return 17;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "I"))
	{
		return 18;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "J"))
	{
		return 19;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "K"))
	{
		return 20;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "L"))
	{
		return 21;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "M"))
	{
		return 22;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "N"))
	{
		return 23;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "O"))
	{
		return 24;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "P"))
	{
		return 25;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "Q"))
	{
		return 26;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "R"))
	{
		return 27;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "S"))
	{
		return 28;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "T"))
	{
		return 29;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "U"))
	{
		return 30;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "V"))
	{
		return 31;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "W"))
	{
		return 32;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "X"))
	{
		return 33;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "Y"))
	{
		return 34;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "Z"))
	{
		return 35;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_80(int iParam0)//Position - 0x3FBF
{
	char* sVar0;
	
	sVar0 = unk_0x2E978FB1119B1F4A(unk_0xB2E1B414DD88808E(&cLocal_55), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_79(sVar0);
}

int func_81(int iParam0)//Position - 0x3FE5
{
	char* sVar0;
	
	sVar0 = unk_0x2E978FB1119B1F4A(unk_0xB2E1B414DD88808E(&cLocal_55), iParam0 * 3, iParam0 * 3 + 1);
	return func_79(sVar0);
}

void func_82()//Position - 0x400B
{
	cLocal_70 = { Global_15375.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_70, "LF", 24);
	if (unk_0xA1800C71952C596F(&cLocal_70))
	{
		sLocal_74 = unk_0xB2E1B414DD88808E(&cLocal_70);
		if (unk_0x8C1C362CA8299475(sLocal_74))
		{
		}
	}
}

void func_83()//Position - 0x4044
{
	cLocal_60 = { Global_15375.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_60, "IF", 24);
	if (unk_0xA1800C71952C596F(&cLocal_60))
	{
		sLocal_64 = unk_0x2E978FB1119B1F4A(unk_0xB2E1B414DD88808E(&cLocal_60), 0, 1);
		if (unk_0x8C1C362CA8299475(sLocal_64))
		{
		}
		sLocal_65 = unk_0x2E978FB1119B1F4A(unk_0xB2E1B414DD88808E(&cLocal_60), 1, 2);
		if (unk_0x8C1C362CA8299475(sLocal_65))
		{
		}
		sLocal_66 = unk_0x2E978FB1119B1F4A(unk_0xB2E1B414DD88808E(&cLocal_60), 2, 3);
		if (unk_0x8C1C362CA8299475(sLocal_66))
		{
		}
	}
}

void func_84()//Position - 0x40B1
{
	cLocal_55 = { Global_15375.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_55, "SL", 24);
	if (unk_0xA1800C71952C596F(&cLocal_55))
	{
		sLocal_59 = unk_0xB2E1B414DD88808E(&cLocal_55);
		if (unk_0x8C1C362CA8299475(sLocal_59))
		{
		}
	}
}

void func_85()//Position - 0x40EA
{
	func_86();
	unk_0xC3571B43120052D3(uLocal_68);
	unk_0xF6D66A19E8A2574B(uLocal_69);
	if (Global_16748)
	{
		unk_0xB0513F6932A854CF(Global_15375.f_368, Global_15375.f_369, Global_15375.f_370, uLocal_67);
		iLocal_36 = unk_0x53C562FD2B9E3AB0();
	}
	else
	{
		unk_0xA4B9E1306A867108(Global_15375.f_368, Global_15375.f_369, Global_15375.f_370, uLocal_67);
	}
	Global_15756 = 4;
}

void func_86()//Position - 0x4145
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	iLocal_33 = 0;
	if (unk_0x5FC2EFCBC0115DAC(&Global_15832))
	{
		if (unk_0x74C475EB8E73D398(&Global_15832, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
		iVar13 = 0;
		if (unk_0xFD6215BABFD843F2() || unk_0x177281F5FA205A38())
		{
			if (Global_1573344 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_70856 || func_94())
		{
			if (Global_1573344 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_92())
		{
			iVar14 = 1;
		}
		if (func_91(unk_0x8B948C59217A295D(&Global_15832)))
		{
			iVar14 = 0;
			Global_2621442 = 0;
			iVar13 = 1;
		}
		if (((Global_15758 < 5 || Global_15758 == 10) || Global_15758 == 12) || Global_15758 == 13)
		{
			if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
			{
				unk_0xBCBC53983EC3B1BA(&Global_15832, 7);
				while (!unk_0x9F0887BCBFCF3C2F(7))
				{
					system::wait(0);
				}
			}
			else
			{
				unk_0x278235573030B7EC(&Global_15832, 15);
				while (!unk_0x9F0887BCBFCF3C2F(15))
				{
					system::wait(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
		{
			unk_0xBCBC53983EC3B1BA(&Global_15832, 6);
			while (!unk_0x9F0887BCBFCF3C2F(6))
			{
				system::wait(0);
			}
		}
		else
		{
			unk_0x278235573030B7EC(&Global_15832, 14);
			while (!unk_0x9F0887BCBFCF3C2F(14))
			{
				system::wait(0);
			}
		}
	}
	else
	{
		iLocal_33 = 1;
		return;
	}
	unk_0xBA473E2CF2EBBE94();
	func_90();
	func_89();
	func_88();
	func_87();
	Global_16766 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_42 = { Global_15375 };
		StringConCat(&cLocal_42, "A", 24);
		Global_14624[iVar2 /*6*/] = { Global_15375 };
		StringConCat(&(Global_14624[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_14624[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_14624[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (unk_0xA1800C71952C596F(&cLocal_38))
		{
			StringCopy(&cLocal_46, unk_0xB2E1B414DD88808E(&cLocal_38), 64);
			iVar3 = func_81(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4267331 == 0)
				{
				}
			}
			iVar4 = func_80(iVar2);
			uVar5 = func_78(iVar2);
			uLocal_67 = func_77();
			uLocal_68 = func_76();
			uLocal_69 = func_75();
			uVar6 = func_74(iVar2);
			uVar7 = func_73(iVar2);
			uVar8 = func_72(iVar2);
			uVar12 = func_71(iVar2);
			uVar9 = func_70(iVar2);
			uVar10 = func_69(iVar2);
			uVar11 = func_68(iVar2);
			if (unk_0xA1800C71952C596F(&(Global_14624[iVar2 /*6*/])))
			{
				if (Global_16746 == 0 && Global_16752 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x3DB9345F87A86C29(iVar3, &cLocal_46, &(Global_14624[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (unk_0x74C475EB8E73D398(&(Global_14624[iVar2 /*6*/]), &Global_16754))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x3DB9345F87A86C29(iVar3, &cLocal_46, &(Global_14624[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_16766 = iVar2;
					if (Global_16752 == 1)
					{
						Global_16752 = 0;
					}
				}
			}
			else if (Global_16752 == 0 && Global_16746 == 0)
			{
				unk_0x3DB9345F87A86C29(iVar3, &cLocal_46, &cLocal_46, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (unk_0xA1800C71952C596F(&cLocal_42))
			{
				StringCopy(&cLocal_46, unk_0xB2E1B414DD88808E(&cLocal_42), 64);
				iVar3 = func_81(iVar2);
				iVar4 = func_80(iVar2);
				uVar5 = func_78(iVar2);
				uLocal_67 = func_77();
				uLocal_68 = func_76();
				uLocal_69 = func_75();
				uVar6 = func_74(iVar2);
				uVar7 = func_73(iVar2);
				uVar8 = func_72(iVar2);
				uVar12 = func_71(iVar2);
				uVar9 = func_70(iVar2);
				uVar10 = func_69(iVar2);
				uVar11 = func_68(iVar2);
				unk_0x3DB9345F87A86C29(iVar3, &cLocal_46, &Global_15375, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_87()//Position - 0x4550
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_15045[iVar0 /*10*/].f_7 == 1)
		{
			if (unk_0x6ADD12BF4D6D2587(Global_15045[iVar0 /*10*/]) || Global_15045[iVar0 /*10*/] == 0)
			{
				unk_0x834A52998E312324(iVar0, Global_15045[iVar0 /*10*/], &(Global_15045[iVar0 /*10*/].f_1));
			}
			if (Global_15045.f_161 == iVar0)
			{
				if ((Global_15045.f_162 != 0f && Global_15045.f_162.f_1 != 0f) && Global_15045.f_162.f_2 != 0f)
				{
					system::wait(0);
					unk_0xA3DE712D3318EEA3(Global_15045.f_161, Global_15045.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4267331 == 1)
	{
		Global_4267331 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4267150[iVar0 /*9*/].f_7 == 1)
			{
				if (unk_0x6ADD12BF4D6D2587(Global_4267150[iVar0 /*9*/]) || Global_4267150[iVar0 /*9*/] == 0)
				{
					unk_0x834A52998E312324(Global_4267150[iVar0 /*9*/].f_8, Global_4267150[iVar0 /*9*/], &(Global_4267150[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_88()//Position - 0x4660
{
	cLocal_70 = { Global_15375 };
	StringConCat(&cLocal_70, "LF", 24);
	if (unk_0xA1800C71952C596F(&cLocal_70))
	{
		sLocal_74 = unk_0xB2E1B414DD88808E(&cLocal_70);
		if (unk_0x8C1C362CA8299475(sLocal_74))
		{
		}
	}
}

void func_89()//Position - 0x4693
{
	cLocal_60 = { Global_15375 };
	StringConCat(&cLocal_60, "IF", 24);
	if (unk_0xA1800C71952C596F(&cLocal_60))
	{
		sLocal_64 = unk_0x2E978FB1119B1F4A(unk_0xB2E1B414DD88808E(&cLocal_60), 0, 1);
		if (unk_0x8C1C362CA8299475(sLocal_64))
		{
		}
		sLocal_65 = unk_0x2E978FB1119B1F4A(unk_0xB2E1B414DD88808E(&cLocal_60), 1, 2);
		if (unk_0x8C1C362CA8299475(sLocal_65))
		{
		}
		sLocal_66 = unk_0x2E978FB1119B1F4A(unk_0xB2E1B414DD88808E(&cLocal_60), 2, 3);
		if (unk_0x8C1C362CA8299475(sLocal_66))
		{
		}
	}
}

void func_90()//Position - 0x46FA
{
	cLocal_55 = { Global_15375 };
	StringConCat(&cLocal_55, "SL", 24);
	if (unk_0xA1800C71952C596F(&cLocal_55))
	{
		sLocal_59 = unk_0xB2E1B414DD88808E(&cLocal_55);
		if (unk_0x8C1C362CA8299475(sLocal_59))
		{
		}
	}
}

int func_91(int iParam0)//Position - 0x472D
{
	switch (iParam0)
	{
		case -1311531715:
		case -389729032:
		case -2064440312:
		case 1151576899:
		case 677852396:
		case 1017913414:
		case 1994430427:
		case 1430620518:
		case 1883599394:
		case 1146168957:
		case 785850502:
		case 1566303118:
		case 1220013368:
		case 71115730:
		case -251854137:
		case -243052328:
		case -1417718107:
		case -351584050:
		case 1854373416:
		case -1753835094:
		case -353948811:
		case -1883622926:
		case -46742865:
		case 1260190997:
		case 1080008561:
		case 1151572586:
		case 964109535:
		case -436910453:
		case 659972380:
		case 2120484290:
		case 1439733926:
		case 26437732:
		case 303339033:
		case 2088730730:
		case -1771498136:
		case -1993049002:
		case -1370815517:
		case -1267951531:
		case 60077066:
		case 1821448936:
		case 2043251532:
		case 1314391445:
		case -1267946537:
		case 1507036282:
		case 214936528:
		case 1071832486:
		case 379745124:
		case 409276020:
		case -495085533:
		case -383711312:
		case -1809286053:
		case -229061423:
		case 1399593776:
		case -1592188591:
		case 2119072113:
		case -2005721953:
		case -439426052:
			return 1;
		
		default:
	}
	return 0;
}

int func_92()//Position - 0x4897
{
	if (Global_2621550)
	{
		if (func_12(0))
		{
			if (Global_3145728 || func_93(0))
			{
				return 1;
			}
		}
	}
	if (Global_2621549)
	{
		if (func_12(0))
		{
			if (Global_3670016 || func_93(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_93(bool bParam0)//Position - 0x48EA
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

var func_94()//Position - 0x4915
{
	return Global_1312831;
}

void func_95()//Position - 0x4921
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (unk_0xFD6215BABFD843F2() || unk_0x177281F5FA205A38())
	{
		if (Global_1573344 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_70856)
	{
		if (Global_1573344 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_92())
	{
		iVar1 = 1;
	}
	if (unk_0x5FC2EFCBC0115DAC(&Global_15832))
	{
		if (unk_0x74C475EB8E73D398(&Global_15832, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
	}
	if (func_91(unk_0x8B948C59217A295D(&Global_15832)))
	{
		iVar1 = 0;
		Global_2621442 = 0;
		iVar0 = 1;
	}
	if (((Global_15758 < 5 || Global_15758 == 10) || Global_15758 == 12) || Global_15758 == 13)
	{
		if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
		{
			unk_0xBCBC53983EC3B1BA(&Global_15832, 7);
			while (!unk_0x9F0887BCBFCF3C2F(7))
			{
				system::wait(0);
			}
		}
		else
		{
			unk_0x278235573030B7EC(&Global_15832, 15);
			while (!unk_0x9F0887BCBFCF3C2F(15))
			{
				system::wait(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
	{
		unk_0xBCBC53983EC3B1BA(&Global_15832, 6);
		while (!unk_0x9F0887BCBFCF3C2F(6))
		{
			system::wait(0);
		}
	}
	else
	{
		unk_0x278235573030B7EC(&Global_15832, 14);
		while (!unk_0x9F0887BCBFCF3C2F(14))
		{
			system::wait(0);
		}
	}
	unk_0xBA473E2CF2EBBE94();
	func_87();
}

void func_96()//Position - 0x4A86
{
	while (Global_14436 == 1 && unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		system::wait(0);
	}
	Global_14436 = 0;
	if (unk_0xC80D31E4B587871C(Global_2323, 20))
	{
		unk_0x872F1C1F8587CCC7(&Global_2324, 1);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2324, 1);
	}
	Global_14437 = 0;
	if (Global_15752 == 0)
	{
		if (!Global_15769)
		{
			func_86();
		}
	}
	else
	{
		func_67();
	}
	Global_14623 = 0;
	if (Global_15766)
	{
		if (Global_16773 == 0)
		{
			if (Global_15769 == 0)
			{
				iLocal_34 = 5000;
				unk_0x3DF7FFA7A7EEA4BB(Global_15375.f_368, Global_15375.f_369);
			}
			else
			{
				iLocal_34 = 0;
			}
		}
		else
		{
			iLocal_34 = 0;
		}
		Global_14623 = 1;
		system::settimerb(0);
		while ((Global_14623 == 1 && Global_15756 == 1) && system::timerb() < iLocal_34)
		{
			system::wait(0);
			if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				Global_14623 = 0;
				unk_0xB31CEFB00C146C91(false);
				Global_15756 = 6;
			}
			if (unk_0x0DBDCC9C5537E157())
			{
				if (unk_0x673A4EC010B5CE7A())
				{
					Global_14623 = 0;
				}
			}
		}
		if (system::timerb() > iLocal_34)
		{
		}
		if (Global_15756 != 1)
		{
		}
		if (Global_14623 == 0)
		{
		}
	}
	Global_14623 = 0;
	if (((Global_14453.f_1 == 1 || Global_14453.f_1 == 0) || Global_15756 != 1) || Global_14419 == 1)
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
	else
	{
		if (Global_15764)
		{
			Global_16774 = 0;
			iLocal_32 = 0;
		}
		if (Global_15766 == 0)
		{
			if (Global_15807 == 0)
			{
				Global_14455 = Global_14453.f_1;
				Global_15807 = 1;
			}
			iLocal_30 = 0;
			if (Global_16773 == 0)
			{
				unk_0x3DF7FFA7A7EEA4BB(Global_15375.f_368, Global_15375.f_369);
				system::wait(0);
				Global_15756 = 3;
				Global_14623 = 1;
				system::settimerb(0);
				unk_0x872F1C1F8587CCC7(&Global_2323, 27);
				system::settimera(0);
			}
			else
			{
				Global_14623 = 0;
				Global_15756 = 4;
			}
			Global_14452 = 0;
			if (Global_15767 == 1)
			{
				if (Global_14453.f_1 == 10)
				{
				}
				if (!Global_14453.f_1 == 9)
				{
					if (Global_14453.f_1 > 4)
					{
						if (Global_14436 == 0)
						{
							Global_14453.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_14453.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_14453.f_1 == 4)
				{
					system::wait(0);
					if (Global_14623 == 1)
					{
						if (unk_0x0DBDCC9C5537E157())
						{
							if (unk_0x673A4EC010B5CE7A())
							{
								Global_14623 = 0;
							}
						}
					}
				}
				if (Global_14453.f_1 == 6)
				{
				}
				if (Global_14453.f_1 == 10)
				{
				}
				if (Global_14453.f_1 == 3)
				{
					unk_0xB31CEFB00C146C91(false);
					Global_15756 = 6;
					Global_14437 = 1;
					return;
				}
				Global_14453.f_1 = 9;
				func_8();
			}
			if (unk_0x3A711520F83BAE98())
			{
				iLocal_84 = unk_0xD1952A425B78FFC0();
			}
			else
			{
				iLocal_82 = unk_0x53C562FD2B9E3AB0();
			}
			while (Global_14453.f_1 != 9 && Global_14436 == 0)
			{
				system::wait(0);
				if (Global_14623 == 1)
				{
					if (unk_0x0DBDCC9C5537E157())
					{
						if (unk_0x673A4EC010B5CE7A())
						{
							Global_14623 = 0;
						}
					}
				}
				if (unk_0x3A711520F83BAE98())
				{
					iLocal_91 = unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), iLocal_84);
				}
				else
				{
					iLocal_83 = unk_0x53C562FD2B9E3AB0();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 15000)
					{
						Global_16772 = 1;
						Global_14436 = 1;
					}
				}
			}
			if (!unk_0xC80D31E4B587871C(Global_2323, 11))
			{
				if (func_44() == 0)
				{
					func_54();
				}
			}
			if (Global_14436 == 0)
			{
				if (!Global_16773 == 0)
				{
					Global_15813 = 0;
					func_60();
					func_59();
					if (!Global_15769)
					{
						if (Global_16773 == 0)
						{
							unk_0x278F19E969607FAC();
						}
						else
						{
							unk_0x66B904A0B2B549DB(Global_15375.f_368, Global_15375.f_369);
						}
					}
					func_58();
				}
			}
			else
			{
				func_97();
				Global_14437 = 1;
			}
		}
		else
		{
			Global_14452 = 1;
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					if (Global_14453.f_1 == 3)
					{
					}
				}
				else
				{
					unk_0x0EE72DB1CD8A3B86(&Global_2324, 21);
				}
			}
			if (Global_15807 == 0)
			{
				Global_14455 = Global_14453.f_1;
				Global_15807 = 1;
			}
			if (Global_14453.f_1 == 3)
			{
				Global_14453.f_1 = 4;
			}
			else
			{
				while (Global_14453.f_1 == 4)
				{
					system::wait(0);
				}
				if (Global_14453.f_1 == 6)
				{
				}
				Global_14453.f_1 = 9;
				func_8();
			}
			if (unk_0x3A711520F83BAE98())
			{
				iLocal_84 = unk_0xD1952A425B78FFC0();
			}
			else
			{
				iLocal_82 = unk_0x53C562FD2B9E3AB0();
			}
			while (Global_14453.f_1 != 9 && Global_14436 == 0)
			{
				system::wait(0);
				if (unk_0x3A711520F83BAE98())
				{
					iLocal_91 = unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), iLocal_84);
				}
				else
				{
					iLocal_83 = unk_0x53C562FD2B9E3AB0();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 20000)
					{
						Global_16772 = 1;
						Global_14436 = 1;
						unk_0x0EE72DB1CD8A3B86(&Global_2324, 21);
					}
				}
			}
			if (Global_14436 == 0)
			{
				Global_15756 = 2;
			}
			else
			{
				func_97();
				Global_14437 = 1;
			}
			if (unk_0x3A711520F83BAE98())
			{
				iLocal_78 = unk_0xD1952A425B78FFC0();
				iLocal_81 = unk_0xD1952A425B78FFC0();
			}
			else
			{
				iLocal_76 = unk_0x53C562FD2B9E3AB0();
				iLocal_79 = unk_0x53C562FD2B9E3AB0();
			}
		}
	}
}

void func_97()//Position - 0x4F1C
{
	Global_14622 = 0;
	func_102();
}

void func_98()//Position - 0x4F2C
{
	float fVar0;
	
	fVar0 = func_99(Global_14406[Global_14398 /*3*/], Global_14399[Global_14398 /*3*/], Global_14413, Global_14384, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_16770 == 0)
		{
			unk_0x9B47B379EE749C38(true);
		}
		iLocal_32 = 0;
	}
}

float func_99(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5)//Position - 0x4F74
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_4267358 == 0)
	{
		if (unk_0xC80D31E4B587871C(Global_2323, 14) && Global_14453.f_1 < 4)
		{
			unk_0x494F5FA1BF017D58(&Var0);
			if (Global_14406[Global_14398 /*3*/].f_1 == Var0.f_1)
			{
				Global_4267358 = 1;
			}
		}
	}
	if (func_44() && Global_4267358 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x53C562FD2B9E3AB0();
	}
	fVar1 = func_101((system::to_float((unk_0x53C562FD2B9E3AB0() - iLocal_18)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0,670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = system::sin((fVar1 * 90f));
		}
		Global_14381 = { func_100(vParam0, vParam1, fVar2) };
		Global_14384 = { func_100(vParam2, vParam3, fVar2) };
	}
	else
	{
		Global_14381 = { vParam1 };
		Global_14384 = { vParam3 };
	}
	unk_0x0D75BB9393CE608D(Global_14381);
	unk_0x59F9FBA80E3B1114(Global_14384, 0);
	return fVar1;
}

Vector3 func_100(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x5086
{
	return vParam0 + vParam1 - vParam0 * Vector(fParam2, fParam2, fParam2);
}

float func_101(float fParam0, float fParam1, float fParam2)//Position - 0x50A0
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

void func_102()//Position - 0x50C7
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if ((unk_0x0DBDCC9C5537E157() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(true);
		Global_15756 = 6;
		return;
	}
}

bool func_103(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x511E
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
	return func_104(sParam2, iParam3, 0);
}

int func_104(char* sParam0, int iParam1, bool bParam2)//Position - 0x516C
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					unk_0xB31CEFB00C146C91(false);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
				}
				else
				{
					func_102();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x42111BD51D233AAB())
		{
			return 0;
		}
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_33();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 20);
			unk_0x0EE72DB1CD8A3B86(&Global_2324, 17);
			unk_0x0EE72DB1CD8A3B86(&Global_2325, 0);
			if (bParam2)
			{
				func_27();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (func_26())
				{
					return 0;
				}
				if (unk_0xCA87B182A4F3C252(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0xA9287933382DAD33(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x63D4520BD966ECD5(unk_0xFC1458A37D98B502(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70856)
				{
					if (unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()))
					{
						return 0;
					}
					if (unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4()))
					{
						return 0;
					}
					if (unk_0x0A1D4A2F0A088C25(unk_0xFC1458A37D98B502()))
					{
						return 0;
					}
					if (unk_0x8E1DC2E7000CD6A1(unk_0x9EB17624F44A8DA4()))
					{
						return 0;
					}
				}
			}
			if (func_25())
			{
				return 0;
			}
			else
			{
				switch (Global_14453.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xC80D31E4B587871C(Global_2323, 9))
				{
					return 0;
				}
			}
			func_24();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_48();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_102();
	}
	return 0;
}

int func_105()//Position - 0x5438
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_106(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x545A
{
	unk_0x008F3E3CC076EA0E(iParam0, sParam1);
	unk_0xD07D5CD276368D36(system::round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam6));
	}
	if (!unk_0xAB019B170BF1309C(sParam7))
	{
		func_9(sParam7);
	}
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0xAB019B170BF1309C(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0xAB019B170BF1309C(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0xAB019B170BF1309C(sParam11))
	{
		func_9(sParam11);
	}
	unk_0x271AA5469AF471B3();
}

