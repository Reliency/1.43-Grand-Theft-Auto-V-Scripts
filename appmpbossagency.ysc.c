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
	float fLocal_47 = 0f;
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
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 10;
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
	var uLocal_73 = 2;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 8;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	struct<2> Local_99 = { 0, 0 } ;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	struct<2> Local_102 = { 0, 0 } ;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	struct<2> Local_105 = { 0, 0 } ;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	struct<2> Local_108 = { 0, 0 } ;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	struct<2> Local_111 = { 0, 0 } ;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	struct<2> Local_114 = { 0, 0 } ;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	var uLocal_121 = 0;
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
	fLocal_47 = ((0,05f + 0,275f) - 0,01f);
	StringCopy(&Local_99, "CELL_206", 16);
	StringCopy(&Local_102, "CELL_214", 16);
	StringCopy(&Local_105, "CELL_243", 16);
	StringCopy(&Local_108, "CELL_244", 16);
	StringCopy(&Local_111, "CELL_265", 16);
	StringCopy(&Local_114, "CELL_300", 16);
	unk_0x252CDD3D0F299441();
	func_95(&iLocal_120);
	iLocal_117 = 0;
	func_93();
	func_92(Global_14434, "SET_THEME", system::to_float(5), -1082130432, -1082130432, -1082130432, -1082130432);
	func_82(0);
	while (true)
	{
		system::wait(0);
		func_81();
		func_80();
		if (!Global_14453.f_1 == 9 && Global_14453.f_1 > 3)
		{
			switch (iLocal_98)
			{
				case 0:
					func_45();
					break;
				
				case 1:
					func_29();
					break;
				
				case 3:
					func_5();
					break;
				
				case 2:
					func_4();
					break;
				
				default:
					break;
			}
			if (Global_14453.f_1 != 8)
			{
				if (func_3())
				{
					func_2();
				}
			}
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()//Position - 0x170
{
	if (((Global_14453.f_1 == 1 || Global_14453.f_1 == 3) || Global_14453.f_1 == 0) || Global_14397 == 1)
	{
		Global_14440 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x1B3
{
	Global_1626277.f_6 = 0;
	unk_0x96A3D9A8A4C7AFD4();
}

int func_3()//Position - 0x1C6
{
	if (Global_2929 == 1 || Global_14453.f_1 < 7)
	{
		Global_14440 = 1;
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x1EF
{
}

void func_5()//Position - 0x1F7
{
	int iVar0;
	
	Global_1626277.f_6 = 1;
	if (iLocal_119)
	{
		if (unk_0x58F436C557A0FD7A(2, Global_14422))
		{
			iLocal_119 = 0;
		}
		return;
	}
	if (unk_0x58F436C557A0FD7A(2, 201))
	{
		iLocal_98 = 1;
		iVar0 = func_27(iLocal_117, 0);
		func_6(iVar0);
		return;
	}
	if (unk_0x58F436C557A0FD7A(2, 202))
	{
		iLocal_98 = 1;
		return;
	}
	ui::_set_warning_message_2("HUD_INPUT23", "BA_APP_PASS_W", 36, 0, 0, -1, 0, 0, 1, 0);
}

void func_6(int iParam0)//Position - 0x25E
{
	int iVar0;
	
	iVar0 = Global_1626277.f_7[iParam0 /*8*/].f_2;
	if (Global_1626277.f_7[iParam0 /*8*/].f_1 == 1 && iLocal_118 == iVar0)
	{
		func_24(iVar0, Global_1626277.f_7[iParam0 /*8*/].f_6);
		func_11(iParam0);
	}
	Global_1626277.f_6 = 0;
	func_7(0);
}

void func_7(int iParam0)//Position - 0x2B3
{
	if (Global_14615)
	{
		func_9(0, 0);
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
	if (!func_8())
	{
		Global_14453.f_1 = 3;
	}
}

int func_8()//Position - 0x323
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)//Position - 0x34A
{
	if (bParam0)
	{
		if (func_10(0))
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

int func_10(int iParam0)//Position - 0x3BE
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

void func_11(int iParam0)//Position - 0x418
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		if (Global_1626277.f_7[iParam0 /*8*/].f_1 == 1)
		{
			if (unk_0xC80D31E4B587871C(Global_1626277.f_7[iParam0 /*8*/].f_5, 0))
			{
				func_23();
				if (Global_1626277.f_7[iParam0 /*8*/].f_7 == 0)
				{
					func_23();
				}
				else
				{
					Global_1626277.f_4 = (Global_1626277.f_4 - 1);
					if (Global_1626277.f_4 < 0)
					{
						Global_1626277.f_4 = 0;
					}
					func_16();
				}
			}
			unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_22), Global_1626277.f_7[iParam0 /*8*/].f_2);
			unk_0x4B1D93E1A14A667F(Global_1626277.f_7[iParam0 /*8*/].f_4);
			func_15();
			func_13(0);
		}
		iVar0 = iParam0;
		while (iVar0 <= 8)
		{
			Global_1626277.f_7[iVar0 /*8*/] = { Global_1626277.f_7[iVar0 + 1 /*8*/] };
			iVar0++;
		}
		Global_1626277.f_7[9 /*8*/].f_1 = 0;
		Global_1626277.f_7[9 /*8*/].f_2 = func_12();
	}
}

int func_12()//Position - 0x50D
{
	return -1;
}

void func_13(int iParam0)//Position - 0x516
{
	if (!func_14(iParam0))
	{
		unk_0x872F1C1F8587CCC7(&(Global_1626277.f_3), iParam0);
	}
}

bool func_14(int iParam0)//Position - 0x534
{
	return unk_0xC80D31E4B587871C(Global_1626277.f_3, iParam0);
}

void func_15()//Position - 0x548
{
	Global_1626277 = (Global_1626277 - 1);
}

void func_16()//Position - 0x55A
{
	Global_16819 = (Global_16819 - 1);
	if (Global_16819 < 0)
	{
		func_22("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_17();
}

void func_17()//Position - 0x57C
{
	if (!Global_14616)
	{
		if (Global_14453.f_1 == 6)
		{
			func_92(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_18(1);
			func_92(Global_14434, "DISPLAY_VIEW", 1f, system::to_float(Global_14433), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_18(int iParam0)//Position - 0x5D9
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
		if (func_21(14))
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
								func_20(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar2);
								unk_0x271AA5469AF471B3();
							}
							if (Global_2456825)
							{
								if (iVar1 == 14)
								{
									func_19(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_19(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16824), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_19(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar4), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_19(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar6), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_19(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_20(&(Global_2330[iVar1 /*15*/]));
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
								func_20(&(Global_2330[iVar1 /*15*/]));
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
								func_20(&(Global_2330[iVar1 /*15*/]));
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
								func_20(&(Global_2330[iVar1 /*15*/]));
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
								func_20(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if (Global_2330[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626277.f_1;
								func_19(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_19(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(0), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_19(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xB71
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
		func_20(sParam7);
	}
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		func_20(sParam8);
	}
	if (!unk_0xAB019B170BF1309C(sParam9))
	{
		func_20(sParam9);
	}
	if (!unk_0xAB019B170BF1309C(sParam10))
	{
		func_20(sParam10);
	}
	if (!unk_0xAB019B170BF1309C(sParam11))
	{
		func_20(sParam11);
	}
	unk_0x271AA5469AF471B3();
}

void func_20(char* sParam0)//Position - 0xC24
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

bool func_21(int iParam0)//Position - 0xC36
{
	return Global_35861 == iParam0;
}

void func_22(char* sParam0)//Position - 0xC44
{
	if (Global_16819 != 0)
	{
		if (!unk_0xAB019B170BF1309C(sParam0))
		{
		}
		Global_16819 = 0;
	}
}

void func_23()//Position - 0xC61
{
	Global_1626277.f_1 = (Global_1626277.f_1 - 1);
	if (Global_1626277.f_1 < 0)
	{
		Global_1626277.f_1 = 0;
	}
}

void func_24(int iParam0, var uParam1)//Position - 0xC88
{
	if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_26 == func_12())
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_26 = iParam0;
			Global_2512808.f_4856.f_43 = uParam1;
			func_25(func_26(iParam0));
		}
	}
}

void func_25(int iParam0)//Position - 0xCD8
{
	struct<2> Var0;
	
	Var0 = 2895205;
	Var0.f_1 = unk_0x9EB17624F44A8DA4();
	if (!iParam0 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Var0, 2, iParam0);
	}
}

int func_26(int iParam0)//Position - 0xD03
{
	var uVar0;
	
	unk_0x872F1C1F8587CCC7(&uVar0, iParam0);
	return uVar0;
}

int func_27(int iParam0, int iParam1)//Position - 0xD15
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (Global_1626277.f_7[iVar0 /*8*/].f_7 == iParam1)
		{
			iParam0 = (iParam0 - 1);
			if (iParam0 < 0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_28()//Position - 0xD55
{
	return Global_1626277;
}

void func_29()//Position - 0xD61
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_27(iLocal_117, 0);
	if (iLocal_117 == -1)
	{
		func_82(1);
		return;
	}
	iVar1 = Global_1626277.f_7[iVar0 /*8*/].f_2;
	if (!func_44(iVar1, 0, 1) || iLocal_118 != iVar1)
	{
		func_82(1);
		return;
	}
	func_39(&iLocal_120);
	if (func_37(&iLocal_120))
	{
		func_82(1);
		return;
	}
	if (func_36(&iLocal_120))
	{
		func_11(iVar0);
		func_82(1);
		return;
	}
	if (func_32(&iLocal_120))
	{
		if (func_31())
		{
			iLocal_119 = 1;
			iLocal_98 = 3;
		}
		else if (Global_1626277.f_7[iVar0 /*8*/] == 0)
		{
			func_6(iVar0);
		}
		else if (Global_1626277.f_7[iVar0 /*8*/] == 1)
		{
			func_30(iVar0);
		}
		else
		{
			func_7(0);
		}
	}
}

void func_30(int iParam0)//Position - 0xE27
{
	unk_0x872F1C1F8587CCC7(&Global_1573842, 15);
	func_11(iParam0);
	Global_1626277.f_6 = 0;
	func_7(0);
}

bool func_31()//Position - 0xE4B
{
	return Global_1312416;
}

int func_32(int iParam0)//Position - 0xE57
{
	if (!unk_0xC80D31E4B587871C(*iParam0, 0))
	{
		return 0;
	}
	if (Global_14431)
	{
		return 0;
	}
	if (!unk_0x9F7B586A14398C40())
	{
		return 0;
	}
	if (!unk_0xE8C126B7ADBB9D63(2, Global_14422))
	{
		return 0;
	}
	func_33();
	Global_14431 = 1;
	return 1;
}

void func_33()//Position - 0xE9E
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Menu_Accept", &Global_14442, 1);
		func_34();
	}
}

void func_34()//Position - 0xEC3
{
	if (func_35())
	{
		unk_0x4EF44BE7DE3DC97E(5);
	}
}

int func_35()//Position - 0xED7
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

int func_36(int iParam0)//Position - 0xF1E
{
	if (!unk_0xC80D31E4B587871C(*iParam0, 1))
	{
		return 0;
	}
	if (Global_14431)
	{
		return 0;
	}
	if (!unk_0x9F7B586A14398C40())
	{
		return 0;
	}
	if (!unk_0xE8C126B7ADBB9D63(2, Global_14425))
	{
		return 0;
	}
	func_33();
	Global_14431 = 1;
	return 1;
}

int func_37(int iParam0)//Position - 0xF65
{
	if (!unk_0xC80D31E4B587871C(*iParam0, 2))
	{
		return 0;
	}
	if (Global_14431)
	{
		return 0;
	}
	if (!unk_0x9F7B586A14398C40())
	{
		return 0;
	}
	if (!unk_0xE8C126B7ADBB9D63(2, Global_14423))
	{
		return 0;
	}
	func_38();
	Global_14431 = 1;
	return 1;
}

void func_38()//Position - 0xFAC
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Menu_Back", &Global_14442, 1);
	}
}

void func_39(int iParam0)//Position - 0xFCE
{
	if (unk_0x53C562FD2B9E3AB0() < iParam0->f_1)
	{
		return;
	}
	if (!unk_0x9F7B586A14398C40())
	{
		return;
	}
	if (unk_0xE8C126B7ADBB9D63(2, Global_14429) || unk_0xE8C126B7ADBB9D63(2, 181))
	{
		func_42();
		iParam0->f_1 = unk_0x53C562FD2B9E3AB0() + 50;
	}
	if (unk_0xE8C126B7ADBB9D63(2, Global_14430) || unk_0xE8C126B7ADBB9D63(2, 180))
	{
		func_40();
		iParam0->f_1 = unk_0x53C562FD2B9E3AB0() + 50;
	}
}

void func_40()//Position - 0x103B
{
	func_92(Global_14434, "SET_INPUT_EVENT", system::to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
	func_41();
}

void func_41()//Position - 0x1078
{
	if (func_35())
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

void func_42()//Position - 0x109B
{
	func_92(Global_14434, "SET_INPUT_EVENT", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
	func_43();
}

void func_43()//Position - 0x10D8
{
	if (func_35())
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

int func_44(int iParam0, bool bParam1, bool bParam2)//Position - 0x10FB
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

void func_45()//Position - 0x1145
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (func_28() > 1)
	{
		func_39(&iLocal_120);
	}
	if (func_32(&iLocal_120))
	{
		unk_0x008F3E3CC076EA0E(Global_14434, "GET_CURRENT_SELECTION");
		uVar0 = unk_0x8E8D3D52EE7CEFD3();
		while (!unk_0x042804C27782882D(uVar0))
		{
			system::wait(0);
		}
		iLocal_117 = unk_0x8EA167BD67A3F619(uVar0);
		iVar1 = func_27(iLocal_117, 0);
		switch (Global_1626277.f_7[iVar1 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_47();
				break;
			
			default:
				return;
		}
		Global_14453.f_1 = 8;
		return;
	}
	if (func_36(&iLocal_120))
	{
		unk_0x008F3E3CC076EA0E(Global_14434, "GET_CURRENT_SELECTION");
		uVar2 = unk_0x8E8D3D52EE7CEFD3();
		while (!unk_0x042804C27782882D(uVar2))
		{
			system::wait(0);
		}
		iLocal_117 = unk_0x8EA167BD67A3F619(uVar2);
		iVar3 = func_27(iLocal_117, 0);
		switch (Global_1626277.f_7[iVar3 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_11(iVar3);
				func_82(0);
				return;
			
			default:
		}
		return;
		return;
	}
	if (func_14(0))
	{
		func_46(0);
		func_82(0);
	}
}

void func_46(int iParam0)//Position - 0x1251
{
	if (func_14(iParam0))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1626277.f_3), iParam0);
	}
}

void func_47()//Position - 0x126E
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<16> Var5;
	var uVar6[3];
	bool bVar7;
	int iVar8;
	int iVar9;
	char cVar10[16];
	struct<16> Var11;
	char cVar12[16];
	
	if (Global_14453.f_1 != 8)
	{
		Global_14453.f_1 = 8;
	}
	func_92(Global_14434, "SET_DATA_SLOT_EMPTY", system::to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	bVar0 = false;
	iVar3 = func_27(iLocal_117, 0);
	iLocal_118 = Global_1626277.f_7[iVar3 /*8*/].f_2;
	iVar4 = Global_1626277.f_7[iVar3 /*8*/].f_2;
	unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
	unk_0xD07D5CD276368D36(26);
	unk_0xD07D5CD276368D36(0);
	if (func_44(iVar4, 0, 1))
	{
		Var5 = { func_79(iVar4) };
		unk_0x7E099EB35339C80D("STRING");
		unk_0xF92B835A141C6BDD(func_73(iVar4));
		unk_0x854FACC4E5F40C82(&Var5);
		unk_0x9748595E4799A2CF();
		bVar0 = true;
	}
	else
	{
		func_20("");
	}
	if (Global_1626277.f_7[iVar3 /*8*/] == 0)
	{
		if (Global_262145.f_14286)
		{
			bVar7 = func_72(iVar4);
			iVar8 = 0;
			while (iVar8 < 3)
			{
				if (iVar9 < 3)
				{
					if (Global_1627537[iVar4 /*532*/].f_11.f_11[iVar8] != func_12())
					{
						if (func_44(Global_1627537[iVar4 /*532*/].f_11.f_11[iVar8], 0, 1))
						{
							uVar6[iVar9] = Global_1627537[iVar4 /*532*/].f_11.f_11[iVar8];
							iVar9++;
						}
					}
				}
				iVar8++;
			}
			if (iVar9 == 0)
			{
				if (bVar7)
				{
					func_20("BA_APP_BODYCTA");
				}
				else
				{
					func_20("BA_APP_BODY_TA");
				}
			}
			else
			{
				StringCopy(&cVar10, "BA_APP_BODY_T4", 16);
				if (bVar7)
				{
					StringCopy(&cVar10, "BA_APP_BODYCT4", 16);
				}
				if (iVar9 == 2)
				{
					if (bVar7)
					{
						StringCopy(&cVar10, "BA_APP_BODYCT5", 16);
					}
					else
					{
						StringCopy(&cVar10, "BA_APP_BODY_T5", 16);
					}
				}
				else if (iVar9 > 2)
				{
					if (bVar7)
					{
						StringCopy(&cVar10, "BA_APP_BODYCT6", 16);
					}
					else
					{
						StringCopy(&cVar10, "BA_APP_BODY_T6", 16);
					}
				}
				unk_0x7E099EB35339C80D(&cVar10);
				iVar8 = 0;
				while (iVar8 < iVar9)
				{
					Var11 = { func_79(uVar6[iVar8]) };
					unk_0x854FACC4E5F40C82(&Var11);
					iVar8++;
				}
				unk_0x9748595E4799A2CF();
			}
		}
		else
		{
			if (Global_1626277.f_88[iVar3 /*5*/].f_1)
			{
				if (Global_1626277.f_88[iVar3 /*5*/].f_2)
				{
					StringCopy(&cVar12, "BA_APP_BODY_T9", 16);
				}
				else
				{
					StringCopy(&cVar12, "BA_APP_BODY_T8", 16);
				}
			}
			else if (Global_1626277.f_88[iVar3 /*5*/].f_2)
			{
				StringCopy(&cVar12, "BA_APP_BODY_T7", 16);
			}
			else
			{
				StringCopy(&cVar12, "BA_APP_BODY_T10", 16);
			}
			unk_0x7E099EB35339C80D(&cVar12);
			unk_0x6223D539BCD39E76(Global_1626277.f_88[iVar3 /*5*/]);
			unk_0x6223D539BCD39E76(func_71(iVar4));
			unk_0x6223D539BCD39E76(Global_1626277.f_88[iVar3 /*5*/].f_3);
			unk_0x6223D539BCD39E76(Global_1626277.f_88[iVar3 /*5*/].f_4);
			unk_0x9748595E4799A2CF();
		}
	}
	else if (Global_1626277.f_7[iVar3 /*8*/] == 1)
	{
		unk_0x7E099EB35339C80D("BA_APP_BODY_DM2");
		unk_0xF92B835A141C6BDD(func_73(Global_1626277.f_7[iVar3 /*8*/].f_2));
		unk_0x854FACC4E5F40C82(func_59(Global_1626277.f_7[iVar3 /*8*/].f_2));
		unk_0x9748595E4799A2CF();
	}
	if (bVar0)
	{
		iVar2 = func_53(Global_1626277.f_7[iVar3 /*8*/].f_2);
		if (iVar2 == 0)
		{
			bVar0 = false;
		}
		else
		{
			sVar1 = unk_0xF85532D53BDB3017(iVar2);
		}
	}
	if (bVar0)
	{
		unk_0x81D71E37E95798C1(sVar1);
	}
	else
	{
		func_20(&Local_114);
	}
	unk_0x271AA5469AF471B3();
	func_92(Global_14434, "DISPLAY_VIEW", system::to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_51(&Local_111);
	func_48(13, &Local_105, 12, &Local_108, 4, &Local_99, &iLocal_120);
	iLocal_98 = 1;
}

void func_48(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x15BD
{
	func_49(2, iParam0, sParam1, 0, iParam6, -1);
	func_49(1, iParam2, sParam3, 1, iParam6, 17);
	func_49(3, iParam4, sParam5, 2, iParam6, -1);
}

void func_49(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x15ED
{
	if (iParam1 == 1)
	{
		func_19(Global_14434, "SET_SOFT_KEYS", system::to_float(iParam0), 0f, system::to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x0EE72DB1CD8A3B86(iParam4, iParam3);
		func_50(iParam5, 0);
		return;
	}
	if (Global_14441)
	{
		func_19(Global_14434, "SET_SOFT_KEYS", system::to_float(iParam0), 1f, system::to_float(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		unk_0x872F1C1F8587CCC7(iParam4, iParam3);
		func_50(iParam5, 1);
		return;
	}
	func_19(Global_14434, "SET_SOFT_KEYS", system::to_float(iParam0), 1f, system::to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x872F1C1F8587CCC7(iParam4, iParam3);
	func_50(iParam5, 1);
}

void func_50(int iParam0, bool bParam1)//Position - 0x1692
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2323, iParam0);
		return;
	}
	unk_0x0EE72DB1CD8A3B86(&Global_2323, iParam0);
}

void func_51(char* sParam0)//Position - 0x16BD
{
	func_52(Global_14434, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_52(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x16D6
{
	unk_0x008F3E3CC076EA0E(iParam0, sParam1);
	func_20(sParam2);
	if (!unk_0xAB019B170BF1309C(sParam3))
	{
		func_20(sParam3);
	}
	if (!unk_0xAB019B170BF1309C(sParam4))
	{
		func_20(sParam4);
	}
	if (!unk_0xAB019B170BF1309C(sParam5))
	{
		func_20(sParam5);
	}
	if (!unk_0xAB019B170BF1309C(sParam6))
	{
		func_20(sParam6);
	}
	unk_0x271AA5469AF471B3();
}

int func_53(int iParam0)//Position - 0x1731
{
	int iVar0;
	
	iVar0 = func_56(iParam0);
	if (iVar0 == -1)
	{
		func_54(iParam0, 1);
		return 0;
	}
	Global_1369176[iVar0 /*5*/].f_4 = 1;
	return Global_1369176[iVar0 /*5*/].f_2;
}

void func_54(int iParam0, bool bParam1)//Position - 0x1767
{
	if (!func_44(iParam0, 0, 1))
	{
		return;
	}
	if (func_56(iParam0) != -1)
	{
		return;
	}
	if (Global_1369339)
	{
		if (iParam0 == Global_1369339.f_1)
		{
			return;
		}
	}
	if (func_55(iParam0))
	{
		return;
	}
	if (Global_1369377 >= 32)
	{
		return;
	}
	Global_1369344[Global_1369377] = iParam0;
	Global_1369377++;
	if (bParam1)
	{
	}
}

int func_55(int iParam0)//Position - 0x17D3
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1369377)
	{
		if (Global_1369344[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_56(int iParam0)//Position - 0x1805
{
	int iVar0;
	
	if (!func_44(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1369337 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1369337)
	{
		if (Global_1369176[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xEDC03FCCDC79D2A6(Global_1369176[iVar0 /*5*/].f_2) && unk_0xF99EC32C605D76B8(Global_1369176[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_57(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_57(int iParam0)//Position - 0x1884
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1369337)
	{
		return;
	}
	if (unk_0xEDC03FCCDC79D2A6(Global_1369176[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1369176[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0xF85532D53BDB3017(Global_1369176[iParam0 /*5*/].f_2), 64);
			unk_0x08F615DD464377C8(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x2B7B6B25A8998411(Global_1369176[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1369337)
	{
		Global_1369176[iVar2 /*5*/] = { Global_1369176[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_58(&(Global_1369176[iVar2 /*5*/]));
	Global_1369337 = (Global_1369337 - 1);
}

void func_58(var uParam0)//Position - 0x193A
{
	*uParam0 = 0;
	uParam0->f_1 = func_12();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x3A711520F83BAE98())
	{
		uParam0->f_3 = unk_0xD1952A425B78FFC0();
	}
}

char* func_59(int iParam0)//Position - 0x1967
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		sVar0 = func_70(&(Global_1627537[iParam0 /*532*/].f_11.f_99));
		return sVar0;
	}
	if (Global_1627537[iParam0 /*532*/].f_11.f_115 != Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_115)
	{
		sVar0 = func_65(iParam0, 0);
		return sVar0;
	}
	if (((func_64(iParam0, 28) || func_64(unk_0x9EB17624F44A8DA4(), 28)) || func_63(iParam0)) && !func_61(iParam0))
	{
		return func_65(iParam0, 0);
	}
	iVar1 = func_60(iParam0);
	if (iVar1 != func_12())
	{
		if (iVar1 != unk_0x9EB17624F44A8DA4())
		{
			if (!unk_0x177281F5FA205A38() && !unk_0x8E095DA8BB18B959(0, -1, 1))
			{
				return func_65(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_12())
	{
		sVar0 = func_70(&(Global_1627537[iVar1 /*532*/].f_11.f_99));
		if (unk_0xAB019B170BF1309C(sVar0))
		{
			return func_65(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_60(int iParam0)//Position - 0x1A6E
{
	if (iParam0 != func_12())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_12();
}

int func_61(int iParam0)//Position - 0x1A91
{
	struct<13> Var0;
	
	Var0 = { func_62(iParam0) };
	if (unk_0x177281F5FA205A38())
	{
		if (unk_0xCD032B200A8FAC1A(0))
		{
			if (unk_0x1E81D00FCDFF4BBE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_62(int iParam0)//Position - 0x1AC1
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

int func_63(int iParam0)//Position - 0x1AD8
{
	struct<13> Var0;
	
	if (iParam0 != func_12())
	{
		Var0 = { func_62(iParam0) };
		if (unk_0xFD6215BABFD843F2() || unk_0xB9D80B12FE4456A5())
		{
			if (unk_0xCD032B200A8FAC1A(0))
			{
				return 0;
			}
		}
		else if (unk_0x177281F5FA205A38())
		{
			if (unk_0xCD032B200A8FAC1A(0))
			{
				if (unk_0x1E81D00FCDFF4BBE(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

bool func_64(int iParam0, int iParam1)//Position - 0x1B31
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_4, iParam1);
}

char* func_65(int iParam0, bool bParam1)//Position - 0x1B4C
{
	if (!bParam1)
	{
		if (func_67(iParam0, 1))
		{
			return func_66();
		}
	}
	return unk_0xB2E1B414DD88808E("GB_REST_ACC");
}

char* func_66()//Position - 0x1B73
{
	return unk_0xB2E1B414DD88808E("GB_REST_ACCM");
}

bool func_67(int iParam0, bool bParam1)//Position - 0x1B83
{
	return func_68(iParam0, bParam1, 1);
}

int func_68(int iParam0, bool bParam1, int iParam2)//Position - 0x1B94
{
	int iVar0;
	
	if (iParam0 == func_12())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_69(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1627537[iParam0 /*532*/].f_11;
	if (iVar0 != func_12() && Global_1627537[iVar0 /*532*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_69(int iParam0, int iParam1)//Position - 0x1BF0
{
	if (iParam0 != func_12())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_12())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 == iParam0 && Global_1627537[iParam0 /*532*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_70(var uParam0)//Position - 0x1C3F
{
	return uParam0;
}

var func_71(int iParam0)//Position - 0x1C49
{
	return Global_1627537[iParam0 /*532*/].f_11.f_19;
}

bool func_72(int iParam0)//Position - 0x1C5E
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 26);
}

int func_73(int iParam0)//Position - 0x1C84
{
	int iVar0;
	
	iVar0 = func_76(iParam0);
	if (iVar0 != -1)
	{
		return func_74(iVar0);
	}
	return 1;
}

int func_74(int iParam0)//Position - 0x1CA4
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_75(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_75(int iParam0)//Position - 0x1D67
{
	return Global_2416800.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_76(int iParam0)//Position - 0x1D7E
{
	if (!iParam0 == func_12())
	{
		if (func_77(iParam0, 1))
		{
			return Global_2416800.f_2071.f_11[func_60(iParam0)];
		}
	}
	return -1;
}

bool func_77(int iParam0, bool bParam1)//Position - 0x1DB0
{
	if (!bParam1)
	{
		if (func_78(iParam0))
		{
			return 0;
		}
	}
	return Global_1627537[iParam0 /*532*/].f_11 != func_12();
}

int func_78(int iParam0)//Position - 0x1DDB
{
	if (iParam0 != func_12())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_12())
		{
			return Global_1627537[iParam0 /*532*/].f_11 == iParam0;
		}
	}
	return 0;
}

struct<16> func_79(int iParam0)//Position - 0x1E10
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, unk_0xDE2D3B9654C31EB3(iParam0), 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_80()//Position - 0x1E37
{
	if (Global_1626277.f_6)
	{
		if (iLocal_98 != 3)
		{
			if (!unk_0x08D525BE62A22AE0())
			{
				Global_1626277.f_6 = 0;
			}
		}
	}
}

void func_81()//Position - 0x1E5D
{
	unk_0x01B48CB2F72AE113(0, 176);
	unk_0x01B48CB2F72AE113(0, 177);
}

void func_82(bool bParam0)//Position - 0x1E73
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iLocal_118 = func_12();
	if (!Global_14453.f_1 == 7)
	{
		Global_14453.f_1 = 7;
	}
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = iLocal_117;
	}
	if (iVar0 >= Global_1367893)
	{
		iVar0 = 0;
	}
	if (Global_16816)
	{
		func_47();
		Global_16816 = 0;
		return;
	}
	iVar1 = func_28();
	iVar1 = (iVar1 - func_91());
	if ((func_77(unk_0x9EB17624F44A8DA4(), 0) && !func_90(1)) && iVar1 <= 0)
	{
		func_88();
		return;
	}
	func_83();
	func_92(Global_14434, "DISPLAY_VIEW", system::to_float(25), system::to_float(iVar0), -1082130432, -1082130432, -1082130432);
	func_51("CELL_BOSSAGE");
	bVar2 = false;
	if (iVar1 > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		func_48(13, &Local_102, 12, &Local_108, 4, &Local_99, &iLocal_120);
	}
	else
	{
		func_48(1, "", 1, "", 4, &Local_99, &iLocal_120);
	}
	iLocal_98 = 0;
}

void func_83()//Position - 0x1F5D
{
	int iVar0;
	int iVar1;
	
	func_92(Global_14434, "SET_DATA_SLOT_EMPTY", system::to_float(25), -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (Global_1626277.f_7[iVar0 /*8*/].f_1 == 1 && Global_1626277.f_7[iVar0 /*8*/].f_7 == 0)
		{
			switch (Global_1626277.f_7[iVar0 /*8*/])
			{
				case 0:
					if (func_87(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				
				case 1:
					if (func_85(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				}
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return;
	}
	func_84();
}

void func_84()//Position - 0x2012
{
	bool bVar0;
	
	unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
	unk_0xD07D5CD276368D36(25);
	unk_0xD07D5CD276368D36(0);
	if (func_78(unk_0x9EB17624F44A8DA4()))
	{
		func_20("BA_APP_NONEB");
	}
	else
	{
		func_20("BA_APP_NONE");
	}
	func_20("");
	unk_0xD07D5CD276368D36(-1);
	unk_0xD07D5CD276368D36(1);
	bVar0 = unk_0x3A711520F83BAE98();
	unk_0x1869584A8A72FEDD(bVar0);
	unk_0x271AA5469AF471B3();
}

int func_85(int iParam0, int iParam1)//Position - 0x2070
{
	struct<16> Var0;
	int iVar1;
	int iVar2;
	
	if (Global_1626277.f_7[iParam0 /*8*/].f_2 == func_12() || !func_44(Global_1626277.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
	unk_0xD07D5CD276368D36(25);
	unk_0xD07D5CD276368D36(iParam1);
	Var0 = { func_79(Global_1626277.f_7[iParam0 /*8*/].f_2) };
	func_86(&Var0);
	unk_0x7E099EB35339C80D("BA_APP_BODY_DM1");
	unk_0x9748595E4799A2CF();
	unk_0xD07D5CD276368D36(-1);
	iVar1 = 1;
	iVar2 = func_76(Global_1626277.f_7[iParam0 /*8*/].f_2);
	if (iVar2 != -1)
	{
		iVar1 = func_74(iVar2);
	}
	unk_0xD07D5CD276368D36(iVar1);
	unk_0x1869584A8A72FEDD(true);
	unk_0x271AA5469AF471B3();
	return 1;
}

void func_86(char* sParam0)//Position - 0x211F
{
	unk_0x8686005F83E832AE(sParam0);
}

int func_87(int iParam0, int iParam1)//Position - 0x212D
{
	struct<16> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1626277.f_7[iParam0 /*8*/].f_2 == func_12() || !func_44(Global_1626277.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
	unk_0xD07D5CD276368D36(25);
	unk_0xD07D5CD276368D36(iParam1);
	Var0 = { func_79(Global_1626277.f_7[iParam0 /*8*/].f_2) };
	func_86(&Var0);
	bVar1 = func_72(Global_1626277.f_7[iParam0 /*8*/].f_2);
	iVar2 = func_71(Global_1626277.f_7[iParam0 /*8*/].f_2);
	if (iVar2 == 0)
	{
		if (bVar1)
		{
			func_20("BA_APP_BODYCT");
		}
		else
		{
			func_20("BA_APP_BODY_T");
		}
	}
	else if (iVar2 == 1)
	{
		if (bVar1)
		{
			unk_0x7E099EB35339C80D("BA_APP_BODYCT3");
		}
		else
		{
			unk_0x7E099EB35339C80D("BA_APP_BODY_T3");
		}
		unk_0x6223D539BCD39E76(iVar2);
		unk_0x9748595E4799A2CF();
	}
	else
	{
		if (bVar1)
		{
			unk_0x7E099EB35339C80D("BA_APP_BODYCT2");
		}
		else
		{
			unk_0x7E099EB35339C80D("BA_APP_BODY_T2");
		}
		unk_0x6223D539BCD39E76(iVar2);
		unk_0x9748595E4799A2CF();
	}
	unk_0xD07D5CD276368D36(-1);
	iVar3 = 1;
	iVar4 = func_76(Global_1626277.f_7[iParam0 /*8*/].f_2);
	if (iVar4 != -1)
	{
		iVar3 = func_74(iVar4);
	}
	unk_0xD07D5CD276368D36(iVar3);
	unk_0x1869584A8A72FEDD(true);
	unk_0x271AA5469AF471B3();
	return 1;
}

void func_88()//Position - 0x2262
{
	func_92(Global_14434, "SET_DATA_SLOT_EMPTY", system::to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
	unk_0xD07D5CD276368D36(26);
	unk_0xD07D5CD276368D36(0);
	unk_0x7E099EB35339C80D("STRING");
	unk_0xF92B835A141C6BDD(func_73(unk_0x9EB17624F44A8DA4()));
	unk_0x854FACC4E5F40C82(func_89());
	unk_0x9748595E4799A2CF();
	func_20("BA_APP_NONEG");
	func_20("CELL_AGBOSSPIC");
	unk_0x271AA5469AF471B3();
	func_92(Global_14434, "DISPLAY_VIEW", system::to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_51("CELL_BOSSAGE");
	func_48(1, "", 1, "", 4, &Local_99, &iLocal_120);
	iLocal_98 = 2;
}

char* func_89()//Position - 0x231A
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_60(unk_0x9EB17624F44A8DA4());
	if (iVar0 != func_12())
	{
		if (iVar0 != unk_0x9EB17624F44A8DA4())
		{
			if (((func_64(iVar0, 28) || func_64(unk_0x9EB17624F44A8DA4(), 28)) || func_63(iVar0)) && !func_61(iVar0))
			{
				return func_65(iVar0, 0);
			}
			if (!unk_0x177281F5FA205A38() && !unk_0x8E095DA8BB18B959(0, -1, 1))
			{
				return func_65(iVar0, 0);
			}
		}
		sVar1 = func_70(&(Global_1627537[iVar0 /*532*/].f_11.f_99));
		if (unk_0xAB019B170BF1309C(sVar1))
		{
			return func_65(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

bool func_90(bool bParam0)//Position - 0x23CC
{
	return func_67(unk_0x9EB17624F44A8DA4(), bParam0);
}

int func_91()//Position - 0x23DE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (Global_1626277.f_7[iVar0 /*8*/].f_7 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_92(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x2413
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

void func_93()//Position - 0x2476
{
	Global_1626277.f_1 = 0;
	func_94();
}

void func_94()//Position - 0x2489
{
	Global_1626277.f_5 = 0;
}

void func_95(var uParam0)//Position - 0x2498
{
	*uParam0 = 0;
}

