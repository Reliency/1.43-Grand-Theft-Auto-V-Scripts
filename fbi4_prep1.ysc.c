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
	bool bLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	struct<4> Local_38[10];
	bool bLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<27> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	struct<11> Local_45[2];
	struct<25> Local_46[21];
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	vector3 vLocal_54 = { 0f, 0f, 0f };
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = -1;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 1000;
	var uLocal_66 = 1000;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	struct<8> Local_73[3];
	var uLocal_74 = 15;
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
	var uLocal_126 = 15;
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
	int iLocal_178 = 0;
	char* sLocal_179 = NULL;
	char* sLocal_180 = NULL;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	vector3 vLocal_185 = { 0f, 0f, 0f };
	vector3 vLocal_186 = { 0f, 0f, 0f };
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	bool bLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	struct<14> Local_197 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_198 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_199 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	char[] cLocal_204[8] = 0;
	var uLocal_205 = 16;
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
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
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
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	char[] cLocal_370[8] = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	int iLocal_374[3] = { 0, 0, 0 };
	int iLocal_375 = 0;
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
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	iLocal_41 = 21;
	fLocal_47 = -1f;
	vLocal_54 = { 0f, 0f, 0f };
	iLocal_55 = -1;
	sLocal_180 = "FBIPRA";
	vLocal_185 = { 0f, 0f, 0f };
	vLocal_186 = { 1381,472f, -2072,245f, 50,9981f };
	cLocal_204 = "FIBP1AU";
	iLocal_375 = -1;
	unk_0xBC03901A15107317(1);
	if (unk_0x7D9C4B359376D38A(19))
	{
		sLocal_179 = 0;
		func_379();
		func_367();
	}
	func_350();
	if (func_349())
	{
		func_348(918,8851f, -269,789f, 67,2145f, 68,2149f, 1, 0);
	}
	func_334();
	while (true)
	{
		unk_0x48D75120C879E65E("M_TrT", 0);
		if (func_333(unk_0xFC1458A37D98B502()))
		{
			func_329();
			func_325();
			unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
			unk_0xAD6F3DFB1F960182(0,8f);
			switch (iLocal_68)
			{
				case 0:
					func_264();
					break;
				
				case 1:
					func_233();
					break;
				
				case 2:
					func_215();
					break;
				
				case 3:
					func_102();
					break;
				
				case 4:
					func_38();
					break;
				
				case 5:
					func_1();
					break;
			}
			if (iLocal_68 != 5)
			{
				if (iLocal_68 >= 0 && !bLocal_28)
				{
				}
			}
		}
		system::wait(0);
	}
}

void func_1()//Position - 0x189
{
	int iVar0;
	
	switch (iLocal_69)
	{
		case 0:
			unk_0x84CDD933AFA470D2();
			unk_0x3E80C2F7BC665259(1);
			func_37();
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				if (func_36(iVar0) && unk_0x82FF3DFBC3965CC0(iVar0) == joaat("towtruck"))
				{
					func_35(iVar0, 2);
				}
			}
			if (!unk_0xAB019B170BF1309C(sLocal_179))
			{
				func_33(sLocal_179);
			}
			else
			{
				func_18(0);
			}
			iLocal_69 = 1;
			break;
		
		case 1:
			if (func_17())
			{
				if (func_16())
				{
					func_11();
				}
				func_2();
				unk_0x247EAA2E93D4A021(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 30f, 1, 0, 0, false);
				func_367();
			}
			break;
	}
}

void func_2()//Position - 0x23E
{
	func_9(&Local_199);
	func_9(&iLocal_201);
	func_9(&iLocal_200);
	func_8(&Local_197);
	func_8(&Local_198);
	func_9(&iLocal_202);
	func_3();
}

void func_3()//Position - 0x274
{
	func_7(&(Local_45[0 /*11*/].f_4));
	func_7(&(Local_45[1 /*11*/].f_4));
	func_6(&iLocal_43);
	func_5(&(Local_45[0 /*11*/]), 1, 0, 1);
	func_5(&(Local_45[1 /*11*/]), 1, 0, 1);
	func_4(&(Local_46[iLocal_48 /*25*/].f_17), 0);
	unk_0x9EA1BA1DD45771B3(iLocal_40);
	unk_0xFCCDDE0E48CF9588("missfbi4prepp1");
	unk_0x2682425A18AA99E9("missfbi4prepp1_garbageman");
}

void func_4(int iParam0, bool bParam1)//Position - 0x2D2
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (unk_0x6049C20F5D5C185B(*iParam0))
		{
			unk_0x6B7C10B19928914F(*iParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x3A703774620FDB42(iParam0);
		}
		else
		{
			unk_0x3B426B73C7C1DBB0(*iParam0);
		}
	}
}

void func_5(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x30D
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(*iParam0))
		{
			unk_0xCFF0CD14B439821D(*iParam0, 0, 1);
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

void func_6(int iParam0)//Position - 0x35D
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

void func_7(int iParam0)//Position - 0x395
{
	if (unk_0xA6DECE14FC9A8C51(*iParam0))
	{
		unk_0xAAAC88CC20771601(*iParam0, 0);
		unk_0xE30CF11C0EE14316(iParam0);
	}
}

void func_8(int iParam0)//Position - 0x3B5
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(*iParam0, 0))
		{
			unk_0xCFF0CD14B439821D(*iParam0, 0, 1);
		}
		if (!unk_0x9761C10D57B68069(*iParam0))
		{
			unk_0xDD29FF4BAB8AFF9C(*iParam0, true, 0);
		}
		unk_0x68433819717660CF(iParam0);
	}
}

void func_9(int iParam0)//Position - 0x3F6
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (!unk_0x9761C10D57B68069(*iParam0))
		{
			unk_0xDD29FF4BAB8AFF9C(*iParam0, true, 0);
		}
		if (func_36(*iParam0))
		{
			if (unk_0x9761C10D57B68069(*iParam0) && unk_0xCB234F3DD6FF9368(*iParam0, 1))
			{
				if (func_10(unk_0xFC1458A37D98B502()))
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
			if (func_10(unk_0xFC1458A37D98B502()))
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

int func_10(int iParam0)//Position - 0x492
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

void func_11()//Position - 0x4B3
{
	func_14(918,8851f, -269,789f, 67,2145f, 325,9081f);
	func_12(917,5291f, -263,8595f, 67,3489f, 188,0605f);
}

void func_12(vector3 vParam0, float fParam1)//Position - 0x4EB
{
	func_13(&(Global_98118.f_2875), vParam0, fParam1);
}

void func_13(var uParam0, vector3 vParam1, var uParam2)//Position - 0x504
{
	*uParam0 = { vParam1 };
	uParam0->f_6 = uParam2;
}

void func_14(vector3 vParam0, float fParam1)//Position - 0x51A
{
	if (func_15(Global_71096, 0f, 0f, 0f, 0))
	{
		Global_71096 = { vParam0 };
		Global_71099 = fParam1;
	}
}

bool func_15(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x546
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_16()//Position - 0x58D
{
	if (Global_92833 == 7)
	{
		return 1;
	}
	return 0;
}

int func_17()//Position - 0x5A2
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_92833 == 7 || Global_92833 == 8)
	{
		return 1;
	}
	return 0;
}

void func_18(int iParam0)//Position - 0x5CF
{
	int iVar0;
	
	if (Global_104555.f_9055 || func_32(0))
	{
		iVar0 = func_31();
		if (!func_19(iVar0))
		{
			return;
		}
		unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 5);
		Global_92869 = iParam0;
	}
}

int func_19(int iParam0)//Position - 0x614
{
	int iVar0;
	int iVar1;
	
	func_24();
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0xFFC4F532496D6427(5000);
	}
	iVar0 = Global_83730[iParam0 /*5*/];
	iVar1 = Global_71125.f_109[iVar0 /*4*/];
	func_23(iVar1, 1);
	unk_0xEC27A5F45CFF069F(unk_0x9EB17624F44A8DA4());
	unk_0x54F90CB32317E720(unk_0x9EB17624F44A8DA4());
	func_20(&(Global_104555.f_2353.f_539), iVar1);
	if (Global_87153 == Global_92870)
	{
		Global_104555.f_9055.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xC80D31E4B587871C(Global_83766[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0xC623E2691C004001(0);
		}
	}
	Global_104555.f_9055.f_330[iVar1 /*6*/].f_2++;
	Global_87153 = Global_92870;
	if (iParam0 == -1)
	{
		if (Global_104555.f_9055)
		{
		}
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_83730[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_83730[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_20(var uParam0, int iParam1)//Position - 0x72B
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_104555.f_18503[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xC80D31E4B587871C(Global_104555.f_9055.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_22(Global_104555.f_18503[iVar0], &vVar2, &fVar3))
			{
				Global_104555.f_18503[iVar0] = 318;
				func_21(&(uParam0->f_2276[iVar0]));
				uParam0->f_2280[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2290[iVar0] = 0f;
				uParam0->f_2294[iVar0] = 0;
				uParam0->f_2298[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2308[iVar0] = 0;
				Global_90368[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_9 = 0f;
				Global_90368[iVar0 /*29*/].f_12 = 0f;
				Global_90368[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_10 = 0f;
				Global_90368[iVar0 /*29*/].f_13 = 0f;
				Global_90368[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_11 = 0f;
				Global_90368[iVar0 /*29*/].f_14 = 0f;
				Global_90368[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_26 = 0f;
				Global_90368[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_27 = 0f;
				Global_90368[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_21(var uParam0)//Position - 0x8F4
{
	*uParam0 = -15;
}

int func_22(int iParam0, var uParam1, float fParam2)//Position - 0x902
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115,1569f, -1286,684f, 28,2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90,0089f, -1324,195f, 28,3203f };
			*fParam2 = 194,1887f;
			return 1;
			break;
		
		case 9:
			return func_22(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_22(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807,2979f, -48,4004f, 36,8173f };
			*fParam2 = 201,6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432,34f, -1887,383f, 70,5768f };
			*fParam2 = 350,0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666,204f, 1967,25f, 143,3213f };
			*fParam2 = 0,7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440,22f, -127,02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135,055f, -1759,64f, 27,8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687,6992f, -1744,03f, 28,3624f };
			*fParam2 = 267,1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56,5117f, -744,6122f, 43,1356f };
			*fParam2 = 340,0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506,485f, -1884,967f, 24,764f };
			*fParam2 = 22,9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555,958f, 953,6136f, 77,2063f };
			*fParam2 = 152,8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220,72f, -64,4177f, 68,2922f };
			*fParam2 = (250,4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048,07f, 3840,84f, 34,2238f };
			*fParam2 = 119,603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464,22f, -1592,98f, 38,73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744,79f + 0,0186f), (-465,86f - 0,0114f), 36,6399f };
			*fParam2 = 51,7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508,1f, 173,6278f };
			*fParam2 = 151,2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72,2278f, -1464,68f, 28,2915f };
			*fParam2 = 156,8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24,2312f };
			*fParam2 = 7,2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257,9167f, -1120,786f, 28,3684f };
			*fParam2 = 97,2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422,5858f, -978,6332f, 69,7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294,8521f, 882,9366f, 197,8527f };
			*fParam2 = 162,693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771,802f, 794,4316f, 138,4211f };
			*fParam2 = 128,9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495,595f, -1848,821f, 70,2075f };
			*fParam2 = 32,2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897,554f, 4032,241f, 50,1419f };
			*fParam2 = 192,8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725,8f, 33,0673f };
			*fParam2 = -3,7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4,0205f, -2975,341f, 798,4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709,0244f, -2916,479f, 5,0589f };
			*fParam2 = 355,326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643,5248f, -2917,325f, 5,1337f };
			*fParam2 = 334,1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595,2742f, -2819,183f, 5,0559f };
			*fParam2 = 46,8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314,4171f, 965,207f, 208,4024f };
			*fParam2 = 165,9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321,537f, 4975,455f, 25,9097f };
			*fParam2 = 221,228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111,1318f, 6316,479f, 30,4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731,3261f, 106,68f, 54,7169f };
			*fParam2 = 98,9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257,5f, -526,9999f, 30,2361f };
			*fParam2 = 220,9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736,9869f, -2050,678f, 28,2718f };
			*fParam2 = 83,9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262,5499f, -2540,15f, 4,8433f };
			*fParam2 = -64,1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315,7789f, 6201,355f, 30,4322f };
			*fParam2 = 127,7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118,0988f, -1264,916f, 32,3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37,5988f, -1351,52f, 28,2954f };
			*fParam2 = 90,0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558,2693f, 261,1167f, 82,07f };
			*fParam2 = 84,6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196,9999f, 507,9999f, 132,477f };
			*fParam2 = 99,6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312,01f, -1645,87f, 51,2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818,7374f, 6,4824f, 41,2432f };
			*fParam2 = 211,8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091,258f, 4714,852f, 40,1936f };
			*fParam2 = 136,0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762,59f, 3247,212f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764,013f, 3252,902f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_23(int iParam0, bool bParam1)//Position - 0x1271
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_86963[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_86963[iParam0 /*2*/] = 0;
	}
}

void func_24()//Position - 0x12AF
{
	Global_92868 = 1;
	if (unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1))
	{
		if (unk_0xAB019B170BF1309C(&Global_71088))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_71088, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_71088, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_71088, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_71092, "", 16);
		}
		Global_92868 = 0;
	}
	else if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xAB019B170BF1309C(&Global_71088))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_71088, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_71088, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_71088, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_71092, "", 16);
		}
		Global_92868 = 0;
		unk_0x872F1C1F8587CCC7(&(Global_92833.f_20), 25);
	}
}

int func_25()//Position - 0x1396
{
	func_26();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_26()//Position - 0x13AF
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_30(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_29(unk_0xFC1458A37D98B502());
			if (func_28(iVar0) && (!func_27(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_28(Global_104555.f_2353.f_539.f_4301))
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

bool func_27(int iParam0)//Position - 0x14AC
{
	return Global_35861 == iParam0;
}

bool func_28(int iParam0)//Position - 0x14BA
{
	return iParam0 < 3;
}

int func_29(int iParam0)//Position - 0x14C6
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(int iParam0)//Position - 0x1503
{
	if (func_28(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_31()//Position - 0x152D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xC80D31E4B587871C(Global_83730[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_32(bool bParam0)//Position - 0x1562
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_33(char* sParam0)//Position - 0x158D
{
	func_34(sParam0);
	func_18(0);
}

void func_34(char* sParam0)//Position - 0x15A0
{
	if (!unk_0xAB019B170BF1309C(sParam0))
	{
		if (unk_0x96AAAC172E3B9680(sParam0) <= 16)
		{
			StringCopy(&Global_71088, sParam0, 16);
			StringCopy(&Global_71092, "", 16);
			if (unk_0x2D8BD7F773A1EA2C())
			{
				unk_0xBA895E5C4D5B8B12();
			}
		}
	}
}

void func_35(int iParam0, int iParam1)//Position - 0x15DF
{
	Global_92833.f_22[iParam1] = iParam0;
}

int func_36(int iParam0)//Position - 0x15F3
{
	if (func_10(iParam0))
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

void func_37()//Position - 0x161D
{
	func_7(&iLocal_182);
}

void func_38()//Position - 0x162C
{
	int iVar0;
	
	switch (iLocal_69)
	{
		case 0:
			iLocal_69 = 1;
			break;
		
		case 1:
			if (!func_101(unk_0xFC1458A37D98B502(), vLocal_186, 270f))
			{
				iLocal_69 = 2;
			}
			else if (!func_100("PRA_LEVAREA", 0, 0))
			{
				func_99("PRA_LEVAREA", 60000, 0);
			}
			break;
		
		case 2:
			iVar0 = func_25();
			if (func_100("PRA_LEVAREA", 0, 0))
			{
				unk_0x84CDD933AFA470D2();
			}
			if (iVar0 == 0)
			{
				if (func_66(&uLocal_72, &cLocal_370, &uLocal_205))
				{
					func_62();
					func_57();
				}
			}
			else
			{
				func_52(func_56(iVar0), -621899663, -621899663, 5, 0, iVar0, func_55(iVar0), 0, 6000, 6000, -1, 0, 0);
				func_62();
				func_57();
			}
			break;
		
		case 3:
			func_39(1, 1, 1);
			iLocal_69 = 2;
			break;
	}
}

void func_39(int iParam0, int iParam1, int iParam2)//Position - 0x170D
{
	func_41(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		unk_0x7C9705890EF6612E(0f, 1065353216);
		unk_0xBB9A3C553EECB180(0f);
	}
	if (iParam1 == 1)
	{
		func_40(500, 0);
	}
}

void func_40(int iParam0, bool bParam1)//Position - 0x1741
{
	if (unk_0x3E9CABD07B829173() || unk_0x2D0EF1D268F33F25())
	{
		if (!unk_0x9BB64DDCD9C7B076())
		{
			unk_0x59C3AC31C7544A28(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x9F7B586A14398C40())
		{
			system::wait(0);
		}
	}
}

void func_41(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x177D
{
	int iVar0;
	
	iVar0 = unk_0x98EC0789D9F0703B();
	unk_0xC7CB065B66F66C5F(iVar0, 0);
	unk_0x59F2A26BF856E30A(iVar0, bParam3, 0);
	func_42(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		unk_0x9B47B379EE749C38(true);
		unk_0x4255E93FCCDE108E(true);
	}
	unk_0x3E80C2F7BC665259(1);
	if (iParam0 == 1)
	{
		unk_0xF0E859A5278D3AA0(false, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_37 != 0 && iLocal_37 != joaat("object")) && iLocal_37 != joaat("gadget_parachute"))
		{
			if (func_10(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), iLocal_37, 0))
				{
					unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), iLocal_37, false);
				}
			}
		}
	}
	if (func_333(unk_0xFC1458A37D98B502()))
	{
		unk_0x995BFC92D2115309(unk_0xFC1458A37D98B502(), 0, 0);
	}
}

void func_42(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1824
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_51(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_50())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_49(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_51(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_49(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_47(unk_0x9EB17624F44A8DA4())) && !func_44(unk_0x9EB17624F44A8DA4(), 0)) && !func_43())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_47(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_43()//Position - 0x193D
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_44(int iParam0, int iParam1)//Position - 0x195A
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_45(-1, 0) == 8;
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

int func_45(int iParam0, bool bParam1)//Position - 0x19A5
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_46();
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

int func_46()//Position - 0x19E6
{
	return Global_1312736;
}

int func_47(int iParam0)//Position - 0x19F2
{
	if (func_44(iParam0, 0))
	{
		return 1;
	}
	if (func_48())
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

bool func_48()//Position - 0x1A34
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_49(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x1A45
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

int func_50()//Position - 0x1A78
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_51(int iParam0)//Position - 0x1A9F
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

int func_52(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x1AC2
{
	struct<15> Var0;
	int iVar1;
	
	if (func_32(0))
	{
		return 0;
	}
	if (iParam8 < 0)
	{
		return 0;
	}
	if (iParam9 < 0)
	{
		return 0;
	}
	if (iParam10 == 76)
	{
		return 0;
	}
	if (iParam11 == 235)
	{
		return 0;
	}
	if (iParam6 == iParam5)
	{
		return 0;
	}
	if (((iParam5 != 144 && iParam5 != 0) && iParam5 != 1) && iParam5 != 2)
	{
		return 0;
	}
	if (Global_104555.f_7658.f_136 < 9)
	{
		Var0 = uParam0;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_9 = iParam3;
		if (Global_104555.f_7658.f_911 == Var0)
		{
			Global_104555.f_7658.f_911 = -1;
		}
		Var0.f_3 = func_54(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = (unk_0x53C562FD2B9E3AB0() + iParam8);
		Var0.f_1 = iParam12;
		iVar1 = 0;
		unk_0x872F1C1F8587CCC7(&iVar1, iParam5);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam6;
		Var0.f_14 = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		unk_0x872F1C1F8587CCC7(&(Var0.f_1), 0);
		unk_0x872F1C1F8587CCC7(&(Var0.f_1), 13);
		unk_0x0EE72DB1CD8A3B86(&(Var0.f_1), 1);
		if (iParam4 == 0)
		{
			unk_0x872F1C1F8587CCC7(&(Var0.f_1), 10);
		}
		Global_104555.f_7658[Global_104555.f_7658.f_136 /*15*/] = { Var0 };
		Global_104555.f_7658.f_136++;
		func_53(iParam5);
		return 1;
	}
	return 0;
}

void func_53(int iParam0)//Position - 0x1C1F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_28(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_7658.f_136)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_7658[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_104555.f_7658[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_104555.f_7658[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_104555.f_7658.f_764)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_7658.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_104555.f_7658.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_104555.f_7658.f_919[iParam0] = iVar1;
}

int func_54(int iParam0)//Position - 0x1CE3
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

int func_55(int iParam0)//Position - 0x1D4D
{
	if (iParam0 == 1)
	{
		return 9;
	}
	return 8;
}

int func_56(int iParam0)//Position - 0x1D62
{
	if (iParam0 == 1)
	{
		return -714760066;
	}
	return -1198055521;
}

void func_57()//Position - 0x1D7D
{
	unk_0x84CDD933AFA470D2();
	func_60();
	func_58(0, 0);
	func_367();
}

void func_58(bool bParam0, int iParam1)//Position - 0x1D97
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55905)
	{
		Global_55905 = iParam1;
	}
	if (bParam0)
	{
		if ((func_32(0) && Global_71102.f_1 == 1) && func_59(Global_71102))
		{
		}
		else
		{
			Global_55903 = 1;
		}
	}
	if (Global_104555.f_9055 || func_32(0))
	{
		iVar0 = func_31();
		iVar1 = Global_83730[iVar0 /*5*/];
		uVar2 = Global_71125.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_104555.f_9055)
			{
			}
			return;
		}
		if (unk_0xC80D31E4B587871C(Global_83730[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xC80D31E4B587871C(Global_83730[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 4);
		unk_0x872F1C1F8587CCC7(&Global_71104, 1);
		Global_71120 = uVar2;
		Global_71121 = unk_0x53C562FD2B9E3AB0();
	}
}

int func_59(int iParam0)//Position - 0x1E6D
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_60()//Position - 0x1EAB
{
	Global_14622 = 0;
	func_61();
}

void func_61()//Position - 0x1EBB
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

void func_62()//Position - 0x1F12
{
	func_65(0, -1);
	func_64(0, 318);
	func_63(1, 320);
}

void func_63(bool bParam0, int iParam1)//Position - 0x1F30
{
	int iVar0;
	
	if (Global_55911)
	{
	}
	Global_55911 = 0;
	if (bParam0)
	{
		Global_55912 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67998)
		{
			if (Global_56128[Global_67999[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67999[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67998)
		{
			if (Global_67999[iVar0 /*9*/] > 0)
			{
				if (Global_67999[iVar0 /*9*/] == iParam1)
				{
					Global_67999[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_64(int iParam0, int iParam1)//Position - 0x1FCA
{
	int iVar0;
	
	Global_55916 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67998)
	{
		if (iParam1 == -1 || Global_67999[iVar0 /*9*/] == iParam1)
		{
			if (Global_67999[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67999[iVar0 /*9*/].f_6 = iParam0;
				Global_67999[iVar0 /*9*/].f_7 = 1;
				Global_67999[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_65(int iParam0, int iParam1)//Position - 0x2035
{
	Global_55914 = iParam0;
	Global_55915 = iParam1;
}

int func_66(var uParam0, char* sParam1, var uParam2)//Position - 0x2047
{
	switch (*uParam0)
	{
		case 0:
			if (func_97())
			{
				if ((func_96(74) || func_96(75)) && func_95())
				{
					if (func_25() == 0)
					{
						func_94(1);
						func_93(46, 1);
						*uParam0 = 4;
					}
					else
					{
						func_92(uParam2, 0, 0, "MICHAEL", 0, 1);
						if (func_81(uParam2, func_91(), func_25(), "FBIPRAU", func_90(), 9, 1, 0, 0, 0))
						{
							*sParam1 = { func_80(1) };
							func_93(46, 1);
							*uParam0 = 1;
						}
					}
				}
				else if (func_25() == 0)
				{
					func_94(0);
					*uParam0 = 4;
				}
				else
				{
					func_92(uParam2, 0, 0, "MICHAEL", 0, 1);
					if (func_81(uParam2, func_91(), func_25(), "FBIPRAU", func_90(), 9, 1, 0, 0, 0))
					{
						*sParam1 = { func_80(0) };
						*uParam0 = 1;
					}
				}
			}
			else
			{
				func_73();
				*uParam0 = 4;
			}
			break;
		
		case 1:
			if (func_72())
			{
				if (unk_0xA2F80D03C2F3570D() >= 0)
				{
					func_71("FBIPRAU", sParam1);
					func_70(1);
					*uParam0 = 3;
				}
			}
			if (func_69())
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_72())
			{
				if (!func_68(0))
				{
					if (!func_96(3) && func_97())
					{
						func_67(50, 0);
					}
					return 1;
				}
			}
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_67(int iParam0, int iParam1)//Position - 0x21BC
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_104555.f_8583[iParam0] = 1;
	Global_104555.f_8583.f_236[iParam0] = (unk_0x53C562FD2B9E3AB0() + iParam1);
}

int func_68(int iParam0)//Position - 0x21F9
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

int func_69()//Position - 0x2253
{
	if (Global_15805 == 1 || Global_16772 == 1)
	{
		return 1;
	}
	return 0;
}

void func_70(bool bParam0)//Position - 0x2276
{
	unk_0xB31CEFB00C146C91(bParam0);
	if (bParam0)
	{
	}
}

void func_71(char* sParam0, char* sParam1)//Position - 0x228A
{
	if (unk_0x0DBDCC9C5537E157())
	{
		Global_15813 = 1;
		StringCopy(&Global_15820, sParam0, 24);
		StringCopy(&Global_15814, sParam1, 24);
	}
}

int func_72()//Position - 0x22AB
{
	if (Global_15756 == 4)
	{
		if (unk_0x0DBDCC9C5537E157())
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

void func_73()//Position - 0x22D0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_78(iVar0);
		if (!unk_0x3AB6A1A9084FB0A4(iVar1))
		{
			if (func_77(iVar1, 0))
			{
				return;
			}
		}
		iVar0++;
	}
	func_74(func_75(), 0, func_25(), func_91(), 9, 6000, 6000, -1, 0, -1, 0);
}

int func_74(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x2327
{
	struct<15> Var0;
	int iVar1;
	
	if (func_32(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == iParam2)
	{
		return 0;
	}
	if (((iParam2 != 144 && iParam2 != 0) && iParam2 != 1) && iParam2 != 2)
	{
		return 0;
	}
	if (Global_104555.f_7658.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_104555.f_7658.f_911 == Var0)
		{
			Global_104555.f_7658.f_911 = -1;
		}
		Var0.f_3 = func_54(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (unk_0x53C562FD2B9E3AB0() + iParam5);
		Var0.f_1 = iParam10;
		iVar1 = 0;
		unk_0x872F1C1F8587CCC7(&iVar1, iParam2);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		unk_0x872F1C1F8587CCC7(&(Var0.f_1), 0);
		unk_0x0EE72DB1CD8A3B86(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			unk_0x872F1C1F8587CCC7(&(Var0.f_1), 10);
		}
		Global_104555.f_7658[Global_104555.f_7658.f_136 /*15*/] = { Var0 };
		Global_104555.f_7658.f_136++;
		func_53(iParam2);
		return 1;
	}
	return 0;
}

int func_75()//Position - 0x2478
{
	switch (func_76())
	{
		case 33:
			switch (func_25())
			{
				case 0:
					return -1847734803;
					break;
				
				case 1:
					return -714760066;
					break;
				
				case 2:
					return -1198055521;
					break;
			}
			break;
		
		case 34:
			switch (func_25())
			{
				case 0:
					return 1374342572;
					break;
				
				case 1:
					return 530956160;
					break;
				
				case 2:
					return 240475766;
					break;
			}
			break;
		
		case 36:
			switch (func_25())
			{
				case 0:
					return 580731697;
					break;
				
				case 1:
					return 728176806;
					break;
				
				case 2:
					return 910240872;
					break;
			}
			break;
		
		case 37:
			switch (func_25())
			{
				case 0:
					return 74540475;
					break;
				
				case 1:
					return -1200353264;
					break;
				
				case 2:
					return 801340541;
					break;
			}
			break;
	}
	return -1;
}

int func_76()//Position - 0x259E
{
	return Global_71118;
}

int func_77(int iParam0, int iParam1)//Position - 0x25AA
{
	int iVar0;
	
	return 0;
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_78(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xFC1458A37D98B502())
			{
				return 0;
			}
		}
		if (unk_0xC80D31E4B587871C(Global_88831, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_78(int iParam0)//Position - 0x2606
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_25())
	{
		return unk_0xFC1458A37D98B502();
	}
	return Global_90456[func_79(iParam0)];
}

int func_79(int iParam0)//Position - 0x2637
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

struct<4> func_80(bool bParam0)//Position - 0x2672
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_25())
		{
			case 1:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
		}
	}
	else
	{
		switch (func_25())
		{
			case 1:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			}
	}
	return Var0;
}

bool func_81(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x26D8
{
	func_89(uParam0, iParam1, sParam3, iParam7, iParam8, 0);
	Global_1641 = iParam2;
	Global_15804 = 0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_15770 = 0;
	Global_15761 = 1;
	Global_15808 = 0;
	Global_15810 = 0;
	if (iParam6 == 1)
	{
		Global_15768 = 1;
	}
	else
	{
		Global_15768 = 0;
	}
	Global_2621441 = 0;
	return func_82(sParam4, iParam5, bParam9);
}

int func_82(char* sParam0, int iParam1, bool bParam2)//Position - 0x2740
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
					func_61();
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
		if (func_88(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_87();
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
				func_86();
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
				if (func_85())
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
			if (func_50())
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
			func_84();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_83();
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
		func_61();
	}
	return 0;
}

void func_83()//Position - 0x2A0C
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

void func_84()//Position - 0x2A3D
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

int func_85()//Position - 0x2AD2
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

void func_86()//Position - 0x2B6B
{
	if (func_27(14))
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
		Global_14453 = func_25();
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

void func_87()//Position - 0x2C0D
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

bool func_88(int iParam0, int iParam1)//Position - 0x2C64
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

void func_89(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2C9F
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

char* func_90()//Position - 0x2CF5
{
	char* sVar0;
	
	switch (func_76())
	{
		case 33:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP1_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP1_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP1_TENDC";
					break;
			}
			break;
		
		case 34:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP2_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP2_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP2_TENDC";
					break;
			}
			break;
		
		case 36:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP4_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP4_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP4_TENDC";
					break;
			}
			break;
		
		case 37:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP5_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP5_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP5_TENDC";
					break;
			}
			break;
	}
	return sVar0;
}

int func_91()//Position - 0x2DFD
{
	int iVar0;
	
	switch (func_25())
	{
		case 0:
			iVar0 = 5;
			break;
		
		case 1:
			iVar0 = 9;
			break;
		
		case 2:
			iVar0 = 8;
			break;
	}
	return iVar0;
}

void func_92(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2E36
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

void func_93(int iParam0, int iParam1)//Position - 0x2ED1
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_104555.f_9055.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_104555.f_9055.f_99.f_58[iParam0] = iParam1;
}

void func_94(bool bParam0)//Position - 0x2F16
{
	if (bParam0)
	{
		func_74(1527885205, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
	else if (!func_96(3))
	{
		func_74(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 50, -1, 0);
	}
	else
	{
		func_74(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
}

int func_95()//Position - 0x2F87
{
	if ((func_96(41) && func_96(3)) && func_96(21))
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0)//Position - 0x2FB2
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_330[iParam0 /*6*/];
}

int func_97()//Position - 0x2FDE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 33;
	while (iVar1 <= 37)
	{
		if (func_96(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_98(45))
	{
		iVar0++;
	}
	if (iVar0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_98(int iParam0)//Position - 0x3026
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_99.f_58[iParam0];
}

void func_99(char* sParam0, int iParam1, int iParam2)//Position - 0x3053
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 1);
}

bool func_100(char* sParam0, int iParam1, char* sParam2)//Position - 0x306C
{
	unk_0x4AF56F03659830D9(sParam0);
	if (iParam1 == 1)
	{
		unk_0xA6D2B267C377D7B2(sParam2);
	}
	return unk_0xC20F7134D3568246();
}

bool func_101(int iParam0, vector3 vParam1, float fParam2)//Position - 0x308A
{
	return system::vdist2(unk_0xB3328BA8976B416C(iParam0, 1), vParam1) <= (fParam2 * fParam2);
}

void func_102()//Position - 0x30A7
{
	func_209(&iLocal_200, &iLocal_201, &iLocal_71, &iLocal_183, &iLocal_182, vLocal_186, Local_199, 0, 1090519040);
	func_208();
	func_149();
	switch (iLocal_69)
	{
		case 0:
			if (func_116(iLocal_68, bLocal_28))
			{
				if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
				{
					if (func_36(iLocal_200))
					{
						if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_200, 0))
						{
							func_115("PRA_LEVVEH", &iLocal_181);
						}
					}
				}
				iLocal_69 = 1;
			}
			break;
		
		case 1:
			func_114(&iLocal_182, vLocal_186, &iLocal_70, iLocal_71, &iLocal_181, &iLocal_195);
			if (func_107(iLocal_200, vLocal_186, &iLocal_182, iLocal_71, iLocal_70, &iLocal_193, &iLocal_196, &iLocal_192, &iLocal_191, &iLocal_181, 1090519040))
			{
				if (!func_106())
				{
					if (func_66(&uLocal_72, &cLocal_370, &uLocal_205))
					{
						func_62();
						func_57();
					}
				}
				else
				{
					func_93(46, 1);
					func_62();
					func_104(0);
				}
			}
			break;
		
		case 3:
			if (func_36(Local_199))
			{
				if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_199, 0))
				{
					unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), Local_199, -1);
				}
				else
				{
					func_103(Local_199, vLocal_186, 126,0705f, 0, 1);
					func_39(1, 1, 1);
					iLocal_69 = 1;
				}
			}
			break;
	}
}

int func_103(int iParam0, vector3 vParam1, float fParam2, bool bParam3, int iParam4)//Position - 0x31FA
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_10(iParam0))
	{
		if (bParam3 == 1)
		{
			fVar1 = 0f;
			bVar0 = unk_0x7367FB97975F1E29(vParam1, &fVar1, 0, 0);
			if (bVar0)
			{
				vParam1.z = fVar1;
			}
		}
		unk_0xBD8D47FDC6902B2D(iParam0, vParam1, 1, false, 0, iParam4);
		unk_0x48ED7B2293A96722(iParam0, fParam2);
		if (bParam3)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

void func_104(bool bParam0)//Position - 0x3256
{
	func_105(iLocal_68);
	iLocal_178 = iLocal_68;
	if (!bParam0)
	{
		iLocal_68 = iLocal_178 + 1;
	}
	else if (iLocal_178 > 0)
	{
		iLocal_68 = (iLocal_178 - 1);
	}
	iLocal_181 = 0;
	iLocal_69 = 0;
}

void func_105(int iParam0)//Position - 0x3293
{
	switch (iParam0)
	{
		case 0:
			break;
	}
}

int func_106()//Position - 0x32AB
{
	if (func_97())
	{
		if ((func_96(74) || func_96(75)) && func_95())
		{
			return 1;
		}
	}
	return 0;
}

int func_107(int iParam0, vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10)//Position - 0x32DD
{
	float fVar0;
	
	if ((iParam3 == 1 || iParam3 == 2) || iParam3 == 3)
	{
		if (iParam4 == 0)
		{
			if (func_36(iParam0))
			{
				if (!unk_0xF69AD934E7664A7C(iParam0))
				{
					func_115(func_113(func_76()), iParam9);
				}
			}
			if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vParam1, fParam10, fParam10, 2f, 0, 1, 2))
			{
				unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vParam1, fParam10, fParam10, 2f, 1, 1, 2);
				if (func_100(func_113(func_76()), 0, 0))
				{
					unk_0x166954C5648772B6(func_113(func_76()));
				}
				*iParam5 = 1;
				func_111(iParam2, vParam1, 1);
			}
			else
			{
				if (*iParam5)
				{
					fVar0 = (fParam10 / 2f);
					if (func_101(unk_0xFC1458A37D98B502(), vParam1, fVar0))
					{
						*iParam5 = 0;
						func_110(1077936128, 1);
					}
				}
				func_7(iParam2);
			}
		}
	}
	else if (unk_0x0C88267282FD588F(iParam0, vParam1, fParam10, fParam10, 2f, 0, 1, 2))
	{
		if (*iParam7 == -1)
		{
			unk_0x4BEFCD5DAE410A90(iParam0, 2);
			return 1;
		}
		if (!*iParam8)
		{
			if (func_100(func_113(func_76()), 0, 0))
			{
				unk_0x84CDD933AFA470D2();
			}
			*iParam7 = unk_0x53C562FD2B9E3AB0();
			*iParam8 = 1;
			unk_0x4BEFCD5DAE410A90(iParam0, 2);
		}
		else if ((unk_0x53C562FD2B9E3AB0() - *iParam7) > 3000)
		{
			return 1;
		}
	}
	else
	{
		if (unk_0x37956F2B588E40E6(iParam0) == 2)
		{
			unk_0x4BEFCD5DAE410A90(iParam0, 1);
		}
		if (!*iParam6)
		{
			if (func_100(func_109(func_76(), 0), 0, 0))
			{
				unk_0x166954C5648772B6(func_109(func_76(), 0));
			}
			if (!func_100(func_108(func_76()), 0, 0))
			{
				func_99(func_108(func_76()), 7500, 0);
				*iParam6 = 1;
			}
		}
		*iParam5 = 1;
	}
	return 0;
}

char* func_108(int iParam0)//Position - 0x3487
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_RETVEH";
			break;
		
		case 34:
			sVar0 = "PRB_RETVEH";
			break;
		
		case 78:
			sVar0 = "PR_RETVEH";
			break;
		
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_RETVEH";
			break;
	}
	return sVar0;
}

char* func_109(int iParam0, bool bParam1)//Position - 0x34E0
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_TAKBACK";
			break;
		
		case 34:
			sVar0 = "PRB_TAKBACK";
			break;
		
		case 78:
			sVar0 = "PR_TAKBACK";
			break;
		
		case 80:
		case 81:
		case 82:
			if (!bParam1)
			{
				sVar0 = "PRF_TAKBACK";
			}
			else
			{
				sVar0 = "PRF_GARAGE";
			}
			break;
	}
	return sVar0;
}

int func_110(float fParam0, int iParam1)//Position - 0x3548
{
	int iVar0;
	
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		return 1;
	}
	iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
	if (unk_0xB8DE76287EDC4957(iVar0, 0))
	{
		if (unk_0x317536BCEA8FA6B0(iVar0, -1, 0) == unk_0xFC1458A37D98B502())
		{
			if (!unk_0x9EC5112BB1C4047A(iVar0))
			{
				unk_0xA1AA40A93CA0F40D(iVar0, fParam0, iParam1, 0);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0xDE42C4904F29B0CE(unk_0xFC1458A37D98B502()))
	{
		return 1;
	}
	if (unk_0xB8DE76287EDC4957(iVar0, 0))
	{
		if (unk_0x9EC5112BB1C4047A(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_111(int iParam0, vector3 vParam1, int iParam2)//Position - 0x35CC
{
	if (!unk_0xA6DECE14FC9A8C51(*iParam0))
	{
		*iParam0 = func_112(vParam1, 5, iParam2);
	}
}

int func_112(vector3 vParam0, int iParam1, int iParam2)//Position - 0x35ED
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xF27F72CA15E148EE(iVar0, iParam1);
	unk_0xA5D25D3F884FF516(iVar0, 1f);
	unk_0xAAAC88CC20771601(iVar0, iParam2);
	return iVar0;
}

char* func_113(int iParam0)//Position - 0x361B
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_LEVVEH";
			break;
		
		case 34:
			sVar0 = "PRB_LEVVEH";
			break;
		
		case 78:
			sVar0 = "PR_LEVVEH";
			break;
		
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_LEAVE";
			break;
	}
	return sVar0;
}

void func_114(int iParam0, vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x3674
{
	switch (*iParam2)
	{
		case 0:
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
			{
				*iParam2 = 1;
			}
			break;
		
		case 1:
			func_7(iParam0);
			if ((iParam3 == 1 || iParam3 == 2) || iParam3 == 3)
			{
				unk_0x84CDD933AFA470D2();
				func_99("LOSE_WANTED", 7500, 0);
				*iParam2 = 2;
			}
			break;
		
		case 2:
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
			{
				unk_0x84CDD933AFA470D2();
				if ((iParam3 == 1 || iParam3 == 2) || iParam3 == 3)
				{
					func_115(func_109(func_76(), 0), iParam4);
					func_111(iParam0, vParam1, 1);
				}
				else if (iParam3 == 0 && !*iParam5)
				{
					func_99(func_108(func_76()), 7500, 0);
					*iParam5 = 1;
				}
				*iParam2 = 0;
			}
			break;
	}
}

void func_115(char* sParam0, int iParam1)//Position - 0x3754
{
	if (!*iParam1)
	{
		func_99(sParam0, 7500, 0);
		*iParam1 = 1;
	}
}

int func_116(int iParam0, bool bParam1)//Position - 0x3771
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_28 = false;
				func_39(1, 1, 1);
			}
			else if (func_143(1, vLocal_185, 0))
			{
				if (func_142())
				{
					func_141(33);
					unk_0x2E4932E63763FE26(joaat("trash"), true);
					unk_0x2E4932E63763FE26(joaat("towtruck"), true);
					unk_0x2E4932E63763FE26(joaat("s_m_y_garbage"), true);
					iLocal_68 = 2;
					func_7(&iLocal_182);
					func_139(&uLocal_56, 0, 0);
					func_138(190, 1244,338f, -339,3197f, 68,0823f);
					func_136();
					unk_0xFA85ECEE588094C7("DRIVE", 0);
					unk_0xFA85ECEE588094C7("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0xFA85ECEE588094C7("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0xFA85ECEE588094C7("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
				else if (((func_143(2, Local_199.f_1, Local_199.f_4) && func_143(3, Local_197.f_1, Local_197.f_4)) && func_143(4, Local_198.f_1, Local_198.f_4)) && func_135(0))
				{
					func_136();
					func_141(33);
					if (func_333(Local_197))
					{
						func_134(Local_197);
					}
					if (func_333(Local_198))
					{
						func_133(Local_198);
					}
					func_132(Local_199);
					if (func_333(Local_198) && func_333(Local_197))
					{
						func_121(iLocal_187, 1, 0, 1);
					}
					unk_0x2E4932E63763FE26(joaat("trash"), true);
					unk_0x2E4932E63763FE26(joaat("towtruck"), true);
					unk_0x2E4932E63763FE26(joaat("s_m_y_garbage"), true);
					if (unk_0xB38AB7F32D71579D(Local_199) != 0)
					{
						iVar0 = unk_0xB38AB7F32D71579D(Local_199);
						unk_0x62D1DA6940EE5FAA(1);
						func_7(&iVar0);
						unk_0x62D1DA6940EE5FAA(0);
					}
					func_119(&iLocal_182, Local_199, 1);
					func_138(190, 1244,338f, -339,3197f, 68,0823f);
					unk_0xFA85ECEE588094C7("DRIVE", 0);
					unk_0xFA85ECEE588094C7("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0xFA85ECEE588094C7("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0xFA85ECEE588094C7("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				if ((func_143(2, Local_199.f_1, Local_199.f_4) && func_143(3, Local_197.f_1, Local_197.f_4)) && func_143(4, Local_198.f_1, Local_198.f_4))
				{
					func_118(unk_0xFC1458A37D98B502(), 1197,861f, -353,011f, 68,0929f, 278,9647f);
					func_117();
					bLocal_28 = false;
					unk_0xFA85ECEE588094C7("DRIVE", 0);
					unk_0xFA85ECEE588094C7("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0xFA85ECEE588094C7("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0xFA85ECEE588094C7("WORLD_VEHICLE_DRIVE_SOLO", 0);
					func_39(1, 1, 1);
				}
			}
			else
			{
				func_136();
				return 1;
			}
			break;
		
		case 2:
			if (bParam1)
			{
				if (func_143(2, Local_199.f_1, Local_199.f_4))
				{
					func_117();
					func_136();
					unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), Local_199, -1);
					bLocal_28 = false;
					func_39(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (bParam1)
			{
				if (func_143(2, vLocal_186, Local_199.f_4))
				{
					func_117();
					unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), Local_199, -1);
					func_136();
					bLocal_28 = false;
					func_39(1, 1, 1);
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

void func_117()//Position - 0x3A87
{
	if (iLocal_68 == 1)
	{
		func_134(Local_197);
		func_133(Local_198);
		func_132(Local_199);
		func_121(iLocal_187, 1, 0, 1);
	}
	iLocal_203 = 0;
	iLocal_195 = 0;
	iLocal_196 = 0;
	iLocal_191 = 0;
	iLocal_192 = 0;
	iLocal_193 = 0;
}

void func_118(int iParam0, vector3 vParam1, float fParam2)//Position - 0x3ACD
{
	if (func_333(iParam0))
	{
		unk_0xB8E08BD5B184DF4E(iParam0);
	}
	func_103(iParam0, vParam1, fParam2, 0, 1);
}

void func_119(int iParam0, int iParam1, bool bParam2)//Position - 0x3AF3
{
	if (!unk_0xA6DECE14FC9A8C51(*iParam0))
	{
		*iParam0 = func_120(iParam1, bParam2, 5);
	}
}

int func_120(int iParam0, bool bParam1, int iParam2)//Position - 0x3B12
{
	int iVar0;
	
	iVar0 = 0;
	if (func_10(iParam0))
	{
		iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
		unk_0xF27F72CA15E148EE(iVar0, iParam2);
		unk_0xA5D25D3F884FF516(iVar0, 1f);
	}
	return iVar0;
}

void func_121(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3B47
{
	int iVar0;
	
	iLocal_41 = iParam0;
	bLocal_50 = iParam1;
	bLocal_49 = iParam2;
	bLocal_51 = iParam3;
	Local_45[0 /*11*/].f_1 = 0;
	Local_45[1 /*11*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_41 - 1))
	{
		Local_46[iVar0 /*25*/].f_18 = 0;
		iVar0++;
	}
	fLocal_47 = 0f;
	func_123();
	Local_45[1 /*11*/].f_7 = 3;
	Local_45[1 /*11*/].f_5 = 0;
	Local_45[1 /*11*/].f_10 = 1;
	Local_45[1 /*11*/].f_2 = 1500;
	Local_45[1 /*11*/].f_3 = 500;
	Local_45[0 /*11*/].f_5 = 0;
	Local_45[0 /*11*/].f_10 = 0;
	Local_45[0 /*11*/].f_2 = 1000;
	Local_45[0 /*11*/].f_3 = 100;
	unk_0x4DE114E3C7F8B7C2("Enemies", &iLocal_40);
	unk_0xCE93FCB8A8D8DF0B(Local_45[0 /*11*/], iLocal_40);
	unk_0xCE93FCB8A8D8DF0B(Local_45[1 /*11*/], iLocal_40);
	unk_0xE0F761CE722765C1(Local_45[0 /*11*/], 1, 0);
	unk_0xE0F761CE722765C1(Local_45[1 /*11*/], 1, 0);
	func_122(1,9f, 1,9f, 8f, 0f, 0f, 0f);
}

void func_122(vector3 vParam0, vector3 vParam1)//Position - 0x3C34
{
	Local_42.f_8 = { vParam0 };
	Local_42.f_11 = { vParam1 };
	Local_42.f_1 = 4;
}

void func_123()//Position - 0x3C55
{
	if (!unk_0xA8D0477084E86A92(Local_45[0 /*11*/], iLocal_43, 0))
	{
		unk_0x380C1E7B7740D618(Local_45[0 /*11*/], unk_0x3F90543934DCD7E6(iLocal_43, func_131(1)), 1f, -1, 0,25f, 0, 1193033728);
		Local_45[0 /*11*/].f_7 = 1;
	}
	else
	{
		func_124(1);
	}
}

void func_124(bool bParam0)//Position - 0x3C9E
{
	if (!unk_0x8EE3A848975DDF21(iLocal_43, 0, 0))
	{
		func_125(bParam0);
		if (iLocal_48 != (iLocal_41 - 1))
		{
			if (iLocal_48 == 4)
			{
				unk_0x82B20703C6481F84(Local_45[0 /*11*/], iLocal_43, Local_46[iLocal_48 /*25*/], 15f, 2883755, Local_46[iLocal_48 /*25*/].f_6);
			}
			else
			{
				unk_0x87A3E70B0AB01608(Local_45[0 /*11*/], iLocal_43, Local_46[iLocal_48 /*25*/], 15f, 0, 0, 2883755, Local_46[iLocal_48 /*25*/].f_6, Local_46[iLocal_48 /*25*/].f_7);
			}
			Local_45[0 /*11*/].f_8 = Local_45[0 /*11*/].f_7;
			Local_45[0 /*11*/].f_7 = 4;
		}
		else
		{
			unk_0x96247F0EC873C446(Local_45[0 /*11*/], iLocal_43, 15f, 786599);
			Local_45[0 /*11*/].f_8 = Local_45[0 /*11*/].f_7;
			Local_45[0 /*11*/].f_7 = 10;
		}
	}
	else
	{
		Local_45[0 /*11*/].f_8 = Local_45[0 /*11*/].f_7;
		Local_45[0 /*11*/].f_7 = 7;
	}
}

void func_125(bool bParam0)//Position - 0x3D80
{
	if (iLocal_48 != -1)
	{
		if (!func_130(Local_46[iLocal_48 /*25*/].f_11) && !func_130(Local_46[iLocal_48 /*25*/].f_14))
		{
			unk_0x4C15495E88D71C61(Local_46[iLocal_48 /*25*/].f_11 - Local_46[iLocal_48 /*25*/].f_14, Local_46[iLocal_48 /*25*/].f_11 + Local_46[iLocal_48 /*25*/].f_14, true, 1);
		}
	}
	if (!bParam0)
	{
		func_128();
	}
	else
	{
		iLocal_48 = func_126();
	}
	if (iLocal_48 != -1)
	{
		if (!func_130(Local_46[iLocal_48 /*25*/].f_11) && !func_130(Local_46[iLocal_48 /*25*/].f_14))
		{
			unk_0x4C15495E88D71C61(Local_46[iLocal_48 /*25*/].f_11 - Local_46[iLocal_48 /*25*/].f_14, Local_46[iLocal_48 /*25*/].f_11 + Local_46[iLocal_48 /*25*/].f_14, false, 1);
		}
	}
}

int func_126()//Position - 0x3E62
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4[21];
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	
	if (func_36(iLocal_43))
	{
		vVar1 = { unk_0xB3328BA8976B416C(iLocal_43, 1) };
		iVar2 = 0;
		while (iVar2 <= (iLocal_41 - 1))
		{
			fVar5 = unk_0xBE3C4023003180FC(vVar1, Local_46[iVar2 /*25*/], true);
			if (!func_130(Local_46[iVar2 /*25*/]) && fVar5 > 25f)
			{
				fVar4[iVar2] = fVar5;
			}
			else
			{
				fVar4[iVar2] = -1f;
			}
			iVar2++;
		}
		fVar6 = fVar4[0];
		iVar2 = 0;
		while (iVar2 <= (iLocal_41 - 1))
		{
			if (fVar4[iVar2] != -1f)
			{
				if (fVar4[iVar2] < fVar6)
				{
					fVar6 = fVar4[iVar2];
					iVar0 = iVar2;
				}
			}
			iVar2++;
		}
		fVar7 = func_127(Local_46[iVar0 /*25*/] - vVar1, unk_0xCE3B2111021F7234(iLocal_43));
		iVar3 = iVar0;
		iVar8 = 0;
		while (fVar7 < 0f && iVar8 < 40)
		{
			iVar3++;
			if (iVar3 >= 21)
			{
				iVar3 = 0;
			}
			vVar1 = { unk_0xB3328BA8976B416C(iLocal_43, 1) };
			fVar7 = func_127(Local_46[iVar3 /*25*/] - vVar1, unk_0xCE3B2111021F7234(iLocal_43));
			iVar8++;
		}
		if (iVar8 >= 40)
		{
			iVar3 = (iLocal_41 - 1);
		}
	}
	iVar0 = iVar3;
	return iVar0;
}

float func_127(vector3 vParam0, vector3 vParam1)//Position - 0x3F9B
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

void func_128()//Position - 0x3FBC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (bLocal_50)
	{
		while (Local_46[iLocal_48 /*25*/].f_18 && iVar0 != -1)
		{
			iLocal_48++;
			if (iLocal_48 >= (iLocal_41 - 1))
			{
				iVar0 = -1;
				iLocal_48 = (iLocal_41 - 1);
			}
		}
		if (iLocal_48 == (iLocal_41 - 1))
		{
			if (bLocal_49)
			{
				iLocal_48 = 0;
				iVar0 = 0;
				while (iVar0 <= (iLocal_41 - 1))
				{
					Local_46[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
			}
			else
			{
				iLocal_48 = (iLocal_41 - 1);
				return;
			}
		}
	}
	else
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 <= (iLocal_41 - 1))
		{
			if (Local_46[iVar0 /*25*/].f_18)
			{
				iVar1++;
			}
			iVar0++;
		}
		if (iVar1 == (iLocal_41 - 1))
		{
			iLocal_48 = (iLocal_41 - 1);
		}
		else if (iVar1 == iLocal_41)
		{
			if (bLocal_49)
			{
				iVar0 = 0;
				while (iVar0 <= (iLocal_41 - 1))
				{
					Local_46[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
				iLocal_48 = func_129();
			}
			else
			{
				iLocal_48 = -1;
				return;
			}
		}
		else
		{
			iLocal_48 = func_129();
		}
	}
}

int func_129()//Position - 0x40C7
{
	int iVar0;
	
	iVar0 = unk_0x63A6486593EC7EC3(0, (iLocal_41 - 1));
	while (Local_46[iVar0 /*25*/].f_18)
	{
		iVar0 = unk_0x63A6486593EC7EC3(0, (iLocal_41 - 1));
	}
	return iVar0;
}

int func_130(vector3 vParam0)//Position - 0x40F5
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_131(bool bParam0)//Position - 0x411F
{
	vector3 vVar0;
	int iVar1;
	
	if (!bParam0)
	{
		iVar1 = unk_0xD323488FDDE4A80F(iLocal_43, "wheel_rf");
	}
	else
	{
		iVar1 = unk_0xD323488FDDE4A80F(iLocal_43, "wheel_lf");
	}
	vVar0 = { unk_0xDCD8BDD2E10C660E(iLocal_43, iVar1) };
	vVar0 = { unk_0xA05DDB968587006B(iLocal_43, vVar0) };
	if (!bParam0)
	{
		vVar0 = { vVar0 + Vector(0,5f, 0f, 1f) };
	}
	else
	{
		vVar0 = { vVar0 + Vector(0,5f, 0f, -1f) };
	}
	return vVar0;
}

void func_132(int iParam0)//Position - 0x418F
{
	if (func_36(iParam0))
	{
		iLocal_43 = iParam0;
	}
}

void func_133(int iParam0)//Position - 0x41A7
{
	if (func_333(iParam0))
	{
		Local_45[1 /*11*/] = iParam0;
	}
}

void func_134(int iParam0)//Position - 0x41C2
{
	if (func_333(iParam0))
	{
		Local_45[0 /*11*/] = iParam0;
	}
}

int func_135(bool bParam0)//Position - 0x41DD
{
	unk_0x6450931B826B49D9("missfbi4prepp1");
	unk_0x13A127961044F71B("missfbi4prepp1_garbageman");
	if (bParam0)
	{
		while (!unk_0x3A801AA34DD821BE("missfbi4prepp1") && !unk_0xA2B1B9FAFA5BDF26("missfbi4prepp1_garbageman"))
		{
			system::wait(0);
		}
		return 1;
	}
	else if (unk_0x3A801AA34DD821BE("missfbi4prepp1") && unk_0xA2B1B9FAFA5BDF26("missfbi4prepp1_garbageman"))
	{
		return 1;
	}
	return 0;
}

void func_136()//Position - 0x423A
{
	func_137(&uLocal_205);
}

void func_137(var uParam0)//Position - 0x4249
{
	int iVar0;
	char* sVar1;
	
	switch (func_25())
	{
		case 0:
			iVar0 = 0;
			sVar1 = "MICHAEL";
			break;
		
		case 1:
			iVar0 = 1;
			sVar1 = "FRANKLIN";
			break;
		
		case 2:
			iVar0 = 2;
			sVar1 = "TREVOR";
			break;
	}
	func_92(uParam0, iVar0, unk_0xFC1458A37D98B502(), sVar1, 0, 1);
}

void func_138(int iParam0, vector3 vParam1)//Position - 0x429F
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if ((vParam1.x == Global_25578[iVar0 /*23*/][0 /*3*/] && vParam1.y == Global_25578[iVar0 /*23*/][0 /*3*/].f_1) && vParam1.z == Global_25578[iVar0 /*23*/][0 /*3*/].f_2)
	{
		return;
	}
	Global_25575 = 1;
	unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 18);
	Global_25578[iVar0 /*23*/][0 /*3*/] = { vParam1 };
	Global_31628 = 1;
}

void func_139(var uParam0, int iParam1, int iParam2)//Position - 0x4333
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
			unk_0x4AFBCBFDE748D4E0(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xBC3B7443617858A0(1);
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
		if (func_140(uParam0->f_3))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
	if (!unk_0x8C1C362CA8299475(sVar0))
	{
		if (func_140(sVar0))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
}

int func_140(char* sParam0)//Position - 0x4410
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_141(int iParam0)//Position - 0x4423
{
	if (Global_89900 != -1)
	{
		if (iParam0 == Global_89900)
		{
			Global_89904 = 1;
			return;
		}
	}
}

int func_142()//Position - 0x4447
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), joaat("trash")))
		{
			unk_0xDD29FF4BAB8AFF9C(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), true, 0);
			iLocal_200 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (func_36(iLocal_200))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_143(int iParam0, vector3 vParam1, float fParam2)//Position - 0x449A
{
	switch (iParam0)
	{
		case 0:
			if (func_148(vParam1, vLocal_185, 1056964608, 0) && fParam2 == 0f)
			{
				return 1;
			}
			break;
		
		case 1:
			unk_0xBCBC53983EC3B1BA(sLocal_180, 0);
			if (unk_0x9F0887BCBFCF3C2F(0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_36(Global_89475[0]))
			{
				unk_0xDD29FF4BAB8AFF9C(Global_89475[0], true, 1);
				Local_199 = Global_89475[0];
				if (func_36(Local_199))
				{
					func_35(Local_199, 0);
					unk_0x438D30A195B65156(Local_199, true);
					unk_0xFBA991D3A851E195(Local_199, 1);
					return 1;
				}
			}
			else if (func_147(&Local_199, Local_199.f_5, Local_199.f_1, Local_199.f_4, 1))
			{
				func_35(Local_199, 0);
				unk_0x438D30A195B65156(Local_199, true);
				unk_0xFBA991D3A851E195(Local_199, 1);
				return 1;
			}
			break;
		
		case 3:
			if (unk_0x6ADD12BF4D6D2587(Global_89475.f_9[0]))
			{
				if (!unk_0xA7E3B4C3A60721A5(Global_89475.f_9[0], 1))
				{
					unk_0xDD29FF4BAB8AFF9C(Global_89475.f_9[0], true, 1);
					Local_197 = Global_89475.f_9[0];
					if (func_333(Local_197))
					{
						unk_0x771A86309E0CA47B(Local_197, true);
						unk_0xAE01EF4BC84AFE7C(Local_197, 170, false);
						unk_0xE17958D3FD0F9EE9(Local_197, 65536, true);
						unk_0xAE6EBBBBD8B9FB30(Local_197, 50, true);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_144(&Local_197, Local_197.f_5, Local_197.f_1, Local_197.f_4, 1, 0, 1, 1))
			{
				if (func_36(Local_199))
				{
					unk_0xBB0358802AA14401(Local_197, Local_199, -1);
					unk_0x771A86309E0CA47B(Local_197, true);
					unk_0xAE01EF4BC84AFE7C(Local_197, 170, false);
					unk_0xE17958D3FD0F9EE9(Local_197, 65536, true);
					unk_0xAE6EBBBBD8B9FB30(Local_197, 50, true);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x6ADD12BF4D6D2587(Global_89475.f_9[1]))
			{
				if (!unk_0xA7E3B4C3A60721A5(Global_89475.f_9[1], 1))
				{
					unk_0xDD29FF4BAB8AFF9C(Global_89475.f_9[1], true, 1);
					Local_198 = Global_89475.f_9[1];
					if (func_333(Local_198))
					{
						unk_0xAE01EF4BC84AFE7C(Local_198, 170, false);
						unk_0xE17958D3FD0F9EE9(Local_198, 65536, true);
						unk_0xAE6EBBBBD8B9FB30(Local_198, 50, true);
						unk_0x771A86309E0CA47B(Local_198, true);
						unk_0xCFF0CD14B439821D(Local_198, 1, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_144(&Local_198, Local_198.f_5, Local_198.f_1, Local_198.f_4, 1, 0, 1, 1))
			{
				if (func_36(Local_199))
				{
					unk_0xBB0358802AA14401(Local_198, Local_199, 0);
					unk_0xAE01EF4BC84AFE7C(Local_198, 170, false);
					unk_0xE17958D3FD0F9EE9(Local_198, 65536, true);
					unk_0xAE6EBBBBD8B9FB30(Local_198, 50, true);
					unk_0x771A86309E0CA47B(Local_198, true);
					unk_0xCFF0CD14B439821D(Local_198, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_144(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x4760
{
	if (!unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (func_146(iParam1, "Loading", 0))
		{
			*iParam0 = unk_0xAC992EFAD62C33BF(26, iParam1, vParam2, fParam3, 1, true);
			if (func_333(*iParam0))
			{
				if (bParam5)
				{
					unk_0xEDC33A771FAEB393(*iParam0, true);
				}
				if (bParam6)
				{
					unk_0x771A86309E0CA47B(*iParam0, bParam6);
				}
				if (!bParam7)
				{
					unk_0x5C5D33A1B2711D21(*iParam0, bParam7);
				}
				if (bParam4)
				{
					func_145(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_333(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_145(int iParam0, bool bParam1)//Position - 0x47EA
{
	if (bParam1)
	{
		if (unk_0x9A0B2ED5055D3F0B(iParam0))
		{
			unk_0x14776E43F90DD454(iParam0);
		}
	}
	else
	{
		unk_0x14776E43F90DD454(iParam0);
	}
}

int func_146(int iParam0, char* sParam1, int iParam2)//Position - 0x480F
{
	unk_0x6FF834D85E2DD4C6(iParam0);
	if (!unk_0xAB019B170BF1309C(sParam1) && iParam2 != -1)
	{
	}
	if (unk_0x9A0B2ED5055D3F0B(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0x483E
{
	if (!unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (func_146(iParam1, "Loading", 0))
		{
			*iParam0 = unk_0xEA60F3B426BB095B(iParam1, vParam2, fParam3, 1, 1, 0);
			if (unk_0x6ADD12BF4D6D2587(*iParam0))
			{
				if (!unk_0x9761C10D57B68069(*iParam0))
				{
					unk_0xDD29FF4BAB8AFF9C(*iParam0, true, 0);
				}
				unk_0xACE486395AA1867D(*iParam0, 1084227584);
				if (bParam4)
				{
					func_145(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (func_36(*iParam0))
		{
			unk_0xBD8D47FDC6902B2D(*iParam0, vParam2, 1, false, 0, 1);
			unk_0x48ED7B2293A96722(*iParam0, fParam3);
		}
		if (!unk_0x9761C10D57B68069(*iParam0))
		{
			unk_0xDD29FF4BAB8AFF9C(*iParam0, true, 0);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_148(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x48F1
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

void func_149()//Position - 0x496C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		func_150(&(Local_45[iVar0 /*11*/]), iVar0);
		iVar0++;
	}
}

void func_150(int iParam0, int iParam1)//Position - 0x4994
{
	if (func_333(*iParam0))
	{
		func_196(iParam0, iParam1, 0);
		if (unk_0xA5F6598E13F98E08(*iParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 3))
		{
			if (unk_0x7A70772AE40E3821(*iParam0, "missfbi4prepp1", "_bag_drop_garbage_man") >= 0,172f)
			{
				if (func_10(Local_46[iLocal_48 /*25*/].f_17) && unk_0xDFFD5F8C8ABCB7EF(Local_46[iLocal_48 /*25*/].f_17))
				{
					unk_0x75B1352F83860B74(*iParam0, 1048576000);
					unk_0x40120540AB543E84(*iParam0);
					if (iLocal_48 <= 20 && iLocal_48 != -1)
					{
						Local_46[iLocal_48 /*25*/].f_18 = 1;
						iParam0->f_9 = 0;
					}
					unk_0x6B7C10B19928914F(Local_46[iLocal_48 /*25*/].f_17, 1, 0);
					unk_0x218AB919A4668C70(Local_46[iLocal_48 /*25*/].f_17, 1, unk_0xCE3B2111021F7234(*iParam0), 0, 1, 1, 0);
				}
			}
		}
		switch (iParam0->f_5)
		{
			case 0:
				if (iParam1 == 0)
				{
					func_193();
					func_192(iParam0);
				}
				func_179(iParam0);
				break;
			
			case 1:
				func_152(iParam0);
				break;
		}
	}
	else
	{
		if (func_10(Local_46[iLocal_48 /*25*/].f_17))
		{
			if (unk_0xDFFD5F8C8ABCB7EF(Local_46[iLocal_48 /*25*/].f_17))
			{
				unk_0x6B7C10B19928914F(Local_46[iLocal_48 /*25*/].f_17, 1, 0);
				unk_0x218AB919A4668C70(Local_46[iLocal_48 /*25*/].f_17, 1, unk_0xCE3B2111021F7234(*iParam0), 0, 1, 1, 0);
			}
		}
		func_7(&(iParam0->f_4));
		if (unk_0x6ADD12BF4D6D2587(*iParam0))
		{
			if (!func_151(unk_0xFC1458A37D98B502(), *iParam0, 150f, 1) && !bLocal_52)
			{
				func_5(iParam0, 1, 0, 1);
			}
		}
	}
}

bool func_151(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x4B12
{
	return system::vdist2(unk_0xB3328BA8976B416C(iParam0, iParam3), unk_0xB3328BA8976B416C(iParam1, iParam3)) <= (fParam2 * fParam2);
}

void func_152(int iParam0)//Position - 0x4B34
{
	var uVar0;
	var uVar1;
	
	switch (iParam0->f_6)
	{
		case 5:
			if ((unk_0x53C562FD2B9E3AB0() - iParam0->f_1) > iParam0->f_3)
			{
				if (func_178(*iParam0, 780511057))
				{
					unk_0xB8E08BD5B184DF4E(*iParam0);
				}
				unk_0xD68E88A8E0BE8697(*iParam0, unk_0xFC1458A37D98B502(), 30f, -1, 0, 0);
				iParam0->f_6 = 6;
				iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
			}
			break;
		
		case 21:
			if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
			{
				if (func_171(*iParam0, unk_0xFC1458A37D98B502(), 1126825984, 1, 250, 7))
				{
					func_170(iParam0, 1);
					return;
				}
			}
			if ((unk_0x53C562FD2B9E3AB0() - iParam0->f_1) > iParam0->f_3)
			{
				if (!unk_0x88DDBE9908752BF0(*iParam0, 0))
				{
					unk_0xB5DA12BA3E3BCECD(*iParam0, unk_0xFC1458A37D98B502(), 8f, -1f, 10f, 0);
				}
				else
				{
					unk_0x6931076730A4AC5D(&uVar0);
					unk_0x16416C5B54FDBCBB(0, 0, 0);
					unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
					unk_0x1B16DD5C115FE009(uVar0);
					unk_0xAB30B1CF01A198C1(*iParam0, uVar0);
					unk_0xFAA3EF7FF92E1F9E(&uVar0);
				}
				if (!unk_0xA6DECE14FC9A8C51(iParam0->f_4))
				{
					iParam0->f_4 = func_167(*iParam0, 1, 145);
				}
				iParam0->f_6 = 22;
				iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
			}
			break;
		
		case 10:
			if ((unk_0x53C562FD2B9E3AB0() - iParam0->f_1) > iParam0->f_3)
			{
				if (unk_0x88DDBE9908752BF0(*iParam0, 0))
				{
					unk_0x2217C45231E6A537(*iParam0, 120, true);
					iParam0->f_6 = 12;
					iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
				}
				else if (!func_178(*iParam0, 474215631))
				{
					if (func_178(*iParam0, 780511057))
					{
						unk_0xB8E08BD5B184DF4E(*iParam0);
					}
					unk_0xF21E6EBE8EFDCC28(*iParam0, -1);
					iParam0->f_6 = 12;
					iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
				}
			}
			break;
		
		case 3:
			if ((unk_0x53C562FD2B9E3AB0() - iParam0->f_1) > iParam0->f_3)
			{
				unk_0xB42437AE1AC08FDC(*iParam0, 1, 1);
				unk_0xD68E88A8E0BE8697(*iParam0, unk_0xFC1458A37D98B502(), 500f, -1, 0, 1);
				iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
				iParam0->f_6 = 4;
				iParam0->f_5 = 1;
			}
			break;
		
		case 11:
			func_166(iParam0);
			if ((unk_0x53C562FD2B9E3AB0() - iParam0->f_1) > 5000)
			{
				if (!func_178(*iParam0, 713668775))
				{
					if (unk_0x6ADD12BF4D6D2587(Local_45[func_165(iParam0->f_10) /*11*/]))
					{
						unk_0x380C1E7B7740D618(*iParam0, vLocal_54, 1f, -1, 2f, 0, 1193033728);
					}
				}
				iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
				iParam0->f_6 = 23;
				iParam0->f_5 = 1;
			}
			break;
		
		case 18:
			if (!func_178(*iParam0, -2017877118))
			{
				unk_0x6931076730A4AC5D(&uVar1);
				if (func_164(unk_0xB3328BA8976B416C(*iParam0, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 1,5f)
				{
					unk_0x7FC89099E65488E2(0, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 0);
				}
				unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				unk_0x1B16DD5C115FE009(uVar1);
				unk_0xAB30B1CF01A198C1(*iParam0, uVar1);
				unk_0xFAA3EF7FF92E1F9E(&uVar1);
				iParam0->f_5 = 1;
				iParam0->f_6 = 20;
				iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
			}
			break;
		
		case 19:
			func_166(iParam0);
			if (!func_178(*iParam0, -2017877118))
			{
				unk_0x2EA90674750EA01E(*iParam0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				iParam0->f_5 = 1;
				iParam0->f_6 = 20;
				iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
			}
			break;
		
		case 1:
			if (!unk_0xA8D0477084E86A92(*iParam0, iLocal_43, 0))
			{
				func_162(iParam0);
			}
			break;
		
		case 2:
			if (!unk_0x1ED974E122CB5C47(*iParam0) && (unk_0x53C562FD2B9E3AB0() - iParam0->f_1) > 3000)
			{
				func_162(iParam0);
			}
			break;
		
		case 4:
			if ((unk_0x53C562FD2B9E3AB0() - iParam0->f_1) > 8000)
			{
				unk_0xD68E88A8E0BE8697(*iParam0, unk_0xFC1458A37D98B502(), 500f, -1, 0, 0);
				if (!iLocal_53)
				{
					if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
					{
						unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 2, 0);
						unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
						iLocal_53 = 1;
					}
				}
				unk_0xB42437AE1AC08FDC(*iParam0, 0, 1);
				iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
				iParam0->f_6 = 8;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 1)
			{
				unk_0xB42437AE1AC08FDC(*iParam0, 0, 1);
				iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
				iParam0->f_6 = 8;
			}
			break;
		
		case 6:
			if ((unk_0x53C562FD2B9E3AB0() - iParam0->f_1) > iParam0->f_2)
			{
				if (!func_151(*iParam0, unk_0xFC1458A37D98B502(), 15f, 1))
				{
					func_7(&(iParam0->f_4));
					iParam0->f_6 = 7;
					iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
				}
			}
			break;
		
		case 7:
			if (unk_0xA8D0477084E86A92(*iParam0, iLocal_43, 1))
			{
				if (iParam0->f_6 != 4 && iParam0->f_6 != 1)
				{
					if (func_160())
					{
						if (func_333(*iParam0))
						{
							unk_0xB8E08BD5B184DF4E(*iParam0);
							unk_0xD68E88A8E0BE8697(*iParam0, unk_0xFC1458A37D98B502(), 500f, -1, 0, 1);
							iParam0->f_6 = 1;
						}
					}
				}
				if (!func_151(*iParam0, unk_0xFC1458A37D98B502(), 120f, 1))
				{
					func_5(iParam0, 1, 0, 1);
				}
			}
			else
			{
				func_162(iParam0);
			}
			break;
		
		case 8:
			if (!func_151(*iParam0, unk_0xFC1458A37D98B502(), 120f, 1))
			{
				func_5(iParam0, 1, 0, 1);
			}
			break;
		
		case 9:
			if (unk_0x27C8A4034A05DC21(*iParam0))
			{
				func_170(iParam0, 1);
				return;
			}
			if ((unk_0x53C562FD2B9E3AB0() - iParam0->f_1) > iParam0->f_2 || !func_178(*iParam0, 2104565373))
			{
				func_157(iParam0);
			}
			break;
		
		case 12:
			if ((unk_0x53C562FD2B9E3AB0() - iParam0->f_1) >= iParam0->f_2)
			{
				unk_0xD68E88A8E0BE8697(*iParam0, unk_0xFC1458A37D98B502(), 500f, -1, 0, 1);
				iParam0->f_6 = 5;
			}
			else
			{
				unk_0x2217C45231E6A537(*iParam0, 120, true);
			}
			break;
		
		case 13:
			if ((unk_0x53C562FD2B9E3AB0() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_151(*iParam0, unk_0xFC1458A37D98B502(), 15f, 1))
				{
					func_157(iParam0);
					iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
				}
				else if (func_171(Local_45[func_165(iParam0->f_10) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_170(iParam0, 0);
				}
				else
				{
					func_156(iParam0);
					iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
				}
			}
			break;
		
		case 15:
			if ((unk_0x53C562FD2B9E3AB0() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_151(*iParam0, unk_0xFC1458A37D98B502(), 15f, 1))
				{
					func_157(iParam0);
					iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
				}
				else if (func_171(Local_45[func_165(iParam0->f_10) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_170(iParam0, 0);
				}
				else
				{
					func_156(iParam0);
					iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
				}
			}
			break;
		
		case 16:
			if (unk_0x27C8A4034A05DC21(*iParam0))
			{
				func_170(iParam0, 1);
				return;
			}
			if ((unk_0x53C562FD2B9E3AB0() - iLocal_55) >= 9000)
			{
				if (!func_155(iParam0))
				{
					func_157(iParam0);
					iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
				}
				else
				{
					iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
					iParam0->f_5 = 1;
					iParam0->f_6 = 16;
				}
			}
			else if ((unk_0x53C562FD2B9E3AB0() - iLocal_55) >= 5000 && (unk_0x53C562FD2B9E3AB0() - iLocal_55) <= 5500)
			{
				if (unk_0x88DDBE9908752BF0(*iParam0, 0))
				{
					if (unk_0x4890D16618AA3B9C(*iParam0))
					{
						unk_0xFBAE050A008BC539(*iParam0);
					}
				}
			}
			break;
		
		case 14:
			if ((unk_0x53C562FD2B9E3AB0() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_151(*iParam0, unk_0xFC1458A37D98B502(), 15f, 1))
				{
					func_157(iParam0);
					iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
				}
				else if (func_171(Local_45[func_165(iParam0->f_10) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_170(iParam0, 0);
				}
				else
				{
					func_156(iParam0);
					iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
				}
			}
			break;
		
		case 17:
			if ((unk_0x53C562FD2B9E3AB0() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_151(*iParam0, unk_0xFC1458A37D98B502(), 15f, 1))
				{
					func_157(iParam0);
					iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
				}
				else if (func_171(Local_45[func_165(iParam0->f_10) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_170(iParam0, 0);
				}
				else
				{
					func_156(iParam0);
					iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
				}
			}
			break;
		
		case 20:
			if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6) && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				if (func_171(*iParam0, unk_0xFC1458A37D98B502(), 1126825984, 1, 250, 7))
				{
					func_170(iParam0, 1);
					return;
				}
			}
			if ((unk_0x53C562FD2B9E3AB0() - iParam0->f_1) >= 6000)
			{
				if (!unk_0x0F3033474C49912D(*iParam0, unk_0x3F90543934DCD7E6(iLocal_43, 5f, 0f, -2f), unk_0xB3328BA8976B416C(iLocal_43, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
				{
					func_157(iParam0);
				}
				else
				{
					func_162(iParam0);
					func_162(&(Local_45[func_165(iParam0->f_10) /*11*/]));
				}
				iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
			}
			func_166(iParam0);
			break;
		
		case 22:
			if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
			{
				if (func_171(*iParam0, unk_0xFC1458A37D98B502(), 1126825984, 1, 250, 7))
				{
					func_170(iParam0, 1);
					return;
				}
			}
			if ((unk_0x53C562FD2B9E3AB0() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_151(*iParam0, unk_0xFC1458A37D98B502(), 15f, 1))
				{
					func_157(iParam0);
					iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
					return;
				}
				else
				{
					func_156(iParam0);
					iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
				}
			}
			break;
		
		case 23:
			func_196(iParam0, iParam0->f_10, 1);
			func_166(iParam0);
			if (func_101(*iParam0, vLocal_54, 2f))
			{
				if (func_153(*iParam0, vLocal_54, 1126825984, 0))
				{
					unk_0xB8E08BD5B184DF4E(*iParam0);
					iParam0->f_6 = 19;
					iParam0->f_5 = 1;
					iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
				}
			}
			break;
	}
}

int func_153(int iParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0x5480
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_154(vParam1 - unk_0xB3328BA8976B416C(iParam0, 1)) };
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
		vVar1 = { func_154(unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 5f, 0f) - unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_127(vVar1, vVar0);
	if (fVar2 <= system::cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

Vector3 func_154(vector3 vParam0)//Position - 0x550E
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

int func_155(int iParam0)//Position - 0x554D
{
	if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), unk_0x3F90543934DCD7E6(iLocal_43, 0f, 10f, -2f), unk_0x3F90543934DCD7E6(iLocal_43, 0f, 3f, 2f), 5f, 0, 1, 0) && unk_0xDE42C4904F29B0CE(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_156(int iParam0)//Position - 0x558F
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (func_36(iVar0))
		{
			if (!unk_0x8EA8060A1C856203(*iParam0, iVar0, -1, 0, 0))
			{
				iParam0->f_6 = 18;
				iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
			}
		}
	}
}

void func_157(int iParam0)//Position - 0x55D5
{
	unk_0xF96119FCCD4D1889(2, iLocal_40, 1862763509);
	switch (iParam0->f_8)
	{
		case 4:
			break;
		
		case 10:
			break;
		
		case 8:
			func_123();
			break;
		
		case 3:
			if (!func_178(*iParam0, 242628503))
			{
				if (iLocal_48 <= 20 && iLocal_48 != -1)
				{
					Local_46[iLocal_48 /*25*/].f_18 = 1;
				}
				if (!unk_0xA8D0477084E86A92(*iParam0, iLocal_43, 0))
				{
					if (iParam0->f_10 == 0)
					{
						unk_0x380C1E7B7740D618(*iParam0, unk_0x3F90543934DCD7E6(iLocal_43, func_131(1)), 1f, -1, 0,25f, 0, 1193033728);
						iParam0->f_7 = 1;
					}
					else
					{
						unk_0x380C1E7B7740D618(*iParam0, unk_0x3F90543934DCD7E6(iLocal_43, func_131(0)), 1f, -1, 0,25f, 0, 1193033728);
						iParam0->f_7 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xA8D0477084E86A92(*iParam0, iLocal_43, 0))
			{
				if (iParam0->f_10 == 0)
				{
					unk_0x380C1E7B7740D618(*iParam0, unk_0x3F90543934DCD7E6(iLocal_43, func_131(1)), 1f, -1, 0,25f, 0, 1193033728);
					iParam0->f_7 = 1;
				}
				else
				{
					unk_0x380C1E7B7740D618(*iParam0, unk_0x3F90543934DCD7E6(iLocal_43, func_131(0)), 1f, -1, 0,25f, 0, 1193033728);
					iParam0->f_7 = 1;
				}
			}
			break;
		
		case 9:
			if (!Local_46[iLocal_48 /*25*/].f_18)
			{
				if (iParam0->f_9 == 1)
				{
					func_158(iParam0);
				}
				else if (iParam0->f_10 == 0)
				{
					unk_0x380C1E7B7740D618(*iParam0, unk_0x3F90543934DCD7E6(iLocal_43, func_131(1)), 1f, -1, 0,25f, 0, 1193033728);
					iParam0->f_7 = 1;
				}
				else
				{
					unk_0x380C1E7B7740D618(*iParam0, unk_0x3F90543934DCD7E6(iLocal_43, func_131(0)), 1f, -1, 0,25f, 0, 1193033728);
					iParam0->f_7 = 1;
				}
			}
			else if (!unk_0xA8D0477084E86A92(*iParam0, iLocal_43, 0))
			{
				if (iParam0->f_10 == 0)
				{
					unk_0x380C1E7B7740D618(*iParam0, unk_0x3F90543934DCD7E6(iLocal_43, func_131(1)), 1f, -1, 0,25f, 0, 1193033728);
					iParam0->f_7 = 1;
				}
				else
				{
					unk_0x380C1E7B7740D618(*iParam0, unk_0x3F90543934DCD7E6(iLocal_43, func_131(0)), 1f, -1, 0,25f, 0, 1193033728);
					iParam0->f_7 = 1;
				}
			}
			break;
		
		default:
			break;
	}
	iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
	iParam0->f_5 = 0;
}

void func_158(var uParam0)//Position - 0x5800
{
	if (!func_178(*uParam0, -71340211))
	{
		if (Local_46[iLocal_48 /*25*/].f_23 != 0)
		{
			if (func_10(Local_46[iLocal_48 /*25*/].f_17))
			{
				unk_0xDF37E777E6321E4F(*uParam0, Local_46[iLocal_48 /*25*/].f_17, -1, 0f, 180f, 1f, 0);
			}
		}
		else
		{
			unk_0x380C1E7B7740D618(*uParam0, Local_46[iLocal_48 /*25*/].f_19, 1f, 20000, -1f, 0, func_159(Local_46[iLocal_48 /*25*/].f_19, unk_0xB3328BA8976B416C(*uParam0, 1), 1));
		}
		if (func_36(iLocal_43))
		{
			unk_0x6D4A70E9DE82B24B(iLocal_43, 5, 0, 0);
		}
		uParam0->f_8 = uParam0->f_7;
		uParam0->f_7 = 9;
		uParam0->f_9 = 1;
	}
}

float func_159(struct<2> Param0, var uParam1, struct<2> Param2, float fParam3, int iParam4)//Position - 0x58A6
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xF5596B3A7E5F3C68(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_160()//Position - 0x590B
{
	if (func_36(iLocal_43) && func_333(unk_0xFC1458A37D98B502()))
	{
		if (unk_0xEBE499597C718EB8(iLocal_43, unk_0xFC1458A37D98B502(), 1))
		{
			unk_0x2B0DDE3D071497AD(iLocal_43);
			if (func_161() || unk_0xDE523AF6F7B269AB(iLocal_43) < 851)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_161()//Position - 0x5959
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0x36CA14E4AEA7AA81(iLocal_43, iVar0, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_162(int iParam0)//Position - 0x5993
{
	if (iParam0->f_6 != 3 && iParam0->f_6 != 4)
	{
		func_163(iParam0);
		iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
		iParam0->f_6 = 3;
		iParam0->f_5 = 1;
	}
}

void func_163(var uParam0)//Position - 0x59C7
{
	if (uParam0->f_7 == 9)
	{
		if (uParam0->f_9 >= 2)
		{
			if (!unk_0x3AB6A1A9084FB0A4(*uParam0))
			{
				unk_0x75B1352F83860B74(*uParam0, 1048576000);
				unk_0x40120540AB543E84(*uParam0);
				unk_0x12C9D41D52A560D6(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 8f, -8f, -1, 56, 0, 0, 0, 0);
			}
		}
	}
}

float func_164(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x5A1D
{
	return unk_0xA67DD8488EBA5F6D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_165(int iParam0)//Position - 0x5A37
{
	if (iParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_166(int iParam0)//Position - 0x5A4A
{
	if (func_36(iLocal_43) && (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_43, 0) && !unk_0xA8D0477084E86A92(*iParam0, iLocal_43, 0)))
	{
		if (unk_0x90D5DFB054818BA7(iLocal_43) > 0f)
		{
			iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
			iParam0->f_8 = iParam0->f_7;
			iParam0->f_5 = 1;
			iParam0->f_6 = 21;
		}
	}
}

int func_167(int iParam0, bool bParam1, int iParam2)//Position - 0x5AA4
{
	int iVar0;
	
	iVar0 = func_168(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(iVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(iVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_168(int iParam0, bool bParam1, bool bParam2)//Position - 0x5AF6
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_169(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_169(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_169(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_169(bool bParam0, float fParam1, float fParam2)//Position - 0x5B9A
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_170(int iParam0, int iParam1)//Position - 0x5BB1
{
	func_163(iParam0);
	if ((unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6) || iParam1) || iParam0->f_6 == 23)
	{
		if (!func_151(unk_0xFC1458A37D98B502(), *iParam0, 10f, 1))
		{
			if (!func_178(*iParam0, 1805844857))
			{
				iParam0->f_6 = 5;
				iParam0->f_5 = 1;
				iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
			}
		}
		else
		{
			iParam0->f_6 = 10;
			iParam0->f_5 = 1;
			iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
		}
	}
	else if (iParam0->f_5 != 1)
	{
		if (!func_178(*iParam0, 780511057) && !func_178(*iParam0, -71340211))
		{
			iParam0->f_5 = 1;
			iParam0->f_6 = 21;
			iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
		}
	}
}

bool func_171(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5C6D
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_177(iParam0, iParam1);
	if (!func_10(iParam0) || !func_10(iParam1))
	{
		if (iVar2 != -1)
		{
			func_176(&(Local_38[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_175(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_174();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_38[iVar2 /*4*/].f_1 = iParam0;
		Local_38[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_172(&(Local_38[iVar2 /*4*/]), vVar1, iParam1, &(Local_38[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x53C562FD2B9E3AB0() - Local_38[iVar2 /*4*/].f_3) < iParam4);
}

int func_172(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)//Position - 0x5D2E
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_10(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_173(iParam2, iParam5) };
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
		func_10(iVar3);
		if (unk_0x07F64790D10D1DB5(iVar3) == iParam2)
		{
			if (bLocal_39)
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
		func_10(iVar3);
		if (unk_0x88DDBE9908752BF0(iParam2, 0))
		{
			if (unk_0x79A6CD762DCCABE4(iVar3) == unk_0xDFD115BB10FE46A9(iParam2, 0))
			{
				if (bLocal_39)
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

Vector3 func_173(int iParam0, int iParam1)//Position - 0x5E5A
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

int func_174()//Position - 0x5F1F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_38)
	{
		if ((Local_38[iVar0 /*4*/] == 0 && Local_38[iVar0 /*4*/].f_1 == 0) && Local_38[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_175(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x5F69
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_154(unk_0xB3328BA8976B416C(iParam1, 1) - unk_0xB3328BA8976B416C(iParam0, 1)) };
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
		vVar1 = { func_154(unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 5f, 0f) - unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_127(vVar1, vVar0);
	if (fVar2 <= system::cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

void func_176(var uParam0)//Position - 0x5FFA
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_177(int iParam0, int iParam1)//Position - 0x6015
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_38)
	{
		if (Local_38[iVar0 /*4*/].f_1 == iParam0 && Local_38[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_178(int iParam0, int iParam1)//Position - 0x6054
{
	if (func_333(iParam0))
	{
		if (unk_0x78F50AA8F955BEFC(iParam0, iParam1) == 1 || unk_0x78F50AA8F955BEFC(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_179(var uParam0)//Position - 0x6087
{
	float fVar0;
	
	if (uParam0->f_9 == 0 && uParam0->f_10 == 1)
	{
	}
	switch (uParam0->f_7)
	{
		case 1:
			if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_43, 1))
			{
				func_170(uParam0, 0);
				return;
			}
			if (uParam0->f_10 == 0)
			{
				func_190(uParam0, 1);
			}
			else
			{
				func_190(uParam0, 0);
			}
			break;
		
		case 2:
			if (unk_0xAAA8D20859E2D36D(*uParam0, iLocal_43))
			{
				if (!func_178(*uParam0, -1794415470))
				{
					if (uParam0->f_10 == 0)
					{
						func_124(0);
					}
					else
					{
						uParam0->f_7 = 3;
					}
				}
			}
			else if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_43, 1))
			{
				func_170(uParam0, 0);
				return;
			}
			break;
		
		case 3:
			if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_43, 1))
			{
				func_170(uParam0, 0);
				return;
			}
			if (bLocal_51)
			{
				if (iLocal_48 <= 20 && iLocal_48 != -1)
				{
					if (!Local_46[iLocal_48 /*25*/].f_18)
					{
						if (func_101(*uParam0, Local_46[iLocal_48 /*25*/], 20f))
						{
							if (Local_46[iLocal_48 /*25*/].f_9 && unk_0x9EC5112BB1C4047A(iLocal_43))
							{
								func_189();
							}
						}
					}
				}
				else
				{
					uParam0->f_7 = 10;
				}
			}
			break;
		
		case 4:
			if (func_101(*uParam0, Local_46[iLocal_48 /*25*/], 25f))
			{
				if (Local_46[iLocal_48 /*25*/].f_9)
				{
					func_188(uParam0);
				}
				else
				{
					Local_46[iLocal_48 /*25*/].f_18 = 1;
					func_124(0);
				}
			}
			break;
		
		case 5:
			if (func_36(iLocal_43))
			{
				unk_0xA1AA40A93CA0F40D(iLocal_43, 25f, 10, 0);
				fVar0 = unk_0x90D5DFB054818BA7(iLocal_43);
				if (fVar0 < 8f)
				{
					func_188(uParam0);
				}
			}
			break;
		
		case 6:
			if (!func_178(*uParam0, 242628503) && unk_0x9EC5112BB1C4047A(iLocal_43))
			{
				if (bLocal_51)
				{
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 7;
				}
				else
				{
					unk_0x16416C5B54FDBCBB(*uParam0, 0, 0);
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 8;
				}
			}
			break;
		
		case 7:
			if (func_333(Local_45[1 /*11*/]))
			{
				if (unk_0xA8D0477084E86A92(Local_45[1 /*11*/], iLocal_43, 0) && Local_45[1 /*11*/].f_7 == 3)
				{
					func_124(0);
				}
			}
			break;
		
		case 8:
			if (!unk_0xA8D0477084E86A92(*uParam0, iLocal_43, 0))
			{
				func_158(uParam0);
			}
			break;
		
		case 9:
			func_180(uParam0);
			break;
	}
}

void func_180(var uParam0)//Position - 0x62F0
{
	var uVar0;
	var uVar1;
	
	if (uParam0->f_9 >= 1 && uParam0->f_9 != 0)
	{
	}
	switch (uParam0->f_9)
	{
		case 1:
			if (!func_178(*uParam0, -2015108952))
			{
				unk_0x6931076730A4AC5D(&uVar0);
				if (func_164(unk_0xB3328BA8976B416C(*uParam0, 1), Local_46[iLocal_48 /*25*/].f_19) > 1,5f)
				{
					unk_0x7FC89099E65488E2(0, Local_46[iLocal_48 /*25*/].f_19, 0);
				}
				unk_0x12C9D41D52A560D6(0, "missfbi4prepp1", "_bag_pickup_garbage_man", 8f, -16f, -1, 528384, 0, 0, 0, 0);
				unk_0x1B16DD5C115FE009(uVar0);
				unk_0xAB30B1CF01A198C1(*uParam0, uVar0);
				unk_0xFAA3EF7FF92E1F9E(&uVar0);
				uParam0->f_9 = 2;
			}
			else if (func_185(Local_46[iLocal_48 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
			{
				func_184(uParam0);
				return;
			}
			unk_0x91AD7123A61E33F8(*uParam0, 0,2f);
			break;
		
		case 2:
			if (func_178(*uParam0, 242628503))
			{
				if (unk_0xA5F6598E13F98E08(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man", 3))
				{
					if (unk_0x7A70772AE40E3821(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man") >= 0,333f)
					{
						unk_0x60C54803C97FDAAB(*uParam0, "missfbi4prepp1_garbageman", 0f);
						unk_0x22B03603588D6D33(*uParam0, "missfbi4prepp1_garbageman");
						if (func_10(Local_46[iLocal_48 /*25*/].f_17) && !unk_0xDFFD5F8C8ABCB7EF(Local_46[iLocal_48 /*25*/].f_17))
						{
							unk_0xA9D382E7BA095148(Local_46[iLocal_48 /*25*/].f_17, *uParam0, unk_0xDD09837E5235FE91(*uParam0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
						}
					}
				}
				if (func_185(Local_46[iLocal_48 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
				{
					func_184(uParam0);
					return;
				}
			}
			else if (!func_178(*uParam0, 713668775))
			{
				if (func_36(iLocal_43))
				{
					unk_0x380C1E7B7740D618(*uParam0, unk_0x3F90543934DCD7E6(iLocal_43, 0f, -4,8f, 0f), 1f, -1, 0,25f, 0, unk_0xF0371FE6E2BF9599(iLocal_43));
				}
				uParam0->f_9 = 3;
			}
			unk_0x91AD7123A61E33F8(*uParam0, 0,2f);
			break;
		
		case 3:
			if (func_36(iLocal_43))
			{
				if (!func_185(unk_0x3F90543934DCD7E6(iLocal_43, 0f, -5,5f, 0f), iLocal_43, 1,9f, 1,9f, 8f))
				{
					if (unk_0x0C88267282FD588F(*uParam0, unk_0x3F90543934DCD7E6(iLocal_43, 0f, -5,5f, 0f), 0,9f, 0,9f, 2f, 0, 1, 0))
					{
						if (!func_178(*uParam0, 713668775))
						{
							unk_0x6931076730A4AC5D(&uVar1);
							if (func_164(unk_0xB3328BA8976B416C(*uParam0, 1), unk_0xB3328BA8976B416C(iLocal_43, 1)) > 3f)
							{
								unk_0x2DAC3448B66448E8(0, unk_0xF0371FE6E2BF9599(iLocal_43), 0);
							}
							unk_0x12C9D41D52A560D6(0, "missfbi4prepp1", "_bag_throw_garbage_man", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x1B16DD5C115FE009(uVar1);
							unk_0xAB30B1CF01A198C1(*uParam0, uVar1);
							unk_0xFAA3EF7FF92E1F9E(&uVar1);
							uParam0->f_9 = 4;
						}
					}
					else if (!func_178(*uParam0, 713668775))
					{
						unk_0x380C1E7B7740D618(*uParam0, unk_0x3F90543934DCD7E6(iLocal_43, 0f, -4,8f, 0f), 1f, -1, 0,25f, 0, unk_0xF0371FE6E2BF9599(iLocal_43));
					}
				}
				else
				{
					func_182(uParam0);
				}
			}
			break;
		
		case 4:
			if (!func_185(unk_0x3F90543934DCD7E6(iLocal_43, 0f, -5,5f, 0f), *uParam0, 1,9f, 1,9f, 8f))
			{
				if (func_178(*uParam0, 242628503))
				{
					if (unk_0xA5F6598E13F98E08(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man", 3))
					{
						if (unk_0x7A70772AE40E3821(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man") >= 0,391f)
						{
							if (func_10(Local_46[iLocal_48 /*25*/].f_17))
							{
								if (unk_0xDFFD5F8C8ABCB7EF(Local_46[iLocal_48 /*25*/].f_17))
								{
									unk_0x75B1352F83860B74(*uParam0, 1048576000);
									unk_0x40120540AB543E84(*uParam0);
									unk_0x6B7C10B19928914F(Local_46[iLocal_48 /*25*/].f_17, 1, 0);
									unk_0xD402897AA0C356FA(Local_46[iLocal_48 /*25*/].f_17, 2f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1082130432, -1082130432, -1082130432);
									unk_0x218AB919A4668C70(Local_46[iLocal_48 /*25*/].f_17, 1, unk_0xCE3B2111021F7234(*uParam0), 0, 1, 1, 0);
								}
								if (unk_0x9A213A2345825783(Local_46[iLocal_48 /*25*/].f_17, iLocal_43))
								{
									func_181(&(Local_46[iLocal_48 /*25*/].f_17));
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_9 = 0;
					if (func_36(iLocal_43))
					{
						unk_0xDA5162F6425C44AA(iLocal_43, 5, 0);
						func_181(&(Local_46[iLocal_48 /*25*/].f_17));
					}
					func_157(uParam0);
				}
			}
			else
			{
				func_182(uParam0);
			}
			break;
		
		case 5:
			break;
	}
}

void func_181(int iParam0)//Position - 0x6734
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (unk_0x6049C20F5D5C185B(*iParam0))
		{
			unk_0x6B7C10B19928914F(*iParam0, 1, 1);
		}
		unk_0x452336926718D62A(iParam0);
	}
}

void func_182(var uParam0)//Position - 0x675F
{
	var uVar0;
	var uVar1;
	
	unk_0xF96119FCCD4D1889(5, iLocal_40, 1862763509);
	func_163(uParam0);
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!unk_0x88DDBE9908752BF0(*uParam0, 0))
		{
			unk_0xB5DA12BA3E3BCECD(*uParam0, unk_0xFC1458A37D98B502(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0x6931076730A4AC5D(&uVar0);
			unk_0x16416C5B54FDBCBB(0, 0, 0);
			unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
			unk_0x1B16DD5C115FE009(uVar0);
			unk_0xAB30B1CF01A198C1(*uParam0, uVar0);
			unk_0xFAA3EF7FF92E1F9E(&uVar0);
		}
	}
	else
	{
		unk_0x6931076730A4AC5D(&uVar1);
		unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
		unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
		unk_0x1B16DD5C115FE009(uVar1);
		unk_0xAB30B1CF01A198C1(*uParam0, uVar1);
		unk_0xFAA3EF7FF92E1F9E(&uVar1);
	}
	unk_0x75B1352F83860B74(*uParam0, 1048576000);
	unk_0x40120540AB543E84(*uParam0);
	func_183();
	if (!unk_0xA6DECE14FC9A8C51(uParam0->f_4))
	{
		uParam0->f_4 = func_167(*uParam0, 1, 145);
	}
	uParam0->f_1 = unk_0x53C562FD2B9E3AB0();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 15;
}

void func_183()//Position - 0x685A
{
	Local_42 = 0;
	Local_42.f_26 = 0;
	Local_42.f_18 = 0;
}

void func_184(var uParam0)//Position - 0x686F
{
	var uVar0;
	var uVar1;
	
	unk_0xF96119FCCD4D1889(5, iLocal_40, 1862763509);
	func_163(uParam0);
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!unk_0x88DDBE9908752BF0(*uParam0, 0))
		{
			unk_0xB5DA12BA3E3BCECD(*uParam0, unk_0xFC1458A37D98B502(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0x6931076730A4AC5D(&uVar0);
			unk_0x16416C5B54FDBCBB(0, 0, 0);
			unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
			unk_0x1B16DD5C115FE009(uVar0);
			unk_0xAB30B1CF01A198C1(*uParam0, uVar0);
			unk_0xFAA3EF7FF92E1F9E(&uVar0);
		}
	}
	else
	{
		unk_0x6931076730A4AC5D(&uVar1);
		unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
		unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
		unk_0x1B16DD5C115FE009(uVar1);
		unk_0xAB30B1CF01A198C1(*uParam0, uVar1);
		unk_0xFAA3EF7FF92E1F9E(&uVar1);
	}
	unk_0x75B1352F83860B74(*uParam0, 1048576000);
	unk_0x40120540AB543E84(*uParam0);
	func_183();
	if (!unk_0xA6DECE14FC9A8C51(uParam0->f_4))
	{
		uParam0->f_4 = func_167(*uParam0, 1, 145);
	}
	uParam0->f_1 = unk_0x53C562FD2B9E3AB0();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 14;
}

int func_185(vector3 vParam0, int iParam1, vector3 vParam2)//Position - 0x696A
{
	Local_42.f_2 = { vParam0 };
	Local_42.f_8 = { vParam2 };
	func_186(&Local_42, iParam1);
	if (Local_42.f_26)
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x8A3FF8E81B40BB75(Local_42.f_18))
			{
				if (func_10(Local_42.f_18))
				{
					if (unk_0x79A6CD762DCCABE4(Local_42.f_18) == unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 1))
					{
						return 1;
					}
				}
			}
		}
		else if (unk_0x52C56492660097C7(Local_42.f_18))
		{
			if (func_10(Local_42.f_18))
			{
				if (unk_0x07F64790D10D1DB5(Local_42.f_18) == unk_0xFC1458A37D98B502())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_186(var uParam0, int iParam1)//Position - 0x69FC
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x16ACABF450EB00B4(*uParam0, &iVar0, &(uParam0->f_20), &(uParam0->f_23), &(uParam0->f_18));
	uParam0->f_19 = 2 == iVar1;
	if (uParam0->f_19)
	{
		if (0 == iVar0)
		{
			uParam0->f_26 = 0;
		}
		else
		{
			uParam0->f_26 = 1;
		}
	}
	if (iVar1 != 1)
	{
		func_187(uParam0, iParam1);
	}
}

void func_187(var uParam0, int iParam1)//Position - 0x6A4B
{
	switch (uParam0->f_1)
	{
		case 0:
			break;
		
		case 1:
			*uParam0 = unk_0x8941008352A0F66A(uParam0->f_2, uParam0->f_5, 511, iParam1, 7);
			break;
		
		case 2:
			*uParam0 = unk_0x64694FF3599F56A1(uParam0->f_17, 511, 4);
			break;
		
		case 3:
			*uParam0 = unk_0xABA99052CD964566(uParam0->f_17, 511, 4);
			break;
		
		case 4:
			*uParam0 = unk_0x17A93AB091FDD6BE(uParam0->f_2, uParam0->f_8, uParam0->f_11, uParam0->f_14, 6, iParam1, 4);
			break;
		
		case 5:
			*uParam0 = unk_0xFF32E7A273D539FD(uParam0->f_2, uParam0->f_5, uParam0->f_15, 511, iParam1, 4);
			break;
	}
	uParam0->f_16 = *uParam0 != 0;
}

void func_188(var uParam0)//Position - 0x6B10
{
	var uVar0;
	
	if (func_36(iLocal_43))
	{
		unk_0x6931076730A4AC5D(&uVar0);
		unk_0x87A3E70B0AB01608(0, iLocal_43, Local_46[iLocal_48 /*25*/].f_3, 8f, 0, joaat("trash"), 786469, 10f, 15f);
		unk_0x9E8EE202E802AC5B(0, iLocal_43, Local_46[iLocal_48 /*25*/].f_3, Local_46[iLocal_48 /*25*/].f_8, Local_46[iLocal_48 /*25*/].f_10, 5f, 1);
		unk_0x1B16DD5C115FE009(uVar0);
		unk_0xAB30B1CF01A198C1(*uParam0, uVar0);
		unk_0xFAA3EF7FF92E1F9E(&uVar0);
		uParam0->f_7 = 6;
	}
}

void func_189()//Position - 0x6B92
{
	func_158(&(Local_45[1 /*11*/]));
}

void func_190(var uParam0, bool bParam1)//Position - 0x6BA3
{
	int iVar0;
	
	if (func_185(unk_0x3F90543934DCD7E6(iLocal_43, func_131(bParam1)), iLocal_43, 1,9f, 1,9f, 8f))
	{
		if (unk_0x0F3033474C49912D(*uParam0, unk_0x3F90543934DCD7E6(iLocal_43, 5f, 0f, -2f), unk_0xB3328BA8976B416C(iLocal_43, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0) && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), unk_0x3F90543934DCD7E6(iLocal_43, 5f, 0f, -2f), unk_0xB3328BA8976B416C(iLocal_43, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			func_191(uParam0);
		}
		else if (!func_178(*uParam0, 1227113341) && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), unk_0x3F90543934DCD7E6(iLocal_43, 5f, 0f, -2f), unk_0xB3328BA8976B416C(iLocal_43, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			unk_0xB8E08BD5B184DF4E(*uParam0);
			unk_0x4C7AF3B2BE8C3193(*uParam0, unk_0xFC1458A37D98B502(), -1, 4f, 1f, 1073741824, 0);
		}
	}
	else if (func_101(*uParam0, unk_0x3F90543934DCD7E6(iLocal_43, func_131(bParam1)), 5f))
	{
		iVar0 = -1;
		if (!bParam1)
		{
			iVar0 = 0;
		}
		unk_0x6F8C8278B7C06889(*uParam0, iLocal_43, -1, iVar0, 1f, 8388609, 0);
		uParam0->f_7 = 2;
	}
}

void func_191(var uParam0)//Position - 0x6CC4
{
	var uVar0;
	var uVar1;
	
	unk_0xF96119FCCD4D1889(5, iLocal_40, 1862763509);
	func_163(uParam0);
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!unk_0x88DDBE9908752BF0(*uParam0, 0))
		{
			unk_0xB5DA12BA3E3BCECD(*uParam0, unk_0xFC1458A37D98B502(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0x6931076730A4AC5D(&uVar0);
			unk_0x16416C5B54FDBCBB(0, 0, 0);
			unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
			unk_0x1B16DD5C115FE009(uVar0);
			unk_0xAB30B1CF01A198C1(*uParam0, uVar0);
			unk_0xFAA3EF7FF92E1F9E(&uVar0);
		}
	}
	else
	{
		unk_0x6931076730A4AC5D(&uVar1);
		unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
		unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
		unk_0x1B16DD5C115FE009(uVar1);
		unk_0xAB30B1CF01A198C1(*uParam0, uVar1);
		unk_0xFAA3EF7FF92E1F9E(&uVar1);
	}
	unk_0x75B1352F83860B74(*uParam0, 1048576000);
	unk_0x40120540AB543E84(*uParam0);
	func_183();
	uParam0->f_1 = unk_0x53C562FD2B9E3AB0();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 13;
}

void func_192(var uParam0)//Position - 0x6DA5
{
	if (uParam0->f_5 != 1)
	{
		if (func_36(iLocal_43) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (!func_178(*uParam0, 2104565373) && unk_0xA8D0477084E86A92(*uParam0, iLocal_43, 0))
			{
				if (func_151(unk_0xFC1458A37D98B502(), iLocal_43, 10f, 1))
				{
					if (unk_0x9A213A2345825783(iLocal_43, unk_0xFC1458A37D98B502()))
					{
						unk_0x3D625AB3CFE71DF3(*uParam0, unk_0xFC1458A37D98B502(), 0, 0f, 0f, 0f, 10f, 100, 1, -957453492);
						uParam0->f_1 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_6 = 9;
					}
				}
			}
		}
	}
}

void func_193()//Position - 0x6E35
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_41 - 1))
	{
		if (Local_46[iVar0 /*25*/].f_23 != 0)
		{
			if (Local_46[iVar0 /*25*/].f_24)
			{
				if ((iVar0 != iLocal_48 && func_10(Local_46[iVar0 /*25*/].f_17)) && func_195(Local_46[iVar0 /*25*/].f_17, unk_0xFC1458A37D98B502(), 1) > 200f)
				{
					unk_0x452336926718D62A(&(Local_46[iVar0 /*25*/].f_17));
					Local_46[iVar0 /*25*/].f_24 = 0;
				}
			}
			else if (Local_46[iVar0 /*25*/].f_23 != 0)
			{
				if (func_101(unk_0xFC1458A37D98B502(), Local_46[iVar0 /*25*/], 100f) || func_101(Local_45[0 /*11*/], Local_46[iVar0 /*25*/], 120f))
				{
					Local_46[iVar0 /*25*/].f_24 = func_194(&(Local_46[iVar0 /*25*/].f_17), Local_46[iVar0 /*25*/].f_23, Local_46[iVar0 /*25*/].f_19, Local_46[iVar0 /*25*/].f_22, 1);
				}
			}
		}
		iVar0++;
	}
}

int func_194(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0x6F26
{
	if (!unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		if (func_146(iParam1, "Loading", 0))
		{
			*uParam0 = unk_0x5E35CF35E65D69B9(iParam1, vParam2, 1, true, 0);
			if (unk_0x6ADD12BF4D6D2587(*uParam0))
			{
				unk_0x48ED7B2293A96722(*uParam0, fParam3);
				unk_0x764B52EA8B8FFFA3(*uParam0);
				if (bParam4)
				{
					func_145(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_10(*uParam0))
	{
		return 1;
	}
	return 0;
}

float func_195(int iParam0, int iParam1, bool bParam2)//Position - 0x6F93
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

void func_196(int iParam0, int iParam1, int iParam2)//Position - 0x6FF1
{
	if (iParam0->f_5 != 1 || iParam2)
	{
		if (!func_333(Local_45[func_165(iParam1) /*11*/]))
		{
			if (!bLocal_52)
			{
				if (unk_0x6ADD12BF4D6D2587(Local_45[func_165(iParam1) /*11*/]))
				{
					if (func_175(*iParam0, Local_45[func_165(iParam1) /*11*/], 140f, 0) || func_151(Local_45[func_165(iParam1) /*11*/], *iParam0, 3f, 1))
					{
						func_170(iParam0, 0);
						bLocal_52 = true;
						return;
					}
					else
					{
						vLocal_54 = { unk_0xB3328BA8976B416C(Local_45[func_165(iParam1) /*11*/], 1) };
						iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
						iParam0->f_8 = iParam0->f_7;
						iParam0->f_5 = 1;
						iParam0->f_6 = 11;
					}
				}
				else
				{
					func_170(iParam0, 0);
				}
			}
		}
		else if (Local_45[func_165(iParam1) /*11*/].f_6 == 22)
		{
			if (func_175(*iParam0, Local_45[func_165(iParam1) /*11*/], 140f, 0) && func_151(Local_45[func_165(iParam1) /*11*/], unk_0xFC1458A37D98B502(), 15f, 1))
			{
				iParam0->f_5 = 1;
				iParam0->f_6 = 21;
			}
		}
		else if (Local_45[func_165(iParam1) /*11*/].f_6 == 5 || Local_45[func_165(iParam1) /*11*/].f_6 == 7)
		{
			if (func_151(Local_45[func_165(iParam1) /*11*/], *iParam0, 10f, 1))
			{
				func_170(iParam0, 0);
			}
		}
		if (func_207(*iParam0))
		{
			func_163(iParam0);
			iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
			iParam0->f_8 = iParam0->f_7;
			iParam0->f_5 = 1;
			iParam0->f_6 = 21;
		}
		if (iParam0->f_10 == 0 && iParam0->f_7 == 4)
		{
			if (func_155(iParam0))
			{
				if (unk_0xA8D0477084E86A92(*iParam0, iLocal_43, 0))
				{
					unk_0x3D625AB3CFE71DF3(*iParam0, unk_0xFC1458A37D98B502(), 0, 0f, 0f, 0f, 10f, 100, 1, -957453492);
					unk_0x9D4DE1428B768541(iLocal_43, 2000f);
					iLocal_55 = unk_0x53C562FD2B9E3AB0();
					iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
					iParam0->f_6 = 16;
					iParam0->f_5 = 1;
				}
			}
		}
		if (func_198(*iParam0, 1, 70f, 170f, 0, 1, 0, 0) && !func_197(iParam0))
		{
			if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
			{
				if (func_36(iLocal_43))
				{
					if (unk_0xA8D0477084E86A92(*iParam0, iLocal_43, 0))
					{
						if (unk_0x90D5DFB054818BA7(iLocal_43) > 5f)
						{
							if (iParam1 == 0)
							{
								unk_0xD2C269DBF147B406(*iParam0, iLocal_43, unk_0xFC1458A37D98B502(), 8, 30f, 786469, 300f, 2f, 1);
								iParam0->f_6 = 7;
								unk_0xF21E6EBE8EFDCC28(Local_45[func_165(iParam1) /*11*/], -1);
								Local_45[func_165(iParam1) /*11*/].f_6 = 10;
								Local_45[func_165(iParam1) /*11*/].f_5 = 1;
								iParam0->f_5 = 1;
								iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
								Local_45[func_165(iParam1) /*11*/].f_1 = unk_0x53C562FD2B9E3AB0();
							}
							else
							{
								unk_0xF21E6EBE8EFDCC28(*iParam0, -1);
								iParam0->f_6 = 12;
								unk_0xD2C269DBF147B406(Local_45[func_165(iParam1) /*11*/], iLocal_43, unk_0xFC1458A37D98B502(), 8, 30f, 786469, 300f, 2f, 1);
								Local_45[func_165(iParam1) /*11*/].f_6 = 5;
								Local_45[func_165(iParam1) /*11*/].f_5 = 1;
								iParam0->f_5 = 1;
								iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
								Local_45[func_165(iParam1) /*11*/].f_1 = unk_0x53C562FD2B9E3AB0();
							}
						}
						else
						{
							func_170(iParam0, 0);
							if (unk_0x6ADD12BF4D6D2587(Local_45[func_165(iParam1) /*11*/]))
							{
								if (func_175(Local_45[func_165(iParam1) /*11*/], unk_0xFC1458A37D98B502(), 1126825984, 0))
								{
									func_170(&(Local_45[func_165(iParam1) /*11*/]), 0);
								}
							}
						}
						unk_0x2B0DDE3D071497AD(*iParam0);
					}
					else
					{
						func_170(iParam0, 0);
						if (unk_0x6ADD12BF4D6D2587(Local_45[func_165(iParam1) /*11*/]))
						{
							if (func_171(Local_45[func_165(iParam1) /*11*/], *iParam0, 1126825984, 1, 250, 7))
							{
								func_170(&(Local_45[func_165(iParam1) /*11*/]), 0);
							}
						}
					}
				}
			}
			else
			{
				iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
				iParam0->f_8 = iParam0->f_7;
				iParam0->f_5 = 1;
				iParam0->f_6 = 21;
				unk_0x2B0DDE3D071497AD(*iParam0);
				if (func_171(Local_45[func_165(iParam1) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					Local_45[func_165(iParam1) /*11*/].f_1 = unk_0x53C562FD2B9E3AB0();
					Local_45[func_165(iParam1) /*11*/].f_8 = iParam0->f_7;
					Local_45[func_165(iParam1) /*11*/].f_5 = 1;
					Local_45[func_165(iParam1) /*11*/].f_6 = 21;
					unk_0x2B0DDE3D071497AD(Local_45[func_165(iParam1) /*11*/]);
				}
			}
			iParam0->f_5 = 1;
		}
		else if (unk_0x27C8A4034A05DC21(*iParam0))
		{
			func_163(iParam0);
			unk_0xD68E88A8E0BE8697(*iParam0, unk_0xFC1458A37D98B502(), 500f, -1, 0, 1);
			iParam0->f_6 = 2;
			iParam0->f_5 = 1;
			iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
		}
		if (unk_0x9F887157983E8EFC(*iParam0))
		{
			if (func_10(Local_46[iLocal_48 /*25*/].f_17))
			{
				if (unk_0xDFFD5F8C8ABCB7EF(Local_46[iLocal_48 /*25*/].f_17))
				{
					unk_0x6B7C10B19928914F(Local_46[iLocal_48 /*25*/].f_17, 1, 0);
					unk_0x218AB919A4668C70(Local_46[iLocal_48 /*25*/].f_17, 1, unk_0xCE3B2111021F7234(*iParam0), 0, 1, 1, 0);
				}
			}
		}
	}
	if (iParam0->f_5 != 1)
	{
		if (func_333(Local_45[func_165(iParam1) /*11*/]))
		{
			if (unk_0x27C8A4034A05DC21(Local_45[func_165(iParam1) /*11*/]))
			{
				func_163(iParam0);
				unk_0xD68E88A8E0BE8697(*iParam0, unk_0xFC1458A37D98B502(), 120f, -1, 0, 0);
				iParam0->f_1 = unk_0x53C562FD2B9E3AB0();
				iParam0->f_6 = 7;
				iParam0->f_5 = 1;
			}
		}
	}
}

int func_197(var uParam0)//Position - 0x7519
{
	if ((unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), unk_0x3F90543934DCD7E6(*uParam0, 0f, -2f, 0f), 2f, 3f, 2f, 0, 1, 0) && !unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6)) && unk_0x16700A5CF29C1FC1(unk_0xFC1458A37D98B502()))
	{
		return 1;
	}
	return 0;
}

int func_198(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x7561
{
	vector3 vVar0;
	
	if (func_10(unk_0xFC1458A37D98B502()) && func_10(iParam0))
	{
		if (unk_0xEBE499597C718EB8(iParam0, unk_0xFC1458A37D98B502(), 1))
		{
			return 1;
		}
		if (func_203(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
		{
			if (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()))
			{
				vVar0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) - unk_0xB3328BA8976B416C(iParam0, 1) };
				if ((((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) + (vVar0.z * vVar0.z)) <= 5f)
				{
					return func_202(unk_0xFC1458A37D98B502(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_199(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_199(int iParam0, float fParam1)//Position - 0x761C
{
	float fVar0;
	
	if (func_10(unk_0xFC1458A37D98B502()) && func_10(iParam0))
	{
		if (func_201(iParam0) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iParam0))
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
				if (func_200(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_200(int iParam0, float fParam1)//Position - 0x7692
{
	return func_171(iParam0, unk_0xFC1458A37D98B502(), fParam1, 1, 250, 7);
}

int func_201(int iParam0)//Position - 0x76AA
{
	if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iParam0) && unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_202(int iParam0, int iParam1, float fParam2)//Position - 0x76D2
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xCE3B2111021F7234(iParam0) };
	vVar1 = { unk_0xB3328BA8976B416C(iParam1, 1) - unk_0xB3328BA8976B416C(iParam0, 1) };
	return (((vVar0.x * vVar1.x) + (vVar0.y * vVar1.y)) / system::vdist(vVar1, 0f, 0f, 0f)) > system::cos(fParam2);
}

int func_203(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x7719
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1,86f;
		fVar1 = 1,86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_10(unk_0xFC1458A37D98B502()) && func_10(iParam0))
	{
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_206(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_204(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x9C8F5918B4DF54D8(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x5679106BC7ED79EE(unk_0xB3328BA8976B416C(iParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1,86f;
					fVar1 = 1,86f;
				}
				if (func_206(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_204(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_204(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0x7814
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	vVar1 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar1.x = (vVar1.x + fParam1);
	vVar1.y = (vVar1.y + fParam1);
	vVar1.z = (vVar1.z + fParam1);
	if (bParam2)
	{
		if (((unk_0x692364B06AD5AF40(unk_0xB3328BA8976B416C(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x692364B06AD5AF40(unk_0xB3328BA8976B416C(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x692364B06AD5AF40(unk_0xB3328BA8976B416C(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x692364B06AD5AF40(unk_0xB3328BA8976B416C(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_205(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_205(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF1DE6FAA2EFAA34F(vVar0, vVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_205(int iParam0, float fParam1)//Position - 0x7920
{
	var uVar0;
	vector3 vVar1;
	
	if ((((unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_153(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_206(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0x79B5
{
	if (bParam1)
	{
		if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
		{
			if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x5679106BC7ED79EE(unk_0xB3328BA8976B416C(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_207(int iParam0)//Position - 0x79FD
{
	if (func_151(iParam0, unk_0xFC1458A37D98B502(), 6f, 1))
	{
		if (!unk_0x88DDBE9908752BF0(iParam0, 0))
		{
			if (unk_0x9A213A2345825783(iParam0, unk_0xFC1458A37D98B502()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_208()//Position - 0x7A31
{
	if (func_36(Local_199))
	{
		if (func_151(unk_0xFC1458A37D98B502(), Local_199, 100f, 1) && !iLocal_194)
		{
			unk_0x25468B15C0A526A9(joaat("trash"), 3);
			if (!unk_0xCAF0B12123EF5181(joaat("trash")))
			{
				iLocal_194 = 1;
			}
		}
		else if (!func_151(unk_0xFC1458A37D98B502(), Local_199, 120f, 1) && iLocal_194)
		{
			unk_0x3A3E253FC4F98014(joaat("trash"));
			iLocal_194 = 0;
		}
	}
}

void func_209(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, vector3 vParam5, int iParam6, bool bParam7, float fParam8)//Position - 0x7AA8
{
	if (func_36(*iParam0))
	{
		switch (*iParam2)
		{
			case 0:
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), *iParam0, 0))
				{
					func_7(iParam3);
					if (func_100(func_108(func_76()), 0, 0))
					{
						unk_0x166954C5648772B6(func_108(func_76()));
					}
					if (*iParam0 == iParam6)
					{
						*iParam2 = 1;
					}
					else
					{
						*iParam2 = 2;
					}
				}
				else if (func_214(*iParam0) || func_213(*iParam0))
				{
					func_7(iParam3);
					if (func_100(func_108(func_76()), 0, 0))
					{
						unk_0x166954C5648772B6(func_108(func_76()));
					}
					*iParam2 = 3;
				}
				else
				{
					if (func_100(func_109(func_76(), bParam7), 0, 0))
					{
						unk_0x166954C5648772B6(func_109(func_76(), bParam7));
					}
					if (func_76() != 33)
					{
						func_211(iParam0);
					}
					else
					{
						func_210(iParam0, iParam1);
					}
				}
				break;
			
			case 2:
			case 1:
				if ((!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), *iParam0, 0) && !func_214(*iParam0)) && !func_213(*iParam0))
				{
					func_7(iParam4);
					if (!unk_0x0C88267282FD588F(*iParam0, vParam5, fParam8, fParam8, 2f, 0, 1, 2))
					{
						func_119(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
			
			case 3:
				if (!func_214(*iParam0) && !func_213(*iParam0))
				{
					func_7(iParam4);
					if (!unk_0x0C88267282FD588F(*iParam0, vParam5, fParam8, fParam8, 2f, 0, 1, 2))
					{
						func_119(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
		}
	}
	else if (func_76() != 33)
	{
		func_211(iParam0);
	}
	else
	{
		func_210(iParam0, iParam1);
	}
}

void func_210(int iParam0, var uParam1)//Position - 0x7C5C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!bLocal_28)
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (iVar0 != *iParam0)
			{
				if (func_36(iVar0))
				{
					iVar1 = unk_0x82FF3DFBC3965CC0(iVar0);
					if (iVar1 == joaat("trash"))
					{
						*uParam1 = *iParam0;
						func_6(iParam0);
						*iParam0 = iVar0;
						func_35(*iParam0, 1);
						func_35(*uParam1, 3);
						if (!unk_0x9761C10D57B68069(*iParam0))
						{
							unk_0xDD29FF4BAB8AFF9C(*iParam0, true, 1);
						}
					}
					else if (iVar1 == joaat("towtruck"))
					{
						iVar2 = unk_0x94BAF40CF5390B7A(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0));
						if (func_10(iVar2))
						{
							iVar0 = unk_0x79A6CD762DCCABE4(iVar2);
							if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("trash"))
							{
								*uParam1 = *iParam0;
								func_6(iParam0);
								*iParam0 = iVar0;
								func_35(*iParam0, 1);
								func_35(*uParam1, 3);
								if (!unk_0x9761C10D57B68069(*iParam0))
								{
									unk_0xDD29FF4BAB8AFF9C(*iParam0, true, 1);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_211(int iParam0)//Position - 0x7D49
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (iVar0 != *iParam0)
		{
			if (func_36(iVar0))
			{
				if (unk_0x82FF3DFBC3965CC0(iVar0) == func_212(func_76()))
				{
					func_6(iParam0);
					*iParam0 = iVar0;
					func_35(*iParam0, 1);
					unk_0xDD29FF4BAB8AFF9C(*iParam0, true, 1);
				}
			}
		}
	}
}

int func_212(int iParam0)//Position - 0x7DA6
{
	int iVar0;
	
	switch (iParam0)
	{
		case 33:
			iVar0 = joaat("trash");
			break;
		
		case 34:
			iVar0 = joaat("towtruck");
			break;
		
		case 78:
			iVar0 = 0;
			break;
		
		case 80:
		case 81:
		case 82:
			iVar0 = joaat("gauntlet");
			break;
	}
	return iVar0;
}

int func_213(int iParam0)//Position - 0x7DFF
{
	int iVar0;
	int iVar1;
	
	if ((func_333(unk_0xFC1458A37D98B502()) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && func_36(iParam0))
	{
		iVar0 = unk_0xC733212BF9066BDF();
		if (func_36(iVar0))
		{
			iVar1 = unk_0x82FF3DFBC3965CC0(iVar0);
			if ((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
			{
				if (unk_0xBB68E30A8B450E14(iVar0))
				{
					if (unk_0x61888377B3AC43E7(iVar0, iParam0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_214(int iParam0)//Position - 0x7E82
{
	int iVar0;
	int iVar1;
	
	if ((func_333(unk_0xFC1458A37D98B502()) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && func_36(iParam0))
	{
		iVar0 = unk_0xC733212BF9066BDF();
		if (func_36(iVar0))
		{
			iVar1 = unk_0x82FF3DFBC3965CC0(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (unk_0x03760B63FE11B718(iVar0, iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_215()//Position - 0x7EEE
{
	func_209(&iLocal_200, &iLocal_201, &iLocal_71, &iLocal_183, &iLocal_182, vLocal_186, Local_199, 0, 1090519040);
	func_149();
	func_232();
	func_208();
	switch (iLocal_69)
	{
		case 0:
			if (func_116(iLocal_68, bLocal_28))
			{
				if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0 && !func_231())
				{
					func_111(&iLocal_182, vLocal_186, 1);
					func_115("PRA_TAKBACK", &iLocal_181);
				}
				iLocal_69 = 1;
			}
			break;
		
		case 1:
			func_114(&iLocal_182, vLocal_186, &iLocal_70, iLocal_71, &iLocal_181, &iLocal_195);
			func_221();
			if (func_219(iLocal_200, vLocal_186, &iLocal_182, iLocal_70, iLocal_71, &iLocal_181, &iLocal_196, 0, 0, 1086324736))
			{
				unk_0x1267474D9A69CA37(8f, 5f, 4);
				iLocal_69 = 2;
			}
			break;
		
		case 2:
			func_216();
			func_7(&iLocal_182);
			func_7(&iLocal_183);
			if (func_110(1077936128, 1))
			{
				func_104(0);
			}
			break;
		
		case 3:
			if (func_36(iLocal_200))
			{
				if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_200, 0))
				{
					unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iLocal_200, -1);
				}
				else
				{
					func_103(iLocal_200, vLocal_186, 146,5443f, 0, 1);
					func_39(1, 1, 1);
					iLocal_69 = 1;
				}
			}
			break;
	}
}

void func_216()//Position - 0x804B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_78(iVar0);
		if (!unk_0x3AB6A1A9084FB0A4(iVar1))
		{
			if (func_218(iVar1))
			{
				func_217(iVar1);
			}
		}
		iVar0++;
	}
}

int func_217(int iParam0)//Position - 0x8087
{
	int iVar0;
	
	return 0;
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_78(iVar0) != iParam0)
		{
			return 0;
		}
		if (!unk_0xC80D31E4B587871C(Global_88832, iVar0))
		{
			return 0;
		}
		unk_0x0EE72DB1CD8A3B86(&Global_88832, iVar0);
		return 1;
	}
	return 0;
}

int func_218(int iParam0)//Position - 0x80DF
{
	int iVar0;
	
	return 0;
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_78(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0xC80D31E4B587871C(Global_88832, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_219(int iParam0, vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)//Position - 0x8128
{
	if ((iParam4 == 1 || iParam4 == 2) || iParam4 == 3)
	{
		if (iParam3 == 0)
		{
			func_111(iParam2, vParam1, 1);
			if (!bParam8)
			{
				if (func_36(iParam0))
				{
					if (unk_0x0C88267282FD588F(iParam0, vParam1, fParam9, fParam9, 2f, 1, 1, 0))
					{
						return 1;
					}
				}
			}
			else if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vParam1, fParam9, fParam9, 2f, 1, 1, 2))
			{
				return 1;
			}
			if (func_100(func_108(func_76()), 0, 0))
			{
				unk_0x166954C5648772B6(func_108(func_76()));
			}
			if (!func_220())
			{
				func_115(func_109(func_76(), bParam7), iParam5);
			}
		}
	}
	else if (iParam3 == 0)
	{
		if (!*iParam6)
		{
			if (func_100(func_109(func_76(), 0), 0, 0))
			{
				unk_0x166954C5648772B6(func_109(func_76(), 0));
			}
			func_99(func_108(func_76()), 7500, 0);
			*iParam6 = 1;
		}
	}
	return 0;
}

bool func_220()//Position - 0x821B
{
	return Global_92885.f_315 > 0;
}

void func_221()//Position - 0x822C
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = func_78(iVar0);
		if (!unk_0x3AB6A1A9084FB0A4(iVar2))
		{
			if (func_77(iVar2, 0))
			{
				if (!bVar1)
				{
					if (func_151(unk_0xFC1458A37D98B502(), iVar2, 5f, 1))
					{
						if (!func_231())
						{
							func_226(iVar0);
							bVar1 = true;
						}
					}
				}
				if (!iLocal_374[iVar0])
				{
					if (iVar0 == 0)
					{
						func_92(&uLocal_205, iVar0, iVar2, "MICHAEL", 0, 1);
					}
					else if (iVar0 == 1)
					{
						func_92(&uLocal_205, iVar0, iVar2, "FRANKLIN", 0, 1);
					}
					else if (iVar0 == 2)
					{
						func_92(&uLocal_205, iVar0, iVar2, "TREVOR", 0, 1);
					}
					iLocal_374[iVar0] = 1;
				}
			}
			if (!func_218(iVar2))
			{
				if (func_77(iVar2, 0))
				{
					if (func_225(iVar2) || func_223(iVar2))
					{
						if (func_222(iVar2, 0))
						{
							unk_0xDD29FF4BAB8AFF9C(iVar2, true, 1);
							unk_0x771A86309E0CA47B(iVar2, true);
							unk_0xB8E08BD5B184DF4E(iVar2);
						}
					}
				}
			}
			else if (unk_0xCB234F3DD6FF9368(iVar2, 1))
			{
				if (func_225(iVar2))
				{
					if (unk_0x78F50AA8F955BEFC(iVar2, -1273030092) != 1 && unk_0x78F50AA8F955BEFC(iVar2, -1273030092) != 0)
					{
						if (unk_0x9C0571C926F68BED(623,3781f, -172,26f, 1700,732f, -2115,843f))
						{
							unk_0x87A3E70B0AB01608(iVar2, unk_0xDFD115BB10FE46A9(iVar2, 0), vLocal_186, 20f, 0, 0, 34340901, 2f, 10f);
						}
						else
						{
							unk_0x590D9654A4367AA1(623,3781f, -172,26f, 1700,732f, -2115,843f);
						}
					}
				}
				else if (func_223(iVar2))
				{
					if (func_36(Local_199))
					{
						if (!func_151(iVar2, Local_199, 17f, 1))
						{
							if (unk_0x78F50AA8F955BEFC(iVar2, -1273030092) != 1 && unk_0x78F50AA8F955BEFC(iVar2, -1273030092) != 0)
							{
								unk_0x6F03491E8F9F397C(iVar2, unk_0xDFD115BB10FE46A9(iVar2, 0), Local_199, 3, 20f, 786468, 2f, 0,5f, 1);
							}
						}
					}
				}
				else
				{
					func_217(iVar2);
				}
			}
		}
		iVar0++;
	}
}

int func_222(int iParam0, int iParam1)//Position - 0x8439
{
	int iVar0;
	
	return 0;
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_78(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0xC80D31E4B587871C(Global_88832, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xFC1458A37D98B502())
			{
				return 0;
			}
		}
		if (unk_0xC80D31E4B587871C(Global_88831, iVar0))
		{
			unk_0xA0983927C5AF14B2(iParam0, 0, 0);
			unk_0xCFF0CD14B439821D(iParam0, 0, 1);
			unk_0x872F1C1F8587CCC7(&Global_88832, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_223(int iParam0)//Position - 0x84C0
{
	int iVar0;
	
	if (!func_224())
	{
		if ((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (func_36(iVar0))
			{
				if (unk_0xB0DA749C8A7CCBBF(iVar0, joaat("trash")))
				{
					return 0;
				}
				if (unk_0xA8D0477084E86A92(iParam0, iVar0, 0) && unk_0x317536BCEA8FA6B0(iVar0, -1, 0) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_224()//Position - 0x8540
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

int func_225(int iParam0)//Position - 0x855C
{
	if (!func_224())
	{
		if ((unk_0x6ADD12BF4D6D2587(Local_199) && unk_0xB8DE76287EDC4957(Local_199, 0)) && !unk_0x0C88267282FD588F(Local_199, vLocal_186, 2f, 2f, 2f, 0, 1, 0))
		{
			if ((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_199, 0)) && unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
			{
				if (unk_0xA8D0477084E86A92(iParam0, Local_199, 0) && unk_0x317536BCEA8FA6B0(Local_199, -1, 0) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_226(int iParam0)//Position - 0x85EA
{
	if (iLocal_68 > 1)
	{
		if (iLocal_70 > 0)
		{
			if (!unk_0xC80D31E4B587871C(Local_73[iParam0 /*8*/].f_7, 0) && iLocal_71 == 1)
			{
				if (!unk_0x23F2F89E3D1CB7C4())
				{
					if (func_230(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][0], 8, 0, 0, 0))
					{
						unk_0x872F1C1F8587CCC7(&(Local_73[iParam0 /*8*/].f_7), 0);
					}
				}
			}
		}
		else
		{
			if ((unk_0xC80D31E4B587871C(Local_73[iParam0 /*8*/].f_7, 0) && !unk_0xC80D31E4B587871C(Local_73[iParam0 /*8*/].f_7, 1)) && iLocal_71 == 1)
			{
				if (!unk_0x23F2F89E3D1CB7C4())
				{
					if (func_230(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][1], 7, 0, 0, 0))
					{
						unk_0x872F1C1F8587CCC7(&(Local_73[iParam0 /*8*/].f_7), 1);
					}
				}
			}
			if (!unk_0xC80D31E4B587871C(Local_73[iParam0 /*8*/].f_7, 5))
			{
				if (func_229(iLocal_200, vLocal_186, 1) < 15f && iLocal_71 == 1)
				{
					if (!unk_0x23F2F89E3D1CB7C4())
					{
						if (func_230(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][5], 7, 0, 0, 0))
						{
							unk_0x872F1C1F8587CCC7(&(Local_73[iParam0 /*8*/].f_7), 5);
						}
					}
				}
			}
			switch (func_29(unk_0xFC1458A37D98B502()))
			{
				case 0:
					if (iParam0 == 1)
					{
						if (!func_228(2))
						{
							func_227(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_228(4))
						{
							func_227(iParam0, 4);
						}
					}
					break;
				
				case 1:
					if (iParam0 == 0)
					{
						if (!func_228(2))
						{
							func_227(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_228(3))
						{
							func_227(iParam0, 3);
						}
					}
					break;
				
				case 2:
					if (iParam0 == 1)
					{
						if (!func_228(3))
						{
							func_227(iParam0, 3);
						}
					}
					else if (iParam0 == 0)
					{
						if (!func_228(4))
						{
							func_227(iParam0, 4);
						}
					}
					break;
				}
			}
	}
}

void func_227(int iParam0, int iParam1)//Position - 0x87C9
{
	if (!unk_0xC80D31E4B587871C(Local_73[iParam0 /*8*/].f_7, iParam1))
	{
		if (iLocal_375 != -1)
		{
			if (!unk_0x23F2F89E3D1CB7C4())
			{
				if (func_230(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][iParam1], 7, 0, 0, 0))
				{
					unk_0x872F1C1F8587CCC7(&(Local_73[iParam0 /*8*/].f_7), iParam1);
				}
			}
		}
		else if (!func_231() && !unk_0x23F2F89E3D1CB7C4())
		{
			iLocal_375 = unk_0x53C562FD2B9E3AB0();
		}
		else
		{
			iLocal_375 = -1;
		}
	}
}

int func_228(int iParam0)//Position - 0x8841
{
	if ((unk_0xC80D31E4B587871C(Local_73[0 /*8*/].f_7, iParam0) || unk_0xC80D31E4B587871C(Local_73[1 /*8*/].f_7, iParam0)) || unk_0xC80D31E4B587871C(Local_73[2 /*8*/].f_7, iParam0))
	{
		return 1;
	}
	return 0;
}

float func_229(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x8887
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

bool func_230(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x88C1
{
	func_89(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_82(sParam2, iParam3, 0);
}

int func_231()//Position - 0x890F
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_232()//Position - 0x8931
{
	if (func_101(unk_0xFC1458A37D98B502(), vLocal_186, 220f))
	{
		if (!iLocal_203 && !func_101(unk_0xFC1458A37D98B502(), vLocal_186, 100f))
		{
			iLocal_203 = func_147(&iLocal_202, joaat("cavalcade2"), 1370,912f, -2060,055f, 50,9983f, 312,8686f, 1);
		}
	}
	else if (func_101(unk_0xFC1458A37D98B502(), vLocal_186, 240f))
	{
		if (iLocal_203)
		{
			func_6(&iLocal_202);
			iLocal_203 = 0;
		}
	}
}

void func_233()//Position - 0x89BA
{
	func_209(&iLocal_200, &iLocal_201, &iLocal_71, &iLocal_183, &iLocal_182, vLocal_186, Local_199, 0, 1090519040);
	func_208();
	func_149();
	switch (iLocal_69)
	{
		case 0:
			if (func_116(iLocal_68, bLocal_28))
			{
				func_119(&iLocal_182, Local_199, 1);
				func_115("PRA_GOVAN", &iLocal_181);
				iLocal_69 = 1;
			}
			break;
		
		case 1:
			func_221();
			if (func_36(Local_199))
			{
				func_236(&uLocal_56, Local_199, 0, 0, 1, 1, 1);
			}
			if (!bLocal_190)
			{
				if (func_333(Local_197) && unk_0x27C8A4034A05DC21(Local_197))
				{
					func_235();
				}
				if (func_333(Local_198) && unk_0x27C8A4034A05DC21(Local_198))
				{
					func_235();
				}
			}
			if (func_36(iLocal_200))
			{
				if ((iLocal_71 == 1 || iLocal_71 == 2) || iLocal_71 == 3)
				{
					unk_0x1267474D9A69CA37(5f, 5f, 4);
					iLocal_69 = 2;
				}
			}
			break;
		
		case 2:
			func_7(&iLocal_182);
			func_139(&uLocal_56, 0, 0);
			func_104(0);
			break;
		
		case 3:
			func_8(&Local_197);
			func_8(&Local_198);
			if (func_36(Local_199))
			{
				unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), Local_199, -1);
			}
			func_234(1);
			func_39(1, 1, 1);
			iLocal_69 = 1;
			break;
	}
}

void func_234(bool bParam0)//Position - 0x8B11
{
	unk_0x1D29C781A978C4FB(1, bParam0);
	unk_0x1D29C781A978C4FB(2, bParam0);
	unk_0x1D29C781A978C4FB(3, bParam0);
	unk_0x1D29C781A978C4FB(4, bParam0);
	unk_0x1D29C781A978C4FB(5, bParam0);
	if (bParam0)
	{
		unk_0x94BD6F0436473406(1f);
		unk_0xC0EBC1452FCAB15C(5);
	}
	else
	{
		unk_0xC0EBC1452FCAB15C(0);
		unk_0x94BD6F0436473406(0f);
	}
}

void func_235()//Position - 0x8B58
{
	char* sVar0;
	
	switch (func_25())
	{
		case 0:
			sVar0 = "FBI4_JACKSM";
			break;
		
		case 1:
			sVar0 = "FBI4_JACKSF";
			break;
		
		case 2:
			sVar0 = "FBI4_JACKST";
			break;
	}
	bLocal_190 = func_230(&uLocal_205, "FBIPRAU", sVar0, 7, 0, 0, 0);
	if (bLocal_190)
	{
		unk_0x1267474D9A69CA37(8f, 8f, 4);
	}
}

void func_236(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x8BBE
{
	func_237(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_237(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x8BDB
{
	func_238(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_238(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x8BF9
{
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		func_139(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_239(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_239(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x8C31
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
	if (func_140(iVar0))
	{
		func_263();
	}
	if (func_262(iParam1) && unk_0xDE3C98B57A41E603(iParam1))
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
			if (func_257(uParam0, bParam5, bParam7, 0))
			{
				func_254(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_244(iVar0))
				{
					if ((unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0)) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if ((iVar1 && !unk_0xF491DD47B88AA84E()) && uParam6)
						{
							if (!func_140(iVar0))
							{
								func_243(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
								{
									func_242(1);
								}
							}
						}
					}
				}
			}
			else if (func_244(iVar0))
			{
				if (unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0))
				{
					if (((unk_0x841ED61760A7D07B(iParam1) && iVar1) && !unk_0xF491DD47B88AA84E()) && uParam6)
					{
						if (!func_140(iVar0))
						{
							func_243(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
							{
								func_242(1);
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
				if (func_140(sParam3))
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
						func_139(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(6) == 3 || unk_0x8E8C94609BA4BEA9(6) == 4)
					{
						func_139(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(4) == 3 || unk_0x8E8C94609BA4BEA9(4) == 4)
					{
						func_139(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(5) == 3 || unk_0x8E8C94609BA4BEA9(5) == 4)
					{
						func_139(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(2) == 3 || unk_0x8E8C94609BA4BEA9(2) == 4)
					{
						func_139(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x60584F41FBCE28CD() == 3 || unk_0x60584F41FBCE28CD() == 4)
				{
					func_139(uParam0, iVar0, 1);
				}
			}
			if (!func_257(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_241(uParam0))
				{
					func_240(uParam0);
				}
			}
		}
	}
	else
	{
		func_139(uParam0, iVar0, 0);
	}
}

void func_240(var uParam0)//Position - 0x8F9E
{
	if (func_262(unk_0xFC1458A37D98B502()))
	{
		unk_0xCB3D88C918AA637C(unk_0xFC1458A37D98B502());
	}
	if (unk_0x38DF88792E2574E5())
	{
		unk_0xBC3B7443617858A0(1);
		unk_0x2C5E25A27FEE0F8A(0);
		unk_0xE02E32C69260FBB7("HINT_CAM_SCENE");
		unk_0x704F5ADD5B29DB63("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xA91E83FF512776B6("FocusOut", 0, 0);
			unk_0x4AFBCBFDE748D4E0(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_241(var uParam0)//Position - 0x9007
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

int func_242(bool bParam0)//Position - 0x9032
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

void func_243(char* sParam0, int iParam1)//Position - 0x90DC
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

int func_244(char* sParam0)//Position - 0x90F3
{
	if (!func_245(1, 1, 0))
	{
		if ((!unk_0xAB019B170BF1309C(sParam0) && func_140(sParam0)) || func_140("CMN_HINT"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		return 0;
	}
	switch (Global_35861)
	{
		case 0:
		case 3:
			if (func_242(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_242(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_242(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_245(bool bParam0, bool bParam1, bool bParam2)//Position - 0x918C
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
	if (func_68(0))
	{
		return 0;
	}
	if (func_253())
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
	if ((func_252() || func_251(Global_4456448.f_143970)) || func_250())
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if ((unk_0x841136DE070DD9F6(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), func_249(unk_0xFC1458A37D98B502(), 0)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 562680400 && func_249(unk_0xFC1458A37D98B502(), 0) != -1)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 1181327175 && func_249(unk_0xFC1458A37D98B502(), 0) != -1))
			{
				return 0;
			}
		}
	}
	if (func_246(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_246(int iParam0)//Position - 0x93B7
{
	if (iParam0 != func_248())
	{
		if (func_247(iParam0, 1, 1))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x9EB17624F44A8DA4()) && func_247(iParam0, 1, 0))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

int func_247(int iParam0, bool bParam1, bool bParam2)//Position - 0x941D
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

int func_248()//Position - 0x9467
{
	return -1;
}

int func_249(int iParam0, int iParam1)//Position - 0x9470
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

var func_250()//Position - 0x94F5
{
	return Global_2447174.f_16;
}

bool func_251(int iParam0)//Position - 0x9503
{
	return iParam0 == 51;
}

var func_252()//Position - 0x9510
{
	return Global_2447174.f_15;
}

bool func_253()//Position - 0x951E
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

void func_254(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x9533
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
		func_139(uParam0, 0, 0);
	}
	if (func_15(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x52C56492660097C7(iParam1))
		{
			iVar0 = unk_0x07F64790D10D1DB5(iParam1);
			if (!unk_0x88DDBE9908752BF0(iVar0, 0))
			{
				if (unk_0x1417A5CC924DE120(iVar0))
				{
					if (!func_255())
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
	unk_0xBC3B7443617858A0(0);
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
	unk_0x4AFBCBFDE748D4E0(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x53C562FD2B9E3AB0();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_255()//Position - 0x9643
{
	return func_256(unk_0x9EB17624F44A8DA4());
}

int func_256(int iParam0)//Position - 0x9653
{
	if (unk_0x82FF3DFBC3965CC0(unk_0x25D049AAC4603E65(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_257(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x9672
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
					if (func_261(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_260(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_260(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_261(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_241(uParam0))
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
						if (!func_261(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_260(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_260(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_261(bParam1, bParam2, bParam3))
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
					if (!func_261(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_260(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_260(bParam1, bParam2, bParam3) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
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
				else if (!func_261(bParam1, bParam2, bParam3))
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
						if (func_259(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_258(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) || func_258(bParam1, bParam2, bParam3))
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
					else if (func_259(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_241(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_245(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_263();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_258(bool bParam0, bool bParam1, bool bParam2)//Position - 0x99DE
{
	if (!func_245(bParam0, bParam1, bParam2))
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

int func_259(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9A30
{
	if (!func_245(bParam0, bParam1, bParam2))
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
				unk_0xBC3B7443617858A0(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_260(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9A79
{
	if (!func_245(bParam0, bParam1, bParam2))
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

int func_261(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9AD8
{
	if (!func_245(bParam0, bParam1, bParam2))
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
				unk_0xBC3B7443617858A0(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_262(int iParam0)//Position - 0x9B2E
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

void func_263()//Position - 0x9B89
{
	unk_0x872F1C1F8587CCC7(&Global_2324, 4);
}

void func_264()//Position - 0x9B99
{
	switch (iLocal_69)
	{
		case 0:
			if (func_116(iLocal_68, 0))
			{
				func_276();
				func_274(33);
				unk_0xC0EBC1452FCAB15C(2);
				unk_0x94BD6F0436473406(0,1f);
				if (func_349())
				{
					func_271(0, -1, 1);
					func_40(500, 1);
					iLocal_69 = 2;
				}
				else
				{
					if (func_32(0))
					{
						func_118(unk_0xFC1458A37D98B502(), 1228,635f, -348,4277f, 68,0929f, 86,7244f);
						func_266(1228,635f, -348,4277f, 68,0929f, 1112014848, 12, 5000, 0, 0);
						func_40(500, 1);
					}
					func_265();
					if (iLocal_68 == 2)
					{
						iLocal_69 = 0;
					}
					else
					{
						iLocal_69 = 2;
					}
				}
			}
			break;
		
		case 2:
			func_104(0);
			break;
	}
}

void func_265()//Position - 0x9C61
{
}

void func_266(vector3 vParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x9C69
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x5D45879FC4CB78CD(vParam0, iParam1, iParam2, 127);
	if (unk_0xB774D40D7819292F(uVar0))
	{
		iVar1 = (unk_0x53C562FD2B9E3AB0() + iParam3);
		while (!unk_0xC548195DB18979E1(uVar0) && unk_0x53C562FD2B9E3AB0() < iVar1)
		{
			if (bParam5)
			{
				func_268(0);
			}
			if (bParam4)
			{
				func_267();
			}
			system::wait(0);
		}
		if (unk_0x53C562FD2B9E3AB0() < iVar1)
		{
		}
		unk_0x48B475D0F512A41A(uVar0);
	}
}

void func_267()//Position - 0x9CD9
{
	Global_17162.f_6 = 1;
}

void func_268(int iParam0)//Position - 0x9CE7
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_68(0))
		{
			func_269(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

void func_269(int iParam0)//Position - 0x9D10
{
	if (Global_14615)
	{
		func_270(0, 0);
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
	if (!func_50())
	{
		Global_14453.f_1 = 3;
	}
}

void func_270(bool bParam0, bool bParam1)//Position - 0x9D80
{
	if (bParam0)
	{
		if (func_68(0))
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

void func_271(int iParam0, int iParam1, int iParam2)//Position - 0x9DF4
{
	if (func_349() && func_273())
	{
		while (Global_92828 != 6)
		{
			system::wait(0);
		}
		unk_0x6ACDC20166AA3FAC(0);
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0xB485B73829833C84(unk_0xFC1458A37D98B502());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x6ADD12BF4D6D2587(iParam0))
				{
					if (unk_0xB8DE76287EDC4957(iParam0, 0))
					{
						if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam0, 0))
						{
							unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iParam0, iParam1);
							unk_0x7C9705890EF6612E(0f, 1065353216);
							unk_0xBB9A3C553EECB180(0f);
							system::wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			}
		}
		unk_0x10DF8268B3B64093();
		func_272(0);
	}
}

void func_272(int iParam0)//Position - 0x9EB8
{
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_92833.f_20), 13);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_92833.f_20), 13);
	}
}

bool func_273()//Position - 0x9EE1
{
	return unk_0xC80D31E4B587871C(Global_92833.f_20, 13);
}

void func_274(int iParam0)//Position - 0x9EF5
{
	Global_88833 = 0;
	switch (iParam0)
	{
		case 72:
			func_275(2);
			func_275(4);
			break;
		
		case 73:
			func_275(0);
			func_275(1);
			func_275(7);
			break;
		
		case 92:
			func_275(10);
			func_275(9);
			func_275(13);
			func_275(6);
			break;
		
		case 68:
			func_275(11);
			break;
		
		case 78:
			func_275(14);
			break;
		
		case 79:
			func_275(3);
			break;
		
		default:
			break;
	}
}

void func_275(int iParam0)//Position - 0x9F83
{
	unk_0x872F1C1F8587CCC7(&Global_88833, iParam0);
}

void func_276()//Position - 0x9F95
{
	int iVar0;
	
	iVar0 = unk_0xC733212BF9066BDF();
	if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		if (unk_0xB8DE76287EDC4957(iVar0, 0))
		{
			func_277(iVar0, unk_0xB3328BA8976B416C(iVar0, 1), unk_0xF0371FE6E2BF9599(iVar0), 24, 0);
		}
	}
}

void func_277(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x9FD2
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
		func_324(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_319(iParam0, &Var0);
		if (func_15(vParam1, 0f, 0f, 0f, 0))
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
		func_312(iParam3, &Var0, vParam1, fParam2, func_318(iParam0));
		func_278(iParam3, iParam0, 0);
	}
}

void func_278(int iParam0, int iParam1, int iParam2)//Position - 0xA0FB
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_309(&(Global_69678.f_555[0 /*21*/]), iParam0))
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
				Global_104555.f_32429.f_4801 = func_298();
			}
			if (iParam1 != Global_69678.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_297(iParam0);
					if ((unk_0x6ADD12BF4D6D2587(iVar0) && unk_0xB8DE76287EDC4957(iVar0, 0)) && iParam1 != iVar0)
					{
						func_279(iVar0, 145);
					}
				}
				Global_70584 = iParam1;
				Global_70585 = iParam0;
				Global_70586 = iParam2;
			}
		}
	}
}

void func_279(int iParam0, int iParam1)//Position - 0xA218
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_280(iParam0))
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
	func_319(iParam0, &(Global_104555.f_32429.f_5510));
}

int func_280(int iParam0)//Position - 0xA41A
{
	if ((((((((((!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0)) || func_295(iParam0, 0, 0)) || func_295(iParam0, 1, 0)) || func_295(iParam0, 2, 0)) || func_318(iParam0) != 145) || func_294(iParam0)) || func_293(iParam0)) || func_292(iParam0)) || func_291(iParam0)) || !func_281(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		if (func_293(iParam0))
		{
		}
		if (func_293(iParam0))
		{
		}
		if (func_295(iParam0, 0, 0))
		{
		}
		if (func_295(iParam0, 1, 0))
		{
		}
		if (func_295(iParam0, 2, 0))
		{
		}
		if (func_318(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_281(int iParam0)//Position - 0xA4F7
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_282(iParam0, 0))
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

int func_282(int iParam0, bool bParam1)//Position - 0xA6A8
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
		if (!func_290())
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
		if ((((!func_289() && !func_288()) && !func_287()) && !func_286()) && !func_290())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x177281F5FA205A38() || unk_0xB9D80B12FE4456A5()) || unk_0xFD6215BABFD843F2())
		{
		}
		else if (!func_287())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_285(iParam0))
		{
			return 0;
		}
	}
	if (!func_283(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_283(int iParam0)//Position - 0xA836
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_284())
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

int func_284()//Position - 0xA902
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

int func_285(int iParam0)//Position - 0xA919
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

int func_286()//Position - 0xC1A4
{
	return 0;
}

int func_287()//Position - 0xC1AD
{
	return 1;
}

int func_288()//Position - 0xC1B6
{
	return 1;
}

int func_289()//Position - 0xC1BF
{
	if (unk_0x21EA5D4DC72DE119(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_290()//Position - 0xC1D8
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

int func_291(int iParam0)//Position - 0xC293
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	sVar1 = unk_0xF2D2D6860D636A58(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x74C475EB8E73D398(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_282(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_292(int iParam0)//Position - 0xC2D9
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

int func_293(int iParam0)//Position - 0xC314
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

int func_294(int iParam0)//Position - 0xC390
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

int func_295(int iParam0, int iParam1, bool bParam2)//Position - 0xC478
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_296(iParam1, iVar0, &sVar1, &iVar2))
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

int func_296(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0xC4E9
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

int func_297(int iParam0)//Position - 0xC5C1
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_69678.f_139[iParam0];
}

var func_298()//Position - 0xC5DD
{
	var uVar0;
	
	func_308(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_307(&uVar0, unk_0x95327550F0F2BE7C());
	func_306(&uVar0, unk_0x674C9438180770FE());
	func_301(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_300(&uVar0, unk_0xEAF455949B108589());
	func_299(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_299(var uParam0, int iParam1)//Position - 0xC623
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

void func_300(var uParam0, int iParam1)//Position - 0xC6A9
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_301(var uParam0, int iParam1)//Position - 0xC6DC
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_305(*uParam0);
	iVar1 = func_303(*uParam0);
	if (iParam1 < 1 || iParam1 > func_302(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_302(int iParam0, int iParam1)//Position - 0xC72D
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

var func_303(int iParam0)//Position - 0xC7CF
{
	return (system::shift_right(iParam0, 26) & 31 * func_304(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_304(bool bParam0, int iParam1, int iParam2)//Position - 0xC7F4
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_305(var uParam0)//Position - 0xC80B
{
	return uParam0 & 15;
}

void func_306(var uParam0, int iParam1)//Position - 0xC818
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_307(var uParam0, int iParam1)//Position - 0xC852
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_308(var uParam0, int iParam1)//Position - 0xC88D
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_309(var uParam0, int iParam1)//Position - 0xC8C9
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
			uParam0->f_4 = func_310(0, 1);
			uParam0->f_12 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970,943f, 3801,684f, 31,1396f };
			uParam0->f_3 = 301,3964f;
			uParam0->f_4 = func_310(0, 1);
			uParam0->f_12 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22,6297f, -1439,137f, 29,6549f };
			uParam0->f_3 = 180,0808f;
			uParam0->f_4 = func_310(1, 1);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22,5229f, -1434,699f, 29,6552f };
			uParam0->f_3 = 141,6114f;
			uParam0->f_4 = func_310(1, 2);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 19);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10,9281f, 545,669f, 174,7951f };
			uParam0->f_3 = 61,392f;
			uParam0->f_4 = func_310(1, 1);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6,1093f, 544,9742f, 174,2835f };
			uParam0->f_3 = 92,1548f;
			uParam0->f_4 = func_310(1, 2);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 19);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981,416f, 3808,131f, 31,1384f };
			uParam0->f_3 = 117,2557f;
			uParam0->f_4 = func_310(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158,488f, -1529,367f, 3,8995f };
			uParam0->f_3 = 35,7505f;
			uParam0->f_4 = func_310(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148,2868f, -1270,569f, 28,2252f };
			uParam0->f_3 = 208,4685f;
			uParam0->f_4 = func_310(2, 1);
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
			if (func_290())
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
			if (func_290())
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
		if (!func_15(Global_104555.f_32429.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_15(Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xC80D31E4B587871C(uParam0->f_9, 20))
	{
		if (!func_15(Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_310(int iParam0, int iParam1)//Position - 0xDFC0
{
	struct<82> Var0;
	
	if (func_28(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_311(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_311(int iParam0, var uParam1, int iParam2)//Position - 0xE002
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

void func_312(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0xE25E
{
	if (func_309(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 10))
		{
			func_317(iParam0);
			func_316(uParam1, &(Global_104555.f_32429.f_69[Global_69678.f_555[0 /*21*/].f_14 /*78*/]));
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
			func_313(iParam0, 1);
		}
	}
}

void func_313(int iParam0, bool bParam1)//Position - 0xE35D
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_315(iParam0, 0))
		{
			func_314(iParam0, 1, 0);
			func_314(iParam0, 2, 0);
			func_314(iParam0, 3, 0);
			func_314(iParam0, 4, 0);
			func_314(iParam0, 0, 1);
			Global_69678[iParam0] = 1;
		}
	}
	else
	{
		func_314(iParam0, 0, 0);
	}
}

void func_314(int iParam0, int iParam1, bool bParam2)//Position - 0xE3BA
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

bool func_315(int iParam0, int iParam1)//Position - 0xE3F5
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_104555.f_32429[iParam0], iParam1);
}

void func_316(var uParam0, var uParam1)//Position - 0xE418
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

void func_317(int iParam0)//Position - 0xE4E4
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_309(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_139[iParam0]))
		{
			unk_0xDD29FF4BAB8AFF9C(Global_69678.f_139[iParam0], true, 1);
			unk_0x5380482A432E314E(&(Global_69678.f_139[iParam0]));
			Global_69678.f_139[iParam0] = 0;
		}
		if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 13))
		{
			func_313(iParam0, 0);
		}
	}
}

int func_318(int iParam0)//Position - 0xE55E
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

void func_319(int iParam0, var uParam1)//Position - 0xE5C1
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		func_323(uParam1);
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
		if (uParam1->f_65 == -1 && !func_322(uParam1->f_66))
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
		func_321(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x7C7056D6F2A31BF6(iParam0, iVar0 + 1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_320(iVar0 + 1));
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

int func_320(int iParam0)//Position - 0xE86C
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

int func_321(int iParam0, var uParam1, var uParam2)//Position - 0xE91C
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

int func_322(int iParam0)//Position - 0xE9F6
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

void func_323(var uParam0)//Position - 0xEA16
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

void func_324(int iParam0)//Position - 0xEAC6
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_317(iParam0);
	func_313(iParam0, 0);
}

void func_325()//Position - 0xEAED
{
	func_328();
	func_326();
}

void func_326()//Position - 0xEAFD
{
	if (!iLocal_188)
	{
		if (func_36(iLocal_200))
		{
			if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_200, 0))
			{
				func_65(iLocal_200, -1);
				func_64(iLocal_200, 318);
				iLocal_188 = 1;
			}
		}
	}
	if (!iLocal_189)
	{
		if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
		{
			func_327(320, 0);
			iLocal_189 = 1;
		}
	}
	else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
	{
		func_63(0, 320);
		iLocal_189 = 0;
	}
}

void func_327(int iParam0, bool bParam1)//Position - 0xEB75
{
	int iVar0;
	
	Global_55913 = iParam0;
	if (!Global_55911)
	{
		Global_55911 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67998)
		{
			if (Global_67999[iVar0 /*9*/] == iParam0)
			{
				Global_67999[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_328()//Position - 0xEBBF
{
}

void func_329()//Position - 0xEBC7
{
	if (!bLocal_28 && iLocal_68 != 5)
	{
		if (iLocal_68 > 0)
		{
			func_330();
		}
	}
}

void func_330()//Position - 0xEBEA
{
	float fVar0;
	int iVar1;
	
	fVar0 = 600f;
	if (!func_36(iLocal_200))
	{
		if (!func_36(iLocal_201) && !func_36(Local_199))
		{
			func_332(1);
			return;
		}
		if (func_36(Local_199) && !func_151(unk_0xFC1458A37D98B502(), Local_199, fVar0, 1))
		{
			func_332(2);
		}
	}
	else
	{
		iVar1 = 0;
		if (!func_151(unk_0xFC1458A37D98B502(), iLocal_200, fVar0, 1))
		{
			iVar1++;
		}
		if (func_36(iLocal_201))
		{
			if (!func_151(unk_0xFC1458A37D98B502(), iLocal_201, fVar0, 1))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_36(Local_199))
		{
			if (!func_151(unk_0xFC1458A37D98B502(), Local_199, fVar0, 1))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_332(2);
			return;
		}
		iVar1 = 0;
		if (func_331(iLocal_200))
		{
			iVar1++;
		}
		if (func_36(iLocal_201))
		{
			if (func_331(iLocal_201))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_36(Local_199))
		{
			if (func_331(Local_199))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_332(3);
			return;
		}
	}
}

int func_331(int iParam0)//Position - 0xED30
{
	if (func_36(iParam0))
	{
		if (((unk_0xB6579D6FEB63269C(iParam0, 0, 7000) || unk_0xB6579D6FEB63269C(iParam0, 3, 30000)) || unk_0xB6579D6FEB63269C(iParam0, 2, 30000)) || unk_0xB6579D6FEB63269C(iParam0, 1, 40000))
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

void func_332(int iParam0)//Position - 0xED8B
{
	unk_0x84CDD933AFA470D2();
	func_60();
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			sLocal_179 = "PRA_FWRECK";
			break;
		
		case 2:
			sLocal_179 = "PRA_FFAR";
			break;
		
		case 3:
			sLocal_179 = "PRA_FSTUCK";
			break;
	}
	iLocal_68 = 5;
	iLocal_69 = 0;
}

int func_333(int iParam0)//Position - 0xEDE3
{
	if (func_10(iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_334()//Position - 0xEE03
{
	if (!func_96(36))
	{
		func_335(21, 0, 0);
	}
}

void func_335(int iParam0, bool bParam1, int iParam2)//Position - 0xEE1D
{
	if (bParam1)
	{
		if (!func_347(iParam0, 0, 0))
		{
			if (iParam2 && Global_92885.f_18[iParam0])
			{
				if (func_346(iParam0) == 3 && !func_345(iParam0))
				{
					func_344(iParam0);
					func_343(iParam0, 0, 0);
					func_337(iParam0, 1, 0);
					func_336(iParam0);
				}
				else
				{
					func_343(iParam0, 1, 0);
					func_336(iParam0);
				}
			}
			else
			{
				func_343(iParam0, 0, 0);
				func_337(iParam0, 1, 0);
				func_336(iParam0);
			}
		}
		else
		{
			func_337(iParam0, 1, 0);
			func_336(iParam0);
		}
	}
	else if (func_347(iParam0, 0, 0))
	{
		func_337(iParam0, 0, 0);
		func_337(iParam0, 1, 0);
		func_336(iParam0);
	}
}

void func_336(int iParam0)//Position - 0xEEDC
{
	Global_92885.f_166[iParam0] = 1;
	Global_92885.f_165 = 1;
}

void func_337(int iParam0, int iParam1, bool bParam2)//Position - 0xEEF6
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_342() == 0)
		{
			iVar0 = func_340(func_341(iParam0), -1, 0);
			unk_0x0EE72DB1CD8A3B86(&iVar0, iParam1);
			func_338(func_341(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

void func_338(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xEF5F
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_339(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_339(var uParam0)//Position - 0xEF8F
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_46();
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

int func_340(int iParam0, int iParam1, int iParam2)//Position - 0xEFC3
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_339(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_341(int iParam0)//Position - 0xEFF5
{
	switch (iParam0)
	{
		case 0:
			return 824;
			break;
		
		case 1:
			return 825;
			break;
		
		case 2:
			return 826;
			break;
		
		case 3:
			return 827;
			break;
		
		case 4:
			return 828;
			break;
		
		case 5:
			return 829;
			break;
		
		case 6:
			return 830;
			break;
		
		case 7:
			return 831;
			break;
		
		case 8:
			return 832;
			break;
		
		case 9:
			return 833;
			break;
		
		case 10:
			return 834;
			break;
		
		case 11:
			return 835;
			break;
		
		case 12:
			return 836;
			break;
		
		case 13:
			return 837;
			break;
		
		case 14:
			return 838;
			break;
		
		case 15:
			return 840;
			break;
		
		case 16:
			return 841;
			break;
		
		case 17:
			return 842;
			break;
		
		case 18:
			return 843;
			break;
		
		case 19:
			return 844;
			break;
		
		case 20:
			return 845;
			break;
		
		case 21:
			return 846;
			break;
		
		case 22:
			return 847;
			break;
		
		case 23:
			return 848;
			break;
		
		case 24:
			return 849;
			break;
		
		case 25:
			return 850;
			break;
		
		case 26:
			return 851;
			break;
		
		case 27:
			return 852;
			break;
		
		case 28:
			return 853;
			break;
		
		case 29:
			return 854;
			break;
		
		case 30:
			return 855;
			break;
		
		case 31:
			return 856;
			break;
		
		case 32:
			return 857;
			break;
		
		case 33:
			return 858;
			break;
		
		case 34:
			return 859;
			break;
		
		case 35:
			return 860;
			break;
		
		case 36:
			return 861;
			break;
		
		case 37:
			return 862;
			break;
		
		case 38:
			return 863;
			break;
		
		case 39:
			return 864;
			break;
		
		case 40:
			return 868;
			break;
		
		case 41:
			return 869;
			break;
		
		case 42:
			return 870;
			break;
		
		case 43:
			return 871;
			break;
		
		case 44:
			return 7013;
			break;
		
		case 45:
			return 3791;
			break;
		
		case 46:
			return 5366;
			break;
		
		case 47:
			return 6138;
			break;
		
		default:
			break;
	}
	return 7872;
}

int func_342()//Position - 0xF2DA
{
	return Global_25233;
}

void func_343(int iParam0, int iParam1, bool bParam2)//Position - 0xF2E5
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_342() == 0)
		{
			iVar0 = func_340(func_341(iParam0), -1, 0);
			unk_0x872F1C1F8587CCC7(&iVar0, iParam1);
			func_338(func_341(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

void func_344(int iParam0)//Position - 0xF34E
{
	if (Global_92885.f_18[iParam0])
	{
		func_343(iParam0, 10, 1);
		func_343(iParam0, 19, 1);
	}
}

bool func_345(int iParam0)//Position - 0xF375
{
	return func_347(iParam0, 5, 1);
}

int func_346(int iParam0)//Position - 0xF385
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
	}
	return 6;
}

int func_347(int iParam0, int iParam1, bool bParam2)//Position - 0xF612
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_342() == 0)
		{
			return unk_0xC80D31E4B587871C(func_340(func_341(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_348(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0xF672
{
	if (func_349())
	{
		unk_0x941BE77305BB5695(0);
		unk_0x0EE72DB1CD8A3B86(&(Global_92833.f_20), 2);
		unk_0x6ACDC20166AA3FAC(1);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
		}
		Global_92829 = { vParam0 };
		Global_92832 = fParam1;
		Global_92828 = 1;
		if (iParam2 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_92833.f_20), 14);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_92833.f_20), 14);
		}
		if (iParam3 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_92833.f_20), 24);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_92833.f_20), 24);
		}
		func_272(1);
	}
}

int func_349()//Position - 0xF707
{
	if (Global_92833 == 10 || Global_92833 == 9)
	{
		return 1;
	}
	return 0;
}

void func_350()//Position - 0xF72B
{
	func_365();
	func_363();
	func_356();
	func_353();
	func_351();
}

void func_351()//Position - 0xF747
{
	iLocal_374[0] = 0;
	iLocal_374[1] = 0;
	iLocal_374[2] = 0;
	Local_73[0 /*8*/] = { func_352("FP1_WANTM", "FP1_LOSTM", "FP1_THEREM", "FP1_CHATFM", "", "FP1_CHATTM") };
	Local_73[1 /*8*/] = { func_352("FP1_WANTT", "FP1_LOSTT", "FP1_THERET", "FP1_CHATFM", "FP1_CHATFT", "") };
	Local_73[2 /*8*/] = { func_352("FP1_WANTF", "FP1_LOSTF", "FP1_THEREF", "", "FP1_CHATFT", "FP1_CHATTM") };
}

struct<8> func_352(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)//Position - 0xF7D0
{
	struct<8> Var0;
	
	Var0 = 6;
	Var0[0] = sParam0;
	Var0[1] = sParam1;
	Var0[5] = sParam2;
	Var0[2] = sParam3;
	Var0[3] = sParam4;
	Var0[4] = sParam5;
	return Var0;
}

void func_353()//Position - 0xF80E
{
	Local_46[0 /*25*/] = { func_355(1203,146f, -337,3543f, 67,9314f, 1245,118f, -348,5059f, 68,2099f, 253,1908f, 0) };
	func_354(&(Local_46[0 /*25*/]), vLocal_185, 0, 15f, 5f, 270f, 3, 1192,006f, -631,4703f, 61,6972f, 10f, 10f, 5f);
	Local_46[1 /*25*/] = { func_355(1215,084f, -339,3139f, 68,1323f, 964,9214f, -555,212f, 58,0211f, 39,645f, 0) };
	func_354(&(Local_46[1 /*25*/]), vLocal_185, 0, 15f, 10f, 270f, 3, 1103,29f, -764,532f, 56,633f, 10f, 10f, 5f);
	Local_46[2 /*25*/] = { func_355(1179,533f, -361,3286f, 67,4559f, 929,8701f, -619,4534f, 56,4632f, 164,3631f, 0) };
	func_354(&(Local_46[2 /*25*/]), vLocal_185, 0, 15f, 10f, 270f, 3, 933,3745f, -615,9453f, 56,3041f, 10f, 10f, 5f);
	Local_46[3 /*25*/] = { func_355(1107,674f, -364,0569f, 65,9581f, 1099,266f, -775,0809f, 57,3525f, 178,2038f, 0) };
	func_354(&(Local_46[3 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1062,149f, -479,4801f, 62,9454f, 10f, 10f, 5f);
	Local_46[4 /*25*/] = { func_355(1069,279f, -393,5795f, 66,0262f, 1065,364f, -389,9561f, 66,1504f, 220,1611f, 0) };
	func_354(&(Local_46[4 /*25*/]), vLocal_185, 0, 5f, 30f, 128,1732f, 3, 1069,718f, -393,9912f, 66,0261f, 10f, 10f, 5f);
	Local_46[5 /*25*/] = { func_355(1031,673f, -424,599f, 64,5439f, 1027,179f, -420,6656f, 64,6268f, 178,2038f, joaat("p_binbag_01_s")) };
	func_354(&(Local_46[5 /*25*/]), 1028,201f, -428,3677f, 64,3571f, 1, 15f, 2f, 128,3915f, 1, 1027,179f, -420,6656f, 64,6268f, 10f, 10f, 5f);
	Local_46[6 /*25*/] = { func_355(942,1528f, -488,8956f, 59,3129f, 932,0198f, -489,3886f, 58,9212f, 202,5785f, joaat("p_binbag_01_s")) };
	func_354(&(Local_46[6 /*25*/]), 930,7186f, -494,9253f, 58,616f, 1, 15f, 2f, 119,6518f, 1, 952,9781f, -482,5082f, 60,0003f, 10f, 10f, 5f);
	Local_46[7 /*25*/] = { func_355(868,2734f, -529,5473f, 56,2071f, 865,0042f, -522,4746f, 56,3363f, 241,9711f, joaat("p_binbag_01_s")) };
	func_354(&(Local_46[7 /*25*/]), 865,2349f, -535,8759f, 56,1574f, 1, 15f, 2f, 162,7219f, 1, 1062,149f, -479,4801f, 62,9454f, 10f, 10f, 5f);
	Local_46[8 /*25*/] = { func_355(874,8076f, -571,2073f, 56,2987f, 983,125f, -541,9902f, 58,5929f, 49,7653f, 0) };
	func_354(&(Local_46[8 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1062,149f, -479,4801f, 62,9454f, 10f, 10f, 5f);
	Local_46[9 /*25*/] = { func_355(931,5218f, -614,2144f, 56,3119f, 928,6471f, -620,711f, 56,4611f, -108,06f, joaat("p_binbag_01_s")) };
	func_354(&(Local_46[9 /*25*/]), 940,4086f, -622,1787f, 56,3003f, 1, 15f, 2f, 228,1176f, 1, 918,6716f, -602,9258f, 56,3395f, 10f, 10f, 5f);
	Local_46[10 /*25*/] = { func_355(964,9758f, -645,9614f, 56,4465f, 927,1033f, -575,4162f, 56,5329f, 55,9317f, 0) };
	func_354(&(Local_46[10 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1062,149f, -479,4801f, 62,9454f, 10f, 10f, 5f);
	Local_46[11 /*25*/] = { func_355(983,4438f, -683,1442f, 56,4087f, 929,3757f, -618,9091f, 56,4612f, 181,1844f, 0) };
	func_354(&(Local_46[11 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149,136f, -981,231f, 45,0495f, 10f, 10f, 5f);
	Local_46[12 /*25*/] = { func_355(1016,261f, -731,546f, 56,555f, 1011,801f, -733,0652f, 56,7435f, 314,5626f, joaat("p_binbag_01_s")) };
	func_354(&(Local_46[12 /*25*/]), 1020,251f, -736,815f, 56,6235f, 1, 15f, 2f, 220,7804f, 1, 1011,238f, -724,7085f, 56,5183f, 10f, 10f, 5f);
	Local_46[13 /*25*/] = { func_355(1164,126f, -762,2866f, 56,6656f, 1099,342f, -775,4273f, 57,3525f, 177,5729f, 0) };
	func_354(&(Local_46[13 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149,136f, -981,231f, 45,0495f, 10f, 10f, 5f);
	Local_46[14 /*25*/] = { func_355(1199,339f, -678,0995f, 59,9051f, 1205,415f, -672,1282f, 60,1445f, 105,2374f, 0) };
	func_354(&(Local_46[14 /*25*/]), vLocal_185, 0, 15f, 2f, 12,1103f, 3, 1199,339f, -678,0995f, 59,9051f, 10f, 10f, 5f);
	Local_46[15 /*25*/] = { func_355(1183,445f, -582,9476f, 63,0962f, 929,3757f, -618,9091f, 56,4612f, 181,1844f, 0) };
	func_354(&(Local_46[15 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149,136f, -981,231f, 45,0495f, 10f, 10f, 5f);
	Local_46[16 /*25*/] = { func_355(1192,479f, -485,1086f, 64,7195f, 1264,359f, -719,084f, 63,328f, 65,0519f, 0) };
	func_354(&(Local_46[16 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149,136f, -981,231f, 45,0495f, 10f, 10f, 5f);
	Local_46[17 /*25*/] = { func_355(1212,693f, -400,0532f, 67,0971f, 1284,109f, -676,728f, 65,0225f, 69,9898f, 0) };
	func_354(&(Local_46[17 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149,136f, -981,231f, 45,0495f, 10f, 10f, 5f);
	Local_46[18 /*25*/] = { func_355(1114,573f, -232,3706f, 68,0949f, 929,3757f, -618,9091f, 56,4612f, 181,1844f, 0) };
	func_354(&(Local_46[18 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149,136f, -981,231f, 45,0495f, 10f, 10f, 5f);
	iLocal_187 = 19;
}

void func_354(var uParam0, vector3 vParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, vector3 vParam7, vector3 vParam8)//Position - 0xFFF3
{
	uParam0->f_3 = { vParam1 };
	uParam0->f_6 = fParam3;
	uParam0->f_7 = fParam4;
	uParam0->f_8 = fParam5;
	uParam0->f_9 = iParam2;
	uParam0->f_10 = iParam6;
	uParam0->f_11 = { vParam7 };
	uParam0->f_14 = { vParam8 };
}

struct<25> func_355(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0x10038
{
	struct<25> Var0;
	
	Var0.f_9 = 1;
	Var0.f_10 = 3;
	Var0 = { vParam0 };
	Var0.f_19 = { vParam1 };
	Var0.f_22 = fParam2;
	Var0.f_23 = iParam3;
	return Var0;
}

void func_356()//Position - 0x10072
{
	vector3 vVar0[6];
	
	vVar0[0 /*3*/] = { 1251,308f, -400,6231f, 68,0926f };
	vVar0[1 /*3*/] = { 1183,993f, -403,3443f, 66,8734f };
	vVar0[2 /*3*/] = { 1161,54f, -372,6073f, 66,6034f };
	vVar0[3 /*3*/] = { 1167,644f, -273,7987f, 67,9705f };
	vVar0[4 /*3*/] = { 1252,362f, -247,353f, 77,5631f };
	vVar0[5 /*3*/] = { 1330,062f, -341,0342f, 100,3476f };
	func_357(&vVar0, 6);
}

void func_357(var uParam0, int iParam1)//Position - 0x1010A
{
	int iVar0;
	
	func_362(&uLocal_74);
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		func_361(&uLocal_74, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	func_360(&uLocal_74);
	func_358(&uLocal_126, &uLocal_74, 50f);
}

void func_358(var uParam0, var uParam1, float fParam2)//Position - 0x10153
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	
	if (uParam1->f_46 < 3)
	{
	}
	iVar0 = (uParam1->f_46 - 1);
	iVar1 = 0;
	iVar2 = 1;
	uParam0->f_46 = uParam1->f_46;
	while (iVar1 < uParam1->f_46)
	{
		vVar3 = { *(uParam1[iVar1 /*3*/]) - *(uParam1[iVar0 /*3*/]) };
		vVar4 = { *(uParam1[iVar2 /*3*/]) - *(uParam1[iVar1 /*3*/]) };
		vVar3 = { vVar3 / FtoV(system::sqrt(((vVar3.x * vVar3.x) + (vVar3.y * vVar3.y)))) };
		vVar4 = { vVar4 / FtoV(system::sqrt(((vVar4.x * vVar4.x) + (vVar4.y * vVar4.y)))) };
		vVar5 = { vVar3 - vVar4 };
		vVar5 = { vVar5 / FtoV(system::sqrt(((vVar5.x * vVar5.x) + (vVar5.y * vVar5.y)))) };
		if (func_359(uParam1, *(uParam1[iVar1 /*3*/]) + vVar5))
		{
			vVar5 = { -vVar5 };
		}
		*(uParam0[iVar1 /*3*/]) = { *(uParam1[iVar1 /*3*/]) + vVar5 * Vector(fParam2, fParam2, fParam2) };
		iVar0 = iVar1;
		iVar1++;
		iVar2 = (iVar2 + 1 % uParam1->f_46);
	}
}

bool func_359(var uParam0, struct<2> Param1, Vector3 vParam2)//Position - 0x10260
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_46 < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_46 - 1);
	while (iVar1 < uParam0->f_46)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

void func_360(var uParam0)//Position - 0x1031C
{
	int iVar0;
	float fVar1;
	
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		uParam0->f_47 = { uParam0->f_47 + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_47 = { uParam0->f_47 / FtoV(system::to_float(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		fVar1 = system::vdist2(uParam0->f_47, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_50)
		{
			uParam0->f_50 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_50 = system::sqrt(uParam0->f_50);
	uParam0->f_51 = 0;
}

void func_361(var uParam0, vector3 vParam1)//Position - 0x103BC
{
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 >= 15)
	{
	}
	*(uParam0[uParam0->f_46 /*3*/]) = { vParam1 };
	uParam0->f_46++;
}

void func_362(var uParam0)//Position - 0x103ED
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

void func_363()//Position - 0x10414
{
	Local_197 = { func_364(1200,61f, -344,2721f, 68,0424f, 269,2015f, joaat("s_m_y_garbage")) };
	Local_198 = { func_364(1202,42f, -341,6034f, 67,9378f, 273,1125f, joaat("s_m_y_garbage")) };
}

struct<14> func_364(vector3 vParam0, float fParam1, int iParam2)//Position - 0x10462
{
	struct<14> Var0;
	
	Var0.f_1 = { vParam0 };
	Var0.f_4 = fParam1;
	Var0.f_5 = iParam2;
	return Var0;
}

void func_365()//Position - 0x10485
{
	Local_199 = { func_366(1203,146f, -337,3543f, 67,9314f, 189,7047f, joaat("trash")) };
}

struct<6> func_366(vector3 vParam0, float fParam1, int iParam2)//Position - 0x104AF
{
	struct<6> Var0;
	
	Var0.f_1 = { vParam0 };
	Var0.f_4 = fParam1;
	Var0.f_5 = iParam2;
	return Var0;
}

void func_367()//Position - 0x104D1
{
	func_234(1);
	func_378(1);
	unk_0x2E4932E63763FE26(joaat("trash"), false);
	unk_0x2E4932E63763FE26(joaat("towtruck"), false);
	unk_0x2E4932E63763FE26(joaat("s_m_y_garbage"), false);
	func_62();
	func_377();
	func_376();
	func_368(0);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_368(bool bParam0)//Position - 0x10516
{
	vector3 vVar0;
	
	if (bParam0)
	{
	}
	unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
	unk_0xFA85ECEE588094C7("DRIVE", 1);
	unk_0xFA85ECEE588094C7("WORLD_VEHICLE_ATTRACTOR", 1);
	unk_0xFA85ECEE588094C7("WORLD_VEHICLE_DRIVE_PASSENGERS", 1);
	unk_0xFA85ECEE588094C7("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_37();
	func_375();
	func_374();
	func_373();
	func_372();
	func_216();
	if (bParam0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_200))
		{
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
			{
				if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_200, 0))
					{
						vVar0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
						unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), vVar0, 1, false, 0, 1);
					}
				}
			}
		}
		func_370();
		unk_0x84CDD933AFA470D2();
		func_2();
	}
	else
	{
		func_369();
	}
	unk_0xF906FCF8A11CBA9A(0);
	func_139(&uLocal_56, 0, 0);
	if (unk_0x8EA3C8E091EA5BA4(iLocal_184))
	{
		unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
		unk_0x02934BABFD4CD384(iLocal_184, 0);
	}
}

void func_369()//Position - 0x105FA
{
	func_3();
	func_6(&Local_199);
	func_6(&iLocal_201);
	func_6(&iLocal_200);
	func_5(&Local_197, 1, 0, 1);
	func_5(&Local_198, 1, 0, 1);
	func_6(&iLocal_202);
}

void func_370()//Position - 0x10636
{
	Global_14622 = 0;
	func_371();
}

void func_371()//Position - 0x10646
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

void func_372()//Position - 0x10667
{
}

void func_373()//Position - 0x1066F
{
	if (iLocal_194)
	{
		unk_0x3A3E253FC4F98014(joaat("trash"));
	}
}

void func_374()//Position - 0x10686
{
}

void func_375()//Position - 0x1068E
{
	unk_0x14776E43F90DD454(Local_199.f_5);
}

void func_376()//Position - 0x1069F
{
	func_335(21, 1, 0);
}

void func_377()//Position - 0x106AF
{
	Global_88833 = 0;
}

void func_378(int iParam0)//Position - 0x106BC
{
	Global_90284 = iParam0;
}

void func_379()//Position - 0x106CA
{
	int iVar0;
	
	if (unk_0x3B6F9DF9C5FEB3A4("buddyDeathResponse"))
	{
		system::start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_104555.f_9055 || func_32(0))
	{
		if (!func_380())
		{
			iVar0 = func_31();
			if (iVar0 != -1)
			{
				if (!func_19(iVar0))
				{
					return;
				}
				unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_24();
		}
	}
}

int func_380()//Position - 0x1073B
{
	if (((Global_92833 == 13 || Global_92833 == 10) || Global_92833 == 11) || Global_92833 == 12)
	{
		return 0;
	}
	return 1;
}

