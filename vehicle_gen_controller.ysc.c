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
	int iLocal_47 = 0;
	var uLocal_48[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_49[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_50[68] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<114> Local_56 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_57 = { 0, 0, 0, 0, 0 } ;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
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
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	struct<74> Local_83 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
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
	var uLocal_96 = 2;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110[4] = { 0, 0, 0, 0 };
	int iLocal_111 = 0;
	int iLocal_112[1] = { 0 };
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123[2] = { 0, 0 };
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	struct<13> Local_131 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	struct<81> Local_140 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	struct<78> Local_141 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_150[3] = { 0, 0, 0 };
	int iLocal_151 = 0;
	float fLocal_152[68] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	bool bLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	bool bLocal_161 = 0;
	char cLocal_162[16] = "";
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	char cLocal_165[16] = "";
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	char* sLocal_176 = NULL;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	float fLocal_179 = 0f;
	int iLocal_180 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	iLocal_114 = -1;
	iLocal_115 = -1;
	iLocal_120 = -1;
	iLocal_125 = -1;
	iLocal_151 = -1;
	unk_0x941BE77305BB5695(0);
	Local_56.f_5 = -1;
	Local_56 = -1;
	Local_56.f_1 = 99999,99f;
	func_451(&iLocal_58);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_90357[iVar0 /*3*/][0] = -1;
		Global_90357[iVar0 /*3*/][1] = -1;
		iVar0++;
	}
	if (!Global_104555.f_32429.f_4802)
	{
		iVar0 = 0;
		while (iVar0 < 312)
		{
			Global_104555.f_32429.f_1982[0 /*939*/].f_626[iVar0] = -15;
			Global_104555.f_32429.f_1982[1 /*939*/].f_626[iVar0] = -15;
			Global_104555.f_32429.f_1982[2 /*939*/].f_626[iVar0] = -15;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 23)
		{
			Global_104555.f_32429.f_1934[iVar0] = -1f;
			iVar0++;
		}
		Global_104555.f_32429.f_4801 = -15;
		Global_104555.f_32429.f_4802 = 1;
	}
	if (((!func_450() && !func_449()) && !func_448()) && !func_447())
	{
		func_446(60, 0);
		func_446(61, 0);
	}
	func_445();
	iVar0 = 0;
	while (iVar0 < 68)
	{
		func_444(iVar0);
		iVar0++;
	}
	while (true)
	{
		if (!iLocal_55)
		{
			iLocal_55 = 1;
			if (unk_0x7D9C4B359376D38A(98))
			{
				if (unk_0xB4918C73B5AFD8E2() == 64)
				{
					if (!Global_70667)
					{
						iLocal_55 = 0;
					}
					else
					{
						func_443();
						func_442();
					}
					Global_70667 = 0;
				}
				else
				{
					func_443();
					func_442();
				}
			}
		}
		system::wait(0);
		if (unk_0x6568AF246B58DCCC() != 5)
		{
			iLocal_129 = func_440();
			func_401();
			func_399();
			func_367(&iLocal_58);
			func_338();
			func_28();
			func_20();
			func_17(&uLocal_153);
		}
		func_1(&iLocal_58);
	}
}

void func_1(int iParam0)//Position - 0x24C
{
	bool bVar0;
	float fVar1;
	
	if (!unk_0xC80D31E4B587871C(Global_104555.f_9986.f_25, 7))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && func_14(func_16()))
		{
			bVar0 = false;
			if (unk_0xC80D31E4B587871C(*iParam0, 6) && unk_0xC80D31E4B587871C(*iParam0, 12))
			{
				fVar1 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), iParam0->f_6);
				if (fVar1 > 25f && fVar1 < 1600f)
				{
					bVar0 = true;
					if (iParam0->f_2 == -1)
					{
						iParam0->f_2 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(10000, 15000));
					}
					else
					{
						if (func_13())
						{
							iParam0->f_2 = func_12(iParam0->f_2, (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(2000, 4000)));
						}
						if (!unk_0xC80D31E4B587871C(*iParam0, 23))
						{
							func_11(iParam0, &(iParam0->f_9));
						}
						else if (!unk_0xC80D31E4B587871C(*iParam0, 30))
						{
							if (unk_0x1CF95440F1970B4F(&(iParam0->f_9), false, -1))
							{
								if (unk_0x53C562FD2B9E3AB0() > iParam0->f_2)
								{
									if (func_9() != 7 && func_8(0, 0))
									{
										func_4(iParam0, func_6(iParam0));
										func_3(0);
										unk_0x872F1C1F8587CCC7(iParam0, 30);
									}
								}
							}
						}
						else if (unk_0xCCCA18C9A006FF83(iParam0->f_1))
						{
							unk_0x0EE72DB1CD8A3B86(iParam0, 30);
							unk_0xB94964861C6B4D3C(iParam0->f_1);
							iParam0->f_1 = -1;
							iParam0->f_2 = -1;
						}
					}
				}
			}
			if (!bVar0)
			{
				if (unk_0xC80D31E4B587871C(*iParam0, 23))
				{
					func_2(iParam0);
				}
				unk_0x0EE72DB1CD8A3B86(iParam0, 30);
				iParam0->f_2 = -1;
			}
		}
	}
}

void func_2(int iParam0)//Position - 0x3C5
{
	unk_0x77A208B3324C04F2();
	unk_0x0EE72DB1CD8A3B86(iParam0, 23);
}

void func_3(bool bParam0)//Position - 0x3D9
{
	if (bParam0)
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_9986.f_25), 22);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_9986.f_25), 22);
	}
}

void func_4(int iParam0, vector3 vParam1)//Position - 0x407
{
	struct<16> Var0;
	struct<16> Var1;
	
	Var0 = { func_5("EAS", "B", "ALLS", "T_C") };
	Var1 = { func_5("ENTS_SA", "FM_EV", "CH_SOUNDS", "SQUAT") };
	iParam0->f_1 = unk_0xD0CA83418A236CB4();
	unk_0x23A4CE7F9EBB02D4(iParam0->f_1, &Var0, vParam1, &Var1, 0, 0, 0);
}

struct<16> func_5(char* sParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x453
{
	struct<16> Var0;
	
	StringCopy(&Var0, sParam1, 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, sParam3, 64);
	StringConCat(&Var0, sParam2, 64);
	return Var0;
}

Vector3 func_6(int iParam0)//Position - 0x478
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		vVar1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		vVar2 = { func_7(iParam0->f_6 - vVar1) * Vector(52,5f, 52,5f, 52,5f) };
		vVar0 = { vVar1 + vVar2 };
	}
	return vVar0;
}

Vector3 func_7(vector3 vParam0)//Position - 0x4C5
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

bool func_8(int iParam0, int iParam1)//Position - 0x504
{
	bool bVar0;
	
	if (unk_0x4CD14B4B1E8BD8BA(0, 36))
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_9986.f_25), 22);
	}
	bVar0 = unk_0xC80D31E4B587871C(Global_104555.f_9986.f_25, 22);
	if (iParam0 && bVar0)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_9986.f_25), 22);
	}
	iParam1 = iParam1;
	return bVar0;
}

int func_9()//Position - 0x557
{
	var uVar0;
	
	uVar0 = func_10(Global_104555.f_9986.f_25, 14336, 11);
	return uVar0;
}

int func_10(var uParam0, int iParam1, int iParam2)//Position - 0x575
{
	return system::shift_right((uParam0 && iParam1), iParam2);
}

void func_11(int iParam0, char* sParam1)//Position - 0x588
{
	unk_0x1CF95440F1970B4F(sParam1, false, -1);
	unk_0x872F1C1F8587CCC7(iParam0, 23);
}

int func_12(int iParam0, int iParam1)//Position - 0x5A1
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool func_13()//Position - 0x5B7
{
	bool bVar0;
	
	bVar0 = unk_0xC80D31E4B587871C(Global_104555.f_9986.f_25, 22);
	return (func_8(0, 0) && !bVar0);
}

bool func_14(int iParam0)//Position - 0x5DE
{
	return iParam0 == func_15();
}

int func_15()//Position - 0x5ED
{
	return joaat("ig_orleans");
}

int func_16()//Position - 0x5FA
{
	return unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502());
}

void func_17(var uParam0)//Position - 0x60A
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!Global_1319812.f_21)
	{
		iVar1 = func_19(*uParam0, uParam0->f_1);
		if (iVar1 == -1)
		{
			*uParam0++;
			uParam0->f_1 = 0;
			if (*uParam0 >= 4)
			{
				Global_1319812.f_21 = 1;
			}
			return;
		}
		else
		{
			iVar0 = iVar1;
			fVar2 = func_18(iVar0);
			if (Global_1319812[*uParam0 /*5*/][0] < fVar2)
			{
				Global_1319812[*uParam0 /*5*/][0] = fVar2;
			}
			fVar2 = unk_0xC9A7AED438111D35(iVar0);
			if (Global_1319812[*uParam0 /*5*/][1] < fVar2)
			{
				Global_1319812[*uParam0 /*5*/][1] = fVar2;
			}
			if ((iVar0 == 15 || iVar0 == 16) || iVar0 == 14)
			{
				fVar2 = unk_0xDF83821A9BB5B7E2(iVar0);
			}
			else
			{
				fVar2 = unk_0x3D79364F81419294(iVar0);
			}
			if (Global_1319812[*uParam0 /*5*/][3] < fVar2)
			{
				Global_1319812[*uParam0 /*5*/][3] = fVar2;
			}
			fVar2 = unk_0x68435CE2F76B0194(iVar0);
			if (Global_1319812[*uParam0 /*5*/][2] < fVar2)
			{
				Global_1319812[*uParam0 /*5*/][2] = fVar2;
			}
			uParam0->f_1++;
		}
	}
}

float func_18(int iParam0)//Position - 0x727
{
	if (iParam0 == 7)
	{
		return 51,77096f;
	}
	return unk_0x570A592039D760DD(iParam0);
}

int func_19(int iParam0, int iParam1)//Position - 0x743
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				case 6:
					return 6;
				
				case 7:
					return 7;
				
				case 8:
					return 8;
				
				case 9:
					return 9;
				
				case 10:
					return 10;
				
				case 11:
					return 11;
				
				case 12:
					return 12;
				
				case 13:
					return 13;
				
				case 14:
					return 17;
				
				case 15:
					return 18;
				
				case 16:
					return 19;
				
				case 17:
					return 20;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 14;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 15;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 16;
				
				default:
			}
			break;
	}
	return -1;
}

void func_20()//Position - 0x872
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xA6DECE14FC9A8C51(Global_69678.f_583))
	{
		bVar0 = false;
		if (iLocal_129 != Global_69678.f_582)
		{
			bVar0 = true;
		}
		else if (((((func_27(0) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(13)) || func_27(14))
		{
			bVar0 = true;
		}
		else if (Global_69678.f_590)
		{
			if (!func_26(Global_69678.f_584, unk_0x67247AA13B7486A3(Global_69678.f_583), 1056964608, 0) || func_22(Global_69678.f_582, func_23(Global_69678.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if (Global_69678.f_591)
		{
			if (!func_26(Global_69678.f_587, unk_0x67247AA13B7486A3(Global_69678.f_583), 1056964608, 0) || func_22(Global_69678.f_582, func_23(Global_69678.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if ((!unk_0x6ADD12BF4D6D2587(Global_69678.f_581) || !unk_0xB8DE76287EDC4957(Global_69678.f_581, 0)) || (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Global_69678.f_581, 0)))
		{
			if (unk_0x6ADD12BF4D6D2587(Global_69678.f_581) && !unk_0xB8DE76287EDC4957(Global_69678.f_581, 0))
			{
				Global_69678.f_587 = { 0f, 0f, 0f };
			}
			bVar0 = true;
		}
		else if (unk_0x6ADD12BF4D6D2587(Global_69678.f_581))
		{
			if (unk_0xB8DE76287EDC4957(Global_69678.f_581, 0))
			{
				Global_69678.f_587 = { unk_0xB3328BA8976B416C(Global_69678.f_581, 1) };
			}
			else
			{
				Global_69678.f_587 = { 0f, 0f, 0f };
			}
		}
		if (bVar0)
		{
			unk_0xE30CF11C0EE14316(&(Global_69678.f_583));
			Global_69678.f_590 = 0;
			Global_69678.f_591 = 0;
			Global_69678.f_581 = 0;
		}
	}
	else
	{
		Global_69678.f_590 = 0;
		Global_69678.f_591 = 0;
		Global_69678.f_581 = 0;
	}
	if ((((((!unk_0xA6DECE14FC9A8C51(Global_69678.f_583) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(13)) && !func_27(14))
	{
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if ((((((Global_90319[iVar2] != 145 && Global_90329[iVar2] != 0) && unk_0x6ADD12BF4D6D2587(Global_90309[iVar2])) && unk_0xB8DE76287EDC4957(Global_90309[iVar2], 0)) && !unk_0xA6DECE14FC9A8C51(unk_0xB38AB7F32D71579D(Global_90309[iVar2]))) && Global_90319[iVar2] == iLocal_129) && unk_0xC1514CFCEC68CA4A(unk_0x82FF3DFBC3965CC0(Global_90309[iVar2])))
			{
				if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Global_90309[iVar2], 0))
				{
					Global_69678.f_581 = Global_90309[iVar2];
					Global_69678.f_582 = iLocal_129;
					Global_69678.f_590 = 0;
					Global_69678.f_583 = unk_0xCA43F0FC44D9B846(Global_69678.f_581);
				}
				iVar2 = 10;
				bVar1 = true;
			}
			iVar2++;
		}
		if (!bVar1)
		{
			if (!unk_0xA6DECE14FC9A8C51(Global_69678.f_583) && !func_21(Global_69678.f_584, 0f, 0f, 0f, 0))
			{
				Global_69678.f_581 = 0;
				Global_69678.f_582 = iLocal_129;
				Global_69678.f_590 = 1;
				Global_69678.f_583 = unk_0x6F4378873333A0C2(Global_69678.f_584);
			}
			if (!unk_0xA6DECE14FC9A8C51(Global_69678.f_583) && !func_21(Global_69678.f_587, 0f, 0f, 0f, 0))
			{
				Global_69678.f_581 = 0;
				Global_69678.f_582 = iLocal_129;
				Global_69678.f_591 = 1;
				Global_69678.f_583 = unk_0x6F4378873333A0C2(Global_69678.f_587);
			}
		}
		else
		{
			Global_69678.f_590 = 0;
			Global_69678.f_591 = 0;
		}
		if (unk_0xA6DECE14FC9A8C51(Global_69678.f_583))
		{
			unk_0x4B4040A0EC7DBA81(Global_69678.f_583, 225);
			unk_0x62BD54E491535B76(Global_69678.f_583, "PVEHICLE");
			unk_0x66DAED36FB41050D(Global_69678.f_583, false);
			unk_0xF27F72CA15E148EE(Global_69678.f_583, 3);
			if (iLocal_129 == 0)
			{
				iVar3 = 42;
			}
			else if (iLocal_129 == 1)
			{
				iVar3 = 43;
			}
			else if (iLocal_129 == 2)
			{
				iVar3 = 44;
			}
			unk_0x0C71C8E276E3EC54(Global_69678.f_583, iVar3);
		}
	}
}

bool func_21(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0xCFB
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_22(int iParam0, int iParam1)//Position - 0xD42
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar1]) && unk_0xB8DE76287EDC4957(Global_90309[iVar1], 0))
		{
			if (Global_90319[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == unk_0x82FF3DFBC3965CC0(Global_90309[iVar1]))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_23(int iParam0, int iParam1)//Position - 0xDB2
{
	struct<82> Var0;
	
	if (func_25(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_24(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_24(int iParam0, var uParam1, int iParam2)//Position - 0xDF4
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_104555.f_9055.f_99.f_58[128] && !Global_104555.f_9055.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14,9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_104555.f_9055.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_104555.f_9055.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_25(int iParam0)//Position - 0x104B
{
	return iParam0 < 3;
}

int func_26(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x1057
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0xE97272C977DEADD3((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0xE97272C977DEADD3((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0xE97272C977DEADD3((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE97272C977DEADD3((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0xE97272C977DEADD3((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_27(int iParam0)//Position - 0x10D2
{
	return Global_35861 == iParam0;
}

void func_28()//Position - 0x10E0
{
	func_277();
	func_197();
	func_68();
	func_29();
}

void func_29()//Position - 0x10F8
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (((((Local_56.f_29.f_80 && !Local_56.f_29.f_69) && Local_56 != -1) && func_67(Local_56, 0)) && func_67(Local_56, 5)) && unk_0x8F38E94BBF3404CD(joaat("michael1")) == 0)
		{
			if (!unk_0x6ADD12BF4D6D2587(Local_56.f_113))
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					if (unk_0x6ADD12BF4D6D2587(iVar0) && unk_0xB8DE76287EDC4957(iVar0, 0))
					{
						iVar1 = unk_0x82FF3DFBC3965CC0(iVar0);
						if (func_64(iVar1))
						{
							Local_56.f_113 = iVar0;
						}
					}
				}
			}
			else if (unk_0xB8DE76287EDC4957(Local_56.f_113, 0) && func_64(unk_0x82FF3DFBC3965CC0(Local_56.f_113)))
			{
				if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_56.f_113, 0))
				{
					if (unk_0x0F3033474C49912D(Local_56.f_113, Local_56.f_29.f_48, Local_56.f_29.f_51, Local_56.f_29.f_54, 0, true, 0))
					{
						if ((!func_63(Local_56.f_113) && !func_62(Local_56.f_113)) && Local_56.f_113 != Global_69678.f_484[Local_56])
						{
							func_30(Local_56, Local_56.f_113, 1);
						}
						Local_56.f_113 = 0;
					}
				}
			}
			else
			{
				Local_56.f_113 = 0;
			}
		}
		else
		{
			Local_56.f_113 = 0;
		}
	}
}

void func_30(int iParam0, int iParam1, int iParam2)//Position - 0x125C
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_61(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 12) && !unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_69678.f_555[0 /*21*/].f_4 != unk_0x82FF3DFBC3965CC0(iParam1))
		{
			return;
		}
	}
	if (Global_70585 != -1 && Global_70585 != iParam0)
	{
		return;
	}
	if (unk_0x6ADD12BF4D6D2587(iParam1))
	{
		if (unk_0xB8DE76287EDC4957(iParam1, 0))
		{
			if (!unk_0x9761C10D57B68069(iParam1))
			{
				unk_0xDD29FF4BAB8AFF9C(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_104555.f_32429.f_4801 = func_50();
			}
			if (iParam1 != Global_69678.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_49(iParam0);
					if ((unk_0x6ADD12BF4D6D2587(iVar0) && unk_0xB8DE76287EDC4957(iVar0, 0)) && iParam1 != iVar0)
					{
						func_31(iVar0, 145);
					}
				}
				Global_70584 = iParam1;
				Global_70585 = iParam0;
				Global_70586 = iParam2;
			}
		}
	}
}

void func_31(int iParam0, int iParam1)//Position - 0x1379
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_37(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x317536BCEA8FA6B0(iParam0, -1, 0);
		if (!unk_0x6ADD12BF4D6D2587(iVar0))
		{
			iVar0 = unk_0x96D3C6B7ED86BE3A(iParam0, -1);
		}
		if (unk_0x6ADD12BF4D6D2587(iVar0) && !unk_0x3AB6A1A9084FB0A4(iVar0))
		{
			if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_104555.f_2353.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x82FF3DFBC3965CC0(iParam0) == Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xAB019B170BF1309C(&(Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x74C475EB8E73D398(unk_0xF2D2D6860D636A58(iParam0), &(Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_104555.f_32429.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x82FF3DFBC3965CC0(iParam0) == Global_104555.f_32429.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xAB019B170BF1309C(&(Global_104555.f_32429.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x74C475EB8E73D398(unk_0xF2D2D6860D636A58(iParam0), &(Global_104555.f_32429.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_104555.f_32429.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_104555.f_32429.f_5590 = iParam1;
	Global_70583 = iParam0;
	Global_104555.f_32429.f_5588 = 1;
	func_32(iParam0, &(Global_104555.f_32429.f_5510));
}

void func_32(int iParam0, var uParam1)//Position - 0x157B
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		func_36(uParam1);
		uParam1->f_66 = unk_0x82FF3DFBC3965CC0(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xF2D2D6860D636A58(iParam0), 16);
		*uParam1 = unk_0xBB95820E68A4EB0D(iParam0);
		unk_0xAEC96F2E5A91C606(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x0DA0B030029E4E6E(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x7869E6E4E193E666(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x55F371CF3DB9BFA1(iParam0);
		uParam1->f_67 = unk_0x7E3C3BFAB9ADD960(iParam0);
		uParam1->f_69 = unk_0x0260F35A831D6738(iParam0);
		uParam1->f_70 = unk_0x37956F2B588E40E6(iParam0);
		unk_0xFBAEDCD645F4B3F7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x063C5BF33FA1D85E(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x378B727FB0126407(iParam0, 2))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
		}
		if (unk_0x378B727FB0126407(iParam0, 3))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
		}
		if (unk_0x378B727FB0126407(iParam0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
		}
		if (unk_0x378B727FB0126407(iParam0, 1))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_35(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x965BEFCC45024E92(iParam0, 0))
		{
			uParam1->f_68 = unk_0xBFAC036AADDA5F9F(iParam0);
		}
		if (unk_0x849A8CFD71854E02(uParam1->f_66))
		{
			if (unk_0xEF8C0B8E0D7402FE(iParam0))
			{
				switch (unk_0xCD44B25535473ABE(iParam0))
				{
					case 3:
					case 0:
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 23);
						unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 23);
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x84EE59E8804FCC8C(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 9);
		}
		if (unk_0xE7F7942A19E7A681(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 10);
		}
		if (unk_0x47833BA8B6BB150B(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 13);
			unk_0x91A0B42E2753BEF7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x11C2F368CD69AADB(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 12);
		}
		func_34(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x7C7056D6F2A31BF6(iParam0, iVar0 + 1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_33(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x3F7A17ABD44B7297(iParam0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 11);
		}
		if (unk_0xB80A4DA4C06A76F1(iParam0, "IgnoredByQuickSave") && unk_0xD5736BCB654EA8FC(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 27);
		}
	}
}

int func_33(int iParam0)//Position - 0x1824
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_34(int iParam0, var uParam1, var uParam2)//Position - 0x18D4
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB8DE76287EDC4957(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x96E226626970ABA3(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x55F6AB4050FE1F69(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xF928889F6E5C7677(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x8D462BB6E4814682(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x8D462BB6E4814682(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_35(int iParam0)//Position - 0x19AE
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_36(var uParam0)//Position - 0x19CE
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_37(int iParam0)//Position - 0x1A7E
{
	if ((((((((((!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0)) || func_47(iParam0, 0, 0)) || func_47(iParam0, 1, 0)) || func_47(iParam0, 2, 0)) || func_46(iParam0) != 145) || func_45(iParam0)) || func_63(iParam0)) || func_62(iParam0)) || func_44(iParam0)) || !func_38(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		if (func_63(iParam0))
		{
		}
		if (func_63(iParam0))
		{
		}
		if (func_47(iParam0, 0, 0))
		{
		}
		if (func_47(iParam0, 1, 0))
		{
		}
		if (func_47(iParam0, 2, 0))
		{
		}
		if (func_46(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_38(int iParam0)//Position - 0x1B5B
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_39(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x428C7026AD2721BA(iParam0) || unk_0x849A8CFD71854E02(iParam0)) || unk_0xF9DDB1C0875FD9E0(iParam0)) || unk_0x3C4FA7AE145B3F72(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_39(int iParam0, bool bParam1)//Position - 0x1D0C
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xC8A14E3C7BE76201(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x3A711520F83BAE98()) || (iParam0 == joaat("buffalo3") && !unk_0x3A711520F83BAE98())) || (iParam0 == joaat("gauntlet2") && !unk_0x3A711520F83BAE98())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x3A711520F83BAE98())) || iParam0 == joaat("blista3"))
	{
		if (!func_43())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xF2653182352C7FB1())
		{
			if (unk_0x4F531CBC79B8645A(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x42683C90F2D005ED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_450() && !func_449()) && !func_448()) && !func_447()) && !func_43())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x177281F5FA205A38() || unk_0xB9D80B12FE4456A5()) || unk_0xFD6215BABFD843F2())
		{
		}
		else if (!func_448())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_42(iParam0))
		{
			return 0;
		}
	}
	if (!func_40(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_40(int iParam0)//Position - 0x1E9A
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_41())
	{
		return 1;
	}
	unk_0xD424C225D6534505(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xBBA20694DE4179EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_41()//Position - 0x1F5E
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

int func_42(int iParam0)//Position - 0x1F75
{
	int iVar0;
	int iVar1;
	
	if (Global_2492197)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xE3CCAFB1555348DF();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5990 && !Global_262145.f_12250) && iVar1 < Global_262145.f_12251)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13548 && iVar1 < Global_262145.f_13560)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13544 && iVar1 < Global_262145.f_13556)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13545 && iVar1 < Global_262145.f_13557)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13546 && iVar1 < Global_262145.f_13558)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13547 && iVar1 < Global_262145.f_13559)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13549 && iVar1 < Global_262145.f_13561)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13550 && iVar1 < Global_262145.f_13553)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13551 && iVar1 < Global_262145.f_13554)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13552 && iVar1 < Global_262145.f_13555)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16179 && iVar1 < Global_262145.f_16144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16174 && iVar1 < Global_262145.f_16139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16178 && iVar1 < Global_262145.f_16143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16177 && iVar1 < Global_262145.f_16142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16171 && iVar1 < Global_262145.f_16136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16172 && iVar1 < Global_262145.f_16137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16175 && iVar1 < Global_262145.f_16140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16176 && iVar1 < Global_262145.f_16141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16173 && iVar1 < Global_262145.f_16138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16181 && iVar1 < Global_262145.f_16146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16182 && iVar1 < Global_262145.f_16147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16170 && iVar1 < Global_262145.f_16135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16169 && iVar1 < Global_262145.f_16134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16168 && iVar1 < Global_262145.f_16133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16180 && iVar1 < Global_262145.f_16145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16183 && iVar1 < Global_262145.f_16148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16184 && iVar1 < Global_262145.f_16149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16185 && iVar1 < Global_262145.f_16150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16186 && iVar1 < Global_262145.f_16151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16331 && iVar1 < Global_262145.f_16353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16332 && iVar1 < Global_262145.f_16354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16333 && iVar1 < Global_262145.f_16355)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16334 && iVar1 < Global_262145.f_16356)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16335 && iVar1 < Global_262145.f_16357)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16336 && iVar1 < Global_262145.f_16358)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16338 && iVar1 < Global_262145.f_16359)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16339 && iVar1 < Global_262145.f_16360)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16340 && iVar1 < Global_262145.f_16361)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16341 && iVar1 < Global_262145.f_16362)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16342 && iVar1 < Global_262145.f_16363)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16343 && iVar1 < Global_262145.f_16364)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16344 && iVar1 < Global_262145.f_16365)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16350 && iVar1 < Global_262145.f_16372)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16347 && iVar1 < Global_262145.f_16368)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16348 && iVar1 < Global_262145.f_16369)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16349 && iVar1 < Global_262145.f_16370)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16337 && iVar1 < Global_262145.f_16371)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16351 && iVar1 < Global_262145.f_16373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16345 && iVar1 < Global_262145.f_16366)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16346 && iVar1 < Global_262145.f_16367)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16352 && iVar1 < Global_262145.f_16374)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17980 && iVar1 < Global_262145.f_18056)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17981 && iVar1 < Global_262145.f_18057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17982 && iVar1 < Global_262145.f_18058)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17983 && iVar1 < Global_262145.f_18059)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17984 && iVar1 < Global_262145.f_18060)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17985 && iVar1 < Global_262145.f_18061)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17986 && iVar1 < Global_262145.f_18062)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17987 && iVar1 < Global_262145.f_18063)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17988 && iVar1 < Global_262145.f_18064)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17989 && iVar1 < Global_262145.f_18065)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17990 && iVar1 < Global_262145.f_18066)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17991 && iVar1 < Global_262145.f_18067)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17992 && iVar1 < Global_262145.f_18068)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17993 && iVar1 < Global_262145.f_18069)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17994 && iVar1 < Global_262145.f_18070)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17995 && iVar1 < Global_262145.f_18071)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17996 && iVar1 < Global_262145.f_18072)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17997 && iVar1 < Global_262145.f_18073)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17998 && iVar1 < Global_262145.f_18074)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17999 && iVar1 < Global_262145.f_18075)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18000 && iVar1 < Global_262145.f_18076)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18001 && iVar1 < Global_262145.f_18077)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18002 && iVar1 < Global_262145.f_18078)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18003 && iVar1 < Global_262145.f_18079)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18004 && iVar1 < Global_262145.f_18080)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19037 && iVar1 < Global_262145.f_19033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19038 && iVar1 < Global_262145.f_19034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19039 && iVar1 < Global_262145.f_19035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19040 && iVar1 < Global_262145.f_19036)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_19916 && iVar1 < Global_262145.f_19924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_19917 && iVar1 < Global_262145.f_19925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_19918 && iVar1 < Global_262145.f_19926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_19919 && iVar1 < Global_262145.f_19927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_19920 && iVar1 < Global_262145.f_19928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_19921 && iVar1 < Global_262145.f_19929)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_20692 && iVar1 < Global_262145.f_20712)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_20704 && iVar1 < Global_262145.f_20724)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_20695 && iVar1 < Global_262145.f_20715)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_20705 && iVar1 < Global_262145.f_20725)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_20693 && iVar1 < Global_262145.f_20713)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_20709 && iVar1 < Global_262145.f_20729)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_20707 && iVar1 < Global_262145.f_20727)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_20708 && iVar1 < Global_262145.f_20728)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_20703 && iVar1 < Global_262145.f_20723)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_20710 && iVar1 < Global_262145.f_20730)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_20706 && iVar1 < Global_262145.f_20726)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_20702 && iVar1 < Global_262145.f_20722)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_20694 && iVar1 < Global_262145.f_20714)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_20696 && iVar1 < Global_262145.f_20716)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_20697 && iVar1 < Global_262145.f_20717)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_20698 && iVar1 < Global_262145.f_20718)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_20699 && iVar1 < Global_262145.f_20719)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_20700 && iVar1 < Global_262145.f_20720)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_20701 && iVar1 < Global_262145.f_20721)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_21653 && iVar1 < Global_262145.f_21681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_21654 && iVar1 < Global_262145.f_21682)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_21655 && iVar1 < Global_262145.f_21683)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_21656 && iVar1 < Global_262145.f_21684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_21657 && iVar1 < Global_262145.f_21685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_21658 && iVar1 < Global_262145.f_21686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_21659 && iVar1 < Global_262145.f_21687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_21660 && iVar1 < Global_262145.f_21688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_21661 && iVar1 < Global_262145.f_21689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_21662 && iVar1 < Global_262145.f_21690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_21663 && iVar1 < Global_262145.f_21691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_21664 && iVar1 < Global_262145.f_21692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_21665 && iVar1 < Global_262145.f_21693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_21666 && iVar1 < Global_262145.f_21694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_21667 && iVar1 < Global_262145.f_21695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_21668 && iVar1 < Global_262145.f_21696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_21669 && iVar1 < Global_262145.f_21697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_21670 && iVar1 < Global_262145.f_21698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_21671 && iVar1 < Global_262145.f_21699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_21672 && iVar1 < Global_262145.f_21700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_21673 && iVar1 < Global_262145.f_21701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_21674 && iVar1 < Global_262145.f_21702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_21675 && iVar1 < Global_262145.f_21703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_21676 && iVar1 < Global_262145.f_21704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_21677 && iVar1 < Global_262145.f_21705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_21678 && iVar1 < Global_262145.f_21706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_21679 && iVar1 < Global_262145.f_21707)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_21680 && iVar1 < Global_262145.f_21708)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_22787 && iVar1 < Global_262145.f_22803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_22788 && iVar1 < Global_262145.f_22804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_22792 && iVar1 < Global_262145.f_22808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_22795 && iVar1 < Global_262145.f_22811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_22800 && iVar1 < Global_262145.f_22816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_22794 && iVar1 < Global_262145.f_22810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_22786 && iVar1 < Global_262145.f_22802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_22793 && iVar1 < Global_262145.f_22809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_22799 && iVar1 < Global_262145.f_22815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_22798 && iVar1 < Global_262145.f_22814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_22789 && iVar1 < Global_262145.f_22805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_22791 && iVar1 < Global_262145.f_22807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_22801 && iVar1 < Global_262145.f_22817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_22797 && iVar1 < Global_262145.f_22813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_22790 && iVar1 < Global_262145.f_22806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_22796 && iVar1 < Global_262145.f_22812)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_43()//Position - 0x37FD
{
	int iVar0;
	
	if (unk_0x4CAC17F5502E6EEB())
	{
		if (unk_0xE9F0A7BEA240607F())
		{
			if (unk_0x9881A219FD811741())
			{
				unk_0xFA3CE529DBB66C85(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0x872F1C1F8587CCC7(&iVar0, 2);
				unk_0x872F1C1F8587CCC7(&iVar0, 4);
				unk_0x872F1C1F8587CCC7(&iVar0, 6);
				unk_0x872F1C1F8587CCC7(&Global_25, 2);
				unk_0x872F1C1F8587CCC7(&Global_25, 4);
				unk_0x872F1C1F8587CCC7(&Global_25, 6);
				unk_0xBFFF62F75445099D(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x2E68557F22711FDA())
				{
					iVar0 = unk_0x496616BFA56C89EB(866);
					unk_0x872F1C1F8587CCC7(&iVar0, 0);
					unk_0xDDFB38BD8B59BBB9(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143074 == 2)
	{
		return 1;
	}
	else if (Global_143074 == 3)
	{
		return 0;
	}
	if (unk_0x2E68557F22711FDA())
	{
		if (unk_0xC80D31E4B587871C(unk_0x496616BFA56C89EB(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_44(int iParam0)//Position - 0x38B8
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	sVar1 = unk_0xF2D2D6860D636A58(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x74C475EB8E73D398(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_39(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_45(int iParam0)//Position - 0x38FE
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[24]))
	{
		if (iParam0 == Global_69678.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_69678.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0)//Position - 0x39E6
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 145;
	}
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			if (Global_90309[iVar0] == iParam0)
			{
				return Global_90319[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_47(int iParam0, int iParam1, bool bParam2)//Position - 0x3A49
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_48(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xC80D31E4B587871C(Global_104555.f_7199[iVar2], 0))
		{
			if (unk_0x7840B5C83A85E7C6(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_48(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x3ABA
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_49(int iParam0)//Position - 0x3B92
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_69678.f_139[iParam0];
}

int func_50()//Position - 0x3BAE
{
	var uVar0;
	
	func_60(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_59(&uVar0, unk_0x95327550F0F2BE7C());
	func_58(&uVar0, unk_0x674C9438180770FE());
	func_53(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_52(&uVar0, unk_0xEAF455949B108589());
	func_51(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_51(var uParam0, int iParam1)//Position - 0x3BF4
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || system::shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || system::shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_52(var uParam0, int iParam1)//Position - 0x3C7A
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_53(var uParam0, int iParam1)//Position - 0x3CAD
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_57(*uParam0);
	iVar1 = func_55(*uParam0);
	if (iParam1 < 1 || iParam1 > func_54(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_54(int iParam0, int iParam1)//Position - 0x3CFE
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_55(int iParam0)//Position - 0x3DA0
{
	return (system::shift_right(iParam0, 26) & 31 * func_56(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_56(bool bParam0, int iParam1, int iParam2)//Position - 0x3DC5
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_57(int iParam0)//Position - 0x3DDC
{
	return iParam0 & 15;
}

void func_58(var uParam0, int iParam1)//Position - 0x3DE9
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_59(var uParam0, int iParam1)//Position - 0x3E23
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_60(var uParam0, int iParam1)//Position - 0x3E5E
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_61(var uParam0, int iParam1)//Position - 0x3E9A
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831,8538f, 172,1154f, 69,9058f };
			uParam0->f_3 = 157,5705f;
			uParam0->f_4 = func_23(0, 1);
			uParam0->f_12 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970,943f, 3801,684f, 31,1396f };
			uParam0->f_3 = 301,3964f;
			uParam0->f_4 = func_23(0, 1);
			uParam0->f_12 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22,6297f, -1439,137f, 29,6549f };
			uParam0->f_3 = 180,0808f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22,5229f, -1434,699f, 29,6552f };
			uParam0->f_3 = 141,6114f;
			uParam0->f_4 = func_23(1, 2);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 19);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10,9281f, 545,669f, 174,7951f };
			uParam0->f_3 = 61,392f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6,1093f, 544,9742f, 174,2835f };
			uParam0->f_3 = 92,1548f;
			uParam0->f_4 = func_23(1, 2);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 19);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981,416f, 3808,131f, 31,1384f };
			uParam0->f_3 = 117,2557f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158,488f, -1529,367f, 3,8995f };
			uParam0->f_3 = 35,7505f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148,2868f, -1270,569f, 28,2252f };
			uParam0->f_3 = 208,4685f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459,509f, -1380,45f, 78,3259f };
			uParam0->f_3 = 99,6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518,947f, -1387,865f, -0,5134f };
			uParam0->f_3 = 98,3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353,0926f, 3577,593f, 32,351f };
			uParam0->f_3 = 16,6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652,004f, -3142,348f, 12,9921f };
			uParam0->f_3 = 329,1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271,649f, -3380,685f, 12,9451f };
			uParam0->f_3 = 329,5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735,586f, 3294,531f, 40,1651f };
			uParam0->f_3 = 194,9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846,27f, -1363,19f, 0,22f };
			uParam0->f_3 = 108,78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 22);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849,47f, -1354,99f, 0,24f };
			uParam0->f_3 = 109,84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 22);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852,47f, -1346,2f, 0,21f };
			uParam0->f_3 = 108,76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 22);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745,857f, -1433,904f, 4,0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756,2952f, -1441,609f, 2,9184f };
			uParam0->f_18 = { -738,0606f, -1423,068f, 8,2835f };
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761,8486f, -1453,829f, 4,0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772,8158f, -1459,957f, 3,2894f };
			uParam0->f_18 = { -754,3353f, -1440,836f, 8,3334f };
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769,3f, 3244f, 41,1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196,2794f, -1020,479f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 27);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199,8872f, -1020,048f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 27);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203,6006f, -1019,776f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 27);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 11);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723,2515f, -632,0496f, 27,1484f };
			uParam0->f_3 = 12,9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 11);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51,23f, 3111,9f, 24,95f };
			uParam0->f_3 = 46,78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55,7984f, -1096,586f, 25,4223f };
			uParam0->f_3 = 308,0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 9);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892,93f, 3192,37f, 11,66f };
			uParam0->f_3 = -132,35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 9);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744,308f, 3270,673f, 40,2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751,44f, 3322,643f, 42,1855f };
			uParam0->f_3 = 268,134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377,104f, -2076,2f, 52f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380,42f, -2072,77f, 51,7607f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = joaat("trash");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359,389f, 3618,441f, 33,8907f };
			uParam0->f_3 = 108,2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693,1154f, -1018,155f, 21,6387f };
			uParam0->f_3 = 177,6454f;
			uParam0->f_4 = 1938952078;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73,6963f, 495,124f, 143,5226f };
			uParam0->f_3 = 155,5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67,6314f, 891,8266f, 234,5348f };
			uParam0->f_3 = 294,993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533,9048f, -169,2469f, 53,7005f };
			uParam0->f_3 = 1,2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726,8914f, -408,6952f, 34,0416f };
			uParam0->f_3 = 267,7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321,519f, 261,3993f, 61,5709f };
			uParam0->f_3 = 350,7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267,999f, 451,6463f, 93,7071f };
			uParam0->f_3 = 48,9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062,076f, -226,7637f, 37,157f };
			uParam0->f_3 = 234,2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68,16914f, -1558,958f, 29,46904f };
			uParam0->f_3 = 49,90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589,4399f, 2736,708f, 42,03316f };
			uParam0->f_3 = -175,7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488,774f, -344,5721f, 34,36356f };
			uParam0->f_3 = 82,4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288,8808f, -585,4728f, 43,15428f };
			uParam0->f_3 = -20,80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304,8294f, -1383,674f, 31,67744f };
			uParam0->f_3 = -41,11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126,194f, -1481,486f, 34,7016f };
			uParam0->f_3 = -91,43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598,36f, 5252,84f, 0f };
			uParam0->f_3 = 28,14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 2);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 30);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602,62f, 5260,37f, 0,86f };
			uParam0->f_3 = 25,32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 2);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 22);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116,571f, 4763,279f, 40,1596f };
			uParam0->f_3 = 198,723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133,21f, 120,2f, 80,9f };
			uParam0->f_3 = 134,4f;
			if (func_43())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 2);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806,31f, -2679,65f, 13,9f };
			uParam0->f_3 = 150,54f;
			if (func_43())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 2);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985,85f, 3828,96f, 31,98f };
			uParam0->f_3 = -16,58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870,75f, 4464,67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257,729f, -2564,474f, 41,717f };
			uParam0->f_3 = 284,5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643,2823f, 3014,152f, 42,2733f };
			uParam0->f_3 = 128,0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38,9368f, 850,8677f, 196,3f };
			uParam0->f_3 = 311,6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 30);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333,875f, 4262,226f, 30,78f };
			uParam0->f_3 = 262,5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 30);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xC80D31E4B587871C(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_104555.f_32429.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678,8f, 3229,6f, 41,8f };
				uParam0->f_3 = 106,0906f;
			}
		}
		if (!func_21(Global_104555.f_32429.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_32429.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_104555.f_32429.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_104555.f_32429.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xC80D31E4B587871C(uParam0->f_9, 19))
	{
		if (!func_21(Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xC80D31E4B587871C(uParam0->f_9, 20))
	{
		if (!func_21(Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_62(int iParam0)//Position - 0x56A5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90339[iVar0]))
		{
			if (Global_90339[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0)//Position - 0x56E0
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]) && unk_0xB8DE76287EDC4957(Global_90309[iVar0], 0))
			{
				if (Global_90309[iVar0] == iParam0 && unk_0x82FF3DFBC3965CC0(Global_90309[iVar0]) == unk_0x82FF3DFBC3965CC0(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_64(int iParam0)//Position - 0x575C
{
	switch (Local_56.f_6)
	{
		case 0:
			return func_66(iParam0);
			break;
		
		case 1:
			if (((unk_0x428C7026AD2721BA(iParam0) || unk_0x38171AD35981A393(iParam0)) || iParam0 == joaat("submersible2")) || iParam0 == joaat("dodo"))
			{
				return 1;
			}
			break;
		
		case 3:
			return func_65(iParam0);
			break;
		
		case 2:
			return (unk_0xF9DDB1C0875FD9E0(iParam0) && iParam0 != joaat("skylift"));
			break;
	}
	return 0;
}

int func_65(int iParam0)//Position - 0x57F0
{
	if ((iParam0 == joaat("marshall") || iParam0 == joaat("barracks")) || iParam0 == joaat("crusader"))
	{
		return 0;
	}
	if (iParam0 == joaat("rhino"))
	{
		return 0;
	}
	if (((!unk_0xC1514CFCEC68CA4A(iParam0) && !unk_0x125CDF69FA6EF560(iParam0)) && !unk_0x622CEE94AF3A0B32(iParam0)) && !unk_0x49A1CABC032F7E16(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_66(int iParam0)//Position - 0x5864
{
	if (iParam0 == joaat("jet"))
	{
		return 0;
	}
	if ((((!unk_0x849A8CFD71854E02(iParam0) && iParam0 != joaat("marshall")) && iParam0 != joaat("rhino")) && iParam0 != joaat("barracks")) && iParam0 != joaat("crusader"))
	{
		return 0;
	}
	return 1;
}

bool func_67(int iParam0, int iParam1)//Position - 0x58BD
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_104555.f_32429[iParam0], iParam1);
}

void func_68()//Position - 0x58E0
{
	struct<101> Var0;
	struct<78> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	struct<2> Var24;
	int iVar25;
	bool bVar26;
	int iVar27;
	bool bVar28;
	var uVar29;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Var1.f_9 = 49;
	Var1.f_59 = 2;
	bVar2 = false;
	iVar3 = 0;
	if (iLocal_113 > 0 && iLocal_113 != 99)
	{
		if (((((((((((((((Local_56 == -1 || unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_56.f_29.f_7, Local_56.f_29.f_10, Local_56.f_29.f_13, 0, true, 0)) || ((unk_0x6ADD12BF4D6D2587(Global_69678.f_484[Local_56]) && unk_0xB8DE76287EDC4957(Global_69678.f_484[Local_56], 0)) && (unk_0x0082ECE2DB69C8CA(unk_0xFC1458A37D98B502(), Global_69678.f_484[Local_56]) || unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Global_69678.f_484[Local_56], 1)))) || ((unk_0x6ADD12BF4D6D2587(Global_69678.f_484[Local_56]) && unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502())) && ((unk_0x20D66D71CF476CDB(unk_0xFC1458A37D98B502()) - 1f) > 0,15f && unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), Global_69678.f_484[Local_56])))) || ((unk_0x6ADD12BF4D6D2587(Global_69678.f_484[Local_56]) && unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502())) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Global_69678.f_484[Local_56], 1))) || (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502()))) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || func_196(0) != bLocal_161) || bLocal_142) || func_195(-1082130432))
		{
			iLocal_113 = 99;
		}
	}
	switch (iLocal_113)
	{
		case 0:
			if ((((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) && !Global_68215) && !bLocal_142) && !unk_0x3E9CABD07B829173())
			{
				if ((((((((((Local_56.f_29.f_80 && Local_56.f_2 == 0) && (Global_69678.f_592[0] != -1 || func_194() != 0)) && Local_56 != -1) && !iLocal_159) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(14)) && !func_195(-1082130432))
				{
					if (iLocal_115 != -1)
					{
					}
					else if (func_67(Local_56, 0) && func_67(Local_56, 5))
					{
						if ((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_56.f_29.f_7, Local_56.f_29.f_10, Local_56.f_29.f_13, 0, true, 0) && !unk_0x1E5BEC57385A771D(unk_0xFC1458A37D98B502())) && !unk_0xDFFD5F8C8ABCB7EF(unk_0xFC1458A37D98B502()))
						{
							if ((!unk_0x6ADD12BF4D6D2587(Global_69678.f_484[Local_56]) || !unk_0xB8DE76287EDC4957(Global_69678.f_484[Local_56], 0)) || (!unk_0x0082ECE2DB69C8CA(unk_0xFC1458A37D98B502(), Global_69678.f_484[Local_56]) && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Global_69678.f_484[Local_56], 1)))
							{
								iVar6 = func_194();
								iVar7 = 0;
								while (iVar7 < iVar6)
								{
									if (func_64(func_190(iVar7)))
									{
										iVar5++;
									}
									iVar7++;
								}
								iVar4 = 0;
								while (iVar4 < Global_69678.f_592)
								{
									if (Global_69678.f_592[iVar4] != -1)
									{
										if ((func_189(Global_69678.f_592[iVar4], iLocal_129) && Global_104555.f_32429.f_1982[iLocal_129 /*939*/].f_626[Global_69678.f_592[iVar4]] == -15) && (Global_69678.f_592[iVar4] != 200 || !Global_104555.f_25043.f_7))
										{
											iVar5++;
										}
									}
									iVar4++;
								}
								if (iVar5 > 0)
								{
									if (!unk_0xF491DD47B88AA84E())
									{
										iLocal_144 = 1;
										if (Local_56.f_6 == 3)
										{
											func_188(&iLocal_114, 3, "WEB_VEH_TRIG2", 0, 0, 0, 0);
										}
										else
										{
											func_188(&iLocal_114, 3, "WEB_VEH_TRIG", 0, 0, 0, 0);
										}
										bLocal_161 = func_196(0);
										iLocal_113++;
									}
								}
								else if (!iLocal_144)
								{
									if (Local_56.f_6 == 0)
									{
										if (!unk_0xF491DD47B88AA84E() || func_187("HANGAR_NO"))
										{
											func_186("HANGAR_NO", -1);
											StringCopy(&cLocal_162, "HANGAR_NO", 16);
										}
										bVar2 = true;
									}
									else if (Local_56.f_6 == 1)
									{
										if (!unk_0xF491DD47B88AA84E() || func_187("MARINA_NO"))
										{
											func_186("MARINA_NO", -1);
											StringCopy(&cLocal_162, "MARINA_NO", 16);
										}
										bVar2 = true;
									}
									else if (Local_56.f_6 == 2)
									{
										if (!unk_0xF491DD47B88AA84E() || func_187("HELIPAD_NO"))
										{
											func_186("HELIPAD_NO", -1);
											StringCopy(&cLocal_162, "HELIPAD_NO", 16);
										}
										bVar2 = true;
									}
									else if (Local_56.f_6 == 3)
									{
										StringCopy(&Var8, "CAR_GAR_NO", 16);
										if (unk_0x8A81E55A71641BC1() || unk_0xFD6215BABFD843F2())
										{
											StringConCat(&Var8, "_1", 16);
										}
										else if (unk_0x04E8D1E1170F25E1() || unk_0x177281F5FA205A38())
										{
											StringConCat(&Var8, "_2", 16);
										}
										if (!unk_0xF491DD47B88AA84E() || func_187(&Var8))
										{
											func_186(&Var8, -1);
											cLocal_162 = { Var8 };
										}
										bVar2 = true;
									}
								}
							}
						}
						else
						{
							iLocal_144 = 0;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && func_184(0, -1, 0))
			{
				if (iLocal_115 != -1)
				{
					iLocal_113 = 0;
					return;
				}
				if (func_183(iLocal_114, 1))
				{
					unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
					if (unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
					{
						unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
					}
					else
					{
						unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 256);
					}
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if (unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
						{
							unk_0x47E2FD029BB8567C(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), false);
						}
					}
					func_182();
					iLocal_116 = 0;
					iLocal_117 = 0;
					iLocal_118 = 0;
					iLocal_109 = -1;
					iLocal_113++;
					return;
				}
			}
			break;
		
		case 2:
			if (!iLocal_116 || iLocal_117)
			{
				func_181(0);
				func_180(1, 4, 0, 0, 0);
				func_179(1, 2, 1, 1, 1);
				func_178("WEB_VEH_TITLE");
				iVar9 = 0;
				while (iVar9 < iLocal_110)
				{
					iLocal_110[iVar9] = 0;
					iVar9++;
				}
				iVar10 = -1;
				iVar11 = 0;
				func_61(&(Local_56.f_8), Local_56);
				iVar13 = 0;
				iVar14 = func_194();
				iVar12 = 0;
				while (iVar12 < iVar14)
				{
					if (func_64(func_190(iVar12)))
					{
						if (iVar10 == -1)
						{
							iVar10 = iVar13;
						}
						if (Local_56.f_8.f_4 == func_190(iVar12))
						{
							iLocal_109 = iVar13;
							iVar11 = 1;
						}
						iVar13++;
					}
					iVar12++;
				}
				iVar12 = 0;
				while (iVar12 < Global_69678.f_592)
				{
					if (Global_69678.f_592[iVar12] != -1)
					{
						if ((func_189(Global_69678.f_592[iVar12], iLocal_129) && Global_104555.f_32429.f_1982[iLocal_129 /*939*/].f_626[Global_69678.f_592[iVar12]] == -15) && (Global_69678.f_592[iVar12] != 200 || !Global_104555.f_25043.f_7))
						{
							func_136(Global_69678.f_592[iVar12], &Var0, 0, iLocal_129, -1);
							if (iVar10 == -1)
							{
								iVar10 = iVar13;
							}
							if (Local_56.f_8.f_4 == Var0.f_66)
							{
								iLocal_109 = iVar13;
								iVar11 = 1;
							}
							iVar13++;
						}
					}
					iVar12++;
				}
				if (iLocal_109 == -1)
				{
					iLocal_109 = iVar10;
				}
				iVar13 = 0;
				iVar14 = func_194();
				iVar12 = 0;
				while (iVar12 < iVar14)
				{
					if (func_64(func_190(iVar12)))
					{
						unk_0x872F1C1F8587CCC7(&(iLocal_110[(iVar13 / 32)]), (iVar13 % 32));
						func_132(iVar13, unk_0x8C8DF9FA5116BB9A(func_190(iVar12)), 0, 1, 0, 0);
						if ((iLocal_109 == iVar13 && iVar11) && Local_56.f_6 != 3)
						{
							func_131(iVar13, 4, 0);
						}
						else
						{
							func_131(iVar13, 0, 0);
						}
						iVar13++;
					}
					iVar12++;
				}
				iVar12 = 0;
				while (iVar12 < Global_69678.f_592)
				{
					if (Global_69678.f_592[iVar12] != -1)
					{
						if ((func_189(Global_69678.f_592[iVar12], iLocal_129) && Global_104555.f_32429.f_1982[iLocal_129 /*939*/].f_626[Global_69678.f_592[iVar12]] == -15) && (Global_69678.f_592[iVar12] != 200 || !Global_104555.f_25043.f_7))
						{
							unk_0x872F1C1F8587CCC7(&(iLocal_110[(iVar13 / 32)]), (iVar13 % 32));
							func_136(Global_69678.f_592[iVar12], &Var0, 0, iLocal_129, -1);
							if (Global_69678.f_592[iVar12] != 164)
							{
								func_132(iVar13, func_129(Global_69678.f_592[iVar12]), 0, 1, 0, 0);
							}
							else if (Var0.f_67 == 0)
							{
								func_132(iVar13, "TWOSTRINGS", 2, 1, 0, 0);
								func_126(func_129(Global_69678.f_592[iVar12]), 0);
								func_126("VNX_SWFTC", 0);
							}
							else if (Var0.f_67 == 1)
							{
								func_132(iVar13, "TWOSTRINGS", 2, 1, 0, 0);
								func_126(func_129(Global_69678.f_592[iVar12]), 0);
								func_126("VNX_SWFTB", 0);
							}
							else
							{
								func_132(iVar13, func_129(Global_69678.f_592[iVar12]), 0, 1, 0, 0);
							}
							if (iLocal_109 == iVar13 && iVar11)
							{
								func_131(iVar13, 4, 0);
							}
							else
							{
								func_131(iVar13, 0, 0);
							}
							iVar13++;
						}
					}
					iVar12++;
				}
				func_125(iLocal_109, 1, 1);
				iLocal_119 = 1;
				iLocal_117 = 0;
				iLocal_116 = 1;
			}
			else
			{
				iVar3 = 0;
				if (unk_0xB9D80B12FE4456A5())
				{
					if (unk_0x2E4EC2FA6A038490(2))
					{
						unk_0x4FB260623DD93924(0, 1, 1);
						unk_0x4FB260623DD93924(0, 2, 1);
						unk_0x4FB260623DD93924(2, 200, 1);
						unk_0x2DB625A7D089C175(0, 237, 1);
						unk_0x2DB625A7D089C175(0, 238, 1);
						unk_0x2DB625A7D089C175(0, 241, 1);
						unk_0x2DB625A7D089C175(0, 242, 1);
						func_122(0, 0, 0, 1);
						func_121(0, -1, 1);
						if (func_120())
						{
							if (Global_4265875 != iLocal_109)
							{
								unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iLocal_109 = Global_4265875;
								func_125(iLocal_109, 1, 1);
								iLocal_119 = 1;
							}
							else
							{
								iVar3 = 1;
							}
						}
					}
				}
				if (unk_0xE8C126B7ADBB9D63(2, 188) || unk_0xE8C126B7ADBB9D63(2, 241))
				{
					iLocal_119 = 1;
					unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar15 = (iLocal_109 - 1);
					while (iVar15 >= 0)
					{
						if (unk_0xC80D31E4B587871C(iLocal_110[(iVar15 / 32)], (iVar15 % 32)))
						{
							iLocal_109 = iVar15;
							bVar16 = true;
							iVar15 = 0;
						}
						iVar15 = (iVar15 + -1);
					}
					if (!bVar16)
					{
						iVar15 = (iLocal_110 * 32 - 1);
						while (iVar15 >= iLocal_109 + 1)
						{
							if (unk_0xC80D31E4B587871C(iLocal_110[(iVar15 / 32)], (iVar15 % 32)))
							{
								iLocal_109 = iVar15;
								bVar16 = true;
								iVar15 = 0;
							}
							iVar15 = (iVar15 + -1);
						}
					}
					if (bVar16)
					{
						func_125(iLocal_109, 1, 1);
					}
				}
				else if (unk_0xE8C126B7ADBB9D63(2, 187) || unk_0xE8C126B7ADBB9D63(2, 242))
				{
					iLocal_119 = 1;
					unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar17 = iLocal_109 + 1;
					while (iVar17 <= (iLocal_110 * 32 - 1))
					{
						if (unk_0xC80D31E4B587871C(iLocal_110[(iVar17 / 32)], (iVar17 % 32)))
						{
							iLocal_109 = iVar17;
							bVar18 = true;
							iVar17 = iLocal_110 * 32 + 1;
						}
						iVar17++;
					}
					if (!bVar18)
					{
						iVar17 = 0;
						while (iVar17 <= (iLocal_109 - 1))
						{
							if (unk_0xC80D31E4B587871C(iLocal_110[(iVar17 / 32)], (iVar17 % 32)))
							{
								iLocal_109 = iVar17;
								bVar18 = true;
								iVar17 = iLocal_110 * 32 + 1;
							}
							iVar17++;
						}
					}
					if (bVar18)
					{
						func_125(iLocal_109, 1, 1);
					}
				}
				else if (unk_0x58F436C557A0FD7A(2, 201) || iVar3 == 1)
				{
					bVar19 = false;
					iVar3 = 0;
					unk_0x4AFBCBFDE748D4E0(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar21 = 0;
					iVar22 = func_194();
					iVar20 = 0;
					while (iVar20 < iVar22)
					{
						if (func_64(func_190(iVar20)))
						{
							if (iLocal_109 == iVar21 && (((((Local_56.f_8.f_4 != func_190(iVar20) || !unk_0x6ADD12BF4D6D2587(Global_69678.f_484[Local_56])) || !unk_0xB8DE76287EDC4957(Global_69678.f_484[Local_56], 0)) || Local_56 == 21) || Local_56 == 22) || Local_56 == 23))
							{
								bVar19 = true;
								if ((((!iLocal_118 && Local_56.f_8.f_4 != func_190(iVar20)) || (!iLocal_118 && Local_56 == 21)) || (!iLocal_118 && Local_56 == 22)) || (!iLocal_118 && Local_56 == 23))
								{
									func_119("VEH_SELECT_CNFA", 0, 0);
									func_118(-1);
									func_117(201, "ITEM_YES", -1);
									func_117(202, "ITEM_NO", -1);
									iLocal_118 = 1;
									iVar20 = func_194() + 1;
								}
								else if (Local_56.f_6 == 3)
								{
									if (func_116(func_190(iVar20)))
									{
										iLocal_160 = func_190(iVar20);
										iLocal_116 = 0;
										iLocal_117 = 0;
										iLocal_111 = 0;
										iLocal_113++;
									}
									else
									{
										iLocal_159 = 1;
										iLocal_160 = func_190(iVar20);
										iLocal_113 = 99;
									}
								}
								else if (Local_56.f_6 == 0 && func_116(func_190(iVar20)))
								{
									iLocal_160 = func_190(iVar20);
									iLocal_116 = 0;
									iLocal_117 = 0;
									iLocal_111 = 0;
									iLocal_113++;
								}
								else
								{
									if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[Local_56]))
									{
										unk_0xDD29FF4BAB8AFF9C(Global_69678.f_484[Local_56], false, 1);
										unk_0xC91FE17AD7353B70(&(Global_69678.f_484[Local_56]));
									}
									Var1.f_66 = func_190(iVar20);
									unk_0x872F1C1F8587CCC7(&(Var1.f_77), 14);
									func_113(Local_56, &Var1, 0f, 0f, 0f, -1f, 145);
									func_112(Local_56);
									func_61(&(Local_56.f_8), Local_56);
									iVar20 = func_194() + 1;
									iLocal_117 = 1;
								}
							}
							iVar21++;
						}
						iVar20++;
					}
					if (!bVar19)
					{
						iVar20 = 0;
						while (iVar20 < Global_69678.f_592)
						{
							if (Global_69678.f_592[iVar20] != -1)
							{
								if ((func_189(Global_69678.f_592[iVar20], iLocal_129) && Global_104555.f_32429.f_1982[iLocal_129 /*939*/].f_626[Global_69678.f_592[iVar20]] == -15) && (Global_69678.f_592[iVar20] != 200 || !Global_104555.f_25043.f_7))
								{
									func_136(Global_69678.f_592[iVar20], &Var0, 0, iLocal_129, -1);
									if (iLocal_109 == iVar21 && ((Local_56.f_8.f_4 != Var0.f_66 || !unk_0x6ADD12BF4D6D2587(Global_69678.f_484[Local_56])) || !unk_0xB8DE76287EDC4957(Global_69678.f_484[Local_56], 0)))
									{
										bVar19 = true;
										if (!iLocal_118)
										{
											if (Local_56.f_6 == 3)
											{
												func_119("VEH_SELECT_CNF", 0, 0);
											}
											else
											{
												func_119("VEH_SELECT_CNFA", 0, 0);
											}
											func_118(-1);
											func_117(201, "ITEM_YES", -1);
											func_117(202, "ITEM_NO", -1);
											iLocal_118 = 1;
											iVar20 = Global_69678.f_592 + 1;
										}
										else if (Var0.f_66 == joaat("marshall"))
										{
											iLocal_113 = 3;
											iLocal_117 = 1;
											iVar20 = Global_69678.f_592 + 1;
										}
										else
										{
											if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[Local_56]))
											{
												unk_0xDD29FF4BAB8AFF9C(Global_69678.f_484[Local_56], false, 1);
												unk_0xC91FE17AD7353B70(&(Global_69678.f_484[Local_56]));
											}
											func_136(Global_69678.f_592[iVar20], &Var0, 0, iLocal_129, -1);
											unk_0x872F1C1F8587CCC7(&(Var0.f_77), 14);
											if (unk_0x849A8CFD71854E02(Var0.f_66))
											{
												unk_0x872F1C1F8587CCC7(&(Var0.f_77), 22);
											}
											func_113(Local_56, &Var0, 0f, 0f, 0f, -1f, 145);
											func_112(Local_56);
											func_61(&(Local_56.f_8), Local_56);
											iVar20 = Global_69678.f_592 + 1;
											iLocal_117 = 1;
										}
									}
									iVar21++;
								}
							}
							iVar20++;
						}
					}
				}
				else if (unk_0x58F436C557A0FD7A(2, 202) || unk_0x58F436C557A0FD7A(2, 238))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (iLocal_118)
					{
						iLocal_119 = 1;
						iLocal_118 = 0;
					}
					else
					{
						iLocal_113 = 99;
					}
				}
			}
			unk_0x36853D5037847BF3();
			if (iLocal_119)
			{
				func_119("", 0, 0);
				func_118(-1);
				func_117(201, "ITEM_SELECT", -1);
				func_117(202, "ITEM_EXIT", -1);
				iLocal_118 = 0;
				iLocal_119 = 0;
			}
			func_74(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 3:
			if (!iLocal_116 || iLocal_117)
			{
				func_181(0);
				func_180(1, 0, 0, 0, 0);
				func_179(1, 1, 1, 1, 1);
				iVar23 = 0;
				while (iVar23 < iLocal_112)
				{
					iLocal_112[iVar23] = 0;
					iVar23++;
				}
				func_178("WEB_VEH_TITLE2");
				iVar23 = 0;
				while (iVar23 < 25)
				{
					StringCopy(&Var24, "WEB_VEH_FLAG_", 16);
					StringIntConCat(&Var24, iVar23, 16);
					func_132(iVar23, &Var24, 0, 1, 0, 0);
					unk_0x872F1C1F8587CCC7(&(iLocal_112[(iVar23 / 32)]), (iVar23 % 32));
					iVar23++;
				}
				if (Local_131.f_12 == 0)
				{
					iLocal_111 = Global_104555.f_25152.f_313[200];
				}
				else if (Local_131.f_12 == 1)
				{
					iLocal_111 = Global_104555.f_25152.f_626[200];
				}
				else
				{
					iLocal_111 = Global_104555.f_25152.f_939[200];
				}
				func_125(iLocal_111, 1, 1);
				iLocal_119 = 1;
				iLocal_117 = 0;
				iLocal_116 = 1;
			}
			else
			{
				iVar3 = 0;
				if (unk_0xB9D80B12FE4456A5())
				{
					if (unk_0x2E4EC2FA6A038490(2))
					{
						unk_0x4FB260623DD93924(0, 1, 1);
						unk_0x4FB260623DD93924(0, 2, 1);
						unk_0x2DB625A7D089C175(0, 237, 1);
						unk_0x2DB625A7D089C175(0, 238, 1);
						unk_0x2DB625A7D089C175(0, 241, 1);
						unk_0x2DB625A7D089C175(0, 242, 1);
						func_122(0, 0, 0, 1);
						func_121(0, -1, 1);
						if (func_120())
						{
							if (Global_4265875 != iLocal_111)
							{
								unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iLocal_111 = Global_4265875;
								func_125(iLocal_111, 1, 1);
								iLocal_119 = 1;
							}
							else
							{
								iVar3 = 1;
							}
						}
					}
				}
				if (unk_0xE8C126B7ADBB9D63(2, 188) || unk_0xE8C126B7ADBB9D63(2, 241))
				{
					iLocal_119 = 1;
					unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar25 = (iLocal_111 - 1);
					while (iVar25 >= 0)
					{
						if (unk_0xC80D31E4B587871C(iLocal_112[(iVar25 / 32)], (iVar25 % 32)))
						{
							iLocal_111 = iVar25;
							bVar26 = true;
							iVar25 = 0;
						}
						iVar25 = (iVar25 + -1);
					}
					if (!bVar26)
					{
						iVar25 = 31;
						while (iVar25 >= iLocal_111 + 1)
						{
							if (unk_0xC80D31E4B587871C(iLocal_112[(iVar25 / 32)], (iVar25 % 32)))
							{
								iLocal_111 = iVar25;
								bVar26 = true;
								iVar25 = iLocal_111;
							}
							iVar25 = (iVar25 + -1);
						}
					}
					if (bVar26)
					{
						func_125(iLocal_111, 1, 1);
					}
				}
				else if (unk_0xE8C126B7ADBB9D63(2, 187) || unk_0xE8C126B7ADBB9D63(2, 242))
				{
					iLocal_119 = 1;
					unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar27 = iLocal_111 + 1;
					while (iVar27 <= 31)
					{
						if (unk_0xC80D31E4B587871C(iLocal_112[(iVar27 / 32)], (iVar27 % 32)))
						{
							iLocal_111 = iVar27;
							bVar28 = true;
							iVar27 = 31;
						}
						iVar27++;
					}
					if (!bVar28)
					{
						iVar27 = 0;
						while (iVar27 <= (iLocal_111 - 1))
						{
							if (unk_0xC80D31E4B587871C(iLocal_112[(iVar27 / 32)], (iVar27 % 32)))
							{
								iLocal_111 = iVar27;
								bVar28 = true;
								iVar27 = iLocal_111;
							}
							iVar27++;
						}
					}
					if (bVar28)
					{
						func_125(iLocal_111, 1, 1);
					}
				}
				else if (unk_0x58F436C557A0FD7A(2, 201) || iVar3 == 1)
				{
					iVar3 = 0;
					unk_0x4AFBCBFDE748D4E0(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[Local_56]))
					{
						unk_0xDD29FF4BAB8AFF9C(Global_69678.f_484[Local_56], false, 1);
						unk_0xC91FE17AD7353B70(&(Global_69678.f_484[Local_56]));
					}
					uVar29 = iLocal_111 + 1;
					if (iLocal_129 == 0)
					{
						Global_104555.f_25152.f_313[200] = uVar29;
					}
					else if (iLocal_129 == 1)
					{
						Global_104555.f_25152.f_626[200] = uVar29;
					}
					else if (iLocal_129 == 2)
					{
						Global_104555.f_25152.f_939[200] = uVar29;
					}
					func_136(200, &Var0, 0, iLocal_129, -1);
					unk_0x872F1C1F8587CCC7(&(Var0.f_77), 14);
					if (unk_0x849A8CFD71854E02(Var0.f_66))
					{
						unk_0x872F1C1F8587CCC7(&(Var0.f_77), 22);
					}
					func_113(Local_56, &Var0, 0f, 0f, 0f, -1f, 145);
					func_112(Local_56);
					func_61(&(Local_56.f_8), Local_56);
					iLocal_117 = 1;
					iLocal_113 = 2;
				}
				else if (unk_0x58F436C557A0FD7A(2, 202) || unk_0x58F436C557A0FD7A(2, 238))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iLocal_116 = 0;
					iLocal_117 = 0;
					iLocal_113 = (iLocal_113 - 1);
				}
			}
			unk_0x36853D5037847BF3();
			if (iLocal_119)
			{
				func_119("", 0, 0);
				func_118(-1);
				func_117(201, "ITEM_SELECT", -1);
				func_117(202, "ITEM_EXIT", -1);
				iLocal_118 = 0;
				iLocal_119 = 0;
			}
			func_74(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 70:
			break;
		
		case 99:
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			}
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
				{
					if (!unk_0xF4E7CFB681CC707E())
					{
						unk_0x47E2FD029BB8567C(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), true);
					}
				}
			}
			func_71(1, -1);
			iLocal_113 = 0;
			func_69(&iLocal_114);
			iLocal_114 = -1;
			break;
	}
	if (!bVar2 && unk_0xF491DD47B88AA84E())
	{
		if (!unk_0xAB019B170BF1309C(&cLocal_162))
		{
			if ((((func_187("HANGAR_NO") || func_187("MARINA_NO")) || func_187("HELIPAD_NO")) || func_187("CAR_GAR_NO_1")) || func_187("CAR_GAR_NO_2"))
			{
				unk_0x3E80C2F7BC665259(1);
			}
			StringCopy(&cLocal_162, "", 16);
		}
	}
}

void func_69(int iParam0)//Position - 0x6F50
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_70(*iParam0);
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

int func_70(int iParam0)//Position - 0x6FA7
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

void func_71(bool bParam0, int iParam1)//Position - 0x6FE2
{
	int iVar0;
	
	if (!func_73(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17301.f_7931)
	{
		unk_0x3B235F54BDEDFCB5(15);
		Global_17301.f_7931 = 0;
	}
	unk_0xA3E8E2D0F73E92C5(0f);
	if (Global_17301.f_5498[iVar0])
	{
		unk_0xF40900F61CC88931(9, false);
		Global_17301.f_5498[iVar0] = 0;
	}
	if (Global_17301.f_5484[iVar0])
	{
		unk_0x137FC8E0F58D9E0B("CommonMenu");
		Global_17301.f_5484[iVar0] = 0;
	}
	if (Global_17301.f_5491[iVar0])
	{
		unk_0x137FC8E0F58D9E0B("MPShopSale");
		Global_17301.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_72(&(Global_17301.f_5530[iVar0 /*10*/]));
		Global_17301.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17301.f_5591[iVar0] = 0;
	}
}

void func_72(int iParam0)//Position - 0x70A0
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x34D11AB5BA7922C2(*iParam0))
		{
			unk_0xA68F7B004463AB6F(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_73(var uParam0, bool bParam1, int iParam2)//Position - 0x70C9
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x3A711520F83BAE98() && unk_0x8C504A60C2F379BD())
		{
			iParam2 = unk_0x4362A980E5B3780B();
		}
	}
	StringCopy(&cVar0, unk_0x436287B7DB306165(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x8B948C59217A295D(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_17301.f_5591[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_17301.f_5591[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_17301.f_5591[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_74(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0x7166
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
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	int iVar53;
	bool bVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar65[64];
	float fVar66;
	int iVar67;
	float fVar68;
	float fVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_73(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_109(0, bParam6))
	{
		return;
	}
	unk_0x73509F6FDA1DB386(76, 84);
	unk_0xE7C11B6F2CF973B6(-0,05f, -0,05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17301)
	{
		if (func_107(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = fVar37;
			fVar57 = fVar36;
			fVar56 = (fVar56 + 0f);
		}
		else
		{
			Global_17301 = 0;
		}
	}
	if (unk_0x8B948C59217A295D(&(Global_17301.f_1)) == unk_0x8B948C59217A295D("HIDE"))
	{
		fVar58 = Global_17299;
	}
	else
	{
		fVar58 = (((Global_17299 + fVar56) + 0,034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17300;
	}
	fVar61 = 1f;
	if (bParam7)
	{
		unk_0x5113D2C928A121B2(&iVar59, &iVar60);
		fVar62 = unk_0xB6936205ED728A9D(0);
		if (func_106())
		{
			iVar59 = system::round((system::to_float(iVar60) * fVar62));
		}
		fVar63 = (system::to_float(iVar59) / system::to_float(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_106())
		{
			fVar61 = 1f;
		}
		iVar59 = system::round((system::to_float(iVar59) / fVar61));
		iVar60 = system::round((system::to_float(iVar60) / fVar61));
	}
	else
	{
		unk_0x9A72C8F89A53C2D1(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17301.f_5598)
		{
			if (unk_0x8B948C59217A295D(&(Global_17301.f_1)) == unk_0x8B948C59217A295D("HIDE"))
			{
				fVar49 = Global_17299;
			}
			else
			{
				if (Global_17301)
				{
					StringCopy(&cVar64, func_105(29), 64);
					StringCopy(&cVar65, func_102(29, 1), 64);
					if (unk_0x8B948C59217A295D(&(Global_17301.f_6719[29 /*16*/])) == -1487683087)
					{
						func_101(Global_17298, Global_17299, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
						unk_0xEFB3EC0CDCC33841(&cVar64, &cVar65, (Global_17298 + (fParam5 * 0,5f)), (Global_17299 + ((fVar56 - 0f) * 0,5f)), fVar57, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xEFB3EC0CDCC33841(&cVar64, &cVar65, (Global_17298 + (fParam5 * 0,5f)), (Global_17299 + ((fVar56 - 0f) * 0,5f)), fParam5, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17301.f_7901)
				{
					iVar1 = Global_17301.f_7897;
					iVar2 = Global_17301.f_7898;
					iVar3 = Global_17301.f_7899;
					iVar4 = Global_17301.f_7900;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_101(Global_17298, (Global_17299 + fVar56), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17299 + fVar56) + 0,034722f) + 0f);
				if (unk_0x8B948C59217A295D(&(Global_17301.f_1)) != 0)
				{
					func_100();
					unk_0x76CCD673085CBF57(&(Global_17301.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17301.f_68)
					{
						if (Global_17301.f_5[iVar14] == 2)
						{
							unk_0x6223D539BCD39E76(Global_17301.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17301.f_5[iVar14] == 3)
						{
							unk_0x32AD2F36F6EF5A1F(Global_17301.f_14[iVar16], Global_17301.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17301.f_5[iVar14] == 1)
						{
							unk_0xA6D2B267C377D7B2(&(Global_17301.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17301.f_5[iVar14] == 8)
						{
							unk_0xA6D2B267C377D7B2(&(Global_17301.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17301.f_5[iVar14] == 5)
						{
							unk_0x854FACC4E5F40C82(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 6)
						{
							unk_0xA6D2B267C377D7B2(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 7)
						{
							unk_0x854FACC4E5F40C82(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 9)
						{
							unk_0x854FACC4E5F40C82(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xD3DA9EADE295C3C5((Global_17298 + 0,00390625f), ((Global_17299 + fVar56) + 0,00416664f), 0);
				}
				if (Global_17301.f_5601 > Global_17301.f_5095)
				{
					if (Global_17301.f_5604 != 0)
					{
						func_100();
						func_98((((Global_17298 + fParam5) - 0,00390625f) - func_99("CM_ITEM_COUNT", Global_17301.f_5604, Global_17301.f_5603)), ((Global_17299 + fVar56) + 0,00416664f), "CM_ITEM_COUNT", Global_17301.f_5604, Global_17301.f_5603);
					}
				}
			}
			iVar6 = Global_17301.f_5605;
			iVar9 = 0;
			fVar66 = fVar49;
			if (Global_17301.f_7911)
			{
				iVar1 = Global_17301.f_7907;
				iVar2 = Global_17301.f_7908;
				iVar3 = Global_17301.f_7909;
				iVar4 = Global_17301.f_7910;
			}
			else
			{
				unk_0x31758B9A51671C43(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17301.f_5095 && iVar6 <= Global_17301.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17301.f_5355[iVar6])
					{
						if (Global_17301.f_5226[iVar6] && iVar6 != Global_17301.f_5605)
						{
							fVar49 = (fVar49 + 0,00277776f);
						}
						fVar55 = 0,034722f;
						if (Global_17301.f_5612[iVar6] != 0f)
						{
							fVar55 = Global_17301.f_5612[iVar6];
						}
						fVar49 = (fVar49 + fVar55);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar55 = 0,034722f;
					fVar49 = (fVar49 + fVar55);
					iVar9++;
					if (Global_17301.f_5088 <= 1)
					{
						Global_17301.f_5088++;
					}
					iVar53 = 1;
				}
			}
			unk_0xEFB3EC0CDCC33841("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0,5f)), ((fVar66 + ((fVar49 - fVar66) * 0,5f)) - 0,00138888f), fParam5, (fVar49 - fVar66), 0f, 255, 255, 255, 255, 0);
			if (Global_17301.f_5601 > Global_17301.f_5095)
			{
				if (Global_17301.f_7916)
				{
					iVar1 = Global_17301.f_7912;
					iVar2 = Global_17301.f_7913;
					iVar3 = Global_17301.f_7914;
					iVar4 = Global_17301.f_7915;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_101(Global_17298, (fVar49 + 0f), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { unk_0x62415D7FD7ADB9EE("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0,5f / fVar61));
				vVar38.y = (vVar38.y * (0,5f / fVar61));
				if (Global_17301.f_7929)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x31758B9A51671C43(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEFB3EC0CDCC33841("CommonMenu", "shop_arrows_upANDdown", (Global_17298 + (fParam5 * 0,5f)), ((fVar49 + 0f) + (0,034722f * 0,5f)), ((vVar38.x / 1280f) * fVar61), ((vVar38.y / 720f) * fVar61), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0,034722f));
			}
			if (unk_0x8B948C59217A295D(&(Global_17301.f_4562)) != 0 && Global_17301.f_4636 != -1)
			{
				fVar49 = (fVar49 + (0,00277776f * 2f));
				fVar40 = (Global_17298 + 0,0046875f);
				if (Global_17301.f_4638 != 0)
				{
					func_107(Global_17301.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17298 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_97(fVar40);
				unk_0x359D94A1D62654F7(&(Global_17301.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17301.f_4632)
				{
					if (Global_17301.f_4566[iVar14] == 2)
					{
						unk_0x6223D539BCD39E76(Global_17301.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17301.f_4566[iVar14] == 3)
					{
						unk_0x32AD2F36F6EF5A1F(Global_17301.f_4575[iVar16], Global_17301.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17301.f_4566[iVar14] == 1)
					{
						unk_0xA6D2B267C377D7B2(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 5)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 6)
					{
						unk_0xA6D2B267C377D7B2(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 7)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 9)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x019EBC578ADE3C09(fVar40, (fVar49 + 0,00277776f));
				unk_0x31758B9A51671C43(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_101(Global_17298, (fVar49 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17301.f_7921)
				{
					iVar1 = Global_17301.f_7917;
					iVar2 = Global_17301.f_7918;
					iVar3 = Global_17301.f_7919;
					iVar4 = Global_17301.f_7920;
				}
				else
				{
					unk_0x31758B9A51671C43(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEFB3EC0CDCC33841("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0,5f)), ((fVar49 + ((((unk_0xAF6F79C616D36B6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0xAF6F79C616D36B6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_97(fVar40);
				unk_0x76CCD673085CBF57(&(Global_17301.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17301.f_4632)
				{
					if (Global_17301.f_4566[iVar14] == 2)
					{
						unk_0x6223D539BCD39E76(Global_17301.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17301.f_4566[iVar14] == 3)
					{
						unk_0x32AD2F36F6EF5A1F(Global_17301.f_4575[iVar16], Global_17301.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17301.f_4566[iVar14] == 1)
					{
						unk_0xA6D2B267C377D7B2(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 5)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 6)
					{
						unk_0xA6D2B267C377D7B2(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 7)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 9)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 8)
					{
						unk_0xA6D2B267C377D7B2(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xD3DA9EADE295C3C5(fVar40, (fVar49 + 0,00277776f), 0);
				if (Global_17301.f_4638 != 0)
				{
					func_107(Global_17301.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					func_96(Global_17301.f_4638, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xEFB3EC0CDCC33841(func_105(Global_17301.f_4638), func_102(Global_17301.f_4638, 1), ((Global_17298 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar49 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0xAF6F79C616D36B6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17301.f_4636 > 0)
				{
					if ((unk_0x53C562FD2B9E3AB0() - Global_17301.f_4637) > Global_17301.f_4636)
					{
						StringCopy(&(Global_17301.f_4562), "", 16);
						Global_17301.f_4636 = -1;
					}
				}
			}
			if (unk_0x8B948C59217A295D(&(Global_4265799.f_21)) != 0 && Global_4265799.f_65 != -1)
			{
				fVar49 = (fVar49 + (0,00277776f * 2f));
				fVar40 = (Global_17298 + 0,0046875f);
				if (Global_4265799.f_67 != 0)
				{
					func_107(Global_4265799.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17298 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_97(fVar40);
				unk_0x359D94A1D62654F7(&(Global_4265799.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4265799.f_61)
				{
					if (Global_4265799.f_25[iVar14] == 2)
					{
						unk_0x6223D539BCD39E76(Global_4265799.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4265799.f_25[iVar14] == 3)
					{
						unk_0x32AD2F36F6EF5A1F(Global_4265799.f_34[iVar16], Global_4265799.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4265799.f_25[iVar14] == 1)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 5)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 6)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 7)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 9)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 8)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x019EBC578ADE3C09(fVar40, (fVar49 + 0,00277776f));
				unk_0x31758B9A51671C43(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_101(Global_17298, (fVar49 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17301.f_7921)
				{
					iVar1 = Global_17301.f_7917;
					iVar2 = Global_17301.f_7918;
					iVar3 = Global_17301.f_7919;
					iVar4 = Global_17301.f_7920;
				}
				else
				{
					unk_0x31758B9A51671C43(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEFB3EC0CDCC33841("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0,5f)), ((fVar49 + ((((unk_0xAF6F79C616D36B6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0xAF6F79C616D36B6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_97(fVar40);
				unk_0x76CCD673085CBF57(&(Global_4265799.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4265799.f_61)
				{
					if (Global_4265799.f_25[iVar14] == 2)
					{
						unk_0x6223D539BCD39E76(Global_4265799.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4265799.f_25[iVar14] == 3)
					{
						unk_0x32AD2F36F6EF5A1F(Global_4265799.f_34[iVar16], Global_4265799.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4265799.f_25[iVar14] == 1)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 8)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 5)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 6)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 7)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 9)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xD3DA9EADE295C3C5(fVar40, (fVar49 + 0,00277776f), 0);
				if (Global_4265799.f_67 != 0)
				{
					func_107(Global_4265799.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_96(Global_4265799.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xEFB3EC0CDCC33841(func_105(Global_4265799.f_67), func_102(Global_4265799.f_67, 1), ((Global_17298 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar49 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0xAF6F79C616D36B6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4265799.f_65 > 0)
				{
					if ((unk_0x53C562FD2B9E3AB0() - Global_4265799.f_66) > Global_4265799.f_65)
					{
						StringCopy(&(Global_4265799.f_21), "", 16);
						Global_4265799.f_65 = -1;
					}
				}
			}
			func_88(iVar59, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x73509F6FDA1DB386(76, 84);
			unk_0xE7C11B6F2CF973B6(-0,05f, -0,05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17301.f_5598)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar67 = Global_17301.f_5088;
			if (Global_17301.f_5599)
			{
				iVar67 = (Global_17301.f_5602 - 1);
			}
			fVar68 = 0f;
			fVar69 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar67)
			{
				fVar55 = 0,034722f;
				if (Global_17301.f_5612[iVar6] != 0f)
				{
					fVar55 = Global_17301.f_5612[iVar6];
				}
				if (Global_17301.f_5599)
				{
					iVar6 = Global_17301.f_7552[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_17301.f_5605 && iVar9 < Global_17301.f_5095)
				{
					bVar33 = true;
					if (Global_17301.f_5606 == iVar6)
					{
						fVar69 = fVar68;
					}
					if (Global_17301.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar58 + fVar68) + (0,00277776f * IntToFloat(iVar12))) + 0,00277776f);
				}
				Global_17301.f_5746[iVar6] = fVar35;
				fVar34 = (Global_17298 + 0,0046875f);
				bVar39 = false;
				bVar32 = Global_17301.f_5606 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_17301.f_7923)
					{
						unk_0x31758B9A51671C43(Global_17301.f_7922, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0x31758B9A51671C43(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0xEFB3EC0CDCC33841("CommonMenu", "Gradient_Nav", (Global_17298 + (fParam5 * 0,5f)), (((fVar58 + fVar69) + (0,00277776f * IntToFloat(iVar12))) + (fVar55 * 0,5f)), fParam5, fVar55, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_17301.f_5744 = fVar35;
				}
				if (iVar53 && iVar7 == iVar67)
				{
					func_86(bVar32, 1, 0, 0, 0, 0, 0);
					unk_0x76CCD673085CBF57("DFLT_MNU_OPT");
					unk_0xD3DA9EADE295C3C5(fVar34, fVar35, 0);
					bVar39 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17301.f_5096)
					{
						if (unk_0xC80D31E4B587871C(Global_17301.f_4959[iVar6], iVar8) || Global_17301.f_4926[iVar8] == 5)
						{
							if (Global_17301.f_5599)
							{
								iVar19 = Global_17301.f_7568[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar20 = Global_17301.f_7609[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar21 = Global_17301.f_7650[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar22 = Global_17301.f_7691[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar23 = Global_17301.f_7732[((iVar9 * Global_17301.f_5096) + iVar8)];
							}
							else
							{
								Global_17301.f_7568[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar19;
								Global_17301.f_7609[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar20;
								Global_17301.f_7650[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar21;
								Global_17301.f_7691[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar22;
								Global_17301.f_7732[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar23;
							}
							iVar74 = 0;
							bVar54 = false;
							if (Global_17301.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17301.f_5875[0])
								{
									bVar54 = true;
									iVar74 = 0;
								}
							}
							if (Global_17301.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17301.f_5875[1])
								{
									bVar54 = true;
									iVar74 = 1;
								}
							}
							if (Global_17301.f_4932[iVar8] != -1f)
							{
								fVar34 = ((Global_17298 + 0,0046875f) + Global_17301.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17301.f_4932[iVar8 + 1] != -1f) && fVar34 < Global_17301.f_4932[iVar8 + 1])
							{
								fVar44 = (Global_17301.f_4932[iVar8 + 1] - fVar34);
							}
							else
							{
								fVar44 = (((Global_17298 + Global_17300) - 0,0046875f) - fVar34);
							}
							if ((Global_17301.f_4945[iVar8] && Global_17301.f_5741) && bVar32)
							{
								bVar52 = true;
							}
							else
							{
								bVar52 = false;
							}
							switch (Global_17301.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											fVar41 = 0f;
											fVar42 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												bVar51 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar51 = true;
													}
													else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_86(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, iVar74, bVar51, bVar50);
												unk_0x0792909D8327DAEA(&(Global_17301.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xA6D2B267C377D7B2(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xA6D2B267C377D7B2(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xA6D2B267C377D7B2(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x6223D539BCD39E76(Global_17301.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x32AD2F36F6EF5A1F(Global_17301.f_4175[(iVar21 + iVar27)], Global_17301.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
											{
												fVar41 = unk_0xF2A1AF58CC57C564(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_107(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + fVar36);
														if (iVar14 > 0)
														{
															fVar42 = (fVar42 - (0,00078125f * 4f));
														}
														if (Global_17301.f_4433[(iVar22 + iVar14)] == 2 || Global_17301.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar42 = (fVar42 - (0,00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar40 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0,00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - ((fVar41 + fVar42) * 0,5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar40;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar41;
											Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar41 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar42 = Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_107(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0,5f);
												if (func_107(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_96(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_105(26), func_102(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_107(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0,5f);
												if (func_107(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_96(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_105(27), func_102(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar31 = 0;
										if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_86(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_85(bVar32);
											}
											unk_0x76CCD673085CBF57(&(Global_17301.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xA6D2B267C377D7B2(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 1;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xA6D2B267C377D7B2(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 8;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 5;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xA6D2B267C377D7B2(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 6;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 7;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 9;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6223D539BCD39E76(Global_17301.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar31 = 2;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x32AD2F36F6EF5A1F(Global_17301.f_4175[(iVar21 + iVar27)], Global_17301.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar31 = 3;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17301.f_4433[(iVar22 + iVar28)] == 2 || Global_17301.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_107(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0,5f));
														if (func_107(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_96(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17301.f_4953[iVar8] == 2)
															{
																unk_0xEFB3EC0CDCC33841(func_105(Global_17301.f_4433[(iVar22 + iVar28)]), func_102(Global_17301.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xEFB3EC0CDCC33841(func_105(Global_17301.f_4433[(iVar22 + iVar28)]), func_102(Global_17301.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0,00078125f * 8f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															fVar40 = (fVar40 + (0,00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar31 = 4;
											}
											iVar14++;
										}
										if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar31 == 4 && Global_17301.f_4953[iVar8] == 2)
											{
												unk_0xD3DA9EADE295C3C5(((fVar34 + fVar40) + (0,00078125f * 7f)), fVar35, 0);
											}
											else
											{
												unk_0xD3DA9EADE295C3C5((fVar34 + fVar40), fVar35, 0);
												if (func_84() && unk_0x8F38E94BBF3404CD(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_86(0, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
														StringCopy(&cVar75, "TEST_LABEL", 16);
														fVar76 = 0f;
														fVar77 = 55f;
														fVar78 = 0,0185f;
														fVar79 = 0,004f;
														fVar80 = 0,02f;
														unk_0x8D95497078BC0E3B(0f, (0,35f * 0,7f));
														unk_0xA54B8BFDEBB2AF89(255, 255, 255, 150);
														unk_0x09C2CBFA4CD804AC((fVar34 - (fVar80 * 0,6f)), (fVar35 + (fVar78 * 0,75f)), 0,0175f, 0,035f, system::floor(fVar76), system::floor(fVar76), system::floor(fVar76), system::floor(fVar77), 0);
														unk_0x76CCD673085CBF57(&cVar75);
														unk_0x6223D539BCD39E76((Global_17301.f_5605 + iVar30));
														unk_0xD3DA9EADE295C3C5((fVar34 - fVar80), (fVar35 + fVar79), 0);
														iVar30++;
													}
												}
											}
										}
										if (iVar28 > 0)
										{
											fVar40 = (fVar40 + (6f * 0,00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17301.f_4433[(iVar22 + iVar14)] != 2 && Global_17301.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_107(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0,5f));
														if (func_107(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_96(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17301.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0xEFB3EC0CDCC33841(func_105(Global_17301.f_4433[(iVar22 + iVar14)]), func_102(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), (Global_17298 + (fVar36 * 0,5f)), (((fVar35 + 0,00277776f) + (fVar37 * 0,5f)) - (0,00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_17301.f_4953[iVar8] == 2)
															{
																unk_0xEFB3EC0CDCC33841(func_105(Global_17301.f_4433[(iVar22 + iVar14)]), func_102(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xEFB3EC0CDCC33841(func_105(Global_17301.f_4433[(iVar22 + iVar14)]), func_102(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0,00078125f * 12f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (12f * 0,00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar39 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											func_86(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_85(bVar32);
											}
											unk_0x0792909D8327DAEA("NUMBER");
											unk_0x6223D539BCD39E76(Global_17301.f_3918[iVar20]);
											fVar41 = unk_0xF2A1AF58CC57C564(1);
											fVar40 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0,00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - (fVar41 * 0,5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar40;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar41 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_107(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0,5f);
												if (func_107(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_96(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_105(26), func_102(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_107(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0,5f);
												if (func_107(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_96(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_105(27), func_102(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_86(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
										func_83((fVar34 + fVar40), fVar35, "NUMBER", Global_17301.f_3918[iVar20], 0);
									}
									bVar39 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											func_86(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_85(bVar32);
											}
											unk_0x0792909D8327DAEA("NUMBER");
											unk_0x32AD2F36F6EF5A1F(Global_17301.f_4175[iVar21], Global_17301.f_4304[iVar21]);
											fVar41 = unk_0xF2A1AF58CC57C564(1);
											fVar40 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0,00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - (fVar41 * 0,5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar40;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar41 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_107(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0,5f);
												if (func_107(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_96(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_105(26), func_102(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_107(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0,5f);
												if (func_107(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_96(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_105(27), func_102(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_86(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
										func_82((fVar34 + fVar40), fVar35, "NUMBER", Global_17301.f_4175[iVar21], Global_17301.f_4304[iVar21]);
									}
									bVar39 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_107(Global_17301.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
										{
											if (!Global_17301.f_5599)
											{
												fVar42 = fVar36;
												fVar40 = 0f;
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 + ((fVar44 - fVar42) + (0,00078125f * 1f)));
												}
												else if (Global_17301.f_4953[iVar8] == 0)
												{
													fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - (fVar42 * 0,5f)));
												}
												Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar40;
												Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
											}
											else
											{
												fVar40 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
												fVar42 = Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)];
											}
											if (bVar52)
											{
												if (func_107(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_17301.f_4953[iVar8] == 2)
													{
														fVar40 = (fVar40 - (fVar36 * 2f));
													}
													fVar43 = (fVar36 * 0,5f);
													if (func_107(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_96(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0xEFB3EC0CDCC33841(func_105(26), func_102(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
												if (func_107(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + fVar36);
													fVar43 = (fVar36 * 0,5f);
													if (func_107(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_96(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0xEFB3EC0CDCC33841(func_105(27), func_102(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_107(Global_17301.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_96(Global_17301.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0xEFB3EC0CDCC33841(func_105(Global_17301.f_4433[iVar22]), func_102(Global_17301.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0,5f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), (fVar36 * func_81(Global_17301.f_4433[iVar22])), (fVar37 * func_81(Global_17301.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
									bVar39 = true;
									iVar22++;
									break;
								
								case 5:
									bVar39 = true;
									break;
							}
							if (Global_17301.f_4926[iVar8] == 5)
							{
								if (Global_17301.f_4938[iVar8] > 0,05f)
								{
									fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
								}
								else
								{
									fVar34 = (fVar34 + 0,05f);
								}
							}
							else
							{
								fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
								if (Global_17301.f_4945[iVar8])
								{
									if (func_107(26, 1, 1, &fVar36, &fVar37, bParam7))
									{
										fVar34 = (fVar34 - fVar36);
									}
								}
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_17301.f_7552[iVar9] = iVar6;
						Global_17301.f_5607 = iVar6;
						iVar9++;
						if (Global_17301.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17301.f_5612[iVar6] != 0f)
						{
							fVar68 = (fVar68 + Global_17301.f_5612[iVar6]);
						}
						else
						{
							fVar68 = (fVar68 + 0,034722f);
						}
					}
					if (!Global_17301.f_5598)
					{
						Global_17301.f_5355[iVar6] = 1;
						if (Global_17301.f_5097[iVar6])
						{
							if (bVar32)
							{
								Global_17301.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_17301.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17301.f_5598)
			{
				Global_17301.f_5600 = ((fVar58 + fVar68) + (0,00277776f * IntToFloat(iVar12)));
				Global_17301.f_5603 = iVar11;
				Global_17301.f_5601 = iVar10;
				Global_17301.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17301.f_5599)
	{
		Global_17301.f_5602 = iVar9;
		Global_17301.f_5599 = 1;
	}
	Global_17301.f_5743 = fVar49;
	Global_17301.f_5745 = unk_0x53C562FD2B9E3AB0();
	unk_0xA3E8E2D0F73E92C5(Global_17301.f_5743);
	if (!Global_17301.f_7896)
	{
		func_76(0);
	}
	Global_17301.f_7896 = 0;
	if (bParam2)
	{
		unk_0x553231E7FC3C570D(10);
	}
	unk_0x553231E7FC3C570D(6);
	unk_0x553231E7FC3C570D(7);
	unk_0x553231E7FC3C570D(9);
	unk_0x553231E7FC3C570D(8);
	if (bParam0)
	{
		func_75(1);
	}
	unk_0x189EEBAACC5D380A();
}

void func_75(int iParam0)//Position - 0x9DCA
{
	Global_1359035.f_1079 = iParam0;
}

void func_76(int iParam0)//Position - 0x9DDB
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_80(0))
		{
			func_77(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

void func_77(int iParam0)//Position - 0x9E04
{
	if (Global_14615)
	{
		func_79(0, 0);
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
	if (!func_78())
	{
		Global_14453.f_1 = 3;
	}
}

int func_78()//Position - 0x9E74
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_79(bool bParam0, bool bParam1)//Position - 0x9E9B
{
	if (bParam0)
	{
		if (func_80(0))
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

int func_80(int iParam0)//Position - 0x9F0F
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

float func_81(int iParam0)//Position - 0x9F69
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 50:
		case 43:
		case 44:
		case 45:
			return 0,85f;
			break;
	}
	return 1f;
}

void func_82(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x9FD8
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x32AD2F36F6EF5A1F(fParam3, iParam4);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, 0);
}

void func_83(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x9FF7
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x6223D539BCD39E76(iParam3);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, iParam4);
}

bool func_84()//Position - 0xA015
{
	return unk_0x21EA5D4DC72DE119(-1762644250);
}

void func_85(bool bParam0)//Position - 0xA026
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x31758B9A51671C43(Global_17301.f_7924[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x31758B9A51671C43(Global_17301.f_7924[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, 255);
}

void func_86(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xA06C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_87(Global_17301.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x31758B9A51671C43(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x31758B9A51671C43(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x31758B9A51671C43(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xA54B8BFDEBB2AF89(155, 155, 155, 255);
		}
		else
		{
			unk_0xA54B8BFDEBB2AF89(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xA54B8BFDEBB2AF89(0, 0, 0, system::floor((255f * 0,8f)));
		}
		else
		{
			unk_0x31758B9A51671C43(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xA54B8BFDEBB2AF89(155, 155, 155, 255);
	}
	else
	{
		unk_0xA54B8BFDEBB2AF89(155, 155, 155, 255);
	}
	unk_0x8D95497078BC0E3B(0f, 0,35f);
	unk_0xA2E2179985C59E40(1);
	if (bParam5)
	{
		unk_0x8D95497078BC0E3B(0f, 0,425f);
		unk_0x8F5DFDE59FA7D0D0(4);
	}
	else if (bParam6)
	{
		unk_0x8D95497078BC0E3B(0f, 0,425f);
		unk_0x8F5DFDE59FA7D0D0(6);
	}
	else
	{
		unk_0x8F5DFDE59FA7D0D0(0);
	}
	unk_0xEDC290CB1C56B732(0f, 1f);
	unk_0x0BC5BE26BB7006D2(0);
	unk_0x69A8FC5C344FD5BE(0, 0, 0, 0, 0);
	unk_0xC222AEE842F645C3(0, 0, 0, 0, 0);
}

void func_87(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xA21A
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_88(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0xA4A4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_73(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_109(bParam4, bParam8))
	{
		return;
	}
	if (func_94())
	{
		return;
	}
	if (unk_0x02BBA5FDE77816B9())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_91(unk_0x9EB17624F44A8DA4(), 0))
		{
			return;
		}
	}
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0xE59B25D23E4C4B3E() == 0 || unk_0x02BBA5FDE77816B9())
		{
			return;
		}
	}
	if (Global_17301.f_4639 != 0)
	{
		if (unk_0x8CFF76532FEF34D4(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17301.f_4639)
			{
				if (Global_17301.f_4896[iVar1] != 358)
				{
					StringCopy(&(Global_17301.f_4641[iVar1 /*16*/]), unk_0xC9C4B2A22DE54C69(2, Global_17301.f_4896[iVar1], true), 64);
				}
				else if (Global_17301.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17301.f_4641[iVar1 /*16*/]), unk_0x715308393E136EA8(2, Global_17301.f_4909[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_17301.f_4640 = 0;
		}
		if (!Global_17301.f_4640)
		{
			unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x9499D7329FB840A2((1f - (Global_17301.f_4951 / 100f)));
			unk_0x271AA5469AF471B3();
			if (unk_0xB9D80B12FE4456A5())
			{
				unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x1869584A8A72FEDD(true);
				unk_0x271AA5469AF471B3();
			}
			iVar1 = 0;
			while (iVar1 < Global_17301.f_4639)
			{
				if (unk_0x8B948C59217A295D(&(Global_17301.f_4834[iVar1 /*4*/])) != unk_0x8B948C59217A295D("PREV"))
				{
					unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(iVar1);
					func_90(&(Global_17301.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x8B948C59217A295D(&(Global_17301.f_4834[iVar2 /*4*/])) == unk_0x8B948C59217A295D("PREV"))
					{
						func_90(&(Global_17301.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17301.f_4883[iVar1] == -1)
					{
						func_89(&(Global_17301.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x7E099EB35339C80D(&(Global_17301.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xFD1DB5DD208735A3(iParam2, 70);
						}
						else
						{
							unk_0x6223D539BCD39E76(iParam2);
						}
						unk_0x9748595E4799A2CF();
					}
					if (unk_0xB9D80B12FE4456A5())
					{
						if (Global_17301.f_4896[iVar1] != 358 && unk_0xC80D31E4B587871C(Global_17301.f_4922, iVar1))
						{
							unk_0x1869584A8A72FEDD(true);
							unk_0xD07D5CD276368D36(Global_17301.f_4896[iVar1]);
						}
						else
						{
							unk_0x1869584A8A72FEDD(false);
							unk_0xD07D5CD276368D36(358);
						}
					}
					unk_0x271AA5469AF471B3();
				}
				iVar1++;
			}
			if (unk_0x8B948C59217A295D(&(Global_4265799.f_16)) != unk_0x8B948C59217A295D(""))
			{
				unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xD07D5CD276368D36(Global_17301.f_4639);
				func_90(&Global_4265799);
				if (Global_4265799.f_20 == -1)
				{
					func_89(&(Global_4265799.f_16));
				}
				else
				{
					unk_0x7E099EB35339C80D(&(Global_4265799.f_16));
					if (bParam5)
					{
						unk_0xFD1DB5DD208735A3(iParam2, 70);
					}
					else
					{
						unk_0x6223D539BCD39E76(iParam2);
					}
					unk_0x9748595E4799A2CF();
				}
				unk_0x271AA5469AF471B3();
			}
			unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(80);
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17301.f_4952)
			{
				unk_0xD07D5CD276368D36(1);
			}
			else
			{
				unk_0xD07D5CD276368D36(0);
			}
			unk_0x271AA5469AF471B3();
			Global_17301.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17301.f_4639)
		{
			if (Global_17301.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xD07D5CD276368D36(iVar1);
					unk_0x7E099EB35339C80D(&(Global_17301.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xFD1DB5DD208735A3(iParam2, 70);
					}
					else
					{
						unk_0x6223D539BCD39E76(iParam2);
					}
					unk_0x9748595E4799A2CF();
					unk_0x271AA5469AF471B3();
				}
			}
			iVar1++;
		}
		if (Global_4265799.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xD07D5CD276368D36(iVar1);
				unk_0x7E099EB35339C80D(&(Global_4265799.f_16));
				if (bParam5)
				{
					unk_0xFD1DB5DD208735A3(iParam2, 70);
				}
				else
				{
					unk_0x6223D539BCD39E76(iParam2);
				}
				unk_0x9748595E4799A2CF();
				unk_0x271AA5469AF471B3();
			}
		}
		unk_0x73509F6FDA1DB386(76, 66);
		unk_0xE7C11B6F2CF973B6(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17301.f_7931)
			{
				unk_0x76F7AB2157E33DD9(15, 0f, -0,0375f);
				Global_17301.f_7931 = 1;
			}
		}
		else if (Global_17301.f_7931)
		{
			unk_0x3B235F54BDEDFCB5(15);
			Global_17301.f_7931 = 0;
		}
		unk_0x189EEBAACC5D380A();
		if (Global_17301.f_4925)
		{
			unk_0x73509F6FDA1DB386(82, 66);
			unk_0xE7C11B6F2CF973B6(0f, 0f, 0f, 0f);
			unk_0x0EB9853DF8BC0D87(Global_17301.f_5530[iVar0 /*10*/], Global_17301.f_4923, Global_17301.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x189EEBAACC5D380A();
		}
		else
		{
			unk_0x28E092B1E386EB67(Global_17301.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_89(char* sParam0)//Position - 0xA97F
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_90(char* sParam0)//Position - 0xA991
{
	unk_0x8686005F83E832AE(sParam0);
}

bool func_91(int iParam0, int iParam1)//Position - 0xA99F
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_92(-1, 0) == 8;
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

int func_92(int iParam0, bool bParam1)//Position - 0xA9EA
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_93();
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

int func_93()//Position - 0xAA2B
{
	return Global_1312736;
}

int func_94()//Position - 0xAA37
{
	vector3 vVar0;
	
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	if (func_95())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x494F5FA1BF017D58(&vVar0);
		if (Global_14398 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_95()//Position - 0xAAA5
{
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_96(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xAABF
{
	unk_0x31758B9A51671C43(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 50:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 51:
			*iParam5 = 100;
			break;
	}
}

void func_97(float fParam0)//Position - 0xAB92
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x31758B9A51671C43(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x8F5DFDE59FA7D0D0(0);
	unk_0x8D95497078BC0E3B(0f, 0,35f);
	unk_0x4E55BC7DE7AF6FFC(2);
	unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, iVar3);
	unk_0xEDC290CB1C56B732(fParam0, ((Global_17298 + Global_17300) - 0,0046875f));
	unk_0x0BC5BE26BB7006D2(0);
	unk_0x69A8FC5C344FD5BE(0, 0, 0, 0, 0);
	unk_0xC222AEE842F645C3(0, 0, 0, 0, 0);
}

void func_98(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xABF1
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x6223D539BCD39E76(iParam3);
	unk_0x6223D539BCD39E76(iParam4);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, 0);
}

float func_99(char* sParam0, int iParam1, int iParam2)//Position - 0xAC14
{
	if (!unk_0x8C1C362CA8299475(sParam0))
	{
		if (unk_0x8B948C59217A295D(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_100();
	unk_0x0792909D8327DAEA(sParam0);
	unk_0x6223D539BCD39E76(iParam1);
	unk_0x6223D539BCD39E76(iParam2);
	return unk_0xF2A1AF58CC57C564(1);
}

void func_100()//Position - 0xAC56
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x31758B9A51671C43(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17301.f_7906)
	{
		iVar0 = Global_17301.f_7902;
		iVar1 = Global_17301.f_7903;
		iVar2 = Global_17301.f_7904;
		iVar3 = Global_17301.f_7905;
	}
	unk_0x8F5DFDE59FA7D0D0(0);
	unk_0x8D95497078BC0E3B(0f, 0,35f);
	unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, iVar3);
	unk_0xEDC290CB1C56B732((Global_17298 + 0,0046875f), ((Global_17298 + Global_17300) - 0,0046875f));
	unk_0x0BC5BE26BB7006D2(0);
	unk_0x69A8FC5C344FD5BE(0, 0, 0, 0, 0);
	unk_0xC222AEE842F645C3(0, 0, 0, 0, 0);
}

void func_101(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xACE0
{
	unk_0x09C2CBFA4CD804AC((fParam0 + (fParam2 * 0,5f)), (fParam1 + (fParam3 * 0,5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_102(int iParam0, bool bParam1)//Position - 0xAD0F
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xAB019B170BF1309C(&(Global_17301.f_6719[iParam0 /*16*/])))
	{
		if (unk_0x8B948C59217A295D(&(Global_17301.f_6719[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_104(unk_0x9EB17624F44A8DA4()) };
			if (unk_0xE009D69C861D7648(&Var2, &uVar1))
			{
				return func_103(&uVar1);
			}
		}
		else
		{
			return func_103(&(Global_17301.f_6719[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_103(var uParam0)//Position - 0xB15F
{
	return uParam0;
}

struct<13> func_104(int iParam0)//Position - 0xB169
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

char* func_105(int iParam0)//Position - 0xB180
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xAB019B170BF1309C(&(Global_17301.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x8B948C59217A295D(&(Global_17301.f_5886[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_104(unk_0x9EB17624F44A8DA4()) };
			unk_0xE009D69C861D7648(&Var1, &uVar0);
			return func_103(&uVar0);
		}
		else
		{
			return func_103(&(Global_17301.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_106()//Position - 0xB1F5
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x5113D2C928A121B2(&iVar0, &iVar1);
	fVar2 = (system::to_float(iVar0) / system::to_float(iVar1));
	if (fVar2 > 3,5f)
	{
		return 1;
	}
	return 0;
}

int func_107(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xB227
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_105(iParam0), 64);
	StringCopy(&cVar1, func_102(iParam0, bParam1), 64);
	if (unk_0x8B948C59217A295D(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x5113D2C928A121B2(&iVar2, &iVar3);
			fVar5 = unk_0xB6936205ED728A9D(0);
			if (func_106())
			{
				iVar2 = system::round((system::to_float(iVar3) * fVar5));
			}
			fVar6 = (system::to_float(iVar2) / system::to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_106())
			{
				fVar4 = 1f;
			}
			if (unk_0x8F38E94BBF3404CD(joaat("director_mode")) > 0)
			{
				unk_0x9A72C8F89A53C2D1(&iVar2, &iVar3);
			}
			iVar2 = system::round((system::to_float(iVar2) / fVar4));
			iVar3 = system::round((system::to_float(iVar3) / fVar4));
		}
		else
		{
			unk_0x9A72C8F89A53C2D1(&iVar2, &iVar3);
		}
		vVar7 = { unk_0x62415D7FD7ADB9EE(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_108(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_108(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && unk_0x8B948C59217A295D(&(Global_17301.f_6719[29 /*16*/])) == -1487683087)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x41226DC6540EC9AA() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1,33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17300)
			{
				*fParam4 = (*fParam4 * (Global_17300 / *fParam3));
				*fParam3 = Global_17300;
			}
		}
		return 1;
	}
	return 0;
}

float func_108(int iParam0)//Position - 0xB3D8
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0,5f;
			break;
	}
	return 1f;
}

int func_109(bool bParam0, bool bParam1)//Position - 0xB477
{
	if (Global_2436181.f_1777.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x9F7B586A14398C40() || (func_111(8, -1) && func_110() != 64)) || (unk_0x8B7838D25C063186() != 0 && !bParam1)) || (unk_0x1E06D00B67177A18() && !bParam0)) || unk_0x9A4EAADB45DA07DB()) || Global_71116) || Global_17301.f_7930) || unk_0x08D525BE62A22AE0()) || Global_92885.f_1377)
	{
		return 0;
	}
	return 1;
}

int func_110()//Position - 0xB514
{
	return Global_1312789;
}

bool func_111(int iParam0, int iParam1)//Position - 0xB520
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

void func_112(int iParam0)//Position - 0xB55B
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_69678[iParam0] = 0;
	Global_69678.f_69[iParam0] = 0;
}

void func_113(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0xB580
{
	if (func_61(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 10))
		{
			func_115(iParam0);
			func_114(uParam1, &(Global_104555.f_32429.f_69[Global_69678.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 11))
			{
				Global_104555.f_32429.f_1864[Global_69678.f_555[0 /*21*/].f_14 /*3*/] = { vParam2 };
				Global_104555.f_32429.f_1934[Global_69678.f_555[0 /*21*/].f_14] = fParam3;
			}
			else
			{
				Global_104555.f_32429.f_1864[Global_69678.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_104555.f_32429.f_1934[Global_69678.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_104555.f_32429.f_1958[Global_69678.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_446(iParam0, 1);
		}
	}
}

void func_114(var uParam0, var uParam1)//Position - 0xB67F
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_115(int iParam0)//Position - 0xB74B
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_61(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_139[iParam0]))
		{
			unk_0xDD29FF4BAB8AFF9C(Global_69678.f_139[iParam0], true, 1);
			unk_0x5380482A432E314E(&(Global_69678.f_139[iParam0]));
			Global_69678.f_139[iParam0] = 0;
		}
		if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 13))
		{
			func_446(iParam0, 0);
		}
	}
}

int func_116(int iParam0)//Position - 0xB7C5
{
	switch (iParam0)
	{
		case joaat("marshall"):
			return 1;
			break;
	}
	return 0;
}

void func_117(int iParam0, char* sParam1, int iParam2)//Position - 0xB7E2
{
	char* sVar0;
	
	sVar0 = unk_0xC9C4B2A22DE54C69(2, iParam0, true);
	if (Global_17301.f_4639 >= 12)
	{
		StringCopy(&Global_4265799, sVar0, 64);
		StringCopy(&(Global_4265799.f_16), sParam1, 16);
		Global_4265799.f_20 = iParam2;
		return;
		return;
	}
	unk_0x0EE72DB1CD8A3B86(&(Global_17301.f_4922), Global_17301.f_4639);
	StringCopy(&(Global_17301.f_4641[Global_17301.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17301.f_4834[Global_17301.f_4639 /*4*/]), sParam1, 16);
	Global_17301.f_4883[Global_17301.f_4639] = iParam2;
	Global_17301.f_4896[Global_17301.f_4639] = iParam0;
	Global_17301.f_4909[Global_17301.f_4639] = 32;
	Global_17301.f_4639++;
}

void func_118(int iParam0)//Position - 0xB891
{
	int iVar0;
	int iVar1;
	
	Global_17301.f_4639 = 0;
	Global_17301.f_4640 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17301.f_4834[iVar0 /*4*/]), "", 16);
		Global_17301.f_4883[iVar0] = -1;
		Global_17301.f_4896[iVar0] = 358;
		Global_17301.f_4909[iVar0] = 32;
		iVar0++;
	}
	Global_17301.f_4922 = 0;
	StringCopy(&(Global_4265799.f_16), "", 16);
	Global_4265799.f_20 = -1;
	if (unk_0xB9D80B12FE4456A5())
	{
		if (!func_73(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0x1869584A8A72FEDD(false);
		unk_0x271AA5469AF471B3();
	}
}

void func_119(char* sParam0, int iParam1, int iParam2)//Position - 0xB939
{
	int iVar0;
	
	StringCopy(&(Global_17301.f_4562), sParam0, 16);
	Global_17301.f_4632 = 0;
	Global_17301.f_4633 = 0;
	Global_17301.f_4634 = 0;
	Global_17301.f_4635 = 0;
	Global_17301.f_4636 = iParam1;
	Global_17301.f_4637 = unk_0x53C562FD2B9E3AB0();
	Global_17301.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_4566[iVar0] = 0;
		iVar0++;
	}
}

int func_120()//Position - 0xB99E
{
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (Global_4265875 > -1)
		{
			if (unk_0x58F436C557A0FD7A(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_121(int iParam0, int iParam1, bool bParam2)//Position - 0xB9C5
{
	if (!unk_0x4C4813CAAD70E814(2))
	{
		return 0;
	}
	if (unk_0x0F30C1F1717A6437() || unk_0x08D525BE62A22AE0())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x15F5D3F996CB934F();
	}
	if (Global_4265875 == -6)
	{
		unk_0x045FE6847C82E3A6(4);
		if (iParam0 && unk_0xF2B58F79D29425B4(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4265875 = -1;
			return 0;
		}
	}
	if (((Global_4265875 > -1 || Global_4265875 == -3) || Global_4265875 == -2) || unk_0x1B3327E02DE17064())
	{
		unk_0x045FE6847C82E3A6(1);
		return 0;
	}
	if (Global_4265875 == -1 && iParam0)
	{
		if (unk_0xF2B58F79D29425B4(2, 237))
		{
			unk_0x045FE6847C82E3A6(4);
			Global_4265875 = -6;
			return 1;
		}
		else
		{
			unk_0x045FE6847C82E3A6(3);
			return 0;
		}
	}
	unk_0x045FE6847C82E3A6(1);
	return 0;
}

void func_122(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xBAA5
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0,034722f / 2f);
	iVar13 = -1;
	if (!unk_0x4C4813CAAD70E814(2))
	{
		Global_4265875 = -1;
		return;
	}
	unk_0x1791FD56B0FECC40(1);
	fVar0 = Global_17298;
	fVar2 = (fVar0 + Global_17300);
	fVar3 = Global_17301.f_5600;
	fVar1 = (Global_17301.f_5600 - (IntToFloat(Global_17301.f_5602) * 0,034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0,034722f);
		fVar1 = (fVar1 + 0,034722f);
	}
	if (Global_17301.f_5602 < 1)
	{
		fVar1 = (Global_17301.f_5600 - 0,034722f);
	}
	unk_0x73509F6FDA1DB386(76, 84);
	unk_0xE7C11B6F2CF973B6(-0,05f, -0,05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xB3BC3A562B00E8B9(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xB3BC3A562B00E8B9(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x189EEBAACC5D380A();
	func_124();
	if (Global_4265875 == -6)
	{
		return;
	}
	Global_4265875 = -1;
	fVar7 = Global_4265869;
	fVar8 = Global_4265870;
	if (Global_17301.f_5603 > Global_17301.f_5602)
	{
		if (((Global_4265869 >= fVar0 && Global_4265869 <= fVar2) && Global_4265870 >= fVar3) && Global_4265870 < (fVar3 + fVar6))
		{
			Global_4265875 = -2;
			if (bParam3)
			{
				func_123(0);
			}
			return;
		}
		if (((Global_4265869 >= fVar0 && Global_4265869 <= fVar2) && Global_4265870 >= (fVar3 + fVar6)) && Global_4265870 < (fVar3 + 0,034722f))
		{
			Global_4265875 = -3;
			if (bParam3)
			{
				func_123(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = system::floor((fVar9 / 0,034722f));
		if (Global_17301.f_5603 == -1)
		{
			Global_4265875 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17301.f_5602);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x73509F6FDA1DB386(76, 84);
				unk_0xE7C11B6F2CF973B6(-0,05f, -0,05f, 0f, 0f);
				func_101(fVar4, (fVar5 + (IntToFloat(iVar13) * 0,034722f)), Global_17300, (0,034722f - 0,0015f), 255, 255, 255, iVar10);
				unk_0x189EEBAACC5D380A();
			}
		}
		Global_4265875 = Global_17301.f_7552[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4265875 = -4;
			return;
		}
		if (fVar8 > 0,9f)
		{
			Global_4265875 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0,25f))
	{
		Global_4265875 = -4;
		return;
	}
	Global_4265875 = -1;
}

void func_123(bool bParam0)//Position - 0xBD51
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0,034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17298;
	fVar1 = Global_17301.f_5600;
	unk_0x73509F6FDA1DB386(76, 84);
	unk_0xE7C11B6F2CF973B6(-0,05f, -0,05f, 0f, 0f);
	if (Global_4265875 == -2)
	{
		func_101(fVar0, fVar1, Global_17300, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4265875 == -3)
	{
		func_101(fVar0, (fVar1 + fVar2), Global_17300, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x189EEBAACC5D380A();
}

void func_124()//Position - 0xBDDA
{
	Global_4265871 = Global_4265869;
	Global_4265872 = Global_4265870;
	Global_4265869 = unk_0x84326F8D8D6875EC(2, 239);
	Global_4265870 = unk_0x84326F8D8D6875EC(2, 240);
	Global_4265873 = (Global_4265869 - Global_4265871);
	Global_4265874 = (Global_4265870 - Global_4265872);
}

void func_125(int iParam0, bool bParam1, int iParam2)//Position - 0xBE22
{
	int iVar0;
	int iVar1;
	
	Global_17301.f_5606 = iParam0;
	Global_17301.f_5741 = iParam2;
	if (Global_17301.f_5606 < Global_17301.f_5605)
	{
		Global_17301.f_5605 = Global_17301.f_5606;
	}
	else if ((Global_17301.f_5599 && Global_17301.f_5606 > Global_17301.f_5607) || (!Global_17301.f_5599 && Global_17301.f_5606 >= (Global_17301.f_5605 + Global_17301.f_5095)))
	{
		iVar0 = Global_17301.f_5605;
		while (iVar0 <= Global_17301.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17301.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17301.f_5095 && Global_17301.f_5605 < 128)
		{
			Global_17301.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17301.f_5605;
			while (iVar0 <= Global_17301.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17301.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17301.f_5598 = 0;
	Global_17301.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17301.f_4562), "", 16);
		StringCopy(&(Global_4265799.f_21), "", 16);
	}
}

void func_126(char* sParam0, bool bParam1)//Position - 0xBF72
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_17301.f_5090 >= 256)
	{
		return;
	}
	if (Global_17301.f_5610 >= 4)
	{
		return;
	}
	if (Global_17301.f_5611 != 1)
	{
		return;
	}
	if (Global_17301.f_5610 >= Global_17301.f_5608)
	{
		return;
	}
	StringCopy(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]), sParam0, 24);
	Global_17301.f_5090++;
	Global_17301.f_2124[Global_17301.f_5609 /*5*/][Global_17301.f_5610] = 1;
	Global_17301.f_5610++;
	if (Global_17301.f_5610 >= Global_17301.f_5608)
	{
		fVar0 = func_128();
		if (Global_17301.f_4945[Global_17301.f_5089] && Global_17301.f_5610 == Global_17301.f_5608)
		{
			func_107(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17301.f_4938[(Global_17301.f_5089 - 1)])
		{
			Global_17301.f_4938[(Global_17301.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17301.f_5610 >= Global_17301.f_5608)
		{
			fVar3 = func_127();
			if (fVar3 > Global_17301.f_5612[Global_17301.f_5088])
			{
				Global_17301.f_5612[Global_17301.f_5088] = fVar3;
			}
		}
	}
}

float func_127()//Position - 0xC0AF
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17301.f_5610)
	{
		if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17301.f_4433[((Global_17301.f_5094 - iVar1) + iVar0)] != 0)
		{
			if (func_107(Global_17301.f_4433[((Global_17301.f_5094 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0xAF6F79C616D36B6E(0,35f, 0))
	{
		return fVar2;
	}
	return unk_0xAF6F79C616D36B6E(0,35f, 0);
}

float func_128()//Position - 0xC162
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_17301.f_5610)
	{
		if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_86(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x8B948C59217A295D(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
	{
		unk_0x0792909D8327DAEA(&(Global_17301.f_73[Global_17301.f_5609 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17301.f_5610)
	{
		if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x8B948C59217A295D(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0xA6D2B267C377D7B2(&(Global_17301.f_73[(Global_17301.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x8B948C59217A295D(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0xA6D2B267C377D7B2(&(Global_17301.f_73[(Global_17301.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 2)
		{
			if (unk_0x8B948C59217A295D(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0x6223D539BCD39E76(Global_17301.f_3918[((Global_17301.f_5092 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 3)
		{
			if (unk_0x8B948C59217A295D(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0x32AD2F36F6EF5A1F(Global_17301.f_4175[((Global_17301.f_5093 - iVar4) + iVar10)], Global_17301.f_4304[((Global_17301.f_5093 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 5)
		{
			if (unk_0x8B948C59217A295D(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0x854FACC4E5F40C82(&(Global_2457366[((Global_17301.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 6)
		{
			if (unk_0x8B948C59217A295D(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0xA6D2B267C377D7B2(&(Global_2457366[((Global_17301.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 7)
		{
			if (unk_0x8B948C59217A295D(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0x854FACC4E5F40C82(&(Global_2457366[((Global_17301.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 9)
		{
			if (unk_0x8B948C59217A295D(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0x854FACC4E5F40C82(&(Global_2457366[((Global_17301.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x8B948C59217A295D(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
	{
		fVar0 = unk_0xF2A1AF58CC57C564(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17301.f_4433[((Global_17301.f_5094 - iVar5) + iVar7)] != 0)
		{
			func_107(Global_17301.f_4433[((Global_17301.f_5094 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

char* func_129(int iParam0)//Position - 0xC5A9
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return "";
	}
	if (iParam0 == 8)
	{
		return "";
	}
	iVar0 = func_130(iParam0, -1);
	if (iVar0 == 0)
	{
		return "";
	}
	switch (iParam0)
	{
		case 31:
			return "SUBMERSIBLE";
		
		case 68:
			return "SANCHEZ";
		
		case 105:
			return "REBEL";
		
		case 107:
			return "SANCHEZ2";
		
		case 117:
			return "COQUETTE_TLESS";
		
		case 118:
			return "BANSHEE_TLESS";
		
		case 119:
			return "STINGER_TLESS";
		
		case 120:
			return "VOLTIC_HTOP";
		
		case 154:
			return "BLAZER3";
		
		case 155:
			return "REBEL2";
		
		case 158:
			return "BUFFALO2";
		
		case 159:
			return "TAILGATER";
		
		case 166:
			return "COQUETTE2_TLESS";
		
		case 170:
			return "KALAHARI_TLESS";
		
		case 171:
			return "BOXVILLE4";
		
		case 173:
			return "DINGHY3";
		
		case 183:
			return "MULE3";
		
		case 191:
			return "LANDSTALKER";
		
		case 192:
			return "MESA3";
		
		case 194:
			return "ORACLE1";
		
		case 196:
			return "SCHAFTER2";
		
		case 207:
			return "DOMINATOR2";
		
		case 245:
			return "BIG_YACHT";
		
		case 254:
			return "CARGOBOB2";
		
		case 323:
			return "BIG_TRUCK";
		
		case 324:
			return "BALLISTIC";
		
		case 357:
			return "BIG_PLANE";
		
		default:
	}
	return unk_0x8C8DF9FA5116BB9A(iVar0);
}

int func_130(int iParam0, int iParam1)//Position - 0xC74B
{
	switch (iParam0)
	{
		case 0:
			return joaat("ztype");
		
		case 1:
			return joaat("stinger");
		
		case 2:
			return joaat("jb700");
		
		case 3:
			return joaat("cheetah");
		
		case 4:
			return joaat("entityxf");
		
		case 5:
			return joaat("adder");
		
		case 6:
			return joaat("monroe");
		
		case 7:
			return joaat("cogcabrio");
		
		case 10:
			return joaat("shamal");
		
		case 11:
			return joaat("stunt");
		
		case 12:
			return joaat("cuban800");
		
		case 13:
			return joaat("duster");
		
		case 14:
			return joaat("luxor");
		
		case 15:
			return joaat("frogger");
		
		case 16:
			return joaat("maverick");
		
		case 17:
			return joaat("rhino");
		
		case 18:
			return joaat("titan");
		
		case 19:
			return joaat("cargobob");
		
		case 20:
			return joaat("buzzard");
		
		case 21:
			return joaat("crusader");
		
		case 22:
			return joaat("barracks");
		
		case 24:
			return joaat("marquis");
		
		case 25:
			return joaat("jetmax");
		
		case 27:
			return joaat("squalo");
		
		case 29:
			return joaat("tropic");
		
		case 30:
			return joaat("seashark");
		
		case 31:
			return joaat("submersible");
		
		case 32:
			return joaat("suntrap");
		
		case 258:
			return joaat("tug");
		
		case 33:
			return joaat("bmx");
		
		case 34:
			return joaat("scorcher");
		
		case 35:
			return joaat("tribike");
		
		case 36:
			return joaat("tribike2");
		
		case 37:
			return joaat("tribike3");
		
		case 38:
			return joaat("cruiser");
		
		case 39:
			return joaat("schwarzer");
		
		case 40:
			return joaat("zion");
		
		case 41:
			return joaat("gauntlet");
		
		case 42:
			return joaat("vigero");
		
		case 43:
			return joaat("issi2");
		
		case 44:
			return joaat("infernus");
		
		case 45:
			return joaat("surano");
		
		case 46:
			return joaat("vacca");
		
		case 47:
			return joaat("ninef");
		
		case 48:
			return joaat("comet2");
		
		case 49:
			return joaat("banshee");
		
		case 50:
			return joaat("feltzer2");
		
		case 51:
			return joaat("bfinjection");
		
		case 52:
			return joaat("sandking");
		
		case 53:
			return joaat("fugitive");
		
		case 54:
			return joaat("dilettante");
		
		case 55:
			return joaat("superd");
		
		case 56:
			return joaat("exemplar");
		
		case 57:
			return joaat("baller2");
		
		case 58:
			return joaat("cavalcade");
		
		case 59:
			return joaat("rocoto");
		
		case 60:
			return joaat("felon");
		
		case 61:
			return joaat("oracle2");
		
		case 62:
			return joaat("bati");
		
		case 63:
			return joaat("akuma");
		
		case 64:
			return joaat("ruffian");
		
		case 65:
			return joaat("vader");
		
		case 66:
			return joaat("blazer");
		
		case 67:
			return joaat("pcj");
		
		case 68:
			return joaat("sanchez");
		
		case 69:
			return joaat("faggio2");
		
		case 70:
			return joaat("bullet");
		
		case 71:
			return joaat("carbonizzare");
		
		case 72:
			return joaat("coquette");
		
		case 73:
			return joaat("ninef2");
		
		case 74:
			return joaat("rapidgt");
		
		case 75:
			return joaat("rapidgt2");
		
		case 76:
			return joaat("stingergt");
		
		case 77:
			return joaat("voltic");
		
		case 78:
			return joaat("annihilator");
		
		case 79:
			return joaat("mammatus");
		
		case 80:
			return joaat("velum");
		
		case 81:
			return joaat("dump");
		
		case 82:
			return joaat("airbus");
		
		case 83:
			return joaat("bus");
		
		case 84:
			return joaat("coach");
		
		case 85:
			return joaat("journey");
		
		case 86:
			return joaat("mule");
		
		case 87:
			return joaat("rentalbus");
		
		case 88:
			return joaat("stretch");
		
		case 89:
			return joaat("bison");
		
		case 90:
			return joaat("double");
		
		case 91:
			return joaat("felon2");
		
		case 92:
			return joaat("hexer");
		
		case 93:
			return joaat("zion2");
		
		case 94:
			return joaat("bati2");
		
		case 95:
			return joaat("elegy2");
		
		case 96:
			return joaat("khamelion");
		
		case 97:
			return joaat("hotknife");
		
		case 98:
			return joaat("carbonrs");
		
		default:
	}
	switch (iParam0)
	{
		case 99:
			return joaat("bifta");
		
		case 100:
			return joaat("kalahari");
		
		case 101:
			return joaat("paradise");
		
		case 102:
			return joaat("speeder");
		
		case 103:
			return joaat("bodhi2");
		
		case 104:
			return joaat("dune");
		
		case 105:
			return joaat("rebel");
		
		case 106:
			return joaat("sadler");
		
		case 107:
			return joaat("sanchez2");
		
		case 108:
			return joaat("sandking2");
		
		case 109:
			return joaat("btype");
		
		case 111:
			return joaat("jester");
		
		case 114:
			return joaat("massacro");
		
		case 112:
			return joaat("turismor");
		
		case 115:
			return joaat("zentorno");
		
		case 116:
			return joaat("huntley");
		
		case 110:
			return joaat("alpha");
		
		case 113:
			return joaat("vestra");
		
		case 117:
			return joaat("coquette");
		
		case 118:
			return joaat("banshee");
		
		case 119:
			return joaat("stinger");
		
		case 120:
			return joaat("voltic");
		
		case 121:
			return joaat("thrust");
		
		case 128:
			return joaat("asea");
		
		case 129:
			return joaat("asterope");
		
		case 130:
			return joaat("bobcatxl");
		
		case 131:
			return joaat("cavalcade2");
		
		case 132:
			return joaat("granger");
		
		case 133:
			return joaat("ingot");
		
		case 134:
			return joaat("intruder");
		
		case 135:
			return joaat("minivan");
		
		case 136:
			return joaat("premier");
		
		case 137:
			return joaat("radi");
		
		case 138:
			return joaat("rancherxl");
		
		case 139:
			return joaat("ratloader");
		
		case 140:
			return joaat("stanier");
		
		case 141:
			return joaat("stratum");
		
		case 142:
			return joaat("washington");
		
		case 122:
			return joaat("dominator");
		
		case 123:
			return joaat("f620");
		
		case 124:
			return joaat("fusilade");
		
		case 125:
			return joaat("penumbra");
		
		case 126:
			return joaat("sentinel");
		
		case 127:
			return joaat("sentinel2");
		
		default:
	}
	switch (iParam0)
	{
		case 143:
			return joaat("blade");
		
		case 144:
			return joaat("warrener");
		
		case 145:
			return joaat("glendale");
		
		case 146:
			return joaat("rhapsody");
		
		case 147:
			return joaat("panto");
		
		case 148:
			return joaat("dubsta3");
		
		case 149:
			return joaat("pigalle");
		
		case 150:
			return joaat("picador");
		
		case 151:
			return joaat("regina");
		
		case 152:
			return joaat("surfer");
		
		case 153:
			return joaat("youga");
		
		case 154:
			return joaat("blazer3");
		
		case 155:
			return joaat("rebel2");
		
		case 156:
			return joaat("primo");
		
		case 157:
			return joaat("buffalo");
		
		case 158:
			return joaat("buffalo2");
		
		case 159:
			return joaat("tailgater");
		
		case 160:
			return joaat("monster");
		
		case 161:
			return joaat("sovereign");
		
		case 162:
			return joaat("miljet");
		
		case 163:
			return joaat("besra");
		
		case 164:
			return joaat("swift");
		
		case 165:
			return joaat("coquette2");
		
		case 166:
			return joaat("coquette2");
		
		case 167:
			return joaat("innovation");
		
		case 168:
			return joaat("hakuchou");
		
		case 169:
			return joaat("furoregt");
		
		case 170:
			return joaat("kalahari");
		
		case 187:
			return joaat("valkyrie");
		
		case 177:
			return joaat("hydra");
		
		case 185:
			return joaat("savage");
		
		case 174:
			return joaat("enduro");
		
		case 171:
			return joaat("boxville4");
		
		case 172:
			return joaat("casco");
		
		case 173:
			return joaat("dinghy3");
		
		case 175:
			return joaat("gburrito2");
		
		case 176:
			return joaat("guardian");
		
		case 178:
			return joaat("insurgent");
		
		case 179:
			return joaat("insurgent2");
		
		case 183:
			return joaat("mule3");
		
		case 180:
			return joaat("kuruma");
		
		case 181:
			return joaat("kuruma2");
		
		case 182:
			return joaat("lectro");
		
		case 184:
			return joaat("pbus");
		
		case 186:
			return joaat("technical");
		
		case 188:
			return joaat("velum2");
		
		case 189:
			return joaat("gresley");
		
		case 190:
			return joaat("jackal");
		
		case 191:
			return joaat("landstalker");
		
		case 192:
			return joaat("mesa3");
		
		case 193:
			return joaat("nemesis");
		
		case 194:
			return joaat("oracle");
		
		case 195:
			return joaat("rumpo");
		
		case 196:
			return joaat("schafter2");
		
		case 197:
			return joaat("seminole");
		
		case 198:
			return joaat("surge");
		
		case 199:
			return joaat("dodo");
		
		case 200:
			return joaat("marshall");
		
		case 201:
			return joaat("submersible2");
		
		case 202:
			return joaat("blista2");
		
		case 203:
			return joaat("stalion");
		
		case 204:
			return joaat("dukes");
		
		case 205:
			return joaat("dukes2");
		
		case 206:
			return joaat("stalion2");
		
		case 207:
			return joaat("dominator2");
		
		case 208:
			return joaat("gauntlet2");
		
		case 209:
			return joaat("buffalo3");
		
		case 210:
			return joaat("slamvan");
		
		case 211:
			return joaat("ratloader2");
		
		case 212:
			return joaat("jester2");
		
		case 213:
			return joaat("massacro2");
		
		case 214:
			return joaat("feltzer3");
		
		case 215:
			return joaat("luxor2");
		
		case 216:
			return joaat("osiris");
		
		case 217:
			return joaat("swift2");
		
		case 218:
			return joaat("virgo");
		
		case 219:
			return joaat("windsor");
		
		case 220:
			return joaat("brawler");
		
		case 221:
			return joaat("chino");
		
		case 222:
			return joaat("coquette3");
		
		case 223:
			return joaat("t20");
		
		case 224:
			return joaat("toro");
		
		case 225:
			return joaat("vindicator");
		
		case 229:
			return joaat("primo");
		
		case 228:
			return joaat("moonbeam");
		
		case 227:
			return joaat("faction");
		
		case 226:
			return joaat("buccaneer");
		
		case 230:
			return joaat("voodoo2");
		
		case 263:
			if (iParam1 == 0)
			{
				return joaat("xls");
			}
			else if (iParam1 == 1)
			{
				return joaat("xls2");
			}
			else
			{
				return joaat("xls");
			}
			break;
		
		case 264:
			return joaat("seven70");
		
		case 259:
			return joaat("windsor2");
		
		case 260:
			return joaat("prototipo");
		
		case 261:
			return joaat("fmj");
		
		case 262:
			return joaat("bestiagts");
		
		case 265:
			return joaat("pfister811");
		
		case 266:
			return joaat("reaper");
		
		case 231:
			return joaat("btype2");
		
		case 232:
			return joaat("lurcher");
		
		case 233:
			if (iParam1 == 0)
			{
				return joaat("baller3");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller5");
			}
			else
			{
				return joaat("baller3");
			}
			break;
		
		case 234:
			if (iParam1 == 0)
			{
				return joaat("baller4");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller6");
			}
			else
			{
				return joaat("baller4");
			}
			break;
		
		case 235:
			if (iParam1 == 0)
			{
				return joaat("cog55");
			}
			else if (iParam1 == 1)
			{
				return joaat("cog552");
			}
			else
			{
				return joaat("cog55");
			}
			break;
		
		case 236:
			if (iParam1 == 0)
			{
				return joaat("cognoscenti");
			}
			else if (iParam1 == 1)
			{
				return joaat("cognoscenti2");
			}
			else
			{
				return joaat("cognoscenti");
			}
			break;
		
		case 237:
			return joaat("limo2");
		
		case 238:
			return joaat("mamba");
		
		case 239:
			return joaat("nightshade");
		
		case 240:
			if (iParam1 == 0)
			{
				return joaat("schafter3");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter5");
			}
			else
			{
				return joaat("schafter3");
			}
			break;
		
		case 241:
			if (iParam1 == 0)
			{
				return joaat("schafter4");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter6");
			}
			else
			{
				return joaat("schafter4");
			}
			break;
		
		case 242:
			return joaat("verlierer2");
		
		case 243:
			return joaat("supervolito");
		
		case 244:
			return joaat("supervolito2");
		
		case 245:
			return Global_68195;
		
		case 251:
			return joaat("virgo3");
		
		case 250:
			return joaat("tornado");
		
		case 249:
			return joaat("sabregt");
		
		case 252:
			return joaat("faction");
		
		case 246:
			return joaat("tampa");
		
		case 247:
			return joaat("sultan");
		
		case 49:
			return joaat("banshee");
		
		case 248:
			return joaat("btype3");
		
		case 253:
			return joaat("volatus");
		
		case 254:
			return joaat("cargobob2");
		
		case 255:
			return joaat("rumpo3");
		
		case 256:
			return joaat("brickade");
		
		case 257:
			return joaat("nimbus");
		
		case 267:
			return joaat("le7b");
		
		case 268:
			return joaat("omnis");
		
		case 269:
			return joaat("tropos");
		
		case 270:
			return joaat("brioso");
		
		case 271:
			return joaat("trophytruck");
		
		case 272:
			return joaat("trophytruck2");
		
		case 273:
			return joaat("contender");
		
		case 274:
			return joaat("cliffhanger");
		
		case 275:
			return joaat("bf400");
		
		case 279:
			return joaat("tyrus");
		
		case 280:
			return joaat("lynx");
		
		case 281:
			return joaat("sheava");
		
		case 276:
			return joaat("rallytruck");
		
		case 277:
			return joaat("tampa2");
		
		case 278:
			return joaat("gargoyle");
		
		case 282:
			return joaat("bagger");
		
		case 283:
			return joaat("esskey");
		
		case 284:
			return joaat("nightblade");
		
		case 285:
			return joaat("defiler");
		
		case 286:
			return joaat("avarus");
		
		case 287:
			return joaat("zombiea");
		
		case 288:
			return joaat("zombieb");
		
		case 289:
			return joaat("chimera");
		
		case 290:
			return joaat("daemon2");
		
		case 291:
			return joaat("ratbike");
		
		case 292:
			return joaat("shotaro");
		
		case 293:
			return joaat("raptor");
		
		case 294:
			return joaat("hakuchou2");
		
		case 296:
			return joaat("blazer4");
		
		case 297:
			return joaat("sanctus");
		
		case 295:
			return joaat("vortex");
		
		case 298:
			return joaat("manchez");
		
		case 299:
			return joaat("tornado6");
		
		case 300:
			return joaat("youga2");
		
		case 301:
			return joaat("wolfsbane");
		
		case 302:
			return joaat("faggio3");
		
		case 303:
			return joaat("faggio");
		
		case 304:
			return joaat("dune5");
		
		case 305:
			return joaat("phantom2");
		
		case 306:
			return joaat("technical2");
		
		case 307:
			return joaat("blazer5");
		
		case 308:
			return joaat("boxville5");
		
		case 309:
			return joaat("wastelander");
		
		case 310:
			return joaat("ruiner2");
		
		case 311:
			return joaat("voltic2");
		
		case 312:
			return joaat("penetrator");
		
		case 313:
			return joaat("tempesta");
		
		case 314:
			return joaat("italigtb");
		
		case 315:
			return joaat("nero");
		
		case 316:
			return joaat("diablous");
		
		case 317:
			return joaat("fcr");
		
		case 318:
			return joaat("specter");
		
		case 319:
			return 1234311532;
		
		case 320:
			return -1405937764;
		
		case 321:
			return 719660200;
		
		case 322:
			return -982130927;
	}
	switch (iParam0)
	{
		case 323:
			return Global_68196;
		
		case 324:
			return Global_68197;
		
		case 325:
			return 223240013;
		
		case 326:
			return 1504306544;
		
		case 327:
			return 1939284556;
		
		case 328:
			return 917809321;
		
		case 329:
			return 562680400;
		
		case 330:
			return 1897744184;
		
		case 331:
			return -32236122;
		
		case 332:
			return 884483972;
		
		case 333:
			return -1210451983;
		
		case 334:
			return -1881846085;
		
		case 335:
			return 159274291;
		
		case 336:
			return 433954513;
		
		case 337:
			return joaat("lazer");
		
		case 338:
			return -1763555241;
		
		case 339:
			return -749299473;
		
		case 340:
			return -975345305;
		
		case 341:
			return -1700874274;
		
		case 342:
			return -392675425;
		
		case 343:
			return 1043222410;
		
		case 344:
			return -1386191424;
		
		case 345:
			return 1565978651;
		
		case 346:
			return 1036591958;
		
		case 347:
			return -32878452;
		
		case 348:
			return -42959138;
		
		case 349:
			return -1984275979;
		
		case 350:
			return -1007528109;
		
		case 351:
			return -1523619738;
		
		case 352:
			return 1392481335;
		
		case 353:
			return -998177792;
		
		case 354:
			return 1841130506;
		
		case 355:
			return 2049897956;
		
		case 356:
			return -1242608589;
		
		case 357:
			return Global_68198;
		
		case 358:
			return 1483171323;
		
		case 359:
			return 886810209;
		
		case 360:
			return -1693015116;
		
		case 361:
			return -692292317;
		
		case 362:
			return -1435527158;
		
		case 363:
			return 1181327175;
		
		case 364:
			return 1489874736;
		
		case 365:
			return -212993243;
		
		case 366:
			return 447548909;
		
		case 367:
			return 1561920505;
		
		case 368:
			return -1848994066;
		
		case 369:
			return 1741861769;
		
		case 370:
			return 1104234922;
		
		case 371:
			return 1871995513;
		
		case 372:
			return 1352136073;
		
		case 373:
			return -313185164;
		
		case 374:
			return -2079788230;
		
		case 375:
			return 600450546;
		
		case 376:
			return -410205223;
		
		case 377:
			return 867799010;
		
		case 378:
			return -1529242755;
		
		case 379:
			return 903794909;
		
		case 380:
			return -1532697517;
		
		case 381:
			return 15219735;
		
		case 382:
			return 661493923;
		
		case 383:
			return 838982985;
		
		case 384:
			return -391595372;
		
		case 385:
			return -121446169;
		
		case 386:
			return 1909189272;
		
		case 387:
			return 1617472902;
		
		case 388:
			return -1267543371;
		
		case 389:
			return 931280609;
		
		case 390:
			return 1046206681;
		
		case 391:
			return -1259134696;
		
		case 392:
			return 1115909093;
		
		case 393:
			return 1031562256;
		
		case 394:
			return -376434238;
		
		case 395:
			return -986944621;
		
		case 396:
			return -1134706562;
		
		case 397:
			return -2120700196;
		
		case 398:
			return -214906006;
		
		case 399:
			return -988501280;
		
		case 400:
			return 1254014755;
		
		case 401:
			return -726768679;
		
		default:
	}
	return 0;
}

void func_131(int iParam0, int iParam1, bool bParam2)//Position - 0xDE2F
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_17301.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17301.f_5088 >= 128)
	{
		return;
	}
	if (Global_17301.f_5094 >= 128)
	{
		return;
	}
	if (Global_17301.f_5610 < Global_17301.f_5608)
	{
		return;
	}
	if (Global_17301.f_5088 != iParam0)
	{
		Global_17301.f_5088 = iParam0;
		Global_17301.f_5089 = 0;
	}
	iVar0 = Global_17301.f_4926[Global_17301.f_5089];
	if (iVar0 != 4)
	{
		while (Global_17301.f_5089 < 4 && iVar0 != 4)
		{
			Global_17301.f_5089++;
			iVar0 = Global_17301.f_4926[Global_17301.f_5089];
		}
		if (iVar0 != 4)
		{
			return;
		}
	}
	Global_17301.f_4433[Global_17301.f_5094] = iParam1;
	Global_17301.f_5094++;
	if (iParam1 != 0)
	{
		func_107(iParam1, 1, 0, &fVar1, &fVar2, 0);
		if (Global_17301.f_4945[Global_17301.f_5089])
		{
			func_107(26, 1, 0, &fVar3, &fVar4, 0);
			fVar1 = (fVar1 + (fVar3 * 2f));
		}
		if (fVar1 > Global_17301.f_4938[Global_17301.f_5089])
		{
			Global_17301.f_4938[Global_17301.f_5089] = fVar1;
		}
		if (bParam2)
		{
			if (fVar2 > Global_17301.f_5612[iParam0])
			{
				Global_17301.f_5612[iParam0] = fVar2;
			}
		}
	}
	unk_0x872F1C1F8587CCC7(&(Global_17301.f_4959[iParam0]), Global_17301.f_5089);
	Global_17301.f_5089++;
	Global_17301.f_5611 = 4;
}

void func_132(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0xDFA9
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17301.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17301.f_5088 >= 128)
	{
		return;
	}
	if (Global_17301.f_5090 >= 256)
	{
		return;
	}
	if (Global_17301.f_5610 < Global_17301.f_5608)
	{
		return;
	}
	if (Global_17301.f_5088 != iParam0)
	{
		Global_17301.f_5088 = iParam0;
		Global_17301.f_5089 = 0;
	}
	iVar0 = Global_17301.f_4926[Global_17301.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17301.f_5089 < 4 && iVar0 != 1)
		{
			Global_17301.f_5089++;
			iVar0 = Global_17301.f_4926[Global_17301.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0xAB019B170BF1309C(sParam1) && !unk_0xA1800C71952C596F(sParam1))
	{
	}
	Global_17301.f_1610[Global_17301.f_5090] = bParam3;
	Global_17301.f_1867[Global_17301.f_5090] = iParam4;
	Global_17301.f_5090++;
	if (!bParam3)
	{
		func_135(Global_17301.f_5088, 1);
	}
	else
	{
		func_135(Global_17301.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_134(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]));
		if (Global_17301.f_4945[Global_17301.f_5089])
		{
			func_107(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17301.f_4938[Global_17301.f_5089])
		{
			Global_17301.f_4938[Global_17301.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_133(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]));
			if (fVar4 > Global_17301.f_5612[iParam0])
			{
				Global_17301.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0x872F1C1F8587CCC7(&(Global_17301.f_4959[iParam0]), Global_17301.f_5089);
	Global_17301.f_5089++;
	Global_17301.f_5611 = 1;
	Global_17301.f_5609 = (Global_17301.f_5090 - 1);
	Global_17301.f_5610 = 0;
	Global_17301.f_5608 = iParam2;
}

float func_133(char* sParam0)//Position - 0xE1B5
{
	if (!unk_0xA1800C71952C596F(sParam0))
	{
	}
	return unk_0xAF6F79C616D36B6E(0,35f, 0);
}

float func_134(char* sParam0)//Position - 0xE1D1
{
	if (!unk_0x8C1C362CA8299475(sParam0))
	{
		if (unk_0x8B948C59217A295D(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_86(0, 1, 0, 0, 0, 0, 0);
	unk_0x0792909D8327DAEA(sParam0);
	return unk_0xF2A1AF58CC57C564(1);
}

void func_135(int iParam0, bool bParam1)//Position - 0xE20E
{
	int iVar0;
	
	iVar0 = system::floor((system::to_float(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_17301.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_17301.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_136(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4)//Position - 0xE25A
{
	float fVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	int iVar14;
	char* sVar15;
	int iVar16;
	var uVar17;
	var uVar18;
	int iVar19;
	char* sVar20;
	int iVar21;
	var uVar22;
	var uVar23;
	
	uParam1->f_66 = func_130(iParam0, iParam4);
	if (uParam1->f_66 == 0)
	{
		if (bParam2)
		{
		}
		return;
	}
	if (iParam3 == 2 && uParam1->f_66 == joaat("frogger"))
	{
		uParam1->f_66 = joaat("frogger2");
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_67 = 1;
		return;
	}
	uParam1->f_77 = 0;
	func_177(iParam0, &(uParam1->f_77));
	uParam1->f_9[16] = 0;
	if ((iParam0 == 181 || iParam0 == 178) || iParam0 == 179)
	{
		uParam1->f_9[16] = 4;
	}
	else if (func_176(iParam0))
	{
		if (Global_69652)
		{
			uParam1->f_9[16] = 4;
		}
	}
	uParam1->f_9[23] = 0;
	if (iParam0 == 218)
	{
		uParam1->f_9[23] = 7;
	}
	*uParam1 = 0;
	if (iParam0 == 360)
	{
		*uParam1 = 4;
	}
	uParam1->f_9[48] = 0;
	uParam1->f_99 = 0;
	if (iParam0 == 251)
	{
		uParam1->f_99 = 4;
	}
	uParam1->f_65 = 0;
	if (iParam0 == 263)
	{
		if (Global_69652)
		{
			uParam1->f_65 = 1;
		}
	}
	uParam1->f_9[0] = 0;
	if (((((iParam0 == 320 || iParam0 == 321) || iParam0 == 322) || iParam0 == 327) || iParam0 == 382) || iParam0 == 391)
	{
		uParam1->f_9[0] = 1;
	}
	if (((((iParam0 == 329 || iParam0 == 330) || iParam0 == 331) || iParam0 == 334) || iParam0 == 332) || iParam0 == 333)
	{
		uParam1->f_9[10] = 0;
	}
	if (func_175(uParam1->f_66, &fVar0) && uParam1->f_80 != fVar0)
	{
		uParam1->f_80 = fVar0;
	}
	if (bParam2)
	{
		iVar1 = Global_69651;
	}
	else if (iParam3 == 0)
	{
		iVar1 = Global_104555.f_25152.f_313[iParam0];
	}
	else if (iParam3 == 1)
	{
		iVar1 = Global_104555.f_25152.f_626[iParam0];
	}
	else if (iParam3 == 2)
	{
		iVar1 = Global_104555.f_25152.f_939[iParam0];
	}
	uParam1->f_5 = 0;
	uParam1->f_6 = 0;
	uParam1->f_7 = 0;
	uParam1->f_8 = 156;
	uParam1->f_67 = -1;
	if (iParam0 == 200)
	{
		switch (iVar1)
		{
			case 1:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 2:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 3:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 4:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 5:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 6:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 7:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 8:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 9:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 10:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 11:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 12:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 13:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 14:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 15:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 16:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 17:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 18:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 19:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 20:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 21:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 22:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 23:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 24:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			case 25:
				func_146(func_147(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_145(func_147(iParam0, iVar1));
				break;
			
			default:
				break;
		}
	}
	else if (iParam0 == 219)
	{
		switch (iVar1)
		{
			case 1:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 1;
				break;
			
			case 2:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 2;
				break;
			
			case 3:
				uParam1->f_5 = 135;
				uParam1->f_6 = 135;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 3;
				break;
			
			case 4:
				uParam1->f_5 = 59;
				uParam1->f_6 = 59;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 8;
				break;
			
			case 5:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 4;
				break;
			
			case 6:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 5;
				break;
			
			case 7:
				uParam1->f_5 = 42;
				uParam1->f_6 = 42;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 7;
				break;
			
			case 8:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 6;
				break;
			
			default:
				break;
		}
	}
	else
	{
		switch (iVar1)
		{
			case 1:
				if (func_144(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_143(iParam0, iVar1, &uVar2))
						{
							uParam1->f_9[48] = uVar2;
						}
						else if (func_142(iParam0, iVar1, &uVar3, &uVar4, &uVar2))
						{
							uParam1->f_5 = uVar3;
							uParam1->f_6 = uVar4;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_99 = 134;
							}
							else
							{
								uParam1->f_99 = 0;
							}
							uParam1->f_9[48] = uVar2;
						}
						else
						{
							uParam1->f_67 = 0;
						}
					}
					else
					{
						uParam1->f_67 = func_145(func_147(iParam0, iVar1));
					}
				}
				else if (func_176(iParam0))
				{
					if (!Global_69652)
					{
						uParam1->f_5 = 143;
						uParam1->f_6 = 34;
						uParam1->f_7 = 31;
						uParam1->f_97 = 99;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 40;
						uParam1->f_6 = 40;
						uParam1->f_97 = 93;
						uParam1->f_67 = -1;
					}
				}
				else if (func_141(iParam0))
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 89;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 27;
					uParam1->f_67 = -1;
				}
				else if (func_140(iParam0))
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 27;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_67 = -1;
				}
				break;
			
			case 2:
				if (func_144(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_143(iParam0, iVar1, &uVar5))
						{
							uParam1->f_9[48] = uVar5;
						}
						else if (func_142(iParam0, iVar1, &uVar6, &uVar7, &uVar5))
						{
							uParam1->f_5 = uVar6;
							uParam1->f_6 = uVar7;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_99 = 134;
							}
							else
							{
								uParam1->f_99 = 0;
							}
							uParam1->f_9[48] = uVar5;
						}
						else
						{
							uParam1->f_67 = 1;
						}
					}
					else
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 10;
						uParam1->f_7 = 4;
						uParam1->f_8 = 156;
						uParam1->f_67 = func_145(func_147(iParam0, iVar1));
					}
				}
				else if (func_176(iParam0))
				{
					if (!Global_69652)
					{
						uParam1->f_5 = 8;
						uParam1->f_6 = 8;
						uParam1->f_7 = 5;
						uParam1->f_97 = 106;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 14;
						uParam1->f_6 = 14;
						uParam1->f_97 = 108;
						uParam1->f_67 = -1;
					}
				}
				else if (func_141(iParam0))
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 67;
					uParam1->f_67 = -1;
				}
				else if (func_140(iParam0))
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				break;
			
			case 3:
				if (func_144(iParam0))
				{
					if (func_143(iParam0, iVar1, &uVar8))
					{
						uParam1->f_9[48] = uVar8;
					}
					else if (func_142(iParam0, iVar1, &uVar9, &uVar10, &uVar8))
					{
						uParam1->f_5 = uVar9;
						uParam1->f_6 = uVar10;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_97 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_99 = 134;
						}
						else
						{
							uParam1->f_99 = 0;
						}
						uParam1->f_9[48] = uVar8;
					}
					else
					{
						uParam1->f_67 = 2;
					}
				}
				else if (func_176(iParam0))
				{
					if (!Global_69652)
					{
						uParam1->f_5 = 100;
						uParam1->f_6 = 100;
						uParam1->f_7 = 100;
						uParam1->f_97 = 22;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 152;
						uParam1->f_6 = 152;
						uParam1->f_97 = 22;
						uParam1->f_67 = -1;
					}
				}
				else if (func_141(iParam0))
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 28;
					uParam1->f_67 = -1;
				}
				else if (func_140(iParam0))
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				break;
			
			case 4:
				if (func_144(iParam0))
				{
					if (func_143(iParam0, iVar1, &uVar11))
					{
						uParam1->f_9[48] = uVar11;
					}
					else if (func_142(iParam0, iVar1, &uVar12, &uVar13, &uVar11))
					{
						uParam1->f_5 = uVar12;
						uParam1->f_6 = uVar13;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_97 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_99 = 134;
						}
						else
						{
							uParam1->f_99 = 0;
						}
						uParam1->f_9[48] = uVar11;
					}
					else
					{
						uParam1->f_67 = 3;
					}
				}
				else if (func_176(iParam0))
				{
					if (!Global_69652)
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_7 = 106;
						uParam1->f_97 = 101;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_97 = 48;
						uParam1->f_67 = -1;
					}
				}
				else if (func_141(iParam0))
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 81;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else if (func_140(iParam0))
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 27;
					while (func_139(iVar14, &sVar15, &iVar16, &uVar17, &uVar18))
					{
						if (unk_0x74C475EB8E73D398(&sVar15, "ORANGE") && iVar16 == 1)
						{
							uParam1->f_5 = uVar17;
							uParam1->f_6 = uVar18;
							iVar14 = -99;
						}
						iVar14++;
					}
					uParam1->f_67 = -1;
				}
				break;
			
			case 5:
				if (func_176(iParam0))
				{
					if (!Global_69652)
					{
						uParam1->f_5 = 49;
						uParam1->f_6 = 49;
						uParam1->f_7 = 52;
						uParam1->f_97 = 98;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 128;
						uParam1->f_6 = 128;
						uParam1->f_97 = 99;
						uParam1->f_67 = -1;
					}
				}
				else if ((iParam0 == 178 || iParam0 == 179) || iParam0 == 192)
				{
					uParam1->f_5 = 152;
					uParam1->f_6 = 152;
					uParam1->f_7 = 18;
					uParam1->f_8 = 152;
				}
				else if (func_141(iParam0))
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 55;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 41;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 55;
					uParam1->f_6 = 55;
					uParam1->f_67 = -1;
				}
				else if (func_140(iParam0))
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 128;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 0;
					while (func_139(iVar19, &sVar20, &iVar21, &uVar22, &uVar23))
					{
						if (unk_0x74C475EB8E73D398(&sVar20, "LIME_GREEN") && iVar21 == 1)
						{
							uParam1->f_5 = uVar22;
							uParam1->f_6 = uVar23;
							iVar19 = -99;
						}
						iVar19++;
					}
					uParam1->f_67 = -1;
				}
				break;
			
			case 6:
				if (func_176(iParam0))
				{
					if (!Global_69652)
					{
						uParam1->f_5 = 141;
						uParam1->f_6 = 141;
						uParam1->f_7 = 73;
						uParam1->f_97 = 5;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 84;
						uParam1->f_6 = 84;
						uParam1->f_97 = 24;
						uParam1->f_67 = -1;
					}
				}
				else if (func_141(iParam0))
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 63;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 111;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 64;
					uParam1->f_67 = -1;
				}
				else if (func_140(iParam0))
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 64;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 68;
					uParam1->f_67 = -1;
				}
				break;
			
			case 7:
				if (uParam1->f_66 == joaat("kuruma2"))
				{
					uParam1->f_5 = 12;
					uParam1->f_6 = 12;
					uParam1->f_7 = 13;
					uParam1->f_8 = 156;
					uParam1->f_67 = -1;
				}
				else if (func_176(iParam0))
				{
					if (!Global_69652)
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 0;
						uParam1->f_7 = 10;
						uParam1->f_97 = 1;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 12;
						uParam1->f_6 = 12;
						uParam1->f_97 = 0;
						uParam1->f_67 = -1;
					}
				}
				else if (func_141(iParam0))
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 5;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 81;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 333)
				{
					uParam1->f_5 = 154;
					uParam1->f_6 = 3;
					uParam1->f_97 = 0;
					uParam1->f_67 = -1;
				}
				else if (func_140(iParam0))
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 0;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 10;
					uParam1->f_67 = -1;
				}
				break;
			
			case 8:
				if (func_176(iParam0))
				{
					if (!Global_69652)
					{
						uParam1->f_5 = 112;
						uParam1->f_6 = 112;
						uParam1->f_7 = 0;
						uParam1->f_97 = 7;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 131;
						uParam1->f_6 = 131;
						uParam1->f_97 = 78;
						uParam1->f_67 = -1;
					}
				}
				else if (func_141(iParam0))
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 27;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else if (func_140(iParam0))
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 0;
					uParam1->f_67 = -1;
				}
				break;
			
			default:
				break;
			}
	}
	if (iVar1 == 0)
	{
		switch (iParam0)
		{
			case 32:
				uParam1->f_5 = 111;
				uParam1->f_6 = 65;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 13:
				uParam1->f_5 = 46;
				uParam1->f_6 = 24;
				uParam1->f_7 = 46;
				uParam1->f_8 = 24;
				uParam1->f_67 = -1;
				break;
			
			case 33:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 34:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 35:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 36:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 37:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 38:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 206:
				uParam1->f_5 = 2;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_67 = -1;
				break;
			
			case 207:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 126;
				uParam1->f_67 = -1;
				break;
			
			case 208:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_67 = -1;
				break;
			
			case 209:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 139;
				uParam1->f_67 = -1;
				break;
			
			case 210:
				uParam1->f_5 = 28;
				uParam1->f_6 = 0;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 213:
				uParam1->f_5 = 38;
				uParam1->f_6 = 38;
				uParam1->f_7 = 42;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 212:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 27;
				uParam1->f_67 = -1;
				break;
			
			case 17:
				uParam1->f_5 = 30;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 215:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 217:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 205:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 12;
				uParam1->f_67 = -1;
				break;
			
			case 227:
				uParam1->f_5 = 0;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 226:
				uParam1->f_5 = 36;
				uParam1->f_6 = 36;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 230:
				uParam1->f_5 = 41;
				uParam1->f_6 = 41;
				uParam1->f_7 = 156;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 338:
				uParam1->f_5 = 64;
				uParam1->f_6 = 5;
				uParam1->f_7 = 111;
				uParam1->f_8 = 5;
				uParam1->f_97 = 0;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 339:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 340:
				uParam1->f_5 = 24;
				uParam1->f_6 = 29;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 341:
				uParam1->f_5 = 3;
				uParam1->f_6 = 4;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 342:
				uParam1->f_5 = 111;
				uParam1->f_6 = 89;
				uParam1->f_7 = 111;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 343:
				uParam1->f_5 = 14;
				uParam1->f_6 = 121;
				uParam1->f_7 = 121;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 344:
				uParam1->f_5 = 50;
				uParam1->f_6 = 91;
				uParam1->f_7 = 0;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 345:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 346:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 347:
				uParam1->f_5 = 14;
				uParam1->f_6 = 5;
				uParam1->f_67 = -1;
				break;
			
			case 348:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 349:
				uParam1->f_5 = 27;
				uParam1->f_6 = 111;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 350:
				uParam1->f_5 = 119;
				uParam1->f_6 = 73;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 351:
				uParam1->f_5 = 67;
				uParam1->f_6 = 1;
				uParam1->f_7 = 5;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 356:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 363:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 361:
				uParam1->f_5 = 154;
				uParam1->f_6 = 13;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 358:
				uParam1->f_5 = 117;
				uParam1->f_6 = 118;
				uParam1->f_7 = 18;
				uParam1->f_8 = 0;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 362:
				uParam1->f_5 = 13;
				uParam1->f_6 = 8;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 360:
				uParam1->f_5 = 9;
				uParam1->f_6 = 9;
				uParam1->f_7 = 7;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 359:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 364:
				uParam1->f_5 = 8;
				uParam1->f_6 = 14;
				uParam1->f_7 = 5;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			default:
				break;
			}
	}
	if (iParam0 == 161)
	{
		uParam1->f_5 = 111;
		uParam1->f_6 = 111;
		uParam1->f_7 = 111;
		uParam1->f_8 = 156;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 231)
	{
		uParam1->f_5 = 142;
		uParam1->f_6 = 0;
		uParam1->f_7 = 145;
		uParam1->f_8 = 90;
	}
	if (iParam0 == 290)
	{
		uParam1->f_6 = 0;
	}
	if (iParam0 == 291)
	{
		uParam1->f_5 = 131;
		uParam1->f_6 = 131;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 304)
	{
		uParam1->f_5 = 22;
		uParam1->f_6 = 12;
		uParam1->f_7 = 134;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 305)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 306)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 307)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 308)
	{
		uParam1->f_5 = 12;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 309)
	{
		uParam1->f_5 = 151;
		uParam1->f_6 = 129;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 310)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 311)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 6;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 329)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 330)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 331)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 0;
		uParam1->f_8 = 154;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 332)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 120;
		uParam1->f_7 = 35;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 334)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 323)
	{
		if (iParam4 == 0)
		{
			uParam1->f_66 = 177270108;
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_97 = 0;
			uParam1->f_99 = 0;
			uParam1->f_67 = -1;
		}
		else if (iParam4 == 1)
		{
			uParam1->f_66 = 387748548;
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_97 = 0;
			uParam1->f_99 = 0;
			uParam1->f_67 = -1;
		}
	}
	if (func_138(uParam1->f_66))
	{
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 357)
	{
		uParam1->f_66 = func_137();
		uParam1->f_5 = 14;
		uParam1->f_6 = 131;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 365)
	{
		uParam1->f_5 = 128;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 364)
	{
		uParam1->f_5 = 32;
		uParam1->f_6 = 112;
		uParam1->f_7 = 25;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 366)
	{
		uParam1->f_5 = 65;
		uParam1->f_6 = 65;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 387)
	{
		uParam1->f_6 = 120;
	}
	if (iParam0 == 400)
	{
		uParam1->f_5 = 64;
		uParam1->f_6 = 2;
		uParam1->f_7 = 68;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
		uParam1->f_74 = 255;
		uParam1->f_76 = 255;
	}
	if (iParam0 == 401)
	{
		uParam1->f_5 = 5;
		uParam1->f_6 = 106;
		uParam1->f_7 = 5;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (uParam1->f_67 >= 0)
	{
	}
	else if (iParam0 == 195)
	{
		uParam1->f_67 = 1;
	}
}

int func_137()//Position - 0x10329
{
	return -2118308144;
}

int func_138(int iParam0)//Position - 0x10336
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case -1984275979:
		case -42959138:
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case -749299473:
		case -975345305:
		case -1700874274:
		case -392675425:
		case -1763555241:
		case 1043222410:
		case joaat("lazer"):
		case -1386191424:
		case 1565978651:
		case 1036591958:
		case -1007528109:
		case -32878452:
		case -1523619738:
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case 1181327175:
		case 447548909:
		case -726768679:
			return 1;
		
		default:
	}
	return 0;
}

bool func_139(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x10464
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

int func_140(int iParam0)//Position - 0x11956
{
	if ((((((((((((iParam0 == 398 || iParam0 == 386) || iParam0 == 391) || iParam0 == 394) || iParam0 == 393) || iParam0 == 397) || iParam0 == 396) || iParam0 == 390) || iParam0 == 395) || iParam0 == 389) || iParam0 == 388) || iParam0 == 392) || iParam0 == 399)
	{
		return 1;
	}
	return 0;
}

int func_141(int iParam0)//Position - 0x119FC
{
	if (((((iParam0 == 286 || iParam0 == 289) || iParam0 == 290) || iParam0 == 301) || iParam0 == 287) || iParam0 == 288)
	{
		return 1;
	}
	return 0;
}

int func_142(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0x11A4E
{
	if (iParam0 == 275)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 270)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 274)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 64;
				*uParam3 = 68;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 278)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 267)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 280)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 268)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 276)
	{
		switch (iParam1)
		{
			case 1:
				func_146(func_147(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				func_146(func_147(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 281)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 277)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 271)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 272)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 38;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 88;
				*uParam3 = 88;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 269)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 279)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 64;
				*uParam3 = 68;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	return 0;
}

int func_143(int iParam0, int iParam1, var uParam2)//Position - 0x11E7C
{
	if (iParam0 == 231)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 4;
				return 1;
				break;
			
			case 2:
				*uParam2 = 1;
				return 1;
				break;
			
			case 3:
				*uParam2 = 2;
				return 1;
				break;
			
			case 4:
				*uParam2 = 3;
				return 1;
				break;
		}
		*uParam2 = -1;
		return 0;
	}
	else if (iParam0 == 232)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 2;
				return 1;
				break;
			
			case 2:
				*uParam2 = 1;
				return 1;
				break;
		}
		*uParam2 = -1;
		return 0;
	}
	else if (iParam0 == 276)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 2;
				return 1;
				break;
		}
		*uParam2 = -1;
		return 0;
	}
	*uParam2 = -1;
	return 0;
}

int func_144(int iParam0)//Position - 0x11F5A
{
	if (((((((((((((((((((((iParam0 == 94 || iParam0 == 68) || iParam0 == 101) || iParam0 == 164) || iParam0 == 200) || iParam0 == 219) || iParam0 == 231) || iParam0 == 232) || iParam0 == 275) || iParam0 == 270) || iParam0 == 274) || iParam0 == 278) || iParam0 == 267) || iParam0 == 280) || iParam0 == 268) || iParam0 == 276) || iParam0 == 281) || iParam0 == 277) || iParam0 == 271) || iParam0 == 272) || iParam0 == 269) || iParam0 == 279)
	{
		return 1;
	}
	return 0;
}

int func_145(int iParam0)//Position - 0x12064
{
	switch (iParam0)
	{
		case 39:
			return 0;
		
		case 40:
			return 1;
		
		case 43:
			return 0;
		
		case 44:
			return 1;
		
		case 45:
			return 2;
		
		case 46:
			return 3;
		
		case 47:
			return 4;
		
		case 48:
			return 5;
		
		case 49:
			return 6;
		
		case 50:
			return 7;
		
		case 51:
			return 8;
		
		case 52:
			return 9;
		
		case 53:
			return 10;
		
		case 54:
			return 11;
		
		case 55:
			return 12;
		
		case 56:
			return 13;
		
		case 57:
			return 14;
		
		case 58:
			return 15;
		
		case 59:
			return 16;
		
		case 60:
			return 17;
		
		case 61:
			return 18;
		
		case 62:
			return 19;
		
		case 63:
			return 20;
		
		case 64:
			return 21;
		
		case 65:
			return 22;
		
		case 66:
			return 23;
		
		case 67:
			return 24;
		
		case 82:
			return 0;
		
		case 83:
			return 1;
		
		case 90:
			return 0;
		
		case 91:
			return 1;
		
		default:
	}
	return -1;
}

int func_146(int iParam0, var uParam1, var uParam2)//Position - 0x121BB
{
	*uParam1 = -1;
	*uParam2 = -1;
	switch (iParam0)
	{
		case 39:
			*uParam1 = 0;
			*uParam2 = 11;
			return 1;
		
		case 43:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 44:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 45:
			*uParam1 = 53;
			*uParam2 = 89;
			return 1;
		
		case 46:
			*uParam1 = 28;
			*uParam2 = 89;
			return 1;
		
		case 47:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 48:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 49:
			*uParam1 = 1;
			*uParam2 = 89;
			return 1;
		
		case 50:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 51:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 52:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 53:
			*uParam1 = 53;
			*uParam2 = 111;
			return 1;
		
		case 54:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 55:
			*uParam1 = 1;
			*uParam2 = 53;
			return 1;
		
		case 56:
			*uParam1 = 88;
			*uParam2 = 64;
			return 1;
		
		case 57:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 58:
			*uParam1 = 70;
			*uParam2 = 88;
			return 1;
		
		case 59:
			*uParam1 = 1;
			*uParam2 = 88;
			return 1;
		
		case 60:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 61:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 62:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 63:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 64:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 65:
			*uParam1 = 53;
			*uParam2 = 38;
			return 1;
		
		case 66:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 67:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 90:
			*uParam1 = 27;
			*uParam2 = 27;
			return 1;
		
		case 91:
			*uParam1 = 111;
			*uParam2 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_147(int iParam0, int iParam1)//Position - 0x12401
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 7;
		
		case 16:
			return 8;
		
		case 19:
			return 9;
		
		case 22:
			return 10;
		
		case 23:
			return 11;
		
		case 24:
			return 12;
		
		case 25:
			return 13;
		
		case 27:
			return 14;
		
		case 28:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 17;
		
		case 31:
			return 18;
		
		case 20:
			return 19;
		
		case 32:
			return 20;
		
		case 21:
			return 21;
		
		case 78:
			return 22;
		
		case 79:
			return 23;
		
		case 80:
			return 24;
		
		case 18:
			return 25;
		
		case 81:
			return 26;
		
		case 82:
			return 27;
		
		case 83:
			return 28;
		
		case 84:
			return 29;
		
		case 85:
			return 30;
		
		case 86:
			return 31;
		
		case 87:
			return 32;
		
		case 88:
			return 33;
		
		case 102:
			return 34;
		
		case 113:
			return 35;
		
		case 160:
			return 36;
		
		case 163:
			return 37;
		
		case 162:
			return 38;
		
		case 164:
			if (func_148(iParam0, 11, iParam1))
			{
				return 40;
			}
			return 39;
		
		case 199:
			return 41;
		
		case 201:
			return 42;
		
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				
				case 2:
					return 44;
				
				case 3:
					return 45;
				
				case 4:
					return 46;
				
				case 5:
					return 47;
				
				case 6:
					return 48;
				
				case 7:
					return 49;
				
				case 8:
					return 50;
				
				case 9:
					return 51;
				
				case 10:
					return 52;
				
				case 11:
					return 53;
				
				case 12:
					return 54;
				
				case 13:
					return 55;
				
				case 14:
					return 56;
				
				case 15:
					return 57;
				
				case 16:
					return 58;
				
				case 17:
					return 59;
				
				case 18:
					return 60;
				
				case 19:
					return 61;
				
				case 20:
					return 62;
				
				case 21:
					return 63;
				
				case 22:
					return 64;
				
				case 23:
					return 65;
				
				case 24:
					return 66;
				
				case 25:
					return 67;
				
				default:
			}
			return 43;
		
		case 171:
			return 68;
		
		case 187:
			return 69;
		
		case 177:
			return 70;
		
		case 183:
			return 71;
		
		case 185:
			return 72;
		
		case 184:
			return 73;
		
		case 188:
			return 74;
		
		case 173:
			return 75;
		
		case 178:
			return 76;
		
		case 186:
			return 77;
		
		case 215:
			return 78;
		
		case 217:
			return 79;
		
		case 224:
			return 80;
		
		case 237:
			return 81;
		
		case 243:
			return 82;
		
		case 244:
			return 83;
		
		case 245:
			return 84;
		
		case 253:
			return 85;
		
		case 254:
			return 86;
		
		case 256:
			return 87;
		
		case 257:
			return 88;
		
		case 258:
			return 89;
		
		case 276:
			if (func_148(iParam0, 16, iParam1))
			{
				return 91;
			}
			return 90;
		
		case 323:
			return 92;
		
		case 324:
			return 93;
		
		case 337:
			return 94;
		
		case 357:
			return 95;
		
		default:
	}
	return -1;
}

int func_148(int iParam0, int iParam1, int iParam2)//Position - 0x12853
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = func_130(iParam0, -1);
	if (iParam0 == 164)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 276)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 95)
	{
		if (unk_0x851744C54849FD9D())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_43() && func_174())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 206 && unk_0x3A711520F83BAE98()) || (iParam0 == 207 && unk_0x3A711520F83BAE98())) || (iParam0 == 208 && unk_0x3A711520F83BAE98())) || (iParam0 == 209 && unk_0x3A711520F83BAE98()))
	{
		if (func_43())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 170 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
	{
		return 1;
	}
	if ((iParam0 == 221 || iParam0 == 135) || iParam0 == 210)
	{
		if (iParam1 == 26)
		{
			return 1;
		}
		return 0;
	}
	if (func_176(iParam0))
	{
		if (Global_69652)
		{
			return 1;
		}
		return 0;
	}
	iVar1 = func_173(iVar0);
	if (iVar1 != -1)
	{
		if (func_171(func_172(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	if (func_170(iParam0))
	{
		if (func_43())
		{
			if ((iParam0 == 205 && Global_262145.f_19048) || (iParam0 != 205 && Global_262145.f_19047))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (func_169(iParam0))
	{
		if (func_160(iParam0))
		{
			return 0;
		}
		return 1;
	}
	iVar2 = func_159(iVar0);
	if (iVar2 != -1)
	{
		if (func_157(func_158(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	iVar3 = func_156(iVar0);
	if (iVar3 > 0)
	{
		if (func_154(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar4 = func_153(iVar0);
	if (iVar4 != -1)
	{
		if (func_149(iVar0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_149(int iParam0)//Position - 0x12A9D
{
	int iVar0;
	
	if (!Global_70856)
	{
		return 0;
	}
	iVar0 = func_151(5644, -1, 0);
	switch (iParam0)
	{
		case 1483171323:
			return unk_0xC80D31E4B587871C(iVar0, func_150(1));
		
		case 1181327175:
			return unk_0xC80D31E4B587871C(iVar0, func_150(2));
		
		case -1693015116:
			return unk_0xC80D31E4B587871C(iVar0, func_150(6));
		
		case 886810209:
			return unk_0xC80D31E4B587871C(iVar0, func_150(7));
		
		case -692292317:
			return unk_0xC80D31E4B587871C(iVar0, func_150(10));
		
		case -212993243:
			return unk_0xC80D31E4B587871C(iVar0, func_150(11));
		
		case -1435527158:
			return unk_0xC80D31E4B587871C(iVar0, func_150(12));
		
		case 447548909:
			return unk_0xC80D31E4B587871C(iVar0, func_150(13));
		
		case 1489874736:
			return unk_0xC80D31E4B587871C(iVar0, func_150(15));
		
		default:
	}
	return 0;
}

int func_150(int iParam0)//Position - 0x12B7D
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		case 13:
			return 13;
		
		case 14:
			return 14;
		
		case 15:
			return 15;
		
		default:
	}
	return -1;
}

int func_151(int iParam0, int iParam1, int iParam2)//Position - 0x12C35
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_152(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_152(var uParam0)//Position - 0x12C67
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_93();
		if (iVar1 > -1)
		{
			Global_2522773 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522773 = 1;
		}
	}
	return iVar0;
}

int func_153(int iParam0)//Position - 0x12C9B
{
	switch (iParam0)
	{
		case 1483171323:
			return 0;
			break;
		
		case 1181327175:
			return 1;
			break;
		
		case -1693015116:
			return 2;
			break;
		
		case 886810209:
			return 3;
			break;
		
		case -692292317:
			return 4;
			break;
		
		case -212993243:
			return 5;
			break;
		
		case -1435527158:
			return 6;
			break;
		
		case 447548909:
			return 7;
			break;
		
		case 1489874736:
			return 8;
			break;
	}
	return -1;
}

int func_154(int iParam0)//Position - 0x12D21
{
	int iVar0;
	int iVar1;
	
	if (!Global_70856)
	{
		return 0;
	}
	iVar0 = func_156(iParam0);
	iVar1 = func_155();
	if (iVar1 >= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_155()//Position - 0x12D4F
{
	return func_151(6096, -1, 0);
}

int func_156(int iParam0)//Position - 0x12D60
{
	switch (iParam0)
	{
		case -1763555241:
			return Global_262145.f_21506;
		
		case -975345305:
			return Global_262145.f_21507;
		
		case -1523619738:
			return Global_262145.f_21508;
		
		case -1984275979:
			return Global_262145.f_21509;
		
		case -1700874274:
			return Global_262145.f_21510;
		
		case 1565978651:
			return Global_262145.f_21511;
		
		case 1043222410:
			return Global_262145.f_21512;
		
		case -32878452:
			return Global_262145.f_21513;
		
		case -1007528109:
			return Global_262145.f_21514;
		
		case -749299473:
			return Global_262145.f_21515;
		
		case -1386191424:
			return Global_262145.f_21516;
		
		case -392675425:
			return Global_262145.f_21517;
		
		case 1036591958:
			return Global_262145.f_21518;
		
		case -42959138:
			return Global_262145.f_21519;
		
		default:
	}
	return 0;
}

bool func_157(int iParam0)//Position - 0x12E50
{
	if (!Global_70856)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(func_151(5446, -1, 0), iParam0);
}

int func_158(int iParam0)//Position - 0x12E73
{
	switch (iParam0)
	{
		case 1897744184:
			return 0;
		
		case -32236122:
			return 1;
		
		case -1881846085:
			return 2;
		
		case 562680400:
			return 3;
		
		case -1210451983:
			return 5;
		
		case 884483972:
			return 7;
		
		default:
	}
	return 3;
}

int func_159(int iParam0)//Position - 0x12EBF
{
	switch (iParam0)
	{
		case 1897744184:
			return 0;
			break;
		
		case -32236122:
			return 1;
			break;
		
		case -1881846085:
			return 2;
			break;
		
		case 562680400:
			return 3;
			break;
		
		case -1210451983:
			return 4;
			break;
		
		case 884483972:
			return 5;
			break;
	}
	return -1;
}

int func_160(int iParam0)//Position - 0x12F1D
{
	int iVar0;
	
	if (!Global_70856)
	{
		return 0;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 187:
			iVar0 = 16;
			break;
		
		case 177:
			iVar0 = 12;
			break;
		
		case 185:
			iVar0 = 14;
			break;
		
		case 174:
			iVar0 = 9;
			break;
		
		case 171:
			iVar0 = 20;
			break;
		
		case 172:
			iVar0 = 7;
			break;
		
		case 173:
			iVar0 = 8;
			break;
		
		case 175:
			iVar0 = 10;
			break;
		
		case 176:
			iVar0 = 11;
			break;
		
		case 178:
			iVar0 = 5;
			break;
		
		case 179:
			iVar0 = 6;
			break;
		
		case 183:
			iVar0 = 21;
			break;
		
		case 180:
			iVar0 = 18;
			break;
		
		case 181:
			iVar0 = 22;
			break;
		
		case 182:
			iVar0 = 19;
			break;
		
		case 184:
			iVar0 = 13;
			break;
		
		case 186:
			iVar0 = 15;
			break;
		
		case 188:
			iVar0 = 17;
			break;
	}
	return func_161(iVar0);
}

bool func_161(int iParam0)//Position - 0x13028
{
	int iVar0;
	int iVar1;
	
	if (func_168())
	{
		return 0;
	}
	iVar0 = func_163(iParam0);
	iVar1 = iParam0;
	return unk_0xC80D31E4B587871C(iVar0, func_162(iVar1));
}

int func_162(int iParam0)//Position - 0x13053
{
	return (iParam0 % 32);
}

var func_163(var uParam0)//Position - 0x13060
{
	var uVar0;
	
	uVar0 = func_151(func_164(uParam0), -1, 0);
	return uVar0;
}

int func_164(var uParam0)//Position - 0x13078
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_167(iVar0);
	if ((func_166() == 0 || func_165() == 0) || (func_166() == 999 && func_165() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 735;
				break;
			
			case 1:
				return 736;
				break;
			}
	}
	return 7872;
}

int func_165()//Position - 0x130E4
{
	return Global_25234;
}

int func_166()//Position - 0x130EF
{
	return Global_25233;
}

int func_167(int iParam0)//Position - 0x130FA
{
	return (iParam0 / 32);
}

bool func_168()//Position - 0x13107
{
	return Global_1312833;
}

int func_169(int iParam0)//Position - 0x13113
{
	if (((((((((((((((iParam0 == 171 || iParam0 == 172) || iParam0 == 173) || iParam0 == 175) || iParam0 == 177) || iParam0 == 178) || iParam0 == 179) || iParam0 == 180) || iParam0 == 181) || iParam0 == 182) || iParam0 == 183) || iParam0 == 184) || iParam0 == 185) || iParam0 == 186) || iParam0 == 187) || iParam0 == 188)
	{
		return 1;
	}
	return 0;
}

int func_170(int iParam0)//Position - 0x131CD
{
	if ((((((iParam0 == 199 || iParam0 == 200) || iParam0 == 201) || iParam0 == 202) || iParam0 == 203) || iParam0 == 204) || iParam0 == 205)
	{
		return 1;
	}
	return 0;
}

bool func_171(int iParam0)//Position - 0x13224
{
	if (!Global_70856)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(func_151(5309, -1, 0), iParam0);
}

int func_172(int iParam0)//Position - 0x13247
{
	switch (iParam0)
	{
		case joaat("dune4"):
			return 0;
		
		case joaat("dune5"):
			return 0;
		
		case joaat("wastelander"):
			return 1;
		
		case joaat("blazer5"):
			return 2;
		
		case joaat("phantom2"):
			return 3;
		
		case joaat("voltic2"):
			return 4;
		
		case joaat("technical2"):
			return 5;
		
		case joaat("boxville5"):
			return 6;
		
		case joaat("ruiner2"):
			return 7;
		
		default:
	}
	return 0;
}

int func_173(var uParam0)//Position - 0x132B1
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_174()//Position - 0x1333A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xC80D31E4B587871C(Global_25, 5))
	{
		if (unk_0xC80D31E4B587871C(Global_25, 1) || unk_0xC80D31E4B587871C(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xFA3CE529DBB66C85(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (unk_0xC80D31E4B587871C(iVar0, 5))
		{
			if (unk_0xC80D31E4B587871C(iVar0, 1) || unk_0xC80D31E4B587871C(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0xBC3459AD346669FC(0))
	{
		if (Global_143075.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0xFA3CE529DBB66C85(iVar2, &iVar1, -1))
			{
				if (unk_0xC80D31E4B587871C(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x2E68557F22711FDA())
	{
		iVar3 = unk_0x496616BFA56C89EB(866);
		if (unk_0xC80D31E4B587871C(iVar3, 1) || unk_0xC80D31E4B587871C(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0x4CAC17F5502E6EEB())
	{
		if (unk_0xE9F0A7BEA240607F())
		{
			if (unk_0xECC841C67C1F66D9())
			{
				unk_0xFA3CE529DBB66C85(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				unk_0x872F1C1F8587CCC7(&iVar4, 1);
				unk_0x872F1C1F8587CCC7(&iVar4, 3);
				unk_0x872F1C1F8587CCC7(&iVar4, 5);
				unk_0x872F1C1F8587CCC7(&Global_25, 1);
				unk_0x872F1C1F8587CCC7(&Global_25, 3);
				unk_0x872F1C1F8587CCC7(&Global_25, 5);
				unk_0xBFFF62F75445099D(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (unk_0x2E68557F22711FDA())
				{
					iVar4 = unk_0x496616BFA56C89EB(866);
					unk_0x872F1C1F8587CCC7(&iVar4, 1);
					unk_0x872F1C1F8587CCC7(&iVar4, 3);
					unk_0xDDFB38BD8B59BBB9(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_175(int iParam0, var uParam1)//Position - 0x1348E
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case joaat("dune5"):
			*uParam1 = 1f;
			break;
		
		case joaat("boxville5"):
			*uParam1 = 1f;
			break;
		
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
		
		case -1523619738:
			*uParam1 = 0,2f;
			break;
		
		case -32878452:
			*uParam1 = 0,15f;
			break;
		
		case -1007528109:
			*uParam1 = 0,3f;
			break;
		
		case -42959138:
			*uParam1 = 0,5f;
			break;
		
		case -1763555241:
			*uParam1 = 0,3f;
			break;
		
		case -749299473:
			*uParam1 = 0,4f;
			break;
		
		case 1565978651:
			*uParam1 = 0,3f;
			break;
		
		case 1036591958:
			*uParam1 = 0,4f;
			break;
		
		case -1386191424:
			*uParam1 = 0,4f;
			break;
		
		case -975345305:
			*uParam1 = 0,4f;
			break;
		
		case -392675425:
			*uParam1 = 0,3f;
			break;
		
		case -1700874274:
			*uParam1 = 0,5f;
			break;
		
		case 1043222410:
			*uParam1 = 0,15f;
			break;
		
		case -1435527158:
			*uParam1 = 0,6f;
			break;
	}
	return *uParam1 != -1f;
}

int func_176(int iParam0)//Position - 0x135BB
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

void func_177(int iParam0, int iParam1)//Position - 0x13613
{
	switch (iParam0)
	{
		case 64:
			unk_0x872F1C1F8587CCC7(iParam1, 4);
			break;
		
		case 67:
			unk_0x872F1C1F8587CCC7(iParam1, 4);
			break;
		
		case 72:
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			break;
		
		case 117:
			unk_0x0EE72DB1CD8A3B86(iParam1, 1);
			break;
		
		case 49:
			unk_0x0EE72DB1CD8A3B86(iParam1, 0);
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			break;
		
		case 118:
			unk_0x872F1C1F8587CCC7(iParam1, 0);
			unk_0x0EE72DB1CD8A3B86(iParam1, 1);
			break;
		
		case 1:
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			break;
		
		case 119:
			unk_0x0EE72DB1CD8A3B86(iParam1, 1);
			break;
		
		case 77:
			unk_0x872F1C1F8587CCC7(iParam1, 0);
			unk_0x0EE72DB1CD8A3B86(iParam1, 1);
			unk_0x0EE72DB1CD8A3B86(iParam1, 2);
			break;
		
		case 120:
			unk_0x0EE72DB1CD8A3B86(iParam1, 0);
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			unk_0x0EE72DB1CD8A3B86(iParam1, 2);
			break;
		
		case 130:
			unk_0x872F1C1F8587CCC7(iParam1, 0);
			break;
		
		case 132:
			unk_0x872F1C1F8587CCC7(iParam1, 0);
			break;
		
		case 135:
			unk_0x0EE72DB1CD8A3B86(iParam1, 0);
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			break;
		
		case 137:
			unk_0x872F1C1F8587CCC7(iParam1, 0);
			break;
		
		case 141:
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			unk_0x0EE72DB1CD8A3B86(iParam1, 6);
			break;
		
		case 147:
			unk_0x872F1C1F8587CCC7(iParam1, 0);
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			unk_0x872F1C1F8587CCC7(iParam1, 2);
			unk_0x872F1C1F8587CCC7(iParam1, 3);
			unk_0x872F1C1F8587CCC7(iParam1, 4);
			unk_0x872F1C1F8587CCC7(iParam1, 5);
			unk_0x872F1C1F8587CCC7(iParam1, 6);
			unk_0x872F1C1F8587CCC7(iParam1, 7);
			unk_0x872F1C1F8587CCC7(iParam1, 8);
			break;
		
		case 203:
			unk_0x872F1C1F8587CCC7(iParam1, 0);
			unk_0x0EE72DB1CD8A3B86(iParam1, 1);
			unk_0x0EE72DB1CD8A3B86(iParam1, 2);
			break;
		
		case 100:
			unk_0x872F1C1F8587CCC7(iParam1, 0);
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			unk_0x872F1C1F8587CCC7(iParam1, 2);
			break;
		
		case 170:
			unk_0x0EE72DB1CD8A3B86(iParam1, 0);
			unk_0x0EE72DB1CD8A3B86(iParam1, 1);
			unk_0x0EE72DB1CD8A3B86(iParam1, 2);
			break;
		
		case 160:
			unk_0x872F1C1F8587CCC7(iParam1, 15);
			break;
		
		case 161:
			unk_0x872F1C1F8587CCC7(iParam1, 15);
			break;
		
		case 192:
			unk_0x872F1C1F8587CCC7(iParam1, 0);
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			unk_0x0EE72DB1CD8A3B86(iParam1, 2);
			break;
		
		case 221:
			unk_0x0EE72DB1CD8A3B86(iParam1, 0);
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			unk_0x0EE72DB1CD8A3B86(iParam1, 2);
			break;
		
		case 222:
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			break;
		
		case 172:
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			break;
		
		case 165:
			unk_0x0EE72DB1CD8A3B86(iParam1, 0);
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			break;
		
		case 166:
			unk_0x872F1C1F8587CCC7(iParam1, 0);
			unk_0x0EE72DB1CD8A3B86(iParam1, 1);
			break;
		
		case 139:
			unk_0x872F1C1F8587CCC7(iParam1, 0);
			break;
		
		case 104:
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			break;
		
		case 109:
			unk_0x872F1C1F8587CCC7(iParam1, 0);
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			unk_0x872F1C1F8587CCC7(iParam1, 2);
			break;
		
		case 227:
		case 252:
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			unk_0x0EE72DB1CD8A3B86(iParam1, 2);
			unk_0x0EE72DB1CD8A3B86(iParam1, 4);
			break;
		
		case 97:
			unk_0x872F1C1F8587CCC7(iParam1, 0);
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			break;
		
		case 52:
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			break;
		
		case 108:
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			break;
		
		case 237:
			unk_0x872F1C1F8587CCC7(iParam1, 9);
			break;
		
		case 238:
			unk_0x0EE72DB1CD8A3B86(iParam1, 0);
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			unk_0x872F1C1F8587CCC7(iParam1, 2);
			break;
		
		case 233:
		case 234:
		case 235:
		case 236:
		case 240:
		case 241:
		case 263:
			if (Global_69652)
			{
				unk_0x872F1C1F8587CCC7(iParam1, 9);
			}
			break;
		
		case 271:
			unk_0x872F1C1F8587CCC7(iParam1, 0);
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			unk_0x872F1C1F8587CCC7(iParam1, 2);
			unk_0x872F1C1F8587CCC7(iParam1, 3);
			unk_0x872F1C1F8587CCC7(iParam1, 4);
			break;
		
		case 272:
			unk_0x872F1C1F8587CCC7(iParam1, 3);
			unk_0x872F1C1F8587CCC7(iParam1, 4);
			break;
		
		case 273:
			unk_0x872F1C1F8587CCC7(iParam1, 0);
			break;
		
		case 281:
			unk_0x872F1C1F8587CCC7(iParam1, 0);
			break;
		
		case 267:
			unk_0x872F1C1F8587CCC7(iParam1, 0);
			break;
		
		case 268:
			unk_0x872F1C1F8587CCC7(iParam1, 0);
			break;
		
		case 292:
			unk_0x872F1C1F8587CCC7(iParam1, 9);
			break;
		
		case 309:
			unk_0x872F1C1F8587CCC7(iParam1, 9);
			break;
		
		case 329:
			unk_0x872F1C1F8587CCC7(iParam1, 9);
			break;
		
		case 364:
			unk_0x872F1C1F8587CCC7(iParam1, 0);
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			unk_0x872F1C1F8587CCC7(iParam1, 9);
			break;
		
		case 360:
			unk_0x872F1C1F8587CCC7(iParam1, 9);
			break;
		
		case 401:
			unk_0x872F1C1F8587CCC7(iParam1, 0);
			unk_0x872F1C1F8587CCC7(iParam1, 1);
			unk_0x872F1C1F8587CCC7(iParam1, 6);
			unk_0x872F1C1F8587CCC7(iParam1, 9);
			break;
		
		default:
			return;
			break;
	}
}

void func_178(char* sParam0)//Position - 0x13AAF
{
	int iVar0;
	
	StringCopy(&(Global_17301.f_1), sParam0, 16);
	Global_17301.f_68 = 0;
	Global_17301.f_69 = 0;
	Global_17301.f_70 = 0;
	Global_17301.f_71 = 0;
	Global_17301.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_179(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x13AFA
{
	Global_17301.f_4953[0] = iParam0;
	Global_17301.f_4953[1] = iParam1;
	Global_17301.f_4953[2] = iParam2;
	Global_17301.f_4953[3] = iParam3;
	Global_17301.f_4953[4] = iParam4;
}

void func_180(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x13B39
{
	Global_17301.f_4926[0] = iParam0;
	Global_17301.f_4926[1] = iParam1;
	Global_17301.f_4926[2] = iParam2;
	Global_17301.f_4926[3] = iParam3;
	Global_17301.f_4926[4] = iParam4;
	Global_17301.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17301.f_5096++;
	}
}

void func_181(bool bParam0)//Position - 0x13BE3
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17301.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17301.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2457366[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17301.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4959[iVar0] = 0;
		Global_17301.f_5097[iVar0] = 0;
		Global_17301.f_5226[iVar0] = 0;
		Global_17301.f_5746[iVar0] = 0f;
		Global_17301.f_5355[iVar0] = 0;
		Global_17301.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17301.f_4926[iVar0] = 0;
		Global_17301.f_4938[iVar0] = 0f;
		Global_17301.f_4932[iVar0] = -1f;
		Global_17301.f_4945[iVar0] = 0;
		Global_17301.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17301.f_4834[iVar0 /*4*/]), "", 16);
		Global_17301.f_4883[iVar0] = -1;
		Global_17301.f_4896[iVar0] = 358;
		Global_17301.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 52)
	{
		StringCopy(&(Global_17301.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17301.f_6719[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_4265799.f_16), "", 16);
	Global_4265799.f_20 = -1;
	Global_17301 = 0;
	Global_17301.f_5088 = 0;
	Global_17301.f_5089 = 0;
	Global_17301.f_5090 = 0;
	Global_17301.f_5092 = 0;
	Global_17301.f_5093 = 0;
	Global_17301.f_5094 = 0;
	Global_17301.f_5091 = 0;
	Global_17301.f_5741 = 0;
	Global_17301.f_5606 = 0;
	Global_17301.f_5605 = 0;
	Global_17301.f_5607 = 0;
	StringCopy(&(Global_17301.f_4562), "", 16);
	Global_17301.f_4632 = 0;
	Global_17301.f_4633 = 0;
	Global_17301.f_4634 = 0;
	Global_17301.f_4635 = 0;
	Global_17301.f_4636 = 0;
	Global_17301.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_4638 = 0;
	StringCopy(&(Global_4265799.f_21), "", 16);
	Global_4265799.f_61 = 0;
	Global_4265799.f_62 = 0;
	Global_4265799.f_63 = 0;
	Global_4265799.f_64 = 0;
	Global_4265799.f_65 = 0;
	Global_4265799.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4265799.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4265799.f_67 = 0;
	StringCopy(&(Global_17301.f_1), "", 16);
	Global_17301.f_4944 = 0f;
	Global_17301.f_68 = 0;
	Global_17301.f_69 = 0;
	Global_17301.f_70 = 0;
	Global_17301.f_71 = 0;
	Global_17301.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_5611 = 0;
	Global_17301.f_5610 = 0;
	Global_17301.f_5608 = 0;
	Global_17301.f_5609 = 0;
	Global_17301.f_4639 = 0;
	Global_17301.f_4640 = 0;
	Global_17301.f_5095 = 10;
	Global_17301.f_5096 = 0;
	Global_17301.f_5743 = 0f;
	Global_17301.f_5744 = 0f;
	Global_17301.f_5598 = 0;
	Global_17301.f_5599 = 0;
	Global_17301.f_5600 = 0f;
	Global_17301.f_5601 = 0;
	Global_17301.f_5603 = 0;
	Global_17301.f_5602 = 0;
	Global_17301.f_5604 = 0;
	Global_17301.f_7927 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17301.f_5875[iVar0] = -1;
		Global_17301.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17301.f_4951 = 0f;
	Global_17301.f_4922 = 0;
	Global_17301.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17301.f_5881)
	{
		Global_17301.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_7906 = 0;
	Global_17301.f_7901 = 0;
	Global_17301.f_7911 = 0;
	Global_17301.f_7916 = 0;
	Global_17301.f_7921 = 0;
	Global_17301.f_7923 = 0;
	Global_17301.f_7929 = 0;
	Global_17298 = 0,05f;
	Global_17299 = 0,05f;
	Global_17300 = 0,225f;
	fVar2 = unk_0xB6936205ED728A9D(0);
	if (bParam0)
	{
		Global_17300 = (0,225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1,77777f)
	{
		Global_17300 = (0,225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17300 = 0,225f;
	}
}

void func_182()//Position - 0x1409B
{
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0xCD439FD7E3A8589E(0,325f, 0,3f);
	}
}

int func_183(int iParam0, bool bParam1)//Position - 0x140B9
{
	int iVar0;
	
	iVar0 = func_70(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5BEF7A5AB8F17255(unk_0x98EC0789D9F0703B()))
	{
		return 0;
	}
	if (func_80(0))
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

bool func_184(char* sParam0, int iParam1, bool bParam2)//Position - 0x14171
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_73(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17301.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xAB019B170BF1309C(&(Global_17301.f_5505[iVar0 /*4*/])))
	{
		unk_0xBCBC53983EC3B1BA(&(Global_17301.f_5505[iVar0 /*4*/]), 9);
		Global_17301.f_5498[iVar0] = 1;
		if (!unk_0x1A0FBC430E1424B4(&(Global_17301.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x128A5DCCD09CCA17("CommonMenu", false);
	Global_17301.f_5484[iVar0] = 1;
	if (!unk_0xA51ADD51711B4A15("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x128A5DCCD09CCA17("MPShopSale", false);
		Global_17301.f_5491[iVar0] = 1;
		if (!unk_0xA51ADD51711B4A15("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17301.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_185(&(Global_17301.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_185(var uParam0)//Position - 0x14267
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x34D11AB5BA7922C2(*uParam0))
			{
				*uParam0 = unk_0xD704C81492296A37(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x34D11AB5BA7922C2(*uParam0))
					{
						uParam0->f_8 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x53C562FD2B9E3AB0();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x34D11AB5BA7922C2(*uParam0))
			{
				uParam0->f_8 = unk_0x53C562FD2B9E3AB0();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x34D11AB5BA7922C2(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_186(char* sParam0, int iParam1)//Position - 0x14309
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

int func_187(char* sParam0)//Position - 0x14320
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_188(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x14333
{
	int iVar0;
	
	if (unk_0x8F38E94BBF3404CD(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x1E06D00B67177A18())
	{
		if (!*iParam0 == -1)
		{
			func_69(iParam0);
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

bool func_189(int iParam0, int iParam1)//Position - 0x1445E
{
	int iVar0;
	
	if (iParam0 >= 312)
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > 2)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_104555.f_25152[iParam0], iVar0);
}

int func_190(int iParam0)//Position - 0x1449C
{
	int iVar0;
	int iVar1[128];
	
	if (func_193(1, 1))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("elegy2");
			iVar0++;
		}
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_18544[45 /*6*/], 3))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("dune2");
			iVar0++;
		}
	}
	if (func_43() && !unk_0x3A711520F83BAE98())
	{
		if (func_192(33, 0) && !func_191(1751306471))
		{
			iVar1[iVar0] = joaat("blista3");
			iVar0++;
		}
		if (Global_104555.f_25043.f_3)
		{
			iVar1[iVar0] = joaat("stalion2");
			iVar0++;
		}
		if (Global_104555.f_25043.f_4)
		{
			iVar1[iVar0] = joaat("gauntlet2");
			iVar0++;
		}
		if (Global_104555.f_25043.f_5)
		{
			iVar1[iVar0] = joaat("dominator2");
			iVar0++;
		}
		if (Global_104555.f_25043.f_6)
		{
			iVar1[iVar0] = joaat("buffalo3");
			iVar0++;
		}
		if (Global_104555.f_25043.f_7)
		{
			iVar1[iVar0] = joaat("marshall");
			iVar0++;
		}
	}
	if (iParam0 >= 0 && iParam0 < iVar0)
	{
		return iVar1[iParam0];
	}
	return 0;
}

int func_191(int iParam0)//Position - 0x145E1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_104555.f_7658.f_764)
	{
		if (Global_104555.f_7658.f_651[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_192(int iParam0, int iParam1)//Position - 0x1461C
{
	if (unk_0xC80D31E4B587871C(Global_104555.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_193(bool bParam0, bool bParam1)//Position - 0x1463F
{
	if (bParam0)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_668.f_1307, 2))
		{
			return 1;
		}
	}
	if (unk_0x851744C54849FD9D())
	{
		if (!bParam1 || unk_0xDEC0EB6EAE9BC575())
		{
			if (!unk_0x8A81E55A71641BC1() && !unk_0xFD6215BABFD843F2())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0x464F779D23F6440D())
		{
			return 0;
		}
	}
	if (unk_0x851744C54849FD9D())
	{
		return 1;
	}
	return 0;
}

int func_194()//Position - 0x146AB
{
	int iVar0;
	
	iVar0 = 0;
	if (func_193(1, 1))
	{
		if (!unk_0x3A711520F83BAE98())
		{
			iVar0++;
		}
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_18544[45 /*6*/], 3))
	{
		if (!unk_0x3A711520F83BAE98())
		{
			iVar0++;
		}
	}
	if (func_43() && !unk_0x3A711520F83BAE98())
	{
		if (func_192(33, 0) && !func_191(1751306471))
		{
			iVar0++;
		}
		if (Global_104555.f_25043.f_3)
		{
			iVar0++;
		}
		if (Global_104555.f_25043.f_4)
		{
			iVar0++;
		}
		if (Global_104555.f_25043.f_5)
		{
			iVar0++;
		}
		if (Global_104555.f_25043.f_6)
		{
			iVar0++;
		}
		if (Global_104555.f_25043.f_7)
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_195(float fParam0)//Position - 0x1477A
{
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (fParam0 <= 0f)
		{
			return unk_0x5F89DE0953A72822(unk_0xFC1458A37D98B502()) > 0;
		}
		else
		{
			return unk_0x55C62ED885188FCD(unk_0xFC1458A37D98B502(), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), fParam0) > 0;
		}
	}
	return 0;
}

bool func_196(bool bParam0)//Position - 0x147CC
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_197()//Position - 0x147F7
{
	var uVar0[10];
	bool bVar1;
	int iVar2;
	float fVar3;
	char* sVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;
	bool bVar15;
	float fVar16;
	int iVar17;
	vector3 vVar18;
	vector3 vVar19;
	int iVar20;
	vector3 vVar21;
	bool bVar22;
	float fVar23;
	int iVar24;
	bool bVar25;
	struct<4> Var26;
	bool bVar27;
	int iVar28;
	struct<4> Var29;
	struct<60> Var30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	float fVar35;
	int iVar36;
	struct<60> Var37;
	int iVar38;
	bool bVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	bool bVar44;
	bool bVar45;
	
	bVar1 = false;
	if ((((((((((((((((Local_56.f_29.f_80 && Local_56.f_29.f_69) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502())) && Local_56.f_2 == 0) && Local_56 != -1) && func_67(Local_56, 0)) && func_67(Local_56, 5)) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(5)) && !func_27(14)) && !Global_68215) && !func_196(1)) && !func_276()) || (((Local_56.f_3 > 1 && !func_196(0)) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502())) && !func_276()))
	{
		func_275(Local_56, &Local_83);
		fVar3 = 0f;
		sVar4 = "ANIM@APT_TRANS@GARAGE";
		vVar5 = { 198,3659f, -1020,273f, -100f };
		vVar6 = { vVar5 };
		vVar7 = { 198,9538f, -1026,13f, -100f };
		iVar8 = func_274(Local_56);
		switch (Local_56.f_3)
		{
			case 0:
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 207,4336f, -1019,795f, -100,4728f, 189,9338f, -1019,623f, -95,56883f, 17,1875f, 0, true, 0) && !unk_0x1E06D00B67177A18())
				{
					Local_56.f_3 = 10;
					return;
				}
				if ((((((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, 0, true, 0) && (func_273(unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502()), Local_56.f_29.f_68, 90f) || unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))) && unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) && !unk_0x27C8A4034A05DC21(unk_0xFC1458A37D98B502())) && !unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) && !unk_0x7760DB8F51041367(unk_0xFC1458A37D98B502(), 2)) && (iVar8 == iLocal_129 || iVar8 == 145))
				{
					if (func_272())
					{
						bVar9 = true;
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
						{
							iVar2 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 1);
							if (unk_0x6ADD12BF4D6D2587(iVar2))
							{
								if (unk_0xB8DE76287EDC4957(iVar2, 0))
								{
									iVar10 = unk_0x82FF3DFBC3965CC0(iVar2);
									if (((((((((!func_64(iVar10) || func_63(iVar2)) || func_62(iVar2)) || !func_39(iVar10, 0)) || unk_0x8F1CCD9A61E026D8(iVar2)) || ((!unk_0xC1514CFCEC68CA4A(iVar10) && !unk_0x125CDF69FA6EF560(iVar10)) && !unk_0x49A1CABC032F7E16(iVar10))) || iVar10 == joaat("monster")) || unk_0x6B4C37F2EEC636CC(iVar2)) || unk_0xC9CE174229996043(iVar2)) || (unk_0x574DEF26BB3B7DF0(unk_0xFC1458A37D98B502()) && unk_0x8F38E94BBF3404CD(joaat("taxi_procedural")) > 0))
									{
										bVar9 = false;
									}
								}
								else
								{
									bVar9 = false;
								}
							}
						}
						else if (unk_0xE615029F0D88B6BB(sVar4))
						{
							unk_0x6450931B826B49D9(sVar4);
							if (!unk_0x3A801AA34DD821BE(sVar4))
							{
								bVar9 = false;
							}
						}
						if (bVar9)
						{
							func_188(&iLocal_115, 3, "WEB_VEH_ENTER", 0, 0, 0, 0);
							iLocal_175 = 0;
							Local_56.f_3 = 1;
						}
						else if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
						{
							if (!unk_0xF491DD47B88AA84E() || func_187("WEB_VEH_INV"))
							{
								func_186("WEB_VEH_INV", -1);
								StringCopy(&cLocal_165, "WEB_VEH_INV", 16);
								bVar1 = true;
							}
						}
					}
					else if (!unk_0xF491DD47B88AA84E() || func_187("WEB_VEH_FULL"))
					{
						func_186("WEB_VEH_FULL", -1);
						StringCopy(&cLocal_165, "WEB_VEH_FULL", 16);
						bVar1 = true;
					}
				}
				break;
			
			case 1:
				if (!iLocal_173)
				{
					if (!unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
					{
						iLocal_173 = 0;
						unk_0x6450931B826B49D9(sVar4);
						if (unk_0x3A801AA34DD821BE(sVar4))
						{
							iLocal_173 = 1;
						}
					}
					else
					{
						unk_0xFCCDDE0E48CF9588(sVar4);
						iLocal_173 = 1;
					}
				}
				iVar11 = 1;
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 1);
					if (unk_0x6ADD12BF4D6D2587(iVar2))
					{
						if (unk_0xB8DE76287EDC4957(iVar2, 0))
						{
							iVar12 = unk_0x82FF3DFBC3965CC0(iVar2);
							if ((((((((!func_64(iVar12) || func_63(iVar2)) || func_62(iVar2)) || unk_0x8F1CCD9A61E026D8(iVar2)) || ((!unk_0xC1514CFCEC68CA4A(iVar12) && !unk_0x125CDF69FA6EF560(iVar12)) && !unk_0x49A1CABC032F7E16(iVar12))) || iVar12 == joaat("monster")) || unk_0x6B4C37F2EEC636CC(iVar2)) || unk_0xC9CE174229996043(iVar2)) || (unk_0x574DEF26BB3B7DF0(unk_0xFC1458A37D98B502()) && unk_0x8F38E94BBF3404CD(joaat("taxi_procedural")) > 0))
							{
								iVar11 = 0;
							}
						}
						else
						{
							iVar11 = 0;
						}
					}
				}
				if (((((((((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, 0, true, 0) && (func_273(unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502()), Local_56.f_29.f_68, 90f) || unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))) && unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) && func_272()) && !unk_0x27C8A4034A05DC21(unk_0xFC1458A37D98B502())) && !unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) && !unk_0x7760DB8F51041367(unk_0xFC1458A37D98B502(), 2)) && !func_276()) && (iVar8 == iLocal_129 || iVar8 == 145)) && iVar11)
				{
					if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()) || (unk_0x3A801AA34DD821BE(sVar4) || !unk_0xE615029F0D88B6BB(sVar4)))
					{
						if (func_183(iLocal_115, 1))
						{
							func_69(&iLocal_115);
							iLocal_173 = 0;
							Local_56.f_3 = 2;
						}
						func_270(47, 0);
						func_265(47, 0);
						Local_56.f_112 = unk_0xC0765AFBFA616644(vVar5, "v_garagem_sp");
						if (unk_0x2C2E1E35924B9FF2(Local_56.f_112))
						{
							if (!unk_0x1A595E6882473810(Local_56.f_112))
							{
								if ((unk_0x4B64A8D052027742() % 10) == 0)
								{
									unk_0xFF9ADA7B95619F7E(Local_56.f_112);
								}
							}
							StringCopy(&Global_32583, "v_garagem_sp", 32);
						}
						if (!iLocal_172 && !unk_0x40189ECE75CF9724())
						{
							if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
							{
								iVar13 = func_263(Local_56);
								func_61(&vVar14, iVar13);
								vVar6 = { vVar14 };
								unk_0x32C900DD9B686F75(vVar6, 20f, 0);
							}
							else
							{
								unk_0x32C900DD9B686F75(vVar7 + Vector(1f, 0f, 0f), 20f, 0);
							}
							iLocal_172 = 1;
						}
					}
				}
				else
				{
					if (iLocal_172 && unk_0x40189ECE75CF9724())
					{
						unk_0x81BCCFFE3F019672();
						iLocal_172 = 0;
					}
					iLocal_173 = 0;
					func_69(&iLocal_115);
					unk_0xFCCDDE0E48CF9588(sVar4);
					Local_56.f_3 = 0;
				}
				break;
			
			case 2:
				func_270(47, 0);
				func_265(47, 0);
				unk_0xE6ABE74AEC92281D(8);
				Global_69678.f_577 = 1;
				Global_69678.f_578 = { Local_56.f_29.f_55 };
				iLocal_155 = unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4());
				unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
				unk_0x995BFC92D2115309(unk_0xFC1458A37D98B502(), 0, 0);
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
				unk_0x4255E93FCCDE108E(false);
				unk_0x9B47B379EE749C38(false);
				unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					if (unk_0x6ADD12BF4D6D2587(iVar2) && unk_0xB8DE76287EDC4957(iVar2, 0))
					{
						if (func_273(unk_0xF0371FE6E2BF9599(iVar2), Local_56.f_29.f_68, 90f))
						{
							iLocal_175 = 0;
						}
						else
						{
							iLocal_175 = 1;
						}
						unk_0xD38F266C132F2897(iVar2, true, true, true, true, true, true, 0, false);
						unk_0xBBF9037650162761(Local_83.f_86[0 /*6*/], 20f, 0);
						unk_0xA896149A4DE38DEA(Local_83.f_86[0 /*6*/], 20f, 0);
						unk_0x2A3035DE2B139D39(Local_83.f_86[0 /*6*/], 7f);
						unk_0xBD8D47FDC6902B2D(iVar2, Local_83.f_86[0 /*6*/], 1, false, 0, 1);
						if (iLocal_175 && !unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
						{
							unk_0x48ED7B2293A96722(iVar2, (Local_83.f_86[0 /*6*/].f_3.f_2 + 180f));
						}
						else
						{
							unk_0x48ED7B2293A96722(iVar2, Local_83.f_86[0 /*6*/].f_3.f_2);
						}
						if (unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
						{
							unk_0x622387450247E90D(unk_0xFC1458A37D98B502(), 0, 0, -1);
							unk_0x35963CCE03600881(unk_0xFC1458A37D98B502(), 1);
						}
						unk_0xACE486395AA1867D(iVar2, 1084227584);
					}
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
					func_257(1, 1, 1, 0);
					func_256(&(Local_83[1 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
					Local_56.f_3 = 3;
				}
				else
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_168) && !unk_0x191BE1BC8F26F3C1(iLocal_168, 0))
					{
						if (unk_0x9761C10D57B68069(iLocal_168) && unk_0xCB234F3DD6FF9368(iLocal_168, 1))
						{
							unk_0x5380482A432E314E(&iLocal_168);
						}
					}
					iLocal_168 = unk_0xC733212BF9066BDF();
					if ((((unk_0x6ADD12BF4D6D2587(iLocal_168) && unk_0xB8DE76287EDC4957(iLocal_168, 0)) && !unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(iLocal_168))) && !unk_0x849A8CFD71854E02(unk_0x82FF3DFBC3965CC0(iLocal_168))) && !unk_0x428C7026AD2721BA(unk_0x82FF3DFBC3965CC0(iLocal_168)))
					{
						if (!unk_0x9761C10D57B68069(iLocal_168))
						{
							unk_0xDD29FF4BAB8AFF9C(iLocal_168, false, 0);
						}
						if (unk_0x6ADD12BF4D6D2587(iLocal_168) && unk_0xB8DE76287EDC4957(iLocal_168, 0))
						{
							if (!bVar15)
							{
								if (unk_0x0F3033474C49912D(iLocal_168, Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, 0, true, 0))
								{
									bVar15 = true;
								}
							}
							if (!bVar15)
							{
								fVar16 = system::vdist2(unk_0xB3328BA8976B416C(iLocal_168, 1), Local_83[0 /*15*/]);
								if (fVar16 < (5f * 5f))
								{
									bVar15 = true;
								}
							}
							if (bVar15)
							{
								iVar17 = func_49(24);
								if (func_255(&Local_141, 24))
								{
									func_250(&Local_141, func_440());
									if (unk_0x6ADD12BF4D6D2587(iVar17))
									{
										unk_0xC91FE17AD7353B70(&iVar17);
									}
								}
								if (Local_56 == 21)
								{
									unk_0x247EAA2E93D4A021(-89,377f, 92,6583f, 71,2349f, 5f, 1, 0, 0, false);
									func_248(iLocal_168, -89,377f, 92,6583f, 71,2349f, 154,4846f, 24, 0);
								}
								else if (Local_56 == 22)
								{
									unk_0x247EAA2E93D4A021(-62,0307f, -1839,859f, 25,6787f, 5f, 1, 0, 0, false);
									func_248(iLocal_168, -62,0307f, -1839,859f, 25,6787f, 319,6985f, 24, 0);
								}
								else if (Local_56 == 23)
								{
									unk_0x247EAA2E93D4A021(-234,7648f, -1150,311f, 21,9224f, 5f, 1, 0, 0, false);
									func_248(iLocal_168, -234,7648f, -1150,311f, 21,9224f, 270,8741f, 24, 0);
								}
								unk_0xACE486395AA1867D(iLocal_168, 1084227584);
							}
						}
					}
					else
					{
						iLocal_168 = 0;
					}
					vVar18 = { Local_56.f_29 * Vector(2f, 2f, 2f) + Local_56.f_29.f_3 * Vector(1f, 1f, 1f) / Vector(3f, 3f, 3f) };
					vVar19 = { Local_56.f_29 * Vector(1f, 1f, 1f) + Local_56.f_29.f_3 * Vector(2f, 2f, 2f) / Vector(3f, 3f, 3f) };
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_56.f_29, vVar18.x, vVar18.y, Local_56.f_29.f_3.f_2, Local_56.f_29.f_6, 0, true, 0))
					{
						sLocal_176 = "";
						switch (unk_0x63A6486593EC7EC3(0, 2))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_2_left";
								break;
						}
					}
					else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vVar18.x, vVar18.y, Local_56.f_29.f_2, vVar19.x, vVar19.y, Local_56.f_29.f_3.f_2, Local_56.f_29.f_6, 0, true, 0))
					{
						sLocal_176 = "";
						switch (unk_0x63A6486593EC7EC3(0, 2))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_1_right";
								break;
						}
					}
					else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vVar19.x, vVar19.y, Local_56.f_29.f_2, Local_56.f_29.f_3, Local_56.f_29.f_6, 0, true, 0))
					{
						sLocal_176 = "";
						switch (unk_0x63A6486593EC7EC3(0, 2))
						{
							case 0:
								sLocal_176 = "gar_open_1_right";
								break;
							
							case 1:
								sLocal_176 = "gar_open_2_right";
								break;
						}
					}
					else
					{
						sLocal_176 = "";
						switch (unk_0x63A6486593EC7EC3(0, 6))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_176 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_176 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_176 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_176 = "gar_open_3_right";
								break;
							}
					}
					unk_0xBBF9037650162761(Local_83.f_73[0 /*4*/], 20f, 0);
					unk_0xA896149A4DE38DEA(Local_83.f_86[0 /*6*/], 20f, 0);
					unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), Local_83.f_73[0 /*4*/], 1, false, 0, 1);
					unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), Local_83.f_73[0 /*4*/].f_3);
					iLocal_120 = unk_0x8383F9C605E523B7(Local_83.f_73[0 /*4*/], 0f, 0f, Local_83.f_73[0 /*4*/].f_3, 2);
					unk_0x8E628F774C748D93(unk_0xFC1458A37D98B502(), iLocal_120, sVar4, sLocal_176, 8f, -8f, 0, 0, 1148846080, 0);
					func_257(1, 1, 1, 0);
					func_256(&(Local_83[0 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
					Local_56.f_3 = 4;
				}
				Local_56.f_112 = unk_0xC0765AFBFA616644(vVar5, "v_garagem_sp");
				if (unk_0x2C2E1E35924B9FF2(Local_56.f_112))
				{
					if (!unk_0x1A595E6882473810(Local_56.f_112))
					{
						unk_0xFF9ADA7B95619F7E(Local_56.f_112);
					}
					StringCopy(&Global_32583, "v_garagem_sp", 32);
				}
				if (!iLocal_172)
				{
					if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
					{
						iVar20 = func_263(Local_56);
						func_61(&vVar21, iVar20);
						vVar6 = { vVar21 };
						unk_0x32C900DD9B686F75(vVar6, 20f, 0);
					}
					else
					{
						unk_0x32C900DD9B686F75(vVar7, 20f, 0);
					}
				}
				unk_0x872F1C1F8587CCC7(&(Local_131.f_9), 25);
				func_244(198,0043f, -999,7775f, -100f, 50f, 0);
				func_112(Local_56);
				func_112(26);
				func_112(29);
				func_112(32);
				func_112(28);
				func_112(31);
				func_112(34);
				func_112(27);
				func_112(30);
				func_112(33);
				system::settimera(0);
				iLocal_174 = 0;
				break;
			
			case 4:
				bVar22 = true;
				if (!unk_0x40189ECE75CF9724())
				{
				}
				else if (unk_0x64D098EABB2F6F13())
				{
				}
				else
				{
					bVar22 = false;
				}
				if (unk_0x2C2E1E35924B9FF2(Local_56.f_112))
				{
					if (!unk_0x1A595E6882473810(Local_56.f_112))
					{
						unk_0xFF9ADA7B95619F7E(Local_56.f_112);
					}
					StringCopy(&Global_32583, "v_garagem_sp", 32);
				}
				else
				{
					Local_56.f_112 = unk_0xC0765AFBFA616644(vVar5, "v_garagem_sp");
				}
				if (func_243())
				{
				}
				else
				{
					bVar22 = false;
				}
				if (unk_0x8EA3C8E091EA5BA4(Local_56.f_110) && unk_0xA088EF935178C2F3(Local_56.f_110))
				{
					if (unk_0xCED06F4C77332FC6(Local_56.f_110))
					{
						bVar22 = false;
					}
					if (IntToFloat(system::timera()) <= (Local_83[0 /*15*/].f_14 * 1000f))
					{
						bVar22 = false;
					}
				}
				else if (unk_0x8EA3C8E091EA5BA4(Local_56.f_111) && unk_0xA088EF935178C2F3(Local_56.f_111))
				{
					if (unk_0xCED06F4C77332FC6(Local_56.f_111))
					{
						bVar22 = false;
					}
					if (IntToFloat(system::timera()) <= (Local_83[0 /*15*/].f_14 * 1000f))
					{
						bVar22 = false;
					}
				}
				else
				{
					bVar22 = false;
				}
				if (unk_0xD56F740235B1E8F0(iLocal_120))
				{
					fVar23 = unk_0x463C4747B41E35A3(iLocal_120);
					if (fVar23 < 0,4f)
					{
						bVar22 = false;
					}
				}
				if (bVar22)
				{
					unk_0xAE83ED4C9081AE6F(800);
					Local_56.f_3 = 5;
				}
				break;
			
			case 5:
				if (unk_0x3E9CABD07B829173())
				{
					iVar24 = unk_0xD0CA83418A236CB4();
					unk_0x4AFBCBFDE748D4E0(iVar24, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, true);
					unk_0x922FC70048B5A79D(iVar24, "hold", (2250f / 1000f));
					func_257(0, 1, 1, 0);
					unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
					if (unk_0x8EA3C8E091EA5BA4(Local_56.f_110))
					{
						unk_0x7849794435F39D49(Local_56.f_110, false);
						unk_0x02934BABFD4CD384(Local_56.f_110, 0);
					}
					if (unk_0x8EA3C8E091EA5BA4(Local_56.f_111))
					{
						unk_0x7849794435F39D49(Local_56.f_111, false);
						unk_0x02934BABFD4CD384(Local_56.f_111, 0);
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_178))
					{
						unk_0xB18E1DBC397238E1(iLocal_178, true, 0);
						unk_0xEDC33A771FAEB393(iLocal_178, false);
						iLocal_178 = 0;
					}
					unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
					unk_0xE6ABE74AEC92281D(8);
					if (unk_0xD56F740235B1E8F0(iLocal_120))
					{
						unk_0x0DE51FACDA4C8C80(iLocal_120);
					}
					iLocal_120 = -1;
					unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
					unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 194,5394f, -1026,32f, -100f, 1, false, 0, 1);
					unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 334,1665f);
					unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), true);
					unk_0xBB9A3C553EECB180(0f);
					unk_0x7C9705890EF6612E(0f, 1065353216);
					system::settimera(0);
					Local_56.f_3 = 6;
				}
				break;
			
			case 6:
				func_242(Local_56);
				if (unk_0x3E9CABD07B829173() && system::timera() > 2250)
				{
					unk_0xFCCDDE0E48CF9588(sVar4);
					func_241();
					if (unk_0x40189ECE75CF9724())
					{
						unk_0x81BCCFFE3F019672();
					}
					unk_0x59C3AC31C7544A28(800);
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
					unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), false);
					system::settimera(0);
					iLocal_156 = 0;
					iLocal_172 = 0;
					Local_56.f_3 = 10;
				}
				break;
			
			case 3:
				func_242(Local_56);
				bVar25 = true;
				if (!unk_0x40189ECE75CF9724())
				{
				}
				else if (unk_0x64D098EABB2F6F13())
				{
				}
				else
				{
					bVar25 = false;
				}
				if (unk_0x2C2E1E35924B9FF2(Local_56.f_112))
				{
					if (!unk_0x1A595E6882473810(Local_56.f_112))
					{
						unk_0xFF9ADA7B95619F7E(Local_56.f_112);
					}
					StringCopy(&Global_32583, "v_garagem_sp", 32);
				}
				else
				{
					Local_56.f_112 = unk_0xC0765AFBFA616644(vVar5, "v_garagem_sp");
				}
				if (func_243())
				{
				}
				else
				{
					bVar25 = false;
				}
				if (unk_0x8EA3C8E091EA5BA4(Local_56.f_110) && unk_0xA088EF935178C2F3(Local_56.f_110))
				{
					if (unk_0xCED06F4C77332FC6(Local_56.f_110))
					{
						bVar25 = false;
					}
					if (IntToFloat(system::timera()) <= (Local_83[1 /*15*/].f_14 * 1000f))
					{
						bVar25 = false;
					}
				}
				else if (unk_0x8EA3C8E091EA5BA4(Local_56.f_111) && unk_0xA088EF935178C2F3(Local_56.f_111))
				{
					if (unk_0xCED06F4C77332FC6(Local_56.f_111))
					{
						bVar25 = false;
					}
					if (IntToFloat(system::timera()) <= (Local_83[1 /*15*/].f_14 * 1000f))
					{
						bVar25 = false;
					}
				}
				else
				{
					bVar25 = false;
				}
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					Var26 = { 0f, 0f, 0f };
					Var26.f_3 = 0f;
					func_233(unk_0xFC1458A37D98B502(), Local_83.f_86[0 /*6*/], Local_83.f_66[0 /*3*/], ((Local_83[1 /*15*/].f_14 * 1000f) - 500f), Var26, 2, &fVar3);
				}
				if (bVar25)
				{
					func_241();
					system::settimera(0);
					unk_0xAE83ED4C9081AE6F(800);
					Local_56.f_3 = 35;
				}
				break;
			
			case 35:
				bVar27 = true;
				func_242(Local_56);
				if (IntToFloat(system::timera()) <= (Local_83.f_61[1] * 1000f))
				{
					bVar27 = false;
				}
				if (bVar27)
				{
					func_241();
					func_257(0, 1, 1, 0);
					unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
					if (unk_0x8EA3C8E091EA5BA4(Local_56.f_110))
					{
						unk_0x7849794435F39D49(Local_56.f_110, false);
						unk_0x02934BABFD4CD384(Local_56.f_110, 0);
					}
					if (unk_0x8EA3C8E091EA5BA4(Local_56.f_111))
					{
						unk_0x7849794435F39D49(Local_56.f_111, false);
						unk_0x02934BABFD4CD384(Local_56.f_111, 0);
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_178))
					{
						unk_0xB18E1DBC397238E1(iLocal_178, true, 0);
						unk_0xEDC33A771FAEB393(iLocal_178, false);
						iLocal_178 = 0;
					}
					unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
					unk_0xE6ABE74AEC92281D(8);
					if (unk_0x40189ECE75CF9724())
					{
						unk_0x81BCCFFE3F019672();
					}
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						iVar2 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
						if (unk_0x6ADD12BF4D6D2587(iVar2) && unk_0xB8DE76287EDC4957(iVar2, 0))
						{
							iVar28 = func_263(Local_56);
							func_61(&Var29, iVar28);
							unk_0xBD8D47FDC6902B2D(iVar2, Var29, 1, false, 0, 1);
							unk_0x48ED7B2293A96722(iVar2, Var29.f_3);
							unk_0x6147908AB85766AA(iVar2, 1);
							unk_0xA15269351F50F113(iVar2, false, true, 0);
							unk_0xBAB8785EE2F06BBE(iVar2, 4);
							unk_0xEFC34D031A268FCA(iVar2, 1, 0);
							unk_0xEFC34D031A268FCA(iVar2, 0, 0);
							unk_0x47E2FD029BB8567C(iVar2, false);
							unk_0xD38F266C132F2897(iVar2, false, false, false, false, false, false, 0, false);
							unk_0x4F8A35D7CBC17327(unk_0xFC1458A37D98B502(), iVar2, 0);
							unk_0xEDC33A771FAEB393(iVar2, false);
							Var30.f_9 = 49;
							Var30.f_59 = 2;
							func_32(iVar2, &Var30);
							func_113(iVar28, &Var30, 0f, 0f, 0f, -1f, 145);
							func_30(iVar28, iVar2, 1);
							func_232(iVar2);
						}
						unk_0xBB9A3C553EECB180(0f);
						unk_0x7C9705890EF6612E(0f, 1065353216);
					}
					iVar31 = unk_0xD1A659E6867D8FF6(unk_0xFC1458A37D98B502(), &uVar0, -1);
					iVar32 = 0;
					while (iVar32 < iVar31)
					{
						if ((unk_0x6ADD12BF4D6D2587(uVar0[iVar32]) && !unk_0x3AB6A1A9084FB0A4(uVar0[iVar32])) && unk_0x4759A34EB65CCA39(uVar0[iVar32], unk_0x7C65CFD05F3B9CE9(unk_0x9EB17624F44A8DA4())))
						{
							unk_0xAA93B7B448E10E40(uVar0[iVar32], 206,802f, -1018,011f, -100f, 0, 0, 1);
						}
						iVar32++;
					}
					system::settimera(0);
					iLocal_156 = 0;
					iLocal_172 = 0;
					unk_0x59C3AC31C7544A28(800);
					Local_56.f_3 = 10;
				}
				break;
			
			case 10:
				if (system::timera() < 7000 || !Global_104555.f_32429.f_4800)
				{
					if (!Global_104555.f_32429.f_4800)
					{
						if (iLocal_156 == 0)
						{
							func_186("CAR_GAR_05", -1);
							StringCopy(&cLocal_165, "CAR_GAR_05", 16);
							bVar1 = true;
							if (system::timera() >= 7000)
							{
								system::settimera(0);
								iLocal_156++;
							}
						}
						else if (iLocal_156 == 1)
						{
							func_186("CAR_GAR_06", -1);
							StringCopy(&cLocal_165, "CAR_GAR_06", 16);
							bVar1 = true;
							if (system::timera() >= 7000)
							{
								system::settimera(0);
								Global_104555.f_32429.f_4800 = 1;
							}
						}
					}
					else
					{
						func_186("CAR_GAR_EXIT", -1);
						StringCopy(&cLocal_165, "CAR_GAR_EXIT", 16);
						bVar1 = true;
					}
				}
				else
				{
					Global_104555.f_32429.f_4800 = 1;
				}
				iVar33 = 0;
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					if (iLocal_115 != -1)
					{
						func_69(&iLocal_115);
					}
					iVar2 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					if (unk_0x6ADD12BF4D6D2587(iVar2) && unk_0xB8DE76287EDC4957(iVar2, 0))
					{
						if (unk_0xAC6FC114B15F95EC(iVar2) || unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
						{
							if (!(unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && !unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502())))
							{
								if ((((unk_0xBAE4B95B10A2442D(0, 71) != 0f || unk_0xE8C126B7ADBB9D63(0, 71)) || unk_0xF2B58F79D29425B4(0, 71)) || unk_0x4CD14B4B1E8BD8BA(0, 71)) || unk_0x5A632962B08A1872(0, 71))
								{
									iVar33 = 1;
								}
								if ((((unk_0xBAE4B95B10A2442D(0, 72) != 0f || unk_0xE8C126B7ADBB9D63(0, 72)) || unk_0xF2B58F79D29425B4(0, 72)) || unk_0x4CD14B4B1E8BD8BA(0, 72)) || unk_0x5A632962B08A1872(0, 72))
								{
									iVar33 = 1;
								}
							}
						}
					}
				}
				else
				{
					unk_0x6450931B826B49D9(sVar4);
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 191,0491f, -1026,318f, -105f, 198,0297f, -1026,322f, -96,81246f, 2,0625f, 0, true, 0) && func_273(unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502()), 180f, 90f))
					{
						if (iLocal_114 != -1)
						{
							func_69(&iLocal_114);
						}
						if (iLocal_115 == -1)
						{
							func_188(&iLocal_115, 3, "WEB_VEH_EXIT", 0, 0, 0, 0);
						}
						if (!iLocal_114 != -1 && !iLocal_115 == -1)
						{
							if (func_183(iLocal_115, 1))
							{
								func_69(&iLocal_115);
								iVar33 = 1;
							}
						}
					}
					else if (iLocal_115 != -1)
					{
						func_69(&iLocal_115);
					}
				}
				if (iLocal_159)
				{
					iVar33 = 1;
				}
				if (iVar33 && !func_231())
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || iLocal_159)
					{
						system::settimera(0);
						unk_0x32C900DD9B686F75(Local_83.f_73[2 /*4*/], 20f, 0);
						if (iLocal_115 != -1)
						{
							func_69(&iLocal_115);
						}
						Local_56.f_3 = 12;
					}
					else if (unk_0x3A801AA34DD821BE(sVar4))
					{
						sLocal_176 = "";
						switch (unk_0x63A6486593EC7EC3(0, 6))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_176 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_176 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_176 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_176 = "gar_open_3_right";
								break;
						}
						iLocal_120 = unk_0x8383F9C605E523B7(Local_83.f_73[1 /*4*/], 0f, 0f, Local_83.f_73[1 /*4*/].f_3, 2);
						unk_0x8E628F774C748D93(unk_0xFC1458A37D98B502(), iLocal_120, sVar4, sLocal_176, 8f, -8f, 0, 0, 1148846080, 0);
						func_257(1, 1, 1, 0);
						func_256(&(Local_83[2 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
						unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
						unk_0x32C900DD9B686F75(Local_83.f_73[2 /*4*/], 20f, 0);
						system::settimera(0);
						if (iLocal_115 != -1)
						{
							func_69(&iLocal_115);
						}
						Local_56.f_3 = 11;
					}
					else if (!unk_0xE615029F0D88B6BB(sVar4))
					{
						unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), Local_83.f_73[1 /*4*/], 1, false, 0, 1);
						unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), Local_83.f_73[1 /*4*/].f_3);
						func_257(1, 1, 1, 0);
						func_256(&(Local_83[2 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
						unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
						unk_0x32C900DD9B686F75(Local_83.f_73[2 /*4*/], 20f, 0);
						system::settimera(0);
						if (iLocal_115 != -1)
						{
							func_69(&iLocal_115);
						}
						Local_56.f_3 = 11;
					}
				}
				break;
			
			case 11:
				bVar34 = true;
				if (!unk_0x40189ECE75CF9724())
				{
				}
				else if (unk_0x64D098EABB2F6F13())
				{
				}
				else
				{
					bVar34 = false;
				}
				if (func_243())
				{
				}
				else
				{
					bVar34 = false;
				}
				if (unk_0x8EA3C8E091EA5BA4(Local_56.f_110) && unk_0xA088EF935178C2F3(Local_56.f_110))
				{
					if (unk_0xCED06F4C77332FC6(Local_56.f_110))
					{
						bVar34 = false;
					}
					if (IntToFloat(system::timera()) <= (Local_83[2 /*15*/].f_14 * 1000f))
					{
						bVar34 = false;
					}
				}
				else if (unk_0x8EA3C8E091EA5BA4(Local_56.f_111) && unk_0xA088EF935178C2F3(Local_56.f_111))
				{
					if (unk_0xCED06F4C77332FC6(Local_56.f_111))
					{
						bVar34 = false;
					}
					if (IntToFloat(system::timera()) <= (Local_83[2 /*15*/].f_14 * 1000f))
					{
						bVar34 = false;
					}
				}
				else
				{
					bVar34 = false;
				}
				if (unk_0xD56F740235B1E8F0(iLocal_120))
				{
					fVar35 = unk_0x463C4747B41E35A3(iLocal_120);
					if (fVar35 < 0,4f)
					{
						bVar34 = false;
					}
				}
				if (bVar34)
				{
					iLocal_156 = 0;
					iLocal_172 = 0;
					unk_0xAE83ED4C9081AE6F(800);
					system::settimera(0);
					Local_56.f_3 = 13;
				}
				break;
			
			case 12:
				unk_0x4FB260623DD93924(0, 75, 1);
				if (system::timera() > 500)
				{
					iVar36 = func_230();
					if ((iVar36 == 21 || iVar36 == 22) || iVar36 == 23)
					{
						Var37.f_9 = 49;
						Var37.f_59 = 2;
						func_113(iVar36, &Var37, 0f, 0f, 0f, -1f, 145);
						func_115(iVar36);
					}
					else if (iVar36 != -1)
					{
						if (!iLocal_159)
						{
							func_446(iVar36, 0);
							func_115(iVar36);
						}
					}
					unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
					unk_0x995BFC92D2115309(unk_0xFC1458A37D98B502(), 0, 0);
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
					unk_0xFCCDDE0E48CF9588(sVar4);
					unk_0xAE83ED4C9081AE6F(800);
					Local_56.f_3 = 13;
				}
				break;
			
			case 13:
				if (unk_0x3E9CABD07B829173())
				{
					iVar38 = unk_0xD0CA83418A236CB4();
					unk_0x4AFBCBFDE748D4E0(iVar38, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, true);
					unk_0x922FC70048B5A79D(iVar38, "hold", (2250f / 1000f));
					unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
					if (unk_0x8EA3C8E091EA5BA4(Local_56.f_110))
					{
						unk_0x7849794435F39D49(Local_56.f_110, false);
						unk_0x02934BABFD4CD384(Local_56.f_110, 0);
					}
					if (unk_0x8EA3C8E091EA5BA4(Local_56.f_111))
					{
						unk_0x7849794435F39D49(Local_56.f_111, false);
						unk_0x02934BABFD4CD384(Local_56.f_111, 0);
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_178))
					{
						unk_0xB18E1DBC397238E1(iLocal_178, true, 0);
						unk_0xEDC33A771FAEB393(iLocal_178, false);
						iLocal_178 = 0;
					}
					unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
					unk_0xE6ABE74AEC92281D(8);
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if (!iLocal_159)
						{
							iVar2 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
							if (unk_0x6ADD12BF4D6D2587(iVar2) && unk_0xB8DE76287EDC4957(iVar2, 0))
							{
								unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
								unk_0xBD8D47FDC6902B2D(iVar2, Local_56.f_29.f_70[1 /*3*/], 1, false, 0, 1);
								unk_0x48ED7B2293A96722(iVar2, Local_56.f_29.f_77[1]);
								unk_0xACE486395AA1867D(iVar2, 1084227584);
							}
						}
					}
					else
					{
						if (unk_0xD56F740235B1E8F0(iLocal_120))
						{
							unk_0x0DE51FACDA4C8C80(iLocal_120);
						}
						iLocal_120 = -1;
						unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
						unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), Local_56.f_29.f_70[1 /*3*/], 1, false, 0, 1);
						unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), Local_56.f_29.f_77[1]);
					}
					unk_0xBB9A3C553EECB180(0f);
					unk_0x7C9705890EF6612E(0f, 1065353216);
					system::settimera(0);
					Local_56.f_3 = 14;
				}
				break;
			
			case 14:
				if (unk_0x3E9CABD07B829173() && system::timera() > 2250)
				{
					bVar39 = true;
					if (iLocal_159)
					{
						unk_0x6FF834D85E2DD4C6(iLocal_160);
						if (unk_0x9A0B2ED5055D3F0B(iLocal_160))
						{
							iVar40 = unk_0xEA60F3B426BB095B(iLocal_160, Local_56.f_29.f_70[0 /*3*/], Local_56.f_29.f_77[0], true, true, false);
							if (iLocal_160 == joaat("windsor"))
							{
								unk_0xC7BF27112709A906(iVar40, 0);
							}
							if (unk_0x6ADD12BF4D6D2587(iVar40) && unk_0xB8DE76287EDC4957(iVar40, 0))
							{
								unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iVar40, -1);
								unk_0xF95D8D0BCEC9D59A(iVar40, 0f);
								unk_0x14776E43F90DD454(iLocal_160);
								if (func_116(iLocal_160))
								{
									switch (iLocal_160)
									{
										case joaat("marshall"):
											unk_0xC7BF27112709A906(iVar40, iLocal_111);
											break;
										}
								}
								unk_0x5380482A432E314E(&iVar40);
							}
							iLocal_159 = 0;
						}
						else
						{
							bVar39 = false;
						}
					}
					if (!unk_0x40189ECE75CF9724())
					{
					}
					else if (unk_0x64D098EABB2F6F13())
					{
					}
					else
					{
						bVar39 = false;
					}
					if (bVar39)
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_168) && unk_0xB8DE76287EDC4957(iLocal_168, 0))
						{
							iVar41 = func_49(24);
							if (func_255(&Local_141, 24))
							{
								func_250(&Local_141, func_440());
								if (unk_0x6ADD12BF4D6D2587(iVar41))
								{
									unk_0xC91FE17AD7353B70(&iVar41);
								}
							}
							if (Local_56 == 21)
							{
								unk_0x247EAA2E93D4A021(-89,377f, 92,6583f, 71,2349f, 5f, 1, 0, 0, false);
								unk_0xBD8D47FDC6902B2D(iLocal_168, -89,377f, 92,6583f, 71,2349f, 1, false, 0, 1);
								unk_0x48ED7B2293A96722(iLocal_168, 154,4846f);
								func_248(iLocal_168, -89,377f, 92,6583f, 71,2349f, 154,4846f, 24, 0);
							}
							else if (Local_56 == 22)
							{
								unk_0x247EAA2E93D4A021(-62,0307f, -1839,859f, 25,6787f, 5f, 1, 0, 0, false);
								unk_0xBD8D47FDC6902B2D(iLocal_168, -62,0307f, -1839,859f, 25,6787f, 1, false, 0, 1);
								unk_0x48ED7B2293A96722(iLocal_168, 319,6985f);
								func_248(iLocal_168, -62,0307f, -1839,859f, 25,6787f, 319,6985f, 24, 0);
							}
							else if (Local_56 == 23)
							{
								unk_0x247EAA2E93D4A021(-234,7648f, -1150,311f, 21,9224f, 5f, 1, 0, 0, false);
								unk_0xBD8D47FDC6902B2D(iLocal_168, -234,7648f, -1150,311f, 21,9224f, 1, false, 0, 1);
								unk_0x48ED7B2293A96722(iLocal_168, 270,8741f);
								func_248(iLocal_168, -234,7648f, -1150,311f, 21,9224f, 270,8741f, 24, 0);
							}
							unk_0xACE486395AA1867D(iLocal_168, 1084227584);
						}
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
						{
							iVar2 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
							if (unk_0x6ADD12BF4D6D2587(iVar2) && unk_0xB8DE76287EDC4957(iVar2, 0))
							{
								unk_0xBD8D47FDC6902B2D(iVar2, Local_83.f_66[1 /*3*/], 1, false, 0, 1);
								unk_0x48ED7B2293A96722(iVar2, Local_56.f_29.f_77[0]);
								unk_0xACE486395AA1867D(iVar2, 1084227584);
								if ((iLocal_160 == joaat("monster") || iLocal_160 == joaat("marshall")) || iLocal_160 == joaat("rhino"))
								{
									unk_0x1F0117F8A8E4EC12(iVar2, false);
								}
								else
								{
									unk_0x1F0117F8A8E4EC12(iVar2, true);
								}
								if (unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
								{
									unk_0x622387450247E90D(unk_0xFC1458A37D98B502(), 0, 0, -1);
									unk_0x35963CCE03600881(unk_0xFC1458A37D98B502(), 1);
								}
								unk_0x47E2FD029BB8567C(iVar2, true);
								func_203(func_440(), &iVar2, 3, 1);
							}
							unk_0x59C3AC31C7544A28(800);
							func_257(1, 1, 1, 0);
							func_256(&(Local_83[3 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
							iLocal_175 = 0;
							iLocal_177 = -1;
							Local_56.f_3 = 15;
						}
						else
						{
							unk_0xFCCDDE0E48CF9588(sVar4);
							func_241();
							unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
							if (unk_0x8EA3C8E091EA5BA4(Local_56.f_110))
							{
								unk_0x7849794435F39D49(Local_56.f_110, false);
								unk_0x02934BABFD4CD384(Local_56.f_110, 0);
							}
							if (unk_0x8EA3C8E091EA5BA4(Local_56.f_111))
							{
								unk_0x7849794435F39D49(Local_56.f_111, false);
								unk_0x02934BABFD4CD384(Local_56.f_111, 0);
							}
							if (unk_0x6ADD12BF4D6D2587(iLocal_178))
							{
								unk_0xB18E1DBC397238E1(iLocal_178, true, 0);
								unk_0xEDC33A771FAEB393(iLocal_178, false);
								iLocal_178 = 0;
							}
							unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
							unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
							unk_0xE6ABE74AEC92281D(8);
							unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
							unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), Local_56.f_29.f_70[1 /*3*/], 1, false, 0, 1);
							unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), Local_56.f_29.f_77[1]);
							unk_0x59C3AC31C7544A28(800);
							system::settimera(0);
							func_244(198,0043f, -999,7775f, -100f, 50f, 0);
							unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
							Local_56.f_3 = 16;
						}
						if (Local_56.f_3 != 16)
						{
							unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
						}
						unk_0x4255E93FCCDE108E(false);
						unk_0x9B47B379EE749C38(false);
						system::settimera(0);
						unk_0xBB9A3C553EECB180(0f);
						unk_0x7C9705890EF6612E(0f, 1065353216);
						iVar42 = unk_0xD1A659E6867D8FF6(unk_0xFC1458A37D98B502(), &uVar0, -1);
						iVar43 = 0;
						while (iVar43 < iVar42)
						{
							if ((unk_0x6ADD12BF4D6D2587(uVar0[iVar43]) && !unk_0x3AB6A1A9084FB0A4(uVar0[iVar43])) && unk_0x4759A34EB65CCA39(uVar0[iVar43], unk_0x7C65CFD05F3B9CE9(unk_0x9EB17624F44A8DA4())))
							{
								if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
								{
									iVar2 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
									if ((unk_0x6ADD12BF4D6D2587(iVar2) && unk_0xB8DE76287EDC4957(iVar2, 0)) && unk_0x95EC8AE7E4F33F6E(iVar2) > iVar43)
									{
										unk_0xBB0358802AA14401(uVar0[iVar43], iVar2, iVar43);
									}
								}
								else
								{
									unk_0xAA93B7B448E10E40(uVar0[iVar43], Local_56.f_29.f_70[1 /*3*/], 0, 0, 1);
								}
							}
							iVar43++;
						}
						unk_0xE6ABE74AEC92281D(8);
						iLocal_174 = 0;
					}
				}
				break;
			
			case 15:
				bVar44 = true;
				if (!unk_0x40189ECE75CF9724())
				{
				}
				else if (unk_0x64D098EABB2F6F13())
				{
				}
				else
				{
					bVar44 = false;
				}
				if (func_243())
				{
				}
				else
				{
					bVar44 = false;
				}
				if (unk_0x8EA3C8E091EA5BA4(Local_56.f_110) && unk_0xA088EF935178C2F3(Local_56.f_110))
				{
					if (unk_0xCED06F4C77332FC6(Local_56.f_110))
					{
						bVar44 = false;
					}
					if (IntToFloat(system::timera()) <= (Local_83[3 /*15*/].f_14 * 1000f))
					{
						bVar44 = false;
					}
				}
				else if (unk_0x8EA3C8E091EA5BA4(Local_56.f_111) && unk_0xA088EF935178C2F3(Local_56.f_111))
				{
					if (unk_0xCED06F4C77332FC6(Local_56.f_111))
					{
						bVar44 = false;
					}
					if (IntToFloat(system::timera()) <= (Local_83[3 /*15*/].f_14 * 1000f))
					{
						bVar44 = false;
					}
				}
				else
				{
					bVar44 = false;
				}
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					func_233(unk_0xFC1458A37D98B502(), Local_83.f_86[1 /*6*/], Local_83.f_66[1 /*3*/], ((Local_83[3 /*15*/].f_14 * 1000f) - 500f), Local_83.f_73[2 /*4*/], 3, &fVar3);
				}
				if (iLocal_177 < 1 && func_202(unk_0xFC1458A37D98B502(), 198,0043f, -999,7775f, -100f, 1) > 55f)
				{
					if (iLocal_177 == 0)
					{
						func_244(198,0043f, -999,7775f, -100f, 50f, 0);
					}
					iLocal_177++;
				}
				if (bVar44)
				{
					system::settimera(0);
					Local_56.f_3 = 16;
				}
				else
				{
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
				}
				break;
			
			case 16:
				bVar45 = true;
				if (IntToFloat(system::timera()) <= (Local_83.f_61[3] * 1000f))
				{
					bVar45 = false;
				}
				if (bVar45)
				{
					Local_56.f_3 = 17;
				}
				break;
			
			case 17:
				if (unk_0x2C2E1E35924B9FF2(Local_56.f_112))
				{
					unk_0xA1451353A1AED1A5(Local_56.f_112);
				}
				StringCopy(&Global_32583, "", 32);
				if (unk_0x40189ECE75CF9724())
				{
					unk_0x81BCCFFE3F019672();
				}
				func_201(47, 1);
				func_199(47, 1);
				Global_69678.f_577 = 0;
				if (unk_0x3E9CABD07B829173() || unk_0x2D0EF1D268F33F25())
				{
					unk_0x59C3AC31C7544A28(250);
				}
				system::settimera(0);
				unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
				if (unk_0x8EA3C8E091EA5BA4(Local_56.f_110))
				{
					unk_0x7849794435F39D49(Local_56.f_110, false);
					unk_0x02934BABFD4CD384(Local_56.f_110, 0);
				}
				if (unk_0x8EA3C8E091EA5BA4(Local_56.f_111))
				{
					unk_0x7849794435F39D49(Local_56.f_111, false);
					unk_0x02934BABFD4CD384(Local_56.f_111, 0);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_178))
				{
					unk_0xB18E1DBC397238E1(iLocal_178, true, 0);
					unk_0xEDC33A771FAEB393(iLocal_178, false);
					iLocal_178 = 0;
				}
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					if (unk_0x6ADD12BF4D6D2587(iVar2) && unk_0xB8DE76287EDC4957(iVar2, 0))
					{
						unk_0xBD8D47FDC6902B2D(iVar2, Local_83.f_73[2 /*4*/], 1, false, 0, 1);
						unk_0x48ED7B2293A96722(iVar2, Local_83.f_73[2 /*4*/].f_3);
						unk_0xACE486395AA1867D(iVar2, 1084227584);
						unk_0xBB9A3C553EECB180(0f);
						unk_0x7C9705890EF6612E(0f, 1065353216);
					}
				}
				unk_0x4255E93FCCDE108E(true);
				unk_0x9B47B379EE749C38(true);
				func_257(0, 1, 1, 0);
				unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
				if (iLocal_155 > 0)
				{
					unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), iLocal_155, 0);
					unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
				}
				if (((unk_0x6ADD12BF4D6D2587(iLocal_168) && unk_0x9761C10D57B68069(iLocal_168)) && unk_0xCB234F3DD6FF9368(iLocal_168, 0)) && iLocal_168 != func_49(24))
				{
					unk_0x5380482A432E314E(&iLocal_168);
				}
				unk_0x0EE72DB1CD8A3B86(&(Local_131.f_9), 25);
				iLocal_172 = 0;
				Local_56.f_3 = 18;
				break;
			
			case 18:
				if (unk_0x9F7B586A14398C40())
				{
					Local_56.f_3 = 0;
				}
				break;
		}
	}
	else
	{
		if (Global_69678.f_577)
		{
			func_201(47, 1);
			func_199(47, 1);
			Global_69678.f_577 = 0;
		}
		Local_56.f_3 = 0;
		if (iLocal_115 != -1)
		{
			func_69(&iLocal_115);
		}
	}
	if (Global_69678.f_577)
	{
		unk_0x4AF5BEA0275DB60B();
		func_198();
		func_76(0);
		unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
		unk_0x01B48CB2F72AE113(2, 202);
		unk_0x4FB260623DD93924(0, 37, 1);
		unk_0x4FB260623DD93924(0, 157, 1);
		unk_0x4FB260623DD93924(0, 158, 1);
		unk_0x4FB260623DD93924(0, 159, 1);
		unk_0x4FB260623DD93924(0, 160, 1);
		unk_0x4FB260623DD93924(0, 161, 1);
		unk_0x4FB260623DD93924(0, 162, 1);
		unk_0x4FB260623DD93924(0, 163, 1);
		unk_0x4FB260623DD93924(0, 164, 1);
		unk_0x4FB260623DD93924(0, 165, 1);
		unk_0x4FB260623DD93924(0, 14, 1);
		unk_0x4FB260623DD93924(0, 15, 1);
		unk_0x4FB260623DD93924(0, 53, 1);
		unk_0x4FB260623DD93924(0, 54, 1);
		unk_0x4FB260623DD93924(0, 140, 1);
		unk_0x4FB260623DD93924(0, 141, 1);
		unk_0x4FB260623DD93924(0, 142, 1);
		unk_0x4FB260623DD93924(0, 143, 1);
		unk_0x4FB260623DD93924(0, 143, 1);
		unk_0x4FB260623DD93924(0, 47, 1);
		unk_0x4FB260623DD93924(0, 38, 1);
		unk_0x4FB260623DD93924(0, 22, 1);
		unk_0x4FB260623DD93924(0, 102, 1);
		unk_0x4FB260623DD93924(0, 69, 1);
		unk_0x4FB260623DD93924(0, 70, 1);
		unk_0x4FB260623DD93924(0, 68, 1);
		unk_0x4FB260623DD93924(0, 92, 1);
		unk_0x4FB260623DD93924(0, 99, 1);
		unk_0x4FB260623DD93924(0, 115, 1);
		unk_0x4FB260623DD93924(0, 46, 1);
		unk_0x4FB260623DD93924(0, 25, 1);
	}
	if (!bVar1 && Local_56.f_2 == 0)
	{
		if (unk_0xF491DD47B88AA84E())
		{
			if (!unk_0xAB019B170BF1309C(&cLocal_165))
			{
				if ((((func_187("WEB_VEH_INV") || func_187("WEB_VEH_FULL")) || func_187("CAR_GAR_05")) || func_187("CAR_GAR_06")) || func_187("CAR_GAR_EXIT"))
				{
					unk_0x3E80C2F7BC665259(1);
				}
				StringCopy(&cLocal_165, "", 16);
			}
		}
	}
}

void func_198()//Position - 0x16ED9
{
	Global_17162.f_6 = 1;
}

void func_199(int iParam0, bool bParam1)//Position - 0x16EE7
{
	struct<2> Var0;
	
	Var0 = { func_200(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_31639[Var0.f_1]), Var0);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_31639[Var0.f_1]), Var0);
	}
}

struct<2> func_200(var uParam0)//Position - 0x16F2A
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 6)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_201(int iParam0, bool bParam1)//Position - 0x16F7C
{
	struct<2> Var0;
	
	Var0 = { func_200(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_31632[Var0.f_1]), Var0);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_31632[Var0.f_1]), Var0);
	}
}

float func_202(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x16FBF
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

void func_203(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x16FF9
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_25(iParam0) && unk_0x6ADD12BF4D6D2587(*iParam1)) && unk_0xB8DE76287EDC4957(*iParam1, 0))
	{
		if (iParam2 > Global_104555.f_2353.f_539.f_2387)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_31(*iParam1, iParam0);
		}
		if (unk_0x96E226626970ABA3(*iParam1) != 0)
		{
			unk_0xA0A6811A3E4062D1(*iParam1, 0);
		}
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/] = unk_0x82FF3DFBC3965CC0(*iParam1);
		if (unk_0xFCCAE5538E490D17(*iParam1, &iVar1))
		{
			Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x82FF3DFBC3965CC0(iVar1);
		}
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0xBED420B2B3B64B88(*iParam1);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0xDE523AF6F7B269AB(*iParam1);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0x7C7056D6F2A31BF6(*iParam1, 1);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0x7C7056D6F2A31BF6(*iParam1, 2);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0x7C7056D6F2A31BF6(*iParam1, 3);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0x7C7056D6F2A31BF6(*iParam1, 4);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0x7C7056D6F2A31BF6(*iParam1, 5);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0x7C7056D6F2A31BF6(*iParam1, 6);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0x7C7056D6F2A31BF6(*iParam1, 7);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0x7C7056D6F2A31BF6(*iParam1, 8);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0x7C7056D6F2A31BF6(*iParam1, 9);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0x7C7056D6F2A31BF6(*iParam1, 10);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0x7C7056D6F2A31BF6(*iParam1, 11);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0x7C7056D6F2A31BF6(*iParam1, 12);
		if (unk_0x965BEFCC45024E92(*iParam1, 0))
		{
			iVar2 = unk_0xBFAC036AADDA5F9F(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0x832CFDD4BD296987();
		StringCopy(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0xF2D2D6860D636A58(*iParam1), 16);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0xBB95820E68A4EB0D(*iParam1);
		unk_0xAEC96F2E5A91C606(*iParam1, &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0x0DA0B030029E4E6E(*iParam1, &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0x7869E6E4E193E666(*iParam1, &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0x84EE59E8804FCC8C(*iParam1);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0x55F371CF3DB9BFA1(*iParam1);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0x7E3C3BFAB9ADD960(*iParam1);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0x0260F35A831D6738(*iParam1);
		unk_0x063C5BF33FA1D85E(*iParam1, &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0x378B727FB0126407(*iParam1, 2))
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0x378B727FB0126407(*iParam1, 3))
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0x378B727FB0126407(*iParam1, 0))
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0x378B727FB0126407(*iParam1, 1))
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_104555.f_2353.f_539.f_4297[iParam0] = 10;
		if (unk_0x027824FEED96D97E(*iParam1) >= 0 && func_206(*iParam1, 0, &uVar0))
		{
			func_34(iParam1, &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_104555.f_20088[iParam0 /*43*/].f_40 = 1;
				Global_104555.f_20088[iParam0 /*43*/] = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/];
				Global_104555.f_20088[iParam0 /*43*/].f_3 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_104555.f_20088[iParam0 /*43*/].f_4 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_104555.f_20088[iParam0 /*43*/].f_5 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_104555.f_20088[iParam0 /*43*/].f_6 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_104555.f_20088[iParam0 /*43*/].f_10 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_104555.f_20088[iParam0 /*43*/].f_16 = !Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_104555.f_20088[iParam0 /*43*/].f_19 = { Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_104555.f_20088[iParam0 /*43*/].f_23 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_104555.f_20088[iParam0 /*43*/].f_7 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_104555.f_20088[iParam0 /*43*/].f_8 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_104555.f_20088[iParam0 /*43*/].f_9 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_104555.f_20088[iParam0 /*43*/].f_11 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_104555.f_20088[iParam0 /*43*/].f_12 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_104555.f_20088[iParam0 /*43*/].f_13 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_104555.f_20088[iParam0 /*43*/].f_14 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_104555.f_20088[iParam0 /*43*/].f_15 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_104555.f_20088[iParam0 /*43*/].f_18 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_104555.f_20088[iParam0 /*43*/].f_17 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_104555.f_20088[iParam0 /*43*/].f_24 = unk_0x2E9AFFEE33324CC8(*iParam1, 11) + 1;
				Global_104555.f_20088[iParam0 /*43*/].f_25 = unk_0x2E9AFFEE33324CC8(*iParam1, 12) + 1;
				Global_104555.f_20088[iParam0 /*43*/].f_26 = unk_0x2E9AFFEE33324CC8(*iParam1, 4) + 1;
				Global_104555.f_20088[iParam0 /*43*/].f_27 = unk_0x2E9AFFEE33324CC8(*iParam1, 23) + 1;
				Global_104555.f_20088[iParam0 /*43*/].f_28 = unk_0x2E9AFFEE33324CC8(*iParam1, 14) + 1;
				Global_104555.f_20088[iParam0 /*43*/].f_29 = unk_0x2E9AFFEE33324CC8(*iParam1, 16) + 1;
				Global_104555.f_20088[iParam0 /*43*/].f_30 = unk_0x2E9AFFEE33324CC8(*iParam1, 15) + 1;
				Global_104555.f_20088[iParam0 /*43*/].f_32 = unk_0xBDFD82385482D433(*iParam1);
				Global_104555.f_20088[iParam0 /*43*/].f_33[0] = unk_0xDAAE9CE720D2EF80(*iParam1);
				Global_104555.f_20088[iParam0 /*43*/].f_33[1] = unk_0xF4BBBDC1B6F914DB(*iParam1, 14, 0);
				Global_104555.f_20088[iParam0 /*43*/].f_33[2] = unk_0xF4BBBDC1B6F914DB(*iParam1, 14, 1);
				Global_104555.f_20088[iParam0 /*43*/].f_33[3] = unk_0xF4BBBDC1B6F914DB(*iParam1, 14, 2);
				Global_104555.f_20088[iParam0 /*43*/].f_33[4] = unk_0xF4BBBDC1B6F914DB(*iParam1, 14, 3);
				Global_104555.f_20088[iParam0 /*43*/].f_39 = unk_0x6F73320EB7AD4866(*iParam1);
				Global_104555.f_20088[iParam0 /*43*/].f_31 = func_205(*iParam1);
				Global_104555.f_20088[iParam0 /*43*/].f_33[0] = unk_0x2F6FCAD69B2E4C34(*iParam1);
				unk_0xC3F97DDED7F36247(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_204(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_104555.f_20088[iParam0 /*43*/].f_1));
				unk_0x6E097DBC9C867CBD(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_204(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_104555.f_20088[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_204(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)//Position - 0x17C0D
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (func_139(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
	{
		if ((iParam0 == iVar3 && (!bParam3 || iParam1 == iVar4)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

float func_205(int iParam0)//Position - 0x17C80
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0)) && unk_0x027824FEED96D97E(iParam0) >= 0)
	{
		if (unk_0x6F73320EB7AD4866(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0x6F73320EB7AD4866(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0x6F73320EB7AD4866(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0x6F73320EB7AD4866(iParam0) == 0)
		{
			if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (system::to_float(iVar5) / system::to_float(iVar4));
	return fVar6;
}

int func_206(int iParam0, bool bParam1, var uParam2)//Position - 0x17D30
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xC8A14E3C7BE76201(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	if ((!func_228(iVar0, bParam1, uParam2) && !func_227(unk_0x9EB17624F44A8DA4())) && !func_212(iParam0))
	{
		return 0;
	}
	if (func_227(unk_0x9EB17624F44A8DA4()))
	{
		if (func_211(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_207(unk_0x9EB17624F44A8DA4()) && (unk_0xF9DDB1C0875FD9E0(iVar0) || unk_0x849A8CFD71854E02(iVar0)))
	{
		bVar1 = true;
	}
	if ((((((unk_0x8F1CCD9A61E026D8(iParam0) && unk_0x82FF3DFBC3965CC0(iParam0) != -32236122) && unk_0x82FF3DFBC3965CC0(iParam0) != 177270108) && unk_0x82FF3DFBC3965CC0(iParam0) != 387748548) && unk_0x82FF3DFBC3965CC0(iParam0) != 1502869817) && unk_0x82FF3DFBC3965CC0(iParam0) != -1881846085) && !bVar1)
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x3A711520F83BAE98())
	{
		if ((func_62(iParam0) && unk_0x82FF3DFBC3965CC0(iParam0) != joaat("sentinel2")) && unk_0x82FF3DFBC3965CC0(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_207(int iParam0)//Position - 0x17E90
{
	if (iParam0 != func_210())
	{
		if (func_209(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_208(Global_2422736[iParam0 /*420*/].f_324.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_208(int iParam0)//Position - 0x17ED6
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
	}
	return -1;
}

int func_209(int iParam0, bool bParam1, bool bParam2)//Position - 0x182BD
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

int func_210()//Position - 0x18307
{
	return -1;
}

int func_211(int iParam0)//Position - 0x18310
{
	switch (iParam0)
	{
		case -2118308144:
		case 1489874736:
		case -1693015116:
		case -692292317:
		case -1435527158:
			return 1;
			break;
	}
	return 0;
}

int func_212(int iParam0)//Position - 0x18345
{
	if (func_226(unk_0x9EB17624F44A8DA4()) || func_225(unk_0x9EB17624F44A8DA4()))
	{
		if (func_213(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_213(int iParam0)//Position - 0x18374
{
	if ((!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0)) || unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		return 0;
	}
	if (func_216(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xB80A4DA4C06A76F1(iParam0, "Player_Vehicle"))
	{
		if (unk_0x2786E663D1846FFC(iParam0, "Player_Vehicle") == unk_0xDFD4F88AAFDE2371(unk_0x9EB17624F44A8DA4()))
		{
			if (func_214(iParam0))
			{
				return 1;
			}
			switch (unk_0x82FF3DFBC3965CC0(iParam0))
			{
				case 159274291:
				case 433954513:
				case 1483171323:
				case 886810209:
				case 1561920505:
				case -410205223:
				case 903794909:
				case -391595372:
				case 1254014755:
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_214(int iParam0)//Position - 0x1842B
{
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	if (func_215(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_215(int iParam0)//Position - 0x18461
{
	switch (iParam0)
	{
		case 562680400:
		case 1897744184:
		case -32236122:
		case 884483972:
		case -1210451983:
		case 1356124575:
		case -1924433270:
		case -1242608589:
		case -212993243:
			return 1;
			break;
	}
	return 0;
}

int func_216(int iParam0, bool bParam1)//Position - 0x184AE
{
	switch (unk_0x82FF3DFBC3965CC0(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_218(unk_0x82FF3DFBC3965CC0(iParam0), 0))
			{
				if (Global_2512808.f_289 == iParam0)
				{
					return 1;
				}
				else if (func_217(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_217(int iParam0)//Position - 0x18509
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2436181.f_611[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_218(int iParam0, int iParam1)//Position - 0x18543
{
	if (iParam1 == 0)
	{
		if (func_224(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_223();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_13545)
			{
				return func_222();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_13546)
			{
				return func_222();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_13544)
			{
				return func_222();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_13547)
			{
				return func_222();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_13549)
			{
				return func_222();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_221();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_17990)
			{
				return func_220();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_17992)
			{
				return func_220();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_17996)
			{
				return func_220();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_17993)
			{
				return func_220();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_18000)
			{
				return func_220();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_17998)
			{
				return func_220();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_18003)
			{
				return func_220();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_19922)
			{
				return func_219();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_19923)
			{
				return func_219();
			}
			break;
	}
	return 0;
}

bool func_219()//Position - 0x18723
{
	return unk_0x21EA5D4DC72DE119(2067165443);
}

bool func_220()//Position - 0x18734
{
	return unk_0x21EA5D4DC72DE119(-957277403);
}

bool func_221()//Position - 0x18745
{
	return unk_0x21EA5D4DC72DE119(210122941);
}

bool func_222()//Position - 0x18756
{
	return unk_0x21EA5D4DC72DE119(-1894522408);
}

bool func_223()//Position - 0x18767
{
	return unk_0x21EA5D4DC72DE119(1630677557);
}

int func_224(int iParam0, int iParam1)//Position - 0x18778
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_13545)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_13546)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_13544)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_13547)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_13549)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_13548)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_17990)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_17992)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_17996)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_17993)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18000)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_17998)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18003)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_19922)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_19923)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
	}
	return 0;
}

int func_225(int iParam0)//Position - 0x189EB
{
	if (iParam0 != func_210())
	{
		if (func_209(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_210())
			{
				return func_208(Global_2422736[iParam0 /*420*/].f_324.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_226(int iParam0)//Position - 0x18A4A
{
	if (iParam0 != func_210())
	{
		if (func_209(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_210())
			{
				return func_208(Global_2422736[iParam0 /*420*/].f_324.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_227(int iParam0)//Position - 0x18AAA
{
	if (iParam0 != func_210())
	{
		if (func_209(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_208(Global_2422736[iParam0 /*420*/].f_324.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_228(int iParam0, bool bParam1, var uParam2)//Position - 0x18AF1
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == 1938952078) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_207(unk_0x9EB17624F44A8DA4()) && (unk_0xF9DDB1C0875FD9E0(iParam0) || unk_0x849A8CFD71854E02(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((!unk_0xC1514CFCEC68CA4A(iParam0) && !unk_0x125CDF69FA6EF560(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != 1502869817) && iParam0 != -1881846085) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x3A711520F83BAE98())
	{
		if (func_229(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x3A711520F83BAE98())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_229(int iParam0)//Position - 0x18F09
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

int func_230()//Position - 0x18F32
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (unk_0x6ADD12BF4D6D2587(iVar0) && unk_0xB8DE76287EDC4957(iVar0, 0))
		{
			if (iVar0 == Global_69678.f_484[21])
			{
				return 21;
			}
			if (iVar0 == Global_69678.f_484[26])
			{
				return 26;
			}
			if (iVar0 == Global_69678.f_484[29])
			{
				return 29;
			}
			if (iVar0 == Global_69678.f_484[32])
			{
				return 32;
			}
			if (iVar0 == Global_69678.f_484[22])
			{
				return 22;
			}
			if (iVar0 == Global_69678.f_484[27])
			{
				return 27;
			}
			if (iVar0 == Global_69678.f_484[30])
			{
				return 30;
			}
			if (iVar0 == Global_69678.f_484[33])
			{
				return 33;
			}
			if (iVar0 == Global_69678.f_484[23])
			{
				return 23;
			}
			if (iVar0 == Global_69678.f_484[28])
			{
				return 28;
			}
			if (iVar0 == Global_69678.f_484[31])
			{
				return 31;
			}
			if (iVar0 == Global_69678.f_484[34])
			{
				return 34;
			}
		}
	}
	return -1;
}

bool func_231()//Position - 0x19063
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

void func_232(int iParam0)//Position - 0x19078
{
	if ((unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0)) && iParam0 == Global_70583)
	{
		Global_104555.f_32429.f_5588 = 0;
		Global_70583 = 0;
	}
}

int func_233(int iParam0, struct<4> Param1, var uParam2, var uParam3, vector3 vParam4, float fParam5, struct<4> Param6, int iParam7, float fParam8)//Position - 0x190B1
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	vVar0 = { Param1 };
	vVar1 = { Param1.f_3 };
	vVar2 = { vParam4 };
	vVar3 = { Param1.f_3 };
	if (iLocal_174 == 0)
	{
		iVar4 = unk_0xDFD115BB10FE46A9(iParam0, 0);
		iLocal_178 = iVar4;
		unk_0x6147908AB85766AA(iLocal_178, 1);
		unk_0x4BEFCD5DAE410A90(iLocal_178, 1);
		unk_0xACE486395AA1867D(iLocal_178, 1084227584);
		unk_0xA15269351F50F113(iLocal_178, true, true, 0);
		if (unk_0x8C82A58D7895B29C(iParam0))
		{
			unk_0x622387450247E90D(iParam0, 0, 0, -1);
			unk_0x35963CCE03600881(iParam0, 1);
		}
		vVar5 = { unk_0xB3328BA8976B416C(iLocal_178, 1) };
		fLocal_179 = (vVar5.z - vVar0.z);
		unk_0xBD8D47FDC6902B2D(iLocal_178, vVar0 + Vector(-10f, 0f, 0f), 1, false, 0, 1);
		if (unk_0xB8DE76287EDC4957(iLocal_178, 0))
		{
			unk_0xBAB8785EE2F06BBE(iLocal_178, 3);
		}
		iLocal_180 = unk_0x53C562FD2B9E3AB0();
		iLocal_174 = 1;
	}
	if (iLocal_174 == 1)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_178) && unk_0xB8DE76287EDC4957(iLocal_178, 0))
		{
			fVar6 = system::to_float(iLocal_180);
			fVar7 = (fVar6 + fParam5);
			fVar8 = func_240(system::to_float(unk_0x53C562FD2B9E3AB0()), fVar6, fVar7);
			fVar8 = (fVar8 - fVar6);
			fVar8 = (fVar8 / fParam5);
			if (iParam7 == 1)
			{
				fVar8 = func_239(fVar8);
			}
			else if (iParam7 == 2)
			{
				fVar8 = func_238(fVar8);
			}
			else if (iParam7 == 3)
			{
				fVar8 = func_236(fVar8);
			}
			fVar8 = (fVar8 * fParam5);
			fVar8 = (fVar8 + fVar6);
			unk_0x4FB260623DD93924(0, 72, 1);
			unk_0xAA93B7B448E10E40(iLocal_178, func_234(vVar0 + Vector(fLocal_179, 0f, 0f), vVar2 + Vector(fLocal_179, 0f, 0f), fVar6, fVar7, fVar8), 0, 0, 1);
			if (iLocal_175 && !unk_0x8C82A58D7895B29C(iParam0))
			{
				unk_0x59AF3B40AE222194(iLocal_178, func_234((0f - vVar1.x), (0f - vVar1.y), (vVar1.z + 180f), (0f - vVar3.x), (0f - vVar3.y), (vVar3.z + 180f), fVar6, fVar7, fVar8), 2, 1);
			}
			else
			{
				if (!unk_0x3AB6A1A9084FB0A4(iParam0))
				{
					if (unk_0x8C82A58D7895B29C(iParam0))
					{
						unk_0x2217C45231E6A537(iParam0, 236, true);
						unk_0x2217C45231E6A537(iParam0, 309, true);
					}
				}
				unk_0x59AF3B40AE222194(iLocal_178, func_234(vVar1, vVar3, fVar6, fVar7, fVar8), 2, 1);
			}
			unk_0xB18E1DBC397238E1(iLocal_178, false, 0);
			unk_0xEDC33A771FAEB393(iLocal_178, true);
		}
		else
		{
			iLocal_174 = 2;
			return 0;
		}
		if (system::to_float(unk_0x53C562FD2B9E3AB0()) > (system::to_float(iLocal_180) + fParam5) && system::to_float(unk_0x53C562FD2B9E3AB0()) > ((system::to_float(iLocal_180) + fParam5) + 2600f))
		{
			iLocal_174 = 2;
			return 0;
		}
	}
	if (iLocal_174 == 2)
	{
		unk_0x2217C45231E6A537(iParam0, 236, false);
		unk_0x2217C45231E6A537(iParam0, 309, false);
		if (unk_0x6ADD12BF4D6D2587(iLocal_178))
		{
			if (!func_21(Param6, 0f, 0f, 0f, 0))
			{
				unk_0xBD8D47FDC6902B2D(iLocal_178, Param6, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(iLocal_178, Param6.f_3);
				unk_0xACE486395AA1867D(iLocal_178, 1084227584);
			}
			unk_0xB18E1DBC397238E1(iLocal_178, true, 0);
			unk_0xEDC33A771FAEB393(iLocal_178, false);
			iLocal_178 = 0;
		}
		if (unk_0x8C82A58D7895B29C(iParam0))
		{
			unk_0x6EC874A9FE87276C(iParam0, 0);
		}
		return 1;
	}
	return 0;
}

Vector3 func_234(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4)//Position - 0x193A9
{
	return func_235(vParam0.x, vParam1.x, fParam2, fParam3, fParam4), func_235(vParam0.y, vParam1.y, fParam2, fParam3, fParam4), func_235(vParam0.z, vParam1.z, fParam2, fParam3, fParam4);
}

float func_235(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x193E3
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

float func_236(float fParam0)//Position - 0x193FF
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = system::sin(func_237(((fParam0 * 3,141593f) * 0,5f)));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_237(float fParam0)//Position - 0x1943B
{
	return (fParam0 * 57,29578f);
}

float func_238(float fParam0)//Position - 0x1944B
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (1f - system::cos(func_237(((fParam0 * 3,141593f) * 0,5f))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_239(float fParam0)//Position - 0x19489
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (0,5f * (1f - system::cos(func_237((fParam0 * 3,141593f)))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_240(float fParam0, float fParam1, float fParam2)//Position - 0x194C7
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

void func_241()//Position - 0x194EE
{
	Global_69678.f_553 = 1;
	Global_69678.f_554 = 0;
}

void func_242(var uParam0)//Position - 0x19506
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = uParam0;
		iVar1 = (9 + (iVar2 - 21));
		if (iVar0 > 0)
		{
			iVar2 = (iVar2 + 2 + iVar0 * 3);
			iVar1 = ((9 + (iVar2 - 21)) - 2);
		}
		iLocal_49[iVar2] = Global_104555.f_32429.f_69[iVar1 /*78*/].f_66;
		if (iLocal_49[iVar2] != 0)
		{
			if (!unk_0xC80D31E4B587871C(uLocal_48[iVar2], 2))
			{
				unk_0x6FF834D85E2DD4C6(iLocal_49[iVar2]);
				unk_0x872F1C1F8587CCC7(&(uLocal_48[iVar2]), 2);
				func_444(iVar2);
			}
		}
		iVar0++;
	}
}

bool func_243()//Position - 0x19594
{
	return !Global_69678.f_553;
}

void func_244(vector3 vParam0, float fParam1, bool bParam2)//Position - 0x195A4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_61(&(Global_69678.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0xBE3C4023003180FC(vParam0, Global_69678.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_245(iVar0);
			}
		}
		iVar0++;
	}
}

void func_245(int iParam0)//Position - 0x195F4
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_61(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xB8DE76287EDC4957(Global_69678.f_139[iParam0], 0))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Global_69678.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xDD29FF4BAB8AFF9C(Global_69678.f_139[iParam0], true, 1);
				unk_0xC91FE17AD7353B70(&(Global_69678.f_139[iParam0]));
			}
		}
		Global_69678[iParam0] = 1;
		if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_67(iParam0, 0)) && Global_70587.f_66 == 0) && Global_104555.f_32429.f_1958[Global_69678.f_555[0 /*21*/].f_14] != 0) && Global_104555.f_32429.f_1958[Global_69678.f_555[0 /*21*/].f_14] > 3) && (!func_246(0, Global_69678.f_555[0 /*21*/].f_12) || !func_246(1, Global_69678.f_555[0 /*21*/].f_12)))
			{
				func_114(&(Global_104555.f_32429.f_69[Global_69678.f_555[0 /*21*/].f_14 /*78*/]), &Global_70587);
				Global_70665 = Global_104555.f_32429.f_5591;
			}
			func_446(iParam0, 0);
		}
	}
}

int func_246(int iParam0, int iParam1)//Position - 0x19766
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_247(&(Global_104555.f_32429.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_39(Global_104555.f_32429.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_247(var uParam0)//Position - 0x197D8
{
	return *uParam0;
}

void func_248(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x197E3
{
	struct<60> Var0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[25]) && unk_0xB8DE76287EDC4957(Global_69678.f_484[25], 0))
			{
				if (Global_69678.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x8F1CCD9A61E026D8(iParam0) || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("bus")) || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_249(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_32(iParam0, &Var0);
		if (func_21(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { unk_0xB3328BA8976B416C(iParam0, 1) };
			fParam2 = unk_0xF0371FE6E2BF9599(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) != joaat("vehicle_gen_controller"))
			{
				Global_70666 = unk_0x8B948C59217A295D(unk_0x436287B7DB306165());
			}
		}
		func_113(iParam3, &Var0, vParam1, fParam2, func_46(iParam0));
		func_30(iParam3, iParam0, 0);
	}
}

void func_249(int iParam0)//Position - 0x1990C
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_115(iParam0);
	func_446(iParam0, 0);
}

int func_250(var uParam0, int iParam1)//Position - 0x19933
{
	int iVar0;
	
	if (!func_38(uParam0->f_66))
	{
		return 0;
	}
	if (unk_0x6ADD12BF4D6D2587(Global_70584))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
		
		default:
			return 0;
			break;
	}
	if (!func_246(0, iParam1))
	{
		Global_104555.f_32429.f_5592[iVar0] = 0;
	}
	else if (!func_246(1, iParam1))
	{
		Global_104555.f_32429.f_5592[iVar0] = 1;
	}
	func_251(iParam1, unk_0x8C8DF9FA5116BB9A(uParam0->f_66));
	func_114(uParam0, &(Global_104555.f_32429.f_5038[iVar0 /*157*/][Global_104555.f_32429.f_5592[iVar0] /*78*/]));
	Global_104555.f_32429.f_5592[iVar0]++;
	if (Global_104555.f_32429.f_5592[iVar0] >= func_247(&(Global_104555.f_32429.f_5038[iVar0 /*157*/])))
	{
		Global_104555.f_32429.f_5592[iVar0] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_92302[iVar0 /*98*/] == uParam0->f_66 && unk_0x74C475EB8E73D398(&(Global_92302[iVar0 /*98*/].f_27), &(uParam0->f_1)))
		{
			Global_92302[iVar0 /*98*/] = 0;
		}
		iVar0++;
	}
	return 1;
}

void func_251(int iParam0, char* sParam1)//Position - 0x19A8B
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (!Global_104555.f_32429.f_5596[iParam0])
	{
		switch (iParam0)
		{
			case 0:
				func_252("IMPOUND_HELPM", sParam1, 2, unk_0x63A6486593EC7EC3(1000, 6000), -1, 10000, 1, 0, 0, 0);
				break;
			
			case 1:
				func_252("IMPOUND_HELPF", sParam1, 2, unk_0x63A6486593EC7EC3(1000, 6000), -1, 10000, 2, 0, 0, 0);
				break;
			
			case 2:
				func_252("IMPOUND_HELPT", sParam1, 2, unk_0x63A6486593EC7EC3(1000, 6000), -1, 10000, 4, 0, 0, 0);
				break;
		}
		Global_104555.f_32429.f_5596[iParam0] = 1;
	}
}

void func_252(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x19B3A
{
	func_253(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_253(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x19B5A
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
		func_254();
	}
}

void func_254()//Position - 0x19D2D
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

int func_255(var uParam0, int iParam1)//Position - 0x19E4D
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (!func_61(&(Global_69678.f_555[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_114(&(Global_104555.f_32429.f_69[Global_69678.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
	}
	return 1;
}

int func_256(var uParam0, var uParam1, var uParam2)//Position - 0x19E98
{
	if (unk_0x8EA3C8E091EA5BA4(*uParam1))
	{
		unk_0x02934BABFD4CD384(*uParam1, 0);
	}
	if (unk_0x8EA3C8E091EA5BA4(*uParam2))
	{
		unk_0x02934BABFD4CD384(*uParam2, 0);
	}
	*uParam1 = unk_0x4562AC7F06CD71B3("DEFAULT_SCRIPTED_CAMERA", false);
	*uParam2 = unk_0x4562AC7F06CD71B3("DEFAULT_SCRIPTED_CAMERA", false);
	if (unk_0x8EA3C8E091EA5BA4(*uParam1) && unk_0x8EA3C8E091EA5BA4(*uParam2))
	{
		unk_0xA215B2F25E63FA31(*uParam1, *uParam0);
		unk_0xBEBD5CAE3510CD2A(*uParam1, uParam0->f_3, 2);
		unk_0xE43C573FE3C5D758(*uParam1, uParam0->f_12);
		unk_0xA215B2F25E63FA31(*uParam2, uParam0->f_6);
		unk_0xBEBD5CAE3510CD2A(*uParam2, uParam0->f_6.f_3, 2);
		unk_0xE43C573FE3C5D758(*uParam2, uParam0->f_12);
		unk_0x7E4FCDC8BAD0CF6D(*uParam1, "HAND_SHAKE", uParam0->f_13);
		unk_0x7E4FCDC8BAD0CF6D(*uParam2, "HAND_SHAKE", uParam0->f_13);
		if (uParam0->f_14 > 0,1f)
		{
			unk_0xF10DA1539629CC3F(*uParam2, *uParam1, system::round((uParam0->f_14 * 1000f)), 1, 1);
		}
		else
		{
			unk_0x7849794435F39D49(*uParam1, true);
		}
		unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
		return 1;
	}
	return 0;
}

void func_257(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x19F9F
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_262(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_78())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_261(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_262(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_261(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_259(unk_0x9EB17624F44A8DA4())) && !func_91(unk_0x9EB17624F44A8DA4(), 0)) && !func_258())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_259(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_258()//Position - 0x1A0B8
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

int func_259(int iParam0)//Position - 0x1A0D5
{
	if (func_91(iParam0, 0))
	{
		return 1;
	}
	if (func_260())
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

bool func_260()//Position - 0x1A117
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_261(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x1A128
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

void func_262(int iParam0)//Position - 0x1A15B
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

int func_263(int iParam0)//Position - 0x1A17E
{
	func_61(&(Global_69678.f_555[0 /*21*/]), iParam0);
	switch (iParam0)
	{
		case 21:
			if (Global_69678.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_264(26))
			{
				return 26;
			}
			if (!func_264(29))
			{
				return 29;
			}
			if (!func_264(32))
			{
				return 32;
			}
			break;
		
		case 22:
			if (Global_69678.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_264(27))
			{
				return 27;
			}
			if (!func_264(30))
			{
				return 30;
			}
			if (!func_264(33))
			{
				return 33;
			}
			break;
		
		case 23:
			if (Global_69678.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_264(28))
			{
				return 28;
			}
			if (!func_264(31))
			{
				return 31;
			}
			if (!func_264(34))
			{
				return 34;
			}
			break;
	}
	return -1;
}

bool func_264(int iParam0)//Position - 0x1A280
{
	return func_67(iParam0, 0);
}

void func_265(int iParam0, bool bParam1)//Position - 0x1A28F
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_267(iParam0, &iVar1);
	if (!unk_0x74C475EB8E73D398("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0x3E2AFE2AD370D62E(iVar1))
			{
				return;
			}
			if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == iVar1)
			{
				func_199(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0x3E2AFE2AD370D62E(iVar1))
			{
				return;
			}
			if (func_266(iParam0))
			{
				func_199(iParam0, 0);
			}
		}
		unk_0xF041CE5E4A02F602(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_266(int iParam0)//Position - 0x1A31A
{
	struct<2> Var0;
	
	Var0 = { func_200(iParam0) };
	if (Var0.f_1 != -1 && unk_0xC80D31E4B587871C(Global_31639[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

var func_267(int iParam0, int iParam1)//Position - 0x1A34E
{
	struct<5> Var0;
	
	Var0 = { func_268(iParam0) };
	*iParam1 = unk_0xC0765AFBFA616644(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_268(int iParam0)//Position - 0x1A373
{
	struct<5> Var0;
	vector3 vVar1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447,4833f, 280,3197f, 77,5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906,786f, -573,7576f, 19,0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399,973f, 1148,756f, 113,3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598,6379f, -1608,399f, 26,0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556,5089f, 286,3181f, 81,1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111,7116f, -11,912f, 69,5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274,934f, -1714,726f, 53,7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147,433f, -2201,37f, 3,688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320,9934f, 265,2515f, 82,1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425,564f, -244,3f, 15,8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377,153f, -717,567f, 10,0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245,1564f, 370,211f, 104,7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173,1176f, -1003,279f, -99,9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199,9715f, -999,6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228,6058f, -992,0537f, -99,9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854,254f, 3686,739f, 33,2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444,8907f, 6013,587f, 30,7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522,845f, 3707,965f, 19,9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717,2994f, -974,4271f, 23,9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717,299f, -974,4271f, 23,9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449,785f, 4983,825f, 45,8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087,195f, -1988,445f, 28,649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982,233f, -2160,382f, 28,4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479,0568f, -1316,825f, 28,2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005,663f, -478,3461f, 49,0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			vVar1 = { func_269(1, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			vVar1 = { func_269(2, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			vVar1 = { func_269(3, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			vVar1 = { func_269(4, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			vVar1 = { func_269(5, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			vVar1 = { func_269(6, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			vVar1 = { func_269(7, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049531[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			vVar1 = { func_269(35, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			vVar1 = { func_269(36, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			vVar1 = { func_269(37, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			vVar1 = { func_269(38, 0) };
			Var0 = { -20,1f, -580,8f, 91,3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			vVar1 = { func_269(39, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			vVar1 = { func_269(40, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			vVar1 = { func_269(41, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			vVar1 = { func_269(42, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			vVar1 = { func_269(43, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470,3754f, -698,5207f, 51,5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460,6133f, -691,5562f, 69,9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300,633f, -997,4288f, -99,9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374,2012f, 416,9688f, 142,5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16,29585f, -684,0385f, 33,50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341,1f, -1000f, -99,2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199,9716f, -1018,954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388,001f, -618,4197f, 30,8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			vVar1 = { func_269(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			vVar1 = { func_269(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			vVar1 = { func_269(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			vVar1 = { func_269(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			vVar1 = { func_269(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			vVar1 = { func_269(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			vVar1 = { func_269(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			vVar1 = { func_269(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			vVar1 = { func_269(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			vVar1 = { func_269(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			vVar1 = { func_269(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			vVar1 = { func_269(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			vVar1 = { func_269(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			vVar1 = { func_269(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			vVar1 = { func_269(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			vVar1 = { func_269(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			vVar1 = { func_269(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			vVar1 = { func_269(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			vVar1 = { func_269(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			vVar1 = { func_269(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			vVar1 = { func_269(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			vVar1 = { func_269(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			vVar1 = { func_269(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			vVar1 = { func_269(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			vVar1 = { func_269(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			vVar1 = { func_269(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			vVar1 = { func_269(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			vVar1 = { func_269(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			vVar1 = { func_269(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			vVar1 = { func_269(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			vVar1 = { func_269(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			vVar1 = { func_269(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			vVar1 = { func_269(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			vVar1 = { func_269(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			vVar1 = { func_269(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			vVar1 = { func_269(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			vVar1 = { func_269(91, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			vVar1 = { func_269(97, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			vVar1 = { func_269(103, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			vVar1 = { func_269(104, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			vVar1 = { func_269(105, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			vVar1 = { func_269(106, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			vVar1 = { func_269(107, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			vVar1 = { func_269(108, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			vVar1 = { func_269(109, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			vVar1 = { func_269(110, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			vVar1 = { func_269(111, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			vVar1 = { func_269(112, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			vVar1 = { func_269(113, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			vVar1 = { func_269(114, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			vVar1 = { func_269(103, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			vVar1 = { func_269(106, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			vVar1 = { func_269(109, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			vVar1 = { func_269(112, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938,3077f, -3196,112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512,5f, 4852f, -62,6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61,9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047,6f, -232,3503f, 38,0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520,0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266,802f, -3014,849f, -49,4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974,9203f, -3000,065f, -40,647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969,5376f, -3000,411f, -48,647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094,997f, -3100,012f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059,995f, -3100f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010,008f, -3100f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372,6707f, 405,5235f, 144,5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282,0588f, -955,17f, 85,3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342,7946f, -997,4225f, -99,7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260,3268f, -997,4298f, -100,0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108,2369f, -753,5364f, 233,1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135,3226f, -746,3677f, 253,1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108,2572f, -753,5342f, 44,7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228,6161f, -992,053f, -99,9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199,9716f, -999,6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173,1165f, -1003,28f, -99,9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796,7f, -39,1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694,4f, 5898,9f, -152,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121,8f, 5516,3f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279,6f, 5233,2f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158,6f, 5467,1f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705,9f, 5838,5f, -152,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316,5f, 5184f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276,1f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090,2f, 5559,2f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808,6f, -39,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721,8f, 5781,4f, -146,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780,8f, 5703,4f, -136,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868,1f, 5659,2f, -126,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218,2f, 5321,2f, -85,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278,5f, 4859,7f, -44,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187,2f, 5419,8f, -96,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344,7f, 5136,4f, -75,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363,4f, 5039,5f, -65,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049,3f, 5602,1f, -107,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337,8f, 4944,3f, -55,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961,5f, 5646,9f, -117,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345,0041f, 4842,001f, -59,9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279,9322f, -1337,49f, 23,7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_269(int iParam0, bool bParam1)//Position - 0x1C5E3
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761,0982f, 317,6259f, 169,5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761,1888f, 317,6295f, 216,0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795,3856f, 340,0188f, 152,7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778,5056f, 332,3779f, 212,1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258,1807f, -950,6853f, 70,0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285,0051f, -957,6552f, 85,3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471,882f, -530,7484f, 62,34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471,882f, -530,7484f, 49,72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463,15f, -540,2369f, 74,2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885,3702f, -451,4775f, 119,327f };
			Var0.f_3 = { 0f, 0f, 27,55617f };
			break;
		
		case 36:
			Var0 = { -913,0385f, -438,4284f, 114,3997f };
			Var0.f_3 = { 0f, 0f, -153,3093f };
			break;
		
		case 37:
			Var0 = { -892,5499f, -430,4789f, 88,25368f };
			Var0.f_3 = { 0f, 0f, 116,9193f };
			break;
		
		case 38:
			Var0 = { -35,0462f, -576,317f, 82,90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10,3788f, -590,7431f, 93,02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22,2487f, -589,1461f, 80,2305f };
			Var0.f_3 = { 0f, 0f, 69,88f };
			break;
		
		case 40:
			Var0 = { -900,6311f, -376,7462f, 78,27306f };
			Var0.f_3 = { 0f, 0f, 26,92611f };
			break;
		
		case 41:
			Var0 = { -929,483f, -374,5104f, 102,2329f };
			Var0.f_3 = { 0f, 0f, -152,5531f };
			break;
		
		case 63:
			Var0 = { -914,4202f, -375,8189f, 114,4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617,1647f, 64,6042f, 100,8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584,2015f, 42,7133f, 86,4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609,5665f, 50,2203f, 98,3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = { 0f, 0f, -63,5f };
			break;
		
		case 75:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = { 0f, 0f, -71,5f };
			break;
		
		case 76:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = { 0f, 0f, 40,5f };
			break;
		
		case 77:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = { 0f, 0f, -14,5f };
			break;
		
		case 79:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = { 0f, 0f, 4,5f };
			break;
		
		case 81:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374,2012f, 416,9688f, 142,6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573,098f, -4085,806f, 9,7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342,8157f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260,3297f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572,187f, -570,8315f, 109,9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383,954f, -476,7112f, 73,507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138,0029f, -629,739f, 170,2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74,8895f, -817,6883f, 244,8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100,764f, -3159,384f, -34,9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005,806f, -3157,67f, -36,0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576,571f, -569,7595f, 85,5f };
				Var0.f_3 = { 0f, 0f, 36,1f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571,254f, -566,5865f, 85,5f };
				Var0.f_3 = { 0f, 0f, -53,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568,098f, -571,9171f, 85,5f };
				Var0.f_3 = { 0f, 0f, -143,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384,518f, -475,8657f, 56,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384,538f, -475,8829f, 48,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378,994f, -477,2481f, 56,1f };
				Var0.f_3 = { 0f, 0f, -81,1f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186,5683f, -576,4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96,16f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113,886f, -564,3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110,96f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134,6568f, -635,1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9,04f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79,0479f, -822,6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70,3086f, -819,5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79,9861f, -818,425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

void func_270(int iParam0, bool bParam1)//Position - 0x1D199
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_267(iParam0, &iVar1);
	if (!unk_0x74C475EB8E73D398("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1 && !unk_0x9E0125A2D9D9A6F8(iVar1))
		{
			if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == iVar1)
			{
				func_201(iParam0, 1);
				return;
			}
			unk_0x1B16E13F2B83CDD4(iVar1, 1);
		}
		else if (!bParam1 && unk_0x9E0125A2D9D9A6F8(iVar1))
		{
			if (func_271(iParam0))
			{
				func_201(iParam0, 0);
			}
			unk_0x1B16E13F2B83CDD4(iVar1, 0);
		}
		else if (!bParam1)
		{
			if (func_271(iParam0))
			{
				func_201(iParam0, 0);
			}
		}
	}
}

int func_271(int iParam0)//Position - 0x1D23F
{
	struct<2> Var0;
	
	Var0 = { func_200(iParam0) };
	if (Var0.f_1 != -1 && unk_0xC80D31E4B587871C(Global_31632[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

int func_272()//Position - 0x1D273
{
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || func_263(Local_56) != -1)
	{
		return 1;
	}
	return 0;
}

int func_273(float fParam0, float fParam1, float fParam2)//Position - 0x1D29C
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_274(int iParam0)//Position - 0x1D311
{
	switch (iParam0)
	{
		case 21:
		case 26:
		case 29:
		case 32:
			return 0;
			break;
		
		case 23:
		case 28:
		case 31:
		case 34:
			return 2;
			break;
		
		case 22:
		case 27:
		case 30:
		case 33:
			return 1;
			break;
	}
	return 145;
}

int func_275(int iParam0, var uParam1)//Position - 0x1D37F
{
	uParam1->f_73[1 /*4*/] = { 194,674f, -1026,984f, -100f };
	uParam1->f_73[1 /*4*/].f_3 = 285f;
	*(uParam1[2 /*15*/]) = { 198,9908f, -1025,956f, -98,8981f };
	(uParam1[2 /*15*/])->f_3 = { -4,5679f, -0,0266f, 110,7275f };
	(uParam1[2 /*15*/])->f_6 = { 198,6016f, -1026,103f, -98,9313f };
	(uParam1[2 /*15*/])->f_6.f_3 = { -5,3499f, -0,0266f, 110,7275f };
	(uParam1[2 /*15*/])->f_12 = 25,2218f;
	(uParam1[2 /*15*/])->f_13 = 0,2f;
	(uParam1[2 /*15*/])->f_14 = 3,5f;
	uParam1->f_61[2] = 0f;
	switch (iParam0)
	{
		case 21:
			*(uParam1[0 /*15*/]) = { -84,4891f, 95,2463f, 72,7397f };
			(uParam1[0 /*15*/])->f_3 = { -1,0236f, 0,0007f, -126,7439f };
			(uParam1[0 /*15*/])->f_6 = { -84,1568f, 94,9229f, 72,7318f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -1,0236f, 0,0007f, -127,1499f };
			(uParam1[0 /*15*/])->f_12 = 25,1687f;
			(uParam1[0 /*15*/])->f_13 = 0,2f;
			(uParam1[0 /*15*/])->f_14 = 3,5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -62,5434f, 80,2917f, 70,5644f };
			uParam1->f_73[0 /*4*/].f_3 = 345f;
			*(uParam1[1 /*15*/]) = { -61,075f, 81,2555f, 84,5867f };
			(uParam1[1 /*15*/])->f_3 = { -69,9271f, 0f, 103,892f };
			(uParam1[1 /*15*/])->f_6 = { -60,6284f, 81,2036f, 84,5867f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -73,4239f, 0f, 108,7693f };
			(uParam1[1 /*15*/])->f_12 = 29,9579f;
			(uParam1[1 /*15*/])->f_13 = 0,2f;
			(uParam1[1 /*15*/])->f_14 = 3f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -60,3859f, 78,4352f, 70,5249f };
			uParam1->f_86[0 /*6*/] = { -67,0129f, 81,9471f, 70,5249f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, -117,9206f };
			*(uParam1[3 /*15*/]) = { -61,8119f, 77,3506f, 80,3259f };
			(uParam1[3 /*15*/])->f_3 = { -57,747f, 0f, 34,1968f };
			(uParam1[3 /*15*/])->f_6 = { -61,8119f, 77,3506f, 80,3259f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -48,0008f, 0f, 49,6137f };
			(uParam1[3 /*15*/])->f_12 = 30,0324f;
			(uParam1[3 /*15*/])->f_13 = 0,2f;
			(uParam1[3 /*15*/])->f_14 = 3f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -62,6272f, 79,7534f, 70,6161f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, 65f };
			uParam1->f_66[1 /*3*/] = { -79,1059f, 87,1091f, 70,5157f };
			uParam1->f_73[2 /*4*/] = { -88,4f, 70,8f, 72f };
			uParam1->f_73[2 /*4*/].f_3 = 150f;
			return 1;
			break;
		
		case 22:
			*(uParam1[0 /*15*/]) = { -66,6121f, -1842,122f, 26,6941f };
			(uParam1[0 /*15*/])->f_3 = { 3,4131f, -0,0009f, 17,9566f };
			(uParam1[0 /*15*/])->f_6 = { -66,5137f, -1841,616f, 26,7211f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 3,1669f, -0,0009f, 18,0384f };
			(uParam1[0 /*15*/])->f_12 = 25,1856f;
			(uParam1[0 /*15*/])->f_13 = 0,2f;
			(uParam1[0 /*15*/])->f_14 = 3,5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -72,5431f, -1820,447f, 25,9424f };
			uParam1->f_73[0 /*4*/].f_3 = 140f;
			*(uParam1[1 /*15*/]) = { -72,7256f, -1823,283f, 41,0951f };
			(uParam1[1 /*15*/])->f_3 = { -81,9335f, 0f, -58,1415f };
			(uParam1[1 /*15*/])->f_6 = { -72,9027f, -1822,998f, 41,0951f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80,6657f, 0f, -29,6554f };
			(uParam1[1 /*15*/])->f_12 = 29,9864f;
			(uParam1[1 /*15*/])->f_13 = 0,2f;
			(uParam1[1 /*15*/])->f_14 = 3f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -76,7939f, -1816,77f, 26,6473f };
			uParam1->f_86[0 /*6*/] = { -69,2183f, -1823,258f, 25,9421f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, 49,4214f };
			*(uParam1[3 /*15*/]) = { -70,9492f, -1820,936f, 45,3628f };
			(uParam1[3 /*15*/])->f_3 = { -85,5171f, 0f, 68,3257f };
			(uParam1[3 /*15*/])->f_6 = { -70,9836f, -1821,023f, 45,3628f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -89,4995f, 0f, 68,3257f };
			(uParam1[3 /*15*/])->f_12 = 28,4803f;
			(uParam1[3 /*15*/])->f_13 = 0,2f;
			(uParam1[3 /*15*/])->f_14 = 4f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -75,3386f, -1818,249f, 26,0241f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, -132,7699f };
			uParam1->f_66[1 /*3*/] = { -63,988f, -1829,39f, 26,423f };
			uParam1->f_73[2 /*4*/] = { -49,738f, -1830,147f, 25,5591f };
			uParam1->f_73[2 /*4*/].f_3 = 317,3589f;
			return 1;
			break;
		
		case 23:
			*(uParam1[0 /*15*/]) = { -237,074f, -1170,391f, 23,479f };
			(uParam1[0 /*15*/])->f_3 = { 7,619f, 0f, -69,7398f };
			(uParam1[0 /*15*/])->f_6 = { -237,2166f, -1169,672f, 23,4931f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 7,619f, 0f, -71,3391f };
			(uParam1[0 /*15*/])->f_12 = 40,0015f;
			(uParam1[0 /*15*/])->f_13 = 0,2f;
			(uParam1[0 /*15*/])->f_14 = 3,5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -218,0289f, -1162,392f, 22,0242f };
			uParam1->f_73[0 /*4*/].f_3 = 15f;
			*(uParam1[1 /*15*/]) = { -219,5507f, -1159,951f, 36,8399f };
			(uParam1[1 /*15*/])->f_3 = { -81,7188f, 0f, 170,4291f };
			(uParam1[1 /*15*/])->f_6 = { -219,1442f, -1160,019f, 36,8399f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80,5726f, 0f, -168,992f };
			(uParam1[1 /*15*/])->f_12 = 30,0319f;
			(uParam1[1 /*15*/])->f_13 = 0,2f;
			(uParam1[1 /*15*/])->f_14 = 4f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -211,6438f, -1162,407f, 22,0234f };
			uParam1->f_86[0 /*6*/] = { -221,6438f, -1162,407f, 22,0234f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, -90f };
			*(uParam1[3 /*15*/]) = { -218,5983f, -1159,061f, 31,4452f };
			(uParam1[3 /*15*/])->f_3 = { -62,4689f, 0f, -142,2907f };
			(uParam1[3 /*15*/])->f_6 = { -218,6533f, -1159,067f, 31,4471f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -62,4689f, 0f, -172,3491f };
			(uParam1[3 /*15*/])->f_12 = 30f;
			(uParam1[3 /*15*/])->f_13 = 0,2f;
			(uParam1[3 /*15*/])->f_14 = 3f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -214,5676f, -1162,658f, 21,9591f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, 90f };
			uParam1->f_66[1 /*3*/] = { -227,7619f, -1162,848f, 22,0085f };
			uParam1->f_73[2 /*4*/] = { -221,6f, -1156,3f, 22,6f };
			uParam1->f_73[2 /*4*/].f_3 = 0f;
			return 1;
			break;
	}
	return 0;
}

int func_276()//Position - 0x1DB70
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

void func_277()//Position - 0x1DB8C
{
	int iVar0;
	struct<5> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	struct<2> Var6;
	float fVar7;
	int iVar8;
	vector3 vVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if ((((((unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || !func_25(iLocal_129))
	{
		return;
	}
	if (!Global_68215)
	{
		if (Global_104555.f_32429.f_1982[iLocal_129 /*939*/].f_626[iLocal_143] != -15)
		{
			if (!Global_69678[Global_104555.f_32429.f_1982[iLocal_129 /*939*/].f_313[iLocal_143]])
			{
				if (func_332(func_50(), Global_104555.f_32429.f_1982[iLocal_129 /*939*/].f_626[iLocal_143]))
				{
					iVar0 = Global_104555.f_32429.f_1982[iLocal_129 /*939*/][iLocal_143];
					func_330(iVar0, iLocal_143, iLocal_129);
					func_61(&Var1, Global_104555.f_32429.f_1982[iLocal_129 /*939*/].f_313[iLocal_143]);
					if (Var1.f_4 == 0)
					{
					}
					else
					{
						func_446(Global_104555.f_32429.f_1982[iLocal_129 /*939*/].f_313[iLocal_143], 1);
					}
					Global_104555.f_32429.f_1982[iLocal_129 /*939*/].f_626[iLocal_143] = -15;
				}
			}
		}
		iLocal_143++;
		if (iLocal_143 >= 312)
		{
			iLocal_143 = 0;
		}
	}
	if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) != Local_56.f_7 || Local_56.f_2 == 99)
	{
		if (Local_56.f_5 != -1)
		{
			func_69(&(Local_56.f_5));
		}
		if (Local_56.f_2 > 0)
		{
			unk_0x3E80C2F7BC665259(1);
		}
		Local_56.f_7 = unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502());
		Local_56.f_5 = -1;
		Local_56.f_2 = 0;
		Local_56.f_4 = 0;
		if (bLocal_142)
		{
			if (unk_0xF491DD47B88AA84E())
			{
				unk_0x3E80C2F7BC665259(1);
			}
			unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
			if (unk_0x8EA3C8E091EA5BA4(Local_56.f_110))
			{
				unk_0x7849794435F39D49(Local_56.f_110, false);
				unk_0x02934BABFD4CD384(Local_56.f_110, 0);
			}
			if (unk_0x8EA3C8E091EA5BA4(Local_56.f_111))
			{
				unk_0x7849794435F39D49(Local_56.f_111, false);
				unk_0x02934BABFD4CD384(Local_56.f_111, 0);
			}
			unk_0xB3A8974D2C811672(unk_0xFC1458A37D98B502(), true, 0);
			unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), false);
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
				unk_0xC7CB065B66F66C5F(unk_0x9EB17624F44A8DA4(), 0);
			}
			iVar2 = unk_0xC733212BF9066BDF();
			if (unk_0x6ADD12BF4D6D2587(iVar2) && unk_0xB8DE76287EDC4957(iVar2, 0))
			{
				unk_0xB3A8974D2C811672(iVar2, true, 0);
				unk_0xEDC33A771FAEB393(iVar2, false);
				if (unk_0xCB234F3DD6FF9368(iVar2, 1))
				{
					unk_0x5380482A432E314E(&iVar2);
				}
			}
			iVar3 = 5000;
			iVar4 = unk_0x53C562FD2B9E3AB0();
			while (!unk_0x4AA5DF29899B96D6() && (unk_0x53C562FD2B9E3AB0() - iVar4) < iVar3)
			{
				system::wait(0);
			}
			if (unk_0x2C2E1E35924B9FF2(Local_56.f_112))
			{
				unk_0xA1451353A1AED1A5(Local_56.f_112);
			}
			StringCopy(&Global_32583, "", 32);
			if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
			{
				func_270(47, 1);
				func_265(47, 1);
			}
			unk_0x81BCCFFE3F019672();
			unk_0x97580242FB655BD5();
			unk_0x4255E93FCCDE108E(true);
			unk_0x9B47B379EE749C38(true);
			func_257(0, 1, 1, 0);
			bLocal_142 = false;
			Global_25487 = 0;
		}
	}
	bVar5 = false;
	if ((((((((((((!bLocal_142 && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, 0, true, 0)) || (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) && !Local_56.f_29.f_69)) || (!unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()) && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))) || (!bLocal_142 && func_67(Local_56, 5))) || (!bLocal_142 && unk_0xE8C126B7ADBB9D63(2, 199))) || (!bLocal_142 && unk_0x0F30C1F1717A6437())) || !func_328(0)) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x1E5BEC57385A771D(unk_0xFC1458A37D98B502())) || unk_0x622E1FD3CE5B007F(unk_0xFC1458A37D98B502())) || Global_25383) || (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0x27C8A4034A05DC21(unk_0xFC1458A37D98B502())))
	{
		if (Local_56.f_2 > 0 && Local_56.f_2 != 90)
		{
			iLocal_157 = 1;
			Local_56.f_2 = 99;
		}
		bVar5 = true;
	}
	fVar7 = 20f;
	iVar8 = 3;
	switch (Local_56.f_2)
	{
		case 0:
			if ((((Local_56 != -1 && func_67(Local_56, 0)) && !func_67(Local_56, 5)) && !bLocal_158) && !bVar5)
			{
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, 0, true, 0) && !unk_0xF491DD47B88AA84E())
				{
					Var6 = { Local_56.f_29.f_63 };
					StringConCat(&Var6, "_01", 16);
					func_188(&(Local_56.f_5), 3, &Var6, 0, 0, 0, 0);
					Local_56.f_2 = 1;
				}
			}
			break;
		
		case 1:
			if (func_183(Local_56.f_5, 1))
			{
				if (func_327(iLocal_129) < Local_56.f_29.f_67)
				{
					Local_56.f_4 = unk_0x53C562FD2B9E3AB0();
					func_69(&(Local_56.f_5));
					iLocal_126 = 0;
					Local_56.f_2 = 90;
				}
				else
				{
					iLocal_126 = 0;
					Local_56.f_4 = unk_0x53C562FD2B9E3AB0();
					func_69(&(Local_56.f_5));
					Local_56.f_2 = 2;
				}
			}
			break;
		
		case 2:
			iLocal_126++;
			if (iLocal_126 >= 3)
			{
				Var6 = { Local_56.f_29.f_63 };
				StringConCat(&Var6, "_02", 16);
				func_188(&(Local_56.f_5), 3, &Var6, 0, 0, 0, 0);
				Local_56.f_2 = 3;
			}
			break;
		
		case 3:
			if (func_183(Local_56.f_5, 1))
			{
				if (func_327(iLocal_129) < Local_56.f_29.f_67)
				{
					Local_56.f_4 = unk_0x53C562FD2B9E3AB0();
					Local_56.f_2 = 90;
				}
				else
				{
					unk_0x4AFBCBFDE748D4E0(-1, "PROPERTY_PURCHASE_MEDIUM", "HUD_PROPERTY_SOUNDSET", true);
					bLocal_142 = false;
					if ((Local_56 == 15 || Local_56 == 17) || Local_56 == 16)
					{
						Local_57.f_4 = 113;
						bLocal_142 = true;
					}
					else if (Local_56 == 18 || Local_56 == 19)
					{
						Local_57.f_4 = 115;
						bLocal_142 = true;
					}
					else if (Local_56 == 12 || Local_56 == 13)
					{
						Local_57.f_4 = 114;
						bLocal_142 = true;
					}
					else if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
					{
						Local_57.f_4 = 116;
						bLocal_142 = true;
					}
					Local_57 = unk_0xD704C81492296A37("MIDSIZED_MESSAGE");
					Local_57.f_1 = 0;
					Local_57.f_3 = 0;
					Local_57.f_2 = 0;
					iLocal_144 = 1;
					Global_25487 = 1;
					if (bLocal_142)
					{
						if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
						{
							func_270(47, 0);
							func_265(47, 0);
							Local_56.f_112 = unk_0xC0765AFBFA616644(198,3659f, -1020,273f, -100f, "v_garagem_sp");
							if (unk_0x2C2E1E35924B9FF2(Local_56.f_112))
							{
								if (!unk_0x1A595E6882473810(Local_56.f_112))
								{
									unk_0xFF9ADA7B95619F7E(Local_56.f_112);
								}
								StringCopy(&Global_32583, "v_garagem_sp", 32);
							}
						}
						unk_0x8FA21D9CF7681249(unk_0x9EB17624F44A8DA4(), 1);
						unk_0x81BCCFFE3F019672();
						Local_56.f_4 = unk_0x53C562FD2B9E3AB0();
						Local_56.f_2 = 4;
					}
					else
					{
						Local_56.f_2 = 8;
					}
					func_69(&(Local_56.f_5));
				}
			}
			break;
		
		case 4:
			bVar10 = true;
			if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
			{
				Local_56.f_112 = unk_0xC0765AFBFA616644(198,3659f, -1020,273f, -100f, "v_garagem_sp");
				if ((!unk_0x2C2E1E35924B9FF2(Local_56.f_112) || unk_0x9E0125A2D9D9A6F8(Local_56.f_112)) || unk_0x3E2AFE2AD370D62E(Local_56.f_112))
				{
					func_270(47, 0);
					func_265(47, 0);
					bVar10 = false;
				}
			}
			if (bVar10)
			{
				if (Local_56 == 12)
				{
					fVar7 = 95f;
					iVar8 = 2;
				}
				else if (Local_56 == 13)
				{
					fVar7 = 150f;
					iVar8 = 2;
				}
				else if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
				{
					fVar7 = 150f;
					iVar8 = 2;
				}
				vVar9 = { system::cos((Local_56.f_29.f_14.f_3.f_2 + 90f)), system::sin((Local_56.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
				{
					if (unk_0x32C900DD9B686F75(200,4651f, -1020,631f, -100f, 50f, 0) || (unk_0x53C562FD2B9E3AB0() - Local_56.f_4) > 3500)
					{
						Local_56.f_4 = unk_0x53C562FD2B9E3AB0();
						Local_56.f_2 = 5;
					}
				}
				else if (unk_0xDCBF71199890F355(Local_56.f_29.f_14, vVar9, fVar7, iVar8) || (unk_0x53C562FD2B9E3AB0() - Local_56.f_4) > 3500)
				{
					Local_56.f_4 = unk_0x53C562FD2B9E3AB0();
					Local_56.f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (((unk_0x40189ECE75CF9724() && unk_0x64D098EABB2F6F13()) && (!unk_0x2C2E1E35924B9FF2(Local_56.f_112) || unk_0x1A595E6882473810(Local_56.f_112))) || (unk_0x53C562FD2B9E3AB0() - Local_56.f_4) > 10000)
			{
				Local_56.f_4 = unk_0x53C562FD2B9E3AB0();
				Local_56.f_2 = 6;
			}
			break;
		
		case 6:
			if ((unk_0x53C562FD2B9E3AB0() - Local_56.f_4) > 1000)
			{
				if ((unk_0x6ADD12BF4D6D2587(iLocal_168) && unk_0x9761C10D57B68069(iLocal_168)) && unk_0xCB234F3DD6FF9368(iLocal_168, 1))
				{
					unk_0x5380482A432E314E(&iLocal_168);
				}
				iLocal_168 = unk_0xC733212BF9066BDF();
				if ((((unk_0x6ADD12BF4D6D2587(iLocal_168) && unk_0xB8DE76287EDC4957(iLocal_168, 0)) && !unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(iLocal_168))) && !unk_0x849A8CFD71854E02(unk_0x82FF3DFBC3965CC0(iLocal_168))) && !unk_0x428C7026AD2721BA(unk_0x82FF3DFBC3965CC0(iLocal_168)))
				{
					if (!unk_0x9761C10D57B68069(iLocal_168))
					{
						unk_0xDD29FF4BAB8AFF9C(iLocal_168, false, 0);
					}
				}
				else
				{
					iLocal_168 = 0;
				}
				unk_0xB3A8974D2C811672(unk_0xFC1458A37D98B502(), false, 0);
				if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), true);
				}
				if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 16);
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 32);
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 128);
					unk_0xC7CB065B66F66C5F(unk_0x9EB17624F44A8DA4(), 1);
				}
				func_257(1, 1, 1, 0);
				unk_0x84CDD933AFA470D2();
				unk_0x3E80C2F7BC665259(1);
				vVar9 = { system::cos((Local_56.f_29.f_14.f_3.f_2 + 90f)), system::sin((Local_56.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if (!Local_56.f_29.f_69)
				{
					unk_0x593C7101945C1D9E(Local_56.f_29.f_14, vVar9);
				}
				if (!unk_0x8EA3C8E091EA5BA4(Local_56.f_110))
				{
					Local_56.f_110 = unk_0x4562AC7F06CD71B3("DEFAULT_SCRIPTED_CAMERA", true);
				}
				if (unk_0x8EA3C8E091EA5BA4(Local_56.f_110))
				{
					if (Local_56.f_29.f_69)
					{
						unk_0x5AA4315C366E622D("GtaMloRoom001");
					}
					func_257(1, 1, 1, 0);
					func_256(&(Local_56.f_29.f_14), &(Local_56.f_110), &(Local_56.f_111));
				}
				unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
				unk_0x4255E93FCCDE108E(false);
				unk_0x9B47B379EE749C38(false);
				unk_0x81BCCFFE3F019672();
				Local_56.f_2 = 7;
				Local_56.f_4 = unk_0x53C562FD2B9E3AB0();
				func_69(&(Local_56.f_5));
			}
			break;
		
		case 7:
			if ((unk_0x53C562FD2B9E3AB0() - Local_56.f_4) < 7000 && !func_325(1000))
			{
				Var6 = { Local_56.f_29.f_63 };
				StringConCat(&Var6, "_05", 16);
				func_186(&Var6, -1);
				if (!unk_0x40189ECE75CF9724())
				{
					if (Local_56 == 12 || Local_56 == 13)
					{
						fVar7 = 85f;
						iVar8 = 2;
					}
					vVar9 = { system::cos((Local_56.f_29.f_29.f_2 + 90f)), system::sin((Local_56.f_29.f_29.f_2 + 90f)), 0f };
					unk_0xDCBF71199890F355(Local_56.f_29.f_29, vVar9, fVar7, iVar8);
				}
			}
			else
			{
				if (unk_0x8EA3C8E091EA5BA4(Local_56.f_110))
				{
					if (Local_56.f_29.f_69)
					{
						unk_0x5AA4315C366E622D("GtaMloRoom001");
					}
					func_257(1, 1, 1, 0);
					func_256(&(Local_56.f_29.f_29), &(Local_56.f_110), &(Local_56.f_111));
				}
				unk_0x97580242FB655BD5();
				unk_0x3E80C2F7BC665259(1);
				Local_56.f_4 = unk_0x53C562FD2B9E3AB0();
				Local_56.f_2 = 8;
			}
			break;
		
		case 8:
			if ((unk_0x53C562FD2B9E3AB0() - Local_56.f_4) < 7000 && !func_325(1000))
			{
				Var6 = { Local_56.f_29.f_63 };
				StringConCat(&Var6, "_06", 16);
				if (!unk_0xF491DD47B88AA84E())
				{
					func_186(&Var6, 7000);
				}
			}
			else
			{
				unk_0x3E80C2F7BC665259(1);
				Local_56.f_4 = unk_0x53C562FD2B9E3AB0();
				Local_56.f_2 = 9;
			}
			break;
		
		case 9:
			if ((unk_0x53C562FD2B9E3AB0() - Local_56.f_4) < 3500 && !func_325(1000))
			{
				Var6 = { Local_56.f_29.f_63 };
				StringConCat(&Var6, "_03", 16);
				if (unk_0x34D11AB5BA7922C2(Local_57))
				{
					if (Local_57.f_1)
					{
						if (!Local_57.f_3)
						{
							unk_0x4AFBCBFDE748D4E0(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", true);
							Local_57.f_3 = 1;
						}
						unk_0x28E092B1E386EB67(Local_57, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x008F3E3CC076EA0E(Local_57, "SHOW_SHARD_MIDSIZED_MESSAGE");
						func_89(&Var6);
						unk_0x8E8D3D52EE7CEFD3();
						Local_57.f_1 = 1;
					}
				}
			}
			else if ((unk_0x53C562FD2B9E3AB0() - Local_56.f_4) < 4000 && !func_325(1000))
			{
				if (unk_0x34D11AB5BA7922C2(Local_57))
				{
					if (Local_57.f_2)
					{
						unk_0x28E092B1E386EB67(Local_57, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x008F3E3CC076EA0E(Local_57, "SHARD_ANIM_OUT");
						unk_0xD07D5CD276368D36(1);
						unk_0x9499D7329FB840A2(0,33f);
						unk_0x271AA5469AF471B3();
						Local_57.f_2 = 1;
					}
				}
			}
			else
			{
				if (bLocal_142)
				{
					unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
					if (unk_0x8EA3C8E091EA5BA4(Local_56.f_110))
					{
						unk_0x7849794435F39D49(Local_56.f_110, false);
						unk_0x02934BABFD4CD384(Local_56.f_110, 0);
					}
					if (unk_0x8EA3C8E091EA5BA4(Local_56.f_111))
					{
						unk_0x7849794435F39D49(Local_56.f_111, false);
						unk_0x02934BABFD4CD384(Local_56.f_111, 0);
					}
					unk_0xBB9A3C553EECB180(0f);
					unk_0x7C9705890EF6612E(0f, 1065353216);
					unk_0xB3A8974D2C811672(unk_0xFC1458A37D98B502(), true, 0);
					unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), false);
					iVar11 = unk_0xC733212BF9066BDF();
					if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
					{
						unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
						unk_0xC7CB065B66F66C5F(unk_0x9EB17624F44A8DA4(), 0);
						if ((unk_0x6ADD12BF4D6D2587(iVar11) && unk_0xB8DE76287EDC4957(iVar11, 0)) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iVar11, 0))
						{
							unk_0xBD8D47FDC6902B2D(iVar11, Local_56.f_29.f_44, 1, true, 0, 1);
							unk_0x48ED7B2293A96722(iVar11, Local_56.f_29.f_47);
							unk_0xACE486395AA1867D(iVar11, 1084227584);
						}
						else
						{
							unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), Local_56.f_29.f_44, 1, true, 0, 1);
							unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), Local_56.f_29.f_47);
						}
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_168) && unk_0xB8DE76287EDC4957(iLocal_168, 0))
					{
						iVar12 = func_49(24);
						if (func_255(&Local_141, 24))
						{
							func_250(&Local_141, func_440());
							if (unk_0x6ADD12BF4D6D2587(iVar12))
							{
								unk_0xC91FE17AD7353B70(&iVar12);
							}
						}
						if (Local_56 == 21)
						{
							unk_0x247EAA2E93D4A021(-89,377f, 92,6583f, 71,2349f, 5f, 1, 0, 0, false);
							unk_0xBD8D47FDC6902B2D(iLocal_168, -89,377f, 92,6583f, 71,2349f, 1, false, 0, 1);
							unk_0x48ED7B2293A96722(iLocal_168, 154,4846f);
							func_248(iLocal_168, -89,377f, 92,6583f, 71,2349f, 154,4846f, 24, 0);
						}
						else if (Local_56 == 22)
						{
							unk_0x247EAA2E93D4A021(-62,0307f, -1839,859f, 25,6787f, 5f, 1, 0, 0, false);
							unk_0xBD8D47FDC6902B2D(iLocal_168, -62,0307f, -1839,859f, 25,6787f, 1, false, 0, 1);
							unk_0x48ED7B2293A96722(iLocal_168, 319,6985f);
							func_248(iLocal_168, -62,0307f, -1839,859f, 25,6787f, 319,6985f, 24, 0);
						}
						else if (Local_56 == 23)
						{
							unk_0x247EAA2E93D4A021(-234,7648f, -1150,311f, 21,9224f, 5f, 1, 0, 0, false);
							unk_0xBD8D47FDC6902B2D(iLocal_168, -234,7648f, -1150,311f, 21,9224f, 1, false, 0, 1);
							unk_0x48ED7B2293A96722(iLocal_168, 270,8741f);
							func_248(iLocal_168, -234,7648f, -1150,311f, 21,9224f, 270,8741f, 24, 0);
						}
						unk_0xACE486395AA1867D(iLocal_168, 1084227584);
					}
					if (unk_0x6ADD12BF4D6D2587(iVar11) && unk_0xB8DE76287EDC4957(iVar11, 0))
					{
						unk_0xB3A8974D2C811672(iVar11, true, 0);
						unk_0xEDC33A771FAEB393(iVar11, false);
						if (unk_0xCB234F3DD6FF9368(iVar11, 1))
						{
							unk_0x5380482A432E314E(&iVar11);
						}
					}
					iVar13 = 5000;
					iVar14 = unk_0x53C562FD2B9E3AB0();
					while (!unk_0x4AA5DF29899B96D6() && (unk_0x53C562FD2B9E3AB0() - iVar14) < iVar13)
					{
						system::wait(0);
					}
					if (unk_0x2C2E1E35924B9FF2(Local_56.f_112))
					{
						unk_0xA1451353A1AED1A5(Local_56.f_112);
					}
					StringCopy(&Global_32583, "", 32);
					if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
					{
						func_270(47, 1);
						func_265(47, 1);
						Global_104555.f_32429.f_4800 = 1;
					}
					unk_0x81BCCFFE3F019672();
					unk_0x97580242FB655BD5();
					unk_0x4255E93FCCDE108E(true);
					unk_0x9B47B379EE749C38(true);
					func_257(0, 1, 1, 0);
					bLocal_142 = false;
					Global_25487 = 0;
				}
				if (unk_0x34D11AB5BA7922C2(Local_57))
				{
					unk_0xA68F7B004463AB6F(&Local_57);
				}
				func_294(iLocal_129, Local_57.f_4, Local_56.f_29.f_67);
				func_293(Local_56, 5, 1);
				func_280(Local_56);
				if (unk_0xA6DECE14FC9A8C51(Global_69678.f_208[Local_56]))
				{
					unk_0xE30CF11C0EE14316(&(Global_69678.f_208[Local_56]));
				}
				iLocal_151 = Local_56;
				func_279();
				Local_56.f_2 = 99;
			}
			break;
		
		case 90:
			iLocal_126++;
			if (iLocal_126 >= 3)
			{
				if ((unk_0x53C562FD2B9E3AB0() - Local_56.f_4) < 4000)
				{
					Var6 = { Local_56.f_29.f_63 };
					StringConCat(&Var6, "_04", 16);
					func_278(&Var6);
				}
				else
				{
					Local_56.f_2 = 99;
				}
			}
			break;
	}
}

void func_278(char* sParam0)//Position - 0x1ED6A
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 1, true, -1);
}

int func_279()//Position - 0x1ED80
{
	if (func_196(0))
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

void func_280(int iParam0)//Position - 0x1EDCB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iParam0)
	{
		case 21:
			iVar0 = 20;
			iVar1 = 155;
			break;
		
		case 22:
			iVar0 = 21;
			iVar1 = 156;
			break;
		
		case 23:
			iVar0 = 22;
			iVar1 = 157;
			break;
		
		case 12:
			iVar0 = 13;
			iVar1 = 57;
			break;
		
		case 13:
			iVar0 = 16;
			iVar1 = 62;
			break;
		
		case 14:
			iVar0 = 19;
			iVar1 = 63;
			break;
		
		case 15:
			iVar0 = 12;
			iVar1 = 56;
			break;
		
		case 16:
			iVar0 = 15;
			iVar1 = 60;
			break;
		
		case 17:
			iVar0 = 18;
			iVar1 = 61;
			break;
		
		case 18:
			iVar0 = 11;
			iVar1 = 55;
			break;
		
		case 19:
			iVar0 = 14;
			iVar1 = 58;
			break;
	}
	func_292(iVar0, 0);
	iVar2 = func_291(iVar0, iVar1, 1);
	if (iVar2 != 0)
	{
	}
	else
	{
		func_290(iVar0);
		if (func_288(iVar0, iVar1, 1))
		{
			func_281(iVar0);
			func_290(iVar0);
		}
	}
}

void func_281(int iParam0)//Position - 0x1EED2
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar4;
	char* sVar5;
	
	iVar0 = func_287(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46306[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_46306[iVar0 /*203*/].f_10[(Global_46306[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_46306[iVar0 /*203*/].f_9 - 1);
	if (!Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar4 = Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_286(Global_37006[iVar4 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar5 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar5 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar5 = "PW_FEED_EM_2";
				break;
		}
		func_282(1, Global_37006[iVar1 /*12*/].f_2, iVar1, sVar5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_37006[iVar1 /*12*/].f_3)
		{
			case 0:
				func_282(0, Global_37006[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_282(1, Global_37006[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_282(2, Global_37006[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_282(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)//Position - 0x1F242
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0xA8113D347D14630F())
	{
		return;
	}
	iVar0 = func_440();
	bVar1 = false;
	StringCopy(&cVar2, func_285(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0xE3C33644878DCCFD("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0xE3C33644878DCCFD("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0xE3C33644878DCCFD("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0xE3C33644878DCCFD(sParam3);
				if (!unk_0xAB019B170BF1309C(sParam4))
				{
					unk_0xA6D2B267C377D7B2(sParam4);
				}
				if (!unk_0xAB019B170BF1309C(sParam5))
				{
					unk_0xA6D2B267C377D7B2(sParam5);
				}
				if (!unk_0xAB019B170BF1309C(sParam6))
				{
					unk_0xA6D2B267C377D7B2(sParam6);
				}
				if (!unk_0xAB019B170BF1309C(sParam7))
				{
					unk_0xA6D2B267C377D7B2(sParam7);
				}
				if (!unk_0xAB019B170BF1309C(sParam8))
				{
					unk_0xA6D2B267C377D7B2(sParam8);
				}
				if (!unk_0xAB019B170BF1309C(sParam9))
				{
					unk_0xA6D2B267C377D7B2(sParam9);
				}
				if (!unk_0xAB019B170BF1309C(sParam10))
				{
					unk_0xA6D2B267C377D7B2(sParam10);
				}
				if (!unk_0xAB019B170BF1309C(sParam11))
				{
					unk_0xA6D2B267C377D7B2(sParam11);
				}
				if (!unk_0xAB019B170BF1309C(sParam12))
				{
					unk_0xA6D2B267C377D7B2(sParam12);
				}
				if (!unk_0xAB019B170BF1309C(sParam13))
				{
					unk_0xA6D2B267C377D7B2(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_283(unk_0x9F42263EE935D84B(&cVar2, &cVar2, 0, 2, unk_0xB2E1B414DD88808E(func_284(iParam1)), 0));
		}
		else
		{
			func_283(unk_0x9F42263EE935D84B("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xB2E1B414DD88808E(func_284(iParam1)), 0));
		}
		switch (Global_14453)
		{
			case 0:
				StringCopy(&Global_14442, "Phone_SoundSet_Michael", 24);
				Global_36998++;
				if (Global_36998 > 16)
				{
					Global_36998 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14442, "Phone_SoundSet_Trevor", 24);
				Global_37000++;
				if (Global_37000 > 16)
				{
					Global_37000 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14442, "Phone_SoundSet_Franklin", 24);
				Global_36999++;
				if (Global_36999 > 16)
				{
					Global_36999 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14442, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0x4AFBCBFDE748D4E0(-1, "Notification", &Global_14442, true);
	}
}

void func_283(int iParam0)//Position - 0x1F42A
{
	Global_37001[Global_37005] = iParam0;
	Global_16814 = 1;
	Global_16813 = iParam0;
	Global_37005++;
	if (Global_37005 == 3)
	{
		Global_37005 = 0;
	}
}

char* func_284(int iParam0)//Position - 0x1F458
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_285(int iParam0, int iParam1)//Position - 0x1F7C3
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[0 /*29*/].f_7));
		
		case 1:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[1 /*29*/].f_7));
		
		case 2:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[2 /*29*/].f_7));
		
		case 7:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[12 /*29*/].f_7));
		
		case 4:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[60 /*29*/].f_7));
		
		case 6:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[62 /*29*/].f_7));
		
		case 3:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[14 /*29*/].f_7));
		
		case 16:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[97 /*29*/].f_7));
		
		case 19:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[99 /*29*/].f_7));
		
		case 15:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[15 /*29*/].f_7));
		
		case 26:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[30 /*29*/].f_7));
		
		case 27:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[17 /*29*/].f_7));
		
		case 29:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[20 /*29*/].f_7));
		
		case 30:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[43 /*29*/].f_7));
		
		case 31:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[44 /*29*/].f_7));
		
		case 32:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[19 /*29*/].f_7));
		
		case 34:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[40 /*29*/].f_7));
		
		case 36:
			return unk_0xB2E1B414DD88808E("CELL_E_381");
		
		case 38:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[122 /*29*/].f_7));
		
		case 40:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[125 /*29*/].f_7));
		
		case 41:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[113 /*29*/].f_7));
		
		case 42:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[126 /*29*/].f_7));
		
		case 43:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[127 /*29*/].f_7));
		
		case 44:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[124 /*29*/].f_7));
		
		case 45:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[114 /*29*/].f_7));
		
		case 46:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[115 /*29*/].f_7));
		
		case 47:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[116 /*29*/].f_7));
		
		case 48:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[123 /*29*/].f_7));
		
		case 49:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[117 /*29*/].f_7));
		
		case 50:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[118 /*29*/].f_7));
		
		case 51:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[119 /*29*/].f_7));
		
		case 52:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[120 /*29*/].f_7));
		
		case 53:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_286(int iParam0)//Position - 0x1FC16
{
	struct<16> Var0;
	struct<16> Var1;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_287(int iParam0)//Position - 0x1FC47
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_46306[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_46306[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_46306[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

int func_288(int iParam0, int iParam1, bool bParam2)//Position - 0x1FCAB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_292(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_46306[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_46306[iVar0 /*203*/].f_2 = iParam0;
	Global_46306[iVar0 /*203*/].f_10[Global_46306[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_46306[iVar0 /*203*/].f_10[Global_46306[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_46306[iVar0 /*203*/].f_10[Global_46306[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_46306[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46306[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46306[iVar0 /*203*/].f_4[iVar1] == Global_37006[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46306[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_46306[iVar0 /*203*/].f_4[Global_46306[iVar0 /*203*/].f_3] = Global_37006[iParam1 /*12*/].f_3;
			Global_46306[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46306[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46306[iVar0 /*203*/].f_4[iVar1] == Global_37006[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46306[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_46306[iVar0 /*203*/].f_4[Global_46306[iVar0 /*203*/].f_3] = Global_37006[iParam1 /*12*/].f_2;
			Global_46306[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_46306[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_46306[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_289(Global_46306[iVar0 /*203*/].f_4[iVar1], Global_46306[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_289(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1FEA7
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_40331[iParam1 /*46*/].f_42 - 1);
		if (iVar4 < 0)
		{
			return;
		}
		iVar5 = Global_40331[iParam1 /*46*/].f_32[iVar4];
		iVar2 = iVar5;
		Var3 = { func_286(Global_37006[iVar5 /*12*/].f_1) };
		if (Global_37006[iVar5 /*12*/].f_2 == iParam0 && !Global_37006[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_37006[iVar5 /*12*/].f_2;
		iVar0 = Global_45944[iParam0 /*120*/];
		bVar6 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar6 = true;
		}
		if (bVar6)
		{
			if (!Global_45944[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36998 = (Global_36998 - 1);
						if (Global_36998 < 0)
						{
							Global_36998 = 0;
						}
						break;
					
					case 1:
						Global_36999 = (Global_36999 - 1);
						if (Global_36999 < 0)
						{
							Global_36999 = 0;
						}
						break;
					
					case 2:
						Global_37000 = (Global_37000 - 1);
						if (Global_37000 < 0)
						{
							Global_37000 = 0;
						}
						break;
					}
				}
		}
		Global_45944[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_45944[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_45944[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45944[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_45944[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45944[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_45944[iParam0 /*120*/];
		bVar7 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar7 = true;
		}
		if (bVar7)
		{
			if (!Global_45944[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36998 = (Global_36998 - 1);
						if (Global_36998 < 0)
						{
							Global_36998 = 0;
						}
						break;
					
					case 1:
						Global_36999 = (Global_36999 - 1);
						if (Global_36999 < 0)
						{
							Global_36999 = 0;
						}
						break;
					
					case 2:
						Global_37000 = (Global_37000 - 1);
						if (Global_37000 < 0)
						{
							Global_37000 = 0;
						}
						break;
					}
				}
		}
		iVar8 = -1;
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < 7)
		{
			if (Global_46306[iVar9 /*203*/].f_1 == iParam1 && Global_46306[iVar9 /*203*/].f_9 > 0)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == -1)
		{
			return;
		}
		Global_45944[iParam0 /*120*/].f_18[iVar0] = Global_46306[iVar8 /*203*/].f_1;
		Global_45944[iParam0 /*120*/].f_1[iVar0] = (Global_46306[iVar8 /*203*/].f_9 - 1);
		Global_45944[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45944[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_45944[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45944[iParam0 /*120*/]++;
		iVar10 = Global_45944[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_46306[iVar8 /*203*/].f_10[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_37006[iVar11 /*12*/].f_2;
		if (Global_46306[iVar8 /*203*/].f_10[(Global_46306[iVar8 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_46306[iVar8 /*203*/].f_10[(Global_46306[iVar8 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_286(Global_37006[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_45944[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_282(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_282(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_282(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_282(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_290(int iParam0)//Position - 0x2027E
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!unk_0xC80D31E4B587871C(Global_104555.f_24956, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_287(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_46306[iVar0 /*203*/] = 0;
}

int func_291(int iParam0, int iParam1, int iParam2)//Position - 0x202BB
{
	int iVar0;
	int iVar1;
	
	if (iParam2 < 1)
	{
		return 0;
	}
	if (Global_47728 == 8)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46306[iVar1 /*203*/].f_2 == iParam0)
		{
			if (Global_46306[iVar1 /*203*/].f_1 > 0)
			{
				iVar0 = Global_46306[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (Global_47729[iVar1 /*53*/].f_52 == 0)
		{
			Global_47729[iVar1 /*53*/].f_52 = iVar0;
			Global_47729[iVar1 /*53*/] = iParam0;
			Global_47729[iVar1 /*53*/].f_1 = iParam1;
			Global_47729[iVar1 /*53*/].f_2 = iParam2;
			Global_104555.f_21007.f_310++;
			if (Global_104555.f_21007.f_310 == 0)
			{
				Global_104555.f_21007.f_310 = 1;
			}
			Global_47729[iVar1 /*53*/].f_10 = 0;
			Global_47729[iVar1 /*53*/].f_3 = Global_104555.f_21007.f_310;
			Global_47729[iVar1 /*53*/].f_4 = 1;
			Global_47728++;
			return Global_47729[iVar1 /*53*/].f_3;
		}
		iVar1++;
	}
	return 0;
}

int func_292(int iParam0, bool bParam1)//Position - 0x203D6
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_287(iParam0);
	if (iVar0 > -1)
	{
		if (Global_46306[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46306[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46306[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_46306[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_46306[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_46306[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_46306[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_46306[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_45944[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_45944[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_45944[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_45944[iVar6 /*120*/].f_18[iVar8] == Global_46306[iVar4 /*203*/].f_1)
							{
								if (Global_45944[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_36998 = (Global_36998 - 1);
											break;
										
										case 1:
											Global_36999 = (Global_36999 - 1);
											break;
										
										case 2:
											Global_37000 = (Global_37000 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_46306[iVar4 /*203*/].f_2 = iParam0;
	Global_46306[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_46306[iVar4 /*203*/] = 1;
	}
	Global_104555.f_21007.f_310++;
	if (Global_104555.f_21007.f_310 == 0)
	{
		Global_104555.f_21007.f_310 = 1;
	}
	Global_46306[iVar4 /*203*/].f_1 = Global_104555.f_21007.f_310;
	Global_46306[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_293(int iParam0, int iParam1, bool bParam2)//Position - 0x205EE
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_32429[iParam0]), iParam1);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_32429[iParam0]), iParam1);
	}
}

int func_294(int iParam0, int iParam1, int iParam2)//Position - 0x20629
{
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_295(Global_104555.f_28020[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_295(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x20672
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_324();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_323(99, 1);
					func_322(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_322(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_322(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_307(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_303(5))
					{
						fVar0 = 0,9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_322(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_322(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_322(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_303(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_322(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_322(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_322(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_322(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_322(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_322(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_322(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_322(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_322(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x5D6DB7DE15F99EF2())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_322(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_322(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_322(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_322(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_322(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_322(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_303(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_322(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_322(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_322(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_322(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_322(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_322(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_302(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_323(95, iParam3);
					break;
				
				case 1:
					func_323(97, iParam3);
					break;
				
				case 2:
					func_323(96, iParam3);
					break;
			}
			func_323(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_298(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_298(iVar1);
	}
	iVar5 = (Global_53077[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53077[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53077[iVar2] = 2147483647;
				}
				else
				{
					Global_53077[iVar2] = (Global_53077[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_322(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_322(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_322(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53077[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53077[iVar2];
			Global_53077[iVar2] = (Global_53077[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_104555.f_20534.f_233[iVar2 /*69*/].f_2[Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_104555.f_20534.f_233[iVar2 /*69*/].f_2[Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_104555.f_20534.f_233[iVar2 /*69*/].f_2[Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_104555.f_20534.f_233[iVar2 /*69*/]++;
		Global_104555.f_20534.f_233[iVar2 /*69*/].f_1++;
		if (Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_297(iParam0);
	if (Global_35861 == 15)
	{
		func_296(0);
	}
	return 1;
}

void func_296(bool bParam0)//Position - 0x20C71
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53085[iVar0 /*3*/][0] = Global_104555.f_20534[iVar0];
		Global_53085.f_31[iVar0 /*3*/][0] = Global_104555.f_20534.f_11[iVar0];
		Global_53085.f_62[iVar0 /*3*/][0] = Global_104555.f_20534.f_22[iVar0];
		Global_53085.f_93[iVar0 /*3*/][0] = Global_104555.f_20534.f_33[iVar0];
		Global_53085.f_124[iVar0 /*3*/][0] = Global_104555.f_20534.f_44[iVar0];
		Global_53085.f_155[iVar0 /*3*/][0] = Global_104555.f_20534.f_55[iVar0];
		Global_53085.f_186[iVar0 /*3*/][0] = Global_104555.f_20534.f_66[iVar0];
		Global_53085.f_217[iVar0 /*3*/][0] = Global_104555.f_20534.f_77[iVar0];
		Global_53085.f_248[iVar0 /*3*/][0] = Global_104555.f_20534.f_88[iVar0];
		if (!bParam0)
		{
			Global_53085[iVar0 /*3*/][1] = Global_104555.f_20534[iVar0];
			Global_53085.f_31[iVar0 /*3*/][1] = Global_104555.f_20534.f_11[iVar0];
			Global_53085.f_62[iVar0 /*3*/][1] = Global_104555.f_20534.f_22[iVar0];
			Global_53085.f_93[iVar0 /*3*/][1] = Global_104555.f_20534.f_33[iVar0];
			Global_53085.f_124[iVar0 /*3*/][1] = Global_104555.f_20534.f_44[iVar0];
			Global_53085.f_155[iVar0 /*3*/][1] = Global_104555.f_20534.f_55[iVar0];
			Global_53085.f_186[iVar0 /*3*/][1] = Global_104555.f_20534.f_66[iVar0];
			Global_53085.f_217[iVar0 /*3*/][1] = Global_104555.f_20534.f_77[iVar0];
			Global_53085.f_248[iVar0 /*3*/][1] = Global_104555.f_20534.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_297(int iParam0)//Position - 0x20EF3
{
	int iVar0;
	
	iVar0 = Global_53077[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xBFFF62F75445099D(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xBFFF62F75445099D(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xBFFF62F75445099D(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_298(int iParam0)//Position - 0x20F4D
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_301(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x3A711520F83BAE98())
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0) || unk_0xC80D31E4B587871C(Global_2097152[func_300() /*12130*/].f_7676.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Global_2097152[func_300() /*12130*/].f_7676.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xE3C33644878DCCFD("COUP_RED");
		unk_0xA6D2B267C377D7B2(func_299(iParam0));
		unk_0x9F42263EE935D84B(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_299(int iParam0)//Position - 0x21023
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		default:
	}
	return "";
}

int func_300()//Position - 0x210AA
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_301(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x210B7
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
		iParam2 = func_93();
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

void func_302(int iParam0)//Position - 0x21583
{
	func_323(93, iParam0);
	func_323(29, iParam0);
	func_323(30, iParam0);
}

bool func_303(int iParam0)//Position - 0x215A3
{
	if (iParam0 == 8)
	{
		return func_304(129, -1, -1);
	}
	if (!unk_0x3A711520F83BAE98())
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2097152[func_300() /*12130*/].f_7676.f_10, iParam0);
}

int func_304(int iParam0, int iParam1, int iParam2)//Position - 0x215F1
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_93();
	}
	iVar1 = func_306(iParam0, iParam1);
	uVar2 = func_305(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_305(int iParam0)//Position - 0x2162E
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

int func_306(int iParam0, int iParam1)//Position - 0x218EE
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_93();
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

int func_307(bool bParam0)//Position - 0x21B90
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xF9F3676C0864728D(27))
	{
		return 0;
	}
	if (unk_0xFA3CE529DBB66C85(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xFA3CE529DBB66C85(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xFA3CE529DBB66C85(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xFA3CE529DBB66C85(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xBFFF62F75445099D(joaat("num_cash_spent"), iVar1, 1);
		func_321(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_308(27, 1);
	return 1;
}

int func_308(int iParam0, int iParam1)//Position - 0x21C47
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_309(iParam0, iParam1);
}

int func_309(int iParam0, int iParam1)//Position - 0x21C62
{
	if (func_27(14) && !func_320(iParam0))
	{
		return 0;
	}
	if (unk_0xF9F3676C0864728D(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25480 != 0 && !Global_70856)
	{
		return 0;
	}
	if (func_319(&Global_4267379))
	{
		if (func_317(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_310(&Global_4267379, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x603018B05987F5A9(iParam0))
		{
			return 0;
		}
		if (unk_0xF9F3676C0864728D(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_310(var uParam0, int iParam1)//Position - 0x21CFF
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_320(iParam1))
	{
		return 0;
	}
	if (func_317(uParam0, iParam1))
	{
		return 0;
	}
	if (func_316(uParam0) < 0f)
	{
		func_315(uParam0, 0);
	}
	func_313(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_311(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_311(var uParam0, int iParam1)//Position - 0x21DB0
{
	int iVar0;
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_320(iParam1))
	{
		return 0;
	}
	if (func_317(uParam0, iParam1))
	{
		return 0;
	}
	if (func_316(uParam0) < 0f)
	{
		func_315(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_312(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_312(var uParam0, int iParam1)//Position - 0x21E2B
{
	return (*uParam0)[iParam1] == 78;
}

void func_313(var uParam0)//Position - 0x21E3C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_314(uParam0, iVar0);
		iVar0++;
	}
	func_315(uParam0, (Global_4267378 - 0,5f));
}

void func_314(var uParam0, int iParam1)//Position - 0x21E70
{
	(*uParam0)[iParam1] = 78;
}

void func_315(var uParam0, float fParam1)//Position - 0x21E80
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_316(var uParam0)//Position - 0x21E9D
{
	return uParam0->f_80;
}

bool func_317(var uParam0, int iParam1)//Position - 0x21EA9
{
	return func_318(uParam0, iParam1) != -1;
}

int func_318(var uParam0, int iParam1)//Position - 0x21EBB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_319(var uParam0)//Position - 0x21EE8
{
	return uParam0->f_79 == 1;
}

int func_320(int iParam0)//Position - 0x21EF6
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

int func_321(int iParam0, int iParam1)//Position - 0x21F46
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

void func_322(int iParam0, int iParam1)//Position - 0x21F97
{
	int iVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xBFFF62F75445099D(iParam0, iVar0, 1);
}

void func_323(int iParam0, int iParam1)//Position - 0x21FBA
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

void func_324()//Position - 0x22017
{
	int iVar0;
	
	if (unk_0x4CAC17F5502E6EEB())
	{
		unk_0xFA3CE529DBB66C85(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53077[0] == iVar0)
		{
			Global_53077[0] = iVar0;
		}
		unk_0xFA3CE529DBB66C85(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53077[1] == iVar0)
		{
			Global_53077[1] = iVar0;
		}
		unk_0xFA3CE529DBB66C85(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53077[2] == iVar0)
		{
			Global_53077[2] = iVar0;
		}
	}
}

int func_325(int iParam0)//Position - 0x2208C
{
	if (unk_0x9F7B586A14398C40())
	{
		if ((unk_0x53C562FD2B9E3AB0() - Global_28) > iParam0)
		{
			Global_27 = unk_0x53C562FD2B9E3AB0();
		}
		Global_28 = unk_0x53C562FD2B9E3AB0();
		if ((unk_0x53C562FD2B9E3AB0() - Global_27) > iParam0)
		{
			if (func_326())
			{
				Global_27 = unk_0x53C562FD2B9E3AB0();
				return 1;
			}
		}
	}
	return 0;
}

int func_326()//Position - 0x220D6
{
	if (unk_0x0F30C1F1717A6437())
	{
		return 0;
	}
	if (unk_0xE8C126B7ADBB9D63(0, 18) || unk_0xE8C126B7ADBB9D63(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_327(int iParam0)//Position - 0x22108
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0xFA3CE529DBB66C85(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xFA3CE529DBB66C85(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xFA3CE529DBB66C85(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

bool func_328(int iParam0)//Position - 0x22160
{
	return func_329(iParam0, Global_35861);
}

int func_329(int iParam0, int iParam1)//Position - 0x22171
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_330(int iParam0, int iParam1, int iParam2)//Position - 0x22352
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	iVar2 = func_440();
	if (iParam2 != 145)
	{
		iVar2 = iParam2;
	}
	sVar3 = func_129(iParam1);
	switch (iParam0)
	{
		case 10:
			iVar0 = 5;
			switch (iVar2)
			{
				case 0:
					iVar1 = 32;
					break;
				
				case 2:
					iVar1 = 33;
					break;
				
				case 1:
					iVar1 = 31;
					break;
			}
			break;
		
		case 11:
			iVar0 = 7;
			if (((iParam1 == 15 || iParam1 == 16) || iParam1 == 164) || iParam1 == 217)
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 191;
						break;
					
					case 2:
						iVar1 = 193;
						break;
					
					case 1:
						iVar1 = 192;
						break;
				}
			}
			else
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 40;
						break;
					
					case 2:
						iVar1 = 42;
						break;
					
					case 1:
						iVar1 = 41;
						break;
					}
			}
			break;
		
		case 12:
			iVar0 = 6;
			switch (iVar2)
			{
				case 0:
					iVar1 = 34;
					break;
				
				case 2:
					iVar1 = 36;
					break;
				
				case 1:
					iVar1 = 35;
					break;
			}
			break;
		
		case 13:
			iVar0 = 8;
			switch (iVar2)
			{
				case 0:
					iVar1 = 37;
					break;
				
				case 2:
					iVar1 = 39;
					break;
				
				case 1:
					iVar1 = 38;
					break;
			}
			break;
		
		case 15:
			iVar0 = 9;
			switch (iVar2)
			{
				case 0:
					iVar1 = 186;
					break;
				
				case 2:
					iVar1 = 188;
					break;
				
				case 1:
					iVar1 = 185;
					break;
			}
			break;
		
		case 16:
			iVar0 = 10;
			switch (iVar2)
			{
				case 0:
					iVar1 = 189;
					break;
				
				case 2:
					iVar1 = 190;
					break;
				
				case 1:
					iVar1 = 187;
					break;
			}
			break;
		
		default:
			return;
			break;
	}
	if (func_288(iVar0, iVar1, 1))
	{
		func_331(iVar0, sVar3);
		func_281(iVar0);
		func_290(iVar0);
	}
}

void func_331(int iParam0, char* sParam1)//Position - 0x2255C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_287(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46306[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_46306[iVar0 /*203*/].f_10[(Global_46306[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_46306[iVar0 /*203*/].f_10[(Global_46306[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_46306[iVar0 /*203*/].f_10[(Global_46306[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_46306[iVar0 /*203*/].f_10[(Global_46306[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

int func_332(int iParam0, int iParam1)//Position - 0x22611
{
	int iVar0;
	int iVar1;
	
	if (!func_337(iParam1) || !func_337(iParam0))
	{
		return 1;
	}
	iVar0 = func_55(iParam0);
	iVar1 = func_55(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_57(iParam0);
	iVar1 = func_57(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_336(iParam0);
	iVar1 = func_336(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_335(iParam0);
	iVar1 = func_335(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_334(iParam0);
	iVar1 = func_334(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_333(iParam0);
	iVar1 = func_333(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_333(int iParam0)//Position - 0x2271D
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_334(int iParam0)//Position - 0x22730
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_335(int iParam0)//Position - 0x22743
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_336(int iParam0)//Position - 0x22756
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_337(int iParam0)//Position - 0x22768
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_333(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_334(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_335(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_55(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_57(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_336(iParam0);
	if (iVar5 < 1 || iVar5 > func_54(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_338()//Position - 0x22844
{
	int iVar0;
	var uVar1;
	char* sVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	vector3 vVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	bool bVar19;
	vector3 vVar20;
	int iVar21;
	
	iVar0 = 0;
	if (unk_0x8F38E94BBF3404CD(joaat("startup_positioning")) == 0)
	{
		if (Global_104555.f_32429.f_5588)
		{
			if (!unk_0x6ADD12BF4D6D2587(Global_70583))
			{
				func_250(&(Global_104555.f_32429.f_5510), Global_104555.f_32429.f_5590);
				Global_104555.f_32429.f_5588 = 0;
			}
			else if (!unk_0xB8DE76287EDC4957(Global_70583, 0) || func_47(Global_70583, Global_104555.f_32429.f_5590, 1))
			{
				Global_104555.f_32429.f_5588 = 0;
			}
			else
			{
				if ((unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0) == Global_70583) && func_365(unk_0xFC1458A37D98B502()) != Global_104555.f_32429.f_5590)
				{
					Global_104555.f_32429.f_5590 = func_365(unk_0xFC1458A37D98B502());
				}
				if (Global_70583 != iLocal_128)
				{
					sVar2 = unk_0xA88FE81C0BDF2731(Global_70583, &uVar1);
					if (!unk_0xAB019B170BF1309C(sVar2))
					{
						if (unk_0x8B948C59217A295D(sVar2) == unk_0x8B948C59217A295D("vehicle_gen_controller"))
						{
							Global_104555.f_32429.f_5588 = 0;
							iLocal_169 = Global_70583;
							if (Global_69678.f_139[24] == Global_70583 || (Global_70584 == Global_70583 && Global_70585 == 24))
							{
								func_364(458, 24, -1, 1);
							}
							else
							{
								func_364(458, 0, -1, 1);
							}
							Global_70583 = 0;
						}
					}
				}
				if (((Global_104555.f_32429.f_5590 != func_440() && Global_92302[Global_104555.f_32429.f_5590 /*98*/] == Global_104555.f_32429.f_5510.f_66) && unk_0x74C475EB8E73D398(&(Global_92302[Global_104555.f_32429.f_5590 /*98*/].f_27), &(Global_104555.f_32429.f_5510.f_1))) && !unk_0x1E06D00B67177A18())
				{
					func_114(&(Global_104555.f_32429.f_5510), &(Global_104555.f_32429.f_5600[Global_104555.f_32429.f_5590 /*78*/]));
					Global_104555.f_32429.f_5588 = 0;
					iLocal_169 = 0;
					func_364(458, 0, -1, 1);
					Global_70583 = 0;
				}
			}
		}
		else if ((unk_0x6ADD12BF4D6D2587(Global_70583) && unk_0xB8DE76287EDC4957(Global_70583, 0)) && !func_47(Global_70583, Global_104555.f_32429.f_5590, 1))
		{
			Global_104555.f_32429.f_5588 = 1;
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_169) && unk_0xB8DE76287EDC4957(iLocal_169, 0))
		{
			if (((!Global_104555.f_32429.f_5588 && iLocal_169 != Global_70583) && iLocal_169 != iLocal_170) && !unk_0xCB234F3DD6FF9368(iLocal_169, 1))
			{
				func_31(iLocal_169, 145);
				iLocal_169 = 0;
				func_364(458, 0, -1, 1);
			}
		}
		else if (iLocal_169 != 0)
		{
			iLocal_169 = 0;
			func_364(458, 0, -1, 1);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_170) && unk_0xB8DE76287EDC4957(iLocal_170, 0))
		{
		}
		else if (iLocal_170 != 0)
		{
			iLocal_170 = 0;
		}
	}
	if (Global_70587.f_66 != 0 && Global_70584 == 0)
	{
		func_250(&Global_70587, Global_70665);
		Global_70587.f_66 = 0;
	}
	vVar3 = { 433,6721f, -1006,538f, 25,96351f };
	vVar4 = { 433,6578f, -1017,5f, 32,09895f };
	fVar5 = 11,25f;
	if (iLocal_124 > 0 && iLocal_124 < 99)
	{
		if (iLocal_124 != 3)
		{
			if (((((unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) || !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vVar3, vVar4, fVar5, 0, true, 0)) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(14))
			{
				iLocal_124 = 99;
			}
		}
	}
	if (func_363(iLocal_129))
	{
		if (!unk_0xA6DECE14FC9A8C51(iLocal_145))
		{
			if (((func_27(15) || func_27(12)) && iLocal_124 != 3) && !unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
			{
				iLocal_145 = func_361(428,37f, -1013,5f, 27,93f, 0);
				unk_0x4B4040A0EC7DBA81(iLocal_145, 225);
				unk_0x62BD54E491535B76(iLocal_145, "IMPOUND_BLIPNAME");
				unk_0x66DAED36FB41050D(iLocal_145, true);
			}
		}
		else if ((!(func_27(15) || func_27(12)) || iLocal_124 == 3) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
		{
			unk_0xE30CF11C0EE14316(&iLocal_145);
		}
	}
	else if (unk_0xA6DECE14FC9A8C51(iLocal_145))
	{
		unk_0xE30CF11C0EE14316(&iLocal_145);
	}
	switch (iLocal_124)
	{
		case 0:
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if ((Local_56.f_2 == 0 && (func_27(15) || func_27(12))) && !unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
				{
					if (func_363(iLocal_129))
					{
						if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vVar3, vVar4, fVar5, 0, true, 0))
						{
							if (func_327(iLocal_129) >= 250)
							{
								iVar6 = 0;
								iVar7 = 0;
								while (iVar7 < 2)
								{
									if (func_246(iVar7, iLocal_129))
									{
										iVar6++;
									}
									iVar7++;
								}
								if (iVar6 > 1)
								{
									func_188(&iLocal_125, 3, "IMPOUND_TRIG2", 0, 0, 0, 0);
								}
								else
								{
									func_188(&iLocal_125, 3, "IMPOUND_TRIG1", 0, 0, 0, 0);
								}
								iLocal_124 = 1;
							}
							else
							{
								func_186("SCLUB_NO_MONEY", -1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && func_184(0, -1, 0))
			{
				if (func_183(iLocal_125, 1))
				{
					func_69(&iLocal_125);
					unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
					func_360();
					iVar8 = 0;
					iVar9 = 0;
					while (iVar9 < 2)
					{
						if (func_246(iVar9, iLocal_129))
						{
							iVar8++;
						}
						iVar9++;
					}
					if (iVar8 > 1)
					{
						iLocal_116 = 0;
						iLocal_117 = 0;
						iLocal_118 = 0;
						iLocal_121 = -1;
						iLocal_124++;
					}
					else
					{
						iVar10 = 0;
						while (iVar10 < 2)
						{
							if (func_246(iVar10, iLocal_129))
							{
								if (iVar10 == 0)
								{
									vVar11 = { 431,4f, -997,33f, 24,76f };
								}
								else
								{
									vVar11 = { 436,39f, -997,25f, 24,76f };
								}
								while (!func_344(&iLocal_128, iVar10, vVar11, 179,24f, 1))
								{
									system::wait(0);
								}
								if (unk_0x6ADD12BF4D6D2587(iLocal_128))
								{
									if (iVar10 == 0)
									{
										func_343(18, 1, 0);
									}
									else
									{
										func_343(19, 1, 0);
									}
									if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
									{
										unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
									}
									func_294(iLocal_129, 118, 250);
									func_342(iVar10);
									func_31(iLocal_128, func_440());
									func_71(1, -1);
									iLocal_124 = 3;
									func_69(&iLocal_125);
									iLocal_125 = -1;
									iLocal_118 = 0;
								}
							}
							iVar10++;
						}
					}
				}
			}
			break;
		
		case 2:
			switch (func_440())
			{
				case 0:
					iVar12 = 0;
					break;
				
				case 1:
					iVar12 = 1;
					break;
				
				case 2:
					iVar12 = 2;
					break;
			}
			func_360();
			if (!iLocal_116 || iLocal_117)
			{
				func_181(0);
				func_180(1, 1, 0, 0, 0);
				func_179(1, 2, 1, 1, 1);
				func_178("IMPOUND_TITLE");
				iLocal_122 = 0;
				iVar13 = -1;
				iVar15 = 0;
				iVar14 = 0;
				while (iVar14 < 2)
				{
					if (func_246(iVar14, iLocal_129))
					{
						func_132(iVar15, unk_0x8C8DF9FA5116BB9A(Global_104555.f_32429.f_5038[iVar12 /*157*/][iVar14 /*78*/].f_66), 0, 1, 0, 0);
						if (iVar13 == -1)
						{
							iVar13 = iVar15;
							iLocal_121 = iVar15;
						}
						unk_0x872F1C1F8587CCC7(&iLocal_122, iVar15);
						iLocal_123[iVar15] = iVar14;
						func_132(iVar15, "IMPOUND_COST", 1, 1, 0, 0);
						func_341(250, 0);
						iVar15++;
					}
					iVar14++;
				}
				iVar15 = 0;
				func_125(iLocal_121, 1, 1);
				iLocal_119 = 1;
				iLocal_117 = 0;
				iLocal_116 = 1;
			}
			else
			{
				iVar0 = 0;
				if (unk_0xB9D80B12FE4456A5())
				{
					if (unk_0x2E4EC2FA6A038490(2))
					{
						unk_0x4FB260623DD93924(0, 1, 1);
						unk_0x4FB260623DD93924(0, 2, 1);
						unk_0x2DB625A7D089C175(0, 237, 1);
						unk_0x2DB625A7D089C175(0, 238, 1);
						unk_0x2DB625A7D089C175(0, 241, 1);
						unk_0x2DB625A7D089C175(0, 242, 1);
						func_122(0, 0, 0, 1);
						func_121(0, -1, 1);
						if (func_120())
						{
							if (Global_4265875 != iLocal_121)
							{
								unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iLocal_121 = Global_4265875;
								func_125(iLocal_121, 1, 1);
								iLocal_119 = 1;
							}
							else
							{
								iVar0 = 1;
							}
						}
					}
				}
				if (unk_0xE8C126B7ADBB9D63(2, 188) || unk_0xE8C126B7ADBB9D63(2, 241))
				{
					if (!iLocal_118)
					{
						iLocal_119 = 1;
						unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						iVar16 = (iLocal_121 - 1);
						while (iVar16 >= 0)
						{
							if (unk_0xC80D31E4B587871C(iLocal_122, iVar16))
							{
								iLocal_121 = iVar16;
								bVar17 = true;
								iVar16 = 0;
							}
							iVar16 = (iVar16 + -1);
						}
						if (!bVar17)
						{
							iVar16 = 31;
							while (iVar16 >= iLocal_121 + 1)
							{
								if (unk_0xC80D31E4B587871C(iLocal_122, iVar16))
								{
									iLocal_121 = iVar16;
									bVar17 = true;
									iVar16 = iLocal_121;
								}
								iVar16 = (iVar16 + -1);
							}
						}
						if (bVar17)
						{
							func_125(iLocal_121, 1, 1);
						}
					}
				}
				else if (unk_0xE8C126B7ADBB9D63(2, 187) || unk_0xE8C126B7ADBB9D63(2, 242))
				{
					if (!iLocal_118)
					{
						iLocal_119 = 1;
						unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						iVar18 = iLocal_121 + 1;
						while (iVar18 <= 31)
						{
							if (unk_0xC80D31E4B587871C(iLocal_122, iVar18))
							{
								iLocal_121 = iVar18;
								bVar19 = true;
								iVar18 = 31;
							}
							iVar18++;
						}
						if (!bVar19)
						{
							iVar18 = 0;
							while (iVar18 <= (iLocal_121 - 1))
							{
								if (unk_0xC80D31E4B587871C(iLocal_122, iVar18))
								{
									iLocal_121 = iVar18;
									bVar19 = true;
									iVar18 = iLocal_121;
								}
								iVar18++;
							}
						}
						if (bVar19)
						{
							func_125(iLocal_121, 1, 1);
						}
					}
				}
				else if (unk_0x58F436C557A0FD7A(2, 201) || iVar0 == 1)
				{
					iVar0 = 0;
					unk_0x4AFBCBFDE748D4E0(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!iLocal_118)
					{
						func_119("IMPOUND_CNF", 0, 0);
						func_118(-1);
						func_117(201, "ITEM_YES", -1);
						func_117(202, "ITEM_NO", -1);
						iLocal_118 = 1;
					}
					else
					{
						if (iLocal_121 == 0)
						{
							vVar20 = { 431,4f, -997,33f, 24,76f };
						}
						else
						{
							vVar20 = { 436,39f, -997,25f, 24,76f };
						}
						if (func_246(iLocal_123[iLocal_121], iLocal_129))
						{
							while (!func_344(&iLocal_128, iLocal_123[iLocal_121], vVar20, 179,24f, 1))
							{
								system::wait(0);
							}
							if (unk_0x6ADD12BF4D6D2587(iLocal_128))
							{
								if (iLocal_121 == 0)
								{
									func_343(18, 1, 0);
								}
								else
								{
									func_343(19, 1, 0);
								}
								if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
								{
									unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
								}
								func_294(iLocal_129, 118, 250);
								func_342(iLocal_123[iLocal_121]);
								func_31(iLocal_128, func_440());
								func_71(1, -1);
								iLocal_124++;
								func_69(&iLocal_125);
								iLocal_125 = -1;
								iLocal_118 = 0;
							}
						}
						iLocal_117 = 1;
					}
				}
				else if (unk_0x58F436C557A0FD7A(2, 202) || unk_0x58F436C557A0FD7A(2, 238))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (iLocal_118)
					{
						iLocal_119 = 1;
						iLocal_118 = 0;
					}
					else
					{
						iLocal_124 = 99;
					}
				}
			}
			unk_0x36853D5037847BF3();
			if (iLocal_119)
			{
				func_119("", 0, 0);
				func_118(-1);
				func_117(201, "ITEM_SELECT", -1);
				func_117(202, "ITEM_EXIT", -1);
				iLocal_118 = 0;
				iLocal_119 = 0;
			}
			if (func_184(0, -1, 0))
			{
				func_74(1, -1, 1, 0, 1, -1082130432, 0, 0);
			}
			break;
		
		case 3:
			if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 431,4f, -997,33f, 24,76f, true) > 20f && !func_340())
			{
				func_31(iLocal_128, func_440());
				iLocal_124 = 99;
			}
			else if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 431,4f, -997,33f, 24,76f, true) > 100f)
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_128))
				{
					if (!unk_0x191BE1BC8F26F3C1(iLocal_128, 0))
					{
						if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_128, 0) && unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(iLocal_128, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), true) > 100f)
						{
							if (!unk_0x841ED61760A7D07B(iLocal_128))
							{
								func_339(iLocal_128, 1, 145);
								unk_0xC91FE17AD7353B70(&iLocal_128);
								unk_0x9B8406983378711E(431,4f, -997,33f, 24,76f, 10f, 0, 0, 1, 1, false, 0);
								iLocal_124 = 99;
							}
						}
						else if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_128, 0))
						{
							unk_0x9B8406983378711E(431,4f, -997,33f, 24,76f, 10f, 0, 0, 1, 1, false, 0);
							func_31(iLocal_128, func_440());
							iLocal_124 = 99;
						}
					}
					else
					{
						unk_0x9B8406983378711E(431,4f, -997,33f, 24,76f, 10f, 0, 0, 1, 1, false, 0);
						iLocal_124 = 99;
					}
				}
				else
				{
					unk_0x9B8406983378711E(431,4f, -997,33f, 24,76f, 10f, 0, 0, 1, 1, false, 0);
					iLocal_124 = 99;
				}
			}
			break;
		
		case 99:
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			}
			func_69(&iLocal_125);
			iVar21 = 0;
			while (iVar21 < 2)
			{
				iLocal_123[iVar21] = -1;
				iVar21++;
			}
			func_343(18, 0, 0);
			func_343(19, 0, 0);
			if (unk_0x6ADD12BF4D6D2587(iLocal_128))
			{
				unk_0x5380482A432E314E(&iLocal_128);
			}
			iLocal_124 = 0;
			break;
	}
	if (iLocal_124 == 0)
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 428,2928f, -996,6834f, 24,48864f, 439,5438f, -996,7114f, 28,10333f, 8,6875f, 0, true, 0))
		{
			if (!iLocal_127)
			{
				func_343(18, 1, 0);
				iLocal_127 = 1;
			}
		}
		else if (iLocal_127 && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 431,2715f, -1004,059f, 23,98198f, 431,0394f, -993,621f, 27,61868f, 6,8125f, 0, true, 0))
		{
			func_343(18, 0, 0);
			iLocal_127 = 0;
		}
	}
}

int func_339(int iParam0, int iParam1, int iParam2)//Position - 0x23634
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0xA88FE81C0BDF2731(iParam0, &uVar0);
		if (!unk_0xAB019B170BF1309C(sVar1))
		{
			if (unk_0x8B948C59217A295D(sVar1) == unk_0x8B948C59217A295D("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_31(iParam0, iParam2);
	return 1;
}

int func_340()//Position - 0x23674
{
	if (unk_0x396220A87B46A7B8(431,4424f, -997,7308f, 24,76161f, 4,75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0x396220A87B46A7B8(436,6913f, -997,5869f, 24,75582f, 4,75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0x396220A87B46A7B8(431,07f, -1005,57f, 26,2f, 4,75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0x396220A87B46A7B8(436,52f, -1005,47f, 26,17f, 4,75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_341(int iParam0, bool bParam1)//Position - 0x2371E
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17301.f_5092 >= 256)
	{
		return;
	}
	if (Global_17301.f_5610 >= 4)
	{
		return;
	}
	if (Global_17301.f_5611 != 1)
	{
		return;
	}
	if (Global_17301.f_5610 >= Global_17301.f_5608)
	{
		return;
	}
	Global_17301.f_3918[Global_17301.f_5092] = iParam0;
	Global_17301.f_5092++;
	Global_17301.f_2124[Global_17301.f_5609 /*5*/][Global_17301.f_5610] = 2;
	Global_17301.f_5610++;
	if (Global_17301.f_5610 >= Global_17301.f_5608)
	{
		fVar0 = func_128();
		if (Global_17301.f_4945[Global_17301.f_5089] && Global_17301.f_5610 == Global_17301.f_5608)
		{
			func_107(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17301.f_4938[(Global_17301.f_5089 - 1)])
		{
			Global_17301.f_4938[(Global_17301.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17301.f_5610 >= Global_17301.f_5608)
		{
			fVar3 = func_127();
			if (fVar3 > Global_17301.f_5612[Global_17301.f_5088])
			{
				Global_17301.f_5612[Global_17301.f_5088] = fVar3;
			}
		}
	}
}

void func_342(int iParam0)//Position - 0x23859
{
	int iVar0;
	
	switch (func_440())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_247(&(Global_104555.f_32429.f_5038[iVar0 /*157*/])))
	{
		return;
	}
	Global_104555.f_32429.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66 = 0;
}

void func_343(int iParam0, bool bParam1, bool bParam2)//Position - 0x238C8
{
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_34984[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			if (unk_0xC80D31E4B587871C(Global_34984[iParam0 /*31*/].f_1, 1))
			{
				Global_34984[iParam0 /*31*/].f_22 = -1f;
			}
			else
			{
				Global_34984[iParam0 /*31*/].f_22 = 1f;
			}
			unk_0x99B6EAC23065A02E(Global_34984[iParam0 /*31*/], Global_34984[iParam0 /*31*/].f_22, 0, 0);
			unk_0xB94AAB49E0BB01DB(Global_34984[iParam0 /*31*/], 1, 0, 1);
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_34984[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			Global_34984[iParam0 /*31*/].f_22 = 0f;
			unk_0x99B6EAC23065A02E(Global_34984[iParam0 /*31*/], Global_34984[iParam0 /*31*/].f_22, 0, 0);
			unk_0xB94AAB49E0BB01DB(Global_34984[iParam0 /*31*/], 1, 0, 1);
		}
	}
}

int func_344(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0x23978
{
	int iVar0;
	
	if (!func_246(iParam1, func_440()) || unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		return 0;
	}
	switch (func_440())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	unk_0x6FF834D85E2DD4C6(Global_104555.f_32429.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
	if (unk_0x9A0B2ED5055D3F0B(Global_104555.f_32429.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66))
	{
		*iParam0 = unk_0xEA60F3B426BB095B(Global_104555.f_32429.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66, vParam2, fParam3, false, false, false);
		func_345(*iParam0, &(Global_104555.f_32429.f_5038[iVar0 /*157*/][iParam1 /*78*/]), 0, 1);
		unk_0xACE486395AA1867D(*iParam0, 1084227584);
		unk_0xD8D940C0BFD3E1EC(*iParam0, 0);
		unk_0x438D30A195B65156(*iParam0, true);
		if (bParam4)
		{
			unk_0x14776E43F90DD454(Global_104555.f_32429.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
		}
		return 1;
	}
	return 0;
}

void func_345(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x23A7D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (!func_353(iParam0))
		{
			if (unk_0x8B948C59217A295D(&(uParam1->f_1)) != 0)
			{
				unk_0xE58BC5B025017AE2(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0xD559B6108233E114())
			{
				unk_0xFD5736F667C70A28(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xC80D31E4B587871C(uParam1->f_77, func_33(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_33(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xC80D31E4B587871C(uParam1->f_77, func_33(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_33(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == 433954513)
		{
			unk_0xF6744C962F375B94(iParam0, 0);
			if (unk_0xF928889F6E5C7677(iParam0, 5) != -1)
			{
				unk_0xF6744C962F375B94(iParam0, 1);
			}
		}
		if (unk_0xC80D31E4B587871C(uParam1->f_77, 13))
		{
			unk_0xFAE216A82B56EEF2(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xE154D705D18ED685(iParam0);
		}
		if (unk_0xC80D31E4B587871C(uParam1->f_77, 12))
		{
			unk_0x4852153449AFF07A(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x7FAF16725A6EE5F0(iParam0);
		}
		unk_0x1E7A8525FB41AAFE(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xB1AB9FD8B4959960(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xC80D31E4B587871C(uParam1->f_77, 15) || func_352(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_351())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0x94D4C393A9825924(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_35(uParam1->f_66))
		{
			unk_0xDAA5C9C59AF4D4EB(iParam0, 0);
		}
		else
		{
			unk_0xDAA5C9C59AF4D4EB(iParam0, 0);
			unk_0xDAA5C9C59AF4D4EB(iParam0, uParam1->f_65);
		}
		unk_0x4D7D93C6E0C1063B(iParam0, !unk_0xC80D31E4B587871C(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x4BEFCD5DAE410A90(iParam0, uParam1->f_70);
		}
		unk_0x7F254E8C9247E923(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x9D1E2B17CE94D0B9(iParam0, 2, unk_0xC80D31E4B587871C(uParam1->f_77, 28));
		unk_0x9D1E2B17CE94D0B9(iParam0, 3, unk_0xC80D31E4B587871C(uParam1->f_77, 29));
		unk_0x9D1E2B17CE94D0B9(iParam0, 0, unk_0xC80D31E4B587871C(uParam1->f_77, 30));
		unk_0x9D1E2B17CE94D0B9(iParam0, 1, unk_0xC80D31E4B587871C(uParam1->f_77, 31));
		unk_0xD2557AC67FBCFB9D(iParam0, unk_0xC80D31E4B587871C(uParam1->f_77, 10));
		if (unk_0xAFB4F670EC043D01(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xC7BF27112709A906(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(iParam0)))
			{
				if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_350(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_350(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x965BEFCC45024E92(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x4B004F11F16CA872(iParam0, 1);
			}
			else
			{
				unk_0x54DFCB9F4F68A288(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_346(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xF9DDB1C0875FD9E0(uParam1->f_66) && !unk_0x428C7026AD2721BA(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xC80D31E4B587871C(uParam1->f_77, func_33(iVar2 + 1)))
				{
					if (!unk_0x7C7056D6F2A31BF6(iParam0, iVar2 + 1))
					{
						unk_0x7B3133EBCD34B431(iParam0, iVar2 + 1, false);
					}
				}
				else if (unk_0x7C7056D6F2A31BF6(iParam0, iVar2 + 1))
				{
					unk_0x7B3133EBCD34B431(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((unk_0x82FF3DFBC3965CC0(iParam0) == joaat("sheava") || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("omnis")) || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("le7b"))
		{
			if (unk_0xF928889F6E5C7677(iParam0, 0) == -1)
			{
				unk_0x7B3133EBCD34B431(iParam0, 1, false);
			}
		}
		if (((unk_0x849A8CFD71854E02(uParam1->f_66) && unk_0x256C25369C3811D6(iParam0)) && !unk_0xB0DA749C8A7CCBBF(iParam0, -2118308144)) && !((((Global_4456448.f_50256 == 6 || Global_4456448.f_50256 == 7) || Global_4456448.f_50256 == 18) || Global_4456448.f_50256 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0xC80D31E4B587871C(uParam1->f_77, 23))
			{
				if (unk_0xC80D31E4B587871C(uParam1->f_77, 22))
				{
					unk_0x39748EEC52404AFA(iParam0, 2);
				}
				else
				{
					unk_0x39748EEC52404AFA(iParam0, 3);
				}
			}
			else
			{
				unk_0x39748EEC52404AFA(iParam0, 4);
			}
		}
		if (unk_0xC80D31E4B587871C(uParam1->f_77, 27))
		{
			unk_0x592E07F996BB4B89(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x592E07F996BB4B89(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_346(int iParam0, var uParam1, var uParam2)//Position - 0x23FCB
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB8DE76287EDC4957(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x96E226626970ABA3(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xA0A6811A3E4062D1(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x4705D420368126DF(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0xF928889F6E5C7677(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x75F267954030DBEB(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0xA9EF3F93CBFFF6D0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0xA9EF3F93CBFFF6D0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0xA9EF3F93CBFFF6D0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_224(unk_0x82FF3DFBC3965CC0(*iParam0), 1) && unk_0xF928889F6E5C7677(*iParam0, 24) != func_349(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xA9EF3F93CBFFF6D0(*iParam0, 24, func_349(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_348(iParam0);
	if (func_347(*iParam0))
	{
		unk_0x9980244E5DAEFED4(*iParam0, true);
		unk_0x438D30A195B65156(*iParam0, true);
	}
	return 1;
}

int func_347(int iParam0)//Position - 0x2414A
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0)) && unk_0x96E226626970ABA3(iParam0) > 0)
	{
		unk_0xA0A6811A3E4062D1(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0xF928889F6E5C7677(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xDC300345F8ACC8C3(iParam0, iVar1, unk_0xF928889F6E5C7677(iParam0, iVar1)), 16);
				iVar2 = unk_0x8B948C59217A295D(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x8B948C59217A295D("MNU_CAGE") || iVar2 == unk_0x8B948C59217A295D("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_348(var uParam0)//Position - 0x24226
{
	switch (unk_0x82FF3DFBC3965CC0(*uParam0))
	{
		case -1700874274:
			if (unk_0xF928889F6E5C7677(*uParam0, 4) == 0)
			{
				unk_0xA9EF3F93CBFFF6D0(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x75F267954030DBEB(*uParam0, 13);
			}
			break;
	}
}

int func_349(int iParam0, int iParam1)//Position - 0x24266
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		switch (unk_0x82FF3DFBC3965CC0(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x2E9AFFEE33324CC8(iParam0, 38);
		iVar1 = unk_0x2E9AFFEE33324CC8(iParam0, 24);
		fVar2 = (system::to_float(iParam1 + 1) / system::to_float(iVar0));
		iVar3 = (system::floor((system::to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

void func_350(int iParam0, int iParam1)//Position - 0x2434B
{
	int iVar0;
	int iVar1;
	
	if (unk_0x96E226626970ABA3(iParam0) > 0)
	{
		unk_0xA0A6811A3E4062D1(iParam0, 0);
		iVar0 = unk_0xF928889F6E5C7677(iParam0, 24);
		iVar1 = unk_0x8D462BB6E4814682(iParam0, 24);
		unk_0xC195F0A7CE73E810(iParam0, iParam1);
		if (unk_0x82FF3DFBC3965CC0(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x75F267954030DBEB(iParam0, 24);
		}
		else
		{
			unk_0xA9EF3F93CBFFF6D0(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_351()//Position - 0x243B0
{
	return unk_0x21EA5D4DC72DE119(-1691188696);
}

int func_352(int iParam0)//Position - 0x243C1
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (unk_0x6C5223DB5E5CFD9B("MPBitset", 3))
			{
				if (unk_0xB80A4DA4C06A76F1(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x2786E663D1846FFC(iParam0, "MPBitset");
				}
				return unk_0xC80D31E4B587871C(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_353(int iParam0)//Position - 0x2440C
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!func_359(unk_0x9EB17624F44A8DA4(), -1))
		{
			iParam0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		}
	}
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	if (func_355(unk_0x9EB17624F44A8DA4()) == 3)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (func_354(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_354(int iParam0)//Position - 0x24493
{
	if (unk_0x6C5223DB5E5CFD9B("FMDeliverableID", 3))
	{
		if (unk_0xB80A4DA4C06A76F1(iParam0, "FMDeliverableID"))
		{
			return unk_0x2786E663D1846FFC(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_355(int iParam0)//Position - 0x244C2
{
	if (func_358(iParam0) == 233)
	{
		return func_356(iParam0);
	}
	return -1;
}

int func_356(int iParam0)//Position - 0x244DF
{
	if (func_357(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_176;
	}
	return -1;
}

int func_357(int iParam0, int iParam1)//Position - 0x24502
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_358(int iParam0)//Position - 0x2453D
{
	if (func_357(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

int func_359(int iParam0, int iParam1)//Position - 0x24560
{
	int iVar0;
	
	if (func_209(iParam0, 1, 1))
	{
		if (unk_0x88DDBE9908752BF0(unk_0x25D049AAC4603E65(iParam0), 0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0x25D049AAC4603E65(iParam0), 0);
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (unk_0xFC1458A37D98B502() == unk_0x317536BCEA8FA6B0(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_360()//Position - 0x245AD
{
	unk_0x0DD783ABAB85FEE2(0);
	unk_0x2DB625A7D089C175(0, 188, 1);
	unk_0x2DB625A7D089C175(0, 187, 1);
	unk_0x2DB625A7D089C175(0, 201, 1);
	unk_0x2DB625A7D089C175(0, 202, 1);
	unk_0x2DB625A7D089C175(0, 1, 1);
	unk_0x2DB625A7D089C175(0, 2, 1);
	unk_0x2DB625A7D089C175(0, 239, 1);
	unk_0x2DB625A7D089C175(0, 240, 1);
}

int func_361(vector3 vParam0, bool bParam1)//Position - 0x245F8
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_362(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(iVar0, bParam1);
	return iVar0;
}

float func_362(bool bParam0, float fParam1, float fParam2)//Position - 0x24624
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_363(int iParam0)//Position - 0x2463B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_246(iVar0, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_364(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x24665
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_93();
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

int func_365(int iParam0)//Position - 0x24B1F
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_366(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_366(int iParam0)//Position - 0x24B5C
{
	if (func_25(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_367(int iParam0)//Position - 0x24B86
{
	int iVar0;
	struct<8> Var1;
	
	if (!unk_0xC80D31E4B587871C(Global_104555.f_9986.f_25, 7))
	{
		if (!unk_0xC80D31E4B587871C(*iParam0, 6))
		{
			if (func_27(13) && func_14(func_16()))
			{
				unk_0x872F1C1F8587CCC7(iParam0, 6);
				iVar0 = func_9();
				iParam0->f_6 = { func_398(iVar0) };
				if (Global_25506 == iVar0 || Global_25506 == 0)
				{
					func_3(1);
					Var1 = { func_397("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
					unk_0xE859EF37EA7362D3(&Var1);
					iVar0 = (Global_25506 + 1 % 8);
					func_395(iParam0, iVar0);
					iParam0->f_2 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(8000, 12000));
					unk_0x872F1C1F8587CCC7(iParam0, 12);
					if (iVar0 == 7)
					{
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_9986.f_25), 7);
						func_394(255, 0);
					}
				}
				else
				{
					func_395(iParam0, 0);
					unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_9986.f_25), 12);
				}
			}
		}
		else
		{
			func_393();
			if (!unk_0xC80D31E4B587871C(*iParam0, 31))
			{
				if (!unk_0xC80D31E4B587871C(*iParam0, 25))
				{
					func_392(iParam0);
				}
				else if (func_391())
				{
					func_375(iParam0);
					iParam0->f_3 = unk_0x53C562FD2B9E3AB0() + 2000;
				}
				if (!func_374(0))
				{
					func_394(255, 0);
				}
			}
			else if (func_374(0))
			{
				if (unk_0x53C562FD2B9E3AB0() > iParam0->f_3)
				{
					func_394(0, 800);
				}
			}
			if (!func_27(13) || !func_14(func_16()))
			{
				func_368(iParam0);
			}
		}
	}
}

void func_368(int iParam0)//Position - 0x24D04
{
	struct<8> Var0;
	
	if (unk_0xC80D31E4B587871C(*iParam0, 31))
	{
		func_373(iParam0);
	}
	if (unk_0xC80D31E4B587871C(*iParam0, 25))
	{
		func_369(iParam0);
	}
	Var0 = { func_397("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
	if (unk_0x771D0F8F56A5FE6C(&Var0))
	{
		unk_0xE02E32C69260FBB7(&Var0);
	}
	unk_0x0EE72DB1CD8A3B86(iParam0, 6);
	unk_0x0EE72DB1CD8A3B86(iParam0, 30);
	unk_0x0EE72DB1CD8A3B86(iParam0, 8);
}

void func_369(int iParam0)//Position - 0x24D6F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_372(iVar0);
	iVar2 = func_371(iVar1);
	iVar3 = func_370(iVar1);
	if (iVar2 != 0)
	{
		unk_0x14776E43F90DD454(iVar2);
	}
	if (iVar3 != 0)
	{
		unk_0x14776E43F90DD454(iVar3);
	}
	unk_0x0EE72DB1CD8A3B86(iParam0, 25);
}

int func_370(int iParam0)//Position - 0x24DB5
{
	switch (iParam0)
	{
		case 17:
			return joaat("u_m_y_cyclist_01");
		
		case 49:
			return joaat("dune");
		
		default:
	}
	return 0;
}

int func_371(int iParam0)//Position - 0x24DE1
{
	switch (iParam0)
	{
		case 12:
			return -541762431;
		
		case 109:
			return joaat("a_c_boar");
		
		case 43:
			return joaat("a_c_deer");
		
		case 35:
			return joaat("emperor2");
		
		case 17:
			return joaat("scorcher");
		
		case 28:
			return joaat("a_c_mtlion");
		
		case 49:
			return joaat("cs_hunter");
		
		case 25:
			return joaat("a_m_y_hiker_01");
		
		case 14:
			return joaat("a_f_y_hippie_01");
		
		case 86:
			return joaat("a_m_m_hillbilly_01");
		
		default:
	}
	return 0;
}

int func_372(int iParam0)//Position - 0x24E7D
{
	switch (iParam0)
	{
		case 1:
			return 12;
		
		case 2:
			return 43;
		
		case 3:
			return 35;
		
		case 4:
			return 109;
		
		case 5:
			return 28;
		
		case 6:
			return 17;
		
		default:
	}
	return -1;
}

void func_373(int iParam0)//Position - 0x24ECF
{
	if (unk_0x6ADD12BF4D6D2587(iParam0->f_4))
	{
		unk_0xF4A2B3ABAFAEF9EE(unk_0xB3328BA8976B416C(iParam0->f_4, 0), 10f);
		unk_0xC91FE17AD7353B70(&(iParam0->f_4));
	}
	if (unk_0x6ADD12BF4D6D2587(iParam0->f_5))
	{
		unk_0xF4A2B3ABAFAEF9EE(unk_0xB3328BA8976B416C(iParam0->f_5, 0), 10f);
		unk_0x68433819717660CF(&(iParam0->f_5));
	}
	unk_0x0EE72DB1CD8A3B86(iParam0, 31);
}

bool func_374(bool bParam0)//Position - 0x24F29
{
	if (bParam0)
	{
		return Global_101303.f_2 > 0,5f;
	}
	return Global_101303.f_2 >= 255f;
}

void func_375(int iParam0)//Position - 0x24F54
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_9();
	iVar1 = func_372(iVar0);
	func_376(iVar1, &(iParam0->f_5), &(iParam0->f_4), func_390(iVar0), func_389(iVar0), 1);
	unk_0x872F1C1F8587CCC7(iParam0, 31);
}

void func_376(int iParam0, var uParam1, var uParam2, vector3 vParam3, float fParam4, bool bParam5)//Position - 0x24F8D
{
	switch (iParam0)
	{
		case 12:
			func_388(uParam1, vParam3, fParam4, bParam5);
			break;
		
		case 109:
			func_387(uParam1, vParam3, fParam4, bParam5);
			break;
		
		case 43:
			func_386(uParam1, vParam3, fParam4, bParam5);
			break;
		
		case 35:
			func_385(uParam2, vParam3, fParam4, bParam5);
			break;
		
		case 28:
			func_384(uParam1, vParam3, fParam4, bParam5);
			break;
		
		case 17:
			func_383(uParam1, uParam2, vParam3, fParam4, bParam5);
			break;
		
		case 49:
			func_381(uParam1, uParam2, vParam3, fParam4);
			break;
		
		case 25:
			func_380(uParam1, vParam3, fParam4);
			break;
		
		case 14:
			func_379(uParam1, vParam3, fParam4);
			break;
		
		case 86:
			func_377(uParam1, vParam3, fParam4);
			break;
	}
}

void func_377(var uParam0, vector3 vParam1, float fParam2)//Position - 0x2507E
{
	int iVar0;
	
	iVar0 = func_371(86);
	if (unk_0x9A0B2ED5055D3F0B(iVar0))
	{
		*uParam0 = unk_0xAC992EFAD62C33BF(5, iVar0, vParam1, fParam2, 1, true);
		unk_0xFC0DF15617416876(*uParam0, 1);
		unk_0xAE01EF4BC84AFE7C(*uParam0, 227, true);
		unk_0x14776E43F90DD454(iVar0);
		unk_0xE01CE1EBCD7EE551(*uParam0, 0, 0);
		unk_0x764B52EA8B8FFFA3(*uParam0);
		unk_0x93B85673224CA2DE(1110, (vParam1.x + 0,1f), (vParam1.y - 0,01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,5f, 0,4f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x93B85673224CA2DE(1110, (vParam1.x - 0,03f), (vParam1.y + 0,3f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,9f, 0,8f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x93B85673224CA2DE(1110, (vParam1.x - 0,2f), (vParam1.y - 0,01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,8f, 1,1f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x93B85673224CA2DE(1110, (vParam1.x - 0,5f), (vParam1.y - 0,01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,7f, 0,6f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x93B85673224CA2DE(1110, (vParam1.x + 0,01f), (vParam1.y - 0,4f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1,4f, 1f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x93B85673224CA2DE(1110, (vParam1.x + 0,01f), (vParam1.y - 0,01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1,1f, 1f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x93B85673224CA2DE(1110, (vParam1.x - 0,6f), (vParam1.y - 0,35f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1,5f, 1,2f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_378(*uParam0);
		return;
	}
}

void func_378(int iParam0)//Position - 0x25285
{
	unk_0x8B8D1CEBA80E6B77(iParam0, 1, 0,431f, 0,667f, 179,593f, 0,889f, 2, 0f, "BasicSlash");
	unk_0x8B8D1CEBA80E6B77(iParam0, 1, 0,556f, 0,292f, 161,805f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x8B8D1CEBA80E6B77(iParam0, 1, 0,708f, 0,688f, 167,897f, 0f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x8B8D1CEBA80E6B77(iParam0, 2, 0,472f, 0,347f, 146,133f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x8B8D1CEBA80E6B77(iParam0, 2, 0,799f, 0,451f, 158,294f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x8B8D1CEBA80E6B77(iParam0, 0, 0,681f, 0,507f, 158,707f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x8B8D1CEBA80E6B77(iParam0, 0, 0,819f, 0,813f, 174,811f, 0,056f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x8B8D1CEBA80E6B77(iParam0, 0, 0,174f, 0,438f, 211,521f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x8B8D1CEBA80E6B77(iParam0, 0, 0,174f, 0,486f, 213,237f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x8B8D1CEBA80E6B77(iParam0, 0, 0,174f, 0,542f, 215,168f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x8B8D1CEBA80E6B77(iParam0, 0, 0,236f, 0,542f, 213,752f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x8B8D1CEBA80E6B77(iParam0, 0, 0,278f, 0,542f, 212,851f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x8B8D1CEBA80E6B77(iParam0, 0, 0,313f, 0,542f, 212,127f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x8B8D1CEBA80E6B77(iParam0, 5, 0,639f, 0,313f, 149,248f, 1f, 1, 0f, "stab");
	unk_0x8B8D1CEBA80E6B77(iParam0, 5, 0,792f, 0,424f, 182,625f, 1f, 1, 0f, "stab");
	unk_0x8B8D1CEBA80E6B77(iParam0, 5, 0,792f, 0,424f, 182,625f, 1f, 1, 0f, "BasicSlash");
	unk_0x8B8D1CEBA80E6B77(iParam0, 3, 0,618f, 0,451f, 204,207f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x8B8D1CEBA80E6B77(iParam0, 3, 0,785f, 0,597f, 206,103f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x8B8D1CEBA80E6B77(iParam0, 4, 0,688f, 0,438f, 202,91f, 1f, 1, 0f, "BasicSlash");
	unk_0x8B8D1CEBA80E6B77(iParam0, 4, 0,688f, 0,424f, 202,492f, 1f, 1, 0f, "BasicSlash");
	unk_0x8B8D1CEBA80E6B77(iParam0, 4, 0,688f, 0,347f, 200,181f, 1f, 1, 0f, "BasicSlash");
	unk_0x8B8D1CEBA80E6B77(iParam0, 4, 0,688f, 0,278f, 198,043f, 1f, 1, 0f, "BasicSlash");
	unk_0x8B8D1CEBA80E6B77(iParam0, 4, 0,688f, 0,222f, 196,275f, 1f, 1, 0f, "BasicSlash");
	unk_0x8B8D1CEBA80E6B77(iParam0, 4, 0,653f, 0,222f, 196,609f, 1f, 3, 0f, "BasicSlash");
	unk_0x8B8D1CEBA80E6B77(iParam0, 4, 0,75f, 0,222f, 195,716f, 1f, 2, 0f, "BasicSlash");
	unk_0x8B8D1CEBA80E6B77(iParam0, 4, 1f, 0,326f, 196,621f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x8B8D1CEBA80E6B77(iParam0, 4, 0,93f, 0,451f, 200,584f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x8B8D1CEBA80E6B77(iParam0, 4, 0,618f, 0,451f, 204,207f, 1f, 0, 0f, "ShotgunLargeMonolithic");
}

void func_379(var uParam0, vector3 vParam1, float fParam2)//Position - 0x255BD
{
	int iVar0;
	
	iVar0 = func_371(14);
	if (unk_0x9A0B2ED5055D3F0B(iVar0))
	{
		*uParam0 = unk_0xAC992EFAD62C33BF(5, iVar0, vParam1, fParam2, 1, true);
		unk_0xFC0DF15617416876(*uParam0, 1);
		unk_0xAE01EF4BC84AFE7C(*uParam0, 227, true);
		unk_0x14776E43F90DD454(iVar0);
		unk_0xE01CE1EBCD7EE551(*uParam0, 0, 0);
		unk_0x764B52EA8B8FFFA3(*uParam0);
		unk_0x93B85673224CA2DE(1110, (vParam1.x + 0,1f), (vParam1.y - 0,01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,5f, 0,4f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x93B85673224CA2DE(1110, (vParam1.x - 0,03f), (vParam1.y + 0,3f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,9f, 0,8f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x93B85673224CA2DE(1110, (vParam1.x - 0,2f), (vParam1.y - 0,01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,8f, 1,1f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x93B85673224CA2DE(1110, (vParam1.x - 0,5f), (vParam1.y - 0,01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,7f, 0,6f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x93B85673224CA2DE(1110, (vParam1.x + 0,01f), (vParam1.y - 0,4f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1,4f, 1f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x93B85673224CA2DE(1110, (vParam1.x + 0,01f), (vParam1.y - 0,01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1,1f, 1f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x93B85673224CA2DE(1110, (vParam1.x - 0,6f), (vParam1.y - 0,35f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1,5f, 1,2f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_378(*uParam0);
		return;
	}
}

void func_380(var uParam0, vector3 vParam1, float fParam2)//Position - 0x257C4
{
	int iVar0;
	
	iVar0 = func_371(25);
	if (unk_0x9A0B2ED5055D3F0B(iVar0))
	{
		*uParam0 = unk_0xAC992EFAD62C33BF(4, iVar0, vParam1, fParam2, 1, true);
		unk_0xFC0DF15617416876(*uParam0, 1);
		unk_0xAE01EF4BC84AFE7C(*uParam0, 227, true);
		unk_0x14776E43F90DD454(iVar0);
		unk_0xE01CE1EBCD7EE551(*uParam0, 0, 0);
		unk_0x764B52EA8B8FFFA3(*uParam0);
		unk_0x93B85673224CA2DE(1110, (vParam1.x + 0,02f), (vParam1.y - 0,01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,5f, 0,4f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x93B85673224CA2DE(1110, (vParam1.x - 0,23f), (vParam1.y + 0,04f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,9f, 0,8f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x93B85673224CA2DE(1110, (vParam1.x - 0,05f), (vParam1.y - 0,01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,8f, 1,1f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x93B85673224CA2DE(1110, (vParam1.x - 0,05f), (vParam1.y - 0,11f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,7f, 0,6f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x93B85673224CA2DE(1110, (vParam1.x + 0,09f), (vParam1.y - 0,06f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1,1f, 1f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_378(*uParam0);
		return;
	}
}

void func_381(var uParam0, var uParam1, vector3 vParam2, float fParam3)//Position - 0x25953
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = func_371(49);
	iVar1 = func_370(49);
	if (unk_0x9A0B2ED5055D3F0B(iVar0) && unk_0x9A0B2ED5055D3F0B(iVar1))
	{
		*uParam0 = unk_0xAC992EFAD62C33BF(4, iVar0, vParam2, fParam3, 1, true);
		unk_0xFC0DF15617416876(*uParam0, 1);
		unk_0xAE01EF4BC84AFE7C(*uParam0, 227, true);
		unk_0x14776E43F90DD454(iVar0);
		unk_0xE01CE1EBCD7EE551(*uParam0, 0, 0);
		unk_0x764B52EA8B8FFFA3(*uParam0);
		unk_0x93B85673224CA2DE(1110, ((vParam2.x + 0,12f) - 0,3f), ((vParam2.y - 0,01f) - 0,07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0,9f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x93B85673224CA2DE(1110, ((vParam2.x - 0,03f) - 0,3f), ((vParam2.y + 0,04f) - 0,07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,9f, 0,8f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x93B85673224CA2DE(1110, ((vParam2.x - 0,2f) - 0,3f), ((vParam2.y - 0,01f) - 0,07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,7f, 0,9f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x93B85673224CA2DE(1110, ((vParam2.x - 0,05f) - 0,3f), ((vParam2.y - 0,15f) - 0,07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,9f, 0,7f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x93B85673224CA2DE(1110, ((vParam2.x + 0,01f) - 0,3f), ((vParam2.y - 0,06f) - 0,07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,8f, 1f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_378(*uParam0);
		vVar2 = { 9,9929f, 4,6946f, -7,1469f };
		*uParam1 = unk_0xEA60F3B426BB095B(iVar1, vParam2 + vVar2, fParam3, true, true, false);
		unk_0x14776E43F90DD454(iVar1);
		unk_0xB38E13EF2EC6F0E9(*uParam1, 2f);
		unk_0xACE486395AA1867D(*uParam1, 1084227584);
		unk_0x044E8E97998FB7A4(*uParam1, 2f);
		unk_0x5EA96E3E7DF207F0(*uParam1, 1f);
		unk_0x9B61DD542916B30C(*uParam1, 0, func_382());
		unk_0x9B61DD542916B30C(*uParam1, 1, func_382());
		unk_0x9B61DD542916B30C(*uParam1, 2, func_382());
		unk_0x9B61DD542916B30C(*uParam1, 3, func_382());
		unk_0x9B61DD542916B30C(*uParam1, 4, func_382());
		unk_0x9B61DD542916B30C(*uParam1, 5, func_382());
		unk_0xF95D8D0BCEC9D59A(*uParam1, 15f);
		unk_0xA678843DE0B82500(*uParam1, 3);
		unk_0xBAB8785EE2F06BBE(*uParam1, 2);
		unk_0xC922F3465B0ABFC6(*uParam1, true);
		unk_0x764B52EA8B8FFFA3(*uParam1);
		return;
	}
}

int func_382()//Position - 0x25BF5
{
	if (unk_0xC80D31E4B587871C(unk_0x63A6486593EC7EC3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_383(var uParam0, var uParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0x25C16
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = func_371(17);
	iVar1 = func_370(17);
	if (unk_0x9A0B2ED5055D3F0B(iVar0) && unk_0x9A0B2ED5055D3F0B(iVar1))
	{
		*uParam0 = unk_0xAC992EFAD62C33BF(4, iVar1, vParam2, fParam3, 1, true);
		unk_0xFC0DF15617416876(*uParam0, 1);
		unk_0xAE01EF4BC84AFE7C(*uParam0, 227, true);
		unk_0x14776E43F90DD454(iVar1);
		unk_0xE01CE1EBCD7EE551(*uParam0, 0, 0);
		unk_0x764B52EA8B8FFFA3(*uParam0);
		vVar2 = { 0,02f, -0,01f, 0f };
		unk_0x93B85673224CA2DE(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,5f, 0,4f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = { 0,23f, 0,04f, 0f };
		unk_0x93B85673224CA2DE(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,9f, 0,8f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = { -0,05f, -0,01f, 0f };
		unk_0x93B85673224CA2DE(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,8f, 1,1f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = { -0,05f, -0,11f, 0f };
		unk_0x93B85673224CA2DE(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,7f, 0,6f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = { 0,09f, -0,06f, 0f };
		unk_0x93B85673224CA2DE(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1,1f, 1f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam4)
		{
			vVar2 = { 0,5783f, 0,1357f, -0,0683f };
			unk_0x93B85673224CA2DE(2020, vParam2 + vVar2, 0f, 0f, -1f, 0,4484f, -0,8938f, 0f, 0,19f, 0,33f, 0,09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar2 = { 1,0477f, 0,1103f, -0,1388f };
			unk_0x93B85673224CA2DE(2020, vParam2 + vVar2, 0f, 0f, -1f, 0,4484f, -0,8938f, 0f, 0,19f, 0,33f, 0,09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar2 = { 1,5048f, 0,4595f, -0,1953f };
			unk_0x93B85673224CA2DE(2020, vParam2 + vVar2, 0f, 0f, -1f, 0,4484f, -0,8938f, 0f, 0,19f, 0,33f, 0,09f, 0f, 0f, 1f, -1f, 1, 0, 0);
		}
		func_378(*uParam0);
		*uParam1 = unk_0xEA60F3B426BB095B(iVar0, (vParam2.x - 0,4f), (vParam2.y - 0,5f), vParam2.z, fParam3, true, true, false);
		unk_0x14776E43F90DD454(iVar0);
		unk_0x59AF3B40AE222194(*uParam1, 0f, 85f, 0f, 2, 1);
		unk_0x044E8E97998FB7A4(*uParam1, 20,5f);
		unk_0xF95D8D0BCEC9D59A(*uParam1, 15f);
		unk_0x764B52EA8B8FFFA3(*uParam1);
		return;
	}
}

void func_384(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x25EF8
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_371(28);
	if (unk_0x9A0B2ED5055D3F0B(iVar0))
	{
		*uParam0 = unk_0xAC992EFAD62C33BF(28, iVar0, vParam1, fParam2, 1, true);
		unk_0xFC0DF15617416876(*uParam0, 1);
		unk_0xAE01EF4BC84AFE7C(*uParam0, 227, true);
		unk_0x14776E43F90DD454(iVar0);
		unk_0xE01CE1EBCD7EE551(*uParam0, 0, 0);
		unk_0x764B52EA8B8FFFA3(*uParam0);
		vVar1 = { 0,02f, -0,01f, 0f };
		unk_0x93B85673224CA2DE(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,6f, 0,4f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0,03f, 0,04f, 0f };
		unk_0x93B85673224CA2DE(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,8f, 0,6f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0,05f, -0,01f, 0f };
		unk_0x93B85673224CA2DE(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,8f, 1,1f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { 0,01f, -0,06f, 0f };
		unk_0x93B85673224CA2DE(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,9f, 0,8f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			vVar1 = { 0,5206f, 0f, 0,003f };
			unk_0x93B85673224CA2DE(2020, vParam1 + vVar1, 0f, 0f, -1f, 0,309f, -0,9511f, 0f, 0,19f, 0,33f, 0,113f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 1,1258f, 0,0362f, -0,0837f };
			unk_0x93B85673224CA2DE(2020, vParam1 + vVar1, 0f, 0f, -1f, 0,5036f, -0,8639f, 0f, 0,19f, 0,33f, 0,119f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 1,6107f, 0,4678f, -0,0815f };
			unk_0x93B85673224CA2DE(2020, vParam1 + vVar1, 0f, 0f, -1f, 0,5036f, -0,8639f, 0f, 0,19f, 0,33f, 0,119f, 0f, 0f, 0,8f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_385(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x2612C
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_371(35);
	if (unk_0x9A0B2ED5055D3F0B(iVar0))
	{
		*uParam0 = unk_0xEA60F3B426BB095B(iVar0, vParam1, fParam2, true, true, false);
		unk_0x14776E43F90DD454(iVar0);
		unk_0x59AF3B40AE222194(*uParam0, 0f, 170f, 0f, 2, 1);
		unk_0xB38E13EF2EC6F0E9(*uParam0, 1f);
		unk_0x044E8E97998FB7A4(*uParam0, 1f);
		unk_0xF95D8D0BCEC9D59A(*uParam0, 15f);
		unk_0x9B61DD542916B30C(*uParam0, 0, func_382());
		unk_0x9B61DD542916B30C(*uParam0, 1, func_382());
		unk_0x9B61DD542916B30C(*uParam0, 2, func_382());
		unk_0x9B61DD542916B30C(*uParam0, 3, func_382());
		unk_0x9B61DD542916B30C(*uParam0, 4, func_382());
		unk_0x9B61DD542916B30C(*uParam0, 5, func_382());
		unk_0xA678843DE0B82500(*uParam0, 3);
		unk_0xBAB8785EE2F06BBE(*uParam0, 2);
		unk_0xC922F3465B0ABFC6(*uParam0, true);
		unk_0x764B52EA8B8FFFA3(*uParam0);
		if (bParam3)
		{
			vVar1 = { 0,4947f, 2,3632f, 0,1294f };
			unk_0x93B85673224CA2DE(2020, vParam1 + vVar1, 0f, 0f, -1f, 0,3798f, -0,9251f, 0f, 0,19f, 0,33f, 0f, 0f, 0f, 0,7f, -1f, 1, 0, 0);
			vVar1 = { 0,9243f, 2,6606f, 0,1951f };
			unk_0x93B85673224CA2DE(2020, vParam1 + vVar1, 0f, 0f, -1f, 0,3798f, -0,9251f, 0f, 0,19f, 0,33f, 0f, 0f, 0f, 0,66f, -1f, 1, 0, 0);
			vVar1 = { 1,5467f, 2,5044f, 0,2418f };
			unk_0x93B85673224CA2DE(2020, vParam1 + vVar1, 0f, 0f, -1f, 0,3798f, -0,9251f, 0f, 0,19f, 0,33f, 0f, 0f, 0f, 0,58f, -1f, 1, 0, 0);
			vVar1 = { 1,357f, 3,8779f, 0,3259f };
			unk_0x93B85673224CA2DE(2020, vParam1 + vVar1, 0f, 0f, -1f, 0,3798f, -0,9251f, 0f, 0,19f, 0,33f, 0f, 0f, 0f, 0,48f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_386(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x26318
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_371(43);
	if (unk_0x9A0B2ED5055D3F0B(iVar0))
	{
		*uParam0 = unk_0xAC992EFAD62C33BF(28, iVar0, vParam1, fParam2, 1, true);
		unk_0xFC0DF15617416876(*uParam0, 1);
		unk_0xAE01EF4BC84AFE7C(*uParam0, 227, true);
		unk_0x14776E43F90DD454(iVar0);
		unk_0xE01CE1EBCD7EE551(*uParam0, 0, 0);
		unk_0x764B52EA8B8FFFA3(*uParam0);
		vVar1 = { 0,12f, -0,01f, 0f };
		unk_0x93B85673224CA2DE(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0,9f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0,03f, 0,04f, 0f };
		unk_0x93B85673224CA2DE(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,9f, 0,8f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0,2f, -0,01f, 0f };
		unk_0x93B85673224CA2DE(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,7f, 0,9f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0,05f, -0,15f, 0f };
		unk_0x93B85673224CA2DE(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,9f, 0,7f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			vVar1 = { 0,4125f, -0,5815f, -0,2056f };
			unk_0x93B85673224CA2DE(2020, vParam1 + vVar1, 0f, 0f, -1f, -0,5358f, -0,8443f, 0f, 0,19f, 0,33f, 0,234f, 0f, 0f, 0,9f, -1f, 1, 0, 0);
			vVar1 = { 0,6332f, -1,1758f, -0,7106f };
			unk_0x93B85673224CA2DE(2020, vParam1 + vVar1, 0f, 0f, -1f, -0,7026f, -0,7115f, 0f, 0,19f, 0,33f, 0,26f, 0f, 0f, 0,75f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_387(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x26508
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_371(109);
	if (unk_0x9A0B2ED5055D3F0B(iVar0))
	{
		*uParam0 = unk_0xAC992EFAD62C33BF(28, iVar0, vParam1, fParam2, 1, true);
		unk_0xFC0DF15617416876(*uParam0, 1);
		unk_0x14776E43F90DD454(iVar0);
		unk_0xE01CE1EBCD7EE551(*uParam0, 0, 0);
		unk_0x764B52EA8B8FFFA3(*uParam0);
		vVar1 = { 0,12f, -0,01f, 0f };
		unk_0x93B85673224CA2DE(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0,9f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0,03f, 0,04f, 0f };
		unk_0x93B85673224CA2DE(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,9f, 0,8f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0,2f, -0,01f, 0f };
		unk_0x93B85673224CA2DE(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,7f, 0,9f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0,05f, -0,15f, 0f };
		unk_0x93B85673224CA2DE(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,9f, 0,7f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { 0,01f, -0,06f, 0f };
		unk_0x93B85673224CA2DE(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,8f, 1f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			vVar1 = { 0,4936f, -0,1763f, -0,0522f };
			unk_0x93B85673224CA2DE(2020, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0,19f, 0,33f, 0,144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 1,0645f, 0,0483f, -0,0698f };
			unk_0x93B85673224CA2DE(2020, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0,19f, 0,33f, 0,144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 1,6011f, -0,1704f, -0,1473f };
			unk_0x93B85673224CA2DE(2020, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0,19f, 0,33f, 0,144f, 0f, 0f, 0,808f, -1f, 1, 0, 0);
		}
		func_378(*uParam0);
		return;
	}
}

void func_388(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x2675D
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_371(12);
	if (unk_0x9A0B2ED5055D3F0B(iVar0))
	{
		*uParam0 = unk_0xAC992EFAD62C33BF(28, iVar0, vParam1, fParam2, 1, true);
		unk_0xFC0DF15617416876(*uParam0, 1);
		unk_0x14776E43F90DD454(iVar0);
		unk_0xE01CE1EBCD7EE551(*uParam0, 0, 0);
		unk_0x764B52EA8B8FFFA3(*uParam0);
		vVar1 = { 0,04f, 0,02f, 0f };
		unk_0x93B85673224CA2DE(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,7f, 0,6f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0,01f, 0,05f, 0f };
		unk_0x93B85673224CA2DE(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,9f, 0,8f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0,03f, -0,01f, 0f };
		unk_0x93B85673224CA2DE(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0,7f, 0,9f, 0,196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			vVar1 = { 0,2417f, -0,3975f, -0,2282f };
			unk_0x93B85673224CA2DE(2020, vParam1 + vVar1, 0f, 0f, -1f, -0,9471f, -0,3209f, 0f, 0,19f, 0,33f, 0,106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 0,0747f, -0,8188f, -0,2576f };
			unk_0x93B85673224CA2DE(2020, vParam1 + vVar1, 0f, 0f, -1f, -0,9471f, -0,3209f, 0f, 0,19f, 0,33f, 0,106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 0,4322f, -1,1548f, -0,4902f };
			unk_0x93B85673224CA2DE(2020, vParam1 + vVar1, 0f, 0f, -1f, -0,9471f, -0,3209f, 0f, 0,19f, 0,33f, 0,106f, 0f, 0f, 0,802f, -1f, 1, 0, 0);
		}
		func_378(*uParam0);
		return;
	}
}

float func_389(int iParam0)//Position - 0x26952
{
	switch (iParam0)
	{
		case 1:
			return 190,1056f;
		
		case 2:
			return 132,9326f;
		
		case 3:
			return 355,7119f;
		
		case 4:
			return 209,0264f;
		
		case 5:
			return 122,6722f;
		
		case 6:
			return 174,841f;
		
		default:
	}
	return 0f;
}

Vector3 func_390(int iParam0)//Position - 0x269B6
{
	switch (iParam0)
	{
		case 1:
			return Global_101280[0 /*3*/];
		
		case 2:
			return Global_101280[1 /*3*/];
		
		case 3:
			return Global_101280[2 /*3*/];
		
		case 4:
			return Global_101280[3 /*3*/];
		
		case 5:
			return Global_101280[4 /*3*/];
		
		case 6:
			return Global_101280[5 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_391()//Position - 0x26A34
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_372(iVar0);
	iVar2 = func_371(iVar1);
	iVar3 = func_370(iVar1);
	if (iVar2 != 0)
	{
		if (!unk_0x9A0B2ED5055D3F0B(iVar2))
		{
			return 0;
		}
	}
	if (iVar3 != 0)
	{
		if (!unk_0x9A0B2ED5055D3F0B(iVar3))
		{
			return 0;
		}
	}
	return 1;
}

void func_392(int iParam0)//Position - 0x26A83
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_372(iVar0);
	iVar2 = func_371(iVar1);
	iVar3 = func_370(iVar1);
	if (iVar2 != 0)
	{
		unk_0x6FF834D85E2DD4C6(iVar2);
	}
	if (iVar3 != 0)
	{
		unk_0x6FF834D85E2DD4C6(iVar3);
	}
	unk_0x872F1C1F8587CCC7(iParam0, 25);
}

void func_393()//Position - 0x26AC9
{
	if (Global_101303.f_3 == unk_0x4B64A8D052027742())
	{
		return;
	}
	Global_101303.f_3 = unk_0x4B64A8D052027742();
	if (Global_101303.f_2 == 0f && Global_101303.f_1 == 0f)
	{
		return;
	}
	if (Global_101303.f_2 != Global_101303.f_1)
	{
		Global_101303.f_2 = (Global_101303.f_2 + Global_101303);
		if (Global_101303 <= 0f)
		{
			if (Global_101303.f_2 < Global_101303.f_1)
			{
				Global_101303.f_2 = Global_101303.f_1;
			}
		}
		else if (Global_101303.f_2 > Global_101303.f_1)
		{
			Global_101303.f_2 = Global_101303.f_1;
		}
	}
	unk_0x09C2CBFA4CD804AC(0,5f, 0,5f, 1f, 1f, 255, 255, 255, system::round(Global_101303.f_2), 0);
}

void func_394(int iParam0, int iParam1)//Position - 0x26B8A
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = system::to_float(iParam0);
	if (iParam1 <= 0)
	{
		Global_101303 = 0f;
		Global_101303.f_1 = fVar0;
		Global_101303.f_2 = fVar0;
	}
	else
	{
		fVar1 = (fVar0 - Global_101303.f_2);
		fVar2 = (system::to_float(iParam1) / (unk_0x46C19C2753391FBF() * 1000f));
		Global_101303 = (fVar1 / fVar2);
		Global_101303.f_1 = fVar0;
	}
}

void func_395(int iParam0, int iParam1)//Position - 0x26BE7
{
	func_396(&(Global_104555.f_9986.f_25), iParam1, 14336, 11);
}

void func_396(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x26C03
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam2));
	*uParam0 = (*uParam0 || system::shift_left(iParam1, iParam3));
}

struct<8> func_397(char* sParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x26C27
{
	struct<8> Var0;
	
	StringCopy(&Var0, sParam1, 32);
	StringConCat(&Var0, sParam0, 32);
	StringConCat(&Var0, sParam3, 32);
	StringConCat(&Var0, sParam2, 32);
	return Var0;
}

Vector3 func_398(int iParam0)//Position - 0x26C4C
{
	if (iParam0 >= 0 && iParam0 < 7)
	{
		return Global_101258[iParam0 /*3*/];
	}
	return 0f, 0f, 0f;
}

void func_399()//Position - 0x26C74
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = -1308,545f;
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 475,192f, -1313,48f, 28,2074f) < 1000f)
		{
			if (!iLocal_52)
			{
				unk_0x6FF834D85E2DD4C6(joaat("v_ilev_uvline"));
				iLocal_51 = 1;
				if (unk_0x9A0B2ED5055D3F0B(joaat("v_ilev_uvline")))
				{
					if (func_400(8))
					{
						iLocal_53[4] = unk_0x5E35CF35E65D69B9(joaat("v_ilev_uvline"), 471,48f, fVar0, 30,33f, true, true, false);
						unk_0xBD8D47FDC6902B2D(iLocal_53[4], 471,48f, fVar0, 30,33f, 1, false, 0, 1);
						unk_0x59AF3B40AE222194(iLocal_53[4], 0f, 0f, 116,9f, 2, 1);
						iLocal_53[1] = unk_0x5E35CF35E65D69B9(joaat("v_ilev_uvline"), 471,48f, fVar0, 30,15f, true, true, false);
						unk_0xBD8D47FDC6902B2D(iLocal_53[1], 471,48f, fVar0, 30,15f, 1, false, 0, 1);
						unk_0x59AF3B40AE222194(iLocal_53[1], 0f, 0f, 116,9f, 2, 1);
					}
					if (func_400(9))
					{
						iLocal_53[5] = unk_0x5E35CF35E65D69B9(joaat("v_ilev_uvline"), 471,48f, fVar0, 29,98f, true, true, false);
						unk_0xBD8D47FDC6902B2D(iLocal_53[5], 471,48f, fVar0, 29,98f, 1, false, 0, 1);
						unk_0x59AF3B40AE222194(iLocal_53[5], 0f, 0f, 116,9f, 2, 1);
					}
					if (func_400(10))
					{
						iLocal_53[3] = unk_0x5E35CF35E65D69B9(joaat("v_ilev_uvline"), 471,48f, fVar0, 29,82f, true, true, false);
						unk_0xBD8D47FDC6902B2D(iLocal_53[3], 471,48f, fVar0, 29,82f, 1, false, 0, 1);
						unk_0x59AF3B40AE222194(iLocal_53[3], 0f, 0f, 116,9f, 2, 1);
					}
					iVar1 = unk_0xC0765AFBFA616644(475,192f, -1313,48f, 28,2074f, "v_chopshop");
					iVar2 = 0;
					while (iVar2 < 6)
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_53[iVar2]))
						{
							unk_0xB3A8974D2C811672(iLocal_53[iVar2], true, 0);
							unk_0xFE8777CC6B5F42E3(iLocal_53[iVar2], 1);
							unk_0x27D745D0C70FD05F(iLocal_53[iVar2], iVar1);
						}
						iVar2++;
					}
					unk_0x14776E43F90DD454(joaat("v_ilev_uvline"));
					iLocal_52 = 1;
				}
			}
		}
		else
		{
			if (iLocal_51)
			{
				unk_0x14776E43F90DD454(joaat("v_ilev_uvline"));
				iLocal_51 = 0;
			}
			if (iLocal_52)
			{
				func_443();
				iLocal_52 = 0;
			}
		}
	}
}

int func_400(int iParam0)//Position - 0x26EAC
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_330[iParam0 /*6*/];
}

void func_401()//Position - 0x26ED8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69678.f_553)
	{
		if (!iLocal_54)
		{
			Global_69678.f_554 = 0;
			iLocal_54 = 1;
		}
		else if (Global_69678.f_554 >= 68)
		{
			Global_69678.f_553 = 0;
			iLocal_54 = 0;
		}
	}
	else
	{
		iLocal_54 = 0;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_148)
	{
		iVar1 = iLocal_149[iVar0];
		if (func_61(&Local_131, iVar1))
		{
			func_439(&Local_140, iVar1);
			if ((Local_140.f_69 && Local_56.f_3 == 0) || iVar1 == 14)
			{
				fLocal_152[iVar1] = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), Local_140.f_55, false);
			}
			else
			{
				fLocal_152[iVar1] = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), Local_131, false);
			}
			if (func_438())
			{
				func_437(iVar1);
				func_435(iVar1);
				func_434(iVar1);
				func_433(iVar1);
				func_431(iVar1);
				func_430(iVar1);
				func_429(iVar1);
				func_403(iVar1);
				if (unk_0xC80D31E4B587871C(uLocal_48[iVar1], 2))
				{
					if (Global_69678.f_553)
					{
						iLocal_54 = 0;
					}
					func_444(iVar1);
				}
			}
			else
			{
				func_402(iVar1);
			}
		}
		iVar0++;
	}
	iVar2 = iLocal_148;
	iLocal_148 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_150)
	{
		iLocal_150[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (unk_0xC80D31E4B587871C(uLocal_48[iLocal_149[iVar0]], 2))
		{
			func_444(iLocal_149[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_151 != -1)
	{
		func_444(iLocal_151);
		iLocal_151 = -1;
	}
	iLocal_47++;
	if (iLocal_47 >= 68)
	{
		iLocal_47 = 0;
	}
	func_444(iLocal_47);
	if (iLocal_157)
	{
		func_444(21);
		func_444(22);
		func_444(23);
		iLocal_157 = 0;
		bLocal_158 = true;
	}
	else if (bLocal_158)
	{
		bLocal_158 = false;
	}
	if (Global_69678.f_553)
	{
		Global_69678.f_554++;
	}
}

void func_402(int iParam0)//Position - 0x270D1
{
	if (iLocal_49[iParam0] != 0)
	{
		unk_0x14776E43F90DD454(iLocal_49[iParam0]);
		iLocal_49[iParam0] = 0;
	}
}

void func_403(int iParam0)//Position - 0x270F4
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	vector3 vVar8;
	struct<60> Var9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar16;
	int iVar17;
	
	fVar0 = 210f;
	fVar1 = 200f;
	if (!unk_0xC80D31E4B587871C(uLocal_48[iParam0], 2))
	{
		func_402(iParam0);
	}
	unk_0x0EE72DB1CD8A3B86(&(uLocal_48[iParam0]), 2);
	if (unk_0xC80D31E4B587871C(uLocal_48[iParam0], 1))
	{
		fVar2 = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vLocal_50[iParam0 /*3*/], true);
	}
	else
	{
		fVar2 = 99999,99f;
	}
	if (unk_0xC80D31E4B587871C(Local_131.f_9, 23))
	{
		if (Local_131.f_4 == joaat("blimp"))
		{
			fVar0 = 1010f;
			fVar1 = 1000f;
		}
		else
		{
			fVar0 = 410f;
			fVar1 = 400f;
		}
	}
	else if (unk_0xC80D31E4B587871C(Local_131.f_9, 24))
	{
		fVar0 = 50f;
		fVar1 = 50f;
	}
	else if (((unk_0xC80D31E4B587871C(Local_131.f_9, 19) || unk_0xC80D31E4B587871C(Local_131.f_9, 20)) || iParam0 == 24) || iParam0 == 25)
	{
		fVar0 = 310f;
		fVar1 = 300f;
	}
	else if (unk_0xC80D31E4B587871C(Local_131.f_9, 25) && (((iLocal_129 == 0 && Local_56 == 21) || (iLocal_129 == 0 && Local_56 == 22)) || (iLocal_129 == 0 && Local_56 == 23)))
	{
		fVar0 = 5010f;
		fVar1 = 5000f;
	}
	if (unk_0x6ADD12BF4D6D2587(Global_69678.f_139[iParam0]))
	{
		if (unk_0xB8DE76287EDC4957(Global_69678.f_139[iParam0], 0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (iParam0 == 24)
				{
					iVar3 = unk_0x317536BCEA8FA6B0(Global_69678.f_139[iParam0], -1, 0);
					if (!unk_0x6ADD12BF4D6D2587(iVar3))
					{
						iVar3 = unk_0x96D3C6B7ED86BE3A(Global_69678.f_139[iParam0], -1);
					}
					iVar4 = func_365(iVar3);
					if (iVar4 != Global_104555.f_32429.f_5591)
					{
						if (func_25(iVar4))
						{
							func_428("Updating last character to use vehicle gen", iVar4);
							Global_104555.f_32429.f_5591 = iVar4;
						}
					}
				}
				if (!unk_0xCB234F3DD6FF9368(Global_69678.f_139[iParam0], 1))
				{
					func_427("No longer needed: Vehicle owned by other script");
					if (((iParam0 == 24 && !func_63(Global_69678.f_139[iParam0])) && !func_62(Global_69678.f_139[iParam0])) && unk_0x82FF3DFBC3965CC0(Global_69678.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x1F0117F8A8E4EC12(Global_69678.f_139[iParam0], true);
					}
					Global_69678.f_139[iParam0] = 0;
					Global_69678[iParam0] = 1;
					func_426(iParam0);
					return;
				}
				if (((unk_0xC80D31E4B587871C(uLocal_48[iParam0], 0) && !unk_0xC80D31E4B587871C(Local_131.f_9, 27)) && iParam0 != 24) && iParam0 != 25)
				{
					func_427("No longer needed: Player used vehicle");
					if (((iParam0 == 24 && !func_63(Global_69678.f_139[iParam0])) && !func_62(Global_69678.f_139[iParam0])) && unk_0x82FF3DFBC3965CC0(Global_69678.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x1F0117F8A8E4EC12(Global_69678.f_139[iParam0], true);
					}
					unk_0x5380482A432E314E(&(Global_69678.f_139[iParam0]));
					Global_69678.f_139[iParam0] = 0;
					Global_69678[iParam0] = 1;
					func_426(iParam0);
					return;
				}
				if ((!unk_0xC80D31E4B587871C(uLocal_48[iParam0], 1) && iParam0 != 24) && iParam0 != 25)
				{
					if (unk_0xEBE499597C718EB8(Global_69678.f_139[iParam0], unk_0xFC1458A37D98B502(), 1))
					{
						func_427("No longer needed: Player damaged vehicle");
						if (((iParam0 == 24 && !func_63(Global_69678.f_139[iParam0])) && !func_62(Global_69678.f_139[iParam0])) && unk_0x82FF3DFBC3965CC0(Global_69678.f_139[iParam0]) != joaat("monster"))
						{
							unk_0x1F0117F8A8E4EC12(Global_69678.f_139[iParam0], true);
						}
						unk_0x5380482A432E314E(&(Global_69678.f_139[iParam0]));
						Global_69678.f_139[iParam0] = 0;
						Global_69678[iParam0] = 1;
						func_426(iParam0);
						return;
					}
				}
				fVar5 = 8f;
				if (((((((((((((iParam0 == 24 || iParam0 == 25) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 26) || iParam0 == 29) || iParam0 == 32) || iParam0 == 27) || iParam0 == 30) || iParam0 == 33) || iParam0 == 28) || iParam0 == 31) || iParam0 == 34)
				{
					fVar5 = 20f;
				}
				if ((unk_0xC80D31E4B587871C(uLocal_48[iParam0], 1) && unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(Global_69678.f_139[iParam0], 1), vLocal_50[iParam0 /*3*/], true) > fVar5) || (!unk_0xC80D31E4B587871C(uLocal_48[iParam0], 1) && unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(Global_69678.f_139[iParam0], 1), Local_131, true) > fVar5))
				{
					func_427("No longer needed: Vehicle has been moved");
					if (((iParam0 == 24 && !func_63(Global_69678.f_139[iParam0])) && !func_62(Global_69678.f_139[iParam0])) && unk_0x82FF3DFBC3965CC0(Global_69678.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x1F0117F8A8E4EC12(Global_69678.f_139[iParam0], true);
					}
					unk_0x5380482A432E314E(&(Global_69678.f_139[iParam0]));
					Global_69678.f_139[iParam0] = 0;
					Global_69678[iParam0] = 1;
					func_426(iParam0);
					return;
				}
				if (!func_67(iParam0, 0))
				{
					func_427("No longer needed: Vehicle gen no longer available");
					if (((iParam0 == 24 && !func_63(Global_69678.f_139[iParam0])) && !func_62(Global_69678.f_139[iParam0])) && unk_0x82FF3DFBC3965CC0(Global_69678.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x1F0117F8A8E4EC12(Global_69678.f_139[iParam0], true);
					}
					unk_0x5380482A432E314E(&(Global_69678.f_139[iParam0]));
					Global_69678.f_139[iParam0] = 0;
					Global_69678[iParam0] = 1;
					func_426(iParam0);
					return;
				}
				if (iParam0 == 24)
				{
					if ((func_47(Global_69678.f_139[iParam0], iLocal_129, 1) && !func_63(Global_69678.f_139[iParam0])) && !func_62(Global_69678.f_139[iParam0]))
					{
						func_427("No longer needed: Mission vehicle gen moved to players garage");
						if (unk_0x82FF3DFBC3965CC0(Global_69678.f_139[iParam0]) != joaat("monster"))
						{
							unk_0x1F0117F8A8E4EC12(Global_69678.f_139[iParam0], true);
						}
						Global_69678.f_139[iParam0] = 0;
						Global_69678[iParam0] = 1;
						func_426(iParam0);
						return;
					}
				}
				if (fLocal_152[iParam0] > fVar0 && (!unk_0xC80D31E4B587871C(uLocal_48[iParam0], 1) || fVar2 > fVar0))
				{
					if (iParam0 == 24)
					{
						iVar6 = func_50();
						iVar7 = Global_104555.f_32429.f_4801;
						func_424(&iVar7, 0, 0, 17, 0, 0, 0);
						if (func_332(iVar6, iVar7))
						{
							if ((!func_63(Global_69678.f_139[iParam0]) && !func_62(Global_69678.f_139[iParam0])) && unk_0x82FF3DFBC3965CC0(Global_69678.f_139[iParam0]) != joaat("monster"))
							{
								unk_0x1F0117F8A8E4EC12(Global_69678.f_139[iParam0], true);
							}
							func_31(Global_69678.f_139[iParam0], Global_104555.f_32429.f_5591);
							Global_69678[iParam0] = 1;
							func_426(iParam0);
						}
						else if (func_37(Global_69678.f_139[iParam0]))
						{
							func_32(Global_69678.f_139[iParam0], &Global_2458262);
							Global_2458261 = Global_104555.f_32429.f_5591;
							iLocal_170 = Global_69678.f_139[iParam0];
						}
					}
					func_427("No longer needed: Player out for range");
					unk_0x5380482A432E314E(&(Global_69678.f_139[iParam0]));
					unk_0x247EAA2E93D4A021(Local_131, 3f, 0, 0, 0, false);
					unk_0x9B8406983378711E(Local_131, 3f, 0, 0, 0, 0, false, 0);
					Global_69678.f_139[iParam0] = 0;
					if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
					{
						Global_69678.f_584 = { Local_131 };
						Global_69678.f_587 = { 0f, 0f, 0f };
					}
					return;
				}
				if (unk_0xC80D31E4B587871C(Local_131.f_9, 30))
				{
					if (!unk_0xC80D31E4B587871C(Local_131.f_9, 31))
					{
						if (!unk_0x9A3C64A7BB4588B3(Global_69678.f_139[iParam0]) && !unk_0xDFFD5F8C8ABCB7EF(Global_69678.f_139[iParam0]))
						{
							vVar8 = { unk_0xB3328BA8976B416C(Global_69678.f_139[iParam0], 1) };
							if (vVar8.z >= func_423(iParam0))
							{
								unk_0x47F820A3F8998340(Global_69678.f_139[iParam0], true);
								unk_0x872F1C1F8587CCC7(&(Local_131.f_9), 31);
							}
						}
					}
				}
			}
			return;
		}
	}
	else
	{
		Global_69678.f_139[iParam0] = 0;
	}
	if (unk_0x6ADD12BF4D6D2587(Global_69678.f_139[iParam0]))
	{
		func_427("No longer needed: Vehicle not driveable");
		unk_0x5380482A432E314E(&(Global_69678.f_139[iParam0]));
		Global_69678.f_139[iParam0] = 0;
		Global_69678[iParam0] = 1;
		func_426(iParam0);
		return;
	}
	if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		return;
	}
	if (Global_70585 == iParam0)
	{
		func_427("Processing a vehgen vehicle handover request.");
		if (unk_0x6ADD12BF4D6D2587(Global_70584) && unk_0xB8DE76287EDC4957(Global_70584, 0))
		{
			if (unk_0x6ADD12BF4D6D2587(Global_69678.f_139[iParam0]) && unk_0xB8DE76287EDC4957(Global_69678.f_139[iParam0], 0))
			{
				if (Global_69678.f_139[iParam0] == Global_70584)
				{
					func_427("Vehicle to be handed over is the same vehicle.");
					Global_70585 = -1;
					Global_70584 = 0;
					return;
				}
				else
				{
					func_427("No longer needed: Ready to accept handover vehicle.");
					if (((iParam0 == 24 && !func_63(Global_69678.f_139[iParam0])) && !func_62(Global_69678.f_139[iParam0])) && unk_0x82FF3DFBC3965CC0(Global_69678.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x1F0117F8A8E4EC12(Global_69678.f_139[iParam0], true);
					}
					unk_0x5380482A432E314E(&(Global_69678.f_139[iParam0]));
					Global_69678.f_139[iParam0] = 0;
				}
			}
			Global_69678.f_139[iParam0] = Global_70584;
			Global_69678[iParam0] = 1;
			unk_0x0EE72DB1CD8A3B86(&(uLocal_48[iParam0]), 0);
			unk_0x872F1C1F8587CCC7(&(uLocal_48[iParam0]), 1);
			unk_0x0EE72DB1CD8A3B86(&(uLocal_48[iParam0]), 3);
			vLocal_50[iParam0 /*3*/] = { unk_0xB3328BA8976B416C(Global_70584, 1) };
			Global_70585 = -1;
			if (unk_0xC80D31E4B587871C(Local_131.f_9, 10))
			{
				Var9.f_9 = 49;
				Var9.f_59 = 2;
				func_32(Global_70584, &Var9);
				if (Global_70586)
				{
					func_113(iParam0, &Var9, unk_0xB3328BA8976B416C(Global_70584, 1), unk_0xF0371FE6E2BF9599(Global_70584), func_46(Global_70584));
				}
				else
				{
					func_113(iParam0, &Var9, Global_104555.f_32429.f_1864[Local_131.f_14 /*3*/], Global_104555.f_32429.f_1934[Local_131.f_14], func_46(Global_70584));
				}
				Global_69678.f_139[iParam0] = Global_70584;
				Global_69678.f_484[iParam0] = Global_69678.f_139[iParam0];
			}
			if (iParam0 == 25)
			{
				iVar10 = func_440();
				if (func_25(iVar10))
				{
					func_427("Players stored switch vehicle cleared for prep getaway.");
					Global_92601[iVar10] = 0;
				}
			}
			unk_0xDD29FF4BAB8AFF9C(Global_69678.f_139[iParam0], true, 1);
			if (iParam0 == 24)
			{
				unk_0x1F0117F8A8E4EC12(Global_69678.f_139[iParam0], false);
			}
			Global_70584 = 0;
			if (Global_2458262.f_66 != 0)
			{
				func_250(&Global_2458262, Global_2458261);
				Global_2458262.f_66 = 0;
			}
			return;
		}
		if (Global_2458262.f_66 != 0)
		{
			func_250(&Global_2458262, Global_2458261);
			Global_2458262.f_66 = 0;
		}
		func_427("Vehicle to be handed over doesn't exist.");
		Global_70585 = -1;
		Global_70584 = 0;
	}
	if (Global_69678[iParam0])
	{
		if (fLocal_152[iParam0] >= fVar0)
		{
			Global_69678[iParam0] = 0;
			func_427("Leave area flag cleared");
		}
		if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
		{
			Global_69678.f_584 = { 0f, 0f, 0f };
			Global_69678.f_587 = { 0f, 0f, 0f };
		}
		return;
	}
	bVar11 = false;
	if (fLocal_152[iParam0] > fVar1)
	{
		if (((((iParam0 == 24 && Global_104555.f_32429.f_1958[Local_131.f_14] != 0) && Global_104555.f_32429.f_1958[Local_131.f_14] > 3) && Local_131.f_4 != 0) && func_67(iParam0, 0)) && func_39(Local_131.f_4, 0))
		{
			iVar12 = func_50();
			iVar13 = Global_104555.f_32429.f_4801;
			func_424(&iVar13, 0, 0, 17, 0, 0, 0);
			if (func_332(iVar12, iVar13))
			{
				func_250(&(Global_104555.f_32429.f_69[Local_131.f_14 /*78*/]), Global_104555.f_32429.f_5591);
				func_426(iParam0);
				Global_69678[iParam0] = 1;
				func_427("Cannot be created: Vehicle ready for impound");
				Global_2458262.f_66 = 0;
				return;
			}
		}
		if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
		{
			bVar11 = true;
		}
		else
		{
			return;
		}
	}
	if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
	{
		Global_69678.f_584 = { 0f, 0f, 0f };
		Global_69678.f_587 = { 0f, 0f, 0f };
	}
	if (Local_131.f_4 == 0)
	{
		Global_69678[iParam0] = 1;
		func_427("Cannot be created: Dummy model");
		return;
	}
	if (!func_39(Local_131.f_4, 0))
	{
		Global_69678[iParam0] = 1;
		func_427("Cannot be created: Vehicle gen model is no longer installed");
		return;
	}
	if (!func_67(iParam0, 0))
	{
		Global_69678[iParam0] = 1;
		func_427("Cannot be created: Vehicle gen not available");
		return;
	}
	if (unk_0xC80D31E4B587871C(Local_131.f_9, 14) && !func_67(iParam0, 5))
	{
		Global_69678[iParam0] = 1;
		func_427("Cannot be created: Vehicle gen not purchased");
		return;
	}
	if ((((func_422() && func_421(0)) && iParam0 != 24) && iParam0 != 25) && iParam0 != 35)
	{
		Global_69678[iParam0] = 1;
		func_427("Cannot be created: Vehicle gens blocked on mission");
		return;
	}
	if (!bLocal_130)
	{
		Global_69678[iParam0] = 1;
		func_427("Cannot be created: Player character not valid");
		return;
	}
	if (unk_0xC80D31E4B587871C(Local_131.f_9, 10))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[iParam0]))
		{
			Global_69678[iParam0] = 1;
			func_427("Cannot be created: Previous dyanmic vehicle still exists");
			return;
		}
		else
		{
			Global_69678.f_484[iParam0] = 0;
		}
	}
	if (unk_0xC80D31E4B587871C(Local_131.f_9, 6))
	{
		if (func_420(Local_131.f_4, -1))
		{
			Global_69678[iParam0] = 1;
			func_427("Cannot be created: Same vehicle model found nearby player");
			return;
		}
		if (func_419(Local_131.f_4, -1))
		{
			Global_69678[iParam0] = 1;
			func_427("Cannot be created: Same vehicle model found nearby gen location");
			return;
		}
	}
	if (unk_0xC80D31E4B587871C(Local_131.f_9, 29))
	{
		if (Local_56.f_3 == 0)
		{
			return;
		}
	}
	if (func_418(iParam0))
	{
		Global_69678[iParam0] = 1;
		func_427("Cannot be created: Vehgen+model specific checks failed");
		return;
	}
	if (unk_0x1E06D00B67177A18() && unk_0x950AEA4C7FFF9EA4() == 3)
	{
		if ((iParam0 == 12 || iParam0 == 13) || iParam0 == 14)
		{
			Global_69678[iParam0] = 1;
			func_427("Cannot be created: Short range switch in progress");
			return;
		}
	}
	iVar14 = 0;
	if (unk_0xC80D31E4B587871C(Local_131.f_9, 19))
	{
		iVar14 = 2;
	}
	else if (unk_0xC80D31E4B587871C(Local_131.f_9, 20))
	{
		iVar14 = 1;
	}
	if ((iParam0 == 24 && Global_104555.f_32429.f_1958[Local_131.f_14] > 0) && Global_104555.f_32429.f_1958[Local_131.f_14] <= 3)
	{
		if (unk_0x125CDF69FA6EF560(Local_131.f_4))
		{
			iVar14 = 2;
			Local_131.f_12 = (Global_104555.f_32429.f_1958[Local_131.f_14] - 1);
		}
		else if (unk_0xC1514CFCEC68CA4A(Local_131.f_4))
		{
			iVar14 = 1;
			Local_131.f_12 = (Global_104555.f_32429.f_1958[Local_131.f_14] - 1);
		}
	}
	if (iVar14 != 0)
	{
		if (func_417(Local_131.f_12, iVar14, Local_131, -1f))
		{
			Global_69678[iParam0] = 1;
			func_427("Cannot be created: Same player vehicle found nearby gen location");
			if (iParam0 == 24)
			{
				func_446(iParam0, 0);
			}
			return;
		}
		if (unk_0xC80D31E4B587871C(Local_131.f_9, 19) || unk_0xC80D31E4B587871C(Local_131.f_9, 20))
		{
			if (iVar14 == 2)
			{
				if (Global_90357[Local_131.f_12 /*3*/][1] != -1 && (unk_0x53C562FD2B9E3AB0() - Global_90357[Local_131.f_12 /*3*/][1]) < unk_0xFAECC21412DD9C53() * 180)
				{
					Global_69678[iParam0] = 1;
					func_427("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&vVar15, "...", 24);
					StringIntConCat(&vVar15, ((unk_0xFAECC21412DD9C53() * 180 - (unk_0x53C562FD2B9E3AB0() - Global_90357[Local_131.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&vVar15, " seconds", 24);
					func_427(&vVar15);
					return;
				}
			}
			else if (iVar14 == 1)
			{
				if (Global_90357[Local_131.f_12 /*3*/][0] != -1 && (unk_0x53C562FD2B9E3AB0() - Global_90357[Local_131.f_12 /*3*/][0]) < unk_0xFAECC21412DD9C53() * 180)
				{
					Global_69678[iParam0] = 1;
					func_427("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&vVar16, "...", 24);
					StringIntConCat(&vVar16, ((unk_0xFAECC21412DD9C53() * 180 - (unk_0x53C562FD2B9E3AB0() - Global_90357[Local_131.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&vVar16, " seconds", 24);
					func_427(&vVar16);
					return;
				}
			}
		}
	}
	if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
	{
		Global_69678.f_584 = { Local_131 };
	}
	if (bVar11)
	{
		return;
	}
	if (iVar14 != 0)
	{
		iLocal_49[iParam0] = func_23(Local_131.f_12, iVar14);
		unk_0x6FF834D85E2DD4C6(iLocal_49[iParam0]);
		unk_0x872F1C1F8587CCC7(&(uLocal_48[iParam0]), 2);
		if (!unk_0x9A0B2ED5055D3F0B(iLocal_49[iParam0]))
		{
			func_427("Cannot be created: Waiting for player vehicle model to load");
			return;
		}
		if (func_416(iLocal_49[iParam0], Local_131, 1))
		{
			func_427("Cannot be created: Player is too close to spawn position (default vehicle type)");
			return;
		}
		unk_0x247EAA2E93D4A021(Local_131, 3f, 0, 0, 0, false);
		unk_0x9B8406983378711E(Local_131, 3f, 0, 0, 0, 0, false, 0);
		if (iVar14 == 2)
		{
			func_411(&(Global_69678.f_139[iParam0]), Local_131.f_12, Local_131, Local_131.f_3, 0, 2);
		}
		else if (iVar14 == 1)
		{
			func_411(&(Global_69678.f_139[iParam0]), Local_131.f_12, Local_131, Local_131.f_3, 0, 1);
		}
		else
		{
			Global_69678[iParam0] = 1;
			func_427("Cannot be created: Invalid player vehicle type specified");
			return;
		}
	}
	else
	{
		unk_0x6FF834D85E2DD4C6(Local_131.f_4);
		iLocal_49[iParam0] = Local_131.f_4;
		unk_0x872F1C1F8587CCC7(&(uLocal_48[iParam0]), 2);
		if (!unk_0x9A0B2ED5055D3F0B(Local_131.f_4))
		{
			func_427("Cannot be created: Waiting for model to load");
			return;
		}
		if (func_416(Local_131.f_4, Local_131, 1))
		{
			func_427("Cannot be created: Player is too close to spawn position (specific vehicle type)");
			return;
		}
		unk_0x247EAA2E93D4A021(Local_131, 3f, 0, 0, 0, false);
		unk_0x9B8406983378711E(Local_131, 3f, 0, 0, 0, 0, false, 0);
		if (unk_0xC80D31E4B587871C(Local_131.f_9, 23))
		{
			unk_0x80087D63083C560C(Local_131);
		}
		if ((iParam0 == 15 || iParam0 == 16) || iParam0 == 17)
		{
			if (Local_131.f_4 == joaat("submersible2"))
			{
				Local_131.f_2 = -3f;
			}
		}
		Global_69678.f_139[iParam0] = unk_0xEA60F3B426BB095B(Local_131.f_4, Local_131, Local_131.f_3, true, true, false);
		if (unk_0xC80D31E4B587871C(Local_131.f_9, 10))
		{
			if (unk_0x849A8CFD71854E02(Local_131.f_4))
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_32429.f_69[Local_131.f_14 /*78*/].f_77), 22);
			}
			if (unk_0xC80D31E4B587871C(Global_104555.f_32429.f_69[Local_131.f_14 /*78*/].f_77, 14))
			{
				func_32(Global_69678.f_139[iParam0], &Local_141);
				func_410(Local_141.f_77, &(Global_104555.f_32429.f_69[Local_131.f_14 /*78*/].f_77), Local_131.f_4);
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_32429.f_69[Local_131.f_14 /*78*/].f_77), 14);
			}
			func_345(Global_69678.f_139[iParam0], &(Global_104555.f_32429.f_69[Local_131.f_14 /*78*/]), 0, 1);
			Global_69678.f_484[iParam0] = Global_69678.f_139[iParam0];
		}
		else
		{
			if (unk_0xC80D31E4B587871C(Local_131.f_9, 9))
			{
				unk_0x1E7A8525FB41AAFE(Global_69678.f_139[iParam0], Local_131.f_10, Local_131.f_11);
			}
			if (unk_0xC80D31E4B587871C(Local_131.f_9, 8))
			{
				unk_0x4BEFCD5DAE410A90(Global_69678.f_139[iParam0], 2);
				unk_0xE8BB5655518854A8(Global_69678.f_139[iParam0], false);
				unk_0x514A29BE2E50B2DD(Global_69678.f_139[iParam0], 0);
				unk_0x5022A3FC14F87EA0(Global_69678.f_139[iParam0], false);
				unk_0x36C7B6DDA53E2DAF(Global_69678.f_139[iParam0], false);
				unk_0x36A50B92F547633A(Global_69678.f_139[iParam0], false);
				unk_0x4D7D93C6E0C1063B(Global_69678.f_139[iParam0], false);
				unk_0x1A0806871323CD16(Global_69678.f_139[iParam0], true);
				unk_0xEDC33A771FAEB393(Global_69678.f_139[iParam0], true);
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(Global_69678.f_139[iParam0]))
	{
		func_409("Created - Coords: ", Local_131);
		func_408("Created - Dist From Player:", fLocal_152[iParam0]);
		if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
		{
			Global_69678.f_584 = { 0f, 0f, 0f };
		}
		switch (Local_131.f_4)
		{
			case joaat("miljet"):
				unk_0x1E7A8525FB41AAFE(Global_69678.f_139[iParam0], 121, 21);
				unk_0xB1AB9FD8B4959960(Global_69678.f_139[iParam0], 8, 156);
				break;
			
			case joaat("besra"):
				unk_0x1E7A8525FB41AAFE(Global_69678.f_139[iParam0], 122, 89);
				unk_0xB1AB9FD8B4959960(Global_69678.f_139[iParam0], 25, 121);
				break;
			
			case joaat("buzzard"):
			case joaat("buzzard2"):
				unk_0x1E7A8525FB41AAFE(Global_69678.f_139[iParam0], 0, 0);
				unk_0xB1AB9FD8B4959960(Global_69678.f_139[iParam0], 5, 156);
				break;
			
			case joaat("dukes2"):
				break;
			
			case joaat("rhino"):
				unk_0x1E7A8525FB41AAFE(Global_69678.f_139[iParam0], 131, 132);
				unk_0xB1AB9FD8B4959960(Global_69678.f_139[iParam0], 132, 156);
				break;
			
			case joaat("luxor2"):
			case joaat("swift2"):
				unk_0x1E7A8525FB41AAFE(Global_69678.f_139[iParam0], 159, 0);
				unk_0xB1AB9FD8B4959960(Global_69678.f_139[iParam0], 160, 156);
				break;
		}
		if (unk_0xC80D31E4B587871C(Local_131.f_9, 22))
		{
			unk_0x47F820A3F8998340(Global_69678.f_139[iParam0], true);
		}
		if (unk_0xC80D31E4B587871C(Local_131.f_9, 30))
		{
			unk_0x0EE72DB1CD8A3B86(&(Local_131.f_9), 31);
		}
		if (unk_0xC80D31E4B587871C(Local_131.f_9, 26))
		{
			unk_0x4BEFCD5DAE410A90(Global_69678.f_139[iParam0], 7);
			unk_0x6862DF5504F63883(Global_69678.f_139[iParam0], 1);
		}
		func_407(Global_69678.f_139[iParam0], iParam0);
		if (!unk_0xC80D31E4B587871C(Local_131.f_9, 29) && !unk_0xC80D31E4B587871C(Local_131.f_9, 30))
		{
			unk_0xACE486395AA1867D(Global_69678.f_139[iParam0], 1084227584);
		}
		unk_0xF95D8D0BCEC9D59A(Global_69678.f_139[iParam0], 0f);
		unk_0xFBA991D3A851E195(Global_69678.f_139[iParam0], true);
		unk_0x1F0117F8A8E4EC12(Global_69678.f_139[iParam0], unk_0xC80D31E4B587871C(Local_131.f_9, 5));
	}
	unk_0x0EE72DB1CD8A3B86(&(uLocal_48[iParam0]), 0);
	unk_0x0EE72DB1CD8A3B86(&(uLocal_48[iParam0]), 1);
	Global_69678[iParam0] = 1;
	if (iVar14 != 0)
	{
		Global_69678.f_69[iParam0] = 1;
	}
	iVar17 = func_404(458, -1, -1);
	if (iVar17 != 0 && iVar17 == iParam0)
	{
		iLocal_169 = Global_69678.f_139[iParam0];
	}
	if (iParam0 == 24)
	{
		Global_2458262.f_66 = 0;
	}
}

int func_404(int iParam0, int iParam1, int iParam2)//Position - 0x28913
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_93();
	}
	iVar0 = 0;
	iVar1 = func_406(iParam0, iParam1);
	iVar2 = func_405(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xB1AF044156BFE093(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_405(int iParam0)//Position - 0x28959
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

int func_406(int iParam0, int iParam1)//Position - 0x28C9F
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_93();
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

void func_407(int iParam0, int iParam1)//Position - 0x28F9E
{
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		switch (iParam1)
		{
			case 36:
				unk_0x3399302C36042548(iParam0, -0,84f, 2,21f, 0,22f, 100f, 400f, 1);
				unk_0x3399302C36042548(iParam0, 0,67f, 2,12f, -0,06f, 100f, 400f, 1);
				unk_0x3399302C36042548(iParam0, 0,05f, 1,97f, 0,2f, 100f, 400f, 1);
				break;
			
			case 35:
				unk_0x7B3133EBCD34B431(iParam0, 6, false);
				unk_0x7B3133EBCD34B431(iParam0, 1, true);
				break;
			}
	}
}

void func_408(char* sParam0, float fParam1)//Position - 0x29044
{
	if (!unk_0xAB019B170BF1309C(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_409(char* sParam0, float fParam1, var uParam2, var uParam3)//Position - 0x2905D
{
	if (!unk_0xAB019B170BF1309C(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_410(var uParam0, var uParam1, int iParam2)//Position - 0x29076
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2147483647;
	switch (iParam2)
	{
		case joaat("coquette2"):
			unk_0x0EE72DB1CD8A3B86(&iVar0, 0);
			unk_0x0EE72DB1CD8A3B86(&iVar0, 1);
			break;
		
		case joaat("kalahari"):
			unk_0x0EE72DB1CD8A3B86(&iVar0, 0);
			unk_0x0EE72DB1CD8A3B86(&iVar0, 1);
			unk_0x0EE72DB1CD8A3B86(&iVar0, 2);
			break;
		
		case joaat("voltic"):
			unk_0x0EE72DB1CD8A3B86(&iVar0, 0);
			unk_0x0EE72DB1CD8A3B86(&iVar0, 1);
			unk_0x0EE72DB1CD8A3B86(&iVar0, 2);
			break;
		
		case joaat("banshee"):
			unk_0x0EE72DB1CD8A3B86(&iVar0, 0);
			break;
		
		case joaat("stalion"):
			unk_0x0EE72DB1CD8A3B86(&iVar0, 0);
			unk_0x0EE72DB1CD8A3B86(&iVar0, 1);
			unk_0x0EE72DB1CD8A3B86(&iVar0, 2);
			break;
		
		case joaat("chino"):
			unk_0x0EE72DB1CD8A3B86(&iVar0, 0);
			unk_0x0EE72DB1CD8A3B86(&iVar0, 1);
			unk_0x0EE72DB1CD8A3B86(&iVar0, 2);
			break;
	}
	iVar1 = (2147483647 - iVar0);
	iVar0 = (iVar0 && uParam0);
	iVar1 = (*uParam1 && iVar1);
	*uParam1 = (iVar0 || iVar1);
}

int func_411(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, int iParam5)//Position - 0x2914C
{
	int iVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	
	if (func_25(iParam1))
	{
		Var2.f_11 = 12;
		Var2.f_31 = 49;
		Var2.f_81 = 2;
		func_24(iParam1, &Var2, iParam5);
		if (Var2 == 0)
		{
			return 1;
		}
		if (unk_0x6ADD12BF4D6D2587(*iParam0))
		{
			if (unk_0x82FF3DFBC3965CC0(*iParam0) != Var2)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_104555.f_2353.f_539.f_4296) && Global_104555.f_9055.f_99.f_58[131])
		{
			Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0x6FF834D85E2DD4C6(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/]);
			if (unk_0x9A0B2ED5055D3F0B(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xEA60F3B426BB095B(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/], vParam2, fParam3, false, false, false);
				unk_0xACE486395AA1867D(*iParam0, 1084227584);
				unk_0xD8D940C0BFD3E1EC(*iParam0, 0);
				unk_0x1F0117F8A8E4EC12(*iParam0, false);
				unk_0x438D30A195B65156(*iParam0, true);
				unk_0xE01CE1EBCD7EE551(*iParam0, 1250, 0);
				unk_0xB38E13EF2EC6F0E9(*iParam0, 1250f);
				unk_0xC7C8A97B94385008(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x1E7A8525FB41AAFE(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_5, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0xB1AB9FD8B4959960(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_7, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0xF95D8D0BCEC9D59A(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					unk_0x7B3133EBCD34B431(*iParam0, iVar3 + 1, !Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_11[iVar3]);
					iVar3++;
				}
				if (Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0xC3DA759CFFFBDBF8(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_415(&uVar1, &iVar0))
				{
					unk_0xE58BC5B025017AE2(*iParam0, &uVar1);
					unk_0xFD5736F667C70A28(*iParam0, iVar0);
				}
				else
				{
					unk_0xE58BC5B025017AE2(*iParam0, &(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26 < unk_0xD559B6108233E114())
					{
						unk_0xFD5736F667C70A28(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0x94D4C393A9825924(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_84, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_85, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0x4D7D93C6E0C1063B(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0xDAA5C9C59AF4D4EB(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0x7F254E8C9247E923(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_93, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_94, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0x9D1E2B17CE94D0B9(*iParam0, 2, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 3, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 0, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 1, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0xAFB4F670EC043D01(*iParam0) > 1 && Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xC7BF27112709A906(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(*iParam0)))
					{
						if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(*iParam0)))
						{
							if (Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xC195F0A7CE73E810(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xC195F0A7CE73E810(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_346(iParam0, &(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_31), &(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0xC0E8D21B09ADD40A(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x82FF3DFBC3965CC0(*iParam0) == joaat("bodhi2"))
					{
						func_413(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x14776E43F90DD454(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/]);
				}
				func_412(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0x6FF834D85E2DD4C6(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/]);
			if (unk_0x9A0B2ED5055D3F0B(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xEA60F3B426BB095B(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/], vParam2, fParam3, false, false, false);
				unk_0xACE486395AA1867D(*iParam0, 1084227584);
				unk_0xD8D940C0BFD3E1EC(*iParam0, 0);
				unk_0x1F0117F8A8E4EC12(*iParam0, false);
				unk_0x438D30A195B65156(*iParam0, true);
				unk_0xE01CE1EBCD7EE551(*iParam0, 1250, 0);
				unk_0xB38E13EF2EC6F0E9(*iParam0, 1250f);
				unk_0xC7C8A97B94385008(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x1E7A8525FB41AAFE(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_5, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0xB1AB9FD8B4959960(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_7, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0xF95D8D0BCEC9D59A(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					unk_0x7B3133EBCD34B431(*iParam0, iVar4 + 1, !Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_11[iVar4]);
					iVar4++;
				}
				if (Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0xC3DA759CFFFBDBF8(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_415(&uVar1, &iVar0))
				{
					unk_0xE58BC5B025017AE2(*iParam0, &uVar1);
					unk_0xFD5736F667C70A28(*iParam0, iVar0);
				}
				else
				{
					unk_0xE58BC5B025017AE2(*iParam0, &(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26 < unk_0xD559B6108233E114())
					{
						unk_0xFD5736F667C70A28(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0x94D4C393A9825924(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_84, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_85, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0x4D7D93C6E0C1063B(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0xDAA5C9C59AF4D4EB(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0x7F254E8C9247E923(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_93, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_94, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0x9D1E2B17CE94D0B9(*iParam0, 2, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 3, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 0, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 1, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0xAFB4F670EC043D01(*iParam0) > 1 && Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xC7BF27112709A906(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(*iParam0)))
					{
						if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(*iParam0)))
						{
							if (Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xC195F0A7CE73E810(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xC195F0A7CE73E810(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_346(iParam0, &(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_31), &(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0xC0E8D21B09ADD40A(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x82FF3DFBC3965CC0(*iParam0) == joaat("bodhi2"))
					{
						func_413(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x14776E43F90DD454(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/]);
				}
				func_412(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0x6FF834D85E2DD4C6(Var2);
			if (unk_0x9A0B2ED5055D3F0B(Var2))
			{
				bVar5 = true;
				*iParam0 = unk_0xEA60F3B426BB095B(Var2, vParam2, fParam3, true, true, false);
				unk_0xACE486395AA1867D(*iParam0, 1084227584);
				unk_0xD8D940C0BFD3E1EC(*iParam0, 0);
				unk_0x1F0117F8A8E4EC12(*iParam0, false);
				unk_0x438D30A195B65156(*iParam0, true);
				StringCopy(&cVar6, unk_0xF2D2D6860D636A58(*iParam0), 16);
				unk_0xE01CE1EBCD7EE551(*iParam0, 1250, 0);
				unk_0xB38E13EF2EC6F0E9(*iParam0, 1250f);
				unk_0xC7C8A97B94385008(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x1E7A8525FB41AAFE(*iParam0, Var2.f_5, Var2.f_6);
				unk_0xB1AB9FD8B4959960(*iParam0, Var2.f_7, Var2.f_8);
				unk_0xF95D8D0BCEC9D59A(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					unk_0x7B3133EBCD34B431(*iParam0, iVar7 + 1, !Var2.f_11[iVar7]);
					iVar7++;
				}
				if (Var2.f_24)
				{
					unk_0xC3DA759CFFFBDBF8(*iParam0, Var2.f_24);
				}
				if (func_415(&uVar1, &iVar0))
				{
					unk_0xE58BC5B025017AE2(*iParam0, &uVar1);
					unk_0xFD5736F667C70A28(*iParam0, iVar0);
				}
				else
				{
					unk_0xE58BC5B025017AE2(*iParam0, &(Var2.f_27));
					if (Var2.f_26 >= 0 && Var2.f_26 < unk_0xD559B6108233E114())
					{
						unk_0xFD5736F667C70A28(*iParam0, Var2.f_26);
					}
				}
				unk_0x94D4C393A9825924(*iParam0, Var2.f_84, Var2.f_85, Var2.f_86);
				unk_0x4D7D93C6E0C1063B(*iParam0, Var2.f_88);
				unk_0xDAA5C9C59AF4D4EB(*iParam0, Var2.f_87);
				unk_0x7F254E8C9247E923(*iParam0, Var2.f_93, Var2.f_94, Var2.f_95);
				unk_0x9D1E2B17CE94D0B9(*iParam0, 2, unk_0xC80D31E4B587871C(Var2.f_92, 28));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 3, unk_0xC80D31E4B587871C(Var2.f_92, 29));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 0, unk_0xC80D31E4B587871C(Var2.f_92, 30));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 1, unk_0xC80D31E4B587871C(Var2.f_92, 31));
				if (unk_0xAFB4F670EC043D01(*iParam0) > 1 && Var2.f_89 >= 0)
				{
					unk_0xC7BF27112709A906(*iParam0, Var2.f_89);
				}
				if (Var2.f_90 > -1)
				{
					if (!unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(*iParam0)))
					{
						if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(*iParam0)))
						{
							if (Var2.f_90 == 6)
							{
								unk_0xC195F0A7CE73E810(*iParam0, Var2.f_90);
							}
						}
						else
						{
							unk_0xC195F0A7CE73E810(*iParam0, Var2.f_90);
						}
					}
				}
				func_346(iParam0, &(Var2.f_31), &(Var2.f_81));
				unk_0xC0E8D21B09ADD40A(*iParam0, Var2.f_96);
				if (iParam1 == 1)
				{
					if (unk_0x82FF3DFBC3965CC0(*iParam0) == joaat("bagger") && !Global_104555.f_9055.f_99.f_58[118])
					{
						unk_0xE58BC5B025017AE2(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0x82FF3DFBC3965CC0(*iParam0) == joaat("bodhi2"))
					{
						func_413(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_104555.f_2353.f_539.f_4296) && Global_104555.f_9055.f_99.f_58[131]) && unk_0x82FF3DFBC3965CC0(*iParam0) == joaat("tailgater"))
				{
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 6, 1, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 14, 7, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 11, 2, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 2, 3, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 7, 5, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 0, 0, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 3, 3, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 13, 1, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 4, 3, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 12, 2, false);
					unk_0x4705D420368126DF(*iParam0, 22, true);
					unk_0xC195F0A7CE73E810(*iParam0, 2);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 23, 11, false);
					unk_0xDAA5C9C59AF4D4EB(*iParam0, 2);
					Global_104555.f_2353.f_539.f_4296 = 1;
					func_203(iParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					unk_0x14776E43F90DD454(Var2);
				}
				if (bVar5)
				{
					func_412(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_412(int iParam0, int iParam1)//Position - 0x29F90
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			Global_90309[iVar0] = iParam0;
			Global_90319[iVar0] = iParam1;
			Global_90329[iVar0] = unk_0x82FF3DFBC3965CC0(iParam0);
			if (unk_0xC1514CFCEC68CA4A(Global_90329[iVar0]))
			{
				Global_90357[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_90357[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_413(var uParam0)//Position - 0x2A012
{
	if (!func_414(*uParam0))
	{
		unk_0x7B3133EBCD34B431(*uParam0, 5, !Global_104555.f_9055.f_99.f_58[119]);
	}
}

bool func_414(int iParam0)//Position - 0x2A03D
{
	return unk_0x7C7056D6F2A31BF6(iParam0, 5);
}

int func_415(var uParam0, int iParam1)//Position - 0x2A04C
{
	if (unk_0x3A711520F83BAE98())
	{
	}
	else if (Global_104555.f_20088.f_261)
	{
		*uParam0 = { Global_104555.f_20088.f_267 };
		*iParam1 = Global_104555.f_20088.f_271;
		return 1;
	}
	return 0;
}

int func_416(int iParam0, vector3 vParam1, int iParam2)//Position - 0x2A08D
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if ((iParam2 && unk_0x3E9CABD07B829173()) && unk_0x8F38E94BBF3404CD(joaat("startup_positioning")) > 0)
	{
		func_427("player is in vehicle bounds - \"startup_positioning\" is running.");
		return 0;
	}
	unk_0x04FE252E98FAA4C3(iParam0, &vVar0, &vVar1);
	fVar2 = unk_0xBE3C4023003180FC(vVar1, vVar0, true);
	if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vParam1, true) < (fVar2 * 0,5f))
	{
		func_408("player is in vehicle bounds - fLength: ", fVar2);
		func_408("player is in vehicle bounds - fDistance: ", unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vParam1, true));
		return 1;
	}
	return 0;
}

int func_417(int iParam0, int iParam1, vector3 vParam2, float fParam3)//Position - 0x2A11F
{
	int iVar0;
	struct<82> Var1;
	int iVar2;
	
	if (!func_25(iParam0))
	{
		return 0;
	}
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	iVar2 = 0;
	func_24(iParam0, &Var1, iParam1);
	iVar2 = Var1;
	if (iVar2 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]) && unk_0xB8DE76287EDC4957(Global_90309[iVar0], 0))
			{
				if (unk_0x82FF3DFBC3965CC0(Global_90309[iVar0]) == iVar2 && Global_90319[iVar0] == iParam0)
				{
					if (fParam3 == -1f || unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(Global_90309[iVar0], 0), vParam2, true) <= fParam3)
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_418(int iParam0)//Position - 0x2A1E4
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 20)
	{
		if (Local_131.f_4 == joaat("frogger2"))
		{
			if (((func_420(Local_131.f_4, -1) || func_419(Local_131.f_4, -1)) || unk_0x8F38E94BBF3404CD(joaat("exile2")) > 0) || !func_400(30))
			{
				return 1;
			}
		}
	}
	if (iParam0 == 24)
	{
		if ((unk_0x6ADD12BF4D6D2587(Global_69678.f_484[20]) && !unk_0x191BE1BC8F26F3C1(Global_69678.f_484[20], 0)) && unk_0xB8DE76287EDC4957(Global_69678.f_484[20], 0))
		{
			if (Local_131.f_4 == unk_0x82FF3DFBC3965CC0(Global_69678.f_484[20]))
			{
				unk_0xAEC96F2E5A91C606(Global_69678.f_484[20], &iVar0, &iVar1);
				if (iVar0 == Local_131.f_10 && iVar1 == Local_131.f_11)
				{
					func_245(20);
				}
			}
		}
	}
	return 0;
}

int func_419(int iParam0, int iParam1)//Position - 0x2A2CC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2174;
	iVar1 = unk_0x87889570F3396ABD(Local_131, 200f, iParam0, iVar0);
	if ((unk_0x6ADD12BF4D6D2587(iVar1) && unk_0xB8DE76287EDC4957(iVar1, 0)) && unk_0x82FF3DFBC3965CC0(iVar1) == iParam0)
	{
		if (iParam1 == -1 || unk_0x7E3C3BFAB9ADD960(iVar1) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_420(int iParam0, int iParam1)//Position - 0x2A32B
{
	var uVar0[50];
	int iVar1;
	int iVar2;
	
	iVar2 = unk_0x3689C35A674B0772(unk_0xFC1458A37D98B502(), &uVar0);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if ((unk_0x6ADD12BF4D6D2587(uVar0[iVar1]) && unk_0xB8DE76287EDC4957(uVar0[iVar1], 0)) && unk_0x82FF3DFBC3965CC0(uVar0[iVar1]) == iParam0)
		{
			if (iParam1 == -1 || unk_0x7E3C3BFAB9ADD960(uVar0[iVar1]) == iParam1)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_421(int iParam0)//Position - 0x2A3A6
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_328(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_422()//Position - 0x2A3C8
{
	return Global_69678.f_138;
}

float func_423(int iParam0)//Position - 0x2A3D6
{
	switch (iParam0)
	{
		case 57:
			return -0,7f;
			break;
		
		case 63:
			return -0,8f;
			break;
	}
	return 0f;
}

void func_424(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2A408
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_55(*uParam0);
	iVar1 = func_57(*uParam0);
	iVar2 = func_336(*uParam0);
	iVar3 = func_335(*uParam0);
	iVar4 = func_334(*uParam0);
	iVar5 = func_333(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_54(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_54(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_425(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_425(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2A58A
{
	func_60(uParam0, iParam1);
	func_59(uParam0, iParam2);
	func_58(uParam0, iParam3);
	func_52(uParam0, iParam5);
	func_53(uParam0, iParam4);
	func_51(uParam0, iParam6);
}

void func_426(int iParam0)//Position - 0x2A5C2
{
	if (unk_0xC80D31E4B587871C(Local_131.f_9, 13))
	{
		func_446(iParam0, 0);
	}
}

void func_427(char* sParam0)//Position - 0x2A5DF
{
	if (!unk_0xAB019B170BF1309C(sParam0))
	{
	}
}

void func_428(char* sParam0, int iParam1)//Position - 0x2A5F1
{
	if (!unk_0xAB019B170BF1309C(sParam0))
	{
		if (iParam1 != 0)
		{
		}
	}
}

void func_429(int iParam0)//Position - 0x2A609
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		return;
	}
	bVar0 = false;
	iVar3 = -1;
	iVar4 = 1193854962;
	switch (iParam0)
	{
		case 12:
		case 13:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -961,42f, -2794,47f, 12,96f };
			fVar2 = -209,22f;
			iVar3 = 0;
			iVar4 = 160628940;
			break;
		
		case 15:
		case 16:
		case 17:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -827,93f, -1368,14f, 3,9982f };
			fVar2 = -68,75f;
			iVar3 = 1;
			break;
		
		case 18:
		case 19:
			bVar0 = !func_67(iParam0, 5);
			bVar0 = true;
			vVar1 = { -710,07f, -1414,31f, 4f };
			fVar2 = -41,25f;
			iVar3 = 2;
			break;
		
		case 21:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -66,21f, 77,76f, 70,51f };
			fVar2 = -27f;
			iVar3 = 3;
			break;
		
		case 22:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -76,02f, -1825,61f, 25,88f };
			fVar2 = -129,67f;
			iVar3 = 4;
			break;
		
		case 23:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -218,68f, -1165,76f, 21,99f };
			fVar2 = 89,95f;
			iVar3 = 5;
			break;
	}
	if (bVar0 && unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vVar1, true) < 250f)
	{
		if (!unk_0x6ADD12BF4D6D2587(iLocal_146[iVar3]))
		{
			unk_0x6FF834D85E2DD4C6(iVar4);
			iLocal_147 = 1;
			if (unk_0x9A0B2ED5055D3F0B(iVar4))
			{
				if (iLocal_147)
				{
					iLocal_146[iVar3] = unk_0x9A331BBF019DCAD2(iVar4, vVar1, false, true, false);
					unk_0x59AF3B40AE222194(iLocal_146[iVar3], 0f, 0f, fVar2, 2, 1);
					unk_0x94433067C90B34A5(iLocal_146[iVar3], false);
					unk_0xEDC33A771FAEB393(iLocal_146[iVar3], true);
					unk_0x14776E43F90DD454(iVar4);
					iLocal_147 = 0;
				}
			}
		}
	}
	else if (iVar3 != -1)
	{
		if ((unk_0x6ADD12BF4D6D2587(iLocal_146[iVar3]) && !unk_0x841ED61760A7D07B(iLocal_146[iVar3])) && unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vVar1, true) > 255f)
		{
			unk_0x452336926718D62A(&(iLocal_146[iVar3]));
			if (iLocal_147)
			{
				unk_0x14776E43F90DD454(iVar4);
				iLocal_147 = 0;
			}
		}
	}
}

void func_430(int iParam0)//Position - 0x2A862
{
	bool bVar0;
	
	bVar0 = false;
	if (func_67(iParam0, 0) && (!unk_0xC80D31E4B587871C(Local_131.f_9, 14) || func_67(iParam0, 5)))
	{
		bVar0 = true;
	}
	if (Global_69678.f_346[iParam0] != bVar0)
	{
		if (!func_21(Local_131.f_15, 0f, 0f, 0f, 0))
		{
			if (!bVar0)
			{
				if (Global_69678.f_346[iParam0])
				{
					unk_0xCA107A9AAF17E75F(Global_69678.f_415[iParam0], 0);
				}
			}
			else if (!Global_69678.f_346[iParam0])
			{
				Global_69678.f_415[iParam0] = unk_0xCB389937EDB1519A(Local_131.f_15, Local_131.f_18, 0, 1, 1, 1);
			}
		}
		Global_69678.f_346[iParam0] = bVar0;
	}
}

void func_431(int iParam0)//Position - 0x2A91F
{
	int iVar0;
	
	if (unk_0xC80D31E4B587871C(Local_131.f_9, 15))
	{
		if (func_67(iParam0, 0) && !func_67(iParam0, 5))
		{
			iVar0 = 145;
			if (unk_0xC80D31E4B587871C(Local_131.f_9, 16))
			{
				iVar0 = func_432(9);
			}
			else if (unk_0xC80D31E4B587871C(Local_131.f_9, 18))
			{
				iVar0 = func_432(4);
			}
			if (iVar0 == Local_131.f_12)
			{
				func_293(iParam0, 5, 1);
			}
		}
	}
}

int func_432(int iParam0)//Position - 0x2A990
{
	return Global_104555.f_24874[iParam0 /*4*/];
}

void func_433(int iParam0)//Position - 0x2A9A3
{
	if (func_67(iParam0, 0) && !func_67(iParam0, 3))
	{
		if (unk_0xC80D31E4B587871C(Local_131.f_9, 4))
		{
			func_293(iParam0, 3, 1);
		}
		else
		{
			func_293(iParam0, 3, 1);
		}
	}
}

void func_434(int iParam0)//Position - 0x2A9E2
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (func_67(iParam0, 0) && bLocal_130)
	{
		if (unk_0xC80D31E4B587871C(Local_131.f_9, 0) || (unk_0xC80D31E4B587871C(Local_131.f_9, 2) && !func_67(iParam0, 2)))
		{
			if ((!unk_0xC80D31E4B587871C(Local_131.f_9, 21) || (((((((!func_27(0) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(9)) && !func_27(10)) && !func_27(13)) && !func_27(14))) && ((unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0 || func_67(iParam0, 5)) || !unk_0xC80D31E4B587871C(Local_131.f_9, 28)))
			{
				bVar0 = false;
				if (!unk_0xA6DECE14FC9A8C51(Global_69678.f_208[iParam0]))
				{
					if (func_400(0))
					{
						if (unk_0xC80D31E4B587871C(Local_131.f_9, 14) && !func_67(iParam0, 5))
						{
							Global_69678.f_208[iParam0] = unk_0x6F4378873333A0C2(Local_140.f_55);
							if (Local_140.f_58 != -1)
							{
								unk_0x4B4040A0EC7DBA81(Global_69678.f_208[iParam0], Local_140.f_58);
								if (!unk_0xAB019B170BF1309C(&(Local_140.f_59)))
								{
									unk_0x62BD54E491535B76(Global_69678.f_208[iParam0], &(Local_140.f_59));
								}
							}
						}
						else if (func_67(iParam0, 5) && (((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 14))
						{
							Global_69678.f_208[iParam0] = unk_0x6F4378873333A0C2(Local_140.f_55);
							if (Local_131.f_13 != -1)
							{
								unk_0x4B4040A0EC7DBA81(Global_69678.f_208[iParam0], Local_131.f_13);
								if (!unk_0xAB019B170BF1309C(&(Local_140.f_59)))
								{
									unk_0x62BD54E491535B76(Global_69678.f_208[iParam0], &(Local_140.f_59));
								}
								if (Local_131.f_12 == 0)
								{
									iVar1 = 42;
								}
								else if (Local_131.f_12 == 1)
								{
									iVar1 = 43;
								}
								else if (Local_131.f_12 == 2)
								{
									iVar1 = 44;
								}
								unk_0x0C71C8E276E3EC54(Global_69678.f_208[iParam0], iVar1);
							}
						}
						else
						{
							Global_69678.f_208[iParam0] = unk_0x6F4378873333A0C2(Local_131);
							if (Local_131.f_13 != -1)
							{
								unk_0x4B4040A0EC7DBA81(Global_69678.f_208[iParam0], Local_131.f_13);
								if (!unk_0xAB019B170BF1309C(&(Local_140.f_59)))
								{
									unk_0x62BD54E491535B76(Global_69678.f_208[iParam0], &(Local_140.f_59));
								}
								if ((((((((iParam0 == 12 || iParam0 == 13) || iParam0 == 14) || iParam0 == 15) || iParam0 == 16) || iParam0 == 17) || iParam0 == 18) || iParam0 == 19) || iParam0 == 20)
								{
									if (Local_131.f_12 == 0)
									{
										iVar2 = 42;
									}
									else if (Local_131.f_12 == 1)
									{
										iVar2 = 43;
									}
									else if (Local_131.f_12 == 2)
									{
										iVar2 = 44;
									}
									unk_0x0C71C8E276E3EC54(Global_69678.f_208[iParam0], iVar2);
								}
							}
						}
						unk_0x66DAED36FB41050D(Global_69678.f_208[iParam0], !unk_0xC80D31E4B587871C(Local_131.f_9, 1));
						unk_0x0A8FD2D5529E1737(Global_69678.f_208[iParam0], false);
						unk_0xF27F72CA15E148EE(Global_69678.f_208[iParam0], 3);
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (unk_0xA6DECE14FC9A8C51(Global_69678.f_208[iParam0]))
		{
			unk_0xE30CF11C0EE14316(&(Global_69678.f_208[iParam0]));
		}
	}
}

void func_435(int iParam0)//Position - 0x2AD5C
{
	if (func_67(iParam0, 0) && !func_67(iParam0, 1))
	{
		if (func_67(iParam0, 4))
		{
			if (unk_0xC80D31E4B587871C(Local_131.f_9, 3))
			{
				func_436(&(Local_131.f_5), 0, 0, -1, 10000, 7, 0, 0, 0);
				func_293(iParam0, 1, 1);
			}
			else
			{
				func_293(iParam0, 1, 1);
			}
		}
	}
}

void func_436(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x2ADB8
{
	func_253(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_437(int iParam0)//Position - 0x2ADD9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xC80D31E4B587871C(Local_131.f_9, 7) || Local_131.f_12 == iLocal_129)
	{
		bLocal_130 = true;
	}
	else
	{
		bLocal_130 = false;
	}
	if (func_27(14))
	{
		bLocal_130 = false;
	}
	if ((bLocal_130 && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502())) && unk_0xC80D31E4B587871C(Local_131.f_9, 14))
	{
		if (Local_56.f_2 == 0 && Local_56.f_3 == 0)
		{
			if (fLocal_152[iParam0] < Local_56.f_1 || Local_56 == iParam0)
			{
				if (Local_56 != iParam0)
				{
					Local_56.f_8 = { Local_131 };
					Local_56.f_29 = { Local_140 };
					Local_56 = iParam0;
					iVar0 = 0;
					while (iVar0 < Global_69678.f_592)
					{
						Global_69678.f_592[iVar0] = -1;
						iVar0++;
					}
					Local_56.f_6 = -1;
					if ((Local_56 == 12 || Local_56 == 13) || Local_56 == 14)
					{
						Local_56.f_6 = 0;
					}
					else if ((Local_56 == 15 || Local_56 == 16) || Local_56 == 17)
					{
						Local_56.f_6 = 1;
					}
					else if ((Local_56 == 18 || Local_56 == 19) || Local_56 == 20)
					{
						Local_56.f_6 = 2;
					}
					else if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
					{
						Local_56.f_6 = 3;
					}
					iVar0 = 0;
					while (iVar0 < 312)
					{
						iVar2 = func_130(iVar0, -1);
						if (iVar2 != 0)
						{
							if (iVar1 < Global_69678.f_592)
							{
								switch (Local_56.f_6)
								{
									case 3:
										if (func_65(iVar2))
										{
											Global_69678.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 2:
										if (unk_0xF9DDB1C0875FD9E0(iVar2))
										{
											Global_69678.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 1:
										if ((unk_0x428C7026AD2721BA(iVar2) || unk_0x38171AD35981A393(iVar2)) || iVar2 == joaat("submersible2"))
										{
											Global_69678.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 0:
										if (func_66(iVar2))
										{
											Global_69678.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									}
								}
						}
						iVar0++;
					}
				}
				Local_56.f_1 = fLocal_152[iParam0];
			}
		}
	}
	else if (Local_56 == iParam0)
	{
		Local_56 = -1;
		Local_56.f_1 = 99999,99f;
	}
	if (!unk_0xC80D31E4B587871C(uLocal_48[iParam0], 0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_139[iParam0]))
		{
			if (unk_0xB8DE76287EDC4957(Global_69678.f_139[iParam0], 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Global_69678.f_139[iParam0], 0))
					{
						if (!unk_0xC80D31E4B587871C(uLocal_48[iParam0], 1) || unk_0xC80D31E4B587871C(uLocal_48[iParam0], 3))
						{
							unk_0x872F1C1F8587CCC7(&(uLocal_48[iParam0]), 0);
							func_293(iParam0, 4, 1);
							func_293(iParam0, 2, 1);
						}
					}
					else
					{
						unk_0x872F1C1F8587CCC7(&(uLocal_48[iParam0]), 3);
					}
				}
			}
		}
	}
	if (iParam0 == 14)
	{
		if ((unk_0x6ADD12BF4D6D2587(Global_69678.f_484[iParam0]) && unk_0xB8DE76287EDC4957(Global_69678.f_484[iParam0], 0)) && unk_0x82FF3DFBC3965CC0(Global_69678.f_484[iParam0]) == joaat("hydra"))
		{
			if (!iLocal_171)
			{
				if (unk_0x0F3033474C49912D(Global_69678.f_484[iParam0], 1738,686f, 3283,423f, 45,24283f, 1724,511f, 3328,808f, 39,59781f, 21f, 0, true, 0))
				{
					unk_0x6680EBCC205398CA(Global_69678.f_484[iParam0], 0f);
					iLocal_171 = 1;
				}
			}
			else if (!unk_0x0F3033474C49912D(Global_69678.f_484[iParam0], 1738,686f, 3283,423f, 45,24283f, 1724,511f, 3328,808f, 39,59781f, 21f, 0, true, 0))
			{
				unk_0x6680EBCC205398CA(Global_69678.f_484[iParam0], 1f);
				iLocal_171 = 0;
			}
		}
		else
		{
			iLocal_171 = 0;
		}
	}
}

int func_438()//Position - 0x2B1FF
{
	return 1;
}

var func_439(var uParam0, int iParam1)//Position - 0x2B208
{
	uParam0->f_80 = 0;
	uParam0->f_69 = 0;
	StringCopy(&(uParam0->f_59), "", 16);
	switch (iParam1)
	{
		case 12:
			*uParam0 = { -952,8823f, -2795,896f, 12,13233f };
			uParam0->f_3 = { -966,7308f, -2787,975f, 16,13232f };
			uParam0->f_6 = 17,5625f;
			uParam0->f_44 = { -966,1285f, -2794,789f, 12,9648f };
			uParam0->f_47 = 146,6324f;
			uParam0->f_14 = { -1652,454f, -3059,149f, 24,932f };
			uParam0->f_14.f_3 = { -2,5815f, 0f, -176,2374f };
			uParam0->f_14.f_12 = 38,2303f;
			uParam0->f_14.f_6 = { -1651,547f, -3060,478f, 23,8077f };
			uParam0->f_14.f_6.f_3 = { -2,5815f, 0f, -176,2374f };
			uParam0->f_14.f_13 = 0,2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -1650,431f, -3177,229f, 16,9898f };
			uParam0->f_29.f_3 = { -4,9147f, 0f, -11,6415f };
			uParam0->f_29.f_12 = 38,2303f;
			uParam0->f_29.f_6 = { -1647,495f, -3173,728f, 16,6439f };
			uParam0->f_29.f_6.f_3 = { -4,9147f, 0f, -11,6415f };
			uParam0->f_29.f_13 = 0,2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { -1625,911f, -3167,556f, 11,11455f };
			uParam0->f_10 = { -1688,58f, -3130,741f, 20,13538f };
			uParam0->f_13 = 60,1875f;
			uParam0->f_48 = { -1625,911f, -3167,556f, 11,11455f };
			uParam0->f_51 = { -1688,58f, -3130,741f, 20,13538f };
			uParam0->f_54 = 60,1875f;
			uParam0->f_55 = { -966,084f, -2793,613f, 12,9648f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 13:
			*uParam0 = { -952,8823f, -2795,896f, 12,13233f };
			uParam0->f_3 = { -966,7308f, -2787,975f, 16,13232f };
			uParam0->f_6 = 17,5625f;
			uParam0->f_44 = { -966,1285f, -2794,789f, 12,9648f };
			uParam0->f_47 = 146,6324f;
			uParam0->f_14 = { -1184,2f, -3345f, 17,5f };
			uParam0->f_14.f_3 = { 3,5f, 0f, 109f };
			uParam0->f_14.f_12 = 30,3f;
			uParam0->f_14.f_6 = { -1184,3f, -3345f, 16,6f };
			uParam0->f_14.f_6.f_3 = { 3,5f, 0f, 109f };
			uParam0->f_14.f_13 = 0,2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -1272,6f, -3414,7f, 15,6f };
			uParam0->f_29.f_3 = { -2,1f, 0f, -9,9f };
			uParam0->f_29.f_12 = 37,8f;
			uParam0->f_29.f_6 = { -1274f, -3414,4f, 15,6f };
			uParam0->f_29.f_6.f_3 = { -2,1f, 0f, -9,9f };
			uParam0->f_29.f_13 = 0,2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { -1247,688f, -3408,546f, 20,50418f };
			uParam0->f_10 = { -1309,774f, -3372,294f, 11,36878f };
			uParam0->f_13 = 66,1875f;
			uParam0->f_48 = { -1247,688f, -3408,546f, 20,50418f };
			uParam0->f_51 = { -1309,774f, -3372,294f, 11,36878f };
			uParam0->f_54 = 66,1875f;
			uParam0->f_55 = { -966,084f, -2793,613f, 12,9648f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 14:
			*uParam0 = { 1727,302f, 3291,453f, 39,61911f };
			uParam0->f_3 = { 1744,108f, 3296,215f, 44,17199f };
			uParam0->f_6 = 4,6875f;
			uParam0->f_44 = { 1737,53f, 3289,239f, 40,1448f };
			uParam0->f_47 = 14,8763f;
			uParam0->f_14 = { 1739,749f, 3280,445f, 45,8124f };
			uParam0->f_14.f_3 = { -12,3854f, 0f, 14,8379f };
			uParam0->f_14.f_12 = 50f;
			uParam0->f_14.f_6 = { 1739,749f, 3280,445f, 45,8124f };
			uParam0->f_14.f_6.f_3 = { -12,3854f, 0f, 14,8379f };
			uParam0->f_14.f_13 = 0,2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { 1739,749f, 3280,445f, 45,8124f };
			uParam0->f_29.f_3 = { -12,3854f, 0f, 14,8379f };
			uParam0->f_29.f_12 = 50f;
			uParam0->f_29.f_6 = { 1739,749f, 3280,445f, 45,8124f };
			uParam0->f_29.f_6.f_3 = { -12,3854f, 0f, 14,8379f };
			uParam0->f_29.f_13 = 0,2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { 1718,056f, 3305,019f, 45,70922f };
			uParam0->f_10 = { 1745,706f, 3313,101f, 39,758f };
			uParam0->f_13 = 28,125f;
			uParam0->f_48 = { 1718,056f, 3305,019f, 45,70922f };
			uParam0->f_51 = { 1745,706f, 3313,101f, 39,758f };
			uParam0->f_54 = 28,125f;
			uParam0->f_55 = { 1735,586f, 3294,531f, 40,1651f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME2", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 18:
			*uParam0 = { -709,095f, -1414,229f, 3,188014f };
			uParam0->f_3 = { -712,123f, -1411,655f, 6,938014f };
			uParam0->f_6 = 3,25f;
			uParam0->f_7 = { -739,1531f, -1439,509f, 3,188024f };
			uParam0->f_10 = { -753,7792f, -1426,756f, 7,188024f };
			uParam0->f_13 = 17,5625f;
			uParam0->f_44 = { -700,9434f, -1418,169f, 4,0005f };
			uParam0->f_47 = 142,6382f;
			uParam0->f_14 = { -738f, -1440f, 6,3f };
			uParam0->f_14.f_3 = { -2,5f, 0f, 48,3f };
			uParam0->f_14.f_12 = 45f;
			uParam0->f_14.f_6 = { -738f, -1440f, 6f };
			uParam0->f_14.f_6.f_3 = { -2,5f, 0f, 48,3f };
			uParam0->f_14.f_13 = 0,2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -749,3f, -1425,7f, 5,9f };
			uParam0->f_29.f_3 = { -9,9f, 0,2f, -152,8f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { -749,9f, -1426f, 5,9f };
			uParam0->f_29.f_6.f_3 = { -9,9f, 0,2f, -152,8f };
			uParam0->f_29.f_13 = 0,2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -738,7791f, -1439,377f, 9,125515f };
			uParam0->f_51 = { -755,9111f, -1425,006f, 1,688014f };
			uParam0->f_54 = 18,0625f;
			uParam0->f_55 = { -708,48f, -1414,66f, 4f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME", 16);
			uParam0->f_67 = 419850;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 19:
			*uParam0 = { -709,095f, -1414,229f, 3,188014f };
			uParam0->f_3 = { -712,123f, -1411,655f, 6,938014f };
			uParam0->f_6 = 3,25f;
			uParam0->f_7 = { -755,6812f, -1459,234f, 3,188023f };
			uParam0->f_10 = { -770,7671f, -1446,867f, 7,188024f };
			uParam0->f_13 = 17,5625f;
			uParam0->f_44 = { -700,9434f, -1418,169f, 4,0005f };
			uParam0->f_47 = 142,6382f;
			uParam0->f_14 = { -754,6f, -1460,5f, 6,4f };
			uParam0->f_14.f_3 = { -4,8f, 0f, 48,5f };
			uParam0->f_14.f_12 = 45f;
			uParam0->f_14.f_6 = { -754,6f, -1460,6f, 6,1f };
			uParam0->f_14.f_6.f_3 = { -2,2f, 0f, 48,5f };
			uParam0->f_14.f_13 = 0,2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -771,8f, -1452,6f, 5,7f };
			uParam0->f_29.f_3 = { -4,1f, 0f, -98,6f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { -771,8f, -1452,1f, 5,7f };
			uParam0->f_29.f_6.f_3 = { -4,1f, 0f, -98,6f };
			uParam0->f_29.f_13 = 0,2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -755,5715f, -1459,453f, 9,125514f };
			uParam0->f_51 = { -771,4204f, -1446,235f, 1,688017f };
			uParam0->f_54 = 18,0625f;
			uParam0->f_55 = { -708,48f, -1414,66f, 4f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME", 16);
			uParam0->f_67 = 419850;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 20:
			*uParam0 = { 1763,424f, 3238,282f, 40,32022f };
			uParam0->f_3 = { 1786,589f, 3239,016f, 47,18534f };
			uParam0->f_6 = 17,75f;
			uParam0->f_7 = { 1763,424f, 3238,282f, 40,32022f };
			uParam0->f_10 = { 1786,589f, 3239,016f, 47,18534f };
			uParam0->f_13 = 17,75f;
			uParam0->f_44 = { 1761,122f, 3250,125f, 40,733f };
			uParam0->f_47 = 236,5858f;
			uParam0->f_14 = { 1779,245f, 3222,477f, 48,5795f };
			uParam0->f_14.f_3 = { -31,2473f, 0f, 7,2108f };
			uParam0->f_14.f_12 = 40f;
			uParam0->f_14.f_6 = { 1779,245f, 3222,477f, 48,5795f };
			uParam0->f_14.f_6.f_3 = { -31,2473f, 0f, 7,2108f };
			uParam0->f_14.f_13 = 0,2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { 1779,245f, 3222,477f, 48,5795f };
			uParam0->f_29.f_3 = { -31,2473f, 0f, 7,2108f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { 1779,245f, 3222,477f, 48,5795f };
			uParam0->f_29.f_6.f_3 = { -31,2473f, 0f, 7,2108f };
			uParam0->f_29.f_13 = 0,2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { 1802,327f, 3245,165f, 46,95544f };
			uParam0->f_51 = { 1755,04f, 3237,17f, 38,6937f };
			uParam0->f_54 = 28,125f;
			uParam0->f_55 = { 1769,3f, 3244f, 41,1f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME2", 16);
			uParam0->f_67 = 0;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 15:
			*uParam0 = { -826,5759f, -1368,475f, 3,750513f };
			uParam0->f_3 = { -827,868f, -1364,867f, 6,750514f };
			uParam0->f_6 = 3,3125f;
			uParam0->f_7 = { -845,2216f, -1356,04f, -0,212093f };
			uParam0->f_10 = { -841,6451f, -1365,777f, 3,787907f };
			uParam0->f_13 = 17,5625f;
			uParam0->f_44 = { -835,86f, -1358,347f, 0,6102f };
			uParam0->f_47 = 112,3787f;
			uParam0->f_14 = { -859,6f, -1374f, 4,3f };
			uParam0->f_14.f_3 = { -3f, 0f, -48,3f };
			uParam0->f_14.f_12 = 32,9f;
			uParam0->f_14.f_6 = { -859,7f, -1374f, 3f };
			uParam0->f_14.f_6.f_3 = { -3f, 0f, -48,3f };
			uParam0->f_14.f_13 = 0,2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -837,2f, -1350,3f, 2,4f };
			uParam0->f_29.f_3 = { -7f, 0f, 156,1f };
			uParam0->f_29.f_12 = 47,5f;
			uParam0->f_29.f_6 = { -837,4f, -1350,8f, 2,3f };
			uParam0->f_29.f_6.f_3 = { -7f, 0f, 156,1f };
			uParam0->f_29.f_13 = 0,2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860,0693f, -1314,887f, -3,331177f };
			uParam0->f_51 = { -826,6461f, -1410,447f, 4,787533f };
			uParam0->f_54 = 19,625f;
			uParam0->f_55 = { -827,912f, -1366,736f, 4,0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 16:
			*uParam0 = { -826,5759f, -1368,475f, 3,750513f };
			uParam0->f_3 = { -827,868f, -1364,867f, 6,750514f };
			uParam0->f_6 = 3,3125f;
			uParam0->f_7 = { -848,8177f, -1347,786f, -0,212093f };
			uParam0->f_10 = { -845,2482f, -1357,936f, 3,787908f };
			uParam0->f_13 = 17,5625f;
			uParam0->f_44 = { -839,2461f, -1349,525f, 0,6102f };
			uParam0->f_47 = 110,6762f;
			uParam0->f_14 = { -866,1f, -1365,6f, 4,3f };
			uParam0->f_14.f_3 = { -3,6f, 0f, -54,6f };
			uParam0->f_14.f_12 = 30f;
			uParam0->f_14.f_6 = { -866,1f, -1365,6f, 3f };
			uParam0->f_14.f_6.f_3 = { -3,6f, 0f, -54,6f };
			uParam0->f_14.f_13 = 0,2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -838,7f, -1343,3f, 2,9f };
			uParam0->f_29.f_3 = { -7,5f, 0f, 142,6f };
			uParam0->f_29.f_12 = 47,5f;
			uParam0->f_29.f_6 = { -838,8f, -1343,2f, 2,9f };
			uParam0->f_29.f_6.f_3 = { -7,5f, 0f, 142,6f };
			uParam0->f_29.f_13 = 0,2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860,0693f, -1314,887f, -3,331177f };
			uParam0->f_51 = { -826,6461f, -1410,447f, 4,787533f };
			uParam0->f_54 = 19,625f;
			uParam0->f_55 = { -827,912f, -1366,736f, 4,0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 17:
			*uParam0 = { -826,5759f, -1368,475f, 3,750513f };
			uParam0->f_3 = { -827,868f, -1364,867f, 6,750514f };
			uParam0->f_6 = 3,3125f;
			uParam0->f_7 = { -851,6987f, -1339,128f, -0,212129f };
			uParam0->f_10 = { -848,128f, -1349,168f, 3,787905f };
			uParam0->f_13 = 17,5625f;
			uParam0->f_44 = { -842,0763f, -1341,401f, 0,6102f };
			uParam0->f_47 = 109,8916f;
			uParam0->f_14 = { -866,3f, -1357,9f, 4,3f };
			uParam0->f_14.f_3 = { -4,4f, 0f, -46,6f };
			uParam0->f_14.f_12 = 31,2f;
			uParam0->f_14.f_6 = { -866,3f, -1357,9f, 3f };
			uParam0->f_14.f_6.f_3 = { -4,4f, 0f, -46,6f };
			uParam0->f_14.f_13 = 0,2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -841,6f, -1336,3f, 2,5f };
			uParam0->f_29.f_3 = { -3,6f, 0f, 137,7f };
			uParam0->f_29.f_12 = 47,5f;
			uParam0->f_29.f_6 = { -841,8f, -1336,1f, 2,5f };
			uParam0->f_29.f_6.f_3 = { -3,6f, 0f, 137,7f };
			uParam0->f_29.f_13 = 0,2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860,0693f, -1314,887f, -3,331177f };
			uParam0->f_51 = { -826,6461f, -1410,447f, 4,787533f };
			uParam0->f_54 = 19,625f;
			uParam0->f_55 = { -827,912f, -1366,736f, 4,0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 21:
			*uParam0 = { -63,38147f, 84,0594f, 70,52139f };
			uParam0->f_3 = { -66,17774f, 77,95913f, 74,05372f };
			uParam0->f_6 = 5,9375f;
			uParam0->f_44 = { -65,2041f, 81,0524f, 70,5666f };
			uParam0->f_47 = 243,8699f;
			uParam0->f_7 = { 189,7074f, -1017,569f, -105f };
			uParam0->f_10 = { 207,8325f, -1017,774f, -96,63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026,9f, -98,3f };
			uParam0->f_14.f_3 = { -2,4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026,9f, -98,3f };
			uParam0->f_14.f_6.f_3 = { -4,3f, 0f, -57,6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0,2f;
			uParam0->f_14.f_14 = 7,5f;
			uParam0->f_29 = { 207,3f, -1013f, -98,2f };
			uParam0->f_29.f_3 = { -2,4f, 0f, 112,3f };
			uParam0->f_29.f_6 = { 207,3f, -1013f, -98,2f };
			uParam0->f_29.f_6.f_3 = { -2,4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0,2f;
			uParam0->f_29.f_14 = 11,5f;
			uParam0->f_48 = { 221,9979f, -981,6635f, -100,1874f };
			uParam0->f_51 = { 234,201f, -981,7582f, -97,62492f };
			uParam0->f_54 = 6,25f;
			uParam0->f_55 = { -62,62f, 80,03f, 70,62f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME1", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 243,8699f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -67,9068f, 82,2664f, 70,5153f };
			uParam0->f_77[0] = 66,202f;
			uParam0->f_70[1 /*3*/] = { -65,1234f, 81,2517f, 70,5644f };
			uParam0->f_77[1] = 71,6237f;
			uParam0->f_80 = 1;
			break;
		
		case 22:
			*uParam0 = { -72,41166f, -1824,142f, 25,81704f };
			uParam0->f_3 = { -68,70254f, -1819,642f, 29,37954f };
			uParam0->f_6 = 5,9375f;
			uParam0->f_44 = { -70,1992f, -1823,225f, 25,942f };
			uParam0->f_47 = 46,1535f;
			uParam0->f_7 = { 189,7074f, -1017,569f, -105f };
			uParam0->f_10 = { 207,8325f, -1017,774f, -96,63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026,9f, -98,3f };
			uParam0->f_14.f_3 = { -2,4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026,9f, -98,3f };
			uParam0->f_14.f_6.f_3 = { -4,3f, 0f, -57,6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0,2f;
			uParam0->f_14.f_14 = 7,5f;
			uParam0->f_29 = { 207,3f, -1013f, -98,2f };
			uParam0->f_29.f_3 = { -2,4f, 0f, 112,3f };
			uParam0->f_29.f_6 = { 207,3f, -1013f, -98,2f };
			uParam0->f_29.f_6.f_3 = { -2,4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0,2f;
			uParam0->f_29.f_14 = 11,5f;
			uParam0->f_48 = { 221,9979f, -981,6635f, -100,1874f };
			uParam0->f_51 = { 234,201f, -981,7582f, -97,62492f };
			uParam0->f_54 = 6,25f;
			uParam0->f_55 = { -71,29f, -1821,68f, 25,94f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME2", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 53,0985f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -64,2268f, -1832,598f, 25,8666f };
			uParam0->f_77[0] = 274,6339f;
			uParam0->f_70[1 /*3*/] = { -68,5531f, -1824,377f, 25,9424f };
			uParam0->f_77[1] = 215,8295f;
			uParam0->f_80 = 1;
			break;
		
		case 23:
			*uParam0 = { -220,7794f, -1159,28f, 21,90302f };
			uParam0->f_3 = { -220,7273f, -1165,265f, 25,45053f };
			uParam0->f_6 = 5,9375f;
			uParam0->f_44 = { -220,7592f, -1162,277f, 22,0242f };
			uParam0->f_47 = 271,2097f;
			uParam0->f_7 = { 189,7074f, -1017,569f, -105f };
			uParam0->f_10 = { 207,8325f, -1017,774f, -96,63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026,9f, -98,3f };
			uParam0->f_14.f_3 = { -2,4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026,9f, -98,3f };
			uParam0->f_14.f_6.f_3 = { -4,3f, 0f, -57,6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0,2f;
			uParam0->f_14.f_14 = 7,5f;
			uParam0->f_29 = { 207,3f, -1013f, -98,2f };
			uParam0->f_29.f_3 = { -2,4f, 0f, 112,3f };
			uParam0->f_29.f_6 = { 207,3f, -1013f, -98,2f };
			uParam0->f_29.f_6.f_3 = { -2,4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0,2f;
			uParam0->f_29.f_14 = 11,5f;
			uParam0->f_48 = { 221,9979f, -981,6635f, -100,1874f };
			uParam0->f_51 = { 234,201f, -981,7582f, -97,62492f };
			uParam0->f_54 = 6,25f;
			uParam0->f_55 = { -218,35f, -1162,18f, 22,02f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME3", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 271,2097f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -222,1935f, -1162,113f, 22,0204f };
			uParam0->f_77[0] = 358,5703f;
			uParam0->f_70[1 /*3*/] = { -220,8189f, -1162,302f, 22,0242f };
			uParam0->f_77[1] = 70,2711f;
			uParam0->f_80 = 1;
			break;
	}
	return uParam0->f_80;
}

int func_440()//Position - 0x2C9B4
{
	func_441();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_441()//Position - 0x2C9CD
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_366(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_365(unk_0xFC1458A37D98B502());
			if (func_25(iVar0) && (!func_27(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_25(Global_104555.f_2353.f_539.f_4301))
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

void func_442()//Position - 0x2CACA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xA6DECE14FC9A8C51(Global_69678.f_208[iVar0]))
		{
			unk_0xE30CF11C0EE14316(&(Global_69678.f_208[iVar0]));
		}
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_139[iVar0]))
		{
			if (unk_0xB8DE76287EDC4957(Global_69678.f_139[iVar0], 0))
			{
				unk_0x5380482A432E314E(&(Global_69678.f_139[iVar0]));
				Global_69678.f_139[iVar0] = 0;
			}
		}
		iVar0++;
	}
	if (unk_0x8EA3C8E091EA5BA4(Local_56.f_110))
	{
		unk_0x7849794435F39D49(Local_56.f_110, false);
		unk_0x02934BABFD4CD384(Local_56.f_110, 0);
	}
	if (unk_0x8EA3C8E091EA5BA4(Local_56.f_111))
	{
		unk_0x7849794435F39D49(Local_56.f_111, false);
		unk_0x02934BABFD4CD384(Local_56.f_111, 0);
	}
	if (Local_56.f_3 != 0)
	{
		func_241();
		unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), false);
	}
	if (unk_0xA6DECE14FC9A8C51(Global_69678.f_583))
	{
		unk_0xE30CF11C0EE14316(&(Global_69678.f_583));
	}
	if (iLocal_115 != -1)
	{
		func_69(&iLocal_115);
	}
	if (iLocal_114 != -1)
	{
		func_69(&iLocal_114);
	}
	if (Local_56.f_5 != -1)
	{
		func_69(&(Local_56.f_5));
	}
	if (iLocal_125 != -1)
	{
		func_69(&iLocal_125);
	}
	if (Local_56.f_3 > 0)
	{
		if (Global_69678.f_577)
		{
			func_201(47, 1);
			func_199(47, 1);
			Global_69678.f_577 = 0;
			Local_56.f_3 = 0;
		}
	}
	Global_69678.f_553 = 0;
	unk_0x96A3D9A8A4C7AFD4();
}

void func_443()//Position - 0x2CC26
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_53[iVar0]))
		{
			unk_0x452336926718D62A(&(iLocal_53[iVar0]));
		}
		iVar0++;
	}
}

void func_444(int iParam0)//Position - 0x2CC59
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (!unk_0xC80D31E4B587871C(iLocal_150[iVar0], iVar1))
	{
		unk_0x872F1C1F8587CCC7(&(iLocal_150[iVar0]), iVar1);
		iLocal_149[iLocal_148] = iParam0;
		iLocal_148++;
	}
}

void func_445()//Position - 0x2CC9F
{
	int iVar0;
	
	if (func_264(25))
	{
		if (Global_104555.f_32429.f_69[22 /*78*/].f_66 != 0 && !func_39(Global_104555.f_32429.f_69[22 /*78*/].f_66, 0))
		{
			Global_104555.f_32429.f_69[22 /*78*/].f_66 = joaat("fugitive");
			Global_104555.f_32429.f_69[22 /*78*/].f_77 = 0;
			Global_104555.f_32429.f_69[22 /*78*/].f_65 = 0;
			Global_104555.f_32429.f_69[22 /*78*/].f_62 = 255;
			Global_104555.f_32429.f_69[22 /*78*/].f_63 = 255;
			Global_104555.f_32429.f_69[22 /*78*/].f_64 = 255;
			Global_104555.f_32429.f_69[22 /*78*/].f_5 = 0;
			Global_104555.f_32429.f_69[22 /*78*/].f_6 = 0;
			Global_104555.f_32429.f_69[22 /*78*/].f_7 = 0;
			Global_104555.f_32429.f_69[22 /*78*/].f_8 = 156;
			iVar0 = 0;
			while (iVar0 < 49)
			{
				Global_104555.f_32429.f_69[22 /*78*/].f_9[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				Global_104555.f_32429.f_69[22 /*78*/].f_59[iVar0] = 0;
				iVar0++;
			}
		}
	}
	if ((func_264(21) && Global_104555.f_32429.f_69[9 /*78*/].f_66 != 0) && !func_39(Global_104555.f_32429.f_69[9 /*78*/].f_66, 0))
	{
		Global_104555.f_32429.f_69[9 /*78*/].f_66 = 0;
	}
	if ((func_264(22) && Global_104555.f_32429.f_69[10 /*78*/].f_66 != 0) && !func_39(Global_104555.f_32429.f_69[10 /*78*/].f_66, 0))
	{
		Global_104555.f_32429.f_69[10 /*78*/].f_66 = 0;
	}
	if ((func_264(23) && Global_104555.f_32429.f_69[11 /*78*/].f_66 != 0) && !func_39(Global_104555.f_32429.f_69[11 /*78*/].f_66, 0))
	{
		Global_104555.f_32429.f_69[11 /*78*/].f_66 = 0;
	}
	if (func_264(26) && !func_39(Global_104555.f_32429.f_69[12 /*78*/].f_66, 0))
	{
		func_446(26, 0);
	}
	if (func_264(27) && !func_39(Global_104555.f_32429.f_69[13 /*78*/].f_66, 0))
	{
		func_446(27, 0);
	}
	if (func_264(28) && !func_39(Global_104555.f_32429.f_69[14 /*78*/].f_66, 0))
	{
		func_446(28, 0);
	}
	if (func_264(29) && !func_39(Global_104555.f_32429.f_69[15 /*78*/].f_66, 0))
	{
		func_446(29, 0);
	}
	if (func_264(30) && !func_39(Global_104555.f_32429.f_69[16 /*78*/].f_66, 0))
	{
		func_446(30, 0);
	}
	if (func_264(31) && !func_39(Global_104555.f_32429.f_69[17 /*78*/].f_66, 0))
	{
		func_446(31, 0);
	}
	if (func_264(32) && !func_39(Global_104555.f_32429.f_69[18 /*78*/].f_66, 0))
	{
		func_446(32, 0);
	}
	if (func_264(33) && !func_39(Global_104555.f_32429.f_69[19 /*78*/].f_66, 0))
	{
		func_446(33, 0);
	}
	if (func_264(34) && !func_39(Global_104555.f_32429.f_69[20 /*78*/].f_66, 0))
	{
		func_446(34, 0);
	}
}

void func_446(int iParam0, bool bParam1)//Position - 0x2D024
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_67(iParam0, 0))
		{
			func_293(iParam0, 1, 0);
			func_293(iParam0, 2, 0);
			func_293(iParam0, 3, 0);
			func_293(iParam0, 4, 0);
			func_293(iParam0, 0, 1);
			Global_69678[iParam0] = 1;
		}
	}
	else
	{
		func_293(iParam0, 0, 0);
	}
}

int func_447()//Position - 0x2D081
{
	return 0;
}

int func_448()//Position - 0x2D08A
{
	return 1;
}

int func_449()//Position - 0x2D093
{
	return 1;
}

int func_450()//Position - 0x2D09C
{
	if (unk_0x21EA5D4DC72DE119(-1226939934))
	{
		return 1;
	}
	return 0;
}

void func_451(var uParam0)//Position - 0x2D0B5
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_9 = { func_5("C_SF", "DL", "AST", "X1/BE") };
	func_455();
	func_454();
	func_452();
}

void func_452()//Position - 0x2D0F2
{
	Global_102933 = 2405,849f;
	Global_102936 = 2408,22f;
	Global_102939 = 2386,096f;
	Global_102942 = 69,1875f;
	Global_102945[0 /*3*/] = 2417,105f;
	Global_102945[1 /*3*/] = 2407,058f;
	Global_102945[2 /*3*/] = 2371,92f;
	Global_102945[3 /*3*/] = 2399,583f;
	Global_102945[4 /*3*/] = 2416,519f;
	Global_102945[5 /*3*/] = 2430,345f;
	Global_102945[6 /*3*/] = 2385,819f;
	Global_102967[0] = 157,8636f;
	Global_102967[1] = 174,7226f;
	Global_102967[2] = 270,7562f;
	Global_102967[3] = 190,7495f;
	Global_102967[4] = 27,6506f;
	Global_102967[5] = 358,1218f;
	Global_102967[6] = 339,4363f;
	Global_102975 = 2399,82f;
	Global_102978 = 2414,7f;
	func_453(&Global_101302, 64);
}

void func_453(var uParam0, int iParam1)//Position - 0x2D1E2
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_454()//Position - 0x2D1F3
{
	Global_101307[0 /*3*/].f_1 = 5141,01f;
	Global_101307[1 /*3*/].f_1 = 6048,71f;
	Global_101307[2 /*3*/].f_1 = 6185,32f;
	Global_101307[3 /*3*/].f_1 = 5180,99f;
	Global_101307[4 /*3*/].f_1 = 4582,72f;
	Global_101307[5 /*3*/].f_1 = 4831,82f;
	Global_101307[6 /*3*/].f_1 = 4322,66f;
	Global_101307[7 /*3*/].f_1 = 3503,92f;
	Global_101307[8 /*3*/].f_1 = 3777,54f;
	Global_101307[9 /*3*/].f_1 = 3810,8f;
	Global_101307[10 /*3*/].f_1 = 3095,88f;
	Global_101341[0 /*13*/][0 /*3*/].f_1 = 5222,39f;
	Global_101341[0 /*13*/][1 /*3*/].f_1 = 5333,68f;
	Global_101341[0 /*13*/][2 /*3*/].f_1 = 5534,22f;
	Global_101341[0 /*13*/][3 /*3*/].f_1 = 5843,98f;
	Global_101341[1 /*13*/][0 /*3*/].f_1 = 5178,94f;
	Global_101341[1 /*13*/][1 /*3*/].f_1 = 4956,4f;
	Global_101341[1 /*13*/][2 /*3*/].f_1 = 5063,24f;
	Global_101341[2 /*13*/][0 /*3*/].f_1 = 5027,97f;
	Global_101341[2 /*13*/][1 /*3*/].f_1 = 4854,23f;
	Global_101341[2 /*13*/][2 /*3*/].f_1 = 4770,31f;
	Global_101341[3 /*13*/][0 /*3*/].f_1 = 6052,6f;
	Global_101341[3 /*13*/][1 /*3*/].f_1 = 6086,12f;
	Global_101341[3 /*13*/][2 /*3*/].f_1 = 6165,88f;
	Global_101341[4 /*13*/][0 /*3*/].f_1 = 5880,13f;
	Global_101341[4 /*13*/][1 /*3*/].f_1 = 5515,67f;
	Global_101341[4 /*13*/][2 /*3*/].f_1 = 5195,4f;
	Global_101341[5 /*13*/][0 /*3*/].f_1 = 6380,15f;
	Global_101341[5 /*13*/][1 /*3*/].f_1 = 6193,92f;
	Global_101341[5 /*13*/][2 /*3*/].f_1 = 5909,13f;
	Global_101341[6 /*13*/][0 /*3*/].f_1 = 5072,56f;
	Global_101341[6 /*13*/][1 /*3*/].f_1 = 5062,55f;
	Global_101341[6 /*13*/][2 /*3*/].f_1 = 4964,13f;
	Global_101341[7 /*13*/][0 /*3*/].f_1 = 4956,69f;
	Global_101341[7 /*13*/][1 /*3*/].f_1 = 4767,8f;
	Global_101341[7 /*13*/][2 /*3*/].f_1 = 4588,79f;
	Global_101341[8 /*13*/][0 /*3*/].f_1 = 4783,28f;
	Global_101341[8 /*13*/][1 /*3*/].f_1 = 4613,93f;
	Global_101341[8 /*13*/][2 /*3*/].f_1 = 4737,46f;
	Global_101341[9 /*13*/][0 /*3*/].f_1 = 4624,7f;
	Global_101341[9 /*13*/][1 /*3*/].f_1 = 4286,39f;
	Global_101341[9 /*13*/][2 /*3*/].f_1 = 4500,57f;
	Global_101341[10 /*13*/][0 /*3*/].f_1 = 4618,13f;
	Global_101341[10 /*13*/][1 /*3*/].f_1 = 4534,44f;
	Global_101341[10 /*13*/][2 /*3*/].f_1 = 4493,64f;
	Global_101341[11 /*13*/][0 /*3*/].f_1 = 4282,7f;
	Global_101341[11 /*13*/][1 /*3*/].f_1 = 4111,71f;
	Global_101341[11 /*13*/][2 /*3*/].f_1 = 3914,81f;
	Global_101341[11 /*13*/][3 /*3*/].f_1 = 3894,7f;
	Global_101341[12 /*13*/][0 /*3*/].f_1 = 4038,96f;
	Global_101341[12 /*13*/][1 /*3*/].f_1 = 3849,33f;
	Global_101341[12 /*13*/][2 /*3*/].f_1 = 3699,37f;
	Global_101341[13 /*13*/][0 /*3*/].f_1 = 3970,96f;
	Global_101341[13 /*13*/][1 /*3*/].f_1 = 3926,75f;
	Global_101341[13 /*13*/][2 /*3*/].f_1 = 3874,89f;
	Global_101341[14 /*13*/][0 /*3*/].f_1 = 3291,26f;
	Global_101341[14 /*13*/][1 /*3*/].f_1 = 3436,6f;
	Global_101341[14 /*13*/][2 /*3*/].f_1 = 3592,12f;
	Global_101341[15 /*13*/][0 /*3*/].f_1 = 3710,49f;
	Global_101341[15 /*13*/][1 /*3*/].f_1 = 3945,38f;
	Global_101341[15 /*13*/][2 /*3*/].f_1 = 3854,2f;
	Global_101341[15 /*13*/][3 /*3*/].f_1 = 3757,3f;
	Global_101341[16 /*13*/][0 /*3*/].f_1 = 3528,6f;
	Global_101341[16 /*13*/][1 /*3*/].f_1 = 3328,93f;
	Global_101341[16 /*13*/][2 /*3*/].f_1 = 3157,76f;
	Global_101341[17 /*13*/][0 /*3*/].f_1 = 3809,12f;
	Global_101341[17 /*13*/][1 /*3*/].f_1 = 3826,24f;
	Global_101341[17 /*13*/][2 /*3*/].f_1 = 3727,81f;
	Global_101341[18 /*13*/][0 /*3*/].f_1 = 3610,22f;
	Global_101341[18 /*13*/][1 /*3*/].f_1 = 3314,26f;
	Global_101341[18 /*13*/][2 /*3*/].f_1 = 3034,58f;
	Global_101341[19 /*13*/][0 /*3*/].f_1 = 3572,72f;
	Global_101341[19 /*13*/][1 /*3*/].f_1 = 3261,69f;
	Global_101341[19 /*13*/][2 /*3*/].f_1 = 3184,28f;
	func_453(&Global_101302, 16);
}

void func_455()//Position - 0x2D6F7
{
	Global_101258[0 /*3*/] = -1567,382f;
	Global_101258[1 /*3*/] = -1436,305f;
	Global_101258[2 /*3*/] = 31,2408f;
	Global_101258[3 /*3*/] = 278,1924f;
	Global_101258[4 /*3*/] = 1116,002f;
	Global_101258[5 /*3*/] = 1676,193f;
	Global_101280[0 /*3*/] = -1592,642f;
	Global_101280[1 /*3*/] = -1573,501f;
	Global_101280[2 /*3*/] = -1459,359f;
	Global_101280[3 /*3*/] = 21,1005f;
	Global_101280[4 /*3*/] = 262,9409f;
	Global_101280[5 /*3*/] = 1091,07f;
	func_453(&Global_101302, 1);
}

