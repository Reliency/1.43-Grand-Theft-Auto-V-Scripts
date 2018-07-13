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
	float fLocal_96 = 0f;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	vector3 vLocal_100 = { 0f, 0f, 0f };
	struct<4> Local_101 = { 2, 0, 0, 3 } ;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 2;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 2;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	struct<8> Local_125[32];
	struct<184> Local_126 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_127 = 0;
	bool bLocal_128 = 0;
	bool bLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	struct<21> Local_140 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_96 = ((0,05f + 0,275f) - 0,01f);
	vLocal_100 = { -2357,12f, 3250,68f, 106,04f };
	iLocal_135 = -1;
	if (unk_0x3A711520F83BAE98())
	{
		func_174(ScriptParam_140);
	}
	else
	{
		func_171();
	}
	while (true)
	{
		func_170();
		func_162();
		if (func_152() || unk_0xB01117EF93F91860())
		{
			func_171();
		}
		if (unk_0x3A711520F83BAE98())
		{
			if ((func_146() && !Global_262145.f_20763) && !unk_0x4916190900E76373())
			{
				func_141();
			}
			if (func_37())
			{
				func_171();
			}
			if (func_34(unk_0x9EB17624F44A8DA4()))
			{
				if (!unk_0xC80D31E4B587871C(Local_126.f_182, 3))
				{
					unk_0x872F1C1F8587CCC7(&(Local_126.f_182), 3);
				}
			}
			if ((((((((!Global_1573920 && !func_33(2)) && !func_30(unk_0x9EB17624F44A8DA4(), 0)) && !unk_0x1E06D00B67177A18()) && unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) && !func_28(unk_0x9EB17624F44A8DA4())) && !func_26(func_27(unk_0x9EB17624F44A8DA4()))) && !func_24(unk_0x9EB17624F44A8DA4(), 146)) && !func_20(unk_0x9EB17624F44A8DA4()))
			{
				if (func_19(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 3, 1000, 0) || func_18(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 1000))
				{
					if (!unk_0xC80D31E4B587871C(Global_2512808.f_4523, 0))
					{
						if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
						{
							if (!func_146())
							{
								func_17();
								if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()) || unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
								{
									if (func_19(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 3, 0, 0) || func_18(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 0))
									{
										if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) < 4)
										{
											unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 36, (unk_0xAF22430031BD1E97(4) - unk_0xAF22430031BD1E97(unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()))));
										}
										else
										{
											unk_0x464D8E07EBE7360A(unk_0x9EB17624F44A8DA4());
										}
									}
									else if (!func_16(&(Local_126.f_3)))
									{
										func_13(&(Local_126.f_3));
									}
									else if (func_10(&(Local_126.f_3)) > 20f || Local_126.f_177)
									{
										if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) < 4)
										{
											unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 36, (unk_0xAF22430031BD1E97(4) - unk_0xAF22430031BD1E97(unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()))));
										}
										else
										{
											unk_0x464D8E07EBE7360A(unk_0x9EB17624F44A8DA4());
										}
									}
								}
								else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) < 4)
								{
									unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 36, (unk_0xAF22430031BD1E97(4) - unk_0xAF22430031BD1E97(unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()))));
								}
								else
								{
									unk_0x464D8E07EBE7360A(unk_0x9EB17624F44A8DA4());
								}
							}
							else
							{
								if (Global_2512808.f_5870)
								{
									bLocal_128 = false;
									Global_2512808.f_5870 = 0;
								}
								if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0 && !iLocal_132)
								{
									iLocal_132 = 1;
								}
								if (Global_262145.f_20752 && !func_8(unk_0x9EB17624F44A8DA4()))
								{
									if ((!bLocal_128 && unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) != 0) && iLocal_132)
									{
										unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
										unk_0xC0EBC1452FCAB15C(0);
										iLocal_131 = 1;
									}
									if (func_2() && !bLocal_128)
									{
										bLocal_128 = true;
										unk_0xC0EBC1452FCAB15C(5);
									}
								}
								if (func_2() && !bLocal_128)
								{
									bLocal_128 = true;
								}
								if (bLocal_128)
								{
									if (bLocal_129)
									{
										if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) < 2)
										{
											unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 36, (unk_0xAF22430031BD1E97(2) - unk_0xAF22430031BD1E97(unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()))));
										}
										else
										{
											unk_0x464D8E07EBE7360A(unk_0x9EB17624F44A8DA4());
										}
									}
									else if (bLocal_130)
									{
										if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) < 3)
										{
											unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 36, (unk_0xAF22430031BD1E97(3) - unk_0xAF22430031BD1E97(unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()))));
										}
										else
										{
											unk_0x464D8E07EBE7360A(unk_0x9EB17624F44A8DA4());
										}
									}
									else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) < Global_262145.f_20689)
									{
										unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 36, (unk_0xAF22430031BD1E97(Global_262145.f_20689) - unk_0xAF22430031BD1E97(unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()))));
									}
									else
									{
										unk_0x464D8E07EBE7360A(unk_0x9EB17624F44A8DA4());
									}
								}
							}
						}
						else
						{
							if (func_16(&(Local_126.f_3)))
							{
								func_1(&(Local_126.f_3));
							}
							if (Local_126.f_177)
							{
								Local_126.f_177 = 0;
							}
							func_17();
						}
					}
					else
					{
						if (!Local_126.f_177)
						{
							Local_126.f_177 = 1;
						}
						func_17();
					}
				}
				else
				{
					if (Local_126.f_177)
					{
						Local_126.f_177 = 0;
					}
					func_17();
				}
			}
			else
			{
				func_17();
			}
		}
		else
		{
			func_171();
		}
	}
}

void func_1(var uParam0)//Position - 0x4D5
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_2()//Position - 0x4EB
{
	int iVar0;
	
	if (func_19(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 3, 1000, 0) || func_18(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 1000))
	{
		if (Global_262145.f_20683)
		{
			return 0;
		}
		if (((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -2346,975f, 3259,757f, 31,81074f, -2349,507f, 3261,232f, 33,81074f, 9,5625f, 0, 1, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -2054,865f, 3240,977f, 30,51001f, -2056,552f, 3237,846f, 32,50156f, 4,0625f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1792,908f, 3091,104f, 31,81257f, -1812,707f, 3102,736f, 39,46682f, 18,187f, 0, 1, 0)) || func_7(unk_0x9EB17624F44A8DA4()))
		{
			bLocal_129 = false;
			bLocal_130 = false;
			return 1;
		}
		if (Global_262145.f_20690)
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				if (unk_0xE7F7942A19E7A681(iVar0))
				{
					if (func_6(iVar0))
					{
						if ((!func_5(iVar0, 1) && !func_4(iVar0)) && !func_3(iVar0))
						{
							bLocal_129 = true;
							bLocal_130 = false;
							return 1;
						}
					}
				}
			}
		}
		else if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0xE7F7942A19E7A681(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
			{
				if ((!func_5(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 1) && !func_4(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0))) && !func_3(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
				{
					bLocal_129 = true;
					bLocal_130 = false;
					return 1;
				}
			}
		}
		if (Global_2512808.f_5868 || Global_2512808.f_5869)
		{
			if (Global_2512808.f_5869)
			{
				bLocal_129 = false;
				bLocal_130 = true;
			}
			else
			{
				bLocal_129 = true;
				bLocal_130 = false;
			}
			Global_2512808.f_5868 = 0;
			Global_2512808.f_5869 = 0;
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0)//Position - 0x6ED
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (unk_0x6C5223DB5E5CFD9B("MPBitset", 3) && unk_0xB80A4DA4C06A76F1(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x2786E663D1846FFC(iParam0, "MPBitset");
			if (unk_0xC80D31E4B587871C(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(int iParam0)//Position - 0x730
{
	if ((unk_0x6C5223DB5E5CFD9B("CreatedByPegasus", 2) && unk_0xB80A4DA4C06A76F1(iParam0, "CreatedByPegasus")) && unk_0xD5736BCB654EA8FC(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1)//Position - 0x764
{
	if (Global_70856)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam0) && (!bParam1 || unk_0xB8DE76287EDC4957(iParam0, 0)))
		{
			if (unk_0xB80A4DA4C06A76F1(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_6(int iParam0)//Position - 0x7A2
{
	int iVar0;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	switch (iVar0)
	{
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("besra"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("cargobob"):
		case joaat("crusader"):
		case 1938952078:
		case joaat("lazer"):
		case joaat("rhino"):
		case joaat("titan"):
			return 1;
		
		default:
	}
	return 0;
}

int func_7(int iParam0)//Position - 0x806
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x1ACD6691B9C9AA46(unk_0x25D049AAC4603E65(iParam0));
	iVar1 = unk_0xC0765AFBFA616644(-2346,975f, 3259,757f, 31,81074f, "v_tower");
	if (unk_0x2C2E1E35924B9FF2(iVar0) && unk_0x2C2E1E35924B9FF2(iVar1))
	{
		if ((iVar0 == iVar1 && !unk_0x0F3033474C49912D(unk_0x25D049AAC4603E65(iParam0), -2345,4f, 3270,1f, 31,81f, -2347,9f, 3265,8f, 34,811f, 8,25f, 0, 1, 0)) && !unk_0x0F3033474C49912D(unk_0x25D049AAC4603E65(iParam0), -2349,3f, 3266,7f, 31,81f, -2350f, 3265,5f, 34,811f, 5,15f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_8(int iParam0)//Position - 0x8BF
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_9(iParam0, 9);
	}
	return 0;
}

bool func_9(int iParam0, int iParam1)//Position - 0x8DD
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_4, iParam1);
}

float func_10(int iParam0)//Position - 0x8F8
{
	if (func_16(iParam0))
	{
		if (func_12(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_11(unk_0xC80D31E4B587871C(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_11(bool bParam0)//Position - 0x937
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

bool func_12(var uParam0)//Position - 0x98F
{
	return unk_0xC80D31E4B587871C(*uParam0, 2);
}

void func_13(int iParam0)//Position - 0x99F
{
	if (!func_16(iParam0))
	{
		func_14(iParam0);
	}
}

void func_14(int iParam0)//Position - 0x9B7
{
	func_15(iParam0, 0f);
}

void func_15(int iParam0, float fParam1)//Position - 0x9C6
{
	iParam0->f_1 = (func_11(unk_0xC80D31E4B587871C(*iParam0, 4)) - fParam1);
	unk_0x872F1C1F8587CCC7(iParam0, 1);
	unk_0x0EE72DB1CD8A3B86(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_16(var uParam0)//Position - 0x9F4
{
	return unk_0xC80D31E4B587871C(*uParam0, 1);
}

void func_17()//Position - 0xA04
{
	if (iLocal_131)
	{
		unk_0xC0EBC1452FCAB15C(5);
	}
	Global_2512808.f_5868 = 0;
	Global_2512808.f_5869 = 0;
	iLocal_131 = 0;
	bLocal_128 = false;
	bLocal_129 = false;
	iLocal_132 = 0;
}

int func_18(vector3 vParam0, int iParam1)//Position - 0xA37
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	vVar0[0 /*3*/] = { -1877,436f, 2783,151f, 31,80618f };
	vVar1[0 /*3*/] = { -1797,873f, 2924,37f, (307,1106f + IntToFloat(iParam1)) };
	fVar2[0] = 88f;
	vVar0[1 /*3*/] = { -1761,116f, 2834,651f, 31,80622f };
	vVar1[1 /*3*/] = { -1720,887f, 2906,419f, (281,8062f + IntToFloat(iParam1)) };
	fVar2[1] = 88f;
	vVar0[2 /*3*/] = { -1761,493f, 2817,68f, 32,37125f };
	vVar1[2 /*3*/] = { -1769,704f, 2913,734f, (281,8066f + IntToFloat(iParam1)) };
	fVar2[2] = 88f;
	vVar0[3 /*3*/] = { -1879,297f, 2772,653f, 29,57795f };
	vVar1[3 /*3*/] = { -1864,521f, 2825,472f, (281,8062f + IntToFloat(iParam1)) };
	fVar2[3] = 88f;
	vVar0[4 /*3*/] = { -2676,74f, 3366,988f, 29,92394f };
	vVar1[4 /*3*/] = { -2744,79f, 3340,347f, (37,80379f + IntToFloat(iParam1)) };
	fVar2[4] = 9f;
	vVar0[5 /*3*/] = { -2676,74f, 3366,988f, 29,92394f };
	vVar1[5 /*3*/] = { -2744,79f, 3340,347f, (37,80379f + IntToFloat(iParam1)) };
	fVar2[5] = 9,5f;
	vVar0[6 /*3*/] = { -2807,397f, 3264,226f, 29,92764f };
	vVar1[6 /*3*/] = { -2879,805f, 3309,01f, (37,57864f + IntToFloat(iParam1)) };
	fVar2[6] = 9,5f;
	vVar0[7 /*3*/] = { -2808,236f, 3264,634f, 29,92764f };
	vVar1[7 /*3*/] = { -2747,55f, 3187,8f, (37,45682f + IntToFloat(iParam1)) };
	fVar2[7] = 9,5f;
	vVar0[8 /*3*/] = { -2530,996f, 3064,151f, 29,71081f };
	vVar1[8 /*3*/] = { -2748,557f, 3189,939f, (37,45682f + IntToFloat(iParam1)) };
	fVar2[8] = 9,5f;
	vVar0[9 /*3*/] = { -2533,902f, 3062,491f, 29,70715f };
	vVar1[9 /*3*/] = { -2520,674f, 2996,817f, (37,45715f + IntToFloat(iParam1)) };
	fVar2[9] = 9,5f;
	vVar0[10 /*3*/] = { -2500,716f, 2927,103f, 29,45663f };
	vVar1[10 /*3*/] = { -2445,696f, 2896,657f, (37,68009f + IntToFloat(iParam1)) };
	fVar2[10] = 9,5f;
	vVar0[11 /*3*/] = { -2020,543f, 2810,747f, 29,45658f };
	vVar1[11 /*3*/] = { -1927,949f, 2785,779f, (37,67057f + IntToFloat(iParam1)) };
	fVar2[11] = 9,5f;
	vVar0[12 /*3*/] = { -2261,899f, 3376,549f, 29,77859f };
	vVar1[12 /*3*/] = { -2141,067f, 3376,773f, (37,90019f + IntToFloat(iParam1)) };
	fVar2[12] = 9,5f;
	iVar3 = 13;
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_19(vector3 vParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xD95
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332,211f, 100,4608f, 40,38437f };
			vVar1[0 /*3*/] = { -1094,238f, 148,4274f, 73f };
			fVar2[0] = 171,25f;
			vVar0[1 /*3*/] = { -999,7344f, -110,2231f, 25,25706f };
			vVar1[1 /*3*/] = { -1149,494f, 109,2558f, 73f };
			fVar2[1] = 132f;
			vVar0[2 /*3*/] = { -1035,113f, -84,95885f, 28,2746f };
			vVar1[2 /*3*/] = { -1261,103f, 50,08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = { -804,3439f, -3346,5f, 10f };
			vVar1[0 /*3*/] = { -1816,954f, -2768,893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			vVar0[1 /*3*/] = { -1911,488f, -2934,197f, 10f };
			vVar1[1 /*3*/] = { -968,6236f, -3477,748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			vVar0[2 /*3*/] = { -844,9433f, -2802,785f, 10f };
			vVar1[2 /*3*/] = { -1011,081f, -3086,904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185,5f;
			vVar0[3 /*3*/] = { -1021,086f, -2952,277f, 10f };
			vVar1[3 /*3*/] = { -1599,008f, -2616,271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			vVar0[4 /*3*/] = { -1027,136f, -2436,457f, 10f };
			vVar1[4 /*3*/] = { -1392,61f, -2226,763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193,5f;
			vVar0[5 /*3*/] = { -1497,549f, -2408,712f, 10f };
			vVar1[5 /*3*/] = { -1136,917f, -2617,955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234,5f;
			vVar0[6 /*3*/] = { -982,7924f, -2831,709f, 12,93313f };
			vVar1[6 /*3*/] = { -966,4677f, -2803,458f, 16,68313f };
			fVar2[6] = 16f;
			vVar0[7 /*3*/] = { -1110,083f, -3496,806f, 12f };
			vVar1[7 /*3*/] = { -1955,298f, -3010,431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			vVar0[8 /*3*/] = { -1886,899f, -3193,024f, 12f };
			vVar1[8 /*3*/] = { -1836,143f, -3105,268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			vVar0[9 /*3*/] = { -1134,337f, -3535,648f, 12f };
			vVar1[9 /*3*/] = { -1259,649f, -3463,486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30,75f;
			vVar0[10 /*3*/] = { -969,1279f, -3463,899f, 12f };
			vVar1[10 /*3*/] = { -896,3734f, -3505,715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			vVar0[11 /*3*/] = { -1369,491f, -2173,579f, 10f };
			vVar1[11 /*3*/] = { -1685,626f, -2720,364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29,25f;
			vVar0[12 /*3*/] = { -1010,926f, -3550,943f, 10f };
			vVar1[12 /*3*/] = { -1110,198f, -3493,617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = { -1773,944f, 3287,334f, 30f };
			vVar1[0 /*3*/] = { -2029,776f, 2845,083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			vVar0[1 /*3*/] = { -2725,889f, 3291,099f, 30f };
			vVar1[1 /*3*/] = { -2009,182f, 2879,835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			vVar0[2 /*3*/] = { -2442,026f, 3326,699f, 30f };
			vVar1[2 /*3*/] = { -2033,928f, 3089,049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			vVar0[3 /*3*/] = { -1917,165f, 3374,209f, 30f };
			vVar1[3 /*3*/] = { -2016,791f, 3195,058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86,25f;
			vVar0[4 /*3*/] = { -2192,753f, 3373,278f, 30f };
			vVar1[4 /*3*/] = { -2191,544f, 3150,417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150,5f;
			vVar0[5 /*3*/] = { -2077,663f, 3344,514f, 30f };
			vVar1[5 /*3*/] = { -2191,544f, 3150,417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140,5f;
			vVar0[6 /*3*/] = { -2861,755f, 3352,661f, 30f };
			vVar1[6 /*3*/] = { -2715,871f, 3269,916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			vVar0[7 /*3*/] = { -2005,574f, 3364,533f, 30f };
			vVar1[7 /*3*/] = { -1977,569f, 3330,888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			vVar0[8 /*3*/] = { -1682,235f, 3004,285f, 30f };
			vVar1[8 /*3*/] = { -1942,747f, 2947,441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248,75f;
			vVar0[9 /*3*/] = { -2393,295f, 2936,406f, 31,6801f };
			vVar1[9 /*3*/] = { -2453,037f, 3006,863f, 52,31003f };
			fVar2[9] = 128f;
			vVar0[10 /*3*/] = { -2347,185f, 3023,83f, 31,56573f };
			vVar1[10 /*3*/] = { -2517,33f, 2989,063f, 49,95644f };
			fVar2[10] = 127,25f;
			vVar0[11 /*3*/] = { -2259,922f, 3358,04f, 29,99972f };
			vVar1[11 /*3*/] = { -2299,772f, 3385,79f, 38,06014f };
			fVar2[11] = 16f;
			vVar0[12 /*3*/] = { -2476,309f, 3363,914f, 31,67933f };
			vVar1[12 /*3*/] = { -2431,981f, 3287,669f, 39,97826f };
			fVar2[12] = 214,25f;
			vVar0[13 /*3*/] = { -2103,081f, 2797,783f, 29,37864f };
			vVar1[13 /*3*/] = { -2096,821f, 2874,423f, 57,80989f };
			fVar2[13] = 65,75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			vVar1[9 /*3*/].f_2 = (vVar1[9 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[10 /*3*/].f_2 = (vVar1[10 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[11 /*3*/].f_2 = (vVar1[11 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[12 /*3*/].f_2 = (vVar1[12 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[13 /*3*/].f_2 = (vVar1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = { 1541,607f, 2527,555f, 40f };
			vVar1[0 /*3*/] = { 1815,575f, 2535,06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			vVar0[1 /*3*/] = { 1788,879f, 2445,727f, 40f };
			vVar1[1 /*3*/] = { 1716,96f, 2502,957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88,5f;
			vVar0[2 /*3*/] = { 1601,157f, 2436,244f, 40f };
			vVar1[2 /*3*/] = { 1650,078f, 2515,923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133,25f;
			vVar0[3 /*3*/] = { 1706,331f, 2407,597f, 40f };
			vVar1[3 /*3*/] = { 1698,555f, 2460,208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104,5f;
			vVar0[4 /*3*/] = { 1712,452f, 2756,218f, 40f };
			vVar1[4 /*3*/] = { 1718,848f, 2589,162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121,75f;
			vVar0[5 /*3*/] = { 1830,228f, 2661,24f, 40f };
			vVar1[5 /*3*/] = { 1774,812f, 2679,419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84,5f;
			vVar0[6 /*3*/] = { 1559,05f, 2632,22f, 40f };
			vVar1[6 /*3*/] = { 1657,208f, 2595,484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103,75f;
			vVar0[7 /*3*/] = { 1612,021f, 2716,869f, 40f };
			vVar1[7 /*3*/] = { 1657,165f, 2669,721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104,25f;
			vVar0[8 /*3*/] = { 1809,872f, 2729,827f, 40f };
			vVar1[8 /*3*/] = { 1789,855f, 2705,037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			vVar0[9 /*3*/] = { 1818,789f, 2605,948f, 40f };
			vVar1[9 /*3*/] = { 1783,114f, 2606,783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51,25f;
			iVar3 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = { 3411,002f, 3663,185f, 20f };
			vVar1[0 /*3*/] = { 3615,583f, 3626,194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45,75f;
			vVar0[1 /*3*/] = { 3426,66f, 3733,078f, 20f };
			vVar1[1 /*3*/] = { 3643,801f, 3694,362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			vVar0[2 /*3*/] = { 3446,036f, 3795,688f, 20f };
			vVar1[2 /*3*/] = { 3650,914f, 3766,152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81,5f;
			iVar3 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = { 526,053f, -3391,497f, -10f };
			vVar1[0 /*3*/] = { 523,2289f, -3118,678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			vVar0[1 /*3*/] = { 459,4397f, -3199,99f, 4,819676f };
			vVar1[1 /*3*/] = { 593,8928f, -3199,998f, 30,06926f };
			fVar2[1] = 170f;
			vVar0[2 /*3*/] = { 552,8467f, -3111,054f, 4,819394f };
			vVar1[2 /*3*/] = { 585,3137f, -3111,844f, 17,56923f };
			fVar2[2] = 12,5f;
			vVar0[3 /*3*/] = { 598,4666f, -3140,147f, 4,819257f };
			vVar1[3 /*3*/] = { 597,4973f, -3117,063f, 17,31926f };
			fVar2[3] = 9,75f;
			iVar3 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = { -1108,55f, -570,8798f, 20f };
			vVar1[0 /*3*/] = { -1187,811f, -477,5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			vVar0[1 /*3*/] = { -1201,378f, -485,9673f, 20f };
			vVar1[1 /*3*/] = { -1215,796f, -464,8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			vVar0[2 /*3*/] = { -985,6311f, -525,4233f, 20f };
			vVar1[2 /*3*/] = { -1013,393f, -475,2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			vVar0[3 /*3*/] = { -1055,849f, -477,8226f, 20f };
			vVar1[3 /*3*/] = { -1073,333f, -498,717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = { 461,5684f, -984,572f, 29,43951f };
			vVar1[0 /*3*/] = { 471,17f, -984,4292f, 40,14212f };
			fVar2[0] = 7,75f;
			vVar0[1 /*3*/] = { 457,3404f, -984,756f, 34,43951f };
			vVar1[1 /*3*/] = { 457,2084f, -993,7189f, 29,38958f };
			fVar2[1] = 14,75f;
			vVar0[2 /*3*/] = { 477,6227f, -986,6f, 40,00819f };
			vVar1[2 /*3*/] = { 424,8687f, -986,3279f, 48,71241f };
			fVar2[2] = 31,5f;
			vVar0[3 /*3*/] = { 474,3889f, -974,4613f, 39,55761f };
			vVar1[3 /*3*/] = { 474,0358f, -1021,972f, 49,10033f };
			fVar2[3] = 30,5f;
			vVar0[4 /*3*/] = { 442,1768f, -974,1888f, 29,68951f };
			vVar1[4 /*3*/] = { 442,1855f, -979,8635f, 33,43951f };
			fVar2[4] = 6,75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

bool func_20(int iParam0)//Position - 0x1AE9
{
	return func_21(func_22(iParam0));
}

int func_21(int iParam0)//Position - 0x1AFB
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_22(int iParam0)//Position - 0x1B21
{
	if (func_23(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

int func_23(int iParam0, int iParam1)//Position - 0x1B44
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_24(int iParam0, int iParam1)//Position - 0x1B7F
{
	if (Global_1627537[iParam0 /*532*/] == iParam1)
	{
		return func_25(iParam0);
	}
	return 0;
}

int func_25(int iParam0)//Position - 0x1B9F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 0);
	}
	return 0;
}

int func_26(int iParam0)//Position - 0x1BC5
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_25(unk_0x9EB17624F44A8DA4()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_27(int iParam0)//Position - 0x1C03
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/];
	}
	return -1;
}

int func_28(int iParam0)//Position - 0x1C22
{
	if (func_30(iParam0, 0))
	{
		return 1;
	}
	if (func_29())
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

bool func_29()//Position - 0x1C64
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

bool func_30(int iParam0, int iParam1)//Position - 0x1C75
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_31(-1, 0) == 8;
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

int func_31(int iParam0, bool bParam1)//Position - 0x1CC0
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_32();
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

int func_32()//Position - 0x1D01
{
	return Global_1312736;
}

bool func_33(int iParam0)//Position - 0x1D0D
{
	return unk_0xC80D31E4B587871C(Global_1573919, iParam0);
}

int func_34(int iParam0)//Position - 0x1D1F
{
	if (iParam0 != func_36() && func_35(iParam0, 1, 1))
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_324, 3);
	}
	return 0;
}

int func_35(int iParam0, bool bParam1, bool bParam2)//Position - 0x1D53
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

int func_36()//Position - 0x1D9D
{
	return -1;
}

int func_37()//Position - 0x1DA6
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8E1421E2A2A2FBD4())
	{
		if (func_120())
		{
			iVar0 = 1;
		}
	}
	if (func_38())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_38()//Position - 0x1DCE
{
	int iVar0;
	
	switch (Local_126.f_6)
	{
		case 0:
			func_119();
			if ((((func_116(unk_0x9EB17624F44A8DA4(), 1) && func_115()) || func_22(unk_0x9EB17624F44A8DA4()) == 159) || func_22(unk_0x9EB17624F44A8DA4()) == 225) || func_22(unk_0x9EB17624F44A8DA4()) == 233)
			{
				unk_0x2E4932E63763FE26(joaat("rhino"), 1);
			}
			func_113(&(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/]), 1);
			Local_126.f_176 = 1;
			Local_126.f_6 = 1;
			break;
		
		case 1:
			if (func_112())
			{
				func_113(&(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/]), 2);
				Local_126.f_6 = 2;
			}
			break;
		
		case 2:
			if (func_111(Local_101.f_20, 1))
			{
				Local_126.f_6 = 3;
			}
			break;
		
		case 3:
			if ((!func_116(unk_0x9EB17624F44A8DA4(), 1) && !func_115()) && !func_146())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_105(iVar0);
					iVar0++;
				}
			}
			if (unk_0x3A711520F83BAE98())
			{
				if ((((func_103() && !func_116(unk_0x9EB17624F44A8DA4(), 1)) && !func_115()) && !unk_0x4916190900E76373()) && func_101(unk_0x9EB17624F44A8DA4()) != 6)
				{
					func_46();
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_39(iVar0);
				iVar0++;
			}
			if (func_22(unk_0x9EB17624F44A8DA4()) == 225 || func_22(unk_0x9EB17624F44A8DA4()) == 233)
			{
				unk_0x2E4932E63763FE26(joaat("rhino"), 1);
			}
			if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), -2076,374f, 3112,294f, 33,13584f) >= 1030225f)
			{
				Local_126.f_6 = 4;
			}
			break;
		
		case 4:
			if ((((func_116(unk_0x9EB17624F44A8DA4(), 1) && func_115()) || func_22(unk_0x9EB17624F44A8DA4()) == 159) || func_22(unk_0x9EB17624F44A8DA4()) == 225) || func_22(unk_0x9EB17624F44A8DA4()) == 233)
			{
				unk_0x2E4932E63763FE26(joaat("rhino"), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_39(int iParam0)//Position - 0x1FE8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (Local_101.f_3[iParam0 /*5*/].f_2 > 2 && unk_0x918CA1BFFAA03556(Local_101.f_3[iParam0 /*5*/]))
	{
		if (unk_0x191BE1BC8F26F3C1(unk_0xF32FBF2453AC1753(Local_101.f_3[iParam0 /*5*/]), 0))
		{
			if (unk_0xA6DECE14FC9A8C51(Local_126.f_172[iParam0]))
			{
				unk_0xE30CF11C0EE14316(&(Local_126.f_172[iParam0]));
			}
		}
		else if (!unk_0xA6DECE14FC9A8C51(Local_126.f_172[iParam0]) && unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) >= 2)
		{
			Local_126.f_172[iParam0] = unk_0xCA43F0FC44D9B846(unk_0x29AB7D6D0DE18055(Local_101.f_3[iParam0 /*5*/]));
			unk_0x0C71C8E276E3EC54(Local_126.f_172[iParam0], 1);
		}
	}
	else if (unk_0xA6DECE14FC9A8C51(Local_126.f_172[iParam0]))
	{
		unk_0xE30CF11C0EE14316(&(Local_126.f_172[iParam0]));
	}
	switch (Local_101.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!func_45(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_4[iParam0], 16))
			{
				Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_4[iParam0] = 0;
				func_44(&(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_45(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_4[iParam0], 1))
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()) || unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
					{
						if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) >= 4)
						{
							if (func_19(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 3, 500, 0))
							{
								func_44(&(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_45(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_4[iParam0], 2))
			{
				if (func_43(iParam0))
				{
					iVar2 = unk_0x25D049AAC4603E65(Local_101.f_3[iParam0 /*5*/].f_4);
					iVar0 = unk_0x47BA76CE3C825A08(Local_101.f_3[iParam0 /*5*/].f_1);
					iVar1 = unk_0xF32FBF2453AC1753(Local_101.f_3[iParam0 /*5*/]);
					if (!unk_0x191BE1BC8F26F3C1(iVar2, 0))
					{
						if (unk_0x47DEC7699C60F07E(iVar2))
						{
							iVar3 = unk_0xDFD115BB10FE46A9(iVar2, 0);
							if ((!unk_0x191BE1BC8F26F3C1(iVar0, 0) && !unk_0x191BE1BC8F26F3C1(iVar1, 0)) && !unk_0x191BE1BC8F26F3C1(iVar3, 0))
							{
								unk_0x1A7A03CE00E217F2(iVar0, iVar1, iVar3, iVar2, unk_0xB3328BA8976B416C(iVar2, 1), 6, 70f, -1f, 30f, 500, 50, 1);
								unk_0x2489B9DB7A9BD262(iVar0, joaat("vehicle_weapon_space_rocket"));
								unk_0xA65C9B02EE3596FE(iVar0, false);
							}
						}
					}
				}
				if (func_42(iParam0))
				{
					iVar0 = unk_0x47BA76CE3C825A08(Local_101.f_3[iParam0 /*5*/].f_1);
					iVar2 = unk_0x25D049AAC4603E65(Local_101.f_3[iParam0 /*5*/].f_4);
					if (!unk_0x191BE1BC8F26F3C1(iVar2, 0))
					{
						if (unk_0x47DEC7699C60F07E(iVar2))
						{
							unk_0x3AFD315B28E542BD(iVar0, iVar2, unk_0xB3328BA8976B416C(iVar2, 1));
						}
					}
				}
				if (func_41(iParam0, 6))
				{
					func_44(&(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_45(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_4[iParam0], 8))
			{
				if (func_43(iParam0))
				{
					iVar0 = unk_0x47BA76CE3C825A08(Local_101.f_3[iParam0 /*5*/].f_1);
					iVar1 = unk_0xF32FBF2453AC1753(Local_101.f_3[iParam0 /*5*/]);
					if (!unk_0x191BE1BC8F26F3C1(iVar0, 0) && !unk_0x191BE1BC8F26F3C1(iVar1, 0))
					{
						unk_0x1A7A03CE00E217F2(iVar0, iVar1, 0, 0, -2076,374f, 3112,294f, 33,13584f, 9, 70f, -1f, 30f, 500, 50, 1);
					}
				}
				if (func_41(iParam0, 9))
				{
					func_44(&(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (unk_0x93C304998B457C45(Local_101.f_3[iParam0 /*5*/]) || unk_0x93C304998B457C45(Local_101.f_3[iParam0 /*5*/].f_1))
			{
				if (!unk_0x9E06F0EE20F58CED(unk_0xB3328BA8976B416C(unk_0x29AB7D6D0DE18055(Local_101.f_3[iParam0 /*5*/]), 0), 10f) && !unk_0xE3246BE22002223A(unk_0xB3328BA8976B416C(unk_0x29AB7D6D0DE18055(Local_101.f_3[iParam0 /*5*/]), 0), 10f))
				{
					if (unk_0x918CA1BFFAA03556(Local_101.f_3[iParam0 /*5*/].f_1) && unk_0xE53FD7AF7F25C0A8(Local_101.f_3[iParam0 /*5*/].f_1))
					{
						uVar4 = unk_0x29AB7D6D0DE18055(Local_101.f_3[iParam0 /*5*/].f_1);
						unk_0xFA8AA9E856FCF99B(&uVar4);
					}
					if (unk_0x918CA1BFFAA03556(Local_101.f_3[iParam0 /*5*/]) && unk_0xE53FD7AF7F25C0A8(Local_101.f_3[iParam0 /*5*/]))
					{
						uVar5 = unk_0x29AB7D6D0DE18055(Local_101.f_3[iParam0 /*5*/]);
						unk_0xFA8AA9E856FCF99B(&uVar5);
					}
				}
			}
			else if (func_45(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_4[iParam0], 16))
			{
				func_40(&(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_4[iParam0]), 16);
			}
			break;
	}
}

void func_40(var uParam0, int iParam1)//Position - 0x2475
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_41(int iParam0, int iParam1)//Position - 0x248A
{
	int iVar0;
	
	if (!unk_0x918CA1BFFAA03556(Local_101.f_3[iParam0 /*5*/]))
	{
		return 1;
	}
	iVar0 = unk_0xF32FBF2453AC1753(Local_101.f_3[iParam0 /*5*/]);
	if (unk_0x191BE1BC8F26F3C1(iVar0, 0))
	{
		return 1;
	}
	if (unk_0x84801DF26E514929(iVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_42(int iParam0)//Position - 0x24D2
{
	int iVar0;
	
	if (!unk_0x918CA1BFFAA03556(Local_101.f_3[iParam0 /*5*/].f_1))
	{
		return 0;
	}
	iVar0 = unk_0x47BA76CE3C825A08(Local_101.f_3[iParam0 /*5*/].f_1);
	if (unk_0x191BE1BC8F26F3C1(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xA0BF73C5030D3F60(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_43(int iParam0)//Position - 0x251D
{
	int iVar0;
	
	if (!unk_0x918CA1BFFAA03556(Local_101.f_3[iParam0 /*5*/]))
	{
		return 0;
	}
	iVar0 = unk_0xF32FBF2453AC1753(Local_101.f_3[iParam0 /*5*/]);
	if (unk_0x191BE1BC8F26F3C1(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xA0BF73C5030D3F60(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_44(var uParam0, int iParam1)//Position - 0x2564
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_45(var uParam0, int iParam1)//Position - 0x2575
{
	return (uParam0 && iParam1) != 0;
}

void func_46()//Position - 0x2584
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<6> Var3;
	
	func_100();
	func_95();
	vVar2 = { vLocal_100 };
	if (((func_19(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 3, 1000, 0) || func_18(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 1000)) || func_93(unk_0xFC1458A37D98B502())) && func_92(unk_0xFC1458A37D98B502()))
	{
		bVar0 = true;
	}
	else
	{
		Local_126.f_178 = 0;
	}
	if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1588,977f, 2793,941f, 14,98289f, -1575,664f, 2779,558f, 26,11536f, 29,75f, 0, 1, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -2306,916f, 3390,545f, 29,17826f, -2322,245f, 3401,719f, 35,63131f, 36f, 0, 1, 0))
	{
		bVar1 = true;
	}
	else
	{
		Local_126.f_179 = 0;
	}
	if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1588,977f, 2793,941f, 14,98289f, -1575,664f, 2779,558f, 26,11536f, 29,75f, 0, 1, 0))
	{
		vVar2 = { -1592,1f, 2797,2f, 17,1f };
		Local_126.f_181 = 1;
	}
	else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -2306,916f, 3390,545f, 29,17826f, -2322,245f, 3401,719f, 35,63131f, 36f, 0, 1, 0))
	{
		vVar2 = { -2303,9f, 3388f, 31,3f };
		Local_126.f_181 = 2;
	}
	if (func_90(bVar0, bVar1))
	{
		func_88();
		if (!func_87())
		{
			Global_1573344 = 1;
			func_86(&(Local_126.f_7), 2);
			func_85(&(Local_126.f_7), 2);
			func_84(&(Local_126.f_7), 2, 0, "AIRMECH", 0, 1);
			func_83(&(Local_126.f_7), 2, vVar2);
			Global_15045.f_162 = { vVar2 };
			Var3 = { func_82() };
			if (!unk_0xAB019B170BF1309C(&Var3))
			{
				if (func_65(&(Local_126.f_7), "SMGFZAU", &Var3, 7, 0, 0, 0))
				{
					func_47(bVar0, bVar1);
				}
			}
		}
	}
	else if (!func_87())
	{
		if (!unk_0xC80D31E4B587871C(Local_126.f_182, 2))
		{
			Global_1573344 = 0;
			func_86(&(Local_126.f_7), 2);
			func_85(&(Local_126.f_7), 2);
			unk_0x872F1C1F8587CCC7(&(Local_126.f_182), 2);
		}
	}
}

void func_47(bool bParam0, bool bParam1)//Position - 0x27BA
{
	if (bParam0)
	{
		if (!func_62(16000, -1, -1))
		{
			func_61(16000, 1, -1, 1);
			if (Global_2512808.f_5875)
			{
				if (func_55())
				{
					func_53("AB_ENTRY_HT");
					Local_126.f_180 = 1;
				}
			}
			else if (func_55())
			{
				func_52("AB_ENTRY_HT", -1);
			}
		}
		else if (!func_62(16001, -1, -1))
		{
			func_61(16001, 1, -1, 1);
			if (Global_2512808.f_5875)
			{
				if (func_55())
				{
					func_53("AB_ENTRY_HT");
					Local_126.f_180 = 1;
				}
			}
			else if (func_55())
			{
				func_52("AB_ENTRY_HT", -1);
			}
		}
		Local_126.f_178 = 1;
	}
	else if (bParam1)
	{
		if (!func_62(15999, -1, -1))
		{
			func_61(15999, 1, -1, 1);
			if (Global_2512808.f_5875)
			{
				if (func_55())
				{
					func_53("AB_ENTRY_HT");
					Local_126.f_180 = 1;
				}
			}
			else if (func_55())
			{
				func_52("AB_ENTRY_HT", -1);
			}
		}
		else if (Local_126.f_181 == 1)
		{
			if (!func_62(16002, -1, -1))
			{
				func_61(16002, 1, -1, 1);
				if (Global_2512808.f_5875)
				{
					if (func_55())
					{
						func_53("AB_ENTRY_HT");
						Local_126.f_180 = 1;
					}
				}
				else if (func_55())
				{
					func_52("AB_ENTRY_HT", -1);
				}
			}
		}
		else if (Local_126.f_181 == 2)
		{
			if (func_49(18097, -1, -1) == 0)
			{
				func_48(18097, 1, -1, 1);
				if (Global_2512808.f_5875)
				{
					if (func_55())
					{
						func_53("AB_ENTRY_HT");
						Local_126.f_180 = 1;
					}
				}
				else if (func_55())
				{
					func_52("AB_ENTRY_HT", -1);
				}
			}
		}
		Local_126.f_179 = 1;
		Local_126.f_181 = 0;
	}
	if (unk_0xC80D31E4B587871C(Local_126.f_182, 2))
	{
		unk_0x0EE72DB1CD8A3B86(&(Local_126.f_182), 2);
	}
}

var func_48(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x297B
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_32();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x05D1B2AB3DEB3094((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x05D1B2AB3DEB3094((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x05D1B2AB3DEB3094((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x05D1B2AB3DEB3094((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x51999F13DC0B6E31((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x05D1B2AB3DEB3094((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x51999F13DC0B6E31((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x05D1B2AB3DEB3094((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x05D1B2AB3DEB3094((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x05D1B2AB3DEB3094((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x05D1B2AB3DEB3094((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x05D1B2AB3DEB3094((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x05D1B2AB3DEB3094((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x05D1B2AB3DEB3094((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x05D1B2AB3DEB3094((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x05D1B2AB3DEB3094((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x05D1B2AB3DEB3094((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x05D1B2AB3DEB3094((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x05D1B2AB3DEB3094((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x05D1B2AB3DEB3094((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xFD227BDFDE38A9C4(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_49(int iParam0, int iParam1, int iParam2)//Position - 0x2E29
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_32();
	}
	iVar0 = 0;
	iVar1 = func_51(iParam0, iParam1);
	uVar2 = func_50(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xB1AF044156BFE093(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_50(int iParam0)//Position - 0x2E6F
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x05D1B2AB3DEB3094((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x05D1B2AB3DEB3094((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x05D1B2AB3DEB3094((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x05D1B2AB3DEB3094((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x05D1B2AB3DEB3094((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x05D1B2AB3DEB3094((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x05D1B2AB3DEB3094((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x05D1B2AB3DEB3094((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x05D1B2AB3DEB3094((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x05D1B2AB3DEB3094((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x05D1B2AB3DEB3094((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x05D1B2AB3DEB3094((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x05D1B2AB3DEB3094((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x05D1B2AB3DEB3094((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x05D1B2AB3DEB3094((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x05D1B2AB3DEB3094((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x05D1B2AB3DEB3094((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x05D1B2AB3DEB3094((iParam0 - 18162)) * 8) * 8;
	}
	return iVar0;
}

int func_51(int iParam0, int iParam1)//Position - 0x31B5
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_32();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x51999F13DC0B6E31((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x51999F13DC0B6E31((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	return iVar0;
}

void func_52(char* sParam0, int iParam1)//Position - 0x34A8
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

void func_53(char* sParam0)//Position - 0x34BF
{
	if (unk_0xF491DD47B88AA84E())
	{
		unk_0x3E80C2F7BC665259(1);
	}
	if (!func_54(sParam0))
	{
		func_52(sParam0, -1);
	}
}

bool func_54(char* sParam0)//Position - 0x34E4
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

int func_55()//Position - 0x34F7
{
	if (func_58(unk_0x9EB17624F44A8DA4()) && !func_56(unk_0x9EB17624F44A8DA4(), 0))
	{
		return 1;
	}
	return 0;
}

bool func_56(int iParam0, bool bParam1)//Position - 0x351E
{
	if (!bParam1)
	{
		if (func_57(iParam0))
		{
			return 0;
		}
	}
	return Global_1627537[iParam0 /*532*/].f_11 != func_36();
}

int func_57(int iParam0)//Position - 0x3549
{
	if (iParam0 != func_36())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_36())
		{
			return Global_1627537[iParam0 /*532*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_58(int iParam0)//Position - 0x357E
{
	int iVar0;
	
	if (func_60(iParam0))
	{
		iVar0 = func_59(iParam0);
		if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0)//Position - 0x35B7
{
	if (iParam0 != func_36())
	{
		return Global_1595693[iParam0 /*680*/].f_266.f_241;
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x35DA
{
	if (iParam0 != func_36())
	{
		return Global_1595693[iParam0 /*680*/].f_266.f_241 != 0;
	}
	return 0;
}

int func_61(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x35FF
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
		iParam2 = func_32();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xA7C33AF584635A56((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xDBE4A47179904C7B((iParam0 - 0)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xA7C33AF584635A56((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xDBE4A47179904C7B((iParam0 - 192)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xA7C33AF584635A56((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xDBE4A47179904C7B((iParam0 - 513)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xA7C33AF584635A56((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xDBE4A47179904C7B((iParam0 - 705)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x88B5FB6273C3123E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xDBE4A47179904C7B((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x88B5FB6273C3123E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xDBE4A47179904C7B((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x7CD64EB2C84F32FF((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xDBE4A47179904C7B((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x7CD64EB2C84F32FF((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xDBE4A47179904C7B((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x7CD64EB2C84F32FF((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xDBE4A47179904C7B((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x7CD64EB2C84F32FF((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xDBE4A47179904C7B((iParam0 - 7385)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x7CD64EB2C84F32FF((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xDBE4A47179904C7B((iParam0 - 7321)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x7CD64EB2C84F32FF((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xDBE4A47179904C7B((iParam0 - 9361)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x7CD64EB2C84F32FF((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xDBE4A47179904C7B((iParam0 - 15369)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x7CD64EB2C84F32FF((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xDBE4A47179904C7B((iParam0 - 15562)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x7CD64EB2C84F32FF((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xDBE4A47179904C7B((iParam0 - 15946)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x7CD64EB2C84F32FF((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xDBE4A47179904C7B((iParam0 - 18098)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar17, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_62(int iParam0, int iParam1, int iParam2)//Position - 0x3AC8
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_32();
	}
	iVar1 = func_64(iParam0, iParam1);
	uVar2 = func_63(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_63(int iParam0)//Position - 0x3B05
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

int func_64(int iParam0, int iParam1)//Position - 0x3DC5
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_32();
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

bool func_65(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4065
{
	func_81(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_66(sParam2, iParam3, 0);
}

int func_66(char* sParam0, int iParam1, bool bParam2)//Position - 0x40B3
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
					func_80();
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
		if (func_79(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_78();
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
				func_71();
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
				if (func_70())
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
			if (func_69())
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
			func_68();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_67();
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
		func_80();
	}
	return 0;
}

void func_67()//Position - 0x437F
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

void func_68()//Position - 0x43B1
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

int func_69()//Position - 0x4446
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_70()//Position - 0x446D
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

void func_71()//Position - 0x4506
{
	if (func_77(14))
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
		Global_14453 = func_72();
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

var func_72()//Position - 0x45A8
{
	func_73();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_73()//Position - 0x45C1
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_76(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_75(unk_0xFC1458A37D98B502());
			if (func_74(iVar0) && (!func_77(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_74(Global_104555.f_2353.f_539.f_4301))
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

bool func_74(int iParam0)//Position - 0x46BE
{
	return iParam0 < 3;
}

int func_75(int iParam0)//Position - 0x46CA
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_76(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_76(int iParam0)//Position - 0x4707
{
	if (func_74(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_77(int iParam0)//Position - 0x4731
{
	return Global_35861 == iParam0;
}

void func_78()//Position - 0x473F
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

bool func_79(int iParam0, int iParam1)//Position - 0x4797
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

void func_80()//Position - 0x47D2
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

void func_81(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x4829
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = uParam5;
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

struct<6> func_82()//Position - 0x487F
{
	struct<6> Var0;
	
	StringCopy(&Var0, "", 24);
	if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1588,977f, 2793,941f, 14,98289f, -1575,664f, 2779,558f, 26,11536f, 29,75f, 0, 1, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -2306,916f, 3390,545f, 29,17826f, -2322,245f, 3401,719f, 35,63131f, 36f, 0, 1, 0))
	{
		if (!func_62(15999, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_WLK1ST", 24);
		}
		else if (!func_62(16002, -1, -1) || func_49(18097, -1, -1) == 0)
		{
			StringCopy(&Var0, "SMGFZ_WLKENT", 24);
		}
	}
	else if (((func_19(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 3, 1000, 0) || func_18(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 1000)) || func_93(unk_0xFC1458A37D98B502())) && func_92(unk_0xFC1458A37D98B502()))
	{
		if (!func_62(16000, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLY1ST", 24);
		}
		else if (!func_62(16001, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLYENT", 24);
		}
	}
	return Var0;
}

void func_83(var uParam0, int iParam1, vector3 vParam2)//Position - 0x49AC
{
	uParam0->f_161 = iParam1;
	uParam0->f_162 = { vParam2 };
}

void func_84(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x49C4
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70856)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4ACB9D202CFF8727(iParam2, 0);
			}
			else
			{
				unk_0x4ACB9D202CFF8727(iParam2, 1);
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 0);
			}
			else
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 1);
			}
		}
	}
}

void func_85(var uParam0, int iParam1)//Position - 0x4A5F
{
	uParam0->f_161 = -99;
	uParam0->f_162 = { 0f, 0f, 0f };
	if (iParam1 < 0)
	{
	}
}

void func_86(var uParam0, int iParam1)//Position - 0x4A7D
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_87()//Position - 0x4A9A
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_88()//Position - 0x4ABC
{
	Global_14622 = 0;
	func_89();
}

void func_89()//Position - 0x4ACC
{
	if (unk_0x42111BD51D233AAB())
	{
		unk_0x495EB1DD7306493A();
		Global_16767 = 0;
		unk_0xB31CEFB00C146C91(true);
		Global_15756 = 6;
		return;
	}
}

int func_90(bool bParam0, bool bParam1)//Position - 0x4AF0
{
	if (bParam0)
	{
		if (!Local_126.f_178)
		{
			if (unk_0xC80D31E4B587871C(Local_126.f_182, 1))
			{
				if (unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
				{
					if (!func_62(16000, -1, -1) || !func_62(16001, -1, -1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (bParam1)
	{
		if (!Local_126.f_179)
		{
			if (unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()) && unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
			{
				if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || func_91())
				{
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1588,977f, 2793,941f, 14,98289f, -1575,664f, 2779,558f, 26,11536f, 29,75f, 0, 1, 0))
					{
						if (!func_62(15999, -1, -1) || !func_62(16002, -1, -1))
						{
							if (unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502()) >= -25f && unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502()) <= 125f)
							{
								return 1;
							}
						}
					}
					else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -2306,916f, 3390,545f, 29,17826f, -2322,245f, 3401,719f, 35,63131f, 36f, 0, 1, 0))
					{
						if (!func_62(15999, -1, -1) || func_49(18097, -1, -1) == 0)
						{
							if (unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502()) >= 160f && unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502()) <= 290f)
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_91()//Position - 0x4C72
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (unk_0xE7F7942A19E7A681(iVar0))
		{
			if (func_6(iVar0))
			{
				if (!func_5(iVar0, 1) && !func_4(iVar0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_92(int iParam0)//Position - 0x4CBF
{
	if (unk_0x47DEC7699C60F07E(iParam0) || unk_0xFCB32314B66A3503(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0)//Position - 0x4CE1
{
	if (unk_0x6ADD12BF4D6D2587(iParam0) && func_94(iParam0))
	{
		if ((unk_0x0F3033474C49912D(iParam0, -2013,3f, 2878,6f, 1000f, -2864,6f, 3357,6f, 31f, 400f, 0, 1, 0) || unk_0x0F3033474C49912D(iParam0, -1700f, 3150f, 1000f, -2039f, 3342f, 30f, 175f, 0, 1, 0)) || unk_0x0F3033474C49912D(iParam0, -1950f, 2786f, 1000f, -1856f, 3141f, 31f, 270f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_94(int iParam0)//Position - 0x4D95
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

void func_95()//Position - 0x4DB6
{
	if (Local_126.f_180)
	{
		if (!func_99(&(Local_126.f_183)))
		{
			func_98(&(Local_126.f_183), 0, 0);
		}
		else if (!func_97(&(Local_126.f_183), 17000, 0))
		{
			if (!func_54("AB_ENTRY_HT"))
			{
				func_52("AB_ENTRY_HT", -1);
			}
		}
		else if (func_97(&(Local_126.f_183), 17000, 0))
		{
			if (func_54("AB_ENTRY_HT"))
			{
				unk_0x3E80C2F7BC665259(1);
			}
			func_96(&(Local_126.f_183));
			Local_126.f_180 = 0;
		}
	}
}

void func_96(var uParam0)//Position - 0x4E36
{
	uParam0->f_1 = 0;
}

int func_97(var uParam0, int iParam1, bool bParam2)//Position - 0x4E43
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_98(uParam0, bParam2, 0);
	if (unk_0x3A711520F83BAE98() && !bParam2)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_98(var uParam0, bool bParam1, bool bParam2)//Position - 0x4EA1
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

bool func_99(var uParam0)//Position - 0x4EE6
{
	return uParam0->f_1;
}

void func_100()//Position - 0x4EF2
{
	if (unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
	{
		if ((func_19(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 3, 1000, 0) || func_18(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 1000)) || func_93(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0xC80D31E4B587871C(Local_126.f_182, 0))
			{
				if ((((func_92(unk_0xFC1458A37D98B502()) && unk_0x0ACC2116170FA204(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0))) && unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0) && func_91()) && !Global_1678672)
				{
					if (!unk_0xC80D31E4B587871C(Local_126.f_182, 1) && !unk_0xC80D31E4B587871C(Local_126.f_182, 3))
					{
						unk_0x872F1C1F8587CCC7(&(Local_126.f_182), 1);
					}
				}
				unk_0x872F1C1F8587CCC7(&(Local_126.f_182), 0);
			}
		}
		else
		{
			if (unk_0xC80D31E4B587871C(Local_126.f_182, 0))
			{
				unk_0x0EE72DB1CD8A3B86(&(Local_126.f_182), 0);
			}
			if (unk_0xC80D31E4B587871C(Local_126.f_182, 1))
			{
				unk_0x0EE72DB1CD8A3B86(&(Local_126.f_182), 1);
			}
			if (unk_0xC80D31E4B587871C(Local_126.f_182, 3))
			{
				unk_0x0EE72DB1CD8A3B86(&(Local_126.f_182), 3);
			}
			if (Global_1678672)
			{
				Global_1678672 = 0;
			}
		}
	}
}

int func_101(int iParam0)//Position - 0x5011
{
	if (func_22(iParam0) == 233)
	{
		return func_102(iParam0);
	}
	return -1;
}

int func_102(int iParam0)//Position - 0x502E
{
	if (func_23(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_176;
	}
	return -1;
}

int func_103()//Position - 0x5051
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_58(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xF6A72924028F588B(iVar0);
		if (func_35(iVar1, 0, 1))
		{
			if (iVar1 != unk_0x9EB17624F44A8DA4())
			{
				if (func_104(unk_0x25D049AAC4603E65(unk_0x9EB17624F44A8DA4()), unk_0x25D049AAC4603E65(iVar1)))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(unk_0x25D049AAC4603E65(iVar1), 0);
					if (unk_0x317536BCEA8FA6B0(iVar2, -1, 0) == unk_0x25D049AAC4603E65(iVar1))
					{
						if (func_58(iVar1))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_104(int iParam0, int iParam1)//Position - 0x50D8
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!unk_0x88DDBE9908752BF0(iParam0, 0) || !unk_0x88DDBE9908752BF0(iParam1, 0))
	{
		return 0;
	}
	return unk_0xDFD115BB10FE46A9(iParam0, 0) == unk_0xDFD115BB10FE46A9(iParam1, 0);
}

void func_105(int iParam0)//Position - 0x5117
{
	int iVar0;
	
	if (!unk_0x918CA1BFFAA03556(Local_101[iParam0]))
	{
		return;
	}
	iVar0 = unk_0x47BA76CE3C825A08(Local_101[iParam0]);
	if (unk_0x191BE1BC8F26F3C1(iVar0, 0))
	{
		return;
	}
	switch (Local_101.f_21[iParam0])
	{
		case 0:
			if (!func_45(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_1[iParam0], 64))
			{
				Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_1[iParam0] = 0;
				func_44(&(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_45(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iVar0, 1)) <= 900f)
					{
						func_44(&(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if (!func_45(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_1[iParam0], 2) && system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iVar0, 1)) <= 900f)
			{
				func_84(&(Local_126.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				func_110(&(Local_126.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_44(&(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_45(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_1[iParam0], 4))
			{
				if (func_109(iParam0))
				{
					unk_0x9627C22EF3C3F4D6(iVar0, func_108(iParam0), -1, 0);
				}
				if (func_107(iParam0, 1630799643))
				{
					func_44(&(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_45(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_1[iParam0], 8) && system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), unk_0xB3328BA8976B416C(iVar0, 1)) <= 900f) && unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) < 1)
			{
				if (!func_16(&Local_126))
				{
					func_13(&Local_126);
				}
				if (func_10(&Local_126) >= 7f)
				{
					func_44(&(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_1[iParam0]), 8);
					func_110(&(Local_126.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_16(&Local_126))
			{
				func_1(&Local_126);
			}
			if (!func_45(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_1[iParam0], 16))
			{
				if (func_106(iParam0) && system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), unk_0xB3328BA8976B416C(iVar0, 1)) <= 900f)
				{
					func_44(&(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_1[iParam0]), 16);
					if (!func_146())
					{
						unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 36, unk_0xAF22430031BD1E97(4));
					}
					else
					{
						unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 36, unk_0xAF22430031BD1E97(Global_262145.f_20689));
					}
				}
			}
			if (func_45(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iVar0, 1)) > 900f)
					{
						func_40(&(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_45(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_1[iParam0], 16))
			{
				if (func_106(iParam0) && system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), unk_0xB3328BA8976B416C(iVar0, 1)) <= 900f)
				{
					func_44(&(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_1[iParam0]), 16);
					if (!func_146())
					{
						unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 36, (unk_0xAF22430031BD1E97(4) - unk_0xAF22430031BD1E97(unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()))));
					}
					else
					{
						unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 36, (unk_0xAF22430031BD1E97(Global_262145.f_20689) - unk_0xAF22430031BD1E97(unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()))));
					}
				}
			}
			if (func_45(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iVar0, 1)) > 900f)
					{
						func_40(&(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_107(iParam0, 1630799643))
			{
				if (func_109(iParam0))
				{
					unk_0x9627C22EF3C3F4D6(iVar0, func_108(iParam0), -1, 0);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_45(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_1[iParam0], 4))
			{
				if (func_109(iParam0))
				{
					unk_0xB8E08BD5B184DF4E(iVar0);
				}
				if (!func_107(iParam0, 1435919172))
				{
					func_40(&(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_1[iParam0]), 4);
					func_40(&(Local_125[unk_0x622FF3AE4B1D07C3() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_106(int iParam0)//Position - 0x55D8
{
	int iVar0;
	
	if (!unk_0x918CA1BFFAA03556(Local_101[iParam0]))
	{
		return 0;
	}
	iVar0 = unk_0x47BA76CE3C825A08(Local_101[iParam0]);
	if (unk_0x191BE1BC8F26F3C1(iVar0, 0))
	{
		return 0;
	}
	if (unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		return 0;
	}
	if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
	{
		return 1;
	}
	if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iVar0))
	{
		return 1;
	}
	if (unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iVar0))
	{
		return 1;
	}
	if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iVar0, 1)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_107(int iParam0, int iParam1)//Position - 0x566F
{
	int iVar0;
	
	if (!unk_0x918CA1BFFAA03556(Local_101[iParam0]))
	{
		return 1;
	}
	iVar0 = unk_0x47BA76CE3C825A08(Local_101[iParam0]);
	if (unk_0x191BE1BC8F26F3C1(iVar0, 0))
	{
		return 1;
	}
	if (unk_0x78F50AA8F955BEFC(iVar0, iParam1) != 1 && unk_0x78F50AA8F955BEFC(iVar0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

int func_108(int iParam0)//Position - 0x56C4
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
		{
			iVar2 = unk_0x25D049AAC4603E65(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0)));
			if (!unk_0x191BE1BC8F26F3C1(iVar2, 0))
			{
				fVar4 = system::vdist2(unk_0xB3328BA8976B416C(iVar2, 1), unk_0xB3328BA8976B416C(unk_0x29AB7D6D0DE18055(Local_101[iParam0]), 1));
				if (fVar4 < fVar3)
				{
					iVar1 = iVar2;
					fVar3 = fVar4;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_109(int iParam0)//Position - 0x573E
{
	int iVar0;
	
	if (!unk_0x918CA1BFFAA03556(Local_101[iParam0]))
	{
		return 0;
	}
	iVar0 = unk_0x47BA76CE3C825A08(Local_101[iParam0]);
	if (unk_0x191BE1BC8F26F3C1(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xA0BF73C5030D3F60(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_110(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x5781
{
	func_81(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 1;
	return func_66(sParam2, iParam3, 0);
}

bool func_111(var uParam0, int iParam1)//Position - 0x57CF
{
	return (uParam0 && iParam1) != 0;
}

int func_112()//Position - 0x57DE
{
	if (!unk_0x9A0B2ED5055D3F0B(joaat("s_m_y_marine_01")))
	{
		return 0;
	}
	if (!unk_0x9A0B2ED5055D3F0B(joaat("lazer")))
	{
		return 0;
	}
	if (!unk_0x9A0B2ED5055D3F0B(joaat("s_m_y_pilot_01")))
	{
		return 0;
	}
	return 1;
}

void func_113(var uParam0, int iParam1)//Position - 0x581A
{
	func_114(uParam0, iParam1);
}

void func_114(var uParam0, var uParam1)//Position - 0x582A
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_115()//Position - 0x583B
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 0);
}

int func_116(int iParam0, bool bParam1)//Position - 0x5857
{
	if (bParam1)
	{
		if (func_117(iParam0))
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

bool func_117(int iParam0)//Position - 0x5883
{
	return func_118(iParam0);
}

bool func_118(int iParam0)//Position - 0x5891
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

void func_119()//Position - 0x58AB
{
	unk_0x6FF834D85E2DD4C6(joaat("s_m_y_marine_01"));
	unk_0x6FF834D85E2DD4C6(joaat("lazer"));
	unk_0x6FF834D85E2DD4C6(joaat("s_m_y_pilot_01"));
}

int func_120()//Position - 0x58CE
{
	int iVar0;
	
	switch (Local_101.f_19)
	{
		case 0:
			if (func_140())
			{
				Local_101.f_19 = 1;
			}
			break;
		
		case 1:
			if (func_139())
			{
				Local_101.f_19 = 2;
			}
			break;
		
		case 2:
			if ((((func_116(unk_0x9EB17624F44A8DA4(), 1) || func_115()) || func_22(unk_0x9EB17624F44A8DA4()) == 225) || func_22(unk_0x9EB17624F44A8DA4()) == 233) || Global_1574312)
			{
				func_113(&(Local_101.f_20), 1);
				Local_101.f_19 = 3;
			}
			else if (func_137())
			{
				func_113(&(Local_101.f_20), 1);
				Local_101.f_19 = 3;
			}
			break;
		
		case 3:
			if (!func_116(unk_0x9EB17624F44A8DA4(), 1) && !func_115())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_134(iVar0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_123(iVar0);
					iVar0++;
				}
			}
			if (func_22(unk_0x9EB17624F44A8DA4()) == 225 || func_22(unk_0x9EB17624F44A8DA4()) == 233)
			{
				func_122();
			}
			if (func_121())
			{
				Local_101.f_19 = 4;
			}
			break;
		
		case 4:
			func_122();
			return 1;
			break;
	}
	return 0;
}

int func_121()//Position - 0x5A0B
{
	if (unk_0x5C6098C2BAD00378() > 1)
	{
		return 0;
	}
	if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), -2076,374f, 3112,294f, 33,13584f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_122()//Position - 0x5A4C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x918CA1BFFAA03556(Local_101[iVar0]))
		{
			iVar1 = unk_0x47BA76CE3C825A08(Local_101[iVar0]);
			if (!unk_0x191BE1BC8F26F3C1(iVar1, 0))
			{
				unk_0x486F346ADFE56674(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x918CA1BFFAA03556(Local_101.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = unk_0x47BA76CE3C825A08(Local_101.f_3[iVar0 /*5*/].f_1);
			if (!unk_0x191BE1BC8F26F3C1(iVar1, 0))
			{
				unk_0x486F346ADFE56674(&iVar1);
			}
		}
		if (unk_0x918CA1BFFAA03556(Local_101.f_3[iVar0 /*5*/]))
		{
			iVar2 = unk_0xF32FBF2453AC1753(Local_101.f_3[iVar0 /*5*/]);
			if (!unk_0x191BE1BC8F26F3C1(iVar2, 0))
			{
				unk_0x5380482A432E314E(&iVar2);
			}
		}
		iVar0++;
	}
}

void func_123(int iParam0)//Position - 0x5B02
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (Local_101.f_3[iParam0 /*5*/].f_2 > 2)
	{
		if (unk_0x918CA1BFFAA03556(Local_101.f_3[iParam0 /*5*/].f_1))
		{
			if (!unk_0x191BE1BC8F26F3C1(unk_0x47BA76CE3C825A08(Local_101.f_3[iParam0 /*5*/].f_1), 0))
			{
				iVar0 = unk_0x47BA76CE3C825A08(Local_101.f_3[iParam0 /*5*/].f_1);
				vVar1 = { unk_0xB3328BA8976B416C(iVar0, 1) };
				if (vVar1.z <= -150f)
				{
					unk_0x486F346ADFE56674(&iVar0);
					if (unk_0x918CA1BFFAA03556(Local_101.f_3[iParam0 /*5*/]))
					{
						if (!unk_0x191BE1BC8F26F3C1(unk_0xF32FBF2453AC1753(Local_101.f_3[iParam0 /*5*/]), 0))
						{
							iVar2 = unk_0xF32FBF2453AC1753(Local_101.f_3[iParam0 /*5*/]);
							unk_0x5380482A432E314E(&iVar2);
						}
					}
				}
			}
		}
	}
	switch (Local_101.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (func_133(iParam0, 16))
			{
				Local_101.f_3[iParam0 /*5*/].f_4 = -1;
				Local_101.f_3[iParam0 /*5*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_131(iParam0))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 2;
			}
			break;
		
		case 2:
			vVar3 = { func_130(iParam0) };
			if (!func_129(vVar3))
			{
				if (!unk_0xE3246BE22002223A(vVar3, 20f) && !unk_0x9E06F0EE20F58CED(vVar3, 20f))
				{
					if (func_126(vVar3, unk_0xF0371FE6E2BF9599(unk_0x25D049AAC4603E65(Local_101.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_101.f_3[iParam0 /*5*/].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_133(iParam0, 2))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 4;
			}
			break;
		
		case 4:
			iVar4 = unk_0x25D049AAC4603E65(Local_101.f_3[iParam0 /*5*/].f_4);
			if (!unk_0x6ADD12BF4D6D2587(iVar4))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0x191BE1BC8F26F3C1(iVar4, 0))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0x47DEC7699C60F07E(iVar4) || unk_0xFCB32314B66A3503(iVar4))
			{
				if (func_125(unk_0xDFD115BB10FE46A9(iVar4, 0)))
				{
					Local_101.f_3[iParam0 /*5*/].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_133(iParam0, 8))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 6;
				Local_101.f_3[iParam0 /*5*/].f_4 = -1;
			}
			break;
		
		case 6:
			if (!func_124(iParam0, 16))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 0;
			}
			if (func_131(iParam0))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 3;
			}
			break;
	}
}

int func_124(int iParam0, int iParam1)//Position - 0x5D5C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
		{
			if (func_45(Local_125[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_125(int iParam0)//Position - 0x5DA0
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

int func_126(vector3 vParam0, float fParam1, int iParam2)//Position - 0x5DE3
{
	int iVar0;
	
	if (!unk_0x8E1421E2A2A2FBD4())
	{
		return 1;
	}
	iVar0 = 1;
	if (!unk_0x918CA1BFFAA03556(Local_101.f_3[iParam2 /*5*/]))
	{
		if (!func_128(&(Local_101.f_3[iParam2 /*5*/]), joaat("lazer"), vParam0, fParam1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = 0;
		}
		else
		{
			unk_0x39748EEC52404AFA(unk_0xF32FBF2453AC1753(Local_101.f_3[iParam2 /*5*/]), 3);
		}
	}
	if (unk_0x918CA1BFFAA03556(Local_101.f_3[iParam2 /*5*/]))
	{
		if (!unk_0x918CA1BFFAA03556(Local_101.f_3[iParam2 /*5*/].f_1))
		{
			if (!func_127(&(Local_101.f_3[iParam2 /*5*/].f_1), Local_101.f_3[iParam2 /*5*/], 29, joaat("s_m_y_pilot_01"), -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				unk_0x2489B9DB7A9BD262(unk_0x47BA76CE3C825A08(Local_101.f_3[iParam2 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
				unk_0xA65C9B02EE3596FE(unk_0x47BA76CE3C825A08(Local_101.f_3[iParam2 /*5*/].f_1), false);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_127(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x5ECB
{
	if (!unk_0x7A419CA188B4A665(1))
	{
		return 0;
	}
	if (!unk_0x93C304998B457C45(uParam1))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(unk_0xF32FBF2453AC1753(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xABF6E3937F555048(unk_0x00D1A9572426E8DD(unk_0xF32FBF2453AC1753(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x93C304998B457C45(*uParam0))
	{
		unk_0xFBA991D3A851E195(unk_0x47BA76CE3C825A08(*uParam0), iParam7);
		if (unk_0x0D4BF24EE51A419A(unk_0x47BA76CE3C825A08(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9CE66BFF230839CE(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_128(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x5F53
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x3B0047CED068C463(iParam1))
	{
		return 0;
	}
	if (!unk_0x49DB840E3FC89FEE(1))
	{
		return 0;
	}
	fVar0 = 1,5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x9B8406983378711E(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0xEA60F3B426BB095B(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0x6ADD12BF4D6D2587(iVar1))
	{
		*uParam0 = unk_0x278BFDB9CDC5B182(iVar1);
		Global_2512808.f_5827 = iVar1;
		if (unk_0x93C304998B457C45(*uParam0))
		{
			if (bParam13)
			{
				unk_0xB2CBFA871D3387B6(iVar1, 1);
			}
			unk_0xFBA991D3A851E195(iVar1, iParam8);
			if (unk_0x0D4BF24EE51A419A(iVar1))
			{
				if (bParam6)
				{
					unk_0x9CE66BFF230839CE(*uParam0, 1);
				}
				else
				{
					unk_0x9CE66BFF230839CE(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0xB8D999BCBD1CD195(*uParam0, unk_0x9EB17624F44A8DA4(), 1);
				}
			}
			unk_0xD2557AC67FBCFB9D(iVar1, bParam7);
			unk_0xB2B20F580CFB38F4(iVar1, 1);
			if (bParam10)
			{
				unk_0x27344352C09F0519(iVar1);
				unk_0x30C37143C720F2AA(iVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

int func_129(vector3 vParam0)//Position - 0x604D
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_130(int iParam0)//Position - 0x6077
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = unk_0x25D049AAC4603E65(Local_101.f_3[iParam0 /*5*/].f_4);
	if (unk_0x191BE1BC8F26F3C1(iVar0, 0))
	{
		return 0f, 0f, 0f;
	}
	vVar1 = { unk_0x9EA50C5EC175E58E(unk_0xB3328BA8976B416C(iVar0, 1), unk_0xF0371FE6E2BF9599(iVar0), 0f, -250f, (40f * system::to_float(iParam0))) };
	if (vVar1.z < 100f)
	{
		vVar1.z = 100f;
	}
	return vVar1;
}

int func_131(int iParam0)//Position - 0x60E0
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
		{
			iVar1 = unk_0x25D049AAC4603E65(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0)));
			if (!func_132(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0))))
			{
				if (unk_0x47DEC7699C60F07E(iVar1) || unk_0xFCB32314B66A3503(iVar1))
				{
					if (unk_0xF5D0CBECCA41314A(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0))) >= 4)
					{
						vVar2 = { unk_0xB3328BA8976B416C(iVar1, 0) };
						if (func_19(vVar2, 3, 1000, 0) && vVar2.z > 90f)
						{
							Local_101.f_3[iParam0 /*5*/].f_4 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0));
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_132(int iParam0)//Position - 0x6196
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x25D049AAC4603E65(iParam0);
	if (!unk_0x6ADD12BF4D6D2587(iVar0))
	{
		return 1;
	}
	if (unk_0x191BE1BC8F26F3C1(iVar0, 0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = unk_0x25D049AAC4603E65(Local_101.f_3[iVar1 /*5*/].f_4);
		if (unk_0x6ADD12BF4D6D2587(iVar2))
		{
			if (iParam0 == Local_101.f_3[iVar1 /*5*/].f_4)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_133(int iParam0, int iParam1)//Position - 0x6201
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
		{
			if (!func_45(Local_125[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_134(int iParam0)//Position - 0x6246
{
	switch (Local_101.f_21[iParam0])
	{
		case 0:
			if (func_136(iParam0, 64))
			{
				Local_101.f_21[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_135(iParam0, 1))
			{
				Local_101.f_21[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_135(iParam0, 2))
			{
				Local_101.f_21[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_136(iParam0, 4))
			{
				Local_101.f_21[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_135(iParam0, 8))
			{
				Local_101.f_21[iParam0] = 5;
			}
			if (!func_135(iParam0, 1))
			{
				Local_101.f_21[iParam0] = 7;
			}
			if (func_135(iParam0, 16))
			{
				Local_101.f_21[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_135(iParam0, 16))
			{
				Local_101.f_21[iParam0] = 6;
			}
			if (!func_135(iParam0, 1))
			{
				Local_101.f_21[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_135(iParam0, 4))
			{
				Local_101.f_21[iParam0] = 0;
			}
			break;
	}
}

int func_135(int iParam0, int iParam1)//Position - 0x6368
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
		{
			if (func_45(Local_125[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_136(int iParam0, int iParam1)//Position - 0x63AC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
		{
			if (!func_45(Local_125[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_137()//Position - 0x63F1
{
	int iVar0;
	
	if (!unk_0x8E1421E2A2A2FBD4())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_138(&(Local_101[0]), 29, joaat("s_m_y_marine_01"), -2308,4f, 3391f, 30,0601f, 55,8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0x918CA1BFFAA03556(Local_101[0]))
	{
		unk_0x9E058151726E58DE(unk_0x47BA76CE3C825A08(Local_101[0]), joaat("weapon_assaultrifle"), 200, true, true);
	}
	if (!func_138(&(Local_101[1]), 29, joaat("s_m_y_marine_01"), -1588,9f, 2792,9f, 16,1385f, 229,437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0x918CA1BFFAA03556(Local_101[1]))
	{
		unk_0x9E058151726E58DE(unk_0x47BA76CE3C825A08(Local_101[1]), joaat("weapon_assaultrifle"), 200, true, true);
	}
	return iVar0;
}

int func_138(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x64B0
{
	int iVar0;
	
	if (!unk_0x7A419CA188B4A665(1))
	{
		return 0;
	}
	iVar0 = unk_0xAC992EFAD62C33BF(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = unk_0xABF6E3937F555048(iVar0);
	if (unk_0x93C304998B457C45(*uParam0))
	{
		unk_0xFBA991D3A851E195(iVar0, iParam7);
		if (unk_0x0D4BF24EE51A419A(iVar0))
		{
			if (bParam5)
			{
				unk_0x9CE66BFF230839CE(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_139()//Position - 0x650F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
		{
			if (!func_111(Local_125[iVar1 /*8*/], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_140()//Position - 0x6550
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
		{
			if (!func_111(Local_125[iVar1 /*8*/], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_141()//Position - 0x6591
{
	if (func_99(&uLocal_138) && func_97(&uLocal_138, Global_262145.f_20764, 0))
	{
		func_96(&uLocal_138);
	}
	if (func_99(&uLocal_136) && func_97(&uLocal_136, Global_262145.f_20765, 0))
	{
		func_96(&uLocal_136);
		iLocal_133 = 0;
	}
	if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) <= 0)
	{
		if (func_142())
		{
			if (!Global_2512808.f_5876)
			{
				Global_2512808.f_5876 = 1;
				func_52("BASE_EXP_WARN", -1);
			}
			if (!iLocal_133)
			{
				iLocal_133 = 1;
				func_98(&uLocal_138, 0, 0);
				func_98(&uLocal_136, 0, 0);
			}
			else if (!func_99(&uLocal_138))
			{
				unk_0xC0EBC1452FCAB15C(5);
				bLocal_128 = true;
				bLocal_129 = true;
				iLocal_133 = 0;
				func_96(&uLocal_138);
				func_96(&uLocal_136);
			}
		}
	}
}

int func_142()//Position - 0x6660
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 26)
	{
		func_145(&iLocal_134, iVar1);
		iLocal_135 = func_144();
		if (iLocal_135 >= 0)
		{
			iVar0 = func_143(iLocal_135);
			if (unk_0x6ADD12BF4D6D2587(iVar0) && unk_0x52C56492660097C7(iVar0))
			{
				if (unk_0x07F64790D10D1DB5(iVar0) == unk_0xFC1458A37D98B502())
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

var func_143(int iParam0)//Position - 0x66C1
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -1773,944f, 3287,334f, 30f, -2029,776f, 2845,083f, 1250f, 255f);
			break;
		
		case 1:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -2725,889f, 3291,099f, 30f, -2009,182f, 2879,835f, 1250f, 180f);
			break;
		
		case 2:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -2442,026f, 3326,699f, 30f, -2033,928f, 3089,049f, 1250f, 205f);
			break;
		
		case 3:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -1917,165f, 3374,209f, 30f, -2016,791f, 3195,058f, 1250f, 86,25f);
			break;
		
		case 4:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -2192,753f, 3373,278f, 30f, -2191,544f, 3150,417f, 1250f, 150f);
			break;
		
		case 5:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -2077,663f, 3344,514f, 30f, -2191,544f, 3150,417f, 1250f, 140,5f);
			break;
		
		case 6:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -2861,755f, 3352,661f, 30f, -2715,871f, 3269,916f, 1250f, 90f);
			break;
		
		case 7:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -2005,574f, 3364,533f, 30f, -1977,569f, 3330,888f, 1250f, 100f);
			break;
		
		case 8:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -1682,235f, 3004,285f, 30f, -1942,747f, 2947,441f, 1250f, 248,75f);
			break;
		
		case 9:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -2393,295f, 2936,406f, 31,6801f, -2453,037f, 3006,863f, 52,31003f, 128f);
			break;
		
		case 10:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -2347,185f, 3023,83f, 31,56573f, -2517,33f, 2989,063f, 49,95644f, 127,25f);
			break;
		
		case 11:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -2259,922f, 3358,04f, 29,99972f, -2299,772f, 3385,79f, 38,06014f, 16f);
			break;
		
		case 12:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -2476,309f, 3363,914f, 31,67933f, -2431,981f, 3287,669f, 39,97826f, 214,25f);
			break;
		
		case 13:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -2103,081f, 2797,783f, 29,37864f, -2096,821f, 2874,423f, 57,80989f, 65,75f);
			break;
		
		case 14:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -1877,436f, 2783,151f, 31,80618f, -1797,873f, 2924,37f, 1307,111f, 88f);
			break;
		
		case 15:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -1761,116f, 2834,651f, 31,80622f, -1720,887f, 2906,419f, 1281,806f, 88f);
			break;
		
		case 16:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -1761,493f, 2817,68f, 32,37125f, -1769,704f, 2913,734f, 1281,807f, 88f);
			break;
		
		case 17:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -1879,297f, 2772,653f, 29,57795f, -1864,521f, 2825,472f, 1281,806f, 88f);
			break;
		
		case 18:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -2676,74f, 3366,988f, 29,92394f, -2744,79f, 3340,347f, 1037,804f, 9f);
			break;
		
		case 19:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -2676,74f, 3366,988f, 29,92394f, -2744,79f, 3340,347f, 1037,804f, 9,5f);
			break;
		
		case 20:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -2807,397f, 3264,226f, 29,92764f, -2744,79f, 3340,347f, 1037,804f, 9,5f);
			break;
		
		case 21:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -2808,236f, 3264,634f, 29,92764f, -2747,55f, 3187,8f, 1037,457f, 9,5f);
			break;
		
		case 22:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -2530,996f, 3064,151f, 29,71081f, -2748,557f, 3189,939f, 1037,457f, 9,5f);
			break;
		
		case 23:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -2533,902f, 3062,491f, 29,70715f, -2520,674f, 2996,817f, 1037,457f, 9,5f);
			break;
		
		case 24:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -2500,716f, 2927,103f, 29,45663f, -2445,696f, 2896,657f, 1037,68f, 9,5f);
			break;
		
		case 25:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -2020,543f, 2810,747f, 29,45658f, -1927,949f, 2785,779f, 1037,671f, 9,5f);
			break;
		
		case 26:
			uVar0 = unk_0xA0F3EA1BD0EC948E(iLocal_134, -2261,899f, 3376,549f, 29,77859f, -2141,067f, 3376,773f, 1037,9f, 9,5f);
			break;
	}
	return uVar0;
}

int func_144()//Position - 0x6C69
{
	if (unk_0x34D9850FEBB1F859(iLocal_134, -1773,944f, 3287,334f, 30f, -2029,776f, 2845,083f, 1250f, 255f))
	{
		return 0;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -2725,889f, 3291,099f, 30f, -2009,182f, 2879,835f, 1250f, 180f))
	{
		return 1;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -2442,026f, 3326,699f, 30f, -2033,928f, 3089,049f, 1250f, 205f))
	{
		return 2;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -1917,165f, 3374,209f, 30f, -2016,791f, 3195,058f, 1250f, 86,25f))
	{
		return 3;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -2192,753f, 3373,278f, 30f, -2191,544f, 3150,417f, 1250f, 150f))
	{
		return 4;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -2077,663f, 3344,514f, 30f, -2191,544f, 3150,417f, 1250f, 140,5f))
	{
		return 5;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -2861,755f, 3352,661f, 30f, -2715,871f, 3269,916f, 1250f, 90f))
	{
		return 6;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -2005,574f, 3364,533f, 30f, -1977,569f, 3330,888f, 1250f, 100f))
	{
		return 7;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -1682,235f, 3004,285f, 30f, -1942,747f, 2947,441f, 1250f, 248,75f))
	{
		return 8;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -2393,295f, 2936,406f, 31,6801f, -2453,037f, 3006,863f, 52,31003f, 128f))
	{
		return 9;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -2347,185f, 3023,83f, 31,56573f, -2517,33f, 2989,063f, 49,95644f, 127,25f))
	{
		return 10;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -2259,922f, 3358,04f, 29,99972f, -2299,772f, 3385,79f, 38,06014f, 16f))
	{
		return 11;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -2476,309f, 3363,914f, 31,67933f, -2431,981f, 3287,669f, 39,97826f, 214,25f))
	{
		return 12;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -2103,081f, 2797,783f, 29,37864f, -2096,821f, 2874,423f, 57,80989f, 65,75f))
	{
		return 13;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -1877,436f, 2783,151f, 31,80618f, -1797,873f, 2924,37f, 1307,111f, 88f))
	{
		return 14;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -1761,116f, 2834,651f, 31,80622f, -1720,887f, 2906,419f, 1281,806f, 88f))
	{
		return 15;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -1761,493f, 2817,68f, 32,37125f, -1769,704f, 2913,734f, 1281,807f, 88f))
	{
		return 16;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -1879,297f, 2772,653f, 29,57795f, -1864,521f, 2825,472f, 1281,806f, 88f))
	{
		return 17;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -2676,74f, 3366,988f, 29,92394f, -2744,79f, 3340,347f, 1037,804f, 9f))
	{
		return 18;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -2676,74f, 3366,988f, 29,92394f, -2744,79f, 3340,347f, 1037,804f, 9,5f))
	{
		return 19;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -2807,397f, 3264,226f, 29,92764f, -2744,79f, 3340,347f, 1037,804f, 9,5f))
	{
		return 20;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -2808,236f, 3264,634f, 29,92764f, -2747,55f, 3187,8f, 1037,457f, 9,5f))
	{
		return 21;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -2530,996f, 3064,151f, 29,71081f, -2748,557f, 3189,939f, 1037,457f, 9,5f))
	{
		return 22;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -2533,902f, 3062,491f, 29,70715f, -2520,674f, 2996,817f, 1037,457f, 9,5f))
	{
		return 23;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -2500,716f, 2927,103f, 29,45663f, -2445,696f, 2896,657f, 1037,68f, 9,5f))
	{
		return 24;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -2020,543f, 2810,747f, 29,45658f, -1927,949f, 2785,779f, 1037,671f, 9,5f))
	{
		return 25;
	}
	else if (unk_0x34D9850FEBB1F859(iLocal_134, -2261,899f, 3376,549f, 29,77859f, -2141,067f, 3376,773f, 1037,9f, 9,5f))
	{
		return 26;
	}
	return -1;
}

void func_145(var uParam0, int iParam1)//Position - 0x71FE
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 0;
			break;
		
		case 1:
			*uParam0 = 1;
			break;
		
		case 2:
			*uParam0 = 2;
			break;
		
		case 3:
			*uParam0 = 3;
			break;
		
		case 4:
			*uParam0 = 4;
			break;
		
		case 5:
			*uParam0 = 5;
			break;
		
		case 6:
			*uParam0 = 19;
			break;
		
		case 7:
			*uParam0 = 20;
			break;
		
		case 8:
			*uParam0 = 21;
			break;
		
		case 9:
			*uParam0 = 32;
			break;
		
		case 10:
			*uParam0 = 36;
			break;
		
		case 11:
			*uParam0 = 40;
			break;
		
		case 12:
			*uParam0 = 41;
			break;
		
		case 13:
			*uParam0 = 43;
			break;
		
		case 14:
			*uParam0 = 44;
			break;
		
		case 15:
			*uParam0 = 45;
			break;
		
		case 16:
			*uParam0 = 46;
			break;
		
		case 17:
			*uParam0 = 47;
			break;
		
		case 18:
			*uParam0 = 48;
			break;
		
		case 19:
			*uParam0 = 49;
			break;
		
		case 20:
			*uParam0 = 50;
			break;
		
		case 21:
			*uParam0 = 53;
			break;
		
		case 22:
			*uParam0 = 54;
			break;
		
		case 23:
			*uParam0 = 55;
			break;
		
		case 24:
			*uParam0 = 56;
			break;
		
		case 25:
			*uParam0 = 57;
			break;
	}
}

int func_146()//Position - 0x7373
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_58(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	if (func_151(1))
	{
		iVar0 = func_150();
		if (iVar0 != func_36())
		{
			if (func_58(iVar0))
			{
				return 1;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar1);
		if (func_35(iVar2, 0, 1))
		{
			if (iVar2 != unk_0x9EB17624F44A8DA4())
			{
				if (func_151(1))
				{
					if (func_148(unk_0x9EB17624F44A8DA4(), iVar2))
					{
						if (func_58(iVar2))
						{
							return 1;
						}
					}
				}
				if (func_147(unk_0x25D049AAC4603E65(unk_0x9EB17624F44A8DA4()), unk_0x25D049AAC4603E65(iVar2)))
				{
					iVar3 = unk_0xDFD115BB10FE46A9(unk_0x25D049AAC4603E65(iVar2), 0);
					if (unk_0x317536BCEA8FA6B0(iVar3, -1, 0) == unk_0x25D049AAC4603E65(iVar2))
					{
						if (func_58(iVar2))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_147(int iParam0, int iParam1)//Position - 0x7440
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0x6ADD12BF4D6D2587(iParam1))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0) && !unk_0x191BE1BC8F26F3C1(iParam1, 0))
		{
			if (unk_0x88DDBE9908752BF0(iParam0, 0) && unk_0x88DDBE9908752BF0(iParam1, 0))
			{
				iVar0 = unk_0xDFD115BB10FE46A9(iParam0, 0);
				iVar1 = unk_0xDFD115BB10FE46A9(iParam1, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar0) && unk_0x6ADD12BF4D6D2587(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_148(int iParam0, int iParam1)//Position - 0x74BC
{
	int iVar0;
	
	iVar0 = func_149(iParam0);
	if (!iVar0 == func_36())
	{
		if (iVar0 == func_149(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_149(int iParam0)//Position - 0x74E7
{
	if (iParam0 != func_36())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_36();
}

var func_150()//Position - 0x750A
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11;
}

bool func_151(bool bParam0)//Position - 0x751F
{
	return func_56(unk_0x9EB17624F44A8DA4(), bParam0);
}

int func_152()//Position - 0x7531
{
	var uVar0;
	
	func_159(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_158())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_157())
	{
		return 1;
	}
	if (func_156(157))
	{
		if (!func_155())
		{
			return 1;
		}
	}
	if (func_156(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_153() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_153()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_153()//Position - 0x75BB
{
	switch (func_154())
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

int func_154()//Position - 0x75EF
{
	return Global_25233;
}

bool func_155()//Position - 0x75FA
{
	return Global_2447174.f_586;
}

int func_156(int iParam0)//Position - 0x7609
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_157()//Position - 0x7620
{
	return Global_2456830;
}

bool func_158()//Position - 0x762C
{
	return Global_2447174.f_581;
}

void func_159(var uParam0)//Position - 0x763B
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
					func_160(iVar0);
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

void func_160(int iParam0)//Position - 0x76AE
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_35(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_161(iVar2, &bVar3))
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

int func_161(int iParam0, var uParam1)//Position - 0x772F
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

void func_162()//Position - 0x778E
{
	if (unk_0x3930B0AA9F6A0C8C(false, 0) != 5)
	{
		if (func_169(5, 0, 1))
		{
			if (unk_0x098390F4365DA157(0) <= 5)
			{
				unk_0xBC60D873F181A18E(5);
			}
		}
	}
	if (unk_0x9E883378D9B4735D(false, 0) != 3)
	{
		if (func_163(3, 0, 1))
		{
			if (unk_0x5F5AFD354B2C767D(0) <= 3)
			{
				unk_0x7BC094E5B24A760D(3);
			}
		}
	}
}

bool func_163(int iParam0, bool bParam1, bool bParam2)//Position - 0x77DA
{
	return func_164(1, iParam0, 1, bParam1, bParam2);
}

int func_164(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x77EE
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC80D31E4B587871C(Global_1369394, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_168(iParam0) - func_167(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_167(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_168(iParam0) - func_166(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_167(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_168(iParam0) - func_167(iParam0, 1));
		}
		if (!bParam4 && Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] != 3)
		{
			iVar1 = (iVar1 - func_165(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_165(int iParam0)//Position - 0x78B7
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_166(int iParam0)//Position - 0x78F1
{
	switch (iParam0)
	{
		case 0:
			return Global_1369394.f_1;
			break;
		
		case 1:
			return Global_1369394.f_2;
			break;
		
		case 2:
			return Global_1369394.f_3;
			break;
	}
	return 0;
}

int func_167(int iParam0, bool bParam1)//Position - 0x7937
{
	int iVar0;
	
	iVar0 = unk_0x9EB17624F44A8DA4();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x8C504A60C2F379BD())
			{
				return Global_2422736[iVar0 /*420*/].f_224;
			}
			else
			{
				return unk_0x3930B0AA9F6A0C8C(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x8C504A60C2F379BD())
			{
				return Global_2422736[iVar0 /*420*/].f_225;
			}
			else
			{
				return unk_0x9E883378D9B4735D(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x8C504A60C2F379BD())
			{
				return Global_2422736[iVar0 /*420*/].f_226;
			}
			else
			{
				return unk_0x5A9A3A92F1F0B182(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_168(int iParam0)//Position - 0x79D4
{
	switch (iParam0)
	{
		case 0:
			return Global_1369402;
			break;
		
		case 1:
			return Global_1369403;
			break;
		
		case 2:
			return Global_1369404;
			break;
	}
	return 0;
}

bool func_169(int iParam0, bool bParam1, bool bParam2)//Position - 0x7A14
{
	return func_164(0, iParam0, 1, bParam1, bParam2);
}

void func_170()//Position - 0x7A28
{
	system::wait(0);
}

void func_171()//Position - 0x7A35
{
	int iVar0;
	
	if (unk_0x3A711520F83BAE98())
	{
		if (unk_0x8E1421E2A2A2FBD4())
		{
			if (func_121())
			{
				func_122();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xA6DECE14FC9A8C51(Local_126.f_172[iVar0]))
		{
			unk_0xE30CF11C0EE14316(&(Local_126.f_172[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_131)
	{
		unk_0xC0EBC1452FCAB15C(5);
		iLocal_131 = 0;
	}
	Global_1678672 = 0;
	func_173();
	func_172();
}

void func_172()//Position - 0x7AA1
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_173()//Position - 0x7AAD
{
	if (!Local_126.f_176)
	{
		return;
	}
	if (unk_0x9A0B2ED5055D3F0B(joaat("s_m_y_marine_01")))
	{
		unk_0x14776E43F90DD454(joaat("s_m_y_marine_01"));
	}
	if (unk_0x9A0B2ED5055D3F0B(joaat("lazer")))
	{
		unk_0x14776E43F90DD454(joaat("lazer"));
	}
	if (unk_0x9A0B2ED5055D3F0B(joaat("s_m_y_pilot_01")))
	{
		unk_0x14776E43F90DD454(joaat("s_m_y_pilot_01"));
	}
}

void func_174(struct<21> Param0)//Position - 0x7B00
{
	func_178(func_179(Param0), Param0);
	func_176(0, -1, 0);
	unk_0xBC60D873F181A18E(5);
	unk_0x7BC094E5B24A760D(3);
	unk_0x6E3ED3AE1C20445F(&Local_101, 27);
	unk_0xE7BC983D1386C9EE(&Local_125, 257);
	unk_0x941BE77305BB5695(0);
	if (!func_175())
	{
		func_171();
	}
	if (unk_0x7D9C4B359376D38A(3))
	{
		func_171();
	}
	Global_2512808.f_5870 = 0;
}

int func_175()//Position - 0x7B5F
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
		if (func_158())
		{
			return 0;
		}
		if (func_156(155))
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

int func_176(int iParam0, int iParam1, bool bParam2)//Position - 0x7BB8
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_172();
			}
			else
			{
				return 0;
			}
		}
		if (!func_177())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_172();
					}
					else
					{
						return 0;
					}
				}
				if (func_158())
				{
					if (!bParam2)
					{
						func_172();
					}
					else
					{
						return 0;
					}
				}
				if (func_156(155))
				{
					if (!bParam2)
					{
						func_172();
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
					func_172();
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
				func_172();
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
			func_172();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_177()//Position - 0x7CCD
{
	return Global_1312831;
}

void func_178(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x7CD9
{
	if (!unk_0x3A711520F83BAE98())
	{
		func_172();
	}
	unk_0xAEA89A7E72415961(iParam0, 0, Param1.f_16);
}

int func_179(int iParam0)//Position - 0x7CF8
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

