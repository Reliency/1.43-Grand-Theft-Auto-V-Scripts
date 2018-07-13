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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	vector3 vLocal_36 = { 0f, 0f, 0f };
	char cLocal_37[16] = "";
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	char cLocal_40[16] = "";
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 3;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1092616192;
	var uLocal_55 = 1101004800;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 3;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 16;
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
	var uLocal_83 = 0;
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
	var uLocal_96 = 0;
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
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	int iLocal_237 = 0;
	struct<8> Local_238[10];
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	bool bLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	float fLocal_246 = 0f;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0,0375f;
	fLocal_27 = 0,17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	vLocal_36 = { -1078,86f, -2943,56f, 12,95f };
	StringCopy(&cLocal_37, "PMPLANE", 16);
	StringCopy(&cLocal_40, "", 16);
	iLocal_45 = -1;
	unk_0xBC03901A15107317(1);
	if (unk_0x7D9C4B359376D38A(3))
	{
		func_143(2);
		func_142();
	}
	func_137();
	while (true)
	{
		system::wait(0);
		if (func_136())
		{
			iLocal_45 = -1;
		}
		else if (iLocal_45 == -1)
		{
			iLocal_45 = unk_0x53C562FD2B9E3AB0();
		}
		func_1();
	}
}

void func_1()//Position - 0xC8
{
	vector3 vVar0;
	char cVar1[16];
	float fVar2;
	int iVar3;
	
	vVar0 = { -1085,279f, -2970,573f, 12,9457f };
	iLocal_245 = 0;
	if (unk_0x6ADD12BF4D6D2587(iLocal_237))
	{
		if (!unk_0xB8DE76287EDC4957(iLocal_237, 0))
		{
			func_135();
		}
		else if (iLocal_43 == 2)
		{
			if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_237, 0))
			{
				if (!unk_0xA6DECE14FC9A8C51(iLocal_46))
				{
					func_134("BK_PLANE", 7500, 1);
					iLocal_46 = func_133(iLocal_237, 0, 0);
				}
				if (func_132(unk_0xFC1458A37D98B502(), iLocal_237, 1) > 300f)
				{
					func_135();
				}
			}
			else if (unk_0xA6DECE14FC9A8C51(iLocal_46))
			{
				unk_0x84CDD933AFA470D2();
				unk_0xE30CF11C0EE14316(&iLocal_46);
			}
		}
	}
	if ((((unk_0x6ADD12BF4D6D2587(iLocal_237) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_237, 0)) && unk_0x0ACC2116170FA204(iLocal_237)) && iLocal_241) && unk_0x1CF95440F1970B4F("PLANES", false, -1))
	{
		if (!bLocal_242)
		{
			if (unk_0xE8C126B7ADBB9D63(0, 114))
			{
				if (iLocal_240 == -1 || (unk_0x53C562FD2B9E3AB0() - iLocal_240) > 2000)
				{
					if (!unk_0xE0B0126B4689CB72(iLocal_248))
					{
						iLocal_248 = unk_0x1E3116EEB28D5F17("scr_property_leaflet_drop", iLocal_237, 0f, -2f, -0,65f, 0f, 0f, 0f, 1f, 0, 0, 0);
						fLocal_246 = 0f;
					}
					if (func_131("LEAFLET"))
					{
						unk_0x3E80C2F7BC665259(1);
					}
					unk_0x7CC4363AEEF7EF34(-1, "PROPERTIES_PLANE_PROMO_MASTER", iLocal_237, 0, 0, 0);
					iLocal_240 = unk_0x53C562FD2B9E3AB0();
					bLocal_242 = true;
				}
			}
		}
		else if ((unk_0x53C562FD2B9E3AB0() - iLocal_240) > 3000)
		{
			bLocal_242 = false;
		}
	}
	else if (unk_0xE0B0126B4689CB72(iLocal_248))
	{
		unk_0x990DE45B7A2B6426(iLocal_248, 0);
		fLocal_246 = 0f;
	}
	if (unk_0xE0B0126B4689CB72(iLocal_248))
	{
		if (bLocal_242)
		{
			fVar2 = 1f;
		}
		else
		{
			fVar2 = -1f;
		}
		fLocal_246 = (fLocal_246 + ((fVar2 * system::timestep()) * 100f));
		fLocal_246 = func_130(fLocal_246, 0f, 1f);
		unk_0x377398EA9C594825(iLocal_248, "spawn", fLocal_246, 0);
	}
	switch (iLocal_43)
	{
		case 0:
			unk_0x6FF834D85E2DD4C6(joaat("stunt"));
			if (unk_0x9A0B2ED5055D3F0B(joaat("stunt")))
			{
				iLocal_237 = Global_103265.f_222[0];
				if (!unk_0x6ADD12BF4D6D2587(iLocal_237))
				{
					iLocal_237 = unk_0xEA60F3B426BB095B(joaat("stunt"), vVar0, 121,2244f, true, true, false);
					unk_0xACE486395AA1867D(iLocal_237, 1084227584);
				}
				else
				{
					unk_0xDD29FF4BAB8AFF9C(iLocal_237, true, 1);
				}
				unk_0x14776E43F90DD454(joaat("stunt"));
				unk_0x84CDD933AFA470D2();
				func_134("GET_PLANE", 7500, 1);
				iLocal_46 = func_133(iLocal_237, 0, 0);
				unk_0x36905B9EE07F38CC();
				func_127(&iLocal_47, 1, 0);
				iLocal_43++;
			}
			break;
		
		case 1:
			if (unk_0x6ADD12BF4D6D2587(iLocal_237) && unk_0xB8DE76287EDC4957(iLocal_237, 0))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_237, 0))
				{
					unk_0x84CDD933AFA470D2();
					func_134("TAKEOFF", 7500, 1);
					if (unk_0xA6DECE14FC9A8C51(iLocal_46))
					{
						unk_0xE30CF11C0EE14316(&iLocal_46);
					}
					func_74(-1021,522f, -2986,142f, 12,9519f, 341,6539f, 0, 145);
					iLocal_43++;
				}
			}
			break;
		
		case 2:
			iVar3 = 0;
			while (iVar3 < Local_238)
			{
				if (func_70(&(Local_238[iVar3 /*8*/])))
				{
					iLocal_239++;
				}
				iVar3++;
			}
			if ((10 - iLocal_239) <= 0)
			{
				iLocal_43++;
			}
			break;
		
		case 3:
			if (func_24(&iLocal_47, vLocal_36, -1067,083f, -2922,601f, 12,82418f, -1091,854f, -2965,403f, 23,94564f, 31,5625f, 1, iLocal_237, "LAND", "", "BK_PLANE", 1, 0, 1, -1) && !unk_0x0ACC2116170FA204(iLocal_237))
			{
				func_127(&iLocal_47, 1, 0);
				iLocal_43++;
			}
			break;
		
		case 4:
			if (func_22(iLocal_237, 1093140480, 1, 0f, 0, 1, 0))
			{
				iLocal_43++;
			}
			break;
		
		case 5:
			unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 0);
			unk_0xCF5EB2CB1B30F02C(iLocal_237, 0);
			func_21();
			break;
	}
	switch (iLocal_44)
	{
		case 0:
			if ((10 - iLocal_239) <= 0)
			{
				iLocal_44++;
			}
			else if ((func_20() && (unk_0x53C562FD2B9E3AB0() - iLocal_45) > 5000) && iLocal_245)
			{
				StringCopy(&cVar1, "RAND_", 16);
				StringConCat(&cVar1, &cLocal_40, 16);
				if (func_19(49) && unk_0x63A6486593EC7EC3(0, 3) == 0)
				{
					StringConCat(&cVar1, "M", 16);
				}
				else if (iLocal_247 > 0)
				{
					StringIntConCat(&cVar1, iLocal_247 + 1, 16);
				}
				if (func_2(&uLocal_72, &cLocal_37, &cVar1, 8, 0, 0, 0))
				{
					iLocal_247++;
					if (iLocal_247 >= 6)
					{
						iLocal_247 = 0;
					}
					StringCopy(&cVar1, "", 16);
				}
			}
			break;
		
		case 1:
			if (func_20() && (unk_0x53C562FD2B9E3AB0() - iLocal_45) > 1000)
			{
				if (func_2(&uLocal_72, &cLocal_37, "DONE", 8, 0, 0, 0))
				{
					StringCopy(&cVar1, "", 16);
					iLocal_44++;
				}
			}
			break;
	}
}

bool func_2(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x568
{
	func_18(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_3(sParam2, iParam3, 0);
}

int func_3(char* sParam0, int iParam1, bool bParam2)//Position - 0x5B6
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
					func_17();
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
		if (func_16(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_15();
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
				func_8();
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
				if (func_7())
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
			if (func_6())
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
			func_5();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_4();
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
		func_17();
	}
	return 0;
}

void func_4()//Position - 0x882
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

void func_5()//Position - 0x8B3
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

int func_6()//Position - 0x948
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_7()//Position - 0x96F
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

void func_8()//Position - 0xA08
{
	if (func_14(14))
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
		Global_14453 = func_9();
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

var func_9()//Position - 0xAAA
{
	func_10();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_10()//Position - 0xAC3
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_13(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_12(unk_0xFC1458A37D98B502());
			if (func_11(iVar0) && (!func_14(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_11(Global_104555.f_2353.f_539.f_4301))
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

bool func_11(int iParam0)//Position - 0xBC0
{
	return iParam0 < 3;
}

int func_12(int iParam0)//Position - 0xBCC
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_13(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_13(int iParam0)//Position - 0xC09
{
	if (func_11(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_14(int iParam0)//Position - 0xC33
{
	return Global_35861 == iParam0;
}

void func_15()//Position - 0xC41
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

bool func_16(int iParam0, int iParam1)//Position - 0xC98
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

void func_17()//Position - 0xCD3
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

void func_18(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0xD2A
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

int func_19(int iParam0)//Position - 0xD80
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_330[iParam0 /*6*/];
}

int func_20()//Position - 0xDAC
{
	if (func_136())
	{
		return 0;
	}
	if (unk_0x248C9865A96D3EA4())
	{
		if (unk_0x23F2F89E3D1CB7C4())
		{
			return 0;
		}
	}
	return 1;
}

void func_21()//Position - 0xDD2
{
	func_143(1);
	func_142();
}

int func_22(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xDE3
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
	func_23(iParam0);
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

void func_23(int iParam0)//Position - 0xF72
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

int func_24(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, int iParam11, bool bParam12, int iParam13)//Position - 0xF9E
{
	return func_25(iParam0, vParam1, func_69(), vParam2, vParam3, bParam5, 5, 0, 0, 0, iParam6, sParam7, func_68(), func_68(), func_68(), func_68(), sParam8, 0, bParam10, sParam9, 1, iParam11, bParam12, iParam13, func_68(), func_68(), func_68(), 1, fParam4);
}

int func_25(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, var uParam24, var uParam25, var uParam26, bool bParam27, float fParam28)//Position - 0xFF3
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vVar3 = { vParam1 + Vector(1f, 0f, 0f) };
	iParam0->f_17[0] = iParam7;
	iParam0->f_17[1] = iParam8;
	iParam0->f_17[2] = iParam9;
	iParam0->f_16 = iParam7;
	func_67(iParam0);
	func_66(iParam0);
	func_65();
	if (func_48(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, uParam24, uParam25, uParam26, iParam6, bParam18))
	{
		func_47(sParam12);
		func_47(sParam13);
		func_47(sParam14);
		func_47(sParam15);
		if (unk_0x9F7B586A14398C40())
		{
			bVar1 = false;
			if (unk_0xB8DE76287EDC4957(iParam10, 0))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam10, 0))
				{
					unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 3);
					if (!unk_0xC80D31E4B587871C(iParam0->f_13, 9))
					{
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 4);
					}
					if (unk_0xC80D31E4B587871C(iParam0->f_13, 23))
					{
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 23);
					}
					unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_45(iParam0, iParam21))
				{
					unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 3);
					if (!unk_0xC80D31E4B587871C(iParam0->f_13, 9))
					{
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 4);
					}
					unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_47(sParam16);
				func_47(sParam19);
				func_47("MORE_SEATS");
				if (bParam18 && unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
				{
					if (unk_0xA6DECE14FC9A8C51(iParam0->f_5))
					{
						unk_0xE30CF11C0EE14316(&(iParam0->f_5));
						func_47(sParam11);
					}
					if (unk_0xA6DECE14FC9A8C51(*iParam0))
					{
						unk_0xE30CF11C0EE14316(iParam0);
					}
					if ((!func_42(iParam0, 1) && !func_41(iParam0)) && !unk_0xC80D31E4B587871C(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_40(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[0]))
							{
								func_38(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 0);
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xC80D31E4B587871C(iParam0->f_13, 0))
					{
						func_47("LOSE_WANTED");
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 0);
						unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 1);
					}
					if (unk_0xC80D31E4B587871C(iParam0->f_13, 1))
					{
						if (!func_42(iParam0, 1))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[0]))
							{
								func_38(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 1);
						}
					}
					if (!unk_0xA6DECE14FC9A8C51(iParam0->f_5))
					{
						if (unk_0xA6DECE14FC9A8C51(*iParam0))
						{
							unk_0xE30CF11C0EE14316(iParam0);
						}
						iParam0->f_5 = func_37(vVar3, 0);
						if (!iParam23 == -1)
						{
							unk_0x4B4040A0EC7DBA81(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_36(iParam0->f_5, iParam0);
						}
					}
					else if (!func_35(vVar3, unk_0x67247AA13B7486A3(iParam0->f_5), 0,1f, 0))
					{
						unk_0x645FF8D8B599FD84(iParam0->f_5, vVar3);
						if (bParam27)
						{
							func_36(iParam0->f_5, iParam0);
						}
					}
					if (!func_42(iParam0, 2))
					{
						if (!unk_0xC80D31E4B587871C(iParam0->f_13, 2))
						{
							func_40(iParam0, sParam11, 0);
							unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (unk_0xC80D31E4B587871C(iParam0->f_13, 13))
						{
							bParam5 = false;
						}
					}
					bVar1 = false;
					bVar4 = false;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						bVar4 = true;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vParam1, vParam2, bParam5, bVar4, iVar5);
						if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vParam3, vParam4, fParam28, 0, bVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vParam1, vParam2, bParam5, bVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
									if (!unk_0xA8D0477084E86A92(iParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!unk_0xA8D0477084E86A92(iParam0->f_17[iVar2], iParam10, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x4759A34EB65CCA39(iParam0->f_17[iVar2], func_34()) || !func_32(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_29(iParam0))
							{
								func_47(sParam11);
								func_47(sParam16);
								func_47(sParam12);
								func_47(sParam13);
								func_47(sParam14);
								func_47(sParam15);
								func_47("LOSE_WANTED");
								func_47("MORE_SEATS");
								func_47(sParam19);
								func_127(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0x6ADD12BF4D6D2587(iParam10))
			{
				if ((bParam18 && unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) && (!unk_0xC80D31E4B587871C(iParam0->f_13, 9) && !unk_0xC80D31E4B587871C(iParam0->f_13, 22)))
				{
					func_47(sParam16);
					func_47(sParam19);
					if (unk_0xA6DECE14FC9A8C51(iParam0->f_5) || unk_0xA6DECE14FC9A8C51(*iParam0))
					{
						unk_0xE30CF11C0EE14316(&(iParam0->f_5));
						unk_0xE30CF11C0EE14316(iParam0);
						func_47(sParam11);
					}
					if ((!func_42(iParam0, 1) && !func_41(iParam0)) && !unk_0xC80D31E4B587871C(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_40(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[0]))
							{
								func_38(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 0);
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xC80D31E4B587871C(iParam0->f_13, 0))
					{
						func_47("LOSE_WANTED");
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 0);
						unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 1);
					}
					if (unk_0xC80D31E4B587871C(iParam0->f_13, 1))
					{
						if (!func_42(iParam0, 1))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[0]))
							{
								func_38(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 1);
						}
					}
					if (unk_0xB8DE76287EDC4957(iParam10, 0))
					{
						if (!unk_0xA6DECE14FC9A8C51(*iParam0))
						{
							if (unk_0xA6DECE14FC9A8C51(iParam0->f_5))
							{
								unk_0xE30CF11C0EE14316(&(iParam0->f_5));
								func_47(sParam11);
							}
							*iParam0 = func_26(iParam10, 0, 0);
							unk_0x3ED68ABD7299EAA3(*iParam0, 2);
							if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
							{
								func_36(*iParam0, iParam0);
							}
						}
						if (!func_42(iParam0, 2))
						{
							if (!unk_0xC80D31E4B587871C(iParam0->f_13, 3))
							{
								func_40(iParam0, sParam16, 0);
								unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 3);
								unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 4);
							}
							else if (unk_0xC80D31E4B587871C(iParam0->f_13, 9))
							{
								if (!unk_0x8C1C362CA8299475(sParam19))
								{
									if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
									{
										func_40(iParam0, sParam19, 0);
										unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 4);
									}
								}
								else if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
								{
									func_40(iParam0, sParam16, 0);
									unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 4);
								}
								if (!unk_0xC80D31E4B587871C(iParam0->f_13, 23))
								{
									if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[0]))
									{
										func_38(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xA6DECE14FC9A8C51(iParam0->f_5))
				{
					unk_0xE30CF11C0EE14316(&(iParam0->f_5));
					func_47(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_42(iParam0, 2))
						{
							if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
							{
								if (!unk_0xC80D31E4B587871C(iParam0->f_13, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = unk_0x63A6486593EC7EC3(0, iVar6);
									if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[iVar7]))
									{
										func_38(iParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_40(iParam0, "MORE_SEATS", 0);
									unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 13);
								}
							}
							else if (!unk_0xC80D31E4B587871C(iParam0->f_13, 3))
							{
								func_40(iParam0, sParam16, 0);
								unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 3);
								unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 4);
							}
							else if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
							{
								if (unk_0xC80D31E4B587871C(iParam0->f_13, 9))
								{
									func_40(iParam0, sParam19, 0);
									unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_42(iParam0, 2))
					{
						if (!unk_0xC80D31E4B587871C(iParam0->f_13, 3))
						{
							func_40(iParam0, sParam16, 0);
							unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 3);
							unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 4);
						}
						else if (unk_0xC80D31E4B587871C(iParam0->f_13, 9))
						{
							if (!unk_0x8C1C362CA8299475(sParam19))
							{
								if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
								{
									func_40(iParam0, sParam19, 0);
									unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 4);
								}
							}
							else if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
							{
								func_40(iParam0, sParam16, 0);
								unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xC80D31E4B587871C(iParam0->f_13, 0))
		{
			unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 0);
		}
		func_47(sParam11);
		func_47(sParam16);
		func_47(sParam19);
		func_47(sParam16);
		func_47("LOSE_WANTED");
		if (unk_0xA6DECE14FC9A8C51(iParam0->f_5))
		{
			unk_0xE30CF11C0EE14316(&(iParam0->f_5));
		}
		if (unk_0xA6DECE14FC9A8C51(*iParam0))
		{
			unk_0xE30CF11C0EE14316(iParam0);
		}
	}
	unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 11);
	unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 12);
	return 0;
}

int func_26(int iParam0, bool bParam1, bool bParam2)//Position - 0x194C
{
	return func_27(iParam0, !bParam1, bParam2);
}

int func_27(int iParam0, bool bParam1, bool bParam2)//Position - 0x195F
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_28(unk_0x3A711520F83BAE98(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
		}
		else
		{
			unk_0x0C71C8E276E3EC54(iVar0, 2);
		}
	}
	else if (unk_0x52C56492660097C7(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_28(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_28(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_28(bool bParam0, float fParam1, float fParam2)//Position - 0x1A03
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_29(int iParam0)//Position - 0x1A1A
{
	if (unk_0xC80D31E4B587871C(iParam0->f_13, 12))
	{
		if (func_31(unk_0xFC1458A37D98B502()))
		{
			if (func_30(1, 0, 1) || unk_0xC80D31E4B587871C(iParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_30(1, 0, 1) || unk_0xC80D31E4B587871C(iParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_30(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1A78
{
	int iVar0;
	
	if (unk_0x586321DCB7FEB6F8())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
		{
			return 0;
		}
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (bParam0)
		{
			if (unk_0x191BE1BC8F26F3C1(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
			{
				if (unk_0x317536BCEA8FA6B0(iVar0, -1, 0) != unk_0xFC1458A37D98B502())
				{
					return 0;
				}
			}
		}
		if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
		{
			if (unk_0x56BEE1F269FB3626(iVar0) < 0,95f || unk_0x56BEE1F269FB3626(iVar0) > 1,011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (!unk_0x217D75C7503660EC(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_31(int iParam0)//Position - 0x1B5D
{
	float fVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		fVar0 = unk_0x90D5DFB054818BA7(iParam0);
		if (fVar0 > -0,5f && fVar0 < 0,5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_32(int iParam0, int iParam1)//Position - 0x1B94
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()) && iParam1)
		{
			if (func_33(unk_0xFC1458A37D98B502(), iParam0))
			{
				unk_0xB2442651179CF706(func_34(), 50f);
				return 1;
			}
		}
		else if (unk_0x4759A34EB65CCA39(iParam0, func_34()))
		{
			unk_0xB2442651179CF706(func_34(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0, int iParam1)//Position - 0x1BFF
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x1ED974E122CB5C47(iParam0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(iParam0, 0);
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iParam1))
				{
					if (unk_0xAAA8D20859E2D36D(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_34()//Position - 0x1C47
{
	return unk_0x7C65CFD05F3B9CE9(unk_0x98EC0789D9F0703B());
}

int func_35(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x1C57
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

void func_36(int iParam0, int iParam1)//Position - 0x1CD2
{
	if (unk_0xA6DECE14FC9A8C51(iParam0))
	{
		if (unk_0xA6DECE14FC9A8C51(iParam1->f_6))
		{
			unk_0xAAAC88CC20771601(iParam1->f_6, false);
		}
		unk_0xF906FCF8A11CBA9A(0);
		unk_0x981B8A90686AD23E();
		iParam1->f_6 = iParam0;
		unk_0xAAAC88CC20771601(iParam0, true);
	}
}

int func_37(vector3 vParam0, bool bParam1)//Position - 0x1D0D
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_28(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(iVar0, bParam1);
	return iVar0;
}

void func_38(int iParam0, char* sParam1, int iParam2)//Position - 0x1D39
{
	unk_0x74D45BB07BD51F8B(iParam0, sParam1, func_39(iParam2), 1);
}

int func_39(int iParam0)//Position - 0x1D50
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_40(int iParam0, char* sParam1, bool bParam2)//Position - 0x1F44
{
	if (!bParam2)
	{
		if (!unk_0x8C1C362CA8299475(sParam1))
		{
			if (!unk_0x74C475EB8E73D398(sParam1, ""))
			{
				func_134(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_10 = unk_0x53C562FD2B9E3AB0();
}

int func_41(int iParam0)//Position - 0x1F7B
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_16))
	{
		if (unk_0x33B1D0D0C92D4F18(iParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_42(int iParam0, int iParam1)//Position - 0x1F9F
{
	if (iParam1 != 1 || unk_0x248C9865A96D3EA4())
	{
		if (unk_0x23F2F89E3D1CB7C4())
		{
			return 1;
		}
		if (func_44(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x248C9865A96D3EA4())
	{
		if (func_136() && !func_43())
		{
			return 1;
		}
	}
	return 0;
}

int func_43()//Position - 0x1FF7
{
	if (Global_16767 == 1)
	{
		return 1;
	}
	return 0;
}

int func_44(var uParam0)//Position - 0x200E
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x53C562FD2B9E3AB0();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_45(var uParam0, int iParam1)//Position - 0x2031
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (func_46(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_46(int iParam0, var uParam1, int iParam2)//Position - 0x2062
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x6ADD12BF4D6D2587(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x95EC8AE7E4F33F6E(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x0CAAAC6B57530706(iParam0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0x0CAAAC6B57530706(iParam0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_47(char* sParam0)//Position - 0x20F6
{
	if (!unk_0x8C1C362CA8299475(sParam0))
	{
		unk_0x166954C5648772B6(sParam0);
	}
}

int func_48(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x210E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	vector3 vVar19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar12[0] = uParam4;
	uVar12[1] = uParam5;
	uVar12[2] = uParam6;
	uVar13[0] = uParam13;
	uVar13[1] = uParam14;
	uVar13[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
		{
			if (!unk_0xC80D31E4B587871C(uParam0->f_13, 29) && !unk_0xC80D31E4B587871C(uParam0->f_13, 28))
			{
				if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
				{
					unk_0xD0A6028E561242DA(uParam0->f_17[iVar0], true, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0xC80D31E4B587871C(uParam0->f_13, 29) && unk_0xC80D31E4B587871C(uParam0->f_13, 28))
		{
			if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
			{
				unk_0xD0A6028E561242DA(uParam0->f_17[iVar0], false, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(uParam0->f_13, 26))
	{
		bVar14 = false;
		if (!unk_0x6ADD12BF4D6D2587(uParam0->f_21))
		{
			iVar16 = 64;
			iVar16 |= 65536;
			iVar16 |= 2048;
			iVar16 |= 1;
			iVar16 |= 2;
			iVar16 |= 4;
			iVar16 |= 32;
			iVar16 |= 16;
			iVar16 |= 8;
			iVar15 = unk_0x87889570F3396ABD(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 50f, 0, iVar16);
			if (unk_0xB8DE76287EDC4957(iVar15, 0))
			{
				uParam0->f_21 = iVar15;
			}
		}
		if (unk_0xB8DE76287EDC4957(uParam0->f_21, 0))
		{
			if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
				{
					if (!unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0) || !bParam17)
					{
						if (func_46(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
								{
									unk_0x5C57ECBE59C08573(uParam0->f_17[iVar0], 1f);
									if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_34()))
									{
										unk_0x88235B448509228B(uParam0->f_17[iVar0]);
									}
									if (unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], -1794415470) == 7 && !func_64(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x9F887157983E8EFC(uParam0->f_17[iVar0]) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0]))
										{
											unk_0x771A86309E0CA47B(uParam0->f_17[iVar0], true);
											unk_0x6F8C8278B7C06889(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0xF6A83791895D5AA1(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar14 = true;
						}
					}
					else
					{
						bVar14 = true;
					}
				}
				else
				{
					bVar14 = true;
				}
			}
			else
			{
				bVar14 = true;
			}
		}
		else
		{
			bVar14 = true;
		}
		if (bVar14)
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
				{
					if (!unk_0x0F299BBD0DC14B18(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0xB8E08BD5B184DF4E(uParam0->f_17[iVar0]);
					}
					if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_34()))
					{
						if (func_62(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							unk_0x57FB41CABA25835C(uParam0->f_17[iVar0], func_34());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xC80D31E4B587871C(uParam0->f_13, 26))
	{
		if ((!func_61(uParam0) && unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502())) && !unk_0x6ADD12BF4D6D2587(iParam10))
		{
			iVar10 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (unk_0xB8DE76287EDC4957(iVar10, 0))
			{
				if (!unk_0xC80D31E4B587871C(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_42(uParam0, 2))
					{
						iVar17 = 0;
						iVar18 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = unk_0x63A6486593EC7EC3(0, iVar17);
						if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar18]))
						{
							func_38(uParam0->f_17[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_40(uParam0, "MORE_SEATS", 0);
						unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 13);
					}
				}
				bVar9 = true;
			}
		}
		else
		{
			bVar9 = false;
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 13);
			func_47("MORE_SEATS");
		}
		if (!unk_0x6ADD12BF4D6D2587(iParam10))
		{
			if ((!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[0]) || !unk_0x3AB6A1A9084FB0A4(uParam0->f_17[1])) || !unk_0x3AB6A1A9084FB0A4(uParam0->f_17[2]))
			{
				if (!unk_0xC80D31E4B587871C(uParam0->f_13, 31))
				{
					if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()) && !func_42(uParam0, 2))
					{
						iVar10 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
						if (func_60(iVar10, uParam0))
						{
							func_40(uParam0, "CMN_VEHSUIT", 0);
							unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
				{
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 31);
					func_47("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xB8DE76287EDC4957(iParam10, 0))
		{
			if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iParam10))
			{
				if (unk_0xE8C126B7ADBB9D63(0, 75))
				{
					unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0xC80D31E4B587871C(uParam0->f_13, 21))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x6ADD12BF4D6D2587(uParam0->f_17[iVar0]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
				{
					if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_34()))
					{
						unk_0xFF96DC2FA12B7785(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0xFF96DC2FA12B7785(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
					{
						iVar10 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
						if (unk_0xB8DE76287EDC4957(iVar10, 0))
						{
							if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_34()))
							{
								if (!func_61(uParam0) && unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
								{
									if (!func_59(uParam0->f_17[iVar0]))
									{
										unk_0x88235B448509228B(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !unk_0x191BE1BC8F26F3C1(iVar10, 0))
						{
							if (unk_0xAAA8D20859E2D36D(uParam0->f_17[iVar0], iVar10))
							{
								if (unk_0x0BA31FF7931F3DD3(iVar10) && !unk_0x5E0BEAAD15B888F3(iVar10))
								{
									vVar19 = { unk_0xB3328BA8976B416C(iVar10, 1) };
									if (vVar19.z < -1f)
									{
										unk_0x4F8A35D7CBC17327(uParam0->f_17[iVar0], iVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_34()))
					{
						if (unk_0x1ED974E122CB5C47(uParam0->f_17[iVar0]))
						{
							iVar10 = unk_0xDFD115BB10FE46A9(uParam0->f_17[iVar0], 0);
							if (!unk_0x191BE1BC8F26F3C1(iVar10, 0))
							{
								if (unk_0xB8DE76287EDC4957(iParam10, 0))
								{
									if (iVar10 != iParam10)
									{
										if (!unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iVar10))
										{
											if (unk_0x90D5DFB054818BA7(iVar10) > 5f)
											{
												unk_0x4F8A35D7CBC17327(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x4F8A35D7CBC17327(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
									{
										iVar20 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
									}
									if (unk_0xB8DE76287EDC4957(iVar20, 0))
									{
										if (iVar10 != iVar20)
										{
											if (unk_0x90D5DFB054818BA7(iVar10) > 5f)
											{
												unk_0x4F8A35D7CBC17327(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x4F8A35D7CBC17327(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_34()))
					{
						iVar21 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
						if (unk_0x6ADD12BF4D6D2587(iVar21))
						{
							if (func_46(iVar21, uParam0, 0))
							{
								if (func_58(iVar0, uParam0) || !unk_0xC80D31E4B587871C(uParam0->f_13, 27))
								{
									unk_0xF6A83791895D5AA1(uParam0->f_17[iVar0], iVar0);
									func_57(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_58(iVar0, uParam0))
							{
								if (unk_0x82FF3DFBC3965CC0(iVar21) == joaat("sentinel2"))
								{
									unk_0xF6A83791895D5AA1(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0xF6A83791895D5AA1(uParam0->f_17[iVar0], 2);
								}
								func_56(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_34()) && !func_55(uParam0->f_17[iVar0], iParam10)) && !func_54(uParam0->f_17[iVar0], iParam10))
					{
						if (func_62(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_34()))
							{
								if (((!unk_0x9F887157983E8EFC(uParam0->f_17[iVar0]) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0])) && !unk_0xE4A3B62790C25748(uParam0->f_17[iVar0])) && !unk_0x0F299BBD0DC14B18(uParam0->f_17[iVar0]))
								{
									iVar11 = unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7)
									{
										unk_0xB8E08BD5B184DF4E(uParam0->f_17[iVar0]);
									}
									unk_0x57FB41CABA25835C(uParam0->f_17[iVar0], func_34());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x53C562FD2B9E3AB0();
								uParam0->f_1[iVar0] = func_26(uParam0->f_17[iVar0], 0, 0);
								unk_0x3ED68ABD7299EAA3(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_36(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
					{
						if (((func_32(uParam0->f_17[iVar0], 1) || func_55(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0xB8DE76287EDC4957(iParam10, 0) && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam10, 0)))
						{
							if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
							{
								unk_0xE30CF11C0EE14316(&(uParam0->f_1[iVar0]));
								func_47(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_36(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0xB8DE76287EDC4957(iParam10, 0))
					{
						if (!unk_0xAAA8D20859E2D36D(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x21B6FFFD04C9FF3A(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0xC80D31E4B587871C(uParam0->f_13, 11)) && !((bParam17 && unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam10, 0)))
							{
								if (unk_0x1ED974E122CB5C47(uParam0->f_17[iVar0]))
								{
									if (!unk_0xA8D0477084E86A92(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_32(uParam0->f_17[iVar0], 1))
										{
											if (func_31(uParam0->f_17[iVar0]))
											{
												iVar11 = unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], 451360105);
												if (iVar11 == 7)
												{
													unk_0x16416C5B54FDBCBB(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_34()))
									{
										if ((((!unk_0xE4A3B62790C25748(uParam0->f_17[iVar0]) && !unk_0x9F887157983E8EFC(uParam0->f_17[iVar0])) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0])) && !unk_0x0F299BBD0DC14B18(uParam0->f_17[iVar0])) && !unk_0x6B4C37F2EEC636CC(iParam10))
										{
											unk_0x88235B448509228B(uParam0->f_17[iVar0]);
										}
									}
									iVar11 = unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7 && !func_64(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0xE4A3B62790C25748(uParam0->f_17[iVar0]) && !unk_0xE4A3B62790C25748(unk_0xFC1458A37D98B502())) && !func_53(uParam0->f_17[iVar0], 2f)) && !unk_0x9F887157983E8EFC(uParam0->f_17[iVar0])) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0])) && !unk_0x6B4C37F2EEC636CC(iParam10))
										{
											unk_0x771A86309E0CA47B(uParam0->f_17[iVar0], true);
											if (unk_0xC80D31E4B587871C(uParam0->f_13, 10))
											{
												unk_0x5C57ECBE59C08573(uParam0->f_17[iVar0], 1f);
											}
											unk_0x6F8C8278B7C06889(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0x07224EEE13A1B6AE(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_26(uParam0->f_17[iVar0], 0, 0);
										unk_0x3ED68ABD7299EAA3(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_34()))
							{
								if (func_62(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!unk_0x9F887157983E8EFC(uParam0->f_17[iVar0]) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0]))
									{
										iVar11 = unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], -1794415470);
										if (iVar11 == 7)
										{
											unk_0xB8E08BD5B184DF4E(uParam0->f_17[iVar0]);
										}
										unk_0x771A86309E0CA47B(uParam0->f_17[iVar0], false);
										unk_0x57FB41CABA25835C(uParam0->f_17[iVar0], func_34());
									}
								}
							}
						}
						else if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iParam10))
						{
							if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_34()))
							{
								if (!unk_0xC80D31E4B587871C(uParam0->f_13, 21))
								{
									unk_0x57FB41CABA25835C(uParam0->f_17[iVar0], func_34());
								}
							}
							else if (unk_0xC80D31E4B587871C(uParam0->f_13, 21))
							{
								unk_0x88235B448509228B(uParam0->f_17[iVar0]);
								unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_34()) && !unk_0x6B4C37F2EEC636CC(iParam10))
						{
							unk_0x88235B448509228B(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
				{
					unk_0xE30CF11C0EE14316(&(uParam0->f_1[iVar0]));
					func_47(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_42(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
						{
							if (func_59(uParam0->f_17[iVar0]) || unk_0x21B6FFFD04C9FF3A(uParam0->f_17[iVar0], unk_0xFC1458A37D98B502(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
					{
						if (!unk_0x21B6FFFD04C9FF3A(uParam0->f_17[iVar0], unk_0xFC1458A37D98B502(), (uParam0->f_8 * 0,85f), (uParam0->f_8 * 0,85f), uParam0->f_8, 0, 1, 0) && !func_59(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x53C562FD2B9E3AB0();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xC80D31E4B587871C(uParam0->f_13, 5))
							{
								func_40(uParam0, sParam7, 0);
								unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_52(iVar0, uParam0))
									{
										if (!unk_0x8C1C362CA8299475(uVar13[iVar0]))
										{
											if (!unk_0x74C475EB8E73D398(uVar13[iVar0], ""))
											{
												func_50(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_49(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_52(iVar0, uParam0))
										{
											func_40(uParam0, uVar12[iVar0], 0);
											func_49(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 10);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
				{
					unk_0xE30CF11C0EE14316(&(uParam0->f_1[iVar0]));
					func_47(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_47("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_49(int iParam0, var uParam1)//Position - 0x317E
{
	switch (iParam0)
	{
		case 0:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 16);
			break;
	}
}

void func_50(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x31C6
{
	if (!bParam3)
	{
		if (!unk_0x8C1C362CA8299475(sParam1))
		{
			if (!unk_0x74C475EB8E73D398(sParam1, ""))
			{
				func_51(sParam1, sParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x53C562FD2B9E3AB0();
}

void func_51(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x31FF
{
	iParam3 = iParam3;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0xA6D2B267C377D7B2(sParam1);
	unk_0x4D0B431E65A53BFC(iParam2, 1);
}

int func_52(int iParam0, var uParam1)//Position - 0x321E
{
	switch (iParam0)
	{
		case 0:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 14);
		
		case 1:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 15);
		
		case 2:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_53(int iParam0, float fParam1)//Position - 0x3267
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(iParam0, 0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(iParam0, 0);
		if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
		{
			if (unk_0x90D5DFB054818BA7(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_54(int iParam0, int iParam1)//Position - 0x329E
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (!unk_0x4759A34EB65CCA39(iParam0, func_34()))
		{
			iVar0 = unk_0x0191A52225EFA665(iParam0);
			if (unk_0xB8DE76287EDC4957(iParam1, 0))
			{
				if (unk_0x21B6FFFD04C9FF3A(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_55(int iParam0, int iParam1)//Position - 0x3305
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(iParam1))
		{
			if (unk_0xB8DE76287EDC4957(iParam1, 0))
			{
				if (unk_0xAAA8D20859E2D36D(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_56(int iParam0, var uParam1)//Position - 0x333A
{
	switch (iParam0)
	{
		case 0:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 19);
			break;
	}
}

void func_57(int iParam0, var uParam1)//Position - 0x3382
{
	switch (iParam0)
	{
		case 0:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 19);
			break;
	}
}

int func_58(int iParam0, var uParam1)//Position - 0x33CA
{
	switch (iParam0)
	{
		case 0:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 17);
		
		case 1:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 18);
		
		case 2:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_59(int iParam0)//Position - 0x3413
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		iVar0 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
		if (unk_0xB8DE76287EDC4957(iVar0, 0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iParam0))
			{
				iVar1 = unk_0xC6757F745366DB47(iParam0);
				if (unk_0xB8DE76287EDC4957(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x21B6FFFD04C9FF3A(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_60(int iParam0, var uParam1)//Position - 0x34A0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (unk_0x82FF3DFBC3965CC0(iParam0) == joaat("bus") || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x3AB6A1A9084FB0A4(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0x317536BCEA8FA6B0(iParam0, 0, 0);
			if (!unk_0x3AB6A1A9084FB0A4(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0x317536BCEA8FA6B0(iParam0, 1, 0);
			if (!unk_0x3AB6A1A9084FB0A4(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0x317536BCEA8FA6B0(iParam0, 2, 0);
			if (!unk_0x3AB6A1A9084FB0A4(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61(var uParam0)//Position - 0x3600
{
	int iVar0;
	
	if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (func_46(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_62(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x362F
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam1))
	{
		if (unk_0x1ED974E122CB5C47(iParam1))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(iParam1, 0);
			if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
			{
				if (unk_0xB8DE76287EDC4957(iVar0, 0))
				{
					if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iVar0))
					{
						if (func_61(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (func_46(iVar0, uParam0, 0))
					{
						if (unk_0xB8DE76287EDC4957(iVar0, 0))
						{
							if (func_63(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_63(int iParam0)//Position - 0x370D
{
	float fVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		fVar0 = unk_0x90D5DFB054818BA7(iParam0);
		if (fVar0 > -0,5f && fVar0 < 0,5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0, int iParam1)//Position - 0x3745
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam1, 0))
		{
			iVar0 = unk_0xC6757F745366DB47(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_65()//Position - 0x3775
{
	int iVar0;
	int iVar1;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		iVar0 = unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502());
		if (unk_0xB8DE76287EDC4957(iVar0, 0))
		{
			iVar1 = unk_0x317536BCEA8FA6B0(iVar0, 0, 0);
			if (!unk_0x3AB6A1A9084FB0A4(iVar1))
			{
				if (iVar1 != unk_0xFC1458A37D98B502())
				{
					if (unk_0x9761C10D57B68069(iVar1))
					{
						if (!unk_0xABF985A1AF8C953F(iVar1, unk_0xFC1458A37D98B502()))
						{
							unk_0x60C06BFD037BB7CF(iVar1, unk_0xFC1458A37D98B502(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_66(var uParam0)//Position - 0x37E2
{
	int iVar0;
	
	if (!unk_0xC80D31E4B587871C(uParam0->f_13, 25))
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x6ADD12BF4D6D2587(uParam0->f_17[iVar0]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
				{
					unk_0xAE01EF4BC84AFE7C(uParam0->f_17[iVar0], 32, false);
					unk_0xAE01EF4BC84AFE7C(uParam0->f_17[iVar0], 305, true);
					unk_0xAE01EF4BC84AFE7C(uParam0->f_17[iVar0], 268, true);
					unk_0x07224EEE13A1B6AE(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 25);
	}
}

void func_67(var uParam0)//Position - 0x3885
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x6ADD12BF4D6D2587(uParam0->f_17[iVar0]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
			{
				if (unk_0x1ED974E122CB5C47(uParam0->f_17[iVar0]))
				{
					unk_0x4ACB9D202CFF8727(uParam0->f_17[iVar0], 0);
					unk_0xEB2D96E7D3F4906C(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
			{
				unk_0x4ACB9D202CFF8727(unk_0xFC1458A37D98B502(), 0);
				unk_0xEB2D96E7D3F4906C(unk_0xFC1458A37D98B502(), 0);
			}
		}
	}
}

var func_68()//Position - 0x391B
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_69()//Position - 0x3925
{
	return 0f, 0f, 2f;
}

int func_70(var uParam0)//Position - 0x3930
{
	float fVar0;
	
	if (!uParam0->f_6)
	{
		fVar0 = func_73(unk_0xFC1458A37D98B502(), *uParam0, 0);
		if (!iLocal_243)
		{
			if (fVar0 < 400f)
			{
				unk_0x84CDD933AFA470D2();
				func_134("FLY_DROP", 7500, 1);
				unk_0x1CF95440F1970B4F("PLANES", false, -1);
				iLocal_243 = 1;
			}
		}
		if (!iLocal_244)
		{
			if (fVar0 < 300f)
			{
				unk_0x3E80C2F7BC665259(1);
				func_72("LEAFLET", -1);
				iLocal_244 = 1;
				iLocal_241 = 1;
			}
		}
		if (fVar0 < uParam0->f_3)
		{
			iLocal_245 = 1;
			if (bLocal_242)
			{
				if (uParam0->f_7 == -1)
				{
					uParam0->f_7 = unk_0x53C562FD2B9E3AB0();
				}
				else if ((unk_0x53C562FD2B9E3AB0() - uParam0->f_7) > 1000)
				{
					uParam0->f_6 = 1;
					if (unk_0xA6DECE14FC9A8C51(uParam0->f_4))
					{
						unk_0xE30CF11C0EE14316(&(uParam0->f_4));
					}
					if (unk_0xA6DECE14FC9A8C51(uParam0->f_5))
					{
						unk_0xE30CF11C0EE14316(&(uParam0->f_5));
					}
					unk_0x4AFBCBFDE748D4E0(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", false);
					return 1;
				}
			}
		}
		if (!uParam0->f_6)
		{
			if (!unk_0xA6DECE14FC9A8C51(uParam0->f_4))
			{
				uParam0->f_4 = func_37(*uParam0, 0);
				unk_0xA5D25D3F884FF516(uParam0->f_4, 0,75f);
				unk_0x9C27373CC69ECF87(uParam0->f_4, false);
			}
			if (!unk_0xA6DECE14FC9A8C51(uParam0->f_5))
			{
				uParam0->f_5 = func_71(*uParam0, uParam0->f_3, 0);
			}
		}
	}
	return 0;
}

int func_71(vector3 vParam0, float fParam1, bool bParam2)//Position - 0x3A6E
{
	int iVar0;
	
	iVar0 = unk_0xDC4AED8949A17F4B(vParam0, fParam1);
	unk_0x0C71C8E276E3EC54(iVar0, 5);
	unk_0xF20857E4CB32A2B7(iVar0, 64);
	unk_0x66DAED36FB41050D(iVar0, bParam2);
	if (!bParam2)
	{
		unk_0x3ED68ABD7299EAA3(iVar0, 4);
	}
	return iVar0;
}

void func_72(char* sParam0, int iParam1)//Position - 0x3AA8
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

float func_73(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x3ABF
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

void func_74(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x3AF9
{
	vector3 vVar0;
	var uVar1;
	
	if (unk_0x6ADD12BF4D6D2587(Global_95149.f_4))
	{
		if (unk_0xB8DE76287EDC4957(Global_95149.f_4, 0))
		{
			if (func_126(24) != Global_95149.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_123(unk_0xB3328BA8976B416C(Global_95149.f_4, 1), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_75(Global_95149.f_4, vParam0, fParam1, 24, 0);
			}
		}
	}
}

void func_75(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x3B74
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
		func_122(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_117(iParam0, &Var0);
		if (func_116(vParam1, 0f, 0f, 0f, 0))
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
		func_109(iParam3, &Var0, vParam1, fParam2, func_115(iParam0));
		func_76(iParam3, iParam0, 0);
	}
}

void func_76(int iParam0, int iParam1, int iParam2)//Position - 0x3C9D
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_106(&(Global_69678.f_555[0 /*21*/]), iParam0))
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
				Global_104555.f_32429.f_4801 = func_95();
			}
			if (iParam1 != Global_69678.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_126(iParam0);
					if ((unk_0x6ADD12BF4D6D2587(iVar0) && unk_0xB8DE76287EDC4957(iVar0, 0)) && iParam1 != iVar0)
					{
						func_77(iVar0, 145);
					}
				}
				Global_70584 = iParam1;
				Global_70585 = iParam0;
				Global_70586 = iParam2;
			}
		}
	}
}

void func_77(int iParam0, int iParam1)//Position - 0x3DBA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_78(iParam0))
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
	func_117(iParam0, &(Global_104555.f_32429.f_5510));
}

int func_78(int iParam0)//Position - 0x3FBC
{
	if ((((((((((!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0)) || func_93(iParam0, 0, 0)) || func_93(iParam0, 1, 0)) || func_93(iParam0, 2, 0)) || func_115(iParam0) != 145) || func_92(iParam0)) || func_91(iParam0)) || func_90(iParam0)) || func_89(iParam0)) || !func_79(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		if (func_91(iParam0))
		{
		}
		if (func_91(iParam0))
		{
		}
		if (func_93(iParam0, 0, 0))
		{
		}
		if (func_93(iParam0, 1, 0))
		{
		}
		if (func_93(iParam0, 2, 0))
		{
		}
		if (func_115(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_79(int iParam0)//Position - 0x409A
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_80(iParam0, 0))
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

int func_80(int iParam0, bool bParam1)//Position - 0x424B
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
		if (!func_88())
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
		if ((((!func_87() && !func_86()) && !func_85()) && !func_84()) && !func_88())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x177281F5FA205A38() || unk_0xB9D80B12FE4456A5()) || unk_0xFD6215BABFD843F2())
		{
		}
		else if (!func_85())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_83(iParam0))
		{
			return 0;
		}
	}
	if (!func_81(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_81(int iParam0)//Position - 0x43D9
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_82())
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

int func_82()//Position - 0x44A5
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

int func_83(int iParam0)//Position - 0x44BC
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

int func_84()//Position - 0x5D44
{
	return 0;
}

int func_85()//Position - 0x5D4D
{
	return 1;
}

int func_86()//Position - 0x5D56
{
	return 1;
}

int func_87()//Position - 0x5D5F
{
	if (unk_0x21EA5D4DC72DE119(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_88()//Position - 0x5D78
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

int func_89(int iParam0)//Position - 0x5E33
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	sVar1 = unk_0xF2D2D6860D636A58(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x74C475EB8E73D398(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_80(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0)//Position - 0x5E79
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

int func_91(int iParam0)//Position - 0x5EB4
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

int func_92(int iParam0)//Position - 0x5F30
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

int func_93(int iParam0, int iParam1, bool bParam2)//Position - 0x6018
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_94(iParam1, iVar0, &sVar1, &iVar2))
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

int func_94(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x6089
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

var func_95()//Position - 0x6161
{
	var uVar0;
	
	func_105(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_104(&uVar0, unk_0x95327550F0F2BE7C());
	func_103(&uVar0, unk_0x674C9438180770FE());
	func_98(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_97(&uVar0, unk_0xEAF455949B108589());
	func_96(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_96(var uParam0, int iParam1)//Position - 0x61A7
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

void func_97(var uParam0, int iParam1)//Position - 0x622D
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_98(var uParam0, int iParam1)//Position - 0x6260
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_102(*uParam0);
	iVar1 = func_100(*uParam0);
	if (iParam1 < 1 || iParam1 > func_99(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_99(int iParam0, int iParam1)//Position - 0x62B1
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

var func_100(int iParam0)//Position - 0x6353
{
	return (system::shift_right(iParam0, 26) & 31 * func_101(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_101(bool bParam0, int iParam1, int iParam2)//Position - 0x6378
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_102(var uParam0)//Position - 0x638F
{
	return uParam0 & 15;
}

void func_103(var uParam0, int iParam1)//Position - 0x639C
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_104(var uParam0, int iParam1)//Position - 0x63D6
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_105(var uParam0, int iParam1)//Position - 0x6411
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_106(var uParam0, int iParam1)//Position - 0x644D
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
			uParam0->f_4 = func_107(0, 1);
			uParam0->f_12 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970,943f, 3801,684f, 31,1396f };
			uParam0->f_3 = 301,3964f;
			uParam0->f_4 = func_107(0, 1);
			uParam0->f_12 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22,6297f, -1439,137f, 29,6549f };
			uParam0->f_3 = 180,0808f;
			uParam0->f_4 = func_107(1, 1);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22,5229f, -1434,699f, 29,6552f };
			uParam0->f_3 = 141,6114f;
			uParam0->f_4 = func_107(1, 2);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 19);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10,9281f, 545,669f, 174,7951f };
			uParam0->f_3 = 61,392f;
			uParam0->f_4 = func_107(1, 1);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6,1093f, 544,9742f, 174,2835f };
			uParam0->f_3 = 92,1548f;
			uParam0->f_4 = func_107(1, 2);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 19);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981,416f, 3808,131f, 31,1384f };
			uParam0->f_3 = 117,2557f;
			uParam0->f_4 = func_107(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158,488f, -1529,367f, 3,8995f };
			uParam0->f_3 = 35,7505f;
			uParam0->f_4 = func_107(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148,2868f, -1270,569f, 28,2252f };
			uParam0->f_3 = 208,4685f;
			uParam0->f_4 = func_107(2, 1);
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
			if (func_88())
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
			if (func_88())
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
		if (!func_116(Global_104555.f_32429.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_116(Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xC80D31E4B587871C(uParam0->f_9, 20))
	{
		if (!func_116(Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_107(int iParam0, int iParam1)//Position - 0x7B44
{
	struct<82> Var0;
	
	if (func_11(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_108(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_108(int iParam0, var uParam1, int iParam2)//Position - 0x7B86
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

void func_109(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0x7DE2
{
	if (func_106(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 10))
		{
			func_114(iParam0);
			func_113(uParam1, &(Global_104555.f_32429.f_69[Global_69678.f_555[0 /*21*/].f_14 /*78*/]));
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
			func_110(iParam0, 1);
		}
	}
}

void func_110(int iParam0, bool bParam1)//Position - 0x7EE1
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_112(iParam0, 0))
		{
			func_111(iParam0, 1, 0);
			func_111(iParam0, 2, 0);
			func_111(iParam0, 3, 0);
			func_111(iParam0, 4, 0);
			func_111(iParam0, 0, 1);
			Global_69678[iParam0] = 1;
		}
	}
	else
	{
		func_111(iParam0, 0, 0);
	}
}

void func_111(int iParam0, int iParam1, bool bParam2)//Position - 0x7F3E
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

bool func_112(int iParam0, int iParam1)//Position - 0x7F79
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_104555.f_32429[iParam0], iParam1);
}

void func_113(var uParam0, var uParam1)//Position - 0x7F9C
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

void func_114(int iParam0)//Position - 0x8069
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_106(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_139[iParam0]))
		{
			unk_0xDD29FF4BAB8AFF9C(Global_69678.f_139[iParam0], true, 1);
			unk_0x5380482A432E314E(&(Global_69678.f_139[iParam0]));
			Global_69678.f_139[iParam0] = 0;
		}
		if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 13))
		{
			func_110(iParam0, 0);
		}
	}
}

int func_115(int iParam0)//Position - 0x80E3
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

bool func_116(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x8146
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_117(int iParam0, var uParam1)//Position - 0x818D
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		func_121(uParam1);
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
		if (uParam1->f_65 == -1 && !func_120(uParam1->f_66))
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
		func_119(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x7C7056D6F2A31BF6(iParam0, iVar0 + 1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_118(iVar0 + 1));
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

int func_118(int iParam0)//Position - 0x8438
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

int func_119(int iParam0, var uParam1, var uParam2)//Position - 0x84E8
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

int func_120(int iParam0)//Position - 0x85C2
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

void func_121(var uParam0)//Position - 0x85E2
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

void func_122(int iParam0)//Position - 0x8692
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_114(iParam0);
	func_110(iParam0, 0);
}

int func_123(vector3 vParam0, int iParam1, var uParam2, var uParam3)//Position - 0x86B9
{
	int iVar0;
	
	iVar0 = func_124(vParam0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827,351f, 157,785f, 68,2143f };
			*uParam3 = 85,1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992,523f, 3813,916f, 31,1008f };
			*uParam3 = 122,1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184,258f, -1496,556f, 3,3895f };
			*uParam3 = 303,2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118,1067f, -1325,906f, 28,3706f };
			*uParam3 = 123,5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18,118f, -1455,126f, 29,5004f };
			*uParam3 = 273,2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1,5947f, 543,4017f, 173,4644f };
			*uParam3 = 310,7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_124(vector3 vParam0, int iParam1, int iParam2)//Position - 0x87CF
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_88016[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_88016[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_125(iVar0) || iParam2 == 0)
				{
					fVar1 = unk_0xBE3C4023003180FC(vParam0, Global_88016[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_125(int iParam0)//Position - 0x885E
{
	return unk_0xC80D31E4B587871C(Global_104555.f_7199[iParam0], 0);
}

int func_126(int iParam0)//Position - 0x8876
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_69678.f_139[iParam0];
}

void func_127(int iParam0, bool bParam1, bool bParam2)//Position - 0x8892
{
	int iVar0;
	
	if (unk_0xC80D31E4B587871C(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_129(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xA6DECE14FC9A8C51(iParam0->f_1[iVar0]))
		{
			unk_0xE30CF11C0EE14316(&(iParam0->f_1[iVar0]));
		}
		func_128(iVar0, iParam0);
		func_57(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), iVar0);
			unk_0x0EE72DB1CD8A3B86(&(iParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0xA6DECE14FC9A8C51(*iParam0))
	{
		unk_0xE30CF11C0EE14316(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[iVar0]))
		{
			unk_0x4ACB9D202CFF8727(iParam0->f_17[iVar0], 1);
			unk_0xEB2D96E7D3F4906C(iParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0xAE01EF4BC84AFE7C(iParam0->f_17[iVar0], 32, true);
				unk_0xAE01EF4BC84AFE7C(iParam0->f_17[iVar0], 305, false);
			}
			unk_0xAE01EF4BC84AFE7C(iParam0->f_17[iVar0], 268, false);
			if (bParam1)
			{
				if (unk_0x4759A34EB65CCA39(iParam0->f_17[iVar0], func_34()) && iParam0->f_17[iVar0] != unk_0xFC1458A37D98B502())
				{
					unk_0x88235B448509228B(iParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xC80D31E4B587871C(iParam0->f_13, 29))
			{
				unk_0xD0A6028E561242DA(iParam0->f_17[iVar0], false, -1, 0);
			}
			iParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0x4ACB9D202CFF8727(unk_0xFC1458A37D98B502(), 1);
		unk_0xEB2D96E7D3F4906C(unk_0xFC1458A37D98B502(), 1);
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (bParam2)
		{
			unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 32, true);
		}
	}
	iParam0->f_21 = 0;
}

void func_128(int iParam0, var uParam1)//Position - 0x8A43
{
	switch (iParam0)
	{
		case 0:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 16);
			break;
	}
}

void func_129(var uParam0)//Position - 0x8A8B
{
	if (unk_0xA6DECE14FC9A8C51(uParam0->f_5))
	{
		unk_0xE30CF11C0EE14316(&(uParam0->f_5));
	}
}

float func_130(float fParam0, float fParam1, float fParam2)//Position - 0x8AA6
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

int func_131(char* sParam0)//Position - 0x8ACD
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

float func_132(int iParam0, int iParam1, bool bParam2)//Position - 0x8AE0
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	}
	if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		vVar1 = { unk_0xB3328BA8976B416C(iParam1, 1) };
	}
	else
	{
		vVar1 = { unk_0xB3328BA8976B416C(iParam1, 0) };
	}
	return unk_0xBE3C4023003180FC(vVar0, vVar1, bParam2);
}

int func_133(int iParam0, bool bParam1, bool bParam2)//Position - 0x8B3E
{
	return func_27(iParam0, !bParam1, bParam2);
}

void func_134(char* sParam0, int iParam1, int iParam2)//Position - 0x8B51
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 1);
}

void func_135()//Position - 0x8B6A
{
	func_143(2);
	func_142();
}

int func_136()//Position - 0x8B7B
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_137()//Position - 0x8B9D
{
	int iVar0;
	float fVar1;
	
	unk_0xFB4AD069EFD0869A(1);
	unk_0xBCBC53983EC3B1BA("PPROM", 0);
	func_141(2, 1);
	func_140(&uLocal_72, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
	Local_238[0 /*8*/] = { -1039,556f, -1071,264f, 150f };
	Local_238[0 /*8*/].f_3 = 200f;
	Local_238[1 /*8*/] = { -1014,976f, 450,128f, 150f };
	Local_238[1 /*8*/].f_3 = 200f;
	Local_238[2 /*8*/] = { -598,1714f, -310,67f, 150f };
	Local_238[2 /*8*/].f_3 = 200f;
	Local_238[3 /*8*/] = { -392,5704f, 514,8138f, 150f };
	Local_238[3 /*8*/].f_3 = 200f;
	Local_238[4 /*8*/] = { 127,7632f, -135,7758f, 150f };
	Local_238[4 /*8*/].f_3 = 200f;
	Local_238[5 /*8*/] = { 1033,469f, -570,8278f, 150f };
	Local_238[5 /*8*/].f_3 = 200f;
	Local_238[6 /*8*/] = { 246,5894f, -890,811f, 150f };
	Local_238[6 /*8*/].f_3 = 200f;
	Local_238[7 /*8*/] = { 1231,393f, -1694,348f, 150f };
	Local_238[7 /*8*/].f_3 = 200f;
	Local_238[8 /*8*/] = { 424,9531f, -1904,325f, 150f };
	Local_238[8 /*8*/].f_3 = 200f;
	Local_238[9 /*8*/] = { -22,4342f, -1414,275f, 160f };
	Local_238[9 /*8*/].f_3 = 200f;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (!func_139(Local_238[iVar0 /*8*/]))
		{
			fVar1 = 0f;
			unk_0x7367FB97975F1E29(Local_238[iVar0 /*8*/], &fVar1, 0, 0);
			Local_238[iVar0 /*8*/].f_2 = fVar1;
		}
		iVar0++;
	}
	switch (func_138())
	{
		case 6:
			StringCopy(&cLocal_40, "DT", 16);
			break;
		
		case 5:
			StringCopy(&cLocal_40, "VW", 16);
			break;
		
		case 7:
			StringCopy(&cLocal_40, "MW", 16);
			break;
	}
	unk_0x94BD6F0436473406(0f);
	while (!unk_0x9F0887BCBFCF3C2F(0))
	{
		system::wait(0);
	}
}

int func_138()//Position - 0x8DB5
{
	return Global_103265.f_20;
}

int func_139(vector3 vParam0)//Position - 0x8DC3
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_140(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x8DED
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

void func_141(int iParam0, int iParam1)//Position - 0x8E88
{
	unk_0x872F1C1F8587CCC7(&Global_25391, iParam0);
	StringCopy(&(Global_25392[iParam0 /*6*/]), unk_0x436287B7DB306165(), 24);
	Global_25447[iParam0] = iParam1;
}

void func_142()//Position - 0x8EAF
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_237))
	{
		unk_0x5380482A432E314E(&iLocal_237);
	}
	if (unk_0xA6DECE14FC9A8C51(Local_238[0 /*8*/].f_4))
	{
		unk_0xE30CF11C0EE14316(&(Local_238[0 /*8*/].f_4));
	}
	if (unk_0xA6DECE14FC9A8C51(Local_238[0 /*8*/].f_5))
	{
		unk_0xE30CF11C0EE14316(&(Local_238[0 /*8*/].f_5));
	}
	if (unk_0xA6DECE14FC9A8C51(Local_238[1 /*8*/].f_4))
	{
		unk_0xE30CF11C0EE14316(&(Local_238[1 /*8*/].f_4));
	}
	if (unk_0xA6DECE14FC9A8C51(Local_238[1 /*8*/].f_5))
	{
		unk_0xE30CF11C0EE14316(&(Local_238[1 /*8*/].f_5));
	}
	unk_0x94BD6F0436473406(1f);
	unk_0xFB4AD069EFD0869A(0);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_143(int iParam0)//Position - 0x8F38
{
	Global_103265.f_22 = iParam0;
}

