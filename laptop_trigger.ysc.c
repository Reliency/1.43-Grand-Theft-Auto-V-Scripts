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
	var uLocal_61 = 10;
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
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 37;
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
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	vector3 vLocal_164 = { 0f, 0f, 0f };
	vector3 vLocal_165 = { 0f, 0f, 0f };
	char cLocal_166[16] = "";
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	int iLocal_169 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	char* sVar1;
	var uVar2[25];
	bool bVar3;
	vector3 vVar4;
	int iVar5;
	vector3 vVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	bool bVar11;
	bool bVar12;
	
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
	fLocal_94 = ((0,05f + 0,275f) - 0,01f);
	iLocal_150 = -1;
	vLocal_164 = { 0f, 0f, 0f };
	iLocal_161 = iScriptParam_169;
	if (!unk_0x6ADD12BF4D6D2587(iLocal_161))
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	if (unk_0x7D9C4B359376D38A(3))
	{
		func_215();
		unk_0x96A3D9A8A4C7AFD4();
	}
	if (func_214(13) || func_214(14))
	{
		func_215();
		unk_0x96A3D9A8A4C7AFD4();
	}
	if (Global_31629)
	{
		func_215();
		unk_0x96A3D9A8A4C7AFD4();
	}
	if (Global_68325)
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	bVar0 = false;
	sVar1 = "tvscreen";
	bVar3 = true;
	vVar4 = { unk_0xB3328BA8976B416C(iScriptParam_169, 1) - unk_0xCE3B2111021F7234(iScriptParam_169) * Vector(0,6f, 0,6f, 0,6f) };
	vVar4.z = (vVar4.z + 0,5f);
	vLocal_165 = { unk_0x3F90543934DCD7E6(iScriptParam_169, vLocal_164) };
	Global_1669401 = 0;
	Global_1669508 = 0;
	while (bVar3)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_161))
		{
			if (iLocal_152)
			{
				if (!func_212(unk_0x9EB17624F44A8DA4()))
				{
					if (!func_211(&uLocal_155))
					{
						func_210(&uLocal_155, 1, 0);
					}
				}
			}
			if (Global_1669401 && (func_209(unk_0x9EB17624F44A8DA4()) || func_208(unk_0x9EB17624F44A8DA4())))
			{
				if (!func_211(&uLocal_159))
				{
					func_210(&uLocal_159, 0, 0);
				}
				else if (func_207(&uLocal_159, 10000, 0))
				{
					func_206(&uLocal_159);
					Global_1669401 = 0;
				}
				func_202(0);
			}
			if (Global_1595547)
			{
				if (!bVar0)
				{
					iVar5 = unk_0x82FF3DFBC3965CC0(iLocal_161);
					if (iVar5 == 1385417869)
					{
						unk_0xA25B44929E552182(unk_0xB3328BA8976B416C(iScriptParam_169, 1), 1f, 1385417869, 0);
						vVar6 = { unk_0xDB824D597B53CC40(iLocal_161, 2) };
						iLocal_161 = unk_0x5E35CF35E65D69B9(joaat("prop_laptop_lester2"), unk_0xB3328BA8976B416C(iLocal_161, 1), false, true, false);
						unk_0x59AF3B40AE222194(iLocal_161, vVar6, 2, 1);
						bVar0 = true;
					}
				}
			}
			if (unk_0xEE6BA6C2ABB48CC3(iLocal_161))
			{
				func_215();
				unk_0x96A3D9A8A4C7AFD4();
			}
		}
		if (((!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && unk_0x6ADD12BF4D6D2587(iLocal_161)) && !unk_0xA8113D347D14630F()) && unk_0x5BEF7A5AB8F17255(unk_0x98EC0789D9F0703B()))
		{
			if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == unk_0x1ACD6691B9C9AA46(iLocal_161))
			{
				bVar7 = false;
				iVar8 = unk_0xD1A659E6867D8FF6(unk_0xFC1458A37D98B502(), &uVar2, -1);
				iVar9 = 0;
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					if (!unk_0x191BE1BC8F26F3C1(uVar2[iVar9], 0))
					{
						if (unk_0xA5F6598E13F98E08(uVar2[iVar9], "MP_COMMON_MISS", "HACK_INTRO", 3))
						{
							bVar7 = true;
						}
						else if (unk_0xA5F6598E13F98E08(uVar2[iVar9], "MP_COMMON_MISS", "HACK_LOOP", 3))
						{
							bVar7 = true;
						}
					}
					iVar9++;
				}
				if (Global_16)
				{
					bVar7 = true;
				}
				vVar10 = { 0,6f, 0,6f, 0,8f };
				if (((func_201() || func_200(unk_0x9EB17624F44A8DA4())) || func_208(unk_0x9EB17624F44A8DA4())) || func_199())
				{
					vVar10 = { 1f, 1f, 0,9f };
				}
				bVar11 = func_198(unk_0x9EB17624F44A8DA4());
				if ((((((((((((((!bVar7 && !Global_25500) && !func_197(0)) && !unk_0xACB5C13823C09021(unk_0xFC1458A37D98B502(), 0)) && !func_196()) && unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vVar4, vVar10, false, true, 1)) && unk_0x078FCDE51274A1BF(unk_0xFC1458A37D98B502()) == unk_0x078FCDE51274A1BF(iLocal_161)) && !unk_0xC80D31E4B587871C(Global_2359302, 15)) && !func_195()) && !(Global_70856 && func_194())) && !(!Global_70856 && func_193())) && !((Global_70856 && unk_0xC80D31E4B587871C(Global_4456448.f_14, 24)) && unk_0x4916190900E76373())) && !((Global_70856 && func_192()) && func_191())) && !unk_0x78E929955680CA05()) && !Global_69671)
				{
					if (func_189(unk_0x9EB17624F44A8DA4()))
					{
					}
					if ((!func_188(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17) && !func_187(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17, -1)) && !func_189(unk_0x9EB17624F44A8DA4()))
					{
						if (iLocal_153 != bVar11)
						{
							if ((func_209(unk_0x9EB17624F44A8DA4()) || func_186(unk_0x9EB17624F44A8DA4())) || func_208(unk_0x9EB17624F44A8DA4()))
							{
								if (iLocal_150 != -1)
								{
									func_185(&iLocal_150);
								}
								if (func_183())
								{
									unk_0x3E80C2F7BC665259(1);
								}
							}
						}
						iLocal_153 = bVar11;
						if (iLocal_150 == -1)
						{
							if (bVar0)
							{
								func_182(&iLocal_150, 1, "MPLA_BILL", 0, 0, 0, 0);
							}
							else if (func_201())
							{
								func_181(bVar11);
							}
							else if (func_179())
							{
								func_176(bVar11);
							}
							else if (func_199())
							{
								func_164(bVar11);
							}
							else
							{
								func_182(&iLocal_150, 1, "BROWSEINPUTTRIG", 0, 0, 0, 0);
							}
						}
					}
					if (((iLocal_150 != -1 && func_162(iLocal_150, 1)) && !unk_0xA57E3BD5C64527C7(unk_0xFC1458A37D98B502())) && func_161())
					{
						if (iLocal_150 != -1)
						{
							func_185(&iLocal_150);
						}
						if (!bVar0)
						{
							if (func_160() || func_159())
							{
								func_152();
							}
							if (func_201())
							{
								func_21(0, bVar11);
								func_20(0, 0, 1);
							}
							else if (func_199())
							{
								func_21(0, bVar11);
								func_20(0, 0, 3);
							}
							else if (func_179())
							{
								func_21(1, bVar11);
								func_20(0, 0, 2);
							}
							else
							{
								func_20(0, 0, 0);
							}
							if (!iLocal_151)
							{
								func_16();
								iLocal_151 = 1;
							}
							bVar12 = true;
							if (func_160() || func_159())
							{
								func_15(&uLocal_157, 0, 0);
								while (!func_207(&uLocal_157, 500, 0))
								{
									func_202(0);
									system::wait(0);
								}
								func_206(&uLocal_157);
							}
							while (bVar12)
							{
								if (!unk_0x6ADD12BF4D6D2587(iLocal_161) || !unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), unk_0xB3328BA8976B416C(iLocal_161, 1), 1,5f, 1,5f, 4f, false, true, 1))
								{
									Global_68218 = 1;
								}
								if ((func_160() || func_159()) || func_189(unk_0x9EB17624F44A8DA4()))
								{
									if (!func_14() && !Global_69671)
									{
										bVar12 = false;
									}
								}
								else if (func_14() || Global_68218)
								{
									bVar12 = false;
								}
								if (func_160())
								{
									func_202(0);
								}
								system::wait(0);
							}
							if (func_160() || func_159())
							{
								func_1();
							}
							func_202(0);
							func_206(&uLocal_159);
							iLocal_151 = 0;
						}
					}
				}
				else
				{
					if (iLocal_150 != -1)
					{
						func_185(&iLocal_150);
					}
					if (func_209(unk_0x9EB17624F44A8DA4()) || func_186(unk_0x9EB17624F44A8DA4()))
					{
						if (func_183())
						{
							unk_0x3E80C2F7BC665259(1);
						}
					}
					if (unk_0x6ADD12BF4D6D2587(iScriptParam_169))
					{
						if (!unk_0xC8F310BD22DD910A(iScriptParam_169))
						{
							bVar3 = false;
						}
					}
				}
			}
			else if (iLocal_150 != -1)
			{
				func_185(&iLocal_150);
			}
		}
		else
		{
			if (iLocal_150 != -1)
			{
				func_185(&iLocal_150);
			}
			bVar3 = false;
		}
		system::wait(0);
	}
	if (bVar0)
	{
		if (unk_0x7118556A56307B25(sVar1))
		{
			unk_0xEE203D16F93269FA(sVar1);
		}
	}
}

void func_1()//Position - 0x746
{
	char* sVar0;
	
	if (!unk_0xA7E3B4C3A60721A5(unk_0xFC1458A37D98B502(), 1) && unk_0x6ADD12BF4D6D2587(iLocal_161))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0x353094543C6ECFC4(unk_0xFC1458A37D98B502()))
				{
					unk_0x6CFCAFBA031AB20A(unk_0xFC1458A37D98B502());
					if (!unk_0xA7E3B4C3A60721A5(unk_0xFC1458A37D98B502(), 1))
					{
						unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
					}
				}
				if (func_2(1, &sVar0))
				{
					unk_0xFCCDDE0E48CF9588(&sVar0);
				}
				if (func_2(2, &sVar0))
				{
					if (iLocal_162 != 0)
					{
						if (unk_0xD56F740235B1E8F0(iLocal_163))
						{
							unk_0x0DE51FACDA4C8C80(iLocal_163);
							iLocal_163 = -1;
						}
						iLocal_163 = unk_0x9CEC233AE69E2D39(vLocal_165, unk_0xDB824D597B53CC40(iLocal_161, 2), 2, false, false, 1065353216, 0, 1065353216);
						unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iLocal_163, &sVar0, "exit", 8f, -4f, 5, 0, 1148846080, 0);
						unk_0x9C39944AA129D284(iLocal_163);
						unk_0xFCCDDE0E48CF9588(&sVar0);
					}
				}
			}
		}
	}
	Global_1669400 = 0;
}

int func_2(int iParam0, char* sParam1)//Position - 0x83A
{
	if (!unk_0x3A711520F83BAE98())
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	if (func_3())
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	if (!func_209(unk_0x9EB17624F44A8DA4()) && !func_208(unk_0x9EB17624F44A8DA4()))
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	StringCopy(sParam1, "anim@amb@warehouse@laptop@", 64);
	return 1;
}

int func_3()//Position - 0x894
{
	var uVar0;
	
	func_10(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_9())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_8())
	{
		return 1;
	}
	if (func_7(157))
	{
		if (!func_6())
		{
			return 1;
		}
	}
	if (func_7(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_4() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_4()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_4()//Position - 0x91E
{
	switch (func_5())
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

int func_5()//Position - 0x952
{
	return Global_25233;
}

bool func_6()//Position - 0x95D
{
	return Global_2447174.f_586;
}

int func_7(int iParam0)//Position - 0x96C
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_8()//Position - 0x983
{
	return Global_2456830;
}

bool func_9()//Position - 0x98F
{
	return Global_2447174.f_581;
}

void func_10(var uParam0)//Position - 0x99E
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
					func_11(iVar0);
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

void func_11(int iParam0)//Position - 0xA11
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_13(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_12(iVar2, &bVar3))
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

int func_12(int iParam0, var uParam1)//Position - 0xA92
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

int func_13(int iParam0, bool bParam1, bool bParam2)//Position - 0xAF1
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

bool func_14()//Position - 0xB3B
{
	return Global_68215;
}

void func_15(var uParam0, bool bParam1, bool bParam2)//Position - 0xB47
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

void func_16()//Position - 0xB84
{
	if (func_19() || func_18())
	{
		func_17();
	}
}

void func_17()//Position - 0xBA1
{
	Global_2447174.f_643 = 1;
}

var func_18()//Position - 0xBB1
{
	return Global_2447174.f_622;
}

bool func_19()//Position - 0xBC0
{
	return unk_0xC80D31E4B587871C(Global_2447174.f_2, 11);
}

int func_20(int iParam0, bool bParam1, int iParam2)//Position - 0xBD4
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Global_68328 = iParam0;
	bVar0 = iParam2 == true;
	bVar1 = iParam2 == 2;
	bVar2 = iParam2 == 3;
	switch (Global_68328)
	{
		case 3:
			Global_68326 = 0;
			break;
		
		case 4:
			Global_68326 = 3;
			break;
	}
	if (unk_0x8F38E94BBF3404CD(joaat("appsecuroserv")) > 0)
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (unk_0x8F38E94BBF3404CD(1476056117) > 0)
	{
		if (bVar1)
		{
		}
		return 0;
	}
	if (unk_0x8F38E94BBF3404CD(290327540) > 0)
	{
		if (bVar2)
		{
		}
		return 0;
	}
	if (unk_0x8F38E94BBF3404CD(joaat("appinternet")) > 0)
	{
		if ((bVar0 || bVar1) || bVar2)
		{
		}
		return 0;
	}
	if (Global_70856 && func_194())
	{
		return 0;
	}
	if (!Global_70856 && func_193())
	{
		return 0;
	}
	if (bVar0)
	{
		if (!unk_0x3B6F9DF9C5FEB3A4("appSecuroServ"))
		{
			unk_0xD9E2C360120FEB7C("appSecuroServ");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0x3B6F9DF9C5FEB3A4("appSecuroServ"))
		{
			system::wait(0);
		}
		system::start_new_script("appSecuroServ", 4592);
		unk_0x9D2418D7FC697249("appSecuroServ");
		return 1;
	}
	if (bVar1)
	{
		if (!unk_0x3B6F9DF9C5FEB3A4("appBikerBusiness"))
		{
			unk_0xD9E2C360120FEB7C("appBikerBusiness");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0x3B6F9DF9C5FEB3A4("appBikerBusiness"))
		{
			system::wait(0);
		}
		system::start_new_script("appBikerBusiness", 4592);
		unk_0x9D2418D7FC697249("appBikerBusiness");
		return 1;
	}
	if (bVar2)
	{
		if (!unk_0x3B6F9DF9C5FEB3A4("appImportExport"))
		{
			unk_0xD9E2C360120FEB7C("appImportExport");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0x3B6F9DF9C5FEB3A4("appImportExport"))
		{
			system::wait(0);
		}
		system::start_new_script("appImportExport", 4592);
		unk_0x9D2418D7FC697249("appImportExport");
		return 1;
	}
	if (!unk_0x3B6F9DF9C5FEB3A4("appInternet"))
	{
		unk_0xD9E2C360120FEB7C("appInternet");
		if (bParam1)
		{
			return 0;
		}
	}
	while (!unk_0x3B6F9DF9C5FEB3A4("appInternet"))
	{
		system::wait(0);
	}
	system::start_new_script("appInternet", 4592);
	unk_0x9D2418D7FC697249("appInternet");
	return 1;
}

void func_21(int iParam0, bool bParam1)//Position - 0xDDB
{
	if ((((!bParam1 && !func_151(unk_0x9EB17624F44A8DA4(), 1)) && func_150() < func_149()) && !unk_0x4916190900E76373()) && !func_145(unk_0x9EB17624F44A8DA4()))
	{
		func_22(1, iParam0);
	}
}

void func_22(bool bParam0, int iParam1)//Position - 0xE25
{
	struct<14> Var0;
	
	func_98(1, 1, iParam1);
	if (bParam0)
	{
		if (func_97(91) || func_97(98))
		{
			func_96();
		}
		func_80();
		func_79(17);
		Var0.f_2 = 1128645158;
		Var0.f_3 = iParam1;
		if (func_78(unk_0x9EB17624F44A8DA4()) && iParam1 == 0)
		{
			Var0.f_3 = 100;
		}
		func_76(Var0, func_77(0, 1));
		func_41();
		if (!func_78(unk_0x9EB17624F44A8DA4()) && iParam1 != 1)
		{
			func_23(82, "GB_TXTMSG_INIT", 2, 0, 0, 0, 0, 1, 0, 1);
		}
	}
}

int func_23(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0xEBF
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_24(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3030 = iParam6;
			Global_2933[3 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
			Global_3010 = iParam0;
			unk_0x872F1C1F8587CCC7(&Global_2323, 1);
			unk_0x872F1C1F8587CCC7(&Global_2323, 7);
		}
		return 1;
	}
	return 0;
}

int func_24(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0xF57
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x74C475EB8E73D398(sParam14, sParam15))
	{
	}
	func_35();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14453 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14453 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14453 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502()))
			{
				return 0;
			}
		}
		if (Global_104555.f_14021[Global_14453 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_34() == 0)
	{
		func_32();
		return 0;
	}
	func_31(Global_16823);
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/]), sParam1, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_104555.f_14111[Global_16823 /*104*/].f_24 = iParam2;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_25 = iParam7;
	Global_104555.f_14111[Global_16823 /*104*/].f_26 = uParam8;
	Global_104555.f_14111[Global_16823 /*104*/].f_29 = uParam9;
	Global_104555.f_14111[Global_16823 /*104*/].f_30 = uParam12;
	Global_104555.f_14111[Global_16823 /*104*/].f_31 = uParam11;
	Global_104555.f_14111[Global_16823 /*104*/].f_28 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_33), sParam4, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_50), sParam5, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_83), sParam15, 64);
	if (unk_0xC80D31E4B587871C(Global_2323, 10))
	{
		Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 1;
		Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 1;
		Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 1;
		Global_3029 = 4;
		func_30(0);
		func_30(2);
		func_30(1);
	}
	else
	{
		func_35();
		switch (iParam16)
		{
			case 3:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[Global_14453] = 1;
				break;
			
			case 0:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14453)
			{
				case 0:
					func_30(0);
					Global_3029 = 0;
					break;
				
				case 1:
					func_30(1);
					Global_3029 = 1;
					break;
				
				case 2:
					func_30(2);
					Global_3029 = 2;
					break;
				
				case 3:
					func_30(3);
					Global_3029 = 3;
					break;
				
				default:
					Global_3029 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xC80D31E4B587871C(Global_2323, 10))
		{
			Global_104555.f_14021[0 /*20*/].f_17 = 1;
			Global_104555.f_14021[1 /*20*/].f_17 = 1;
			Global_104555.f_14021[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_104555.f_14021[Global_14453 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_104555.f_14021[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_104555.f_14021[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_104555.f_14021[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16825[Global_16823] = 0;
	if (bParam10)
	{
		func_35();
		if (Global_14396)
		{
			StringCopy(&Global_14442, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14453)
			{
				case 0:
					StringCopy(&Global_14442, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14442, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14442, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14442, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_29())
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Text_Arrive_Tone", &Global_14442, true);
			}
		}
	}
	if (!Global_14616)
	{
		if (Global_14453.f_1 == 6)
		{
			func_28(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_25(1);
			func_28(Global_14434, "DISPLAY_VIEW", 1f, system::to_float(Global_14433), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_25(int iParam0)//Position - 0x140A
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
		if (func_214(14))
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
								func_27(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar2);
								unk_0x271AA5469AF471B3();
							}
							if (Global_2456825)
							{
								if (iVar1 == 14)
								{
									func_26(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_26(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16824), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_26(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar4), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_26(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar6), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_26(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_27(&(Global_2330[iVar1 /*15*/]));
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
								func_27(&(Global_2330[iVar1 /*15*/]));
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
								func_27(&(Global_2330[iVar1 /*15*/]));
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
								func_27(&(Global_2330[iVar1 /*15*/]));
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
								func_27(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if (Global_2330[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626277.f_1;
								func_26(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_26(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(0), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_26(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x19B0
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
		func_27(sParam7);
	}
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		func_27(sParam8);
	}
	if (!unk_0xAB019B170BF1309C(sParam9))
	{
		func_27(sParam9);
	}
	if (!unk_0xAB019B170BF1309C(sParam10))
	{
		func_27(sParam10);
	}
	if (!unk_0xAB019B170BF1309C(sParam11))
	{
		func_27(sParam11);
	}
	unk_0x271AA5469AF471B3();
}

void func_27(char* sParam0)//Position - 0x1A63
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_28(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x1A75
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

bool func_29()//Position - 0x1AD8
{
	return Global_1312854;
}

void func_30(int iParam0)//Position - 0x1AE4
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_104555.f_14021[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_31(int iParam0)//Position - 0x1B03
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x2F31FD7674CB6CD3();
	iVar1 = unk_0x95327550F0F2BE7C();
	iVar2 = unk_0x674C9438180770FE();
	iVar3 = unk_0xD3ECC7A5C90D3AA4();
	uVar4 = unk_0xEAF455949B108589() + 1;
	iVar5 = unk_0x93F322D6E98835CC();
	Global_104555.f_14111[iParam0 /*104*/].f_18 = iVar0;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_32()//Position - 0x1B95
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70856)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16823 = 34;
	Global_104555.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_33(Global_104555.f_14111[iVar2 /*104*/].f_18, Global_104555.f_14111[Global_16823 /*104*/].f_18))
		{
			Global_16823 = iVar2;
		}
		iVar2++;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_24 = 1;
}

int func_33(struct<6> Param0, struct<6> Param1)//Position - 0x1C60
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_34()//Position - 0x1D4B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70856)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 0)
		{
			Global_16823 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16823 = 34;
	Global_104555.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 0 || Global_104555.f_14111[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_33(Global_104555.f_14111[iVar2 /*104*/].f_18, Global_104555.f_14111[Global_16823 /*104*/].f_18))
			{
				Global_16823 = iVar2;
			}
		}
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16823 == 34)
	{
		return 0;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 0;
	return 1;
}

void func_35()//Position - 0x1EB3
{
	if (func_214(14))
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
		Global_14453 = func_36();
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

var func_36()//Position - 0x1F55
{
	func_37();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_37()//Position - 0x1F6E
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_40(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_39(unk_0xFC1458A37D98B502());
			if (func_38(iVar0) && (!func_214(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_38(Global_104555.f_2353.f_539.f_4301))
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

bool func_38(int iParam0)//Position - 0x206B
{
	return iParam0 < 3;
}

int func_39(int iParam0)//Position - 0x2077
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_40(int iParam0)//Position - 0x20B4
{
	if (func_38(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_41()//Position - 0x20DE
{
	if ((!func_73() && func_57()) && func_54(unk_0x9EB17624F44A8DA4()))
	{
		if (func_50())
		{
			func_42("GB_INFO_MC_L", 1);
		}
		else
		{
			func_42("GB_INFO_LFG", 1);
		}
	}
}

int func_42(char* sParam0, int iParam1)//Position - 0x2122
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xE3C33644878DCCFD(sParam0);
	iVar0 = unk_0x65F0733C4A64907A(0, 1);
	func_43(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_43(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x214E
{
	int iVar0;
	
	if ((!func_49() || !unk_0x4916190900E76373()) || !func_46(unk_0x9EB17624F44A8DA4(), 0))
	{
		return;
	}
	iVar0 = func_44(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1664509.f_5[iVar0 /*53*/] = iParam0;
		Global_1664509.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1664509.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1664509.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1664509.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1664509.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1664509.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_44(int iParam0)//Position - 0x2256
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1664509 - 1))
	{
		if (iParam0 > Global_1664509.f_5[iVar0 /*53*/].f_1)
		{
			func_45(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1664509++;
	if (Global_1664509 > 5)
	{
		Global_1664509 = 5;
		return Global_1664509;
	}
	return (Global_1664509 - 1);
}

void func_45(int iParam0)//Position - 0x22B8
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1664509.f_5[iVar0 /*53*/] = { Global_1664509.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_46(int iParam0, int iParam1)//Position - 0x22F1
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_47(-1, 0) == 8;
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

int func_47(int iParam0, bool bParam1)//Position - 0x233C
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_48();
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

int func_48()//Position - 0x237D
{
	return Global_1312736;
}

bool func_49()//Position - 0x2389
{
	return unk_0x21EA5D4DC72DE119(-1762644250);
}

bool func_50()//Position - 0x239A
{
	return func_51(unk_0x9EB17624F44A8DA4());
}

bool func_51(int iParam0)//Position - 0x23AA
{
	return func_52(iParam0, 1);
}

int func_52(int iParam0, int iParam1)//Position - 0x23B9
{
	if (iParam0 != func_53())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_53())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 == iParam0 && Global_1627537[iParam0 /*532*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_53()//Position - 0x2408
{
	return -1;
}

int func_54(int iParam0)//Position - 0x2411
{
	if (iParam0 == func_53())
	{
		return 0;
	}
	if (!func_13(iParam0, 0, 1))
	{
		return 0;
	}
	if (func_46(iParam0, 0))
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_142, 2) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_142, 5))
	{
		return 0;
	}
	if (func_55(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_55(int iParam0)//Position - 0x247F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_56(iParam0, 9);
	}
	return 0;
}

bool func_56(int iParam0, int iParam1)//Position - 0x249D
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_4, iParam1);
}

int func_57()//Position - 0x24B8
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xF6A72924028F588B(iVar0);
		if (func_58(iVar1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_58(int iParam0)//Position - 0x24E9
{
	int iVar0;
	
	if (func_13(iParam0, 0, 1))
	{
		if (iParam0 != unk_0x9EB17624F44A8DA4())
		{
			iVar0 = 0;
			if (func_72(1))
			{
				if (func_71(iParam0, 18))
				{
					iVar0 = 1;
				}
			}
			else if (func_56(iParam0, 15))
			{
				iVar0 = 1;
			}
			if (iVar0 && func_59(iParam0, 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_59(int iParam0, int iParam1, bool bParam2)//Position - 0x2546
{
	if (iParam0 == func_53())
	{
		return 0;
	}
	if (!func_13(iParam0, 0, 1))
	{
		return 0;
	}
	if (func_46(iParam0, 0))
	{
		return 0;
	}
	if (func_69(iParam0))
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_142, 2) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_142, 5))
	{
		return 0;
	}
	if (func_68(iParam0))
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_66(iParam0, iParam1, 1))
		{
			return 0;
		}
		if (func_65(iParam0))
		{
			return 0;
		}
		if (func_63(iParam0, 1))
		{
			return 0;
		}
	}
	else if (func_151(iParam0, 1))
	{
		return 0;
	}
	if (func_62(iParam0))
	{
		return 0;
	}
	if (func_55(iParam0))
	{
		return 0;
	}
	if (func_145(iParam0))
	{
		return 0;
	}
	if (func_60(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_60(int iParam0)//Position - 0x2636
{
	if (func_46(iParam0, 0))
	{
		return 1;
	}
	if (func_61())
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

bool func_61()//Position - 0x2678
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_62(int iParam0)//Position - 0x2689
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 0);
	}
	return 0;
}

bool func_63(int iParam0, bool bParam1)//Position - 0x26AF
{
	return func_64(iParam0, bParam1, 1);
}

int func_64(int iParam0, bool bParam1, int iParam2)//Position - 0x26C0
{
	int iVar0;
	
	if (iParam0 == func_53())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_52(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1627537[iParam0 /*532*/].f_11;
	if (iVar0 != func_53() && Global_1627537[iVar0 /*532*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

bool func_65(int iParam0)//Position - 0x271C
{
	return func_56(iParam0, 20);
}

int func_66(int iParam0, int iParam1, bool bParam2)//Position - 0x272C
{
	if (iParam1 != func_53())
	{
		if (!bParam2)
		{
			if (func_67(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1627537[iParam0 /*532*/].f_11 != func_53())
		{
			return iParam1 == Global_1627537[iParam0 /*532*/].f_11;
		}
	}
	return 0;
}

int func_67(int iParam0, int iParam1)//Position - 0x2776
{
	if (iParam1 != func_53())
	{
		if (iParam0 != func_53())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 != func_53())
			{
				if (Global_1627537[iParam0 /*532*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_68(int iParam0)//Position - 0x27BB
{
	return func_56(iParam0, 30);
}

int func_69(int iParam0)//Position - 0x27CB
{
	if (!func_56(iParam0, 2))
	{
		return 1;
	}
	if (func_56(iParam0, 1))
	{
		return 1;
	}
	if (func_70(iParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0)//Position - 0x27FF
{
	return Global_1627537[iParam0 /*532*/].f_11.f_23;
}

bool func_71(int iParam0, int iParam1)//Position - 0x2814
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_5, iParam1);
}

bool func_72(bool bParam0)//Position - 0x282F
{
	return func_63(unk_0x9EB17624F44A8DA4(), bParam0);
}

int func_73()//Position - 0x2841
{
	int iVar0;
	var uVar1;
	struct<16> Var2;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_11[iVar0] == func_53())
		{
			StringCopy(&Var2, "", 64);
			Var2 = { func_74(func_75(iVar0)) };
			if (unk_0x74C475EB8E73D398(&Var2, &uVar1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

struct<16> func_74(int iParam0)//Position - 0x289B
{
	return Global_2447954.f_3066.f_18[iParam0 /*16*/];
}

int func_75(int iParam0)//Position - 0x28B3
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
		
		default:
	}
	return 0;
}

void func_76(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x2909
{
	Param0 = -1942454564;
	Param0.f_1 = unk_0x9EB17624F44A8DA4();
	if (!iParam13 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Param0, 14, iParam13);
	}
}

int func_77(int iParam0, bool bParam1)//Position - 0x2936
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar1);
		if (func_13(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x9EB17624F44A8DA4() || iParam0)
			{
				if (bParam1)
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
				else if (!func_46(iVar2, 0))
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_78(int iParam0)//Position - 0x299B
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 26);
}

void func_79(int iParam0)//Position - 0x29C1
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4856.f_7[iVar0]), iVar1);
}

void func_80()//Position - 0x29EA
{
	struct<8> Var0;
	int iVar1;
	
	Var0 = { func_95(59, 61, -1) };
	iVar1 = 0;
	if (func_72(1))
	{
		Var0 = { func_95(47, 48, -1) };
		iVar1 = 1;
	}
	if (unk_0xAB019B170BF1309C(&Var0))
	{
		StringCopy(&Var0, func_93(unk_0x9EB17624F44A8DA4(), 0), 64);
	}
	func_84(&Var0, iVar1, 0);
	if ((!unk_0x177281F5FA205A38() && unk_0x8E095DA8BB18B959(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
}

void func_81(int iParam0)//Position - 0x2A66
{
	unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_4), iParam0);
}

void func_82(int iParam0)//Position - 0x2A83
{
	unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_4), iParam0);
}

int func_83()//Position - 0x2AA0
{
	if (unk_0x1AA23FF6402169E9() == 0)
	{
		return 0;
	}
	if (unk_0x8A81E55A71641BC1())
	{
		if (unk_0x580E56ACE6F37FAD(1, -1))
		{
			if (unk_0x0A51F536ECBFA795())
			{
				return 1;
			}
		}
	}
	if (unk_0xFD6215BABFD843F2())
	{
		if (unk_0xCD032B200A8FAC1A(1))
		{
			if (unk_0x0A51F536ECBFA795())
			{
				return 1;
			}
		}
	}
	if (unk_0x04E8D1E1170F25E1() || unk_0x177281F5FA205A38())
	{
		if (unk_0x8E095DA8BB18B959(0, -3, 1))
		{
			return 1;
		}
	}
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0x580E56ACE6F37FAD(0, -1))
		{
			if (unk_0x0A51F536ECBFA795())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_84(char* sParam0, int iParam1, bool bParam2)//Position - 0x2B26
{
	if (bParam2)
	{
		if (func_72(1) || iParam1 == 1)
		{
			func_90(47, 48, sParam0, -1, 1);
			if (func_50() && iParam1 == 1)
			{
				func_89(sParam0, bParam2);
			}
		}
		else
		{
			func_90(59, 61, sParam0, -1, 1);
			if (func_191() && iParam1 == 0)
			{
				func_85(sParam0, bParam2);
			}
		}
	}
	StringCopy(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_99), sParam0, 64);
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_115 = unk_0x9456278AF63A7250();
	if ((!unk_0x177281F5FA205A38() && unk_0x8E095DA8BB18B959(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
}

void func_85(char* sParam0, bool bParam1)//Position - 0x2BE1
{
	struct<16> Var0;
	bool bVar1;
	
	if (bParam1)
	{
		if (!unk_0xAB019B170BF1309C(sParam0))
		{
			func_90(45, 46, sParam0, -1, 1);
			Var0 = { func_95(59, 61, -1) };
			if (unk_0xAB019B170BF1309C(&Var0))
			{
				func_90(59, 61, sParam0, -1, 1);
			}
		}
	}
	if ((!unk_0x177281F5FA205A38() && unk_0x8E095DA8BB18B959(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
	if (!unk_0xAB019B170BF1309C(sParam0))
	{
		bVar1 = true;
		if ((func_56(unk_0x9EB17624F44A8DA4(), 28) || func_88(unk_0x9EB17624F44A8DA4())) && !func_86(unk_0x9EB17624F44A8DA4()))
		{
			bVar1 = false;
		}
		if (bVar1)
		{
			StringCopy(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_326), sParam0, 64);
		}
	}
}

int func_86(int iParam0)//Position - 0x2CA3
{
	struct<13> Var0;
	
	Var0 = { func_87(iParam0) };
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

struct<13> func_87(int iParam0)//Position - 0x2CD3
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

int func_88(int iParam0)//Position - 0x2CEA
{
	struct<13> Var0;
	
	if (iParam0 != func_53())
	{
		Var0 = { func_87(iParam0) };
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

void func_89(char* sParam0, bool bParam1)//Position - 0x2D43
{
	if (bParam1)
	{
		if (!unk_0xAB019B170BF1309C(sParam0))
		{
			func_90(49, 50, sParam0, -1, 1);
		}
	}
	if (!unk_0xAB019B170BF1309C(sParam0))
	{
		StringCopy(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_342), sParam0, 64);
	}
	if ((!unk_0x177281F5FA205A38() && unk_0x8E095DA8BB18B959(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
}

void func_90(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x2DB0
{
	int iVar0;
	int iVar1;
	char cVar2[32];
	char cVar3[32];
	int iVar4;
	int iVar5;
	
	if (func_92())
	{
		iVar0 = Global_2548410[iParam0 /*3*/][func_91(iParam3)];
		iVar1 = Global_2548410[iParam1 /*3*/][func_91(iParam3)];
		if (iVar0 != 0 && iVar1 != 0)
		{
			StringCopy(&cVar2, "", 32);
			StringCopy(&cVar3, "", 32);
			iVar4 = unk_0x96AAAC172E3B9680(sParam2);
			if (iVar4 > 0)
			{
				iVar5 = 10;
				if (iVar4 < 10)
				{
					iVar5 = iVar4;
				}
				StringCopy(&cVar2, unk_0xF2A899AA1D9891AD(sParam2, 0, iVar5, 31), 32);
				if (iVar4 > 10)
				{
					StringCopy(&cVar3, unk_0xF2A899AA1D9891AD(sParam2, 10, iVar4, 31), 32);
				}
			}
			unk_0x66EC5E2D18D59027(iVar0, &cVar2, iParam4);
			unk_0x66EC5E2D18D59027(iVar1, &cVar3, iParam4);
		}
	}
}

int func_91(var uParam0)//Position - 0x2E5A
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_48();
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

int func_92()//Position - 0x2E8E
{
	return 1;
	return 0;
}

char* func_93(int iParam0, bool bParam1)//Position - 0x2E9B
{
	if (!bParam1)
	{
		if (func_63(iParam0, 1))
		{
			return func_94();
		}
	}
	return unk_0xB2E1B414DD88808E("GB_REST_ACC");
}

char* func_94()//Position - 0x2EC2
{
	return unk_0xB2E1B414DD88808E("GB_REST_ACCM");
}

struct<16> func_95(int iParam0, int iParam1, int iParam2)//Position - 0x2ED2
{
	var uVar0;
	var uVar1;
	struct<16> Var2;
	char cVar3[32];
	
	uVar0 = Global_2548410[iParam0 /*3*/][func_91(iParam2)];
	uVar1 = Global_2548410[iParam1 /*3*/][func_91(iParam2)];
	StringCopy(&Var2, unk_0xB71162D14F265C9D(uVar0, -1), 64);
	StringCopy(&cVar3, unk_0xB71162D14F265C9D(uVar1, -1), 32);
	StringConCat(&Var2, &cVar3, 64);
	return Var2;
}

void func_96()//Position - 0x2F1F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2436181.f_2592[iVar0 /*79*/].f_2 != 0)
		{
			Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			unk_0x872F1C1F8587CCC7(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
		}
		iVar0++;
	}
}

bool func_97(int iParam0)//Position - 0x2F6A
{
	return Global_2436181.f_2592[0 /*79*/].f_1 == iParam0;
}

void func_98(bool bParam0, bool bParam1, int iParam2)//Position - 0x2F81
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	char* sVar5;
	struct<16> Var6;
	bool bVar7;
	int iVar8;
	
	if (!func_142())
	{
		return;
	}
	iVar2 = 1;
	if (func_78(unk_0x9EB17624F44A8DA4()))
	{
		iVar2 = 2;
	}
	if (iParam2 == 1)
	{
		iVar2 = 3;
	}
	if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11 != unk_0x9EB17624F44A8DA4())
	{
		if (bParam1)
		{
			unk_0xCCE4E8F10D6A2F9C(iVar2);
			func_139(0);
			func_137(0);
			func_82(21);
			func_82(22);
			Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_447 = iVar2;
		}
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11 = unk_0x9EB17624F44A8DA4();
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_409 = iParam2;
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_446 = iParam2;
		unk_0x419E347CE7DB6ADD(func_48(), &uVar3, &uVar4);
		func_136(uVar3, uVar4);
		sVar5 = unk_0x600F896255C2F228(unk_0x9EB17624F44A8DA4(), &uVar0);
		StringCopy(&Var6, sVar5, 64);
		func_135(Var6);
		func_134();
		if (func_133(7053, -1, 0) <= 0)
		{
			iVar1 = unk_0xE3CCAFB1555348DF();
		}
		else
		{
			iVar1 = (func_133(7053, -1, 0) - 43200);
		}
		func_130(iVar1);
		if (unk_0x6C5223DB5E5CFD9B("Player_Boss", 3))
		{
			unk_0xD91ED8E8618A1DEF(unk_0xFC1458A37D98B502(), "Player_Boss", unk_0x9EB17624F44A8DA4());
		}
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_24 = -1;
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_25 = -1;
		Global_2512808.f_4856.f_41 = -1;
		func_124();
		func_116(0);
		if (bParam0)
		{
			func_79(0);
		}
		if (Global_2512808.f_4856.f_77 != func_53())
		{
			Global_2512808.f_4856.f_77 = func_53();
		}
		if (unk_0xC80D31E4B587871C(Global_2512808.f_1711, 15))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1711), 15);
		}
		if (func_115(15))
		{
			func_114(15);
		}
		if (!func_113() && !unk_0x4916190900E76373())
		{
			func_112();
			func_111(2);
		}
		func_110(7093, 2, -1, 1, 0);
		func_82(31);
		func_80();
		func_109();
		func_108();
		func_107();
		if (iParam2 != 1)
		{
			if (!func_106(82, 3))
			{
				bVar7 = false;
				iVar8 = func_133(7050, -1, 0);
				if (!unk_0xC80D31E4B587871C(iVar8, 11))
				{
					unk_0x872F1C1F8587CCC7(&iVar8, 11);
					func_110(7050, iVar8, -1, 1, 0);
					bVar7 = true;
				}
				func_104(82, 3, bVar7);
			}
		}
		if (iParam2 == 1)
		{
			unk_0xE8406CE79FE8D06E(func_102(func_103()), func_101(func_103()), func_100(), func_99(), Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_410, 4, Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_448);
		}
	}
}

int func_99()//Position - 0x31F9
{
	if (Global_1667867.f_3 != 0)
	{
		return Global_1667867.f_3;
	}
	return -1;
}

int func_100()//Position - 0x3215
{
	if (Global_1667867.f_2 != 0)
	{
		return Global_1667867.f_2;
	}
	return -1;
}

int func_101(int iParam0)//Position - 0x3231
{
	if (iParam0 == func_53())
	{
		return -1;
	}
	return Global_1627537[iParam0 /*532*/].f_11.f_8[1];
}

int func_102(int iParam0)//Position - 0x3256
{
	if (iParam0 == func_53())
	{
		return -1;
	}
	return Global_1627537[iParam0 /*532*/].f_11.f_8[0];
}

int func_103()//Position - 0x327B
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11;
}

void func_104(int iParam0, int iParam1, bool bParam2)//Position - 0x3290
{
	Global_3009 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		func_35();
		if (iParam1 == 4)
		{
			Global_104555.f_28020[iParam0 /*29*/].f_12[0] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_12[1] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_12[2] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[0] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[1] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] == 1 && Global_104555.f_28020[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_70856)
			{
				if (iParam1 != 4)
				{
					if (Global_14453 != iParam1)
					{
						Global_2982[iParam1 /*4*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
						Global_2999[iParam1] = 1;
						Global_3004[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14453)
					{
					}
					else
					{
						Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
						Global_2933[1 /*6*/].f_5 = iParam1;
						func_105();
					}
				}
				else
				{
					Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
					Global_2933[1 /*6*/].f_5 = iParam1;
					func_105();
				}
			}
			else
			{
				Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
				Global_2933[1 /*6*/].f_5 = iParam1;
				func_105();
			}
		}
	}
}

void func_105()//Position - 0x343A
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[Global_3009 /*29*/].f_7)), 64);
	if (Global_3028 == 0)
	{
		unk_0xE3C33644878DCCFD("");
		StringCopy(&cVar1, unk_0xB2E1B414DD88808E(&(Global_2933[1 /*6*/])), 64);
		sVar2 = unk_0xB2E1B414DD88808E("CELL_253");
		unk_0x9F42263EE935D84B(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0xE3C33644878DCCFD("CELL_255");
		unk_0xA6D2B267C377D7B2(&(Global_2933[1 /*6*/]));
		unk_0x9F42263EE935D84B(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 0);
}

int func_106(int iParam0, int iParam1)//Position - 0x34B9
{
	if (Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

void func_107()//Position - 0x34DE
{
	if (!Global_2512808.f_4856.f_156)
	{
		Global_2512808.f_4856.f_156 = 1;
	}
}

void func_108()//Position - 0x34FD
{
	struct<16> Var0;
	
	Var0 = { func_95(49, 50, -1) };
	func_89(&Var0, 0);
	if ((!unk_0x177281F5FA205A38() && unk_0x8E095DA8BB18B959(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
}

void func_109()//Position - 0x3546
{
	struct<16> Var0;
	
	Var0 = { func_95(45, 46, -1) };
	func_85(&Var0, 0);
	if ((!unk_0x177281F5FA205A38() && unk_0x8E095DA8BB18B959(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
}

void func_110(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x358F
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_91(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

void func_111(int iParam0)//Position - 0x35BF
{
	unk_0x872F1C1F8587CCC7(&(Global_2391020.f_2), iParam0);
	if (Global_2391020)
	{
		return;
	}
	Global_2391020 = 1;
	Global_2391020.f_1 = 0;
}

void func_112()//Position - 0x35E9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_2390946.f_28[iVar0 /*2*/] != -1 && Global_2390946.f_28[iVar0 /*2*/].f_1 != 0)
		{
			if (unk_0xA6DECE14FC9A8C51(Global_2390946.f_28[iVar0 /*2*/].f_1))
			{
				unk_0x66DAED36FB41050D(Global_2390946.f_28[iVar0 /*2*/].f_1, true);
			}
		}
		iVar0++;
	}
}

bool func_113()//Position - 0x364A
{
	return Global_2447174.f_627;
}

void func_114(int iParam0)//Position - 0x3659
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4856.f_7[iVar0]), iVar1);
}

bool func_115(int iParam0)//Position - 0x3682
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_7[iVar0], iVar1);
}

void func_116(int iParam0)//Position - 0x36AB
{
	if (func_123())
	{
		if (iParam0 == 1)
		{
			if (Global_2512808.f_4363 == -1)
			{
				Global_2512808.f_4363 = 60000;
			}
			func_15(&(Global_2512808.f_4361), 0, 0);
			if (Global_2512808.f_4366 == -1)
			{
				Global_2512808.f_4366 = 10000;
			}
			func_15(&(Global_2512808.f_4364), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_8 = 0;
			func_122(1);
		}
		if ((!unk_0x4916190900E76373() && !func_121()) && !func_117(unk_0x9EB17624F44A8DA4()))
		{
			Global_979885 = 0;
		}
	}
}

int func_117(int iParam0)//Position - 0x3745
{
	if (func_118(iParam0, 1))
	{
		if (Global_1595693[iParam0 /*680*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_118(int iParam0, bool bParam1)//Position - 0x3769
{
	if (bParam1)
	{
		if (func_119(iParam0))
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

bool func_119(int iParam0)//Position - 0x3795
{
	return func_120(iParam0);
}

bool func_120(int iParam0)//Position - 0x37A3
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

bool func_121()//Position - 0x37BD
{
	return Global_2447174.f_727;
}

void func_122(bool bParam0)//Position - 0x37CC
{
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_123())
		{
			if (func_13(unk_0x9EB17624F44A8DA4(), 1, 0))
			{
				unk_0xC854D7A2E956B946(unk_0xFC1458A37D98B502(), 1);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 342, false);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 122, false);
			}
			unk_0x700E2D2B75B97982(unk_0x9EB17624F44A8DA4(), 1f);
			unk_0xF305970BD7628B41(0);
			unk_0x2BDCC0C0CA635E27(true);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					unk_0xC526816FBFFDD996(0, 0);
				}
			}
		}
		else
		{
			if (func_13(unk_0x9EB17624F44A8DA4(), 1, 1))
			{
				unk_0xC854D7A2E956B946(unk_0xFC1458A37D98B502(), 0);
				unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 342, true);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 122, true);
				unk_0x700E2D2B75B97982(unk_0x9EB17624F44A8DA4(), 0,5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xC526816FBFFDD996(1, 0);
				}
			}
			unk_0xF305970BD7628B41(1);
			unk_0x2BDCC0C0CA635E27(false);
		}
	}
}

bool func_123()//Position - 0x38C5
{
	return Global_1312416;
}

void func_124()//Position - 0x38D1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xF6A72924028F588B(iVar0);
		if (unk_0x552F39AE86E07792(iVar1))
		{
			func_126(1, iVar1);
			if (iVar1 != unk_0x9EB17624F44A8DA4())
			{
				func_125(iVar1);
			}
		}
		iVar0++;
	}
}

void func_125(int iParam0)//Position - 0x3913
{
	int iVar0;
	
	if (unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_95, iParam0))
	{
		iVar0 = unk_0x25D049AAC4603E65(iParam0);
		unk_0xB0DD9292E54C7917(iVar0, unk_0x9EB17624F44A8DA4(), 1);
		unk_0x16BF46A5B08AE23D(unk_0x9EB17624F44A8DA4(), iParam0, true);
		unk_0x16BF46A5B08AE23D(iParam0, unk_0x9EB17624F44A8DA4(), true);
		func_126(1, iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_95), iParam0);
	}
}

void func_126(bool bParam0, int iParam1)//Position - 0x3978
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_13(iParam1, 0, 1))
	{
		iVar1 = unk_0x25D049AAC4603E65(iParam1);
		if (unk_0x6ADD12BF4D6D2587(iVar1) && !unk_0x191BE1BC8F26F3C1(iVar1, 0))
		{
			if (unk_0x88DDBE9908752BF0(iVar1, 0))
			{
				iVar0 = unk_0xDFD115BB10FE46A9(iVar1, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar0) && !unk_0x191BE1BC8F26F3C1(iVar0, 0))
				{
					unk_0xD2EF89BC08CE7823(iVar0, bParam0, 1);
					if (func_66(iParam1, func_103(), 1))
					{
						if (func_103() == iParam1)
						{
							if (Global_2512808.f_4856.f_78[3] != iVar0)
							{
								Global_2512808.f_4856.f_78[3] = iVar0;
							}
						}
						else
						{
							iVar2 = func_127(func_103(), iParam1);
							if (iVar2 != -1)
							{
								if (Global_2512808.f_4856.f_78[iVar2] != iVar0)
								{
									Global_2512808.f_4856.f_78[iVar2] = iVar0;
								}
							}
						}
					}
				}
			}
			else if (!bParam0)
			{
				if (func_66(iParam1, func_103(), 1))
				{
					if (func_103() == iParam1)
					{
						iVar0 = Global_2512808.f_4856.f_78[3];
						if (unk_0x6ADD12BF4D6D2587(iVar0) && !unk_0x191BE1BC8F26F3C1(iVar0, 0))
						{
							unk_0xD2EF89BC08CE7823(iVar0, true, 1);
							Global_2512808.f_4856.f_78[3] = 0;
						}
					}
					else
					{
						iVar3 = func_127(func_103(), iParam1);
						if (iVar3 != -1)
						{
							iVar0 = Global_2512808.f_4856.f_78[iVar3];
							if (unk_0x6ADD12BF4D6D2587(iVar0) && !unk_0x191BE1BC8F26F3C1(iVar0, 0))
							{
								unk_0xD2EF89BC08CE7823(iVar0, true, 1);
								Global_2512808.f_4856.f_78[iVar3] = 0;
							}
						}
					}
				}
			}
		}
	}
}

int func_127(int iParam0, int iParam1)//Position - 0x3AF0
{
	int iVar0;
	
	if (func_198(iParam0))
	{
		if (func_66(iParam1, iParam0, 0) || func_129(iParam1, iParam0))
		{
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_128(iParam0, iVar0) == iParam1)
				{
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

int func_128(int iParam0, int iParam1)//Position - 0x3B46
{
	if (func_198(iParam0))
	{
		if (iParam1 > -1 && iParam1 < 7)
		{
			return Global_1627537[iParam0 /*532*/].f_11.f_11[iParam1];
		}
	}
	return func_53();
}

int func_129(int iParam0, int iParam1)//Position - 0x3B82
{
	if (iParam1 != func_53())
	{
		if (Global_1627537[iParam0 /*532*/].f_11.f_26 != func_53())
		{
			return iParam1 == Global_1627537[iParam0 /*532*/].f_11.f_26;
		}
	}
	return 0;
}

void func_130(int iParam0)//Position - 0x3BBB
{
	if (!func_142())
	{
		return;
	}
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_1 = iParam0;
	if (func_133(7053, -1, 0) != func_131(unk_0x9EB17624F44A8DA4()))
	{
		func_110(7053, func_131(unk_0x9EB17624F44A8DA4()), -1, 1, 0);
	}
}

int func_131(int iParam0)//Position - 0x3C05
{
	if (func_132(iParam0) == -1)
	{
		return -1;
	}
	return (func_132(iParam0) + 43200);
}

int func_132(int iParam0)//Position - 0x3C26
{
	return Global_1627537[iParam0 /*532*/].f_11.f_1;
}

int func_133(int iParam0, int iParam1, int iParam2)//Position - 0x3C3B
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_91(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_134()//Position - 0x3C6D
{
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0xE9397FE0AD378523(1);
		if (func_72(1))
		{
			unk_0xED1F9FCC30E97DAE(1253452001);
		}
		else
		{
			unk_0xED1F9FCC30E97DAE(-1755491431);
		}
	}
}

void func_135(char[64] cParam0)//Position - 0x3C9E
{
	Global_2447954.f_3066.f_2 = { cParam0 };
}

void func_136(var uParam0, var uParam1)//Position - 0x3CB7
{
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_8[0] = uParam0;
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_8[1] = uParam1;
}

void func_137(int iParam0)//Position - 0x3CE7
{
	func_138(204, iParam0, -1, 1);
}

void func_138(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3CF9
{
	int iVar0;
	
	if (func_92())
	{
		iVar0 = Global_2547365[iParam0 /*3*/][func_91(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x41495934EA1DEC56(iVar0, iParam1, iParam3);
		}
	}
}

void func_139(bool bParam0)//Position - 0x3D2B
{
	if (bParam0)
	{
		if (func_141(4))
		{
			func_81(21);
			func_81(22);
		}
		func_81(31);
		func_140(bParam0);
	}
	else
	{
		if (func_56(unk_0x9EB17624F44A8DA4(), 21))
		{
			func_82(21);
			if (!func_141(3) && func_141(4))
			{
				func_81(22);
			}
		}
		func_82(31);
		func_140(bParam0);
	}
}

void func_140(bool bParam0)//Position - 0x3D93
{
	func_138(306, bParam0, -1, 1);
}

bool func_141(int iParam0)//Position - 0x3DA6
{
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_34, iParam0);
}

int func_142()//Position - 0x3DBD
{
	if (func_144() && func_143(0))
	{
		return 1;
	}
	return 0;
}

var func_143(int iParam0)//Position - 0x3DDB
{
	return Global_1312373[iParam0];
}

var func_144()//Position - 0x3DEB
{
	return func_143(func_48() + 1);
}

bool func_145(int iParam0)//Position - 0x3DFD
{
	return func_146(iParam0) > 0;
}

int func_146(int iParam0)//Position - 0x3E0D
{
	int iVar0;
	int iVar1;
	
	if (func_13(iParam0, 0, 1))
	{
		if (Global_1627537[iParam0 /*532*/].f_11.f_175 != -1)
		{
			iVar0 = Global_1627537[iParam0 /*532*/].f_11.f_175;
		}
		else
		{
			iVar0 = func_148(joaat("mpply_vipgameplaydisabledtimer"));
		}
		iVar1 = ((iVar0 + func_147()) - unk_0xE3CCAFB1555348DF());
		return iVar1;
	}
	return -1;
}

int func_147()//Position - 0x3E62
{
	return Global_262145.f_14277;
}

int func_148(int iParam0)//Position - 0x3E71
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_149()//Position - 0x3E8F
{
	return Global_262145.f_11706;
}

int func_150()//Position - 0x3E9E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar0);
		if (unk_0x552F39AE86E07792(iVar2))
		{
			if (func_198(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_151(int iParam0, bool bParam1)//Position - 0x3EDB
{
	if (!bParam1)
	{
		if (func_198(iParam0))
		{
			return 0;
		}
	}
	return Global_1627537[iParam0 /*532*/].f_11 != func_53();
}

void func_152()//Position - 0x3F06
{
	char* sVar0;
	vector3 vVar1;
	bool bVar2;
	
	Global_1669400 = 1;
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
		vVar1 = { unk_0x3F90543934DCD7E6(iLocal_161, 0,0328f, -0,8f, 0,3f) };
		bVar2 = false;
		func_206(&uLocal_157);
		if (func_2(0, &sVar0))
		{
			while (!bVar2)
			{
				func_202(0);
				if (!func_211(&uLocal_157))
				{
					func_210(&uLocal_157, 0, 0);
				}
				else if (func_207(&uLocal_157, 4000, 0))
				{
					bVar2 = true;
				}
				if (!func_158(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vVar1, 0,05f, 0) && !func_157(unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502()), unk_0xF0371FE6E2BF9599(iLocal_161), 5f))
				{
					if (!func_154(unk_0xFC1458A37D98B502(), 2106541073))
					{
						unk_0x6EF694689373EE8D(unk_0xFC1458A37D98B502(), vVar1, 1f, 5000, unk_0xF0371FE6E2BF9599(iLocal_161), 0,25f);
					}
				}
				else
				{
					bVar2 = true;
				}
				system::wait(0);
			}
			func_206(&uLocal_157);
			iLocal_162 = 0;
		}
	}
	while (iLocal_162 != 3)
	{
		func_153(iLocal_161);
		func_202(0);
		system::wait(0);
	}
}

void func_153(int iParam0)//Position - 0x401A
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!unk_0x3A711520F83BAE98())
	{
		return;
	}
	if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		return;
	}
	if (!func_209(unk_0x9EB17624F44A8DA4()) && !func_208(unk_0x9EB17624F44A8DA4()))
	{
		return;
	}
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return;
	}
	func_2(0, &sVar0);
	func_2(1, &sVar1);
	func_2(2, &sVar2);
	unk_0x6450931B826B49D9(&sVar2);
	unk_0x6450931B826B49D9(&sVar0);
	sVar3 = "idle_a";
	iVar4 = 1;
	if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == joaat("mp_f_freemode_01"))
	{
		iVar4 = 1;
	}
	switch (iLocal_162)
	{
		case 0:
			iLocal_154 = 0;
			unk_0x2E6D5CE2213244B1("walk", unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 64, 256, 64, 64);
			if (unk_0x3A801AA34DD821BE(&sVar0))
			{
				if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 2106541073) == 7 && unk_0x3A801AA34DD821BE(&sVar0))
				{
					if (unk_0xD56F740235B1E8F0(iLocal_163))
					{
						unk_0x0DE51FACDA4C8C80(iLocal_163);
						iLocal_163 = -1;
					}
					iLocal_163 = unk_0x9CEC233AE69E2D39(vLocal_165, unk_0xDB824D597B53CC40(iParam0, 2), 2, false, false, 1065353216, 0, 1065353216);
					unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iLocal_163, &sVar0, "enter", 4f, -2f, 5, 0, 1148846080, 0);
					unk_0x9C39944AA129D284(iLocal_163);
					unk_0xFCCDDE0E48CF9588(&sVar0);
					iLocal_162 = 1;
				}
			}
			break;
		
		case 1:
			unk_0x2E6D5CE2213244B1("enter", unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 64, 256, 64, 64);
			unk_0x6450931B826B49D9(&sVar1);
			iVar5 = unk_0x45D90ED1F569A489(iLocal_163);
			if (!iLocal_154)
			{
				if (unk_0x463C4747B41E35A3(iVar5) >= 0,93f)
				{
					unk_0x4AFBCBFDE748D4E0(-1, "Login", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", true);
					iLocal_154 = 1;
				}
			}
			if (unk_0x3A801AA34DD821BE(&sVar1) && (!unk_0xD56F740235B1E8F0(iVar5) || unk_0x463C4747B41E35A3(iVar5) >= 0,96f))
			{
				iVar6 = unk_0x63A6486593EC7EC3(0, iVar4);
				if ((((unk_0x74C475EB8E73D398(&cLocal_166, "idle_a") && iVar6 == 0) || (unk_0x74C475EB8E73D398(&cLocal_166, "idle_b") && iVar6 == 1)) || (unk_0x74C475EB8E73D398(&cLocal_166, "idle_c") && iVar6 == 2)) || (unk_0x74C475EB8E73D398(&cLocal_166, "idle_d") && iVar6 == 3))
				{
					iVar6++;
					if (iVar6 >= iVar4)
					{
						iVar6 = 0;
					}
				}
				if (unk_0xD56F740235B1E8F0(iLocal_163))
				{
					unk_0x0DE51FACDA4C8C80(iLocal_163);
					iLocal_163 = -1;
				}
				iLocal_163 = unk_0x9CEC233AE69E2D39(vLocal_165, unk_0xDB824D597B53CC40(iParam0, 2), 2, false, true, 1065353216, 0, 1065353216);
				switch (iVar6)
				{
					case 0:
						unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iLocal_163, &sVar1, "idle_a", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0x9C39944AA129D284(iLocal_163);
						StringCopy(&cLocal_166, "idle_a", 16);
						iLocal_162 = 3;
						break;
					
					case 1:
						unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iLocal_163, &sVar1, "idle_b", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0x9C39944AA129D284(iLocal_163);
						StringCopy(&cLocal_166, "idle_b", 16);
						iLocal_162 = 3;
						break;
					
					case 2:
						unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iLocal_163, &sVar1, "idle_c", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0x9C39944AA129D284(iLocal_163);
						StringCopy(&cLocal_166, "idle_c", 16);
						iLocal_162 = 3;
						break;
					
					case 3:
						unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iLocal_163, &sVar1, "idle_d", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0x9C39944AA129D284(iLocal_163);
						StringCopy(&cLocal_166, "idle_d", 16);
						iLocal_162 = 3;
						break;
					
					default:
						StringCopy(&cLocal_166, "idle_XXX", 16);
						break;
					}
			}
			break;
		
		case 3:
			iLocal_154 = 0;
			if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &sVar1, "idle_a", 2))
			{
				unk_0x2E6D5CE2213244B1("idle_a", unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 256, 64, 64, 64);
			}
			else if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &sVar1, "idle_b", 2))
			{
				unk_0x2E6D5CE2213244B1("idle_b", unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 256, 64, 64, 64);
			}
			else if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &sVar1, "idle_c", 2))
			{
				unk_0x2E6D5CE2213244B1("idle_c", unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 256, 64, 64, 64);
			}
			else if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &sVar1, "idle_d", 2))
			{
				unk_0x2E6D5CE2213244B1("idle_d", unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 256, 64, 64, 64);
			}
			else
			{
				unk_0x2E6D5CE2213244B1("idle_XXX", unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 256, 64, 64, 64);
			}
			iVar5 = unk_0x45D90ED1F569A489(iLocal_163);
			if (!unk_0xD56F740235B1E8F0(iLocal_163) && !unk_0xD56F740235B1E8F0(iVar5))
			{
				if (unk_0xD56F740235B1E8F0(iLocal_163))
				{
					unk_0x0DE51FACDA4C8C80(iLocal_163);
					iLocal_163 = -1;
				}
				iLocal_163 = unk_0x9CEC233AE69E2D39(vLocal_165, unk_0xDB824D597B53CC40(iParam0, 2), 2, false, true, 1065353216, 0, 1065353216);
				iVar5 = unk_0x45D90ED1F569A489(iLocal_163);
				if (unk_0xD56F740235B1E8F0(iVar5))
				{
					unk_0x0ADADE14A7CF26EF(iVar5, 0f);
				}
				unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iLocal_163, &sVar1, sVar3, 4f, -2f, 5, 0, 1148846080, 0);
				unk_0x9C39944AA129D284(iLocal_163);
				iLocal_162 = 3;
				return;
			}
			if (unk_0x3A801AA34DD821BE(&sVar1) && (!unk_0xD56F740235B1E8F0(iVar5) || unk_0x463C4747B41E35A3(iVar5) >= 0,99f))
			{
				if (unk_0xD56F740235B1E8F0(iLocal_163))
				{
					unk_0x0DE51FACDA4C8C80(iLocal_163);
					iLocal_163 = -1;
				}
				iLocal_163 = unk_0x9CEC233AE69E2D39(vLocal_165, unk_0xDB824D597B53CC40(iParam0, 2), 2, false, true, 1065353216, 0, 1065353216);
				unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iLocal_163, &sVar1, sVar3, 4f, -2f, 5, 0, 1148846080, 0);
				unk_0x9C39944AA129D284(iLocal_163);
				iLocal_162 = 3;
				return;
			}
			break;
	}
}

int func_154(int iParam0, int iParam1)//Position - 0x4556
{
	if (func_155(iParam0))
	{
		if (unk_0x78F50AA8F955BEFC(iParam0, iParam1) == 1 || unk_0x78F50AA8F955BEFC(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_155(int iParam0)//Position - 0x4589
{
	if (func_156(iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_156(int iParam0)//Position - 0x45A9
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

int func_157(float fParam0, float fParam1, float fParam2)//Position - 0x45CA
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

int func_158(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x463F
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

int func_159()//Position - 0x46BA
{
	if (func_208(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xC80D31E4B587871C(Global_1669535.f_16, 0) || unk_0xC80D31E4B587871C(Global_1669535.f_16, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_160()//Position - 0x46F1
{
	if (func_209(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xC80D31E4B587871C(Global_1669535.f_16, 0) || unk_0xC80D31E4B587871C(Global_1669535.f_16, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_161()//Position - 0x4728
{
	if (func_145(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_198(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	else if (func_150() < func_149())
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0, bool bParam1)//Position - 0x4761
{
	int iVar0;
	
	iVar0 = func_163(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5BEF7A5AB8F17255(unk_0x98EC0789D9F0703B()))
	{
		return 0;
	}
	if (func_197(0))
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

int func_163(int iParam0)//Position - 0x4819
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

void func_164(bool bParam0)//Position - 0x4854
{
	if ((((func_189(unk_0x9EB17624F44A8DA4()) && func_174(unk_0x9EB17624F44A8DA4()) == func_173(unk_0x9EB17624F44A8DA4())) && !unk_0x8164A5C4CBC21707(unk_0x9EB17624F44A8DA4())) && !func_172()) && !Global_1669401)
	{
		if (func_170())
		{
			func_169("WHPRIVSESLAP");
		}
		else if (!bParam0)
		{
			if (func_150() >= func_149())
			{
				func_182(&iLocal_150, 1, "WHSECUROMAXVIP", 0, 0, 0, 0);
			}
			else if (func_145(unk_0x9EB17624F44A8DA4()))
			{
				func_182(&iLocal_150, 1, "PIM_EXECH0x1", 0, 0, 0, 0);
			}
			else if (unk_0x4916190900E76373())
			{
				func_169("WHSECUROBLCK");
			}
			else
			{
				func_182(&iLocal_150, 1, "SECINPUTTREGLAP", 0, 0, 0, 0);
			}
		}
		else if (func_51(unk_0x9EB17624F44A8DA4()))
		{
			func_169("WHBIKERBLCK");
		}
		else if ((func_211(&uLocal_155) && func_207(&uLocal_155, 10000, 1)) || !iLocal_152)
		{
			if (func_165(unk_0x9EB17624F44A8DA4()) || Global_1669401 == 1)
			{
				iLocal_152 = 1;
				if (!Global_1669401)
				{
					func_169("WHSECUROBLCK");
				}
			}
			else
			{
				if (func_183())
				{
					unk_0x3E80C2F7BC665259(1);
				}
				iLocal_152 = 0;
				func_206(&uLocal_155);
				func_182(&iLocal_150, 1, "WHSECUROINPUT", 0, 0, 0, 0);
			}
		}
		else if (iLocal_152)
		{
			if (!unk_0xF491DD47B88AA84E())
			{
				func_169("WHSECUROBLCK");
			}
			if (!func_165(unk_0x9EB17624F44A8DA4()))
			{
				unk_0x3E80C2F7BC665259(1);
				iLocal_152 = 0;
			}
		}
	}
}

bool func_165(int iParam0)//Position - 0x49C9
{
	return func_166(func_167(iParam0));
}

int func_166(int iParam0)//Position - 0x49DB
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_167(int iParam0)//Position - 0x49FB
{
	if (func_168(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

int func_168(int iParam0, int iParam1)//Position - 0x4A1E
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_169(char* sParam0)//Position - 0x4A59
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 1, true, -1);
}

int func_170()//Position - 0x4A6F
{
	if (func_171())
	{
		return 1;
	}
	return Global_2447174.f_631;
}

bool func_171()//Position - 0x4A89
{
	return Global_1312814 == 10;
}

bool func_172()//Position - 0x4A98
{
	return Global_1669535.f_28;
}

int func_173(int iParam0)//Position - 0x4AA6
{
	if (iParam0 == func_53())
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_266.f_111;
}

int func_174(int iParam0)//Position - 0x4AC9
{
	if (func_189(iParam0))
	{
		return func_175(Global_2422736[iParam0 /*420*/].f_324.f_1);
	}
	return 0;
}

int func_175(int iParam0)//Position - 0x4AF0
{
	switch (iParam0)
	{
		case 60:
			return 1;
		
		case 61:
			return 2;
		
		case 62:
			return 3;
		
		case 63:
			return 4;
		
		case 64:
			return 5;
		
		case 65:
			return 6;
		
		case 66:
			return 7;
		
		case 67:
			return 8;
		
		case 68:
			return 9;
		
		case 69:
			return 10;
		
		default:
	}
	return 0;
}

void func_176(bool bParam0)//Position - 0x4B67
{
	if (((((func_186(unk_0x9EB17624F44A8DA4()) || func_159()) && !unk_0x8164A5C4CBC21707(unk_0x9EB17624F44A8DA4())) && !func_172()) && !Global_1669401) && func_157(unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502()), unk_0xF0371FE6E2BF9599(iLocal_161), 90f))
	{
		if (unk_0x4916190900E76373())
		{
			func_169("WHSECUROBLCK");
		}
		else if (func_170())
		{
			if (func_186(unk_0x9EB17624F44A8DA4()))
			{
				func_169("BIKERWHBLCKC");
			}
			else
			{
				func_169("BIKERWHBLCKD");
			}
		}
		else if (func_51(unk_0x9EB17624F44A8DA4()))
		{
			if ((func_211(&uLocal_155) && func_207(&uLocal_155, 10000, 1)) || !iLocal_152)
			{
				if (func_177(unk_0x9EB17624F44A8DA4()) || Global_1669401 == 1)
				{
					iLocal_152 = 1;
					if (!Global_1669401)
					{
						func_169("WHSECUROBLCK");
					}
				}
				else
				{
					if (func_183())
					{
						unk_0x3E80C2F7BC665259(1);
					}
					iLocal_152 = 0;
					func_206(&uLocal_155);
					func_182(&iLocal_150, 1, "BIKERWHINPUT", 0, 0, 0, 0);
				}
			}
			else if (iLocal_152)
			{
				if (!unk_0xF491DD47B88AA84E())
				{
					func_169("WHSECUROBLCK");
				}
				if (!func_177(unk_0x9EB17624F44A8DA4()))
				{
					iLocal_152 = 0;
					unk_0x3E80C2F7BC665259(1);
				}
			}
		}
		else if (!bParam0 && func_150() < func_149())
		{
			func_182(&iLocal_150, 1, "BIKERWHBLCKA", 0, 0, 0, 0);
		}
		else
		{
			func_169("BIKERWHBLCKB");
		}
	}
}

bool func_177(int iParam0)//Position - 0x4CD6
{
	return func_178(func_167(iParam0));
}

int func_178(int iParam0)//Position - 0x4CE8
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_179()//Position - 0x4D0E
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_161))
	{
		if (func_208(unk_0x9EB17624F44A8DA4()) || func_180(unk_0x9EB17624F44A8DA4()))
		{
			return 1;
		}
	}
	return 0;
}

int func_180(int iParam0)//Position - 0x4D3D
{
	if (func_187(Global_1595693[iParam0 /*680*/].f_266.f_17, -1))
	{
		return 1;
	}
	return 0;
}

void func_181(bool bParam0)//Position - 0x4D60
{
	if (((func_160() && !unk_0x8164A5C4CBC21707(unk_0x9EB17624F44A8DA4())) && !func_172()) && !Global_1669401)
	{
		if (func_170())
		{
			func_169("WHPRIVSESLAP");
		}
		else if (!bParam0)
		{
			if (func_150() >= func_149())
			{
				func_182(&iLocal_150, 1, "WHSECUROMAXVIP", 0, 0, 0, 0);
			}
			else if (func_145(unk_0x9EB17624F44A8DA4()))
			{
				func_182(&iLocal_150, 1, "PIM_EXECH0x1", 0, 0, 0, 0);
			}
			else if (unk_0x4916190900E76373())
			{
				func_169("WHSECUROBLCK");
			}
			else
			{
				func_182(&iLocal_150, 1, "SECINPUTTREGLAP", 0, 0, 0, 0);
			}
		}
		else if (func_51(unk_0x9EB17624F44A8DA4()))
		{
			func_169("WHBIKERBLCK");
		}
		else if ((func_211(&uLocal_155) && func_207(&uLocal_155, 10000, 1)) || !iLocal_152)
		{
			if (func_212(unk_0x9EB17624F44A8DA4()) || Global_1669401 == 1)
			{
				iLocal_152 = 1;
				if (!Global_1669401)
				{
					func_169("WHSECUROBLCK");
				}
			}
			else
			{
				if (func_183())
				{
					unk_0x3E80C2F7BC665259(1);
				}
				iLocal_152 = 0;
				func_206(&uLocal_155);
				func_182(&iLocal_150, 1, "WHSECUROINPUT", 0, 0, 0, 0);
			}
		}
		else if (iLocal_152)
		{
			if (!unk_0xF491DD47B88AA84E())
			{
				func_169("WHSECUROBLCK");
			}
			if (!func_212(unk_0x9EB17624F44A8DA4()))
			{
				unk_0x3E80C2F7BC665259(1);
				iLocal_152 = 0;
			}
		}
	}
}

void func_182(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x4EBB
{
	int iVar0;
	
	if (unk_0x8F38E94BBF3404CD(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x1E06D00B67177A18())
	{
		if (!*iParam0 == -1)
		{
			func_185(iParam0);
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

int func_183()//Position - 0x4FE6
{
	if (((((((((func_184("MP_OFF_LAP_1") || func_184("WHPRIVSESLAP")) || func_184("WHSECUROBLCK")) || func_184("SECINPUTTREGLAP")) || func_184("BIKERWHINPUT")) || func_184("BIKERWHBLCKA")) || func_184("BIKERWHBLCKB")) || func_184("WHBIKERBLCK")) || func_184("BIKERWHBLCKC")) || func_184("BIKERWHBLCKD"))
	{
		return 1;
	}
	return 0;
}

int func_184(char* sParam0)//Position - 0x507C
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_185(int iParam0)//Position - 0x508F
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_163(*iParam0);
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

int func_186(int iParam0)//Position - 0x50E6
{
	if (func_187(Global_1595693[iParam0 /*680*/].f_266.f_17, -1) && !unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 1))
	{
		return 1;
	}
	return 0;
}

int func_187(int iParam0, int iParam1)//Position - 0x5122
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_188(int iParam0)//Position - 0x51FF
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_189(int iParam0)//Position - 0x522E
{
	if (iParam0 != func_53())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_190(Global_2422736[iParam0 /*420*/].f_324.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_190(int iParam0)//Position - 0x5274
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

int func_191()//Position - 0x5538
{
	return func_198(unk_0x9EB17624F44A8DA4());
}

bool func_192()//Position - 0x5548
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 148;
}

var func_193()//Position - 0x555E
{
	return Global_68216;
}

var func_194()//Position - 0x556A
{
	return Global_1656139;
}

int func_195()//Position - 0x5576
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0x317536BCEA8FA6B0(unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()), -1, 0) == unk_0xFC1458A37D98B502())
		{
			return 1;
		}
	}
	return 0;
}

int func_196()//Position - 0x55A4
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0)//Position - 0x55BE
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

int func_198(int iParam0)//Position - 0x5618
{
	if (iParam0 != func_53())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_53())
		{
			return Global_1627537[iParam0 /*532*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_199()//Position - 0x564D
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_161) && func_189(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	return 0;
}

int func_200(int iParam0)//Position - 0x5670
{
	if (func_187(Global_1595693[iParam0 /*680*/].f_266.f_17, -1))
	{
		return 1;
	}
	return 0;
}

int func_201()//Position - 0x5693
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_161))
	{
		if (unk_0x82FF3DFBC3965CC0(iLocal_161) == 743064848 || func_209(unk_0x9EB17624F44A8DA4()))
		{
			return 1;
		}
	}
	return 0;
}

void func_202(int iParam0)//Position - 0x56C6
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_197(0))
		{
			func_203(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

void func_203(int iParam0)//Position - 0x56EF
{
	if (Global_14615)
	{
		func_205(0, 0);
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
	if (!func_204())
	{
		Global_14453.f_1 = 3;
	}
}

int func_204()//Position - 0x575F
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_205(bool bParam0, bool bParam1)//Position - 0x5786
{
	if (bParam0)
	{
		if (func_197(0))
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

void func_206(var uParam0)//Position - 0x57FA
{
	uParam0->f_1 = 0;
}

int func_207(var uParam0, int iParam1, bool bParam2)//Position - 0x5807
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_210(uParam0, bParam2, 0);
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

int func_208(int iParam0)//Position - 0x5865
{
	if (iParam0 != func_53())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_190(Global_2422736[iParam0 /*420*/].f_324.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_209(int iParam0)//Position - 0x58AB
{
	if (iParam0 != func_53())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_190(Global_2422736[iParam0 /*420*/].f_324.f_1) == 0;
			}
		}
	}
	return 0;
}

void func_210(var uParam0, bool bParam1, bool bParam2)//Position - 0x58F1
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

bool func_211(var uParam0)//Position - 0x5936
{
	return uParam0->f_1;
}

bool func_212(int iParam0)//Position - 0x5942
{
	return func_213(func_167(iParam0));
}

int func_213(int iParam0)//Position - 0x5954
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

bool func_214(int iParam0)//Position - 0x597A
{
	return Global_35861 == iParam0;
}

void func_215()//Position - 0x5988
{
	if (iLocal_150 != -1)
	{
		func_185(&iLocal_150);
	}
	if (((((((((func_184("MP_OFF_LAP_1") || func_184("WHPRIVSESLAP")) || func_184("WHSECUROBLCK")) || func_184("SECINPUTTREGLAP")) || func_184("BIKERWHINPUT")) || func_184("BIKERWHBLCKA")) || func_184("BIKERWHBLCKB")) || func_184("WHBIKERBLCK")) || func_184("BIKERWHBLCKC")) || func_184("BIKERWHBLCKD"))
	{
		unk_0x3E80C2F7BC665259(1);
	}
	Global_1669401 = 0;
	Global_1669400 = 0;
}

