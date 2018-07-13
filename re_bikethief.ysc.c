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
	struct<4> Local_44[10];
	bool bLocal_45 = 0;
	vector3 vLocal_46 = { 0f, 0f, 0f };
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	vector3 vLocal_54 = { 0f, 0f, 0f };
	vector3 vLocal_55 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	vector3 vLocal_57 = { 0f, 0f, 0f };
	vector3 vLocal_58 = { 0f, 0f, 0f };
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	float fLocal_63 = 0f;
	float fLocal_64 = 0f;
	float fLocal_65 = 0f;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	float fLocal_72 = 0f;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	var uLocal_82 = 16;
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
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	char* sLocal_247 = NULL;
	char* sLocal_248 = NULL;
	char* sLocal_249 = NULL;
	char* sLocal_250 = NULL;
	char* sLocal_251 = NULL;
	char* sLocal_252 = NULL;
	char* sLocal_253 = NULL;
	char* sLocal_254 = NULL;
	char* sLocal_255 = NULL;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	vector3 vLocal_261 = { 0f, 0f, 0f };
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	char* sLocal_269 = NULL;
	char* sLocal_270 = NULL;
	int iLocal_271 = 0;
	bool bLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = -1;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 1000;
	var uLocal_286 = 1000;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	struct<2> Local_291 = { 0, 5 } ;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 5;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
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
	iLocal_67 = 1;
	sLocal_250 = "REBTH_HANGAR";
	sLocal_251 = "REBTH_RUNSOF";
	sLocal_252 = "REBTH_TAUNT";
	sLocal_264 = "RANDOM@BICYCLE_THIEF@BASE";
	sLocal_265 = "RANDOM@BICYCLE_THIEF@ASK_HELP";
	sLocal_267 = "RANDOM@BICYCLE_THIEF@IDLE_A";
	sLocal_268 = "RANDOM@BICYCLE_THIEF@GET_OFF_BIKE";
	sLocal_269 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	sLocal_270 = "RANDOM@BICYCLE_THIEF@THANKS";
	vLocal_54 = { ScriptParam_291.f_1[0 /*3*/] };
	if (unk_0x7D9C4B359376D38A(11))
	{
		func_220();
	}
	if (system::vdist2(vLocal_54, 421,92f, -1930,95f, 23,18f) < 16f)
	{
		iLocal_263 = 1;
	}
	else if (system::vdist2(vLocal_54, 769,3f, -151,66f, 73,79f) < 16f)
	{
		iLocal_263 = 2;
	}
	else if (system::vdist2(vLocal_54, -1923,93f, 254,48f, 85,7f) < 16f)
	{
		iLocal_263 = 3;
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) != 0)
		{
			unk_0x96A3D9A8A4C7AFD4();
		}
		else if (func_219(unk_0xFC1458A37D98B502(), vLocal_54, 1) < 100f)
		{
			unk_0x96A3D9A8A4C7AFD4();
		}
	}
	if (iLocal_263 != 3)
	{
		if (func_179(vLocal_54, 26, iLocal_263, 0, 0))
		{
			func_176(26);
		}
		else
		{
			unk_0x96A3D9A8A4C7AFD4();
		}
	}
	else if (func_179(vLocal_54, 8, 0, 0, 0))
	{
		func_176(8);
	}
	else
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	iLocal_262 = func_174();
	iLocal_271 = unk_0xCB389937EDB1519A(vLocal_54 - Vector(20f, 20f, 20f), vLocal_54 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	while (true)
	{
		system::wait(0);
		func_173();
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
			unk_0xE8EB4BCE461C6092(unk_0x9EB17624F44A8DA4(), 28);
			unk_0xE8EB4BCE461C6092(unk_0x9EB17624F44A8DA4(), 13);
			unk_0xE8EB4BCE461C6092(unk_0x9EB17624F44A8DA4(), 35);
		}
		if (unk_0x42F1FE4C7EC5F51E() || iLocal_47 > 1)
		{
			if (func_153())
			{
				func_152();
				func_220();
			}
			else
			{
				switch (iLocal_47)
				{
					case 0:
						func_149();
						break;
					
					case 1:
						if (func_148())
						{
							func_152();
							func_220();
						}
						else
						{
							func_136();
						}
						break;
					
					case 2:
						func_105();
						func_101();
						func_100();
						func_99();
						func_97();
						func_96();
						func_88();
						break;
					
					case 3:
						func_86();
						func_68();
						func_59();
						break;
					
					case 4:
						func_1();
						break;
					}
			}
		}
		else
		{
			func_220();
		}
	}
}

void func_1()//Position - 0x2D4
{
	if (func_58(unk_0xFC1458A37D98B502()) && func_58(iLocal_50))
	{
		if (func_57(unk_0xFC1458A37D98B502(), iLocal_50, 1) > 50f)
		{
			func_56(8);
			func_20();
		}
		else if ((unk_0x53C562FD2B9E3AB0() - iLocal_77) > 10000)
		{
			func_56(8);
			func_20();
		}
		else if ((iLocal_275 == 0 && !func_19()) && func_2(&uLocal_82, "REBTHAU", sLocal_249, 4, 0, 0, 0))
		{
			iLocal_275 = 1;
		}
	}
}

bool func_2(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x358
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

int func_3(char* sParam0, int iParam1, bool bParam2)//Position - 0x3A6
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

void func_4()//Position - 0x672
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

void func_5()//Position - 0x6A3
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

int func_6()//Position - 0x738
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_7()//Position - 0x75F
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

void func_8()//Position - 0x7F8
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

int func_9()//Position - 0x89A
{
	func_10();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_10()//Position - 0x8B3
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

bool func_11(int iParam0)//Position - 0x9B0
{
	return iParam0 < 3;
}

int func_12(int iParam0)//Position - 0x9BC
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

int func_13(int iParam0)//Position - 0x9F9
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

bool func_14(int iParam0)//Position - 0xA23
{
	return Global_35861 == iParam0;
}

void func_15()//Position - 0xA31
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

bool func_16(int iParam0, int iParam1)//Position - 0xA88
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

void func_17()//Position - 0xAC3
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

void func_18(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xB1A
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

int func_19()//Position - 0xB70
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_20()//Position - 0xB92
{
	int iVar0;
	
	if (iLocal_263 == 3)
	{
		func_52(func_12(unk_0xFC1458A37D98B502()), 4, 5);
	}
	else
	{
		func_52(func_12(unk_0xFC1458A37D98B502()), 1, 3);
	}
	if (iLocal_263 != 3)
	{
		func_33(26, iLocal_263);
	}
	else
	{
		func_33(8, 0);
	}
	if (iLocal_263 == 1)
	{
		iVar0 = func_9();
		switch (iVar0)
		{
			case 0:
				while (!func_24(-1551606815, 6, 1, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					system::wait(0);
				}
				break;
			
			case 1:
				while (!func_24(-980148216, 6, 2, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					system::wait(0);
				}
				break;
			
			case 2:
				while (!func_24(-1857996981, 6, 4, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					system::wait(0);
				}
				break;
			}
	}
	func_21();
	func_220();
}

void func_21()//Position - 0xC80
{
	func_22();
}

int func_22()//Position - 0xC8D
{
	if (func_23(0))
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

bool func_23(bool bParam0)//Position - 0xCD8
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0xD03
{
	struct<10> Var0;
	struct<10> Var1;
	int iVar2;
	int iVar3;
	
	if (func_23(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0xC80D31E4B587871C(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_104555.f_7658.f_866 < 10)
	{
		Var0 = iParam0;
		Var0.f_3 = func_32(iParam1);
		Var0.f_4 = (unk_0x53C562FD2B9E3AB0() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		unk_0x0EE72DB1CD8A3B86(&(Var0.f_1), 0);
		Global_104555.f_7658.f_765[Global_104555.f_7658.f_866 /*10*/] = { Var0 };
		Global_104555.f_7658.f_866++;
		return 1;
	}
	else
	{
		Var1 = { func_31(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar2 = 0;
		func_30(&iVar2);
		iVar3 = func_29(Var1, Global_104555.f_7658.f_765[iVar2 /*10*/]);
		if (iVar3 == 2)
		{
			func_27(Global_104555.f_7658.f_765[iVar2 /*10*/]);
			Global_104555.f_7658.f_765[iVar2 /*10*/] = { Var1 };
			func_26(&Var1);
			return 1;
		}
		else if (iVar3 == 1)
		{
			if (func_25(Var1))
			{
				func_27(Global_104555.f_7658.f_765[iVar2 /*10*/]);
				Global_104555.f_7658.f_765[iVar2 /*10*/] = { Var1 };
				func_26(&Var1);
				return 1;
			}
			else
			{
				if (!func_25(Global_104555.f_7658.f_765[iVar2 /*10*/]))
				{
					Global_104555.f_7658.f_765[iVar2 /*10*/] = { Var1 };
					func_26(&Var1);
					return 1;
				}
				func_26(&Var1);
				return 1;
			}
		}
		else
		{
			func_27(Var1);
			func_26(&Var1);
			return 1;
		}
	}
	return 0;
}

int func_25(struct<9> Param0, var uParam1)//Position - 0xF25
{
	if (Param0.f_8 == 0)
	{
		return 0;
	}
	return 1;
}

void func_26(var uParam0)//Position - 0xF3D
{
	struct<10> Var0;
	
	*uParam0 = { Var0 };
}

void func_27(struct<10> Param0)//Position - 0xF4F
{
	if (func_25(Param0))
	{
		func_28(Param0.f_8, 0);
	}
}

void func_28(int iParam0, int iParam1)//Position - 0xF6C
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_104555.f_8583[iParam0] = 1;
	Global_104555.f_8583.f_236[iParam0] = (unk_0x53C562FD2B9E3AB0() + iParam1);
}

int func_29(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<4> Param7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)//Position - 0xFA9
{
	int iVar0;
	int iVar1;
	
	iVar0 = Param0.f_3;
	iVar1 = Param7.f_3;
	if (iVar0 > iVar1)
	{
		return 2;
	}
	if (iVar0 < iVar1)
	{
		return 0;
	}
	return 1;
}

void func_30(int iParam0)//Position - 0xFDA
{
	int iVar0;
	
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_104555.f_7658.f_866)
	{
		if (func_29(Global_104555.f_7658.f_765[iVar0 /*10*/], Global_104555.f_7658.f_765[*iParam0 /*10*/]) == 0)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_31(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)//Position - 0x1031
{
	struct<10> Var0;
	
	Var0 = uParam0;
	Var0.f_3 = func_32(iParam1);
	Var0.f_4 = (unk_0x53C562FD2B9E3AB0() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	unk_0x0EE72DB1CD8A3B86(&(Var0.f_1), 0);
	return Var0;
}

int func_32(int iParam0)//Position - 0x108A
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

void func_33(int iParam0, int iParam1)//Position - 0x10F4
{
	if (iParam0 == -1)
	{
		iParam0 = func_50();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_49(iParam0))
	{
		func_48(iParam0, iParam1);
		if (!func_47(51))
		{
			func_43("RE_REWARD", 1, 0, 4000, 10000, func_46(), 0, 138, 0);
			func_42(51);
		}
		if (func_41(iParam0))
		{
			Global_104555.f_24965.f_2 = 3;
		}
		if (func_40(iParam0, iParam1) != 322)
		{
			func_34(func_40(iParam0, iParam1), vLocal_46.x, vLocal_46.y);
		}
		Global_104543 = iParam1;
		if (Global_104541 == 0)
		{
			if (((Global_104544 == 1 || Global_104544 == 5) || Global_104544 == 11) || Global_104544 == 25)
			{
				func_56(2);
			}
			else if ((Global_104544 == 26 || Global_104544 == 8) || Global_104544 == 17)
			{
				func_56(7);
			}
			else
			{
				func_56(1);
			}
		}
	}
}

void func_34(int iParam0, var uParam1, var uParam2)//Position - 0x11F7
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
		func_38((891 + iParam0), 1, -1, 1);
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
		Global_104555.f_10164[iParam0 /*12*/].f_10 = uParam1;
		Global_104555.f_10164[iParam0 /*12*/].f_11 = uParam2;
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
		func_35();
	}
}

void func_35()//Position - 0x12DF
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
		func_37(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_36() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_22();
				}
			}
		}
	}
}

int func_36()//Position - 0x17A0
{
	return Global_25233;
}

int func_37(int iParam0, int iParam1)//Position - 0x17AB
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

int func_38(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x17FC
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
		iParam2 = func_39();
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

int func_39()//Position - 0x1CC6
{
	return Global_1312736;
}

int func_40(int iParam0, int iParam1)//Position - 0x1CD2
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_41(int iParam0)//Position - 0x2046
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_42(int iParam0)//Position - 0x2075
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_20380.f_150[iVar1]), iVar0);
	}
}

void func_43(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x20B7
{
	func_44(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_44(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x20D8
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
		func_45();
	}
}

void func_45()//Position - 0x22AB
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

int func_46()//Position - 0x23CB
{
	func_10();
	switch (Global_104555.f_2353.f_539.f_4301)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_47(int iParam0)//Position - 0x2411
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20380.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_48(int iParam0, int iParam1)//Position - 0x2454
{
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_24965.f_8[iParam0]), iParam1);
}

int func_49(int iParam0)//Position - 0x246F
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_50()//Position - 0x2520
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x436287B7DB306165(), 64);
	uVar1 = func_51(Var0);
	return uVar1;
}

int func_51(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x253D
{
	switch (unk_0x8B948C59217A295D(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_52(int iParam0, int iParam1, int iParam2)//Position - 0x2717
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_104555.f_2353.f_539.f_2227[iParam1 /*4*/][iParam0] = (Global_104555.f_2353.f_539.f_2227[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 7872;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 7872)
			{
				iVar0 = func_55(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_53(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_53(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2807
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_54(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_54(var uParam0)//Position - 0x2837
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_39();
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

int func_55(int iParam0, int iParam1, int iParam2)//Position - 0x286B
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_54(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_56(int iParam0)//Position - 0x289D
{
	Global_104541 = iParam0;
}

float func_57(int iParam0, int iParam1, bool bParam2)//Position - 0x28AB
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

int func_58(int iParam0)//Position - 0x2909
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

void func_59()//Position - 0x292A
{
	if (func_58(iLocal_50) && func_67(iLocal_51))
	{
		if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_51, 0))
		{
			func_66(&uLocal_288);
			func_65(&iLocal_80);
			if (iLocal_78 == 0 && !unk_0xA6DECE14FC9A8C51(iLocal_79))
			{
				iLocal_79 = func_64(iLocal_51, 0, 0);
			}
		}
		else
		{
			func_65(&iLocal_79);
			if (!unk_0xA6DECE14FC9A8C51(iLocal_80))
			{
				iLocal_80 = func_61(iLocal_50, 0, 145);
				if (iLocal_289 == 0)
				{
					func_60(&uLocal_288);
					iLocal_289 = 1;
				}
			}
		}
	}
}

void func_60(var uParam0)//Position - 0x29AF
{
	*uParam0 = -99;
}

int func_61(int iParam0, bool bParam1, int iParam2)//Position - 0x29BD
{
	int iVar0;
	
	iVar0 = func_62(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(iVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(iVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_62(int iParam0, bool bParam1, bool bParam2)//Position - 0x2A0F
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_63(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_63(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_63(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_63(bool bParam0, float fParam1, float fParam2)//Position - 0x2AB3
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_64(int iParam0, bool bParam1, bool bParam2)//Position - 0x2ACA
{
	return func_62(iParam0, !bParam1, bParam2);
}

void func_65(int iParam0)//Position - 0x2ADD
{
	if (unk_0xA6DECE14FC9A8C51(*iParam0))
	{
		unk_0xAAAC88CC20771601(*iParam0, false);
		unk_0xE30CF11C0EE14316(iParam0);
	}
}

void func_66(var uParam0)//Position - 0x2AFD
{
	*uParam0 = (unk_0x53C562FD2B9E3AB0() - 5000);
}

int func_67(int iParam0)//Position - 0x2B10
{
	if (func_58(iParam0))
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

void func_68()//Position - 0x2B3A
{
	float fVar0;
	
	if (func_58(iLocal_50) && func_67(iLocal_51))
	{
		func_85(iLocal_80, &uLocal_288);
		if (fLocal_72 > 0f)
		{
			fVar0 = func_57(unk_0xFC1458A37D98B502(), iLocal_50, 1);
			if (fVar0 > (fLocal_72 + fLocal_65))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_51, 0))
				{
					func_56(7);
					func_20();
				}
				else
				{
					func_220();
				}
			}
		}
		else
		{
			fLocal_72 = func_57(unk_0xFC1458A37D98B502(), iLocal_50, 1);
			if (unk_0x771D0F8F56A5FE6C("RE_CAR_STEAL_SCENE"))
			{
				unk_0xF0037A481D043FE1(iLocal_51, 0);
				unk_0xE02E32C69260FBB7("RE_CAR_STEAL_SCENE");
			}
		}
		if (iLocal_256 == 0)
		{
			if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_50, 40f, 40f, 40f, 0, 1, 0))
			{
				func_84();
				if (iLocal_259 == 0)
				{
					if (!unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_50, 25f, 25f, 25f, 0, 1, 0))
					{
						if (((((unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_51, 0) && unk_0xCA3C40448996C9BA(iLocal_50, unk_0xFC1458A37D98B502(), 30f)) && func_75(iLocal_50, unk_0xFC1458A37D98B502(), 1126825984, 1, 250, 7)) && !unk_0x9F887157983E8EFC(iLocal_50)) && !unk_0x7CE28D2DD2AF0F42(iLocal_50)) && func_2(&uLocal_82, "REBTHAU", "REBTH_APEBIK", 4, 0, 0, 0))
						{
							unk_0x12C9D41D52A560D6(iLocal_50, sLocal_269, "RETURNING_FRONT_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
							unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
							iLocal_259 = 1;
						}
					}
					else
					{
						iLocal_259 = 1;
					}
				}
			}
		}
		else if (((!unk_0x21B6FFFD04C9FF3A(iLocal_51, iLocal_50, 35f, 35f, 35f, 0, 1, 0) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_51, 0)) && !func_74()) && func_2(&uLocal_82, "REBTHAU", "REBTH_PLASTE", 4, 0, 0, 0))
		{
			func_72(0);
			unk_0x771A86309E0CA47B(iLocal_50, false);
			unk_0xF96119FCCD4D1889(5, iLocal_70, 1862763509);
			unk_0x5C5D33A1B2711D21(iLocal_50, true);
			unk_0xD7F5B2902EBBD04E(iLocal_50, unk_0xFC1458A37D98B502(), 0, 16);
			unk_0xE9B3D12A64CC7C1A(iLocal_50, true);
			system::wait(0);
			func_56(7);
			func_20();
		}
		if (unk_0xA8D0477084E86A92(iLocal_50, iLocal_51, 0))
		{
			if (!func_19() && func_2(&uLocal_82, "REBTHAU", "REBTH_GETOFF", 4, 0, 0, 0))
			{
			}
			iLocal_77 = unk_0x53C562FD2B9E3AB0();
			iLocal_47 = 4;
		}
		else if (unk_0x21B6FFFD04C9FF3A(iLocal_51, iLocal_50, 20f, 20f, 20f, 0, 1, 0))
		{
			if (func_71())
			{
				if (!func_69(iLocal_50, 242628503))
				{
					iLocal_78 = 1;
					func_72(0);
					func_66(&uLocal_288);
					func_65(&iLocal_80);
					func_65(&iLocal_79);
					unk_0xCF5EB2CB1B30F02C(iLocal_51, 0);
					unk_0x6931076730A4AC5D(&iLocal_53);
					if (iLocal_256 == 0)
					{
						unk_0x6F8C8278B7C06889(0, iLocal_51, 20000, -1, 2f, 8, 0);
					}
					else
					{
						unk_0x6F8C8278B7C06889(0, iLocal_51, 20000, -1, 2f, 262152, 0);
					}
					unk_0x96247F0EC873C446(0, iLocal_51, fLocal_62, 786485);
					unk_0x1B16DD5C115FE009(iLocal_53);
					unk_0xAB30B1CF01A198C1(iLocal_50, iLocal_53);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_53);
					unk_0xE9B3D12A64CC7C1A(iLocal_50, true);
				}
			}
			else
			{
				switch (iLocal_256)
				{
					case 0:
						if ((((iLocal_259 == 1 && !func_69(iLocal_50, -2017877118)) && !unk_0x9F887157983E8EFC(iLocal_50)) && !unk_0x7CE28D2DD2AF0F42(iLocal_50)) && func_2(&uLocal_82, "REBTHAU", "REBTH_THANKS", 4, 0, 0, 0))
						{
							if (unk_0xCA3C40448996C9BA(iLocal_50, unk_0xFC1458A37D98B502(), 30f) && unk_0x78F50AA8F955BEFC(iLocal_50, -875674219) == 7)
							{
								unk_0x12C9D41D52A560D6(iLocal_50, sLocal_269, "RETURNING_FRONT_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
							}
							iLocal_257 = unk_0x53C562FD2B9E3AB0();
							iLocal_256++;
						}
						else
						{
							func_84();
						}
						break;
					
					case 1:
						if (((((unk_0x53C562FD2B9E3AB0() - iLocal_257) > 10000 && !func_69(iLocal_50, -2017877118)) && !unk_0x9F887157983E8EFC(iLocal_50)) && !unk_0x7CE28D2DD2AF0F42(iLocal_50)) && func_2(&uLocal_82, "REBTHAU", sLocal_253, 4, 0, 0, 0))
						{
							if (unk_0xCA3C40448996C9BA(iLocal_50, unk_0xFC1458A37D98B502(), 30f))
							{
								func_72(0);
								unk_0x12C9D41D52A560D6(iLocal_50, sLocal_270, "THANKS_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
							}
							iLocal_257 = unk_0x53C562FD2B9E3AB0();
							iLocal_256++;
						}
						else
						{
							func_72(1);
						}
						break;
					
					case 2:
						if (((((unk_0x53C562FD2B9E3AB0() - iLocal_257) > 10000 && !func_69(iLocal_50, -2017877118)) && !unk_0x9F887157983E8EFC(iLocal_50)) && !unk_0x7CE28D2DD2AF0F42(iLocal_50)) && func_2(&uLocal_82, "REBTHAU", sLocal_254, 4, 0, 0, 0))
						{
							if (unk_0xCA3C40448996C9BA(iLocal_50, unk_0xFC1458A37D98B502(), 30f))
							{
								func_72(0);
								unk_0x12C9D41D52A560D6(iLocal_50, sLocal_268, "BIKE_BACK_NOW_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
							}
							iLocal_256++;
						}
						else
						{
							func_72(1);
						}
						break;
					
					default:
						func_72(1);
						break;
					}
				}
			}
	}
}

int func_69(int iParam0, int iParam1)//Position - 0x3024
{
	if (func_70(iParam0))
	{
		if (unk_0x78F50AA8F955BEFC(iParam0, iParam1) == 1 || unk_0x78F50AA8F955BEFC(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0)//Position - 0x3057
{
	if (func_58(iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_71()//Position - 0x3077
{
	if (iLocal_78 == 1)
	{
		return 1;
	}
	if ((unk_0x53C562FD2B9E3AB0() - iLocal_76) < 4000)
	{
		return 0;
	}
	if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_51, 1))
	{
		return 0;
	}
	if (func_58(iLocal_49) && unk_0x27C8A4034A05DC21(iLocal_49))
	{
		return 0;
	}
	if (!unk_0x8EE3A848975DDF21(iLocal_51, -1, 0))
	{
		return 0;
	}
	return 1;
}

void func_72(int iParam0)//Position - 0x30D5
{
	if (func_58(iLocal_50))
	{
		if (iParam0 == 1)
		{
			if (!unk_0xC816B63289F7A279(iLocal_50) && func_58(unk_0xFC1458A37D98B502()))
			{
				unk_0x57FB41CABA25835C(iLocal_50, unk_0x92736F90715344D4(unk_0xFC1458A37D98B502()));
				unk_0xA7C52BDFAE69B37F(iLocal_50, 1);
				unk_0x0C46726453B1DC97(func_73(), 2f, -1f, -1082130432);
				unk_0x60C06BFD037BB7CF(iLocal_50, unk_0xFC1458A37D98B502(), -1, 0, 2);
			}
		}
		else if (unk_0xC816B63289F7A279(iLocal_50))
		{
			unk_0x88235B448509228B(iLocal_50);
		}
	}
}

int func_73()//Position - 0x314A
{
	return unk_0x7C65CFD05F3B9CE9(unk_0x98EC0789D9F0703B());
}

int func_74()//Position - 0x315A
{
	if (iLocal_263 == 3)
	{
		if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1875,858f, 262,3736f, 82,96029f, -1927,379f, 234,7951f, 90,71558f, 50,25f, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_75(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x319F
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_83(iParam0, iParam1);
	if (!func_58(iParam0) || !func_58(iParam1))
	{
		if (iVar2 != -1)
		{
			func_82(&(Local_44[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_79(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_78();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_44[iVar2 /*4*/].f_1 = iParam0;
		Local_44[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_76(&(Local_44[iVar2 /*4*/]), vVar1, iParam1, &(Local_44[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x53C562FD2B9E3AB0() - Local_44[iVar2 /*4*/].f_3) < iParam4);
}

int func_76(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)//Position - 0x3260
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_58(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_77(iParam2, iParam5) };
		*uParam0 = unk_0x8941008352A0F66A(vParam1, vVar1 + vVar1 - vParam1 * Vector(0,1f, 0,1f, 0,1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = unk_0x16ACABF450EB00B4(*uParam0, &uVar0, &vVar1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x52C56492660097C7(iVar3))
	{
		func_58(iVar3);
		if (unk_0x07F64790D10D1DB5(iVar3) == iParam2)
		{
			if (bLocal_45)
			{
				unk_0x93C9563BFC895A66(vParam1, unk_0xB3328BA8976B416C(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = unk_0x53C562FD2B9E3AB0();
			return 1;
		}
		return 0;
	}
	if (unk_0x8A3FF8E81B40BB75(iVar3))
	{
		func_58(iVar3);
		if (unk_0x88DDBE9908752BF0(iParam2, 0))
		{
			if (unk_0x79A6CD762DCCABE4(iVar3) == unk_0xDFD115BB10FE46A9(iParam2, 0))
			{
				if (bLocal_45)
				{
					unk_0x93C9563BFC895A66(vParam1, unk_0xB3328BA8976B416C(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = unk_0x53C562FD2B9E3AB0();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_77(int iParam0, int iParam1)//Position - 0x338C
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x63A6486593EC7EC3(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xB3328BA8976B416C(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0xD0E00576168D19BB(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0xD0E00576168D19BB(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0xD0E00576168D19BB(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0xD0E00576168D19BB(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0xD0E00576168D19BB(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xB3328BA8976B416C(iParam0, 1);
}

int func_78()//Position - 0x3451
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_44)
	{
		if ((Local_44[iVar0 /*4*/] == 0 && Local_44[iVar0 /*4*/].f_1 == 0) && Local_44[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_79(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x349B
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_81(unk_0xB3328BA8976B416C(iParam1, 1) - unk_0xB3328BA8976B416C(iParam0, 1)) };
	if (fParam2 < 0,1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { unk_0xCE3B2111021F7234(iParam0) };
	}
	else
	{
		vVar1 = { func_81(unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 5f, 0f) - unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_80(vVar1, vVar0);
	if (fVar2 <= system::cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_80(vector3 vParam0, vector3 vParam1)//Position - 0x352C
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_81(vector3 vParam0)//Position - 0x354D
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

void func_82(var uParam0)//Position - 0x358C
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_83(int iParam0, int iParam1)//Position - 0x35A7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_44)
	{
		if (Local_44[iVar0 /*4*/].f_1 == iParam0 && Local_44[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_84()//Position - 0x35E6
{
	if (iLocal_78 == 0 && func_58(iLocal_50))
	{
		if (func_69(iLocal_50, 242628503))
		{
			unk_0xB8E08BD5B184DF4E(iLocal_50);
		}
		if ((((!func_69(iLocal_50, -2017877118) && !unk_0xCA3C40448996C9BA(iLocal_50, unk_0xFC1458A37D98B502(), 20f)) && unk_0x78F50AA8F955BEFC(iLocal_50, -875674219) == 7) && !unk_0x9F887157983E8EFC(iLocal_50)) && !unk_0x7CE28D2DD2AF0F42(iLocal_50))
		{
			unk_0xAC838A977FB6E6BC(iLocal_50, unk_0xFC1458A37D98B502(), 0);
			unk_0x60C06BFD037BB7CF(iLocal_50, unk_0xFC1458A37D98B502(), -1, 0, 2);
		}
	}
}

void func_85(int iParam0, var uParam1)//Position - 0x367A
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x53C562FD2B9E3AB0();
	}
	if (unk_0xA6DECE14FC9A8C51(iParam0))
	{
		iVar0 = (unk_0x53C562FD2B9E3AB0() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = system::ceil((system::to_float(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x94540F498465F1A2(iParam0) != 255)
				{
					unk_0xF20857E4CB32A2B7(iParam0, 255);
				}
			}
			else if (unk_0x94540F498465F1A2(iParam0) != 0)
			{
				unk_0xF20857E4CB32A2B7(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x94540F498465F1A2(iParam0) != 255)
			{
				unk_0xF20857E4CB32A2B7(iParam0, 255);
			}
		}
	}
}

void func_86()//Position - 0x3719
{
	if (func_58(iLocal_49))
	{
		if (iLocal_68 == 0)
		{
			unk_0xE17958D3FD0F9EE9(iLocal_49, 2, false);
			unk_0xB8E08BD5B184DF4E(iLocal_49);
			if (func_67(iLocal_51))
			{
				if (iLocal_263 == 2)
				{
					if (unk_0x8DDE799D31A3D099(iLocal_51))
					{
						unk_0x7674774BB9279265(iLocal_51);
					}
					unk_0x9E6ACDF1473CD846(1, "RE_BikeThief2");
				}
				if (unk_0xA8D0477084E86A92(iLocal_49, iLocal_51, 1))
				{
					unk_0x53E2E21693202DA8(iLocal_49);
				}
			}
			unk_0xE9B3D12A64CC7C1A(iLocal_49, true);
			unk_0xD68E88A8E0BE8697(iLocal_49, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
			iLocal_68 = 1;
		}
		else
		{
			if (((((iLocal_69 == 0 && func_57(iLocal_49, unk_0xFC1458A37D98B502(), 1) < 30f) && !unk_0x9F887157983E8EFC(iLocal_49)) && func_69(iLocal_49, 1805844857)) && !func_19()) && func_2(&uLocal_82, "REBTHAU", sLocal_251, 4, 0, 0, 0))
			{
				iLocal_69 = 1;
			}
			if (func_57(iLocal_49, unk_0xFC1458A37D98B502(), 1) > 50f)
			{
				func_87(&iLocal_49, 1, 0, 1);
			}
		}
	}
}

void func_87(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x380F
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(*iParam0))
		{
			unk_0xCFF0CD14B439821D(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				unk_0x2CEA76A7F93740C6(*iParam0);
			}
			unk_0xE9B3D12A64CC7C1A(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x771A86309E0CA47B(*iParam0, false);
			}
		}
		unk_0x486F346ADFE56674(iParam0);
	}
}

void func_88()//Position - 0x385F
{
	if ((func_58(iLocal_49) && func_58(iLocal_50)) && func_67(iLocal_51))
	{
		if (func_95())
		{
			func_93(&uLocal_276, 0, 0);
			func_92(&iLocal_49);
			func_91(&iLocal_51);
			if (unk_0x21B6FFFD04C9FF3A(iLocal_50, unk_0xFC1458A37D98B502(), 25f, 25f, 25f, 0, 1, 0) && func_2(&uLocal_82, "REBTHAU", sLocal_255, 4, 0, 0, 0))
			{
			}
			unk_0x2EA90674750EA01E(iLocal_50, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
			func_90();
		}
		else
		{
			func_89(iLocal_79, iLocal_51, fLocal_65, 1061158912, 0);
		}
	}
}

void func_89(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)//Position - 0x38F9
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xA6DECE14FC9A8C51(iParam0))
	{
		if ((unk_0x6ADD12BF4D6D2587(iParam1) && unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502())) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (unk_0x8A3FF8E81B40BB75(iParam1))
			{
				if (unk_0xB8DE76287EDC4957(unk_0x79A6CD762DCCABE4(iParam1), 0))
				{
					fVar1 = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iParam1, 1), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = system::round((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x0A8FD2D5529E1737(iParam0, 1);
						unk_0xF20857E4CB32A2B7(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x0A8FD2D5529E1737(iParam0, 0);
						unk_0xF20857E4CB32A2B7(iParam0, 255);
					}
				}
			}
			else if (unk_0x52C56492660097C7(iParam1))
			{
				if (!unk_0x3AB6A1A9084FB0A4(unk_0x07F64790D10D1DB5(iParam1)))
				{
					fVar1 = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iParam1, 1), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = system::round(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x0A8FD2D5529E1737(iParam0, 1);
						unk_0xF20857E4CB32A2B7(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x0A8FD2D5529E1737(iParam0, 0);
						unk_0xF20857E4CB32A2B7(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_90()//Position - 0x3A52
{
	func_220();
}

void func_91(int iParam0)//Position - 0x3A5E
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (!unk_0x9761C10D57B68069(*iParam0))
		{
			unk_0xDD29FF4BAB8AFF9C(*iParam0, true, 0);
		}
		if (func_67(*iParam0))
		{
			if (unk_0x9761C10D57B68069(*iParam0) && unk_0xCB234F3DD6FF9368(*iParam0, 1))
			{
				if (func_58(unk_0xFC1458A37D98B502()))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), *iParam0, 0))
					{
						unk_0x5380482A432E314E(iParam0);
						return;
					}
				}
				unk_0xC91FE17AD7353B70(iParam0);
			}
		}
		else
		{
			if (func_58(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), *iParam0, 0))
				{
					unk_0x5380482A432E314E(iParam0);
					return;
				}
			}
			unk_0xC91FE17AD7353B70(iParam0);
		}
	}
}

void func_92(int iParam0)//Position - 0x3AFA
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

void func_93(var uParam0, int iParam1, int iParam2)//Position - 0x3B3B
{
	char* sVar0;
	
	if (unk_0x3A711520F83BAE98())
	{
		if (unk_0xC80D31E4B587871C(Global_2512808.f_4556, 26))
		{
			return;
		}
	}
	if (unk_0x38DF88792E2574E5())
	{
		unk_0x2C5E25A27FEE0F8A(iParam2);
		unk_0x704F5ADD5B29DB63("FocusIn");
		unk_0xE02E32C69260FBB7("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xA91E83FF512776B6("FocusOut", 0, 0);
			unk_0x4AFBCBFDE748D4E0(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0xBC3B7443617858A0(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x8C1C362CA8299475(sVar0))
	{
		if (!unk_0x3A711520F83BAE98())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x8C1C362CA8299475(uParam0->f_3))
	{
		if (func_94(uParam0->f_3))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
	if (!unk_0x8C1C362CA8299475(sVar0))
	{
		if (func_94(sVar0))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
}

int func_94(char* sParam0)//Position - 0x3C18
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

int func_95()//Position - 0x3C2B
{
	if (func_57(iLocal_51, unk_0xFC1458A37D98B502(), 1) > (fLocal_65 + 100f))
	{
		return 1;
	}
	if (func_57(iLocal_51, unk_0xFC1458A37D98B502(), 1) > fLocal_65)
	{
		if (((unk_0xA5F6598E13F98E08(iLocal_50, sLocal_267, "IDLE_A", 3) && unk_0x7A70772AE40E3821(iLocal_50, sLocal_267, "IDLE_A") > 0,99f) || (unk_0xA5F6598E13F98E08(iLocal_50, sLocal_267, "IDLE_B", 3) && unk_0x7A70772AE40E3821(iLocal_50, sLocal_267, "IDLE_B") > 0,99f)) || (unk_0xA5F6598E13F98E08(iLocal_50, sLocal_267, "IDLE_C", 3) && unk_0x7A70772AE40E3821(iLocal_50, sLocal_267, "IDLE_C") > 0,99f))
		{
			return 1;
		}
	}
	return 0;
}

void func_96()//Position - 0x3CE5
{
	if ((((((((((iLocal_75 > -1 && (unk_0x53C562FD2B9E3AB0() - iLocal_75) > 5000) && !func_19()) && func_58(iLocal_49)) && func_58(iLocal_50)) && func_67(iLocal_51)) && !unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_49, 13f, 13f, 13f, 0, 1, 0)) && !unk_0x21B6FFFD04C9FF3A(iLocal_50, iLocal_49, 13f, 13f, 13f, 0, 1, 0)) && unk_0xA8D0477084E86A92(iLocal_49, iLocal_51, 0)) && unk_0x21B6FFFD04C9FF3A(iLocal_50, unk_0xFC1458A37D98B502(), 8f, 8f, 8f, 0, 1, 0)) && func_2(&uLocal_82, "REBTHAU", sLocal_250, 4, 0, 0, 0))
	{
		iLocal_75 = -1;
	}
}

void func_97()//Position - 0x3DB8
{
	if (func_98())
	{
		iLocal_76 = unk_0x53C562FD2B9E3AB0();
		func_65(&iLocal_79);
		func_93(&uLocal_276, 0, 0);
		unk_0xC234848D21B6064E(0);
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
		{
			iLocal_52 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 1);
			unk_0xDD29FF4BAB8AFF9C(iLocal_52, true, 1);
		}
		if (func_58(iLocal_50))
		{
			unk_0xCB3D88C918AA637C(iLocal_50);
		}
		if ((func_58(iLocal_49) && !func_19()) && func_2(&uLocal_82, "REBTHAU", "REBTH_INAIR", 4, 0, 0, 0))
		{
		}
		iLocal_47 = 3;
	}
	else
	{
		if (((bLocal_272 == 0 && unk_0xA6DECE14FC9A8C51(iLocal_79)) && func_58(unk_0xFC1458A37D98B502())) && func_58(iLocal_49))
		{
			if (func_57(unk_0xFC1458A37D98B502(), iLocal_49, 1) < 30f || unk_0x5679106BC7ED79EE(unk_0xB3328BA8976B416C(iLocal_49, 1), 10f, 1))
			{
				bLocal_272 = true;
				unk_0x9C27373CC69ECF87(iLocal_79, bLocal_272);
			}
		}
		if (((iLocal_263 == 2 && func_58(iLocal_49)) && func_67(iLocal_51)) && unk_0xA8D0477084E86A92(iLocal_49, iLocal_51, 0))
		{
			if (iLocal_260 == 0)
			{
				unk_0x5CA96D6783EE6897(iLocal_51, 1, "RE_BikeThief2", 30f, 786468);
				iLocal_260 = 1;
				vLocal_261 = { unk_0xADCBC459AA10697F(unk_0xBAFDD5E72D902333(1, "RE_BikeThief2"), unk_0x3413A86ABE2F138E(1, "RE_BikeThief2")) };
			}
			else if (!unk_0x8DDE799D31A3D099(iLocal_51) || func_219(iLocal_51, vLocal_261, 1) < 5f)
			{
				if (unk_0x8DDE799D31A3D099(iLocal_51))
				{
					unk_0x7674774BB9279265(iLocal_51);
				}
				unk_0xD2C269DBF147B406(iLocal_49, iLocal_51, unk_0xFC1458A37D98B502(), 8, fLocal_62, 786468, 10f, 1f, 0);
			}
		}
	}
}

int func_98()//Position - 0x3F52
{
	if (!func_58(iLocal_49))
	{
		return 1;
	}
	else if (func_58(iLocal_51))
	{
		if (iLocal_290 == 0)
		{
			if (unk_0xA8D0477084E86A92(iLocal_49, iLocal_51, 0))
			{
				iLocal_290 = 1;
			}
		}
		else if (!unk_0xA8D0477084E86A92(iLocal_49, iLocal_51, 0))
		{
			return 1;
		}
		if (unk_0xEBE499597C718EB8(iLocal_49, unk_0xFC1458A37D98B502(), 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_99()//Position - 0x3FB2
{
	if ((func_58(iLocal_49) && func_67(iLocal_51)) && unk_0xA8D0477084E86A92(iLocal_49, iLocal_51, 0))
	{
		if (iLocal_67)
		{
			if (!unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_49, 40f, 40f, 40f, 0, 1, 0))
			{
				fLocal_62 = fLocal_64;
				unk_0x77142E6A702D63D1(iLocal_49, fLocal_62);
				unk_0x60C06BFD037BB7CF(iLocal_49, unk_0xFC1458A37D98B502(), 20000, 16, 2);
				iLocal_67 = 0;
			}
		}
		else if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_49, 40f, 40f, 40f, 0, 1, 0))
		{
			fLocal_62 = fLocal_63;
			unk_0x77142E6A702D63D1(iLocal_49, fLocal_62);
			unk_0x60C06BFD037BB7CF(iLocal_49, unk_0xFC1458A37D98B502(), 20000, 16, 2);
			iLocal_67 = 1;
		}
	}
}

void func_100()//Position - 0x4063
{
	if (((((((((iLocal_73 < 5 && !func_19()) && func_58(iLocal_49)) && func_58(iLocal_50)) && func_67(iLocal_51)) && unk_0xA8D0477084E86A92(iLocal_49, iLocal_51, 0)) && unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_49, 13f, 13f, 13f, 0, 1, 0)) && !unk_0x21B6FFFD04C9FF3A(iLocal_50, iLocal_49, 13f, 13f, 13f, 0, 1, 0)) && (unk_0x53C562FD2B9E3AB0() - iLocal_74) > 15000) && func_2(&uLocal_82, "REBTHAU", sLocal_252, 4, 0, 0, 0))
	{
		if (unk_0x78F50AA8F955BEFC(iLocal_49, -1273030092) == 1 && !unk_0x4890D16618AA3B9C(iLocal_49))
		{
			unk_0x3D625AB3CFE71DF3(iLocal_49, unk_0xFC1458A37D98B502(), 0, 0f, 0f, 0f, 15f, 50, 1, -753768974);
		}
		iLocal_74 = unk_0x53C562FD2B9E3AB0();
		iLocal_73++;
	}
}

void func_101()//Position - 0x4154
{
	if ((((iLocal_258 == 0 && func_58(iLocal_50)) && func_58(iLocal_49)) && func_67(iLocal_51)) && unk_0xA8D0477084E86A92(iLocal_49, iLocal_51, 0))
	{
		if (iLocal_273 == 0)
		{
			if (func_2(&uLocal_82, "REBTHAU", sLocal_247, 4, func_104(), 0, 0))
			{
				unk_0x957CEE967C939968(iLocal_50);
				unk_0x6931076730A4AC5D(&iLocal_53);
				unk_0x60C06BFD037BB7CF(0, iLocal_49, -1, 2048, 2);
				unk_0x6EF694689373EE8D(0, vLocal_57, 2f, 20000, 1193033728, 1056964608);
				unk_0xAC838A977FB6E6BC(0, iLocal_51, 1000);
				unk_0x12C9D41D52A560D6(0, sLocal_265, sLocal_266, 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, sLocal_267, "IDLE_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, sLocal_267, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, sLocal_267, "IDLE_C", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, sLocal_267, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, sLocal_267, "IDLE_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, sLocal_267, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, sLocal_267, "IDLE_C", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x1B16DD5C115FE009(iLocal_53);
				unk_0xAB30B1CF01A198C1(iLocal_50, iLocal_53);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_53);
				iLocal_74 = unk_0x53C562FD2B9E3AB0();
				iLocal_75 = unk_0x53C562FD2B9E3AB0();
				if (iLocal_263 == 3)
				{
					sLocal_248 = "REBTH_HELP2X";
				}
				else
				{
					sLocal_248 = "REBTH_HELP2";
				}
				iLocal_273 = 1;
			}
		}
		else if (func_58(unk_0xFC1458A37D98B502()))
		{
			if (func_57(unk_0xFC1458A37D98B502(), iLocal_50, 1) < 30f)
			{
				if (!func_19())
				{
					if (func_2(&uLocal_82, "REBTHAU", sLocal_248, 4, 0, 0, 0))
					{
						iLocal_258 = 1;
					}
				}
				else if (iLocal_274 == 0)
				{
					func_102();
					iLocal_274 = 1;
				}
			}
		}
	}
}

void func_102()//Position - 0x4357
{
	Global_14622 = 0;
	func_103();
}

void func_103()//Position - 0x4367
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

int func_104()//Position - 0x438B
{
	int iVar0;
	vector3 vVar1;
	
	vVar1 = { 100f, 100f, 20f };
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_50))
	{
		if (unk_0x21B6FFFD04C9FF3A(iLocal_50, unk_0xFC1458A37D98B502(), vVar1, 0, 1, 0))
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_105()//Position - 0x43CF
{
	if ((func_58(iLocal_49) && func_67(iLocal_51)) && unk_0xA8D0477084E86A92(iLocal_49, iLocal_51, 0))
	{
		func_106(&uLocal_276, iLocal_51, 0, 0, 1, 1, 1);
	}
}

void func_106(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x4407
{
	func_107(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_107(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x4424
{
	func_108(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_108(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x4442
{
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		func_93(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_109(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_109(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x447A
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x38DF88792E2574E5())
	{
		if (unk_0x53C562FD2B9E3AB0() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (unk_0x8C1C362CA8299475(iVar0))
	{
		if (!unk_0x3A711520F83BAE98())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_94(iVar0))
	{
		func_135();
	}
	if (func_134(iParam1) && unk_0xDE3C98B57A41E603(iParam1))
	{
		iVar1 = 0;
		if (unk_0x52C56492660097C7(iParam1))
		{
			unk_0x2BBAE63213C46A53(unk_0x07F64790D10D1DB5(iParam1));
			unk_0xCD0F114AD6BF60EF(unk_0x07F64790D10D1DB5(iParam1), 1);
			if (unk_0xE5DC4C97F224C40D(unk_0x07F64790D10D1DB5(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8A3FF8E81B40BB75(iParam1))
		{
			unk_0xCCC628BF28A8DFAA(unk_0x79A6CD762DCCABE4(iParam1));
			if (unk_0xCBEBCF7C9A28DE5C(unk_0x79A6CD762DCCABE4(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x0423B20CB20B7901(iParam1))
		{
			unk_0x18D4723323F29A6F(unk_0xE5D69D5333979D8B(iParam1));
			if (unk_0x28F138D7B5EE3C9A(unk_0xE5D69D5333979D8B(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x38DF88792E2574E5())
		{
			if (func_129(uParam0, bParam5, bParam7, 0))
			{
				func_125(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_114(iVar0))
				{
					if ((unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0)) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if ((iVar1 && !unk_0xF491DD47B88AA84E()) && uParam6)
						{
							if (!func_94(iVar0))
							{
								func_113(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
								{
									func_112(1);
								}
							}
						}
					}
				}
			}
			else if (func_114(iVar0))
			{
				if (unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0))
				{
					if (((unk_0x841ED61760A7D07B(iParam1) && iVar1) && !unk_0xF491DD47B88AA84E()) && uParam6)
					{
						if (!func_94(iVar0))
						{
							func_113(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
							{
								func_112(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x8C1C362CA8299475(sParam3))
			{
				if (func_94(sParam3))
				{
					unk_0x3E80C2F7BC665259(1);
				}
			}
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
			{
				if (unk_0x42CEF0F4671324EA(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(3) == 3 || unk_0x8E8C94609BA4BEA9(3) == 4)
					{
						func_93(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(6) == 3 || unk_0x8E8C94609BA4BEA9(6) == 4)
					{
						func_93(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(4) == 3 || unk_0x8E8C94609BA4BEA9(4) == 4)
					{
						func_93(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(5) == 3 || unk_0x8E8C94609BA4BEA9(5) == 4)
					{
						func_93(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(2) == 3 || unk_0x8E8C94609BA4BEA9(2) == 4)
					{
						func_93(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x60584F41FBCE28CD() == 3 || unk_0x60584F41FBCE28CD() == 4)
				{
					func_93(uParam0, iVar0, 1);
				}
			}
			if (!func_129(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_111(uParam0))
				{
					func_110(uParam0);
				}
			}
		}
	}
	else
	{
		func_93(uParam0, iVar0, 0);
	}
}

void func_110(var uParam0)//Position - 0x47E7
{
	if (func_134(unk_0xFC1458A37D98B502()))
	{
		unk_0xCB3D88C918AA637C(unk_0xFC1458A37D98B502());
	}
	if (unk_0x38DF88792E2574E5())
	{
		unk_0xBC3B7443617858A0(true);
		unk_0x2C5E25A27FEE0F8A(0);
		unk_0xE02E32C69260FBB7("HINT_CAM_SCENE");
		unk_0x704F5ADD5B29DB63("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xA91E83FF512776B6("FocusOut", 0, 0);
			unk_0x4AFBCBFDE748D4E0(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_111(var uParam0)//Position - 0x4850
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x53C562FD2B9E3AB0()
		{
			return 1;
		}
	}
	return 0;
}

int func_112(bool bParam0)//Position - 0x487B
{
	switch (Global_35861)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_104555.f_10019.f_100++;
			}
			return Global_104555.f_10019.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_104555.f_10019.f_101++;
			}
			return Global_104555.f_10019.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_104555.f_10019.f_102++;
			}
			return Global_104555.f_10019.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_113(char* sParam0, int iParam1)//Position - 0x4925
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

int func_114(char* sParam0)//Position - 0x493C
{
	if (!func_115(1, 1, 0))
	{
		if ((!unk_0xAB019B170BF1309C(sParam0) && func_94(sParam0)) || func_94("CMN_HINT"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		return 0;
	}
	switch (Global_35861)
	{
		case 0:
		case 3:
			if (func_112(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_112(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_112(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_115(bool bParam0, bool bParam1, bool bParam2)//Position - 0x49D5
{
	if (bParam0)
	{
		if (!unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x1E06D00B67177A18())
	{
		return 0;
	}
	if (func_124(0))
	{
		return 0;
	}
	if (func_123())
	{
		return 0;
	}
	if (unk_0x02BBA5FDE77816B9())
	{
		return 0;
	}
	if (Global_68215)
	{
		return 0;
	}
	if (unk_0x8F38E94BBF3404CD(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53084)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
		{
			if (unk_0x42CEF0F4671324EA(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(3) == 3 || unk_0x8E8C94609BA4BEA9(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(6) == 3 || unk_0x8E8C94609BA4BEA9(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(4) == 3 || unk_0x8E8C94609BA4BEA9(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(5) == 3 || unk_0x8E8C94609BA4BEA9(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(2) == 3 || unk_0x8E8C94609BA4BEA9(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x60584F41FBCE28CD() == 3 || unk_0x60584F41FBCE28CD() == 4)
			{
				return 0;
			}
			if (unk_0x213F4DB5EC433017())
			{
				return 0;
			}
		}
	}
	if ((func_122() || func_121(Global_4456448.f_143970)) || func_120())
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if ((unk_0x841136DE070DD9F6(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), func_119(unk_0xFC1458A37D98B502(), 0)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 562680400 && func_119(unk_0xFC1458A37D98B502(), 0) != -1)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 1181327175 && func_119(unk_0xFC1458A37D98B502(), 0) != -1))
			{
				return 0;
			}
		}
	}
	if (func_116(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_116(int iParam0)//Position - 0x4C00
{
	if (iParam0 != func_118())
	{
		if (func_117(iParam0, 1, 1))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x9EB17624F44A8DA4()) && func_117(iParam0, 1, 0))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

int func_117(int iParam0, bool bParam1, bool bParam2)//Position - 0x4C66
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

int func_118()//Position - 0x4CB0
{
	return -1;
}

int func_119(int iParam0, int iParam1)//Position - 0x4CB9
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

var func_120()//Position - 0x4D3E
{
	return Global_2447174.f_16;
}

bool func_121(int iParam0)//Position - 0x4D4C
{
	return iParam0 == 51;
}

var func_122()//Position - 0x4D59
{
	return Global_2447174.f_15;
}

bool func_123()//Position - 0x4D67
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

int func_124(int iParam0)//Position - 0x4D7C
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

void func_125(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x4DD6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1316747 == 1)
	{
		return;
	}
	if (unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		func_93(uParam0, 0, 0);
	}
	if (func_128(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x52C56492660097C7(iParam1))
		{
			iVar0 = unk_0x07F64790D10D1DB5(iParam1);
			if (!unk_0x88DDBE9908752BF0(iVar0, 0))
			{
				if (unk_0x1417A5CC924DE120(iVar0))
				{
					if (!func_126())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x6668BA66B78B4E7C(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xBC3B7443617858A0(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0xCDB72D70019A533E(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iParam1, -1, iVar3, iVar4);
	unk_0xA91E83FF512776B6("FocusIn", 0, 0);
	unk_0xE859EF37EA7362D3("HINT_CAM_SCENE");
	unk_0x4AFBCBFDE748D4E0(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x53C562FD2B9E3AB0();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_126()//Position - 0x4EE6
{
	return func_127(unk_0x9EB17624F44A8DA4());
}

int func_127(int iParam0)//Position - 0x4EF6
{
	if (unk_0x82FF3DFBC3965CC0(unk_0x25D049AAC4603E65(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_128(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x4F15
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_129(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x4F5C
{
	if (uParam0->f_1)
	{
		if (unk_0x53C562FD2B9E3AB0() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
				{
					if (func_133(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_132(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_132(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_133(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_111(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x53C562FD2B9E3AB0() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
					{
						if (!func_133(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_132(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_132(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_133(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
				{
					if (!func_133(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_132(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_132(bParam1, bParam2, bParam3) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) || unk_0x7760DB8F51041367(unk_0xFC1458A37D98B502(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_133(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x53C562FD2B9E3AB0() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
					{
						if (func_131(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_130(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) || func_130(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) || unk_0x7760DB8F51041367(unk_0xFC1458A37D98B502(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_131(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_111(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_115(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_135();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_130(bool bParam0, bool bParam1, bool bParam2)//Position - 0x52C8
{
	if (!func_115(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!unk_0x19A6176969EAC49E(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x4FB260623DD93924(0, 140, 1);
			unk_0x4FB260623DD93924(0, 80, 1);
			if (unk_0x3D96C1C362D3E31D(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_131(bool bParam0, bool bParam1, bool bParam2)//Position - 0x531A
{
	if (!func_115(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4FB260623DD93924(0, 80, 1);
		if (unk_0x06A32CFD60F8BCE6())
		{
			if (unk_0x3D96C1C362D3E31D(0, 80))
			{
				unk_0xBC3B7443617858A0(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_132(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5363
{
	if (!func_115(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!unk_0x19A6176969EAC49E(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x4FB260623DD93924(0, 140, 1);
			unk_0x4FB260623DD93924(0, 80, 1);
			if (unk_0x5A632962B08A1872(0, 80) && unk_0x53C562FD2B9E3AB0() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_133(bool bParam0, bool bParam1, bool bParam2)//Position - 0x53C2
{
	if (!func_115(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4FB260623DD93924(0, 80, 1);
		if (unk_0x06A32CFD60F8BCE6())
		{
			if (unk_0x5A632962B08A1872(0, 80) && unk_0x53C562FD2B9E3AB0() > Global_116)
			{
				unk_0xBC3B7443617858A0(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_134(int iParam0)//Position - 0x5418
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0x8A3FF8E81B40BB75(iParam0))
		{
			if (unk_0xB8DE76287EDC4957(unk_0x79A6CD762DCCABE4(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x52C56492660097C7(iParam0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0x07F64790D10D1DB5(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x0423B20CB20B7901(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_135()//Position - 0x5473
{
	unk_0x872F1C1F8587CCC7(&Global_2324, 4);
}

void func_136()//Position - 0x5483
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_49))
	{
		if (unk_0x3AB6A1A9084FB0A4(iLocal_49))
		{
			func_152();
			func_220();
		}
		else if (func_147())
		{
			if (func_9() == 0)
			{
				func_146(&uLocal_82, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
				sLocal_249 = "REBTH_RESPM";
			}
			else if (func_9() == 1)
			{
				func_146(&uLocal_82, 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 0, 1);
				sLocal_249 = "REBTH_RESPF";
			}
			else if (func_9() == 2)
			{
				func_146(&uLocal_82, 0, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
				sLocal_249 = "REBTH_RESPT";
			}
			if (unk_0xB8DE76287EDC4957(iLocal_51, 0) && !unk_0x3AB6A1A9084FB0A4(iLocal_49))
			{
				if (iLocal_263 == 2)
				{
					unk_0x6F8C8278B7C06889(iLocal_49, iLocal_51, 20000, -1, 2f, 1, 0);
				}
				else
				{
					unk_0x6931076730A4AC5D(&iLocal_53);
					unk_0x6F8C8278B7C06889(0, iLocal_51, 20000, -1, 2f, 1, 0);
					unk_0xD2C269DBF147B406(0, iLocal_51, unk_0xFC1458A37D98B502(), 8, fLocal_62, 786468, 10f, 1f, 0);
					unk_0x1B16DD5C115FE009(iLocal_53);
					unk_0xAB30B1CF01A198C1(iLocal_49, iLocal_53);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_53);
					unk_0xE9B3D12A64CC7C1A(iLocal_49, true);
				}
			}
			func_65(&iLocal_81);
			iLocal_79 = func_61(iLocal_49, 1, 145);
			unk_0x9C27373CC69ECF87(iLocal_79, bLocal_272);
			unk_0xC234848D21B6064E(2);
			if (iLocal_263 == 1)
			{
				unk_0xA846A937885EB977(472,195f, -1974,902f, 18,57787f, 572,7468f, -1921,216f, 28,68633f, 75f, 0, false, 1);
			}
			iLocal_47 = 2;
			func_137(1);
		}
	}
}

int func_137(int iParam0)//Position - 0x55EE
{
	if (func_140())
	{
		Global_104545 = 1;
		Global_104542 = unk_0x53C562FD2B9E3AB0();
		if (func_41(Global_104544))
		{
			func_138(0);
		}
		unk_0x218409883979C46E(1, "RE_TITLE");
		if (iParam0 && func_41(Global_104544))
		{
			unk_0xE56ECFD267E53FC5();
		}
		return 1;
	}
	return 0;
}

void func_138(int iParam0)//Position - 0x5641
{
	switch (iParam0)
	{
		case 0:
			if (Global_104555.f_24965.f_2 < 3)
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_113(func_139(iParam0), -1);
					Global_104555.f_24965.f_2++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xC80D31E4B587871C(Global_104551, 1))
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_113(func_139(iParam0), -1);
					Global_104555.f_24965.f_3++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xC80D31E4B587871C(Global_104551, 2))
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_113(func_139(iParam0), -1);
					Global_104555.f_24965.f_4++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 2);
				}
			}
			break;
	}
}

char* func_139(int iParam0)//Position - 0x5722
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_140()//Position - 0x5765
{
	switch (func_141(&Global_25292, 0, 5, 0, unk_0xBBA15366508D1BDE()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_141(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x579B
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90456.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_145(0))
		{
			return 0;
		}
		Global_35825++;
		*uParam0 = Global_35825;
		unk_0x8FA21D9CF7681249(unk_0x98EC0789D9F0703B(), 0);
		Global_17162.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xE6ABE74AEC92281D(8);
		}
		Global_35861 = iParam2;
		Global_35823 = *uParam0;
		Global_35824 = iParam4;
		Global_35822 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35822 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35822)
			{
				if (Global_35828[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35823 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_143(iParam2))
		{
			return 0;
		}
		if (Global_35822 == 8)
		{
			return 0;
		}
		Global_35825++;
		*uParam0 = Global_35825;
		Global_35828[Global_35822 /*4*/] = Global_35825;
		Global_35828[Global_35822 /*4*/].f_1 = iParam1;
		Global_35828[Global_35822 /*4*/].f_2 = iParam2;
		Global_35828[Global_35822 /*4*/].f_3 = 0;
		Global_35822++;
		if (iParam4 != 0)
		{
			func_142(uParam0, iParam4);
		}
	}
	return 2;
}

void func_142(var uParam0, int iParam1)//Position - 0x58D2
{
	int iVar0;
	
	if (Global_35822 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35822)
	{
		if (Global_35828[iVar0 /*4*/] == *uParam0)
		{
			Global_35828[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_143(int iParam0)//Position - 0x5921
{
	return func_144(iParam0, Global_35861);
}

int func_144(int iParam0, int iParam1)//Position - 0x5932
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

int func_145(int iParam0)//Position - 0x5B13
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_143(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_146(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x5B35
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

int func_147()//Position - 0x5BD0
{
	switch (iLocal_263)
	{
		case 1:
			if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 365,9538f, -1971,716f, 18,34454f, 526,409f, -1861,941f, 34,52906f, 100f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 886,1401f, -229,9373f, 67,42569f, 652,7365f, -91,95201f, 83,21314f, 60f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1969,382f, 382,1331f, 68,15017f, -1878,152f, 158,4052f, 104,8504f, 100f, 0, true, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_148()//Position - 0x5C9B
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 16f, 16f, 6f };
	vVar1 = { -16f, -16f, -6f };
	if (func_58(iLocal_49))
	{
		if (unk_0xEBE499597C718EB8(iLocal_49, unk_0xFC1458A37D98B502(), 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (func_67(iLocal_51))
	{
		if (unk_0xEBE499597C718EB8(iLocal_51, unk_0xFC1458A37D98B502(), 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (func_58(iLocal_50))
	{
		if (unk_0x5679106BC7ED79EE(unk_0xD0E00576168D19BB(iLocal_50, 31086, 0f, 0f, 0f), 3f, 1))
		{
			return 1;
		}
		vVar0 = { vVar0 + unk_0xD0E00576168D19BB(iLocal_50, 31086, 0f, 0f, 0f) };
		vVar1 = { vVar1 + unk_0xD0E00576168D19BB(iLocal_50, 31086, 0f, 0f, 0f) };
		if ((unk_0xAB0762B9CCAA2B6F(vVar1, vVar0, joaat("weapon_smokegrenade"), 1) || unk_0xAB0762B9CCAA2B6F(vVar1, vVar0, joaat("weapon_grenade"), 1)) || unk_0xAB0762B9CCAA2B6F(vVar1, vVar0, joaat("weapon_stickybomb"), 1))
		{
			return 1;
		}
		if (unk_0x71E1544E01ABC644(unk_0xD0E00576168D19BB(iLocal_50, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
		if (unk_0x4E69510C44147A5C(-1, unk_0xD0E00576168D19BB(iLocal_50, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
		if (unk_0xA6FA9E5D08F067AD(iLocal_50))
		{
			return 1;
		}
		if (unk_0xEBE499597C718EB8(iLocal_50, unk_0xFC1458A37D98B502(), 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_149()//Position - 0x5DEF
{
	if (iLocal_66 == 0)
	{
		switch (iLocal_263)
		{
			case 1:
				vLocal_56 = { 433,57f, -1916,68f, 24,04f };
				fLocal_60 = 248,5f;
				vLocal_57 = { 439,054f, -1920,145f, 23,5581f };
				vLocal_58 = { 434,31f, -1908,87f, 25,92f };
				fLocal_61 = -163,17f;
				vLocal_55 = { 435,18f, -1915,18f, 24,68f };
				fLocal_59 = 226,13f;
				fLocal_63 = 10f;
				fLocal_64 = 20f;
				iLocal_48 = joaat("scorcher");
				fLocal_65 = 250f;
				sLocal_253 = "REBTH_THX2";
				sLocal_254 = "REBTH_THX3";
				sLocal_255 = "REBTH_GONE";
				break;
			
			case 2:
				vLocal_56 = { 774,06f, -155,63f, 73,44f };
				fLocal_60 = 144,3932f;
				vLocal_57 = { 769,8723f, -156,9548f, 73,5144f };
				vLocal_58 = { 773,632f, -150,3134f, 74,6217f };
				fLocal_61 = 151,6004f;
				vLocal_55 = { 771,41f, -154,29f, 74,09f };
				fLocal_59 = 150,54f;
				fLocal_63 = 10f;
				fLocal_64 = 20f;
				iLocal_48 = joaat("scorcher");
				fLocal_65 = 250f;
				sLocal_253 = "REBTH_THX2";
				sLocal_254 = "REBTH_THX3";
				sLocal_255 = "REBTH_GONE";
				break;
			
			case 3:
				vLocal_56 = { -1927,94f, 254,7125f, 84,4018f };
				fLocal_60 = 285,0046f;
				vLocal_57 = { -1934,785f, 253,2105f, 83,8164f };
				vLocal_58 = { -1931,04f, 252,19f, 84,99f };
				fLocal_61 = 42,33f;
				vLocal_55 = { -1932,27f, 254,5f, 84,4f };
				fLocal_59 = 96,81f;
				fLocal_63 = 10f;
				fLocal_64 = 35f;
				iLocal_48 = joaat("bati");
				fLocal_65 = 400f;
				sLocal_253 = "REBTH_THX2X";
				sLocal_254 = "REBTH_THX3X";
				sLocal_255 = "REBTH_GONEX";
				break;
		}
		unk_0x4C15495E88D71C61(vLocal_56 - Vector(20f, 20f, 20f), vLocal_56 + Vector(20f, 20f, 20f), false, 1);
		unk_0x2EB451A3616DA1F8(vLocal_56 - Vector(20f, 20f, 20f), vLocal_56 + Vector(20f, 20f, 20f), 0);
		unk_0x247EAA2E93D4A021(vLocal_56, 20f, 1, 0, 0, false);
		iLocal_66 = 1;
	}
	unk_0x6FF834D85E2DD4C6(joaat("g_m_y_strpunk_01"));
	unk_0x6FF834D85E2DD4C6(joaat("a_m_y_beachvesp_01"));
	unk_0x6FF834D85E2DD4C6(iLocal_48);
	if ((((unk_0x9A0B2ED5055D3F0B(joaat("g_m_y_strpunk_01")) && unk_0x9A0B2ED5055D3F0B(joaat("a_m_y_beachvesp_01"))) && unk_0x9A0B2ED5055D3F0B(iLocal_48)) && func_151()) && func_150())
	{
		iLocal_51 = unk_0xEA60F3B426BB095B(iLocal_48, vLocal_55, fLocal_59, true, true, false);
		unk_0x14776E43F90DD454(iLocal_48);
		unk_0x2E4932E63763FE26(iLocal_48, true);
		unk_0xA15269351F50F113(iLocal_51, true, true, 0);
		unk_0x4D7D93C6E0C1063B(iLocal_51, false);
		unk_0x9D160A2C23D47EBA(iLocal_51, 0);
		unk_0x438D30A195B65156(iLocal_51, true);
		unk_0xE859EF37EA7362D3("RE_CAR_STEAL_SCENE");
		unk_0x6CF99BCE94E6F07C(iLocal_51, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		fLocal_62 = fLocal_64;
		if (iLocal_263 == 3)
		{
			unk_0x1E7A8525FB41AAFE(iLocal_51, 49, 0);
			unk_0xA0A6811A3E4062D1(iLocal_51, 0);
			unk_0xA9EF3F93CBFFF6D0(iLocal_51, 16, 2, false);
			unk_0xA9EF3F93CBFFF6D0(iLocal_51, 11, 3, false);
			unk_0xA9EF3F93CBFFF6D0(iLocal_51, 12, 2, false);
			unk_0xA9EF3F93CBFFF6D0(iLocal_51, 13, 2, false);
			unk_0xA9EF3F93CBFFF6D0(iLocal_51, 23, 10, false);
			unk_0xA9EF3F93CBFFF6D0(iLocal_51, 24, 10, false);
			unk_0x4705D420368126DF(iLocal_51, 22, true);
			unk_0x4705D420368126DF(iLocal_51, 17, true);
			unk_0x4705D420368126DF(iLocal_51, 21, true);
			unk_0x4705D420368126DF(iLocal_51, 20, true);
			unk_0x4705D420368126DF(iLocal_51, 19, true);
			unk_0x1E7A8525FB41AAFE(iLocal_51, 89, 89);
			unk_0xB1AB9FD8B4959960(iLocal_51, 0, 1);
			unk_0xFD5736F667C70A28(iLocal_51, 1);
		}
		unk_0x4DE114E3C7F8B7C2("re_bikethief_relGroupVictim", &iLocal_70);
		unk_0x4DE114E3C7F8B7C2("re_bikethief_relGroupThief", &iLocal_71);
		unk_0xF96119FCCD4D1889(5, iLocal_71, iLocal_70);
		unk_0xF96119FCCD4D1889(5, iLocal_71, 1862763509);
		unk_0xF96119FCCD4D1889(1, iLocal_70, 1862763509);
		iLocal_49 = unk_0xAC992EFAD62C33BF(19, joaat("g_m_y_strpunk_01"), vLocal_58, fLocal_61, 1, true);
		unk_0x14776E43F90DD454(joaat("g_m_y_strpunk_01"));
		unk_0x771A86309E0CA47B(iLocal_49, true);
		unk_0x35829E9BFCED1A3F(iLocal_49, true);
		unk_0xCE93FCB8A8D8DF0B(iLocal_49, iLocal_71);
		unk_0x4F9A62E773100FDC(iLocal_49, 3);
		unk_0xAE6EBBBBD8B9FB30(iLocal_49, 17, true);
		unk_0xAE6EBBBBD8B9FB30(iLocal_49, 13, false);
		unk_0xE17958D3FD0F9EE9(iLocal_49, 1, true);
		unk_0x35963CCE03600881(iLocal_49, 0);
		unk_0xAE01EF4BC84AFE7C(iLocal_49, 42, true);
		unk_0xAE01EF4BC84AFE7C(iLocal_49, 281, true);
		unk_0xB4AF8E4D052DCD63(iLocal_49, 2);
		unk_0x350CEE66BDF90273(iLocal_49, "G_M_Y_StreetPunk_01_BLACK_MINI_03");
		unk_0x12C9D41D52A560D6(iLocal_49, sLocal_264, "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
		iLocal_50 = unk_0xAC992EFAD62C33BF(19, joaat("a_m_y_beachvesp_01"), vLocal_56, fLocal_60, 1, true);
		unk_0x14776E43F90DD454(joaat("a_m_y_beachvesp_01"));
		unk_0x771A86309E0CA47B(iLocal_50, true);
		unk_0x35829E9BFCED1A3F(iLocal_50, true);
		unk_0xE17958D3FD0F9EE9(iLocal_50, 8, true);
		if (iLocal_263 == 3)
		{
			unk_0x35963CCE03600881(iLocal_50, 1);
		}
		else
		{
			unk_0x35963CCE03600881(iLocal_50, 0);
		}
		unk_0xAE01EF4BC84AFE7C(iLocal_50, 26, true);
		unk_0xAE01EF4BC84AFE7C(iLocal_50, 42, true);
		unk_0xAE01EF4BC84AFE7C(iLocal_50, 167, true);
		unk_0xAE01EF4BC84AFE7C(iLocal_50, 281, true);
		unk_0xCE93FCB8A8D8DF0B(iLocal_50, iLocal_70);
		unk_0x5C5D33A1B2711D21(iLocal_50, false);
		unk_0x350CEE66BDF90273(iLocal_50, "A_M_Y_BeachVesp_01_LATINO_MINI_01");
		unk_0x2EA90674750EA01E(iLocal_50, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
		func_146(&uLocal_82, 1, iLocal_49, "BThief", 0, 1);
		func_146(&uLocal_82, 2, iLocal_50, "BThiefVictim", 0, 1);
		if (iLocal_262 == 0)
		{
			if (iLocal_263 == 3)
			{
				sLocal_247 = "REBTH_HELPX";
			}
			else
			{
				sLocal_247 = "REBTH_HELP";
			}
			sLocal_251 = "REBTH_RUNSOF";
			sLocal_252 = "REBTH_TAUNT";
			sLocal_266 = "I_CANT_CATCH_HIM_ON_FOOT";
		}
		else if (iLocal_262 == 1)
		{
			if (iLocal_263 == 3)
			{
				sLocal_247 = "REBTH_HLPBX";
			}
			else
			{
				sLocal_247 = "REBTH_HLPB";
			}
			sLocal_251 = "REBTH_RUNB";
			sLocal_252 = "REBTH_TNTB";
			sLocal_266 = "MY_DADS_GOING_TO_KILL_ME";
		}
		else
		{
			sLocal_247 = "REBTH_HLPC";
			sLocal_251 = "REBTH_RUNC";
			sLocal_252 = "REBTH_TNTC";
			sLocal_266 = "PLEASE_MAN_YOU_GOTTA_HELP_ME";
		}
		unk_0xC1CEF375B44856F4(0);
		iLocal_47 = 1;
	}
}

int func_150()//Position - 0x6399
{
	if (iLocal_263 == 2)
	{
		unk_0x0D9525F20FB71C52(1, "RE_BikeThief2");
		if (!unk_0x0840F461D7BD8859(1, "RE_BikeThief2"))
		{
			return 0;
		}
	}
	return 1;
}

int func_151()//Position - 0x63C3
{
	unk_0x6450931B826B49D9(sLocal_264);
	unk_0x6450931B826B49D9(sLocal_265);
	unk_0x6450931B826B49D9(sLocal_267);
	unk_0x6450931B826B49D9(sLocal_268);
	unk_0x6450931B826B49D9(sLocal_270);
	unk_0x6450931B826B49D9(sLocal_269);
	if (((((unk_0x3A801AA34DD821BE(sLocal_264) && unk_0x3A801AA34DD821BE(sLocal_265)) && unk_0x3A801AA34DD821BE(sLocal_267)) && unk_0x3A801AA34DD821BE(sLocal_268)) && unk_0x3A801AA34DD821BE(sLocal_270)) && unk_0x3A801AA34DD821BE(sLocal_269))
	{
		return 1;
	}
	return 0;
}

void func_152()//Position - 0x6440
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_50))
	{
		if (func_69(iLocal_50, 993674639))
		{
			unk_0x957CEE967C939968(iLocal_50);
		}
		else
		{
			unk_0xB8E08BD5B184DF4E(iLocal_50);
		}
		unk_0xE9B3D12A64CC7C1A(iLocal_50, true);
		unk_0xD68E88A8E0BE8697(iLocal_50, unk_0xFC1458A37D98B502(), 100f, -1, 0, 0);
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_49))
	{
		unk_0xE9B3D12A64CC7C1A(iLocal_49, true);
		unk_0xD68E88A8E0BE8697(iLocal_49, unk_0xFC1458A37D98B502(), 100f, -1, 0, 1);
	}
}

int func_153()//Position - 0x64AB
{
	if (iLocal_47 == 0 && func_172())
	{
		return 1;
	}
	if (iLocal_47 == 1 && func_160())
	{
		return 1;
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_50))
	{
		if (unk_0x3AB6A1A9084FB0A4(iLocal_50))
		{
			return 1;
		}
		else if (unk_0xEBE499597C718EB8(iLocal_50, unk_0xFC1458A37D98B502(), 1))
		{
			func_158();
			func_157(&uLocal_82, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return 1;
		}
		else if (func_154(iLocal_50, 170f))
		{
			func_158();
			func_157(&uLocal_82, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return 1;
		}
	}
	if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0 && iLocal_259 == 1)
	{
		return 1;
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_51) && !unk_0xB8DE76287EDC4957(iLocal_51, 0))
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0, float fParam1)//Position - 0x6579
{
	float fVar0;
	
	if (func_58(unk_0xFC1458A37D98B502()) && func_58(iParam0))
	{
		if (func_156(iParam0) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iParam0))
		{
			if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_155(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_155(int iParam0, float fParam1)//Position - 0x65EF
{
	return func_75(iParam0, unk_0xFC1458A37D98B502(), fParam1, 1, 250, 7);
}

int func_156(int iParam0)//Position - 0x6607
{
	if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iParam0) && unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
	{
		return 1;
	}
	return 0;
}

void func_157(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x662F
{
	func_18(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0x872F1C1F8587CCC7(&Global_14622, 0);
	Global_15759 = iParam3;
	StringCopy(&Global_15746, sParam2, 24);
}

void func_158()//Position - 0x666A
{
	Global_14622 = 0;
	func_159();
}

void func_159()//Position - 0x667A
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

int func_160()//Position - 0x669B
{
	if (!func_143(5))
	{
		return 1;
	}
	if (func_168())
	{
		return 1;
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_167())
		{
			return 0;
		}
	}
	if (func_161(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_161(float fParam0, bool bParam1)//Position - 0x66FD
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (func_11(func_9()))
		{
			iVar5 = func_46();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 2) && !unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 3))
				{
					func_162(iVar1, &Var0);
					fVar4 = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_162(int iParam0, var uParam1)//Position - 0x67B4
{
	switch (iParam0)
	{
		case 0:
			func_163(uParam1, "Abigail1", func_165(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 1:
			func_163(uParam1, "Abigail2", func_165(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 2:
			func_163(uParam1, "Barry1", func_165(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 3:
			func_163(uParam1, "Barry2", func_165(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_164(iParam0), 1, 1);
			break;
		
		case 4:
			func_163(uParam1, "Barry3", func_165(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 5:
			func_163(uParam1, "Barry3A", func_165(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 6:
			func_163(uParam1, "Barry3C", func_165(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 7:
			func_163(uParam1, "Barry4", func_165(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_164(iParam0), 0, 0);
			break;
		
		case 8:
			func_163(uParam1, "Dreyfuss1", func_165(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 9:
			func_163(uParam1, "Epsilon1", func_165(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 10:
			func_163(uParam1, "Epsilon2", func_165(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 11:
			func_163(uParam1, "Epsilon3", func_165(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 12:
			func_163(uParam1, "Epsilon4", func_165(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 13:
			func_163(uParam1, "Epsilon5", func_165(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 14:
			func_163(uParam1, "Epsilon6", func_165(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 15:
			func_163(uParam1, "Epsilon7", func_165(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 16:
			func_163(uParam1, "Epsilon8", func_165(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 17:
			func_163(uParam1, "Extreme1", func_165(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 18:
			func_163(uParam1, "Extreme2", func_165(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 19:
			func_163(uParam1, "Extreme3", func_165(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 20:
			func_163(uParam1, "Extreme4", func_165(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 21:
			func_163(uParam1, "Fanatic1", func_165(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_164(iParam0), 1, 0);
			break;
		
		case 22:
			func_163(uParam1, "Fanatic2", func_165(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_164(iParam0), 1, 0);
			break;
		
		case 23:
			func_163(uParam1, "Fanatic3", func_165(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_164(iParam0), 0, 1);
			break;
		
		case 24:
			func_163(uParam1, "Hao1", func_165(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_164(iParam0), 0, 1);
			break;
		
		case 25:
			func_163(uParam1, "Hunting1", func_165(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 26:
			func_163(uParam1, "Hunting2", func_165(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 27:
			func_163(uParam1, "Josh1", func_165(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 28:
			func_163(uParam1, "Josh2", func_165(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_164(iParam0), 1, 1);
			break;
		
		case 29:
			func_163(uParam1, "Josh3", func_165(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_164(iParam0), 1, 1);
			break;
		
		case 30:
			func_163(uParam1, "Josh4", func_165(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 31:
			func_163(uParam1, "Maude1", func_165(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 32:
			func_163(uParam1, "Minute1", func_165(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 33:
			func_163(uParam1, "Minute2", func_165(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 34:
			func_163(uParam1, "Minute3", func_165(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 35:
			func_163(uParam1, "MrsPhilips1", func_165(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 36:
			func_163(uParam1, "MrsPhilips2", func_165(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 37:
			func_163(uParam1, "Nigel1", func_165(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 38:
			func_163(uParam1, "Nigel1A", func_165(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_164(iParam0), 1, 1);
			break;
		
		case 39:
			func_163(uParam1, "Nigel1B", func_165(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_164(iParam0), 1, 1);
			break;
		
		case 40:
			func_163(uParam1, "Nigel1C", func_165(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_164(iParam0), 1, 1);
			break;
		
		case 41:
			func_163(uParam1, "Nigel1D", func_165(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_164(iParam0), 1, 1);
			break;
		
		case 42:
			func_163(uParam1, "Nigel2", func_165(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_164(iParam0), 1, 1);
			break;
		
		case 43:
			func_163(uParam1, "Nigel3", func_165(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_164(iParam0), 1, 1);
			break;
		
		case 44:
			func_163(uParam1, "Omega1", func_165(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 45:
			func_163(uParam1, "Omega2", func_165(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 46:
			func_163(uParam1, "Paparazzo1", func_165(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 47:
			func_163(uParam1, "Paparazzo2", func_165(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 48:
			func_163(uParam1, "Paparazzo3", func_165(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 49:
			func_163(uParam1, "Paparazzo3A", func_165(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 50:
			func_163(uParam1, "Paparazzo3B", func_165(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 51:
			func_163(uParam1, "Paparazzo4", func_165(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 52:
			func_163(uParam1, "Rampage1", func_165(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 54:
			func_163(uParam1, "Rampage3", func_165(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 55:
			func_163(uParam1, "Rampage4", func_165(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 56:
			func_163(uParam1, "Rampage5", func_165(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 53:
			func_163(uParam1, "Rampage2", func_165(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 57:
			func_163(uParam1, "TheLastOne", func_165(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 58:
			func_163(uParam1, "Tonya1", func_165(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 59:
			func_163(uParam1, "Tonya2", func_165(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 60:
			func_163(uParam1, "Tonya3", func_165(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 61:
			func_163(uParam1, "Tonya4", func_165(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 62:
			func_163(uParam1, "Tonya5", func_165(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_163(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x7969
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_164(int iParam0)//Position - 0x79FA
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_165(int iParam0)//Position - 0x7D40
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_166(iParam0) };
	if (unk_0xAB019B170BF1309C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_166(int iParam0)//Position - 0x7D77
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_167()//Position - 0x81C5
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

int func_168()//Position - 0x81E2
{
	if (func_171() && !func_167())
	{
		return 1;
	}
	if (func_170() && func_169())
	{
		return 1;
	}
	return 0;
}

bool func_169()//Position - 0x8214
{
	return Global_104273 > 0;
}

int func_170()//Position - 0x8222
{
	if (Global_89900 != -1)
	{
		return 1;
	}
	return 0;
}

int func_171()//Position - 0x8237
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

int func_172()//Position - 0x825D
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_46) < (75f * 75f))
		{
			return 1;
		}
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_167())
		{
			return 0;
		}
	}
	if (func_168())
	{
		return 1;
	}
	if (func_161(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_173()//Position - 0x82E3
{
}

int func_174()//Position - 0x82EB
{
	int iVar0;
	
	if (func_175(26, 1))
	{
		iVar0++;
	}
	if (func_175(26, 2))
	{
		iVar0++;
	}
	if (func_175(8, 0))
	{
		iVar0++;
	}
	return iVar0;
}

int func_175(int iParam0, int iParam1)//Position - 0x8325
{
	if (unk_0xC80D31E4B587871C(Global_104555.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

void func_176(int iParam0)//Position - 0x8348
{
	if (iParam0 == -1)
	{
		iParam0 = func_50();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_178(iParam0);
	unk_0x51B813700F855144(0);
	unk_0x980C42B833D07BB4(1);
	Global_104541 = 0;
	func_177();
}

void func_177()//Position - 0x837E
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			unk_0x2E4932E63763FE26(unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)), true);
		}
		unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 32, false);
	}
}

void func_178(int iParam0)//Position - 0x83BB
{
	Global_104544 = iParam0;
}

int func_179(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x83C9
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (!Global_142819)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_50();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_218())
		{
			return 0;
		}
	}
	vLocal_46 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			vVar1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_167())
			{
				return 0;
			}
		}
		if (!Global_104555.f_9055)
		{
			return 0;
		}
		if (func_23(0))
		{
			return 0;
		}
		if (func_168())
		{
			return 0;
		}
		if (func_217())
		{
			return 0;
		}
		if (Global_104544 != -1)
		{
			return 0;
		}
		if (func_11(func_9()))
		{
			if (func_161(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !bParam4)
		{
			if ((vVar1.z - vLocal_46.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_216(iParam1))
		{
			return 0;
		}
		if (func_11(func_9()))
		{
			if (func_215(func_9()) == 4 || func_215(func_9()) == 5)
			{
				return 0;
			}
		}
		if (func_11(func_9()))
		{
			if (!func_214(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_213(Global_104555.f_24965.f_43[iParam1]))
		{
			return 0;
		}
		if ((unk_0x53C562FD2B9E3AB0() - Global_104546) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_212())
		{
			return 0;
		}
		if (unk_0x5A0744D504CC705F())
		{
			return 0;
		}
		if (unk_0x17E356AF4F930A2C())
		{
			return 0;
		}
		if (!func_203(4))
		{
			return 0;
		}
		if (!func_143(5))
		{
			return 0;
		}
		if (func_175(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0x2C2E1E35924B9FF2(unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502())))
		{
			if ((unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == unk_0xD3BB1A515B0A47F3(377,153f, -717,567f, 10,0536f) || unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == unk_0xD3BB1A515B0A47F3(320,9934f, 265,2515f, 82,1221f)) || unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == unk_0xD3BB1A515B0A47F3(-1425,564f, -244,3f, 15,8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_175(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_216(30) && !func_175(30, 0))
		{
			if (iParam1 != 30)
			{
				if (system::vdist2(vVar1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_11(func_9()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_104555.f_2353.f_539.f_2280[iVar2 /*3*/] };
				iVar4 = Global_104555.f_2353.f_539.f_2276[iVar2];
				if (func_202(iVar4))
				{
					if (func_180(iVar2))
					{
						if (!func_128(vVar3, 0f, 0f, 0f, 0))
						{
							if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vVar3) < (210f * 210f))
							{
								if (func_9() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_180(int iParam0)//Position - 0x8763
{
	int iVar0;
	
	iVar0 = Global_104555.f_2353.f_539.f_2276[iParam0];
	return func_181(iVar0);
}

int func_181(int iParam0)//Position - 0x8784
{
	return func_182(iParam0, 1);
}

int func_182(int iParam0, int iParam1)//Position - 0x8793
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_202(iParam0))
	{
		return 0;
	}
	func_183(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_183(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x87E6
{
	func_184(func_195(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_184(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x8804
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_194(iParam0, iParam1))
	{
		iVar0 = func_193(iParam1);
		iVar1 = func_191(iParam0);
		iVar2 = (func_191(iParam0) - func_191(iParam1));
		iVar3 = (func_193(iParam0) - func_193(iParam1));
		iVar4 = (func_190(iParam0) - func_190(iParam1));
		iVar5 = (func_189(iParam0) - func_189(iParam1));
		iVar6 = (func_188(iParam0) - func_188(iParam1));
		iVar7 = (func_187(iParam0) - func_187(iParam1));
	}
	else
	{
		iVar0 = func_193(iParam0);
		iVar1 = func_191(iParam1);
		iVar2 = (func_191(iParam1) - func_191(iParam0));
		iVar3 = (func_193(iParam1) - func_193(iParam0));
		iVar4 = (func_190(iParam1) - func_190(iParam0));
		iVar5 = (func_189(iParam1) - func_189(iParam0));
		iVar6 = (func_188(iParam1) - func_188(iParam0));
		iVar7 = (func_187(iParam1) - func_187(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_186(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_185(system::to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_185(float fParam0, float fParam1, float fParam2)//Position - 0x8A05
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(system::round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_186(int iParam0, int iParam1)//Position - 0x8A47
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

int func_187(int iParam0)//Position - 0x8AE9
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_188(int iParam0)//Position - 0x8AFC
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_189(int iParam0)//Position - 0x8B0F
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_190(int iParam0)//Position - 0x8B22
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_191(int iParam0)//Position - 0x8B34
{
	return (system::shift_right(iParam0, 26) & 31 * func_192(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_192(bool bParam0, int iParam1, int iParam2)//Position - 0x8B59
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_193(int iParam0)//Position - 0x8B70
{
	return iParam0 & 15;
}

int func_194(int iParam0, int iParam1)//Position - 0x8B7D
{
	int iVar0;
	int iVar1;
	
	if (!func_202(iParam1) || !func_202(iParam0))
	{
		return 1;
	}
	iVar0 = func_191(iParam0);
	iVar1 = func_191(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_193(iParam0);
	iVar1 = func_193(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_190(iParam0);
	iVar1 = func_190(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_189(iParam0);
	iVar1 = func_189(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_188(iParam0);
	iVar1 = func_188(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_187(iParam0);
	iVar1 = func_187(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_195()//Position - 0x8C89
{
	var uVar0;
	
	func_201(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_200(&uVar0, unk_0x95327550F0F2BE7C());
	func_199(&uVar0, unk_0x674C9438180770FE());
	func_198(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_197(&uVar0, unk_0xEAF455949B108589());
	func_196(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_196(var uParam0, int iParam1)//Position - 0x8CCF
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

void func_197(var uParam0, int iParam1)//Position - 0x8D55
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_198(var uParam0, int iParam1)//Position - 0x8D88
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_193(*uParam0);
	iVar1 = func_191(*uParam0);
	if (iParam1 < 1 || iParam1 > func_186(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_199(var uParam0, int iParam1)//Position - 0x8DD9
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_200(var uParam0, int iParam1)//Position - 0x8E13
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_201(var uParam0, int iParam1)//Position - 0x8E4E
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_202(int iParam0)//Position - 0x8E8A
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
	iVar0 = func_187(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_188(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_189(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_191(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_193(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_190(iParam0);
	if (iVar5 < 1 || iVar5 > func_186(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_203(int iParam0)//Position - 0x8F66
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar0 = func_9();
				if (!func_11(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_211()) || Global_103602) || Global_25235) || func_210()) || func_16(8, -1)) || func_209()) || func_208()) || func_207()) || func_206()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1) || func_211()) || Global_25235) || func_210()) || func_16(8, -1)) || func_207()) || func_209()) || func_208()) || func_206()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_211()) || Global_103602) || Global_25235) || func_210()) || func_16(8, -1)) || func_207()) || func_209()) || func_208()) || func_206()) || Global_104555.f_7658.f_919[iVar0] == 5) || Global_36408 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_211()) || Global_103602) || Global_25235) || func_210()) || func_16(8, -1)) || func_209()) || func_208()) || func_206()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_211() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || func_16(8, -1)) || func_206()) || func_205()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_16(8, -1) || func_209()) || func_208()) || func_205()) || func_204())
						{
							return 0;
						}
						if ((unk_0x1E06D00B67177A18() && unk_0x950AEA4C7FFF9EA4() != 3) && unk_0x70522E2561AD22FE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
						{
							if ((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_211()) || Global_25235) || func_210()) || func_16(8, -1)) || func_208()) || func_207()) || func_206()) || Global_104555.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || func_211()) || func_208()) || Global_103602) || Global_25235) || func_210()) || Global_36993) || func_16(8, -1)) || func_207()) || func_205()) || func_206()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_211()) || Global_103602) || Global_25235) || func_210()) || func_16(8, -1)) || func_207()) || func_205()) || func_209()) || func_208()) || func_206())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_204()//Position - 0x9683
{
	return Global_92872.f_1;
}

int func_205()//Position - 0x9691
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 13);
	}
	return 0;
}

int func_206()//Position - 0x96B7
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_207()//Position - 0x96D1
{
	if (Global_71116)
	{
		return 1;
	}
	else if (Global_55897 && !Global_55903)
	{
		return 1;
	}
	return 0;
}

bool func_208()//Position - 0x96FB
{
	return Global_92885.f_316 > 0;
}

bool func_209()//Position - 0x970C
{
	return Global_92885.f_315 > 0;
}

var func_210()//Position - 0x971D
{
	return Global_1312854;
}

int func_211()//Position - 0x9729
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

int func_212()//Position - 0x9745
{
	func_8();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_213(int iParam0)//Position - 0x976D
{
	return func_194(func_195(), iParam0);
}

int func_214(int iParam0, int iParam1, int iParam2)//Position - 0x977F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_9();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_215(int iParam0)//Position - 0x9863
{
	if (!func_11(iParam0))
	{
		return 7;
	}
	return Global_104555.f_7658.f_919[iParam0];
}

bool func_216(int iParam0)//Position - 0x9887
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_218())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xC80D31E4B587871C(Global_104555.f_24965, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xC80D31E4B587871C(Global_104555.f_24965.f_1, iVar0);
	}
	return bVar1;
}

int func_217()//Position - 0x98E5
{
	int iVar0;
	
	if (Global_25383)
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(unk_0x317536BCEA8FA6B0(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_218()//Position - 0x9929
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

float func_219(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x99E4
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

void func_220()//Position - 0x9A1E
{
	func_93(&uLocal_276, 0, 0);
	if (unk_0x771D0F8F56A5FE6C("RE_CAR_STEAL_SCENE"))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_51, 0))
		{
			unk_0xF0037A481D043FE1(iLocal_51, 0);
		}
		unk_0xE02E32C69260FBB7("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_263 != 3)
	{
		func_223(26);
	}
	else
	{
		func_223(8);
	}
	if (iLocal_263 == 1)
	{
		unk_0x8A4311269B560FDF(472,195f, -1974,902f, 18,57787f, 572,7468f, -1921,216f, 28,68633f, 75f, 1);
	}
	unk_0xCA107A9AAF17E75F(iLocal_271, 0);
	unk_0x4C15495E88D71C61(vLocal_56 - Vector(20f, 20f, 20f), vLocal_56 + Vector(20f, 20f, 20f), true, 1);
	if (unk_0xB8DE76287EDC4957(iLocal_51, 0))
	{
		unk_0xCF5EB2CB1B30F02C(iLocal_51, 1);
		if (unk_0x8DDE799D31A3D099(iLocal_51))
		{
			unk_0x7674774BB9279265(iLocal_51);
		}
	}
	if (iLocal_263 == 2)
	{
		unk_0x9E6ACDF1473CD846(1, "RE_BikeThief2");
	}
	func_65(&iLocal_81);
	func_65(&iLocal_79);
	func_66(&uLocal_288);
	func_65(&iLocal_80);
	func_72(0);
	func_222(&uLocal_82, 0);
	func_222(&uLocal_82, 1);
	func_222(&uLocal_82, 2);
	if ((func_58(iLocal_50) && func_58(iLocal_51)) && unk_0xA8D0477084E86A92(iLocal_50, iLocal_51, 0))
	{
		unk_0x96247F0EC873C446(iLocal_50, iLocal_51, fLocal_62, 786485);
		unk_0xE9B3D12A64CC7C1A(iLocal_50, true);
	}
	func_87(&iLocal_49, 1, 0, 1);
	func_87(&iLocal_50, 1, 0, 1);
	func_221(&iLocal_51);
	if (func_58(iLocal_52))
	{
		unk_0x4C7232E851BC6D56(iLocal_52);
		func_221(&iLocal_52);
	}
	unk_0x14776E43F90DD454(joaat("g_m_y_strpunk_01"));
	unk_0x14776E43F90DD454(joaat("a_m_y_beachvesp_01"));
	unk_0x14776E43F90DD454(joaat("scorcher"));
	unk_0x14776E43F90DD454(joaat("bati"));
	unk_0xFCCDDE0E48CF9588(sLocal_264);
	unk_0xFCCDDE0E48CF9588(sLocal_265);
	unk_0xFCCDDE0E48CF9588(sLocal_267);
	unk_0xFCCDDE0E48CF9588(sLocal_268);
	unk_0xFCCDDE0E48CF9588(sLocal_269);
	unk_0xFCCDDE0E48CF9588(sLocal_270);
	unk_0xC234848D21B6064E(0);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_221(int iParam0)//Position - 0x9BEC
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		unk_0x191BE1BC8F26F3C1(*iParam0, 0);
		if (unk_0x9761C10D57B68069(*iParam0) && unk_0xCB234F3DD6FF9368(*iParam0, 1))
		{
			unk_0x5380482A432E314E(iParam0);
		}
	}
}

void func_222(var uParam0, int iParam1)//Position - 0x9C24
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_223(int iParam0)//Position - 0x9C41
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_50();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_234())
	{
		func_227(iParam0);
		unk_0x218409883979C46E(0, 0);
		Global_104546 = unk_0x53C562FD2B9E3AB0();
		func_226(30000);
		StringCopy(&cVar0, func_225(Global_104544, 1), 64);
		if (func_49(Global_104544) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_104543, 64);
		}
		unk_0xACD55E1AD7FB6CB0(&cVar0, Global_104541, (unk_0x53C562FD2B9E3AB0() - Global_104542), 0);
	}
	else if (unk_0xC80D31E4B587871C(Global_104551, 0) && Global_104555.f_24965.f_2 < 3)
	{
		unk_0x0EE72DB1CD8A3B86(&Global_104551, 0);
	}
	func_224(&Global_25292);
	Global_104545 = 0;
	func_178(-1);
}

void func_224(var uParam0)//Position - 0x9CF6
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35823)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35822 = 0;
	Global_35824 = 0;
	Global_35861 = 15;
	Global_55900 = 0;
	Global_55901 = 0;
}

char* func_225(int iParam0, bool bParam1)//Position - 0x9D33
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_226(int iParam0)//Position - 0x9F7C
{
	Global_36412 = (unk_0x53C562FD2B9E3AB0() + iParam0);
}

void func_227(int iParam0)//Position - 0x9F8E
{
	func_228(iParam0, 0, func_233(iParam0));
}

void func_228(int iParam0, int iParam1, int iParam2)//Position - 0x9FA3
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_195();
	func_231(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_230(iParam0, &uVar0);
	Var1 = { func_229(&uVar0) };
}

struct<16> func_229(var uParam0)//Position - 0x9FD2
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_189(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_188(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_187(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_190(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_193(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_191(*uParam0), 64);
	return Var0;
}

void func_230(int iParam0, var uParam1)//Position - 0xA0A2
{
	Global_104555.f_24965.f_43[iParam0] = *uParam1;
}

void func_231(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA0BA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_191(*uParam0);
	iVar1 = func_193(*uParam0);
	iVar2 = func_190(*uParam0);
	iVar3 = func_189(*uParam0);
	iVar4 = func_188(*uParam0);
	iVar5 = func_187(*uParam0);
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
	iVar6 = func_186(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_186(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_232(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_232(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA23C
{
	func_201(uParam0, iParam1);
	func_200(uParam0, iParam2);
	func_199(uParam0, iParam3);
	func_197(uParam0, iParam5);
	func_198(uParam0, iParam4);
	func_196(uParam0, iParam6);
}

int func_233(int iParam0)//Position - 0xA274
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_234()//Position - 0xA417
{
	if ((Global_104544 == func_50() && unk_0x17E356AF4F930A2C()) && Global_104545)
	{
		return 1;
	}
	return 0;
}

