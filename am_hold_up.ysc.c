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
	var uLocal_60 = 10;
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
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
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
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	struct<73> Local_98 = { 0, 0, 3, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1101004800, 0 } ;
	struct<10> Local_99[32];
	struct<54> Local_100 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	int iLocal_103 = 0;
	char* sLocal_104 = NULL;
	int iLocal_105 = 0;
	vector3 vLocal_106 = { 0f, 0f, 0f };
	vector3 vLocal_107 = { 0f, 0f, 0f };
	float fLocal_108 = 0f;
	int iLocal_109 = 0;
	vector3 vLocal_110 = { 0f, 0f, 0f };
	vector3 vLocal_111 = { 0f, 0f, 0f };
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	vector3 vLocal_122 = { 0f, 0f, 0f };
	float fLocal_123 = 0f;
	vector3 vLocal_124 = { 0f, 0f, 0f };
	float fLocal_125 = 0f;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	vector3 vLocal_138 = { 0f, 0f, 0f };
	vector3 vLocal_139 = { 0f, 0f, 0f };
	vector3 vLocal_140 = { 0f, 0f, 0f };
	vector3 vLocal_141 = { 0f, 0f, 0f };
	float fLocal_142 = 0f;
	vector3 vLocal_143 = { 0f, 0f, 0f };
	vector3 vLocal_144 = { 0f, 0f, 0f };
	float fLocal_145 = 0f;
	var uLocal_146 = 16;
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
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
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
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	int iLocal_311[5] = { 0, 0, 0, 0, 0 };
	int iLocal_312[5] = { 0, 0, 0, 0, 0 };
	float fLocal_313 = 0f;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	vector3 vLocal_337 = { 0f, 0f, 0f };
	struct<21> Local_338 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_94 = ((0,05f + 0,275f) - 0,01f);
	iLocal_105 = joaat("mp_m_shopkeep_01");
	iLocal_109 = -1;
	iLocal_112 = -1;
	iLocal_126 = 303280717;
	iLocal_127 = system::round(Global_262145.f_2421);
	iLocal_128 = system::round(Global_262145.f_2417) + 1;
	iLocal_129 = 1;
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_474(ScriptParam_338))
		{
			func_469();
		}
		if (func_468(1))
		{
			func_461(unk_0x9EB17624F44A8DA4(), 0, 98816);
		}
	}
	while (true)
	{
		func_460();
		if (func_450())
		{
			func_469();
		}
		func_448();
		if (unk_0xC80D31E4B587871C(Local_98.f_23, 6))
		{
			if (func_468(1))
			{
				func_461(unk_0x9EB17624F44A8DA4(), 1, 0);
				func_445();
				unk_0x0EE72DB1CD8A3B86(&(Local_100.f_53), 7);
				func_444();
			}
		}
		switch (func_443(unk_0x622FF3AE4B1D07C3()))
		{
			case 0:
				unk_0x6450931B826B49D9("mp_am_hold_up");
				if (unk_0x3A801AA34DD821BE("mp_am_hold_up"))
				{
					if (func_433())
					{
						unk_0x128A5DCCD09CCA17(func_432(Local_100), 0);
						if (unk_0x93C304998B457C45(Local_98))
						{
							if (func_431() > 0)
							{
								if (!func_430(Local_98))
								{
									func_429(&uLocal_146, 3, unk_0x47BA76CE3C825A08(Local_98), &(Local_98.f_46), 1, 0);
									func_428();
								}
								unk_0x872F1C1F8587CCC7(&(Local_100.f_52), 22);
								Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_4 = 2;
							}
						}
					}
				}
				if (func_431() == 6)
				{
					Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_4 = 5;
				}
				break;
			
			case 2:
				func_308(&Local_100, vLocal_110, vLocal_111, &Local_98, &(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), unk_0x0F3033474C49912D(unk_0x47BA76CE3C825A08(Local_98), vLocal_143, vLocal_144, fLocal_145, 0, 1, 0), 0);
				func_301();
				if (func_431() == 2)
				{
					func_133();
				}
				else if (func_431() == 6)
				{
					Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_4 = 5;
				}
				if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_139, 30f, 30f, 30f, 0, 1, 0))
				{
					Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_4 = 6;
				}
				break;
			
			case 5:
				func_132(&(Local_98.f_69));
				if (func_131(&(Local_98.f_69)))
				{
					Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_4 = 6;
				}
				break;
			
			case 4:
				Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_4 = 6;
			
			case 6:
				func_51();
				func_469();
				break;
		}
		if (unk_0x8E1421E2A2A2FBD4())
		{
			switch (func_431())
			{
				case 0:
					if (!unk_0xC80D31E4B587871C(Local_100.f_52, 16))
					{
						func_49(func_50(0));
						func_49(func_50(1));
						func_49(func_50(2));
						unk_0x6450931B826B49D9("mp_am_hold_up");
						if (unk_0x3A801AA34DD821BE("mp_am_hold_up"))
						{
							if (func_433())
							{
								unk_0x247EAA2E93D4A021(vLocal_110, 1,5f, 0, 1, 0, true);
								unk_0x247EAA2E93D4A021(vLocal_107, 1,5f, 0, 1, 0, true);
								unk_0x872F1C1F8587CCC7(&(Local_100.f_52), 16);
							}
						}
					}
					else if (func_47())
					{
						Local_98.f_12 = 2;
					}
					break;
				
				case 2:
					func_46();
					func_43();
					func_28();
					func_27();
					func_20();
					func_19();
					func_11();
					func_10();
					if (func_4())
					{
						func_1();
						Local_98.f_12 = 6;
					}
					break;
				
				case 6:
					func_1();
					break;
				}
		}
	}
}

void func_1()//Position - 0x394
{
	if (unk_0x93C304998B457C45(Local_98.f_13))
	{
		if (func_3(Local_98.f_13))
		{
			if (unk_0xDFFD5F8C8ABCB7EF(unk_0xE8BC72FED1586931(Local_98.f_13)))
			{
				unk_0x6B7C10B19928914F(unk_0xE8BC72FED1586931(Local_98.f_13), 1, 1);
				func_2(&(Local_98.f_13));
			}
		}
	}
}

void func_2(var uParam0)//Position - 0x3D7
{
	int iVar0;
	
	if (unk_0x918CA1BFFAA03556(*uParam0))
	{
		iVar0 = unk_0x29AB7D6D0DE18055(*uParam0);
		unk_0x83E70C4C5D45C754(&iVar0);
	}
}

int func_3(var uParam0)//Position - 0x3FB
{
	if (unk_0x93C304998B457C45(uParam0))
	{
		unk_0x04092215B40E1262(uParam0);
		return unk_0xE53FD7AF7F25C0A8(uParam0);
	}
	return 0;
}

int func_4()//Position - 0x41D
{
	if (func_5())
	{
		return 1;
	}
	return 0;
}

int func_5()//Position - 0x431
{
	if (unk_0xC80D31E4B587871C(Local_98.f_23, 2))
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Local_98.f_23, 3))
	{
		return 1;
	}
	if (!func_9())
	{
		if ((unk_0xC80D31E4B587871C(Local_98.f_23, 11) || unk_0xC80D31E4B587871C(Local_98.f_23, 19)) || (unk_0xC80D31E4B587871C(Local_98.f_23, 9) && !unk_0xC80D31E4B587871C(Local_98.f_23, 20)))
		{
			func_6(Local_100.f_50, 1, func_7());
			return 1;
		}
		if (unk_0xC80D31E4B587871C(Local_98.f_23, 18))
		{
			func_6(Local_100.f_50, 1, func_7());
			return 1;
		}
	}
	if (unk_0xC80D31E4B587871C(Local_98.f_23, 18))
	{
		if (!unk_0xC80D31E4B587871C(Local_98.f_24, 7))
		{
			func_6(Local_100.f_50, 1, func_7());
			unk_0x872F1C1F8587CCC7(&(Local_98.f_24), 7);
		}
	}
	return 0;
}

void func_6(var uParam0, int iParam1, int iParam2)//Position - 0x501
{
	struct<4> Var0;
	
	Var0 = 92543853;
	Var0.f_1 = unk_0x9EB17624F44A8DA4();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Var0, 4, iParam2);
	}
}

int func_7()//Position - 0x539
{
	return func_8(unk_0x5A720ECB7B648721("freemode", -1, 0));
}

int func_8(int iParam0)//Position - 0x54E
{
	var uVar0;
	
	unk_0x872F1C1F8587CCC7(&uVar0, iParam0);
	return uVar0;
}

int func_9()//Position - 0x560
{
	if ((unk_0xC80D31E4B587871C(Local_98.f_23, 13) || unk_0xC80D31E4B587871C(Local_98.f_23, 27)) || unk_0xC80D31E4B587871C(Local_98.f_23, 28))
	{
		return 1;
	}
	return 0;
}

void func_10()//Position - 0x59A
{
	var uVar0;
	
	if (!unk_0xC80D31E4B587871C(Local_98.f_23, 21))
	{
		if (func_430(Local_98))
		{
			Local_98.f_72 = unk_0xDFB139FC1B23446B(Local_98, &uVar0);
			unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 21);
		}
	}
	if (!unk_0xC80D31E4B587871C(Local_98.f_23, 19))
	{
		if (unk_0xC80D31E4B587871C(Local_98.f_23, 10) && Local_98.f_37 <= 0f)
		{
			unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 19);
		}
	}
	if (!unk_0xC80D31E4B587871C(Local_98.f_24, 17))
	{
		if (unk_0xC80D31E4B587871C(Local_98.f_23, 20))
		{
			if (func_3(Local_98.f_13))
			{
				unk_0x61EF72AFBDCBE53F(unk_0xE8BC72FED1586931(Local_98.f_13), 0, 0);
				unk_0x872F1C1F8587CCC7(&(Local_98.f_24), 17);
			}
		}
	}
	if (!unk_0xC80D31E4B587871C(Local_98.f_23, 6))
	{
		if (Global_2512808.f_8 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 6);
			unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 16);
		}
	}
}

int func_11()//Position - 0x667
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x8E1421E2A2A2FBD4() || !unk_0xC80D31E4B587871C(Local_98.f_25, 0))
	{
		return 0;
	}
	if (Local_98.f_66 != 6)
	{
		if (Local_98.f_66 > 0 && func_430(Local_98.f_15))
		{
			Local_98.f_66 = 6;
			return 0;
		}
		switch (Local_98.f_66)
		{
			case 0:
				if (!func_17(&uLocal_326, 10000, 0))
				{
					iVar0 = unk_0xF4DDB3917F071FA0(vLocal_143, 20f, 20f, 20f, -1);
					if (!unk_0x3AB6A1A9084FB0A4(iVar0))
					{
						if (!unk_0x9761C10D57B68069(iVar0))
						{
							iVar1 = unk_0x82FF3DFBC3965CC0(iVar0);
							if (((((((iVar1 != joaat("mp_m_freemode_01") && iVar1 != joaat("mp_f_freemode_01")) && !unk_0x25D10EDC93C33B77(vLocal_143, 25f, 25f, 25f)) && !unk_0x0C88267282FD588F(iVar0, vLocal_138, 1f, 1f, 2f, 0, 1, 0)) && !unk_0xC931425E2B416A2F(iVar0, 7)) && !unk_0x88DDBE9908752BF0(iVar0, 1)) && unk_0x4A080575DBB2F7DF(iVar0)) && func_16(iVar1))
							{
								unk_0xC8DAB4CEBB9AB263(iVar0);
								if (unk_0xA0BF73C5030D3F60(iVar0))
								{
									if (func_15(&(Local_98.f_15), iVar0, 1, 0))
									{
										unk_0x8135E0D869A8ECFC(unk_0x47BA76CE3C825A08(Local_98.f_15), joaat("weapon_pistol"), 25000, 0);
										unk_0xE9B3D12A64CC7C1A(unk_0x47BA76CE3C825A08(Local_98.f_15), 1);
										Local_98.f_66 = 1;
										unk_0x872F1C1F8587CCC7(&(Local_98.f_25), 1);
										unk_0xCE93FCB8A8D8DF0B(unk_0x47BA76CE3C825A08(Local_98.f_15), Global_1574763);
										unk_0x4F9A62E773100FDC(unk_0x47BA76CE3C825A08(Local_98.f_15), 2);
										unk_0xE01CE1EBCD7EE551(unk_0x47BA76CE3C825A08(Local_98.f_15), system::round((200f * Global_262145.f_153)), 0);
										func_429(&uLocal_146, 4, unk_0x47BA76CE3C825A08(Local_98.f_15), "StoreHero", 1, 0);
										unk_0x2EA90674750EA01E(unk_0x47BA76CE3C825A08(Local_98.f_15), func_14(), 0, 1);
									}
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if ((unk_0xC80D31E4B587871C(Local_98.f_23, 9) || unk_0xC80D31E4B587871C(Local_98.f_23, 5)) || unk_0xC80D31E4B587871C(Local_98.f_23, 4))
				{
					Local_98.f_66 = 2;
				}
				break;
			
			case 2:
				if (func_17(&(Local_98.f_67), 3000, 0) || (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_15), 1227113341) != 0 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_15), 1227113341) != 1))
				{
					func_13(&(Local_98.f_67));
					Local_98.f_66 = 3;
				}
				break;
			
			case 3:
				if (((unk_0xC80D31E4B587871C(Local_98.f_23, 5) || unk_0xC80D31E4B587871C(Local_98.f_25, 8)) || unk_0xC80D31E4B587871C(Local_98.f_25, 9)) || func_17(&(Local_98.f_67), 5000, 0))
				{
					if (func_12() || func_17(&(Local_98.f_67), 5000, 0))
					{
						Local_98.f_66 = 4;
					}
					else
					{
						Local_98.f_66 = 5;
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
			}
	}
	return 1;
}

int func_12()//Position - 0x946
{
	if (unk_0xC80D31E4B587871C(unk_0x63A6486593EC7EC3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_13(var uParam0)//Position - 0x967
{
	uParam0->f_1 = 0;
}

char* func_14()//Position - 0x974
{
	int iVar0;
	
	iVar0 = unk_0x63A6486593EC7EC3(0, 100);
	if (iVar0 < 30)
	{
		return "WORLD_HUMAN_SMOKING";
	}
	if (iVar0 >= 30 && iVar0 < 70)
	{
		return "WORLD_HUMAN_HANG_OUT_STREET";
	}
	return "WORLD_HUMAN_STAND_MOBILE";
}

int func_15(var uParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x9B3
{
	unk_0xDD29FF4BAB8AFF9C(iParam1, bParam2, iParam3);
	*uParam0 = unk_0xE750D42CD4043E8B(iParam1);
	if (unk_0x93C304998B457C45(*uParam0))
	{
		if (bParam2)
		{
			unk_0x9CE66BFF230839CE(*uParam0, 1);
		}
		return 1;
	}
	return 0;
}

int func_16(int iParam0)//Position - 0x9EA
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01"))
	{
		return 0;
	}
	return 1;
}

int func_17(var uParam0, int iParam1, bool bParam2)//Position - 0xCE8
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_18(uParam0, bParam2, 0);
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

void func_18(var uParam0, bool bParam1, bool bParam2)//Position - 0xD46
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

void func_19()//Position - 0xD8B
{
	if (Local_98.f_30 == 0)
	{
		if (Local_98.f_3 >= 2 && Local_98.f_3 != 9)
		{
			Local_98.f_30 = unk_0x6BC6C67E311CA665(99, unk_0xFC1458A37D98B502(), 60000f);
		}
	}
}

void func_20()//Position - 0xDC3
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!unk_0xC80D31E4B587871C(Local_98.f_1, 5))
	{
		if (Local_98.f_41 > 0)
		{
			func_24();
			if (!unk_0xC80D31E4B587871C(Local_98.f_1, 5))
			{
				return;
			}
		}
	}
	if (unk_0xC80D31E4B587871C(Local_98.f_1, 1))
	{
		if (Local_98.f_2 == 3 && !unk_0xC80D31E4B587871C(Local_98.f_23, 9))
		{
			Local_98.f_2 = 0;
		}
		unk_0x0EE72DB1CD8A3B86(&(Local_98.f_1), 1);
	}
	switch (Local_98.f_2)
	{
		case 0:
			if ((((func_3(Local_98) && !func_430(Local_98)) && func_3(Local_98.f_16[Local_98.f_26])) && Local_98.f_3 != 8) && Local_98.f_3 != 7)
			{
				if (!unk_0x9F887157983E8EFC(unk_0x47BA76CE3C825A08(Local_98)))
				{
					if (unk_0xC80D31E4B587871C(Local_98.f_23, 9) || unk_0xC80D31E4B587871C(Local_98.f_1, 4))
					{
						Local_98.f_2 = 2;
						return;
					}
					if (!iLocal_103)
					{
						unk_0x2DAC3448B66448E8(unk_0x47BA76CE3C825A08(Local_98), Local_98.f_42, 1600);
						iLocal_103 = 1;
					}
					if (func_17(&uLocal_316, 100, 0))
					{
						fVar0 = unk_0xF0371FE6E2BF9599(unk_0x47BA76CE3C825A08(Local_98));
						fVar1 = (Local_98.f_42 - 10f);
						fVar2 = (Local_98.f_42 + 10f);
						if (fVar1 < 0f)
						{
							fVar2 = ((Local_98.f_42 - 10f) + 360f);
							fVar1 = ((Local_98.f_42 + 10f) + 360f);
						}
						else if (fVar2 >= 360f)
						{
							fVar2 = ((Local_98.f_42 - 10f) - 360f);
							fVar1 = ((Local_98.f_42 + 10f) - 360f);
						}
						if (((fVar0 < fVar2 && fVar0 > fVar1) && func_17(&uLocal_322, 1000, 0)) || func_17(&uLocal_322, 3125, 0))
						{
							unk_0x2CEA76A7F93740C6(unk_0x47BA76CE3C825A08(Local_98));
							Local_98.f_27 = unk_0x9CEC233AE69E2D39(unk_0x3F90543934DCD7E6(unk_0x47BA76CE3C825A08(Local_98), -0,65f, 0,87f, -0,02f), vLocal_111, 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0x7C92B99DB7D4962F(unk_0x47BA76CE3C825A08(Local_98), Local_98.f_27, "mp_am_hold_up", func_23(Local_98.f_26), 1,5f, -1,5f, 157, 16, 1148846080, 0);
							if (unk_0x93C304998B457C45(Local_98.f_16[Local_98.f_26]))
							{
								unk_0xB3A8974D2C811672(unk_0xE8BC72FED1586931(Local_98.f_16[Local_98.f_26]), true, 0);
								unk_0xF6DCDEEE0FC03E91(unk_0xE8BC72FED1586931(Local_98.f_16[Local_98.f_26]), Local_98.f_27, "mp_am_hold_up", func_22(Local_98.f_26), 4f, -4f, 8);
							}
							unk_0x9C39944AA129D284(Local_98.f_27);
							Local_98.f_2 = 1;
							iLocal_112 = unk_0x45D90ED1F569A489(Local_98.f_27);
						}
					}
				}
			}
			break;
		
		case 1:
			if (unk_0xC80D31E4B587871C(Local_98.f_23, 9) || unk_0xC80D31E4B587871C(Local_98.f_1, 4))
			{
				iLocal_112 = unk_0x45D90ED1F569A489(Local_98.f_27);
				if (unk_0xD56F740235B1E8F0(iLocal_112))
				{
					unk_0x0B0BB26D99CD7575(Local_98.f_27);
				}
				Local_98.f_2 = 2;
				return;
			}
			if (iLocal_112 >= 0)
			{
				if (unk_0xD56F740235B1E8F0(iLocal_112) || func_17(&uLocal_318, 2000, 0))
				{
					if ((unk_0xD56F740235B1E8F0(iLocal_112) && unk_0x463C4747B41E35A3(iLocal_112) == 1f) || func_17(&uLocal_318, 2000, 0))
					{
						if ((func_3(Local_98) && !func_430(Local_98)) && !unk_0xC80D31E4B587871C(Local_98.f_23, 9))
						{
							unk_0xB8E08BD5B184DF4E(unk_0x47BA76CE3C825A08(Local_98));
						}
						unk_0x0B0BB26D99CD7575(Local_98.f_27);
						Local_98.f_2 = 2;
					}
				}
			}
			else
			{
				iLocal_112 = unk_0x45D90ED1F569A489(Local_98.f_27);
			}
			break;
		
		case 2:
			func_3(Local_98.f_16[Local_98.f_26]);
			if (func_17(&uLocal_324, 1000, 0) && func_3(Local_98.f_16[Local_98.f_26]))
			{
				if (unk_0x6ADD12BF4D6D2587(unk_0xE8BC72FED1586931(Local_98.f_16[Local_98.f_26])))
				{
					unk_0xB3A8974D2C811672(unk_0xE8BC72FED1586931(Local_98.f_16[Local_98.f_26]), false, 0);
					unk_0xEDC33A771FAEB393(unk_0xE8BC72FED1586931(Local_98.f_16[Local_98.f_26]), true);
					unk_0xBD8D47FDC6902B2D(unk_0xE8BC72FED1586931(Local_98.f_16[Local_98.f_26]), func_21(Local_98.f_26), 1, 0, 0, 1);
				}
				iLocal_112 = -1;
				iLocal_103 = 0;
				if (unk_0xC80D31E4B587871C(Local_98.f_1, 4))
				{
					unk_0x0EE72DB1CD8A3B86(&(Local_98.f_1), 4);
				}
				func_13(&uLocal_324);
				func_13(&uLocal_318);
				func_13(&uLocal_316);
				func_13(&uLocal_322);
				Local_98.f_2 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

Vector3 func_21(int iParam0)//Position - 0x1218
{
	switch (iParam0)
	{
		case 3:
			return vLocal_124 - Vector(1f, 0,2f, 0,1f);
		
		case 1:
			return vLocal_124 - Vector(1f, 0,2f, 0f);
		
		case 2:
			return vLocal_124 - Vector(1f, 0,2f, -0,1f);
		
		case 4:
			return vLocal_124 - Vector(1f, -0,2f, 0,1f);
		
		case 0:
			return vLocal_124 - Vector(1f, -0,2f, 0f);
		
		case 5:
			return vLocal_124 - Vector(1f, -0,2f, -0,1f);
		
		default:
	}
	return vLocal_124 - Vector(1f, 0f, -0,1f);
}

char* func_22(int iParam0)//Position - 0x12C8
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar";
		
		case 1:
			return "purchase_chocbar";
		
		case 2:
			return "purchase_chocbar";
		
		case 4:
			return "purchase_cigarette";
		
		case 0:
			return "purchase_beer";
		
		case 5:
			return "purchase_energydrink";
		
		default:
	}
	return "purchase_energydrink";
}

char* func_23(int iParam0)//Position - 0x1322
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar_shopkeeper";
		
		case 1:
			return "purchase_chocbar_shopkeeper";
		
		case 2:
			return "purchase_chocbar_shopkeeper";
		
		case 4:
			return "purchase_cigarette_shopkeeper";
		
		case 0:
			return "purchase_beer_shopkeeper";
		
		case 5:
			return "purchase_energydrink_shopkeeper";
		
		default:
	}
	return "purchase_energydrink_shopkeeper";
}

int func_24()//Position - 0x137E
{
	if (((((!unk_0x93C304998B457C45(Local_98.f_16[3]) || !unk_0x93C304998B457C45(Local_98.f_16[1])) || !unk_0x93C304998B457C45(Local_98.f_16[2])) || !unk_0x93C304998B457C45(Local_98.f_16[4])) || !unk_0x93C304998B457C45(Local_98.f_16[0])) || !unk_0x93C304998B457C45(Local_98.f_16[5]))
	{
		if (((((func_49(func_26(3)) && func_49(func_26(1))) && func_49(func_26(2))) && func_49(func_26(4))) && func_49(func_26(0))) && func_49(func_26(5)))
		{
			if (unk_0xF51EA69EE19061E6(0, 0, 6, 0))
			{
				if (!unk_0x93C304998B457C45(Local_98.f_16[3]))
				{
					if (func_25(&(Local_98.f_16[3]), func_26(3), func_21(3), 1, 1, 0, 1, 0))
					{
						unk_0x27D745D0C70FD05F(unk_0xE8BC72FED1586931(Local_98.f_16[3]), unk_0xD3BB1A515B0A47F3(vLocal_106));
						unk_0xEDC33A771FAEB393(unk_0xE8BC72FED1586931(Local_98.f_16[3]), true);
						unk_0xB3A8974D2C811672(unk_0xE8BC72FED1586931(Local_98.f_16[3]), false, 0);
					}
				}
				if (!unk_0x93C304998B457C45(Local_98.f_16[1]))
				{
					if (func_25(&(Local_98.f_16[1]), func_26(1), func_21(1), 1, 1, 0, 1, 0))
					{
						unk_0x27D745D0C70FD05F(unk_0xE8BC72FED1586931(Local_98.f_16[1]), unk_0xD3BB1A515B0A47F3(vLocal_106));
						unk_0xEDC33A771FAEB393(unk_0xE8BC72FED1586931(Local_98.f_16[1]), true);
						unk_0xB3A8974D2C811672(unk_0xE8BC72FED1586931(Local_98.f_16[1]), false, 0);
					}
				}
				if (!unk_0x93C304998B457C45(Local_98.f_16[2]))
				{
					if (func_25(&(Local_98.f_16[2]), func_26(2), func_21(2), 1, 1, 0, 1, 0))
					{
						unk_0x27D745D0C70FD05F(unk_0xE8BC72FED1586931(Local_98.f_16[2]), unk_0xD3BB1A515B0A47F3(vLocal_106));
						unk_0xEDC33A771FAEB393(unk_0xE8BC72FED1586931(Local_98.f_16[2]), true);
						unk_0xB3A8974D2C811672(unk_0xE8BC72FED1586931(Local_98.f_16[2]), false, 0);
					}
				}
				if (!unk_0x93C304998B457C45(Local_98.f_16[4]))
				{
					if (func_25(&(Local_98.f_16[4]), func_26(4), func_21(4), 1, 1, 0, 1, 0))
					{
						unk_0x27D745D0C70FD05F(unk_0xE8BC72FED1586931(Local_98.f_16[4]), unk_0xD3BB1A515B0A47F3(vLocal_106));
						unk_0xEDC33A771FAEB393(unk_0xE8BC72FED1586931(Local_98.f_16[4]), true);
						unk_0xB3A8974D2C811672(unk_0xE8BC72FED1586931(Local_98.f_16[4]), false, 0);
					}
				}
				if (!unk_0x93C304998B457C45(Local_98.f_16[0]))
				{
					if (func_25(&(Local_98.f_16[0]), func_26(0), func_21(0), 1, 1, 0, 1, 0))
					{
						unk_0x27D745D0C70FD05F(unk_0xE8BC72FED1586931(Local_98.f_16[0]), unk_0xD3BB1A515B0A47F3(vLocal_106));
						unk_0xEDC33A771FAEB393(unk_0xE8BC72FED1586931(Local_98.f_16[0]), true);
						unk_0xB3A8974D2C811672(unk_0xE8BC72FED1586931(Local_98.f_16[0]), false, 0);
					}
				}
				if (!unk_0x93C304998B457C45(Local_98.f_16[5]))
				{
					if (func_25(&(Local_98.f_16[5]), func_26(5), func_21(5), 1, 1, 0, 1, 0))
					{
						unk_0x27D745D0C70FD05F(unk_0xE8BC72FED1586931(Local_98.f_16[5]), unk_0xD3BB1A515B0A47F3(vLocal_106));
						unk_0xEDC33A771FAEB393(unk_0xE8BC72FED1586931(Local_98.f_16[5]), true);
						unk_0xB3A8974D2C811672(unk_0xE8BC72FED1586931(Local_98.f_16[5]), false, 0);
					}
				}
			}
		}
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Local_98.f_1), 5);
		return 1;
	}
	return 0;
}

int func_25(var uParam0, int iParam1, vector3 vParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x16C1
{
	if (!unk_0x1887812F0A3EB4F6(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x02E026B1C5CE86B4(unk_0x9A331BBF019DCAD2(iParam1, vParam2, iParam4, bParam3, iParam5));
	}
	else
	{
		*uParam0 = unk_0x02E026B1C5CE86B4(unk_0x5E35CF35E65D69B9(iParam1, vParam2, iParam4, bParam3, iParam5));
	}
	if (unk_0x93C304998B457C45(*uParam0))
	{
		unk_0xFBA991D3A851E195(unk_0xE8BC72FED1586931(*uParam0), iParam6);
		if (unk_0x0D4BF24EE51A419A(unk_0xE8BC72FED1586931(*uParam0)))
		{
			if (bParam3)
			{
				unk_0x9CE66BFF230839CE(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_26(int iParam0)//Position - 0x1743
{
	switch (iParam0)
	{
		case 3:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		case 4:
			return joaat("prop_ld_fags_01");
		
		case 0:
			return joaat("prop_ecola_can");
		
		case 5:
			return joaat("prop_amb_beer_bottle");
		
		default:
	}
	return joaat("prop_choc_pq");
}

void func_27()//Position - 0x17AB
{
	float fVar0;
	
	if (!unk_0xC80D31E4B587871C(Local_98.f_23, 9))
	{
		if (Global_2512808.f_8 == 1 || unk_0xC80D31E4B587871C(Local_98.f_23, 6))
		{
			if ((((func_3(Local_98.f_13) && func_3(Local_98)) && !func_430(Local_98)) && Local_98.f_3 != 8) && Local_98.f_3 != 7)
			{
				if (!unk_0x9F887157983E8EFC(unk_0x47BA76CE3C825A08(Local_98)))
				{
					if (!unk_0xC80D31E4B587871C(Local_100.f_52, 30))
					{
						unk_0x2DAC3448B66448E8(unk_0x47BA76CE3C825A08(Local_98), Local_98.f_42, 1600);
						unk_0x872F1C1F8587CCC7(&(Local_100.f_52), 30);
					}
					if (func_17(&uLocal_314, 100, 0))
					{
						fVar0 = unk_0xF0371FE6E2BF9599(unk_0x47BA76CE3C825A08(Local_98));
						if ((fVar0 > (Local_98.f_42 - 20f) && fVar0 < (Local_98.f_42 + 20f)) || func_17(&uLocal_320, 1500, 0))
						{
							unk_0x2CEA76A7F93740C6(unk_0x47BA76CE3C825A08(Local_98));
							Local_98.f_29 = unk_0x9CEC233AE69E2D39(vLocal_110, vLocal_111, 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0x7C92B99DB7D4962F(unk_0x47BA76CE3C825A08(Local_98), Local_98.f_29, "mp_am_hold_up", "holdup_victim_20s", 4f, -1,5f, 157, 16, 1148846080, 0);
							if (unk_0x93C304998B457C45(Local_98.f_13))
							{
								unk_0xEDC33A771FAEB393(unk_0xE8BC72FED1586931(Local_98.f_13), false);
								unk_0x42B3DBD52AED7B7D(unk_0xE8BC72FED1586931(Local_98.f_13), 1);
								unk_0xF6DCDEEE0FC03E91(unk_0xE8BC72FED1586931(Local_98.f_13), Local_98.f_29, "mp_am_hold_up", "holdup_victim_20s_bag", 4f, -4f, 137);
							}
							if (unk_0x93C304998B457C45(Local_98.f_14))
							{
								unk_0xF6DCDEEE0FC03E91(unk_0xE8BC72FED1586931(Local_98.f_14), Local_98.f_29, "mp_am_hold_up", "holdup_victim_20s_till", 4f, -4f, 137);
							}
							unk_0x9C39944AA129D284(Local_98.f_29);
							unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 9);
						}
					}
				}
				else
				{
					Local_98.f_3 = 8;
				}
			}
		}
	}
	else if (!unk_0xC80D31E4B587871C(Local_98.f_23, 17))
	{
		iLocal_109 = unk_0x45D90ED1F569A489(Local_98.f_29);
		if (iLocal_109 >= 0)
		{
			func_3(Local_98);
			if (unk_0xD56F740235B1E8F0(iLocal_109))
			{
				unk_0xD0A6028E561242DA(unk_0xFC1458A37D98B502(), 0, -1, 0);
				unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 17);
			}
		}
	}
	else if (!unk_0xC80D31E4B587871C(Local_98.f_24, 15))
	{
		iLocal_109 = unk_0x45D90ED1F569A489(Local_98.f_29);
		if (iLocal_109 >= 0)
		{
			if (unk_0xD56F740235B1E8F0(iLocal_109))
			{
				func_3(Local_98);
				if ((unk_0x93C304998B457C45(Local_98.f_13) && func_3(Local_98.f_13)) && func_3(Local_98))
				{
					if (unk_0x463C4747B41E35A3(iLocal_109) > 0,44f)
					{
						unk_0xB3A8974D2C811672(unk_0xE8BC72FED1586931(Local_98.f_13), true, 0);
						unk_0xB18E1DBC397238E1(unk_0xE8BC72FED1586931(Local_98.f_13), true, 0);
						unk_0x872F1C1F8587CCC7(&(Local_98.f_24), 15);
					}
				}
			}
		}
	}
}

int func_28()//Position - 0x1A43
{
	int iVar0;
	float fVar1;
	
	if (!unk_0x8E1421E2A2A2FBD4())
	{
		return 0;
	}
	func_41();
	if (Local_98.f_3 != 9)
	{
		if (func_430(Local_98))
		{
			Local_98.f_3 = 9;
			return 0;
		}
		if ((unk_0xC80D31E4B587871C(Local_98.f_23, 6) && !unk_0xC80D31E4B587871C(Local_98.f_23, 9)) && Local_98.f_3 < 8)
		{
			if (!unk_0x93C304998B457C45(Local_98.f_13) || !unk_0x93C304998B457C45(Local_98.f_14))
			{
				Local_98.f_3 = 8;
			}
		}
		switch (Local_98.f_3)
		{
			case 0:
				if (!func_430(Local_98))
				{
					Local_98.f_3 = 1;
				}
				break;
			
			case 1:
				if (unk_0xC80D31E4B587871C(Local_98.f_23, 4))
				{
					Local_98.f_3 = 2;
				}
				else if (unk_0xC80D31E4B587871C(Local_98.f_23, 6) || unk_0xC80D31E4B587871C(Local_98.f_23, 9))
				{
					Local_98.f_3 = 4;
				}
				else if (func_39() || func_33(0))
				{
					Local_98.f_3 = 8;
				}
				else if (func_31())
				{
					Local_98.f_3 = 7;
				}
				break;
			
			case 2:
				if (unk_0xC80D31E4B587871C(Local_98.f_23, 6) || unk_0xC80D31E4B587871C(Local_98.f_23, 9))
				{
					Local_98.f_3 = 4;
				}
				else if (func_39() || func_33(1))
				{
					Local_98.f_3 = 8;
				}
				else if (func_31())
				{
					Local_98.f_3 = 7;
				}
				break;
			
			case 3:
				if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98), 1920390111) != 0 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98), 1920390111) != 1)
				{
					Local_98.f_3 = 4;
				}
				else if (func_33(1))
				{
					Local_98.f_3 = 8;
				}
				else if (func_31())
				{
					Local_98.f_3 = 7;
				}
				break;
			
			case 4:
				if (unk_0xC80D31E4B587871C(Local_98.f_23, 17))
				{
					iVar0 = 0;
					iLocal_109 = unk_0x45D90ED1F569A489(Local_98.f_29);
					if (iLocal_109 >= 0)
					{
						if (unk_0xD56F740235B1E8F0(iLocal_109))
						{
							if (unk_0x5679106BC7ED79EE(vLocal_106, 3f, 0))
							{
								if (!unk_0xC80D31E4B587871C(Local_98.f_23, 25))
								{
									unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 25);
								}
								Local_98.f_33 = (Local_98.f_33 + 0,35f);
							}
							fVar1 = unk_0x463C4747B41E35A3(iLocal_109);
							if (fVar1 >= 0,8f)
							{
								Local_98.f_37 = 1f;
							}
							else if (fVar1 <= 0,5f)
							{
								Local_98.f_37 = 0f;
							}
							else if (fVar1 > Local_98.f_37)
							{
								Local_98.f_37 = ((fVar1 - 0,5f) * 3,33f);
							}
							if (fVar1 >= 0,92f)
							{
								Local_98.f_37 = 1f;
								iVar0 = 1;
							}
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
					if (iVar0 == 1)
					{
						Local_98.f_3 = 6;
					}
					else if (func_33(1))
					{
						Local_98.f_3 = 8;
					}
					else if (func_31())
					{
						Local_98.f_3 = 7;
					}
				}
				break;
			
			case 5:
				if (func_39() || func_33(1))
				{
					Local_98.f_3 = 8;
				}
				break;
			
			case 6:
				func_29();
				if (func_39() || func_33(1))
				{
					Local_98.f_3 = 8;
				}
				else if (func_31())
				{
					Local_98.f_3 = 7;
				}
				else if (unk_0xC80D31E4B587871C(Local_98.f_24, 3))
				{
					if (!unk_0xC80D31E4B587871C(Local_98.f_24, 4))
					{
						Local_98.f_3 = 7;
					}
				}
				break;
			
			case 8:
				func_29();
				break;
			
			case 7:
				break;
		}
	}
	else if (!unk_0xC80D31E4B587871C(Local_98.f_24, 10))
	{
		if (!unk_0x93C304998B457C45(Local_98))
		{
			Local_98.f_43 = (Local_98.f_43 - 1);
			unk_0x872F1C1F8587CCC7(&(Local_98.f_24), 10);
		}
	}
	return 1;
}

void func_29()//Position - 0x1DAF
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC80D31E4B587871C(Local_98.f_24, 2))
	{
		iVar0 = unk_0x63A6486593EC7EC3(0, 10);
		iVar1 = (iLocal_129 + func_30());
		if (iVar0 < iVar1)
		{
			unk_0x872F1C1F8587CCC7(&(Local_98.f_24), 3);
		}
		unk_0x872F1C1F8587CCC7(&(Local_98.f_24), 2);
	}
}

int func_30()//Position - 0x1DF0
{
	int iVar0;
	
	iVar0 = (Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_47 - 1);
	if (iVar0 >= 4)
	{
		return 4;
	}
	return iVar0;
}

int func_31()//Position - 0x1E15
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE8C126B7ADBB9D63(0, 24) || unk_0xE8C126B7ADBB9D63(0, 257))
	{
		iVar0 = func_32(unk_0xFC1458A37D98B502());
		if ((((((iVar0 != joaat("weapon_unarmed") && iVar0 != 0) && iVar0 != joaat("vehicle_weapon_player_bullet")) && iVar0 != joaat("vehicle_weapon_player_buzzard")) && iVar0 != joaat("vehicle_weapon_player_laser")) && iVar0 != joaat("vehicle_weapon_tank")) && iVar0 != joaat("weapon_flare"))
		{
			iVar1 = unk_0x684DC0C684AE74CA(iVar0);
			if (((((((unk_0x5088CF774DF6D935(unk_0xFC1458A37D98B502(), iVar0) == 0 && iVar1 != -728555052) && iVar1 != 507375312) && iVar1 != 0) && iVar1 != -37788308) && iVar1 != -801780072) && iVar1 != 431593103) && iVar1 != -755518101)
			{
				if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == iLocal_134)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_32(int iParam0)//Position - 0x1F15
{
	var uVar0;
	
	unk_0x5AD8564EFD5BEC2E(iParam0, &uVar0, 1);
	return uVar0;
}

int func_33(int iParam0)//Position - 0x1F29
{
	int iVar0;
	struct<2> Var1;
	int iVar2;
	int iVar3;
	
	if (func_37(unk_0x9EB17624F44A8DA4(), 146))
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Local_98.f_23, 5))
	{
		return 1;
	}
	if (unk_0x9F887157983E8EFC(unk_0x47BA76CE3C825A08(Local_98)))
	{
		return 1;
	}
	if (func_36() || func_35())
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(1))
	{
		if (unk_0xA387B84DA2EB1BEE(1, iVar0) == 182)
		{
			if (unk_0x575EF325DA5E3F04(1, iVar0, &Var1, 11))
			{
				if (unk_0x6ADD12BF4D6D2587(Var1) && unk_0x52C56492660097C7(Var1))
				{
					iVar2 = unk_0x07F64790D10D1DB5(Var1);
					if (unk_0x3AB6A1A9084FB0A4(iVar2) && unk_0x1ACD6691B9C9AA46(iVar2) == iLocal_134)
					{
						if (unk_0x6ADD12BF4D6D2587(Var1.f_1) && unk_0x52C56492660097C7(Var1.f_1))
						{
							iVar3 = unk_0x07F64790D10D1DB5(Var1.f_1);
							if (iVar3 != unk_0x47BA76CE3C825A08(Local_98))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xC80D31E4B587871C(Local_98.f_24, 5))
		{
			if (unk_0x25D10EDC93C33B77(vLocal_140 - Vector(25f, 25f, 25f), vLocal_140 + Vector(25f, 25f, 25f)))
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_24), 5);
			}
		}
	}
	return 0;
}

int func_34()//Position - 0x2066
{
	if (Local_100.f_50 >= 15 && Local_100.f_50 <= 19)
	{
		if (unk_0x4E69510C44147A5C(9, vLocal_140, 40f))
		{
			return 1;
		}
	}
	if (unk_0x34D9850FEBB1F859(-1, vLocal_140, vLocal_141, fLocal_142))
	{
		return 1;
	}
	if (unk_0x34D9850FEBB1F859(-1, vLocal_143, vLocal_144, fLocal_145))
	{
		return 1;
	}
	return 0;
}

int func_35()//Position - 0x20D0
{
	if ((unk_0x53C4FF461321A689(vLocal_143, vLocal_144, fLocal_145, joaat("weapon_grenade"), 0) || unk_0x53C4FF461321A689(vLocal_143, vLocal_144, fLocal_145, joaat("weapon_molotov"), 0)) || unk_0x53C4FF461321A689(vLocal_143, vLocal_144, fLocal_145, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_36()//Position - 0x2131
{
	if ((unk_0x53C4FF461321A689(vLocal_140, vLocal_141, fLocal_142, joaat("weapon_grenade"), 0) || unk_0x53C4FF461321A689(vLocal_140, vLocal_141, fLocal_142, joaat("weapon_molotov"), 0)) || unk_0x53C4FF461321A689(vLocal_140, vLocal_141, fLocal_142, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0, int iParam1)//Position - 0x2192
{
	if (Global_1627537[iParam0 /*532*/] == iParam1)
	{
		return func_38(iParam0);
	}
	return 0;
}

int func_38(int iParam0)//Position - 0x21B2
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 0);
	}
	return 0;
}

int func_39()//Position - 0x21D8
{
	if (func_40() || func_34())
	{
		return 1;
	}
	return 0;
}

int func_40()//Position - 0x21F6
{
	if (unk_0x31DBB84AFB5DFAB7(vLocal_140, vLocal_141, fLocal_142, 0))
	{
		return 1;
	}
	if (unk_0x31DBB84AFB5DFAB7(vLocal_143, vLocal_144, fLocal_145, 0))
	{
		return 1;
	}
	return 0;
}

void func_41()//Position - 0x2231
{
	if (Local_98.f_33 > 0f)
	{
		if (func_42(&(Local_98.f_34), 50, 0))
		{
			Local_98.f_33 = (Local_98.f_33 - 0,02f);
			if (Local_98.f_33 < 0f)
			{
				Local_98.f_33 = 0f;
			}
			func_13(&(Local_98.f_34));
		}
	}
}

int func_42(var uParam0, int iParam1, bool bParam2)//Position - 0x2274
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_18(uParam0, bParam2, 0);
	if (unk_0x3A711520F83BAE98() && !bParam2)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0)) >= iParam1)
		{
			func_13(uParam0);
			return 1;
		}
	}
	else if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), *uParam0)) >= iParam1)
	{
		func_13(uParam0);
		return 1;
	}
	return 0;
}

void func_43()//Position - 0x22DE
{
	int iVar0;
	int iVar1;
	
	if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iLocal_119)))
	{
		iVar0 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iLocal_119));
		iVar1 = unk_0x25D049AAC4603E65(iVar0);
		if (!unk_0xC80D31E4B587871C(Local_98.f_23, 11))
		{
			if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/], 5))
			{
				if (unk_0x918CA1BFFAA03556(Local_98.f_13))
				{
					if (func_3(Local_98.f_13))
					{
						unk_0x6B7C10B19928914F(unk_0xE8BC72FED1586931(Local_98.f_13), 1, 1);
						func_45(&(Local_98.f_13));
					}
				}
				else
				{
					Local_98.f_38 = { Local_99[iLocal_119 /*10*/].f_7 };
					Local_98.f_44 = 7;
					unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 11);
				}
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_98.f_23, 14))
		{
			if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/], 6))
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 14);
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_98.f_23, 15))
		{
			if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/], 7))
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 15);
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_98.f_23, 26))
		{
			if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/], 24))
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 26);
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_98.f_23, 22))
		{
			if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/], 22))
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 22);
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_98.f_23, 23))
		{
			if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/], 23))
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 23);
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_98.f_23, 30))
		{
			if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/], 25))
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 30);
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_98.f_23, 31))
		{
			if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/], 26))
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 31);
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_98.f_24, 6))
		{
			if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/], 29))
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_24), 6);
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_98.f_24, 9))
		{
			if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/], 31))
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_24), 9);
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_98.f_1, 3))
		{
			if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/].f_1, 3))
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_1), 3);
			}
		}
		if (unk_0xC80D31E4B587871C(Local_98.f_25, 1))
		{
			if (!unk_0xC80D31E4B587871C(Local_98.f_25, 6))
			{
				if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/].f_5, 1))
				{
					unk_0x872F1C1F8587CCC7(&(Local_98.f_25), 6);
				}
			}
			if (!unk_0xC80D31E4B587871C(Local_98.f_25, 7))
			{
				if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/].f_5, 2))
				{
					unk_0x872F1C1F8587CCC7(&(Local_98.f_25), 7);
				}
			}
			if (!unk_0xC80D31E4B587871C(Local_98.f_25, 5))
			{
				if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/].f_5, 0))
				{
					unk_0x872F1C1F8587CCC7(&(Local_98.f_25), 5);
				}
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_98.f_23, 20))
		{
			if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/], 11))
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 20);
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_98.f_24, 17))
		{
			if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/], 13))
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_24), 17);
			}
		}
		if (func_44(iVar0, 1, 1))
		{
			if (!unk_0xC80D31E4B587871C(Local_98.f_23, 5))
			{
				if (!func_430(Local_98))
				{
					if (unk_0xEBE499597C718EB8(unk_0x47BA76CE3C825A08(Local_98), iVar1, 1))
					{
						unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 5);
					}
				}
			}
			if (unk_0xC80D31E4B587871C(Local_98.f_25, 1))
			{
				if (!unk_0xC80D31E4B587871C(Local_98.f_25, 8))
				{
					if (!func_430(Local_98.f_15))
					{
						if (unk_0xEBE499597C718EB8(unk_0x47BA76CE3C825A08(Local_98.f_15), iVar1, 1))
						{
							unk_0x872F1C1F8587CCC7(&(Local_98.f_25), 8);
						}
					}
				}
				if (!unk_0xC80D31E4B587871C(Local_98.f_25, 9))
				{
					if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/].f_5, 3))
					{
						unk_0x872F1C1F8587CCC7(&(Local_98.f_25), 9);
					}
				}
			}
			if (!unk_0xC80D31E4B587871C(Local_98.f_23, 6))
			{
				if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/], 1))
				{
					unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 6);
				}
			}
			if (!unk_0xC80D31E4B587871C(Local_98.f_23, 16))
			{
				if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/], 8))
				{
					unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 16);
				}
			}
			if (!unk_0xC80D31E4B587871C(Local_98.f_24, 1))
			{
				if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/], 27))
				{
					unk_0x872F1C1F8587CCC7(&(Local_98.f_24), 1);
				}
			}
			if (!unk_0xC80D31E4B587871C(Local_98.f_23, 7))
			{
				if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/], 0))
				{
					unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 7);
				}
			}
			if (!unk_0xC80D31E4B587871C(Local_98.f_23, 10))
			{
				if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/], 4))
				{
					if (Local_98.f_3 != 5 && Local_98.f_3 != 6)
					{
						Local_98.f_3 = 5;
					}
					unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 10);
				}
			}
			if (!unk_0xC80D31E4B587871C(Local_98.f_1, 2))
			{
				if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/].f_1, 2))
				{
					unk_0x872F1C1F8587CCC7(&(Local_98.f_1), 2);
					unk_0x872F1C1F8587CCC7(&(Local_98.f_1), 4);
					iLocal_121 = iLocal_119;
				}
			}
			else if (!unk_0xC80D31E4B587871C(Local_99[iLocal_121 /*10*/].f_1, 2))
			{
				unk_0x0EE72DB1CD8A3B86(&(Local_98.f_1), 2);
				if (unk_0xC80D31E4B587871C(Local_98.f_1, 3))
				{
					unk_0x0EE72DB1CD8A3B86(&(Local_98.f_1), 3);
				}
			}
			if (!unk_0xC80D31E4B587871C(Local_98.f_24, 8))
			{
				if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/], 30))
				{
					unk_0x872F1C1F8587CCC7(&(Local_98.f_24), 8);
				}
			}
			if (!unk_0xC80D31E4B587871C(Local_98.f_1, 0))
			{
				if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/].f_1, 0))
				{
					unk_0x872F1C1F8587CCC7(&(Local_98.f_1), 0);
					unk_0x872F1C1F8587CCC7(&(Local_98.f_1), 1);
					Local_98.f_26 = Local_99[iLocal_119 /*10*/].f_2;
					iLocal_120 = iLocal_119;
				}
			}
			else if (!unk_0xC80D31E4B587871C(Local_99[iLocal_120 /*10*/].f_1, 0))
			{
				unk_0x0EE72DB1CD8A3B86(&(Local_98.f_1), 0);
			}
			if (!unk_0xC80D31E4B587871C(Local_98.f_24, 13))
			{
				if (unk_0xC80D31E4B587871C(Local_99[iLocal_119 /*10*/], 21))
				{
					unk_0x872F1C1F8587CCC7(&(Local_98.f_24), 13);
				}
			}
		}
	}
	iLocal_119++;
	if (iLocal_119 == unk_0xB72D370CB7ABC3EF())
	{
		iLocal_119 = 0;
	}
}

int func_44(int iParam0, bool bParam1, bool bParam2)//Position - 0x287F
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

void func_45(var uParam0)//Position - 0x28C9
{
	int iVar0;
	
	if (unk_0x93C304998B457C45(*uParam0))
	{
		if (!unk_0xE53FD7AF7F25C0A8(*uParam0))
		{
		}
	}
	if (unk_0x918CA1BFFAA03556(*uParam0))
	{
		iVar0 = unk_0x29AB7D6D0DE18055(*uParam0);
		unk_0xFA8AA9E856FCF99B(&iVar0);
	}
}

void func_46()//Position - 0x2902
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 2);
	unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 3);
	unk_0x0EE72DB1CD8A3B86(&(Local_98.f_23), 13);
	unk_0x0EE72DB1CD8A3B86(&(Local_98.f_23), 27);
	unk_0x0EE72DB1CD8A3B86(&(Local_98.f_23), 28);
	unk_0x0EE72DB1CD8A3B86(&(Local_98.f_24), 4);
	if (!unk_0xC80D31E4B587871C(Local_98.f_23, 18))
	{
		if (func_430(Local_98))
		{
			if (Local_98.f_37 <= 0f)
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 18);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
		{
			iVar5 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0));
			iVar6 = unk_0x25D049AAC4603E65(iVar5);
			if (Local_99[iVar0 /*10*/].f_3 > 0)
			{
				Local_98.f_4 = (Local_98.f_4 + Local_99[iVar0 /*10*/].f_3);
				Local_99[iVar0 /*10*/].f_3 = 0;
			}
			if (unk_0xC80D31E4B587871C(Local_98.f_23, 3))
			{
				if (unk_0x0C88267282FD588F(iVar6, vLocal_139, 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0x0EE72DB1CD8A3B86(&(Local_98.f_23), 3);
				}
			}
			if (!unk_0xC80D31E4B587871C(Local_98.f_24, 16))
			{
				if (unk_0xC80D31E4B587871C(Local_99[iVar0 /*10*/], 12))
				{
					unk_0x872F1C1F8587CCC7(&(Local_98.f_24), 16);
				}
			}
			if (func_44(iVar5, 1, 1))
			{
				if (unk_0xC80D31E4B587871C(Local_98.f_23, 2))
				{
					unk_0x0EE72DB1CD8A3B86(&(Local_98.f_23), 2);
				}
				if (unk_0x1ACD6691B9C9AA46(iVar6) == iLocal_134)
				{
					if (unk_0x078FCDE51274A1BF(iVar6) == iLocal_135 || unk_0x078FCDE51274A1BF(iVar6) == iLocal_136)
					{
						iVar2 = 1;
					}
					else if (unk_0x078FCDE51274A1BF(iVar6) == iLocal_137)
					{
						unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 27);
						iVar3 = 1;
					}
				}
				if (iVar2 == 1 || iVar3 == 1)
				{
					unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 13);
					iVar4++;
					if (!unk_0xC80D31E4B587871C(Local_98.f_23, 9) && !unk_0xC80D31E4B587871C(Local_98.f_23, 21))
					{
						if (!unk_0xC80D31E4B587871C(Local_98.f_23, 4))
						{
							if (unk_0x5AD8564EFD5BEC2E(iVar6, &iVar1, 1))
							{
								if ((((iVar1 != joaat("weapon_unarmed") && iVar1 != 0) && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare")) && iVar1 != joaat("weapon_snowball"))
								{
									if (Local_98.f_32 == -1)
									{
										Local_98.f_32 = iVar0;
									}
									else if (!unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(Local_98.f_32)))
									{
										Local_98.f_32 = -1;
									}
									unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 4);
									if (!unk_0xC80D31E4B587871C(Local_98.f_23, 12))
									{
										if (unk_0x0C88267282FD588F(iVar6, vLocal_106, 2,5f, 2,5f, 3f, 0, 1, 0))
										{
											unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 12);
										}
									}
								}
							}
						}
						if (!unk_0xC80D31E4B587871C(Local_98.f_24, 0))
						{
							if (unk_0xF5D0CBECCA41314A(iVar5) > 0)
							{
								unk_0x872F1C1F8587CCC7(&(Local_98.f_24), 0);
							}
						}
					}
				}
				else if (unk_0x0C88267282FD588F(iVar6, vLocal_139, 5f, 5f, 2,5f, 0, 1, 0))
				{
					unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 28);
					iVar4++;
				}
				if (!unk_0xC80D31E4B587871C(Local_98.f_24, 4))
				{
					if (unk_0xC80D31E4B587871C(Local_99[iVar0 /*10*/], 28))
					{
						unk_0x872F1C1F8587CCC7(&(Local_98.f_24), 4);
					}
				}
				if ((unk_0xC80D31E4B587871C(Local_98.f_23, 9) && !unk_0xC80D31E4B587871C(Local_98.f_23, 20)) && !unk_0xC80D31E4B587871C(Local_98.f_23, 19))
				{
					if (Local_99[iLocal_119 /*10*/].f_6 > Local_98.f_33)
					{
						Local_98.f_33 = Local_99[iVar0 /*10*/].f_6;
						func_13(&(Local_98.f_34));
						if (!unk_0xC80D31E4B587871C(Local_98.f_23, 24))
						{
							if (Local_98.f_33 > (0,55f + 0,2f))
							{
								unk_0x872F1C1F8587CCC7(&(Local_98.f_23), 24);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_98.f_41 != iVar4)
	{
		Local_98.f_41 = iVar4;
	}
}

int func_47()//Position - 0x2C7F
{
	int iVar0;
	
	if ((!unk_0x93C304998B457C45(Local_98) || !unk_0x93C304998B457C45(Local_98.f_13)) || !unk_0x93C304998B457C45(Local_98.f_14))
	{
		if ((func_49(iLocal_105) && func_49(func_50(1))) && func_49(func_50(2)))
		{
			if (unk_0xF51EA69EE19061E6(1, 0, 2, 0))
			{
				if (!unk_0x93C304998B457C45(Local_98))
				{
					if (func_48(&Local_98, 4, iLocal_105, vLocal_106 - Vector(1f, 0f, 0f), Local_98.f_42, 1, 1, 1))
					{
						unk_0x03924C68EFCBC511(unk_0x47BA76CE3C825A08(Local_98), 0, iLocal_311[0], iLocal_312[0], 0);
						unk_0x03924C68EFCBC511(unk_0x47BA76CE3C825A08(Local_98), 2, iLocal_311[1], iLocal_312[1], 0);
						unk_0x03924C68EFCBC511(unk_0x47BA76CE3C825A08(Local_98), 3, iLocal_311[2], iLocal_312[2], 0);
						unk_0x03924C68EFCBC511(unk_0x47BA76CE3C825A08(Local_98), 4, iLocal_311[3], iLocal_312[3], 0);
						unk_0x03924C68EFCBC511(unk_0x47BA76CE3C825A08(Local_98), 8, iLocal_311[4], iLocal_312[4], 0);
						unk_0x27D745D0C70FD05F(unk_0x47BA76CE3C825A08(Local_98), unk_0xD3BB1A515B0A47F3(vLocal_106));
						unk_0xE9B3D12A64CC7C1A(unk_0x47BA76CE3C825A08(Local_98), 1);
						unk_0x771A86309E0CA47B(unk_0x47BA76CE3C825A08(Local_98), 1);
						unk_0xE0F761CE722765C1(unk_0x47BA76CE3C825A08(Local_98), 1, 0);
						unk_0x66698545014E2F21(unk_0x47BA76CE3C825A08(Local_98), 16);
						unk_0xD57D8114F01D6AE2(unk_0x47BA76CE3C825A08(Local_98), 0);
						unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_98), 1024, true);
						unk_0x7346A36E01E18FEC(unk_0x47BA76CE3C825A08(Local_98), 1);
						unk_0xE01CE1EBCD7EE551(unk_0x47BA76CE3C825A08(Local_98), system::round((200f * Global_262145.f_153)), 0);
						if (!unk_0xB80A4DA4C06A76F1(unk_0x47BA76CE3C825A08(Local_98), "XP_Blocker"))
						{
							unk_0x592E07F996BB4B89(unk_0x47BA76CE3C825A08(Local_98), "XP_Blocker", 1);
						}
						func_429(&uLocal_146, 3, unk_0x47BA76CE3C825A08(Local_98), &(Local_98.f_46), 1, 0);
					}
				}
				if (!unk_0x93C304998B457C45(Local_98.f_13))
				{
					iVar0 = unk_0xAEE6FC463D735D1F(-1795552418, vLocal_122, 0, func_50(1));
					if (unk_0x6ADD12BF4D6D2587(iVar0))
					{
						Local_98.f_13 = unk_0x02E026B1C5CE86B4(iVar0);
						unk_0xEDC33A771FAEB393(unk_0xE8BC72FED1586931(Local_98.f_13), true);
						unk_0xB18E1DBC397238E1(unk_0xE8BC72FED1586931(Local_98.f_13), false, 0);
						unk_0x48ED7B2293A96722(unk_0xE8BC72FED1586931(Local_98.f_13), fLocal_123);
						unk_0x27D745D0C70FD05F(unk_0xE8BC72FED1586931(Local_98.f_13), unk_0xD3BB1A515B0A47F3(vLocal_106));
						unk_0x1A0806871323CD16(unk_0xE8BC72FED1586931(Local_98.f_13), 1);
						unk_0xC17855BA6280F7B3(unk_0xE8BC72FED1586931(Local_98.f_13), -0,2f, 1);
						unk_0x61EF72AFBDCBE53F(unk_0xE8BC72FED1586931(Local_98.f_13), 1, 0);
						unk_0xB3A8974D2C811672(unk_0xE8BC72FED1586931(Local_98.f_13), false, 0);
					}
				}
				if (!unk_0x93C304998B457C45(Local_98.f_14))
				{
					if (func_25(&(Local_98.f_14), func_50(2), vLocal_124 - Vector(0,12f, 0f, 0f), 1, 1, 0, 1, 0))
					{
						unk_0x48ED7B2293A96722(unk_0xE8BC72FED1586931(Local_98.f_14), fLocal_125);
						unk_0x27D745D0C70FD05F(unk_0xE8BC72FED1586931(Local_98.f_14), unk_0xD3BB1A515B0A47F3(vLocal_106));
						unk_0xEDC33A771FAEB393(unk_0xE8BC72FED1586931(Local_98.f_14), true);
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_48(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x2F52
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

bool func_49(int iParam0)//Position - 0x2FB1
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x6FF834D85E2DD4C6(iParam0);
	return unk_0x9A0B2ED5055D3F0B(iParam0);
}

int func_50(int iParam0)//Position - 0x2FCF
{
	switch (iParam0)
	{
		case 0:
			return joaat("mp_m_shopkeep_01");
		
		case 1:
			return joaat("p_poly_bag_01_s");
		
		case 2:
			return joaat("p_till_01_s");
		
		default:
	}
	return joaat("mp_m_shopkeep_01");
}

void func_51()//Position - 0x300D
{
	if (!unk_0xC80D31E4B587871C(Local_100.f_52, 20))
	{
		if (unk_0xC80D31E4B587871C(Local_98.f_23, 11) || unk_0xC80D31E4B587871C(Local_98.f_24, 16))
		{
			if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == iLocal_134 || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_139, 5f, 5f, 2,5f, 0, 1, 0))
			{
				func_54();
				func_52();
				func_6(Local_100.f_50, 1, func_7());
				unk_0x872F1C1F8587CCC7(&(Local_100.f_52), 20);
			}
			else
			{
				if ((unk_0xC80D31E4B587871C(Local_100.f_52, 31) && (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0 || unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 1))) && unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_139, 20f, 20f, 20f, 0, 1, 0))
				{
					func_54();
				}
				unk_0x872F1C1F8587CCC7(&(Local_100.f_52), 20);
			}
		}
	}
}

void func_52()//Position - 0x30F7
{
	int iVar0;
	
	iVar0 = func_53(47);
	Global_2413945[iVar0 /*83*/] = 47;
	StringCopy(&(Global_2413945[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_53(int iParam0)//Position - 0x3124
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2413945[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2413945[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_54()//Position - 0x3171
{
	int iVar0;
	
	if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0 || unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 1))
	{
		iVar0 = func_130(1178, -1, 0);
		if (!unk_0xC80D31E4B587871C(iVar0, Local_100.f_50))
		{
			func_129(14, 1, -1);
			unk_0x872F1C1F8587CCC7(&iVar0, Local_100.f_50);
			func_128(1178, iVar0, -1, 1, 0);
			if (func_127(14, -1) >= 20)
			{
				func_113(44, 1);
			}
			else
			{
				func_112(44, func_127(14, -1));
			}
		}
		func_111(1164, 1, -1);
		func_110(12, 1, -1, 1);
		func_100(19);
		iLocal_329 = 100;
		iLocal_329 = system::round((IntToFloat(iLocal_329) * Global_262145.f_4225));
		func_58(2, "XPT_HOLDUP", -1636175450, -235721452, iLocal_329, 1, -1, 0);
		func_55(12, 0);
	}
}

void func_55(int iParam0, int iParam1)//Position - 0x3248
{
	int iVar0;
	
	if (func_57(iParam0, iParam1))
	{
		iVar0 = func_56();
		Global_2456735[iVar0] = iParam0;
	}
}

int func_56()//Position - 0x326B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2456735[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_57(int iParam0, var uParam1)//Position - 0x32A0
{
	if (Global_1312842)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312854) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_58(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x3326
{
	return func_59(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_59(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x3342
{
	var uVar0;
	
	uVar0 = func_60(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_60(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x3365
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_99(unk_0x9EB17624F44A8DA4()) || func_98(unk_0x9EB17624F44A8DA4()))
	{
		if (Global_262145.f_8979 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_8979;
		}
	}
	else if (func_95() || func_91(unk_0x9EB17624F44A8DA4()))
	{
		if (Global_262145.f_22055 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22055;
		}
	}
	else if (Global_262145.f_6026 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6026;
	}
	if (func_90(sParam2))
	{
	}
	if (func_89())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = system::round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_87(iVar1);
		fVar3 = (system::to_float(iVar1) * Global_262145.f_1);
		iVar1 = system::round(fVar3);
		if (bParam10)
		{
			iVar1 = func_86(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_83(0, &iVar1);
					break;
				
				case 3:
					func_83(1, &iVar1);
					break;
				
				case 1:
					func_79(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1677772)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_111(1161, iVar1, -1);
			if (iParam1 == 0)
			{
				func_71((func_78(unk_0x9EB17624F44A8DA4()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x0367F69CE26830AB(iVar1, iParam8, iParam9);
				if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_2 != -1)
				{
					func_111(1162, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_65(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_61((func_63(unk_0x9EB17624F44A8DA4()) + iVar1));
			}
			else
			{
				func_61((func_63(unk_0x9EB17624F44A8DA4()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_61(int iParam0)//Position - 0x3563
{
	if (func_89())
	{
		Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_5 = iParam0;
		func_62(joaat("mpply_globalxp"), iParam0);
	}
}

void func_62(int iParam0, int iParam1)//Position - 0x358E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, 1);
	}
}

int func_63(int iParam0)//Position - 0x35AA
{
	if (iParam0 > -1)
	{
		if (func_44(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x9EB17624F44A8DA4())
			{
				return func_64(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_5;
			}
		}
		else
		{
			return func_64(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_64(int iParam0)//Position - 0x35FB
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

void func_65(int iParam0)//Position - 0x3619
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_70(unk_0x9EB17624F44A8DA4()) };
	if (unk_0x15DBBAF9E2085C7A())
	{
		if (unk_0xA84F967541249268(&Var0))
		{
			iVar1 = func_68(func_69(&Var0));
			if (iVar1 == 0)
			{
				func_67(&Global_1368098, iParam0);
				func_66(joaat("mpply_crew_local_xp_0"), Global_1368098);
			}
			else if (iVar1 == 1)
			{
				func_67(&Global_1368099, iParam0);
				func_66(joaat("mpply_crew_local_xp_1"), Global_1368099);
			}
			else if (iVar1 == 2)
			{
				func_67(&Global_1368100, iParam0);
				func_66(joaat("mpply_crew_local_xp_2"), Global_1368100);
			}
			else if (iVar1 == 3)
			{
				func_67(&Global_1368101, iParam0);
				func_66(joaat("mpply_crew_local_xp_3"), Global_1368101);
			}
			else if (iVar1 == 4)
			{
				func_67(&Global_1368102, iParam0);
				func_66(joaat("mpply_crew_local_xp_4"), Global_1368102);
			}
		}
	}
}

void func_66(int iParam0, int iParam1)//Position - 0x36ED
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1368093 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1368095 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1368095 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1368096 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1368097 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1368098 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1368099 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1368100 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1368101 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1368102 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1368103 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1368104 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1368105 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1368106 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1368107 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1368108 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1368109 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_67(var uParam0, int iParam1)//Position - 0x3812
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_68(int iParam0)//Position - 0x3823
{
	if (iParam0 == Global_1368093)
	{
		return 0;
	}
	else if (iParam0 == Global_1368094)
	{
		return 1;
	}
	else if (iParam0 == Global_1368095)
	{
		return 2;
	}
	else if (iParam0 == Global_1368096)
	{
		return 3;
	}
	else if (iParam0 == Global_1368097)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_69(var uParam0)//Position - 0x3880
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		if (unk_0xA84F967541249268(uParam0))
		{
			return Global_2456758;
		}
	}
	return Global_2456758;
}

struct<13> func_70(int iParam0)//Position - 0x38A3
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

void func_71(int iParam0, int iParam1, int iParam2)//Position - 0x38BA
{
	if (func_89())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8947 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1368213[func_76(-1)])
				{
					unk_0x0367F69CE26830AB(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1368213[func_76(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8946 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x0367F69CE26830AB(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8946 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x0367F69CE26830AB(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_75(unk_0x9EB17624F44A8DA4()))
		{
			Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_1 = iParam0;
			Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_6 = func_73(iParam0, 1);
		}
		func_72(636, iParam0, -1, 1);
		func_128(637, func_73(iParam0, 1), -1, 1, 0);
		Global_1368213[func_76(-1)] = iParam0;
		func_55(7, 0);
	}
}

void func_72(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x39DB
{
	int iVar0;
	
	iVar0 = Global_2523060[iParam0 /*3*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1368159[func_76(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1368165[func_76(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1368171[func_76(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1368177[func_76(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1368135[func_76(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1368141[func_76(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1368147[func_76(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1368153[func_76(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1368111[func_76(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1368117[func_76(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1368123[func_76(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1368129[func_76(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1368183[func_76(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1368189[func_76(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1368195[func_76(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1368201[func_76(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1368207[func_76(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1368213[func_76(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1368219[func_76(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2549199[0 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2549199[1 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2549199[2 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2549199[3 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 7052:
			Global_2549282[func_76(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1368225[func_76(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1368231[func_76(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1368237[func_76(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1368243[func_76(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2549239[0 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2549239[1 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2549239[2 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2549239[3 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2549239[4 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549285[0 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549285[1 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549285[2 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549285[3 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549285[4 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549301[0 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549301[1 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549301[2 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549301[3 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549301[4 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2549239[5 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2549199[4 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549317[func_76(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549326[func_76(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549320[func_76(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549329[func_76(iParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549323[func_76(iParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549332[func_76(iParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549335[func_76(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2549239[6 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2549199[5 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2549239[7 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2549199[6 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2549239[8 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2549199[7 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2549239[9 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2549199[8 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2549239[10 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2549199[9 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2549239[11 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2549199[10 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2549239[12 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2549199[11 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2549239[13 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2549199[12 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_73(int iParam0, bool bParam1)//Position - 0x40A6
{
	if (bParam1)
	{
	}
	return func_74(iParam0, 0);
}

int func_74(int iParam0, int iParam1)//Position - 0x40BA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_285062[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_285062[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((system::to_float(iVar1) - system::to_float(iVar2)) / 2f) + system::to_float(iVar2));
		iVar3 = system::round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_75(int iParam0)//Position - 0x4179
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

int func_76(int iParam0)//Position - 0x419E
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_77();
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

int func_77()//Position - 0x41D2
{
	return Global_1312736;
}

int func_78(int iParam0)//Position - 0x41DE
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x9EB17624F44A8DA4())
			{
				return Global_1368213[func_76(-1)];
			}
			else if (func_75(iParam0))
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1368213[func_76(-1)];
	}
	return 0;
}

void func_79(int iParam0)//Position - 0x423B
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4());
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		iVar4 = unk_0x2B957AC89DEBA5B6(iVar0);
		if (unk_0x012BC3F18B8C7807(iVar4))
		{
			iVar5 = unk_0x43E1A43A1AA9E0BE(iVar4);
			if (unk_0x917EE18109C5ACEA(iVar5) != -1)
			{
				if (unk_0x917EE18109C5ACEA(iVar5) == iVar1 || func_82(unk_0x917EE18109C5ACEA(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x9EB17624F44A8DA4())
					{
						if (func_81(unk_0x9EB17624F44A8DA4(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = system::round((func_80(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = system::round((func_80(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_80(int iParam0, int iParam1)//Position - 0x4326
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = system::to_float(iParam0);
	fVar1 = system::to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_81(int iParam0, int iParam1)//Position - 0x4347
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		Global_2492157 = { func_70(iParam0) };
		Global_2492170 = { func_70(iParam1) };
		if (unk_0xA84F967541249268(&Global_2492157))
		{
			if (unk_0xA84F967541249268(&Global_2492170))
			{
				unk_0x5CF21D71A8C4CFA6(&Global_2492087, 35, &Global_2492157);
				unk_0x5CF21D71A8C4CFA6(&Global_2492122, 35, &Global_2492170);
				if (Global_2492087 == Global_2492122)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_82(int iParam0, int iParam1, int iParam2)//Position - 0x43B4
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 0);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 1);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 2);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 4);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 5);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 6);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 8);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 9);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 10);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 12);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 13);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 14);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_83(bool bParam0, int iParam1)//Position - 0x457F
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0xB72D370CB7ABC3EF())
		{
			iVar3 = iVar0;
			if (unk_0x012BC3F18B8C7807(iVar3))
			{
				iVar4 = unk_0x43E1A43A1AA9E0BE(iVar3);
				if (func_44(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x9EB17624F44A8DA4())
					{
						iVar1++;
						if (func_81(unk_0x9EB17624F44A8DA4(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_44(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x9EB17624F44A8DA4())
				{
					if (func_84(unk_0x9EB17624F44A8DA4(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_81(unk_0x9EB17624F44A8DA4(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = system::round((func_80(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = system::round((func_80(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_84(int iParam0, int iParam1)//Position - 0x4697
{
	return system::vdist(func_85(iParam0), func_85(iParam1));
	return 0f;
}

Vector3 func_85(int iParam0)//Position - 0x46B3
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

int func_86(int iParam0)//Position - 0x46C6
{
	int iVar0;
	
	if (unk_0xEF96DAAD69CD3E8A() != 3)
	{
		return *iParam0;
	}
	iVar0 = system::round((func_80(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_87(int iParam0)//Position - 0x46FD
{
	if (iParam0 < 0)
	{
		if (unk_0xB89BB11E0945F6F0(iParam0) > func_78(unk_0x9EB17624F44A8DA4()))
		{
			iParam0 = -func_78(unk_0x9EB17624F44A8DA4());
		}
	}
	if (func_88(8000, 0, 0) > 0)
	{
		if (func_88(8000, 0, 0) < (iParam0 + func_78(unk_0x9EB17624F44A8DA4())))
		{
			iParam0 = (func_88(8000, 0, 0) - func_78(unk_0x9EB17624F44A8DA4()));
		}
	}
	return iParam0;
}

int func_88(int iParam0, bool bParam1, int iParam2)//Position - 0x4761
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_285062[iParam0];
}

int func_89()//Position - 0x4789
{
	return 1;
}

int func_90(char* sParam0)//Position - 0x4792
{
	if (unk_0x8C1C362CA8299475(sParam0))
	{
		return 1;
	}
	else if (unk_0x74C475EB8E73D398(sParam0, "") || unk_0x74C475EB8E73D398(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_91(int iParam0)//Position - 0x47CC
{
	return func_92(func_93(iParam0));
}

int func_92(int iParam0)//Position - 0x47DE
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_93(int iParam0)//Position - 0x47F8
{
	if (func_94(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

int func_94(int iParam0, int iParam1)//Position - 0x481B
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_95()//Position - 0x4856
{
	if (unk_0x4916190900E76373())
	{
		return func_97();
	}
	return func_96(Global_4456448.f_122309);
}

int func_96(int iParam0)//Position - 0x487A
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4997[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_97()//Position - 0x48B4
{
	return Global_2447174.f_16;
}

bool func_98(int iParam0)//Position - 0x48C2
{
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

bool func_99(int iParam0)//Position - 0x48D7
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

void func_100(int iParam0)//Position - 0x48EC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_7960)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_109() /*12130*/].f_7676.f_3809[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_109() /*12130*/].f_7676.f_3809[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_109() /*12130*/].f_7676.f_3809[iVar2 /*3*/].f_1)
			{
				func_105(iVar2, 1);
				unk_0x872F1C1F8587CCC7(&Global_2492674, (8 + iVar2));
				func_103(2107, -1);
				func_101(67, -1);
				func_103(2570, -1);
				func_101(69, -1);
				unk_0x858AD516F5EB3631(1000, iVar1);
				if (iVar3 < 2)
				{
					if (!unk_0xC80D31E4B587871C(Global_2492674, 12))
					{
						func_55(7, 0);
					}
					else
					{
						func_55(15, 0);
					}
				}
			}
		}
	}
}

void func_101(int iParam0, int iParam1)//Position - 0x49E3
{
	int iVar0;
	
	iVar0 = func_127(iParam0, func_76(iParam1));
	iVar0++;
	func_102(iParam0, iVar0, iParam1);
}

void func_102(int iParam0, int iParam1, var uParam2)//Position - 0x4A09
{
	int iVar0;
	
	iVar0 = Global_2548785[iParam0 /*3*/][func_76(uParam2)];
	unk_0xBFFF62F75445099D(iVar0, iParam1, 1);
}

void func_103(int iParam0, int iParam1)//Position - 0x4A2D
{
	int iVar0;
	
	iVar0 = func_130(iParam0, func_76(iParam1), 0);
	iVar0++;
	if (!func_104(iParam0))
	{
		func_128(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_72(iParam0, iVar0, iParam1, 1);
	}
}

int func_104(int iParam0)//Position - 0x4A6E
{
	if (Global_1368092)
	{
		switch (iParam0)
		{
			case 784:
			case 785:
			case 786:
			case 787:
			case 774:
			case 775:
			case 776:
			case 777:
			case 764:
			case 765:
			case 766:
			case 767:
			case 754:
			case 755:
			case 756:
			case 757:
			case 1300:
			case 636:
			case 1275:
			case 761:
			case 762:
			case 763:
			case 1233:
			case 1873:
			case 2264:
			case 2918:
			case 3047:
			case 7052:
			case 3042:
			case 3043:
			case 3044:
			case 3045:
			case 3046:
			case 3221:
			case 3223:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3631:
			case 3632:
			case 3633:
			case 3634:
			case 3216:
			case 3210:
			case 3652:
			case 3653:
			case 3654:
			case 3655:
			case 3656:
			case 3657:
			case 3678:
			case 3219:
			case 3218:
			case 4003:
			case 4002:
			case 4006:
			case 4005:
			case 4009:
			case 4008:
			case 4012:
			case 4011:
			case 6093:
			case 6092:
			case 6151:
			case 6150:
				return 1;
				break;
			}
	}
	return 0;
}

void func_105(int iParam0, int iParam1)//Position - 0x4C24
{
	if (Global_2097152[func_109() /*12130*/].f_7676.f_3809[iParam0 /*3*/].f_1 != iParam1)
	{
		Global_2097152[func_109() /*12130*/].f_7676.f_3809[iParam0 /*3*/].f_1 = iParam1;
		func_106(func_108(iParam0), iParam1, -1, 1);
	}
}

void func_106(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4C6F
{
	int iVar0;
	
	if (func_107())
	{
		iVar0 = Global_2547365[iParam0 /*3*/][func_76(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x41495934EA1DEC56(iVar0, iParam1, iParam3);
		}
	}
}

int func_107()//Position - 0x4CA1
{
	return 1;
	return 0;
}

int func_108(int iParam0)//Position - 0x4CAE
{
	switch (iParam0)
	{
		case 0:
			return 169;
		
		case 1:
			return 170;
		
		case 2:
			return 171;
		
		default:
	}
	return 169;
}

int func_109()//Position - 0x4CE0
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_110(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4CED
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
		iParam2 = func_77();
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

void func_111(int iParam0, int iParam1, int iParam2)//Position - 0x51B9
{
	int iVar0;
	
	iVar0 = func_130(iParam0, func_76(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_104(iParam0))
	{
		func_128(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_72(iParam0, iVar0, iParam2, 1);
	}
}

int func_112(int iParam0, int iParam1)//Position - 0x51FB
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

int func_113(int iParam0, int iParam1)//Position - 0x524C
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_114(iParam0, iParam1);
}

int func_114(int iParam0, int iParam1)//Position - 0x5267
{
	if (func_126(14) && !func_125(iParam0))
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
	if (func_124(&Global_4267379))
	{
		if (func_122(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_115(&Global_4267379, iParam0))
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

int func_115(var uParam0, int iParam1)//Position - 0x5304
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_126(14) && !func_125(iParam1))
	{
		return 0;
	}
	if (func_122(uParam0, iParam1))
	{
		return 0;
	}
	if (func_121(uParam0) < 0f)
	{
		func_120(uParam0, 0);
	}
	func_118(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_116(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_116(var uParam0, int iParam1)//Position - 0x53B5
{
	int iVar0;
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_126(14) && !func_125(iParam1))
	{
		return 0;
	}
	if (func_122(uParam0, iParam1))
	{
		return 0;
	}
	if (func_121(uParam0) < 0f)
	{
		func_120(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_117(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_117(var uParam0, int iParam1)//Position - 0x5430
{
	return (*uParam0)[iParam1] == 78;
}

void func_118(var uParam0)//Position - 0x5441
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_119(uParam0, iVar0);
		iVar0++;
	}
	func_120(uParam0, (Global_4267378 - 0,5f));
}

void func_119(var uParam0, int iParam1)//Position - 0x5475
{
	(*uParam0)[iParam1] = 78;
}

void func_120(var uParam0, float fParam1)//Position - 0x5485
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

float func_121(var uParam0)//Position - 0x54A2
{
	return uParam0->f_80;
}

bool func_122(var uParam0, int iParam1)//Position - 0x54AE
{
	return func_123(uParam0, iParam1) != -1;
}

int func_123(var uParam0, int iParam1)//Position - 0x54C0
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

bool func_124(var uParam0)//Position - 0x54ED
{
	return uParam0->f_79 == 1;
}

int func_125(int iParam0)//Position - 0x54FB
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

bool func_126(int iParam0)//Position - 0x554B
{
	return Global_35861 == iParam0;
}

int func_127(int iParam0, int iParam1)//Position - 0x5559
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2548785[iParam0 /*3*/][func_76(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_128(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x5585
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

void func_129(int iParam0, int iParam1, int iParam2)//Position - 0x55B5
{
	int iVar0;
	
	iVar0 = func_127(iParam0, func_76(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_102(iParam0, iVar0, iParam2);
}

int func_130(int iParam0, int iParam1, int iParam2)//Position - 0x55DC
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_76(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_131(var uParam0)//Position - 0x560E
{
	if (uParam0->f_1)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_132(var uParam0)//Position - 0x5637
{
	if (!uParam0->f_1)
	{
		if (unk_0x8E1421E2A2A2FBD4())
		{
			func_18(uParam0, 0, 0);
		}
	}
}

void func_133()//Position - 0x5656
{
	bool bVar0;
	int iVar1;
	
	func_293();
	func_267();
	func_175();
	func_51();
	func_173();
	func_172();
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == iLocal_134)
		{
			if (Global_2512808.f_5429.f_1 == 0)
			{
				Global_2512808.f_5429.f_1 = 1;
			}
			if (unk_0x078FCDE51274A1BF(unk_0xFC1458A37D98B502()) == iLocal_135 || unk_0x078FCDE51274A1BF(unk_0xFC1458A37D98B502()) == iLocal_136)
			{
				bVar0 = true;
			}
			else if (unk_0x078FCDE51274A1BF(unk_0xFC1458A37D98B502()) == iLocal_137)
			{
				iVar1 = 1;
			}
		}
		else if (Global_2512808.f_5429.f_1 == 1)
		{
			Global_2512808.f_5429.f_1 = 0;
		}
	}
	if (!unk_0xC80D31E4B587871C(Local_100.f_52, 31))
	{
		if (func_93(unk_0x9EB17624F44A8DA4()) != 154)
		{
			if ((bVar0 || iVar1) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_139, (5f / 2f), (5f / 2f), (5f / 2f), 0, 1, 0))
			{
				unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
				unk_0x872F1C1F8587CCC7(&(Local_100.f_52), 31);
			}
		}
	}
	if ((!unk_0xC80D31E4B587871C(Local_100.f_52, 26) && bVar0) && !(func_171(0) || func_170()))
	{
		if (func_168("SNK_MNU", Local_100, 0))
		{
			unk_0x872F1C1F8587CCC7(&(Local_100.f_52), 26);
		}
	}
	if (!bVar0 && unk_0xC80D31E4B587871C(Local_100.f_52, 26))
	{
		if (!unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()) || (unk_0x8EA3C8E091EA5BA4(Local_100.f_1) && unk_0xD85097DDDA5447BE(Local_100.f_1)))
		{
			unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			unk_0xBB9A3C553EECB180(0f);
			unk_0x7C9705890EF6612E(0f, 1065353216);
			if (Local_100.f_51 > 0)
			{
				Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_3 = Local_100.f_51;
				Local_100.f_51 = 0;
			}
			func_445();
			unk_0x0EE72DB1CD8A3B86(&(Local_100.f_53), 7);
			if (unk_0x8EA3C8E091EA5BA4(Local_100.f_1))
			{
				unk_0x02934BABFD4CD384(Local_100.f_1, 0);
			}
			unk_0x3458550DF8E9B453(false, 0, 3000, 1, 0, 0);
		}
		func_165(1, Local_100);
		unk_0x0EE72DB1CD8A3B86(&(Local_100.f_52), 26);
	}
	if (!unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 21))
	{
		if (iVar1 || func_163(unk_0xFC1458A37D98B502(), Local_100.f_50))
		{
			unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 21);
		}
	}
	if (bVar0 || iVar1)
	{
		func_160();
		func_154();
		func_149();
		func_145(1);
		func_138();
		unk_0x2A20836DCD45A0B0(unk_0x9EB17624F44A8DA4());
		unk_0x464D8E07EBE7360A(unk_0x9EB17624F44A8DA4());
		if (unk_0xC80D31E4B587871C(Global_2512808.f_7, 0))
		{
			unk_0x7D3BD32CA68B8D83(Local_98.f_71);
			func_136(vLocal_139, func_137(30), 0);
			unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_7), 0);
		}
	}
	else
	{
		if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_139, 5f, 5f, 2,5f, 0, 1, 0))
		{
			func_145(0);
		}
		if (!unk_0xC80D31E4B587871C(Global_2512808.f_7, 0))
		{
			unk_0x3293BE320769D0FF();
			func_134(vLocal_139, func_137(30), "");
			unk_0x872F1C1F8587CCC7(&(Global_2512808.f_7), 0);
		}
	}
	if ((unk_0xC80D31E4B587871C(Local_98.f_23, 22) || unk_0xC80D31E4B587871C(Local_98.f_23, 23)) || unk_0xC80D31E4B587871C(Local_98.f_23, 7))
	{
		unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
	}
}

int func_134(vector3 vParam0, char* sParam1, char* sParam2)//Position - 0x5987
{
	int iVar0;
	
	if (!unk_0xAB019B170BF1309C(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!unk_0x74C475EB8E73D398(&(Global_2512808.f_3936[iVar0 /*26*/].f_4), sParam1))
			{
				if (unk_0xAB019B170BF1309C(&(Global_2512808.f_3936[iVar0 /*26*/].f_4)))
				{
					Global_2512808.f_3936[iVar0 /*26*/] = 1;
					Global_2512808.f_3936[iVar0 /*26*/].f_1 = { vParam0 };
					StringCopy(&(Global_2512808.f_3936[iVar0 /*26*/].f_4), sParam1, 24);
					StringCopy(&(Global_2512808.f_3936[iVar0 /*26*/].f_10), sParam2, 64);
					return 1;
				}
			}
			else if (!func_135(Global_2512808.f_3936[iVar0 /*26*/].f_1, vParam0, 0))
			{
				Global_2512808.f_3936[iVar0 /*26*/] = 1;
				Global_2512808.f_3936[iVar0 /*26*/].f_1 = { vParam0 };
				StringCopy(&(Global_2512808.f_3936[iVar0 /*26*/].f_4), sParam1, 24);
				StringCopy(&(Global_2512808.f_3936[iVar0 /*26*/].f_10), sParam2, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_135(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x5A88
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_136(vector3 vParam0, char* sParam1, int iParam2)//Position - 0x5ACF
{
	int iVar0;
	
	if (!unk_0xAB019B170BF1309C(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (unk_0x74C475EB8E73D398(&(Global_2512808.f_3936[iVar0 /*26*/].f_4), sParam1))
			{
				if (iParam2 || func_135(Global_2512808.f_3936[iVar0 /*26*/].f_1, vParam0, 0))
				{
					Global_2512808.f_3936[iVar0 /*26*/] = 0;
					Global_2512808.f_3936[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2512808.f_3936[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2512808.f_3936[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

char* func_137(int iParam0)//Position - 0x5B71
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_138()//Position - 0x5B84
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x0EE72DB1CD8A3B86(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 28);
	if (!func_430(Local_98) && func_44(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		if (unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar0, 1))
		{
			if ((((iVar0 != joaat("weapon_unarmed") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_flare")) && iVar0 != joaat("weapon_snowball")) && iVar0 != joaat("weapon_flashlight"))
			{
				if ((((unk_0xFE2BE49C250EFD09(unk_0x9EB17624F44A8DA4()) && unk_0xCA3C40448996C9BA(unk_0xFC1458A37D98B502(), unk_0x47BA76CE3C825A08(Local_98), 45f)) && unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), unk_0x47BA76CE3C825A08(Local_98), 5f, 5f, 2f, 0, 1, 0)) || unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), unk_0x47BA76CE3C825A08(Local_98))) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), unk_0x47BA76CE3C825A08(Local_98)))
				{
					if (!(func_171(0) || func_170()) && ((!func_142(unk_0x9EB17624F44A8DA4()) || func_93(unk_0x9EB17624F44A8DA4()) == 154) || func_93(unk_0x9EB17624F44A8DA4()) == 171))
					{
						if (func_140(unk_0x9EB17624F44A8DA4(), unk_0x47BA76CE3C825A08(Local_98)) || unk_0xA150D4260D19B58F(unk_0x9EB17624F44A8DA4()))
						{
							if (!unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 1))
							{
								func_139(func_8(unk_0x43E1A43A1AA9E0BE(unk_0x3DE13AF8F787AC71())));
								unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 1);
							}
							if (!unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 8))
							{
								unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 8);
							}
						}
						unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 28);
					}
				}
			}
		}
	}
	if (!unk_0xC80D31E4B587871C(Local_100.f_52, 28))
	{
		if (unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 28))
		{
			if (unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar1, 1))
			{
				if (iVar1 != 0 && iVar1 != joaat("weapon_snowball"))
				{
					iVar2 = unk_0x684DC0C684AE74CA(iVar1);
					if (iVar2 == 416676503)
					{
						sLocal_104 = "hold_up_head_additive_pistol";
						unk_0x12C9D41D52A560D6(unk_0xFC1458A37D98B502(), "mp_am_hold_up", sLocal_104, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else if ((((iVar2 == 1159398588 || iVar2 == 970310034) || iVar2 == 860033945) || iVar2 == -1212426201) || iVar2 == -957766203)
					{
						sLocal_104 = "hold_up_head_additive_rifle";
						unk_0x12C9D41D52A560D6(unk_0xFC1458A37D98B502(), "mp_am_hold_up", sLocal_104, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else
					{
						sLocal_104 = "";
					}
					unk_0x872F1C1F8587CCC7(&(Local_100.f_52), 28);
				}
			}
		}
	}
	else if (!unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 28) || unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
	{
		if (!unk_0xAB019B170BF1309C(sLocal_104))
		{
			if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "mp_am_hold_up", sLocal_104, 3))
			{
				unk_0x7976C9958C60E354(unk_0xFC1458A37D98B502(), "mp_am_hold_up", sLocal_104, -8f);
			}
		}
		unk_0x0EE72DB1CD8A3B86(&(Local_100.f_52), 28);
	}
	if (unk_0xC80D31E4B587871C(Local_98.f_25, 1))
	{
		if (!unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_5, 3))
		{
			if (!func_430(Local_98.f_15) && func_44(unk_0x9EB17624F44A8DA4(), 1, 1))
			{
				if (unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar3, 1))
				{
					if ((((iVar3 != joaat("weapon_unarmed") && iVar3 != joaat("object")) && iVar3 != joaat("weapon_flare")) && iVar3 != joaat("weapon_snowball")) && !(func_171(0) || func_170()))
					{
						if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), unk_0x47BA76CE3C825A08(Local_98.f_15)) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), unk_0x47BA76CE3C825A08(Local_98.f_15)))
						{
							if (func_140(unk_0x9EB17624F44A8DA4(), unk_0x47BA76CE3C825A08(Local_98.f_15)) || unk_0xA150D4260D19B58F(unk_0x9EB17624F44A8DA4()))
							{
								unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_5), 3);
							}
						}
					}
				}
			}
		}
	}
}

void func_139(int iParam0)//Position - 0x5F61
{
	struct<2> Var0;
	
	Var0 = 2006426478;
	Var0.f_1 = unk_0x9EB17624F44A8DA4();
	if (!iParam0 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Var0, 2, iParam0);
	}
}

int func_140(int iParam0, int iParam1)//Position - 0x5F8D
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (func_44(iParam0, 1, 1))
	{
		vVar0 = { func_85(iParam0) };
	}
	if (!unk_0x3AB6A1A9084FB0A4(iParam1))
	{
		vVar1 = { unk_0xB3328BA8976B416C(iParam1, 1) };
	}
	vVar3 = { vVar1 - vVar0 };
	if (!unk_0x3AB6A1A9084FB0A4(iParam1))
	{
		vVar2 = { unk_0x3F90543934DCD7E6(iParam1, 0f, 7f, 0f) };
		vVar4 = { vVar2 - vVar1 };
	}
	vVar3.z = 0f;
	vVar4.z = 0f;
	fVar5 = func_141(vVar3, vVar4);
	if (fVar5 < -0,1f)
	{
		return 1;
	}
	return 0;
}

float func_141(vector3 vParam0, vector3 vParam1)//Position - 0x6018
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

int func_142(int iParam0)//Position - 0x6039
{
	if (func_38(iParam0))
	{
		return 1;
	}
	if (func_143(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_143(int iParam0)//Position - 0x605C
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_144(iParam0, 9);
	}
	return 0;
}

bool func_144(int iParam0, int iParam1)//Position - 0x607A
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_4, iParam1);
}

void func_145(int iParam0)//Position - 0x6095
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x9EB17624F44A8DA4() != Global_2512808.f_4781)
	{
		if (!unk_0xC80D31E4B587871C(Local_100.f_52, 6))
		{
			if (iParam0 == 1)
			{
				if (unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar2, 1))
				{
					if ((((iVar2 != joaat("weapon_unarmed") && iVar2 != 0) && iVar2 != joaat("object")) && iVar2 != joaat("weapon_flare")) && iVar2 != joaat("weapon_snowball"))
					{
						if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_106, 2,5f, 2,5f, 3f, 0, 1, 0))
						{
							iVar1 = 1;
						}
						iVar0 = 1;
					}
				}
				if ((((iVar1 == 1 || unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 5)) || (iVar0 == 1 && Local_98.f_3 >= 3)) || (iVar0 == 1 && unk_0xC80D31E4B587871C(Local_98.f_24, 16))) || unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 12))
				{
					if (((!unk_0xC80D31E4B587871C(Local_98.f_23, 12) || Local_98.f_3 >= 3) || unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 12)) || (iVar0 == 1 && unk_0xC80D31E4B587871C(Local_98.f_24, 16)))
					{
						Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_47++;
						func_13(&(Global_2436181.f_3613));
						func_18(&(Global_2436181.f_3613), 0, 0);
						if (Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_47 <= 2)
						{
							if (func_148())
							{
								if (func_147() < 2)
								{
									unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 37, unk_0xAF22430031BD1E97(func_147()));
								}
								else
								{
									unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 37, unk_0xAF22430031BD1E97(2));
								}
							}
							else
							{
								unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 37, unk_0xAF22430031BD1E97(2));
							}
						}
						else if (Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_47 >= 5)
						{
							if (func_148())
							{
								if (func_147() < 3)
								{
									unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 37, unk_0xAF22430031BD1E97(func_147()));
								}
								else
								{
									unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 37, unk_0xAF22430031BD1E97(3));
								}
							}
							else
							{
								unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 37, unk_0xAF22430031BD1E97(4));
							}
						}
						else if (func_148())
						{
							if (func_147() < 3)
							{
								unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 37, unk_0xAF22430031BD1E97(func_147()));
							}
							else
							{
								unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 37, unk_0xAF22430031BD1E97(3));
							}
						}
						else
						{
							unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 37, unk_0xAF22430031BD1E97(3));
						}
						if (!unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 1))
						{
							unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 2);
						}
						unk_0x872F1C1F8587CCC7(&(Local_100.f_52), 6);
						unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 25);
					}
				}
			}
			if (!unk_0xC80D31E4B587871C(Local_100.f_52, 27) && !unk_0xC80D31E4B587871C(Local_100.f_52, 6))
			{
				if (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()))
				{
					if (func_17(&uLocal_132, 2000, 0) || unk_0x4FF3A1BB97B00CFC(unk_0xFC1458A37D98B502()))
					{
						unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 37, unk_0xAF22430031BD1E97(1));
						unk_0x872F1C1F8587CCC7(&(Local_100.f_52), 27);
						unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 27);
						unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 25);
						if (!unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 1))
						{
							unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 2);
						}
					}
				}
				else if (func_146(&uLocal_132))
				{
					func_13(&uLocal_132);
				}
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_100.f_52, 24))
		{
			if (unk_0xC80D31E4B587871C(Local_100.f_52, 31))
			{
				if (func_430(Local_98))
				{
					if (func_148())
					{
						if (func_147() < 3)
						{
							unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 37, unk_0xAF22430031BD1E97(func_147()));
						}
						else
						{
							unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 37, unk_0xAF22430031BD1E97(3));
						}
					}
					else
					{
						unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 13, unk_0xAF22430031BD1E97(3));
					}
					unk_0x872F1C1F8587CCC7(&(Local_100.f_52), 24);
					if (!unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 1))
					{
						unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 2);
					}
				}
			}
		}
	}
}

bool func_146(var uParam0)//Position - 0x6473
{
	return uParam0->f_1;
}

int func_147()//Position - 0x647F
{
	return Global_262145.f_11937;
}

int func_148()//Position - 0x648E
{
	if (func_143(unk_0x9EB17624F44A8DA4()) && func_93(unk_0x9EB17624F44A8DA4()) == 154)
	{
		return 1;
	}
	return 0;
}

void func_149()//Position - 0x64B6
{
	int iVar0;
	int iVar1;
	
	if (func_44(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		if (!unk_0xC80D31E4B587871C(Local_100.f_52, 23) && unk_0xC80D31E4B587871C(Local_98.f_23, 17))
		{
			if (!func_430(Local_98))
			{
				iLocal_109 = unk_0x45D90ED1F569A489(Local_98.f_29);
				if (iLocal_109 >= 0)
				{
					if (unk_0xD56F740235B1E8F0(iLocal_109))
					{
						if ((!unk_0xC80D31E4B587871C(Global_1647029, 15) && func_153()) && func_152())
						{
							unk_0x872F1C1F8587CCC7(&Global_1647029, 15);
						}
						if (!unk_0xF491DD47B88AA84E())
						{
							iVar0 = func_130(1187, -1, 0);
							if (!unk_0xC80D31E4B587871C(iVar0, 3))
							{
								if (unk_0x463C4747B41E35A3(iLocal_109) < 0,4f && unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == iLocal_134)
								{
									func_151("FHU_HELP3", -1);
									unk_0x872F1C1F8587CCC7(&iVar0, 3);
									func_128(1187, iVar0, -1, 1, 0);
								}
							}
							else if (!unk_0xC80D31E4B587871C(iVar0, 5) || !unk_0xC80D31E4B587871C(iVar0, 6))
							{
								if (unk_0x463C4747B41E35A3(iLocal_109) < 0,7f && unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == iLocal_134)
								{
									func_151("FHU_HELP4", -1);
									unk_0x872F1C1F8587CCC7(&iVar0, 5);
									func_128(1187, iVar0, -1, 1, 0);
									unk_0x872F1C1F8587CCC7(&(Local_100.f_52), 23);
								}
							}
							else
							{
								unk_0x872F1C1F8587CCC7(&(Local_100.f_52), 23);
							}
						}
					}
				}
			}
		}
		if ((((!func_37(unk_0x9EB17624F44A8DA4(), 146) && Global_1573339 == 0) && func_93(unk_0x9EB17624F44A8DA4()) != 167) && func_93(unk_0x9EB17624F44A8DA4()) != 190) && func_93(unk_0x9EB17624F44A8DA4()) != 191)
		{
			if (!unk_0xC80D31E4B587871C(Local_100.f_53, 1))
			{
				if (!unk_0xF491DD47B88AA84E())
				{
					if (((((func_430(Local_98) || Local_98.f_3 > 7) && !unk_0xC80D31E4B587871C(Local_98.f_23, 20)) && !unk_0xC80D31E4B587871C(Local_98.f_23, 11)) && !unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 5)) && unk_0xAA0BDFF32B6BC02A(vLocal_110, 1,5f) == 0)
					{
						iVar1 = func_130(1187, -1, 0);
						if (!unk_0xC80D31E4B587871C(iVar1, 20) || !unk_0xC80D31E4B587871C(iVar1, 21))
						{
							func_151("FHU_HELPM", -1);
							if (!unk_0xC80D31E4B587871C(iVar1, 20))
							{
								unk_0x872F1C1F8587CCC7(&iVar1, 20);
							}
							else
							{
								unk_0x872F1C1F8587CCC7(&iVar1, 21);
							}
							func_128(1187, iVar1, -1, 1, 0);
							unk_0x872F1C1F8587CCC7(&(Local_100.f_53), 1);
						}
						else
						{
							unk_0x872F1C1F8587CCC7(&(Local_100.f_53), 1);
						}
					}
				}
			}
			else if (func_150("FHU_HELPM"))
			{
				if ((unk_0xC80D31E4B587871C(Local_98.f_23, 20) || unk_0xC80D31E4B587871C(Local_98.f_23, 11)) || unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 5))
				{
					unk_0x3E80C2F7BC665259(1);
				}
			}
		}
	}
}

bool func_150(char* sParam0)//Position - 0x6776
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_151(char* sParam0, int iParam1)//Position - 0x6789
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

bool func_152()//Position - 0x67A0
{
	return unk_0xC80D31E4B587871C(Global_2512808.f_1707, 21);
}

bool func_153()//Position - 0x67B5
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_146, 3);
}

void func_154()//Position - 0x67CF
{
	float fVar0;
	float fVar1;
	
	if (Local_98.f_3 == 4)
	{
		if (func_44(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (!func_430(Local_98))
			{
				iLocal_109 = unk_0x45D90ED1F569A489(Local_98.f_29);
				if (iLocal_109 >= 0)
				{
					if (unk_0xD56F740235B1E8F0(iLocal_109))
					{
						fVar0 = unk_0x463C4747B41E35A3(iLocal_109);
						fVar0 = (fVar0 * 1000f);
						if (fVar0 <= 890f)
						{
							func_155(system::round(fVar0), 890, "HUP_PROG", func_159(unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4())), 0, 1, 13);
						}
						fVar1 = unk_0xC21E43BDB4DDB898(unk_0x9EB17624F44A8DA4());
						fVar1 = (fVar1 - 0,3f);
						if (fVar1 < 0f)
						{
							fVar1 = 0f;
						}
						fVar1 = (fVar1 * 4f);
						Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_6 = fVar1;
					}
				}
			}
		}
	}
}

void func_155(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6)//Position - 0x6881
{
	func_156(iParam0, iParam1, sParam2, uParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1);
}

void func_156(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23)//Position - 0x68AC
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_158(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_157(0, iVar0);
		Global_1359035.f_1093[iVar0] = uParam0;
		Global_1359035.f_1093.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1359035.f_1093.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1359035.f_1093.f_194[iVar0] = uParam3;
		Global_1359035.f_1093.f_183[iVar0] = uParam4;
		Global_1359035.f_1093.f_216[iVar0] = uParam5;
		Global_1359035.f_1093.f_227[iVar0 /*3*/] = fParam6;
		Global_1359035.f_1093.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1359035.f_1093.f_258[iVar0] = iParam8;
		Global_1359035.f_1093.f_269[iVar0] = uParam9;
		Global_1359035.f_1093.f_312[iVar0] = iParam10;
		Global_1359035.f_1093.f_323[iVar0] = iParam11;
		Global_1359035.f_1093.f_334[iVar0] = iParam12;
		Global_1359035.f_1093.f_345[iVar0] = iParam13;
		Global_1359035.f_1088 = 1;
		Global_1359035.f_1093.f_356[iVar0] = iParam14;
		Global_1359035.f_1093.f_367[iVar0] = iParam15;
		Global_1359035.f_1093.f_378[iVar0] = iParam16;
		Global_1359035.f_1093.f_389[iVar0] = iParam17;
		Global_1359035.f_1093.f_400[iVar0] = iParam18;
		Global_1359035.f_1093.f_411[iVar0] = iParam19;
		Global_1359035.f_1093.f_422[iVar0] = iParam20;
		Global_1359035.f_1093.f_433[iVar0] = iParam21;
		Global_1359035.f_1093.f_444[iVar0] = iParam22;
		Global_1359035.f_1093.f_455[iVar0] = iParam23;
	}
}

void func_157(int iParam0, int iParam1)//Position - 0x6A75
{
	unk_0x872F1C1F8587CCC7(&(Global_1359035.f_6119[iParam0]), iParam1);
}

bool func_158(int iParam0, int iParam1)//Position - 0x6A8E
{
	return unk_0xC80D31E4B587871C(Global_1359035.f_6119[iParam0], iParam1);
}

int func_159(int iParam0)//Position - 0x6AA7
{
	if (iParam0 == 0)
	{
	}
	return 116;
}

void func_160()//Position - 0x6AB7
{
	if (!unk_0xC80D31E4B587871C(Local_100.f_53, 2))
	{
		unk_0x6450931B826B49D9("oddjobs@shop_robbery@rob_till");
		unk_0x6450931B826B49D9(func_161());
		if (unk_0x3A801AA34DD821BE("oddjobs@shop_robbery@rob_till") && unk_0x3A801AA34DD821BE(func_161()))
		{
			unk_0x872F1C1F8587CCC7(&(Local_100.f_53), 2);
		}
	}
}

char* func_161()//Position - 0x6AFF
{
	if (func_162(unk_0x9EB17624F44A8DA4()))
	{
		return "anim@am_hold_up@male";
	}
	return "anim@am_hold_up@female";
}

int func_162(int iParam0)//Position - 0x6B1D
{
	if (!unk_0x3A711520F83BAE98())
	{
		return 1;
	}
	return Global_2422736[iParam0 /*420*/].f_245;
}

int func_163(int iParam0, int iParam1)//Position - 0x6B3F
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { 0f, 0f, 0f };
	vVar1 = { 0f, 0f, 0f };
	fVar2 = 0f;
	func_164(iParam1, &vVar0, &vVar1, &fVar2);
	if (unk_0x0F3033474C49912D(iParam0, vVar0, vVar1, fVar2, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_164(int iParam0, var uParam1, var uParam2, float fParam3)//Position - 0x6B7F
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1390,033f, 3605,529f, 33,98091f };
		*uParam2 = { 1394,412f, 3607,156f, 36,38288f };
		*fParam3 = 1,25f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3041,675f, 583,5931f, 6,908931f };
		*uParam2 = { -3037,284f, 585,0375f, 9,521532f };
		*fParam3 = 1,25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3245,184f, 1000,124f, 11,83071f };
		*uParam2 = { -3240,504f, 999,7783f, 14,46645f };
		*fParam3 = 1,25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 549,5332f, 2668,464f, 41,15651f };
		*uParam2 = { 548,9114f, 2673,108f, 43,7766f };
		*fParam3 = 1,25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2554,316f, 380,8569f, 107,623f };
		*uParam2 = { 2558,98f, 380,6908f, 110,2684f };
		*fParam3 = 1,25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2675,476f, 3280,807f, 54,24115f };
		*uParam2 = { 2679,577f, 3278,526f, 56,8955f };
		*fParam3 = 1,25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1729,145f, 6417,834f, 34,03724f };
		*uParam2 = { 1727,07f, 6413,635f, 36,66442f };
		*fParam3 = 1,25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1958,61f, 3742,512f, 31,34376f };
		*uParam2 = { 1960,958f, 3738,465f, 33,98634f };
		*fParam3 = 1,25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 24,51093f, -1344,449f, 28,49703f };
		*uParam2 = { 24,52224f, -1349,084f, 31,14272f };
		*fParam3 = 1,25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 373,296f, 329,2379f, 102,5664f };
		*uParam2 = { 372,1347f, 324,6985f, 105,214f };
		*fParam3 = 1,25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1168,183f, 2711,203f, 37,06316f };
		*uParam2 = { 1163,144f, 2711,246f, 40,16688f };
		*fParam3 = 2,5f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2966,142f, 388,6418f, 14,04331f };
		*uParam2 = { -2965,812f, 393,6473f, 17,17248f };
		*fParam3 = 2,5f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1223,599f, -909,8984f, 11,32635f };
		*uParam2 = { -1219,443f, -907,0756f, 14,45929f };
		*fParam3 = 2,5f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133,524f, -980,3087f, 45,41582f };
		*uParam2 = { 1134,22f, -985,284f, 48,53235f };
		*fParam3 = 2,5f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484,413f, -379,3236f, 39,16341f };
		*uParam2 = { -1487,954f, -375,7666f, 42,28885f };
		*fParam3 = 2,5f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1699,447f, 4921,57f, 41,06366f };
		*uParam2 = { 1695,64f, 4924,245f, 44,22165f };
		*fParam3 = 2,25f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -705,7869f, -911,6997f, 18,2156f };
		*uParam2 = { -705,7026f, -916,374f, 21,33545f };
		*fParam3 = 2,25f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45,26995f, -1756,669f, 28,42101f };
		*uParam2 = { -48,26036f, -1760,285f, 31,56342f };
		*fParam3 = 2,25f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1164,697f, -320,7587f, 68,2051f };
		*uParam2 = { 1165,463f, -325,0899f, 71,37893f };
		*fParam3 = 2,25f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1821,205f, 795,8699f, 137,0893f };
		*uParam2 = { -1818,041f, 792,3982f, 140,1836f };
		*fParam3 = 2,25f;
	}
}

void func_165(bool bParam0, int iParam1)//Position - 0x6FDC
{
	int iVar0;
	
	if (!func_167(&iVar0, 0, iParam1))
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
		unk_0xF40900F61CC88931(9, 0);
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
		func_166(&(Global_17301.f_5530[iVar0 /*10*/]));
		Global_17301.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17301.f_5591[iVar0] = 0;
	}
}

void func_166(var uParam0)//Position - 0x709A
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x34D11AB5BA7922C2(*uParam0))
		{
			unk_0xA68F7B004463AB6F(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_167(var uParam0, bool bParam1, int iParam2)//Position - 0x70C3
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

bool func_168(char* sParam0, int iParam1, bool bParam2)//Position - 0x7160
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_167(&iVar0, 1, iParam1))
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
	unk_0x128A5DCCD09CCA17("CommonMenu", 0);
	Global_17301.f_5484[iVar0] = 1;
	if (!unk_0xA51ADD51711B4A15("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x128A5DCCD09CCA17("MPShopSale", 0);
		Global_17301.f_5491[iVar0] = 1;
		if (!unk_0xA51ADD51711B4A15("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17301.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_169(&(Global_17301.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_169(var uParam0)//Position - 0x7256
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

int func_170()//Position - 0x72F8
{
	if (unk_0x8F38E94BBF3404CD(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_171(int iParam0)//Position - 0x7315
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

void func_172()//Position - 0x736F
{
	if (unk_0x9EB17624F44A8DA4() != Global_2512808.f_4781)
	{
		if (!unk_0xC80D31E4B587871C(Local_100.f_52, 24))
		{
			if (Local_98.f_72 == unk_0x9EB17624F44A8DA4() || (unk_0xC80D31E4B587871C(Local_100.f_52, 31) && unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_140, 20f, 20f, 20f, 0, 1, 0)))
			{
				if (func_430(Local_98))
				{
					if (func_148())
					{
						if (func_147() < 3)
						{
							unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 37, unk_0xAF22430031BD1E97(func_147()));
						}
						else
						{
							unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 37, unk_0xAF22430031BD1E97(3));
						}
					}
					else
					{
						unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 13, unk_0xAF22430031BD1E97(3));
					}
					unk_0x872F1C1F8587CCC7(&(Local_100.f_52), 24);
					if (!unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 1))
					{
						unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 2);
					}
				}
			}
		}
	}
}

int func_173()//Position - 0x744C
{
	if (!unk_0xC80D31E4B587871C(Local_98.f_25, 0))
	{
		return 0;
	}
	if (func_430(Local_98.f_15))
	{
		if (unk_0xA6DECE14FC9A8C51(iLocal_328))
		{
			unk_0xE30CF11C0EE14316(&iLocal_328);
		}
		return 0;
	}
	if (Local_98.f_66 == 4)
	{
		if (!unk_0xA6DECE14FC9A8C51(iLocal_328))
		{
			iLocal_328 = unk_0xCA43F0FC44D9B846(unk_0x47BA76CE3C825A08(Local_98.f_15));
			unk_0x0C71C8E276E3EC54(iLocal_328, 1);
			unk_0xA5D25D3F884FF516(iLocal_328, 0,7f);
		}
	}
	if (!unk_0xE53FD7AF7F25C0A8(Local_98.f_15))
	{
		return 0;
	}
	switch (Local_98.f_66)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_15), 713668775) != 0)
			{
				if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_15), 713668775) != 1)
				{
					if (func_44(unk_0x9EB17624F44A8DA4(), 1, 1))
					{
						unk_0x4C7AF3B2BE8C3193(unk_0x47BA76CE3C825A08(Local_98.f_15), unk_0xFC1458A37D98B502(), -1, 4f, 2f, 1073741824, 0);
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0xC80D31E4B587871C(Local_98.f_25, 5) && !unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_5, 0))
			{
				if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_15), 1227113341) != 0 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_15), 1227113341) != 1)
				{
					unk_0xAC838A977FB6E6BC(unk_0x47BA76CE3C825A08(Local_98.f_15), unk_0xFC1458A37D98B502(), 10000);
					unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_5), 0);
				}
			}
			if ((!unk_0xC80D31E4B587871C(Local_98.f_25, 6) && !unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_5, 1)) && !func_174())
			{
				func_429(&uLocal_146, 4, unk_0x47BA76CE3C825A08(Local_98.f_15), "StoreHero", 1, 0);
				unk_0x74D45BB07BD51F8B(unk_0x47BA76CE3C825A08(Local_98.f_15), "GENERIC_INSULT_HIGH", "SPEECH_PARAMS_FORCE", 1);
				unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_5), 1);
			}
			break;
		
		case 4:
			if ((!unk_0xC80D31E4B587871C(Local_98.f_25, 7) && !unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_5, 2)) && !func_174())
			{
				func_429(&uLocal_146, 4, unk_0x47BA76CE3C825A08(Local_98.f_15), "StoreHero", 1, 0);
				unk_0x74D45BB07BD51F8B(unk_0x47BA76CE3C825A08(Local_98.f_15), "GENERIC_FUCK_YOU", "SPEECH_PARAMS_FORCE", 1);
				unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_5), 2);
			}
			if (unk_0xC80D31E4B587871C(Local_98.f_25, 7) || unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_5, 2))
			{
				if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_15), -1442466670) != 0 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_15), -1442466670) != 1)
				{
					unk_0xB8E08BD5B184DF4E(unk_0x47BA76CE3C825A08(Local_98.f_15));
					unk_0xCE93FCB8A8D8DF0B(unk_0x47BA76CE3C825A08(Local_98.f_15), Global_1574764);
					unk_0x992E814DF611C58C(unk_0x47BA76CE3C825A08(Local_98.f_15), 20f, 0);
					unk_0xE9B3D12A64CC7C1A(unk_0x47BA76CE3C825A08(Local_98.f_15), 1);
				}
			}
			break;
		
		case 5:
			if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_15), 242628503) != 0 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_15), 242628503) != 1)
			{
				unk_0xB8E08BD5B184DF4E(unk_0x47BA76CE3C825A08(Local_98.f_15));
				unk_0xAB30B1CF01A198C1(unk_0x47BA76CE3C825A08(Local_98.f_15), uLocal_114);
				unk_0xE9B3D12A64CC7C1A(unk_0x47BA76CE3C825A08(Local_98.f_15), 1);
			}
			else if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_15), -875674219) != 1 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_15), -875674219) != 0)
			{
				if (func_17(&uLocal_130, 5000, 0))
				{
					func_13(&uLocal_130);
					unk_0xAC838A977FB6E6BC(unk_0x47BA76CE3C825A08(Local_98.f_15), unk_0xFC1458A37D98B502(), 10000);
				}
			}
			break;
	}
	return 1;
}

int func_174()//Position - 0x77D0
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_175()//Position - 0x77F2
{
	if (Local_98.f_3 == 4)
	{
		if ((!unk_0xC80D31E4B587871C(Local_98.f_23, 10) && !unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 4)) && unk_0xC80D31E4B587871C(Local_98.f_23, 17))
		{
			if (unk_0x93C304998B457C45(Local_98.f_13))
			{
				if (unk_0xE53FD7AF7F25C0A8(Local_98.f_13) || (!unk_0x0070DE1A1E73C71C(Local_98.f_13) && unk_0x8E1421E2A2A2FBD4()))
				{
					if (!func_430(Local_98))
					{
						if (unk_0x9F887157983E8EFC(unk_0x47BA76CE3C825A08(Local_98)))
						{
							unk_0xB18E1DBC397238E1(unk_0xE8BC72FED1586931(Local_98.f_13), true, 0);
							unk_0x42B3DBD52AED7B7D(unk_0xE8BC72FED1586931(Local_98.f_13), 1);
							unk_0xD91B0600CD72C5F7(unk_0xE8BC72FED1586931(Local_98.f_13), 0f, 0f, -1f);
							unk_0x66698545014E2F21(unk_0x47BA76CE3C825A08(Local_98), 16);
							unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 4);
						}
					}
					else
					{
						unk_0xB18E1DBC397238E1(unk_0xE8BC72FED1586931(Local_98.f_13), true, 0);
						unk_0x42B3DBD52AED7B7D(unk_0xE8BC72FED1586931(Local_98.f_13), 1);
						unk_0xD91B0600CD72C5F7(unk_0xE8BC72FED1586931(Local_98.f_13), 0f, 0f, -1f);
						unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 4);
					}
				}
			}
		}
	}
	func_176();
}

void func_176()//Position - 0x78F8
{
	int iVar0;
	var uVar1;
	
	if (unk_0x93C304998B457C45(Local_98.f_13))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xE8BC72FED1586931(Local_98.f_13), 0))
		{
			if ((!unk_0xC80D31E4B587871C(Local_98.f_23, 11) && !unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 5)) && Local_98.f_37 > 0f)
			{
				if (((func_266() || func_265(0,87f)) || Local_98.f_3 >= 5) || unk_0xC80D31E4B587871C(Local_98.f_23, 10))
				{
					if (!unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 11))
					{
						if (unk_0xE53FD7AF7F25C0A8(Local_98.f_13))
						{
							unk_0x61EF72AFBDCBE53F(unk_0xE8BC72FED1586931(Local_98.f_13), 0, 0);
							unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 13);
						}
						if (func_93(unk_0x9EB17624F44A8DA4()) != 155)
						{
							unk_0xF8EC17D3072FBED8(func_50(1), 1);
						}
						unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 11);
					}
					if (unk_0x5D67DB68EF61B3E1(unk_0xE8BC72FED1586931(Local_98.f_13), unk_0xFC1458A37D98B502()))
					{
						Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_7 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
						unk_0x7367FB97975F1E29(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_7, &(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_7.f_2), 0, 0);
						if (unk_0xE53FD7AF7F25C0A8(Local_98.f_13))
						{
							unk_0x6B7C10B19928914F(unk_0xE8BC72FED1586931(Local_98.f_13), 1, 1);
							func_45(&(Local_98.f_13));
						}
						iVar0 = unk_0x63A6486593EC7EC3(iLocal_127, iLocal_128);
						if (unk_0xC80D31E4B587871C(Local_98.f_23, 10))
						{
							iVar0 = system::floor((system::to_float(iVar0) * Local_98.f_37));
						}
						if (Local_98.f_4 > 1000)
						{
							Local_98.f_4 = 1000;
						}
						iVar0 = (iVar0 + Local_98.f_4);
						iVar0 = func_264(iVar0, 1);
						if (iVar0 > Global_262145.f_166)
						{
							iVar0 = Global_262145.f_166;
						}
						if (func_263(unk_0x9EB17624F44A8DA4()) && func_261(func_262(unk_0x9EB17624F44A8DA4())) < 1f)
						{
							if (Global_262145.f_4226 > 1f)
							{
								Global_262145.f_4226 = 1f;
							}
							iVar0 = system::round((system::to_float(iVar0) * Global_262145.f_4226));
						}
						if (!func_143(unk_0x9EB17624F44A8DA4()) && func_93(unk_0x9EB17624F44A8DA4()) != 154)
						{
							func_216(&iVar0, 1);
						}
						if (iVar0 > 0)
						{
							if (func_215())
							{
								func_206(1734805203, iVar0, &uVar1, 0, 0, 0);
							}
							else
							{
								func_202(iVar0, 1, 1, 1092616192);
								unk_0x168B1BAE4C89D70D(iVar0);
							}
						}
						Global_2512808.f_5429 = (Global_2512808.f_5429 + iVar0);
						Global_2512808.f_5429.f_2 = 1;
						Global_2512808.f_5429.f_5 = 1;
						iLocal_330 = (iLocal_330 + iVar0);
						func_201(3);
						if (!unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 5))
						{
							func_200(Local_98.f_38, iVar0);
						}
						else
						{
							func_191(unk_0xFC1458A37D98B502(), iVar0);
						}
						func_190(1, iVar0);
						if (func_186(1))
						{
							func_177(4);
						}
						unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 5);
						unk_0x872F1C1F8587CCC7(&(Local_100.f_53), 6);
					}
				}
			}
		}
	}
}

void func_177(int iParam0)//Position - 0x7BC4
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_17014;
			break;
		
		case 1:
			iVar0 = Global_262145.f_17004;
			break;
		
		case 2:
			iVar0 = Global_262145.f_17015;
			break;
		
		case 3:
			iVar0 = Global_262145.f_17007;
			break;
		
		case 4:
			iVar0 = Global_262145.f_17003;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_17018;
			break;
		
		case 8:
			iVar0 = Global_262145.f_17019;
			break;
		
		case 9:
			iVar0 = Global_262145.f_17022;
			break;
		
		case 22:
			iVar0 = Global_262145.f_17023;
			break;
		
		case 23:
			iVar0 = Global_262145.f_17016;
			break;
		
		case 25:
			iVar0 = Global_262145.f_17904;
			break;
		
		case 26:
			iVar0 = Global_262145.f_17903;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0xF2CDA5A7C6ED93BE(func_184(func_185()), func_182(func_185()), func_181(), func_180(), iParam0, iVar0);
	}
	func_179(iVar0);
	func_178(iVar0);
}

void func_178(int iParam0)//Position - 0x7CE9
{
	int iVar0;
	
	iVar0 = func_130(3951, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_449 = iVar0;
	func_128(3951, iVar0, -1, 1, 0);
}

void func_179(int iParam0)//Position - 0x7D37
{
	int iVar0;
	
	iVar0 = unk_0x9EB17624F44A8DA4();
	Global_1627537[iVar0 /*532*/].f_11.f_448 = (Global_1627537[iVar0 /*532*/].f_11.f_448 + iParam0);
	if (Global_1627537[iVar0 /*532*/].f_11.f_448 < -9999)
	{
		Global_1627537[iVar0 /*532*/].f_11.f_448 = 9999;
	}
	else if (Global_1627537[iVar0 /*532*/].f_11.f_448 > 9999)
	{
		Global_1627537[iVar0 /*532*/].f_11.f_448 = 9999;
	}
}

int func_180()//Position - 0x7DB1
{
	if (Global_1667867.f_3 != 0)
	{
		return Global_1667867.f_3;
	}
	return -1;
}

int func_181()//Position - 0x7DCD
{
	if (Global_1667867.f_2 != 0)
	{
		return Global_1667867.f_2;
	}
	return -1;
}

int func_182(int iParam0)//Position - 0x7DE9
{
	if (iParam0 == func_183())
	{
		return -1;
	}
	return Global_1627537[iParam0 /*532*/].f_11.f_8[1];
}

int func_183()//Position - 0x7E0E
{
	return -1;
}

int func_184(int iParam0)//Position - 0x7E17
{
	if (iParam0 == func_183())
	{
		return -1;
	}
	return Global_1627537[iParam0 /*532*/].f_11.f_8[0];
}

int func_185()//Position - 0x7E3C
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11;
}

bool func_186(bool bParam0)//Position - 0x7E51
{
	return func_187(unk_0x9EB17624F44A8DA4(), bParam0);
}

int func_187(int iParam0, bool bParam1)//Position - 0x7E63
{
	return func_188(iParam0, bParam1, 1);
}

int func_188(int iParam0, bool bParam1, int iParam2)//Position - 0x7E74
{
	int iVar0;
	
	if (iParam0 == func_183())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_189(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1627537[iParam0 /*532*/].f_11;
	if (iVar0 != func_183() && Global_1627537[iVar0 /*532*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_189(int iParam0, int iParam1)//Position - 0x7ED0
{
	if (iParam0 != func_183())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_183())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 == iParam0 && Global_1627537[iParam0 /*532*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_190(int iParam0, int iParam1)//Position - 0x7F1F
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_22761 == 0 || Global_262145.f_22761 == 1)
		{
			if (!unk_0xB9D80B12FE4456A5() || Global_262145.f_22761 == 1)
			{
				Global_2512808.f_272 = iParam0;
				if (iParam1 > Global_262145.f_5975)
				{
					iParam1 = Global_262145.f_5975;
				}
				Global_2512808.f_273 = iParam1;
				Global_2512808.f_274 = 0;
			}
		}
	}
}

void func_191(int iParam0, int iParam1)//Position - 0x7F91
{
	vector3 vVar0;
	
	vVar0 = { func_198(unk_0xFC1458A37D98B502(), 1) };
	if (iParam0 == func_197(unk_0xFC1458A37D98B502()))
	{
		func_196(1);
	}
	func_192(vVar0, iParam1, 7, 0, 0);
}

void func_192(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x7FC5
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2436181.f_1173[iVar0 /*30*/].f_6 == 0 || Global_2436181.f_1173[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2436181.f_1173[iVar1 /*30*/] = { vParam0 };
			Global_2436181.f_1173[iVar1 /*30*/].f_6 = 1;
			Global_2436181.f_1173[iVar1 /*30*/].f_4 = func_195(Global_2436181.f_1173[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2436181.f_1173[iVar1 /*30*/].f_7 = unk_0xD1952A425B78FFC0();
			Global_2436181.f_1173[iVar1 /*30*/].f_3 = iParam1;
			Global_2436181.f_1173[iVar1 /*30*/].f_8 = iParam2;
			Global_2436181.f_1173[iVar1 /*30*/].f_9 = func_194();
			Global_2436181.f_1173[iVar1 /*30*/].f_10 = func_193();
			StringCopy(&(Global_2436181.f_1173[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2436181.f_1173[iVar1 /*30*/].f_26 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), iParam4);
		}
	}
}

int func_193()//Position - 0x80DD
{
	if (Global_2436181.f_1774)
	{
		Global_2436181.f_1774 = 0;
		return 1;
	}
	Global_2436181.f_1774 = 0;
	return 0;
}

var func_194()//Position - 0x8107
{
	var uVar0;
	
	uVar0 = Global_2436181.f_1776;
	Global_2436181.f_1776 = 1;
	return uVar0;
}

float func_195(vector3 vParam0, var uParam1, var uParam2)//Position - 0x8122
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xBE3C4023003180FC(unk_0x90CC871EBA5B70FA(), vParam0, 1);
	if (fVar0 < 5f)
	{
		*uParam1 = 0,402f;
		*uParam2 = 0,476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0,212f;
		*uParam2 = 0,286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0,402f - 0,212f));
	fVar3 = (fVar1 * (0,476f - 0,286f));
	*uParam1 = (fVar2 + 0,212f);
	*uParam2 = (fVar3 + 0,286f);
	return fVar1;
}

void func_196(int iParam0)//Position - 0x81BB
{
	Global_2436181.f_1774 = iParam0;
}

int func_197(int iParam0)//Position - 0x81CC
{
	return iParam0;
}

Vector3 func_198(int iParam0, bool bParam1)//Position - 0x81D6
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0x4AA5DF29899B96D6())
	{
		vVar1 = { unk_0xEDD96F31411FBD87(2) };
	}
	if (iParam0 == func_199(unk_0xFC1458A37D98B502()) && unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
	{
		vVar0 = { unk_0x3F90543934DCD7E6(iParam0, 0f, 8f, -0,2f) };
	}
	else
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		fVar2 = unk_0xF0371FE6E2BF9599(iParam0);
		if (unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0,18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0,18f);
	}
	vVar0 = { unk_0x9EA50C5EC175E58E(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_199(int iParam0)//Position - 0x829A
{
	return iParam0;
}

void func_200(vector3 vParam0, int iParam1)//Position - 0x82A4
{
	func_192(vParam0, iParam1, 6, 0, 0);
}

void func_201(int iParam0)//Position - 0x82B9
{
	Global_2436181.f_1776 = iParam0;
}

void func_202(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x82CA
{
	func_203(iParam0, iParam1, iParam2, fParam3);
}

void func_203(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x82DE
{
	func_204(iParam0, iParam1, iParam2, fParam3);
}

void func_204(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x82F2
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = system::floor((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_4 = iVar1;
	Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_3 = (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_205(iVar1, 0);
	}
}

void func_205(int iParam0, bool bParam1)//Position - 0x8375
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_206(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x8386
{
	int iVar0;
	
	if (!func_215())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
			if (iParam1 > 0)
			{
				func_207(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
			func_207(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_207(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x8810
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_215())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x02404400A68A3D5B(func_77()) || unk_0xD7D895B4B5395982())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457985)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4261865[iVar2 /*80*/].f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0xE51E15AF85DFE75E(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xC972A21EB39CE12F(iVar4))
		{
			*uParam0 = func_214(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4261865[*uParam0 /*80*/].f_69 = 1;
					Global_4261865[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_4262402 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4262414 = 1;
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_213(1, iParam4);
			Global_4262414 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_208(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_208(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x89B4
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_137.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_209(iParam0);
	}
}

void func_209(int iParam0)//Position - 0x89EC
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_215())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_212(iParam0))
		{
			if (!bVar0)
			{
				unk_0x166C543410DE9A3F();
			}
		}
		else if (!bVar0)
		{
			unk_0x45B51A422AE852A9(Global_4261865[iParam0 /*80*/]);
		}
		func_210(&(Global_4261865[iParam0 /*80*/]));
	}
}

void func_210(var uParam0)//Position - 0x8A3E
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_211(&(uParam0->f_8.f_3));
	func_211(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_74 = 0;
	uParam0->f_73 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	uParam0->f_77 = 0;
	uParam0->f_79 = 0;
}

void func_211(var uParam0)//Position - 0x8B38
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

int func_212(int iParam0)//Position - 0x8B80
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_213(int iParam0, int iParam1)//Position - 0x8BA8
{
	Global_2459156 = iParam1;
	Global_2459155 = iParam0;
}

int func_214(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0x8BBC
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_215())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4261865[iVar0 /*80*/].f_2 = 1;
			Global_4261865[iVar0 /*80*/].f_1 = iParam5;
			Global_4261865[iVar0 /*80*/].f_3 = uParam1;
			Global_4261865[iVar0 /*80*/].f_4 = iParam2;
			Global_4261865[iVar0 /*80*/].f_7 = iParam3;
			Global_4261865[iVar0 /*80*/].f_5 = 0;
			Global_4261865[iVar0 /*80*/] = iParam0;
			Global_4261865[iVar0 /*80*/].f_6 = iParam4;
			Global_4261865[iVar0 /*80*/].f_72 = uParam8;
			Global_4261865[iVar0 /*80*/].f_71 = iParam7;
			Global_4261865[iVar0 /*80*/].f_74 = iParam9;
			Global_4261865[iVar0 /*80*/].f_73 = 0;
			Global_4261865[iVar0 /*80*/].f_75 = unk_0x4B64A8D052027742();
			Global_4261865[iVar0 /*80*/].f_79 = 0;
			Global_4262402 = 0;
			if (bParam6)
			{
				Global_4261865[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_215()//Position - 0x8CB5
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

void func_216(int iParam0, int iParam1)//Position - 0x8CCC
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_260())
		{
			if (func_259(0))
			{
				if (!func_186(0))
				{
					if (unk_0x552F39AE86E07792(func_185()))
					{
						if (func_258() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_258());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_256(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_221("GB_BCUT_TICK1", func_185(), iVar0, 0, 0, 1, 1);
						}
						func_220(20);
						func_217(func_185(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_217(int iParam0, int iParam1, int iParam2)//Position - 0x8D6D
{
	struct<8> Var0;
	
	if (func_44(iParam0, 0, 1))
	{
		Var0 = 887219908;
		Var0.f_1 = unk_0x9EB17624F44A8DA4();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_219(iParam0);
		func_218(&(Var0.f_6), &(Var0.f_7));
		unk_0x5A26F0BDEE9F8260(1, &Var0, 8, func_8(iParam0));
	}
}

void func_218(var uParam0, var uParam1)//Position - 0x8DC3
{
	*uParam0 = Global_1644563.f_9;
	*uParam1 = Global_1644563.f_10;
}

var func_219(int iParam0)//Position - 0x8DDD
{
	return Global_1627537[iParam0 /*532*/].f_469;
}

void func_220(int iParam0)//Position - 0x8DF1
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4856.f_7[iVar0]), iVar1);
}

int func_221(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x8E1A
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xDE2D3B9654C31EB3(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xDE2D3B9654C31EB3(iParam1), 64);
		}
		if (unk_0xAB019B170BF1309C(&Var1))
		{
		}
		unk_0xE3C33644878DCCFD(sParam0);
		unk_0xF92B835A141C6BDD(func_230(iParam1, -2, 1, 0));
		unk_0x854FACC4E5F40C82(func_228(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xF92B835A141C6BDD(iParam3);
		}
		unk_0x6223D539BCD39E76(iParam2);
		iVar0 = unk_0x65F0733C4A64907A(0, 1);
		func_222(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_222(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x8EB1
{
	int iVar0;
	
	if ((!func_227() || !unk_0x4916190900E76373()) || !func_225(unk_0x9EB17624F44A8DA4(), 0))
	{
		return;
	}
	iVar0 = func_223(iParam2);
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

int func_223(int iParam0)//Position - 0x8FB9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1664509 - 1))
	{
		if (iParam0 > Global_1664509.f_5[iVar0 /*53*/].f_1)
		{
			func_224(iVar0);
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

void func_224(int iParam0)//Position - 0x901B
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1664509.f_5[iVar0 /*53*/] = { Global_1664509.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_225(int iParam0, int iParam1)//Position - 0x9054
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_226(-1, 0) == 8;
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

int func_226(int iParam0, bool bParam1)//Position - 0x909F
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_77();
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

bool func_227()//Position - 0x90E0
{
	return unk_0x21EA5D4DC72DE119(-1762644250);
}

var func_228(char* sParam0)//Position - 0x90F1
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_229(&cVar0);
}

var func_229(char[4] cParam0)//Position - 0x9115
{
	return cParam0;
}

int func_230(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x911F
{
	int iVar0;
	int iVar1;
	
	if (func_254(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x917EE18109C5ACEA(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_117386[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_254(unk_0x9EB17624F44A8DA4()) || (func_253() && func_252())) && !unk_0xC80D31E4B587871C(Global_2512808.f_4556, 31))
	{
		iVar1 = func_251();
		if (unk_0x6ADD12BF4D6D2587(iVar1))
		{
			if (unk_0x1417A5CC924DE120(iVar1))
			{
				if (unk_0xDF35170AEEFB473B(iVar1) != -1)
				{
					if (func_44(unk_0xDF35170AEEFB473B(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
						{
							if (Global_4456448.f_117386[iParam1] != -1)
							{
								return func_249(iParam1, iParam0, 0);
							}
							else
							{
								return func_237(iParam0, unk_0xDF35170AEEFB473B(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_237(iParam0, unk_0xDF35170AEEFB473B(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
			{
				if (Global_4456448.f_117386[iParam1] != -1)
				{
					return func_249(iParam1, iParam0, 0);
				}
				else
				{
					return func_231(0, -1, 0);
				}
			}
			else
			{
				return func_231(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
	{
		if (Global_4456448.f_117386[iParam1] != -1)
		{
			return func_249(iParam1, iParam0, 0);
		}
		else
		{
			return func_237(iParam0, unk_0x9EB17624F44A8DA4(), iParam1, bParam2, bParam3);
		}
	}
	return func_237(iParam0, unk_0x9EB17624F44A8DA4(), iParam1, bParam2, bParam3);
}

int func_231(bool bParam0, int iParam1, bool bParam2)//Position - 0x92EF
{
	return func_232(unk_0x9EB17624F44A8DA4(), bParam0, iParam1, bParam2);
}

int func_232(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x9305
{
	int iVar0;
	
	if (!unk_0x552F39AE86E07792(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x917EE18109C5ACEA(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_82(iVar0, iParam2, 0) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_236(1);
				}
				else
				{
					return func_236(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_4, 20))
			{
				return func_233(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_233(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_236(1);
	}
	return func_236(0);
}

int func_233(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x93C9
{
	int iVar0;
	
	iVar0 = func_235(iParam0, iParam1, iParam3);
	if (func_234(Global_4456448.f_122309))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_234(int iParam0)//Position - 0x94E0
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8408[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_235(int iParam0, int iParam1, int iParam2)//Position - 0x9519
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_82(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_236(bool bParam0)//Position - 0x9560
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_237(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x9577
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x917EE18109C5ACEA(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1595693[iVar2 /*680*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_246(1))
			{
				iVar3 = func_242(iParam0);
				if (!iVar3 == -1)
				{
					return func_240(iVar3);
				}
			}
			if ((func_239(iParam1, iParam0, iVar0, 0) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18)) || ((func_82(unk_0x917EE18109C5ACEA(iParam1), unk_0x917EE18109C5ACEA(iParam0), 0) && unk_0xC80D31E4B587871C(Global_4456448.f_15, 23)) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18)))
			{
				return func_236(1);
			}
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_15, 26))
			{
				return func_238(1);
			}
			else
			{
				return func_232(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574312 || Global_1574303) || Global_1595693[iParam0 /*680*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574312 == 1 && Global_1574322 == 0))
			{
				return func_236(1);
			}
			else
			{
				return func_232(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574307 && Global_1573842.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_242(iParam0);
	if (!iVar4 == -1)
	{
		return func_240(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_238(bool bParam0)//Position - 0x971B
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_239(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9732
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x917EE18109C5ACEA(iParam0) == -1 && unk_0x917EE18109C5ACEA(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x917EE18109C5ACEA(iParam0) == unk_0x917EE18109C5ACEA(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x917EE18109C5ACEA(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x917EE18109C5ACEA(iParam0) == iParam2;
	}
	return unk_0x917EE18109C5ACEA(iParam0) == iParam2;
}

int func_240(int iParam0)//Position - 0x97AA
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_241(iParam0);
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

var func_241(int iParam0)//Position - 0x986D
{
	return Global_2416800.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_242(int iParam0)//Position - 0x9884
{
	if (!iParam0 == func_183())
	{
		if (func_244(iParam0, 1))
		{
			return Global_2416800.f_2071.f_11[func_243(iParam0)];
		}
	}
	return -1;
}

int func_243(int iParam0)//Position - 0x98B6
{
	if (iParam0 != func_183())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_183();
}

bool func_244(int iParam0, bool bParam1)//Position - 0x98D9
{
	if (!bParam1)
	{
		if (func_245(iParam0))
		{
			return 0;
		}
	}
	return Global_1627537[iParam0 /*532*/].f_11 != func_183();
}

int func_245(int iParam0)//Position - 0x9904
{
	if (iParam0 != func_183())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_183())
		{
			return Global_1627537[iParam0 /*532*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_246(int iParam0)//Position - 0x9939
{
	if ((func_248() || func_247()) || (func_97() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_247()//Position - 0x9968
{
	return Global_2447174.f_15;
}

var func_248()//Position - 0x9976
{
	return Global_2447174.f_14;
}

int func_249(int iParam0, int iParam1, bool bParam2)//Position - 0x9984
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_980513.f_12[iParam0];
	if (func_246(1))
	{
		iVar2 = func_242(iParam1);
		if (!iVar2 == -1)
		{
			return func_240(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xC80D31E4B587871C(Global_4456448.f_97[iParam0 /*10024*/].f_5191[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_183())
	{
		if (Global_4456448.f_117386[iParam0] != -1 && Global_4456448.f_117386[iParam0] <= 4)
		{
			if (Global_4456448.f_117386[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_117386[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_117386[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_117386[iParam0] == 4)
			{
				if (unk_0xC80D31E4B587871C(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_117386[iParam0];
			}
		}
		else
		{
			iVar0 = func_232(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xC80D31E4B587871C(Global_4456448.f_21, 13))
		{
			iVar0 = func_250(iParam0);
		}
		if (unk_0xC80D31E4B587871C(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_250(int iParam0)//Position - 0x9AE9
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_144012;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_144013;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_144014;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_144015;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_251()//Position - 0x9BBE
{
	return Global_2359302.f_2;
}

bool func_252()//Position - 0x9BCC
{
	return unk_0xC80D31E4B587871C(Global_2359302, 4);
}

bool func_253()//Position - 0x9BDD
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

int func_254(int iParam0)//Position - 0x9BFA
{
	if (func_225(iParam0, 0))
	{
		return 1;
	}
	if (func_255())
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

bool func_255()//Position - 0x9C3C
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

void func_256(int iParam0, bool bParam1)//Position - 0x9C4D
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_257(1);
	}
	else
	{
		iVar1 = func_257(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_257(bool bParam0)//Position - 0x9C7F
{
	if (bParam0)
	{
		return system::round((0,05f * 100f));
	}
	return Global_262145.f_11730;
}

int func_258()//Position - 0x9CA5
{
	return Global_262145.f_11729;
}

bool func_259(bool bParam0)//Position - 0x9CB4
{
	return func_244(unk_0x9EB17624F44A8DA4(), bParam0);
}

bool func_260()//Position - 0x9CC6
{
	return func_245(unk_0x9EB17624F44A8DA4());
}

float func_261(int iParam0)//Position - 0x9CD6
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_262(int iParam0)//Position - 0x9D52
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/];
	}
	return -1;
}

int func_263(int iParam0)//Position - 0x9D71
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/] != -1;
	}
	return 0;
}

int func_264(int iParam0, int iParam1)//Position - 0x9D92
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (system::to_float(iParam0) * Global_262145);
				iParam0 = system::round(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_265(float fParam0)//Position - 0x9DD3
{
	iLocal_109 = unk_0x45D90ED1F569A489(Local_98.f_29);
	if (iLocal_109 >= 0)
	{
		if (unk_0xD56F740235B1E8F0(iLocal_109))
		{
			if (unk_0x463C4747B41E35A3(iLocal_109) >= fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_266()//Position - 0x9E09
{
	iLocal_109 = unk_0x45D90ED1F569A489(Local_98.f_29);
	if (iLocal_109 >= 0)
	{
		if (unk_0xD56F740235B1E8F0(iLocal_109))
		{
			if (unk_0x463C4747B41E35A3(iLocal_109) >= 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_267()//Position - 0x9E3E
{
	func_268();
}

int func_268()//Position - 0x9E4B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0xE53FD7AF7F25C0A8(Local_98))
	{
		return 0;
	}
	if (func_430(Local_98))
	{
		if (!unk_0xC80D31E4B587871C(Local_100.f_53, 3))
		{
			unk_0x7473BE00BC5FB4E3(unk_0x47BA76CE3C825A08(Local_98));
			unk_0x872F1C1F8587CCC7(&(Local_100.f_53), 3);
		}
		return 0;
	}
	switch (Local_98.f_3)
	{
		case 0:
			unk_0x2217C45231E6A537(unk_0x47BA76CE3C825A08(Local_98), 71, 1);
			break;
		
		case 1:
			if (!unk_0xC80D31E4B587871C(Local_98.f_23, 4) && !unk_0xC80D31E4B587871C(Local_98.f_23, 12))
			{
				if (unk_0xC80D31E4B587871C(Local_98.f_23, 13))
				{
					if (!unk_0xC80D31E4B587871C(Local_100.f_52, 17))
					{
						unk_0x66698545014E2F21(unk_0x47BA76CE3C825A08(Local_98), 16);
						unk_0x60C06BFD037BB7CF(unk_0x47BA76CE3C825A08(Local_98), unk_0xFC1458A37D98B502(), -1, 0, 2);
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
						{
							func_274(10);
						}
						else if (unk_0xC80D31E4B587871C(Local_98.f_24, 0))
						{
							if (!unk_0xC80D31E4B587871C(Local_98.f_24, 11))
							{
								if (!unk_0xC80D31E4B587871C(Local_98.f_24, 12))
								{
									func_274(13);
								}
								else
								{
									func_274(20);
								}
							}
							else
							{
								func_274(17);
							}
							unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 25);
						}
						else if (!unk_0xC80D31E4B587871C(Local_98.f_24, 11))
						{
							if (!unk_0xC80D31E4B587871C(Local_98.f_24, 12))
							{
								func_274(0);
							}
							else
							{
								func_274(18);
							}
						}
						else
						{
							func_274(15);
						}
						unk_0x872F1C1F8587CCC7(&(Local_100.f_52), 17);
					}
					else if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98), -875674219) != 1 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98), -875674219) != 0)
					{
						if (func_17(&uLocal_130, 5000, 0))
						{
							func_13(&uLocal_130);
							if (!iLocal_103)
							{
								unk_0xAC838A977FB6E6BC(unk_0x47BA76CE3C825A08(Local_98), unk_0xFC1458A37D98B502(), 10000);
							}
							unk_0x60C06BFD037BB7CF(unk_0x47BA76CE3C825A08(Local_98), unk_0xFC1458A37D98B502(), -1, 0, 2);
						}
					}
				}
			}
			unk_0x2217C45231E6A537(unk_0x47BA76CE3C825A08(Local_98), 71, 1);
			break;
		
		case 2:
			if (!unk_0xC80D31E4B587871C(Local_98.f_23, 7) && !unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 0))
			{
				iVar1 = unk_0xFC1458A37D98B502();
				if (Local_98.f_32 > -1)
				{
					if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(Local_98.f_32)))
					{
						iVar0 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Local_98.f_32));
						iVar1 = unk_0x25D049AAC4603E65(iVar0);
					}
				}
				if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					unk_0x60C06BFD037BB7CF(unk_0x47BA76CE3C825A08(Local_98), iVar1, -1, 0, 2);
					unk_0x66698545014E2F21(unk_0x47BA76CE3C825A08(Local_98), 16);
					unk_0x12C9D41D52A560D6(unk_0x47BA76CE3C825A08(Local_98), "mp_am_hold_up", "WARY_LOOP", 4f, -4f, -1, 49, 0, 0, 0, 0);
					unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 0);
				}
			}
			else if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98), -875674219) != 1 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98), -875674219) != 0)
			{
				if (func_17(&uLocal_130, 5000, 0))
				{
					iVar1 = unk_0xFC1458A37D98B502();
					if (Local_98.f_32 > -1)
					{
						if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(Local_98.f_32)))
						{
							iVar0 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Local_98.f_32));
							iVar1 = unk_0x25D049AAC4603E65(iVar0);
						}
					}
					func_13(&uLocal_130);
					unk_0xAC838A977FB6E6BC(unk_0x47BA76CE3C825A08(Local_98), iVar1, 10000);
					unk_0x60C06BFD037BB7CF(unk_0x47BA76CE3C825A08(Local_98), iVar1, -1, 0, 2);
				}
			}
			if (unk_0xC80D31E4B587871C(Local_98.f_23, 16))
			{
				unk_0x66698545014E2F21(unk_0x47BA76CE3C825A08(Local_98), 16);
			}
			unk_0x2217C45231E6A537(unk_0x47BA76CE3C825A08(Local_98), 71, 1);
			break;
		
		case 3:
			if (!unk_0xC80D31E4B587871C(Local_100.f_52, 25))
			{
				if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98), 1920390111) != 0 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98), 1920390111) != 1)
				{
					unk_0xE9B3D12A64CC7C1A(unk_0x47BA76CE3C825A08(Local_98), 1);
					unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_98), 2, false);
					unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_98), 8, true);
					unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_98), 16, true);
					unk_0x66698545014E2F21(unk_0x47BA76CE3C825A08(Local_98), 16);
					unk_0x2DAC3448B66448E8(unk_0x47BA76CE3C825A08(Local_98), Local_98.f_42, -1);
					unk_0x872F1C1F8587CCC7(&(Local_100.f_52), 25);
				}
			}
			break;
		
		case 4:
			if (!unk_0xC80D31E4B587871C(Local_98.f_23, 17) && !unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 3))
			{
				if (unk_0x8E1421E2A2A2FBD4())
				{
					Global_2512808.f_8 = 1;
				}
				iVar2 = unk_0xFC1458A37D98B502();
				if (Global_2512808.f_9 != func_183())
				{
					if (func_44(Global_2512808.f_9, 1, 1))
					{
						iVar2 = unk_0x25D049AAC4603E65(Global_2512808.f_9);
					}
				}
				unk_0x60C06BFD037BB7CF(unk_0x47BA76CE3C825A08(Local_98), iVar2, 30000, 0, 3);
				unk_0xFC5E55B45BF47418(unk_0x47BA76CE3C825A08(Local_98), "mood_stressed_1", 0);
				unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 3);
			}
			else
			{
				iLocal_109 = unk_0x45D90ED1F569A489(Local_98.f_29);
				if (iLocal_109 >= 0)
				{
					if (unk_0xD56F740235B1E8F0(iLocal_109))
					{
						fLocal_313 = (Local_98.f_33 + 0,6f);
						if (fLocal_313 < 0,75f)
						{
							fLocal_313 = 0,75f;
						}
						if (unk_0xC80D31E4B587871C(Local_98.f_24, 4))
						{
							fLocal_313 = (fLocal_313 + 0,25f);
						}
						if (fLocal_313 > 1,75f)
						{
							fLocal_313 = 1,75f;
						}
						unk_0x3A17FED900F99299(iLocal_109, fLocal_313);
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 10))
			{
				if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98), 242628503) != 0 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98), 242628503) != 1)
				{
					if (!unk_0x9F887157983E8EFC(unk_0x47BA76CE3C825A08(Local_98)))
					{
						iLocal_109 = unk_0x45D90ED1F569A489(Local_98.f_29);
						if ((iLocal_109 >= 0 && !unk_0xD56F740235B1E8F0(iLocal_109)) || iLocal_109 < 0)
						{
							unk_0xAB30B1CF01A198C1(unk_0x47BA76CE3C825A08(Local_98), uLocal_114);
							unk_0x66698545014E2F21(unk_0x47BA76CE3C825A08(Local_98), 16);
							unk_0xE9B3D12A64CC7C1A(unk_0x47BA76CE3C825A08(Local_98), 1);
							unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 10);
						}
					}
				}
			}
			else if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98), -875674219) != 1 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98), -875674219) != 0)
			{
				if (func_17(&uLocal_130, 5000, 0))
				{
					func_13(&uLocal_130);
					iVar1 = unk_0xFC1458A37D98B502();
					if (Local_98.f_32 > -1)
					{
						if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(Local_98.f_32)))
						{
							iVar0 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Local_98.f_32));
							iVar1 = unk_0x25D049AAC4603E65(iVar0);
						}
					}
					unk_0xAC838A977FB6E6BC(unk_0x47BA76CE3C825A08(Local_98), iVar1, 10000);
					unk_0x60C06BFD037BB7CF(unk_0x47BA76CE3C825A08(Local_98), unk_0xFC1458A37D98B502(), -1, 0, 2);
				}
			}
			break;
		
		case 6:
			if (!unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 10))
			{
				if ((iLocal_109 < 0 || !unk_0xD56F740235B1E8F0(iLocal_109)) || unk_0x463C4747B41E35A3(iLocal_109) >= 0,95f)
				{
					func_273();
					iVar1 = unk_0xFC1458A37D98B502();
					if (Local_98.f_32 > -1)
					{
						if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(Local_98.f_32)))
						{
							iVar0 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Local_98.f_32));
							iVar1 = unk_0x25D049AAC4603E65(iVar0);
						}
					}
					unk_0x2955A31540EE0E4F(unk_0x47BA76CE3C825A08(Local_98), -1, iVar1, -1, 1);
					unk_0x9A0C1F836B24E46E(unk_0x47BA76CE3C825A08(Local_98), 0, 0);
					unk_0x66698545014E2F21(unk_0x47BA76CE3C825A08(Local_98), 16);
					unk_0xE9B3D12A64CC7C1A(unk_0x47BA76CE3C825A08(Local_98), 1);
					unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 10);
				}
			}
			break;
		
		case 7:
			if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98), -1442466670) != 0 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98), -1442466670) != 1)
			{
				if (!func_174())
				{
					func_272();
					unk_0xB8E08BD5B184DF4E(unk_0x47BA76CE3C825A08(Local_98));
					unk_0x992E814DF611C58C(unk_0x47BA76CE3C825A08(Local_98), 20f, 0);
					func_274(4);
				}
			}
			break;
		
		case 8:
			if (!unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 9))
			{
				func_273();
				iLocal_109 = unk_0x45D90ED1F569A489(Local_98.f_29);
				if ((iLocal_109 >= 0 && !unk_0xD56F740235B1E8F0(iLocal_109)) || iLocal_109 < 0)
				{
					if ((!unk_0xC80D31E4B587871C(Local_98.f_23, 27) && !func_36()) && !func_35())
					{
						if (unk_0xC80D31E4B587871C(Local_98.f_24, 2))
						{
							if (!unk_0xC80D31E4B587871C(Local_98.f_24, 3))
							{
								unk_0xAB30B1CF01A198C1(unk_0x47BA76CE3C825A08(Local_98), uLocal_116);
								iVar3 = 1;
							}
							else
							{
								func_272();
								unk_0xAB30B1CF01A198C1(unk_0x47BA76CE3C825A08(Local_98), uLocal_117);
								iVar3 = 1;
							}
						}
					}
					else
					{
						unk_0xFC5999E8B820470E(unk_0x47BA76CE3C825A08(Local_98), vLocal_107, 250f, -1, 1, 0);
						iVar3 = 1;
					}
					if (iVar3 == 1)
					{
						func_274(25);
						unk_0xE9B3D12A64CC7C1A(unk_0x47BA76CE3C825A08(Local_98), 1);
						func_6(Local_100.f_50, 1, func_7());
						unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 9);
					}
				}
			}
			else if (!unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 19))
			{
				iVar4 = unk_0x3F16BDDA53C396EE(unk_0x47BA76CE3C825A08(Local_98));
				if (iVar4 == 3)
				{
					unk_0x2CEA76A7F93740C6(unk_0x47BA76CE3C825A08(Local_98));
					unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 19);
				}
				else if (iVar4 == 2)
				{
					unk_0xB8E08BD5B184DF4E(unk_0x47BA76CE3C825A08(Local_98));
					if (!unk_0xC80D31E4B587871C(Local_98.f_24, 3))
					{
						unk_0xAB30B1CF01A198C1(unk_0x47BA76CE3C825A08(Local_98), uLocal_118);
					}
					else
					{
						unk_0x992E814DF611C58C(unk_0x47BA76CE3C825A08(Local_98), 20f, 0);
					}
					unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 19);
				}
			}
			break;
	}
	func_269();
	return 1;
}

void func_269()//Position - 0xA722
{
	if ((Local_98.f_3 != 8 && Local_98.f_3 != 7) && Local_98.f_2 == 3)
	{
		if ((((!unk_0xC80D31E4B587871C(Local_98.f_23, 14) || !unk_0xC80D31E4B587871C(Local_98.f_23, 15)) || !unk_0xC80D31E4B587871C(Local_98.f_23, 22)) || !unk_0xC80D31E4B587871C(Local_98.f_23, 23)) || !unk_0xC80D31E4B587871C(Local_98.f_23, 30))
		{
			iLocal_109 = unk_0x45D90ED1F569A489(Local_98.f_29);
			if (iLocal_109 >= 0)
			{
				if (unk_0xD56F740235B1E8F0(iLocal_109))
				{
					if (!func_174())
					{
						if (!unk_0xC80D31E4B587871C(Local_98.f_23, 14) && !unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 6))
						{
							func_274(2);
							unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 6);
						}
						if (!unk_0xC80D31E4B587871C(Local_98.f_23, 15) && !unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 7))
						{
							if (unk_0x463C4747B41E35A3(iLocal_109) > 0,87f)
							{
								func_274(3);
								unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 7);
							}
						}
						if (!unk_0xC80D31E4B587871C(Local_98.f_23, 22) && !unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 22))
						{
							if (unk_0xC80D31E4B587871C(Local_98.f_23, 24) && !func_174())
							{
								func_274(11);
								unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 22);
							}
						}
						if (!unk_0xC80D31E4B587871C(Local_98.f_23, 23) && !unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 23))
						{
							if (unk_0xC80D31E4B587871C(Local_98.f_23, 25) && !func_174())
							{
								func_274(12);
								unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 23);
							}
						}
					}
				}
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_98.f_23, 9))
		{
			if (!unk_0xC80D31E4B587871C(Local_98.f_23, 26) && !unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 24))
			{
				if (unk_0xC80D31E4B587871C(Local_98.f_23, 7))
				{
					if (!func_174())
					{
						if (!unk_0xC80D31E4B587871C(Local_98.f_24, 11))
						{
							if (!unk_0xC80D31E4B587871C(Local_98.f_24, 12))
							{
								func_274(1);
							}
							else
							{
								func_274(19);
							}
						}
						else
						{
							func_274(16);
						}
						unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 24);
						return;
					}
					else
					{
						func_270();
						return;
					}
				}
			}
			if (((!unk_0xC80D31E4B587871C(Local_98.f_23, 30) && !unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 25)) && !unk_0xC80D31E4B587871C(Local_98.f_23, 7)) && !unk_0xC80D31E4B587871C(Local_98.f_23, 4))
			{
				if (unk_0xC80D31E4B587871C(Local_98.f_24, 0) && !func_174())
				{
					if ((unk_0xC80D31E4B587871C(Local_98.f_23, 7) && unk_0xC80D31E4B587871C(Local_98.f_23, 4)) || (!unk_0xC80D31E4B587871C(Local_98.f_23, 7) && !unk_0xC80D31E4B587871C(Local_98.f_23, 4)))
					{
						if (!unk_0xC80D31E4B587871C(Local_98.f_24, 11))
						{
							if (!unk_0xC80D31E4B587871C(Local_98.f_24, 12))
							{
								func_274(13);
							}
							else
							{
								func_274(20);
							}
						}
						else
						{
							func_274(17);
						}
						unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 25);
						return;
					}
				}
			}
			if (!unk_0xC80D31E4B587871C(Local_98.f_23, 31) && !unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 26))
			{
				if (unk_0xC80D31E4B587871C(Local_98.f_24, 1) && !func_174())
				{
					func_274(14);
					unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 26);
					return;
				}
			}
			if (!unk_0xC80D31E4B587871C(Local_98.f_24, 9) && !unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 31))
			{
				if (unk_0xC80D31E4B587871C(Local_98.f_24, 8) && !func_174())
				{
					func_274(22);
					unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 31);
					return;
				}
			}
			if (!unk_0xC80D31E4B587871C(Local_98.f_1, 3) && !unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_1, 3))
			{
				if (unk_0xC80D31E4B587871C(Local_98.f_1, 2) && !func_174())
				{
					func_274(24);
					unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_1), 3);
					return;
				}
			}
			if (!unk_0xC80D31E4B587871C(Local_98.f_24, 14) && !unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 20))
			{
				if (unk_0xC80D31E4B587871C(Local_98.f_24, 13) && !func_174())
				{
					func_274(23);
					unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 20);
					return;
				}
			}
		}
	}
	if (!unk_0xC80D31E4B587871C(Local_98.f_24, 6) && !unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 29))
	{
		if (unk_0xC80D31E4B587871C(Local_98.f_24, 5))
		{
			if (!func_174())
			{
				func_274(21);
				unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 29);
				return;
			}
		}
	}
}

void func_270()//Position - 0xABC1
{
	Global_14622 = 0;
	func_271();
}

void func_271()//Position - 0xABD1
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

void func_272()//Position - 0xABF2
{
	int iVar0;
	
	iVar0 = unk_0x63A6486593EC7EC3(0, 12);
	if (iVar0 < 3)
	{
		unk_0x8135E0D869A8ECFC(unk_0x47BA76CE3C825A08(Local_98), joaat("weapon_pistol"), 25000, 0);
		unk_0xBB3CC641B6AED5E5(unk_0x47BA76CE3C825A08(Local_98), unk_0x63A6486593EC7EC3(10, 35));
	}
	else if (iVar0 < 6)
	{
		unk_0x8135E0D869A8ECFC(unk_0x47BA76CE3C825A08(Local_98), joaat("weapon_combatpistol"), 25000, 0);
		unk_0xBB3CC641B6AED5E5(unk_0x47BA76CE3C825A08(Local_98), unk_0x63A6486593EC7EC3(15, 40));
	}
	else if (iVar0 == 6)
	{
		unk_0x8135E0D869A8ECFC(unk_0x47BA76CE3C825A08(Local_98), joaat("weapon_microsmg"), 25000, 0);
		unk_0xBB3CC641B6AED5E5(unk_0x47BA76CE3C825A08(Local_98), unk_0x63A6486593EC7EC3(10, 25));
	}
	else if (iVar0 == 7)
	{
		unk_0x8135E0D869A8ECFC(unk_0x47BA76CE3C825A08(Local_98), joaat("weapon_combatmg"), 25000, 0);
		unk_0xBB3CC641B6AED5E5(unk_0x47BA76CE3C825A08(Local_98), unk_0x63A6486593EC7EC3(5, 15));
	}
	else if (iVar0 == 8)
	{
		unk_0x8135E0D869A8ECFC(unk_0x47BA76CE3C825A08(Local_98), joaat("weapon_bat"), 25000, 0);
		unk_0xBB3CC641B6AED5E5(unk_0x47BA76CE3C825A08(Local_98), unk_0x63A6486593EC7EC3(20, 40));
	}
	else if (iVar0 == 9)
	{
		unk_0x8135E0D869A8ECFC(unk_0x47BA76CE3C825A08(Local_98), joaat("weapon_assaultrifle"), 25000, 0);
		unk_0xBB3CC641B6AED5E5(unk_0x47BA76CE3C825A08(Local_98), unk_0x63A6486593EC7EC3(5, 30));
	}
	else if (iVar0 == 10)
	{
		unk_0x8135E0D869A8ECFC(unk_0x47BA76CE3C825A08(Local_98), joaat("weapon_sawnoffshotgun"), 25000, 0);
		unk_0xBB3CC641B6AED5E5(unk_0x47BA76CE3C825A08(Local_98), unk_0x63A6486593EC7EC3(5, 20));
	}
	else
	{
		unk_0x8135E0D869A8ECFC(unk_0x47BA76CE3C825A08(Local_98), joaat("weapon_pumpshotgun"), 25000, 0);
		unk_0xBB3CC641B6AED5E5(unk_0x47BA76CE3C825A08(Local_98), unk_0x63A6486593EC7EC3(10, 25));
	}
	func_6(Local_100.f_50, 1, func_7());
	unk_0xCE93FCB8A8D8DF0B(unk_0x47BA76CE3C825A08(Local_98), Global_1574764);
	unk_0x66C1F257A00B2D4E(unk_0x47BA76CE3C825A08(Local_98), 1);
	unk_0x4F9A62E773100FDC(unk_0x47BA76CE3C825A08(Local_98), 1);
	unk_0x4EC2D0046891F1C5(unk_0x47BA76CE3C825A08(Local_98), vLocal_106, 20f, 0, 0);
	unk_0xE9B3D12A64CC7C1A(unk_0x47BA76CE3C825A08(Local_98), 1);
}

void func_273()//Position - 0xADB8
{
	iLocal_109 = unk_0x45D90ED1F569A489(Local_98.f_29);
	if (iLocal_109 >= 0)
	{
		if (unk_0xD56F740235B1E8F0(iLocal_109))
		{
			unk_0x0B0BB26D99CD7575(Local_98.f_29);
		}
	}
}

void func_274(int iParam0)//Position - 0xADE4
{
	struct<2> Var0;
	int iVar1;
	
	if (unk_0xC80D31E4B587871C(Local_98.f_23, 13))
	{
		if (!func_430(Local_98))
		{
			if (unk_0xE53FD7AF7F25C0A8(Local_98) || (!unk_0x0070DE1A1E73C71C(Local_98) && unk_0x8E1421E2A2A2FBD4()))
			{
				if (!unk_0x9F887157983E8EFC(unk_0x47BA76CE3C825A08(Local_98)))
				{
					if (Local_98.f_45 == 0)
					{
						StringCopy(&Var0, "RB_SH2", 16);
					}
					else if (Local_98.f_45 == 1)
					{
						StringCopy(&Var0, "RB_12_F", 16);
					}
					else
					{
						StringCopy(&Var0, "RB_SH3", 16);
					}
					StringIntConCat(&Var0, Local_98.f_31, 16);
					StringIntConCat(&Var0, iParam0, 16);
					if (unk_0x74C475EB8E73D398(&Var0, "RB_SH241"))
					{
						if (unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar1, 1))
						{
							if ((((((iVar1 == joaat("weapon_unarmed") || iVar1 == 0) || iVar1 == joaat("object")) || iVar1 == joaat("weapon_flare")) || iVar1 == joaat("weapon_snowball")) || func_292(iVar1)) || func_291(iVar1))
							{
								StringCopy(&Var0, "RB_SH211", 16);
							}
						}
					}
					func_429(&uLocal_146, 3, unk_0x47BA76CE3C825A08(Local_98), &(Local_98.f_46), 1, 0);
					switch (iParam0)
					{
						case 0:
							unk_0xE44A9E63DC81244A(unk_0x47BA76CE3C825A08(Local_98), "SHOP_GREET", &(Local_98.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 1:
							func_275(&uLocal_146, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 2:
							func_275(&uLocal_146, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 3:
							func_275(&uLocal_146, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 4:
							unk_0xE44A9E63DC81244A(unk_0x47BA76CE3C825A08(Local_98), "SHOP_BRAVE", &(Local_98.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 10:
							unk_0xE44A9E63DC81244A(unk_0x47BA76CE3C825A08(Local_98), "SHOP_REMOVE_VEHICLE", &(Local_98.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 11:
							unk_0xE44A9E63DC81244A(unk_0x47BA76CE3C825A08(Local_98), "SHOP_REACT_TO_SHOUT", &(Local_98.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 12:
							unk_0xE44A9E63DC81244A(unk_0x47BA76CE3C825A08(Local_98), "SHOP_HURRYING", &(Local_98.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 13:
							unk_0xE44A9E63DC81244A(unk_0x47BA76CE3C825A08(Local_98), "SHOP_NO_COPS", &(Local_98.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 14:
							unk_0xE44A9E63DC81244A(unk_0x47BA76CE3C825A08(Local_98), "SHOP_THREATENED", &(Local_98.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 15:
							unk_0xE44A9E63DC81244A(unk_0x47BA76CE3C825A08(Local_98), "SHOP_GREET_START", &(Local_98.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 16:
							unk_0xE44A9E63DC81244A(unk_0x47BA76CE3C825A08(Local_98), "SHOP_SCARED_START", &(Local_98.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 17:
							unk_0xE44A9E63DC81244A(unk_0x47BA76CE3C825A08(Local_98), "SHOP_NO_COPS_START", &(Local_98.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 18:
							unk_0xE44A9E63DC81244A(unk_0x47BA76CE3C825A08(Local_98), "SHOP_GREET_END", &(Local_98.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 19:
							unk_0xE44A9E63DC81244A(unk_0x47BA76CE3C825A08(Local_98), "SHOP_SCARED_END", &(Local_98.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 20:
							unk_0xE44A9E63DC81244A(unk_0x47BA76CE3C825A08(Local_98), "SHOP_NO_COPS_END", &(Local_98.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 21:
							unk_0xE44A9E63DC81244A(unk_0x47BA76CE3C825A08(Local_98), "SHOP_COPS_ARRIVED", &(Local_98.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 22:
							unk_0xE44A9E63DC81244A(unk_0x47BA76CE3C825A08(Local_98), "SHOP_SELL", &(Local_98.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 23:
							unk_0xE44A9E63DC81244A(unk_0x47BA76CE3C825A08(Local_98), "SHOP_NO_ENTRY", &(Local_98.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 24:
							unk_0xE44A9E63DC81244A(unk_0x47BA76CE3C825A08(Local_98), "SHOP_STEAL", &(Local_98.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 25:
							unk_0xE44A9E63DC81244A(unk_0x47BA76CE3C825A08(Local_98), "SCREAM_PANIC", &(Local_98.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						}
					}
				}
			}
	}
}

int func_275(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB195
{
	func_290(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_276(sParam2, iParam3, 0);
}

int func_276(char* sParam0, int iParam1, bool bParam2)//Position - 0xB1E3
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
					func_289();
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
		if (func_288(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_287();
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
				func_281();
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
				if (func_280())
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
			if (func_279())
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
			func_278();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_277();
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
		func_289();
	}
	return 0;
}

void func_277()//Position - 0xB4AF
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

void func_278()//Position - 0xB4E1
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

int func_279()//Position - 0xB576
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_280()//Position - 0xB59D
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

void func_281()//Position - 0xB636
{
	if (func_126(14))
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
		Global_14453 = func_282();
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

var func_282()//Position - 0xB6D8
{
	func_283();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_283()//Position - 0xB6F1
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_286(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_285(unk_0xFC1458A37D98B502());
			if (func_284(iVar0) && (!func_126(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_284(Global_104555.f_2353.f_539.f_4301))
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

bool func_284(int iParam0)//Position - 0xB7EE
{
	return iParam0 < 3;
}

int func_285(int iParam0)//Position - 0xB7FA
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_286(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_286(int iParam0)//Position - 0xB837
{
	if (func_284(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_287()//Position - 0xB861
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

bool func_288(int iParam0, int iParam1)//Position - 0xB8B9
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

void func_289()//Position - 0xB8F4
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

void func_290(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0xB94B
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

int func_291(int iParam0)//Position - 0xB9A1
{
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_grenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_proxmine"):
			return 1;
			break;
		
		case -1169823560:
			return 1;
			break;
	}
	return 0;
}

int func_292(int iParam0)//Position - 0xB9E3
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_bat"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_hatchet"):
		case joaat("weapon_machete"):
		case joaat("weapon_switchblade"):
			return 1;
			break;
		
		case -853065399:
		case -1810795771:
		case 419712736:
			return 1;
			break;
	}
	return 0;
}

void func_293()//Position - 0xBA5B
{
	int iVar0;
	
	iVar0 = unk_0x3930B0AA9F6A0C8C(false, 0);
	if (Local_98.f_43 != iVar0)
	{
		if (Local_98.f_43 < iVar0 || func_300(Local_98.f_43, 0, 1))
		{
			unk_0xBC60D873F181A18E(Local_98.f_43);
		}
	}
	iVar0 = unk_0x5A9A3A92F1F0B182(false, 0);
	if (Local_98.f_44 != iVar0)
	{
		if (Local_98.f_44 < iVar0 || func_294(Local_98.f_44, 0, 1))
		{
			unk_0xB66EA47EE710E67F(Local_98.f_44);
		}
	}
}

int func_294(int iParam0, bool bParam1, bool bParam2)//Position - 0xBAC9
{
	return func_295(2, iParam0, 1, bParam1, bParam2);
}

int func_295(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xBADD
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC80D31E4B587871C(Global_1369394, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_299(iParam0) - func_298(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_298(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_299(iParam0) - func_297(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_298(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_299(iParam0) - func_298(iParam0, 1));
		}
		if (!bParam4 && Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] != 3)
		{
			iVar1 = (iVar1 - func_296(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_296(int iParam0)//Position - 0xBBA6
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

int func_297(int iParam0)//Position - 0xBBE0
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

int func_298(int iParam0, bool bParam1)//Position - 0xBC26
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

int func_299(int iParam0)//Position - 0xBCC3
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

int func_300(int iParam0, bool bParam1, bool bParam2)//Position - 0xBD03
{
	return func_295(0, iParam0, 1, bParam1, bParam2);
}

void func_301()//Position - 0xBD17
{
	float fVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	switch (iLocal_331)
	{
		case 0:
			if (!unk_0xC80D31E4B587871C(Local_100.f_53, 0))
			{
				if (unk_0x93C304998B457C45(Local_98.f_14))
				{
					if (func_307(vLocal_337))
					{
						vLocal_337 = { unk_0x3F90543934DCD7E6(unk_0xE8BC72FED1586931(Local_98.f_14), 0f, -0,5f, 0f) };
						unk_0x872F1C1F8587CCC7(&(Local_100.f_53), 0);
					}
				}
			}
			if ((((unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_337, 0,5f, 0,5f, 1f, 0, 1, 0) && (func_430(Local_98) || Local_98.f_3 > 7)) && !unk_0xC80D31E4B587871C(Local_98.f_23, 20)) && !unk_0xC80D31E4B587871C(Local_98.f_23, 11)) && unk_0xAA0BDFF32B6BC02A(vLocal_110, 1,5f) == 0)
			{
				if (((((!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && !func_171(0)) && !func_306()) && !unk_0x0F30C1F1717A6437()) && !func_37(unk_0x9EB17624F44A8DA4(), 146)) && unk_0x93C304998B457C45(Local_98.f_14))
				{
					func_151("FHU_MANR", -1);
					Global_2512808.f_5429.f_4 = 1;
					iLocal_331 = 1;
				}
			}
			break;
		
		case 1:
			if (((((!unk_0xC80D31E4B587871C(Local_98.f_24, 16) && !unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 12)) && !unk_0xC80D31E4B587871C(Local_98.f_23, 20)) && !unk_0xC80D31E4B587871C(Local_98.f_23, 11)) && unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_337, 0,5f, 0,5f, 1f, 0, 1, 0)) && (!func_142(unk_0x9EB17624F44A8DA4()) || func_93(unk_0x9EB17624F44A8DA4()) == 154))
			{
				if (((unk_0xE8C126B7ADBB9D63(0, 51) && !func_305(0)) && !func_306()) && !unk_0x0F30C1F1717A6437())
				{
					if (func_150("FHU_MANR"))
					{
						unk_0x3E80C2F7BC665259(1);
					}
					unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), false, 640);
					unk_0x872F1C1F8587CCC7(&(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/]), 12);
					iLocal_331 = 2;
				}
				else if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
				{
					if (iLocal_336 == 0)
					{
						func_302(&iLocal_336, 4, "FHU_MANR", 0, 0, 0, 0);
					}
				}
			}
			else if (func_150("FHU_MANR"))
			{
				unk_0x3E80C2F7BC665259(1);
			}
			break;
		
		case 2:
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				vVar3 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
				vLocal_337.z = (vVar3.z - 1f);
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), vLocal_337, 1, 0, 0, 1);
				unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), unk_0xA67DD8488EBA5F6D((vLocal_124.x - vLocal_337.x), (vLocal_124.y - vLocal_337.y)));
				unk_0xFAA3EF7FF92E1F9E(&uVar4);
				unk_0x6931076730A4AC5D(&uVar4);
				unk_0x12C9D41D52A560D6(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 262145, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				unk_0x1B16DD5C115FE009(uVar4);
				unk_0xAB30B1CF01A198C1(unk_0xFC1458A37D98B502(), uVar4);
				unk_0xD0A6028E561242DA(unk_0xFC1458A37D98B502(), 0, -1, 0);
				unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 200, 1);
				unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 71, 1);
				bVar2 = unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iLocal_335, 1);
				if (bVar2)
				{
					unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
				}
				unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 0, 0);
				if (!unk_0x8EA3C8E091EA5BA4(iLocal_332))
				{
					iLocal_332 = unk_0x5AC38B4D80D4E352(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0x1F2D9CBE337F9DB2(iLocal_332, unk_0xFC1458A37D98B502(), -0,1878f, 3,0635f, 0,68f, 1);
				unk_0xAA7DE567B3D55DDB(iLocal_332, unk_0xFC1458A37D98B502(), -0,0129f, 0,0927f, 0,3008f, 1);
				unk_0xE43C573FE3C5D758(iLocal_332, 35f);
				unk_0x7E4FCDC8BAD0CF6D(iLocal_332, "HAND_SHAKE", 0,1f);
				unk_0x7849794435F39D49(iLocal_332, true);
				unk_0x3458550DF8E9B453(true, 0, 3000, 1, 0, 0);
			}
			iLocal_331 = 3;
			break;
		
		case 3:
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (!unk_0x8EA3C8E091EA5BA4(iLocal_333))
				{
					iLocal_333 = unk_0x5AC38B4D80D4E352(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0x1F2D9CBE337F9DB2(iLocal_333, unk_0xFC1458A37D98B502(), -1,0346f, 2,9183f, 0,68f, 1);
				unk_0xAA7DE567B3D55DDB(iLocal_333, unk_0xFC1458A37D98B502(), -0,0574f, 0,1074f, 0,3008f, 1);
				unk_0xE43C573FE3C5D758(iLocal_333, 35f);
				unk_0x7E4FCDC8BAD0CF6D(iLocal_333, "HAND_SHAKE", 0,1f);
				unk_0xF10DA1539629CC3F(iLocal_333, iLocal_332, 6000, 1, 1);
				unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 71, 1);
				unk_0xD0A6028E561242DA(unk_0xFC1458A37D98B502(), 0, -1, 0);
				unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 200, 1);
			}
			iLocal_331 = 4;
			break;
		
		case 4:
			if (!unk_0xCED06F4C77332FC6(iLocal_333))
			{
				iLocal_331 = 5;
			}
			else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "oddjobs@shop_robbery@rob_till", "loop", 3))
				{
					fVar0 = unk_0x7A70772AE40E3821(unk_0xFC1458A37D98B502(), "oddjobs@shop_robbery@rob_till", "loop");
					if ((fVar0 > 0,374f && fVar0 <= 0,484f) || (fVar0 > 0,824f && fVar0 <= 0,92f))
					{
						if (!iLocal_334)
						{
							iVar5 = system::round(((IntToFloat(iLocal_127) * 0,75f) / 4f));
							iVar6 = system::round(((IntToFloat(iLocal_128) * 0,75f) / 4f));
							iVar1 = unk_0x63A6486593EC7EC3(iVar5, iVar6 + 1);
							iVar1 = func_264(iVar1, 1);
							if (iVar1 > (Global_262145.f_166 / 4))
							{
								iVar1 = (Global_262145.f_166 / 4);
							}
							if (func_263(unk_0x9EB17624F44A8DA4()) && func_261(func_262(unk_0x9EB17624F44A8DA4())) < 1f)
							{
								if (Global_262145.f_4226 > 1f)
								{
									Global_262145.f_4226 = 1f;
								}
								iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_4226));
							}
							if (!func_143(unk_0x9EB17624F44A8DA4()) && func_93(unk_0x9EB17624F44A8DA4()) != 154)
							{
								func_216(&iVar1, 1);
							}
							if (iVar1 > 0)
							{
								if (func_215())
								{
									func_206(1734805203, iVar1, &uVar7, 0, 0, 0);
								}
								else
								{
									func_202(iVar1, 1, 1, 1092616192);
									unk_0x168B1BAE4C89D70D(iVar1);
								}
							}
							Global_2512808.f_5429 = (Global_2512808.f_5429 + iVar1);
							iLocal_330 = (iLocal_330 + iVar1);
							func_190(1, iLocal_330);
							unk_0x4AFBCBFDE748D4E0(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
							iLocal_334 = 1;
						}
					}
					else if (iLocal_334)
					{
						iLocal_334 = 0;
					}
				}
				unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 71, 1);
				unk_0xD0A6028E561242DA(unk_0xFC1458A37D98B502(), 0, -1, 0);
				unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 200, 1);
			}
			break;
		
		case 5:
			if (iLocal_335 != joaat("weapon_unarmed") && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), iLocal_335, true);
			}
			unk_0xD0A6028E561242DA(unk_0xFC1458A37D98B502(), 1, -1, 0);
			unk_0xBB9A3C553EECB180(0f);
			unk_0x7C9705890EF6612E(0f, 1065353216);
			if (unk_0x8EA3C8E091EA5BA4(iLocal_332))
			{
				unk_0x02934BABFD4CD384(iLocal_332, 0);
			}
			if (unk_0x8EA3C8E091EA5BA4(iLocal_333))
			{
				unk_0x02934BABFD4CD384(iLocal_333, 0);
			}
			unk_0x3458550DF8E9B453(false, 0, 3000, 1, 0, 0);
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			Global_2512808.f_5429.f_2 = 1;
			Global_2512808.f_5429.f_5 = 1;
			if (func_186(1))
			{
				func_177(4);
			}
			iLocal_331 = 7;
			break;
		
		case 6:
			unk_0x7849794435F39D49(iLocal_333, false);
			unk_0x3458550DF8E9B453(false, 0, 3000, 1, 0, 0);
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
			}
			iLocal_331 = 5;
			break;
	}
}

void func_302(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0xC488
{
	int iVar0;
	
	if (unk_0x8F38E94BBF3404CD(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x1E06D00B67177A18())
	{
		if (!*iParam0 == -1)
		{
			func_303(iParam0);
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

void func_303(var uParam0)//Position - 0xC5B3
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_304(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/])
		{
			Global_36565[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_304(int iParam0)//Position - 0xC60A
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

int func_305(int iParam0)//Position - 0xC645
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xC80D31E4B587871C(Global_2323, 14))
			{
				if (Global_14452 == 1)
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
		else
		{
			return 0;
		}
	}
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_14452 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_14453.f_1 > 3)
	{
		if (Global_14452 == 1)
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

bool func_306()//Position - 0xC6C9
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

int func_307(vector3 vParam0)//Position - 0xC6DE
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_308(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, var uParam5, int iParam6, bool bParam7, bool bParam8)//Position - 0xC708
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	char* sVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	
	if (((uParam5->f_4 >= 1000 || (uParam5->f_4 + uParam0->f_51) >= 1000) || func_427(&(uParam5->f_5))) || (func_146(&(Global_2512808.f_10)) && !func_426(Global_2512808.f_10, 300000, 0)))
	{
		if (func_146(&(Global_2512808.f_10)))
		{
			if ((unk_0x53C562FD2B9E3AB0() % 2500) < 50)
			{
			}
		}
		if (!uParam0->f_34)
		{
			uParam0->f_34 = 1;
			if (!func_146(&(Global_2512808.f_10)))
			{
				func_18(&(Global_2512808.f_10), 0, 0);
			}
		}
	}
	else
	{
		if (func_146(&(Global_2512808.f_10)))
		{
			func_13(&(Global_2512808.f_10));
		}
		if (uParam0->f_34)
		{
			uParam0->f_34 = 0;
		}
	}
	if ((unk_0x53C562FD2B9E3AB0() % 5000) < 50)
	{
	}
	if ((((((uParam5->f_3 < 2 && func_44(unk_0x9EB17624F44A8DA4(), 1, 1)) && unk_0xC80D31E4B587871C(uParam0->f_52, 26)) && !func_425(-1082130432)) && unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) < 1) && !bParam7) && !func_430(*uParam5))
	{
		iVar4 = 0;
		if ((unk_0x0F30C1F1717A6437() && uParam0->f_54 != 0) && !unk_0x9A4EAADB45DA07DB())
		{
			if (!bParam8)
			{
				uParam0->f_54 = 0;
				func_424(uParam0, &(iParam6->f_3));
			}
		}
		switch (uParam0->f_54)
		{
			case 0:
				if ((((!unk_0x0F30C1F1717A6437() && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) && !unk_0xA57E3BD5C64527C7(unk_0xFC1458A37D98B502())) && (!func_142(unk_0x9EB17624F44A8DA4()) || func_93(unk_0x9EB17624F44A8DA4()) == 154)) && !func_423(unk_0x9EB17624F44A8DA4(), 21))
				{
					if (func_422(*uParam0, &uParam1, vParam4.z, &(uParam0->f_16[0 /*3*/]), &(uParam0->f_16[1 /*3*/]), &(uParam0->f_23), &(uParam0->f_26)))
					{
						vVar2 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
						vVar3 = { unk_0xB3328BA8976B416C(unk_0x47BA76CE3C825A08(*uParam5), 1) };
						if ((unk_0xBE3C4023003180FC(vVar2, uParam0->f_23, 1) < 5f && unk_0xE97272C977DEADD3((vVar2.z - vVar3.z)) < 0,25f) || func_468(1))
						{
							if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_26, 0, 1, 0) || func_468(1))
							{
								if (unk_0x151F9FFE4C5F866B(unk_0xFC1458A37D98B502(), uParam0->f_23, 135f) || func_468(1))
								{
									if (uParam0->f_34)
									{
										if (func_468(1))
										{
											func_444();
										}
										if (((!func_150("SHR_HOLDUP_1") && !func_150("SHR_MENU")) && !func_421()) && func_420())
										{
											func_151("SHR_SOLD_OUT", -1);
											uParam0->f_54 = 10;
										}
									}
									else
									{
										if (func_468(1))
										{
										}
										uParam0->f_14 = -1;
										func_302(&(uParam0->f_14), 4, "SHR_MENU", 0, 0, 0, 0);
										uParam0->f_54 = 2;
									}
								}
								else if ((unk_0x53C562FD2B9E3AB0() % 8000) < 50)
								{
								}
							}
							else
							{
								if ((unk_0x53C562FD2B9E3AB0() % 8000) < 50)
								{
								}
								unk_0xCABB2FDE746B45D3(vVar2, uParam0->f_16[0 /*3*/], 0, 0, 255, 255);
								unk_0xCABB2FDE746B45D3(vVar2, uParam0->f_16[1 /*3*/], 0, 0, 255, 255);
							}
						}
						else
						{
							if ((unk_0x53C562FD2B9E3AB0() % 8000) < 50)
							{
							}
							unk_0xCABB2FDE746B45D3(vVar2, uParam0->f_23, 0, 0, 255, 255);
						}
					}
				}
				else
				{
					if (func_150("SHR_MENU"))
					{
						unk_0x3E80C2F7BC665259(1);
					}
					if (func_38(unk_0x9EB17624F44A8DA4()))
					{
						if (!unk_0xC80D31E4B587871C(uParam0->f_53, 4))
						{
							func_151("SHR_FM_CRIT", -1);
							unk_0x0229D557C8A77774(3, 21, 200, 0, 0);
							unk_0x872F1C1F8587CCC7(&(uParam0->f_53), 4);
						}
					}
					if ((unk_0x53C562FD2B9E3AB0() % 8000) < 50)
					{
					}
				}
				break;
			
			case 2:
				vVar2 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
				vVar3 = { unk_0xB3328BA8976B416C(unk_0x47BA76CE3C825A08(*uParam5), 1) };
				if ((!unk_0x151F9FFE4C5F866B(unk_0xFC1458A37D98B502(), uParam0->f_23, 135f) || unk_0xE97272C977DEADD3((vVar2.z - vVar3.z)) >= 0,25f) && !func_468(1))
				{
					if (func_150("SHR_MENU"))
					{
						unk_0x3E80C2F7BC665259(1);
					}
					func_303(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (unk_0x0F30C1F1717A6437())
				{
					if (func_150("SHR_MENU"))
					{
						unk_0x3E80C2F7BC665259(1);
					}
					func_303(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (func_171(0) || func_170())
				{
					if (func_150("SHR_MENU"))
					{
						unk_0x3E80C2F7BC665259(1);
					}
					func_303(&(uParam0->f_14));
					func_165(1, *uParam0);
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_52), 26);
					uParam0->f_54 = 0;
				}
				if (!unk_0xA57E3BD5C64527C7(unk_0xFC1458A37D98B502()))
				{
					if (func_419(uParam0->f_14, 1) || func_468(1))
					{
						if (func_468(1))
						{
							func_444();
						}
						if (func_150("SHR_MENU"))
						{
							unk_0x3E80C2F7BC665259(1);
						}
						func_417(&(uParam0->f_44));
						func_303(&(uParam0->f_14));
						func_411(0, 0);
						unk_0x872F1C1F8587CCC7(&(uParam0->f_53), 7);
						func_461(unk_0x9EB17624F44A8DA4(), 0, 66048);
						unk_0x1011767350BE182B();
						if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_430(*uParam5))
						{
							unk_0xAC838A977FB6E6BC(unk_0xFC1458A37D98B502(), unk_0x47BA76CE3C825A08(*uParam5), 0);
							unk_0x0EE72DB1CD8A3B86(&(iParam6->f_1), 1);
						}
						func_410();
						uParam0->f_54 = 3;
					}
				}
				break;
			
			case 3:
				if (!bParam8)
				{
					if (!unk_0x8EA3C8E091EA5BA4(uParam0->f_1))
					{
						uParam0->f_1 = unk_0x5AC38B4D80D4E352(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
						func_409(*uParam0, &(uParam0->f_2), &(uParam0->f_5), &fVar6);
						unk_0xA215B2F25E63FA31(uParam0->f_1, uParam0->f_2);
						unk_0xBEBD5CAE3510CD2A(uParam0->f_1, uParam0->f_5, 2);
						unk_0xE43C573FE3C5D758(uParam0->f_1, fVar6);
						unk_0x7E4FCDC8BAD0CF6D(uParam0->f_1, "HAND_SHAKE", 0,1f);
						unk_0x7849794435F39D49(uParam0->f_1, true);
						unk_0x3458550DF8E9B453(true, 0, 3000, 1, 0, 0);
					}
					uParam0->f_37 = func_432(*uParam0);
				}
				if (unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
				{
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
				}
				uParam0->f_13 = 6;
				func_408(0);
				func_407(1, 1, 0, 0, 0);
				func_406(1, 2, 1, 1, 1);
				func_405("SNK_ITEM");
				if (!bParam8)
				{
					func_403(1, uParam0->f_37, uParam0->f_37);
				}
				iVar7 = 0;
				while (iVar7 < uParam0->f_13)
				{
					func_398(iVar7, func_402(iVar7), 0, 1, 0, 0);
					if (uParam5->f_5[iVar7] >= 10 || ((func_146(&(Global_2512808.f_12[iVar7 /*2*/])) && !func_426(Global_2512808.f_12[iVar7 /*2*/], 150000, 0)) && *uParam0 == Global_2512808.f_27))
					{
						func_398(iVar7, "", 1, 1, 0, 0);
						func_397(15, 0);
						if (func_146(&(Global_2512808.f_12[iVar7 /*2*/])) && !func_426(Global_2512808.f_12[iVar7 /*2*/], 150000, 0))
						{
							uParam5->f_5[iVar7] = 10;
						}
						if (!func_146(&(Global_2512808.f_12[iVar7 /*2*/])))
						{
							Global_2512808.f_27 = *uParam0;
							func_18(&(Global_2512808.f_12[iVar7 /*2*/]), 0, 0);
						}
					}
					else if (func_394(iVar7))
					{
						func_398(iVar7, "SNK_FULL", 0, 1, 0, 0);
					}
					else if (!bParam8)
					{
						func_398(iVar7, "ITEM_COST", 1, 1, 0, 0);
						func_390(func_393(uParam0, iVar7), 0);
					}
					else
					{
						func_398(iVar7, "SNK_FREE", 0, 1, 0, 0);
					}
					iVar7++;
				}
				func_389(0);
				func_388(uParam0->f_12, 1, 1);
				if (uParam0->f_35)
				{
					if (!bParam8)
					{
						func_387("SNK_BOUGHT", 0, 0);
					}
					else
					{
						func_387("SNK_STORED", 0, 0);
					}
				}
				else if (uParam5->f_5[uParam0->f_12] >= 10)
				{
					func_387("SNK_SOUT", 0, 0);
				}
				else
				{
					func_387(func_386(uParam0->f_12), 0, 0);
				}
				func_385(201, "ITEM_SELECT", -1, 0);
				func_385(202, "ITEM_BACK", -1, 0);
				if (!bParam8)
				{
					func_385(203, "SNK_LIFT", -1, 0);
					func_356(1, *uParam0, 1, 0, 1, -1082130432, 0, 0);
				}
				uParam0->f_54 = 4;
				break;
			
			case 4:
				if (unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
				{
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
				}
				if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -875674219) == 7)
				{
					if (!unk_0xC80D31E4B587871C(iParam6->f_1, 1))
					{
						if (!bParam8)
						{
							func_461(unk_0x9EB17624F44A8DA4(), 0, 98816);
						}
						else
						{
							func_461(unk_0x9EB17624F44A8DA4(), 0, 256);
						}
						unk_0x872F1C1F8587CCC7(&(iParam6->f_1), 1);
					}
				}
				iVar4 = 0;
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
						func_352(0, 0, 0, 1);
						func_351(0, -1, 1);
						if (func_350())
						{
							if (Global_4265875 != uParam0->f_12)
							{
								unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								uParam0->f_12 = Global_4265875;
								func_388(uParam0->f_12, 1, 1);
								uParam0->f_27 = 0;
								uParam0->f_29 = 0;
								uParam0->f_30 = 0;
								uParam0->f_32 = 0;
								sVar5 = func_386(uParam0->f_12);
								if (unk_0xA1800C71952C596F(sVar5))
								{
									func_387(sVar5, 0, 0);
								}
							}
							else
							{
								iVar4 = 1;
							}
						}
					}
				}
				if (!bParam8)
				{
					func_356(1, *uParam0, 1, 0, 1, -1082130432, 0, 0);
				}
				func_340(uParam0, &(uParam5->f_5), bParam8);
				if ((uParam5->f_2 > 2 && unk_0xC80D31E4B587871C(uParam5->f_1, 0)) && unk_0xC80D31E4B587871C(iParam6->f_1, 0))
				{
					unk_0x0EE72DB1CD8A3B86(&(iParam6->f_1), 0);
				}
				if ((unk_0xE8C126B7ADBB9D63(2, 201) || iVar4 == 1) || uParam0->f_47)
				{
					if (!uParam0->f_47)
					{
						uParam0->f_27 = 1;
						uParam0->f_29 = 0;
						uParam0->f_30 = 0;
						uParam0->f_32 = 0;
						func_417(&(uParam0->f_44));
					}
					if ((uParam0->f_28 && uParam0->f_31) && uParam0->f_33)
					{
						if (func_215())
						{
							uParam0->f_47 = 1;
							uParam0->f_48 = 0;
							uParam0->f_49 = -1;
							iVar0 = 0;
							if (!bParam8)
							{
								iVar0 = func_393(uParam0, uParam0->f_12);
							}
							func_328(uParam0, -1303831698, 537254313, iVar0);
							uParam0->f_54 = 5;
						}
						else
						{
							uParam0->f_35 = 1;
							unk_0x4AFBCBFDE748D4E0(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							uParam5->f_5[uParam0->f_12]++;
							uParam0->f_54 = 6;
						}
					}
					else
					{
						uParam0->f_35 = 0;
						if (!uParam0->f_28 && !uParam0->f_36)
						{
							iVar0 = 0;
							if (!bParam8)
							{
								iVar0 = func_393(uParam0, uParam0->f_12);
							}
							func_327(unk_0x8B948C59217A295D(func_386(uParam0->f_12)), iVar0, 0);
							func_320(0, 31, 3);
							uParam0->f_54 = 11;
						}
						unk_0x4AFBCBFDE748D4E0(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
					if (!uParam0->f_33)
					{
						uParam0->f_54 = 3;
					}
				}
				if (!bParam8)
				{
					if (unk_0xE8C126B7ADBB9D63(2, 203) && !uParam0->f_47)
					{
						uParam0->f_27 = 1;
						if (uParam5->f_5[uParam0->f_12] < 10)
						{
							uParam0->f_33 = 1;
						}
						else
						{
							uParam0->f_33 = 0;
						}
						func_417(&(uParam0->f_44));
						if (!uParam0->f_33)
						{
							unk_0x4AFBCBFDE748D4E0(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						}
						else if (!uParam0->f_31)
						{
							unk_0x4AFBCBFDE748D4E0(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						}
						else
						{
							unk_0x12C9D41D52A560D6(unk_0xFC1458A37D98B502(), func_161(), func_319(), 8f, -8f, -1, 1048576, 0, 0, 0, 0);
							uParam0->f_54 = 8;
							uParam0->f_15 = unk_0x53C562FD2B9E3AB0();
							unk_0x4AFBCBFDE748D4E0(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							if (!bParam8)
							{
								func_424(uParam0, &(iParam6->f_3));
							}
						}
					}
				}
				if (unk_0xE8C126B7ADBB9D63(2, 202) || unk_0x58F436C557A0FD7A(2, 238))
				{
					if (func_468(1))
					{
						func_444();
					}
					uParam0->f_54 = 9;
					uParam0->f_15 = unk_0x53C562FD2B9E3AB0();
					if (!bParam8)
					{
						unk_0x4AFBCBFDE748D4E0(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						func_424(uParam0, &(iParam6->f_3));
					}
					else
					{
						unk_0x4AFBCBFDE748D4E0(-1, "BACK", "HUD_FREEMODE_SOUNDSET", 1);
						Global_2456858 = 1;
					}
				}
				if (uParam0->f_34)
				{
					uParam0->f_54 = 10;
					uParam0->f_15 = unk_0x53C562FD2B9E3AB0();
					if (!bParam8)
					{
						func_424(uParam0, &(iParam6->f_3));
					}
					func_151("SHR_SOLD_OUT", -1);
				}
				iVar8 = 0;
				while (iVar8 < uParam0->f_13)
				{
					if (func_146(&(Global_2512808.f_12[iVar8 /*2*/])) && func_426(Global_2512808.f_12[iVar8 /*2*/], 150000, 0))
					{
						func_13(&(Global_2512808.f_12[iVar8 /*2*/]));
						uParam5->f_5[iVar8] = 0;
						uParam0->f_54 = 3;
					}
					iVar8++;
				}
				break;
			
			case 5:
				iVar0 = 0;
				if (!bParam8)
				{
					func_356(1, *uParam0, 1, 0, 1, -1082130432, 0, 0);
					iVar0 = func_393(uParam0, uParam0->f_12);
				}
				if (func_328(uParam0, -1303831698, 537254313, iVar0))
				{
				}
				else
				{
					switch (uParam0->f_49)
					{
						case 0:
							uParam0->f_35 = 0;
							if (!uParam0->f_28 && !uParam0->f_36)
							{
								if (!bParam8)
								{
									iVar0 = func_393(uParam0, uParam0->f_12);
								}
								func_327(unk_0x8B948C59217A295D(func_386(uParam0->f_12)), iVar0, 0);
								func_320(0, 31, 3);
								func_318();
								func_317();
								uParam0->f_54 = 11;
							}
							else
							{
								if (func_468(1))
								{
									func_444();
								}
								uParam0->f_54 = 9;
								uParam0->f_15 = unk_0x53C562FD2B9E3AB0();
								unk_0x4AFBCBFDE748D4E0(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
								if (!bParam8)
								{
									func_424(uParam0, &(iParam6->f_3));
								}
							}
							break;
						
						case 2:
							uParam0->f_35 = 1;
							unk_0x4AFBCBFDE748D4E0(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							uParam5->f_5[uParam0->f_12]++;
							uParam0->f_54 = 6;
							break;
						
						default:
							break;
						}
				}
				break;
			
			case 6:
				if (!bParam8)
				{
					func_356(1, *uParam0, 1, 0, 1, -1082130432, 0, 0);
				}
				if (func_215())
				{
					unk_0x39FC927F4B6458C0(func_315(func_316()));
				}
				if (bParam8)
				{
					if (!unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_101, 6))
					{
						unk_0xAC9322A06C6CE181(1, uParam0->f_12, 0, 1);
						unk_0x872F1C1F8587CCC7(&(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_101), 6);
					}
					iVar1 = 0;
					switch (uParam0->f_12)
					{
						case 3:
							func_111(1272, 1, -1);
							func_110(16, 1, -1, 1);
							break;
						
						case 1:
							func_111(1273, 1, -1);
							func_110(15, 1, -1, 1);
							break;
						
						case 2:
							func_110(14, 1, -1, 1);
							func_111(1274, 1, -1);
							break;
						
						case 4:
							uParam0->f_55 = 20;
							if (func_130(1094, -1, 0) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_130(1094, -1, 0));
							}
							func_111(1094, uParam0->f_55, -1);
							break;
						
						case 0:
							func_111(62, 1, -1);
							break;
						
						case 5:
							func_111(63, 1, -1);
							break;
					}
				}
				else
				{
					switch (uParam0->f_12)
					{
						case 3:
							if (func_314(unk_0x9EB17624F44A8DA4(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_393(uParam0, uParam0->f_12);
							}
							func_111(1272, 1, -1);
							func_110(16, 1, -1, 1);
							unk_0xA30AD54D149568D2(iVar1, unk_0x8B948C59217A295D("SNK_ITEM1"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						
						case 1:
							if (func_314(unk_0x9EB17624F44A8DA4(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_393(uParam0, uParam0->f_12);
							}
							func_111(1273, 1, -1);
							func_110(15, 1, -1, 1);
							unk_0xA30AD54D149568D2(iVar1, unk_0x8B948C59217A295D("SNK_ITEM2"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						
						case 2:
							if (func_314(unk_0x9EB17624F44A8DA4(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_393(uParam0, uParam0->f_12);
							}
							func_110(14, 1, -1, 1);
							func_111(1274, 1, -1);
							unk_0xA30AD54D149568D2(iVar1, unk_0x8B948C59217A295D("SNK_ITEM3"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						
						case 4:
							if (func_314(unk_0x9EB17624F44A8DA4(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_393(uParam0, uParam0->f_12);
							}
							uParam0->f_55 = 20;
							if (func_130(1094, -1, 0) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_130(1094, -1, 0));
							}
							func_111(1094, uParam0->f_55, -1);
							unk_0xA30AD54D149568D2(iVar1, unk_0x8B948C59217A295D("SNK_ITEM4"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						
						case 0:
							if (func_314(unk_0x9EB17624F44A8DA4(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_393(uParam0, uParam0->f_12);
							}
							func_111(62, 1, -1);
							unk_0xA30AD54D149568D2(iVar1, unk_0x8B948C59217A295D("SNK_ITEM5"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						
						case 5:
							if (func_314(unk_0x9EB17624F44A8DA4(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_393(uParam0, uParam0->f_12);
							}
							func_111(63, 1, -1);
							unk_0xA30AD54D149568D2(iVar1, unk_0x8B948C59217A295D("SNK_ITEM6"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						}
				}
				if (func_215())
				{
					func_209(func_316());
				}
				func_313(-iVar1, 0);
				uParam0->f_51 = (uParam0->f_51 + iVar1);
				if (!unk_0xC80D31E4B587871C(*iParam6, 30))
				{
					unk_0x872F1C1F8587CCC7(iParam6, 30);
				}
				if (!unk_0xC80D31E4B587871C(iParam6->f_1, 0))
				{
					unk_0x872F1C1F8587CCC7(&(iParam6->f_1), 0);
					iParam6->f_2 = uParam0->f_12;
				}
				if (uParam0->f_34 || uParam0->f_51 >= 1000)
				{
					uParam0->f_54 = 10;
					if (!bParam8)
					{
						func_424(uParam0, &(iParam6->f_3));
					}
					func_151("SHR_SOLD_OUT", -1);
				}
				else if (uParam5->f_5[uParam0->f_12] >= 10 || func_394(uParam0->f_12))
				{
					uParam0->f_54 = 3;
				}
				else
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 8:
				func_196(1);
				switch (uParam0->f_12)
				{
					case 3:
						func_311(0, 1f, 3);
						func_111(1272, 1, -1);
						func_110(13, 1, -1, 1);
						break;
					
					case 1:
						func_311(1, 1f, 3);
						func_111(1273, 1, -1);
						func_110(13, 1, -1, 1);
						break;
					
					case 2:
						func_311(2, 1f, 3);
						func_111(1274, 1, -1);
						func_110(13, 1, -1, 1);
						break;
					
					case 4:
						uParam0->f_55 = 20;
						if (func_130(1094, -1, 0) + 20 > 20)
						{
							uParam0->f_55 = (20 - func_130(1094, -1, 0));
						}
						func_311(5, system::to_float(uParam0->f_55), 3);
						func_111(1094, uParam0->f_55, -1);
						break;
					
					case 0:
						func_311(3, 1f, 3);
						func_111(62, 1, -1);
						break;
					
					case 5:
						func_311(4, 1f, 3);
						func_111(63, 1, -1);
						break;
				}
				if (!bParam8)
				{
					func_461(unk_0x9EB17624F44A8DA4(), 1, 0);
				}
				if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) < 1 && !func_309(unk_0x9EB17624F44A8DA4()))
				{
					unk_0x0849193C1EA73C64(unk_0x9EB17624F44A8DA4(), 37, unk_0xAF22430031BD1E97(1));
					unk_0x872F1C1F8587CCC7(iParam6, 25);
					if (!unk_0xC80D31E4B587871C(*iParam6, 1))
					{
						unk_0x872F1C1F8587CCC7(iParam6, 2);
					}
				}
				if (!unk_0xC80D31E4B587871C(iParam6->f_1, 2))
				{
					unk_0x872F1C1F8587CCC7(&(iParam6->f_1), 2);
				}
				uParam0->f_54 = 12;
				break;
			
			case 11:
				if (!Global_92885.f_1377 && !unk_0x9A4EAADB45DA07DB())
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 10:
				if (!bParam8)
				{
					func_461(unk_0x9EB17624F44A8DA4(), 1, 0);
				}
				if ((unk_0x53C562FD2B9E3AB0() - uParam0->f_15) > 1000)
				{
					uParam0->f_54 = 12;
				}
				else
				{
					unk_0x01B48CB2F72AE113(2, 203);
					unk_0x01B48CB2F72AE113(2, 202);
					unk_0x01B48CB2F72AE113(2, 188);
					unk_0x01B48CB2F72AE113(2, 187);
					unk_0x01B48CB2F72AE113(2, 189);
					unk_0x01B48CB2F72AE113(2, 190);
				}
				break;
			
			case 9:
				if ((unk_0x53C562FD2B9E3AB0() - uParam0->f_15) > 1000)
				{
					uParam0->f_54 = 0;
				}
				else
				{
					unk_0x01B48CB2F72AE113(2, 203);
					unk_0x01B48CB2F72AE113(2, 202);
					unk_0x01B48CB2F72AE113(2, 188);
					unk_0x01B48CB2F72AE113(2, 187);
					unk_0x01B48CB2F72AE113(2, 189);
					unk_0x01B48CB2F72AE113(2, 190);
				}
				break;
			
			case 12:
				if (unk_0xC80D31E4B587871C(uParam5->f_1, 3))
				{
					if (unk_0xC80D31E4B587871C(iParam6->f_1, 2))
					{
						unk_0x0EE72DB1CD8A3B86(&(iParam6->f_1), 2);
					}
					if (unk_0xC80D31E4B587871C(iParam6->f_1, 3))
					{
						unk_0x0EE72DB1CD8A3B86(&(iParam6->f_1), 3);
					}
				}
				break;
		}
	}
	else
	{
		if ((unk_0x53C562FD2B9E3AB0() % 8000) < 50)
		{
		}
		if (unk_0xC80D31E4B587871C(uParam5->f_1, 3))
		{
			if (unk_0xC80D31E4B587871C(iParam6->f_1, 2))
			{
				unk_0x0EE72DB1CD8A3B86(&(iParam6->f_1), 2);
			}
			if (unk_0xC80D31E4B587871C(iParam6->f_1, 3))
			{
				unk_0x0EE72DB1CD8A3B86(&(iParam6->f_1), 3);
			}
		}
		if ((uParam0->f_54 != 12 && unk_0xC80D31E4B587871C(uParam0->f_52, 26)) && !unk_0x9A4EAADB45DA07DB())
		{
			if ((((uParam0->f_54 == 4 || uParam0->f_54 == 3) || uParam0->f_54 == 6) || uParam0->f_54 == 11) || uParam0->f_54 == 5)
			{
				func_424(uParam0, &(iParam6->f_3));
			}
			uParam0->f_54 = 12;
		}
		if (uParam0->f_14 != -1)
		{
			func_303(&(uParam0->f_14));
		}
	}
}

int func_309(int iParam0)//Position - 0xDBBF
{
	if ((func_38(iParam0) || func_310(iParam0)) && func_261(func_262(iParam0)) == 0f)
	{
		return 1;
	}
	return 0;
}

int func_310(int iParam0)//Position - 0xDBF2
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 7);
	}
	return 0;
}

void func_311(int iParam0, float fParam1, int iParam2)//Position - 0xDC18
{
	struct<8> Var0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	
	if (fParam1 > 0f)
	{
		if (func_312(iParam0, &Var0))
		{
			vVar1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
			func_196(1);
			iVar3 = -1;
			iVar2 = 0;
			while (iVar2 < 20)
			{
				if (Global_2436181.f_1173[iVar2 /*30*/].f_6 == 0 || Global_2436181.f_1173[iVar2 /*30*/].f_6 == 7)
				{
					iVar3 = iVar2;
					iVar2 = 20;
				}
				iVar2++;
			}
			if (iVar3 != -1)
			{
				Global_2436181.f_1173[iVar3 /*30*/] = { vVar1 };
				Global_2436181.f_1173[iVar3 /*30*/].f_6 = 1;
				Global_2436181.f_1173[iVar3 /*30*/].f_4 = func_195(Global_2436181.f_1173[iVar3 /*30*/], &Global_1312317, &Global_1312318);
				Global_2436181.f_1173[iVar3 /*30*/].f_5 = fParam1;
				Global_2436181.f_1173[iVar3 /*30*/].f_7 = unk_0xD1952A425B78FFC0();
				Global_2436181.f_1173[iVar3 /*30*/].f_8 = iParam2;
				Global_2436181.f_1173[iVar3 /*30*/].f_14 = { Var0 };
				Global_2436181.f_1173[iVar3 /*30*/].f_9 = func_194();
				Global_2436181.f_1173[iVar3 /*30*/].f_10 = func_193();
			}
		}
	}
}

int func_312(int iParam0, char* sParam1)//Position - 0xDD3A
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "PU_REWARD_S1", 32);
			return 1;
		
		case 1:
			StringCopy(sParam1, "PU_REWARD_S2", 32);
			return 1;
		
		case 2:
			StringCopy(sParam1, "PU_REWARD_S3", 32);
			return 1;
		
		case 3:
			StringCopy(sParam1, "PU_REWARD_D1", 32);
			return 1;
		
		case 4:
			StringCopy(sParam1, "PU_REWARD_D2", 32);
			return 1;
		
		case 5:
			StringCopy(sParam1, "PU_REWARD_11", 32);
			return 1;
		
		case 6:
			StringCopy(sParam1, "PU_REWARD_PC", 32);
			return 1;
		
		default:
	}
	return 0;
}

void func_313(int iParam0, int iParam1)//Position - 0xDDC8
{
	func_204(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_205(iParam0, 0);
	}
}

int func_314(int iParam0, bool bParam1, bool bParam2)//Position - 0xDDE6
{
	if (iParam0 == func_183())
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_315(int iParam0)//Position - 0xDE50
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/];
	}
	return -1;
}

int func_316()//Position - 0xDE74
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_315(iVar0) != 2147483647)
		{
			if (func_212(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_317()//Position - 0xDEAE
{
	Global_2447174.f_671.f_32 = 1;
}

void func_318()//Position - 0xDEC0
{
	Global_2447174.f_671.f_28 = 1;
	Global_2447174.f_671.f_32 = 0;
	Global_2447174.f_671.f_31 = unk_0x8B948C59217A295D(unk_0x436287B7DB306165());
	func_13(&(Global_2447174.f_671.f_29));
}

char* func_319()//Position - 0xDEFA
{
	if (func_12())
	{
		return "Shoplift_Mid";
	}
	return "Shoplift_Low";
}

void func_320(int iParam0, int iParam1, int iParam2)//Position - 0xDF14
{
	int iVar0;
	
	if (!unk_0xC13991556C1A3593())
	{
		return;
	}
	if (unk_0x3A711520F83BAE98() && func_324(unk_0x9EB17624F44A8DA4(), 1))
	{
		return;
	}
	if (unk_0xF2B58F79D29425B4(2, 199) || unk_0x5A632962B08A1872(2, 199))
	{
		return;
	}
	if (unk_0x8B7838D25C063186() != 0)
	{
		return;
	}
	if (unk_0x0F30C1F1717A6437())
	{
		return;
	}
	if (unk_0x04D7390E1D7464B7())
	{
		return;
	}
	if (unk_0x08D525BE62A22AE0())
	{
		return;
	}
	if (func_323())
	{
		return;
	}
	if (!func_321())
	{
		return;
	}
	if (unk_0x3A711520F83BAE98() || iParam0)
	{
		if (!Global_92885.f_1377 && !unk_0x9A4EAADB45DA07DB())
		{
			iVar0 = 18;
			ui::_set_warning_message_2("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1, 0);
			Global_2457880 = iParam1;
			Global_92885.f_1377 = 1;
			Global_92885.f_1378 = iParam2;
		}
	}
}

int func_321()//Position - 0xDFEE
{
	if (func_322())
	{
		return 0;
	}
	if (unk_0x73EC29164C21897D() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_322()//Position - 0xE00E
{
	return Global_2457327;
}

bool func_323()//Position - 0xE01A
{
	return Global_2457985;
}

int func_324(int iParam0, bool bParam1)//Position - 0xE026
{
	if (bParam1)
	{
		if (func_325(iParam0))
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

bool func_325(int iParam0)//Position - 0xE052
{
	return func_326(iParam0);
}

bool func_326(int iParam0)//Position - 0xE060
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

void func_327(int iParam0, int iParam1, int iParam2)//Position - 0xE07A
{
	Global_92885.f_1379 = iParam0;
	Global_92885.f_1380 = iParam1;
	Global_92885.f_1381 = iParam2;
}

int func_328(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xE09D
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	char* sVar4;
	
	if (uParam0->f_47)
	{
		switch (uParam0->f_48)
		{
			case 0:
				iVar0 = 0;
				iVar1 = 0;
				iVar2 = iParam3;
				if (unk_0x916D3D5FA17D33A4() > 0)
				{
					if (unk_0x916D3D5FA17D33A4() >= iVar2)
					{
						iVar1 = iVar2;
					}
					else
					{
						iVar1 = (iVar2 - (iVar2 - unk_0x916D3D5FA17D33A4()));
					}
					iVar2 = (iVar2 - iVar1);
				}
				if (iVar2 > 0)
				{
					if (unk_0x3C5A2E3D125A1FB1(-1) > 0)
					{
						if (unk_0x3C5A2E3D125A1FB1(-1) >= iVar2)
						{
							iVar0 = iVar2;
						}
						else
						{
							iVar0 = (iVar2 - (iVar2 - unk_0x3C5A2E3D125A1FB1(-1)));
						}
						iVar2 = (iVar2 - iVar0);
					}
				}
				cVar3 = func_402(uParam0->f_12);
				func_336(&sVar4, cVar3, func_337(uParam0));
				if (func_333(78225582, iParam1, unk_0x8B948C59217A295D(&sVar4), iParam2, 1, iParam3, 1, 8, 0, 3))
				{
					if (func_331())
					{
						unk_0x72A98FC7A21311A4(1);
						unk_0x1A153C1DB3B9D181(-iVar0, -iVar1);
						uParam0->f_48 = 1;
					}
					else
					{
						uParam0->f_48 = 3;
					}
				}
				else
				{
					uParam0->f_48 = 3;
				}
				break;
			
			case 1:
				if (func_330(func_316()))
				{
					if (func_329(func_316()) == 2)
					{
						uParam0->f_48 = 2;
					}
					else
					{
						uParam0->f_48 = 3;
					}
				}
				break;
			
			case 2:
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
				unk_0x72A98FC7A21311A4(0);
				unk_0x553231E7FC3C570D(13);
				uParam0->f_49 = 2;
				return 0;
				break;
			
			case 3:
				func_209(func_316());
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
				unk_0x72A98FC7A21311A4(0);
				unk_0x553231E7FC3C570D(13);
				uParam0->f_49 = 0;
				return 0;
				break;
		}
		return 1;
	}
	uParam0->f_48 = 0;
	uParam0->f_49 = -1;
	return 0;
}

int func_329(int iParam0)//Position - 0xE21A
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_2;
	}
	return 0;
}

int func_330(int iParam0)//Position - 0xE240
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_2 != 1;
	}
	return 0;
}

int func_331()//Position - 0xE268
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_215())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_316();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x02404400A68A3D5B(func_77()) || unk_0xD7D895B4B5395982())
		{
			if (func_332(Global_4261865[iVar2 /*80*/].f_6, Global_4261865[iVar2 /*80*/].f_4, Global_4261865[iVar2 /*80*/].f_1) == 1)
			{
				Global_4262415 = 1;
			}
			return 0;
		}
		if (Global_2457985)
		{
			if (Global_4261865[iVar2 /*80*/].f_6 == 1067618600 || Global_4261865[iVar2 /*80*/].f_6 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_315(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0xC972A21EB39CE12F(iVar3))
		{
			Global_4261865[iVar2 /*80*/].f_74 = 1;
			Global_4261865[iVar2 /*80*/].f_73 = 0;
			Global_4261865[iVar2 /*80*/].f_75 = unk_0x4B64A8D052027742();
			if (bVar0)
			{
				Global_4261865[iVar2 /*80*/].f_69 = 1;
				Global_4261865[iVar2 /*80*/].f_73 = 1;
			}
			Global_4261865[iVar2 /*80*/].f_79 = 0;
			Global_4262402 = 1;
			return 1;
		}
	}
	return 0;
}

int func_332(int iParam0, int iParam1, int iParam2)//Position - 0xE394
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_333(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0xE703
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_215())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x02404400A68A3D5B(func_77()) || unk_0xD7D895B4B5395982())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457985)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_316();
	if (iVar1 == -1)
	{
		if (!func_335(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_334(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		Global_4261865[iVar1 /*80*/].f_1 = Var2.f_2;
		Global_4261865[iVar1 /*80*/].f_76 = Var2;
		Global_4261865[iVar1 /*80*/].f_77 = Var2.f_1;
		if (bVar0 || unk_0x15A46872C5B66D6B(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_334(int iParam0)//Position - 0xE81F
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_335(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0xE8AE
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_215())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x02404400A68A3D5B(func_77()) || unk_0xD7D895B4B5395982())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457985)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4261865[iVar1 /*80*/].f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4261865[iVar1 /*80*/].f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0x4A843C260B34973D())
		{
			unk_0x166C543410DE9A3F();
		}
	}
	if (bVar0 || unk_0x270730F2007CFC17(&iVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_214(iVar3, uParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0);
		return 1;
	}
	return 0;
}

void func_336(char* sParam0, char* sParam1, int iParam2)//Position - 0xE9A4
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

int func_337(var uParam0)//Position - 0xE9C8
{
	if (func_314(unk_0x9EB17624F44A8DA4(), 1, 0) || func_338(unk_0x9EB17624F44A8DA4()))
	{
		return 3;
	}
	else if (uParam0->f_50 >= 10 && uParam0->f_50 <= 14)
	{
		return 0;
	}
	else if (uParam0->f_50 >= 15 && uParam0->f_50 <= 19)
	{
		return 1;
	}
	else
	{
		return 2;
	}
	return -1;
}

int func_338(int iParam0)//Position - 0xEA31
{
	if (iParam0 != func_183())
	{
		if (func_44(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_339(Global_2422736[iParam0 /*420*/].f_324.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_339(int iParam0)//Position - 0xEA78
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

void func_340(var uParam0, var uParam1, bool bParam2)//Position - 0xED3C
{
	char* sVar0;
	
	if (!uParam0->f_29)
	{
	}
	if (func_349(uParam0))
	{
		uParam0->f_27 = 0;
		func_348(&(uParam0->f_44));
		uParam0->f_12 = (uParam0->f_12 - 1);
		if (uParam0->f_12 < 0)
		{
			uParam0->f_12 = (uParam0->f_13 - 1);
		}
		unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_388(uParam0->f_12, 1, 1);
		sVar0 = func_386(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (unk_0xA1800C71952C596F(sVar0))
		{
			func_387(sVar0, 0, 0);
		}
	}
	if (func_345(uParam0))
	{
		uParam0->f_27 = 0;
		func_348(&(uParam0->f_44));
		uParam0->f_12++;
		if (uParam0->f_12 > (uParam0->f_13 - 1))
		{
			uParam0->f_12 = 0;
		}
		unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_388(uParam0->f_12, 1, 1);
		sVar0 = func_386(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (unk_0xA1800C71952C596F(sVar0))
		{
			func_387(sVar0, 0, 0);
		}
	}
	if (!uParam0->f_29)
	{
		if (unk_0x2C94498F5F172591(func_393(uParam0, uParam0->f_12), 0, 1, 0, -1))
		{
			uParam0->f_28 = 1;
		}
		else
		{
			uParam0->f_28 = 0;
			uParam0->f_36 = 1;
		}
		uParam0->f_29 = 1;
	}
	if (!uParam0->f_30)
	{
		uParam0->f_31 = 1;
		if (uParam0->f_12 == 3)
		{
			uParam0->f_31 = func_130(1272, -1, 0) < 30;
		}
		else if (uParam0->f_12 == 1)
		{
			uParam0->f_31 = func_130(1273, -1, 0) < 15;
		}
		else if (uParam0->f_12 == 2)
		{
			uParam0->f_31 = func_130(1274, -1, 0) < 5;
		}
		else if (uParam0->f_12 == 4)
		{
			uParam0->f_31 = func_130(1094, -1, 0) < 20;
		}
		else if (uParam0->f_12 == 0)
		{
			uParam0->f_31 = func_130(62, -1, 0) < 10;
		}
		else if (uParam0->f_12 == 5)
		{
			uParam0->f_31 = func_130(63, -1, 0) < 10;
		}
		uParam0->f_30 = 1;
	}
	if (!uParam0->f_32)
	{
		if ((*uParam1)[uParam0->f_12] < 10)
		{
			uParam0->f_33 = 1;
		}
		else
		{
			uParam0->f_33 = 0;
			func_387("SNK_SOUT", 0, 0);
		}
		uParam0->f_32 = 1;
	}
	if (uParam0->f_27)
	{
		if (func_341(&(uParam0->f_44)) < 3f)
		{
			if (uParam0->f_35)
			{
				if (!bParam2)
				{
					func_387("SNK_BOUGHT", 0, 0);
				}
				else
				{
					func_387("SNK_STORED", 0, 0);
				}
			}
			else if (!uParam0->f_28)
			{
				func_387("SNK_AFFORD", 0, 0);
			}
			else if (!uParam0->f_33)
			{
				func_387("SNK_SOUT", 0, 0);
			}
			else if (!uParam0->f_31)
			{
				if (uParam0->f_12 == 3)
				{
					func_387("SNK_SNK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 1)
				{
					func_387("SNK_SNK2FU", 0, 0);
				}
				else if (uParam0->f_12 == 2)
				{
					func_387("SNK_SNK3FU", 0, 0);
				}
				else if (uParam0->f_12 == 4)
				{
					func_387("SNK_SMOKFU", 0, 0);
				}
				else if (uParam0->f_12 == 0)
				{
					func_387("SNK_DRK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 5)
				{
					func_387("SNK_DRK2FU", 0, 0);
				}
				else
				{
					func_387("SNK_NEEDED", 0, 0);
				}
				unk_0x872F1C1F8587CCC7(&(uParam0->f_53), 26);
			}
		}
		else
		{
			uParam0->f_27 = 0;
			uParam0->f_35 = 0;
			func_348(&(uParam0->f_44));
			sVar0 = func_386(uParam0->f_12);
			if (unk_0xA1800C71952C596F(sVar0))
			{
				func_387(sVar0, 0, 0);
			}
		}
	}
}

float func_341(var uParam0)//Position - 0xF076
{
	if (func_344(uParam0))
	{
		if (func_343(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_342(unk_0xC80D31E4B587871C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_342(bool bParam0)//Position - 0xF0B2
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

bool func_343(var uParam0)//Position - 0xF10A
{
	return unk_0xC80D31E4B587871C(*uParam0, 2);
}

bool func_344(var uParam0)//Position - 0xF11A
{
	return unk_0xC80D31E4B587871C(*uParam0, 1);
}

int func_345(var uParam0)//Position - 0xF12A
{
	float fVar0;
	
	fVar0 = unk_0x869308DF4F5FB0C3(2, 219);
	if ((fVar0 > 0,8f || unk_0xF2B58F79D29425B4(2, 187)) || unk_0xE8C126B7ADBB9D63(2, 242))
	{
		if (!func_344(&(uParam0->f_41)))
		{
			func_347(&(uParam0->f_41));
			return 1;
		}
		else if (func_346(&(uParam0->f_41)) > 0,25f)
		{
			func_417(&(uParam0->f_41));
			return 1;
		}
	}
	else if (func_344(&(uParam0->f_41)))
	{
		func_348(&(uParam0->f_41));
	}
	return 0;
}

float func_346(var uParam0)//Position - 0xF1AF
{
	if (func_344(uParam0))
	{
		if (func_343(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_342(unk_0xC80D31E4B587871C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_347(int iParam0)//Position - 0xF1EE
{
	if (!func_344(iParam0))
	{
		func_417(iParam0);
	}
}

void func_348(var uParam0)//Position - 0xF206
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_349(var uParam0)//Position - 0xF21C
{
	float fVar0;
	
	fVar0 = unk_0x869308DF4F5FB0C3(2, 219);
	if ((fVar0 < -0,8f || unk_0xF2B58F79D29425B4(2, 188)) || unk_0xE8C126B7ADBB9D63(2, 241))
	{
		if (!func_344(&(uParam0->f_38)))
		{
			func_347(&(uParam0->f_38));
			return 1;
		}
		else if (func_346(&(uParam0->f_38)) > 0,25f)
		{
			func_417(&(uParam0->f_38));
			return 1;
		}
	}
	else if (func_344(&(uParam0->f_38)))
	{
		func_348(&(uParam0->f_38));
	}
	return 0;
}

int func_350()//Position - 0xF2A1
{
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (Global_4265875 > -1)
		{
			if (unk_0xE8C126B7ADBB9D63(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_351(int iParam0, int iParam1, bool bParam2)//Position - 0xF2C8
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

void func_352(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xF3A8
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
	func_355();
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
				func_354(0);
			}
			return;
		}
		if (((Global_4265869 >= fVar0 && Global_4265869 <= fVar2) && Global_4265870 >= (fVar3 + fVar6)) && Global_4265870 < (fVar3 + 0,034722f))
		{
			Global_4265875 = -3;
			if (bParam3)
			{
				func_354(0);
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
				func_353(fVar4, (fVar5 + (IntToFloat(iVar13) * 0,034722f)), Global_17300, (0,034722f - 0,0015f), 255, 255, 255, iVar10);
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

void func_353(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xF654
{
	unk_0x09C2CBFA4CD804AC((fParam0 + (fParam2 * 0,5f)), (fParam1 + (fParam3 * 0,5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_354(bool bParam0)//Position - 0xF683
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
		func_353(fVar0, fVar1, Global_17300, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4265875 == -3)
	{
		func_353(fVar0, (fVar1 + fVar2), Global_17300, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x189EEBAACC5D380A();
}

void func_355()//Position - 0xF70C
{
	Global_4265871 = Global_4265869;
	Global_4265872 = Global_4265870;
	Global_4265869 = unk_0x84326F8D8D6875EC(2, 239);
	Global_4265870 = unk_0x84326F8D8D6875EC(2, 240);
	Global_4265873 = (Global_4265869 - Global_4265871);
	Global_4265874 = (Global_4265870 - Global_4265872);
}

void func_356(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0xF754
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
	
	if (!func_167(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_383(0, bParam6))
	{
		return;
	}
	unk_0x73509F6FDA1DB386(76, 84);
	unk_0xE7C11B6F2CF973B6(-0,05f, -0,05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17301)
	{
		if (func_381(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_380())
		{
			iVar59 = system::round((system::to_float(iVar60) * fVar62));
		}
		fVar63 = (system::to_float(iVar59) / system::to_float(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_380())
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
					StringCopy(&cVar64, func_379(29), 64);
					StringCopy(&cVar65, func_377(29, 1), 64);
					if (unk_0x8B948C59217A295D(&(Global_17301.f_6719[29 /*16*/])) == -1487683087)
					{
						func_353(Global_17298, Global_17299, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
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
				func_353(Global_17298, (Global_17299 + fVar56), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17299 + fVar56) + 0,034722f) + 0f);
				if (unk_0x8B948C59217A295D(&(Global_17301.f_1)) != 0)
				{
					func_376();
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
						func_376();
						func_374((((Global_17298 + fParam5) - 0,00390625f) - func_375("CM_ITEM_COUNT", Global_17301.f_5604, Global_17301.f_5603)), ((Global_17299 + fVar56) + 0,00416664f), "CM_ITEM_COUNT", Global_17301.f_5604, Global_17301.f_5603);
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
				func_353(Global_17298, (fVar49 + 0f), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_381(Global_17301.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17298 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_373(fVar40);
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
				func_353(Global_17298, (fVar49 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_373(fVar40);
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
					func_381(Global_17301.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					func_372(Global_17301.f_4638, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xEFB3EC0CDCC33841(func_379(Global_17301.f_4638), func_377(Global_17301.f_4638, 1), ((Global_17298 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar49 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
					func_381(Global_4265799.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17298 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_373(fVar40);
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
				func_353(Global_17298, (fVar49 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_373(fVar40);
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
					func_381(Global_4265799.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_372(Global_4265799.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xEFB3EC0CDCC33841(func_379(Global_4265799.f_67), func_377(Global_4265799.f_67, 1), ((Global_17298 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar49 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
			func_367(iVar59, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
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
					func_365(bVar32, 1, 0, 0, 0, 0, 0);
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
												func_365(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, iVar74, bVar51, bVar50);
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
													if (func_381(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_381(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0,5f);
												if (func_381(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_372(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_379(26), func_377(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_381(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0,5f);
												if (func_381(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_372(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_379(27), func_377(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											func_365(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_364(bVar32);
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
													if (func_381(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0,5f));
														if (func_381(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_372(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17301.f_4953[iVar8] == 2)
															{
																unk_0xEFB3EC0CDCC33841(func_379(Global_17301.f_4433[(iVar22 + iVar28)]), func_377(Global_17301.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xEFB3EC0CDCC33841(func_379(Global_17301.f_4433[(iVar22 + iVar28)]), func_377(Global_17301.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0,00078125f * 8f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
												if (func_227() && unk_0x8F38E94BBF3404CD(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_365(0, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
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
													if (func_381(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0,5f));
														if (func_381(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_372(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17301.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0xEFB3EC0CDCC33841(func_379(Global_17301.f_4433[(iVar22 + iVar14)]), func_377(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), (Global_17298 + (fVar36 * 0,5f)), (((fVar35 + 0,00277776f) + (fVar37 * 0,5f)) - (0,00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_17301.f_4953[iVar8] == 2)
															{
																unk_0xEFB3EC0CDCC33841(func_379(Global_17301.f_4433[(iVar22 + iVar14)]), func_377(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xEFB3EC0CDCC33841(func_379(Global_17301.f_4433[(iVar22 + iVar14)]), func_377(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0,00078125f * 12f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											func_365(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_364(bVar32);
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
											if (func_381(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0,5f);
												if (func_381(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_372(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_379(26), func_377(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_381(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0,5f);
												if (func_381(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_372(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_379(27), func_377(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_365(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
										func_363((fVar34 + fVar40), fVar35, "NUMBER", Global_17301.f_3918[iVar20], 0);
									}
									bVar39 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											func_365(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_364(bVar32);
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
											if (func_381(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0,5f);
												if (func_381(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_372(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_379(26), func_377(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_381(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0,5f);
												if (func_381(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_372(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_379(27), func_377(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_365(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
										func_362((fVar34 + fVar40), fVar35, "NUMBER", Global_17301.f_4175[iVar21], Global_17301.f_4304[iVar21]);
									}
									bVar39 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_381(Global_17301.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
												if (func_381(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_17301.f_4953[iVar8] == 2)
													{
														fVar40 = (fVar40 - (fVar36 * 2f));
													}
													fVar43 = (fVar36 * 0,5f);
													if (func_381(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_372(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0xEFB3EC0CDCC33841(func_379(26), func_377(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
												if (func_381(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + fVar36);
													fVar43 = (fVar36 * 0,5f);
													if (func_381(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_372(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0xEFB3EC0CDCC33841(func_379(27), func_377(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_381(Global_17301.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_372(Global_17301.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0xEFB3EC0CDCC33841(func_379(Global_17301.f_4433[iVar22]), func_377(Global_17301.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0,5f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), (fVar36 * func_361(Global_17301.f_4433[iVar22])), (fVar37 * func_361(Global_17301.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
									if (func_381(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_358(0);
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
		func_357(1);
	}
	unk_0x189EEBAACC5D380A();
}

void func_357(int iParam0)//Position - 0x123BB
{
	Global_1359035.f_1079 = iParam0;
}

void func_358(int iParam0)//Position - 0x123CC
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_171(0))
		{
			func_359(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

void func_359(int iParam0)//Position - 0x123F5
{
	if (Global_14615)
	{
		func_360(0, 0);
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
	if (!func_279())
	{
		Global_14453.f_1 = 3;
	}
}

void func_360(bool bParam0, bool bParam1)//Position - 0x12465
{
	if (bParam0)
	{
		if (func_171(0))
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

float func_361(int iParam0)//Position - 0x124D9
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

void func_362(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x12548
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x32AD2F36F6EF5A1F(fParam3, iParam4);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, 0);
}

void func_363(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x12567
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x6223D539BCD39E76(iParam3);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, iParam4);
}

void func_364(bool bParam0)//Position - 0x12585
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

void func_365(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x125CB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_366(Global_17301.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_366(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x12779
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

void func_367(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x12A03
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_167(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_383(bParam4, bParam8))
	{
		return;
	}
	if (func_370())
	{
		return;
	}
	if (unk_0x02BBA5FDE77816B9())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_225(unk_0x9EB17624F44A8DA4(), 0))
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
					func_369(&(Global_17301.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x8B948C59217A295D(&(Global_17301.f_4834[iVar2 /*4*/])) == unk_0x8B948C59217A295D("PREV"))
					{
						func_369(&(Global_17301.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17301.f_4883[iVar1] == -1)
					{
						func_368(&(Global_17301.f_4834[iVar1 /*4*/]));
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
				func_369(&Global_4265799);
				if (Global_4265799.f_20 == -1)
				{
					func_368(&(Global_4265799.f_16));
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

void func_368(char* sParam0)//Position - 0x12EDF
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_369(char* sParam0)//Position - 0x12EF1
{
	unk_0x8686005F83E832AE(sParam0);
}

int func_370()//Position - 0x12EFF
{
	vector3 vVar0;
	
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	if (func_371())
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

int func_371()//Position - 0x12F6D
{
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_372(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x12F87
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

void func_373(float fParam0)//Position - 0x1305A
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

void func_374(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x130B9
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x6223D539BCD39E76(iParam3);
	unk_0x6223D539BCD39E76(iParam4);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, 0);
}

float func_375(char* sParam0, int iParam1, int iParam2)//Position - 0x130DC
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
	func_376();
	unk_0x0792909D8327DAEA(sParam0);
	unk_0x6223D539BCD39E76(iParam1);
	unk_0x6223D539BCD39E76(iParam2);
	return unk_0xF2A1AF58CC57C564(1);
}

void func_376()//Position - 0x1311E
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

var func_377(int iParam0, bool bParam1)//Position - 0x131A8
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xAB019B170BF1309C(&(Global_17301.f_6719[iParam0 /*16*/])))
	{
		if (unk_0x8B948C59217A295D(&(Global_17301.f_6719[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_70(unk_0x9EB17624F44A8DA4()) };
			if (unk_0xE009D69C861D7648(&Var2, &uVar1))
			{
				return func_378(&uVar1);
			}
		}
		else
		{
			return func_378(&(Global_17301.f_6719[iParam0 /*16*/]));
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

var func_378(var uParam0)//Position - 0x135FA
{
	return uParam0;
}

char* func_379(int iParam0)//Position - 0x13604
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xAB019B170BF1309C(&(Global_17301.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x8B948C59217A295D(&(Global_17301.f_5886[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_70(unk_0x9EB17624F44A8DA4()) };
			unk_0xE009D69C861D7648(&Var1, &uVar0);
			return func_378(&uVar0);
		}
		else
		{
			return func_378(&(Global_17301.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_380()//Position - 0x13679
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

int func_381(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x136AB
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_379(iParam0), 64);
	StringCopy(&cVar1, func_377(iParam0, bParam1), 64);
	if (unk_0x8B948C59217A295D(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x5113D2C928A121B2(&iVar2, &iVar3);
			fVar5 = unk_0xB6936205ED728A9D(0);
			if (func_380())
			{
				iVar2 = system::round((system::to_float(iVar3) * fVar5));
			}
			fVar6 = (system::to_float(iVar2) / system::to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_380())
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
		vVar7.x = (vVar7.x * (func_382(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_382(iParam0) / fVar4));
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

float func_382(int iParam0)//Position - 0x1385C
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

int func_383(bool bParam0, bool bParam1)//Position - 0x138FB
{
	if (Global_2436181.f_1777.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x9F7B586A14398C40() || (func_288(8, -1) && func_384() != 64)) || (unk_0x8B7838D25C063186() != 0 && !bParam1)) || (unk_0x1E06D00B67177A18() && !bParam0)) || unk_0x9A4EAADB45DA07DB()) || Global_71116) || Global_17301.f_7930) || unk_0x08D525BE62A22AE0()) || Global_92885.f_1377)
	{
		return 0;
	}
	return 1;
}

int func_384()//Position - 0x13998
{
	return Global_1312789;
}

void func_385(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x139A4
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
	if (!bParam3)
	{
		unk_0x872F1C1F8587CCC7(&(Global_17301.f_4922), Global_17301.f_4639);
	}
	StringCopy(&(Global_17301.f_4641[Global_17301.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17301.f_4834[Global_17301.f_4639 /*4*/]), sParam1, 16);
	Global_17301.f_4883[Global_17301.f_4639] = iParam2;
	Global_17301.f_4896[Global_17301.f_4639] = iParam0;
	Global_17301.f_4909[Global_17301.f_4639] = 32;
	Global_17301.f_4639++;
}

char* func_386(int iParam0)//Position - 0x13A59
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = iParam0;
	}
	else
	{
		iVar0 = 6;
	}
	switch (iVar0)
	{
		case 6:
			return "SNK_AFFORD";
		
		case 3:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		case 4:
			return "SNK_ITEM4_D";
		
		case 0:
			return "SNK_ITEM5_D";
		
		case 5:
			return "SNK_ITEM6_D";
		
		default:
	}
	return "";
}

void func_387(char* sParam0, int iParam1, int iParam2)//Position - 0x13AD7
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

void func_388(var uParam0, bool bParam1, int iParam2)//Position - 0x13B3C
{
	int iVar0;
	int iVar1;
	
	Global_17301.f_5606 = uParam0;
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

void func_389(int iParam0)//Position - 0x13C8E
{
	Global_17301.f_5605 = iParam0;
}

void func_390(var uParam0, bool bParam1)//Position - 0x13C9E
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
	Global_17301.f_3918[Global_17301.f_5092] = uParam0;
	Global_17301.f_5092++;
	Global_17301.f_2124[Global_17301.f_5609 /*5*/][Global_17301.f_5610] = 2;
	Global_17301.f_5610++;
	if (Global_17301.f_5610 >= Global_17301.f_5608)
	{
		fVar0 = func_392();
		if (Global_17301.f_4945[Global_17301.f_5089] && Global_17301.f_5610 == Global_17301.f_5608)
		{
			func_381(26, 1, 0, &fVar1, &uVar2, 0);
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
			fVar3 = func_391();
			if (fVar3 > Global_17301.f_5612[Global_17301.f_5088])
			{
				Global_17301.f_5612[Global_17301.f_5088] = fVar3;
			}
		}
	}
}

float func_391()//Position - 0x13DD9
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
			if (func_381(Global_17301.f_4433[((Global_17301.f_5094 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
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

float func_392()//Position - 0x13E8C
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
	func_365(0, 1, 0, 0, 0, iVar6 > 0, 0);
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
			func_381(Global_17301.f_4433[((Global_17301.f_5094 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_393(var uParam0, int iParam1)//Position - 0x142D4
{
	int iVar0;
	
	iVar0 = iParam1;
	switch (func_337(uParam0))
	{
		case 0:
			switch (iVar0)
			{
				case 3:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 5;
				
				case 4:
					return 7;
				
				case 0:
					return 2;
				
				case 5:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 4:
					return 8;
				
				case 0:
					return 2;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 4;
				
				case 4:
					return 6;
				
				case 0:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_394(int iParam0)//Position - 0x143D1
{
	if (func_130(func_396(iParam0), -1, 0) >= func_395(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_395(var uParam0)//Position - 0x143F3
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 30;
		
		case 1:
			return 15;
		
		case 2:
			return 5;
		
		case 4:
			return 20;
		
		case 0:
			return 10;
		
		case 5:
			return 10;
		
		default:
	}
	return 0;
}

int func_396(var uParam0)//Position - 0x14448
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 1272;
		
		case 1:
			return 1273;
		
		case 2:
			return 1274;
		
		case 4:
			return 1094;
		
		case 0:
			return 62;
		
		case 5:
			return 63;
		
		default:
	}
	return 7872;
}

void func_397(int iParam0, bool bParam1)//Position - 0x144A4
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17301.f_5094 >= 128)
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
	Global_17301.f_4433[Global_17301.f_5094] = iParam0;
	Global_17301.f_5094++;
	Global_17301.f_2124[Global_17301.f_5609 /*5*/][Global_17301.f_5610] = 4;
	Global_17301.f_5610++;
	if (Global_17301.f_5610 >= Global_17301.f_5608)
	{
		fVar0 = func_392();
		if (Global_17301.f_4945[Global_17301.f_5089] && Global_17301.f_5610 == Global_17301.f_5608)
		{
			func_381(26, 1, 0, &fVar1, &uVar2, 0);
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
			fVar3 = func_391();
			if (fVar3 > Global_17301.f_5612[Global_17301.f_5088])
			{
				Global_17301.f_5612[Global_17301.f_5088] = fVar3;
			}
		}
	}
}

void func_398(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x145DE
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
		func_401(Global_17301.f_5088, 1);
	}
	else
	{
		func_401(Global_17301.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_400(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]));
		if (Global_17301.f_4945[Global_17301.f_5089])
		{
			func_381(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_399(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]));
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

float func_399(char* sParam0)//Position - 0x147EA
{
	if (!unk_0xA1800C71952C596F(sParam0))
	{
	}
	return unk_0xAF6F79C616D36B6E(0,35f, 0);
}

float func_400(char* sParam0)//Position - 0x14806
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
	func_365(0, 1, 0, 0, 0, 0, 0);
	unk_0x0792909D8327DAEA(sParam0);
	return unk_0xF2A1AF58CC57C564(1);
}

void func_401(int iParam0, bool bParam1)//Position - 0x14843
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

char* func_402(int iParam0)//Position - 0x1488F
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "SNK_ITEM1";
		
		case 1:
			return "SNK_ITEM2";
		
		case 2:
			return "SNK_ITEM3";
		
		case 4:
			return "SNK_ITEM4";
		
		case 0:
			return "SNK_ITEM5";
		
		case 5:
			return "SNK_ITEM6";
		
		default:
	}
	return "";
}

void func_403(int iParam0, char* sParam1, char* sParam2)//Position - 0x148F4
{
	Global_17301 = iParam0;
	func_404(29, sParam1, sParam2);
}

void func_404(int iParam0, char* sParam1, char* sParam2)//Position - 0x1490B
{
	StringCopy(&(Global_17301.f_5886[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17301.f_6719[iParam0 /*16*/]), sParam2, 64);
}

void func_405(char* sParam0)//Position - 0x1492F
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

void func_406(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1497A
{
	Global_17301.f_4953[0] = iParam0;
	Global_17301.f_4953[1] = iParam1;
	Global_17301.f_4953[2] = iParam2;
	Global_17301.f_4953[3] = iParam3;
	Global_17301.f_4953[4] = iParam4;
}

void func_407(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x149B9
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

void func_408(bool bParam0)//Position - 0x14A63
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

int func_409(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x14F21
{
	vector3 vVar0;
	float fVar1;
	
	switch (iParam0)
	{
		case 0:
			*uParam1 = { unk_0x9EA50C5EC175E58E(-706,6382f, -913,6887f, 19,21f, -89,999f, 2,40015f, -7,75244f, 1,0825f) };
			*uParam2 = -4,2069f;
			uParam2->f_1 = -0,027f;
			uParam2->f_2 = (-89,999f + 22,8175f);
			*uParam3 = 32,8283f;
			break;
		
		case 1:
			*uParam1 = { unk_0x9EA50C5EC175E58E(-47,19871f, -1757,67f, 29,42f, -130f, 2,40015f, -7,75244f, 1,0825f) };
			*uParam2 = -4,2069f;
			uParam2->f_1 = -0,027f;
			uParam2->f_2 = (-130f + 22,8175f);
			*uParam3 = 32,8283f;
			break;
		
		case 2:
			*uParam1 = { unk_0x9EA50C5EC175E58E(1164,21f, -322,89f, 69,2f, -80f, 2,40015f, -7,75244f, 1,0825f) };
			*uParam2 = -4,2069f;
			uParam2->f_1 = -0,027f;
			uParam2->f_2 = (-80f + 22,8175f);
			*uParam3 = 32,8283f;
			break;
		
		case 3:
			*uParam1 = { unk_0x9EA50C5EC175E58E(1698,307f, 4923,371f, 42,06f, 145f, 2,40015f, -7,75244f, 1,0825f) };
			*uParam2 = -4,2069f;
			uParam2->f_1 = -0,027f;
			uParam2->f_2 = (145f + 22,8175f);
			*uParam3 = 32,8283f;
			break;
		
		case 4:
			*uParam1 = { unk_0x9EA50C5EC175E58E(-1820,465f, 793,8166f, 138,09f, -47,53f, 2,40015f, -7,75244f, 1,0825f) };
			*uParam2 = -4,2069f;
			uParam2->f_1 = -0,027f;
			uParam2->f_2 = (-47,53f + 22,8175f);
			*uParam3 = 32,8283f;
			break;
		
		case 5:
			vVar0 = { 1165,958f, 2710,201f, 38,14286f };
			fVar1 = -1,15f;
			*uParam1 = { unk_0x9EA50C5EC175E58E(vVar0, fVar1, 3,80296f, -5,391f, 1,213f) };
			*uParam2 = -9,3866f;
			uParam2->f_1 = -0,0011f;
			uParam2->f_2 = (fVar1 + 46,9866f);
			*uParam3 = 35f;
			break;
		
		case 6:
			vVar0 = { -2967,027f, 390,9038f, 15,02f };
			fVar1 = -94,76f;
			*uParam1 = { unk_0x9EA50C5EC175E58E(vVar0, fVar1, 3,80296f, -5,391f, 1,213f) };
			*uParam2 = -9,3866f;
			uParam2->f_1 = -0,0011f;
			uParam2->f_2 = (fVar1 + 46,9866f);
			*uParam3 = 35f;
			break;
		
		case 7:
			vVar0 = { -1222,331f, -907,8234f, 12,31f };
			fVar1 = -147,297f;
			*uParam1 = { unk_0x9EA50C5EC175E58E(vVar0, fVar1, 3,80296f, -5,391f, 1,213f) };
			*uParam2 = -9,3866f;
			uParam2->f_1 = -0,0011f;
			uParam2->f_2 = (fVar1 + 46,9866f);
			*uParam3 = 35f;
			break;
		
		case 8:
			vVar0 = { 1134,811f, -982,3615f, 46,4f };
			fVar1 = 96,68562f;
			*uParam1 = { unk_0x9EA50C5EC175E58E(vVar0, fVar1, 3,80296f, -5,391f, 1,213f) };
			*uParam2 = -9,3866f;
			uParam2->f_1 = -0,0011f;
			uParam2->f_2 = (fVar1 + 46,9866f);
			*uParam3 = 35f;
			break;
		
		case 9:
			vVar0 = { -1486,673f, -378,4638f, 40,15f };
			fVar1 = -46,229f;
			*uParam1 = { unk_0x9EA50C5EC175E58E(vVar0, fVar1, 3,80296f, -5,391f, 1,213f) };
			*uParam2 = -9,3866f;
			uParam2->f_1 = -0,0011f;
			uParam2->f_2 = (fVar1 + 46,9866f);
			*uParam3 = 35f;
			break;
		
		case 10:
			vVar0 = { -3244,573f, 1000,658f, 12,83f };
			fVar1 = 175,074f;
			*uParam1 = { unk_0x9EA50C5EC175E58E(vVar0, fVar1, 2,97963f, -3,39452f, 0,934498f) };
			*uParam2 = -8,483f;
			uParam2->f_1 = 0,0149f;
			uParam2->f_2 = (fVar1 + 53,5519f);
			*uParam3 = 35f;
			break;
		
		case 11:
			vVar0 = { -3041,357f, 584,2665f, 7,9f };
			fVar1 = -162,241f;
			*uParam1 = { unk_0x9EA50C5EC175E58E(vVar0, fVar1, 2,97963f, -3,39452f, 0,934498f) };
			*uParam2 = -8,483f;
			uParam2->f_1 = 0,0149f;
			uParam2->f_2 = (fVar1 + 53,5519f);
			*uParam3 = 35f;
			break;
		
		case 12:
			vVar0 = { 548,9015f, 2668,941f, 42,15f };
			fVar1 = -82,5f;
			*uParam1 = { unk_0x9EA50C5EC175E58E(vVar0, fVar1, 2,97963f, -3,39452f, 0,934498f) };
			*uParam2 = -8,483f;
			uParam2->f_1 = 0,0149f;
			uParam2->f_2 = (fVar1 + 53,5519f);
			*uParam3 = 35f;
			break;
		
		case 13:
			vVar0 = { 2554,875f, 381,3857f, 108,62f };
			fVar1 = 177,716f;
			*uParam1 = { unk_0x9EA50C5EC175E58E(vVar0, fVar1, 2,97963f, -3,39452f, 0,934498f) };
			*uParam2 = -8,483f;
			uParam2->f_1 = 0,0149f;
			uParam2->f_2 = (fVar1 + 53,5519f);
			*uParam3 = 35f;
			break;
		
		case 14:
			vVar0 = { 2676,212f, 3280,969f, 55,24f };
			fVar1 = 150,87f;
			*uParam1 = { unk_0x9EA50C5EC175E58E(vVar0, fVar1, 2,97963f, -3,39452f, 0,934498f) };
			*uParam2 = -8,483f;
			uParam2->f_1 = 0,0149f;
			uParam2->f_2 = (fVar1 + 53,5519f);
			*uParam3 = 35f;
			break;
		
		case 15:
			vVar0 = { 1729,329f, 6417,123f, 35,03f };
			fVar1 = 63,641f;
			*uParam1 = { unk_0x9EA50C5EC175E58E(vVar0, fVar1, 2,97963f, -3,39452f, 0,934498f) };
			*uParam2 = -8,483f;
			uParam2->f_1 = 0,0149f;
			uParam2->f_2 = (fVar1 + 53,5519f);
			*uParam3 = 35f;
			break;
		
		case 16:
			vVar0 = { 1959,323f, 3742,29f, 32,34f };
			fVar1 = 120f;
			*uParam1 = { unk_0x9EA50C5EC175E58E(vVar0, fVar1, 2,97963f, -3,39452f, 0,934498f) };
			*uParam2 = -8,483f;
			uParam2->f_1 = 0,0149f;
			uParam2->f_2 = (fVar1 + 53,5519f);
			*uParam3 = 35f;
			break;
		
		case 17:
			vVar0 = { 24,94562f, -1344,954f, 29,49f };
			fVar1 = 90f;
			*uParam1 = { unk_0x9EA50C5EC175E58E(vVar0, fVar1, 2,97963f, -3,39452f, 0,934498f) };
			*uParam2 = -8,483f;
			uParam2->f_1 = 0,0149f;
			uParam2->f_2 = (fVar1 + 53,5519f);
			*uParam3 = 35f;
			break;
		
		case 18:
			vVar0 = { 373,5954f, 328,5892f, 103,56f };
			fVar1 = 75,885f;
			*uParam1 = { unk_0x9EA50C5EC175E58E(vVar0, fVar1, 2,97963f, -3,39452f, 0,934498f) };
			*uParam2 = -8,483f;
			uParam2->f_1 = 0,0149f;
			uParam2->f_2 = (fVar1 + 53,5519f);
			*uParam3 = 35f;
			break;
		
		case -2:
			*uParam1 = { 1390,653f, 3598,966f, 35,6115f };
			*uParam2 = { -3,6091f, 0,022f, -8,6461f };
			*uParam3 = 35f;
			break;
	}
	return 1;
}

void func_410()//Position - 0x156BA
{
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0xCD439FD7E3A8589E(0,325f, 0,3f);
	}
}

void func_411(int iParam0, int iParam1)//Position - 0x156D8
{
	if (!func_324(unk_0x9EB17624F44A8DA4(), 1) || iParam1)
	{
		if (!func_416())
		{
			Global_1312416.f_1 = 1;
			Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_9 = 1;
			if (iParam0 == 1)
			{
				Global_1312416.f_2 = 1;
			}
			func_412(0);
		}
	}
}

void func_412(int iParam0)//Position - 0x1572A
{
	if (!func_416() || iParam0)
	{
		Global_1312416 = 1;
		func_415(1);
		if (((!unk_0x4916190900E76373() && !func_414()) && !func_413(unk_0x9EB17624F44A8DA4())) && !func_142(unk_0x9EB17624F44A8DA4()))
		{
			Global_979885 = 1;
		}
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_8 = 1;
	}
}

int func_413(int iParam0)//Position - 0x1578D
{
	if (func_324(iParam0, 1))
	{
		if (Global_1595693[iParam0 /*680*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_414()//Position - 0x157B1
{
	return Global_2447174.f_727;
}

void func_415(bool bParam0)//Position - 0x157C0
{
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_416())
		{
			if (func_44(unk_0x9EB17624F44A8DA4(), 1, 0))
			{
				unk_0xC854D7A2E956B946(unk_0xFC1458A37D98B502(), 1);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 342, false);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 122, false);
			}
			unk_0x700E2D2B75B97982(unk_0x9EB17624F44A8DA4(), 1f);
			unk_0xF305970BD7628B41(0);
			unk_0x2BDCC0C0CA635E27(1);
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
			if (func_44(unk_0x9EB17624F44A8DA4(), 1, 1))
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
			unk_0x2BDCC0C0CA635E27(0);
		}
	}
}

bool func_416()//Position - 0x158B9
{
	return Global_1312416;
}

void func_417(int iParam0)//Position - 0x158C5
{
	func_418(iParam0, 0f);
}

void func_418(int iParam0, float fParam1)//Position - 0x158D4
{
	iParam0->f_1 = (func_342(unk_0xC80D31E4B587871C(*iParam0, 4)) - fParam1);
	unk_0x872F1C1F8587CCC7(iParam0, 1);
	unk_0x0EE72DB1CD8A3B86(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_419(int iParam0, bool bParam1)//Position - 0x15902
{
	int iVar0;
	
	iVar0 = func_304(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5BEF7A5AB8F17255(unk_0x98EC0789D9F0703B()))
	{
		return 0;
	}
	if (func_171(0))
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

int func_420()//Position - 0x159BA
{
	if (Global_104555.f_20380.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

bool func_421()//Position - 0x159D7
{
	return Global_17160;
}

int func_422(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x159E2
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { unk_0x9EA50C5EC175E58E(*uParam1, fParam2, 1,46991f, -0,814453f, -0,97226f) };
			*uParam4 = { unk_0x9EA50C5EC175E58E(*uParam1, fParam2, -1,5828f, -0,814453f, 0,84774f) };
			*uParam5 = { unk_0x9EA50C5EC175E58E(*uParam1, fParam2, 0,0586548f, 0,178162f, 0f) };
			*uParam6 = 0,75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { unk_0x9EA50C5EC175E58E(*uParam1, fParam2, -1,55054f, -0,920414f, -0,998837f) };
			*uParam4 = { unk_0x9EA50C5EC175E58E(*uParam1, fParam2, 1,54138f, -0,920414f, 0,901165f) };
			*uParam5 = { unk_0x9EA50C5EC175E58E(*uParam1, fParam2, 0,0586548f, 0,178162f, 0f) };
			*uParam6 = 0,75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { unk_0x9EA50C5EC175E58E(*uParam1, fParam2, -2,60296f, -0,851523f, -0,999289f) };
			*uParam4 = { unk_0x9EA50C5EC175E58E(*uParam1, fParam2, 0,443411f, -0,851523f, 0,820711f) };
			*uParam5 = { unk_0x9EA50C5EC175E58E(*uParam1, fParam2, -1,17421f, 0,39005f, 0f) };
			*uParam6 = 0,75f;
			break;
		
		case -2:
			*uParam3 = { 1390,955f, 3604,379f, 33,98091f };
			*uParam4 = { 1394,475f, 3605,664f, 35,98091f };
			*uParam5 = { 1392,551f, 3605,449f, 35,30949f };
			*uParam6 = 0,75f;
			break;
	}
	return 1;
}

bool func_423(int iParam0, int iParam1)//Position - 0x15BC8
{
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_223, iParam1);
}

void func_424(var uParam0, var uParam1)//Position - 0x15BE1
{
	unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
	func_461(unk_0x9EB17624F44A8DA4(), 1, 0);
	unk_0xBB9A3C553EECB180(0f);
	unk_0x7C9705890EF6612E(0f, 1065353216);
	if (uParam0->f_51 > 0)
	{
		*uParam1 = uParam0->f_51;
		uParam0->f_51 = 0;
	}
	func_445();
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_53), 7);
	if (func_150("SHR_MENU"))
	{
		unk_0x3E80C2F7BC665259(1);
	}
	if (uParam0->f_14 != -1)
	{
		func_303(&(uParam0->f_14));
	}
	if (unk_0x8EA3C8E091EA5BA4(uParam0->f_1))
	{
		unk_0x02934BABFD4CD384(uParam0->f_1, 0);
	}
	unk_0x3458550DF8E9B453(false, 0, 3000, 1, 0, 0);
}

int func_425(float fParam0)//Position - 0x15C6B
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

int func_426(int iParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x15CBD
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0x3A711520F83BAE98() && !bParam3)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_427(var uParam0)//Position - 0x15D10
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((*uParam0)[iVar0] < 10)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_428()//Position - 0x15D3A
{
	unk_0x6931076730A4AC5D(&uLocal_114);
	unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 0, 2);
	unk_0x12C9D41D52A560D6(0, "mp_am_hold_up", "handsup_enter", 8f, -8f, -1, 262192, 0, 0, 0, 0);
	unk_0x12C9D41D52A560D6(0, "mp_am_hold_up", "handsup_base", 8f, -4f, -1, 262193, 0, 0, 0, 0);
	unk_0x1B16DD5C115FE009(uLocal_114);
	unk_0x6931076730A4AC5D(&uLocal_115);
	unk_0x12C9D41D52A560D6(0, "mp_am_hold_up", "handsup_base", 4f, -4f, -1, 262193, 0, 0, 0, 0);
	unk_0x1B16DD5C115FE009(uLocal_115);
	unk_0x6931076730A4AC5D(&uLocal_116);
	unk_0x380C1E7B7740D618(0, vLocal_107, 2f, -1, 0,25f, 0, fLocal_108);
	unk_0x12C9D41D52A560D6(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	unk_0x12C9D41D52A560D6(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	unk_0xFC5999E8B820470E(0, vLocal_107, 250f, -1, 1, 0);
	unk_0xD40A6DFCC31D221A(0, 0);
	unk_0x1B16DD5C115FE009(uLocal_116);
	unk_0x6931076730A4AC5D(&uLocal_118);
	unk_0x12C9D41D52A560D6(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	unk_0x12C9D41D52A560D6(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	unk_0xD40A6DFCC31D221A(0, 0);
	unk_0x1B16DD5C115FE009(uLocal_118);
	unk_0x6931076730A4AC5D(&uLocal_117);
	unk_0x380C1E7B7740D618(0, vLocal_107, 2f, -1, 0,25f, 0, (fLocal_108 - 180f));
	unk_0xF1794430C256DBC0(0, 1);
	unk_0x992E814DF611C58C(0, 20f, 0);
	unk_0x1B16DD5C115FE009(uLocal_117);
}

void func_429(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x15EC1
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

int func_430(var uParam0)//Position - 0x15F5C
{
	if (unk_0x93C304998B457C45(uParam0))
	{
		return unk_0x3AB6A1A9084FB0A4(unk_0x47BA76CE3C825A08(uParam0));
	}
	return 1;
}

int func_431()//Position - 0x15F7B
{
	return Local_98.f_12;
}

char* func_432(int iParam0)//Position - 0x15F87
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

int func_433()//Position - 0x16033
{
	vector3 vVar0;
	
	if (func_441(&(Local_100.f_50), 0))
	{
		func_439(Local_100.f_50, &iLocal_134, &iLocal_135, &iLocal_136, &iLocal_137, &vLocal_138, &vLocal_139);
		func_438(Local_100.f_50, &vLocal_140, &vLocal_141, &fLocal_142);
		func_437(Local_100.f_50, &vLocal_143, &vLocal_144, &fLocal_145);
		switch (Local_100.f_50)
		{
			case 0:
				vLocal_110 = { 1393,1f, 3605,89f, (35,2f - 0,2f) };
				vLocal_111 = { 0f, 0f, 21,89f };
				iLocal_105 = func_50(0);
				vLocal_107 = { 1394,852f, 3609,509f, 33,9809f };
				fLocal_108 = 116,5329f;
				iLocal_129 = 1;
				if (func_435(6, 18))
				{
					iLocal_311[0] = 0;
					iLocal_312[0] = 0;
					iLocal_311[1] = 0;
					iLocal_312[1] = 0;
					iLocal_311[2] = 0;
					iLocal_312[2] = 0;
					iLocal_311[3] = 0;
					iLocal_312[3] = 0;
					iLocal_311[4] = 0;
					iLocal_312[4] = 0;
				}
				else
				{
					iLocal_311[0] = 1;
					iLocal_312[0] = 0;
					iLocal_311[1] = 1;
					iLocal_312[1] = 1;
					iLocal_311[2] = 1;
					iLocal_312[2] = 2;
					iLocal_311[3] = 0;
					iLocal_312[3] = 1;
					iLocal_311[4] = 0;
					iLocal_312[4] = 0;
				}
				break;
			
			case 1:
				vLocal_111 = { 0f, 0f, -160f };
				vLocal_110 = { -3041,38f, 584,35f, (8,11f - 0,2f) };
				iLocal_105 = func_50(0);
				vLocal_107 = { -3047,512f, 588,9807f, 6,9089f };
				fLocal_108 = 178,8753f;
				iLocal_129 = 1;
				if (func_435(6, 18))
				{
					iLocal_311[0] = 0;
					iLocal_312[0] = 1;
					iLocal_311[1] = 1;
					iLocal_312[1] = 0;
					iLocal_311[2] = 0;
					iLocal_312[2] = 1;
					iLocal_311[3] = 0;
					iLocal_312[3] = 1;
					iLocal_311[4] = 0;
					iLocal_312[4] = 1;
				}
				else
				{
					iLocal_311[0] = 2;
					iLocal_312[0] = 0;
					iLocal_311[1] = 0;
					iLocal_312[1] = 0;
					iLocal_311[2] = 1;
					iLocal_312[2] = 2;
					iLocal_311[3] = 0;
					iLocal_312[3] = 0;
					iLocal_311[4] = 0;
					iLocal_312[4] = 1;
				}
				break;
			
			case 2:
				vLocal_110 = { -3244,56f, 1000,74f, (13,03f - 0,2f) };
				vLocal_111 = { 0f, 0f, 175,52f };
				iLocal_105 = func_50(0);
				vLocal_107 = { -3249,114f, 1006,558f, 11,8307f };
				fLocal_108 = 191,594f;
				iLocal_129 = 1;
				if (func_435(6, 18))
				{
					iLocal_311[0] = 0;
					iLocal_312[0] = 2;
					iLocal_311[1] = 1;
					iLocal_312[1] = 1;
					iLocal_311[2] = 0;
					iLocal_312[2] = 2;
					iLocal_311[3] = 0;
					iLocal_312[3] = 0;
					iLocal_311[4] = 0;
					iLocal_312[4] = 2;
				}
				else
				{
					iLocal_311[0] = 2;
					iLocal_312[0] = 1;
					iLocal_311[1] = 0;
					iLocal_312[1] = 0;
					iLocal_311[2] = 1;
					iLocal_312[2] = 0;
					iLocal_311[3] = 0;
					iLocal_312[3] = 1;
					iLocal_311[4] = 0;
					iLocal_312[4] = 2;
				}
				break;
			
			case 3:
				vLocal_111 = { 0f, 0f, -82,38f };
				vLocal_110 = { 548,82f, 2668,93f, (42,36f - 0,2f) };
				iLocal_105 = func_50(0);
				vLocal_107 = { 543,0796f, 2663,967f, 41,1565f };
				fLocal_108 = 228,4295f;
				iLocal_129 = 1;
				if (func_435(6, 18))
				{
					iLocal_311[0] = 1;
					iLocal_312[0] = 0;
					iLocal_311[1] = 2;
					iLocal_312[1] = 0;
					iLocal_311[2] = 1;
					iLocal_312[2] = 0;
					iLocal_311[3] = 0;
					iLocal_312[3] = 1;
					iLocal_311[4] = 0;
					iLocal_312[4] = 0;
				}
				else
				{
					iLocal_311[0] = 0;
					iLocal_312[0] = 0;
					iLocal_311[1] = 2;
					iLocal_312[1] = 1;
					iLocal_311[2] = 1;
					iLocal_312[2] = 1;
					iLocal_311[3] = 0;
					iLocal_312[3] = 0;
					iLocal_311[4] = 0;
					iLocal_312[4] = 0;
				}
				break;
			
			case 4:
				vLocal_111 = { 0f, 0f, 180f };
				vLocal_110 = { 2554,88f, 381,47f, (108,82f - 0,2f) };
				iLocal_105 = func_50(0);
				vLocal_107 = { 2549,85f, 387,1622f, 107,623f };
				fLocal_108 = 197,2994f;
				iLocal_129 = 1;
				if (func_435(6, 18))
				{
					iLocal_311[0] = 2;
					iLocal_312[0] = 0;
					iLocal_311[1] = 2;
					iLocal_312[1] = 1;
					iLocal_311[2] = 1;
					iLocal_312[2] = 1;
					iLocal_311[3] = 0;
					iLocal_312[3] = 0;
					iLocal_311[4] = 0;
					iLocal_312[4] = 1;
				}
				else
				{
					iLocal_311[0] = 0;
					iLocal_312[0] = 1;
					iLocal_311[1] = 1;
					iLocal_312[1] = 0;
					iLocal_311[2] = 0;
					iLocal_312[2] = 2;
					iLocal_311[3] = 0;
					iLocal_312[3] = 1;
					iLocal_311[4] = 0;
					iLocal_312[4] = 1;
				}
				break;
			
			case 5:
				vLocal_111 = { 0f, 0f, 155f };
				vLocal_110 = { 2676,26f, 3281,04f, (55,44f - 0,2f) };
				iLocal_105 = func_50(0);
				vLocal_107 = { 2671,351f, 3283,136f, 54,2411f };
				fLocal_108 = 296,5427f;
				iLocal_129 = 1;
				if (func_435(6, 18))
				{
					iLocal_311[0] = 2;
					iLocal_312[0] = 1;
					iLocal_311[1] = 0;
					iLocal_312[1] = 0;
					iLocal_311[2] = 1;
					iLocal_312[2] = 2;
					iLocal_311[3] = 0;
					iLocal_312[3] = 1;
					iLocal_311[4] = 0;
					iLocal_312[4] = 2;
				}
				else
				{
					iLocal_311[0] = 0;
					iLocal_312[0] = 2;
					iLocal_311[1] = 2;
					iLocal_312[1] = 1;
					iLocal_311[2] = 0;
					iLocal_312[2] = 2;
					iLocal_311[3] = 0;
					iLocal_312[3] = 0;
					iLocal_311[4] = 0;
					iLocal_312[4] = 2;
				}
				break;
			
			case 6:
				vLocal_111 = { 0f, 0f, 63,3f };
				vLocal_110 = { 1729,4f, 6417,08f, (35,24f - 0,2f) };
				iLocal_105 = func_50(0);
				vLocal_107 = { 1733,967f, 6421,495f, 34,0372f };
				fLocal_108 = 130,9518f;
				iLocal_129 = 1;
				if (func_435(6, 18))
				{
					iLocal_311[0] = 2;
					iLocal_312[0] = 2;
					iLocal_311[1] = 1;
					iLocal_312[1] = 0;
					iLocal_311[2] = 0;
					iLocal_312[2] = 0;
					iLocal_311[3] = 0;
					iLocal_312[3] = 0;
					iLocal_311[4] = 0;
					iLocal_312[4] = 0;
				}
				else
				{
					iLocal_311[0] = 1;
					iLocal_312[0] = 0;
					iLocal_311[1] = 0;
					iLocal_312[1] = 0;
					iLocal_311[2] = 1;
					iLocal_312[2] = 0;
					iLocal_311[3] = 0;
					iLocal_312[3] = 1;
					iLocal_311[4] = 0;
					iLocal_312[4] = 0;
				}
				break;
			
			case 7:
				vLocal_111 = { 0f, 0f, 117f };
				vLocal_110 = { 1959,4f, 3742,33f, (32,54f - 0,2f) };
				iLocal_105 = func_50(0);
				vLocal_107 = { 1958,92f, 3746,267f, 31,3438f };
				fLocal_108 = 73,6245f;
				iLocal_129 = 1;
				if (func_435(6, 18))
				{
					iLocal_311[0] = 0;
					iLocal_312[0] = 0;
					iLocal_311[1] = 1;
					iLocal_312[1] = 1;
					iLocal_311[2] = 0;
					iLocal_312[2] = 1;
					iLocal_311[3] = 0;
					iLocal_312[3] = 1;
					iLocal_311[4] = 0;
					iLocal_312[4] = 1;
				}
				else
				{
					iLocal_311[0] = 2;
					iLocal_312[0] = 0;
					iLocal_311[1] = 0;
					iLocal_312[1] = 0;
					iLocal_311[2] = 1;
					iLocal_312[2] = 1;
					iLocal_311[3] = 0;
					iLocal_312[3] = 0;
					iLocal_311[4] = 0;
					iLocal_312[4] = 1;
				}
				break;
			
			case 8:
				vLocal_111 = { 0f, 0f, 92f };
				vLocal_110 = { 25,03f, -1344,96f, (29,69f - 0,2f) };
				iLocal_105 = func_50(0);
				vLocal_107 = { 30,5721f, -1339,782f, 28,4939f };
				fLocal_108 = 110,7699f;
				iLocal_129 = 1;
				if (func_435(6, 18))
				{
					iLocal_311[0] = 0;
					iLocal_312[0] = 1;
					iLocal_311[1] = 2;
					iLocal_312[1] = 0;
					iLocal_311[2] = 0;
					iLocal_312[2] = 2;
					iLocal_311[3] = 0;
					iLocal_312[3] = 0;
					iLocal_311[4] = 0;
					iLocal_312[4] = 2;
				}
				else
				{
					iLocal_311[0] = 2;
					iLocal_312[0] = 1;
					iLocal_311[1] = 1;
					iLocal_312[1] = 0;
					iLocal_311[2] = 1;
					iLocal_312[2] = 2;
					iLocal_311[3] = 0;
					iLocal_312[3] = 1;
					iLocal_311[4] = 0;
					iLocal_312[4] = 2;
				}
				break;
			
			case 9:
				vLocal_111 = { 0f, 0f, 75f };
				vLocal_110 = { 373,68f, 328,56f, (103,77f - 0,2f) };
				iLocal_105 = func_50(0);
				vLocal_107 = { 376,2976f, 331,8158f, 102,5664f };
				fLocal_108 = 52,0064f;
				iLocal_129 = 1;
				if (func_435(6, 18))
				{
					iLocal_311[0] = 0;
					iLocal_312[0] = 2;
					iLocal_311[1] = 2;
					iLocal_312[1] = 1;
					iLocal_311[2] = 1;
					iLocal_312[2] = 0;
					iLocal_311[3] = 0;
					iLocal_312[3] = 1;
					iLocal_311[4] = 0;
					iLocal_312[4] = 0;
				}
				else
				{
					iLocal_311[0] = 2;
					iLocal_312[0] = 2;
					iLocal_311[1] = 1;
					iLocal_312[1] = 1;
					iLocal_311[2] = 0;
					iLocal_312[2] = 0;
					iLocal_311[3] = 0;
					iLocal_312[3] = 0;
					iLocal_311[4] = 0;
					iLocal_312[4] = 0;
				}
				break;
			
			case 10:
				vLocal_111 = { 0f, 0f, 0f };
				vLocal_110 = { 1165,96f, 2710,2f, (38,25f - 0,105f) };
				iLocal_105 = func_50(0);
				vLocal_107 = { 1168,971f, 2719,118f, 36,0632f };
				fLocal_108 = 136,5945f;
				iLocal_129 = 3;
				if (func_435(10, 22))
				{
					iLocal_311[0] = 1;
					iLocal_312[0] = 0;
					iLocal_311[1] = 0;
					iLocal_312[1] = 0;
					iLocal_311[2] = 1;
					iLocal_312[2] = 1;
					iLocal_311[3] = 0;
					iLocal_312[3] = 0;
					iLocal_311[4] = 1;
					iLocal_312[4] = 0;
				}
				else
				{
					iLocal_311[0] = 0;
					iLocal_312[0] = 0;
					iLocal_311[1] = 2;
					iLocal_312[1] = 0;
					iLocal_311[2] = 0;
					iLocal_312[2] = 1;
					iLocal_311[3] = 0;
					iLocal_312[3] = 1;
					iLocal_311[4] = 1;
					iLocal_312[4] = 0;
				}
				break;
			
			case 11:
				vLocal_111 = { 0f, 0f, -92f };
				vLocal_110 = { -2967,03f, 390,9f, (15,23f - 0,2f) };
				iLocal_105 = func_50(0);
				vLocal_107 = { -2962,983f, 391,9788f, 14,0433f };
				fLocal_108 = 176,1174f;
				iLocal_129 = 3;
				if (func_435(10, 22))
				{
					iLocal_311[0] = 2;
					iLocal_312[0] = 0;
					iLocal_311[1] = 1;
					iLocal_312[1] = 0;
					iLocal_311[2] = 1;
					iLocal_312[2] = 2;
					iLocal_311[3] = 0;
					iLocal_312[3] = 1;
					iLocal_311[4] = 1;
					iLocal_312[4] = 0;
				}
				else
				{
					iLocal_311[0] = 0;
					iLocal_312[0] = 1;
					iLocal_311[1] = 2;
					iLocal_312[1] = 1;
					iLocal_311[2] = 0;
					iLocal_312[2] = 2;
					iLocal_311[3] = 0;
					iLocal_312[3] = 0;
					iLocal_311[4] = 1;
					iLocal_312[4] = 0;
				}
				break;
			
			case 12:
				vLocal_111 = { 0f, 0f, -145f };
				vLocal_110 = { -1222,33f, -907,82f, (12,52f - 0,2f) };
				iLocal_105 = func_50(0);
				vLocal_107 = { -1218,283f, -915,7103f, 10,3264f };
				fLocal_108 = 43,8031f;
				iLocal_129 = 3;
				if (func_435(10, 22))
				{
					iLocal_311[0] = 2;
					iLocal_312[0] = 1;
					iLocal_311[1] = 1;
					iLocal_312[1] = 1;
					iLocal_311[2] = 0;
					iLocal_312[2] = 0;
					iLocal_311[3] = 0;
					iLocal_312[3] = 0;
					iLocal_311[4] = 1;
					iLocal_312[4] = 0;
				}
				else
				{
					iLocal_311[0] = 0;
					iLocal_312[0] = 2;
					iLocal_311[1] = 1;
					iLocal_312[1] = 0;
					iLocal_311[2] = 1;
					iLocal_312[2] = 0;
					iLocal_311[3] = 0;
					iLocal_312[3] = 1;
					iLocal_311[4] = 1;
					iLocal_312[4] = 0;
				}
				break;
			
			case 13:
				vLocal_111 = { 0f, 0f, 103f };
				vLocal_110 = { 1134,81f, -982,36f, (46,6f - 0,2f) };
				iLocal_105 = func_50(0);
				vLocal_107 = { 1130,155f, -979,2816f, 45,4158f };
				fLocal_108 = 269,2587f;
				iLocal_129 = 3;
				if (func_435(10, 22))
				{
					iLocal_311[0] = 2;
					iLocal_312[0] = 2;
					iLocal_311[1] = 2;
					iLocal_312[1] = 0;
					iLocal_311[2] = 0;
					iLocal_312[2] = 1;
					iLocal_311[3] = 0;
					iLocal_312[3] = 1;
					iLocal_311[4] = 1;
					iLocal_312[4] = 0;
				}
				else
				{
					iLocal_311[0] = 1;
					iLocal_312[0] = 0;
					iLocal_311[1] = 0;
					iLocal_312[1] = 0;
					iLocal_311[2] = 1;
					iLocal_312[2] = 1;
					iLocal_311[3] = 0;
					iLocal_312[3] = 0;
					iLocal_311[4] = 1;
					iLocal_312[4] = 0;
				}
				break;
			
			case 14:
				vLocal_111 = { 0f, 0f, -41f };
				vLocal_110 = { -1486,67f, -378,46f, (40,35f - 0,2f) };
				iLocal_105 = func_50(0);
				vLocal_107 = { -1479,163f, -375,0302f, 38,1633f };
				fLocal_108 = 36,5415f;
				iLocal_129 = 3;
				if (func_435(10, 22))
				{
					iLocal_311[0] = 0;
					iLocal_312[0] = 0;
					iLocal_311[1] = 2;
					iLocal_312[1] = 1;
					iLocal_311[2] = 0;
					iLocal_312[2] = 2;
					iLocal_311[3] = 0;
					iLocal_312[3] = 1;
					iLocal_311[4] = 1;
					iLocal_312[4] = 0;
				}
				else
				{
					iLocal_311[0] = 2;
					iLocal_312[0] = 0;
					iLocal_311[1] = 1;
					iLocal_312[1] = 0;
					iLocal_311[2] = 1;
					iLocal_312[2] = 2;
					iLocal_311[3] = 0;
					iLocal_312[3] = 0;
					iLocal_311[4] = 1;
					iLocal_312[4] = 0;
				}
				break;
			
			case 15:
				vLocal_111 = { 0f, 0f, 145f };
				vLocal_110 = { (1698,33f - 0,04f), 4923,33f, (42,12f - 0,06f) };
				iLocal_105 = func_50(0);
				vLocal_107 = { 1707,303f, 4918,31f, 41,0636f };
				fLocal_108 = 24,9178f;
				iLocal_129 = 2;
				if (func_435(8, 20))
				{
					iLocal_311[0] = 0;
					iLocal_312[0] = 1;
					iLocal_311[1] = 0;
					iLocal_312[1] = 0;
					iLocal_311[2] = 1;
					iLocal_312[2] = 0;
					iLocal_311[3] = 0;
					iLocal_312[3] = 0;
					iLocal_311[4] = 1;
					iLocal_312[4] = 0;
				}
				else
				{
					iLocal_311[0] = 2;
					iLocal_312[0] = 1;
					iLocal_311[1] = 1;
					iLocal_312[1] = 1;
					iLocal_311[2] = 0;
					iLocal_312[2] = 0;
					iLocal_311[3] = 0;
					iLocal_312[3] = 1;
					iLocal_311[4] = 1;
					iLocal_312[4] = 0;
				}
				break;
			
			case 16:
				vLocal_111 = { 0f, 0f, -87f };
				vLocal_110 = { -706,69f, -913,69f, (19,27f - 0,06f) };
				iLocal_105 = func_50(0);
				vLocal_107 = { -709,7998f, -907,1352f, 18,2156f };
				fLocal_108 = 291,6504f;
				iLocal_129 = 2;
				if (func_435(8, 20))
				{
					iLocal_311[0] = 0;
					iLocal_312[0] = 2;
					iLocal_311[1] = 1;
					iLocal_312[1] = 0;
					iLocal_311[2] = 1;
					iLocal_312[2] = 1;
					iLocal_311[3] = 0;
					iLocal_312[3] = 1;
					iLocal_311[4] = 1;
					iLocal_312[4] = 0;
				}
				else
				{
					iLocal_311[0] = 2;
					iLocal_312[0] = 2;
					iLocal_311[1] = 2;
					iLocal_312[1] = 0;
					iLocal_311[2] = 0;
					iLocal_312[2] = 1;
					iLocal_311[3] = 0;
					iLocal_312[3] = 0;
					iLocal_311[4] = 1;
					iLocal_312[4] = 0;
				}
				break;
			
			case 17:
				vLocal_111 = { 0f, 0f, -125f };
				vLocal_110 = { -47,23f, -1757,64f, (29,48f - 0,06f) };
				iLocal_105 = func_50(0);
				vLocal_107 = { -40,42f, -1751,423f, 28,421f };
				fLocal_108 = 145,6553f;
				iLocal_129 = 2;
				if (func_435(8, 20))
				{
					iLocal_311[0] = 1;
					iLocal_312[0] = 0;
					iLocal_311[1] = 1;
					iLocal_312[1] = 1;
					iLocal_311[2] = 1;
					iLocal_312[2] = 2;
					iLocal_311[3] = 0;
					iLocal_312[3] = 0;
					iLocal_311[4] = 1;
					iLocal_312[4] = 0;
				}
				else
				{
					iLocal_311[0] = 0;
					iLocal_312[0] = 0;
					iLocal_311[1] = 2;
					iLocal_312[1] = 0;
					iLocal_311[2] = 0;
					iLocal_312[2] = 2;
					iLocal_311[3] = 0;
					iLocal_312[3] = 1;
					iLocal_311[4] = 1;
					iLocal_312[4] = 0;
				}
				break;
			
			case 18:
				vLocal_111 = { 0f, 0f, -74f };
				vLocal_110 = { 1164,16f, -322,9f, (69,26f - 0,06f) };
				iLocal_105 = func_50(0);
				vLocal_107 = { 1159,682f, -314,254f, 68,2051f };
				fLocal_108 = 232,6337f;
				iLocal_129 = 2;
				if (func_435(8, 20))
				{
					iLocal_311[0] = 2;
					iLocal_312[0] = 0;
					iLocal_311[1] = 2;
					iLocal_312[1] = 1;
					iLocal_311[2] = 0;
					iLocal_312[2] = 0;
					iLocal_311[3] = 0;
					iLocal_312[3] = 1;
					iLocal_311[4] = 1;
					iLocal_312[4] = 0;
				}
				else
				{
					iLocal_311[0] = 0;
					iLocal_312[0] = 1;
					iLocal_311[1] = 2;
					iLocal_312[1] = 0;
					iLocal_311[2] = 0;
					iLocal_312[2] = 0;
					iLocal_311[3] = 0;
					iLocal_312[3] = 0;
					iLocal_311[4] = 1;
					iLocal_312[4] = 0;
				}
				break;
			
			case 19:
				vLocal_110 = { -1820,5f, 793,78f, (138,32f - 0,22f) };
				vLocal_111 = { 0f, 0f, -47,3f };
				iLocal_105 = func_50(0);
				vLocal_107 = { -1828,907f, 799,6096f, 137,1776f };
				fLocal_108 = 247,1234f;
				iLocal_129 = 2;
				if (func_435(8, 20))
				{
					iLocal_311[0] = 2;
					iLocal_312[0] = 1;
					iLocal_311[1] = 0;
					iLocal_312[1] = 0;
					iLocal_311[2] = 0;
					iLocal_312[2] = 1;
					iLocal_311[3] = 0;
					iLocal_312[3] = 0;
					iLocal_311[4] = 1;
					iLocal_312[4] = 0;
				}
				else
				{
					iLocal_311[0] = 0;
					iLocal_312[0] = 2;
					iLocal_311[1] = 2;
					iLocal_312[1] = 1;
					iLocal_311[2] = 0;
					iLocal_312[2] = 1;
					iLocal_311[3] = 0;
					iLocal_312[3] = 1;
					iLocal_311[4] = 1;
					iLocal_312[4] = 0;
				}
				break;
		}
		vLocal_110 = { unk_0x9EA50C5EC175E58E(vLocal_110, vLocal_111.z, 0f, 0,075f, 0f) };
		vLocal_106 = { unk_0x09E51060F59912ED("mp_am_hold_up", "holdup_victim_20s", vLocal_110, vLocal_111, 0, 2) };
		vVar0 = { unk_0x4AA2C5A4980B3F34("mp_am_hold_up", "holdup_victim_20s", vLocal_110, vLocal_111, 0f, 2) };
		Local_98.f_42 = vVar0.z;
		vLocal_122 = { unk_0x09E51060F59912ED("mp_am_hold_up", "holdup_victim_20s_bag", vLocal_110, vLocal_111, 0, 2) };
		vVar0 = { unk_0x4AA2C5A4980B3F34("mp_am_hold_up", "holdup_victim_20s_bag", vLocal_110, vLocal_111, 0f, 2) };
		fLocal_123 = vVar0.z;
		vLocal_124 = { unk_0x09E51060F59912ED("mp_am_hold_up", "holdup_victim_20s_till", vLocal_110, vLocal_111, 0, 2) };
		vVar0 = { unk_0x4AA2C5A4980B3F34("mp_am_hold_up", "holdup_victim_20s_till", vLocal_110, vLocal_111, 0f, 2) };
		fLocal_125 = vVar0.z;
		Local_100 = func_434(Local_100.f_50);
		if (unk_0x8E1421E2A2A2FBD4())
		{
			Local_98.f_45 = iLocal_311[0];
			if (Local_98.f_45 == 0)
			{
				StringCopy(&(Local_98.f_50), "MP_M_SHOPKEEP_01_PAKISTANI_MINI_01", 64);
				StringCopy(&(Local_98.f_46), "StoreOwner2", 16);
			}
			else if (Local_98.f_45 == 1)
			{
				StringCopy(&(Local_98.f_50), "MP_M_SHOPKEEP_01_LATINO_MINI_01", 64);
				StringCopy(&(Local_98.f_46), "StoreOwner", 16);
			}
			else
			{
				StringCopy(&(Local_98.f_50), "MP_M_SHOPKEEP_01_CHINESE_MINI_01", 64);
				StringCopy(&(Local_98.f_46), "StoreOwner3", 16);
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_100.f_52, 29))
		{
			unk_0xA25B44929E552182(vLocal_110, 0,5f, iLocal_126, 1);
			unk_0x872F1C1F8587CCC7(&(Local_100.f_52), 29);
		}
		return 1;
	}
	return 0;
}

int func_434(int iParam0)//Position - 0x174C2
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 18:
			return 2;
		
		case 15:
			return 3;
		
		case 19:
			return 4;
		
		case 10:
			return 5;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		case 13:
			return 8;
		
		case 14:
			return 9;
		
		case 2:
			return 10;
		
		case 1:
			return 11;
		
		case 3:
			return 12;
		
		case 4:
			return 13;
		
		case 5:
			return 14;
		
		case 6:
			return 15;
		
		case 7:
			return 16;
		
		case 8:
			return 17;
		
		case 9:
			return 18;
		
		case 0:
			return -2;
		
		default:
	}
	return -1;
}

bool func_435(int iParam0, int iParam1)//Position - 0x175A7
{
	return func_436(unk_0x674C9438180770FE(), iParam0, iParam1);
}

int func_436(int iParam0, int iParam1, int iParam2)//Position - 0x175BB
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_437(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x17664
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1393,091f, 3607,383f, 33,9809f };
		*uParam2 = { 1391,178f, 3612,516f, (38,3614f - 0,2f) };
		*uParam3 = 12,5f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3045,013f, 585,9666f, (10,35421f - 0,2f) };
		*uParam2 = { -3048,714f, 584,7961f, 6,948262f };
		*uParam3 = 8,25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3247,313f, 1003,657f, (15,27433f - 0,2f) };
		*uParam2 = { -3251,157f, 1003,984f, 11,83501f };
		*uParam3 = 8,25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 546,5474f, 2665,642f, (44,60108f - 0,2f) };
		*uParam2 = { 547,054f, 2661,794f, 41,15667f };
		*uParam3 = 8,25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2552f, 384,2527f, (111,0656f - 0,2f) };
		*uParam2 = { 2548,145f, 384,4133f, 107,6241f };
		*uParam3 = 8,25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2674,946f, 3284,833f, (57,68088f - 0,2f) };
		*uParam2 = { 2671,569f, 3286,699f, 54,24464f };
		*uParam3 = 8,25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1733,119f, 6418,579f, (37,48002f - 0,2f) };
		*uParam2 = { 1734,839f, 6422,032f, 34,03751f };
		*uParam3 = 8,25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1960,224f, 3746,258f, (34,7878f - 0,2f) };
		*uParam2 = { 1958,295f, 3749,599f, 31,34522f };
		*uParam3 = 8,25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 27,71382f, -1341,968f, (31,93314f - 0,2f) };
		*uParam2 = { 27,71049f, -1338,109f, 28,49479f };
		*uParam3 = 8,25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 377,0183f, 330,808f, (106,0112f - 0,2f) };
		*uParam2 = { 377,9499f, 334,5523f, 102,567f };
		*uParam3 = 8,25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1167,015f, 2711,601f, (40,66147f - 0,2f) };
		*uParam2 = { 1167,082f, 2720,243f, 36,06501f };
		*uParam3 = 8,25f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2965,705f, 389,6696f, (17,64162f - 0,2f) };
		*uParam2 = { -2957,095f, 389,139f, 13,04323f };
		*uParam3 = 8,75f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1222,402f, -909,5575f, (14,92466f - 0,2f) };
		*uParam2 = { -1217,682f, -916,7974f, 10,33735f };
		*uParam3 = 8,75f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133,284f, -981,473f, (49,01414f - 0,2f) };
		*uParam2 = { 1124,708f, -982,6027f, 44,42008f };
		*uParam3 = 8,75f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484,883f, -378,2694f, (42,76172f - 0,2f) };
		*uParam2 = { -1478,771f, -372,1664f, 38,16948f };
		*uParam3 = 8,75f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1704,556f, 4921,806f, (44,02687f - 0,2f) };
		*uParam2 = { 1708,285f, 4919,196f, 41,06359f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -709,019f, -907,7159f, (21,17918f - 0,2f) };
		*uParam2 = { -709,0177f, -903,1516f, 18,21618f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45,16617f, -1751,578f, (31,37973f - 0,2f) };
		*uParam2 = { -42,22961f, -1748,09f, 28,42099f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1160,825f, -317,4214f, (71,16085f - 0,2f) };
		*uParam2 = { 1160,033f, -312,932f, 68,20509f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1826,218f, 796,6393f, (140,1334f - 0,2f) };
		*uParam2 = { -1829,301f, 799,9996f, 137,18f };
		*uParam3 = 4f;
	}
}

void func_438(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x17B25
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1395,548f, 3600,575f, 33,98914f };
		*uParam2 = { 1392,08f, 3609,983f, (37,33543f - 0,2f) };
		*uParam3 = 12,25f;
	}
	if (iParam0 == 1)
	{
		*uParam1 = { -3038,657f, 589,5176f, 6,904751f };
		*uParam2 = { -3045,476f, 587,4066f, (11,31222f - 0,2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 2)
	{
		*uParam1 = { -3240,032f, 1004,482f, 11,8307f };
		*uParam2 = { -3247,188f, 1005,107f, (16,25224f - 0,2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 3)
	{
		*uParam1 = { 544,2278f, 2672,5f, 41,1565f };
		*uParam2 = { 545,201f, 2665,442f, (45,69155f - 0,2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 4)
	{
		*uParam1 = { 2559,176f, 385,3936f, 107,623f };
		*uParam2 = { 2552,054f, 385,6057f, (112,1638f - 0,2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 5)
	{
		*uParam1 = { 2681,864f, 3282,603f, 54,24114f };
		*uParam2 = { 2675,586f, 3285,981f, (58,79021f - 0,2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 6)
	{
		*uParam1 = { 1731,237f, 6411,557f, 34,03723f };
		*uParam2 = { 1734,383f, 6417,952f, (38,58461f - 0,2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 7)
	{
		*uParam1 = { 1964,999f, 3740,795f, 31,34375f };
		*uParam2 = { 1961,384f, 3746,928f, (35,89571f - 0,2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 8)
	{
		*uParam1 = { Vector(28,49392f, -1348,507f, 27,03358f) + Vector(0f, -0,4f, 2f) };
		*uParam2 = { Vector(33,03834f, -1341,382f, 27,05614f) - Vector(0,2f, 0,2f, 0,2f) + Vector(0f, -0,4f, 2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 9)
	{
		*uParam1 = { 376,6309f, 323,5533f, 102,5664f };
		*uParam2 = { 378,3253f, 330,4793f, (107,1095f - 0,2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 10)
	{
		*uParam1 = { 1166,497f, 2703,756f, 37,06307f };
		*uParam2 = { 1166,525f, 2711,974f, (41,66307f - 0,2f) };
		*uParam3 = 7,75f;
	}
	if (iParam0 == 11)
	{
		*uParam1 = { -2973,512f, 390,7873f, 14,04322f };
		*uParam2 = { -2965,288f, 390,2452f, (18,54322f - 0,2f) };
		*uParam3 = 7,75f;
	}
	if (iParam0 == 12)
	{
		*uParam1 = { -1226,417f, -902,6738f, 11,33496f };
		*uParam2 = { -1221,765f, -909,5887f, (15,82626f - 0,2f) };
		*uParam3 = 7,75f;
	}
	if (iParam0 == 13)
	{
		*uParam1 = { 1141,35f, -980,9322f, 45,41594f };
		*uParam2 = { 1132,976f, -982,0952f, (49,91574f - 0,2f) };
		*uParam3 = 7,75f;
	}
	if (iParam0 == 14)
	{
		*uParam1 = { -1490,949f, -383,4771f, 39,16332f };
		*uParam2 = { -1485,006f, -377,6167f, (43,66332f - 0,2f) };
		*uParam3 = 7,75f;
	}
	if (iParam0 == 15)
	{
		*uParam1 = { 1698,98f, 4929,093f, 41,06357f };
		*uParam2 = { 1705,233f, 4924,578f, (45,60386f - 0,2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 16)
	{
		*uParam1 = { -711,77f, -916,4685f, 18,21557f };
		*uParam2 = { -711,7368f, -908,7517f, (22,76488f - 0,2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 17)
	{
		*uParam1 = { -52,90452f, -1756,474f, 28,42097f };
		*uParam2 = { -47,92523f, -1750,614f, (32,94246f - 0,2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 18)
	{
		*uParam1 = { 1159,633f, -326,5087f, 68,20507f };
		*uParam2 = { 1158,335f, -318,9123f, (72,74828f - 0,2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 19)
	{
		*uParam1 = { -1822,373f, 788,2851f, 137,1876f };
		*uParam2 = { -1827,484f, 794,0739f, (141,6933f - 0,2f) };
		*uParam3 = 14f;
	}
}

void func_439(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x17FD2
{
	func_440(iParam0, uParam5, uParam6);
	switch (iParam0)
	{
		case 0:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0xC0765AFBFA616644(*uParam5, "v_methlab");
			}
			*uParam2 = -1621784842;
			*uParam4 = -924210258;
			*uParam3 = -1;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0xC0765AFBFA616644(*uParam5, "v_shop_247");
			}
			*uParam2 = 1569794095;
			*uParam4 = 462608346;
			*uParam3 = -1;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0xC0765AFBFA616644(*uParam5, "v_gen_liquor");
			}
			*uParam2 = -278510267;
			*uParam4 = -1293435817;
			*uParam3 = -1;
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0xC0765AFBFA616644(*uParam5, "v_gasstation");
			}
			*uParam2 = -1659520475;
			*uParam4 = -1272390353;
			*uParam3 = -835664728;
			break;
	}
}

void func_440(int iParam0, var uParam1, var uParam2)//Position - 0x18138
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1394,169f, 3599,86f, 34,0121f };
			*uParam2 = { 1395,548f, 3600,575f, 33,98914f };
			break;
		
		case 1:
			*uParam1 = { -3038,908f, 589,5187f, 6,9048f };
			*uParam2 = { -3038,657f, 589,5176f, 6,904751f };
			break;
		
		case 2:
			*uParam1 = { -3240,317f, 1004,433f, 11,8307f };
			*uParam2 = { -3240,032f, 1004,482f, 11,8307f };
			break;
		
		case 3:
			*uParam1 = { 544,2802f, 2672,811f, 41,1566f };
			*uParam2 = { 544,2278f, 2672,5f, 41,1565f };
			break;
		
		case 4:
			*uParam1 = { 2559,247f, 385,5266f, 107,623f };
			*uParam2 = { 2559,176f, 385,3936f, 107,623f };
			break;
		
		case 5:
			*uParam1 = { 2682,003f, 3282,543f, 54,2411f };
			*uParam2 = { 2681,864f, 3282,603f, 54,24114f };
			break;
		
		case 6:
			*uParam1 = { 1731,21f, 6411,403f, 34,0372f };
			*uParam2 = { 1731,237f, 6411,557f, 34,03723f };
			break;
		
		case 7:
			*uParam1 = { 1965,054f, 3740,555f, 31,3448f };
			*uParam2 = { 1964,999f, 3740,795f, 31,34375f };
			break;
		
		case 8:
			*uParam1 = { Vector(28,5036f, -1348,813f, 27,0641f) + Vector(0f, -0,4f, 2f) };
			*uParam2 = { Vector(28,49392f, -1348,507f, 27,03358f) + Vector(0f, -0,4f, 2f) };
			break;
		
		case 9:
			*uParam1 = { 376,6533f, 323,6471f, 102,5664f };
			*uParam2 = { 376,6309f, 323,5533f, 102,5664f };
			break;
		
		case 10:
			*uParam1 = { Vector(37,1573f, 2703,114f, 1195,432f) + Vector(0f, 0,39f, -29,04f) };
			*uParam2 = { 1166,497f, 2703,756f, 37,06307f };
			break;
		
		case 11:
			*uParam1 = { -2973,262f, 390,8184f, 14,0433f };
			*uParam2 = { -2973,512f, 390,7873f, 14,04322f };
			break;
		
		case 12:
			*uParam1 = { -1226,464f, -902,5864f, 11,2783f };
			*uParam2 = { -1226,417f, -902,6738f, 11,33496f };
			break;
		
		case 13:
			*uParam1 = { 1141,36f, -980,8802f, 45,4155f };
			*uParam2 = { 1141,35f, -980,9322f, 45,41594f };
			break;
		
		case 14:
			*uParam1 = { -1491,057f, -383,5728f, 39,1706f };
			*uParam2 = { -1490,949f, -383,4771f, 39,16332f };
			break;
		
		case 15:
			*uParam1 = { 1698,808f, 4929,198f, 41,0783f };
			*uParam2 = { 1698,98f, 4929,093f, 41,06357f };
			break;
		
		case 16:
			*uParam1 = { -711,721f, -916,6965f, 18,2145f };
			*uParam2 = { -711,77f, -916,4685f, 18,21557f };
			break;
		
		case 17:
			*uParam1 = { -53,124f, -1756,405f, 28,421f };
			*uParam2 = { -52,90452f, -1756,474f, 28,42097f };
			break;
		
		case 18:
			*uParam1 = { 1159,542f, -326,6986f, 67,923f };
			*uParam2 = { 1159,633f, -326,5087f, 68,20507f };
			break;
		
		case 19:
			*uParam1 = { -1822,287f, 788,006f, 137,1859f };
			*uParam2 = { -1822,373f, 788,2851f, 137,1876f };
			break;
	}
}

int func_441(var uParam0, bool bParam1)//Position - 0x1850F
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar1 = 9999,9f;
	iVar2 = 0;
	while (iVar2 < 20)
	{
		fVar0 = unk_0xBE3C4023003180FC(func_85(unk_0x9EB17624F44A8DA4()), func_442(iVar2), 1);
		if (fVar0 < fVar1)
		{
			if (bParam1)
			{
				if (!unk_0xC80D31E4B587871C(Global_2422565.f_62, iVar2) && unk_0xC80D31E4B587871C(Global_2422565.f_64, iVar2))
				{
					fVar1 = fVar0;
					*uParam0 = iVar2;
				}
			}
			else
			{
				fVar1 = fVar0;
				*uParam0 = iVar2;
			}
		}
		iVar2++;
	}
	return 1;
}

Vector3 func_442(int iParam0)//Position - 0x1858A
{
	vector3 vVar0;
	var uVar1;
	
	func_440(iParam0, &vVar0, &uVar1);
	return vVar0;
}

int func_443(int iParam0)//Position - 0x185A0
{
	return Local_99[iParam0 /*10*/].f_4;
}

void func_444()//Position - 0x185B0
{
	Global_2447174.f_671.f_28 = 0;
}

void func_445()//Position - 0x185C2
{
	if (Global_1312416.f_1 == 1)
	{
		func_446(0);
		Global_1312416.f_1 = 0;
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_9 = 0;
	}
}

void func_446(int iParam0)//Position - 0x185EE
{
	if (func_416())
	{
		if (iParam0 == 1)
		{
			if (Global_2512808.f_4363 == -1)
			{
				Global_2512808.f_4363 = 60000;
			}
			func_447(&(Global_2512808.f_4361), 0, 0);
			if (Global_2512808.f_4366 == -1)
			{
				Global_2512808.f_4366 = 10000;
			}
			func_447(&(Global_2512808.f_4364), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_8 = 0;
			func_415(1);
		}
		if ((!unk_0x4916190900E76373() && !func_414()) && !func_413(unk_0x9EB17624F44A8DA4()))
		{
			Global_979885 = 0;
		}
	}
}

void func_447(var uParam0, bool bParam1, bool bParam2)//Position - 0x18688
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

void func_448()//Position - 0x186C5
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!func_44(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		iVar0 = 1;
		if (unk_0xC80D31E4B587871C(Local_100.f_53, 6) && !unk_0xC80D31E4B587871C(Local_100.f_53, 5))
		{
			iVar1 = unk_0x3C5A2E3D125A1FB1(-1);
			iVar2 = 0;
			unk_0x872F1C1F8587CCC7(&iVar2, 8);
			unk_0x872F1C1F8587CCC7(&iVar2, 4);
			unk_0x872F1C1F8587CCC7(&iVar2, 1);
			if (iLocal_330 > Global_262145.f_166)
			{
				iLocal_330 = Global_262145.f_166;
			}
			if (iVar1 < iLocal_330)
			{
				if (iVar1 > 0)
				{
					if (func_49(func_50(1)))
					{
						if (unk_0x92F815ACDF5BA5DD(iVar1, 0, 0, 0, &uVar3, -1))
						{
							if (func_215())
							{
								if (!unk_0xC80D31E4B587871C(Global_2512808.f_7, 1))
								{
									Global_2512808.f_4682 = iVar1;
									Global_2512808.f_4683 = iVar2;
									Global_2512808.f_4684 = { unk_0x1478170665DA3CEC(unk_0xFC1458A37D98B502(), 1067030938, 1069547520) };
									func_207(&(Global_2512808.f_4681), -1135378931, 537254313, 1474183246, 1022400740, Global_2512808.f_4682, 1, 3);
									unk_0x872F1C1F8587CCC7(&(Global_2512808.f_7), 1);
									iLocal_330 = 0;
									unk_0x872F1C1F8587CCC7(&(Local_100.f_53), 5);
								}
							}
							else
							{
								unk_0x88A6626A005F30E3(joaat("pickup_money_variable"), unk_0x1478170665DA3CEC(unk_0xFC1458A37D98B502(), 1067030938, 1069547520), iVar2, iVar1, func_50(1), 0, 0);
								func_202(-iVar1, 1, 1, 1092616192);
								unk_0x55350D97100E0BD5(iVar1, 0, 0);
								func_206(1022400740, iVar1, &uVar4, 0, 0, 0);
								iLocal_330 = 0;
								func_449();
								unk_0x872F1C1F8587CCC7(&(Local_100.f_53), 5);
							}
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
			else if (iLocal_330 > 0)
			{
				if (func_49(func_50(1)))
				{
					if (unk_0x92F815ACDF5BA5DD(iLocal_330, 0, 0, 0, &uVar3, -1))
					{
						if (func_215())
						{
							if (!unk_0xC80D31E4B587871C(Global_2512808.f_7, 1))
							{
								Global_2512808.f_4682 = iLocal_330;
								Global_2512808.f_4683 = iVar2;
								Global_2512808.f_4684 = { unk_0x1478170665DA3CEC(unk_0xFC1458A37D98B502(), 1067030938, 1069547520) };
								func_207(&(Global_2512808.f_4681), -1135378931, 537254313, 1474183246, 1022400740, Global_2512808.f_4682, 1, 3);
								unk_0x872F1C1F8587CCC7(&(Global_2512808.f_7), 1);
								iLocal_330 = 0;
								unk_0x872F1C1F8587CCC7(&(Local_100.f_53), 5);
							}
						}
						else
						{
							unk_0x88A6626A005F30E3(joaat("pickup_money_variable"), unk_0x1478170665DA3CEC(unk_0xFC1458A37D98B502(), 1067030938, 1069547520), iVar2, iLocal_330, func_50(1), 0, 0);
							func_202(-iLocal_330, 1, 1, 1092616192);
							unk_0x55350D97100E0BD5(iLocal_330, 0, 0);
							func_206(1022400740, iLocal_330, &uVar5, 0, 0, 0);
							iLocal_330 = 0;
							func_449();
							unk_0x872F1C1F8587CCC7(&(Local_100.f_53), 5);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
		}
		if (iVar0 == 1)
		{
			func_469();
		}
		else
		{
			return;
		}
	}
}

void func_449()//Position - 0x1897D
{
	Global_2512808.f_272 = 0;
	Global_2512808.f_273 = 0;
	Global_2512808.f_274 = 0;
}

int func_450()//Position - 0x1899D
{
	var uVar0;
	
	func_457(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_456())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_455())
	{
		return 1;
	}
	if (func_454(157))
	{
		if (!func_453())
		{
			return 1;
		}
	}
	if (func_454(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_451() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_451()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_451()//Position - 0x18A27
{
	switch (func_452())
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

int func_452()//Position - 0x18A5B
{
	return Global_25233;
}

bool func_453()//Position - 0x18A66
{
	return Global_2447174.f_586;
}

int func_454(int iParam0)//Position - 0x18A75
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_455()//Position - 0x18A8C
{
	return Global_2456830;
}

bool func_456()//Position - 0x18A98
{
	return Global_2447174.f_581;
}

void func_457(var uParam0)//Position - 0x18AA7
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
					func_458(iVar0);
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

void func_458(int iParam0)//Position - 0x18B1A
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_44(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_459(iVar2, &bVar3))
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

int func_459(int iParam0, var uParam1)//Position - 0x18B9B
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

void func_460()//Position - 0x18BFA
{
	system::wait(0);
}

void func_461(int iParam0, bool bParam1, int iParam2)//Position - 0x18C07
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0xEBD8A0B96FCAF579())
		{
			unk_0x7635EA803CE40962(0);
		}
	}
	if (!unk_0x3A711520F83BAE98())
	{
		iVar0 = iParam2;
		unk_0x59F2A26BF856E30A(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_466())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0x552F39AE86E07792(iParam0) && unk_0x5BEF7A5AB8F17255(iParam0))
		{
			iVar25 = unk_0x25D049AAC4603E65(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x3A711520F83BAE98())
				{
					unk_0xB68F1251512BDC18(1);
				}
				else if (bVar13 || (!func_225(unk_0x9EB17624F44A8DA4(), 0) && !func_255()))
				{
					unk_0xB3A8974D2C811672(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x3A711520F83BAE98() && !bVar18)
					{
						unk_0xB68F1251512BDC18(0);
					}
					Global_2422736[iParam0 /*420*/].f_259 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_465(iVar25) && !unk_0xDDF5130488C0B76A(iVar25))
				{
					if (!bVar21)
					{
						unk_0xB18E1DBC397238E1(iVar25, true, 0);
					}
				}
				if (!unk_0xDFFD5F8C8ABCB7EF(iVar25))
				{
					if (!bVar20)
					{
						unk_0xEDC33A771FAEB393(iVar25, false);
					}
					unk_0xFBA991D3A851E195(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xEDC33A771FAEB393(iVar25, false);
				}
				unk_0x5C5D33A1B2711D21(iVar25, true);
				unk_0x8FA21D9CF7681249(iParam0, 0);
				unk_0x8A92C5AE18686726(iVar25);
				unk_0x5718F894FDA63A9E(iVar25, 1);
				func_464();
				func_463();
				if (unk_0x56B73C6866440457())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x40189ECE75CF9724())
				{
				}
				Global_2422736[iParam0 /*420*/].f_260 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_465(iVar25) && !unk_0xDDF5130488C0B76A(iVar25))
				{
					if (!bVar21)
					{
						unk_0xB18E1DBC397238E1(iVar25, !bVar14, 0);
					}
					if (!unk_0xDFFD5F8C8ABCB7EF(iVar25))
					{
						if (!bVar20)
						{
							unk_0xEDC33A771FAEB393(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xFBA991D3A851E195(iVar25, 1);
						}
					}
					if (func_462(Global_4456448.f_143970))
					{
						unk_0xEDC33A771FAEB393(iVar25, true);
					}
				}
				if (Global_1312831)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0x8FA21D9CF7681249(iParam0, 0);
				}
				else
				{
					unk_0x8FA21D9CF7681249(iParam0, 1);
				}
				unk_0x5C5D33A1B2711D21(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x6728497EE586D1FE(iVar25) && !unk_0x88DDBE9908752BF0(iVar25, 0))
					{
						unk_0x957CEE967C939968(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0x59F2A26BF856E30A(iParam0, bParam1, iVar26);
		}
	}
}

bool func_462(int iParam0)//Position - 0x18FE9
{
	return iParam0 == 17;
}

void func_463()//Position - 0x18FF6
{
	vector3 vVar0;
	
	Global_2436181.f_1117 = 0;
	Global_2436181.f_1118 = 0;
	Global_2436181.f_1119 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2436181.f_1124 = -1;
	Global_2436181.f_1125 = 0;
	Global_2405047.f_2650 = { vVar0 };
}

void func_464()//Position - 0x19043
{
	Global_2405047.f_675 = 0;
	Global_2405047.f_2693 = 0;
	Global_2405047.f_508 = 0;
	Global_2405047.f_587 = 0;
	Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_222 = 0;
	Global_2405047.f_2649 = 0;
}

int func_465(int iParam0)//Position - 0x19081
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x78F50AA8F955BEFC(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_466()//Position - 0x190B2
{
	if (func_467() == 0)
	{
		return 1;
	}
	return 0;
}

int func_467()//Position - 0x190C7
{
	return Global_1312466.f_18;
}

bool func_468(bool bParam0)//Position - 0x190D5
{
	if (bParam0)
	{
		return (Global_2447174.f_671.f_28 && unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == Global_2447174.f_671.f_31);
	}
	return Global_2447174.f_671.f_28;
}

void func_469()//Position - 0x19111
{
	int iVar0;
	
	Global_2512808.f_8 = 0;
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_430(Local_98))
		{
			if (unk_0xE53FD7AF7F25C0A8(Local_98) || (!unk_0x0070DE1A1E73C71C(Local_98) && unk_0x8E1421E2A2A2FBD4()))
			{
				unk_0x66698545014E2F21(unk_0x47BA76CE3C825A08(Local_98), 0);
				unk_0x7473BE00BC5FB4E3(unk_0x47BA76CE3C825A08(Local_98));
				if (unk_0xC80D31E4B587871C(Local_100.f_52, 22))
				{
					if (unk_0xC80D31E4B587871C(Local_100.f_52, 20))
					{
						if (Local_98.f_3 != 7)
						{
							if (!unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 9))
							{
								unk_0xB8E08BD5B184DF4E(unk_0x47BA76CE3C825A08(Local_98));
								unk_0xAB30B1CF01A198C1(unk_0x47BA76CE3C825A08(Local_98), uLocal_116);
								unk_0x771A86309E0CA47B(unk_0x47BA76CE3C825A08(Local_98), 0);
							}
						}
						else if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98), -1442466670) != 0 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98), -1442466670) != 1)
						{
							unk_0xB8E08BD5B184DF4E(unk_0x47BA76CE3C825A08(Local_98));
							if (!unk_0xA8388473C755363D(unk_0x47BA76CE3C825A08(Local_98), joaat("weapon_pistol"), 0))
							{
								unk_0x8135E0D869A8ECFC(unk_0x47BA76CE3C825A08(Local_98), joaat("weapon_pistol"), 25000, 1);
								unk_0xBB3CC641B6AED5E5(unk_0x47BA76CE3C825A08(Local_98), 30);
							}
							func_274(4);
							unk_0x992E814DF611C58C(unk_0x47BA76CE3C825A08(Local_98), 20f, 0);
						}
					}
					else if ((unk_0xC80D31E4B587871C(Local_98.f_23, 3) || !func_9()) || !func_473())
					{
						if (!unk_0xC80D31E4B587871C(Local_99[unk_0x622FF3AE4B1D07C3() /*10*/], 9))
						{
							unk_0xB8E08BD5B184DF4E(unk_0x47BA76CE3C825A08(Local_98));
							unk_0xAB30B1CF01A198C1(unk_0x47BA76CE3C825A08(Local_98), uLocal_116);
							unk_0x771A86309E0CA47B(unk_0x47BA76CE3C825A08(Local_98), 0);
						}
					}
					else
					{
						unk_0xB8E08BD5B184DF4E(unk_0x47BA76CE3C825A08(Local_98));
						unk_0xE9B3D12A64CC7C1A(unk_0x47BA76CE3C825A08(Local_98), 1);
						unk_0x270054D97CD161A8(unk_0x47BA76CE3C825A08(Local_98), -1);
						unk_0x771A86309E0CA47B(unk_0x47BA76CE3C825A08(Local_98), 0);
					}
				}
			}
		}
		if ((unk_0xC80D31E4B587871C(Local_98.f_23, 3) || !func_9()) || unk_0x5C6098C2BAD00378() <= 1)
		{
			if (unk_0x93C304998B457C45(Local_98.f_13))
			{
				if (unk_0xE53FD7AF7F25C0A8(Local_98.f_13))
				{
					unk_0x6B7C10B19928914F(unk_0xE8BC72FED1586931(Local_98.f_13), 1, 1);
					func_45(&(Local_98.f_13));
				}
			}
		}
		if (((unk_0xC80D31E4B587871C(Local_98.f_23, 3) || !func_9()) || unk_0xC80D31E4B587871C(Local_100.f_52, 20)) || unk_0x5C6098C2BAD00378() <= 1)
		{
			if (unk_0x93C304998B457C45(Local_98.f_14))
			{
				if (unk_0xE53FD7AF7F25C0A8(Local_98.f_14))
				{
					func_45(&(Local_98.f_14));
				}
			}
		}
		if (func_215() && unk_0xC80D31E4B587871C(Global_2512808.f_7, 1))
		{
			if (func_329(Global_2512808.f_4681) == 1)
			{
				func_472(Global_2512808.f_4681, 4);
			}
			else
			{
				func_209(Global_2512808.f_4681);
			}
			unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_7), 1);
		}
		if (Local_98.f_12 == 6)
		{
			if (unk_0x93C304998B457C45(Local_98))
			{
				if (unk_0xB80A4DA4C06A76F1(unk_0x47BA76CE3C825A08(Local_98), "XP_Blocker"))
				{
					unk_0x48F91F7D1A76332F(unk_0x47BA76CE3C825A08(Local_98), "XP_Blocker");
				}
			}
		}
		if (unk_0x8E1421E2A2A2FBD4())
		{
			unk_0x15AAE2A89BBE596D(Local_98.f_30);
		}
	}
	func_471();
	unk_0xFCCDDE0E48CF9588("mp_am_hold_up");
	unk_0x3293BE320769D0FF();
	if (func_150("SHR_MENU"))
	{
		unk_0x3E80C2F7BC665259(1);
	}
	Global_2512808.f_9 = func_183();
	unk_0x137FC8E0F58D9E0B(func_432(Local_100));
	func_165(1, Local_100);
	if (Local_100.f_14 != -1)
	{
		func_303(&(Local_100.f_14));
	}
	Global_2512808.f_27 = Local_100;
	if (Global_2512808.f_5429.f_4 == 1)
	{
		Global_2512808.f_5429.f_4 = 0;
	}
	if (Global_2512808.f_5429.f_5 == 1)
	{
		Global_2512808.f_5429.f_5 = 0;
	}
	if (unk_0xC80D31E4B587871C(Local_100.f_52, 29))
	{
		unk_0x143DCD09D82EE129(vLocal_110, 0,5f, iLocal_126, 1);
	}
	if (unk_0xC80D31E4B587871C(Local_100.f_53, 7))
	{
		func_445();
		unk_0x0EE72DB1CD8A3B86(&(Local_100.f_53), 7);
	}
	if (unk_0x3A711520F83BAE98())
	{
		if (unk_0xC80D31E4B587871C(Local_98.f_23, 6) || unk_0xC80D31E4B587871C(Local_98.f_23, 21))
		{
			if (unk_0xC80D31E4B587871C(Local_98.f_23, 21))
			{
				iVar0 = 1;
			}
			unk_0x0ADA2CC02FCE749A(30, iLocal_329, iLocal_330, iVar0);
		}
	}
	if (unk_0x8EA3C8E091EA5BA4(Local_100.f_1))
	{
		if (unk_0xD85097DDDA5447BE(Local_100.f_1))
		{
			unk_0x3458550DF8E9B453(false, 0, 3000, 1, 0, 0);
		}
		unk_0x02934BABFD4CD384(Local_100.f_1, 0);
	}
	func_470();
}

void func_470()//Position - 0x19528
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_471()//Position - 0x19534
{
	unk_0xFAA3EF7FF92E1F9E(&uLocal_113);
	unk_0xFAA3EF7FF92E1F9E(&uLocal_114);
}

void func_472(int iParam0, int iParam1)//Position - 0x1954A
{
	if (func_315(iParam0) != -1)
	{
		if (Global_4261865[iParam0 /*80*/].f_2 == 1)
		{
			Global_4261865[iParam0 /*80*/].f_72 = iParam1;
		}
	}
}

int func_473()//Position - 0x19576
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
		{
			iVar1 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0));
			iVar2 = unk_0x25D049AAC4603E65(iVar1);
			if (func_44(iVar1, 1, 1))
			{
				if (unk_0x1ACD6691B9C9AA46(iVar2) == iLocal_134)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_474(struct<21> Param0)//Position - 0x195D0
{
	int iVar0;
	
	func_480(func_481(Param0), Param0);
	unk_0xBC60D873F181A18E(2);
	unk_0xB66EA47EE710E67F(8);
	func_478(0, -1, 0);
	unk_0x6E3ED3AE1C20445F(&Local_98, 73);
	unk_0xE7BC983D1386C9EE(&Local_99, 321);
	unk_0x941BE77305BB5695(0);
	if (!func_477())
	{
		return 0;
	}
	if (unk_0x8E1421E2A2A2FBD4())
	{
		func_49(func_50(0));
		func_49(func_50(1));
		func_49(func_50(2));
		unk_0x6450931B826B49D9("mp_am_hold_up");
		unk_0x6450931B826B49D9("mp_missheist_countrybank@cower");
		Local_98.f_44 = 8;
		if (func_476())
		{
			unk_0x872F1C1F8587CCC7(&(Local_98.f_24), 11);
		}
		else if (func_475())
		{
			unk_0x872F1C1F8587CCC7(&(Local_98.f_24), 12);
		}
		Local_98.f_28 = unk_0x63A6486593EC7EC3(1, 11);
		Local_98.f_31 = unk_0x63A6486593EC7EC3(1, 5);
		if ((func_12() && !func_423(unk_0x9EB17624F44A8DA4(), 1)) && !func_423(unk_0x9EB17624F44A8DA4(), 2))
		{
			Local_98.f_43 = 2;
			unk_0x872F1C1F8587CCC7(&(Local_98.f_25), 0);
		}
		else
		{
			Local_98.f_43 = 1;
		}
		Local_98.f_71 = unk_0x5B811202FCBE9E9D(18f, 28f);
	}
	if (func_93(unk_0x9EB17624F44A8DA4()) != 155)
	{
		unk_0xF8EC17D3072FBED8(func_50(1), 0);
	}
	iVar0 = func_130(1187, -1, 0);
	if (unk_0xC80D31E4B587871C(iVar0, 20) && unk_0xC80D31E4B587871C(iVar0, 21))
	{
		unk_0x872F1C1F8587CCC7(&(Local_100.f_53), 1);
	}
	Local_99[unk_0x622FF3AE4B1D07C3() /*10*/].f_4 = 0;
	return 1;
}

int func_475()//Position - 0x1972C
{
	if (Local_100.f_50 >= 0 && Local_100.f_50 <= 9)
	{
		if (func_435(5, 6) || func_435(17, 18))
		{
			return 1;
		}
		return 0;
	}
	if (Local_100.f_50 >= 10 && Local_100.f_50 <= 14)
	{
		if (func_435(9, 10) || func_435(21, 22))
		{
			return 1;
		}
		return 0;
	}
	if (Local_100.f_50 >= 15 && Local_100.f_50 <= 19)
	{
		if (func_435(7, 8) || func_435(19, 20))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_476()//Position - 0x197D8
{
	if (Local_100.f_50 >= 0 && Local_100.f_50 <= 9)
	{
		if (func_435(6, 7) || func_435(18, 19))
		{
			return 1;
		}
		return 0;
	}
	if (Local_100.f_50 >= 10 && Local_100.f_50 <= 14)
	{
		if (func_435(10, 11) || func_435(22, 23))
		{
			return 1;
		}
		return 0;
	}
	if (Local_100.f_50 >= 15 && Local_100.f_50 <= 19)
	{
		if (func_435(8, 9) || func_435(20, 21))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_477()//Position - 0x19884
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
		if (func_456())
		{
			return 0;
		}
		if (func_454(155))
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

int func_478(int iParam0, int iParam1, bool bParam2)//Position - 0x198DD
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_470();
			}
			else
			{
				return 0;
			}
		}
		if (!func_479())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_470();
					}
					else
					{
						return 0;
					}
				}
				if (func_456())
				{
					if (!bParam2)
					{
						func_470();
					}
					else
					{
						return 0;
					}
				}
				if (func_454(155))
				{
					if (!bParam2)
					{
						func_470();
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
					func_470();
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
				func_470();
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
			func_470();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_479()//Position - 0x199F2
{
	return Global_1312831;
}

void func_480(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x199FE
{
	if (!unk_0x3A711520F83BAE98())
	{
		func_470();
	}
	unk_0xAEA89A7E72415961(iParam0, 0, Param1.f_16);
}

int func_481(int iParam0)//Position - 0x19A1D
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

