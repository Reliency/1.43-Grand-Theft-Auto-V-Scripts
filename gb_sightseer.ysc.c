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
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	float fLocal_67 = 0f;
	int iLocal_68[5] = { 0, 0, 0, 0, 0 };
	float fLocal_69 = 0f;
	float fLocal_70 = 0f;
	float fLocal_71 = 0f;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	struct<2> Local_79 = { 0, 0 } ;
	struct<2> Local_80[8];
	struct<2> Local_81 = { 0, 0 } ;
	struct<4> Local_82[8];
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 10;
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
	var uLocal_105 = 2;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 8;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 8;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	float fLocal_127 = 0f;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	struct<60> Local_131 = { 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	struct<6> Local_132[32];
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	var uLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	vector3 vLocal_142 = { 0f, 0f, 0f };
	var uLocal_143 = 0;
	struct<23> Local_144 = { 0, 0, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 1015222895;
	var uLocal_151 = 1021665346;
	var uLocal_152 = 0;
	var uLocal_153 = 255;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = -1;
	var uLocal_163 = 996499522;
	var uLocal_164 = 1002740646;
	var uLocal_165 = 0;
	var uLocal_166 = 60;
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
	var uLocal_227 = 1016296636;
	var uLocal_228 = 220;
	var uLocal_229 = 255;
	var uLocal_230 = 255;
	var uLocal_231 = 255;
	var uLocal_232 = 255;
	var uLocal_233 = 255;
	var uLocal_234 = 255;
	var uLocal_235 = 4096;
	var uLocal_236 = 40;
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
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 4;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 1065353216;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 1056964608;
	var uLocal_415 = 1056964608;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	vector3 vLocal_422[20] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	struct<21> Local_431 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_67 = 0f;
	fLocal_69 = 0f;
	fLocal_70 = 0f;
	fLocal_71 = 0f;
	fLocal_84 = 0,62f;
	fLocal_85 = 0,51f;
	fLocal_86 = 0,55f;
	fLocal_87 = 25f;
	fLocal_127 = ((0,05f + 0,275f) - 0,01f);
	iLocal_416 = -1;
	iLocal_417 = -1;
	iLocal_419 = -1;
	iLocal_420 = -1;
	if (unk_0x3A711520F83BAE98() && func_991(unk_0x9EB17624F44A8DA4(), 0, 1))
	{
		func_958(ScriptParam_431);
	}
	else
	{
		func_909();
	}
	while (true)
	{
		func_908();
		if (func_900())
		{
			func_909();
		}
		Global_1667867.f_2 = Local_131.f_58;
		Global_1667867.f_3 = Local_131.f_59;
		switch (func_899(unk_0x622FF3AE4B1D07C3()))
		{
			case 0:
				if (func_898() == 1)
				{
					func_897();
					if (func_896())
					{
						func_881(142, 1, -1, 0);
						unk_0xC0EBC1452FCAB15C(3);
						if (!func_880())
						{
							unk_0x02B16F1B0D7F12B4(unk_0x9EB17624F44A8DA4(), joaat("pickup_portable_package"), 0);
						}
					}
					else
					{
						func_881(142, 0, -1, 0);
					}
					Local_132[unk_0x622FF3AE4B1D07C3() /*6*/] = 1;
				}
				else if (func_898() == 4)
				{
					Local_132[unk_0x622FF3AE4B1D07C3() /*6*/] = 3;
				}
				break;
			
			case 1:
				if (func_877(1))
				{
					Local_132[unk_0x622FF3AE4B1D07C3() /*6*/] = 2;
				}
				if (func_898() == 1)
				{
					func_402();
					func_399();
					if (func_896() || func_398())
					{
						func_249(&(Global_1347666.f_532), &Global_1347666, 27, &(Global_1347666.f_1), &(Global_1347666.f_115), -1, 0);
					}
					func_196();
				}
				else if (func_898() == 4)
				{
					Local_132[unk_0x622FF3AE4B1D07C3() /*6*/] = 3;
				}
				func_193();
				break;
			
			case 3:
				func_192(&(Local_131.f_49));
				if (func_191(&(Local_131.f_49)))
				{
					Local_132[unk_0x622FF3AE4B1D07C3() /*6*/] = 4;
				}
				break;
			
			case 2:
				Local_132[unk_0x622FF3AE4B1D07C3() /*6*/] = 4;
			
			case 4:
				func_909();
				break;
		}
		if (unk_0x8E1421E2A2A2FBD4())
		{
			switch (func_898())
			{
				case 0:
					if (func_184())
					{
						unk_0x29723B8B6E11E8F2(&(Local_131.f_58), &(Local_131.f_59));
						Local_131 = 1;
						Local_131.f_33 = unk_0x622FF3AE4B1D07C3();
						Local_131.f_34 = unk_0x9EB17624F44A8DA4();
						func_881(142, 1, -1, 0);
					}
					break;
				
				case 1:
					func_182();
					func_4();
					if (func_2())
					{
						Local_131 = 4;
					}
					else if (func_1())
					{
						Local_131 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x2B8
{
	if (Global_2512808.f_4856.f_29)
	{
		Global_2512808.f_4856.f_29 = 0;
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x2DB
{
	if (func_3())
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Local_131.f_1, 2))
	{
		return 1;
	}
	return 0;
}

int func_3()//Position - 0x2FF
{
	return 0;
}

void func_4()//Position - 0x308
{
	switch (Local_131.f_32)
	{
		case 0:
			func_12();
			func_10();
			func_5();
			if (unk_0xC80D31E4B587871C(Local_131.f_1, 1))
			{
				Local_131.f_32 = 2;
			}
			else if (unk_0xC80D31E4B587871C(Local_131.f_1, 3))
			{
				Local_131.f_32 = 2;
			}
			else if (unk_0xC80D31E4B587871C(Local_131.f_1, 4))
			{
				Local_131.f_32 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_5()//Position - 0x379
{
	if (Local_131.f_5 == 0)
	{
		if (!unk_0xC80D31E4B587871C(Local_131.f_1, 6))
		{
			if (!func_9(&(Local_131.f_53)))
			{
				func_8(&(Local_131.f_53), 0, 0);
			}
			else if (func_6(&(Local_131.f_53), func_7(), 0))
			{
				unk_0x872F1C1F8587CCC7(&(Local_131.f_1), 6);
			}
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)//Position - 0x3C8
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_8(uParam0, bParam2, 0);
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

int func_7()//Position - 0x426
{
	return 600000;
}

void func_8(var uParam0, bool bParam1, bool bParam2)//Position - 0x432
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

bool func_9(var uParam0)//Position - 0x477
{
	return uParam0->f_1;
}

void func_10()//Position - 0x483
{
	if (!func_9(&(Local_131.f_51)))
	{
		func_8(&(Local_131.f_51), 0, 0);
	}
	else if (func_6(&(Local_131.f_51), func_11(), 0))
	{
		unk_0x872F1C1F8587CCC7(&(Local_131.f_1), 3);
	}
}

int func_11()//Position - 0x4BD
{
	return Global_262145.f_11842;
}

void func_12()//Position - 0x4CC
{
	int iVar0;
	
	if (Local_131.f_33 < 0)
	{
		return;
	}
	if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(Local_131.f_33)))
	{
		if (Local_132[Local_131.f_33 /*6*/].f_4 > 0)
		{
			iVar0 = (Local_132[Local_131.f_33 /*6*/].f_4 - 1);
			if (!unk_0xC80D31E4B587871C(Local_131.f_4, iVar0))
			{
				Local_131.f_36 = iVar0;
				if (func_13())
				{
					unk_0x872F1C1F8587CCC7(&(Local_131.f_4), iVar0);
				}
			}
		}
	}
}

int func_13()//Position - 0x52F
{
	int iVar0;
	struct<26> Var1;
	vector3 vVar2;
	
	iVar0 = joaat("prop_ld_case_01");
	Var1.f_5 = 1115815936;
	Var1.f_13 = 2;
	Var1.f_20 = 2;
	Var1.f_25 = -1082130432;
	Var1.f_3 = 0;
	Var1.f_5 = 10f;
	if (!unk_0x918CA1BFFAA03556(Local_131.f_3))
	{
		unk_0x6FF834D85E2DD4C6(iVar0);
		if (unk_0x9A0B2ED5055D3F0B(iVar0))
		{
			if (unk_0x1887812F0A3EB4F6(1))
			{
				vVar2 = { func_181() };
				if (func_14(vVar2, 5f, &vLocal_142, &uLocal_143, Var1))
				{
					Local_131.f_3 = unk_0x02E026B1C5CE86B4(unk_0xAEE6FC463D735D1F(joaat("pickup_portable_package"), vLocal_142, true, iVar0));
					unk_0xAA93B7B448E10E40(unk_0xE8BC72FED1586931(Local_131.f_3), vLocal_142 + Vector(0,5f, 0f, 0f), 0, 0, 1);
					unk_0x14776E43F90DD454(iVar0);
					unk_0x1A0806871323CD16(unk_0xE8BC72FED1586931(Local_131.f_3), true);
					unk_0x4C1CD9E51E95280C(unk_0xE8BC72FED1586931(Local_131.f_3), 1);
					unk_0xE322818CF08D3198(unk_0xE8BC72FED1586931(Local_131.f_3), 1);
					unk_0xFBA991D3A851E195(unk_0xE8BC72FED1586931(Local_131.f_3), false);
					unk_0x764B52EA8B8FFFA3(unk_0xE8BC72FED1586931(Local_131.f_3));
					func_8(&(Local_131.f_55), 0, 0);
				}
			}
		}
	}
	if (unk_0x918CA1BFFAA03556(Local_131.f_3))
	{
		return 1;
	}
	return 0;
}

int func_14(vector3 vParam0, float fParam1, var uParam2, var uParam3, struct<13> Param4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)//Position - 0x64F
{
	struct<17> Var0;
	struct<18> Var1;
	vector3 vVar2;
	
	if (Param4.f_5 > (fParam1 - 20f))
	{
		Param4.f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1 = { vParam0 };
	Var1.f_3 = Param4.f_11;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	if (func_15(&Var1, &Param4, &Var0))
	{
		if ((Param4.f_12 > 0f && Param4.f_7) && Param4.f_8)
		{
			vVar2 = { vParam0 - Var0[0 /*3*/] };
			if (vVar2.z > Param4.f_12)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_16[0] = Param4.f_11;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_15(var uParam0, var uParam1, var uParam2)//Position - 0x749
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	bool bVar13;
	struct<56> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405047.f_2433 == *uParam0 || !Global_2405047.f_2433.f_1 == uParam0->f_1) || !Global_2405047.f_2433.f_2 == uParam0->f_2) || !Global_2405047.f_2436 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405047.f_2447 == uParam0->f_8 || !Global_2405047.f_2447.f_1 == uParam0->f_8.f_1) || !Global_2405047.f_2447.f_2 == uParam0->f_8.f_2) || !Global_2405047.f_2450 == uParam0->f_11) || !Global_2405047.f_2450.f_1 == uParam0->f_11.f_1) || !Global_2405047.f_2450.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405047.f_2447 == uParam0->f_8 || !Global_2405047.f_2447.f_1 == uParam0->f_8.f_1) || !Global_2405047.f_2447.f_2 == uParam0->f_8.f_2) || !Global_2405047.f_2450 == uParam0->f_11) || !Global_2405047.f_2450.f_1 == uParam0->f_11.f_1) || !Global_2405047.f_2450.f_2 == uParam0->f_11.f_2) || !Global_2405047.f_2453 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (bVar13)
	{
		if (Global_2405047.f_2431 == 1)
		{
			if (unk_0x8F05914DD835E69F(Global_2405047.f_2440))
			{
				if (Global_2405047.f_2440 == unk_0xBBA15366508D1BDE())
				{
					if (unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2437) < func_180(0))
					{
						return 0;
					}
				}
				else if (unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2437) < func_180(0))
				{
					return 0;
				}
			}
			unk_0x9F99C09A1147E75A();
			unk_0x4D1DF3388A933CF8();
			func_179();
		}
		Global_2405047.f_2431 = 0;
	}
	else if (unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2437) > func_180(0))
	{
		Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
		func_173();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0,5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0,5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0,5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0,5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0,5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0,5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0,5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0,5f * uParam0->f_14));
			}
			break;
	}
	unk_0x590D9654A4367AA1(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		vVar6 = { *uParam0 };
	}
	else
	{
		vVar6 = { uParam0->f_8 + uParam0->f_11 * Vector(0,5f, 0,5f, 0,5f) };
	}
	vVar7 = { vVar6 + Vector(-0,1f, -0,1f, -0,1f) };
	vVar8 = { vVar6 + Vector(0,1f, 0,1f, 0,1f) };
	if (!Global_2405047.f_2431)
	{
		unk_0x9F99C09A1147E75A();
		unk_0x4D1DF3388A933CF8();
		func_179();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (system::vmag(*uParam0) > 0f)
			{
				if (func_172(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0x1A1094F3B2B73324())
		{
			Global_2405047.f_2454 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405047.f_2433 = { *uParam0 };
					Global_2405047.f_2436 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405047.f_2447 = { uParam0->f_8 };
					Global_2405047.f_2450 = { uParam0->f_11 };
					Global_2405047.f_2453 = 0f;
					Global_2405047.f_2433 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405047.f_2447 = { uParam0->f_8 };
					Global_2405047.f_2450 = { uParam0->f_11 };
					Global_2405047.f_2453 = uParam0->f_14;
					Global_2405047.f_2433 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_171(vVar6.x, vVar6.y);
			}
			Global_2405047.f_2432 = 1;
			Global_2405047.f_2431 = 1;
			Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
			Global_2405047.f_2437 = unk_0xD1952A425B78FFC0();
			Global_2405047.f_2440 = unk_0xBBA15366508D1BDE();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405047.f_2431)
	{
		if (Global_2405047.f_2432 == 1)
		{
			if (unk_0x9C0571C926F68BED(fVar2, fVar3, fVar4, fVar5) || unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2438) > 5000)
			{
				Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_25 > 0f)
					{
						Var14.f_6 = uParam1->f_25;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_23;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (func_170(Global_4456448.f_143970))
					{
						Var14.f_9 = 1;
					}
					func_148(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_147(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405047.f_2432 = 9;
				}
				else
				{
					Global_2405047.f_2432 = 2;
				}
			}
		}
		if (Global_2405047.f_2432 == 2)
		{
			if ((unk_0x99C56B529F029F9E(vVar7, vVar8) || unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2438) > 15000) || unk_0x6A53B51B72E7941B(vVar7, vVar8) == 0)
			{
				Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
				if (uParam0->f_5 && !func_144(unk_0x9EB17624F44A8DA4(), 0))
				{
					Global_2405047.f_2432 = 3;
				}
				else
				{
					Global_2405047.f_2432 = 4;
				}
			}
			else if (unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2442) > 7000)
			{
				func_143(vVar6.x, vVar6.y);
			}
		}
		if (Global_2405047.f_2432 == 3)
		{
			if (func_142() || unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2438) > 10000)
			{
				Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
				Global_2405047.f_2432 = 4;
			}
		}
		if (Global_2405047.f_2432 == 4)
		{
			if (unk_0x1A1094F3B2B73324())
			{
				unk_0x9F99C09A1147E75A();
				unk_0x4D1DF3388A933CF8();
			}
			else
			{
				iVar0 = 0;
				func_173();
				if (uParam0->f_5)
				{
					if (system::vmag(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0xCCF32B3FD0FF4C53(unk_0x9EB17624F44A8DA4(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
								Global_2405047.f_2432 = 5;
							}
							break;
						
						case 1:
							func_141(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
							if (unk_0xD6D9916F15673C93(unk_0x9EB17624F44A8DA4(), vVar10, vVar11, uVar12, *uParam1, iVar0))
							{
								Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
								Global_2405047.f_2432 = 5;
							}
							break;
						
						case 2:
							if (unk_0xD6D9916F15673C93(unk_0x9EB17624F44A8DA4(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
								Global_2405047.f_2432 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
					Global_2405047.f_2432 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x8814134CB7E5C28B(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_141(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
							unk_0xA6B4B94DC0DE8A5F(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0xA6B4B94DC0DE8A5F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405047.f_2432 == 5)
		{
			if (func_65(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405047.f_2458.f_5)
				{
					Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
					Global_2405047.f_2432 = 6;
				}
				else
				{
					Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
					if (!uParam0->f_5)
					{
						if (!system::vmag(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0xA67DD8488EBA5F6D(vVar1.x, vVar1.y);
						}
					}
					Global_2405047.f_2432 = 9;
				}
			}
			else if (unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2438) > 20000)
			{
				unk_0x9F99C09A1147E75A();
				unk_0x4D1DF3388A933CF8();
				Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
				Global_2405047.f_2432 = 8;
			}
		}
		if (Global_2405047.f_2432 == 6)
		{
			iVar0 = 0;
			Global_2405047.f_2458.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_64(uParam0->f_4))
				{
					if (unk_0x2C2E1E35924B9FF2(unk_0xD3BB1A515B0A47F3(vVar6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_63(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x2C2E1E35924B9FF2(unk_0xD3BB1A515B0A47F3(vVar6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
			Global_2405047.f_2432 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x8814134CB7E5C28B(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_141(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
					unk_0xA6B4B94DC0DE8A5F(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0xA6B4B94DC0DE8A5F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405047.f_2432 == 7)
		{
			if (func_65(uParam2, uParam0, uParam1, 1))
			{
				if (system::vmag(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (system::vmag(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!system::vmag(Global_2405047.f_2587[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_147(Global_2405047.f_2587[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405047.f_2587[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_61(Global_2405047.f_2587[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405047.f_2587[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x8AE9E5E8F6DC40C9(Global_2405047.f_2587[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, true))
										{
											*(uParam2[0 /*3*/]) = { Global_2405047.f_2587[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (system::vmag(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_18(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
				if (!system::vmag(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						vVar1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = unk_0xA67DD8488EBA5F6D(vVar1.x, vVar1.y);
						iVar9++;
					}
				}
				Global_2405047.f_2432 = 9;
			}
			else if (unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2438) > 20000)
			{
				Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
				Global_2405047.f_2432 = 8;
			}
		}
		if (Global_2405047.f_2432 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_17(Global_2405047.f_482))
				{
				}
			}
			else if (Global_2405047.f_2458.f_2)
			{
				func_16(uParam2, &(Global_2405047.f_2458.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405047.f_2433 };
				func_18(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
			Global_2405047.f_2432 = 9;
		}
		if (Global_2405047.f_2432 == 9)
		{
			Global_2405047.f_2431 = 0;
			unk_0x9F99C09A1147E75A();
			unk_0x4D1DF3388A933CF8();
			func_179();
			return 1;
		}
		Global_2405047.f_2437 = unk_0xD1952A425B78FFC0();
	}
	return 0;
}

void func_16(var uParam0, var uParam1)//Position - 0x1702
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*9*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*9*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*9*/];
		iVar0++;
	}
}

int func_17(int iParam0)//Position - 0x174C
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_18(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x176B
{
	vector3 vVar0;
	var uVar1;
	struct<56> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar7 = { *uParam5 };
						if (func_64(uParam5->f_4) || !unk_0x2C2E1E35924B9FF2(unk_0xD3BB1A515B0A47F3(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						vVar7 = { uParam5->f_8 + uParam5->f_11 * Vector(0,5f, 0,5f, 0,5f) };
						if (func_63(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x2C2E1E35924B9FF2(unk_0xD3BB1A515B0A47F3(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						vVar7 = { uParam5->f_8 + uParam5->f_11 * Vector(0,5f, 0,5f, 0,5f) };
						if (func_63(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x2C2E1E35924B9FF2(unk_0xD3BB1A515B0A47F3(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_20(*uParam0, &vVar0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		vVar0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_25 > 0f)
		{
			Var2.f_6 = uParam6->f_25;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_23;
		Var2.f_55 = uParam5->f_16;
		func_148(&vVar0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_11 };
				break;
			
			case 2:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!func_19(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
		{
			if (func_20(*uParam0, &vVar0, iVar6, iParam3, 0))
			{
				if (!func_19(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar8 + vVar9 * Vector(0,5f, 0,5f, 0,5f) };
					}
					else
					{
						vVar0 = { vVar8 };
					}
					if (unk_0x7367FB97975F1E29(vVar0, &uVar3, 0, 0))
					{
						vVar0.z = uVar3;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar8 + vVar9 * Vector(0,5f, 0,5f, 0,5f) };
				}
				else
				{
					vVar0 = { vVar8 };
				}
				if (unk_0x7367FB97975F1E29(vVar0, &uVar3, 0, 0))
				{
					vVar0.z = uVar3;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_2405047.f_642 = 1;
}

int func_19(vector3 vParam0, int iParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x1BA3
{
	switch (iParam1)
	{
		case 0:
			if (system::vdist(vParam0, vParam2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_61(vParam0, vParam2, vParam3, 0, 0);
			break;
		
		case 2:
			return unk_0x8AE9E5E8F6DC40C9(vParam0, vParam2, vParam3, fParam4, 0, true);
			break;
	}
	return 0;
}

int func_20(vector3 vParam0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1C10
{
	if (func_60(vParam0, uParam1))
	{
		if (func_21(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (unk_0x3F3EC0940E331911(vParam0, 0, uParam1, iParam2))
	{
		if (func_21(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_21(vector3 vParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x1C6C
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = system::vdist(vParam0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_41(Global_2405047.f_505, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_28(*uParam1, 1056964608))
			{
				if (!func_22(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_22(var uParam0, bool bParam1)//Position - 0x1CF1
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { *uParam0 };
	iVar2 = func_27(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411037[iVar2])
	{
		if (func_26(vVar1, &(Global_2409893[iVar2 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_23(&vVar1, Global_2409893[iVar2 /*127*/][iVar0 /*7*/], Global_2409893[iVar2 /*127*/][iVar0 /*7*/].f_3, Global_2409893[iVar2 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411037[8])
	{
		if (func_26(vVar1, &(Global_2409893[8 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_23(&vVar1, Global_2409893[8 /*127*/][iVar0 /*7*/], Global_2409893[8 /*127*/][iVar0 /*7*/].f_3, Global_2409893[8 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_23(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x1DFE
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	
	vVar0 = { vParam2 - vParam1 };
	vVar0.z = 0f;
	vVar1 = { *uParam0 - vParam1 };
	vVar1.z = 0f;
	vVar2 = { func_25(0f, 0f, 1f, vVar0) };
	vVar2 = { vVar2 / FtoV(system::vmag(vVar2)) };
	fVar3 = (system::vmag(vVar1) * system::sin(unk_0xAF3D7D969F2C195C(vVar0.x, vVar0.y, vVar1.x, vVar1.y)));
	if (fVar3 < (fParam3 * 0,5f))
	{
		if (!bParam5)
		{
			if (func_24(vVar2, vVar1) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fParam3 * 0,5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fParam3 * 0,5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_24(vVar2, vVar1) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fParam3 * 0,5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fParam3 * 0,5f) + fVar3) + fParam4)) };
		}
		vVar4 = { *uParam0 + vVar2 };
		fVar6 = system::vdist(vParam1.x, vParam1.y, 0f, vParam2.x, vParam2.y, 0f);
		vVar7 = { vParam1 + vParam2 / Vector(2f, 2f, 2f) };
		vVar7.z = 0f;
		vVar2 = { func_25(0f, 0f, 1f, vVar0) };
		vVar2 = { vVar2 / FtoV(system::vmag(vVar2)) };
		vVar2 = { vVar2 * FtoV((fParam3 * 0,5f)) };
		vVar8 = { vVar7 - vVar2 };
		vVar9 = { vVar7 + vVar2 };
		vVar10 = { vVar9 - vVar8 };
		vVar10.z = 0f;
		vVar11 = { *uParam0 - vVar8 };
		vVar11.z = 0f;
		vVar2 = { func_25(0f, 0f, 1f, vVar10) };
		vVar2 = { vVar2 / FtoV(system::vmag(vVar2)) };
		fVar3 = (system::vmag(vVar11) * system::sin(unk_0xAF3D7D969F2C195C(vVar10.x, vVar10.y, vVar11.x, vVar11.y)));
		if (!bParam5)
		{
			if (func_24(vVar2, vVar11) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fVar6 * 0,5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fVar6 * 0,5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_24(vVar2, vVar11) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fVar6 * 0,5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fVar6 * 0,5f) + fVar3) + fParam4)) };
		}
		vVar5 = { *uParam0 + vVar2 };
		if (system::vdist(vVar4, *uParam0, uParam0->f_1, 0f) < system::vdist(vVar5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar4 };
		}
		else
		{
			*uParam0 = { vVar5 };
		}
	}
}

float func_24(vector3 vParam0, vector3 vParam1)//Position - 0x20CD
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_25(vector3 vParam0, vector3 vParam1)//Position - 0x20EE
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

bool func_26(vector3 vParam0, var uParam1)//Position - 0x2127
{
	return unk_0x8AE9E5E8F6DC40C9(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, true);
}

int func_27(struct<2> Param0, var uParam1)//Position - 0x2147
{
	if (Param0.f_1 > Global_2411047[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411047[1])
	{
		if (Param0 < Global_2411051[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411047[2])
	{
		if (Param0 < Global_2411051[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411051[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411051[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_28(vector3 vParam0, float fParam1)//Position - 0x21E2
{
	int iVar0;
	
	if (func_38(unk_0x9EB17624F44A8DA4(), 1))
	{
		if (Global_4456448.f_54288 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_54288)
			{
				if (Global_4456448.f_54289[iVar0 /*71*/].f_7 != 0)
				{
					if (func_29(vParam0, Global_4456448.f_54289[iVar0 /*71*/], Global_4456448.f_54289[iVar0 /*71*/].f_6, Global_4456448.f_54289[iVar0 /*71*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_51079 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_51079)
			{
				if (Global_4456448.f_51082[iVar0 /*130*/].f_16 != 0)
				{
					if (func_29(vParam0, Global_4456448.f_51082[iVar0 /*130*/], Global_4456448.f_51082[iVar0 /*130*/].f_3, Global_4456448.f_51082[iVar0 /*130*/].f_16, 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_71947 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_71947)
			{
				if (Global_4456448.f_71951[iVar0 /*213*/].f_12 != 0)
				{
					if (func_29(vParam0, Global_4456448.f_71951[iVar0 /*213*/], Global_4456448.f_71951[iVar0 /*213*/].f_3, Global_4456448.f_71951[iVar0 /*213*/].f_12, 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_29(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)//Position - 0x236B
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (system::vdist(vParam0, vParam1) < func_37(iParam3, 1008981770))
	{
		func_30(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, vVar0, vVar1, fVar2, 0, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_30(vector3 vParam0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)//Position - 0x23BE
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 1f, 0f };
	func_36(&vVar0, 0f, 0f, fParam1);
	vVar0 = { vVar0 / FtoV(system::vmag(vVar0)) };
	func_31(iParam2, &vVar1, &vVar2, 1086324736, 1080033280, 1077936128);
	vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
	vVar3.z = (vVar3.z - ((0,5f * unk_0xE97272C977DEADD3((vVar2.z - vVar1.z))) + fParam6));
	vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
	vVar4.z = (vVar4.z + ((0,5f * unk_0xE97272C977DEADD3((vVar2.z - vVar1.z))) + fParam6));
	*uParam3 = { vVar3 };
	*uParam4 = { vVar4 };
	*uParam5 = unk_0xE97272C977DEADD3((vVar2.x - vVar1.x));
}

void func_31(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x248A
{
	int iVar0;
	
	if (unk_0x3B0047CED068C463(iParam0))
	{
		unk_0x04FE252E98FAA4C3(iParam0, fParam1, fParam2);
	}
	else
	{
		iVar0 = func_34(iParam0);
		if (iVar0 != 0)
		{
			func_32(iVar0, fParam1, fParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (system::vmag(*fParam1) <= 0,01f || system::vmag(*fParam2) <= 0,01f)
	{
		*fParam1 = (0f - (fParam4 * 0,5f));
		*fParam2 = (0f + (fParam4 * 0,5f));
		fParam1->f_1 = (0f - (fParam3 * 0,5f));
		fParam2->f_1 = (0f + (fParam3 * 0,5f));
		fParam1->f_2 = (0f - (fParam5 * 0,5f));
		fParam2->f_2 = (0f + (fParam5 * 0,5f));
	}
}

void func_32(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x2549
{
	int iVar0;
	
	func_33(iParam0, &Global_1315788);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x3B0047CED068C463(Global_1315788[iVar0]))
		{
			unk_0x04FE252E98FAA4C3(Global_1315788[iVar0], &(Global_1315792[iVar0 /*3*/]), &(Global_1315799[iVar0 /*3*/]));
		}
		if (system::vmag(Global_1315792[iVar0 /*3*/]) <= 0,01f || system::vmag(Global_1315799[iVar0 /*3*/]) <= 0,01f)
		{
			Global_1315792[iVar0 /*3*/] = (0f - (fParam4 * 0,5f));
			Global_1315799[iVar0 /*3*/] = (0f + (fParam4 * 0,5f));
			Global_1315792[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0,5f));
			Global_1315799[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0,5f));
			Global_1315792[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0,5f));
			Global_1315799[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0,5f));
		}
		Global_1315806[iVar0] = (Global_1315799[iVar0 /*3*/] - Global_1315792[iVar0 /*3*/]);
		Global_1315809[iVar0] = (Global_1315799[iVar0 /*3*/].f_1 - Global_1315792[iVar0 /*3*/].f_1);
		Global_1315812[iVar0] = (Global_1315799[iVar0 /*3*/].f_2 - Global_1315792[iVar0 /*3*/].f_2);
		if (Global_1315806[iVar0] > Global_1315815)
		{
			Global_1315815 = Global_1315806[iVar0];
		}
		if (Global_1315812[iVar0] > Global_1315816)
		{
			Global_1315816 = Global_1315812[iVar0];
		}
		iVar0++;
	}
	Global_1315817 = (Global_1315815 * -0,5f);
	Global_1315820 = (Global_1315815 * 0,5f);
	Global_1315817.f_1 = ((((0,5f * Global_1315809[0]) + Global_1315809[1]) + Global_1315788.f_3) * -1f);
	Global_1315820.f_1 = (0,5f * Global_1315809[0]);
	Global_1315817.f_2 = (Global_1315812[0] * -0,5f);
	Global_1315820.f_2 = (Global_1315812[0] * 0,5f);
	*fParam1 = { Global_1315817 };
	*fParam2 = { Global_1315820 };
}

void func_33(int iParam0, var uParam1)//Position - 0x2755
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = 387748548;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2,6f;
			break;
		
		case 2:
			(*uParam1)[0] = 177270108;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2,6f;
			break;
		
		case 3:
			(*uParam1)[0] = 433954513;
			(*uParam1)[1] = -1881846085;
			uParam1->f_3 = 0,5f;
			break;
	}
}

int func_34(int iParam0)//Position - 0x27D6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_35(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_35(int iParam0)//Position - 0x2805
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_36(var uParam0, vector3 vParam1)//Position - 0x2817
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = system::cos(vParam1.x);
	fVar1 = system::sin(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = system::cos(vParam1.y);
	fVar1 = system::sin(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = system::cos(vParam1.z);
	fVar1 = system::sin(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

float func_37(int iParam0, float fParam1)//Position - 0x28EE
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_31(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	vVar2 = { vVar1 - vVar0 };
	fVar3 = (system::sqrt(((((vVar2.x * 0,5f) * (vVar2.x * 0,5f)) + ((vVar2.y * 0,5f) * (vVar2.y * 0,5f))) + ((vVar2.z * 0,5f) * (vVar2.z * 0,5f)))) + fParam1);
	return fVar3;
}

int func_38(int iParam0, bool bParam1)//Position - 0x296E
{
	if (bParam1)
	{
		if (func_39(iParam0))
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

bool func_39(int iParam0)//Position - 0x299A
{
	return func_40(iParam0);
}

bool func_40(int iParam0)//Position - 0x29A8
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

int func_41(vector3 vParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x29C2
{
	int iVar0;
	bool bVar1;
	
	if (func_54(vParam0))
	{
		if (func_53(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_44(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_43(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (system::vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_42(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

void func_42(var uParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4, float fParam5)//Position - 0x2A7E
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (system::vmag(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(system::vmag(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_36(&vVar0, 0f, 0f, unk_0x5B811202FCBE9E9D(0f, 360f));
		}
		else
		{
			func_36(&vVar0, 0f, 0f, fParam5);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		vVar1 = { vParam1 + vVar0 };
	}
	else
	{
		vVar1 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar1.x;
	uParam0->f_1 = vVar1.y;
}

int func_43(vector3 vParam0, float fParam1)//Position - 0x2B26
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (system::vdist(vParam0, Global_2405047.f_2695[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_44(var uParam0, bool bParam1, bool bParam2)//Position - 0x2B61
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_49(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_46(&vVar2, &(Global_2405047.f_361[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_49(vVar2, &uVar1) || func_45(vVar2))
			{
				vVar2 = { *uParam0 };
				func_46(&vVar2, &(Global_2405047.f_361[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_45(vector3 vParam0)//Position - 0x2BE5
{
	float fVar0;
	
	if (Global_2405047.f_577 > 0f)
	{
		fVar0 = system::vdist(vParam0, Global_2405047.f_574);
		if (fVar0 < Global_2405047.f_577)
		{
			return 1;
		}
	}
	return 0;
}

void func_46(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x2C1E
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_48(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405047.f_2693) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_48(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_48(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_42(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405047.f_2693) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_47(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_23(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_47(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)//Position - 0x2D28
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	vVar0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	vVar0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				vVar0.x = (Param1 - fParam5);
			}
			else
			{
				vVar0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			vVar0.y = (Param1.f_1 - fParam5);
		}
		else
		{
			vVar0.y = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			vVar0.x = (Param3 + fParam5);
		}
		else
		{
			vVar0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		vVar0.y = (Param3.f_1 + fParam5);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam5);
	}
	*uParam0 = { vVar0 };
}

Vector3 func_48(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, bool bParam6)//Position - 0x2E27
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam4)
	{
		case 0:
			func_42(&vParam0, vParam1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_47(&vParam0, vParam1, vParam2, fParam5, bParam6);
			break;
		
		case 2:
			func_23(&vParam0, vParam1, vParam2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x49A7AD0000D6AF17(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_147(vVar1, vParam1, fParam3, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_61(vVar1, vParam1, vParam2, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!unk_0x8AE9E5E8F6DC40C9(vVar1, vParam1, vParam2, fParam3, 0, true))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_49(vector3 vParam0, var uParam1)//Position - 0x2F2A
{
	int iVar0;
	int iVar1;
	
	if (func_52())
	{
		return 0;
	}
	iVar1 = func_51();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405047.f_361[iVar0 /*12*/].f_9 == 1)
		{
			if (func_50(vParam0, &(Global_2405047.f_361[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_50(vector3 vParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x2F8E
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_147(vParam0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2405047.f_2693) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_61(vParam0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return unk_0x8AE9E5E8F6DC40C9(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false);
			}
			else if (bParam3)
			{
				if (unk_0x8AE9E5E8F6DC40C9(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false) && !(vParam0.z < uParam1->f_2 && vParam0.z < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (unk_0x8AE9E5E8F6DC40C9(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false) && !(vParam0.z > uParam1->f_2 && vParam0.z > uParam1->f_3.f_2))
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
				return unk_0x8AE9E5E8F6DC40C9(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, true);
			}
			break;
	}
	return 0;
}

int func_51()//Position - 0x30EF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405047.f_361[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_52()//Position - 0x3122
{
	return Global_1669535.f_28;
}

int func_53(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3130
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2409756[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409756[iVar0 /*17*/].f_16))
			{
				if (func_50(*uParam0, &(Global_2409756[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409756[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409756[iVar0 /*17*/].f_13 };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_46(&vVar1, &(Global_2409756[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_53(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_46(&vVar1, &(Global_2409756[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_54(vector3 vParam0)//Position - 0x320B
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_2405047.f_508 && !Global_2405047.f_509)
	{
		if (!Global_2405047.f_44.f_314)
		{
			if (!func_58(unk_0x9EB17624F44A8DA4(), 1))
			{
				return 1;
			}
			if (!func_57(vParam0, 1008981770))
			{
				if (!func_53(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_53(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_56(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_55(&(Global_2405047.f_44[iVar0 /*12*/])) };
					if (!func_53(&vVar1, 0, 0, 0, 1))
					{
						if (!func_53(&vParam0, 0, 0, 0, 1))
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

Vector3 func_55(var uParam0)//Position - 0x32CB
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0,5f, 0,5f, 0,5f);
			break;
	}
	return *uParam0;
}

int func_56(vector3 vParam0, float fParam1)//Position - 0x3314
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405047.f_44[iVar0 /*12*/].f_9)
		{
			if (func_50(vParam0, &(Global_2405047.f_44[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_57(vector3 vParam0, float fParam1)//Position - 0x335C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405047.f_44[iVar0 /*12*/].f_9)
		{
			if (func_50(vParam0, &(Global_2405047.f_44[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_58(int iParam0, bool bParam1)//Position - 0x33A3
{
	if (Global_1312447 != 0)
	{
		return func_59(iParam0) != 0;
	}
	return func_38(iParam0, bParam1);
}

int func_59(int iParam0)//Position - 0x33C9
{
	if (func_991(iParam0, 0, 1))
	{
		return Global_2422736[iParam0 /*420*/].f_1;
	}
	return 0;
}

int func_60(vector3 vParam0, var uParam1)//Position - 0x33EB
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999,9f;
	if (Global_2405047.f_2229 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405047.f_2229)
		{
			fVar3 = system::vdist(Global_2405047.f_2230[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam1 = { Global_2405047.f_2230[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_61(vector3 vParam0, vector3 vParam1, vector3 vParam2, bool bParam3, bool bParam4)//Position - 0x3465
{
	func_62(&vParam1, &vParam2);
	if (((!vParam0.x >= vParam1.x || !vParam0.y >= vParam1.y) || !vParam0.x <= vParam2.x) || !vParam0.y <= vParam2.y)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (vParam0.z >= vParam1.z)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (vParam0.z <= vParam2.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam1.z && vParam0.z <= vParam2.z)
	{
		return 1;
	}
	return 0;
}

void func_62(var uParam0, var uParam1)//Position - 0x3510
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_63(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x3572
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (vParam0.x > vParam1.x)
	{
		vVar1.x = vParam0.x;
		vVar0.x = vParam1.x;
	}
	else
	{
		vVar1.x = vParam1.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam1.y)
	{
		vVar1.y = vParam0.y;
		vVar0.y = vParam1.y;
	}
	else
	{
		vVar1.y = vParam1.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam1.z)
	{
		vVar1.z = vParam0.z;
		vVar0.z = vParam1.z;
	}
	else
	{
		vVar1.z = vParam1.z;
		vVar0.z = vParam0.z;
	}
	if (system::vmag(vVar1 - vVar0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_64(float fParam0)//Position - 0x361D
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_65(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x3635
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_2405047.f_2458.f_1 == 0 && Global_2405047.f_2458 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x22D98A042592706D(&(Global_2405047.f_2458.f_1)))
			{
				case 0:
					func_139(uParam1, uParam2);
					if (!Global_2405047.f_2458.f_2)
					{
						if (uParam2->f_7 && Global_2405047.f_539.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2405047.f_2433 };
							}
							if (uParam1->f_5 && func_17(Global_2405047.f_482))
							{
								if (!Global_2405047.f_2458.f_5)
								{
									Global_2405047.f_2458.f_5 = 1;
								}
								else
								{
									func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_18(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = unk_0x5B811202FCBE9E9D(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_139(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0x1A1094F3B2B73324())
		{
			if (!unk_0x998311CC2C553D30())
			{
				if (unk_0x63B0243EB1873848())
				{
					func_139(uParam1, uParam2);
					Global_2405047.f_2458.f_1 = unk_0x90740CF1CC0202BB();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x4D1DF3388A933CF8();
				func_139(uParam1, uParam2);
				if (!Global_2405047.f_2458.f_2)
				{
					Global_2405047.f_2458.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_136(Global_2405047.f_539, &(Global_2405047.f_2458.f_52), &(Global_2405047.f_2458.f_85));
	}
	if (uParam2->f_7 && !Global_2405047.f_2458.f_4)
	{
		Global_2405047.f_2458.f_4 = 1;
		func_73(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2405047.f_2458.f_1 > 0 || Global_2405047.f_2458 > 0)
	{
		if (uParam1->f_5 || unk_0x1A1094F3B2B73324())
		{
			iVar2 = 0;
			while (iVar2 < Global_2405047.f_2458.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2405047.f_2458.f_3)
					{
						iVar2 = Global_2405047.f_2458.f_3 + 1;
					}
					if (iVar2 > (Global_2405047.f_2458.f_1 - 1))
					{
						iVar2 = (Global_2405047.f_2458.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0xEA80F1CF460B38B7(iVar2, &vVar0, &fVar1);
						fVar1 = (fVar1 * 57,29578f);
					}
					else
					{
						unk_0x8808EFD99B7C618E(iVar2, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = unk_0x5CBCFAA65C2870A1(iVar2);
					}
					else
					{
						unk_0xC8B6E30ABF9D63FC(iVar2, &iVar3);
					}
					func_73(vVar0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2405047.f_2458.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2405047.f_2458.f_1;
		}
		if (Global_2405047.f_2458.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2405047.f_2847)
			{
				func_67(&(Global_2405047.f_2458.f_6[0 /*9*/]), &(Global_2405047.f_2458.f_6[1 /*9*/]), &(Global_2405047.f_2458.f_6[2 /*9*/]));
			}
			if (uParam1->f_5 && func_17(Global_2405047.f_482))
			{
				if (Global_2405047.f_2458.f_2)
				{
					func_16(uParam0, &(Global_2405047.f_2458.f_6));
					func_66(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405047.f_2433 };
					func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x5B811202FCBE9E9D(0f, 360f);
					func_66(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405047.f_2458.f_2)
			{
				func_16(uParam0, &(Global_2405047.f_2458.f_6));
				func_66(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = unk_0x63A6486593EC7EC3(0, Global_2405047.f_2458.f_1);
				unk_0xEA80F1CF460B38B7(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_22(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57,29578f);
					func_66(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405047.f_2433 };
					func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x5B811202FCBE9E9D(0f, 360f);
					func_66(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405047.f_2433 };
				func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0x5B811202FCBE9E9D(0f, 360f);
				func_66(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405047.f_2433 };
		if (uParam1->f_5 && func_17(Global_2405047.f_482))
		{
			if (!Global_2405047.f_2458.f_5)
			{
				Global_2405047.f_2458.f_5 = 1;
			}
			else
			{
				func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_18(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = unk_0x5B811202FCBE9E9D(0f, 360f);
		func_66(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_66(vector3 vParam0)//Position - 0x3BFC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405047.f_2587[(3 - iVar0) /*3*/] = { Global_2405047.f_2587[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405047.f_2587[0 /*3*/] = { vParam0 };
}

void func_67(var uParam0, var uParam1, var uParam2)//Position - 0x3C4C
{
	if (func_17(Global_2405047.f_482) && func_72() < 4096)
	{
		func_71(uParam0, 0f);
		func_71(uParam1, uParam0->f_2);
		func_71(uParam2, uParam1->f_2);
	}
	else
	{
		func_70(uParam0);
		func_69(uParam2, uParam0->f_4);
		func_68(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_68(var uParam0, vector3 vParam1, vector3 vParam2)//Position - 0x3CB1
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > 0)
		{
			fVar2 = system::vdist(Global_2407922[iVar0 /*9*/].f_4, vParam1);
			fVar3 = system::vdist(Global_2407922[iVar0 /*9*/].f_4, vParam2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407922[iVar0 /*9*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407922[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_69(var uParam0, vector3 vParam1)//Position - 0x3D50
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<9> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > 0)
		{
			fVar2 = system::vdist(Global_2407922[iVar0 /*9*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_2407922[iVar0 /*9*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407922[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_70(var uParam0)//Position - 0x3DD2
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > 0)
		{
			if (Global_2407922[iVar0 /*9*/].f_1 > fVar1)
			{
				fVar1 = Global_2407922[iVar0 /*9*/].f_1;
				Var2 = { Global_2407922[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_71(var uParam0, float fParam1)//Position - 0x3E3F
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = 999999,9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > 0)
		{
			if (Global_2407922[iVar0 /*9*/].f_2 < fVar1 && Global_2407922[iVar0 /*9*/].f_2 > fParam1)
			{
				fVar1 = Global_2407922[iVar0 /*9*/].f_2;
				Var2 = { Global_2407922[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_72()//Position - 0x3EC2
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > iVar1)
		{
			iVar1 = Global_2407922[iVar0 /*9*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_73(vector3 vParam0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x3EF9
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	vector3 vVar11;
	bool bVar12;
	int iVar13;
	vector3 vVar14;
	vector3 vVar15;
	float fVar16;
	int iVar17;
	struct<9> Var18;
	bool bVar19;
	bool bVar20;
	
	iVar9 = 0;
	iVar7 = 0;
	bVar8 = false;
	if (uParam2->f_5)
	{
		if (Global_2405047.f_482 == 1)
		{
			if (unk_0xE97272C977DEADD3((Global_2405047.f_505.f_2 - vParam0.z)) < 25f)
			{
				iVar7++;
			}
		}
		else
		{
			iVar7++;
		}
	}
	else
	{
		iVar7++;
	}
	if (uParam2->f_5)
	{
		if (func_132(unk_0x9EB17624F44A8DA4()))
		{
			if (iParam5 == -1)
			{
				bVar8 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar8 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar7 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar7 += 2;
		}
	}
	else
	{
		iVar7 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_131(vParam0, 1084227584, 1123024896, 0))
		{
			iVar7 += 4;
		}
	}
	else
	{
		iVar7 += 4;
	}
	if (uParam2->f_5)
	{
		if (!unk_0x15BCAEC850B1E33D(unk_0xFC1458A37D98B502(), vParam0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x15BCAEC850B1E33D(unk_0xFC1458A37D98B502(), vParam0, 20f))
		{
			iVar7 += 8;
		}
	}
	else
	{
		iVar7 += 8;
		iVar7 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_130(vParam0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar7 += 32;
		}
	}
	else
	{
		iVar7 += 32;
	}
	bVar12 = true;
	iVar10 = 0;
	while (iVar10 < 2)
	{
		if (system::vmag(uParam3->f_13[iVar10 /*3*/]) > 0f)
		{
			if (!system::vdist(vParam0, uParam3->f_13[iVar10 /*3*/]) > uParam3->f_20[iVar10])
			{
				bVar12 = false;
			}
		}
		iVar10++;
	}
	if (bVar12)
	{
		iVar7 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_124(vParam0, fParam1, uParam2->f_15, func_129(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2405047.f_3;
		}
	}
	else if (!func_121(vParam0, 25f, unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3,5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_117(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_117(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405047.f_674)
		{
			vVar11 = { Global_2405047.f_505 };
			if (Global_2405047.f_482 == 26)
			{
				vVar11 = { Global_2405047.f_539.f_18 };
			}
			if (!func_43(vParam0, 0,5f))
			{
				if (func_54(vVar11))
				{
					if (!func_53(&vParam0, 0, 0, 0, 1) && !func_116(&vParam0, 0))
					{
						iVar7 += 512;
					}
				}
				else if (!func_116(&vParam0, 0))
				{
					iVar7 += 512;
				}
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_115(vParam0, 2,5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_114(unk_0x9EB17624F44A8DA4()) && func_112(unk_0x9EB17624F44A8DA4())))
		{
			if (!func_111(&vParam0, &(Global_2405047.f_2458.f_85), 0, 1065353216))
			{
				iVar7 += 1024;
			}
		}
		else
		{
			iVar7 += 1024;
		}
	}
	else
	{
		iVar7 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_112(unk_0x9EB17624F44A8DA4()))
		{
			if (!func_110(vParam0, &(Global_2405047.f_2458.f_52), &(Global_2405047.f_2458.f_85), 1073741824))
			{
				iVar7 += 2048;
			}
		}
		else
		{
			iVar7 += 2048;
		}
	}
	else
	{
		iVar7 += 2048;
	}
	if (func_109(vParam0))
	{
		if (uParam2->f_5)
		{
			if (func_17(Global_2405047.f_482))
			{
				if (func_57(vParam0, 0,01f))
				{
					iVar7 += 4096;
				}
			}
			else
			{
				iVar7 += 4096;
			}
		}
		else
		{
			iVar7 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_108(vParam0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2405047.f_44.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (unk_0x2C2E1E35924B9FF2(unk_0xD3BB1A515B0A47F3(vParam0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (unk_0x2C2E1E35924B9FF2(unk_0xD3BB1A515B0A47F3(vParam0)))
		{
			iVar7 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405047.f_674)
		{
			if (!func_44(&vParam0, 0, 0))
			{
				iVar7 = (iVar7 + 32768);
			}
		}
		else
		{
			iVar7 = (iVar7 + 32768);
		}
	}
	else
	{
		iVar7 = (iVar7 + 32768);
	}
	if (!func_22(&vParam0, 0))
	{
		iVar7 = (iVar7 + 65536);
	}
	else
	{
		iVar13 = func_56(vParam0, 1008981770);
		if (iVar13 > -1)
		{
			func_107(vParam0, &vVar14, &vVar15, &fVar16);
			if (!func_102(&(Global_2405047.f_44[iVar13 /*12*/]), vVar14, vVar15, fVar16))
			{
				iVar7 = -1;
			}
		}
		else
		{
			iVar7 = -1;
		}
	}
	if (func_28(vParam0, 1056964608))
	{
		iVar7 = -1;
	}
	if (uParam2->f_5)
	{
	}
	else if (func_101(vParam0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var18.f_2 = 1176256410;
	bVar19 = false;
	bVar20 = false;
	if (Global_2405047.f_2847 && uParam2->f_5)
	{
		if (iVar7 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = func_93(vParam0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar9, &(Var18.f_8));
			}
			else
			{
				fVar0 = func_93(vParam0, Global_2405047.f_2433, uParam3->f_6, uParam3->f_4, bVar4, iVar9, &(Var18.f_8));
			}
			if (bVar8)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_17(Global_2405047.f_482) && iVar7 < 4096)
			{
				Var18.f_2 = func_91(vParam0);
			}
			Var18.f_4 = { vParam0 };
			Var18.f_7 = fParam1;
			Var18 = iVar7;
			Var18.f_1 = fVar0;
			func_90(Var18);
			Global_2405047.f_2458.f_2 = 1;
		}
	}
	else
	{
		iVar17 = 0;
		while (iVar17 < 5)
		{
			if (iVar7 >= Global_2405047.f_2458.f_6[iVar17 /*9*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar19)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = func_93(vParam0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar9, &(Var18.f_8));
						}
						else
						{
							fVar0 = func_93(vParam0, Global_2405047.f_2433, uParam3->f_6, uParam3->f_4, bVar4, iVar9, &(Var18.f_8));
						}
						if (bVar8)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar19 = true;
					}
					if ((func_17(Global_2405047.f_482) && iVar7 == Global_2405047.f_2458.f_6[iVar17 /*9*/]) && iVar7 < 4096)
					{
						if (!bVar20)
						{
							fVar2 = func_91(vParam0);
							bVar20 = true;
						}
						if (fVar2 < Global_2405047.f_2458.f_6[iVar17 /*9*/].f_2)
						{
							Var18.f_4 = { vParam0 };
							Var18.f_7 = fParam1;
							Var18 = iVar7;
							Var18.f_1 = fVar0;
							Var18.f_2 = fVar2;
							func_89(Var18, iVar17);
							Global_2405047.f_2458.f_2 = 1;
							return;
						}
					}
					else if (iVar7 > Global_2405047.f_2458.f_6[iVar17 /*9*/] || (iVar7 == Global_2405047.f_2458.f_6[iVar17 /*9*/] && fVar0 > Global_2405047.f_2458.f_6[iVar17 /*9*/].f_1))
					{
						Var18.f_4 = { vParam0 };
						Var18.f_7 = fParam1;
						Var18 = iVar7;
						Var18.f_1 = fVar0;
						func_89(Var18, iVar17);
						Global_2405047.f_2458.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar19)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3,5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_88(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_75(vParam0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_74(fVar5, 0f, 80f, 160f, 1f, 1,2f);
						}
						else
						{
							fVar3 = func_74(fVar6, 0f, 80f, 160f, 0f, 0,2f);
						}
						bVar19 = true;
					}
					if (iVar7 > Global_2405047.f_2458.f_6[iVar17 /*9*/] || (iVar7 == Global_2405047.f_2458.f_6[iVar17 /*9*/] && fVar3 > Global_2405047.f_2458.f_6[iVar17 /*9*/].f_3))
					{
						Var18.f_4 = { vParam0 };
						Var18.f_7 = fParam1;
						Var18 = iVar7;
						Var18.f_3 = fVar3;
						func_89(Var18, iVar17);
						Global_2405047.f_2458.f_2 = 1;
						return;
					}
				}
			}
			iVar17++;
		}
	}
}

float func_74(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x4812
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0,5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_75(vector3 vParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x48B0
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	fVar3 = 999999,9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_991(iVar7, 1, 1))
		{
			if (!iVar7 == unk_0x9EB17624F44A8DA4() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_78(iVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (unk_0x917EE18109C5ACEA(iVar7) == unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))
					{
						if (!unk_0x917EE18109C5ACEA(iVar7) == -1 || !func_58(unk_0x9EB17624F44A8DA4(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar7) || !bParam4)
					{
						if (func_77(iVar7))
						{
							vVar5 = { func_76(iVar7) };
							if (!iVar7 == unk_0x9EB17624F44A8DA4())
							{
								vVar6 = { unk_0xC2E51FC090040CBB(unk_0x25D049AAC4603E65(iVar7)) };
							}
							else
							{
								vVar6 = { vVar5 };
							}
							if (!bParam4)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar6.z < -100f)
								{
									vVar6.z = vParam0.z;
								}
							}
							fVar1 = unk_0xBE3C4023003180FC(vParam0, vVar5, true);
							fVar2 = unk_0xBE3C4023003180FC(vParam0, vVar6, true);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

Vector3 func_76(int iParam0)//Position - 0x49FC
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

int func_77(int iParam0)//Position - 0x4A0F
{
	if (unk_0xCF308053A6212001(unk_0x25D049AAC4603E65(iParam0)) || Global_2422736[iParam0 /*420*/].f_260)
	{
		return 1;
	}
	return 0;
}

int func_78(int iParam0)//Position - 0x4A3B
{
	if (func_991(iParam0, 0, 1))
	{
		if (!func_86(iParam0))
		{
			if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iParam0))
			{
				if (!unk_0x917EE18109C5ACEA(iParam0) == unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))
				{
					if (func_38(unk_0x9EB17624F44A8DA4(), 1))
					{
						if (!func_85(unk_0x917EE18109C5ACEA(iParam0), unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x917EE18109C5ACEA(iParam0) == -1 && unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
				{
					if (!func_38(unk_0x9EB17624F44A8DA4(), 1))
					{
						if (!func_79(iParam0))
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
		}
	}
	return 0;
}

int func_79(int iParam0)//Position - 0x4AE6
{
	if (func_84(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	Global_2492157 = { func_83(iParam0) };
	if (unk_0xFFE9B6D8F03AC353(&Global_2492157))
	{
		return 1;
	}
	if (func_80(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_80(int iParam0, int iParam1)//Position - 0x4B2D
{
	int iVar0;
	
	iVar0 = func_82(iParam0);
	if (!iVar0 == func_81())
	{
		if (iVar0 == func_82(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_81()//Position - 0x4B58
{
	return -1;
}

int func_82(int iParam0)//Position - 0x4B61
{
	if (iParam0 != func_81())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_81();
}

struct<13> func_83(int iParam0)//Position - 0x4B84
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

int func_84(int iParam0, int iParam1)//Position - 0x4B9B
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		Global_2492157 = { func_83(iParam0) };
		Global_2492170 = { func_83(iParam1) };
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

int func_85(int iParam0, int iParam1, int iParam2)//Position - 0x4C08
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

int func_86(int iParam0)//Position - 0x4DD3
{
	if (func_144(iParam0, 0))
	{
		return 1;
	}
	if (func_87())
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

bool func_87()//Position - 0x4E15
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

float func_88(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x4E26
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_991(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (!unk_0x3E9CABD07B829173())
			{
				if (unk_0x9E06F0EE20F58CED(vParam0, fParam1))
				{
					fVar4 = system::vdist2(vParam0, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_991(iVar1, 1, 1))
		{
			if (!func_144(iVar1, 0) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x9EB17624F44A8DA4()))
				{
					if (func_77(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x917EE18109C5ACEA(iVar1) != unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))) || unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
								{
									fVar4 = system::vdist2(vParam0, unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x917EE18109C5ACEA(iVar1) != iParam5 || unk_0x917EE18109C5ACEA(iVar1) == -1)
						{
							if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
							{
								fVar4 = system::vdist2(vParam0, unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return system::sqrt(fVar3);
	}
	return -1f;
}

void func_89(struct<9> Param0, int iParam1)//Position - 0x4FBD
{
	struct<9> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405047.f_2458.f_6[iParam1 /*9*/] };
	Global_2405047.f_2458.f_6[iParam1 /*9*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_89(Var0, iParam1 + 1);
	}
}

void func_90(struct<9> Param0)//Position - 0x500F
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_72();
	if (Param0 > iVar2)
	{
		iVar2 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] < iVar2)
		{
			Global_2407922[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] == 0)
		{
			Global_2407922[iVar0 /*9*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999,9f;
	iVar4 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > 0)
		{
			if (Global_2407922[iVar0 /*9*/].f_1 < fVar3)
			{
				fVar3 = Global_2407922[iVar0 /*9*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > -1)
	{
		Global_2407922[iVar4 /*9*/] = { Param0 };
	}
}

float func_91(vector3 vParam0)//Position - 0x5103
{
	var uVar0;
	
	return func_92(vParam0, &(Global_2405047.f_44), &uVar0);
}

float func_92(vector3 vParam0, var uParam1, var uParam2)//Position - 0x511B
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = system::vdist(*(uParam1[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405047.f_2693) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (vParam0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_93(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)//Position - 0x5297
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (system::to_float(iParam5) / system::to_float(8));
	}
	if (bParam2)
	{
		fVar0 = func_74(system::vdist(vParam0, vParam1), 0f, 0f, 200f, 1f, 0,1f);
		fVar1 = (fVar1 * (fVar0 * 0,95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_75(vParam0, 1, 0, 0, 1);
	fVar0 = func_74(fVar4, 0f, func_100(), func_98(), 0f, 0,3f);
	fVar1 = (fVar1 * (fVar0 * 0,95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_96(vParam0);
	fVar0 = func_74(fVar4, 0f, 0f, 60f, 0,5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0,95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && !func_58(unk_0x9EB17624F44A8DA4(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_95(vParam0, unk_0x9EB17624F44A8DA4(), 0);
	fVar0 = func_74(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0,95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_94(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0,5f)
			{
				fVar3 = 0,5f;
			}
			fVar0 = func_74(fVar2, 0f, 0f, 200f, 1f, 0,1f);
			fVar0 = (fVar0 + func_74(fVar3, 0f, 0f, 6f, 1f, 0,5f));
			fVar0 = (fVar0 * 0,5f);
			fVar1 = (fVar1 * (fVar0 * 0,85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_74(system::vdist(Global_2405047.f_505, vParam0), 0f, 100f, 200f, 0,1f, 0,1f);
		fVar1 = (fVar1 * (fVar0 * 0,9f));
	}
	return fVar1;
}

int func_94(vector3 vParam0, var uParam1, var uParam2)//Position - 0x547D
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = unk_0xC35B067544C496CB(vParam0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (unk_0x415CDAC83972AD02(iVar1))
	{
		unk_0x52854081FE5E271E(iVar1, &vVar0);
		*uParam1 = system::vdist(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam2 = unk_0xE97272C977DEADD3((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_95(vector3 vParam0, int iParam1, int iParam2)//Position - 0x54D6
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999,9f;
	if (func_991(iParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (func_991(iVar3, 0, 1))
				{
					if (unk_0x917EE18109C5ACEA(iVar3) != unk_0x917EE18109C5ACEA(iParam1) || (unk_0x917EE18109C5ACEA(iVar3) == -1 && unk_0x917EE18109C5ACEA(iParam1) == -1))
					{
						if (Global_2416800.f_261[iVar2])
						{
							fVar1 = system::vdist(Global_2416800.f_131[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_96(vector3 vParam0)//Position - 0x5582
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = unk_0xD1A659E6867D8FF6(unk_0xFC1458A37D98B502(), &uVar4, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (unk_0x6ADD12BF4D6D2587(uVar4[iVar2]))
		{
			if (!unk_0x191BE1BC8F26F3C1(uVar4[iVar2], 0))
			{
				if (func_97(uVar4[iVar2]))
				{
					vVar3 = { unk_0xB3328BA8976B416C(uVar4[iVar2], 1) };
					fVar1 = unk_0xBE3C4023003180FC(vParam0, vVar3, true);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

int func_97(int iParam0)//Position - 0x560F
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x1479B36DFB6174A5(iParam0);
	switch (unk_0x8801269555D2E37F(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0x7FC5297E8F508B26(Global_1574725[unk_0x9EB17624F44A8DA4()]))
	{
		switch (unk_0x8801269555D2E37F(iVar0, Global_1574725[unk_0x9EB17624F44A8DA4()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 0)
	{
		iVar1 = unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0x7FC5297E8F508B26(Global_1574436[iVar1]))
			{
				switch (unk_0x8801269555D2E37F(iVar0, Global_1574436[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_98()//Position - 0x56DA
{
	if (func_99())
	{
		if ((unk_0x849A8CFD71854E02(Global_2405047.f_44.f_67) || unk_0xF9DDB1C0875FD9E0(Global_2405047.f_44.f_67)) || Global_2405047.f_44.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_99()//Position - 0x5736
{
	if (Global_2405047.f_44.f_65 && !Global_2405047.f_44.f_301)
	{
		if (!func_86(unk_0x9EB17624F44A8DA4()))
		{
			return 1;
		}
	}
	return 0;
}

float func_100()//Position - 0x576C
{
	if (func_99())
	{
		if ((unk_0x849A8CFD71854E02(Global_2405047.f_44.f_67) || unk_0xF9DDB1C0875FD9E0(Global_2405047.f_44.f_67)) || Global_2405047.f_44.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_101(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)//Position - 0x57C8
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && unk_0x717FFCE23DE4C8C8(vParam0, fParam5)) || (fVar0 > 0f && unk_0x0D3330EAF6340496(vParam0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && unk_0x83A4DE08E23A2F1F(vParam0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && unk_0x83A4DE08E23A2F1F(vParam0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_102(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x5857
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_106(*uParam0, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_105(*uParam0, uParam0->f_3, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_103(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_103(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4, float fParam5)//Position - 0x58E3
{
	vector3 vVar0[8];
	int iVar1;
	
	func_104(vParam0, vParam1, fParam2, &vVar0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x8AE9E5E8F6DC40C9(vVar0[iVar1 /*3*/], vParam3, vParam4, fParam5, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_104(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3)//Position - 0x5935
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	var uVar3;
	
	if (vParam0.z == vParam1.z)
	{
		vParam1.z = (vParam1.z + 0,01f);
	}
	vVar0 = { vParam0 - vParam1 };
	vVar1 = { func_25(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar1 = { vVar1 / FtoV(system::vmag(vVar1)) };
	vVar1 = { vVar1 * FtoV((fParam2 * 0,5f)) };
	if (vParam0.z > vParam1.z)
	{
		uVar2 = vParam1.z;
		uVar3 = vParam0.z;
	}
	else
	{
		uVar2 = vParam0.z;
		uVar3 = vParam1.z;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) + vVar1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) + vVar1 };
}

int func_105(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x5A62
{
	vector3 vVar0[8];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam1.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam1.y, vParam1.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam1.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam1.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam1.x, vParam0.y, vParam1.z };
	vVar0[6 /*3*/] = { vParam1.x, vParam1.y, vParam1.z };
	vVar0[7 /*3*/] = { vParam1.x, vParam1.y, vParam0.z };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x8AE9E5E8F6DC40C9(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_106(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x5B2C
{
	vector3 vVar0[4];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam1, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam1), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam1) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!unk_0x8AE9E5E8F6DC40C9(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_107(vector3 vParam0, var uParam1, var uParam2, var uParam3)//Position - 0x5BB0
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { vParam0 };
	iVar2 = func_27(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411037[iVar2])
	{
		if (func_26(vVar1, &(Global_2409893[iVar2 /*127*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2409893[iVar2 /*127*/][iVar0 /*7*/] };
			*uParam2 = { Global_2409893[iVar2 /*127*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2409893[iVar2 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411037[8])
	{
		if (func_26(vVar1, &(Global_2409893[8 /*127*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2409893[8 /*127*/][iVar0 /*7*/] };
			*uParam2 = { Global_2409893[8 /*127*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2409893[8 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_108(vector3 vParam0)//Position - 0x5C9E
{
	int iVar0;
	int iVar1;
	
	if (Global_2405047.f_44.f_55)
	{
		if (unk_0x2C2E1E35924B9FF2(Global_2405047.f_44.f_56))
		{
			if (!unk_0xD42907FA80A6F327(vParam0))
			{
				iVar0 = unk_0xD3BB1A515B0A47F3(vParam0);
				if (unk_0x2C2E1E35924B9FF2(iVar0))
				{
					iVar1 = unk_0x0BD7EF76BF7CFC43(iVar0);
					if (!iVar1 == Global_2405047.f_44.f_57)
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
	}
	return 1;
}

int func_109(vector3 vParam0)//Position - 0x5D09
{
	switch (Global_2405047.f_2454)
	{
		case 0:
			return func_147(vParam0, Global_2405047.f_2433, Global_2405047.f_2436, 0, 0);
			break;
		
		case 1:
			return func_61(vParam0, Global_2405047.f_2447, Global_2405047.f_2450, 0, 0);
			break;
		
		case 2:
			return unk_0x8AE9E5E8F6DC40C9(vParam0, Global_2405047.f_2447, Global_2405047.f_2450, Global_2405047.f_2453, 0, true);
			break;
	}
	return 0;
}

int func_110(vector3 vParam0, var uParam1, var uParam2, float fParam3)//Position - 0x5D9B
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (system::vdist(*(uParam1[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		vVar2 = { *(uParam2[iVar1 /*10*/]) };
		vVar3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, vVar2, vVar3, fVar4, 0, true))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_111(var uParam0, var uParam1, bool bParam2, float fParam3)//Position - 0x5E49
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (system::vdist((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_42(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_112(int iParam0)//Position - 0x5EBC
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_113(iParam0))
			{
				if (Global_1595693[iParam0 /*680*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_113(int iParam0)//Position - 0x5EF2
{
	return Global_1595693[iParam0 /*680*/].f_196 != 0;
}

int func_114(int iParam0)//Position - 0x5F07
{
	if (func_38(iParam0, 1))
	{
		if (Global_1595693[iParam0 /*680*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_115(vector3 vParam0, float fParam1, int iParam2)//Position - 0x5F2B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (system::vdist2(Global_2405047.f_2587[iVar0 /*3*/], vParam0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_116(var uParam0, bool bParam1)//Position - 0x5F69
{
	var uVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_45(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar2 = unk_0x5B811202FCBE9E9D(0,01f, 360f);
			func_42(&vVar1, Global_2405047.f_574, Global_2405047.f_577, 1036831949, 0, fVar2);
			if (func_49(vVar1, &uVar0) || func_45(vVar1))
			{
				vVar1 = { *uParam0 };
				func_42(&vVar1, Global_2405047.f_574, Global_2405047.f_577, 1036831949, 1, fVar2);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_117(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x6001
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_991(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (!unk_0x3E9CABD07B829173())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xBE3C4023003180FC(func_118(unk_0x9EB17624F44A8DA4()), vParam0, true) <= (fVar2 + fParam1))
				{
					if (unk_0x9E06F0EE20F58CED(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_991(iVar1, 1, 1))
		{
			if (!func_144(iVar1, 0) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x9EB17624F44A8DA4()))
				{
					if ((func_77(iVar1) || !bParam8) && !Global_2422736[iVar1 /*420*/].f_274)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0x917EE18109C5ACEA(iVar1) == unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x917EE18109C5ACEA(iVar1) != unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))) || unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0xBE3C4023003180FC(func_118(iVar1), vParam0, true) <= (fVar2 + fParam1))
								{
									if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x917EE18109C5ACEA(iVar1) != iParam6 || unk_0x917EE18109C5ACEA(iVar1) == -1)
						{
							if (unk_0xBE3C4023003180FC(func_118(iVar1), vParam0, true) <= (fVar2 + fParam1))
							{
								if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_118(int iParam0)//Position - 0x61B9
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_120() && Global_1595693[iVar0 /*680*/].f_673) && !func_119(Global_1595693[iVar0 /*680*/].f_674))
	{
		return Global_1595693[iVar0 /*680*/].f_674;
	}
	return func_76(iParam0);
}

int func_119(vector3 vParam0)//Position - 0x620C
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_120()//Position - 0x6236
{
	return Global_2447174.f_16;
}

int func_121(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x6244
{
	if (func_123(vParam0, fParam1, iParam2, iParam3, 0) || func_122(vParam0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_122(vector3 vParam0, int iParam1, int iParam2)//Position - 0x6275
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_29(vParam0, Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_991(iVar2, 0, 1) && func_991(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_123(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x6337
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_991(iVar1, 0, 1) && func_991(iParam2, 0, 1))
				{
					if (unk_0x917EE18109C5ACEA(iVar1) == unk_0x917EE18109C5ACEA(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_991(iVar1, 0, 1) && func_991(iParam2, 0, 1))
				{
					if (Global_2416800.f_261[iVar0])
					{
						if (system::vdist(Global_2416800.f_131[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 1;
						}
					}
					else if (system::vdist(func_76(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2416800.f_261[iVar0])
				{
					if (system::vdist(Global_2416800.f_131[iVar0 /*3*/], vParam0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_991(iVar1, 0, 1))
				{
					if (system::vdist(func_76(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_124(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)//Position - 0x6454
{
	Global_2405047.f_3 = 0;
	if (!func_121(vParam0, 0,5f, unk_0x9EB17624F44A8DA4(), 0, 0))
	{
		Global_2405047.f_3++;
		if (bParam3)
		{
			if (func_172(vParam0, 3,65f, 0,5f, 1,5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
				if (!func_128(vParam0, fParam10))
				{
					Global_2405047.f_3++;
					if (!func_28(vParam0, 1056964608))
					{
						Global_2405047.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_172(vParam0, 3,65f, 0,5f, 1,5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
				if (!func_128(vParam0, fParam10))
				{
					Global_2405047.f_3++;
					if (!func_125(vParam0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_2405047.f_3++;
						if (!func_28(vParam0, 1056964608))
						{
							Global_2405047.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
			}
		}
		else if (func_172(vParam0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
			if (!func_128(vParam0, fParam10))
			{
				Global_2405047.f_3++;
				if (!func_125(vParam0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_2405047.f_3++;
					if (!func_28(vParam0, 1056964608))
					{
						Global_2405047.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
		}
	}
	return 0;
}

int func_125(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x6694
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x9EB17624F44A8DA4() == iVar1)
		{
			if ((func_991(iVar1, 1, 1) && func_77(iVar1)) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
			{
				if (!func_127(unk_0x9EB17624F44A8DA4(), iVar1, -2, 0))
				{
					if (func_126(func_76(iVar1), vParam0, fParam1, fParam2, fParam3, fParam4))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_126(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x6713
{
	vector3 vVar0;
	vector3 vVar1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	vVar0.x = system::sin(fParam2);
	vVar0.y = system::cos(fParam2);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(system::vmag(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam3, fParam3, fParam3) };
	vVar1 = { vParam1 + vVar0 };
	vVar1.z = vParam1.z;
	vVar1.z = (vVar1.z + fParam5);
	vParam1.z = (vParam1.z + fParam5);
	return unk_0x8AE9E5E8F6DC40C9(vParam0, vParam1, vVar1, fParam4, 0, true);
}

bool func_127(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x679F
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

int func_128(vector3 vParam0, float fParam1)//Position - 0x6817
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_991(iVar1, 1, 1) && func_77(iVar1)) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
		{
			if ((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && unk_0x917EE18109C5ACEA(iVar1) == -1) && !func_58(unk_0x9EB17624F44A8DA4(), 1))
			{
				return 0;
			}
			else if ((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && !unk_0x9EB17624F44A8DA4() == iVar1) || !func_127(unk_0x9EB17624F44A8DA4(), iVar1, -2, 0))
			{
				if (system::vdist(vParam0, func_76(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_129(int iParam0)//Position - 0x68D3
{
	if ((Global_2405047.f_482 == 9 || Global_2405047.f_482 == 9) || (Global_2405047.f_482 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_130(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x6916
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x9EB17624F44A8DA4() != iVar1) || iParam6 == 0)
		{
			if (func_991(iVar1, bParam2, bParam3))
			{
				if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
				{
					if (!bParam5 || (!unk_0x3AB6A1A9084FB0A4(unk_0x25D049AAC4603E65(iVar1)) && func_77(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) != unk_0x917EE18109C5ACEA(iVar1))) || unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
						{
							if (((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && iParam7) && bParam4) && func_79(iVar1))
							{
							}
							else if (unk_0x6ADD12BF4D6D2587(unk_0x25D049AAC4603E65(iVar1)))
							{
								if (unk_0xBE3C4023003180FC(func_76(iVar1), vParam0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_131(vector3 vParam0, float fParam1, int iParam2, float fParam3)//Position - 0x6A12
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_991(iVar1, 1, 1))
			{
				if ((!func_144(iVar1, 0) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1)) && iVar1 != unk_0x9EB17624F44A8DA4())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!unk_0x917EE18109C5ACEA(iVar1) == -1)
						{
							if (unk_0x917EE18109C5ACEA(iVar1) == unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (unk_0x917EE18109C5ACEA(iVar1) == iVar3)
					{
						if (unk_0xBE3C4023003180FC(func_76(iVar1), vParam0, true) <= (fVar2 + fParam1))
						{
							if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_132(int iParam0)//Position - 0x6AD7
{
	if (((func_58(iParam0, 1) || func_135(iParam0)) || func_134(iParam0, 0)) || func_133(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_133(int iParam0)//Position - 0x6B13
{
	if (!func_991(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_35;
}

int func_134(int iParam0, int iParam1)//Position - 0x6B36
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_135(int iParam0)//Position - 0x6B71
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/] != -1;
	}
	return 0;
}

void func_136(vector3 vParam0, var uParam1, var uParam2)//Position - 0x6B92
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<8> Var3;
	vector3 vVar4;
	vector3 vVar5;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var2 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!unk_0xC80D31E4B587871C(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (system::vmag(*(uParam1[iVar0 /*4*/])) == 0f || system::vdist(Global_2359721[iVar1 /*26*/].f_3, vParam0) < system::vdist(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var2 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_138(&Var2, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			vVar4 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0,5f, 0,5f, 0,5f) };
			vVar5 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0,5f, 0,5f, 0,5f) };
			if (system::vmag(*(uParam2[iVar0 /*10*/])) == 0f || system::vdist(vVar4, vParam0) < system::vdist(vVar5, vParam0))
			{
				Var3 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var3.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var3.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var3.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_137(&Var3, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_137(var uParam0, var uParam1, int iParam2)//Position - 0x6D7A
{
	Global_2412035 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_137(&Global_2412035, uParam1, iParam2 + 1);
	}
}

void func_138(var uParam0, var uParam1, int iParam2)//Position - 0x6DB8
{
	Global_2412031 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_138(&Global_2412031, uParam1, iParam2 + 1);
	}
}

void func_139(var uParam0, var uParam1)//Position - 0x6DF2
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Global_2405047.f_2229 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405047.f_2229)
		{
			if (func_140(Global_2405047.f_2230[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2405047.f_2230[iVar0 /*4*/].f_3;
				if (system::vmag(*uParam1) > 0,01f)
				{
					vVar1 = { *uParam1 - Global_2405047.f_2230[iVar0 /*4*/] };
					fVar2 = unk_0xA67DD8488EBA5F6D(vVar1.x, vVar1.y);
				}
				func_73(Global_2405047.f_2230[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, -1);
				Global_2405047.f_2458++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405047.f_2847)
	{
		func_67(&(Global_2405047.f_2458.f_6[0 /*9*/]), &(Global_2405047.f_2458.f_6[1 /*9*/]), &(Global_2405047.f_2458.f_6[2 /*9*/]));
	}
}

int func_140(vector3 vParam0, var uParam1)//Position - 0x6EDF
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_19(vParam0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_19(vParam0, uParam1->f_7, uParam1->f_8, uParam1->f_11, uParam1->f_14);
		
		default:
	}
	return 0;
}

void func_141(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)//Position - 0x6F3C
{
	float fVar0;
	
	func_62(&vParam0, &vParam1);
	fVar0 = (vParam1.x - vParam0.x);
	*uParam2 = (vParam0.x + (fVar0 * 0,5f));
	uParam2->f_1 = vParam0.y;
	uParam2->f_2 = vParam0.z;
	*uParam3 = *uParam2;
	uParam3->f_1 = vParam1.y;
	uParam3->f_2 = vParam1.z;
	*uParam4 = (fVar0 * 0,5f);
}

var func_142()//Position - 0x6F92
{
	return Global_1310987.f_4;
}

void func_143(float fParam0, float fParam1)//Position - 0x6FA0
{
	func_179();
	func_171(fParam0, fParam1);
}

bool func_144(int iParam0, int iParam1)//Position - 0x6FB4
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_145(-1, 0) == 8;
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

int func_145(int iParam0, bool bParam1)//Position - 0x6FFF
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_146();
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

int func_146()//Position - 0x7040
{
	return Global_1312736;
}

bool func_147(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x704C
{
	if (bParam3 && bParam4)
	{
		vParam0.z = 0f;
		vParam1.z = 0f;
		return system::vdist(vParam0, vParam1) < (fParam2 + 0,01f);
	}
	else if (bParam3)
	{
		if (vParam0.z > vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return system::vdist(vParam0, vParam1) < (fParam2 + 0,01f);
	}
	else if (bParam4)
	{
		if (vParam0.z < vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return system::vdist(vParam0, vParam1) < (fParam2 + 0,01f);
	}
	return system::vdist(vParam0, vParam1) < (fParam2 + 0,01f);
}

void func_148(var uParam0, var uParam1, var uParam2)//Position - 0x70FF
{
	if (Global_2405047.f_1721 > 0 && func_167(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_149(uParam0, uParam1, uParam2);
	}
}

void func_149(var uParam0, var uParam1, var uParam2)//Position - 0x712F
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	vector3 vVar25;
	var uVar26;
	vector3 vVar27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!system::vmag(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_41(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999,9f;
			uParam2->f_7 = 9999,9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999,9f;
	}
	if (uParam2->f_48)
	{
		if (func_166(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999,9f;
		uParam2->f_7 = 9999,9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2,75f;
			fVar12 = 7,5f;
			break;
		
		default:
			fVar11 = 2,5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2412045.f_162 = 0;
	Global_2412045.f_163 = 0;
	Global_2412045.f_164 = -99;
	Global_2412045.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2412045[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2412045.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_34(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999,9f;
		uParam2->f_7 = 9999,9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = unk_0xC35B067544C496CB(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (unk_0x415CDAC83972AD02(iVar6))
		{
			unk_0x52854081FE5E271E(iVar6, &vVar1);
			bVar10 = false;
			if (Global_2412045.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2412045.f_165 = { vVar1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x81B7CF786E5C8681(iVar6)) || unk_0xAEB36CE218651907(iVar6))
			{
				unk_0x77EC37553A5DBA63(vVar1, &uVar4, &uVar5);
				if (system::vdist(vVar1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_116(&vVar1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_165(vVar1))
									{
										vVar1 = { func_163(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51) };
										if (system::vmag(vVar1) > 0f)
										{
											if (!func_28(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (vVar1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_162(vVar1, uParam2))
														{
															if ((uParam2->f_48 && !func_166(&vVar1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (system::vmag(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && system::vdist(vVar1.x, vVar1.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_158(vVar1, fVar2, uParam2->f_34, unk_0x9EB17624F44A8DA4(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_41(uParam2->f_35, &vVar1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0,375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0,375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_157(vVar1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_172(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_172(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_155(vVar1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_154(vVar1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412045.f_162)
																										{
																											Global_2412045[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2412045.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2412045.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412045.f_162 == 0)
																									{
																										Global_2412045[0 /*3*/] = { vVar1 };
																										Global_2412045.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412045.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (system::vdist2(vVar1, uParam2->f_35) < system::vdist2(Global_2412045[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_153(vVar1, fVar2, iVar14);
																													iVar14 = Global_2412045.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2412045.f_162++;
																									if (Global_2412045.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412045.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412045[Global_2412045.f_162 /*3*/] = { vVar1 };
																									Global_2412045.f_121[Global_2412045.f_162] = fVar2;
																									Global_2412045.f_162++;
																									if (func_162(vVar1, uParam2))
																									{
																										Global_2412045.f_163++;
																									}
																									if (Global_2412045.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412045.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar2;
																							return;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar2;
																					return;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2412045.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412045[0 /*3*/] };
						*uParam1 = Global_2412045.f_121[0];
						return;
					}
					else
					{
						if (Global_2412045.f_163 > 0 && !Global_2412045.f_163 == Global_2412045.f_162)
						{
							func_151(0, uParam2);
						}
						iVar24 = unk_0x63A6486593EC7EC3(0, Global_2412045.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						vVar25 = { Global_2412045[0 /*3*/] };
						uVar26 = Global_2412045.f_121[0];
						Global_2412045[0 /*3*/] = { Global_2412045[iVar24 /*3*/] };
						Global_2412045.f_121[0] = Global_2412045.f_121[iVar24];
						Global_2412045[iVar24 /*3*/] = { vVar25 };
						Global_2412045.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2412045[0 /*3*/] };
						*uParam1 = Global_2412045.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_149(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x63A6486593EC7EC3((1 + iVar13), (40 + iVar13));
						unk_0x5C41B0B656C02102(*uParam0, iVar0, &vVar1, &fVar2, &iVar7, iVar3, fVar11, fVar12);
						vVar1 = { func_163(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, 0, 0, uParam2->f_51) };
						vVar27 = { vVar1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_41(uParam2->f_35, &vVar27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_166(&vVar27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999,9f;
								uParam2->f_7 = 9999,9f;
								func_149(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								return;
							}
						}
						else
						{
							*uParam0 = { vVar27 };
							*uParam1 = fVar28;
							return;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				func_149(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_150(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2412045.f_164 = iVar6;
	}
}

void func_150(var uParam0, var uParam1, var uParam2, vector3 vParam3)//Position - 0x7B9E
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = system::vdist(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_121(*(uParam0[iVar2 /*4*/]), 5f, unk_0x9EB17624F44A8DA4(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_151(int iParam0, var uParam1)//Position - 0x7C22
{
	if (!func_162(Global_2412045[iParam0 /*3*/], uParam1))
	{
		Global_2412045.f_162 = (Global_2412045.f_162 - 1);
		func_152(iParam0);
		if (Global_2412045.f_162 > Global_2412045.f_163)
		{
			func_151(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_151(iParam0 + 1, uParam1);
	}
}

void func_152(int iParam0)//Position - 0x7C7D
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412045[iParam0 /*3*/] = { Global_2412045[iParam0 + 1 /*3*/] };
			Global_2412045.f_121[iParam0] = Global_2412045.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_153(vector3 vParam0, float fParam1, int iParam2)//Position - 0x7CC8
{
	vector3 vVar0;
	var uVar1;
	
	vVar0 = { Global_2412045[iParam2 /*3*/] };
	uVar1 = Global_2412045.f_121[iParam2];
	Global_2412045[iParam2 /*3*/] = { vParam0 };
	Global_2412045.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2412045.f_162 && iParam2 < 39)
	{
		if (system::vmag(vVar0) > 0f)
		{
			func_153(vVar0, uVar1, iParam2 + 1);
		}
	}
}

int func_154(vector3 vParam0, float fParam1, float fParam2)//Position - 0x7D35
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999,9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_78(iVar3))
		{
			vVar1 = { func_76(iVar3) };
			fVar5 = system::vdist(vParam0, vVar1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_155(vector3 vParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x7D9D
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && unk_0x9EB17624F44A8DA4() != iVar1) || iParam7 == 0)
		{
			if (func_991(iVar1, bParam3, bParam4))
			{
				if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
				{
					if (!bParam6 || (!unk_0x3AB6A1A9084FB0A4(unk_0x25D049AAC4603E65(iVar1)) && func_77(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) != unk_0x917EE18109C5ACEA(iVar1))) || unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
						{
							if (((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && iParam8) && bParam5) && func_79(iVar1))
							{
							}
							else if (unk_0x6ADD12BF4D6D2587(unk_0x25D049AAC4603E65(iVar1)))
							{
								fVar2 = 0,1f;
								if (unk_0x88DDBE9908752BF0(unk_0x25D049AAC4603E65(iVar1), 0))
								{
									iVar3 = unk_0xDFD115BB10FE46A9(unk_0x25D049AAC4603E65(iVar1), 0);
									if (unk_0x6ADD12BF4D6D2587(iVar3) && !unk_0x191BE1BC8F26F3C1(iVar3, 0))
									{
										iVar4 = unk_0x82FF3DFBC3965CC0(iVar3);
										vVar5 = { unk_0xB3328BA8976B416C(iVar3, 0) };
										fVar6 = unk_0xF0371FE6E2BF9599(iVar3);
										if (func_156(vParam0, fParam1, iParam2, vVar5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_29(func_76(iVar1), vParam0, fParam1, iParam2, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_156(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)//Position - 0x7F10
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (func_29(vParam0, vParam3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_31(iParam2, &vVar2, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar4 = { 0f, vVar3.y, 0f };
	func_36(&vVar4, 0f, 0f, fParam1);
	vVar5 = { 0f, vVar2.y, 0f };
	func_36(&vVar5, 0f, 0f, fParam1);
	vVar6 = { (unk_0xE97272C977DEADD3((vVar3.x - vVar2.x)) * 0,5f), 0f, 0f };
	func_36(&vVar6, 0f, 0f, fParam1);
	vVar1[0 /*3*/] = { vParam0 + vVar4 + vVar6 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0,5f * unk_0xE97272C977DEADD3((vVar3.z - vVar2.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar4 - vVar6 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0,5f * unk_0xE97272C977DEADD3((vVar3.z - vVar2.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar5 + vVar6 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0,5f * unk_0xE97272C977DEADD3((vVar3.z - vVar2.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar5 - vVar6 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0,5f * unk_0xE97272C977DEADD3((vVar3.z - vVar2.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_29(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_156(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_157(vector3 vParam0, float fParam1, int iParam2)//Position - 0x80CC
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = unk_0x87889570F3396ABD(vParam0, 30f, 0, iVar0);
	if (unk_0x6ADD12BF4D6D2587(iVar1) && !unk_0x191BE1BC8F26F3C1(iVar1, 0))
	{
		iVar2 = unk_0x82FF3DFBC3965CC0(iVar1);
		vVar3 = { unk_0xB3328BA8976B416C(iVar1, 0) };
		fVar4 = unk_0xF0371FE6E2BF9599(iVar1);
		if (func_156(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0x87889570F3396ABD(vParam0, 30f, 0, iVar0);
	if (unk_0x6ADD12BF4D6D2587(iVar1) && !unk_0x191BE1BC8F26F3C1(iVar1, 0))
	{
		iVar2 = unk_0x82FF3DFBC3965CC0(iVar1);
		vVar3 = { unk_0xB3328BA8976B416C(iVar1, 0) };
		fVar4 = unk_0xF0371FE6E2BF9599(iVar1);
		if (func_156(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_158(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x81D8
{
	if (func_161(vParam0, fParam1, iParam2, iParam3, iParam4) || func_159(vParam0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_159(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x820E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_160(vParam0, iParam2, Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_156(vParam0, fParam1, iParam2, Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_991(iVar2, 0, 1) && func_991(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_160(vector3 vParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x82E8
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_37(iParam1, 1008981770);
	fVar1 = func_37(iParam3, 1008981770);
	fVar2 = system::vdist(vParam0, vParam2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_161(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8328
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_991(iVar1, 0, 1) && func_991(iParam3, 0, 1))
			{
				if (Global_2416800.f_261[iVar0])
				{
					if (func_29(Global_2416800.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_29(func_76(iVar1), vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2416800.f_261[iVar0])
			{
				if (func_29(Global_2416800.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_991(iVar1, 0, 0))
			{
				if (unk_0x6ADD12BF4D6D2587(unk_0x25D049AAC4603E65(iVar1)))
				{
					if (func_29(func_76(iVar1), vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_162(vector3 vParam0, var uParam1)//Position - 0x8437
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_147(vParam0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_61(vParam0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x8AE9E5E8F6DC40C9(vParam0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_163(vector3 vParam0, float fParam1, int iParam2, bool bParam3, vector3 vParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0x84C8
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	vector3 vVar13;
	vector3 vVar14;
	vector3 vVar15;
	
	if (bParam11)
	{
		if (system::vmag(vParam4) > 0f)
		{
			if (!func_164(vParam0, *fParam1, vParam4))
			{
				*fParam1 = (*fParam1 + 180f);
			}
		}
		return vParam0;
	}
	unk_0x77EC37553A5DBA63(vParam0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		unk_0xA72AB170F6ACDE36(vParam0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*bParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *bParam8)
		{
			*fParam1 = (*fParam1 + 180f);
			if (*fParam1 > 360f)
			{
				*fParam1 = (*fParam1 + -360f);
			}
		}
		if (*fParam1 <= 90f || *fParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4,2f * (system::to_float(iVar4) * 0,5f));
				}
				else
				{
					fVar7 = (4,2f * system::to_float(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4,2f * (system::to_float(iVar5) * 0,5f));
				}
				else
				{
					fVar7 = (4,2f * system::to_float(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0,95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0,5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4,2f * -0,5f));
			}
			if (!iParam7 == 0)
			{
				func_31(iParam7, &fVar10, &fVar11, 1086324736, 1080033280, 1077936128);
				fVar12 = (fVar11 - fVar10);
				if (fVar12 > 1,8f)
				{
					fVar7 = (fVar7 + ((fVar12 - 1,8f) * -0,5f));
				}
			}
		}
	}
	if (system::vmag(vParam4) > 0f)
	{
		if (!func_164(vParam0, *fParam1, vParam4))
		{
			if (bParam3 || ((uVar2 & 1024 != 0 || vParam0.z == 0f) && bParam6))
			{
				*fParam1 = (*fParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	vVar0 = { unk_0x9EA50C5EC175E58E(vParam0, *fParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0x4DDE76238079885E(vParam0, *fParam1, &vVar13))
		{
			vVar14 = { vVar13 - vParam0 };
			if (!iParam7 == 0)
			{
				vVar15 = { vVar14 / FtoV(system::vmag(vVar14)) };
				func_31(iParam7, &fVar10, &fVar11, 1086324736, 1080033280, 1077936128);
				fVar12 = (fVar11 - fVar10);
				vVar15 = { vVar15 * FtoV((fVar12 * 0,5f)) };
				vVar14 = { vVar14 - vVar15 };
				vVar13 = { vParam0 + vVar14 };
			}
			vVar15 = { vVar0 - vVar13 };
			vVar0 = { vVar13 };
		}
	}
	return vVar0;
}

int func_164(vector3 vParam0, float fParam1, vector3 vParam2)//Position - 0x88E7
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 0f, 1f, 0f };
	func_36(&vVar0, 0f, 0f, fParam1);
	vVar1 = { vParam2 - vParam0 };
	if (func_24(vVar1, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_165(vector3 vParam0)//Position - 0x8923
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_27(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2411759[iVar1])
	{
		if (func_26(vParam0, &(Global_2411056[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411759[8])
	{
		if (func_26(vParam0, &(Global_2411056[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_166(var uParam0, bool bParam1)//Position - 0x899E
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405047.f_26.f_17)
	{
		switch (Global_2405047.f_26.f_16)
		{
			case 0:
				if (func_147(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_15, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_61(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_12, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x8AE9E5E8F6DC40C9(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_12, Global_2405047.f_26.f_15, 0, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_48(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_12, Global_2405047.f_26.f_15, Global_2405047.f_26.f_16, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_167(var uParam0, var uParam1, var uParam2)//Position - 0x8A90
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	vector3 vVar13;
	var uVar14;
	
	if (Global_2405047.f_1721 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!system::vmag(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_41(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999,9f;
				uParam2->f_7 = 9999,9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_166(uParam0, 1))
			{
				uParam2->f_6 = 9999,9f;
				uParam2->f_7 = 9999,9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999,9f;
			uParam2->f_7 = 9999,9f;
		}
		Global_2412045.f_162 = 0;
		Global_2412045.f_163 = 0;
		iVar4 = 0;
		while (iVar4 < 40)
		{
			Global_2412045[iVar4 /*3*/] = { 0f, 0f, 0f };
			Global_2412045.f_121[iVar4] = 0f;
			iVar4++;
		}
		func_168(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405047.f_1721)
		{
			iVar1 = Global_2405047.f_2127[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_2405047.f_1722[iVar1 /*4*/] };
				fVar3 = Global_2405047.f_1722[iVar1 /*4*/].f_3;
				if (system::vmag(vVar2) > 0f)
				{
					if ((uParam2->f_57 && system::vdist(vVar2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && system::vdist(vVar2.x, vVar2.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_158(vVar2, fVar3, uParam2->f_34, unk_0x9EB17624F44A8DA4(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_41(uParam2->f_35, &vVar2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar5 = uParam2->f_31;
										bVar6 = true;
										iVar7 = 1;
										fVar8 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											fVar8 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar8 = (fVar8 * 0,375f);
											}
										}
										else
										{
											bVar6 = true;
											iVar7 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar8 = (fVar8 * 0,375f);
												}
											}
										}
										bVar9 = false;
										if (!func_157(vVar2, fVar3, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_172(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar9 = true;
												}
											}
											else if (func_172(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_155(vVar2, fVar3, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar9 = true;
											}
										}
										if (bVar9)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar11 = 0f;
												if (uParam2->f_52)
												{
													iVar10 = func_154(vVar2, uParam2->f_54, &fVar11);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar10 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar10 < uParam2->f_53)
														{
															iVar4 = 0;
															while (iVar4 < Global_2412045.f_162)
															{
																Global_2412045[iVar4 /*3*/] = { 0f, 0f, 0f };
																Global_2412045.f_121[iVar4] = 0f;
																iVar4++;
															}
															Global_2412045.f_162 = 0;
															uParam2->f_53 = iVar10;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412045.f_162 == 0)
														{
															Global_2412045[0 /*3*/] = { vVar2 };
															Global_2412045.f_121[0] = fVar3;
														}
														else
														{
															iVar4 = 0;
															while (iVar4 < Global_2412045.f_162 + 1)
															{
																if (iVar4 < 40)
																{
																	if (system::vdist2(vVar2, uParam2->f_35) < system::vdist2(Global_2412045[iVar4 /*3*/], uParam2->f_35))
																	{
																		func_153(vVar2, fVar3, iVar4);
																		iVar4 = Global_2412045.f_162 + 1;
																	}
																}
																iVar4++;
															}
														}
														Global_2412045.f_162++;
														if (Global_2412045.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405047.f_1721;
															}
															else if (Global_2412045.f_162 == 40)
															{
																iVar0 = Global_2405047.f_1721;
															}
														}
													}
													else
													{
														Global_2412045[Global_2412045.f_162 /*3*/] = { vVar2 };
														Global_2412045.f_121[Global_2412045.f_162] = fVar3;
														Global_2412045.f_162++;
														if (Global_2412045.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405047.f_1721;
															}
															else if (Global_2412045.f_162 == 40)
															{
																iVar0 = Global_2405047.f_1721;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar3;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar3;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2412045.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412045[0 /*3*/] };
				*uParam1 = Global_2412045.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412045.f_163 > 0 && !Global_2412045.f_163 == Global_2412045.f_162)
				{
					func_151(0, uParam2);
				}
				iVar12 = unk_0x63A6486593EC7EC3(0, Global_2412045.f_162);
				vVar13 = { Global_2412045[0 /*3*/] };
				uVar14 = Global_2412045.f_121[0];
				Global_2412045[0 /*3*/] = { Global_2412045[iVar12 /*3*/] };
				Global_2412045.f_121[0] = Global_2412045.f_121[iVar12];
				Global_2412045[iVar12 /*3*/] = { vVar13 };
				Global_2412045.f_121[iVar12] = uVar14;
				*uParam0 = { Global_2412045[0 /*3*/] };
				*uParam1 = Global_2412045.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_167(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_149(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_168(vector3 vParam0)//Position - 0x90E0
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405047.f_1721)
	{
		uVar1 = func_169(vParam0, fVar0, &fVar0);
		Global_2405047.f_2127[iVar2] = uVar1;
		iVar2++;
	}
}

int func_169(vector3 vParam0, float fParam1, float fParam2)//Position - 0x911B
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405047.f_1721)
	{
		fVar2 = system::vdist2(vParam0, Global_2405047.f_1722[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

bool func_170(int iParam0)//Position - 0x917D
{
	return iParam0 == 50;
}

void func_171(float fParam0, float fParam1)//Position - 0x918A
{
	unk_0xC38F0D30350641A3(fParam0, fParam1, 0,1f);
	Global_2405047.f_2441 = unk_0xBBA15366508D1BDE();
	Global_2405047.f_2439 = 1;
	Global_2405047.f_2442 = unk_0xD1952A425B78FFC0();
}

int func_172(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x91BD
{
	Global_2405047.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x717FFCE23DE4C8C8(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x0D3330EAF6340496(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0x0D3330EAF6340496(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x83A4DE08E23A2F1F(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam11)
	{
		if (unk_0xAA0BDFF32B6BC02A(vParam0, 2,5f) > 0)
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (fParam12 > 0f)
	{
		if (func_130(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_117(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405047.f_2++;
	return 1;
}

void func_173()//Position - 0x92CE
{
	func_178();
	func_177();
	func_176();
	func_175();
	func_174();
}

void func_174()//Position - 0x92EA
{
	struct<9> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_2407922[iVar1 /*9*/] = { Var0 };
		iVar1++;
	}
}

void func_175()//Position - 0x9322
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_2405047.f_2458.f_85[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_176()//Position - 0x9351
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_2405047.f_2458.f_52[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_177()//Position - 0x937F
{
	struct<9> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_2405047.f_2458.f_6[iVar1 /*9*/] = { Var0 };
		iVar1++;
	}
}

void func_178()//Position - 0x93BB
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2405047.f_2458 = { Var0 };
}

void func_179()//Position - 0x93D9
{
	if (Global_2405047.f_2439)
	{
		if (unk_0xBBA15366508D1BDE() == Global_2405047.f_2441)
		{
			unk_0xA97AB0E9B7AF96B6();
		}
		else
		{
			unk_0xA97AB0E9B7AF96B6();
		}
		Global_2405047.f_2439 = 0;
	}
}

int func_180(bool bParam0)//Position - 0x940C
{
	if (unk_0x3E9CABD07B829173())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

Vector3 func_181()//Position - 0x942F
{
	return Local_131.f_38[Local_131.f_36 /*3*/];
}

void func_182()//Position - 0x9443
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	bVar1 = false;
	if (Local_131 != 4)
	{
		iLocal_135 = 0;
		while (iLocal_135 < unk_0xB72D370CB7ABC3EF())
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iLocal_135)))
			{
				iVar2 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iLocal_135));
				if (func_991(iVar2, 1, 1))
				{
				}
				if (!unk_0xC80D31E4B587871C(Local_131.f_1, 1))
				{
					if (unk_0xC80D31E4B587871C(Local_132[iLocal_135 /*6*/].f_1, 2))
					{
						if (Local_131.f_37 != iVar2)
						{
							Local_131.f_37 = iVar2;
						}
					}
				}
				if (!unk_0xC80D31E4B587871C(Local_131.f_1, 1))
				{
					if (Local_132[iLocal_135 /*6*/].f_5 > 0)
					{
						iVar0 = (iVar0 + Local_132[iLocal_135 /*6*/].f_5);
					}
				}
				if (!unk_0xC80D31E4B587871C(Local_131.f_1, 4))
				{
					if (unk_0xC80D31E4B587871C(Local_132[iLocal_135 /*6*/].f_1, 5))
					{
						unk_0x872F1C1F8587CCC7(&(Local_131.f_1), 4);
						Local_131.f_35 = iVar2;
					}
				}
				if (!unk_0xC80D31E4B587871C(Local_131.f_1, 2))
				{
					if (!bVar1)
					{
						if (((unk_0xC80D31E4B587871C(Local_131.f_1, 1) || unk_0xC80D31E4B587871C(Local_131.f_1, 3)) || unk_0xC80D31E4B587871C(Local_131.f_1, 4)) || unk_0xC80D31E4B587871C(Local_131.f_1, 5))
						{
							if (!unk_0xC80D31E4B587871C(Local_132[iLocal_135 /*6*/].f_1, 4))
							{
								bVar1 = true;
							}
						}
						else
						{
							bVar1 = true;
						}
					}
				}
			}
			else if (!unk_0xC80D31E4B587871C(Local_131.f_1, 5))
			{
				if (Local_131.f_33 > -1)
				{
					if (iLocal_135 == Local_131.f_33)
					{
						unk_0x872F1C1F8587CCC7(&(Local_131.f_1), 5);
					}
				}
			}
			iLocal_135++;
		}
		if (!unk_0xC80D31E4B587871C(Local_131.f_1, 1))
		{
			iVar0 = (iVar0 + Local_131.f_6);
			if (iVar0 >= func_183())
			{
				unk_0x872F1C1F8587CCC7(&(Local_131.f_1), 1);
			}
			if (Local_131.f_5 != iVar0)
			{
				if (Local_131.f_5 < iVar0)
				{
					Local_131.f_5 = iVar0;
				}
				else if (Local_131.f_6 != (Local_131.f_5 - iVar0))
				{
					Local_131.f_6 = (Local_131.f_5 - iVar0);
				}
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_131.f_1, 2))
		{
			if (!bVar1)
			{
				unk_0x872F1C1F8587CCC7(&(Local_131.f_1), 2);
			}
		}
	}
}

int func_183()//Position - 0x9622
{
	return Global_262145.f_11844;
}

int func_184()//Position - 0x9631
{
	int iVar0;
	int iVar1;
	
	if (func_188() != -1)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (func_187(Local_131.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				iVar1 = unk_0x63A6486593EC7EC3(0, 20);
				if (func_185(iVar1))
				{
					Local_131.f_38[iVar0 /*3*/] = { vLocal_422[iVar1 /*3*/] };
					vLocal_422[iVar1 /*3*/] = { 0f, 0f, 0f };
				}
			}
			iVar0++;
		}
	}
	else
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_187(Local_131.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_185(int iParam0)//Position - 0x96CF
{
	int iVar0;
	float fVar1;
	
	if (func_187(vLocal_422[iParam0 /*3*/], 0f, 0f, 0f, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 < iParam0)
		{
			if (!func_187(Local_131.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				fVar1 = unk_0xBE3C4023003180FC(Local_131.f_38[iVar0 /*3*/], vLocal_422[iParam0 /*3*/], true);
				if (fVar1 < func_186())
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

float func_186()//Position - 0x974A
{
	return system::to_float(Global_262145.f_11845);
}

bool func_187(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x975D
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_188()//Position - 0x97A4
{
	int iVar0;
	
	if (Local_131.f_48 != -1)
	{
		return Local_131.f_48;
	}
	iVar0 = unk_0x63A6486593EC7EC3(0, 4);
	if (!func_190(iVar0))
	{
		Local_131.f_48 = iVar0;
		func_189();
	}
	return Local_131.f_48;
}

void func_189()//Position - 0x97DE
{
	switch (Local_131.f_48)
	{
		case 0:
			vLocal_422[0 /*3*/] = { 959,4771f, -1673,839f, 29,0562f };
			vLocal_422[1 /*3*/] = { 711,3848f, -1230,569f, 25,5556f };
			vLocal_422[2 /*3*/] = { 282,5148f, -217,2699f, 62,4801f };
			vLocal_422[3 /*3*/] = { 388,7341f, -356,1966f, 47,023f };
			vLocal_422[4 /*3*/] = { 1112,403f, -645,8195f, 55,8211f };
			vLocal_422[5 /*3*/] = { 1112,403f, -645,8195f, 55,8211f };
			vLocal_422[6 /*3*/] = { 175,7449f, 557,355f, 179,142f };
			vLocal_422[7 /*3*/] = { 1061,679f, 214,6577f, 83,9904f };
			vLocal_422[8 /*3*/] = { 768,462f, 1279,458f, 359,2967f };
			vLocal_422[9 /*3*/] = { 2590,469f, 486,6694f, 107,69f };
			vLocal_422[10 /*3*/] = { 2820,659f, -760,044f, 1,4262f };
			vLocal_422[11 /*3*/] = { 1169,637f, -1382,508f, 33,7916f };
			vLocal_422[12 /*3*/] = { 1590,301f, -1691,78f, 87,103f };
			vLocal_422[13 /*3*/] = { 857,6887f, -2497,098f, 27,3195f };
			vLocal_422[14 /*3*/] = { 1292,737f, -3097,068f, 4,9066f };
			vLocal_422[15 /*3*/] = { 590,4111f, -2902,535f, 5,2464f };
			vLocal_422[16 /*3*/] = { 491,5606f, -2122,398f, 4,9175f };
			vLocal_422[17 /*3*/] = { 210,1278f, -937,7384f, 23,1416f };
			vLocal_422[18 /*3*/] = { 483,4742f, -1480,009f, 28,2904f };
			vLocal_422[19 /*3*/] = { 2288,854f, 1727,706f, 67,0398f };
			break;
		
		case 1:
			vLocal_422[0 /*3*/] = { -884,5568f, -2477,55f, 12,9877f };
			vLocal_422[1 /*3*/] = { -81,4004f, -2707,403f, 5,4398f };
			vLocal_422[2 /*3*/] = { -176,0256f, -633,2856f, 47,9812f };
			vLocal_422[3 /*3*/] = { -777,4452f, 20,5786f, 39,6541f };
			vLocal_422[4 /*3*/] = { -2333,458f, 237,6722f, 168,602f };
			vLocal_422[5 /*3*/] = { -1096,042f, -323,1984f, 36,8237f };
			vLocal_422[6 /*3*/] = { -822,8544f, -1222,888f, 6,3704f };
			vLocal_422[7 /*3*/] = { -590,8558f, -911,0305f, 22,8747f };
			vLocal_422[8 /*3*/] = { -110,7806f, 356,4308f, 111,6961f };
			vLocal_422[9 /*3*/] = { -330,9974f, -1314,573f, 30,5497f };
			vLocal_422[10 /*3*/] = { -330,9974f, -1314,573f, 30,5497f };
			vLocal_422[11 /*3*/] = { -255,1383f, -1543,092f, 30,9032f };
			vLocal_422[12 /*3*/] = { -1659,014f, 235,419f, 61,391f };
			vLocal_422[13 /*3*/] = { -3276,446f, 967,604f, 7,3522f };
			vLocal_422[14 /*3*/] = { -1997,696f, -257,592f, 28,0968f };
			vLocal_422[15 /*3*/] = { -388,8625f, -2282,671f, 6,6082f };
			vLocal_422[16 /*3*/] = { -1048,599f, -1120,179f, 1,1586f };
			vLocal_422[17 /*3*/] = { -287,5583f, 11,2136f, 53,7525f };
			vLocal_422[18 /*3*/] = { -481,1961f, 1101,528f, 324,8545f };
			vLocal_422[19 /*3*/] = { -1521,989f, 1493,556f, 110,593f };
			break;
		
		case 2:
			vLocal_422[0 /*3*/] = { -1585,629f, 2084,206f, 71,3231f };
			vLocal_422[1 /*3*/] = { -2188,034f, 4249,606f, 47,9395f };
			vLocal_422[2 /*3*/] = { -685,67f, 5794,155f, 16,331f };
			vLocal_422[3 /*3*/] = { -329,5496f, 6150,002f, 31,3133f };
			vLocal_422[4 /*3*/] = { -275,9802f, 6637,051f, 6,4552f };
			vLocal_422[5 /*3*/] = { -800,4709f, 5392,421f, 33,4985f };
			vLocal_422[6 /*3*/] = { -59,013f, 4416,56f, 55,8893f };
			vLocal_422[7 /*3*/] = { -207,2786f, 3658,027f, 50,7524f };
			vLocal_422[8 /*3*/] = { -596,9946f, 2091,172f, 130,4128f };
			vLocal_422[9 /*3*/] = { -2080,822f, 2608,639f, 2,089f };
			vLocal_422[10 /*3*/] = { -1622,297f, 3191,923f, 29,2567f };
			vLocal_422[11 /*3*/] = { -1098,166f, 2725,338f, 17,8007f };
			vLocal_422[12 /*3*/] = { -31,1729f, 1953,42f, 189,1861f };
			vLocal_422[13 /*3*/] = { -281,9674f, 2847,181f, 52,8867f };
			vLocal_422[14 /*3*/] = { -1633,186f, 4736,728f, 52,2963f };
			vLocal_422[15 /*3*/] = { -520,748f, 5307,176f, 79,2448f };
			vLocal_422[16 /*3*/] = { 50,1324f, 7117,781f, 2,1957f };
			vLocal_422[17 /*3*/] = { 163,8223f, 6654,26f, 30,5682f };
			vLocal_422[18 /*3*/] = { 59,0807f, 6310,772f, 30,3764f };
			vLocal_422[19 /*3*/] = { -1901,756f, 1911,103f, 165,2867f };
			break;
		
		case 3:
			vLocal_422[0 /*3*/] = { 721,9799f, 2314,477f, 49,4146f };
			vLocal_422[1 /*3*/] = { 376,9765f, 2628,43f, 43,6444f };
			vLocal_422[2 /*3*/] = { 1535,214f, 6597,865f, 2,1543f };
			vLocal_422[3 /*3*/] = { 2446,757f, 4963,825f, 45,5766f };
			vLocal_422[4 /*3*/] = { 2467,821f, 4080,605f, 37,0648f };
			vLocal_422[5 /*3*/] = { 1648,711f, 3811,429f, 37,6556f };
			vLocal_422[6 /*3*/] = { 1297,271f, 4342,019f, 40,3207f };
			vLocal_422[7 /*3*/] = { 1541,145f, 6335,578f, 23,0751f };
			vLocal_422[8 /*3*/] = { 2014,187f, 4721,405f, 40,609f };
			vLocal_422[9 /*3*/] = { 3800,848f, 4475,054f, 4,9977f };
			vLocal_422[10 /*3*/] = { 2661,859f, 3467,084f, 54,8171f };
			vLocal_422[11 /*3*/] = { 430,2967f, 6467,513f, 27,7718f };
			vLocal_422[12 /*3*/] = { 2930,072f, 4623,018f, 47,7272f };
			vLocal_422[13 /*3*/] = { 2973,685f, 3480,115f, 70,4423f };
			vLocal_422[14 /*3*/] = { 1989,081f, 3781,611f, 31,1808f };
			vLocal_422[15 /*3*/] = { 908,6296f, 3648,458f, 35,1522f };
			vLocal_422[16 /*3*/] = { 1560,581f, 2167,013f, 77,7169f };
			vLocal_422[17 /*3*/] = { 1230,12f, 2742,618f, 37,0054f };
			vLocal_422[18 /*3*/] = { 2545,243f, 2588,249f, 36,9449f };
			vLocal_422[19 /*3*/] = { 260,401f, 3180,358f, 41,6992f };
			break;
	}
}

int func_190(int iParam0)//Position - 0x9F73
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_11787;
		
		case 1:
			return Global_262145.f_11788;
		
		case 2:
			return Global_262145.f_11786;
		
		case 3:
			return Global_262145.f_11785;
		
		default:
	}
	return 0;
}

int func_191(var uParam0)//Position - 0x9FC3
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

void func_192(var uParam0)//Position - 0x9FEC
{
	if (!uParam0->f_1)
	{
		if (unk_0x8E1421E2A2A2FBD4())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_193()//Position - 0xA00B
{
	func_195();
	if (unk_0xC80D31E4B587871C(iLocal_134, 9))
	{
		return;
	}
	if (func_896())
	{
		if (!unk_0xC80D31E4B587871C(iLocal_134, 0))
		{
			unk_0x1B5A255BF0D63005("DisableFlightMusic", 1);
			unk_0x1B5A255BF0D63005("WantedMusicDisabled", 1);
			unk_0x872F1C1F8587CCC7(&iLocal_134, 0);
		}
		if (!unk_0xC80D31E4B587871C(iLocal_134, 1))
		{
			if (unk_0x8810DC630928B398("BG_SIGHTSEER_START"))
			{
				unk_0x872F1C1F8587CCC7(&iLocal_134, 1);
			}
		}
		if (unk_0xC80D31E4B587871C(iLocal_134, 1))
		{
			if (!unk_0xC80D31E4B587871C(iLocal_134, 3))
			{
				if (Local_131.f_5 == 1)
				{
					if (unk_0x8810DC630928B398("BG_SIGHTSEER_MID"))
					{
						unk_0x872F1C1F8587CCC7(&iLocal_134, 3);
					}
				}
			}
		}
		if (unk_0xC80D31E4B587871C(iLocal_134, 3))
		{
			if (!unk_0xC80D31E4B587871C(iLocal_134, 4))
			{
				if (Local_131.f_5 == 2)
				{
					if (unk_0x8810DC630928B398("BG_SIGHTSEER_FINAL"))
					{
						unk_0x872F1C1F8587CCC7(&iLocal_134, 4);
					}
				}
			}
		}
		if (unk_0xC80D31E4B587871C(Local_131.f_1, 1) || unk_0xC80D31E4B587871C(Local_131.f_1, 4))
		{
			if (unk_0xC80D31E4B587871C(iLocal_134, 4))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_134, 6))
				{
					if (unk_0x8810DC630928B398("BG_SIGHTSEER_STOP"))
					{
						unk_0x872F1C1F8587CCC7(&iLocal_134, 6);
						unk_0x872F1C1F8587CCC7(&iLocal_134, 2);
						unk_0x1B5A255BF0D63005("DisableFlightMusic", 0);
						unk_0x1B5A255BF0D63005("WantedMusicDisabled", 0);
					}
				}
			}
		}
	}
	if (func_398())
	{
		if (func_194(unk_0x9EB17624F44A8DA4(), 20))
		{
			if (!unk_0xC80D31E4B587871C(iLocal_134, 0))
			{
				unk_0x1B5A255BF0D63005("DisableFlightMusic", 1);
				unk_0x1B5A255BF0D63005("WantedMusicDisabled", 1);
				unk_0x872F1C1F8587CCC7(&iLocal_134, 0);
			}
			if (!unk_0xC80D31E4B587871C(iLocal_134, 7))
			{
				if (unk_0x8810DC630928B398("BG_SIGHTSEER_START_ATTACK"))
				{
					unk_0x872F1C1F8587CCC7(&iLocal_134, 7);
				}
			}
			if (unk_0xC80D31E4B587871C(Local_131.f_1, 1) || unk_0xC80D31E4B587871C(Local_131.f_1, 4))
			{
				if (unk_0xC80D31E4B587871C(iLocal_134, 7))
				{
					if (!unk_0xC80D31E4B587871C(iLocal_134, 6))
					{
						if (unk_0x8810DC630928B398("BG_SIGHTSEER_STOP"))
						{
							unk_0x872F1C1F8587CCC7(&iLocal_134, 6);
							unk_0x872F1C1F8587CCC7(&iLocal_134, 2);
							unk_0x1B5A255BF0D63005("DisableFlightMusic", 0);
							unk_0x1B5A255BF0D63005("WantedMusicDisabled", 0);
						}
					}
				}
			}
		}
	}
}

bool func_194(int iParam0, int iParam1)//Position - 0xA1ED
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_4, iParam1);
}

void func_195()//Position - 0xA208
{
	if (unk_0xC80D31E4B587871C(iLocal_134, 8))
	{
		if (unk_0xC80D31E4B587871C(iLocal_134, 9))
		{
			if (!unk_0xC80D31E4B587871C(iLocal_134, 10))
			{
				if (unk_0xC80D31E4B587871C(iLocal_134, 11))
				{
					if (!unk_0xC80D31E4B587871C(iLocal_134, 12))
					{
						unk_0x22456E02F195550C(1);
						unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 0);
					}
				}
				if (!unk_0xC80D31E4B587871C(iLocal_134, 15))
				{
					if (unk_0x8810DC630928B398("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0x872F1C1F8587CCC7(&iLocal_134, 15);
					}
				}
				if (unk_0xC80D31E4B587871C(iLocal_134, 15))
				{
					if (!unk_0xC80D31E4B587871C(iLocal_134, 13))
					{
						if (unk_0x8810DC630928B398("APT_FADE_IN_RADIO"))
						{
							unk_0x872F1C1F8587CCC7(&iLocal_134, 13);
						}
					}
					if (unk_0xC80D31E4B587871C(iLocal_134, 13))
					{
						unk_0x872F1C1F8587CCC7(&iLocal_134, 10);
					}
				}
			}
		}
	}
}

void func_196()//Position - 0xA2BC
{
	vector3 vVar0;
	int iVar1;
	
	if (!func_896() && !func_398())
	{
		return;
	}
	if (Local_131.f_34 > -1)
	{
		iVar1 = unk_0xF6A72924028F588B(Local_131.f_34);
		if (unk_0x552F39AE86E07792(iVar1))
		{
			vVar0 = { unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iVar1), 0) };
		}
	}
	if (!func_187(vVar0, 0f, 0f, 0f, 0))
	{
		func_197(142, vVar0, &uLocal_430, 1140457472, 1144750080, 0);
	}
}

void func_197(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, int iParam5)//Position - 0xA32B
{
	float fVar0;
	float fVar1;
	
	if (((func_135(unk_0x9EB17624F44A8DA4()) && !func_248(unk_0x9EB17624F44A8DA4())) && !unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 8)) && (func_247(unk_0x9EB17624F44A8DA4()) || func_246(unk_0x9EB17624F44A8DA4())))
	{
		return;
	}
	Global_1667858 = { vParam1 };
	fVar0 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vParam1);
	func_242(iParam0, fVar0);
	if (unk_0x0F30C1F1717A6437() && unk_0x8B7838D25C063186() == 15)
	{
		if (func_241(unk_0x9EB17624F44A8DA4()) || func_239(unk_0x9EB17624F44A8DA4()))
		{
			if (!unk_0x6D93C18E2EF22A46(1344549371))
			{
				unk_0xAC101DB143C83824(1344549371);
			}
		}
		else if (unk_0x6D93C18E2EF22A46(1344549371))
		{
			unk_0x4C5AB0B8B9B71C4B(1344549371);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!func_238(unk_0x9EB17624F44A8DA4(), 21))
		{
			func_237(vParam1, 1, 0);
		}
		if (!*uParam2 && func_991(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			*uParam2 = 1;
			if (func_236(iParam0))
			{
				unk_0x94BD6F0436473406(func_235(iParam0));
				if (func_234(iParam0, -1))
				{
					unk_0xC0EBC1452FCAB15C(0);
					if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
					{
						unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 1);
						unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 1);
					}
					unk_0x872F1C1F8587CCC7(&(Global_1667858.f_3), 0);
				}
			}
			if (func_233(iParam0))
			{
				fVar1 = func_232(iParam0);
				if (fVar1 != 1f)
				{
					func_229(fVar1);
					unk_0x872F1C1F8587CCC7(&(Global_1667858.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_228(iParam0) && func_241(unk_0x9EB17624F44A8DA4()))
				{
					func_226(1);
					func_225(2);
				}
			}
			func_224(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_194(unk_0x9EB17624F44A8DA4(), 19))
			{
				func_223(19);
			}
		}
		if (*uParam2 && func_991(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			*uParam2 = 0;
			if (func_236(iParam0))
			{
				if (unk_0xC80D31E4B587871C(Global_1667858.f_3, 0))
				{
					unk_0x94BD6F0436473406(1f);
					unk_0xC0EBC1452FCAB15C(5);
					unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 0);
				}
			}
			if (func_233(iParam0))
			{
				func_222();
				unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 1);
			}
			if (iParam5 && !func_135(unk_0x9EB17624F44A8DA4()))
			{
				if (func_221(unk_0x9EB17624F44A8DA4()) != 152)
				{
					func_200();
				}
			}
			if (func_199(2))
			{
				func_226(0);
				func_198(2);
			}
		}
	}
}

void func_198(int iParam0)//Position - 0xA590
{
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4856.f_34), iParam0);
}

bool func_199(int iParam0)//Position - 0xA5A7
{
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_34, iParam0);
}

void func_200()//Position - 0xA5BE
{
	unk_0x94A09BF8588CB706(&(Global_2405047.f_24), &Global_2409103, 2);
	unk_0x94A09BF8588CB706(&(Global_2405047.f_26), &Global_2409105, 18);
	func_219();
	func_203(1, 1, 0);
	func_201();
}

void func_201()//Position - 0xA5F4
{
	func_202(0, 0);
}

void func_202(int iParam0, int iParam1)//Position - 0xA602
{
	Global_2405047.f_22 = iParam0;
	Global_2405047.f_23 = iParam1;
}

void func_203(bool bParam0, bool bParam1, bool bParam2)//Position - 0xA61A
{
	if (bParam1)
	{
		unk_0x94A09BF8588CB706(&(Global_2405047.f_44), &Global_2409123, 317);
	}
	else
	{
		Global_2405047.f_44 = { Global_2409123 };
		Global_2405047.f_44.f_49 = { Global_2409123.f_49 };
		Global_2405047.f_44.f_52 = Global_2409123.f_52;
		Global_2405047.f_44.f_53 = Global_2409123.f_53;
	}
	if (bParam0)
	{
		func_218();
	}
	if (!bParam2)
	{
		func_206(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_205(0);
	func_204();
}

void func_204()//Position - 0xA6B9
{
	struct<6> Var0;
	
	if (Global_2405047.f_483.f_1 == unk_0xBBA15366508D1BDE())
	{
		Global_2405047.f_483 = { Var0 };
	}
}

void func_205(bool bParam0)//Position - 0xA6DE
{
	if (bParam0)
	{
		Global_2405047.f_686 = 0;
	}
	else
	{
		Global_2405047.f_686 = 1;
	}
}

void func_206(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0xA6FE
{
	if (bParam0)
	{
		if (func_217())
		{
			func_216();
		}
		Global_2405047.f_687.f_515 = unk_0xBBA15366508D1BDE();
		Global_2405047.f_687.f_504 = iParam1;
		Global_2405047.f_687.f_505 = iParam2;
		Global_2405047.f_687.f_506 = iParam10;
		func_214();
		func_210(8, 0, 0, 0, 0);
		Global_2405047.f_687.f_507 = iParam11;
		Global_2405047.f_687.f_510 = iParam3;
		Global_2405047.f_687.f_511 = iParam4;
		Global_2405047.f_687.f_508 = iParam5;
		Global_2405047.f_687.f_509 = iParam6;
		Global_2405047.f_687.f_512 = iParam7;
		Global_2405047.f_687.f_513 = iParam8;
		Global_2405047.f_687.f_514 = iParam9;
		Global_2405047.f_1720 = 1;
	}
	else
	{
		func_207();
	}
}

void func_207()//Position - 0xA7C5
{
	if (func_217() && !func_209())
	{
		func_216();
	}
	if (func_209())
	{
		func_208();
	}
	else
	{
		func_214();
		func_210(0, 0, 0, 0, 0);
		Global_2405047.f_1720 = 0;
		Global_2405047.f_1719 = 0;
	}
}

void func_208()//Position - 0xA80D
{
	unk_0x94A09BF8588CB706(&(Global_2405047.f_687), &(Global_2405047.f_1203), 516);
	Global_2405047.f_483 = { Global_2405047.f_489 };
	if (unk_0xBBA15366508D1BDE() == Global_2405047.f_687.f_515)
	{
		Global_2405047.f_1719 = 0;
	}
}

int func_209()//Position - 0xA855
{
	if ((Global_2405047.f_1719 && !unk_0xBBA15366508D1BDE() == Global_2405047.f_1203.f_515) && unk_0x8F05914DD835E69F(Global_2405047.f_1203.f_515))
	{
		return 1;
	}
	return 0;
}

void func_210(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xA894
{
	if (Global_2436181.f_1777.f_690.f_16 != func_81())
	{
		if (unk_0xC80D31E4B587871C(Global_2422736[Global_2436181.f_1777.f_690.f_16 /*420*/].f_414, 0) && func_211())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412213 = 0;
	}
	Global_2405047.f_483 = iParam0;
	Global_2405047.f_483.f_1 = unk_0xBBA15366508D1BDE();
	Global_2405047.f_483.f_2 = iParam1;
	Global_2405047.f_483.f_3 = iParam2;
	Global_2405047.f_483.f_4 = iParam3;
	Global_2405047.f_483.f_5 = iParam4;
}

int func_211()//Position - 0xA933
{
	if (((func_221(unk_0x9EB17624F44A8DA4()) == 229 || func_221(unk_0x9EB17624F44A8DA4()) == 191) || func_213()) || func_212())
	{
		return 0;
	}
	return 1;
}

var func_212()//Position - 0xA973
{
	return Global_1574307;
}

int func_213()//Position - 0xA97F
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_214()//Position - 0xA994
{
	if (func_217() && !func_209())
	{
		func_216();
	}
	func_215();
	Global_2405047.f_687 = 0;
}

void func_215()//Position - 0xA9BD
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405047.f_687.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_216()//Position - 0xA9F8
{
	if (func_209())
	{
		if (Global_2405047.f_687.f_515 == Global_2405047.f_1203.f_515)
		{
			return;
		}
	}
	if (!unk_0xBBA15366508D1BDE() == Global_2405047.f_687.f_515)
	{
		unk_0x94A09BF8588CB706(&(Global_2405047.f_1203), &(Global_2405047.f_687), 516);
		Global_2405047.f_489 = { Global_2405047.f_483 };
		Global_2405047.f_1719 = 1;
	}
}

int func_217()//Position - 0xAA66
{
	if ((Global_2405047.f_1720 && !unk_0xBBA15366508D1BDE() == Global_2405047.f_687.f_515) && unk_0x8F05914DD835E69F(Global_2405047.f_687.f_515))
	{
		return 1;
	}
	return 0;
}

void func_218()//Position - 0xAAA5
{
	unk_0x94A09BF8588CB706(&(Global_2405047.f_361), &Global_2409440, 121);
}

void func_219()//Position - 0xAABE
{
	func_220();
	Global_2405047.f_2229 = 0;
}

void func_220()//Position - 0xAAD2
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405047.f_2230[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_221(int iParam0)//Position - 0xAAFE
{
	if (func_134(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

void func_222()//Position - 0xAB21
{
	if (unk_0x8F05914DD835E69F(Global_2512808.f_4852))
	{
		if (!Global_2512808.f_4852 == unk_0xBBA15366508D1BDE() && Global_2512808.f_4851 < 1f)
		{
			return;
		}
	}
	Global_2512808.f_4852 = -1;
	Global_2512808.f_4851 = 1f;
}

void func_223(int iParam0)//Position - 0xAB68
{
	unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_4), iParam0);
}

void func_224(int iParam0)//Position - 0xAB85
{
	unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_4), iParam0);
}

void func_225(int iParam0)//Position - 0xABA2
{
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4856.f_34), iParam0);
}

void func_226(int iParam0)//Position - 0xABB9
{
	if (func_227() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_227()//Position - 0xABEE
{
	if ((((Global_979886 != -1 && Global_979886 != 33) && Global_979886 != 35) && Global_979886 != 37) && Global_979886 != 21)
	{
		return 1;
	}
	return 0;
}

int func_228(int iParam0)//Position - 0xAC34
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_229(float fParam0)//Position - 0xAC84
{
	float fVar0;
	
	if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == func_230())
	{
		return;
	}
	fVar0 = (Global_2512808.f_4851 - fParam0);
	if (unk_0x8F05914DD835E69F(Global_2512808.f_4852))
	{
		if (!Global_2512808.f_4852 == unk_0xBBA15366508D1BDE() && unk_0xE97272C977DEADD3(fVar0) > 0,001f)
		{
			return;
		}
	}
	Global_2512808.f_4851 = fParam0;
	Global_2512808.f_4852 = unk_0xBBA15366508D1BDE();
}

int func_230()//Position - 0xACF0
{
	switch (func_231())
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

int func_231()//Position - 0xAD24
{
	return Global_25233;
}

float func_232(int iParam0)//Position - 0xAD2F
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_233(int iParam0)//Position - 0xAE87
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_234(int iParam0, int iParam1)//Position - 0xAF13
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_235(int iParam0)//Position - 0xB058
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

int func_236(int iParam0)//Position - 0xB0D4
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

void func_237(vector3 vParam0, int iParam1, int iParam2)//Position - 0xB196
{
	Global_2405047.f_44.f_49 = { vParam0 };
	Global_2405047.f_44.f_52 = iParam1;
	Global_2405047.f_44.f_53 = iParam2;
}

bool func_238(int iParam0, int iParam1)//Position - 0xB1C0
{
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_223, iParam1);
}

int func_239(int iParam0)//Position - 0xB1D9
{
	if (func_240(iParam0))
	{
		if (func_241(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_240(int iParam0)//Position - 0xB1F8
{
	if (iParam0 != func_81())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_81())
		{
			return Global_1627537[iParam0 /*532*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_241(int iParam0)//Position - 0xB22D
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_194(iParam0, 9);
	}
	return 0;
}

void func_242(int iParam0, float fParam1)//Position - 0xB24B
{
	int iVar0;
	
	iVar0 = func_245(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_243();
	}
}

void func_243()//Position - 0xB271
{
	if (!func_244(unk_0x9EB17624F44A8DA4()))
	{
		func_224(25);
	}
}

bool func_244(int iParam0)//Position - 0xB28B
{
	return func_194(iParam0, 25);
}

int func_245(int iParam0)//Position - 0xB29B
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_11862;
		
		case 142:
			return Global_262145.f_11850;
		
		case 157:
			return Global_262145.f_11817;
		
		case 159:
			return Global_262145.f_11800;
		
		case 162:
			return Global_262145.f_11911;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_246(int iParam0)//Position - 0xB311
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 0);
	}
	return 0;
}

int func_247(int iParam0)//Position - 0xB337
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 7);
	}
	return 0;
}

bool func_248(int iParam0)//Position - 0xB35D
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 2);
}

void func_249(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)//Position - 0xB375
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
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
	struct<2> Var22;
	
	if (func_388(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_386() || iParam2 == 27)
	{
		if (func_334(iParam1, iParam2, uParam3, Global_1574123, 0, func_384()))
		{
			func_333(1);
			if ((!func_331() && !func_329()) || unk_0xC80D31E4B587871C(Global_2512808.f_4553, 1))
			{
				if (func_328())
				{
					func_325();
				}
				else
				{
					unk_0x73509F6FDA1DB386(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_324(1);
						Global_1574123 = 0;
						iVar19 = -1;
						if (Global_1574308 != 1)
						{
							func_323(iParam1);
							if (unk_0xC80D31E4B587871C(uParam3->f_33, 7))
							{
								unk_0x0EE72DB1CD8A3B86(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_991(unk_0xF6A72924028F588B(iVar17), 0, 1))
								{
									iVar3 = unk_0xF6A72924028F588B(iVar17);
									if (!func_144(iVar3, 0))
									{
										if ((func_322(iVar3) || Global_2422736[iVar3 /*420*/].f_251 != -1) || func_113(iVar3))
										{
											iVar9 = iVar3;
											if (func_240(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_319(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_316(unk_0x9EB17624F44A8DA4(), 0) && func_221(unk_0x9EB17624F44A8DA4()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_314())
							{
								if (func_991(unk_0xF6A72924028F588B(iVar17), 0, 1))
								{
									iVar3 = unk_0xF6A72924028F588B(iVar17);
								}
								else
								{
									iVar3 = func_81();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_313(iVar3) && func_309(iVar3, iParam2)) && func_991(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1595693[iVar9 /*680*/].f_211.f_6;
								Var6 = { func_304(iVar3) };
								if (iVar3 == unk_0x9EB17624F44A8DA4())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0xDE2D3B9654C31EB3(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_83(iVar3) };
								iVar5 = func_298(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0xF85532D53BDB3017(iVar5);
								}
								Global_1574123++;
								if ((uParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_22;
								}
								if ((uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_31;
								}
								if ((uParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_22 != -1f) || (uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_314())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_293(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_292(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_286(iVar3, 0);
								if (bVar2)
								{
									if (func_285(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_284(iParam5))
								{
									func_283(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_283(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								unk_0x872F1C1F8587CCC7(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0xF6A72924028F588B(iVar17);
							if (func_991(iVar3, 0, 1) && !unk_0xC80D31E4B587871C(iVar14, iVar3))
							{
								iVar3 = unk_0xF6A72924028F588B(iVar17);
							}
							else
							{
								iVar3 = func_81();
							}
							if (func_313(iVar3))
							{
								if (func_991(unk_0xF6A72924028F588B(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1595693[iVar9 /*680*/].f_211.f_6;
									Var6 = { func_304(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_83(iVar3) };
									iVar5 = func_298(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0xF85532D53BDB3017(iVar5);
									}
									Global_1574123++;
									iVar16 = func_286(iVar3, 1);
									if (bVar2)
									{
										if (func_285(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_263(iVar3, unk_0xDE2D3B9654C31EB3(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xC80D31E4B587871C(uParam3->f_33, 11))
						{
							func_260(uParam3, iParam1);
						}
						func_259(&(uParam3->f_21));
						func_258();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xC80D31E4B587871C(uParam3->f_33, 7))
						{
							func_257(uParam3, iParam1);
							func_256(iParam1, 0, 1);
							unk_0x872F1C1F8587CCC7(&(uParam3->f_33), 7);
						}
						func_257(uParam3, iParam1);
						if (!unk_0xC80D31E4B587871C(uParam3->f_33, 11))
						{
							unk_0x872F1C1F8587CCC7(&(uParam3->f_33), 11);
						}
						if (func_252(uParam3))
						{
							Global_1574308 = 1;
						}
						func_250(uParam3);
						if (Global_1574308 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574308 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x34D11AB5BA7922C2(*iParam1))
					{
						unk_0x5A66A86A47AC3B57(7);
						unk_0x0EB9853DF8BC0D87(*iParam1, 0,122f, 0,3f, 0,28f, 0,6f, 255, 255, 255, 255, 0);
						unk_0x5A66A86A47AC3B57(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_258();
			func_324(0);
			if (unk_0xC80D31E4B587871C(uParam3->f_33, 7))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam3->f_33), 7);
			}
			if (unk_0xC80D31E4B587871C(uParam3->f_33, 10))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x189EEBAACC5D380A();
}

void func_250(var uParam0)//Position - 0xB9C1
{
	if (!func_9(&(uParam0->f_21)))
	{
		func_8(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_259(&(uParam0->f_21));
		func_251(0);
	}
}

void func_251(bool bParam0)//Position - 0xB9FD
{
	if (bParam0)
	{
		if (Global_1574308 != 2)
		{
			Global_1574308 = 2;
		}
	}
	else
	{
		switch (Global_1574308)
		{
			case 0:
				Global_1574308 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_252(var uParam0)//Position - 0xBA43
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = unk_0xF6A72924028F588B(uParam0->f_37);
	if (iVar3 != func_81() && func_991(iVar3, 0, 1))
	{
		Var2 = { func_83(iVar3) };
		iVar1 = func_255(uParam0, uParam0->f_37);
		if (func_254(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x034854587B6BF3E9(&Var2))
					{
						if (unk_0xA72EA6C94174D289(&Var2))
						{
							iVar4 = 1;
							func_253(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xAE37702876F3FA4D(&Var2))
					{
						iVar4 = 1;
						func_253(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x034854587B6BF3E9(&Var2))
					{
						if (!unk_0xA72EA6C94174D289(&Var2))
						{
							iVar4 = 1;
							func_253(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_253(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x034854587B6BF3E9(&Var2))
					{
						if (!unk_0xAE37702876F3FA4D(&Var2))
						{
							iVar4 = 1;
							func_253(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xAE37702876F3FA4D(&Var2))
					{
						iVar4 = 1;
						func_253(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_253(var uParam0, int iParam1, int iParam2)//Position - 0xBB70
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_254(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0xBB82
{
	return unk_0xA024F2175B7F181A(&uParam0, 13);
}

var func_255(var uParam0, int iParam1)//Position - 0xBB92
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_256(int iParam0, bool bParam1, int iParam2)//Position - 0xBBA2
{
	if (unk_0x008F3E3CC076EA0E(*iParam0, "COLLAPSE"))
	{
		unk_0x1869584A8A72FEDD(bParam1);
		unk_0x271AA5469AF471B3();
	}
	if (iParam2 == 1)
	{
		if (unk_0x008F3E3CC076EA0E(*iParam0, "DISPLAY_VIEW"))
		{
			unk_0x271AA5469AF471B3();
		}
	}
}

void func_257(var uParam0, int iParam1)//Position - 0xBBD8
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_33, 10))
	{
		unk_0x008F3E3CC076EA0E(*iParam1, "SET_HIGHLIGHT");
		unk_0xD07D5CD276368D36(uParam0->f_35);
		unk_0x271AA5469AF471B3();
		unk_0x872F1C1F8587CCC7(&(uParam0->f_33), 10);
	}
}

void func_258()//Position - 0xBC0F
{
	if (Global_1574308 != 0)
	{
		Global_1574308 = 0;
	}
}

void func_259(var uParam0)//Position - 0xBC24
{
	uParam0->f_1 = 0;
}

void func_260(var uParam0, int iParam1)//Position - 0xBC31
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar0);
		if (iVar2 != func_81())
		{
			if (func_991(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_262(uParam0->f_38[iVar0 /*2*/], 0);
					func_261(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1595693[iVar0 /*680*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_261(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xBCA4
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		if (unk_0x008F3E3CC076EA0E(*uParam0, "SET_ICON"))
		{
			unk_0xD07D5CD276368D36(iParam1);
			unk_0xD07D5CD276368D36(iParam2);
			if (iParam2 == 65)
			{
				unk_0xD07D5CD276368D36(iParam3);
			}
			unk_0x271AA5469AF471B3();
		}
	}
}

int func_262(int iParam0, bool bParam1)//Position - 0xBCE0
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_263(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0xBD14
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_282() && iParam4 < func_281())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574125)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574308 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x008F3E3CC076EA0E(*iParam2, sVar1))
		{
			unk_0xD07D5CD276368D36(iParam4);
			if (unk_0xC80D31E4B587871C(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_280("");
			}
			else
			{
				unk_0xD07D5CD276368D36(iParam10);
			}
			func_280(sParam1);
			unk_0xD07D5CD276368D36(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_280("");
			}
			else
			{
				unk_0xD07D5CD276368D36(65);
			}
			unk_0xD07D5CD276368D36(-1);
			func_280("");
			if (uParam3->f_108 == 6)
			{
				func_280("");
			}
			else
			{
				func_280(&sParam5);
			}
			func_268(uParam3, iParam0);
			unk_0x81D71E37E95798C1(sParam9);
			unk_0x81D71E37E95798C1(sParam9);
			if (func_267(uParam3))
			{
				func_266("DPAD_FRIEND");
			}
			else if (func_265(uParam3))
			{
				func_266("DPAD_FRIEND");
			}
			else if (func_264(uParam3))
			{
				func_266("DPAD_CREW");
			}
			else
			{
				func_266("");
			}
			unk_0x271AA5469AF471B3();
		}
	}
}

bool func_264(var uParam0)//Position - 0xBE3D
{
	return unk_0xC80D31E4B587871C(uParam0->f_33, 6);
}

bool func_265(var uParam0)//Position - 0xBE4E
{
	return unk_0xC80D31E4B587871C(uParam0->f_33, 5);
}

void func_266(char* sParam0)//Position - 0xBE5F
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

int func_267(var uParam0)//Position - 0xBE71
{
	if (func_265(uParam0) && func_264(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_268(var uParam0, int iParam1)//Position - 0xBE92
{
	if (func_279(iParam1))
	{
		unk_0xD07D5CD276368D36(121);
	}
	else if (func_273(iParam1))
	{
		unk_0xD07D5CD276368D36(122);
	}
	else if (((unk_0xC80D31E4B587871C(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xC80D31E4B587871C(Global_2422736[iParam1 /*420*/].f_419, 0))
	{
		unk_0xD07D5CD276368D36(123);
	}
	else
	{
		if (func_269())
		{
			uParam0->f_36 = 0;
		}
		unk_0x1869584A8A72FEDD(uParam0->f_36);
	}
}

int func_269()//Position - 0xBF13
{
	if (unk_0x4916190900E76373())
	{
		if (func_271() || func_270())
		{
			return 1;
		}
	}
	return 0;
}

var func_270()//Position - 0xBF38
{
	return Global_2447174.f_14;
}

int func_271()//Position - 0xBF46
{
	if (unk_0x4916190900E76373())
	{
		return func_270();
	}
	return func_272(Global_4456448.f_122309);
}

int func_272(int iParam0)//Position - 0xBF6A
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4979[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_273(int iParam0)//Position - 0xBFA4
{
	if ((func_991(iParam0, 0, 1) && func_277()) && func_274(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_274(int iParam0, bool bParam1)//Position - 0xBFD1
{
	return func_275(iParam0, bParam1, 1);
}

int func_275(int iParam0, bool bParam1, int iParam2)//Position - 0xBFE2
{
	int iVar0;
	
	if (iParam0 == func_81())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_276(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1627537[iParam0 /*532*/].f_11;
	if (iVar0 != func_81() && Global_1627537[iVar0 /*532*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_276(int iParam0, int iParam1)//Position - 0xC040
{
	if (iParam0 != func_81())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_81())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 == iParam0 && Global_1627537[iParam0 /*532*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_277()//Position - 0xC08F
{
	if (func_135(unk_0x9EB17624F44A8DA4()) || func_278())
	{
		return 0;
	}
	return 1;
}

int func_278()//Position - 0xC0B1
{
	switch (func_221(unk_0x9EB17624F44A8DA4()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_279(int iParam0)//Position - 0xC0EF
{
	if (func_269())
	{
		if (func_991(iParam0, 0, 1))
		{
			return func_240(iParam0);
		}
	}
	if ((func_991(iParam0, 0, 1) && func_277()) && func_276(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_280(char* sParam0)//Position - 0xC137
{
	unk_0x8686005F83E832AE(sParam0);
}

int func_281()//Position - 0xC145
{
	int iVar0;
	
	if (Global_1574125)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_282()//Position - 0xC161
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574125)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_283(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0xC179
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_282() && iParam3 < func_281())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574125)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574308 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x34D11AB5BA7922C2(*iParam1))
		{
			if (unk_0x008F3E3CC076EA0E(*iParam1, sVar1))
			{
				unk_0xD07D5CD276368D36(iParam3);
				if (unk_0xC80D31E4B587871C(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_280("");
				}
				else
				{
					unk_0xD07D5CD276368D36(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xAB019B170BF1309C(sParam16))
				{
					func_266(sParam16);
				}
				else
				{
					func_280(&(uParam2->f_1));
				}
				unk_0xD07D5CD276368D36(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_280("");
				}
				else
				{
					unk_0xD07D5CD276368D36(65);
				}
				if (iParam12 == 1)
				{
					unk_0xD07D5CD276368D36(iVar0);
				}
				else
				{
					unk_0xD07D5CD276368D36(-1);
				}
				if (func_314())
				{
					func_280("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xAB019B170BF1309C(sParam16))
				{
					unk_0x7E099EB35339C80D("FM_AE_ONE_INT");
					unk_0xA6D2B267C377D7B2(sParam16);
					unk_0x6223D539BCD39E76(iParam17);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 5 && !unk_0xAB019B170BF1309C(sParam16))
				{
					unk_0x7E099EB35339C80D("FM_AE_ONE_INT");
					unk_0xA6D2B267C377D7B2(sParam16);
					unk_0x6223D539BCD39E76(iParam17);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 7 && !unk_0xAB019B170BF1309C(sParam16))
				{
					unk_0x7E099EB35339C80D("FM_AE_TWO_INT");
					unk_0xA6D2B267C377D7B2(sParam16);
					unk_0x6223D539BCD39E76(iParam17);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 8 && !unk_0xAB019B170BF1309C(&(uParam2->f_104)))
				{
					unk_0x7E099EB35339C80D("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x32AD2F36F6EF5A1F(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x6223D539BCD39E76(iParam10);
					}
					unk_0xA6D2B267C377D7B2(&(uParam2->f_104));
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x7E099EB35339C80D("FM_AE_CASH");
					unk_0xC4DA7D522991B465(iParam10, 1);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x7E099EB35339C80D("FM_AE_CASH");
						unk_0xC4DA7D522991B465(iParam10, 1);
						unk_0x9748595E4799A2CF();
					}
					else
					{
						unk_0x7E099EB35339C80D("FM_NG_CASH");
						unk_0xC4DA7D522991B465(iParam10, 1);
						unk_0x9748595E4799A2CF();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xAB019B170BF1309C(&(uParam2->f_104)))
					{
						func_266(&(uParam2->f_104));
					}
					else
					{
						func_280("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x7E099EB35339C80D("STRING");
					unk_0xFD1DB5DD208735A3(iParam14, 6);
					unk_0x9748595E4799A2CF();
				}
				else if (fParam13 != -1f)
				{
					unk_0x7E099EB35339C80D("NUMBER");
					unk_0x32AD2F36F6EF5A1F(fParam13, 1);
					unk_0x9748595E4799A2CF();
				}
				else if (iParam10 != -1)
				{
					unk_0xD07D5CD276368D36(iParam10);
				}
				else
				{
					func_280("");
				}
				if (uParam2->f_108 == 6)
				{
					func_280("");
				}
				else
				{
					func_280(&sParam4);
				}
				func_268(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xAB019B170BF1309C(sParam8))
				{
					func_280("");
					func_280("");
				}
				else
				{
					unk_0x81D71E37E95798C1(sParam8);
					unk_0x81D71E37E95798C1(sParam8);
				}
				if (func_267(uParam2))
				{
					func_266("DPAD_FRIEND");
				}
				else if (func_265(uParam2))
				{
					func_266("DPAD_FRIEND");
				}
				else if (func_264(uParam2))
				{
					func_266("DPAD_CREW");
				}
				else
				{
					func_266("");
				}
				unk_0x271AA5469AF471B3();
			}
		}
	}
}

int func_284(int iParam0)//Position - 0xC4D2
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_285(int iParam0, bool bParam1)//Position - 0xC4F6
{
	if (!bParam1)
	{
		if (func_240(iParam0))
		{
			return 0;
		}
	}
	return Global_1627537[iParam0 /*532*/].f_11 != func_81();
}

int func_286(int iParam0, bool bParam1)//Position - 0xC521
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_135(iParam0)) && !func_291(iParam0))
	{
		iVar0 = func_290();
	}
	iVar1 = func_289(iParam0);
	if (!iVar1 == -1)
	{
		return func_287(iVar1);
	}
	return iVar0;
}

int func_287(int iParam0)//Position - 0xC56B
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_288(iParam0);
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

var func_288(int iParam0)//Position - 0xC62E
{
	return Global_2416800.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_289(int iParam0)//Position - 0xC645
{
	if (!iParam0 == func_81())
	{
		if (func_285(iParam0, 1))
		{
			return Global_2416800.f_2071.f_11[func_82(iParam0)];
		}
	}
	return -1;
}

int func_290()//Position - 0xC677
{
	return 21;
}

bool func_291(int iParam0)//Position - 0xC681
{
	return func_194(iParam0, 20);
}

char* func_292(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xC691
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x485A7F3B0AD1A79D())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x485A7F3B0AD1A79D())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_293(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0xC81E
{
	if (func_297(iParam3))
	{
		*fParam1 = (func_294(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_284(iParam3))
	{
		*fParam1 = (func_294(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_294(int iParam0, int iParam1)//Position - 0xC86E
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x485A7F3B0AD1A79D())
			{
				return system::to_float(iParam1);
			}
			else
			{
				return func_296(system::to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x485A7F3B0AD1A79D())
			{
				return system::to_float(iParam1);
			}
			else
			{
				return func_295(system::to_float(iParam1));
			}
			break;
	}
	return system::to_float(iParam1);
}

float func_295(float fParam0)//Position - 0xC911
{
	return (fParam0 / 1,609344f);
}

float func_296(float fParam0)//Position - 0xC921
{
	return (fParam0 / 0,3048f);
}

int func_297(int iParam0)//Position - 0xC931
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_298(int iParam0)//Position - 0xC98D
{
	int iVar0;
	
	iVar0 = func_301(iParam0);
	if (iVar0 == -1)
	{
		func_299(iParam0, 1);
		return 0;
	}
	Global_1369176[iVar0 /*5*/].f_4 = 1;
	return Global_1369176[iVar0 /*5*/].f_2;
}

void func_299(int iParam0, bool bParam1)//Position - 0xC9C3
{
	if (!func_991(iParam0, 0, 1))
	{
		return;
	}
	if (func_301(iParam0) != -1)
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
	if (func_300(iParam0))
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

int func_300(int iParam0)//Position - 0xCA2F
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

int func_301(int iParam0)//Position - 0xCA61
{
	int iVar0;
	
	if (!func_991(iParam0, 0, 1))
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
			func_302(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_302(int iParam0)//Position - 0xCAE0
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
	func_303(&(Global_1369176[iVar2 /*5*/]));
	Global_1369337 = (Global_1369337 - 1);
}

void func_303(var uParam0)//Position - 0xCB96
{
	*uParam0 = 0;
	uParam0->f_1 = func_81();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x3A711520F83BAE98())
	{
		uParam0->f_3 = unk_0xD1952A425B78FFC0();
	}
}

struct<4> func_304(int iParam0)//Position - 0xCBC3
{
	char cVar0[32];
	
	if (func_991(iParam0, 0, 1))
	{
		Global_2492157 = { func_83(iParam0) };
		if (unk_0x177281F5FA205A38())
		{
			if (func_254(Global_2492157))
			{
				if (!unk_0x1E81D00FCDFF4BBE(&Global_2492157))
				{
					return cVar0;
				}
			}
		}
		else if (!unk_0xCD032B200A8FAC1A(0))
		{
			return cVar0;
		}
		if (func_308(&Global_2492157))
		{
			Global_2492087 = { func_306(iParam0) };
			func_305(&Global_2492087, &cVar0);
		}
	}
	return cVar0;
}

void func_305(var uParam0, char* sParam1)//Position - 0xCC44
{
	unk_0x22889E844C3772CE(uParam0, 35, sParam1);
}

struct<35> func_306(int iParam0)//Position - 0xCC56
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_307(iParam0))
	{
		return Global_1312886[unk_0x9EB17624F44A8DA4() /*35*/];
	}
	Var0 = { func_83(iParam0) };
	unk_0x5CF21D71A8C4CFA6(&Var1, 35, &Var0);
	return Var1;
}

int func_307(int iParam0)//Position - 0xCC92
{
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		return 1;
	}
	return 0;
}

int func_308(var uParam0)//Position - 0xCCA8
{
	if (unk_0x5616476F69B90F14())
	{
		if (unk_0x15DBBAF9E2085C7A() && unk_0xA84F967541249268(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_309(int iParam0, int iParam1)//Position - 0xCCCE
{
	if (iParam1 == 26)
	{
		if ((func_248(iParam0) || func_312(iParam0)) || func_311(iParam0))
		{
			return 0;
		}
	}
	if (!func_310(iParam0))
	{
		return 0;
	}
	if ((!func_322(iParam0) && Global_2422736[iParam0 /*420*/].f_251 == -1) && !func_113(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_310(int iParam0)//Position - 0xCD3D
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_142, 22);
}

bool func_311(int iParam0)//Position - 0xCD56
{
	if (func_248(iParam0))
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 8);
}

int func_312(int iParam0)//Position - 0xCD7C
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 10) || unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 9));
	}
	return 0;
}

int func_313(int iParam0)//Position - 0xCDBA
{
	int iVar0;
	
	if (iParam0 == func_81())
	{
		return 0;
	}
	if (func_144(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC80D31E4B587871C(Global_1595693[iVar0 /*680*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_314()//Position - 0xCDFF
{
	switch (func_221(unk_0x9EB17624F44A8DA4()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_315(unk_0x9EB17624F44A8DA4()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_291(unk_0x9EB17624F44A8DA4()))
	{
		switch (func_221(unk_0x9EB17624F44A8DA4()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	return 0;
}

int func_315(int iParam0)//Position - 0xCF2A
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/];
	}
	return -1;
}

int func_316(int iParam0, int iParam1)//Position - 0xCF49
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 && func_317(Global_1627537[iParam0 /*532*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1)
	{
		if (func_317(Global_1627537[iParam0 /*532*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_317(int iParam0)//Position - 0xCFAF
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return func_318(iParam0, 0);
	return 0;
}

int func_318(int iParam0, int iParam1)//Position - 0xCFFD
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_319(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD052
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_991(unk_0xF6A72924028F588B(iVar0), 0, 1))
		{
			iVar1 = unk_0xF6A72924028F588B(iVar0);
			if (!func_144(iVar1, 0))
			{
				if ((func_322(iVar1) || Global_2422736[iVar1 /*420*/].f_251 != -1) || func_113(iVar1))
				{
					if (func_320(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_320(int iParam0, int iParam1, bool bParam2)//Position - 0xD0DC
{
	if (iParam1 != func_81())
	{
		if (!bParam2)
		{
			if (func_321(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1627537[iParam0 /*532*/].f_11 != func_81())
		{
			return iParam1 == Global_1627537[iParam0 /*532*/].f_11;
		}
	}
	return 0;
}

int func_321(int iParam0, int iParam1)//Position - 0xD126
{
	if (iParam1 != func_81())
	{
		if (iParam0 != func_81())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 != func_81())
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

int func_322(int iParam0)//Position - 0xD16B
{
	if (func_991(iParam0, 0, 1))
	{
		if (func_991(unk_0x9EB17624F44A8DA4(), 0, 1))
		{
			if (unk_0xEF6677A51D3956A4(iParam0, unk_0x9EB17624F44A8DA4()) || func_221(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_323(int iParam0)//Position - 0xD1AC
{
	if (unk_0x34D11AB5BA7922C2(*iParam0))
	{
		unk_0x008F3E3CC076EA0E(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xD07D5CD276368D36(0);
		unk_0x271AA5469AF471B3();
	}
}

void func_324(bool bParam0)//Position - 0xD1D3
{
	if (bParam0)
	{
		if (Global_1357527.f_2 == 0)
		{
			Global_1357527.f_2 = 1;
		}
	}
	else if (Global_1357527.f_2 == 1)
	{
		Global_1357527.f_2 = 0;
	}
}

void func_325()//Position - 0xD205
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 1))
	{
		if (func_327())
		{
			func_326();
		}
	}
}

void func_326()//Position - 0xD227
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

bool func_327()//Position - 0xD272
{
	return Global_2436181.f_2592[0 /*79*/].f_1 != 0;
}

int func_328()//Position - 0xD288
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 0) && func_327())
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 1) && func_327())
	{
		return 1;
	}
	return 0;
}

int func_329()//Position - 0xD2C9
{
	if (func_327())
	{
		if (func_330(Global_2436181.f_2592[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_330(int iParam0)//Position - 0xD2F0
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_331()//Position - 0xD370
{
	if (func_327())
	{
		if (func_332(Global_2436181.f_2592[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_332(int iParam0)//Position - 0xD397
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_333(int iParam0)//Position - 0xD429
{
	if (Global_1357527.f_1 != Global_1357527)
	{
		Global_1357527.f_1 = Global_1357527;
	}
	if (Global_1357527 != iParam0)
	{
		Global_1357527 = iParam0;
	}
}

int func_334(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0xD457
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_383(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_382();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_381())
		{
			if (func_380() > 0 && Global_1574125)
			{
				unk_0x0467A3C1EFB3B8F0();
				unk_0xA3E8E2D0F73E92C5(fVar4);
				unk_0x553231E7FC3C570D(18);
				if (unk_0xF491DD47B88AA84E())
				{
					unk_0x873070BEE2844FE5();
				}
				unk_0x553231E7FC3C570D(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_368())
		{
			func_367(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4556, 26))
	{
		func_367(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_9(&(uParam2->f_19)))
	{
		if (func_380() == 1)
		{
			func_366(bVar3, iParam0, 0);
			func_8(&(uParam2->f_19), 0, 0);
			func_367(iParam0, uParam2, 0);
		}
	}
	if (func_9(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xF491DD47B88AA84E())
		{
			unk_0x873070BEE2844FE5();
		}
		unk_0x553231E7FC3C570D(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_380() == 0 && !bParam5))
		{
			func_367(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_365();
				if (iParam1 == 26 || iParam1 == 27)
				{
					unk_0x0467A3C1EFB3B8F0();
				}
				unk_0x553231E7FC3C570D(18);
			}
			if (!unk_0xC80D31E4B587871C(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_365();
					if (iParam1 == 26 || iParam1 == 27)
					{
						unk_0x0467A3C1EFB3B8F0();
					}
					unk_0x553231E7FC3C570D(18);
				}
				unk_0xA3E8E2D0F73E92C5(fVar4);
				if (func_366(bVar3, iParam0, 0))
				{
					func_323(iParam0);
					sVar1 = func_363(iParam1, &(Global_4456448.f_122316), bParam4);
					Var0 = { func_361(iParam1) };
					if (bParam4)
					{
						func_358(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_351(iParam0, func_355(uParam2), func_352(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						func_342(iParam0, func_344(uParam2), func_343(), -1);
					}
					else if (func_269())
					{
						uParam2->f_34 = Global_1574124;
						func_358(iParam0, sVar1, &Var0, 1, -1, Global_1574124, 1);
					}
					else if (bVar2)
					{
						uParam2->f_34 = Global_1574124;
						func_358(iParam0, sVar1, "", 0, -1, Global_1574124, 1);
					}
					else
					{
						iVar5 = func_335(iParam1);
						func_358(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					unk_0x872F1C1F8587CCC7(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xC80D31E4B587871C(uParam2->f_33, 0))
			{
				Global_1574123 = uParam3;
				Global_1574122 = 1;
				unk_0xA3E8E2D0F73E92C5(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574124)
					{
						unk_0x0EE72DB1CD8A3B86(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_335(int iParam0)//Position - 0xD70A
{
	int iVar0;
	
	iVar0 = -1;
	if (func_341())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_340(unk_0x9EB17624F44A8DA4()))
			{
				iVar0 = 20;
			}
			if (func_339(unk_0x9EB17624F44A8DA4()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_338(unk_0x9EB17624F44A8DA4()))
	{
		iVar0 = 2;
	}
	if (func_336())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_336()//Position - 0xD81A
{
	if (unk_0x4916190900E76373())
	{
		return func_120();
	}
	return func_337(Global_4456448.f_122309);
}

int func_337(int iParam0)//Position - 0xD83E
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

bool func_338(int iParam0)//Position - 0xD878
{
	return Global_2422736[iParam0 /*420*/].f_130 == 4;
}

bool func_339(int iParam0)//Position - 0xD88D
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

bool func_340(int iParam0)//Position - 0xD8A2
{
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

bool func_341()//Position - 0xD8B7
{
	return Global_4456448.f_1 == 0;
}

void func_342(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xD8C7
{
	if (unk_0x34D11AB5BA7922C2(*iParam0))
	{
		unk_0x008F3E3CC076EA0E(*iParam0, "SET_TITLE");
		if (unk_0xAB019B170BF1309C(sParam2))
		{
			func_266(sParam1);
		}
		else
		{
			unk_0x7E099EB35339C80D("FM_AE_BRACKT");
			unk_0xA6D2B267C377D7B2(sParam1);
			unk_0xA6D2B267C377D7B2(sParam2);
			unk_0x9748595E4799A2CF();
		}
		func_266("");
		if (iParam3 != -1)
		{
			unk_0xD07D5CD276368D36(iParam3);
		}
		unk_0x271AA5469AF471B3();
	}
}

char* func_343()//Position - 0xD926
{
	switch (func_221(unk_0x9EB17624F44A8DA4()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_344(var uParam0)//Position - 0xD97E
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_221(unk_0x9EB17624F44A8DA4()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_347())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_346(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_346(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_345(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_176))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_345(int iParam0)//Position - 0xDDAA
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_346(bool bParam0)//Position - 0xDDDC
{
	return func_274(unk_0x9EB17624F44A8DA4(), bParam0);
}

bool func_347()//Position - 0xDDEE
{
	return (func_350() && func_348(func_349()));
}

bool func_348(int iParam0)//Position - 0xDE07
{
	return func_276(iParam0, 1);
}

int func_349()//Position - 0xDE16
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_35;
}

bool func_350()//Position - 0xDE2D
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 148;
}

void func_351(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xDE43
{
	if (unk_0x34D11AB5BA7922C2(*iParam0))
	{
		unk_0x008F3E3CC076EA0E(*iParam0, "SET_TITLE");
		if (unk_0xAB019B170BF1309C(sParam2))
		{
			func_266(sParam1);
		}
		else if (func_315(unk_0x9EB17624F44A8DA4()) == 133)
		{
			unk_0x7E099EB35339C80D("FM_AE_BRACKT_C");
			unk_0xA6D2B267C377D7B2(sParam1);
			unk_0xA6D2B267C377D7B2(sParam2);
			unk_0x9748595E4799A2CF();
		}
		else
		{
			unk_0x7E099EB35339C80D("FM_AE_BRACKT");
			unk_0xA6D2B267C377D7B2(sParam1);
			unk_0xA6D2B267C377D7B2(sParam2);
			unk_0x9748595E4799A2CF();
		}
		func_266("");
		if (iParam3 != -1)
		{
			unk_0xD07D5CD276368D36(iParam3);
		}
		unk_0x271AA5469AF471B3();
	}
}

char* func_352(var uParam0)//Position - 0xDECA
{
	int iVar0;
	
	iVar0 = func_315(unk_0x9EB17624F44A8DA4());
	if (func_354())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_353())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_353()//Position - 0xE075
{
	if (func_315(unk_0x9EB17624F44A8DA4()) == 133)
	{
		return Global_2512808.f_4777;
	}
	return -1;
}

bool func_354()//Position - 0xE098
{
	return Global_1595566;
}

char* func_355(var uParam0)//Position - 0xE0A4
{
	int iVar0;
	
	iVar0 = func_315(unk_0x9EB17624F44A8DA4());
	if (func_354())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_357() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_357() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_353())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_356() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_356()//Position - 0xE299
{
	return Global_2512808.f_4780;
}

int func_357()//Position - 0xE2A8
{
	if (func_315(unk_0x9EB17624F44A8DA4()) == 132)
	{
		return Global_2512808.f_4775;
	}
	return -1;
}

void func_358(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE2CB
{
	int iVar0;
	int iVar1;
	
	if (unk_0x34D11AB5BA7922C2(*iParam0))
	{
		unk_0x008F3E3CC076EA0E(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_280(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x7E099EB35339C80D(sParam1);
			unk_0x6223D539BCD39E76(iParam5);
			unk_0x9748595E4799A2CF();
		}
		else
		{
			func_266(sParam1);
		}
		if (func_381() && iParam6)
		{
			if (func_360())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x7E099EB35339C80D("LBD_DPD_CNT");
			unk_0x6223D539BCD39E76(iVar0);
			unk_0x6223D539BCD39E76(iVar1);
			unk_0x9748595E4799A2CF();
		}
		else
		{
			func_266(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xD07D5CD276368D36(iParam4);
			if (func_359(unk_0x9EB17624F44A8DA4()))
			{
				unk_0xD07D5CD276368D36(166);
			}
			else if (func_120())
			{
				unk_0xD07D5CD276368D36(220);
			}
		}
		unk_0x271AA5469AF471B3();
	}
}

int func_359(int iParam0)//Position - 0xE38C
{
	if (func_340(iParam0) || func_339(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_360()//Position - 0xE3AE
{
	return Global_1574125;
}

struct<4> func_361(int iParam0)//Position - 0xE3BA
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_362(unk_0x9EB17624F44A8DA4()) || func_338(unk_0x9EB17624F44A8DA4()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_33, 16);
			break;
	}
	if (func_269() && unk_0x4916190900E76373())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_33, 16);
	}
	return Var0;
}

bool func_362(int iParam0)//Position - 0xE455
{
	return Global_2422736[iParam0 /*420*/].f_130 == 5;
}

char* func_363(int iParam0, char* sParam1, bool bParam2)//Position - 0xE46A
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_269() || unk_0xAB019B170BF1309C(sParam1)))
	{
		uVar0 = func_364();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574326 == 0)
		{
			Global_1574326 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xAB019B170BF1309C(sParam1))
	{
		if (Global_1574326 == 1)
		{
			Global_1574326 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574326 == 0)
		{
			Global_1574326 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_364()//Position - 0xE5C8
{
	if (unk_0x6EFC1E00D9BE5932())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xA5DB684112875CA2())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x20D255A405234ABB())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x1AD32FD15A40AB57())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_365()//Position - 0xE60C
{
	Global_36765 = 1;
}

bool func_366(bool bParam0, int iParam1, bool bParam2)//Position - 0xE618
{
	if (bParam0)
	{
		*iParam1 = unk_0xD704C81492296A37("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0xD704C81492296A37("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0xD704C81492296A37("mp_matchmaking_card");
	}
	return unk_0x34D11AB5BA7922C2(*iParam1);
}

void func_367(int iParam0, var uParam1, bool bParam2)//Position - 0xE658
{
	unk_0x0EE72DB1CD8A3B86(&(uParam1->f_33), 7);
	Global_1574123 = 0;
	func_258();
	Global_1574122 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_9(&(uParam1->f_19)))
		{
			func_259(&(uParam1->f_19));
		}
	}
	if (unk_0x34D11AB5BA7922C2(*iParam0))
	{
		unk_0xA68F7B004463AB6F(iParam0);
	}
	if (unk_0xC80D31E4B587871C(uParam1->f_33, 0))
	{
		unk_0x0EE72DB1CD8A3B86(&(uParam1->f_33), 0);
	}
	unk_0xA3E8E2D0F73E92C5(0f);
}

int func_368()//Position - 0xE6BE
{
	if (func_379())
	{
		return 0;
	}
	if (func_378())
	{
		return 0;
	}
	if (!func_376())
	{
		return 0;
	}
	if (!func_374())
	{
		return 0;
	}
	if (func_373(8, -1))
	{
		return 0;
	}
	if (func_380() == 2)
	{
		return 0;
	}
	if (Global_2512808.f_4511)
	{
		return 0;
	}
	if (func_372())
	{
		return 0;
	}
	else if (!func_38(unk_0x9EB17624F44A8DA4(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_371(1) || func_369(1)) || Global_17162.f_124) || Global_17162)
	{
		return 0;
	}
	if (unk_0x0F30C1F1717A6437())
	{
		return 0;
	}
	if (func_86(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (Global_1655673)
	{
		return 0;
	}
	if (Global_1655677)
	{
		return 0;
	}
	if (func_199(0))
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 4))
	{
		return 0;
	}
	if (Global_1350989)
	{
		return 0;
	}
	if ((Global_1679652.f_705.f_5 || Global_1682463.f_705.f_5) || Global_1678695.f_705.f_5)
	{
		return 0;
	}
	return 1;
}

int func_369(bool bParam0)//Position - 0xE806
{
	if (unk_0x5C9167CD27AB7A44())
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (func_370(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xF2B58F79D29425B4(0, 25) || unk_0xF2B58F79D29425B4(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17162.f_130)
	{
		return 0;
	}
	if (unk_0xF2B58F79D29425B4(0, 19) || (!bParam0 && unk_0x5A632962B08A1872(0, 19)))
	{
		return 1;
	}
	if (unk_0xB9D80B12FE4456A5())
	{
		if (((unk_0xF2B58F79D29425B4(0, 166) || unk_0xF2B58F79D29425B4(0, 167)) || unk_0xF2B58F79D29425B4(0, 168)) || unk_0xF2B58F79D29425B4(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x5A632962B08A1872(0, 166) || unk_0x5A632962B08A1872(0, 167)) || unk_0x5A632962B08A1872(0, 168)) || unk_0x5A632962B08A1872(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_370(int iParam0)//Position - 0xE8F1
{
	int iVar0;
	
	if (unk_0x43E3A4534ED4A79C())
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			unk_0x5AD8564EFD5BEC2E(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_371(bool bParam0)//Position - 0xE94E
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

bool func_372()//Position - 0xE977
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_196 != 0;
}

bool func_373(int iParam0, int iParam1)//Position - 0xE98E
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

int func_374()//Position - 0xE9C9
{
	if (func_375() == 0)
	{
		return 1;
	}
	return 0;
}

int func_375()//Position - 0xE9DE
{
	return Global_1312466.f_18;
}

int func_376()//Position - 0xE9EC
{
	if (func_377())
	{
		return 1;
	}
	if (unk_0x3E9CABD07B829173())
	{
		return 0;
	}
	if (unk_0x2D0EF1D268F33F25() || unk_0x9BB64DDCD9C7B076())
	{
		return 0;
	}
	if (unk_0x0C200A19C058463C())
	{
		return 0;
	}
	return 1;
}

bool func_377()//Position - 0xEA2B
{
	return Global_1312438;
}

bool func_378()//Position - 0xEA37
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 5;
}

bool func_379()//Position - 0xEA4C
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

int func_380()//Position - 0xEA61
{
	return Global_1357530.f_68;
}

int func_381()//Position - 0xEA6F
{
	if (Global_1574124 > 16)
	{
		return 1;
	}
	return 0;
}

float func_382()//Position - 0xEA85
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0,6347182f;
	fVar1 = (1f - (1f - unk_0x85D2696CBA462F28()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_383(int iParam0)//Position - 0xEAA9
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
			return 1;
			break;
	}
	return 0;
}

int func_384()//Position - 0xEAD2
{
	if (func_385(unk_0x9EB17624F44A8DA4()))
	{
		return Global_1316732;
	}
	return 0;
}

int func_385(int iParam0)//Position - 0xEAED
{
	if (unk_0x3A711520F83BAE98())
	{
		if (func_144(iParam0, 0))
		{
			return unk_0xF593490E0BFB2E12(iParam0);
		}
	}
	return 0;
}

int func_386()//Position - 0xEB10
{
	if (func_384())
	{
		return 1;
	}
	if (func_311(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_354())
	{
		return 1;
	}
	if (func_135(unk_0x9EB17624F44A8DA4()))
	{
		switch (func_315(unk_0x9EB17624F44A8DA4()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_387(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_387(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_387(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_387(int iParam0)//Position - 0xEBEB
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 4);
}

int func_388(int iParam0)//Position - 0xEC03
{
	if ((iParam0 == 27 && func_135(unk_0x9EB17624F44A8DA4())) && !func_291(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	if (iParam0 == 26)
	{
		if (func_134(unk_0x9EB17624F44A8DA4(), 0) && func_291(unk_0x9EB17624F44A8DA4()))
		{
			return 1;
		}
		if (func_389(unk_0x9EB17624F44A8DA4()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_389(int iParam0)//Position - 0xEC67
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_135(iParam0) && !func_248(iParam0)) && !unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 8));
	bVar2 = func_291(iParam0);
	uVar3 = func_397();
	uVar4 = func_391();
	if ((bVar1 && (func_247(iParam0) || func_246(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_241(iParam0)) && !func_390(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2512808.f_4856.f_38 != iVar0)
	{
		Global_2512808.f_4856.f_38 = iVar0;
	}
	return iVar0;
}

bool func_390(int iParam0)//Position - 0xED25
{
	return func_194(iParam0, 19);
}

int func_391()//Position - 0xED35
{
	if ((func_194(unk_0x9EB17624F44A8DA4(), 21) || func_194(unk_0x9EB17624F44A8DA4(), 22)) || func_394())
	{
		return 1;
	}
	if (func_392())
	{
		func_224(22);
		return 1;
	}
	return 0;
}

int func_392()//Position - 0xED7A
{
	if (func_134(unk_0x9EB17624F44A8DA4(), 0))
	{
		if ((func_397() && !func_393()) || func_238(unk_0x9EB17624F44A8DA4(), 21))
		{
			return 1;
		}
		else
		{
			func_223(27);
		}
	}
	return 0;
}

bool func_393()//Position - 0xEDBD
{
	return Global_1312416.f_1;
}

bool func_394()//Position - 0xEDCB
{
	return func_395(306, -1);
}

int func_395(int iParam0, int iParam1)//Position - 0xEDDB
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547365[iParam0 /*3*/][func_396(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_396(int iParam0)//Position - 0xEE07
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_146();
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

bool func_397()//Position - 0xEE3B
{
	return Global_1312416;
}

bool func_398()//Position - 0xEE47
{
	return unk_0xC80D31E4B587871C(Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_1, 1);
}

void func_399()//Position - 0xEE5E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(1))
	{
		iVar1 = unk_0xA387B84DA2EB1BEE(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_400(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_400(int iParam0)//Position - 0xEE9B
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &Var0, 11))
	{
		if (Local_131.f_34 > -1)
		{
			if (func_398())
			{
				if (!func_391())
				{
					if (!unk_0xC80D31E4B587871C(Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_1, 5))
					{
						if (!unk_0xC80D31E4B587871C(Local_131.f_1, 4))
						{
							if (unk_0x6ADD12BF4D6D2587(Var0))
							{
								if (Var0.f_3)
								{
									if (unk_0x52C56492660097C7(Var0))
									{
										iVar2 = unk_0x07F64790D10D1DB5(Var0);
										if (unk_0x1417A5CC924DE120(iVar2))
										{
											iVar3 = unk_0xDF35170AEEFB473B(iVar2);
											if (iVar3 == unk_0xF6A72924028F588B(Local_131.f_34))
											{
												if (unk_0x6ADD12BF4D6D2587(Var0.f_1))
												{
													if (unk_0x52C56492660097C7(Var0.f_1))
													{
														iVar1 = unk_0x07F64790D10D1DB5(Var0.f_1);
														if (unk_0x1417A5CC924DE120(iVar1))
														{
															iVar4 = unk_0xDF35170AEEFB473B(iVar1);
															if (iVar4 == unk_0x9EB17624F44A8DA4())
															{
																unk_0x872F1C1F8587CCC7(&(Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_1), 5);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (func_398())
	{
		if (!func_194(unk_0x9EB17624F44A8DA4(), 20))
		{
			if (unk_0x6ADD12BF4D6D2587(Var0))
			{
				if (unk_0x52C56492660097C7(Var0))
				{
					iVar2 = unk_0x07F64790D10D1DB5(Var0);
					if (unk_0x1417A5CC924DE120(iVar2))
					{
						iVar3 = unk_0xDF35170AEEFB473B(iVar2);
						if (unk_0x6ADD12BF4D6D2587(Var0.f_1))
						{
							if (unk_0x52C56492660097C7(Var0.f_1))
							{
								iVar1 = unk_0x07F64790D10D1DB5(Var0.f_1);
								if (unk_0x1417A5CC924DE120(iVar1))
								{
									iVar4 = unk_0xDF35170AEEFB473B(iVar1);
									if (iVar4 == unk_0x9EB17624F44A8DA4())
									{
										if (unk_0xDE597476C8B96D1A(iVar3))
										{
											if (func_285(iVar3, 1))
											{
												if (Local_131.f_33 > -1)
												{
													iVar5 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Local_131.f_33));
													if (func_320(iVar3, iVar5, 1))
													{
														func_401(0);
														func_243();
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_401(int iParam0)//Position - 0xF028
{
	if (!func_291(unk_0x9EB17624F44A8DA4()))
	{
		if (iParam0 || func_389(unk_0x9EB17624F44A8DA4()) != 0)
		{
			func_224(20);
			if (func_135(unk_0x9EB17624F44A8DA4()))
			{
				if (!unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 8))
				{
					unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 8);
				}
			}
		}
	}
}

void func_402()//Position - 0xF08F
{
	switch (Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_2)
	{
		case 0:
			func_745();
			func_403();
			if (Local_131.f_32 == 2)
			{
				Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_2 = 2;
			}
			else if (Local_131.f_32 == 3)
			{
				Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_2 = 3;
			}
			break;
		
		case 2:
			func_403();
			if (Local_131.f_32 == 3)
			{
				Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_2 = 3;
			}
			break;
		
		case 3:
			func_909();
			break;
	}
}

void func_403()//Position - 0xF10D
{
	struct<10> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	iVar1 = func_81();
	iVar2 = func_81();
	iVar3 = func_81();
	if (!unk_0xC80D31E4B587871C(Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_1, 4))
	{
		if (!unk_0xC80D31E4B587871C(iLocal_133, 9))
		{
			if (unk_0xC80D31E4B587871C(Local_131.f_1, 1))
			{
				if (unk_0x622FF3AE4B1D07C3() == Local_131.f_33 || func_897() == Local_131.f_33)
				{
					if (func_389(unk_0x9EB17624F44A8DA4()) >= 2)
					{
						sVar4 = func_744();
						iVar5 = func_743(unk_0x9EB17624F44A8DA4());
						func_741(87, "GB_WINNER", "BIGM_SGHTYD", sVar4, iVar5, 0, -1, -1, -1, 2, -1);
					}
					if (!unk_0xC80D31E4B587871C(iLocal_133, 6))
					{
						func_679(1, 1, 0, 0, -1, -1, -1, -1, -1);
						unk_0x872F1C1F8587CCC7(&iLocal_133, 6);
					}
					func_504(142, 1, &Var0, 0);
					unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
				}
				else if (func_398())
				{
					if (func_285(unk_0x9EB17624F44A8DA4(), 1))
					{
						if (func_389(unk_0x9EB17624F44A8DA4()) >= 2)
						{
							sVar4 = func_498(unk_0xF6A72924028F588B(Local_131.f_34));
							iVar5 = func_743(unk_0xF6A72924028F588B(Local_131.f_34));
							func_741(88, "GB_WORK_OVER", "BIGM_SGHTFD3", sVar4, iVar5, 0, -1, -1, -1, 2, -1);
						}
						if (!unk_0xC80D31E4B587871C(iLocal_133, 6))
						{
							func_679(0, 2, 0, 0, -1, -1, -1, -1, -1);
							unk_0x872F1C1F8587CCC7(&iLocal_133, 6);
						}
						func_504(142, 0, &Var0, 0);
					}
					else
					{
						if (func_389(unk_0x9EB17624F44A8DA4()) >= 2)
						{
							sVar4 = func_498(unk_0xF6A72924028F588B(Local_131.f_34));
							iVar5 = func_743(unk_0xF6A72924028F588B(Local_131.f_34));
							func_741(88, "GB_WORK_OVER", "BIGM_SGHTFD5", sVar4, iVar5, 0, -1, -1, -1, 2, -1);
						}
						if (!unk_0xC80D31E4B587871C(iLocal_133, 6))
						{
							func_679(0, 2, 0, 0, -1, -1, -1, -1, -1);
							unk_0x872F1C1F8587CCC7(&iLocal_133, 6);
						}
						func_504(142, 0, &Var0, 0);
					}
				}
				unk_0x872F1C1F8587CCC7(&iLocal_133, 9);
			}
			else if (unk_0xC80D31E4B587871C(Local_131.f_1, 3))
			{
				func_497(88, "GB_WORK_OVER", "BIGM_SGHTFT", 1, -1, 2);
				if (!unk_0xC80D31E4B587871C(iLocal_133, 6))
				{
					func_679(0, 7, 0, 0, -1, -1, -1, -1, -1);
					unk_0x872F1C1F8587CCC7(&iLocal_133, 6);
				}
				func_504(142, 0, &Var0, 0);
				unk_0x872F1C1F8587CCC7(&iLocal_133, 9);
			}
			else if (unk_0xC80D31E4B587871C(Local_131.f_1, 4))
			{
				if (Local_131.f_35 > -1)
				{
					iVar2 = unk_0xF6A72924028F588B(Local_131.f_35);
				}
				if (unk_0x622FF3AE4B1D07C3() == Local_131.f_33)
				{
					if (func_389(unk_0x9EB17624F44A8DA4()) >= 2)
					{
						if (unk_0x552F39AE86E07792(iVar2))
						{
							if (func_285(iVar2, 1))
							{
								sVar4 = func_498(iVar2);
								iVar5 = func_743(iVar2);
							}
							else
							{
								sVar4 = unk_0xDE2D3B9654C31EB3(iVar2);
								iVar5 = 1;
							}
							func_741(88, "GB_WORK_OVER", "BIGM_SGHTFMK", sVar4, iVar5, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_741(88, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar4, iVar5, 0, -1, -1, -1, 2, -1);
						}
					}
					func_504(142, 0, &Var0, 0);
					if (!unk_0xC80D31E4B587871C(iLocal_133, 6))
					{
						func_679(0, 2, 0, 0, -1, -1, -1, -1, -1);
						unk_0x872F1C1F8587CCC7(&iLocal_133, 6);
					}
				}
				else if (func_897() == Local_131.f_33)
				{
					iVar1 = unk_0xF6A72924028F588B(Local_131.f_34);
					if (iVar1 != func_81())
					{
						if (func_389(unk_0x9EB17624F44A8DA4()) >= 2)
						{
							if (unk_0x552F39AE86E07792(iVar2))
							{
								if (func_285(iVar2, 1))
								{
									sVar4 = func_498(iVar2);
									iVar5 = func_743(iVar2);
								}
								else
								{
									sVar4 = unk_0xDE2D3B9654C31EB3(iVar2);
									iVar5 = 1;
								}
								func_741(88, "GB_WORK_OVER", "BIGM_SGHTGK", sVar4, iVar5, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_741(88, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar4, iVar5, 0, -1, -1, -1, 2, -1);
							}
						}
						func_504(142, 0, &Var0, 0);
						if (!unk_0xC80D31E4B587871C(iLocal_133, 6))
						{
							func_679(0, 2, 0, 0, -1, -1, -1, -1, -1);
							unk_0x872F1C1F8587CCC7(&iLocal_133, 6);
						}
					}
				}
				else if (func_398())
				{
					iVar2 = unk_0xF6A72924028F588B(Local_131.f_35);
					if (iVar2 != func_81())
					{
						if (iVar2 == unk_0x9EB17624F44A8DA4())
						{
							if (func_389(unk_0x9EB17624F44A8DA4()) >= 2)
							{
								if (func_496(1))
								{
									func_497(87, "GB_WINNER", "BIGM_SGHTYK", 1, -1, 2);
								}
								else
								{
									func_497(87, "GB_WINNER", "BIGM_SGHTYK2", 1, -1, 2);
								}
							}
							unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
							if (!unk_0xC80D31E4B587871C(iLocal_133, 6))
							{
								func_679(1, 1, 0, 0, -1, -1, -1, -1, -1);
								unk_0x872F1C1F8587CCC7(&iLocal_133, 6);
							}
							func_504(142, 1, &Var0, 0);
						}
						else if (func_496(1))
						{
							iVar3 = func_495();
							if (func_320(iVar2, iVar3, 1))
							{
								if (func_389(unk_0x9EB17624F44A8DA4()) >= 2)
								{
									func_466(87, iVar2, -1, "BIGM_SGHTWK", "GB_WINNER", 1, -1, 2, -1);
								}
								if (!unk_0xC80D31E4B587871C(iLocal_133, 6))
								{
									func_679(1, 1, 0, 0, -1, -1, -1, -1, -1);
									unk_0x872F1C1F8587CCC7(&iLocal_133, 6);
								}
								func_504(142, 0, &Var0, 0);
							}
							else
							{
								if (func_389(unk_0x9EB17624F44A8DA4()) >= 2)
								{
									if (unk_0x552F39AE86E07792(iVar2))
									{
										if (func_285(iVar2, 1))
										{
											sVar4 = func_498(iVar2);
											iVar5 = func_743(iVar2);
										}
										else
										{
											sVar4 = unk_0xDE2D3B9654C31EB3(iVar2);
											iVar5 = 1;
										}
										func_741(88, "GB_WORK_OVER", "BIGM_SGHTWK", sVar4, iVar5, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_497(88, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2);
									}
								}
								if (!unk_0xC80D31E4B587871C(iLocal_133, 6))
								{
									func_679(0, 2, 0, 0, -1, -1, -1, -1, -1);
									unk_0x872F1C1F8587CCC7(&iLocal_133, 6);
								}
								func_504(142, 0, &Var0, 0);
							}
						}
						else
						{
							if (func_389(unk_0x9EB17624F44A8DA4()) >= 2)
							{
								if (unk_0x552F39AE86E07792(iVar2))
								{
									if (func_285(iVar2, 1))
									{
										sVar4 = func_498(iVar2);
										iVar5 = func_743(iVar2);
									}
									else
									{
										sVar4 = unk_0xDE2D3B9654C31EB3(iVar2);
										iVar5 = 1;
									}
									func_741(88, "GB_WORK_OVER", "BIGM_SGHTNGK", sVar4, iVar5, 0, -1, -1, -1, 2, -1);
								}
								else
								{
									func_497(88, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2);
								}
							}
							if (!unk_0xC80D31E4B587871C(iLocal_133, 6))
							{
								func_679(0, 2, 0, 0, -1, -1, -1, -1, -1);
								unk_0x872F1C1F8587CCC7(&iLocal_133, 6);
							}
							func_504(142, 0, &Var0, 0);
						}
					}
				}
				unk_0x872F1C1F8587CCC7(&iLocal_133, 9);
			}
			else if (unk_0xC80D31E4B587871C(Local_131.f_1, 5))
			{
				if (func_436())
				{
					if (func_896())
					{
						if (func_389(unk_0x9EB17624F44A8DA4()) >= 2)
						{
						}
					}
					else if (func_389(unk_0x9EB17624F44A8DA4()) >= 2)
					{
						func_497(88, "GB_WORK_OVER", "BIGM_SGHTRBQ", 1, -1, 2);
					}
				}
				if (!unk_0xC80D31E4B587871C(iLocal_133, 6))
				{
					func_679(0, 8, 0, 0, -1, -1, -1, -1, -1);
					unk_0x872F1C1F8587CCC7(&iLocal_133, 6);
				}
				func_504(159, 0, &Var0, 0);
				unk_0x872F1C1F8587CCC7(&iLocal_133, 9);
			}
		}
		if (unk_0xC80D31E4B587871C(iLocal_133, 9))
		{
			func_429();
			if (!unk_0xC80D31E4B587871C(iLocal_134, 8))
			{
				unk_0x872F1C1F8587CCC7(&iLocal_134, 8);
			}
			if (!unk_0xC80D31E4B587871C(iLocal_133, 10))
			{
				if (Local_131.f_34 != -1)
				{
					if (unk_0xC80D31E4B587871C(iLocal_133, 5))
					{
						if (unk_0x552F39AE86E07792(unk_0xF6A72924028F588B(Local_131.f_34)))
						{
							func_427(unk_0xF6A72924028F588B(Local_131.f_34), 432, 0);
							func_425(unk_0xF6A72924028F588B(Local_131.f_34), 1, 0);
							func_424(unk_0xF6A72924028F588B(Local_131.f_34), 0, 0);
							func_423(unk_0xF6A72924028F588B(Local_131.f_34), 0);
							func_422(unk_0xF6A72924028F588B(Local_131.f_34), Global_262145.f_11695, 0);
							unk_0x872F1C1F8587CCC7(&iLocal_133, 10);
						}
					}
				}
			}
			if (func_404(&uLocal_423, 1, 0))
			{
				unk_0x872F1C1F8587CCC7(&(Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_1), 4);
			}
		}
	}
}

int func_404(var uParam0, bool bParam1, int iParam2)//Position - 0xF859
{
	bool bVar0;
	
	func_224(29);
	if ((*uParam0 > 0 && !func_327()) && func_389(unk_0x9EB17624F44A8DA4()) != 0)
	{
		if (!func_419())
		{
			func_418();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_9(&(uParam0->f_3)))
			{
				func_8(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				unk_0x872F1C1F8587CCC7(&(Global_1667858.f_3), 2);
				if (bParam1)
				{
					unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4553), 0);
					func_8(&(uParam0->f_5), 0, 0);
				}
				func_8(&(uParam0->f_1), 0, 0);
				func_417(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_9(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_411(iParam2);
				func_417(uParam0, 2);
			}
			break;
		
		case 2:
			func_411(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_405(func_406(0)))
				{
					unk_0x3E80C2F7BC665259(1);
				}
				func_417(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4553), 1);
				unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 2);
				func_417(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4553), 1);
			unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 2);
			return 1;
	}
	return 0;
}

int func_405(char* sParam0)//Position - 0xF9D3
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

char* func_406(int iParam0)//Position - 0xF9E6
{
	if (((func_409(unk_0x9EB17624F44A8DA4()) || func_408(unk_0x9EB17624F44A8DA4())) || func_347()) || iParam0)
	{
		if (func_408(unk_0x9EB17624F44A8DA4()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_317(func_407()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_407()//Position - 0xFA48
{
	return Global_1644563;
}

bool func_408(int iParam0)//Position - 0xFA54
{
	return func_318(func_221(iParam0), 0);
}

bool func_409(int iParam0)//Position - 0xFA67
{
	return func_410(func_221(iParam0));
}

int func_410(int iParam0)//Position - 0xFA79
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 148 && func_276(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_411(int iParam0)//Position - 0xFB5B
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 0))
	{
		if ((((((((((!unk_0x2918F48A30D03841() && !unk_0xC80D31E4B587871C(Global_2512808.f_778, 2)) && func_991(unk_0x9EB17624F44A8DA4(), 1, 1)) && !Global_68215) && !Global_53084) && !unk_0x3E9CABD07B829173()) && !func_194(unk_0x9EB17624F44A8DA4(), 22)) && func_389(unk_0x9EB17624F44A8DA4()) != 0) && !func_415(func_416())) && !func_409(unk_0x9EB17624F44A8DA4())) && !func_414(func_221(unk_0x9EB17624F44A8DA4())))
		{
			unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4553), 1);
			func_413(func_406(iParam0), -1);
			func_412(1);
			unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4553), 0);
		}
	}
}

void func_412(int iParam0)//Position - 0xFC2D
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_346(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_327())
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Boss_Message_Orange", sVar0, false);
	}
}

void func_413(char* sParam0, int iParam1)//Position - 0xFC64
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, false, iParam1);
}

int func_414(int iParam0)//Position - 0xFC7B
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_415(int iParam0)//Position - 0xFCCB
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

int func_416()//Position - 0xFCF1
{
	char* sVar0;
	
	sVar0 = unk_0x436287B7DB306165();
	if (unk_0x74C475EB8E73D398(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_417(var uParam0, int iParam1)//Position - 0x101AB
{
	*uParam0 = iParam1;
}

void func_418()//Position - 0x101B8
{
	Global_2458365 = 1;
}

int func_419()//Position - 0x101C5
{
	if (((((((func_221(unk_0x9EB17624F44A8DA4()) == 170 || func_221(unk_0x9EB17624F44A8DA4()) == 219) || func_221(unk_0x9EB17624F44A8DA4()) == 221) || func_221(unk_0x9EB17624F44A8DA4()) == 220) || func_221(unk_0x9EB17624F44A8DA4()) == 216) || func_221(unk_0x9EB17624F44A8DA4()) == 215) || func_221(unk_0x9EB17624F44A8DA4()) == 214) || func_221(unk_0x9EB17624F44A8DA4()) == 218)
	{
		return 1;
	}
	if (func_420(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	return 0;
}

int func_420(int iParam0)//Position - 0x10266
{
	if (iParam0 != func_81())
	{
		if (func_991(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_421(Global_2422736[iParam0 /*420*/].f_324.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_421(int iParam0)//Position - 0x102AC
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

void func_422(int iParam0, var uParam1, bool bParam2)//Position - 0x10570
{
	int iVar0;
	
	if (iParam0 == func_81())
	{
		return;
	}
	if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == func_230())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0x8F05914DD835E69F(Global_2415606.f_776[iParam0]) || Global_2415606.f_776[iParam0] == unk_0xBBA15366508D1BDE())
	{
		if (bParam2)
		{
			unk_0x872F1C1F8587CCC7(&(Global_2415606.f_389), iVar0);
			Global_2415606.f_545[iVar0] = uParam1;
			Global_2415606.f_776[iParam0] = unk_0xBBA15366508D1BDE();
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_389), iVar0);
			Global_2415606.f_776[iParam0] = -1;
		}
	}
}

void func_423(int iParam0, bool bParam1)//Position - 0x10610
{
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_2415606.f_365), iParam0);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_365), iParam0);
	}
	if (unk_0xA6DECE14FC9A8C51(Global_2415606[iParam0]))
	{
		if (bParam1)
		{
			unk_0x66DAED36FB41050D(Global_2415606[iParam0], false);
		}
		else
		{
			unk_0x66DAED36FB41050D(Global_2415606[iParam0], true);
		}
	}
}

void func_424(int iParam0, bool bParam1, bool bParam2)//Position - 0x1066B
{
	if (bParam1)
	{
		if (func_991(iParam0, 1, 1))
		{
			Global_2415606.f_710[iParam0] = unk_0xBBA15366508D1BDE();
			unk_0x872F1C1F8587CCC7(&(Global_2415606.f_364), iParam0);
			func_423(iParam0, bParam2);
		}
	}
	else
	{
		func_423(iParam0, bParam2);
		unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_364), iParam0);
		Global_2415606.f_710[iParam0] = -1;
	}
}

void func_425(int iParam0, int iParam1, bool bParam2)//Position - 0x106CE
{
	int iVar0;
	
	if (iParam0 == func_81())
	{
		return;
	}
	if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == func_230())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_426(iParam0))
	{
		if (bParam2)
		{
			unk_0x872F1C1F8587CCC7(&(Global_2415606.f_386), iVar0);
			Global_2415606.f_611[iParam0] = unk_0xBBA15366508D1BDE();
			Global_2415606.f_446[iVar0] = iParam1;
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_386), iVar0);
			Global_2415606.f_611[iParam0] = -1;
		}
	}
}

int func_426(int iParam0)//Position - 0x1074E
{
	if (!unk_0x8F05914DD835E69F(Global_2415606.f_611[iParam0]) || Global_2415606.f_611[iParam0] == unk_0xBBA15366508D1BDE())
	{
		return 1;
	}
	return 0;
}

void func_427(int iParam0, int iParam1, bool bParam2)//Position - 0x10784
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_81())
	{
		return;
	}
	if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == func_230())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0x8F05914DD835E69F(Global_2415606.f_578[iParam0]) || Global_2415606.f_578[iParam0] == unk_0xBBA15366508D1BDE())
	{
		if (bParam2)
		{
			if (!unk_0xC80D31E4B587871C(Global_2415606.f_385, iVar0))
			{
				func_428();
			}
			unk_0x872F1C1F8587CCC7(&(Global_2415606.f_385), iVar0);
			Global_2415606.f_413[iVar0] = uVar1;
			Global_2415606.f_578[iParam0] = unk_0xBBA15366508D1BDE();
		}
		else
		{
			if (unk_0xC80D31E4B587871C(Global_2415606.f_385, iVar0))
			{
				func_428();
			}
			unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_385), iVar0);
			Global_2415606.f_578[iParam0] = -1;
		}
	}
}

void func_428()//Position - 0x10851
{
	Global_2415606.f_1009 = 1;
}

void func_429()//Position - 0x10861
{
	if (!func_435())
	{
		return;
	}
	if (!unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == Global_1312576.f_9)
	{
		return;
	}
	func_430();
}

void func_430()//Position - 0x1088E
{
	func_432();
	func_431(0);
}

void func_431(bool bParam0)//Position - 0x1089F
{
	bool bVar0;
	
	bVar0 = unk_0x3A711520F83BAE98();
	Global_1312576 = 20;
	StringCopy(&(Global_1312576.f_1), "", 32);
	Global_1312576.f_9 = 0;
	if (bVar0)
	{
		Global_1312576.f_10 = unk_0xD1952A425B78FFC0();
		Global_1312576.f_11 = unk_0xD1952A425B78FFC0();
	}
	StringCopy(&(Global_1312576.f_12), "", 16);
	StringCopy(&(Global_1312576.f_16), "", 64);
	StringCopy(&(Global_1312576.f_32), "", 64);
	Global_1312576.f_52 = 0;
	Global_1312576.f_53 = 0;
	Global_1312576.f_54 = 0;
	Global_1312576.f_55 = -1;
	Global_1312576.f_56 = 0;
	Global_1312576.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_432()//Position - 0x10931
{
	if (!func_434())
	{
	}
	if (func_435())
	{
		unk_0x08EE7E0EF8FAFD9F(&(Global_1312576.f_12));
		func_433();
		unk_0x0BD2F1A526F1459A();
	}
}

void func_433()//Position - 0x1095A
{
	switch (Global_1312576)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6223D539BCD39E76(Global_1312576.f_52);
			return;
		
		case 2:
			unk_0x6223D539BCD39E76(Global_1312576.f_52);
			unk_0x6223D539BCD39E76(Global_1312576.f_53);
			return;
		
		case 3:
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 4:
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 5:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			return;
		
		case 6:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			return;
		
		case 7:
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 8:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 9:
			unk_0x4ADDDBC65685A05E(&(Global_1312576.f_16));
			return;
		
		case 10:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_32));
			return;
		
		case 12:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 13:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_57);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 11:
			unk_0x4ADDDBC65685A05E(&(Global_1312576.f_16));
			return;
		
		case 14:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 15:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_57);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 17:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_32));
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_48));
			return;
		
		case 16:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			return;
		
		case 19:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 18:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_48));
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_32));
			return;
		
		default:
	}
}

int func_434()//Position - 0x10BCC
{
	if (!func_435())
	{
		return 0;
	}
	unk_0x4AF56F03659830D9(&(Global_1312576.f_12));
	func_433();
	return unk_0xC20F7134D3568246();
}

int func_435()//Position - 0x10BF2
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

int func_436()//Position - 0x10C08
{
	if (!func_437(1, 1, 1))
	{
		return 0;
	}
	if (func_391())
	{
		return 0;
	}
	return 1;
}

int func_437(bool bParam0, bool bParam1, bool bParam2)//Position - 0x10C2B
{
	if (func_465(unk_0x9EB17624F44A8DA4(), 29))
	{
		return 0;
	}
	if (func_238(unk_0x9EB17624F44A8DA4(), 21))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0xB01117EF93F91860())
		{
			return 0;
		}
	}
	if (!func_310(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x78E929955680CA05())
		{
			return 0;
		}
	}
	if (func_114(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_464())
	{
		return 0;
	}
	if (func_378())
	{
		return 0;
	}
	if (func_463())
	{
		return 0;
	}
	if (func_372())
	{
		return 0;
	}
	if (unk_0x4916190900E76373())
	{
		return 0;
	}
	if (func_39(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (!func_374())
	{
		return 0;
	}
	if (func_238(unk_0x9EB17624F44A8DA4(), 0) || func_238(unk_0x9EB17624F44A8DA4(), 3))
	{
		return 0;
	}
	if ((func_238(unk_0x9EB17624F44A8DA4(), 12) || func_238(unk_0x9EB17624F44A8DA4(), 14)) || func_238(unk_0x9EB17624F44A8DA4(), 13))
	{
		return 0;
	}
	if (func_461(unk_0x9EB17624F44A8DA4(), 0, 0, 0, 0, 0, 0, 0, 1))
	{
		if (!func_442())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_441())
		{
			return 0;
		}
	}
	if (Global_1655673)
	{
		return 0;
	}
	if (func_133(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_440())
	{
		return 0;
	}
	if (func_439(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 4))
	{
		return 0;
	}
	if (func_438(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_438(int iParam0)//Position - 0x10DC5
{
	if (Global_2422736[iParam0 /*420*/].f_276.f_4 != 0 || Global_2422736[iParam0 /*420*/].f_276.f_5)
	{
		return 1;
	}
	return 0;
}

int func_439(int iParam0)//Position - 0x10DF9
{
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 14))
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 11))
	{
		return 1;
	}
	return 0;
}

int func_440()//Position - 0x10E38
{
	if (Global_4253357.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_441()//Position - 0x10E50
{
	return Global_92885.f_316 > 0;
}

int func_442()//Position - 0x10E61
{
	int iVar0;
	
	iVar0 = func_221(unk_0x9EB17624F44A8DA4());
	if (((func_460(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17) || func_459(unk_0x9EB17624F44A8DA4())) || func_458(unk_0x9EB17624F44A8DA4())) || func_453(unk_0x9EB17624F44A8DA4()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_451(unk_0x9EB17624F44A8DA4()))
	{
		if (func_450(iVar0) || func_449(iVar0))
		{
			return 1;
		}
	}
	if (func_420(unk_0x9EB17624F44A8DA4()))
	{
		if (func_449(iVar0))
		{
			return 1;
		}
	}
	if (func_448(unk_0x9EB17624F44A8DA4()))
	{
		if (func_447(iVar0))
		{
			return 1;
		}
	}
	if (func_446(unk_0x9EB17624F44A8DA4()))
	{
		if (func_445(iVar0))
		{
			return 1;
		}
	}
	if (func_444(unk_0x9EB17624F44A8DA4()))
	{
		if (func_443(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_443(int iParam0)//Position - 0x10F66
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_444(int iParam0)//Position - 0x10F80
{
	if (iParam0 != func_81())
	{
		if (func_991(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_421(Global_2422736[iParam0 /*420*/].f_324.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_445(int iParam0)//Position - 0x10FC7
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_446(int iParam0)//Position - 0x10FE7
{
	if (iParam0 != func_81())
	{
		if (func_991(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_421(Global_2422736[iParam0 /*420*/].f_324.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_447(int iParam0)//Position - 0x1102D
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_448(int iParam0)//Position - 0x11053
{
	if (iParam0 != func_81())
	{
		if (func_991(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_421(Global_2422736[iParam0 /*420*/].f_324.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_449(int iParam0)//Position - 0x11099
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

int func_450(int iParam0)//Position - 0x110BF
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_451(int iParam0)//Position - 0x11115
{
	if (func_452(Global_1595693[iParam0 /*680*/].f_266.f_17, -1))
	{
		return 1;
	}
	return 0;
}

int func_452(int iParam0, int iParam1)//Position - 0x11138
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

int func_453(int iParam0)//Position - 0x11215
{
	if (func_454(Global_1595693[iParam0 /*680*/].f_266.f_17, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_454(int iParam0, bool bParam1, bool bParam2)//Position - 0x11239
{
	if (bParam2)
	{
		return func_455(unk_0x9EB17624F44A8DA4(), 0);
	}
	if (bParam1)
	{
		if (func_455(unk_0x9EB17624F44A8DA4(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_455(int iParam0, bool bParam1)//Position - 0x11314
{
	if (Global_1595537 != func_81())
	{
		if (!func_457(Global_1595537))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x9EB17624F44A8DA4() != Global_1595537)
			{
				if (unk_0xC80D31E4B587871C(Global_2422736[Global_1595537 /*420*/].f_210, 24) || func_456(Global_1595537))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_210, 24);
}

int func_456(int iParam0)//Position - 0x11380
{
	if (iParam0 != func_81())
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_210, 9);
	}
	return 0;
}

int func_457(int iParam0)//Position - 0x113A6
{
	if (iParam0 != func_81())
	{
		return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 2);
	}
	return 0;
}

int func_458(int iParam0)//Position - 0x113D2
{
	if (iParam0 != func_81())
	{
		if (func_991(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_421(Global_2422736[iParam0 /*420*/].f_324.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_459(int iParam0)//Position - 0x11418
{
	if (iParam0 != func_81())
	{
		if (func_991(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_421(Global_2422736[iParam0 /*420*/].f_324.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_460(int iParam0)//Position - 0x1145E
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

int func_461(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x1148D
{
	if (Global_1595693[iParam0 /*680*/].f_266.f_17 > 0)
	{
		if (bParam1)
		{
			if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_459(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_420(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_458(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_448(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_446(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_444(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_462(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_462(int iParam0)//Position - 0x11553
{
	if (iParam0 != func_81())
	{
		if (func_991(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_81())
			{
				return func_421(Global_2422736[iParam0 /*420*/].f_324.f_1) == 8;
			}
		}
	}
	return 0;
}

bool func_463()//Position - 0x115B3
{
	return Global_1312854;
}

bool func_464()//Position - 0x115BF
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 0);
}

bool func_465(int iParam0, int iParam1)//Position - 0x115DB
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_5, iParam1);
}

int func_466(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x115F6
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_494(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_16 = iParam1;
	Var0.f_70 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_71 = iParam7;
	if (iParam8 != -1)
	{
		unk_0x872F1C1F8587CCC7(&(Var0.f_68), iParam8);
	}
	return func_467(&Var0);
}

int func_467(var uParam0)//Position - 0x11671
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2436181.f_2910)
		{
			return 0;
		}
	}
	func_477(uParam0, uParam0->f_16);
	func_476(uParam0);
	if (func_120())
	{
		func_476(uParam0);
	}
	if (func_475(uParam0->f_1))
	{
		func_468();
		if (Global_2436181.f_2592[0 /*79*/].f_2 == 0)
		{
			Global_2436181.f_2592[0 /*79*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2436181.f_2592[0 /*79*/].f_1 == 13 || Global_2436181.f_2592[0 /*79*/].f_1 == 53) || Global_2436181.f_2592[0 /*79*/].f_1 == 54) || Global_2436181.f_2592[0 /*79*/].f_1 == 58)
		{
			Global_2436181.f_2592[0 /*79*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2436181.f_2592[iVar0 + 1 /*79*/] = { Global_2436181.f_2592[iVar0 /*79*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2436181.f_2592[1 /*79*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2436181.f_2592[iVar0 /*79*/].f_2 == 0)
		{
			Global_2436181.f_2592[iVar0 /*79*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_468();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 1);
				Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86)
			{
				if (func_330(Global_2436181.f_2592[iVar0 /*79*/].f_1))
				{
					Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
					unk_0x872F1C1F8587CCC7(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_468()//Position - 0x11832
{
	bool bVar0;
	
	if (Global_2436181.f_2911)
	{
		return;
	}
	if (!Global_71124)
	{
		Global_71124 = 1;
		bVar0 = true;
	}
	func_469();
	if (bVar0)
	{
		Global_71124 = 0;
	}
}

void func_469()//Position - 0x11865
{
	Global_2436181.f_2912 = 0;
	Global_2436181.f_2912.f_578 = 0;
	func_473(&(Global_2436181.f_2912.f_1));
	Global_2436181.f_2912.f_1.f_1 = 0;
	func_470(&(Global_2436181.f_2912.f_1));
}

void func_470(var uParam0)//Position - 0x118A6
{
	if (uParam0->f_1 != 0)
	{
		unk_0xA68F7B004463AB6F(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0xB9D80B12FE4456A5())
		{
			unk_0x008F3E3CC076EA0E(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1869584A8A72FEDD(false);
			unk_0x271AA5469AF471B3();
		}
		unk_0xA68F7B004463AB6F(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x7635EA803CE40962(false);
		uParam0->f_564 = 0;
	}
	if (!Global_71124)
	{
		if (!unk_0xC445AB6B86A2138E(unk_0x98EC0789D9F0703B()))
		{
			if (!Global_71125)
			{
				if (unk_0x3E9CABD07B829173() && !func_472(0))
				{
					unk_0x59C3AC31C7544A28(800);
				}
			}
		}
	}
	func_471(0);
}

void func_471(int iParam0)//Position - 0x1194D
{
	Global_71116 = iParam0;
	Global_71117 = iParam0;
}

bool func_472(bool bParam0)//Position - 0x11961
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_473(var uParam0)//Position - 0x1198C
{
	func_474(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_474(var uParam0)//Position - 0x119B6
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0,1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_475(int iParam0)//Position - 0x11A35
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_476(var uParam0)//Position - 0x11B37
{
	if (func_332(uParam0->f_1))
	{
		uParam0->f_71 = func_290();
	}
}

void func_477(var uParam0, int iParam1)//Position - 0x11B52
{
	if (func_332(uParam0->f_1))
	{
		uParam0->f_72 = 1;
	}
	if (iParam1 == func_81() || !func_991(iParam1, 0, 1))
	{
		return;
	}
	if (func_330(uParam0->f_1))
	{
		if (uParam0->f_70 == 1)
		{
			uParam0->f_72 = func_478(iParam1, -2, 0, 0);
		}
	}
}

int func_478(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x11BA8
{
	int iVar0;
	int iVar1;
	
	if (func_86(iParam0))
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
	if ((func_86(unk_0x9EB17624F44A8DA4()) || (func_493() && func_492())) && !unk_0xC80D31E4B587871C(Global_2512808.f_4556, 31))
	{
		iVar1 = func_491();
		if (unk_0x6ADD12BF4D6D2587(iVar1))
		{
			if (unk_0x1417A5CC924DE120(iVar1))
			{
				if (unk_0xDF35170AEEFB473B(iVar1) != -1)
				{
					if (func_991(unk_0xDF35170AEEFB473B(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
						{
							if (Global_4456448.f_117386[iParam1] != -1)
							{
								return func_489(iParam1, iParam0, 0);
							}
							else
							{
								return func_485(iParam0, unk_0xDF35170AEEFB473B(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_485(iParam0, unk_0xDF35170AEEFB473B(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
			{
				if (Global_4456448.f_117386[iParam1] != -1)
				{
					return func_489(iParam1, iParam0, 0);
				}
				else
				{
					return func_479(0, -1, 0);
				}
			}
			else
			{
				return func_479(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
	{
		if (Global_4456448.f_117386[iParam1] != -1)
		{
			return func_489(iParam1, iParam0, 0);
		}
		else
		{
			return func_485(iParam0, unk_0x9EB17624F44A8DA4(), iParam1, bParam2, bParam3);
		}
	}
	return func_485(iParam0, unk_0x9EB17624F44A8DA4(), iParam1, bParam2, bParam3);
}

int func_479(bool bParam0, int iParam1, bool bParam2)//Position - 0x11D78
{
	return func_480(unk_0x9EB17624F44A8DA4(), bParam0, iParam1, bParam2);
}

int func_480(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x11D8E
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
			if (func_85(iVar0, iParam2, 0) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_484(1);
				}
				else
				{
					return func_484(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_4, 20))
			{
				return func_481(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_481(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_484(1);
	}
	return func_484(0);
}

int func_481(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x11E52
{
	int iVar0;
	
	iVar0 = func_483(iParam0, iParam1, iParam3);
	if (func_482(Global_4456448.f_122309))
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

int func_482(int iParam0)//Position - 0x11F69
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

int func_483(int iParam0, int iParam1, int iParam2)//Position - 0x11FA2
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
			if (!func_85(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_484(bool bParam0)//Position - 0x11FE9
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_485(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x12000
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
			if (func_487(1))
			{
				iVar3 = func_289(iParam0);
				if (!iVar3 == -1)
				{
					return func_287(iVar3);
				}
			}
			if ((func_127(iParam1, iParam0, iVar0, 0) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18)) || ((func_85(unk_0x917EE18109C5ACEA(iParam1), unk_0x917EE18109C5ACEA(iParam0), 0) && unk_0xC80D31E4B587871C(Global_4456448.f_15, 23)) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18)))
			{
				return func_484(1);
			}
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_15, 26))
			{
				return func_486(1);
			}
			else
			{
				return func_480(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574312 || Global_1574303) || Global_1595693[iParam0 /*680*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574312 == 1 && Global_1574322 == 0))
			{
				return func_484(1);
			}
			else
			{
				return func_480(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574307 && Global_1573842.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_289(iParam0);
	if (!iVar4 == -1)
	{
		return func_287(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_486(bool bParam0)//Position - 0x121A4
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_487(int iParam0)//Position - 0x121BB
{
	if ((func_270() || func_488()) || (func_120() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_488()//Position - 0x121EA
{
	return Global_2447174.f_15;
}

int func_489(int iParam0, int iParam1, bool bParam2)//Position - 0x121F8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_980513.f_12[iParam0];
	if (func_487(1))
	{
		iVar2 = func_289(iParam1);
		if (!iVar2 == -1)
		{
			return func_287(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xC80D31E4B587871C(Global_4456448.f_97[iParam0 /*10024*/].f_5191[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_81())
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
			iVar0 = func_480(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xC80D31E4B587871C(Global_4456448.f_21, 13))
		{
			iVar0 = func_490(iParam0);
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

int func_490(int iParam0)//Position - 0x1235D
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

var func_491()//Position - 0x12432
{
	return Global_2359302.f_2;
}

bool func_492()//Position - 0x12440
{
	return unk_0xC80D31E4B587871C(Global_2359302, 4);
}

bool func_493()//Position - 0x12451
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

void func_494(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x1246E
{
	uParam1->f_16 = func_81();
	uParam1->f_17 = func_81();
	uParam1->f_18 = func_81();
	uParam1->f_19 = func_81();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_20), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_70 = 1;
	uParam1->f_73 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 0;
	uParam1->f_76 = 0;
	uParam1->f_72 = 0;
	StringCopy(&(uParam1->f_24), "", 64);
	StringCopy(&(uParam1->f_40), "", 64);
}

int func_495()//Position - 0x124E7
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11;
}

bool func_496(bool bParam0)//Position - 0x124FC
{
	return func_285(unk_0x9EB17624F44A8DA4(), bParam0);
}

int func_497(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1250E
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_494(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_70 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_71 = iParam5;
	return func_467(&Var0);
}

char* func_498(int iParam0)//Position - 0x12572
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		sVar0 = func_503(&(Global_1627537[iParam0 /*532*/].f_11.f_99));
		return sVar0;
	}
	if (Global_1627537[iParam0 /*532*/].f_11.f_115 != Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_115)
	{
		sVar0 = func_501(iParam0, 0);
		return sVar0;
	}
	if (((func_194(iParam0, 28) || func_194(unk_0x9EB17624F44A8DA4(), 28)) || func_500(iParam0)) && !func_499(iParam0))
	{
		return func_501(iParam0, 0);
	}
	iVar1 = func_82(iParam0);
	if (iVar1 != func_81())
	{
		if (iVar1 != unk_0x9EB17624F44A8DA4())
		{
			if (!unk_0x177281F5FA205A38() && !unk_0x8E095DA8BB18B959(0, -1, 1))
			{
				return func_501(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_81())
	{
		sVar0 = func_503(&(Global_1627537[iVar1 /*532*/].f_11.f_99));
		if (unk_0xAB019B170BF1309C(sVar0))
		{
			return func_501(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_499(int iParam0)//Position - 0x12678
{
	struct<13> Var0;
	
	Var0 = { func_83(iParam0) };
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

int func_500(int iParam0)//Position - 0x126A8
{
	struct<13> Var0;
	
	if (iParam0 != func_81())
	{
		Var0 = { func_83(iParam0) };
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

char* func_501(int iParam0, bool bParam1)//Position - 0x12701
{
	if (!bParam1)
	{
		if (func_274(iParam0, 1))
		{
			return func_502();
		}
	}
	return unk_0xB2E1B414DD88808E("GB_REST_ACC");
}

char* func_502()//Position - 0x12728
{
	return unk_0xB2E1B414DD88808E("GB_REST_ACCM");
}

var func_503(var uParam0)//Position - 0x12738
{
	return uParam0;
}

void func_504(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x12742
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	bool bVar14;
	struct<2> Var15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	func_677(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_262145.f_17603);
		}
		else
		{
			iVar1 = (iVar1 + func_676(iParam0, uParam2->f_13));
		}
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = system::round((system::to_float(iVar1) / system::to_float(uParam2->f_4)));
		iVar1 = system::round((IntToFloat(iVar1) * fVar3));
		iVar1 = system::round((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_675(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_17602);
		}
		iVar0 = system::round((system::to_float(iVar0) / system::to_float(uParam2->f_4)));
		iVar0 = system::round((IntToFloat(iVar0) * fVar2));
		iVar0 = system::round((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = system::round((system::to_float(iVar1) / system::to_float(uParam2->f_4)));
		iVar1 = system::round((IntToFloat(iVar1) * fVar3));
		iVar1 = system::round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = system::round((system::to_float(iVar0) / system::to_float(uParam2->f_4)));
		iVar0 = system::round((IntToFloat(iVar0) * fVar2));
		iVar0 = system::round((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (func_673(iParam0))
	{
		if (bParam1)
		{
			if (func_672(unk_0x9EB17624F44A8DA4()) > 0)
			{
				func_671();
			}
			else
			{
				func_670();
			}
		}
		else
		{
			func_669();
		}
	}
	func_653(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_651(iParam0, uParam2, &iVar0, &iVar5);
	func_629(iParam0, uParam2, &iVar0, &iVar5);
	func_603(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	if (iParam0 == 168)
	{
		Global_2512808.f_4856.f_200 = iVar4;
	}
	else
	{
		Global_2512808.f_4856.f_200 = iVar5;
	}
	iVar8 = func_349();
	if (iVar8 != func_81() && iParam0 != 148)
	{
		if (func_285(unk_0x9EB17624F44A8DA4(), 0))
		{
			if (!func_320(unk_0x9EB17624F44A8DA4(), iVar8, 1))
			{
				func_587(&iVar0, 1);
			}
		}
	}
	func_583(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1667867.f_10 = iVar1;
		func_582();
		func_539(0, unk_0xFC1458A37D98B502(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1667867.f_9 = iVar0;
		iVar13 = func_495();
		if (iVar13 != func_81())
		{
			func_538(iVar13, &uVar11, &uVar12);
		}
		bVar14 = !func_496(1);
		if (iParam0 == 168)
		{
			if (!func_537())
			{
				unk_0x855E2247C6A664E1(iVar0, iVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_536())
			{
				if (!func_537())
				{
					Var15 = { func_535() };
					unk_0x546B939A37611593(iVar0, unk_0x8B948C59217A295D(func_534(Var15)), func_533(Var15), iVar5);
				}
			}
			else if (func_537())
			{
				func_524(-856006867, iVar0, &iVar16, 0, 1, 0);
				Global_4261865[iVar16 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar16 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar16 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0x855E2247C6A664E1(iVar0, iVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_880())
			{
				if (!func_537())
				{
					unk_0x546B939A37611593(iVar0, unk_0x8B948C59217A295D(func_534(func_523(unk_0x9EB17624F44A8DA4()))), 5, iVar5);
				}
			}
			else if (func_537())
			{
				func_524(-856006867, iVar0, &iVar17, 0, 1, 0);
				Global_4261865[iVar17 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar17 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar17 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0x855E2247C6A664E1(iVar0, iVar5);
			}
		}
		else if (iParam0 == 230)
		{
			if (func_880())
			{
				if (!func_537())
				{
					iVar18 = func_519(uParam2->f_16, iVar5);
					iVar19 = iVar0;
					if (iVar18 > 0)
					{
						iVar19 = (iVar19 - iVar18);
					}
					if (iVar7 > 0)
					{
						iVar19 = (iVar19 - iVar7);
					}
					unk_0x59B71C42AA64D71F(iVar19, iVar5, iVar7, iVar18, uParam2->f_16);
				}
			}
			else if (func_537())
			{
				func_524(463142405, iVar0, &iVar20, 0, 1, 0);
				Global_4261865[iVar20 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar20 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar20 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0xDE91362FF833B59D(uVar11, uVar12, iVar0, bVar14);
			}
		}
		else if (iParam0 == 233)
		{
			if (func_537())
			{
				func_524(1407278493, iVar0, &iVar21, 0, 1, 0);
				Global_4261865[iVar21 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar21 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar21 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0xA87AFD802B734F62(iVar0);
			}
		}
		else if (func_537())
		{
			func_524(-856006867, iVar0, &iVar22, 0, 1, 0);
			Global_4261865[iVar22 /*80*/].f_8.f_54 = uVar11;
			Global_4261865[iVar22 /*80*/].f_8.f_55 = uVar12;
			Global_4261865[iVar22 /*80*/].f_8.f_56 = bVar14;
		}
		else
		{
			unk_0x56D43E9CA23B5F41(uVar11, uVar12, iVar0, bVar14);
		}
		func_518(iParam0, iVar0);
		if (func_517(iParam0))
		{
			if (func_516(iParam0) > -1)
			{
				func_515(func_516(iParam0), iVar0);
			}
		}
		Global_2459022 = iVar0;
		func_514(&Global_2457290, 0, 0);
	}
	if (func_241(unk_0x9EB17624F44A8DA4()) || func_291(unk_0x9EB17624F44A8DA4()))
	{
		func_505(iParam0);
	}
	if (func_410(iParam0))
	{
		Global_1667885.f_13 = iVar0;
		Global_1667885.f_14 = iVar1;
	}
	if (func_414(iParam0))
	{
		Global_1667938.f_13 = iVar0;
		Global_1667938.f_14 = iVar1;
	}
	if (func_447(iParam0))
	{
		Global_1668000.f_12 = iVar0;
		Global_1668000.f_13 = iVar1;
	}
	if (func_445(iParam0))
	{
		Global_1668043.f_12 = iVar0;
		Global_1668043.f_13 = iVar1;
	}
	if (func_443(iParam0))
	{
		Global_1668096.f_12 = iVar0;
		Global_1668096.f_13 = iVar1;
	}
}

void func_505(int iParam0)//Position - 0x12D23
{
	if (func_513(unk_0x9EB17624F44A8DA4()) && func_536())
	{
		if (func_450(iParam0))
		{
			func_508(7182, -1);
		}
		else if (func_507(iParam0))
		{
			func_508(7184, -1);
		}
		else if (func_318(iParam0, 1))
		{
			func_508(7185, -1);
		}
		else if (func_506(iParam0))
		{
			func_508(7186, -1);
		}
	}
}

int func_506(int iParam0)//Position - 0x12D8D
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_507(int iParam0)//Position - 0x12DB9
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_508(int iParam0, int iParam1)//Position - 0x12DE5
{
	int iVar0;
	
	iVar0 = func_512(iParam0, func_396(iParam1), 0);
	iVar0++;
	if (!func_511(iParam0))
	{
		func_510(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_509(iParam0, iVar0, iParam1, 1);
	}
}

void func_509(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x12E26
{
	int iVar0;
	
	iVar0 = Global_2523060[iParam0 /*3*/][func_396(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1368159[func_396(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1368165[func_396(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1368171[func_396(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1368177[func_396(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1368135[func_396(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1368141[func_396(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1368147[func_396(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1368153[func_396(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1368111[func_396(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1368117[func_396(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1368123[func_396(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1368129[func_396(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1368183[func_396(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1368189[func_396(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1368195[func_396(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1368201[func_396(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1368207[func_396(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1368213[func_396(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1368219[func_396(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2549199[0 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2549199[1 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2549199[2 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2549199[3 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 7052:
			Global_2549282[func_396(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1368225[func_396(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1368231[func_396(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1368237[func_396(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1368243[func_396(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2549239[0 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2549239[1 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2549239[2 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2549239[3 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2549239[4 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549285[0 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549285[1 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549285[2 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549285[3 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549285[4 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549301[0 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549301[1 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549301[2 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549301[3 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549301[4 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2549239[5 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2549199[4 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549317[func_396(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549326[func_396(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549320[func_396(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549329[func_396(iParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549323[func_396(iParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549332[func_396(iParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549335[func_396(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2549239[6 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2549199[5 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2549239[7 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2549199[6 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2549239[8 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2549199[7 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2549239[9 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2549199[8 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2549239[10 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2549199[9 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2549239[11 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2549199[10 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2549239[12 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2549199[11 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2549239[13 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2549199[12 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_510(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x134F1
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_396(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_511(int iParam0)//Position - 0x13521
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

int func_512(int iParam0, int iParam1, int iParam2)//Position - 0x136D7
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_396(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_513(int iParam0)//Position - 0x13709
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_101, 14);
}

void func_514(var uParam0, bool bParam1, bool bParam2)//Position - 0x1372F
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

void func_515(int iParam0, int iParam1)//Position - 0x1376C
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

int func_516(int iParam0)//Position - 0x137DE
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_517(int iParam0)//Position - 0x138BF
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_518(int iParam0, int iParam1)//Position - 0x13927
{
	if (func_513(unk_0x9EB17624F44A8DA4()) && func_536())
	{
		if (func_450(iParam0) && iParam1 > 0)
		{
			func_510(7183, (func_512(7183, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

int func_519(int iParam0, int iParam1)//Position - 0x1396B
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_522(iParam0, iParam1);
	fVar1 = (system::to_float(func_520(iParam0, iParam1)) * fVar0);
	return system::round(fVar1);
}

int func_520(int iParam0, int iParam1)//Position - 0x13994
{
	return (func_521(iParam0) * iParam1);
}

int func_521(int iParam0)//Position - 0x139A5
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_21602;
		
		case 0:
			return Global_262145.f_21603;
		
		case 1:
			return Global_262145.f_21604;
		
		case 2:
			return Global_262145.f_21605;
		
		case 3:
			return Global_262145.f_21606;
		
		case 4:
			return Global_262145.f_21607;
		
		case 5:
			return Global_262145.f_21608;
		
		case 6:
			return Global_262145.f_21609;
		
		case 7:
			return Global_262145.f_21610;
		
		default:
	}
	return 0;
}

float func_522(int iParam0, int iParam1)//Position - 0x13A45
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = system::to_float(Global_262145.f_21612);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_21614;
			fVar1 = system::to_float(Global_262145.f_21611);
			break;
		
		case 3:
			fVar0 = Global_262145.f_21614;
			fVar1 = system::to_float(Global_262145.f_21611);
			break;
		
		case 0:
			fVar0 = Global_262145.f_21615;
			break;
		
		case 1:
			fVar0 = Global_262145.f_21615;
			break;
		
		case 4:
			fVar0 = Global_262145.f_21615;
			break;
		
		case 6:
			fVar0 = Global_262145.f_21616;
			fVar1 = system::to_float(Global_262145.f_21613);
			break;
		
		case 2:
			fVar0 = Global_262145.f_21616;
			fVar1 = system::to_float(Global_262145.f_21613);
			break;
		
		case 5:
			fVar0 = Global_262145.f_21616;
			fVar1 = system::to_float(Global_262145.f_21613);
			break;
	}
	iVar2 = system::floor((system::to_float(iParam1) / fVar1));
	return (system::to_float(iVar2) * fVar0);
}

int func_523(int iParam0)//Position - 0x13B5D
{
	if (iParam0 == func_81())
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_266.f_160[5 /*12*/];
}

void func_524(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x13B83
{
	int iVar0;
	
	if (!func_537())
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
				func_525(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_525(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_525(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1400E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_537())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x02404400A68A3D5B(func_146()) || unk_0xD7D895B4B5395982())
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
			*uParam0 = func_532(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
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
			func_531(1, iParam4);
			Global_4262414 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_526(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_526(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x141B2
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_137.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_527(iParam0);
	}
}

void func_527(int iParam0)//Position - 0x141EA
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_537())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_530(iParam0))
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
		func_528(&(Global_4261865[iParam0 /*80*/]));
	}
}

void func_528(var uParam0)//Position - 0x1423C
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
	func_529(&(uParam0->f_8.f_3));
	func_529(&(uParam0->f_8.f_16));
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

void func_529(var uParam0)//Position - 0x14332
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

int func_530(int iParam0)//Position - 0x1437A
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_531(int iParam0, int iParam1)//Position - 0x143A2
{
	Global_2459156 = iParam1;
	Global_2459155 = iParam0;
}

int func_532(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0x143B6
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_537())
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

int func_533(int iParam0)//Position - 0x144AF
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_534(int iParam0)//Position - 0x145F5
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_535()//Position - 0x147D7
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_188;
}

bool func_536()//Position - 0x147F0
{
	return func_348(unk_0x9EB17624F44A8DA4());
}

int func_537()//Position - 0x14800
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

void func_538(int iParam0, var uParam1, var uParam2)//Position - 0x14817
{
	*uParam1 = Global_1627537[iParam0 /*532*/].f_11.f_8[0];
	*uParam2 = Global_1627537[iParam0 /*532*/].f_11.f_8[1];
}

int func_539(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x14845
{
	return func_540(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_540(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x14867
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_550(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam1))
		{
			if (unk_0x52C56492660097C7(iParam1))
			{
				iVar1 = unk_0x07F64790D10D1DB5(iParam1);
				func_546(unk_0xD0E00576168D19BB(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_541(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_541(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x148E0
{
	vector3 vVar0;
	
	vVar0 = { func_544(iParam0, 1) };
	if (iParam0 == func_543(unk_0xFC1458A37D98B502()))
	{
		func_542(1);
	}
	func_546(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_542(int iParam0)//Position - 0x14914
{
	Global_2436181.f_1774 = iParam0;
}

int func_543(int iParam0)//Position - 0x14925
{
	return iParam0;
}

Vector3 func_544(int iParam0, bool bParam1)//Position - 0x1492F
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
	if (iParam0 == func_545(unk_0xFC1458A37D98B502()) && unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
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

int func_545(int iParam0)//Position - 0x149F3
{
	return iParam0;
}

void func_546(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x149FD
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
			Global_2436181.f_1173[iVar1 /*30*/].f_4 = func_549(Global_2436181.f_1173[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2436181.f_1173[iVar1 /*30*/].f_7 = unk_0xD1952A425B78FFC0();
			Global_2436181.f_1173[iVar1 /*30*/].f_3 = iParam1;
			Global_2436181.f_1173[iVar1 /*30*/].f_8 = iParam2;
			Global_2436181.f_1173[iVar1 /*30*/].f_9 = func_548();
			Global_2436181.f_1173[iVar1 /*30*/].f_10 = func_547();
			StringCopy(&(Global_2436181.f_1173[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2436181.f_1173[iVar1 /*30*/].f_26 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), iParam4);
		}
	}
}

int func_547()//Position - 0x14B14
{
	if (Global_2436181.f_1774)
	{
		Global_2436181.f_1774 = 0;
		return 1;
	}
	Global_2436181.f_1774 = 0;
	return 0;
}

var func_548()//Position - 0x14B3E
{
	var uVar0;
	
	uVar0 = Global_2436181.f_1776;
	Global_2436181.f_1776 = 1;
	return uVar0;
}

float func_549(vector3 vParam0, var uParam1, var uParam2)//Position - 0x14B59
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xBE3C4023003180FC(unk_0x90CC871EBA5B70FA(), vParam0, true);
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

var func_550(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x14BF2
{
	var uVar0;
	
	uVar0 = func_551(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_551(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x14C15
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_581(unk_0x9EB17624F44A8DA4()) || func_580(unk_0x9EB17624F44A8DA4()))
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
	else if (func_336() || func_579(unk_0x9EB17624F44A8DA4()))
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
	if (func_578(sParam2))
	{
	}
	if (func_577())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = system::round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_575(iVar1);
		fVar3 = (system::to_float(iVar1) * Global_262145.f_1);
		iVar1 = system::round(fVar3);
		if (bParam10)
		{
			iVar1 = func_574(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_572(0, &iVar1);
					break;
				
				case 3:
					func_572(1, &iVar1);
					break;
				
				case 1:
					func_570(&iVar1);
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
			func_569(1161, iVar1, -1);
			if (iParam1 == 0)
			{
				func_561((func_568(unk_0x9EB17624F44A8DA4()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x0367F69CE26830AB(iVar1, iParam8, iParam9);
				if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_2 != -1)
				{
					func_569(1162, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_556(iVar1);
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
				func_552((func_554(unk_0x9EB17624F44A8DA4()) + iVar1));
			}
			else
			{
				func_552((func_554(unk_0x9EB17624F44A8DA4()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_552(int iParam0)//Position - 0x14E13
{
	if (func_577())
	{
		Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_5 = iParam0;
		func_553(joaat("mpply_globalxp"), iParam0);
	}
}

void func_553(int iParam0, int iParam1)//Position - 0x14E3E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, 1);
	}
}

int func_554(int iParam0)//Position - 0x14E5A
{
	if (iParam0 > -1)
	{
		if (func_991(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x9EB17624F44A8DA4())
			{
				return func_555(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_5;
			}
		}
		else
		{
			return func_555(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_555(int iParam0)//Position - 0x14EAB
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

void func_556(int iParam0)//Position - 0x14EC9
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_83(unk_0x9EB17624F44A8DA4()) };
	if (unk_0x15DBBAF9E2085C7A())
	{
		if (unk_0xA84F967541249268(&Var0))
		{
			iVar1 = func_559(func_560(&Var0));
			if (iVar1 == 0)
			{
				func_558(&Global_1368098, iParam0);
				func_557(joaat("mpply_crew_local_xp_0"), Global_1368098);
			}
			else if (iVar1 == 1)
			{
				func_558(&Global_1368099, iParam0);
				func_557(joaat("mpply_crew_local_xp_1"), Global_1368099);
			}
			else if (iVar1 == 2)
			{
				func_558(&Global_1368100, iParam0);
				func_557(joaat("mpply_crew_local_xp_2"), Global_1368100);
			}
			else if (iVar1 == 3)
			{
				func_558(&Global_1368101, iParam0);
				func_557(joaat("mpply_crew_local_xp_3"), Global_1368101);
			}
			else if (iVar1 == 4)
			{
				func_558(&Global_1368102, iParam0);
				func_557(joaat("mpply_crew_local_xp_4"), Global_1368102);
			}
		}
	}
}

void func_557(int iParam0, int iParam1)//Position - 0x14F9D
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

void func_558(var uParam0, int iParam1)//Position - 0x150C2
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_559(int iParam0)//Position - 0x150D3
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

int func_560(var uParam0)//Position - 0x15130
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

void func_561(int iParam0, int iParam1, int iParam2)//Position - 0x15153
{
	if (func_577())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8947 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1368213[func_396(-1)])
				{
					unk_0x0367F69CE26830AB(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1368213[func_396(-1)])
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
		if (func_567(unk_0x9EB17624F44A8DA4()))
		{
			Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_1 = iParam0;
			Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_6 = func_565(iParam0, 1);
		}
		func_509(636, iParam0, -1, 1);
		func_510(637, func_565(iParam0, 1), -1, 1, 0);
		Global_1368213[func_396(-1)] = iParam0;
		func_562(7, 0);
	}
}

void func_562(int iParam0, int iParam1)//Position - 0x15274
{
	int iVar0;
	
	if (func_564(iParam0, iParam1))
	{
		iVar0 = func_563();
		Global_2456735[iVar0] = iParam0;
	}
}

int func_563()//Position - 0x15297
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

int func_564(int iParam0, var uParam1)//Position - 0x152CC
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

int func_565(int iParam0, bool bParam1)//Position - 0x15352
{
	if (bParam1)
	{
	}
	return func_566(iParam0, 0);
}

int func_566(int iParam0, int iParam1)//Position - 0x15366
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

int func_567(int iParam0)//Position - 0x15425
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

int func_568(int iParam0)//Position - 0x1544A
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x9EB17624F44A8DA4())
			{
				return Global_1368213[func_396(-1)];
			}
			else if (func_567(iParam0))
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1368213[func_396(-1)];
	}
	return 0;
}

void func_569(int iParam0, int iParam1, int iParam2)//Position - 0x154A7
{
	int iVar0;
	
	iVar0 = func_512(iParam0, func_396(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_511(iParam0))
	{
		func_510(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_509(iParam0, iVar0, iParam2, 1);
	}
}

void func_570(int iParam0)//Position - 0x154E9
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
				if (unk_0x917EE18109C5ACEA(iVar5) == iVar1 || func_85(unk_0x917EE18109C5ACEA(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x9EB17624F44A8DA4())
					{
						if (func_84(unk_0x9EB17624F44A8DA4(), iVar5))
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
		iVar6 = system::round((func_571(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = system::round((func_571(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_571(int iParam0, int iParam1)//Position - 0x155D4
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = system::to_float(iParam0);
	fVar1 = system::to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_572(bool bParam0, int iParam1)//Position - 0x155F5
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
				if (func_991(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x9EB17624F44A8DA4())
					{
						iVar1++;
						if (func_84(unk_0x9EB17624F44A8DA4(), iVar4))
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
			if (func_991(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x9EB17624F44A8DA4())
				{
					if (func_573(unk_0x9EB17624F44A8DA4(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_84(unk_0x9EB17624F44A8DA4(), iVar4))
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
		iVar5 = system::round((func_571(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = system::round((func_571(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_573(int iParam0, int iParam1)//Position - 0x1570D
{
	return system::vdist(func_76(iParam0), func_76(iParam1));
	return 0f;
}

int func_574(int iParam0)//Position - 0x15729
{
	int iVar0;
	
	if (unk_0xEF96DAAD69CD3E8A() != 3)
	{
		return *iParam0;
	}
	iVar0 = system::round((func_571(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_575(int iParam0)//Position - 0x15760
{
	if (iParam0 < 0)
	{
		if (unk_0xB89BB11E0945F6F0(iParam0) > func_568(unk_0x9EB17624F44A8DA4()))
		{
			iParam0 = -func_568(unk_0x9EB17624F44A8DA4());
		}
	}
	if (func_576(8000, 0, 0) > 0)
	{
		if (func_576(8000, 0, 0) < (iParam0 + func_568(unk_0x9EB17624F44A8DA4())))
		{
			iParam0 = (func_576(8000, 0, 0) - func_568(unk_0x9EB17624F44A8DA4()));
		}
	}
	return iParam0;
}

int func_576(int iParam0, bool bParam1, int iParam2)//Position - 0x157C4
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

int func_577()//Position - 0x157EC
{
	return 1;
}

int func_578(char* sParam0)//Position - 0x157F5
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

int func_579(int iParam0)//Position - 0x1582E
{
	return func_443(func_221(iParam0));
}

bool func_580(int iParam0)//Position - 0x15840
{
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

bool func_581(int iParam0)//Position - 0x15855
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

void func_582()//Position - 0x1586A
{
	Global_2458364 = 1;
}

void func_583(int iParam0, var uParam1, var uParam2)//Position - 0x15877
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_199(7))
	{
		return;
	}
	iVar0 = func_586(iParam0);
	iVar1 = func_585(iParam0);
	iVar2 = unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(Global_2512808.f_4856.f_87, unk_0xD1952A425B78FFC0()));
	if (func_584(iParam0) != -1)
	{
		if (iVar2 > func_584(iParam0))
		{
			iVar2 = func_584(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_11735)
	{
		iVar2 = Global_262145.f_11735;
	}
	iVar3 = system::floor((system::to_float(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_584(int iParam0)//Position - 0x15920
{
	if (func_318(iParam0, 0) || func_507(iParam0))
	{
		return Global_262145.f_17808;
	}
	if (func_450(iParam0))
	{
		return Global_262145.f_17807;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_17804;
		
		case 191:
			return Global_262145.f_17806;
		
		case 190:
			return Global_262145.f_17805;
		
		case 227:
			return Global_262145.f_20340;
		
		case 226:
			return Global_262145.f_20328;
		
		case 225:
			return Global_262145.f_20348;
		
		case 230:
			return Global_262145.f_21599;
		
		case 229:
			return Global_262145.f_21503;
		
		case 233:
			return Global_262145.f_22060;
		
		default:
	}
	return -1;
}

int func_585(int iParam0)//Position - 0x159F3
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11826;
		
		case 152:
			return Global_262145.f_11861;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11849;
		
		case 157:
			return Global_262145.f_11816;
		
		case 159:
			return Global_262145.f_11799;
		
		case 164:
			return Global_262145.f_11839;
		
		case 160:
			return Global_262145.f_11889;
		
		case 162:
			return Global_262145.f_11909;
		
		case 163:
			return Global_262145.f_11874;
		
		case 154:
			return Global_262145.f_11944;
		
		case 155:
			return Global_262145.f_11934;
		
		case 153:
			return Global_262145.f_11898;
		
		case 170:
			return Global_262145.f_14321;
		
		case 171:
			return Global_262145.f_14380;
		
		case 172:
			return Global_262145.f_14398;
		
		case 173:
			return Global_262145.f_14339;
		
		case 166:
			return Global_262145.f_14354;
		
		case 167:
			return Global_262145.f_14445;
		
		case 169:
			return Global_262145.f_14417;
		
		case 168:
			return Global_262145.f_14410;
		
		case 179:
			return Global_262145.f_17687;
		
		case 180:
			return Global_262145.f_17466;
		
		case 182:
			return Global_262145.f_17466;
		
		case 183:
			return Global_262145.f_17466;
		
		case 185:
			return Global_262145.f_17466;
		
		case 186:
			return Global_262145.f_17466;
		
		case 189:
			return Global_262145.f_17687;
		
		case 190:
			return Global_262145.f_17342;
		
		case 191:
			return Global_262145.f_17433;
		
		case 192:
			return Global_262145.f_17227;
		
		case 193:
			return Global_262145.f_17687;
		
		case 194:
			return Global_262145.f_17687;
		
		case 195:
			return Global_262145.f_17466;
		
		case 197:
			return Global_262145.f_17466;
		
		case 198:
			return Global_262145.f_17466;
		
		case 199:
			return Global_262145.f_17687;
		
		case 200:
			return Global_262145.f_17687;
		
		case 201:
			return Global_262145.f_17687;
		
		case 205:
			return Global_262145.f_17687;
		
		case 207:
			return Global_262145.f_17466;
		
		case 208:
			return Global_262145.f_17466;
		
		case 209:
			return Global_262145.f_17466;
		
		case 210:
			return Global_262145.f_17687;
		
		case 211:
			return Global_262145.f_17687;
		
		case 214:
			return Global_262145.f_18513;
		
		case 215:
			return Global_262145.f_18515;
		
		case 216:
			return Global_262145.f_18517;
		
		case 217:
			return Global_262145.f_18519;
		
		case 218:
			return Global_262145.f_18521;
		
		case 219:
			return Global_262145.f_18523;
		
		case 220:
			return Global_262145.f_18525;
		
		case 221:
			return Global_262145.f_18527;
		
		case 225:
			if (func_496(0) || func_346(0))
			{
				return Global_262145.f_20350;
			}
			break;
		
		case 226:
			if (func_496(0) || func_346(0))
			{
				return Global_262145.f_20330;
			}
			break;
		
		case 227:
			if (func_496(0) || func_346(0))
			{
				return Global_262145.f_20342;
			}
			break;
		
		case 229:
			if (func_496(0) || func_346(0))
			{
				return Global_262145.f_21505;
			}
			break;
		
		case 230:
			if (func_496(0) || func_346(0))
			{
				return Global_262145.f_21601;
			}
			break;
		
		case 233:
			if (func_496(0) || func_346(0))
			{
				return Global_262145.f_22059;
			}
			break;
	}
	return 0;
}

int func_586(int iParam0)//Position - 0x15E31
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11825;
		
		case 152:
			return Global_262145.f_11860;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11848;
		
		case 157:
			return Global_262145.f_11815;
		
		case 159:
			return Global_262145.f_11798;
		
		case 164:
			return Global_262145.f_11838;
		
		case 160:
			return Global_262145.f_11888;
		
		case 162:
			return Global_262145.f_11908;
		
		case 163:
			return Global_262145.f_11873;
		
		case 154:
			return Global_262145.f_11943;
		
		case 155:
			return Global_262145.f_11933;
		
		case 153:
			return Global_262145.f_11897;
		
		case 170:
			return Global_262145.f_14320;
		
		case 171:
			return Global_262145.f_14379;
		
		case 172:
			return Global_262145.f_14397;
		
		case 173:
			return Global_262145.f_14338;
		
		case 166:
			return Global_262145.f_14353;
		
		case 179:
			return Global_262145.f_17686;
		
		case 180:
			return Global_262145.f_17465;
		
		case 182:
			return Global_262145.f_17465;
		
		case 183:
			return Global_262145.f_17465;
		
		case 185:
			return Global_262145.f_17465;
		
		case 186:
			return Global_262145.f_17465;
		
		case 189:
			return Global_262145.f_17686;
		
		case 193:
			return Global_262145.f_17686;
		
		case 194:
			return Global_262145.f_17686;
		
		case 195:
			return Global_262145.f_17465;
		
		case 197:
			return Global_262145.f_17465;
		
		case 198:
			return Global_262145.f_17465;
		
		case 199:
			return Global_262145.f_17686;
		
		case 200:
			return Global_262145.f_17686;
		
		case 201:
			return Global_262145.f_17686;
		
		case 205:
			return Global_262145.f_17686;
		
		case 207:
			return Global_262145.f_17465;
		
		case 208:
			return Global_262145.f_17465;
		
		case 209:
			return Global_262145.f_17465;
		
		case 210:
			return Global_262145.f_17686;
		
		case 211:
			return Global_262145.f_17686;
		
		case 190:
			if (!func_880())
			{
				return Global_262145.f_17341;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_880())
			{
				return Global_262145.f_17432;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_880())
			{
				return Global_262145.f_17226;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_18512;
		
		case 215:
			return Global_262145.f_18514;
		
		case 216:
			return Global_262145.f_18516;
		
		case 217:
			return Global_262145.f_18518;
		
		case 218:
			return Global_262145.f_18520;
		
		case 219:
			return Global_262145.f_18522;
		
		case 220:
			return Global_262145.f_18524;
		
		case 221:
			return Global_262145.f_18526;
		
		case 225:
			if (func_346(0))
			{
				return Global_262145.f_20349;
			}
			break;
		
		case 226:
			if (func_346(0))
			{
				return Global_262145.f_20329;
			}
			break;
		
		case 227:
			if (func_346(0))
			{
				return Global_262145.f_20341;
			}
			break;
		
		case 229:
			if (func_346(0))
			{
				return Global_262145.f_21504;
			}
			break;
		
		case 230:
			if (func_346(0))
			{
				return Global_262145.f_21600;
			}
			break;
		
		case 233:
			if (func_346(0))
			{
				return Global_262145.f_22061;
			}
			break;
	}
	return 0;
}

void func_587(int iParam0, int iParam1)//Position - 0x16233
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_880())
		{
			if (func_496(0))
			{
				if (!func_346(0))
				{
					if (unk_0x552F39AE86E07792(func_495()))
					{
						if (func_602() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_602());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_600(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_593("GB_BCUT_TICK1", func_495(), iVar0, 0, 0, 1, 1);
						}
						func_592(20);
						func_588(func_495(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_588(int iParam0, int iParam1, int iParam2)//Position - 0x162D4
{
	struct<8> Var0;
	
	if (func_991(iParam0, 0, 1))
	{
		Var0 = 887219908;
		Var0.f_1 = unk_0x9EB17624F44A8DA4();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_591(iParam0);
		func_590(&(Var0.f_6), &(Var0.f_7));
		unk_0x5A26F0BDEE9F8260(1, &Var0, 8, func_589(iParam0));
	}
}

var func_589(int iParam0)//Position - 0x1632A
{
	var uVar0;
	
	unk_0x872F1C1F8587CCC7(&uVar0, iParam0);
	return uVar0;
}

void func_590(var uParam0, var uParam1)//Position - 0x1633C
{
	*uParam0 = Global_1644563.f_9;
	*uParam1 = Global_1644563.f_10;
}

var func_591(int iParam0)//Position - 0x16356
{
	return Global_1627537[iParam0 /*532*/].f_469;
}

void func_592(int iParam0)//Position - 0x1636A
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4856.f_7[iVar0]), iVar1);
}

int func_593(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x16393
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
		unk_0xF92B835A141C6BDD(func_478(iParam1, -2, 1, 0));
		unk_0x854FACC4E5F40C82(func_598(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xF92B835A141C6BDD(iParam3);
		}
		unk_0x6223D539BCD39E76(iParam2);
		iVar0 = unk_0x65F0733C4A64907A(0, 1);
		func_594(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_594(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1642A
{
	int iVar0;
	
	if ((!func_597() || !unk_0x4916190900E76373()) || !func_144(unk_0x9EB17624F44A8DA4(), 0))
	{
		return;
	}
	iVar0 = func_595(iParam2);
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

int func_595(int iParam0)//Position - 0x16532
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1664509 - 1))
	{
		if (iParam0 > Global_1664509.f_5[iVar0 /*53*/].f_1)
		{
			func_596(iVar0);
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

void func_596(int iParam0)//Position - 0x16594
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1664509.f_5[iVar0 /*53*/] = { Global_1664509.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_597()//Position - 0x165CD
{
	return unk_0x21EA5D4DC72DE119(-1762644250);
}

var func_598(char* sParam0)//Position - 0x165DE
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_599(&cVar0);
}

var func_599(char[4] cParam0)//Position - 0x16602
{
	return cParam0;
}

void func_600(int iParam0, bool bParam1)//Position - 0x1660C
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_601(1);
	}
	else
	{
		iVar1 = func_601(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_601(bool bParam0)//Position - 0x1663E
{
	if (bParam0)
	{
		return system::round((0,05f * 100f));
	}
	return Global_262145.f_11730;
}

int func_602()//Position - 0x16664
{
	return Global_262145.f_11729;
}

void func_603(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)//Position - 0x16673
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_346(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_880())
		{
			iVar15 = unk_0x9EB17624F44A8DA4();
		}
		else
		{
			iVar15 = func_495();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_627(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_618(uParam1->f_16) + uParam1->f_8);
			}
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = system::to_float(uParam1->f_10);
				fVar11 = system::to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = system::ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_520(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_519(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_617(*iParam2) > 0)
			{
				if (iVar15 == unk_0x9EB17624F44A8DA4())
				{
					func_616("SMTICK_RONCUT", func_617(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_617(*iParam2));
			}
			if (iVar15 == unk_0x9EB17624F44A8DA4())
			{
				func_614(iVar2, iVar9);
				iVar6 = func_613(&uVar5);
				iVar7 = Global_262145.f_21618;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = system::ceil((IntToFloat(iVar6) * Global_262145.f_21617));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_592(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xB72D370CB7ABC3EF())
						{
							iVar19 = iVar18;
							if (unk_0x012BC3F18B8C7807(iVar19))
							{
								iVar20 = unk_0x43E1A43A1AA9E0BE(iVar19);
								if (func_612(iVar20))
								{
									func_604(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2512808.f_4856.f_199 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_21551;
				iVar3 = system::ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21552;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1677780 = *iParam2;
					func_592(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_604(int iParam0, int iParam1, int iParam2)//Position - 0x168B8
{
	var uVar0;
	
	uVar0 = func_606(iParam0);
	func_605(iParam0, uVar0, iParam1, iParam2);
}

void func_605(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x168D4
{
	struct<8> Var0;
	
	Var0 = 698358792;
	Var0.f_1 = unk_0x9EB17624F44A8DA4();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_591(iParam0);
	func_590(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_81())
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			unk_0x5A26F0BDEE9F8260(1, &Var0, 8, func_589(iParam0));
		}
	}
}

int func_606(int iParam0)//Position - 0x1693A
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_611();
	iVar0 = func_609(iParam0, iVar0);
	iVar1 = Global_1627537[func_495() /*532*/].f_11.f_408;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14281));
	if (iVar0 < func_608())
	{
		iVar0 = func_608();
	}
	if (iVar0 > func_607())
	{
		iVar0 = func_607();
	}
	return iVar0;
}

int func_607()//Position - 0x16993
{
	return Global_262145.f_14282;
}

int func_608()//Position - 0x169A2
{
	return Global_262145.f_15457;
}

int func_609(int iParam0, int iParam1)//Position - 0x169B1
{
	int iVar0;
	
	iVar0 = (func_672(iParam0) * func_610());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_610()//Position - 0x169CF
{
	return Global_262145.f_15456;
}

var func_611()//Position - 0x169DE
{
	return Global_262145.f_11721;
}

int func_612(int iParam0)//Position - 0x169ED
{
	if (unk_0x552F39AE86E07792(iParam0))
	{
		if (iParam0 != unk_0x9EB17624F44A8DA4())
		{
			if (func_320(iParam0, unk_0x9EB17624F44A8DA4(), 0))
			{
				if (!func_194(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_613(var uParam0)//Position - 0x16A26
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x552F39AE86E07792(unk_0xF6A72924028F588B(iVar0)))
		{
			iVar2 = unk_0xF6A72924028F588B(iVar0);
			if (!func_144(iVar2, 0) && !func_320(iVar2, unk_0x9EB17624F44A8DA4(), 1))
			{
				iVar1++;
			}
			else if (func_144(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_614(int iParam0, int iParam1)//Position - 0x16A92
{
	if (iParam0 > 0)
	{
		func_615(iParam0, 6099);
	}
	if (iParam1 > 0)
	{
		func_615(iParam1, 6100);
	}
}

void func_615(int iParam0, int iParam1)//Position - 0x16AB8
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_512(iParam1, -1, 0);
	func_510(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

int func_616(char* sParam0, int iParam1, int iParam2)//Position - 0x16AE1
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xE3C33644878DCCFD(sParam0);
	unk_0x6223D539BCD39E76(iParam1);
	iVar0 = unk_0x65F0733C4A64907A(0, 1);
	func_594(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_617(int iParam0)//Position - 0x16B16
{
	float fVar0;
	float fVar1;
	
	fVar0 = system::to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_21585);
	if (fVar1 > system::to_float(Global_262145.f_21586))
	{
		fVar1 = system::to_float(Global_262145.f_21586);
	}
	return system::round(fVar1);
}

int func_618(int iParam0)//Position - 0x16B56
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_625())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_627(unk_0x9EB17624F44A8DA4());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_620(func_621(func_624(iVar0), -1, -1));
		if (func_619(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_619(int iParam0)//Position - 0x16BB4
{
	switch (iParam0)
	{
		case -508960047:
			return 5;
		
		case -1996578712:
			return 5;
		
		case -324063008:
			return 7;
		
		case -1537242760:
			return 7;
		
		case 167523060:
			return 1;
		
		case 440723308:
			return 1;
		
		case -1821684485:
			return 6;
		
		case 1075487129:
			return 6;
		
		case 1339867730:
			return 4;
		
		case 1158536477:
			return 4;
		
		case -1222709082:
			return 0;
		
		case -260422691:
			return 0;
		
		case -1117639471:
			return 3;
		
		case -1434473216:
			return 3;
		
		case 690570889:
			return 2;
		
		case 320416020:
			return 2;
		
		default:
	}
	return -1;
}

int func_620(int iParam0)//Position - 0x16C64
{
	switch (iParam0)
	{
		case 1:
			return -508960047;
		
		case 2:
			return -1996578712;
		
		case 3:
			return -324063008;
		
		case 4:
			return -1537242760;
		
		case 5:
			return 167523060;
		
		case 6:
			return 440723308;
		
		case 7:
			return -1821684485;
		
		case 8:
			return 1075487129;
		
		case 9:
			return 1339867730;
		
		case 10:
			return 1158536477;
		
		case 11:
			return -1222709082;
		
		case 12:
			return -260422691;
		
		case 13:
			return -1117639471;
		
		case 14:
			return -1434473216;
		
		case 15:
			return 690570889;
		
		case 16:
			return 320416020;
		
		default:
	}
	return 0;
}

int func_621(int iParam0, int iParam1, int iParam2)//Position - 0x16D54
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_146();
	}
	iVar0 = 0;
	iVar1 = func_623(iParam0, iParam1);
	iVar2 = func_622(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xB1AF044156BFE093(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_622(int iParam0)//Position - 0x16D9A
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

int func_623(int iParam0, int iParam1)//Position - 0x170E0
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_146();
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

int func_624(int iParam0)//Position - 0x173DF
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_625()//Position - 0x17649
{
	return func_626() != 0;
}

int func_626()//Position - 0x17657
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_241;
}

int func_627(int iParam0)//Position - 0x1766F
{
	if (iParam0 != func_81() && func_628(iParam0))
	{
		return Global_1595693[iParam0 /*680*/].f_266.f_241.f_3;
	}
	return 0;
}

int func_628(int iParam0)//Position - 0x176A0
{
	if (iParam0 != func_81())
	{
		return Global_1595693[iParam0 /*680*/].f_266.f_241 != 0;
	}
	return 0;
}

void func_629(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x176C5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_346(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_880())
		{
			iVar15 = unk_0x9EB17624F44A8DA4();
		}
		else
		{
			iVar15 = func_495();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_523(iVar15);
			iVar0 = (func_650(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = system::to_float(uParam1->f_10);
				fVar11 = system::to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = system::ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_646(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = system::ceil((IntToFloat(iVar2) * Global_262145.f_20332));
			}
			else
			{
				iVar2 = system::ceil((IntToFloat(iVar2) * Global_262145.f_20331));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x9EB17624F44A8DA4())
			{
				func_643(iVar16, iVar2);
				if (func_639(iVar16) >= Global_262145.f_19880 || iVar2 >= Global_262145.f_19880)
				{
					func_630(5);
				}
				iVar6 = func_613(&uVar5);
				iVar7 = system::round(Global_262145.f_20334);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = system::ceil((IntToFloat(iVar6) * Global_262145.f_20333));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_592(108);
					}
					else
					{
						func_592(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xB72D370CB7ABC3EF())
						{
							iVar19 = iVar18;
							if (unk_0x012BC3F18B8C7807(iVar19))
							{
								iVar20 = unk_0x43E1A43A1AA9E0BE(iVar19);
								if (func_612(iVar20))
								{
									func_604(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2512808.f_4856.f_199 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_20335;
				iVar3 = system::ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_20336;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1677780 = *iParam2;
					func_592(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_630(int iParam0)//Position - 0x178FF
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_19868)
			{
				if (func_632(Global_262145.f_19869))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_19870)
			{
				if (func_632(Global_262145.f_19871))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_19872)
			{
				if (func_632(Global_262145.f_19873))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_19874)
			{
				if (func_632(Global_262145.f_19875))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_19876)
			{
				if (func_632(Global_262145.f_19877))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_19878)
			{
				if (func_632(Global_262145.f_19879))
				{
					func_616("CLOTHAWDSTRAP3", Global_262145.f_19880, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_19881)
			{
				if (func_632(Global_262145.f_19882))
				{
					func_616("CLOTHAWDSTRAP5", Global_262145.f_20014, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_19884)
			{
				if (func_632(Global_262145.f_19885))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_19886)
			{
				if (func_632(Global_262145.f_19887))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_19888)
			{
				if (func_632(Global_262145.f_19889))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_19890)
			{
				if (func_632(Global_262145.f_19891))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_19892)
			{
				if (func_632(Global_262145.f_19893))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_19894)
			{
				if (func_632(Global_262145.f_19895))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_19896)
			{
				if (func_632(Global_262145.f_19897))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_19898)
			{
				if (func_632(Global_262145.f_19899))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_631(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x17BFC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0xE3C33644878DCCFD(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam3);
	}
	unk_0xA6D2B267C377D7B2(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0x65F0733C4A64907A(0, 1);
	}
	else
	{
		Global_2492157 = { func_83(unk_0x9EB17624F44A8DA4()) };
		if (unk_0x5CF21D71A8C4CFA6(&Global_2492087, 35, &Global_2492157))
		{
			iVar1 = 0;
			if (unk_0x74C475EB8E73D398(&(Global_2492087.f_22), "Leader") && Global_2492087.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2492087.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0x679630D62246D8FF(iVar2, unk_0x12D16CE3923A2F1B(&Global_2492087, 35), &(Global_2492087.f_17), Global_2492087.f_30, iVar1, 0, Global_2492087, unk_0xDE2D3B9654C31EB3(unk_0x9EB17624F44A8DA4()), Global_1314011, Global_1314012, Global_1314013);
		}
		else
		{
			iVar0 = unk_0x65F0733C4A64907A(0, 1);
		}
	}
	func_594(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_632(int iParam0)//Position - 0x17CF0
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_636(15417, -1, -1))
			{
				func_635(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_636(15418, -1, -1))
			{
				func_635(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_636(15425, -1, -1))
			{
				func_635(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -695364761:
		case 1263491585:
		case -1307315235:
		case 258618816:
			if (!func_636(15405, -1, -1))
			{
				func_635(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_636(15393, -1, -1))
			{
				func_635(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_636(15409, -1, -1))
			{
				func_635(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_636(15396, -1, -1))
			{
				func_635(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_636(15412, -1, -1))
			{
				func_635(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_636(15403, -1, -1))
			{
				func_635(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_636(15389, -1, -1))
			{
				func_635(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_636(15398, -1, -1))
			{
				func_635(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -1361097493:
		case -73647644:
		case -1036580403:
		case -1765816422:
		case -1991379993:
		case -1731611121:
			if (!func_636(15400, -1, -1))
			{
				func_635(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_636(15408, -1, -1))
			{
				func_635(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_636(15411, -1, -1))
			{
				func_635(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_636(15397, -1, -1))
			{
				func_635(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_636(15413, -1, -1))
			{
				func_635(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_636(15391, -1, -1))
			{
				func_635(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_636(15388, -1, -1))
			{
				func_635(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_636(15401, -1, -1))
			{
				func_635(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case -322091380:
		case -1604737223:
		case -836382797:
			if (!func_636(15394, -1, -1))
			{
				func_635(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_636(15406, -1, -1))
			{
				func_635(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_636(15395, -1, -1))
			{
				func_635(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_636(15410, -1, -1))
			{
				func_635(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_636(15407, -1, -1))
			{
				func_635(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_636(15414, -1, -1))
			{
				func_635(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_636(15415, -1, -1))
			{
				func_635(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_636(15399, -1, -1))
			{
				func_635(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_636(15404, -1, -1))
			{
				func_635(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_636(15392, -1, -1))
			{
				func_635(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_636(15390, -1, -1))
			{
				func_635(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_636(15402, -1, -1))
			{
				func_635(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_636(15416, -1, -1))
			{
				func_635(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -2123485438:
		case 1457900554:
		case -14316613:
		case 619771057:
			if (!func_636(15426, -1, -1))
			{
				func_635(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_636(15422, -1, -1))
			{
				func_635(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_636(15423, -1, -1))
			{
				func_635(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_636(15421, -1, -1))
			{
				func_635(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_636(15427, -1, -1))
			{
				func_635(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_636(15419, -1, -1))
			{
				func_635(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_636(15420, -1, -1))
			{
				func_635(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_633(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1886A
{
	int iVar0;
	
	if (func_634())
	{
		iVar0 = Global_2547365[iParam0 /*3*/][func_396(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x41495934EA1DEC56(iVar0, iParam1, iParam3);
		}
	}
}

int func_634()//Position - 0x1889C
{
	return 1;
	return 0;
}

int func_635(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x188A9
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
		iParam2 = func_146();
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

int func_636(int iParam0, int iParam1, int iParam2)//Position - 0x18D75
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_146();
	}
	iVar1 = func_638(iParam0, iParam1);
	uVar2 = func_637(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_637(int iParam0)//Position - 0x18DB2
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

int func_638(int iParam0, int iParam1)//Position - 0x19072
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_146();
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

int func_639(int iParam0)//Position - 0x19314
{
	int iVar0;
	
	iVar0 = func_641(iParam0);
	return func_512(func_640(iVar0), -1, 0);
}

int func_640(int iParam0)//Position - 0x19330
{
	switch (iParam0)
	{
		case 0:
			return 3934;
		
		case 1:
			return 3935;
		
		case 2:
			return 3936;
		
		case 3:
			return 3937;
		
		case 4:
			return 3938;
		
		case 5:
			return 5439;
		
		default:
	}
	return 3934;
}

int func_641(int iParam0)//Position - 0x1938A
{
	int iVar0;
	
	if (func_642(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_642(int iParam0)//Position - 0x193CC
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_643(int iParam0, int iParam1)//Position - 0x193EB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_641(iParam0);
	iVar1 = func_640(iVar0);
	iVar2 = (func_512(iVar1, -1, 0) + iParam1);
	func_510(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_621(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iVar0 /*12*/] != 0)
			{
				iVar1 = func_640(iVar0);
				iVar3 = (iVar3 + func_512(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_645(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_644(9357, iVar5, -1, 1);
	}
}

var func_644(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x194A0
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_146();
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

int func_645(int iParam0)//Position - 0x1995A
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_646(int iParam0, int iParam1, int iParam2)//Position - 0x1999A
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_533(iParam1);
	if (func_642(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16286;
				if (func_647(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16291);
				}
				if (func_647(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16296);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16285;
				if (func_647(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16290);
				}
				if (func_647(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16295);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16284;
				if (func_647(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16289);
				}
				if (func_647(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16294);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16282;
				if (func_647(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16287);
				}
				if (func_647(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16292);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16283;
				if (func_647(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16288);
				}
				if (func_647(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16293);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_20357;
				if (func_647(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_20359);
				}
				if (func_647(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_20358);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_647(int iParam0, int iParam1, int iParam2)//Position - 0x19B72
{
	int iVar0;
	
	if (func_649(iParam0, iParam1))
	{
		iVar0 = func_648(iParam0, iParam1);
		return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_648(int iParam0, int iParam1)//Position - 0x19BAD
{
	int iVar0;
	
	if (func_642(iParam1) && iParam0 != func_81())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_649(int iParam0, int iParam1)//Position - 0x19BF9
{
	int iVar0;
	
	if (func_642(iParam1) && iParam0 != func_81())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_650(int iParam0, int iParam1)//Position - 0x19C44
{
	int iVar0;
	
	if (iParam0 == func_81())
	{
		return 0;
	}
	if (func_642(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_651(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x19CA3
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_536())
			{
				Var0 = { func_535() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar1 = system::to_float(uParam1->f_10);
					fVar2 = system::to_float(uParam1->f_11);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_15 + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = system::ceil(fVar5);
				}
				iVar6 = func_646(unk_0x9EB17624F44A8DA4(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (system::to_float(iVar6) * Global_262145.f_17916);
					iVar6 = system::round(fVar7);
				}
				else
				{
					fVar8 = (system::to_float(iVar6) * Global_262145.f_17915);
					iVar6 = system::round(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_613(&uVar9);
				iVar11 = system::round(Global_262145.f_17906);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = system::ceil((IntToFloat(iVar10) * Global_262145.f_17905));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0)
				{
					func_592(86);
				}
				Global_2512808.f_4856.f_199 = *iParam2;
			}
			else if (func_346(0))
			{
				Var14 = { func_652(func_495()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar15 = system::to_float(uParam1->f_10);
					fVar16 = system::to_float(uParam1->f_11);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_15 + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = system::ceil(fVar19);
				}
				iVar20 = func_646(func_495(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = system::ceil((IntToFloat(iVar20) * Global_262145.f_17916));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = system::ceil((IntToFloat(iVar20) * Global_262145.f_17915));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_262145.f_17955;
				iVar22 = system::ceil((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_262145.f_17956;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_652(int iParam0)//Position - 0x19F45
{
	return Global_1627537[iParam0 /*532*/].f_11.f_188;
}

void func_653(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)//Position - 0x19F5C
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_240(unk_0x9EB17624F44A8DA4()))
		{
			if (bParam1)
			{
				func_668();
			}
			func_667();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_240(unk_0x9EB17624F44A8DA4()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_659(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_177));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_658(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_613(&uVar2);
					iVar4 = Global_262145.f_15467;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = system::ceil((IntToFloat(iVar3) * Global_262145.f_14676));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_592(44);
					}
				}
				func_656(*iParam3);
				func_655();
				Global_2512808.f_4856.f_199 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0xB72D370CB7ABC3EF())
				{
					iVar8 = iVar7;
					if (unk_0x012BC3F18B8C7807(iVar8))
					{
						iVar9 = unk_0x43E1A43A1AA9E0BE(iVar8);
						if (func_612(iVar9))
						{
							func_604(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_240(unk_0x9EB17624F44A8DA4()))
		{
			func_654();
		}
	}
}

void func_654()//Position - 0x1A0C7
{
	int iVar0;
	
	iVar0 = Global_2549323[func_146()];
	iVar0++;
	func_509(3656, iVar0, -1, 1);
}

void func_655()//Position - 0x1A0EC
{
	int iVar0;
	
	iVar0 = Global_2549329[func_146()];
	iVar0++;
	func_509(3655, iVar0, -1, 1);
}

void func_656(int iParam0)//Position - 0x1A111
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2549332[func_146()];
	iVar0 = (iVar0 + iParam0);
	func_509(3657, iVar0, -1, 1);
	if (func_621(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_657(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_644(7666, iVar2, -1, 1);
	}
}

int func_657(int iParam0)//Position - 0x1A173
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_15600;
			break;
		
		case 2:
			return Global_262145.f_15601;
			break;
		
		case 3:
			return Global_262145.f_15602;
			break;
		
		case 4:
			return Global_262145.f_15603;
			break;
		
		case 5:
			return Global_262145.f_15604;
			break;
		
		case 6:
			return Global_262145.f_15605;
			break;
		
		case 7:
			return Global_262145.f_15606;
			break;
		
		case 8:
			return Global_262145.f_15607;
			break;
		
		case 9:
			return Global_262145.f_15608;
			break;
		
		case 10:
			return Global_262145.f_15609;
			break;
		
		case 11:
			return Global_262145.f_15610;
			break;
		
		case 12:
			return Global_262145.f_15611;
			break;
		
		case 13:
			return Global_262145.f_15612;
			break;
		
		case 14:
			return Global_262145.f_15613;
			break;
		
		case 15:
			return Global_262145.f_15614;
			break;
		
		case 16:
			return Global_262145.f_15615;
			break;
		
		case 17:
			return Global_262145.f_15616;
			break;
		
		case 18:
			return Global_262145.f_15617;
			break;
		
		case 19:
			return Global_262145.f_15618;
			break;
		
		case 20:
			return Global_262145.f_15619;
			break;
		
		case 21:
			return Global_262145.f_15620;
			break;
		
		case 22:
			return Global_262145.f_15621;
			break;
		
		case 23:
			return Global_262145.f_15622;
			break;
		
		case 24:
			return Global_262145.f_15623;
			break;
	}
	return 0;
}

var func_658(int iParam0)//Position - 0x1A34B
{
	if (iParam0 >= Global_262145.f_14654)
	{
		return Global_262145.f_14675;
	}
	else if (iParam0 >= Global_262145.f_14653)
	{
		return Global_262145.f_14674;
	}
	else if (iParam0 >= Global_262145.f_14652)
	{
		return Global_262145.f_14673;
	}
	else if (iParam0 >= Global_262145.f_14651)
	{
		return Global_262145.f_14672;
	}
	else if (iParam0 >= Global_262145.f_14650)
	{
		return Global_262145.f_14671;
	}
	else if (iParam0 >= Global_262145.f_14649)
	{
		return Global_262145.f_14670;
	}
	else if (iParam0 >= Global_262145.f_14648)
	{
		return Global_262145.f_14669;
	}
	else if (iParam0 >= Global_262145.f_14647)
	{
		return Global_262145.f_14668;
	}
	else if (iParam0 >= Global_262145.f_14646)
	{
		return Global_262145.f_14667;
	}
	else if (iParam0 >= Global_262145.f_14645)
	{
		return Global_262145.f_14666;
	}
	else if (iParam0 >= Global_262145.f_14644)
	{
		return Global_262145.f_14665;
	}
	else if (iParam0 >= Global_262145.f_14643)
	{
		return Global_262145.f_14664;
	}
	else if (iParam0 >= Global_262145.f_14642)
	{
		return Global_262145.f_14663;
	}
	else if (iParam0 >= Global_262145.f_14641)
	{
		return Global_262145.f_14662;
	}
	else if (iParam0 >= Global_262145.f_14640)
	{
		return Global_262145.f_14661;
	}
	else if (iParam0 >= Global_262145.f_14639)
	{
		return Global_262145.f_14660;
	}
	else if (iParam0 >= Global_262145.f_14638)
	{
		return Global_262145.f_14659;
	}
	else if (iParam0 >= Global_262145.f_14637)
	{
		return Global_262145.f_14658;
	}
	else if (iParam0 >= Global_262145.f_14636)
	{
		return Global_262145.f_14657;
	}
	else if (iParam0 >= Global_262145.f_14635)
	{
		return Global_262145.f_14656;
	}
	return Global_262145.f_14655;
}

int func_659(int iParam0)//Position - 0x1A54B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_666(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_665(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_664(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_660(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_660(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_664(unk_0x63A6486593EC7EC3(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_660(int iParam0)//Position - 0x1A5C7
{
	int iVar0;
	
	if (func_663(iParam0))
	{
		iVar0 = func_661(func_662(iParam0));
		return func_512(iVar0, -1, 0);
	}
	return 0;
}

int func_661(int iParam0)//Position - 0x1A5F0
{
	if (iParam0 == 0)
	{
		return 3635;
	}
	else if (iParam0 == 1)
	{
		return 3636;
	}
	else if (iParam0 == 2)
	{
		return 3637;
	}
	else if (iParam0 == 3)
	{
		return 3638;
	}
	else if (iParam0 == 4)
	{
		return 3639;
	}
	return 3635;
}

int func_662(int iParam0)//Position - 0x1A643
{
	int iVar0;
	
	if (func_663(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_84[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_663(int iParam0)//Position - 0x1A685
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_664(int iParam0)//Position - 0x1A6A4
{
	if (iParam0 == 1)
	{
		return Global_262145.f_14854;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_14852;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_14856;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_14850;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_14848;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_14858;
	}
	return 0;
}

int func_665(int iParam0, int iParam1)//Position - 0x1A71C
{
	int iVar0;
	
	if (func_663(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1669253[iVar0] == iParam1 && Global_1669260[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_666(int iParam0)//Position - 0x1A762
{
	int iVar0;
	
	if (func_663(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_84[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_667()//Position - 0x1A7A3
{
	int iVar0;
	
	iVar0 = Global_2549320[func_146()];
	iVar0++;
	Global_2549320[func_146()] = iVar0;
	func_509(3654, iVar0, -1, 1);
}

void func_668()//Position - 0x1A7D4
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2549317[func_146()];
	iVar1 = Global_2549326[func_146()];
	iVar0++;
	iVar1++;
	Global_2549317[func_146()] = iVar0;
	Global_2549326[func_146()] = iVar1;
	Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_106 = iVar1;
	func_509(3652, iVar0, -1, 1);
	func_509(3653, iVar1, -1, 1);
}

void func_669()//Position - 0x1A840
{
	if (func_880())
	{
		Global_2447954.f_3066.f_134 = 0;
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_408 = Global_2447954.f_3066.f_134;
	}
}

void func_670()//Position - 0x1A872
{
	if (func_880())
	{
		if (Global_2447954.f_3066.f_134 < 10)
		{
			Global_2447954.f_3066.f_134++;
			Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_408 = Global_2447954.f_3066.f_134;
		}
	}
}

void func_671()//Position - 0x1A8BC
{
	if (func_880())
	{
		if (Global_2447954.f_3066.f_134 > 0)
		{
			Global_2447954.f_3066.f_134 = (Global_2447954.f_3066.f_134 - 1);
			Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_408 = Global_2447954.f_3066.f_134;
		}
	}
}

int func_672(int iParam0)//Position - 0x1A905
{
	return Global_1627537[iParam0 /*532*/].f_11.f_28;
}

int func_673(int iParam0)//Position - 0x1A91A
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
			if (func_496(1) && !func_346(1))
			{
				if (func_674(func_495()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_674(int iParam0)//Position - 0x1A989
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 26);
}

int func_675(int iParam0)//Position - 0x1A9AF
{
	switch (iParam0)
	{
		case 142:
			return system::round((IntToFloat(Global_262145.f_11846) * Global_262145.f_11851));
		
		case 157:
			return 0;
		
		case 159:
			return system::round((IntToFloat(Global_262145.f_11796) * Global_262145.f_11801));
		
		case 151:
			return 0;
		
		case 148:
			return system::round((IntToFloat(Global_262145.f_11823) * Global_262145.f_11827));
		
		case 164:
			return system::round((IntToFloat(Global_262145.f_11836) * Global_262145.f_11840));
		
		case 152:
			return system::round((IntToFloat(Global_262145.f_11858) * Global_262145.f_11863));
		
		case 153:
			return system::round((IntToFloat(Global_262145.f_12020) * Global_262145.f_12021));
		
		case 154:
			return system::round((IntToFloat(Global_262145.f_12026) * Global_262145.f_12027));
		
		case 155:
			return system::round((IntToFloat(Global_262145.f_12024) * Global_262145.f_12025));
		
		case 160:
			return system::round((IntToFloat(Global_262145.f_12018) * Global_262145.f_12019));
		
		case 162:
			return system::round((IntToFloat(Global_262145.f_12022) * Global_262145.f_12023));
		
		case 163:
			return system::round((IntToFloat(Global_262145.f_12016) * Global_262145.f_12017));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_14377;
		
		case 172:
			return Global_262145.f_14393;
		
		case 173:
			return Global_262145.f_14336;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_17610;
		
		case 180:
			return Global_262145.f_17486;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_17494;
		
		case 185:
			return Global_262145.f_17503;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_17698;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_17715;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_17563;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_17746;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_17624;
		
		case 205:
			return Global_262145.f_17733;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_17591;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_17728;
		
		case 211:
			return Global_262145.f_17692;
		
		case 214:
			return Global_262145.f_18262;
		
		case 215:
			return Global_262145.f_18272;
		
		case 216:
			return Global_262145.f_18282;
		
		case 217:
			return Global_262145.f_18291;
		
		case 218:
			return Global_262145.f_18300;
		
		case 219:
			return Global_262145.f_18316;
		
		default:
	}
	return 0;
}

int func_676(int iParam0, bool bParam1)//Position - 0x1ACF4
{
	switch (iParam0)
	{
		case 142:
			return system::round((IntToFloat(Global_262145.f_11847) * Global_262145.f_11852));
		
		case 157:
			return 0;
		
		case 159:
			return system::round((IntToFloat(Global_262145.f_11797) * Global_262145.f_11802));
		
		case 151:
			return 0;
		
		case 148:
			return system::round((IntToFloat(Global_262145.f_11824) * Global_262145.f_11828));
		
		case 164:
			return system::round((IntToFloat(Global_262145.f_11837) * Global_262145.f_11841));
		
		case 152:
			return system::round((IntToFloat(Global_262145.f_11859) * Global_262145.f_11864));
		
		case 153:
			return system::round((IntToFloat(Global_262145.f_11896) * Global_262145.f_11899));
		
		case 154:
			return system::round((IntToFloat(Global_262145.f_11942) * Global_262145.f_11945));
		
		case 155:
			return system::round((IntToFloat(Global_262145.f_11932) * Global_262145.f_11935));
		
		case 160:
			return system::round((IntToFloat(Global_262145.f_11887) * Global_262145.f_11890));
		
		case 162:
			return system::round((IntToFloat(Global_262145.f_11907) * Global_262145.f_11912));
		
		case 163:
			return system::round((IntToFloat(Global_262145.f_11872) * Global_262145.f_11875));
		
		case 170:
			return Global_262145.f_14319;
		
		case 171:
			return Global_262145.f_14378;
		
		case 172:
			return Global_262145.f_14394;
		
		case 173:
			return Global_262145.f_14337;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_16414;
		
		case 168:
			return Global_262145.f_16413;
		
		case 179:
			return Global_262145.f_17611;
		
		case 180:
			return Global_262145.f_17487;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_17495;
		
		case 185:
			return Global_262145.f_17504;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_17699;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_17716;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_17564;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_17747;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_17625;
		
		case 205:
			return Global_262145.f_17734;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_17592;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_17729;
		
		case 211:
			return Global_262145.f_17693;
		
		case 214:
			return Global_262145.f_18263;
		
		case 215:
			return Global_262145.f_18273;
		
		case 216:
			return Global_262145.f_18283;
		
		case 217:
			return Global_262145.f_18292;
		
		case 218:
			return Global_262145.f_18301;
		
		case 219:
			return Global_262145.f_18317;
		
		case 178:
			if (func_880())
			{
				return Global_262145.f_18140;
			}
			else if (bParam1)
			{
				return Global_262145.f_18141;
			}
			break;
		
		case 188:
			if (func_880())
			{
				return Global_262145.f_18224;
			}
			else if (bParam1)
			{
				return Global_262145.f_18225;
			}
			break;
		
		case 225:
			if (func_880() && !func_536())
			{
				if (func_674(unk_0x9EB17624F44A8DA4()))
				{
					return Global_262145.f_20345;
				}
				else
				{
					return Global_262145.f_20346;
				}
			}
			else if (func_536())
			{
				return Global_262145.f_20347;
			}
			break;
		
		case 226:
			if (func_880() && !func_536())
			{
				if (func_674(unk_0x9EB17624F44A8DA4()))
				{
					return Global_262145.f_20325;
				}
				else
				{
					return Global_262145.f_20326;
				}
			}
			else if (func_536())
			{
				return Global_262145.f_20327;
			}
			break;
		
		case 227:
			if (func_880() && !func_536())
			{
				if (func_674(unk_0x9EB17624F44A8DA4()))
				{
					return Global_262145.f_20337;
				}
				else
				{
					return Global_262145.f_20338;
				}
			}
			else if (func_536())
			{
				return Global_262145.f_20339;
			}
			break;
		
		case 229:
			if (func_880() && !func_536())
			{
				if (func_674(unk_0x9EB17624F44A8DA4()))
				{
					return Global_262145.f_21500;
				}
				else
				{
					return Global_262145.f_21501;
				}
			}
			else if (func_536())
			{
				return Global_262145.f_21502;
			}
			break;
		
		case 230:
			if (func_880() && !func_536())
			{
				if (func_674(unk_0x9EB17624F44A8DA4()))
				{
					return Global_262145.f_21596;
				}
				else
				{
					return Global_262145.f_21597;
				}
			}
			else if (func_536())
			{
				return Global_262145.f_21598;
			}
			break;
		
		case 233:
			if (func_880() && !func_536())
			{
				if (func_674(unk_0x9EB17624F44A8DA4()))
				{
					return Global_262145.f_22057;
				}
				else
				{
					return Global_262145.f_22058;
				}
			}
			else if (func_536())
			{
				return Global_262145.f_22056;
			}
			break;
	}
	return 0;
}

void func_677(int iParam0, var uParam1, var uParam2)//Position - 0x1B297
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_678(iParam0))
	{
		if (!func_880())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_11740;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_410(iParam0))
	{
		*uParam1 = (Global_262145.f_17464 / 100f);
		*uParam2 = (Global_262145.f_17464 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_11739;
		*uParam2 = Global_262145.f_11738;
	}
	if (func_410(iParam0))
	{
		if (func_285(unk_0x9EB17624F44A8DA4(), 1))
		{
			*uParam1 = (Global_262145.f_17463 / 100f);
			*uParam2 = (Global_262145.f_17463 / 100f);
		}
	}
	else if (func_285(unk_0x9EB17624F44A8DA4(), 1))
	{
		*uParam1 = Global_262145.f_11737;
		*uParam2 = Global_262145.f_11736;
	}
	iVar0 = func_349();
	if (iVar0 != func_81())
	{
		if (func_320(unk_0x9EB17624F44A8DA4(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_678(int iParam0)//Position - 0x1B39B
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_679(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1B3DF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_221(unk_0x9EB17624F44A8DA4());
	if (func_410(iVar0))
	{
		Global_1667885.f_2 = func_740();
		Global_1667885.f_3 = func_739();
		Global_1667885.f_50 = iParam4;
		Global_1667885.f_51 = iParam5;
		Global_1667885.f_10 = unk_0xE3CCAFB1555348DF();
		Global_1667885.f_20 = (Global_1667885.f_10 - Global_1667885.f_9);
		Global_1667885.f_12 = iParam1;
		Global_1667885.f_19 = func_733(iVar0, bParam0, func_738(bParam3));
		if (bParam0)
		{
			Global_1667885.f_11 = 1;
		}
		else
		{
			Global_1667885.f_11 = 0;
		}
		if ((func_241(unk_0x9EB17624F44A8DA4()) || func_390(unk_0x9EB17624F44A8DA4())) || func_291(unk_0x9EB17624F44A8DA4()))
		{
			Global_1667885.f_8 = 1;
		}
		else
		{
			Global_1667885.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1667885.f_43 = 0;
			Global_1667885.f_45 = func_732(func_495(), iParam2);
			Global_1667885.f_47 = iParam7;
			Global_1667885.f_46 = iParam6;
			Global_1667885.f_52 = func_731(func_495(), iParam2);
		}
		func_729(iVar0);
	}
	else if (func_414(iVar0))
	{
		Global_1667938.f_2 = func_740();
		Global_1667938.f_3 = func_739();
		Global_1667938.f_10 = unk_0xE3CCAFB1555348DF();
		Global_1667938.f_19 = (Global_1667938.f_10 - Global_1667938.f_9);
		Global_1667938.f_12 = iParam1;
		if (bParam0)
		{
			Global_1667938.f_11 = 1;
		}
		else
		{
			Global_1667938.f_11 = 0;
		}
		if ((func_241(unk_0x9EB17624F44A8DA4()) || func_390(unk_0x9EB17624F44A8DA4())) || func_291(unk_0x9EB17624F44A8DA4()))
		{
			Global_1667938.f_8 = 1;
		}
		else
		{
			Global_1667938.f_8 = 0;
		}
		func_727(iVar0);
	}
	else if (func_447(iVar0))
	{
		Global_1668000.f_2 = func_740();
		Global_1668000.f_3 = func_739();
		Global_1668000.f_9 = unk_0xE3CCAFB1555348DF();
		Global_1668000.f_18 = (Global_1668000.f_9 - Global_1668000.f_8);
		Global_1668000.f_11 = iParam1;
		Global_1668000.f_7 = func_726();
		Global_1668000.f_42 = func_724(func_146(), 5);
		iVar1 = unk_0x9EB17624F44A8DA4();
		iVar2 = func_523(iVar1);
		Global_1668000.f_28 = iVar2;
		Global_1668000.f_29 = func_721((func_723(iVar1) || func_722(iVar1)));
		Global_1668000.f_30 = func_721(func_720(iVar1));
		Global_1668000.f_32 = func_721(func_719(iVar1));
		Global_1668000.f_33 = func_721(func_718(iVar1));
		Global_1668000.f_34 = func_721(func_717(iVar1));
		Global_1668000.f_35 = func_721(func_716(0, iVar1) == 1);
		Global_1668000.f_36 = func_721(func_715(iVar1));
		Global_1668000.f_37 = func_721(func_714(iVar1));
		Global_1668000.f_38 = func_721(func_713(iVar1));
		Global_1668000.f_39 = func_721(func_647(iVar1, iVar2, 0));
		Global_1668000.f_40 = func_721(func_647(iVar1, iVar2, 2));
		Global_1668000.f_41 = func_721(func_647(iVar1, iVar2, 1));
		if (func_712(iVar1))
		{
			Global_1668000.f_31 = 2;
		}
		else if (func_711(iVar1))
		{
			Global_1668000.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1668000.f_10 = 1;
		}
		else
		{
			Global_1668000.f_10 = 0;
		}
		if ((func_241(unk_0x9EB17624F44A8DA4()) || func_390(unk_0x9EB17624F44A8DA4())) || func_291(unk_0x9EB17624F44A8DA4()))
		{
			Global_1668000.f_6 = 1;
		}
		else
		{
			Global_1668000.f_6 = 0;
		}
		Global_1668000.f_21 = -2;
		Global_1668000.f_22 = -2;
		func_709(iVar0);
	}
	else if (func_445(iVar0))
	{
		Global_1668043.f_2 = func_740();
		Global_1668043.f_3 = func_739();
		if ((func_241(unk_0x9EB17624F44A8DA4()) || func_390(unk_0x9EB17624F44A8DA4())) || func_291(unk_0x9EB17624F44A8DA4()))
		{
			Global_1668043.f_6 = 1;
		}
		else
		{
			Global_1668043.f_6 = 0;
		}
		Global_1668043.f_9 = unk_0xE3CCAFB1555348DF();
		Global_1668043.f_10 = func_721(bParam0);
		Global_1668043.f_11 = iParam1;
		Global_1668043.f_17 = func_708(func_349());
		Global_1668043.f_18 = (Global_1668043.f_9 - Global_1668043.f_8);
		Global_1668043.f_20 = iParam8;
		Global_1668043.f_21 = -2;
		Global_1668043.f_22 = -2;
		Global_1668043.f_27 = func_707();
		Global_1668043.f_29 = func_512(6090, -1, 0);
		Global_1668043.f_30 = func_512(6086, -1, 0);
		Global_1668043.f_31 = func_512(6087, -1, 0);
		Global_1668043.f_32 = func_512(6089, -1, 0);
		Global_1668043.f_33 = func_512(6088, -1, 0);
		Global_1668043.f_34 = func_512(6091, -1, 0);
		Global_1668043.f_36 = func_721(func_346(1));
		Global_1668043.f_37 = func_704();
		func_689();
		func_687(iVar0);
	}
	else if (func_443(iVar0))
	{
		Global_1668096.f_2 = func_740();
		Global_1668096.f_3 = func_739();
		if ((func_241(unk_0x9EB17624F44A8DA4()) || func_390(unk_0x9EB17624F44A8DA4())) || func_291(unk_0x9EB17624F44A8DA4()))
		{
			Global_1668096.f_6 = 1;
		}
		else
		{
			Global_1668096.f_6 = 0;
		}
		Global_1668096.f_9 = unk_0xE3CCAFB1555348DF();
		Global_1668096.f_10 = func_721(bParam0);
		Global_1668096.f_11 = iParam1;
		Global_1668096.f_18 = (Global_1668096.f_9 - Global_1668096.f_8);
		Global_1668096.f_20 = iParam8;
		Global_1668096.f_23 = Global_786547;
		Global_1668096.f_36 = Global_786547.f_1;
		Global_1668096.f_24 = func_512(6140, -1, 0);
		Global_1668096.f_25 = func_512(6145, -1, 0);
		Global_1668096.f_26 = func_512(6146, -1, 0);
		Global_1668096.f_27 = func_721((((func_686() || func_685()) || func_684()) || func_683(unk_0x9EB17624F44A8DA4())));
		Global_1668096.f_28 = func_512(6147, -1, 0);
		Global_1668096.f_29 = func_721(func_682());
		Global_1668096.f_35 = -1;
		Global_1668096.f_38 = -1;
		Global_1668096.f_39 = Global_1668096.f_4;
		Global_1668096.f_40 = Global_1668096.f_5;
		Global_1668096.f_41 = func_740();
		Global_1668096.f_42 = func_721(func_346(1));
		Global_1668096.f_44 = Global_1668096.f_18;
		func_680(iVar0);
	}
	else
	{
		Global_1667867.f_6 = unk_0xE3CCAFB1555348DF();
		if (bParam0)
		{
			Global_1667867.f_7 = 1;
		}
		else
		{
			Global_1667867.f_7 = 0;
		}
		Global_1667867.f_8 = iParam1;
		if (Global_1667867.f_4 == 0)
		{
			if ((func_241(unk_0x9EB17624F44A8DA4()) || func_390(unk_0x9EB17624F44A8DA4())) || func_291(unk_0x9EB17624F44A8DA4()))
			{
				Global_1667867.f_4 = 1;
			}
		}
	}
}

void func_680(int iParam0)//Position - 0x1BA63
{
	unk_0xFDD76EF6D7C1C5E7(&Global_1668096);
	func_681();
}

void func_681()//Position - 0x1BA77
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1668096 = { Var0 };
	Global_1668096.f_16 = 0;
}

bool func_682()//Position - 0x1BB85
{
	return func_512(6139, -1, 0) != 0;
}

int func_683(int iParam0)//Position - 0x1BB98
{
	if (iParam0 != func_81())
	{
		return Global_1595693[iParam0 /*680*/].f_266.f_248 != 0;
	}
	return 0;
}

bool func_684()//Position - 0x1BBBD
{
	return func_512(6147, -1, 0) == 3;
}

bool func_685()//Position - 0x1BBD0
{
	return func_512(6147, -1, 0) == 2;
}

bool func_686()//Position - 0x1BBE3
{
	return func_512(6147, -1, 0) == 1;
}

void func_687(int iParam0)//Position - 0x1BBF6
{
	unk_0x705964318EE23D2C(&Global_1668043);
	func_688();
}

void func_688()//Position - 0x1BC0A
{
	struct<53> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1668043 = { Var0 };
	Global_1668043.f_23 = 0;
	Global_1668043.f_24 = 0;
	Global_1668043.f_16 = 0;
}

void func_689()//Position - 0x1BD50
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_700(12));
		func_699(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1320310[iVar1 /*141*/].f_66 != 0 && func_691(Global_1320310[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2512808.f_871 != iVar1)
				{
					if (func_690(Global_1320310[iVar1 /*141*/].f_66))
					{
						if (Global_1320310[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1320310[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1668043.f_38 = iVar3;
								break;
							
							case 1:
								Global_1668043.f_39 = iVar3;
								break;
							
							case 2:
								Global_1668043.f_40 = iVar3;
								break;
							
							case 3:
								Global_1668043.f_41 = iVar3;
								break;
							
							case 4:
								Global_1668043.f_42 = iVar3;
								break;
							
							case 5:
								Global_1668043.f_43 = iVar3;
								break;
							
							case 6:
								Global_1668043.f_44 = iVar3;
								break;
							
							case 7:
								Global_1668043.f_45 = iVar3;
								break;
							
							case 8:
								Global_1668043.f_46 = iVar3;
								break;
							
							case 9:
								Global_1668043.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_690(int iParam0)//Position - 0x1BE96
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

int func_691(int iParam0, bool bParam1)//Position - 0x1BFC4
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
		if (!func_698())
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
		if ((((!func_697() && !func_696()) && !func_695()) && !func_694()) && !func_698())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x177281F5FA205A38() || unk_0xB9D80B12FE4456A5()) || unk_0xFD6215BABFD843F2())
		{
		}
		else if (!func_695())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_693(iParam0))
		{
			return 0;
		}
	}
	if (!func_692(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_692(int iParam0)//Position - 0x1C153
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_537())
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

int func_693(int iParam0)//Position - 0x1C21F
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

int func_694()//Position - 0x1DAA7
{
	return 0;
}

int func_695()//Position - 0x1DAB0
{
	return 1;
}

int func_696()//Position - 0x1DAB9
{
	return 1;
}

int func_697()//Position - 0x1DAC2
{
	if (unk_0x21EA5D4DC72DE119(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_698()//Position - 0x1DADB
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

void func_699(int iParam0, int iParam1, bool bParam2)//Position - 0x1DB96
{
	if (Global_262145.f_9507)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1664862[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0x4B64A8D052027742() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_700(int iParam0)//Position - 0x1DBD6
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_703(iParam0);
		return func_702(iVar0);
	}
	return (func_701(iParam0, -1) * iParam0);
}

int func_701(int iParam0, int iParam1)//Position - 0x1DC85
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_454(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_460(iParam1))
			{
				return 0;
			}
			else if (func_452(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 <= 117 && iParam1 > 0)
			{
				if (Global_1049531[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049531[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049531[iParam1 /*1951*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
	}
	return 0;
}

int func_702(int iParam0)//Position - 0x1DDDF
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		default:
	}
	return -1;
}

int func_703(int iParam0)//Position - 0x1DDFA
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 1)
	{
		return iParam0;
	}
	return -1;
}

var func_704()//Position - 0x1DE20
{
	var uVar0;
	
	uVar0 = func_706();
	if (!func_880())
	{
		if (func_495() != func_81())
		{
			uVar0 = func_705(func_495()) + 1;
		}
	}
	return uVar0;
}

int func_705(int iParam0)//Position - 0x1DE4F
{
	return Global_1627537[iParam0 /*532*/].f_11.f_19;
}

int func_706()//Position - 0x1DE64
{
	return func_705(unk_0x9EB17624F44A8DA4()) + 1;
}

int func_707()//Position - 0x1DE76
{
	return func_512(6096, -1, 0);
}

int func_708(int iParam0)//Position - 0x1DE87
{
	if (func_285(iParam0, 1))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_410;
	}
	return -1;
}

void func_709(int iParam0)//Position - 0x1DEAB
{
	if (iParam0 == 0)
	{
	}
	unk_0xAEAF29A3BD6D6C8B(&Global_1668000);
	func_710();
}

void func_710()//Position - 0x1DEC5
{
	struct<43> Var0;
	
	Global_1668000 = { Var0 };
	Global_1668000.f_23 = 0;
	Global_1668000.f_24 = 0;
	Global_1668000.f_16 = 0;
}

bool func_711(int iParam0)//Position - 0x1DEEE
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 12);
}

bool func_712(int iParam0)//Position - 0x1DF0B
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 13);
}

int func_713(int iParam0)//Position - 0x1DF28
{
	if (iParam0 != func_81())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 12) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 13)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_714(int iParam0)//Position - 0x1DF89
{
	if (iParam0 != func_81())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 0) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 1)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_715(int iParam0)//Position - 0x1DFE7
{
	if (iParam0 != func_81())
	{
		if (((((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 3) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 4)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 5)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 0)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 1)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_716(int iParam0, int iParam1)//Position - 0x1E090
{
	if (iParam1 == func_81())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 0))
			{
				return 3;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 3))
			{
				return 2;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 6))
			{
				return 4;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 9))
			{
				return 1;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 12))
			{
				return 7;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 15))
			{
				return 5;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 18))
			{
				return 6;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 21))
			{
				return 0;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 1))
			{
				return 3;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 4))
			{
				return 2;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 7))
			{
				return 4;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 10))
			{
				return 1;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 13))
			{
				return 7;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 16))
			{
				return 5;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 19))
			{
				return 6;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 22))
			{
				return 0;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 2))
			{
				return 3;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 5))
			{
				return 2;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 8))
			{
				return 4;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 11))
			{
				return 1;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 14))
			{
				return 7;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 17))
			{
				return 5;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 20))
			{
				return 6;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 23))
			{
				return 0;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_717(int iParam0)//Position - 0x1E3E4
{
	if (iParam0 != func_81())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 6) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 7)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_718(int iParam0)//Position - 0x1E443
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 8);
}

bool func_719(int iParam0)//Position - 0x1E460
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 7);
}

bool func_720(int iParam0)//Position - 0x1E47C
{
	if (iParam0 == func_81())
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 9);
}

int func_721(bool bParam0)//Position - 0x1E4A6
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_722(int iParam0)//Position - 0x1E4B8
{
	if (iParam0 == func_81())
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 11);
}

bool func_723(int iParam0)//Position - 0x1E4E2
{
	if (iParam0 == func_81())
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 10);
}

int func_724(int iParam0, int iParam1)//Position - 0x1E50C
{
	return func_512(func_725(iParam1), iParam0, 0);
}

int func_725(int iParam0)//Position - 0x1E521
{
	switch (iParam0)
	{
		case 0:
			return 3881;
		
		case 1:
			return 3910;
		
		case 2:
			return 3914;
		
		case 3:
			return 3918;
		
		case 4:
			return 3922;
		
		case 5:
			return 5433;
		
		default:
	}
	return 3881;
}

int func_726()//Position - 0x1E57B
{
	int iVar0;
	
	if (func_536())
	{
		return 4;
	}
	else if (func_880())
	{
		if (func_674(unk_0x9EB17624F44A8DA4()))
		{
			return 8;
		}
		return 6;
	}
	if (func_346(1))
	{
		iVar0 = func_708(unk_0x9EB17624F44A8DA4());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_496(1))
	{
		if (func_674(func_495()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

void func_727(int iParam0)//Position - 0x1E5EE
{
	if (iParam0 == 0)
	{
	}
	unk_0xB3B5EB2045CAF8EA(&Global_1667938);
	func_728();
}

void func_728()//Position - 0x1E608
{
	struct<62> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Global_1667938 = { Var0 };
	Global_1667938.f_24 = 0;
	Global_1667938.f_25 = 0;
	Global_1667938.f_17 = 0;
}

void func_729(int iParam0)//Position - 0x1E76C
{
	if (iParam0 == 0)
	{
	}
	unk_0x5F25D506765D3ED6(&Global_1667885);
	func_730();
}

void func_730()//Position - 0x1E786
{
	struct<53> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1667885 = { Var0 };
	Global_1667885.f_29 = 0;
	Global_1667885.f_30 = 0;
	Global_1667885.f_17 = 0;
}

int func_731(int iParam0, int iParam1)//Position - 0x1E8B4
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_647(iParam0, iParam1, 2);
	bVar1 = func_647(iParam0, iParam1, 1);
	bVar2 = func_647(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_732(int iParam0, int iParam1)//Position - 0x1E96A
{
	int iVar0;
	
	if (iParam0 == func_81())
	{
		return 0;
	}
	if (func_642(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_733(int iParam0, bool bParam1, bool bParam2)//Position - 0x1E9C9
{
	int iVar0;
	int iVar1;
	
	if (func_450(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17021;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17020;
		}
		else
		{
			iVar0 = Global_262145.f_17002;
		}
		iVar1 = 19;
	}
	else if (func_449(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_318(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17001;
			iVar1 = 20;
		}
	}
	else if (func_410(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17021;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17020;
		}
		else
		{
			iVar0 = Global_262145.f_17002;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0xF2CDA5A7C6ED93BE(func_737(func_495()), func_736(func_495()), func_740(), func_739(), iVar1, iVar0);
	}
	func_735(iVar0);
	func_734(iVar0);
	return iVar0;
}

void func_734(int iParam0)//Position - 0x1EABC
{
	int iVar0;
	
	iVar0 = func_512(3951, -1, 0);
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
	func_510(3951, iVar0, -1, 1, 0);
}

void func_735(int iParam0)//Position - 0x1EB0A
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

int func_736(int iParam0)//Position - 0x1EB84
{
	if (iParam0 == func_81())
	{
		return -1;
	}
	return Global_1627537[iParam0 /*532*/].f_11.f_8[1];
}

int func_737(int iParam0)//Position - 0x1EBA9
{
	if (iParam0 == func_81())
	{
		return -1;
	}
	return Global_1627537[iParam0 /*532*/].f_11.f_8[0];
}

int func_738(bool bParam0)//Position - 0x1EBCE
{
	if (bParam0)
	{
		return 0;
	}
	if (func_241(unk_0x9EB17624F44A8DA4()) || func_291(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	return 0;
}

int func_739()//Position - 0x1EBFD
{
	if (Global_1667867.f_3 != 0)
	{
		return Global_1667867.f_3;
	}
	return -1;
}

int func_740()//Position - 0x1EC19
{
	if (Global_1667867.f_2 != 0)
	{
		return Global_1667867.f_2;
	}
	return -1;
}

int func_741(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x1EC35
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_81();
	iVar1 = func_81();
	iVar2 = func_81();
	return func_742(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_742(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x1EC70
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_494(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_16 = iParam5;
	Var0.f_17 = iParam6;
	Var0.f_18 = iParam7;
	StringCopy(&(Var0.f_24), sParam3, 64);
	StringCopy(&(Var0.f_56), sParam8, 16);
	Var0.f_72 = uParam4;
	Var0.f_70 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_71 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_70 = iParam14;
	}
	unk_0x872F1C1F8587CCC7(&(Var0.f_68), 2);
	return func_467(&Var0);
}

int func_743(int iParam0)//Position - 0x1ED1E
{
	int iVar0;
	
	iVar0 = func_289(iParam0);
	if (iVar0 != -1)
	{
		return func_287(iVar0);
	}
	return 1;
}

char* func_744()//Position - 0x1ED3E
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_82(unk_0x9EB17624F44A8DA4());
	if (iVar0 != func_81())
	{
		if (iVar0 != unk_0x9EB17624F44A8DA4())
		{
			if (((func_194(iVar0, 28) || func_194(unk_0x9EB17624F44A8DA4(), 28)) || func_500(iVar0)) && !func_499(iVar0))
			{
				return func_501(iVar0, 0);
			}
			if (!unk_0x177281F5FA205A38() && !unk_0x8E095DA8BB18B959(0, -1, 1))
			{
				return func_501(iVar0, 0);
			}
		}
		sVar1 = func_503(&(Global_1627537[iVar0 /*532*/].f_11.f_99));
		if (unk_0xAB019B170BF1309C(sVar1))
		{
			return func_501(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

void func_745()//Position - 0x1EDEF
{
	func_876();
	func_835();
	func_824();
	func_814();
	func_767();
	func_762();
	func_749();
	func_746();
}

void func_746()//Position - 0x1EE17
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_421 != Local_131.f_5)
	{
		if (Local_131.f_34 != -1)
		{
			if (func_436())
			{
				if (func_389(unk_0x9EB17624F44A8DA4()) >= 1)
				{
					if (Local_131.f_5 > 0)
					{
						if (Local_131.f_37 > -1)
						{
							iVar0 = unk_0xF6A72924028F588B(Local_131.f_37);
							if (unk_0x552F39AE86E07792(iVar0))
							{
								if (iVar0 != unk_0x9EB17624F44A8DA4())
								{
									if (func_285(iVar0, 1))
									{
										iVar1 = func_289(iVar0);
										if (iVar1 > -1)
										{
											iVar2 = func_287(iVar1);
											func_747("GB_SGHT_TCKC", iVar0, iVar2, 0, 0, 0, 1, 1, 0);
										}
									}
									else
									{
										func_747("GB_SGHT_TCKC", iVar0, 1, 0, 0, 0, 1, 1, 0);
									}
								}
							}
						}
					}
				}
			}
			iLocal_421 = Local_131.f_5;
		}
	}
}

int func_747(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)//Position - 0x1EEBF
{
	int iVar0;
	struct<16> Var1;
	int iVar2;
	int iVar3;
	
	iVar0 = -1;
	if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iParam1) || iParam4)
	{
		if (!bParam3)
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
		unk_0xF92B835A141C6BDD(iParam2);
		unk_0x854FACC4E5F40C82(func_598(&Var1));
		if (!bParam5)
		{
			iVar0 = unk_0x65F0733C4A64907A(0, 1);
		}
		else
		{
			Global_2492157 = { func_83(iParam1) };
			if (unk_0x5CF21D71A8C4CFA6(&Global_2492087, 35, &Global_2492157))
			{
				iVar2 = 0;
				if (unk_0x74C475EB8E73D398(&(Global_2492087.f_22), "Leader") && Global_2492087.f_30 == 0)
				{
					iVar2 = 1;
				}
				if (Global_2492087.f_21 > 0)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				if (bParam7)
				{
					if (bParam8)
					{
						Var1 = { func_748(&Var1) };
					}
					iVar0 = unk_0x679630D62246D8FF(iVar3, unk_0x12D16CE3923A2F1B(&Global_2492087, 35), &(Global_2492087.f_17), Global_2492087.f_30, iVar2, 0, Global_2492087, &Var1, Global_1314011, Global_1314012, Global_1314013);
				}
				else
				{
					iVar0 = unk_0xFEAF1A64BAF2011F(iVar3, unk_0x12D16CE3923A2F1B(&Global_2492087, 35), &(Global_2492087.f_17), Global_2492087.f_30, iVar2, 0, Global_2492087, Global_1314011, Global_1314012, Global_1314013);
				}
			}
			else
			{
				iVar0 = unk_0x65F0733C4A64907A(0, 1);
			}
		}
		func_594(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_748(char* sParam0)//Position - 0x1F020
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_749()//Position - 0x1F04B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_896() && !func_398())
	{
		return;
	}
	if (unk_0xC80D31E4B587871C(Local_144, 0))
	{
		return;
	}
	if (!func_436())
	{
		return;
	}
	iVar0 = func_389(unk_0x9EB17624F44A8DA4());
	if (iVar0 < 3)
	{
		return;
	}
	if (func_9(&(Local_131.f_51)))
	{
		iVar1 = (func_11() - func_761(&(Local_131.f_51), 0, 0));
		iVar2 = (func_183() - Local_131.f_5);
		func_760(iVar1);
		if (iVar1 > 30000)
		{
			func_750(iVar2, "GB_SGHT_HUD", iVar1, 1, "GB_WORK_END");
		}
		else if (iVar1 > 0)
		{
			func_750(iVar2, "GB_SGHT_HUD", iVar1, 6, "GB_WORK_END");
		}
		else
		{
			func_750(iVar2, "GB_SGHT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_750(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)//Position - 0x1F107
{
	char* sVar0;
	
	if (func_758(0) == 0)
	{
		return;
	}
	func_757();
	func_754(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_578(sParam4))
	{
		sVar0 = sParam4;
	}
	func_751(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0);
}

void func_751(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x1F16C
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_753(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_752(7, iVar0);
		Global_1359035.f_4388[iVar0] = uParam0;
		StringCopy(&(Global_1359035.f_4388.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_4388.f_172[iVar0] = iParam2;
		Global_1359035.f_4388.f_216[iVar0] = iParam3;
		Global_1359035.f_4388.f_183[iVar0] = iParam4;
		Global_1359035.f_4388.f_194[iVar0] = iParam5;
		Global_1359035.f_4388.f_249[iVar0] = iParam6;
		Global_1359035.f_4388.f_260[iVar0] = iParam7;
		Global_1359035.f_4388.f_205[iVar0] = uParam8;
		Global_1359035.f_4388.f_314[iVar0] = iParam9;
		Global_1359035.f_4388.f_325[iVar0] = iParam10;
		Global_1359035.f_4388.f_357[iVar0] = iParam11;
		Global_1359035.f_4388.f_238[iVar0] = uParam12;
		Global_1359035.f_4388.f_271[iVar0] = iParam13;
		Global_1359035.f_4388.f_368[iVar0] = iParam14;
		Global_1359035.f_4388.f_379[iVar0] = iParam15;
		Global_1359035.f_4388.f_390[iVar0] = iParam16;
	}
}

void func_752(int iParam0, int iParam1)//Position - 0x1F2BA
{
	unk_0x872F1C1F8587CCC7(&(Global_1359035.f_6119[iParam0]), iParam1);
}

bool func_753(int iParam0, int iParam1)//Position - 0x1F2D3
{
	return unk_0xC80D31E4B587871C(Global_1359035.f_6119[iParam0], iParam1);
}

void func_754(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)//Position - 0x1F2EC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_753(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_752(6, iVar0);
		Global_1359035.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1359035.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_3770.f_183[iVar0] = iParam3;
		Global_1359035.f_3770.f_172[iVar0] = iParam2;
		Global_1359035.f_3770.f_260[iVar0] = iParam4;
		Global_1359035.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1359035.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1359035.f_3770.f_443[iVar0] = iParam7;
		Global_1359035.f_3770.f_454[iVar0] = iParam8;
		Global_1359035.f_3770.f_497[iVar0] = iParam9;
		Global_1359035.f_3770.f_508[iVar0] = iParam10;
		Global_1359035.f_3770.f_205[iVar0] = iParam11;
		Global_1359035.f_3770.f_216[iVar0] = iParam12;
		Global_1359035.f_3770.f_227[iVar0] = iParam13;
		Global_1359035.f_3770.f_238[iVar0] = iParam14;
		Global_1359035.f_3770.f_249[iVar0] = iParam15;
		Global_1359035.f_3770.f_519[iVar0] = iParam16;
		Global_1359035.f_3770.f_530[iVar0] = iParam17;
		Global_1359035.f_3770.f_541[iVar0] = iParam18;
		Global_1359035.f_3770.f_552[iVar0] = iParam19;
		Global_1359035.f_3770.f_563[iVar0] = iParam20;
		Global_1359035.f_3770.f_574[iVar0] = iParam21;
		Global_1359035.f_3770.f_585[iVar0] = iParam22;
		Global_1359035.f_3770.f_596[iVar0] = iParam23;
		Global_1359035.f_3770.f_607[iVar0] = iParam24;
		if (iParam15 == 5 && func_756())
		{
			Global_1359035.f_1088 = 1;
		}
		if (unk_0xB9D80B12FE4456A5())
		{
			iVar2 = 0;
			unk_0x5113D2C928A121B2(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1359035.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1359035.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1359035.f_1088 = 1;
			}
			if (func_755())
			{
				Global_1359035.f_1092 = 1;
			}
		}
	}
}

int func_755()//Position - 0x1F54E
{
	int iVar0;
	var uVar1;
	
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0x5113D2C928A121B2(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_756()//Position - 0x1F572
{
	if (((unk_0xC45D692E0BD4797B() == 8 || unk_0xC45D692E0BD4797B() == 9) || unk_0xC45D692E0BD4797B() == 10) || unk_0xC45D692E0BD4797B() == 12)
	{
		return 1;
	}
	return 0;
}

void func_757()//Position - 0x1F5B0
{
	unk_0x553231E7FC3C570D(8);
	unk_0x553231E7FC3C570D(9);
	unk_0x553231E7FC3C570D(6);
	unk_0x553231E7FC3C570D(7);
	Global_2458368 = 1;
}

int func_758(bool bParam0)//Position - 0x1F5D3
{
	if (func_759())
	{
		return 0;
	}
	if (func_372())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_991(unk_0x9EB17624F44A8DA4(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_759()//Position - 0x1F60A
{
	return unk_0xC80D31E4B587871C(Global_2359302, 12);
}

void func_760(int iParam0)//Position - 0x1F61C
{
	if (unk_0xC80D31E4B587871C(iLocal_134, 8))
	{
		func_195();
		return;
	}
	if (!unk_0xC80D31E4B587871C(iLocal_134, 15))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0x8810DC630928B398("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0x872F1C1F8587CCC7(&iLocal_134, 15);
				unk_0x872F1C1F8587CCC7(&iLocal_134, 9);
			}
		}
	}
	if (unk_0xC80D31E4B587871C(iLocal_134, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0xC80D31E4B587871C(iLocal_134, 11))
			{
				if (unk_0xAAB7D68F04F8C8BA("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 1);
					unk_0x22456E02F195550C(0);
					unk_0x872F1C1F8587CCC7(&iLocal_134, 11);
				}
			}
			if (!unk_0xC80D31E4B587871C(iLocal_134, 14))
			{
				if (unk_0x8810DC630928B398("APT_COUNTDOWN_30S"))
				{
					unk_0x872F1C1F8587CCC7(&iLocal_134, 14);
				}
			}
			if (unk_0xC80D31E4B587871C(iLocal_134, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0xC80D31E4B587871C(iLocal_134, 12))
					{
						unk_0x22456E02F195550C(1);
						unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 0);
						unk_0x872F1C1F8587CCC7(&iLocal_134, 12);
					}
					if (iParam0 <= 500)
					{
						if (unk_0x8810DC630928B398("APT_FADE_IN_RADIO"))
						{
							unk_0xF4D9AAA3F4BCC684("APT_COUNTDOWN_30S_KILL");
							unk_0x0EE72DB1CD8A3B86(&iLocal_134, 9);
						}
					}
				}
			}
		}
	}
}

int func_761(var uParam0, bool bParam1, bool bParam2)//Position - 0x1F732
{
	if (unk_0x3A711520F83BAE98() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0);
		}
		else
		{
			return unk_0x38F6270C9AE5FE40(unk_0xEBD55014C579F626(), *uParam0);
		}
	}
	return unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), *uParam0);
}

void func_762()//Position - 0x1F779
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x918CA1BFFAA03556(Local_131.f_3))
		{
			if (!unk_0xC80D31E4B587871C(Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_1, 2))
			{
				if (unk_0x5D67DB68EF61B3E1(unk_0xE8BC72FED1586931(Local_131.f_3), unk_0xFC1458A37D98B502()))
				{
					unk_0x872F1C1F8587CCC7(&(Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_1), 2);
					iLocal_419 = unk_0xD0CA83418A236CB4();
					if (func_346(1))
					{
						unk_0x4AFBCBFDE748D4E0(iLocal_419, "Pickup_Briefcase", "GTAO_Biker_Modes_Soundset", false);
					}
					else
					{
						unk_0x4AFBCBFDE748D4E0(iLocal_419, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", false);
					}
					Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_5++;
				}
			}
		}
	}
	if (iLocal_136 != Local_131.f_5)
	{
		if (unk_0xC80D31E4B587871C(Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_1, 3))
		{
			unk_0x0EE72DB1CD8A3B86(&(Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_1), 3);
		}
		if (unk_0xC80D31E4B587871C(Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_1, 2))
		{
			if (unk_0xE53FD7AF7F25C0A8(Local_131.f_3))
			{
				iVar0 = unk_0x29AB7D6D0DE18055(Local_131.f_3);
				unk_0xFA8AA9E856FCF99B(&iVar0);
				unk_0x0EE72DB1CD8A3B86(&(Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_1), 2);
			}
			else
			{
				unk_0x04092215B40E1262(Local_131.f_3);
			}
		}
		else
		{
			iLocal_136 = Local_131.f_5;
		}
	}
	if (unk_0x918CA1BFFAA03556(Local_131.f_3))
	{
		if (func_880())
		{
			if (func_896())
			{
				func_764();
			}
		}
		if (!unk_0xC80D31E4B587871C(iLocal_133, 13))
		{
			if (!func_896() || !func_880())
			{
				unk_0x61EF72AFBDCBE53F(unk_0xE8BC72FED1586931(Local_131.f_3), 1, 1);
				unk_0x872F1C1F8587CCC7(&iLocal_133, 13);
			}
		}
		if (!unk_0xC80D31E4B587871C(iLocal_133, 3))
		{
			unk_0xCFB385D0FF082808(unk_0xE8BC72FED1586931(Local_131.f_3), 1200);
			unk_0x872F1C1F8587CCC7(&iLocal_133, 3);
		}
	}
	else
	{
		if (unk_0xC80D31E4B587871C(iLocal_133, 13))
		{
			unk_0x0EE72DB1CD8A3B86(&iLocal_133, 13);
		}
		if (unk_0xC80D31E4B587871C(iLocal_133, 3))
		{
			unk_0x0EE72DB1CD8A3B86(&iLocal_133, 3);
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_138))
		{
			unk_0xE30CF11C0EE14316(&iLocal_138);
		}
	}
	func_763();
}

void func_763()//Position - 0x1F949
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!func_436())
	{
		return;
	}
	if (func_389(unk_0x9EB17624F44A8DA4()) >= 1)
	{
		if (unk_0x93C304998B457C45(Local_131.f_3) && !unk_0x191BE1BC8F26F3C1(unk_0xE8BC72FED1586931(Local_131.f_3), 0))
		{
			if (!unk_0x6049C20F5D5C185B(unk_0xE8BC72FED1586931(Local_131.f_3)))
			{
				unk_0x31758B9A51671C43(18, &iVar0, &iVar1, &iVar2, &uVar3);
				unk_0xBDD6765E5846A7DE(2, unk_0xB3328BA8976B416C(unk_0x29AB7D6D0DE18055(Local_131.f_3), 1) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0,5f, 0,5f, 0,5f, iVar0, iVar1, iVar2, 100, 1, 1, 2, 0, 0, 0, false);
			}
		}
	}
}

void func_764()//Position - 0x1F9E2
{
	int iVar0;
	
	iVar0 = func_389(unk_0x9EB17624F44A8DA4());
	if (iVar0 < 2)
	{
		if (unk_0xA6DECE14FC9A8C51(iLocal_138))
		{
			unk_0xE30CF11C0EE14316(&iLocal_138);
		}
		return;
	}
	if (unk_0xA6DECE14FC9A8C51(iLocal_138))
	{
		return;
	}
	unk_0x0EE72DB1CD8A3B86(&iLocal_133, 11);
	iLocal_138 = unk_0xCA43F0FC44D9B846(unk_0x29AB7D6D0DE18055(Local_131.f_3));
	unk_0xF27F72CA15E148EE(iLocal_138, 12);
	unk_0x4B4040A0EC7DBA81(iLocal_138, 459);
	unk_0x62BD54E491535B76(iLocal_138, "GB_SGHT_BLP");
	unk_0xAAAC88CC20771601(iLocal_138, true);
	unk_0xA5D25D3F884FF516(iLocal_138, Global_262145.f_11695);
	if (func_896())
	{
		func_765(&iLocal_138, 18);
	}
	unk_0x9C27373CC69ECF87(iLocal_138, true);
	iLocal_420 = unk_0xD0CA83418A236CB4();
	if (func_346(1))
	{
		unk_0x4AFBCBFDE748D4E0(iLocal_420, "Blip_Pickup", "GTAO_Biker_Modes_Soundset", false);
	}
	else
	{
		unk_0x4AFBCBFDE748D4E0(iLocal_420, "Blip_Pickup", "GTAO_Magnate_Boss_Modes_Soundset", false);
	}
}

void func_765(int iParam0, int iParam1)//Position - 0x1FAB1
{
	int iVar0;
	
	if (unk_0xA6DECE14FC9A8C51(*iParam0))
	{
		iVar0 = func_766(iParam1);
		unk_0x0C71C8E276E3EC54(*iParam0, iVar0);
	}
}

int func_766(int iParam0)//Position - 0x1FAD7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0x31758B9A51671C43(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_767()//Position - 0x1FD3F
{
	if (unk_0x622FF3AE4B1D07C3() != Local_131.f_33)
	{
		return;
	}
	if (unk_0x918CA1BFFAA03556(Local_131.f_3))
	{
		if (iLocal_416 != -1)
		{
			iLocal_416 = -1;
		}
		if (unk_0xC80D31E4B587871C(Global_4267143, 20))
		{
			unk_0x0EE72DB1CD8A3B86(&Global_4267143, 20);
		}
		return;
	}
	if (!unk_0xC80D31E4B587871C(Global_4267143, 20))
	{
		if (!unk_0xC80D31E4B587871C(Global_4267143, 21))
		{
			if (iLocal_416 < 0)
			{
				unk_0x872F1C1F8587CCC7(&Global_4267143, 20);
			}
		}
	}
	if (iLocal_417 == -1)
	{
		iLocal_417 = unk_0x63A6486593EC7EC3(0, 3);
	}
	if (iLocal_416 < 0)
	{
		if (unk_0xC80D31E4B587871C(Global_4267143, 21))
		{
			unk_0x0EE72DB1CD8A3B86(&Global_4267143, 21);
			iLocal_416 = 0;
		}
	}
	func_768();
}

void func_768()//Position - 0x1FDE8
{
	bool bVar0;
	
	if (!unk_0xC80D31E4B587871C(iLocal_133, 4))
	{
		if (iLocal_416 >= 0)
		{
			if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0x0EE72DB1CD8A3B86(&Local_144, 0);
				iLocal_416 = -1;
			}
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
				{
					func_813(1);
				}
			}
		}
	}
	else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		func_812(&Local_144);
		func_811(&Local_144);
		unk_0x0EE72DB1CD8A3B86(&iLocal_133, 4);
	}
	switch (iLocal_416)
	{
		case 0:
			func_810(1);
			unk_0xBCBC53983EC3B1BA("HACK", 3);
			iLocal_416++;
			break;
		
		case 1:
			if (func_809(1) && unk_0x9F0887BCBFCF3C2F(3))
			{
				unk_0x872F1C1F8587CCC7(&Local_144, 0);
				unk_0x872F1C1F8587CCC7(&(Local_144.f_1), 0);
				func_429();
				iLocal_418 = 10;
				if (iLocal_417 == 2)
				{
					Local_144.f_22 = 1;
				}
				else if (iLocal_417 == 1)
				{
					Local_144.f_22 = 0;
					iLocal_418 = 77;
				}
				else if (iLocal_417 == 0)
				{
					iLocal_418 = 50;
					Local_144.f_22 = 0;
				}
				func_804(unk_0x9EB17624F44A8DA4(), 0, 66048);
				iLocal_416++;
			}
			else
			{
				if (!func_809(1))
				{
				}
				if (!unk_0x9F0887BCBFCF3C2F(3))
				{
				}
			}
			break;
		
		case 2:
			unk_0x36853D5037847BF3();
			unk_0xFF00C7D00D8D8AAE(19);
			if (!func_199(0))
			{
				func_225(0);
			}
			if (iLocal_417 == 0)
			{
				func_782(&Local_144, 5, 5, iLocal_418, 10, 8, 10, 0, 1, 0, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_781(&Local_144, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_417 == 1)
			{
				func_782(&Local_144, 5, 5, iLocal_418, 10, 8, 10, 0, 0, 1, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_780(&Local_144, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_417 == 2)
			{
				func_782(&Local_144, 5, 5, iLocal_418, 10, 8, 10, 0, 0, 0, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_769(&Local_144, 1))
				{
					bVar0 = true;
				}
			}
			if (unk_0xC80D31E4B587871C(Local_144.f_1, 1))
			{
				unk_0x0EE72DB1CD8A3B86(&Local_144, 0);
				func_812(&Local_144);
				func_804(unk_0x9EB17624F44A8DA4(), 1, 0);
				if (func_199(0))
				{
					func_198(0);
				}
				iLocal_416 = -1;
			}
			else if (bVar0)
			{
				unk_0x0EE72DB1CD8A3B86(&Local_144, 0);
				func_812(&Local_144);
				Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_4++;
				unk_0x872F1C1F8587CCC7(&(Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_1), 3);
				iLocal_417++;
				if (iLocal_417 >= 3)
				{
					iLocal_417 = 0;
				}
				if (func_199(0))
				{
					func_198(0);
				}
				func_804(unk_0x9EB17624F44A8DA4(), 1, 0);
				iLocal_416++;
			}
			break;
	}
}

int func_769(int iParam0, bool bParam1)//Position - 0x20084
{
	if (unk_0xC80D31E4B587871C(*iParam0, 26))
	{
		if (bParam1)
		{
			func_770(iParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_770(int iParam0, bool bParam1, bool bParam2)//Position - 0x200B1
{
	unk_0x0EE72DB1CD8A3B86(iParam0, 0);
	unk_0x872F1C1F8587CCC7(iParam0, 12);
	unk_0xAE8C92295C8F2D18(0);
	if (bParam2)
	{
		if (!unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
		{
			unk_0x730F5A4EC599BB13(unk_0xFC1458A37D98B502(), 1, 1, 1, 0);
		}
	}
	if (unk_0x586321DCB7FEB6F8())
	{
		unk_0x9CCF36D85F5E43B6(0);
	}
	unk_0x3E80C2F7BC665259(1);
	if (bParam1)
	{
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
	}
	unk_0x02934BABFD4CD384(iLocal_72, 0);
	func_774(0);
	func_773();
	unk_0xB26D474FD50876A9(0);
	func_772(iParam0, 1, 1);
	func_771(0, 1, 1, 0);
}

int func_771(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x20130
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0x1746AAD73B7DFC1B() != iParam0 && iParam2)
		{
			unk_0x035AB8AAB511237A(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_772(int iParam0, bool bParam1, int iParam2)//Position - 0x20163
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 4;
	while (iVar0 <= 0)
	{
		if (iLocal_68[iVar0] != -1)
		{
			if (!unk_0xCCCA18C9A006FF83(iLocal_68[iVar0]))
			{
				unk_0x0B9D04994D02CC2F(iLocal_68[iVar0]);
				iLocal_68[iVar0] = -1;
			}
		}
		iVar0++;
	}
	unk_0x0EE72DB1CD8A3B86(iParam0, 25);
	unk_0x0EE72DB1CD8A3B86(iParam0, 5);
	if (iParam2 == 1)
	{
		unk_0x0EE72DB1CD8A3B86(iParam0, 12);
		unk_0x0EE72DB1CD8A3B86(iParam0, 9);
		unk_0x0EE72DB1CD8A3B86(iParam0, 18);
		unk_0x0EE72DB1CD8A3B86(iParam0, 27);
		unk_0x0EE72DB1CD8A3B86(iParam0, 28);
	}
	iParam0->f_1 = 0;
	iParam0->f_7 = iParam0->f_6;
	iLocal_75 = 0;
	if (bParam1)
	{
		unk_0xA68F7B004463AB6F(&iLocal_74);
	}
	unk_0x0EE72DB1CD8A3B86(iParam0, 29);
}

void func_773()//Position - 0x20209
{
	int iVar0;
	
	Global_1357530.f_1047 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1357530.f_170[iVar0] = 0;
		iVar0++;
	}
	Global_2512808.f_4500 = 1;
}

void func_774(bool bParam0)//Position - 0x2023F
{
	if (bParam0)
	{
		func_779();
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			unk_0x872F1C1F8587CCC7(&Global_2324, 16);
		}
		Global_14453.f_1 = 1;
		if (func_778(0))
		{
			func_775(0);
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

void func_775(int iParam0)//Position - 0x202A2
{
	if (Global_14615)
	{
		func_777(0, 0);
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
	if (!func_776())
	{
		Global_14453.f_1 = 3;
	}
}

int func_776()//Position - 0x20312
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_777(bool bParam0, bool bParam1)//Position - 0x20339
{
	if (bParam0)
	{
		if (func_778(0))
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

int func_778(int iParam0)//Position - 0x203AD
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

void func_779()//Position - 0x20407
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
	}
}

int func_780(int iParam0, bool bParam1)//Position - 0x20430
{
	if (unk_0xC80D31E4B587871C(*iParam0, 9))
	{
		if (bParam1)
		{
			func_770(iParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_781(int iParam0, bool bParam1)//Position - 0x2045D
{
	if (unk_0xC80D31E4B587871C(*iParam0, 18))
	{
		if (bParam1)
		{
			func_770(iParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_782(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)//Position - 0x2048A
{
	if (unk_0xC80D31E4B587871C(*iParam0, 0))
	{
		func_783(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, iParam14, bParam15, bParam16, bParam17, bParam18);
	}
}

void func_783(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19)//Position - 0x204C8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11[4];
	int iVar12;
	int iVar13;
	
	unk_0xD67F08F0EFD84A54(0);
	unk_0xD67F08F0EFD84A54(2);
	unk_0xAE8C92295C8F2D18(1);
	if (bParam17)
	{
		func_803(1);
	}
	func_802(4, -1);
	func_801(0);
	if (func_809(bParam16))
	{
		if (!unk_0x0F30C1F1717A6437())
		{
			unk_0x36853D5037847BF3();
			unk_0x5A66A86A47AC3B57(1);
			if (unk_0x8B7838D25C063186() == 0 && !unk_0x0F30C1F1717A6437())
			{
				unk_0x28E092B1E386EB67(iLocal_74, 255, 255, 255, 0, 0);
			}
		}
		if (unk_0x2E4EC2FA6A038490(2))
		{
			iParam0->f_290 = unk_0xD65AC54B4C6897F9(2, 239);
			iParam0->f_291 = unk_0xD65AC54B4C6897F9(2, 240);
			if (iParam0->f_292 != iParam0->f_290 || iParam0->f_293 != iParam0->f_291)
			{
				unk_0x008F3E3CC076EA0E(iLocal_74, "SET_CURSOR");
				unk_0x9499D7329FB840A2(iParam0->f_290);
				unk_0x9499D7329FB840A2(iParam0->f_291);
				unk_0x271AA5469AF471B3();
			}
			iParam0->f_292 = iParam0->f_290;
			iParam0->f_293 = iParam0->f_291;
		}
		else
		{
			func_800(&iVar2, &iVar3, &iVar4, &iVar5, 0);
			if (iVar4 < 0 || iVar5 < 0)
			{
			}
			fVar6 = ((system::to_float(iVar2) * 8f) * system::timestep());
			fVar7 = ((system::to_float(iVar3) * 8f) * system::timestep());
			if (iLocal_75 != 8)
			{
				if (((fVar6 > 1f || fVar7 > 1f) || fVar6 < -1f) || fVar7 < -1f)
				{
					unk_0x008F3E3CC076EA0E(iLocal_74, "MOVE_CURSOR");
					unk_0x9499D7329FB840A2(fVar6);
					unk_0x9499D7329FB840A2(fVar7);
					unk_0x271AA5469AF471B3();
				}
			}
		}
		if (iLocal_75 > 4)
		{
			if (unk_0x2E4EC2FA6A038490(2))
			{
				iParam0->f_290 = unk_0x869308DF4F5FB0C3(2, 239);
				iParam0->f_291 = unk_0x869308DF4F5FB0C3(2, 240);
				if (unk_0xFD6215BABFD843F2())
				{
					if (iParam0->f_292 != iParam0->f_290)
					{
						if (iParam0->f_290 < 0,49f)
						{
							unk_0x4AFBCBFDE748D4E0(-1, "HACKING_MOVE_CURSOR", 0, true);
							unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT");
							unk_0xD07D5CD276368D36(10);
							unk_0x271AA5469AF471B3();
						}
						else if (iParam0->f_290 > 0,51f)
						{
							unk_0x4AFBCBFDE748D4E0(-1, "HACKING_MOVE_CURSOR", 0, true);
							unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT");
							unk_0xD07D5CD276368D36(11);
							unk_0x271AA5469AF471B3();
						}
					}
				}
				iParam0->f_292 = iParam0->f_290;
				iParam0->f_293 = iParam0->f_291;
			}
			if (unk_0x4C4813CAAD70E814(2))
			{
				fVar8 = unk_0x84326F8D8D6875EC(2, 1);
				fVar9 = unk_0x84326F8D8D6875EC(2, 2);
				bVar10 = false;
				fLocal_67 = (fLocal_67 + system::timestep());
				fLocal_69 = (fLocal_69 + fVar8);
				fLocal_70 = (fLocal_70 + fVar9);
				fLocal_71 = (fLocal_71 + 1f);
				if (fLocal_67 > 0,15f)
				{
					fLocal_67 = 0f;
					fLocal_69 = (fLocal_69 / fLocal_71);
					fLocal_70 = (fLocal_70 / fLocal_71);
					if (unk_0xE97272C977DEADD3(fLocal_70) < 0,2f)
					{
						if (fLocal_69 < 0f)
						{
							bVar10 = true;
							unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT");
							unk_0xD07D5CD276368D36(10);
							unk_0x271AA5469AF471B3();
						}
						else if (fLocal_69 > 0f)
						{
							bVar10 = true;
							unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT");
							unk_0xD07D5CD276368D36(11);
							unk_0x271AA5469AF471B3();
						}
					}
					if (unk_0xE97272C977DEADD3(fLocal_69) < 0,2f)
					{
						if (fLocal_70 < 0f)
						{
							bVar10 = true;
							unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT");
							unk_0xD07D5CD276368D36(8);
							unk_0x271AA5469AF471B3();
						}
						else if (fLocal_70 > 0f)
						{
							bVar10 = true;
							unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT");
							unk_0xD07D5CD276368D36(9);
							unk_0x271AA5469AF471B3();
						}
					}
					if (bVar10)
					{
						unk_0x4AFBCBFDE748D4E0(-1, "HACKING_MOVE_CURSOR", 0, true);
					}
					fLocal_69 = 0f;
					fLocal_70 = 0f;
					fLocal_71 = 0f;
				}
			}
			func_799(&(iVar11[0]), &(iVar11[1]), &(iVar11[2]), &(iVar11[3]), 0, 0);
			iVar12 = 0;
			while (iVar12 < iVar11)
			{
				if (unk_0xB89BB11E0945F6F0(iVar11[iVar12]) > 0)
				{
					if (iVar12 == 0 || iVar12 == 1)
					{
						if (unk_0xCCCA18C9A006FF83(iParam0->f_20))
						{
							if (iLocal_75 != 8)
							{
								unk_0x4AFBCBFDE748D4E0(iParam0->f_20, "HACKING_MOVE_CURSOR", 0, true);
							}
						}
					}
				}
				iVar12++;
			}
			if (((unk_0xE8C126B7ADBB9D63(2, 195) || unk_0xE8C126B7ADBB9D63(2, 196)) || unk_0xF2B58F79D29425B4(2, 195)) || unk_0xF2B58F79D29425B4(2, 196))
			{
			}
			if (unk_0x4C4813CAAD70E814(2))
			{
				if (unk_0xE8C126B7ADBB9D63(2, 32) || unk_0xE8C126B7ADBB9D63(2, 172))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "HACKING_MOVE_CURSOR", 0, true);
					unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT");
					unk_0xD07D5CD276368D36(8);
					unk_0x271AA5469AF471B3();
				}
				else if (unk_0xE8C126B7ADBB9D63(2, 33) || unk_0xE8C126B7ADBB9D63(2, 173))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "HACKING_MOVE_CURSOR", 0, true);
					unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT");
					unk_0xD07D5CD276368D36(9);
					unk_0x271AA5469AF471B3();
				}
				else if (unk_0xE8C126B7ADBB9D63(2, 34) || unk_0xE8C126B7ADBB9D63(2, 174))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "HACKING_MOVE_CURSOR", 0, true);
					unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT");
					unk_0xD07D5CD276368D36(10);
					unk_0x271AA5469AF471B3();
				}
				else if (unk_0xE8C126B7ADBB9D63(2, 35) || unk_0xE8C126B7ADBB9D63(2, 175))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "HACKING_MOVE_CURSOR", 0, true);
					unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT");
					unk_0xD07D5CD276368D36(11);
					unk_0x271AA5469AF471B3();
				}
			}
			else if (unk_0xE8C126B7ADBB9D63(2, 188))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "HACKING_MOVE_CURSOR", 0, true);
				unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT");
				unk_0xD07D5CD276368D36(8);
				unk_0x271AA5469AF471B3();
			}
			else if (unk_0xE8C126B7ADBB9D63(2, 187))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "HACKING_MOVE_CURSOR", 0, true);
				unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT");
				unk_0xD07D5CD276368D36(9);
				unk_0x271AA5469AF471B3();
			}
			else if (unk_0xE8C126B7ADBB9D63(2, 189))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "HACKING_MOVE_CURSOR", 0, true);
				unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT");
				unk_0xD07D5CD276368D36(10);
				unk_0x271AA5469AF471B3();
			}
			else if (unk_0xE8C126B7ADBB9D63(2, 190))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "HACKING_MOVE_CURSOR", 0, true);
				unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT");
				unk_0xD07D5CD276368D36(11);
				unk_0x271AA5469AF471B3();
			}
		}
		if (bParam12)
		{
			if (unk_0xE8C126B7ADBB9D63(2, 201) || unk_0xE8C126B7ADBB9D63(2, 237))
			{
				unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT_SELECT");
				uLocal_73 = unk_0x8E8D3D52EE7CEFD3();
			}
			if (unk_0x042804C27782882D(uLocal_73))
			{
				iVar0 = unk_0x8EA167BD67A3F619(uLocal_73);
				if (iVar0 == 6)
				{
					func_798(iParam0);
				}
			}
		}
		func_797();
	}
	if (iLocal_75 == 5 || iLocal_75 == 6)
	{
		if (iLocal_64)
		{
			func_796((iParam15 - (unk_0x53C562FD2B9E3AB0() - iLocal_63)), &iLocal_60, &iLocal_61, &iLocal_62);
			if ((iLocal_60 >= 0 && iLocal_61 >= 0) && iLocal_62 >= 0)
			{
				unk_0x311B18D03904DAAA(iLocal_74, "SET_COUNTDOWN", system::to_float(iLocal_60), system::to_float(iLocal_61), system::to_float(iLocal_62), -1082130432, -1082130432);
			}
			else
			{
				iLocal_60 = 0;
				iLocal_61 = 0;
				iLocal_62 = 0;
				unk_0x311B18D03904DAAA(iLocal_74, "SET_COUNTDOWN", system::to_float(iLocal_60), system::to_float(iLocal_61), system::to_float(iLocal_62), -1082130432, -1082130432);
			}
		}
	}
	if (iLocal_75 == 5)
	{
		if (func_795(&iLocal_76, (10000 / iParam4)))
		{
			if (iParam0->f_9 > 20f)
			{
				iParam0->f_9 = (iParam0->f_9 - 1f);
				unk_0x311B18D03904DAAA(iLocal_74, "SET_SPEED", iParam0->f_9, -1082130432, -1082130432, -1082130432, -1082130432);
				iLocal_76 = unk_0x53C562FD2B9E3AB0();
			}
		}
	}
	if (iLocal_75 == 6)
	{
		if (func_795(&iLocal_76, (10000 / iParam4)))
		{
			if (iParam0->f_9 > 20f)
			{
				iParam0->f_9 = (iParam0->f_9 - 1f);
				unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 0f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
				unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 1f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
				unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 2f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
				unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 3f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
				unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 4f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
				unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 5f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
				unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 6f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
				unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 7f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
				iLocal_76 = unk_0x53C562FD2B9E3AB0();
			}
		}
	}
	if (unk_0xC80D31E4B587871C(iParam0->f_1, 0))
	{
		if (iLocal_75 == 2)
		{
			iLocal_75 = 3;
		}
		else if (iLocal_75 == 3)
		{
			iVar0 = 81;
		}
		else if (iLocal_75 == 4)
		{
			if (bParam8)
			{
				iVar0 = 82;
			}
			else if (bParam9)
			{
				iVar0 = 83;
			}
		}
	}
	switch (iLocal_75)
	{
		case 0:
			if (!unk_0xC80D31E4B587871C(*iParam0, 29))
			{
				func_794(iParam0, iParam14);
			}
			func_810(1);
			unk_0xB26D474FD50876A9(1);
			iParam0->f_20 = unk_0xD0CA83418A236CB4();
			iLocal_91 = 0;
			iLocal_92 = 0;
			iParam0->f_23 = 0;
			iLocal_75++;
			break;
		
		case 1:
			iVar13 = 0;
			while (iVar13 < 5)
			{
				iLocal_68[iVar13] = -1;
				iVar13++;
			}
			unk_0x311B18D03904DAAA(iLocal_74, "SET_LIVES", system::to_float(iParam1), system::to_float(iParam2), -1082130432, -1082130432, -1082130432);
			unk_0x311B18D03904DAAA(iLocal_74, "SET_SPEED", system::to_float(iParam3), -1082130432, -1082130432, -1082130432, -1082130432);
			if (bParam12 == 1)
			{
				unk_0x9F7EE0CB5D370080(iLocal_74, "ADD_PROGRAM", system::to_float(7), system::to_float(6), -1f, -1f, -1f, "EXIT", 0, 0, 0, 0);
			}
			uParam5 = uParam5;
			uParam6 = uParam6;
			iParam0->f_7 = iParam1;
			iParam0->f_9 = system::to_float(iParam3);
			unk_0x0EE72DB1CD8A3B86(iParam0, 1);
			fLocal_69 = 0f;
			fLocal_70 = 0f;
			fLocal_71 = 0f;
			iLocal_68[0] = unk_0xD0CA83418A236CB4();
			iLocal_68[1] = unk_0xD0CA83418A236CB4();
			func_771(1, 0, 1, 0);
			if (iParam0->f_22)
			{
				iLocal_75 = 8;
			}
			else
			{
				iLocal_75++;
			}
			break;
		
		case 2:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					if (!func_405("H_EXIT_PROMPT"))
					{
						if (!func_405("HACKOBJ1"))
						{
							func_793("HACKOBJ1");
							iLocal_65 = 1;
						}
					}
				}
			}
			if (!unk_0x0F30C1F1717A6437())
			{
				if (unk_0x2E4EC2FA6A038490(2))
				{
					if (unk_0xE8C126B7ADBB9D63(2, 201) || unk_0xE8C126B7ADBB9D63(2, 237))
					{
						unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT_SELECT");
						uLocal_73 = unk_0x8E8D3D52EE7CEFD3();
					}
				}
				else if (unk_0xE8C126B7ADBB9D63(2, 201) || unk_0xE8C126B7ADBB9D63(2, 237))
				{
					unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT_SELECT");
					uLocal_73 = unk_0x8E8D3D52EE7CEFD3();
				}
			}
			if (unk_0x042804C27782882D(uLocal_73))
			{
				iVar0 = unk_0x8EA167BD67A3F619(uLocal_73);
				if (iVar0 == 4)
				{
					if (iParam7 == 1)
					{
						if (func_405("H_EXIT_PROMPT"))
						{
							unk_0x3E80C2F7BC665259(1);
						}
					}
					iLocal_65 = 0;
					iLocal_75++;
				}
			}
			if (iLocal_78 == 1)
			{
				if ((unk_0x53C562FD2B9E3AB0() - iLocal_77) > 500)
				{
					if (((unk_0x53C562FD2B9E3AB0() - iLocal_77) > 2500 || unk_0xE8C126B7ADBB9D63(2, 201)) || unk_0xE8C126B7ADBB9D63(2, 237))
					{
						func_792(0, "");
					}
				}
			}
			if (unk_0x042804C27782882D(uLocal_73))
			{
				iVar0 = unk_0x8EA167BD67A3F619(uLocal_73);
				if (iVar0 == 80)
				{
					if (iLocal_78 == 0)
					{
						unk_0x4AFBCBFDE748D4E0(-1, "HACKING_CLICK_BAD", 0, true);
						func_792(1, "ACCESSD");
					}
				}
			}
			break;
		
		case 3:
			if (iParam7 == 1)
			{
				if (iLocal_75 == 3)
				{
					if (iLocal_65 == 0)
					{
						if (!func_405("HACKOBJ2"))
						{
							func_793("HACKOBJ2");
							iLocal_65 = 1;
						}
					}
				}
			}
			if (!unk_0x0F30C1F1717A6437())
			{
				if (!unk_0x042804C27782882D(uLocal_73))
				{
					if (unk_0x2E4EC2FA6A038490(2))
					{
						if (unk_0xE8C126B7ADBB9D63(2, 201) || unk_0xE8C126B7ADBB9D63(2, 237))
						{
							unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT_SELECT");
							uLocal_73 = unk_0x8E8D3D52EE7CEFD3();
						}
					}
					else if (unk_0xE8C126B7ADBB9D63(2, 201) || unk_0xE8C126B7ADBB9D63(2, 237))
					{
						unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT_SELECT");
						uLocal_73 = unk_0x8E8D3D52EE7CEFD3();
					}
				}
			}
			if (!unk_0x0F30C1F1717A6437())
			{
				if (iLocal_78 == 0)
				{
					if (!unk_0x042804C27782882D(uLocal_73))
					{
						if (unk_0xE8C126B7ADBB9D63(2, 202))
						{
							unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT_BACK");
							uLocal_73 = unk_0x8E8D3D52EE7CEFD3();
							if (iParam7 == 1)
							{
								if (func_405("HACKOBJ2"))
								{
									unk_0x3E80C2F7BC665259(1);
								}
								func_793("H_EXIT_PROMPT");
								iLocal_65 = 0;
								iLocal_75 = (iLocal_75 - 1);
							}
						}
					}
				}
			}
			if (iLocal_78 == 1)
			{
				if ((unk_0x53C562FD2B9E3AB0() - iLocal_77) > 500)
				{
					if (((unk_0x53C562FD2B9E3AB0() - iLocal_77) > 2500 || unk_0xE8C126B7ADBB9D63(2, 201)) || unk_0xE8C126B7ADBB9D63(2, 237))
					{
						func_792(0, "");
					}
				}
			}
			if (iLocal_78 == 0)
			{
				if (unk_0x042804C27782882D(uLocal_73))
				{
					iVar0 = unk_0x8EA167BD67A3F619(uLocal_73);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_78 == 0)
				{
					unk_0x4AFBCBFDE748D4E0(-1, "HACKING_CLICK_BAD", 0, true);
					func_792(1, "ACCESSD");
				}
			}
			if (iVar0 == 81)
			{
				iLocal_65 = 0;
				iLocal_75++;
			}
			break;
		
		case 4:
			if (iLocal_68[1] != -1)
			{
				if (!unk_0xCCCA18C9A006FF83(iLocal_68[1]))
				{
					unk_0x0B9D04994D02CC2F(iLocal_68[1]);
					iLocal_68[1] = -1;
				}
			}
			if (iLocal_68[0] != -1)
			{
				if (!unk_0xCCCA18C9A006FF83(iLocal_68[0]))
				{
					unk_0x0B9D04994D02CC2F(iLocal_68[0]);
					iLocal_68[0] = -1;
				}
			}
			if (iLocal_68[1] != -1)
			{
				if (!unk_0xCCCA18C9A006FF83(iLocal_68[1]))
				{
					unk_0x0B9D04994D02CC2F(iLocal_68[1]);
					iLocal_68[1] = -1;
				}
			}
			if (iParam7 == 1)
			{
				if (iLocal_75 == 4)
				{
					if (bParam9 == 1)
					{
						if (!unk_0xC80D31E4B587871C(*iParam0, 5))
						{
							if (iLocal_65 == 0)
							{
								if (!func_405("HACKOBJ5"))
								{
									func_793("HACKOBJ5");
									iLocal_65 = 1;
								}
							}
						}
					}
					else if (!unk_0xC80D31E4B587871C(*iParam0, 18))
					{
						if (iLocal_65 == 0)
						{
							if (!func_405("HACKOBJ3"))
							{
								func_793("HACKOBJ3");
								iLocal_65 = 1;
							}
						}
					}
					else if (!unk_0xC80D31E4B587871C(*iParam0, 5))
					{
						if (iLocal_65 == 0)
						{
							if (!func_405("HACKOBJ5"))
							{
								func_793("HACKOBJ5");
								iLocal_65 = 1;
							}
						}
					}
					else if (iLocal_65 == 1)
					{
						if (func_405("HACKOBJ5"))
						{
							unk_0x3E80C2F7BC665259(1);
							iLocal_65 = 0;
						}
					}
				}
			}
			if (!unk_0x0F30C1F1717A6437())
			{
				if (iLocal_78 == 0)
				{
					if (!unk_0x042804C27782882D(uLocal_73))
					{
						if (unk_0x2E4EC2FA6A038490(2))
						{
							if (unk_0xE8C126B7ADBB9D63(2, 201) || unk_0xE8C126B7ADBB9D63(2, 237))
							{
								unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT_SELECT");
								uLocal_73 = unk_0x8E8D3D52EE7CEFD3();
							}
						}
						else if (unk_0xE8C126B7ADBB9D63(2, 201) || unk_0xE8C126B7ADBB9D63(2, 237))
						{
							unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT_SELECT");
							uLocal_73 = unk_0x8E8D3D52EE7CEFD3();
						}
					}
				}
			}
			if (iLocal_78 == 0)
			{
				if (!unk_0x042804C27782882D(uLocal_73))
				{
					if (unk_0xE8C126B7ADBB9D63(2, 202))
					{
						unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT_BACK");
						uLocal_73 = unk_0x8E8D3D52EE7CEFD3();
						if (iParam7 == 1)
						{
							if (func_405("HACKOBJ5") || func_405("HACKOBJ3"))
							{
								unk_0x3E80C2F7BC665259(1);
							}
							iLocal_65 = 0;
							iLocal_75 = (iLocal_75 - 1);
						}
					}
				}
			}
			if (iLocal_78 == 1)
			{
				if ((unk_0x53C562FD2B9E3AB0() - iLocal_77) > 500)
				{
					if (((unk_0x53C562FD2B9E3AB0() - iLocal_77) > 2500 || unk_0xE8C126B7ADBB9D63(2, 201)) || unk_0xE8C126B7ADBB9D63(2, 237))
					{
						func_792(0, "");
					}
				}
			}
			if (!unk_0x0F30C1F1717A6437())
			{
				if (unk_0x042804C27782882D(uLocal_73))
				{
					iVar0 = unk_0x8EA167BD67A3F619(uLocal_73);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_78 == 0)
				{
					unk_0x4AFBCBFDE748D4E0(-1, "HACKING_CLICK_BAD", 0, true);
					func_792(1, "ACCESSD");
				}
			}
			if (iVar0 == 82)
			{
				if (bParam9 == 0)
				{
					if (bParam8 == 1)
					{
						iLocal_76 = unk_0x53C562FD2B9E3AB0();
						iParam0->f_9 = system::to_float(iParam3);
						if (!unk_0xC80D31E4B587871C(iParam0->f_1, 0))
						{
							unk_0x311B18D03904DAAA(iLocal_74, "SET_LIVES", system::to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
							unk_0x311B18D03904DAAA(iLocal_74, "SET_SPEED", iParam0->f_9, -1082130432, -1082130432, -1082130432, -1082130432);
							unk_0x311B18D03904DAAA(iLocal_74, "OPEN_APP", system::to_float(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
						else
						{
							unk_0x311B18D03904DAAA(iLocal_74, "SET_LIVES", system::to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
							unk_0x311B18D03904DAAA(iLocal_74, "SET_SPEED", iParam0->f_9, -1082130432, -1082130432, -1082130432, -1082130432);
							unk_0x311B18D03904DAAA(iLocal_74, "RUN_PROGRAM", system::to_float(4), -1082130432, -1082130432, -1082130432, -1082130432);
							unk_0x311B18D03904DAAA(iLocal_74, "OPEN_APP", system::to_float(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
						iLocal_63 = unk_0x53C562FD2B9E3AB0();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[0] = unk_0xD0CA83418A236CB4();
						unk_0x4AFBCBFDE748D4E0(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", 0, true);
						iLocal_75++;
					}
					else if (!unk_0xC80D31E4B587871C(*iParam0, 18))
					{
						iLocal_76 = unk_0x53C562FD2B9E3AB0();
						iParam0->f_9 = system::to_float(iParam3);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_LIVES", system::to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_SPEED", iParam0->f_9, -1082130432, -1082130432, -1082130432, -1082130432);
						unk_0x311B18D03904DAAA(iLocal_74, "OPEN_APP", system::to_float(0), -1082130432, -1082130432, -1082130432, -1082130432);
						iLocal_63 = unk_0x53C562FD2B9E3AB0();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[0] = unk_0xD0CA83418A236CB4();
						unk_0x4AFBCBFDE748D4E0(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", 0, true);
						iLocal_75++;
					}
					else
					{
						if (iLocal_78 == 1)
						{
							if ((unk_0x53C562FD2B9E3AB0() - iLocal_77) > 500)
							{
								if (((unk_0x53C562FD2B9E3AB0() - iLocal_77) > 2500 || unk_0xE8C126B7ADBB9D63(2, 201)) || unk_0xE8C126B7ADBB9D63(2, 237))
								{
									func_792(0, "");
								}
							}
						}
						if (iLocal_78 == 0)
						{
							unk_0x4AFBCBFDE748D4E0(-1, "HACKING_CLICK_BAD", 0, true);
							if (bParam13 && unk_0xC80D31E4B587871C(*iParam0, 9))
							{
								func_792(1, "TRYDL");
							}
							else
							{
								func_792(1, "TRYBRUTE");
							}
						}
					}
				}
				else
				{
					if (iLocal_78 == 1)
					{
						if ((unk_0x53C562FD2B9E3AB0() - iLocal_77) > 500)
						{
							if (((unk_0x53C562FD2B9E3AB0() - iLocal_77) > 2500 || unk_0xE8C126B7ADBB9D63(2, 201)) || unk_0xE8C126B7ADBB9D63(2, 237))
							{
								func_792(0, "");
							}
						}
					}
					if (iLocal_78 == 0)
					{
						unk_0x4AFBCBFDE748D4E0(-1, "HACKING_CLICK_BAD", 0, true);
						if (bParam13 && unk_0xC80D31E4B587871C(*iParam0, 9))
						{
							func_792(1, "TRYDL");
						}
						else
						{
							func_792(1, "TRYBRUTE");
						}
					}
				}
			}
			if (iVar0 == 83)
			{
				if (bParam8 == 0)
				{
					if (bParam9 == 1)
					{
						iLocal_76 = unk_0x53C562FD2B9E3AB0();
						iParam0->f_9 = system::to_float(iParam3);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_LIVES", system::to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_SPEED", system::to_float(iParam3), -1082130432, -1082130432, -1082130432, -1082130432);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 0f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 1f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 2f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 3f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 4f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 5f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 6f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 7f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						if (!unk_0xC80D31E4B587871C(iParam0->f_1, 0))
						{
							unk_0x311B18D03904DAAA(iLocal_74, "OPEN_APP", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
						}
						else
						{
							unk_0x311B18D03904DAAA(iLocal_74, "RUN_PROGRAM", system::to_float(4), -1082130432, -1082130432, -1082130432, -1082130432);
							unk_0x311B18D03904DAAA(iLocal_74, "OPEN_APP", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
						}
						iLocal_63 = unk_0x53C562FD2B9E3AB0();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[1] = unk_0xD0CA83418A236CB4();
						if (bParam10)
						{
							func_791(iParam0, bParam18);
						}
						unk_0xC7F83B0C1AF5D19C(iLocal_74, "SET_ROULETTE_WORD", &(iParam0->f_14), 0, 0, 0, 0);
						unk_0x4AFBCBFDE748D4E0(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, true);
						iLocal_75 = 6;
					}
					else if ((!bParam11 || unk_0xC80D31E4B587871C(*iParam0, 18)) && !unk_0xC80D31E4B587871C(*iParam0, 9))
					{
						iLocal_76 = unk_0x53C562FD2B9E3AB0();
						iParam0->f_9 = system::to_float(iParam3);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_LIVES", system::to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_SPEED", system::to_float(iParam3), -1082130432, -1082130432, -1082130432, -1082130432);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 0f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 1f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 2f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 3f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 4f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 5f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 6f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_COLUMN_SPEED", 7f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						unk_0x311B18D03904DAAA(iLocal_74, "OPEN_APP", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
						iLocal_63 = unk_0x53C562FD2B9E3AB0();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[1] = unk_0xD0CA83418A236CB4();
						if (bParam10)
						{
							func_791(iParam0, bParam18);
						}
						if (func_405("HACKOBJ5"))
						{
							unk_0x3E80C2F7BC665259(1);
						}
						unk_0xC7F83B0C1AF5D19C(iLocal_74, "SET_ROULETTE_WORD", &(iParam0->f_14), 0, 0, 0, 0);
						unk_0x4AFBCBFDE748D4E0(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, true);
						iLocal_75 = 6;
					}
					else
					{
						if (iLocal_78 == 1)
						{
							if ((unk_0x53C562FD2B9E3AB0() - iLocal_77) > 500)
							{
								if (((unk_0x53C562FD2B9E3AB0() - iLocal_77) > 2500 || unk_0xE8C126B7ADBB9D63(2, 201)) || unk_0xE8C126B7ADBB9D63(2, 237))
								{
									func_792(0, "");
								}
							}
						}
						if (iLocal_78 == 0)
						{
							unk_0x4AFBCBFDE748D4E0(-1, "HACKING_CLICK_BAD", 0, true);
							if (bParam13 && unk_0xC80D31E4B587871C(*iParam0, 18))
							{
								func_792(1, "TRYDL");
							}
							else
							{
								func_792(1, "TRYHACK");
							}
						}
					}
				}
				else
				{
					if (iLocal_78 == 1)
					{
						if ((unk_0x53C562FD2B9E3AB0() - iLocal_77) > 500)
						{
							if (((unk_0x53C562FD2B9E3AB0() - iLocal_77) > 2500 || unk_0xE8C126B7ADBB9D63(2, 201)) || unk_0xE8C126B7ADBB9D63(2, 237))
							{
								func_792(0, "");
							}
						}
					}
					if (iLocal_78 == 0)
					{
						unk_0x4AFBCBFDE748D4E0(-1, "HACKING_CLICK_BAD", 0, true);
						if (bParam13 && unk_0xC80D31E4B587871C(*iParam0, 18))
						{
							func_792(1, "TRYDL");
						}
						else
						{
							func_792(1, "TRYHACK");
						}
					}
				}
			}
			if (bParam13)
			{
				if (unk_0xC80D31E4B587871C(*iParam0, 18))
				{
					if (iVar0 == 93)
					{
						if (unk_0xC80D31E4B587871C(*iParam0, 18) && unk_0xC80D31E4B587871C(*iParam0, 9))
						{
							if (!unk_0xC80D31E4B587871C(*iParam0, 28))
							{
								unk_0x872F1C1F8587CCC7(iParam0, 28);
								iLocal_75 = 8;
							}
						}
						else
						{
							if (iLocal_78 == 1)
							{
								if ((unk_0x53C562FD2B9E3AB0() - iLocal_77) > 500)
								{
									if (((unk_0x53C562FD2B9E3AB0() - iLocal_77) > 2500 || unk_0xE8C126B7ADBB9D63(2, 201)) || unk_0xE8C126B7ADBB9D63(2, 237))
									{
										func_792(0, "");
									}
								}
							}
							if (iLocal_78 == 0)
							{
								unk_0x4AFBCBFDE748D4E0(-1, "HACKING_CLICK_BAD", 0, true);
								if (unk_0xC80D31E4B587871C(*iParam0, 18))
								{
									func_792(1, "TRYBRUTE");
								}
								else
								{
									func_792(1, "TRYHACK");
								}
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					func_790("H_USE_PC6", -1);
					iLocal_65 = 1;
				}
				else if (iLocal_66 == 1)
				{
					func_790("H_USE_PC7", -1);
					iLocal_66 = 0;
				}
			}
			if (!unk_0x0F30C1F1717A6437())
			{
				if (!unk_0xC80D31E4B587871C(iParam0->f_1, 1))
				{
					if (!unk_0x042804C27782882D(uLocal_73))
					{
						if (unk_0xE8C126B7ADBB9D63(2, 202))
						{
							iParam0->f_7 = iParam1;
							unk_0x050CFBB64D7E937F(iLocal_74, "CLOSE_APP");
							if (iLocal_68[1] != -1)
							{
								if (!unk_0xCCCA18C9A006FF83(iLocal_68[1]))
								{
									unk_0x0B9D04994D02CC2F(iLocal_68[1]);
									iLocal_68[1] = -1;
								}
							}
							if (iLocal_68[0] != -1)
							{
								if (!unk_0xCCCA18C9A006FF83(iLocal_68[0]))
								{
									unk_0x0B9D04994D02CC2F(iLocal_68[0]);
									iLocal_68[0] = -1;
								}
							}
							if (!unk_0xC80D31E4B587871C(iParam0->f_1, 0))
							{
								iLocal_75 = 4;
							}
							else
							{
								unk_0x872F1C1F8587CCC7(&(iParam0->f_1), 1);
							}
						}
					}
				}
			}
			if (!unk_0x0F30C1F1717A6437())
			{
				if (!unk_0x042804C27782882D(uLocal_73))
				{
					if (unk_0x2E4EC2FA6A038490(2))
					{
						if (unk_0xE8C126B7ADBB9D63(2, 201) || unk_0xE8C126B7ADBB9D63(2, 237))
						{
							unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT_SELECT");
							uLocal_73 = unk_0x8E8D3D52EE7CEFD3();
						}
					}
					else if (unk_0xE8C126B7ADBB9D63(2, 201) || unk_0xE8C126B7ADBB9D63(2, 237))
					{
						unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT_SELECT");
						uLocal_73 = unk_0x8E8D3D52EE7CEFD3();
					}
				}
				if (unk_0x042804C27782882D(uLocal_73))
				{
					iVar0 = unk_0x8EA167BD67A3F619(uLocal_73);
				}
			}
			if (iVar0 == 85)
			{
				if (iParam0->f_7 > 1)
				{
					iParam0->f_7 = (iParam0->f_7 - 1);
					unk_0x311B18D03904DAAA(iLocal_74, "SET_LIVES", system::to_float(iParam0->f_7), -1082130432, -1082130432, -1082130432, -1082130432);
					unk_0x4AFBCBFDE748D4E0(-1, "HACKING_CLICK_BAD", 0, true);
				}
				else
				{
					if (!unk_0xCCCA18C9A006FF83(iLocal_68[0]))
					{
						unk_0x0B9D04994D02CC2F(iLocal_68[0]);
					}
					unk_0x872F1C1F8587CCC7(iParam0, 25);
					iLocal_64 = 0;
					iLocal_66 = 1;
					unk_0x4AFBCBFDE748D4E0(-1, "HACKING_FAILURE", 0, true);
					unk_0x9F7EE0CB5D370080(iLocal_74, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 90)
			{
				iParam0->f_7 = iParam1;
				unk_0x311B18D03904DAAA(iLocal_74, "SET_LIVES", system::to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
				iParam0->f_9 = system::to_float(iParam3);
				iLocal_63 = unk_0x53C562FD2B9E3AB0();
				iLocal_68[0] = unk_0xD0CA83418A236CB4();
				unk_0x4AFBCBFDE748D4E0(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", 0, true);
				unk_0x872F1C1F8587CCC7(iParam0, 25);
				iLocal_64 = 1;
			}
			if (iVar0 == 91)
			{
				iParam0->f_7 = iParam1;
				unk_0x050CFBB64D7E937F(iLocal_74, "CLOSE_APP");
				if (iLocal_68[0] != -1)
				{
					if (!unk_0xCCCA18C9A006FF83(iLocal_68[0]))
					{
						unk_0x0B9D04994D02CC2F(iLocal_68[0]);
						iLocal_68[0] = -1;
					}
				}
				unk_0x872F1C1F8587CCC7(iParam0, 25);
				iLocal_75 = 4;
			}
			if (iLocal_64 == 1)
			{
				iVar1 = (60000 - (unk_0x53C562FD2B9E3AB0() - iLocal_63));
				if (iVar1 < 1)
				{
					unk_0x872F1C1F8587CCC7(iParam0, 25);
					iParam0->f_7 = iParam1;
					unk_0x311B18D03904DAAA(iLocal_74, "SET_LIVES", system::to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
					iParam0->f_9 = system::to_float(iParam3);
					iLocal_63 = unk_0x53C562FD2B9E3AB0();
					iLocal_64 = 0;
					iLocal_66 = 1;
					unk_0x4AFBCBFDE748D4E0(-1, "HACKING_FAILURE", 0, true);
					if (iLocal_68[0] != -1)
					{
						if (!unk_0xCCCA18C9A006FF83(iLocal_68[0]))
						{
							unk_0x0B9D04994D02CC2F(iLocal_68[0]);
							iLocal_68[0] = -1;
						}
					}
					unk_0x9F7EE0CB5D370080(iLocal_74, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 84)
			{
				unk_0x9F7EE0CB5D370080(iLocal_74, "SET_IP_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINIP", 0, 0, 0, 0);
				iLocal_76 = unk_0x53C562FD2B9E3AB0();
				unk_0x872F1C1F8587CCC7(iParam0, 18);
				iLocal_64 = 0;
				iLocal_65 = 0;
				unk_0x4AFBCBFDE748D4E0(-1, "HACKING_CLICK_GOOD", 0, true);
				if (iLocal_68[0] != -1)
				{
					if (!unk_0xCCCA18C9A006FF83(iLocal_68[0]))
					{
						unk_0x0B9D04994D02CC2F(iLocal_68[0]);
						iLocal_68[0] = -1;
					}
				}
				iLocal_75 = 7;
			}
			break;
		
		case 6:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					func_790("H_USE_PC8", -1);
					iLocal_65 = 1;
				}
				else if (iLocal_66 == 1)
				{
					func_790("H_USE_PC9", -1);
					iLocal_66 = 0;
				}
			}
			if (!unk_0x0F30C1F1717A6437())
			{
				if (!unk_0x042804C27782882D(uLocal_73))
				{
					if (!unk_0xC80D31E4B587871C(iParam0->f_1, 1))
					{
						if (unk_0xE8C126B7ADBB9D63(2, 202))
						{
							iParam0->f_7 = iParam1;
							unk_0x050CFBB64D7E937F(iLocal_74, "CLOSE_APP");
							if (!unk_0xCCCA18C9A006FF83(iLocal_68[0]))
							{
								unk_0x0B9D04994D02CC2F(iLocal_68[0]);
							}
							if (!unk_0xC80D31E4B587871C(iParam0->f_1, 0))
							{
								iLocal_75 = 4;
							}
							else
							{
								unk_0x872F1C1F8587CCC7(&(iParam0->f_1), 1);
							}
						}
					}
				}
				if (!unk_0x042804C27782882D(uLocal_73))
				{
					if (unk_0x2E4EC2FA6A038490(2))
					{
						if (unk_0xE8C126B7ADBB9D63(2, 201) || unk_0xE8C126B7ADBB9D63(2, 237))
						{
							unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT_SELECT");
							uLocal_73 = unk_0x8E8D3D52EE7CEFD3();
						}
					}
					else if (unk_0xE8C126B7ADBB9D63(2, 201) || unk_0xE8C126B7ADBB9D63(2, 237))
					{
						unk_0x008F3E3CC076EA0E(iLocal_74, "SET_INPUT_EVENT_SELECT");
						uLocal_73 = unk_0x8E8D3D52EE7CEFD3();
					}
				}
				if (unk_0x042804C27782882D(uLocal_73))
				{
					iVar0 = unk_0x8EA167BD67A3F619(uLocal_73);
				}
			}
			if (iVar0 == 86)
			{
				unk_0x4AFBCBFDE748D4E0(-1, "HACKING_CLICK_GOOD", 0, true);
			}
			if (iVar0 == 92)
			{
				unk_0x4AFBCBFDE748D4E0(-1, "HACKING_CLICK", 0, true);
			}
			if (unk_0xC80D31E4B587871C(*iParam0, 23))
			{
				if (func_795(&(iParam0->f_10), 500))
				{
					unk_0x050CFBB64D7E937F(iLocal_74, "RESET_ROULETTE");
					unk_0x0EE72DB1CD8A3B86(iParam0, 23);
				}
			}
			if (iVar0 == 87)
			{
				if (iParam0->f_7 > 1)
				{
					unk_0x4AFBCBFDE748D4E0(-1, "HACKING_CLICK_BAD", 0, true);
					unk_0x050CFBB64D7E937F(iLocal_74, "STOP_ROULETTE");
					iParam0->f_10 = unk_0x53C562FD2B9E3AB0();
					unk_0x872F1C1F8587CCC7(iParam0, 23);
					unk_0x872F1C1F8587CCC7(iParam0, 31);
					if (func_231() == 0)
					{
						iParam0->f_7 = (iParam0->f_7 - 1);
						unk_0x311B18D03904DAAA(iLocal_74, "SET_LIVES", system::to_float(iParam0->f_7), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0x872F1C1F8587CCC7(iParam0, 25);
					unk_0x872F1C1F8587CCC7(iParam0, 31);
					unk_0x4AFBCBFDE748D4E0(-1, "HACKING_FAILURE", 0, true);
					iParam0->f_7 = iParam1;
					unk_0x311B18D03904DAAA(iLocal_74, "SET_LIVES", system::to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
					iParam0->f_9 = system::to_float(iParam3);
					iLocal_63 = unk_0x53C562FD2B9E3AB0();
					if (iLocal_68[1] != -1)
					{
						if (!unk_0xCCCA18C9A006FF83(iLocal_68[1]))
						{
							unk_0x0B9D04994D02CC2F(iLocal_68[1]);
							iLocal_68[1] = -1;
						}
					}
					if (func_231() == 0)
					{
						unk_0x9F7EE0CB5D370080(iLocal_74, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
					}
				}
			}
			if (iLocal_64 == 1)
			{
				iVar1 = (60000 - (unk_0x53C562FD2B9E3AB0() - iLocal_63));
				if (iVar1 < 1)
				{
					iParam0->f_7 = iParam1;
					unk_0x872F1C1F8587CCC7(iParam0, 25);
					unk_0x311B18D03904DAAA(iLocal_74, "SET_LIVES", system::to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
					iParam0->f_9 = system::to_float(iParam3);
					iLocal_63 = unk_0x53C562FD2B9E3AB0();
					iLocal_64 = 0;
					iLocal_66 = 1;
					unk_0x4AFBCBFDE748D4E0(-1, "HACKING_FAILURE", 0, true);
					unk_0x3E80C2F7BC665259(1);
					if (iLocal_68[1] != -1)
					{
						if (!unk_0xCCCA18C9A006FF83(iLocal_68[1]))
						{
							unk_0x0B9D04994D02CC2F(iLocal_68[1]);
							iLocal_68[1] = -1;
						}
					}
					unk_0x9F7EE0CB5D370080(iLocal_74, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 88)
			{
				iParam0->f_7 = iParam1;
				unk_0x872F1C1F8587CCC7(iParam0, 25);
				unk_0x311B18D03904DAAA(iLocal_74, "SET_LIVES", system::to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
				iParam0->f_9 = system::to_float(iParam3);
				iLocal_63 = unk_0x53C562FD2B9E3AB0();
				iLocal_68[1] = unk_0xD0CA83418A236CB4();
				unk_0x4AFBCBFDE748D4E0(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, true);
				iLocal_64 = 1;
			}
			if (iVar0 == 89)
			{
				iParam0->f_7 = iParam1;
				unk_0x872F1C1F8587CCC7(iParam0, 25);
				unk_0x050CFBB64D7E937F(iLocal_74, "CLOSE_APP");
				if (iLocal_68[1] != -1)
				{
					if (!unk_0xCCCA18C9A006FF83(iLocal_68[1]))
					{
						unk_0x0B9D04994D02CC2F(iLocal_68[1]);
						iLocal_68[1] = -1;
					}
				}
				iLocal_75 = 4;
			}
			if (iVar0 == 86)
			{
				unk_0x9F7EE0CB5D370080(iLocal_74, "SET_ROULETTE_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINBRUTE", 0, 0, 0, 0);
				iLocal_76 = unk_0x53C562FD2B9E3AB0();
				unk_0x872F1C1F8587CCC7(iParam0, 9);
				if (bParam19)
				{
					unk_0x4AFBCBFDE748D4E0(-1, "Hack_Success", "DLC_GR_Steal_Railguns_Sounds", true);
				}
				else
				{
					unk_0x4AFBCBFDE748D4E0(-1, "HACKING_SUCCESS", 0, true);
				}
				if (iLocal_68[1] != -1)
				{
					if (!unk_0xCCCA18C9A006FF83(iLocal_68[1]))
					{
						unk_0x0B9D04994D02CC2F(iLocal_68[1]);
						iLocal_68[1] = -1;
					}
				}
				iLocal_75 = 7;
			}
			break;
		
		case 7:
			if (iParam7 == 1)
			{
				if (unk_0xC80D31E4B587871C(*iParam0, 9) && unk_0xC80D31E4B587871C(*iParam0, 18))
				{
					if (iLocal_91 == 0)
					{
						if (!func_405("HACKOBJ7"))
						{
							func_793("HACKOBJ7");
							iLocal_91 = 1;
						}
					}
				}
				if (((func_405("H_USE_PC6") || func_405("H_USE_PC7")) || func_405("H_USE_PC8")) || func_405("H_USE_PC9"))
				{
					unk_0x3E80C2F7BC665259(1);
				}
			}
			if ((unk_0xC80D31E4B587871C(*iParam0, 9) && unk_0xC80D31E4B587871C(*iParam0, 18)) && (!bParam13 || (bParam13 && unk_0xC80D31E4B587871C(*iParam0, 28))))
			{
				if (func_405("HACKOBJ7"))
				{
					unk_0x3E80C2F7BC665259(1);
				}
				if (!iLocal_92)
				{
					unk_0x7CC4363AEEF7EF34(-1, "unlocked_bleep", unk_0xFC1458A37D98B502(), "HACKING_DOOR_UNLOCK_SOUNDS", 0, 0);
					iLocal_92 = 1;
				}
				if (func_795(&iLocal_76, 3000))
				{
					unk_0x0EE72DB1CD8A3B86(iParam0, 0);
					unk_0x872F1C1F8587CCC7(iParam0, 12);
					unk_0xB26D474FD50876A9(0);
				}
			}
			else
			{
				if (((bParam13 && !unk_0xC80D31E4B587871C(*iParam0, 27)) && unk_0xC80D31E4B587871C(*iParam0, 9)) && unk_0xC80D31E4B587871C(*iParam0, 18))
				{
					unk_0x008F3E3CC076EA0E(iLocal_74, "OPEN_DOWNLOAD");
					unk_0x1869584A8A72FEDD(true);
					unk_0x271AA5469AF471B3();
					unk_0x872F1C1F8587CCC7(iParam0, 27);
				}
				if (func_795(&iLocal_76, 2000))
				{
					unk_0x050CFBB64D7E937F(iLocal_74, "CLOSE_APP");
					iLocal_75 = 4;
				}
			}
			break;
		
		case 8:
			func_784(iParam0);
			break;
	}
}

void func_784(int iParam0)//Position - 0x2255A
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0->f_23 > 0)
	{
		if (unk_0xC80D31E4B587871C(*iParam0, 22))
		{
			if (unk_0xA51ADD51711B4A15("hackingNG"))
			{
				if (!unk_0x0F30C1F1717A6437())
				{
					unk_0xEFB3EC0CDCC33841("hackingNG", "DHMain", Local_79, Local_79.f_1, 0,731f, 1,306f, 0f, 255, 255, 255, 255, 0);
				}
			}
		}
	}
	if (((((((Local_82[0 /*4*/] == 1 && Local_82[1 /*4*/] == 1) && Local_82[2 /*4*/] == 1) && Local_82[3 /*4*/] == 1) && Local_82[4 /*4*/] == 1) && Local_82[5 /*4*/] == 1) && Local_82[6 /*4*/] == 1) && Local_82[7 /*4*/] == 1)
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Hack_Success", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
		if (func_405("H1_HNG"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		if (unk_0xB9D80B12FE4456A5())
		{
			if (func_405("H1_HNG_KM"))
			{
				unk_0x3E80C2F7BC665259(1);
			}
		}
		unk_0x872F1C1F8587CCC7(iParam0, 26);
	}
	else if (unk_0x4C4813CAAD70E814(2))
	{
		if (!func_405("H1_HNG_KM"))
		{
			func_793("H1_HNG_KM");
		}
	}
	else if (!func_405("H1_HNG"))
	{
		func_793("H1_HNG");
	}
	switch (iParam0->f_23)
	{
		case 0:
			unk_0x128A5DCCD09CCA17("hackingNG", false);
			unk_0x0EE72DB1CD8A3B86(iParam0, 22);
			func_789();
			iLocal_88 = unk_0x53C562FD2B9E3AB0();
			Local_81 = 0;
			unk_0x0EE72DB1CD8A3B86(&iLocal_90, 0);
			unk_0x0EE72DB1CD8A3B86(&iLocal_90, 1);
			unk_0x0EE72DB1CD8A3B86(&iLocal_90, 2);
			unk_0x0EE72DB1CD8A3B86(&iLocal_90, 3);
			unk_0x0EE72DB1CD8A3B86(&iLocal_90, 4);
			unk_0x0EE72DB1CD8A3B86(&iLocal_90, 5);
			unk_0x0EE72DB1CD8A3B86(&iLocal_90, 6);
			unk_0x0EE72DB1CD8A3B86(&iLocal_90, 7);
			iParam0->f_23++;
			break;
		
		case 1:
			if (unk_0xA51ADD51711B4A15("hackingNG"))
			{
				unk_0x872F1C1F8587CCC7(iParam0, 22);
				unk_0x008F3E3CC076EA0E(iLocal_74, "SET_CURSOR_VISIBILITY");
				unk_0x1869584A8A72FEDD(false);
				unk_0x271AA5469AF471B3();
				iParam0->f_23++;
			}
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Local_82[iVar0 /*4*/].f_3 == 1)
				{
					if (Local_82[iVar0 /*4*/].f_2 < 1f)
					{
						Local_82[iVar0 /*4*/].f_2 = (Local_82[iVar0 /*4*/].f_2 + ((Local_82[iVar0 /*4*/].f_1 * system::timestep()) * fLocal_87));
					}
					else
					{
						Local_82[iVar0 /*4*/].f_3 = 0;
					}
				}
				else if (Local_82[iVar0 /*4*/].f_2 > 0f)
				{
					Local_82[iVar0 /*4*/].f_2 = (Local_82[iVar0 /*4*/].f_2 - ((Local_82[iVar0 /*4*/].f_1 * system::timestep()) * fLocal_87));
				}
				else
				{
					Local_82[iVar0 /*4*/].f_3 = 1;
				}
				if (Local_82[iVar0 /*4*/] == 0)
				{
					Local_80[iVar0 /*2*/].f_1 = func_787(0,744f, 0,4f, Local_82[iVar0 /*4*/].f_2);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Local_82[iVar0 /*4*/] == 0)
				{
					if (Local_81 == iVar0)
					{
						if (!unk_0xC80D31E4B587871C(iLocal_90, iVar0))
						{
							iLocal_89[iVar0] = unk_0xD0CA83418A236CB4();
							unk_0x4AFBCBFDE748D4E0(iLocal_89[iVar0], "Pin_Movement", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
							unk_0x872F1C1F8587CCC7(&iLocal_90, iVar0);
						}
						else
						{
							if (Local_82[iVar0 /*4*/].f_2 >= 0,5f)
							{
								fLocal_83 = (2f * (1f - Local_82[iVar0 /*4*/].f_2));
							}
							else
							{
								fLocal_83 = (2f * Local_82[iVar0 /*4*/].f_2);
							}
							unk_0x922FC70048B5A79D(iLocal_89[iVar0], "PinMovementY", fLocal_83);
						}
					}
				}
				else if (unk_0xC80D31E4B587871C(iLocal_90, iVar0))
				{
					unk_0x0B9D04994D02CC2F(iLocal_89[iVar0]);
					unk_0xB94964861C6B4D3C(iLocal_89[iVar0]);
					unk_0x0EE72DB1CD8A3B86(&iLocal_90, iVar0);
					iLocal_89[iVar0] = -1;
				}
				iVar0++;
			}
			if (func_786(Local_81))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Pin_Centred", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
			}
			if (unk_0xE8C126B7ADBB9D63(2, 201) || unk_0xE8C126B7ADBB9D63(2, 237))
			{
				if (func_795(&iLocal_88, 300))
				{
					if (func_785(Local_81))
					{
						Local_82[Local_81 /*4*/] = 1;
						Local_80[Local_81 /*2*/].f_1 = 0,572f;
						unk_0x4AFBCBFDE748D4E0(-1, "Pin_Good", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
						if (Local_81 != 7)
						{
							Local_81++;
						}
					}
					else
					{
						if (Local_81 != 0)
						{
							if (unk_0xC80D31E4B587871C(iLocal_90, Local_81))
							{
								unk_0x0B9D04994D02CC2F(iLocal_89[Local_81]);
								unk_0xB94964861C6B4D3C(iLocal_89[Local_81]);
								unk_0x0EE72DB1CD8A3B86(&iLocal_90, Local_81);
								iLocal_89[Local_81] = -1;
							}
							Local_82[(Local_81 - 1) /*4*/] = 0;
							Local_81 = (Local_81 - 1);
						}
						if (!unk_0x0F30C1F1717A6437())
						{
							unk_0x09C2CBFA4CD804AC(0,5f, 0,5f, 4f, 4f, 255, 0, 0, 100, 0);
						}
						iLocal_88 = unk_0x53C562FD2B9E3AB0();
						unk_0xC4803EF57E953FF3(0, 100, 100);
						unk_0x4AFBCBFDE748D4E0(-1, "Pin_Bad", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
						Local_81.f_1 = 1;
					}
				}
				else
				{
					if (!unk_0x0F30C1F1717A6437())
					{
						unk_0xEFB3EC0CDCC33841("hackingNG", "DHMain", Local_79, Local_79.f_1, 0,731f, 1,306f, 0f, 255, 0, 0, 100, 0);
					}
					iLocal_88 = unk_0x53C562FD2B9E3AB0();
					unk_0xC4803EF57E953FF3(0, 100, 100);
				}
			}
			if (!unk_0x0F30C1F1717A6437())
			{
				if (Local_81 == 0)
				{
					unk_0xEFB3EC0CDCC33841("hackingNG", "DHCompHi", Local_80[0 /*2*/], Local_80[0 /*2*/].f_1, 0,4f, 0,4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xEFB3EC0CDCC33841("hackingNG", "DHComp", Local_80[0 /*2*/], Local_80[0 /*2*/].f_1, 0,4f, 0,4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_81 == 1)
				{
					unk_0xEFB3EC0CDCC33841("hackingNG", "DHCompHi", Local_80[1 /*2*/], Local_80[1 /*2*/].f_1, 0,4f, 0,4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xEFB3EC0CDCC33841("hackingNG", "DHComp", Local_80[1 /*2*/], Local_80[1 /*2*/].f_1, 0,4f, 0,4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_81 == 2)
				{
					unk_0xEFB3EC0CDCC33841("hackingNG", "DHCompHi", Local_80[2 /*2*/], Local_80[2 /*2*/].f_1, 0,4f, 0,4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xEFB3EC0CDCC33841("hackingNG", "DHComp", Local_80[2 /*2*/], Local_80[2 /*2*/].f_1, 0,4f, 0,4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_81 == 3)
				{
					unk_0xEFB3EC0CDCC33841("hackingNG", "DHCompHi", Local_80[3 /*2*/], Local_80[3 /*2*/].f_1, 0,4f, 0,4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xEFB3EC0CDCC33841("hackingNG", "DHComp", Local_80[3 /*2*/], Local_80[3 /*2*/].f_1, 0,4f, 0,4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_81 == 4)
				{
					unk_0xEFB3EC0CDCC33841("hackingNG", "DHCompHi", Local_80[4 /*2*/], Local_80[4 /*2*/].f_1, 0,4f, 0,4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xEFB3EC0CDCC33841("hackingNG", "DHComp", Local_80[4 /*2*/], Local_80[4 /*2*/].f_1, 0,4f, 0,4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_81 == 5)
				{
					unk_0xEFB3EC0CDCC33841("hackingNG", "DHCompHi", Local_80[5 /*2*/], Local_80[5 /*2*/].f_1, 0,4f, 0,4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xEFB3EC0CDCC33841("hackingNG", "DHComp", Local_80[5 /*2*/], Local_80[5 /*2*/].f_1, 0,4f, 0,4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_81 == 6)
				{
					unk_0xEFB3EC0CDCC33841("hackingNG", "DHCompHi", Local_80[6 /*2*/], Local_80[6 /*2*/].f_1, 0,4f, 0,4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xEFB3EC0CDCC33841("hackingNG", "DHComp", Local_80[6 /*2*/], Local_80[6 /*2*/].f_1, 0,4f, 0,4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_81 == 7)
				{
					unk_0xEFB3EC0CDCC33841("hackingNG", "DHCompHi", Local_80[7 /*2*/], Local_80[7 /*2*/].f_1, 0,4f, 0,4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xEFB3EC0CDCC33841("hackingNG", "DHComp", Local_80[7 /*2*/], Local_80[7 /*2*/].f_1, 0,4f, 0,4f, 0f, 255, 255, 255, 255, 0);
				}
				if (unk_0xC80D31E4B587871C(iParam0->f_1, 0))
				{
					if (!unk_0xC80D31E4B587871C(iParam0->f_1, 1))
					{
						if (unk_0xE8C126B7ADBB9D63(2, 202))
						{
							unk_0x872F1C1F8587CCC7(&(iParam0->f_1), 1);
							unk_0x3E80C2F7BC665259(1);
						}
					}
				}
			}
			break;
	}
}

int func_785(int iParam0)//Position - 0x22D0E
{
	if (Local_80[iParam0 /*2*/].f_1 >= fLocal_85 && Local_80[iParam0 /*2*/].f_1 <= fLocal_84)
	{
		return 1;
	}
	return 0;
}

int func_786(int iParam0)//Position - 0x22D39
{
	if (Local_80[iParam0 /*2*/].f_1 == 0,5f)
	{
		return 1;
	}
	return 0;
}

float func_787(float fParam0, float fParam1, float fParam2)//Position - 0x22D57
{
	float fVar0;
	
	fVar0 = ((1f - system::cos(func_788((fParam2 * 3,141593f)))) * 0,5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_788(float fParam0)//Position - 0x22D86
{
	return (fParam0 * 57,29578f);
}

void func_789()//Position - 0x22D96
{
	fLocal_84 = 0,6f;
	fLocal_85 = 0,53f;
	Local_82[0 /*4*/].f_1 = (0,02f * fLocal_86);
	Local_82[1 /*4*/].f_1 = (0,025f * fLocal_86);
	Local_82[2 /*4*/].f_1 = (0,03f * fLocal_86);
	Local_82[3 /*4*/].f_1 = (0,035f * fLocal_86);
	Local_82[4 /*4*/].f_1 = (0,04f * fLocal_86);
	Local_82[5 /*4*/].f_1 = (0,045f * fLocal_86);
	Local_82[6 /*4*/].f_1 = (0,048f * fLocal_86);
	Local_82[7 /*4*/].f_1 = (0,05f * fLocal_86);
	Local_82[0 /*4*/] = 0;
	Local_82[1 /*4*/] = 0;
	Local_82[2 /*4*/] = 0;
	Local_82[3 /*4*/] = 0;
	Local_82[4 /*4*/] = 0;
	Local_82[5 /*4*/] = 0;
	Local_82[6 /*4*/] = 0;
	Local_82[7 /*4*/] = 0;
	Local_79 = 0,5f;
	Local_79.f_1 = 0,5f;
	Local_80[0 /*2*/] = 0,35f;
	Local_80[0 /*2*/].f_1 = 0,4f;
	Local_80[1 /*2*/] = 0,39f;
	Local_80[1 /*2*/].f_1 = 0,4f;
	Local_80[2 /*2*/] = 0,43f;
	Local_80[2 /*2*/].f_1 = 0,4f;
	Local_80[3 /*2*/] = 0,47f;
	Local_80[3 /*2*/].f_1 = 0,4f;
	Local_80[4 /*2*/] = 0,51f;
	Local_80[4 /*2*/].f_1 = 0,74f;
	Local_80[5 /*2*/] = 0,55f;
	Local_80[5 /*2*/].f_1 = 0,74f;
	Local_80[6 /*2*/] = 0,59f;
	Local_80[6 /*2*/].f_1 = 0,74f;
	Local_80[7 /*2*/] = 0,63f;
	Local_80[7 /*2*/].f_1 = 0,74f;
}

void func_790(char* sParam0, int iParam1)//Position - 0x22F14
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

void func_791(int iParam0, bool bParam1)//Position - 0x22F2B
{
	int iVar0;
	
	if (bParam1)
	{
		iVar0 = unk_0x63A6486593EC7EC3(0, 15);
		if (iVar0 == 0)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_RA", 24);
		}
		else if (iVar0 == 1)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_PA", 24);
		}
		else if (iVar0 == 2)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_PE", 24);
		}
		else if (iVar0 == 3)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_GE", 24);
		}
		else if (iVar0 == 4)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_CH", 24);
		}
		else if (iVar0 == 5)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_FI", 24);
		}
		else if (iVar0 == 6)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_PR", 24);
		}
		else if (iVar0 == 7)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_UN", 24);
		}
		else if (iVar0 == 8)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_DE", 24);
		}
		else if (iVar0 == 9)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_FO", 24);
		}
		else if (iVar0 == 10)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_AR", 24);
		}
		else if (iVar0 == 11)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_TO", 24);
		}
		else if (iVar0 == 12)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_IN", 24);
		}
		else if (iVar0 == 13)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_PRI", 24);
		}
		else if (iVar0 == 14)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_LA", 24);
		}
		else
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_PA", 24);
		}
	}
	else
	{
		iVar0 = unk_0x63A6486593EC7EC3(0, 8);
		if (iVar0 == 0)
		{
			StringCopy(&(iParam0->f_14), "PASSWORD", 24);
		}
		else if (iVar0 == 1)
		{
			StringCopy(&(iParam0->f_14), "PETSNAME", 24);
		}
		else if (iVar0 == 2)
		{
			StringCopy(&(iParam0->f_14), "DYNAMITE", 24);
		}
		else if (iVar0 == 3)
		{
			StringCopy(&(iParam0->f_14), "BACKDOOR", 24);
		}
		else if (iVar0 == 4)
		{
			StringCopy(&(iParam0->f_14), "MORPHEUS", 24);
		}
		else if (iVar0 == 5)
		{
			StringCopy(&(iParam0->f_14), "CREAMPIE", 24);
		}
		else if (iVar0 == 6)
		{
			StringCopy(&(iParam0->f_14), "WORMSIGN", 24);
		}
		else if (iVar0 == 7)
		{
			StringCopy(&(iParam0->f_14), "UNLOCKED", 24);
		}
		else if (iVar0 == 8)
		{
			StringCopy(&(iParam0->f_14), "BLUEBOOK", 24);
		}
		else if (iVar0 == 9)
		{
			StringCopy(&(iParam0->f_14), "DECIPHER", 24);
		}
		else if (iVar0 == 10)
		{
			StringCopy(&(iParam0->f_14), "JUNKYARD", 24);
		}
		else
		{
			StringCopy(&(iParam0->f_14), "PASSWORD", 24);
		}
	}
}

void func_792(bool bParam0, char* sParam1)//Position - 0x23159
{
	if (bParam0)
	{
		unk_0x9F7EE0CB5D370080(iLocal_74, "OPEN_ERROR_POPUP", system::to_float(1), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_77 = unk_0x53C562FD2B9E3AB0();
		iLocal_78 = 1;
	}
	else
	{
		unk_0x9F7EE0CB5D370080(iLocal_74, "OPEN_ERROR_POPUP", system::to_float(0), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_78 = 0;
	}
}

void func_793(char* sParam0)//Position - 0x231A7
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 1, true, -1);
}

void func_794(int iParam0, int iParam1)//Position - 0x231BD
{
	if (!unk_0xC80D31E4B587871C(*iParam0, 29))
	{
		unk_0x311B18D03904DAAA(iLocal_74, "SET_BACKGROUND", system::to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
		if (unk_0x41226DC6540EC9AA())
		{
			unk_0x9F7EE0CB5D370080(iLocal_74, "ADD_PROGRAM", system::to_float(7), system::to_float(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		else
		{
			unk_0x9F7EE0CB5D370080(iLocal_74, "ADD_PROGRAM", system::to_float(8), system::to_float(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		unk_0x008F3E3CC076EA0E(iLocal_74, "SET_LABELS");
		func_266("H_ICON_1");
		if (iParam1 == 0)
		{
			func_266("H_ICON_2a");
		}
		else
		{
			func_266("H_ICON_2");
		}
		func_266("H_ICON_3");
		func_266("H_ICON_4");
		func_266("H_ICON_5");
		func_266("H_ICON_6");
		unk_0x271AA5469AF471B3();
		unk_0x872F1C1F8587CCC7(iParam0, 29);
	}
}

int func_795(int iParam0, int iParam1)//Position - 0x23297
{
	int iVar0;
	
	iVar0 = unk_0x53C562FD2B9E3AB0();
	if ((iVar0 - *iParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_796(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x232B5
{
	*uParam1 = ((iParam0 % 3600000) / 60000);
	*uParam2 = (((iParam0 % 3600000) % 60000) / 1000);
	*uParam3 = (((iParam0 % 3600000) % 60000) % 1000);
}

void func_797()//Position - 0x232F2
{
	if (iLocal_75 < 5)
	{
		if (unk_0xE8C126B7ADBB9D63(2, 201) || unk_0xE8C126B7ADBB9D63(2, 237))
		{
			unk_0x4AFBCBFDE748D4E0(-1, "HACKING_CLICK", 0, true);
		}
	}
}

void func_798(int iParam0)//Position - 0x23322
{
	unk_0x730F5A4EC599BB13(unk_0xFC1458A37D98B502(), 1, 1, 1, 0);
	if (unk_0x586321DCB7FEB6F8())
	{
		unk_0x9CCF36D85F5E43B6(0);
	}
	unk_0x3E80C2F7BC665259(1);
	unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
	unk_0x02934BABFD4CD384(iLocal_72, 0);
	func_774(0);
	func_773();
	unk_0x872F1C1F8587CCC7(iParam0, 1);
	unk_0xB26D474FD50876A9(0);
	func_772(iParam0, 1, 0);
	func_771(0, 1, 1, 0);
}

void func_799(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x2337E
{
	*uParam0 = system::floor((unk_0xD65AC54B4C6897F9(2, 218) * 127f));
	*uParam1 = system::floor((unk_0xD65AC54B4C6897F9(2, 219) * 127f));
	*uParam2 = system::floor((unk_0xD65AC54B4C6897F9(2, 220) * 127f));
	*uParam3 = system::floor((unk_0xD65AC54B4C6897F9(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xF6F627547A24DED8(2, 218))
		{
			*uParam0 = system::floor((unk_0xBAE4B95B10A2442D(2, 218) * 127f));
		}
		if (!unk_0xF6F627547A24DED8(2, 219))
		{
			*uParam1 = system::floor((unk_0xBAE4B95B10A2442D(2, 219) * 127f));
		}
		if (!unk_0xF6F627547A24DED8(2, 220))
		{
			*uParam2 = system::floor((unk_0xBAE4B95B10A2442D(2, 220) * 127f));
		}
		if (!unk_0xF6F627547A24DED8(2, 221))
		{
			*uParam3 = system::floor((unk_0xBAE4B95B10A2442D(2, 221) * 127f));
		}
	}
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (bParam5)
		{
			if (unk_0x098C8C3D1E0C0518())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0x7A3414CFDD1FDFA8())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_800(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x23482
{
	*uParam0 = system::floor((unk_0x869308DF4F5FB0C3(2, 218) * 127f));
	*uParam1 = system::floor((unk_0x869308DF4F5FB0C3(2, 219) * 127f));
	*uParam2 = system::floor((unk_0x869308DF4F5FB0C3(2, 220) * 127f));
	*uParam3 = system::floor((unk_0x869308DF4F5FB0C3(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = system::floor((unk_0x84326F8D8D6875EC(2, 218) * 127f));
			*uParam1 = system::floor((unk_0x84326F8D8D6875EC(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = system::floor((unk_0x84326F8D8D6875EC(2, 220) * 127f));
			*uParam3 = system::floor((unk_0x84326F8D8D6875EC(2, 221) * 127f));
		}
	}
}

void func_801(int iParam0)//Position - 0x23557
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_778(0))
		{
			func_775(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

void func_802(int iParam0, int iParam1)//Position - 0x23580
{
	unk_0x872F1C1F8587CCC7(&(Global_1357530.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1357530.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_803(int iParam0)//Position - 0x235B6
{
	Global_1359035.f_1079 = iParam0;
}

void func_804(int iParam0, bool bParam1, int iParam2)//Position - 0x235C7
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
			unk_0x7635EA803CE40962(false);
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
		if (!func_374())
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
				else if (bVar13 || (!func_144(unk_0x9EB17624F44A8DA4(), 0) && !func_87()))
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
				if (!func_808(iVar25) && !unk_0xDDF5130488C0B76A(iVar25))
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
					unk_0xFBA991D3A851E195(iVar25, true);
				}
				else if (!bVar20)
				{
					unk_0xEDC33A771FAEB393(iVar25, false);
				}
				unk_0x5C5D33A1B2711D21(iVar25, true);
				unk_0x8FA21D9CF7681249(iParam0, 0);
				unk_0x8A92C5AE18686726(iVar25);
				unk_0x5718F894FDA63A9E(iVar25, 1);
				func_807();
				func_806();
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
				if (!func_808(iVar25) && !unk_0xDDF5130488C0B76A(iVar25))
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
							unk_0xFBA991D3A851E195(iVar25, true);
						}
					}
					if (func_805(Global_4456448.f_143970))
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

bool func_805(int iParam0)//Position - 0x239A9
{
	return iParam0 == 17;
}

void func_806()//Position - 0x239B6
{
	vector3 vVar0;
	
	Global_2436181.f_1117 = 0;
	Global_2436181.f_1118 = 0;
	Global_2436181.f_1119 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2436181.f_1124 = -1;
	Global_2436181.f_1125 = 0;
	Global_2405047.f_2650 = { vVar0 };
}

void func_807()//Position - 0x23A03
{
	Global_2405047.f_675 = 0;
	Global_2405047.f_2693 = 0;
	Global_2405047.f_508 = 0;
	Global_2405047.f_587 = 0;
	Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_222 = 0;
	Global_2405047.f_2649 = 0;
}

int func_808(int iParam0)//Position - 0x23A41
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

int func_809(bool bParam0)//Position - 0x23A72
{
	if (unk_0x34D11AB5BA7922C2(iLocal_74) && (!bParam0 || (((((unk_0xA51ADD51711B4A15("HACKING_PC_desktop_0") && unk_0xA51ADD51711B4A15("HACKING_PC_desktop_1")) && unk_0xA51ADD51711B4A15("HACKING_PC_desktop_2")) && unk_0xA51ADD51711B4A15("HACKING_PC_desktop_3")) && unk_0xA51ADD51711B4A15("HACKING_PC_desktop_4")) && unk_0xA51ADD51711B4A15("HACKING_PC_desktop_5"))))
	{
		return 1;
	}
	return 0;
}

void func_810(bool bParam0)//Position - 0x23ADF
{
	if (bParam0)
	{
		unk_0x128A5DCCD09CCA17("HACKING_PC_desktop_0", false);
		unk_0x128A5DCCD09CCA17("HACKING_PC_desktop_1", false);
		unk_0x128A5DCCD09CCA17("HACKING_PC_desktop_2", false);
		unk_0x128A5DCCD09CCA17("HACKING_PC_desktop_3", false);
		unk_0x128A5DCCD09CCA17("HACKING_PC_desktop_4", false);
		unk_0x128A5DCCD09CCA17("HACKING_PC_desktop_5", false);
	}
	iLocal_74 = unk_0x126ABAE287BBEF53("Hacking_PC");
}

void func_811(int iParam0)//Position - 0x23B2C
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0x730F5A4EC599BB13(unk_0xFC1458A37D98B502(), 1, 1, 1, 0);
	}
	if (unk_0x586321DCB7FEB6F8())
	{
		unk_0x9CCF36D85F5E43B6(0);
	}
	unk_0xAE8C92295C8F2D18(0);
	unk_0x3E80C2F7BC665259(1);
	unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
	unk_0x02934BABFD4CD384(iLocal_72, 0);
	unk_0x0EE72DB1CD8A3B86(iParam0, 0);
	unk_0x0EE72DB1CD8A3B86(iParam0, 12);
	func_774(0);
	func_773();
	unk_0xB26D474FD50876A9(0);
}

void func_812(int iParam0)//Position - 0x23B90
{
	func_772(iParam0, 1, 1);
	*iParam0 = 0;
	iParam0->f_23 = 0;
	Local_81 = 0;
	Local_81.f_1 = 0;
	unk_0x0EE72DB1CD8A3B86(iParam0, 26);
	Local_82[0 /*4*/] = 0;
	Local_82[1 /*4*/] = 0;
	Local_82[2 /*4*/] = 0;
	Local_82[3 /*4*/] = 0;
	Local_82[4 /*4*/] = 0;
	Local_82[5 /*4*/] = 0;
	Local_82[6 /*4*/] = 0;
	Local_82[7 /*4*/] = 0;
}

void func_813(bool bParam0)//Position - 0x23BE9
{
	unk_0x4FB260623DD93924(0, 71, 1);
	unk_0x4FB260623DD93924(0, 72, 1);
	unk_0x4FB260623DD93924(0, 76, 1);
	unk_0x4FB260623DD93924(0, 59, 1);
	unk_0x4FB260623DD93924(0, 60, 1);
	if (bParam0)
	{
		unk_0x4FB260623DD93924(0, 75, 1);
	}
	unk_0x4FB260623DD93924(0, 80, 1);
	unk_0x4FB260623DD93924(0, 69, 1);
	unk_0x4FB260623DD93924(0, 70, 1);
	unk_0x4FB260623DD93924(0, 68, 1);
	unk_0x4FB260623DD93924(0, 74, 1);
	unk_0x4FB260623DD93924(0, 86, 1);
	unk_0x4FB260623DD93924(0, 81, 1);
	unk_0x4FB260623DD93924(0, 82, 1);
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
}

void func_814()//Position - 0x23CCE
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC80D31E4B587871C(Local_144, 0))
	{
		return;
	}
	if (!func_436())
	{
		if (func_405("GB_SGHT_HLP1"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		if (func_405("GB_SGHT_HLP2"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		if (func_398())
		{
			sVar0 = func_498(unk_0xF6A72924028F588B(Local_131.f_34));
			iVar1 = func_743(unk_0xF6A72924028F588B(Local_131.f_34));
			if (func_285(unk_0x9EB17624F44A8DA4(), 1))
			{
				if (func_823("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					unk_0x3E80C2F7BC665259(1);
				}
			}
			else if (func_823("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				unk_0x3E80C2F7BC665259(1);
			}
		}
		if (func_405("GB_SGHT_RVL"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		return;
	}
	iVar2 = func_389(unk_0x9EB17624F44A8DA4());
	if (iVar2 < 2)
	{
		if (func_405("GB_SGHT_HLP1"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		if (func_405("GB_SGHT_HLP2"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		if (func_398())
		{
			sVar0 = func_498(unk_0xF6A72924028F588B(Local_131.f_34));
			iVar1 = func_743(unk_0xF6A72924028F588B(Local_131.f_34));
			if (func_285(unk_0x9EB17624F44A8DA4(), 1))
			{
				if (func_823("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					unk_0x3E80C2F7BC665259(1);
				}
			}
			else if (func_823("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				unk_0x3E80C2F7BC665259(1);
			}
		}
		if (func_405("GB_SGHT_RVL"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		return;
	}
	if (!unk_0xC80D31E4B587871C(iLocal_133, 2))
	{
		if (!func_822(86))
		{
			if (iLocal_416 == -1)
			{
				if (func_816(0, 1, 1, 1))
				{
					if (unk_0x622FF3AE4B1D07C3() == Local_131.f_33)
					{
						func_413("GB_SGHT_HLP1", -1);
						func_412(1);
						unk_0x872F1C1F8587CCC7(&iLocal_133, 2);
					}
					else if (func_897() == Local_131.f_33)
					{
						func_413("GB_SGHT_HLP2", -1);
						func_412(1);
						unk_0x872F1C1F8587CCC7(&iLocal_133, 2);
					}
					else if (func_398())
					{
						sVar0 = func_498(unk_0xF6A72924028F588B(Local_131.f_34));
						iVar1 = func_743(unk_0xF6A72924028F588B(Local_131.f_34));
						if (func_285(unk_0x9EB17624F44A8DA4(), 1))
						{
							func_815("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_412(1);
						}
						else
						{
							func_815("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_412(1);
						}
						unk_0x872F1C1F8587CCC7(&iLocal_133, 2);
					}
				}
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&iLocal_133, 2);
			}
		}
	}
	if (unk_0xC80D31E4B587871C(iLocal_133, 2))
	{
		if (!unk_0xC80D31E4B587871C(iLocal_133, 7))
		{
			if (iLocal_416 == -1)
			{
				if (unk_0x622FF3AE4B1D07C3() == Local_131.f_33)
				{
					if (func_816(0, 1, 1, 1))
					{
						func_413("GB_SGHT_APPH", -1);
						func_412(1);
						unk_0x872F1C1F8587CCC7(&iLocal_133, 7);
					}
				}
				else
				{
					unk_0x872F1C1F8587CCC7(&iLocal_133, 7);
				}
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&iLocal_133, 7);
			}
		}
	}
	if (!unk_0xC80D31E4B587871C(iLocal_133, 8))
	{
		if (func_896())
		{
			if (func_880())
			{
				if (unk_0x918CA1BFFAA03556(Local_131.f_3))
				{
					if (func_816(0, 1, 1, 1))
					{
						func_413("GB_SGHT_PKGH", -1);
						func_412(1);
						unk_0x872F1C1F8587CCC7(&iLocal_133, 8);
					}
				}
			}
		}
	}
	if (!unk_0xC80D31E4B587871C(iLocal_133, 12))
	{
		if (func_896())
		{
			if (Local_131.f_5 > 0 || unk_0xC80D31E4B587871C(Local_131.f_1, 6))
			{
				if (func_816(0, 1, 1, 1))
				{
					func_413("GB_SGHT_RVL", -1);
					func_412(1);
					unk_0x872F1C1F8587CCC7(&iLocal_133, 12);
				}
			}
		}
	}
}

void func_815(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x24018
{
	unk_0x67129637F30DEB3F(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam2);
	}
	unk_0x854FACC4E5F40C82(sParam1);
	if (!iParam4 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam4);
	}
	unk_0xA6D2B267C377D7B2(sParam3);
	unk_0x376CFA11DE0FE521(0, 0, false, iParam5);
}

int func_816(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x24057
{
	if (iParam2 && unk_0xF491DD47B88AA84E())
	{
		return 0;
	}
	if (func_821())
	{
		return 0;
	}
	if (!unk_0x9F7B586A14398C40())
	{
		return 0;
	}
	if (func_379())
	{
		return 0;
	}
	if (func_464())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_38(unk_0x9EB17624F44A8DA4(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_820(unk_0x9EB17624F44A8DA4()))
		{
			return 0;
		}
	}
	if (func_819())
	{
		return 0;
	}
	if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		return 0;
	}
	if (unk_0x0F30C1F1717A6437())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
		{
			return 0;
		}
	}
	if (Global_1574122)
	{
		return 0;
	}
	if (func_818())
	{
		return 0;
	}
	if (func_817())
	{
		return 0;
	}
	if (func_372())
	{
		return 0;
	}
	if (Global_68215)
	{
		return 0;
	}
	if (Global_2521684)
	{
		return 0;
	}
	return 1;
}

bool func_817()//Position - 0x24144
{
	return Global_2447174.f_579;
}

bool func_818()//Position - 0x24153
{
	return Global_2447174.f_731;
}

bool func_819()//Position - 0x24162
{
	return Global_2436181.f_2912.f_578;
}

int func_820(int iParam0)//Position - 0x24174
{
	if (Global_2422736[iParam0 /*420*/].f_223 == 0)
	{
		return 0;
	}
	return 1;
}

int func_821()//Position - 0x24190
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

bool func_822(int iParam0)//Position - 0x241B2
{
	return Global_2436181.f_2592[0 /*79*/].f_1 == iParam0;
}

int func_823(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x241C9
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam2);
	}
	unk_0x854FACC4E5F40C82(sParam1);
	if (!iParam4 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam4);
	}
	unk_0xA6D2B267C377D7B2(sParam3);
	return unk_0x0683D2027E169355(0);
}

void func_824()//Position - 0x24204
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC80D31E4B587871C(Local_144, 0))
	{
		return;
	}
	if (!func_436())
	{
		if (unk_0xC80D31E4B587871C(iLocal_133, 5))
		{
			if (Local_131.f_34 != -1)
			{
				iVar0 = func_289(unk_0xF6A72924028F588B(Local_131.f_34));
				if (iVar0 > -1)
				{
					if (unk_0x552F39AE86E07792(unk_0xF6A72924028F588B(Local_131.f_34)))
					{
						iVar1 = func_287(iVar0);
						iVar2 = func_766(iVar1);
						func_427(unk_0xF6A72924028F588B(Local_131.f_34), 432, 0);
						func_425(unk_0xF6A72924028F588B(Local_131.f_34), iVar2, 0);
						func_424(unk_0xF6A72924028F588B(Local_131.f_34), 0, 0);
						func_423(unk_0xF6A72924028F588B(Local_131.f_34), 0);
						func_422(unk_0xF6A72924028F588B(Local_131.f_34), Global_262145.f_11695, 0);
						unk_0x0EE72DB1CD8A3B86(&iLocal_133, 5);
					}
					else
					{
						unk_0x0EE72DB1CD8A3B86(&iLocal_133, 5);
					}
				}
			}
			func_429();
		}
		return;
	}
	if (!unk_0x918CA1BFFAA03556(Local_131.f_3))
	{
		if (unk_0x622FF3AE4B1D07C3() == Local_131.f_33)
		{
			if (!unk_0xC80D31E4B587871C(Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_1, 3))
			{
				if (!unk_0xC80D31E4B587871C(Local_144, 0))
				{
					if (Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_5 < 3)
					{
						if (func_389(unk_0x9EB17624F44A8DA4()) == 3)
						{
							if (!func_834("GB_SGHT_HCK"))
							{
								func_831("GB_SGHT_HCK", 0);
							}
						}
						else if (func_834("GB_SGHT_HCK"))
						{
							func_429();
						}
					}
					else
					{
						func_429();
					}
				}
			}
		}
		else if (func_897() == Local_131.f_33)
		{
			if (Local_131.f_34 != -1)
			{
				if (func_389(unk_0x9EB17624F44A8DA4()) == 3)
				{
					if (!func_834("GB_SGHT_PROT"))
					{
						iVar0 = func_289(unk_0xF6A72924028F588B(Local_131.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_287(iVar0);
							func_825("GB_SGHT_PROT", unk_0xF6A72924028F588B(Local_131.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
				}
				else if (func_834("GB_SGHT_PROT"))
				{
					func_429();
				}
			}
		}
		else if (func_398())
		{
			if (Local_131.f_34 != -1)
			{
				if (func_389(unk_0x9EB17624F44A8DA4()) == 3)
				{
					if (Local_131.f_34 != -1)
					{
						iVar0 = func_289(unk_0xF6A72924028F588B(Local_131.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_287(iVar0);
							if (func_285(unk_0x9EB17624F44A8DA4(), 1))
							{
								if (!func_834("GB_SGHT_STOP"))
								{
									func_825("GB_SGHT_STOP", unk_0xF6A72924028F588B(Local_131.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
								}
							}
							else if (!func_834("GB_SGHT_STOP"))
							{
								func_825("GB_SGHT_STOP", unk_0xF6A72924028F588B(Local_131.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
							}
						}
					}
				}
				else
				{
					if (func_834("GB_SGHT_STOP"))
					{
						func_429();
					}
					if (func_834("GB_SGHT_STOP2"))
					{
						func_429();
					}
				}
				if (func_389(unk_0x9EB17624F44A8DA4()) >= 2)
				{
					if (!unk_0xC80D31E4B587871C(iLocal_133, 5))
					{
						if (Local_131.f_34 != -1)
						{
							if (unk_0x552F39AE86E07792(unk_0xF6A72924028F588B(Local_131.f_34)))
							{
								if (func_991(unk_0xF6A72924028F588B(Local_131.f_34), 1, 1))
								{
									iVar0 = func_289(unk_0xF6A72924028F588B(Local_131.f_34));
									if (iVar0 > -1)
									{
										iVar1 = func_287(iVar0);
										iVar2 = func_766(iVar1);
										func_427(unk_0xF6A72924028F588B(Local_131.f_34), 432, 1);
										func_425(unk_0xF6A72924028F588B(Local_131.f_34), iVar2, 1);
										func_424(unk_0xF6A72924028F588B(Local_131.f_34), 1, 1);
										func_423(unk_0xF6A72924028F588B(Local_131.f_34), 1);
										func_422(unk_0xF6A72924028F588B(Local_131.f_34), Global_262145.f_11695, 1);
										unk_0x872F1C1F8587CCC7(&iLocal_133, 5);
									}
								}
							}
						}
					}
				}
				else if (unk_0xC80D31E4B587871C(iLocal_133, 5))
				{
					if (Local_131.f_34 != -1)
					{
						iVar0 = func_289(unk_0xF6A72924028F588B(Local_131.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_287(iVar0);
							iVar2 = func_766(iVar1);
							func_427(unk_0xF6A72924028F588B(Local_131.f_34), 432, 0);
							func_425(unk_0xF6A72924028F588B(Local_131.f_34), iVar2, 0);
							func_424(unk_0xF6A72924028F588B(Local_131.f_34), 0, 0);
							func_423(unk_0xF6A72924028F588B(Local_131.f_34), 0);
							func_422(unk_0xF6A72924028F588B(Local_131.f_34), Global_262145.f_11695, 0);
							unk_0x0EE72DB1CD8A3B86(&iLocal_133, 5);
						}
					}
				}
			}
		}
	}
	else if (func_389(unk_0x9EB17624F44A8DA4()) == 3)
	{
		if (unk_0x622FF3AE4B1D07C3() == Local_131.f_33)
		{
			if (!unk_0xC80D31E4B587871C(Local_144, 0))
			{
				if (!func_834("GB_SGHT_RETP"))
				{
					func_831("GB_SGHT_RETP", 0);
				}
			}
		}
		else if (func_897() == Local_131.f_33)
		{
			if (Local_131.f_34 != -1)
			{
				if (!func_834("GB_SGHT_PROT"))
				{
					iVar0 = func_289(unk_0xF6A72924028F588B(Local_131.f_34));
					if (iVar0 > -1)
					{
						iVar1 = func_287(iVar0);
						func_825("GB_SGHT_PROT", unk_0xF6A72924028F588B(Local_131.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
		else if (func_398())
		{
			if (Local_131.f_34 != -1)
			{
				iVar0 = func_289(unk_0xF6A72924028F588B(Local_131.f_34));
				if (iVar0 > -1)
				{
					iVar1 = func_287(iVar0);
					if (func_285(unk_0x9EB17624F44A8DA4(), 1))
					{
						if (!func_834("GB_SGHT_STOP"))
						{
							func_825("GB_SGHT_STOP", unk_0xF6A72924028F588B(Local_131.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
					else if (!func_834("GB_SGHT_STOP"))
					{
						func_825("GB_SGHT_STOP", unk_0xF6A72924028F588B(Local_131.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
	}
	else
	{
		if (func_834("GB_SGHT_PROT"))
		{
			func_429();
		}
		if (func_834("GB_SGHT_RETP"))
		{
			func_429();
		}
		if (func_834("GB_SGHT_STOP"))
		{
			func_429();
		}
		if (func_834("GB_SGHT_STOP2"))
		{
			func_429();
		}
	}
}

void func_825(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x2471B
{
	if (func_826(sParam0, unk_0xDE2D3B9654C31EB3(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312576 = 15;
		Global_1312576.f_56 = iParam3;
		Global_1312576.f_57 = iParam4;
		Global_1312576.f_54 = iParam1;
	}
}

int func_826(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)//Position - 0x24756
{
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam1) > 63)
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam2))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam2) > 63)
	{
		return 0;
	}
	if (func_830(sParam0, sParam1, sParam2) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	func_430();
	Global_1312576 = 10;
	StringCopy(&(Global_1312576.f_1), unk_0x436287B7DB306165(), 32);
	Global_1312576.f_9 = unk_0x8B948C59217A295D(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	StringCopy(&(Global_1312576.f_32), sParam2, 64);
	Global_1312576.f_58 = uParam4;
	Global_1312576.f_56 = uParam4;
	func_829();
	func_828(bParam3);
	func_827();
	return 1;
}

void func_827()//Position - 0x24838
{
	unk_0x872F1C1F8587CCC7(&(Global_1312576.f_59), 1);
}

void func_828(bool bParam0)//Position - 0x2484B
{
	if (bParam0)
	{
		unk_0x872F1C1F8587CCC7(&(Global_1312576.f_59), 0);
		return;
	}
	unk_0x0EE72DB1CD8A3B86(&(Global_1312576.f_59), 0);
}

void func_829()//Position - 0x24871
{
	Global_1312576.f_10 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), 86400000);
	Global_1312576.f_11 = unk_0xD1952A425B78FFC0();
}

bool func_830(char* sParam0, char* sParam1, char* sParam2)//Position - 0x24896
{
	if (!func_435())
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam2))
	{
		return 0;
	}
	if (!unk_0x8B948C59217A295D(sParam0) == unk_0x8B948C59217A295D(&(Global_1312576.f_12)))
	{
		return 0;
	}
	if (!unk_0x8B948C59217A295D(sParam1) == unk_0x8B948C59217A295D(&(Global_1312576.f_16)))
	{
		return 0;
	}
	return unk_0x8B948C59217A295D(sParam2) == unk_0x8B948C59217A295D(&(Global_1312576.f_32));
}

void func_831(char* sParam0, bool bParam1)//Position - 0x24914
{
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return;
	}
	if (unk_0xFDD8E897FECD2912(sParam0) > 23)
	{
		return;
	}
	if (func_832(sParam0))
	{
		return;
	}
	func_430();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), unk_0x436287B7DB306165(), 32);
	Global_1312576.f_9 = unk_0x8B948C59217A295D(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_829();
	func_828(bParam1);
	func_827();
}

bool func_832(char* sParam0)//Position - 0x2497F
{
	if (!func_435())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_833(sParam0);
	}
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	return unk_0x8B948C59217A295D(sParam0) == unk_0x8B948C59217A295D(&(Global_1312576.f_12));
}

bool func_833(char* sParam0)//Position - 0x249C3
{
	if (!func_435())
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	return unk_0x8B948C59217A295D(sParam0) == unk_0x8B948C59217A295D(&(Global_1312576.f_16));
}

int func_834(char* sParam0)//Position - 0x249F5
{
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	if (!func_435())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		if (unk_0xFDD8E897FECD2912(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0xFDD8E897FECD2912(sParam0) > 23)
	{
		return 0;
	}
	return func_832(sParam0);
}

void func_835()//Position - 0x24A46
{
	int iVar0;
	char* sVar1;
	var uVar2;
	
	if (!func_896() && !func_398())
	{
		return;
	}
	if (!func_436())
	{
		return;
	}
	if (!unk_0xC80D31E4B587871C(iLocal_133, 1))
	{
		iVar0 = func_389(unk_0x9EB17624F44A8DA4());
		if (iVar0 >= 2)
		{
			if (unk_0x622FF3AE4B1D07C3() == Local_131.f_33 || func_897() == Local_131.f_33)
			{
				if (func_859(82, "GB_INTTXT_SS", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_497(86, "BIGM_SGHTN", "BIGM_SGHTBD", 1, -1, 2);
					unk_0x3D2F639D46A69899(1);
					unk_0x02B16F1B0D7F12B4(unk_0x9EB17624F44A8DA4(), joaat("pickup_portable_package"), 1);
					func_858(1);
					func_836(-1, 0, 0, -1, 0);
				}
			}
			else if (func_285(unk_0x9EB17624F44A8DA4(), 1))
			{
				sVar1 = func_498(unk_0xF6A72924028F588B(Local_131.f_34));
				uVar2 = func_743(unk_0xF6A72924028F588B(Local_131.f_34));
				func_741(86, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				func_836(-1, 0, 0, -1, 0);
			}
			else
			{
				sVar1 = func_498(unk_0xF6A72924028F588B(Local_131.f_34));
				uVar2 = func_743(unk_0xF6A72924028F588B(Local_131.f_34));
				func_741(86, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				func_836(-1, 0, 0, -1, 0);
			}
		}
		unk_0x872F1C1F8587CCC7(&iLocal_133, 1);
	}
}

void func_836(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x24B86
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_221(unk_0x9EB17624F44A8DA4());
	if (iParam2 || func_410(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1667885 = iVar0;
		if (func_450(iVar0))
		{
			Global_1667885.f_1 = 4;
		}
		else if (func_449(iVar0))
		{
			Global_1667885.f_1 = 5;
		}
		else if (func_318(iVar0, 0))
		{
			Global_1667885.f_1 = 2;
			if (func_506(iVar0))
			{
				Global_1667885.f_1 = 3;
			}
		}
		else
		{
			Global_1667885.f_1 = 1;
		}
		if (func_495() != func_81())
		{
			Global_1667885.f_4 = func_737(func_495());
			Global_1667885.f_5 = func_736(func_495());
		}
		if (func_349() != func_81())
		{
			func_538(func_349(), &(Global_1667885.f_6), &(Global_1667885.f_7));
		}
		Global_1667885.f_9 = unk_0xE3CCAFB1555348DF();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1667885.f_27 = 1;
			Global_1667885.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1667885.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1667885.f_40 = func_533(iParam1);
			Global_1667885.f_41 = func_857();
			Global_1667885.f_42 = func_650(unk_0x9EB17624F44A8DA4(), iParam1);
			Global_1667885.f_44 = func_732(unk_0x9EB17624F44A8DA4(), iParam1);
		}
	}
	else if (func_447(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1668000 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1668000 = iParam0 + 1;
		}
		else
		{
			Global_1668000 = func_856(unk_0x9EB17624F44A8DA4());
		}
		switch (iVar0)
		{
			case 225:
				if (func_855(unk_0x9EB17624F44A8DA4()) == 0)
				{
					Global_1668000.f_1 = 0;
				}
				else
				{
					Global_1668000.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1668000.f_1 = 2;
				break;
			
			case 227:
				Global_1668000.f_1 = 3;
				break;
		}
		Global_1668000.f_21 = 1;
		Global_1668000.f_22 = 1;
		if (func_495() != func_81())
		{
			Global_1668000.f_4 = func_737(func_495());
			Global_1668000.f_5 = func_736(func_495());
		}
		if (func_349() != func_81())
		{
			func_538(func_349(), &(Global_1668000.f_4), &(Global_1668000.f_5));
		}
		Global_1668000.f_8 = unk_0xE3CCAFB1555348DF();
		if (iParam0 != -1)
		{
			Global_1668000.f_20 = iParam0;
		}
	}
	else if (func_414(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1667938 = iVar0;
		Global_1667885.f_1 = 1;
		if (func_495() != func_81())
		{
			Global_1667938.f_4 = func_737(func_495());
			Global_1667938.f_5 = func_736(func_495());
		}
		if (func_349() != func_81())
		{
			func_538(func_349(), &(Global_1667938.f_6), &(Global_1667938.f_7));
		}
		Global_1667938.f_9 = unk_0xE3CCAFB1555348DF();
		if (iParam0 != -1)
		{
			Global_1667938.f_21 = iParam0;
		}
	}
	else if (func_445(iVar0))
	{
		Global_1668043 = iVar0;
		Global_1668043.f_1 = iParam0;
		Global_1668043.f_21 = 1;
		Global_1668043.f_22 = 1;
		if (func_495() != func_81())
		{
			Global_1668043.f_4 = func_737(func_495());
			Global_1668043.f_5 = func_736(func_495());
		}
		if (func_349() != func_81())
		{
			func_538(func_349(), &(Global_1668043.f_4), &(Global_1668043.f_5));
		}
		Global_1668043.f_8 = unk_0xE3CCAFB1555348DF();
		if (iParam0 != -1)
		{
			Global_1668043.f_20 = iParam0;
		}
		Global_1668043.f_27 = func_724(func_146(), 5);
		Global_1668043.f_28 = func_721(func_628(unk_0x9EB17624F44A8DA4()));
		Global_1668043.f_29 = func_512(6090, -1, 0);
		Global_1668043.f_30 = func_512(6086, -1, 0);
		Global_1668043.f_31 = func_512(6087, -1, 0);
		Global_1668043.f_32 = func_512(6089, -1, 0);
		Global_1668043.f_33 = func_512(6088, -1, 0);
		Global_1668043.f_34 = func_512(6091, -1, 0);
		Global_1668043.f_7 = func_726();
		Global_1668043.f_51 = func_721(bParam4);
	}
	else if (func_443(iVar0))
	{
		Global_1668096 = iVar0;
		Global_1668096.f_1 = iParam0;
		Global_1668096.f_21 = 1;
		Global_1668096.f_22 = 1;
		if (func_495() != func_81())
		{
			Global_1668096.f_4 = func_737(func_495());
			Global_1668096.f_5 = func_736(func_495());
		}
		if (func_349() != func_81())
		{
			func_538(func_349(), &(Global_1668096.f_4), &(Global_1668096.f_5));
		}
		Global_1668096.f_8 = unk_0xE3CCAFB1555348DF();
		if (iParam0 != -1)
		{
			Global_1668096.f_20 = iParam0;
		}
		Global_1668096.f_24 = func_512(6140, -1, 0);
		Global_1668096.f_25 = func_512(6145, -1, 0);
		Global_1668096.f_26 = func_512(6146, -1, 0);
		Global_1668096.f_27 = func_721((((func_686() || func_685()) || func_684()) || func_683(unk_0x9EB17624F44A8DA4())));
		Global_1668096.f_28 = func_512(6147, -1, 0);
		Global_1668096.f_29 = func_721(func_682());
		Global_1668096.f_31 = 0;
		Global_1668096.f_30 = 0;
		Global_1668096.f_32 = 0;
		Global_1668096.f_33 = 0;
		Global_1668096.f_34 = 0;
		Global_1668096.f_16 = 0;
	}
	else
	{
		if (func_495() != func_81())
		{
			Global_1667867 = func_737(func_495());
			Global_1667867.f_1 = func_736(func_495());
		}
		Global_1667867.f_5 = unk_0xE3CCAFB1555348DF();
		Global_1667867.f_13 = func_854();
		Global_1667867.f_15 = 0;
		if (func_496(1))
		{
			if (func_349() == func_495())
			{
				Global_1667867.f_15 = 1;
			}
		}
		if (func_853())
		{
			Global_1668000.f_28 = 1;
		}
		if (((func_852() || func_851()) || func_850()) || func_849())
		{
			Global_1668000.f_30 = 1;
		}
		if (func_847(func_848(-1881846085)))
		{
			Global_1668000.f_32 = 1;
		}
		if (func_840(func_846(joaat("caddy"))))
		{
			Global_1668000.f_31 = 1;
		}
		if (func_723(unk_0x9EB17624F44A8DA4()) || func_722(unk_0x9EB17624F44A8DA4()))
		{
			Global_1668000.f_29 = 1;
		}
		if (func_718(unk_0x9EB17624F44A8DA4()))
		{
			Global_1668000.f_33 = 1;
			Global_1668000.f_34 = 1;
		}
		if (func_719(unk_0x9EB17624F44A8DA4()))
		{
			Global_1668000.f_36 = 1;
		}
		if (func_716(0, unk_0x9EB17624F44A8DA4()) == 1)
		{
			Global_1668000.f_35 = 1;
		}
		if (func_839(unk_0x9EB17624F44A8DA4(), 3, &uVar1))
		{
			Global_1668000.f_37 = 1;
		}
		if (func_839(unk_0x9EB17624F44A8DA4(), 7, &uVar1))
		{
			Global_1668000.f_38 = 1;
		}
		if (func_838(unk_0x9EB17624F44A8DA4()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_837(unk_0x9EB17624F44A8DA4(), iVar2);
				if (func_647(unk_0x9EB17624F44A8DA4(), iVar3, 0))
				{
					Global_1668000.f_39 = 1;
				}
				if (func_647(unk_0x9EB17624F44A8DA4(), iVar3, 2))
				{
					Global_1668000.f_40 = 1;
				}
				if (func_647(unk_0x9EB17624F44A8DA4(), iVar3, 1))
				{
					Global_1668000.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_837(int iParam0, int iParam1)//Position - 0x2524A
{
	var uVar0;
	
	if (iParam0 == func_81())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_642(Global_1595693[iParam0 /*680*/].f_266.f_160[iParam1 /*12*/]))
	{
		uVar0 = Global_1595693[iParam0 /*680*/].f_266.f_160[iParam1 /*12*/];
	}
	return uVar0;
}

int func_838(int iParam0)//Position - 0x252A3
{
	int iVar0;
	
	if (iParam0 == func_81())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_839(int iParam0, int iParam1, var uParam2)//Position - 0x252E5
{
	int iVar0;
	
	if (iParam0 != func_81())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_716(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_840(int iParam0)//Position - 0x2531F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_845(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_700(11));
		func_699(iVar1, &iVar0, 1);
		iVar2 = func_845(func_842(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_512(func_841(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_841(int iParam0, int iParam1)//Position - 0x2539B
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1626;
				
				case 1:
					return 1633;
				
				case 2:
					return 1640;
				
				case 3:
					return 1647;
				
				case 4:
					return 1654;
				
				case 5:
					return 1661;
				
				case 6:
					return 1668;
				
				case 7:
					return 1675;
				
				case 8:
					return 1682;
				
				case 9:
					return 1689;
				
				case 10:
					return 1696;
				
				case 11:
					return 1702;
				
				case 12:
					return 1708;
				
				case 13:
					return 1714;
				
				case 14:
					return 1792;
				
				case 15:
					return 1799;
				
				case 16:
					return 1806;
				
				case 17:
					return 1813;
				
				case 18:
					return 1820;
				
				case 19:
					return 1827;
				
				case 20:
					return 1834;
				
				case 21:
					return 1841;
				
				case 22:
					return 1848;
				
				case 23:
					return 1855;
				
				case 24:
					return 1861;
				
				case 25:
					return 1867;
				
				case 26:
					return 2162;
				
				case 27:
					return 2169;
				
				case 28:
					return 2176;
				
				case 29:
					return 2183;
				
				case 30:
					return 2190;
				
				case 31:
					return 2197;
				
				case 32:
					return 2204;
				
				case 33:
					return 2211;
				
				case 34:
					return 2218;
				
				case 35:
					return 2225;
				
				case 36:
					return 2232;
				
				case 37:
					return 2238;
				
				case 38:
					return 2244;
				
				case 39:
					return 2817;
				
				case 40:
					return 2824;
				
				case 41:
					return 2831;
				
				case 42:
					return 2838;
				
				case 43:
					return 2845;
				
				case 44:
					return 2852;
				
				case 45:
					return 2859;
				
				case 46:
					return 2866;
				
				case 47:
					return 2873;
				
				case 48:
					return 2880;
				
				case 49:
					return 2887;
				
				case 50:
					return 2893;
				
				case 51:
					return 2899;
				
				case 52:
					return 2941;
				
				case 53:
					return 2948;
				
				case 54:
					return 2955;
				
				case 55:
					return 2962;
				
				case 56:
					return 2969;
				
				case 57:
					return 2976;
				
				case 58:
					return 2983;
				
				case 59:
					return 2990;
				
				case 60:
					return 2997;
				
				case 61:
					return 3004;
				
				case 62:
					return 3011;
				
				case 63:
					return 3017;
				
				case 64:
					return 3023;
				
				case 65:
					return 3224;
				
				case 66:
					return 3232;
				
				case 67:
					return 3240;
				
				case 68:
					return 3248;
				
				case 69:
					return 3256;
				
				case 70:
					return 3264;
				
				case 71:
					return 3272;
				
				case 72:
					return 3280;
				
				case 73:
					return 3288;
				
				case 74:
					return 3296;
				
				case 75:
					return 3304;
				
				case 76:
					return 3312;
				
				case 77:
					return 3320;
				
				case 78:
					return 3328;
				
				case 79:
					return 3336;
				
				case 80:
					return 3344;
				
				case 81:
					return 3352;
				
				case 82:
					return 3360;
				
				case 83:
					return 3368;
				
				case 84:
					return 3376;
				
				case 85:
					return 3384;
				
				case 86:
					return 3391;
				
				case 87:
					return 3398;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4014;
				
				case 89:
					return 4022;
				
				case 90:
					return 4030;
				
				case 91:
					return 4038;
				
				case 92:
					return 4046;
				
				case 93:
					return 4054;
				
				case 94:
					return 4062;
				
				case 95:
					return 4070;
				
				case 96:
					return 4078;
				
				case 97:
					return 4086;
				
				case 98:
					return 4094;
				
				case 99:
					return 4102;
				
				case 100:
					return 4110;
				
				case 101:
					return 4118;
				
				case 102:
					return 4126;
				
				case 103:
					return 4134;
				
				case 104:
					return 4142;
				
				case 105:
					return 4150;
				
				case 106:
					return 4158;
				
				case 107:
					return 4166;
				
				case 108:
					return 4174;
				
				case 109:
					return 4182;
				
				case 110:
					return 4190;
				
				case 111:
					return 4198;
				
				case 112:
					return 4206;
				
				case 113:
					return 4214;
				
				case 114:
					return 4222;
				
				case 115:
					return 4230;
				
				case 116:
					return 4238;
				
				case 117:
					return 4246;
				
				case 118:
					return 4254;
				
				case 119:
					return 4262;
				
				case 120:
					return 4270;
				
				case 121:
					return 4278;
				
				case 122:
					return 4286;
				
				case 123:
					return 4294;
				
				case 124:
					return 4302;
				
				case 125:
					return 4310;
				
				case 126:
					return 4318;
				
				case 127:
					return 4326;
				
				case 128:
					return 4334;
				
				case 129:
					return 4342;
				
				case 130:
					return 4350;
				
				case 131:
					return 4358;
				
				case 132:
					return 4366;
				
				case 133:
					return 4374;
				
				case 134:
					return 4382;
				
				case 135:
					return 4390;
				
				case 136:
					return 4398;
				
				case 137:
					return 4406;
				
				case 138:
					return 4414;
				
				case 139:
					return 4422;
				
				case 140:
					return 4430;
				
				case 141:
					return 4438;
				
				case 142:
					return 4446;
				
				case 143:
					return 4454;
				
				case 144:
					return 4462;
				
				case 145:
					return 4470;
				
				case 146:
					return 4478;
				
				case 147:
					return 4486;
				
				case 148:
					return 4494;
				
				case 149:
					return 4502;
				
				case 150:
					return 4510;
				
				case 151:
					return 4518;
				
				case 152:
					return 4526;
				
				case 153:
					return 4534;
				
				case 154:
					return 4542;
				
				case 155:
					return 4550;
				
				case 156:
					return 4558;
				
				case 157:
					return 4566;
				
				case 158:
					return 5459;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5908;
				
				case 160:
					return 5915;
				
				case 161:
					return 5922;
				
				case 162:
					return 5929;
				
				case 163:
					return 5936;
				
				case 164:
					return 5943;
				
				case 165:
					return 5950;
				
				case 166:
					return 5957;
				
				case 167:
					return 5964;
				
				case 168:
					return 5971;
				
				case 169:
					return 5978;
				
				case 170:
					return 5985;
				
				case 171:
					return 5992;
				
				case 172:
					return 5999;
				
				case 173:
					return 6006;
				
				case 174:
					return 6013;
				
				case 175:
					return 6020;
				
				case 176:
					return 6027;
				
				case 177:
					return 6034;
				
				case 178:
					return 6041;
				
				case 179:
					return 6048;
				
				case 180:
					return 6055;
				
				case 181:
					return 6062;
				
				case 182:
					return 6069;
				
				case 183:
					return 6076;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6153;
				
				case 185:
					return 6160;
				
				case 186:
					return 6167;
				
				case 187:
					return 6174;
				
				case 188:
					return 6181;
				
				case 189:
					return 6188;
				
				case 190:
					return 6195;
				
				case 191:
					return 6202;
				
				case 192:
					return 6209;
				
				case 193:
					return 6216;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1627;
				
				case 1:
					return 1634;
				
				case 2:
					return 1641;
				
				case 3:
					return 1648;
				
				case 4:
					return 1655;
				
				case 5:
					return 1662;
				
				case 6:
					return 1669;
				
				case 7:
					return 1676;
				
				case 8:
					return 1683;
				
				case 9:
					return 1690;
				
				case 10:
					return 1697;
				
				case 11:
					return 1703;
				
				case 12:
					return 1709;
				
				case 13:
					return 1715;
				
				case 14:
					return 1793;
				
				case 15:
					return 1800;
				
				case 16:
					return 1807;
				
				case 17:
					return 1814;
				
				case 18:
					return 1821;
				
				case 19:
					return 1828;
				
				case 20:
					return 1835;
				
				case 21:
					return 1842;
				
				case 22:
					return 1849;
				
				case 23:
					return 1856;
				
				case 24:
					return 1862;
				
				case 25:
					return 1868;
				
				case 26:
					return 2163;
				
				case 27:
					return 2170;
				
				case 28:
					return 2177;
				
				case 29:
					return 2184;
				
				case 30:
					return 2191;
				
				case 31:
					return 2198;
				
				case 32:
					return 2205;
				
				case 33:
					return 2212;
				
				case 34:
					return 2219;
				
				case 35:
					return 2226;
				
				case 36:
					return 2233;
				
				case 37:
					return 2239;
				
				case 38:
					return 2245;
				
				case 39:
					return 2818;
				
				case 40:
					return 2825;
				
				case 41:
					return 2832;
				
				case 42:
					return 2839;
				
				case 43:
					return 2846;
				
				case 44:
					return 2853;
				
				case 45:
					return 2860;
				
				case 46:
					return 2867;
				
				case 47:
					return 2874;
				
				case 48:
					return 2881;
				
				case 49:
					return 2888;
				
				case 50:
					return 2894;
				
				case 51:
					return 2900;
				
				case 52:
					return 2942;
				
				case 53:
					return 2949;
				
				case 54:
					return 2956;
				
				case 55:
					return 2963;
				
				case 56:
					return 2970;
				
				case 57:
					return 2977;
				
				case 58:
					return 2984;
				
				case 59:
					return 2991;
				
				case 60:
					return 2998;
				
				case 61:
					return 3005;
				
				case 62:
					return 3012;
				
				case 63:
					return 3018;
				
				case 64:
					return 3024;
				
				case 65:
					return 3225;
				
				case 66:
					return 3233;
				
				case 67:
					return 3241;
				
				case 68:
					return 3249;
				
				case 69:
					return 3257;
				
				case 70:
					return 3265;
				
				case 71:
					return 3273;
				
				case 72:
					return 3281;
				
				case 73:
					return 3289;
				
				case 74:
					return 3297;
				
				case 75:
					return 3305;
				
				case 76:
					return 3313;
				
				case 77:
					return 3321;
				
				case 78:
					return 3329;
				
				case 79:
					return 3337;
				
				case 80:
					return 3345;
				
				case 81:
					return 3353;
				
				case 82:
					return 3361;
				
				case 83:
					return 3369;
				
				case 84:
					return 3377;
				
				case 85:
					return 3385;
				
				case 86:
					return 3392;
				
				case 87:
					return 3399;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4015;
				
				case 89:
					return 4023;
				
				case 90:
					return 4031;
				
				case 91:
					return 4039;
				
				case 92:
					return 4047;
				
				case 93:
					return 4055;
				
				case 94:
					return 4063;
				
				case 95:
					return 4071;
				
				case 96:
					return 4079;
				
				case 97:
					return 4087;
				
				case 98:
					return 4095;
				
				case 99:
					return 4103;
				
				case 100:
					return 4111;
				
				case 101:
					return 4119;
				
				case 102:
					return 4127;
				
				case 103:
					return 4135;
				
				case 104:
					return 4143;
				
				case 105:
					return 4151;
				
				case 106:
					return 4159;
				
				case 107:
					return 4167;
				
				case 108:
					return 4175;
				
				case 109:
					return 4183;
				
				case 110:
					return 4191;
				
				case 111:
					return 4199;
				
				case 112:
					return 4207;
				
				case 113:
					return 4215;
				
				case 114:
					return 4223;
				
				case 115:
					return 4231;
				
				case 116:
					return 4239;
				
				case 117:
					return 4247;
				
				case 118:
					return 4255;
				
				case 119:
					return 4263;
				
				case 120:
					return 4271;
				
				case 121:
					return 4279;
				
				case 122:
					return 4287;
				
				case 123:
					return 4295;
				
				case 124:
					return 4303;
				
				case 125:
					return 4311;
				
				case 126:
					return 4319;
				
				case 127:
					return 4327;
				
				case 128:
					return 4335;
				
				case 129:
					return 4343;
				
				case 130:
					return 4351;
				
				case 131:
					return 4359;
				
				case 132:
					return 4367;
				
				case 133:
					return 4375;
				
				case 134:
					return 4383;
				
				case 135:
					return 4391;
				
				case 136:
					return 4399;
				
				case 137:
					return 4407;
				
				case 138:
					return 4415;
				
				case 139:
					return 4423;
				
				case 140:
					return 4431;
				
				case 141:
					return 4439;
				
				case 142:
					return 4447;
				
				case 143:
					return 4455;
				
				case 144:
					return 4463;
				
				case 145:
					return 4471;
				
				case 146:
					return 4479;
				
				case 147:
					return 4487;
				
				case 148:
					return 4495;
				
				case 149:
					return 4503;
				
				case 150:
					return 4511;
				
				case 151:
					return 4519;
				
				case 152:
					return 4527;
				
				case 153:
					return 4535;
				
				case 154:
					return 4543;
				
				case 155:
					return 4551;
				
				case 156:
					return 4559;
				
				case 157:
					return 4567;
				
				case 158:
					return 5460;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5909;
				
				case 160:
					return 5916;
				
				case 161:
					return 5923;
				
				case 162:
					return 5930;
				
				case 163:
					return 5937;
				
				case 164:
					return 5944;
				
				case 165:
					return 5951;
				
				case 166:
					return 5958;
				
				case 167:
					return 5965;
				
				case 168:
					return 5972;
				
				case 169:
					return 5979;
				
				case 170:
					return 5986;
				
				case 171:
					return 5993;
				
				case 172:
					return 6000;
				
				case 173:
					return 6007;
				
				case 174:
					return 6014;
				
				case 175:
					return 6021;
				
				case 176:
					return 6028;
				
				case 177:
					return 6035;
				
				case 178:
					return 6042;
				
				case 179:
					return 6049;
				
				case 180:
					return 6056;
				
				case 181:
					return 6063;
				
				case 182:
					return 6070;
				
				case 183:
					return 6077;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6154;
				
				case 185:
					return 6161;
				
				case 186:
					return 6168;
				
				case 187:
					return 6175;
				
				case 188:
					return 6182;
				
				case 189:
					return 6189;
				
				case 190:
					return 6196;
				
				case 191:
					return 6203;
				
				case 192:
					return 6210;
				
				case 193:
					return 6217;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1628;
				
				case 1:
					return 1635;
				
				case 2:
					return 1642;
				
				case 3:
					return 1649;
				
				case 4:
					return 1656;
				
				case 5:
					return 1663;
				
				case 6:
					return 1670;
				
				case 7:
					return 1677;
				
				case 8:
					return 1684;
				
				case 9:
					return 1691;
				
				case 10:
					return 1698;
				
				case 11:
					return 1704;
				
				case 12:
					return 1710;
				
				case 13:
					return 1716;
				
				case 14:
					return 1794;
				
				case 15:
					return 1801;
				
				case 16:
					return 1808;
				
				case 17:
					return 1815;
				
				case 18:
					return 1822;
				
				case 19:
					return 1829;
				
				case 20:
					return 1836;
				
				case 21:
					return 1843;
				
				case 22:
					return 1850;
				
				case 23:
					return 1857;
				
				case 24:
					return 1863;
				
				case 25:
					return 1869;
				
				case 26:
					return 2164;
				
				case 27:
					return 2171;
				
				case 28:
					return 2178;
				
				case 29:
					return 2185;
				
				case 30:
					return 2192;
				
				case 31:
					return 2199;
				
				case 32:
					return 2206;
				
				case 33:
					return 2213;
				
				case 34:
					return 2220;
				
				case 35:
					return 2227;
				
				case 36:
					return 2234;
				
				case 37:
					return 2240;
				
				case 38:
					return 2246;
				
				case 39:
					return 2819;
				
				case 40:
					return 2826;
				
				case 41:
					return 2833;
				
				case 42:
					return 2840;
				
				case 43:
					return 2847;
				
				case 44:
					return 2854;
				
				case 45:
					return 2861;
				
				case 46:
					return 2868;
				
				case 47:
					return 2875;
				
				case 48:
					return 2882;
				
				case 49:
					return 2889;
				
				case 50:
					return 2895;
				
				case 51:
					return 2901;
				
				case 52:
					return 2943;
				
				case 53:
					return 2950;
				
				case 54:
					return 2957;
				
				case 55:
					return 2964;
				
				case 56:
					return 2971;
				
				case 57:
					return 2978;
				
				case 58:
					return 2985;
				
				case 59:
					return 2992;
				
				case 60:
					return 2999;
				
				case 61:
					return 3006;
				
				case 62:
					return 3013;
				
				case 63:
					return 3019;
				
				case 64:
					return 3025;
				
				case 65:
					return 3226;
				
				case 66:
					return 3234;
				
				case 67:
					return 3242;
				
				case 68:
					return 3250;
				
				case 69:
					return 3258;
				
				case 70:
					return 3266;
				
				case 71:
					return 3274;
				
				case 72:
					return 3282;
				
				case 73:
					return 3290;
				
				case 74:
					return 3298;
				
				case 75:
					return 3306;
				
				case 76:
					return 3314;
				
				case 77:
					return 3322;
				
				case 78:
					return 3330;
				
				case 79:
					return 3338;
				
				case 80:
					return 3346;
				
				case 81:
					return 3354;
				
				case 82:
					return 3362;
				
				case 83:
					return 3370;
				
				case 84:
					return 3378;
				
				case 85:
					return 3386;
				
				case 86:
					return 3393;
				
				case 87:
					return 3400;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4016;
				
				case 89:
					return 4024;
				
				case 90:
					return 4032;
				
				case 91:
					return 4040;
				
				case 92:
					return 4048;
				
				case 93:
					return 4056;
				
				case 94:
					return 4064;
				
				case 95:
					return 4072;
				
				case 96:
					return 4080;
				
				case 97:
					return 4088;
				
				case 98:
					return 4096;
				
				case 99:
					return 4104;
				
				case 100:
					return 4112;
				
				case 101:
					return 4120;
				
				case 102:
					return 4128;
				
				case 103:
					return 4136;
				
				case 104:
					return 4144;
				
				case 105:
					return 4152;
				
				case 106:
					return 4160;
				
				case 107:
					return 4168;
				
				case 108:
					return 4176;
				
				case 109:
					return 4184;
				
				case 110:
					return 4192;
				
				case 111:
					return 4200;
				
				case 112:
					return 4208;
				
				case 113:
					return 4216;
				
				case 114:
					return 4224;
				
				case 115:
					return 4232;
				
				case 116:
					return 4240;
				
				case 117:
					return 4248;
				
				case 118:
					return 4256;
				
				case 119:
					return 4264;
				
				case 120:
					return 4272;
				
				case 121:
					return 4280;
				
				case 122:
					return 4288;
				
				case 123:
					return 4296;
				
				case 124:
					return 4304;
				
				case 125:
					return 4312;
				
				case 126:
					return 4320;
				
				case 127:
					return 4328;
				
				case 128:
					return 4336;
				
				case 129:
					return 4344;
				
				case 130:
					return 4352;
				
				case 131:
					return 4360;
				
				case 132:
					return 4368;
				
				case 133:
					return 4376;
				
				case 134:
					return 4384;
				
				case 135:
					return 4392;
				
				case 136:
					return 4400;
				
				case 137:
					return 4408;
				
				case 138:
					return 4416;
				
				case 139:
					return 4424;
				
				case 140:
					return 4432;
				
				case 141:
					return 4440;
				
				case 142:
					return 4448;
				
				case 143:
					return 4456;
				
				case 144:
					return 4464;
				
				case 145:
					return 4472;
				
				case 146:
					return 4480;
				
				case 147:
					return 4488;
				
				case 148:
					return 4496;
				
				case 149:
					return 4504;
				
				case 150:
					return 4512;
				
				case 151:
					return 4520;
				
				case 152:
					return 4528;
				
				case 153:
					return 4536;
				
				case 154:
					return 4544;
				
				case 155:
					return 4552;
				
				case 156:
					return 4560;
				
				case 157:
					return 4568;
				
				case 158:
					return 5461;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5910;
				
				case 160:
					return 5917;
				
				case 161:
					return 5924;
				
				case 162:
					return 5931;
				
				case 163:
					return 5938;
				
				case 164:
					return 5945;
				
				case 165:
					return 5952;
				
				case 166:
					return 5959;
				
				case 167:
					return 5966;
				
				case 168:
					return 5973;
				
				case 169:
					return 5980;
				
				case 170:
					return 5987;
				
				case 171:
					return 5994;
				
				case 172:
					return 6001;
				
				case 173:
					return 6008;
				
				case 174:
					return 6015;
				
				case 175:
					return 6022;
				
				case 176:
					return 6029;
				
				case 177:
					return 6036;
				
				case 178:
					return 6043;
				
				case 179:
					return 6050;
				
				case 180:
					return 6057;
				
				case 181:
					return 6064;
				
				case 182:
					return 6071;
				
				case 183:
					return 6078;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6155;
				
				case 185:
					return 6162;
				
				case 186:
					return 6169;
				
				case 187:
					return 6176;
				
				case 188:
					return 6183;
				
				case 189:
					return 6190;
				
				case 190:
					return 6197;
				
				case 191:
					return 6204;
				
				case 192:
					return 6211;
				
				case 193:
					return 6218;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2820;
				
				case 40:
					return 2827;
				
				case 41:
					return 2834;
				
				case 42:
					return 2841;
				
				case 43:
					return 2848;
				
				case 44:
					return 2855;
				
				case 45:
					return 2862;
				
				case 46:
					return 2869;
				
				case 47:
					return 2876;
				
				case 48:
					return 2883;
				
				case 49:
					return 2890;
				
				case 50:
					return 2896;
				
				case 51:
					return 2902;
				
				case 52:
					return 2944;
				
				case 53:
					return 2951;
				
				case 54:
					return 2958;
				
				case 55:
					return 2965;
				
				case 56:
					return 2972;
				
				case 57:
					return 2979;
				
				case 58:
					return 2986;
				
				case 59:
					return 2993;
				
				case 60:
					return 3000;
				
				case 61:
					return 3007;
				
				case 62:
					return 3014;
				
				case 63:
					return 3020;
				
				case 64:
					return 3026;
				
				case 65:
					return 3227;
				
				case 66:
					return 3235;
				
				case 67:
					return 3243;
				
				case 68:
					return 3251;
				
				case 69:
					return 3259;
				
				case 70:
					return 3267;
				
				case 71:
					return 3275;
				
				case 72:
					return 3283;
				
				case 73:
					return 3291;
				
				case 74:
					return 3299;
				
				case 75:
					return 3307;
				
				case 76:
					return 3315;
				
				case 77:
					return 3323;
				
				case 78:
					return 3331;
				
				case 79:
					return 3339;
				
				case 80:
					return 3347;
				
				case 81:
					return 3355;
				
				case 82:
					return 3363;
				
				case 83:
					return 3371;
				
				case 84:
					return 3379;
				
				case 85:
					return 3387;
				
				case 86:
					return 3394;
				
				case 87:
					return 3401;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4017;
				
				case 89:
					return 4025;
				
				case 90:
					return 4033;
				
				case 91:
					return 4041;
				
				case 92:
					return 4049;
				
				case 93:
					return 4057;
				
				case 94:
					return 4065;
				
				case 95:
					return 4073;
				
				case 96:
					return 4081;
				
				case 97:
					return 4089;
				
				case 98:
					return 4097;
				
				case 99:
					return 4105;
				
				case 100:
					return 4113;
				
				case 101:
					return 4121;
				
				case 102:
					return 4129;
				
				case 103:
					return 4137;
				
				case 104:
					return 4145;
				
				case 105:
					return 4153;
				
				case 106:
					return 4161;
				
				case 107:
					return 4169;
				
				case 108:
					return 4177;
				
				case 109:
					return 4185;
				
				case 110:
					return 4193;
				
				case 111:
					return 4201;
				
				case 112:
					return 4209;
				
				case 113:
					return 4217;
				
				case 114:
					return 4225;
				
				case 115:
					return 4233;
				
				case 116:
					return 4241;
				
				case 117:
					return 4249;
				
				case 118:
					return 4257;
				
				case 119:
					return 4265;
				
				case 120:
					return 4273;
				
				case 121:
					return 4281;
				
				case 122:
					return 4289;
				
				case 123:
					return 4297;
				
				case 124:
					return 4305;
				
				case 125:
					return 4313;
				
				case 126:
					return 4321;
				
				case 127:
					return 4329;
				
				case 128:
					return 4337;
				
				case 129:
					return 4345;
				
				case 130:
					return 4353;
				
				case 131:
					return 4361;
				
				case 132:
					return 4369;
				
				case 133:
					return 4377;
				
				case 134:
					return 4385;
				
				case 135:
					return 4393;
				
				case 136:
					return 4401;
				
				case 137:
					return 4409;
				
				case 138:
					return 4417;
				
				case 139:
					return 4425;
				
				case 140:
					return 4433;
				
				case 141:
					return 4441;
				
				case 142:
					return 4449;
				
				case 143:
					return 4457;
				
				case 144:
					return 4465;
				
				case 145:
					return 4473;
				
				case 146:
					return 4481;
				
				case 147:
					return 4489;
				
				case 148:
					return 4497;
				
				case 149:
					return 4505;
				
				case 150:
					return 4513;
				
				case 151:
					return 4521;
				
				case 152:
					return 4529;
				
				case 153:
					return 4537;
				
				case 154:
					return 4545;
				
				case 155:
					return 4553;
				
				case 156:
					return 4561;
				
				case 157:
					return 4569;
				
				case 158:
					return 5462;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5911;
				
				case 160:
					return 5918;
				
				case 161:
					return 5925;
				
				case 162:
					return 5932;
				
				case 163:
					return 5939;
				
				case 164:
					return 5946;
				
				case 165:
					return 5953;
				
				case 166:
					return 5960;
				
				case 167:
					return 5967;
				
				case 168:
					return 5974;
				
				case 169:
					return 5981;
				
				case 170:
					return 5988;
				
				case 171:
					return 5995;
				
				case 172:
					return 6002;
				
				case 173:
					return 6009;
				
				case 174:
					return 6016;
				
				case 175:
					return 6023;
				
				case 176:
					return 6030;
				
				case 177:
					return 6037;
				
				case 178:
					return 6044;
				
				case 179:
					return 6051;
				
				case 180:
					return 6058;
				
				case 181:
					return 6065;
				
				case 182:
					return 6072;
				
				case 183:
					return 6079;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6156;
				
				case 185:
					return 6163;
				
				case 186:
					return 6170;
				
				case 187:
					return 6177;
				
				case 188:
					return 6184;
				
				case 189:
					return 6191;
				
				case 190:
					return 6198;
				
				case 191:
					return 6205;
				
				case 192:
					return 6212;
				
				case 193:
					return 6219;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2821;
				
				case 40:
					return 2828;
				
				case 41:
					return 2835;
				
				case 42:
					return 2842;
				
				case 43:
					return 2849;
				
				case 44:
					return 2856;
				
				case 45:
					return 2863;
				
				case 46:
					return 2870;
				
				case 47:
					return 2877;
				
				case 48:
					return 2884;
				
				case 49:
					return 2891;
				
				case 50:
					return 2897;
				
				case 51:
					return 2903;
				
				case 52:
					return 2945;
				
				case 53:
					return 2952;
				
				case 54:
					return 2959;
				
				case 55:
					return 2966;
				
				case 56:
					return 2973;
				
				case 57:
					return 2980;
				
				case 58:
					return 2987;
				
				case 59:
					return 2994;
				
				case 60:
					return 3001;
				
				case 61:
					return 3008;
				
				case 62:
					return 3015;
				
				case 63:
					return 3021;
				
				case 64:
					return 3027;
				
				case 65:
					return 3228;
				
				case 66:
					return 3236;
				
				case 67:
					return 3244;
				
				case 68:
					return 3252;
				
				case 69:
					return 3260;
				
				case 70:
					return 3268;
				
				case 71:
					return 3276;
				
				case 72:
					return 3284;
				
				case 73:
					return 3292;
				
				case 74:
					return 3300;
				
				case 75:
					return 3308;
				
				case 76:
					return 3316;
				
				case 77:
					return 3324;
				
				case 78:
					return 3332;
				
				case 79:
					return 3340;
				
				case 80:
					return 3348;
				
				case 81:
					return 3356;
				
				case 82:
					return 3364;
				
				case 83:
					return 3372;
				
				case 84:
					return 3380;
				
				case 85:
					return 3388;
				
				case 86:
					return 3395;
				
				case 87:
					return 3402;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4018;
				
				case 89:
					return 4026;
				
				case 90:
					return 4034;
				
				case 91:
					return 4042;
				
				case 92:
					return 4050;
				
				case 93:
					return 4058;
				
				case 94:
					return 4066;
				
				case 95:
					return 4074;
				
				case 96:
					return 4082;
				
				case 97:
					return 4090;
				
				case 98:
					return 4098;
				
				case 99:
					return 4106;
				
				case 100:
					return 4114;
				
				case 101:
					return 4122;
				
				case 102:
					return 4130;
				
				case 103:
					return 4138;
				
				case 104:
					return 4146;
				
				case 105:
					return 4154;
				
				case 106:
					return 4162;
				
				case 107:
					return 4170;
				
				case 108:
					return 4178;
				
				case 109:
					return 4186;
				
				case 110:
					return 4194;
				
				case 111:
					return 4202;
				
				case 112:
					return 4210;
				
				case 113:
					return 4218;
				
				case 114:
					return 4226;
				
				case 115:
					return 4234;
				
				case 116:
					return 4242;
				
				case 117:
					return 4250;
				
				case 118:
					return 4258;
				
				case 119:
					return 4266;
				
				case 120:
					return 4274;
				
				case 121:
					return 4282;
				
				case 122:
					return 4290;
				
				case 123:
					return 4298;
				
				case 124:
					return 4306;
				
				case 125:
					return 4314;
				
				case 126:
					return 4322;
				
				case 127:
					return 4330;
				
				case 128:
					return 4338;
				
				case 129:
					return 4346;
				
				case 130:
					return 4354;
				
				case 131:
					return 4362;
				
				case 132:
					return 4370;
				
				case 133:
					return 4378;
				
				case 134:
					return 4386;
				
				case 135:
					return 4394;
				
				case 136:
					return 4402;
				
				case 137:
					return 4410;
				
				case 138:
					return 4418;
				
				case 139:
					return 4426;
				
				case 140:
					return 4434;
				
				case 141:
					return 4442;
				
				case 142:
					return 4450;
				
				case 143:
					return 4458;
				
				case 144:
					return 4466;
				
				case 145:
					return 4474;
				
				case 146:
					return 4482;
				
				case 147:
					return 4490;
				
				case 148:
					return 4498;
				
				case 149:
					return 4506;
				
				case 150:
					return 4514;
				
				case 151:
					return 4522;
				
				case 152:
					return 4530;
				
				case 153:
					return 4538;
				
				case 154:
					return 4546;
				
				case 155:
					return 4554;
				
				case 156:
					return 4562;
				
				case 157:
					return 4570;
				
				case 158:
					return 5463;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5912;
				
				case 160:
					return 5919;
				
				case 161:
					return 5926;
				
				case 162:
					return 5933;
				
				case 163:
					return 5940;
				
				case 164:
					return 5947;
				
				case 165:
					return 5954;
				
				case 166:
					return 5961;
				
				case 167:
					return 5968;
				
				case 168:
					return 5975;
				
				case 169:
					return 5982;
				
				case 170:
					return 5989;
				
				case 171:
					return 5996;
				
				case 172:
					return 6003;
				
				case 173:
					return 6010;
				
				case 174:
					return 6017;
				
				case 175:
					return 6024;
				
				case 176:
					return 6031;
				
				case 177:
					return 6038;
				
				case 178:
					return 6045;
				
				case 179:
					return 6052;
				
				case 180:
					return 6059;
				
				case 181:
					return 6066;
				
				case 182:
					return 6073;
				
				case 183:
					return 6080;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6157;
				
				case 185:
					return 6164;
				
				case 186:
					return 6171;
				
				case 187:
					return 6178;
				
				case 188:
					return 6185;
				
				case 189:
					return 6192;
				
				case 190:
					return 6199;
				
				case 191:
					return 6206;
				
				case 192:
					return 6213;
				
				case 193:
					return 6220;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 39:
					return 2823;
				
				case 40:
					return 2830;
				
				case 41:
					return 2837;
				
				case 42:
					return 2844;
				
				case 43:
					return 2851;
				
				case 44:
					return 2858;
				
				case 45:
					return 2865;
				
				case 46:
					return 2872;
				
				case 47:
					return 2879;
				
				case 48:
					return 2886;
				
				case 52:
					return 2947;
				
				case 53:
					return 2954;
				
				case 54:
					return 2961;
				
				case 55:
					return 2968;
				
				case 56:
					return 2975;
				
				case 57:
					return 2982;
				
				case 58:
					return 2989;
				
				case 59:
					return 2996;
				
				case 60:
					return 3003;
				
				case 61:
					return 3010;
				
				case 65:
					return 3231;
				
				case 66:
					return 3239;
				
				case 67:
					return 3247;
				
				case 68:
					return 3255;
				
				case 69:
					return 3263;
				
				case 70:
					return 3271;
				
				case 71:
					return 3279;
				
				case 72:
					return 3287;
				
				case 73:
					return 3295;
				
				case 74:
					return 3303;
				
				case 75:
					return 3311;
				
				case 76:
					return 3319;
				
				case 77:
					return 3327;
				
				case 78:
					return 3335;
				
				case 79:
					return 3343;
				
				case 80:
					return 3351;
				
				case 81:
					return 3359;
				
				case 82:
					return 3367;
				
				case 83:
					return 3375;
				
				case 84:
					return 3383;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4021;
				
				case 89:
					return 4029;
				
				case 90:
					return 4037;
				
				case 91:
					return 4045;
				
				case 92:
					return 4053;
				
				case 93:
					return 4061;
				
				case 94:
					return 4069;
				
				case 95:
					return 4077;
				
				case 96:
					return 4085;
				
				case 97:
					return 4093;
				
				case 98:
					return 4101;
				
				case 99:
					return 4109;
				
				case 100:
					return 4117;
				
				case 101:
					return 4125;
				
				case 102:
					return 4133;
				
				case 103:
					return 4141;
				
				case 104:
					return 4149;
				
				case 105:
					return 4157;
				
				case 106:
					return 4165;
				
				case 107:
					return 4173;
				
				case 108:
					return 4181;
				
				case 109:
					return 4189;
				
				case 110:
					return 4197;
				
				case 111:
					return 4205;
				
				case 112:
					return 4213;
				
				case 113:
					return 4221;
				
				case 114:
					return 4229;
				
				case 115:
					return 4237;
				
				case 116:
					return 4245;
				
				case 117:
					return 4253;
				
				case 118:
					return 4261;
				
				case 119:
					return 4269;
				
				case 120:
					return 4277;
				
				case 121:
					return 4285;
				
				case 122:
					return 4293;
				
				case 123:
					return 4301;
				
				case 124:
					return 4309;
				
				case 125:
					return 4317;
				
				case 126:
					return 4325;
				
				case 127:
					return 4333;
				
				case 128:
					return 4341;
				
				case 129:
					return 4349;
				
				case 130:
					return 4357;
				
				case 131:
					return 4365;
				
				case 132:
					return 4373;
				
				case 133:
					return 4381;
				
				case 134:
					return 4389;
				
				case 135:
					return 4397;
				
				case 136:
					return 4405;
				
				case 137:
					return 4413;
				
				case 138:
					return 4421;
				
				case 139:
					return 4429;
				
				case 140:
					return 4437;
				
				case 141:
					return 4445;
				
				case 142:
					return 4453;
				
				case 143:
					return 4461;
				
				case 144:
					return 4469;
				
				case 145:
					return 4477;
				
				case 146:
					return 4485;
				
				case 147:
					return 4493;
				
				case 148:
					return 4501;
				
				case 149:
					return 4509;
				
				case 150:
					return 4517;
				
				case 151:
					return 4525;
				
				case 152:
					return 4533;
				
				case 153:
					return 4541;
				
				case 154:
					return 4549;
				
				case 155:
					return 4557;
				
				case 156:
					return 4565;
				
				case 157:
					return 4573;
				
				case 158:
					return 5466;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5914;
				
				case 160:
					return 5921;
				
				case 161:
					return 5928;
				
				case 162:
					return 5935;
				
				case 163:
					return 5942;
				
				case 164:
					return 5949;
				
				case 165:
					return 5956;
				
				case 166:
					return 5963;
				
				case 167:
					return 5970;
				
				case 168:
					return 5977;
				
				case 169:
					return 5984;
				
				case 170:
					return 5991;
				
				case 171:
					return 5998;
				
				case 172:
					return 6005;
				
				case 173:
					return 6012;
				
				case 174:
					return 6019;
				
				case 175:
					return 6026;
				
				case 176:
					return 6033;
				
				case 177:
					return 6040;
				
				case 178:
					return 6047;
				
				case 179:
					return 6054;
				
				case 180:
					return 6061;
				
				case 181:
					return 6068;
				
				case 182:
					return 6075;
				
				case 183:
					return 6082;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6159;
				
				case 185:
					return 6166;
				
				case 186:
					return 6173;
				
				case 187:
					return 6180;
				
				case 188:
					return 6187;
				
				case 189:
					return 6194;
				
				case 190:
					return 6201;
				
				case 191:
					return 6208;
				
				case 192:
					return 6215;
				
				case 193:
					return 6222;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2822;
				
				case 40:
					return 2829;
				
				case 41:
					return 2836;
				
				case 42:
					return 2843;
				
				case 43:
					return 2850;
				
				case 44:
					return 2857;
				
				case 45:
					return 2864;
				
				case 46:
					return 2871;
				
				case 47:
					return 2878;
				
				case 48:
					return 2885;
				
				case 49:
					return 2892;
				
				case 50:
					return 2898;
				
				case 51:
					return 2904;
				
				case 52:
					return 2946;
				
				case 53:
					return 2953;
				
				case 54:
					return 2960;
				
				case 55:
					return 2967;
				
				case 56:
					return 2974;
				
				case 57:
					return 2981;
				
				case 58:
					return 2988;
				
				case 59:
					return 2995;
				
				case 60:
					return 3002;
				
				case 61:
					return 3009;
				
				case 62:
					return 3016;
				
				case 63:
					return 3022;
				
				case 64:
					return 3028;
				
				case 65:
					return 3229;
				
				case 66:
					return 3237;
				
				case 67:
					return 3245;
				
				case 68:
					return 3253;
				
				case 69:
					return 3261;
				
				case 70:
					return 3269;
				
				case 71:
					return 3277;
				
				case 72:
					return 3285;
				
				case 73:
					return 3293;
				
				case 74:
					return 3301;
				
				case 75:
					return 3309;
				
				case 76:
					return 3317;
				
				case 77:
					return 3326;
				
				case 78:
					return 3334;
				
				case 79:
					return 3341;
				
				case 80:
					return 3349;
				
				case 81:
					return 3357;
				
				case 82:
					return 3365;
				
				case 83:
					return 3373;
				
				case 84:
					return 3381;
				
				case 85:
					return 3389;
				
				case 86:
					return 3396;
				
				case 87:
					return 3403;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4019;
				
				case 89:
					return 4027;
				
				case 90:
					return 4035;
				
				case 91:
					return 4043;
				
				case 92:
					return 4051;
				
				case 93:
					return 4059;
				
				case 94:
					return 4067;
				
				case 95:
					return 4075;
				
				case 96:
					return 4083;
				
				case 97:
					return 4091;
				
				case 98:
					return 4099;
				
				case 99:
					return 4107;
				
				case 100:
					return 4116;
				
				case 101:
					return 4124;
				
				case 102:
					return 4131;
				
				case 103:
					return 4139;
				
				case 104:
					return 4147;
				
				case 105:
					return 4155;
				
				case 106:
					return 4163;
				
				case 107:
					return 4171;
				
				case 108:
					return 4179;
				
				case 109:
					return 4187;
				
				case 110:
					return 4195;
				
				case 111:
					return 4203;
				
				case 112:
					return 4211;
				
				case 113:
					return 4219;
				
				case 114:
					return 4227;
				
				case 115:
					return 4235;
				
				case 116:
					return 4243;
				
				case 117:
					return 4251;
				
				case 118:
					return 4259;
				
				case 119:
					return 4267;
				
				case 120:
					return 4276;
				
				case 121:
					return 4284;
				
				case 122:
					return 4291;
				
				case 123:
					return 4299;
				
				case 124:
					return 4307;
				
				case 125:
					return 4315;
				
				case 126:
					return 4323;
				
				case 127:
					return 4331;
				
				case 128:
					return 4339;
				
				case 129:
					return 4347;
				
				case 130:
					return 4355;
				
				case 131:
					return 4363;
				
				case 132:
					return 4371;
				
				case 133:
					return 4379;
				
				case 134:
					return 4387;
				
				case 135:
					return 4395;
				
				case 136:
					return 4403;
				
				case 137:
					return 4411;
				
				case 138:
					return 4419;
				
				case 139:
					return 4427;
				
				case 140:
					return 4436;
				
				case 141:
					return 4444;
				
				case 142:
					return 4451;
				
				case 143:
					return 4459;
				
				case 144:
					return 4467;
				
				case 145:
					return 4475;
				
				case 146:
					return 4483;
				
				case 147:
					return 4491;
				
				case 148:
					return 4499;
				
				case 149:
					return 4507;
				
				case 150:
					return 4515;
				
				case 151:
					return 4523;
				
				case 152:
					return 4531;
				
				case 153:
					return 4539;
				
				case 154:
					return 4547;
				
				case 155:
					return 4555;
				
				case 156:
					return 4563;
				
				case 157:
					return 4571;
				
				case 158:
					return 5464;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5913;
				
				case 160:
					return 5920;
				
				case 161:
					return 5927;
				
				case 162:
					return 5934;
				
				case 163:
					return 5941;
				
				case 164:
					return 5948;
				
				case 165:
					return 5955;
				
				case 166:
					return 5962;
				
				case 167:
					return 5969;
				
				case 168:
					return 5976;
				
				case 169:
					return 5983;
				
				case 170:
					return 5990;
				
				case 171:
					return 5997;
				
				case 172:
					return 6004;
				
				case 173:
					return 6011;
				
				case 174:
					return 6018;
				
				case 175:
					return 6025;
				
				case 176:
					return 6032;
				
				case 177:
					return 6039;
				
				case 178:
					return 6046;
				
				case 179:
					return 6053;
				
				case 180:
					return 6060;
				
				case 181:
					return 6067;
				
				case 182:
					return 6074;
				
				case 183:
					return 6081;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6158;
				
				case 185:
					return 6165;
				
				case 186:
					return 6172;
				
				case 187:
					return 6179;
				
				case 188:
					return 6186;
				
				case 189:
					return 6193;
				
				case 190:
					return 6200;
				
				case 191:
					return 6207;
				
				case 192:
					return 6214;
				
				case 193:
					return 6221;
				
				default:
			}
			break;
			break;
	}
	return 1626;
}

int func_842(int iParam0)//Position - 0x29384
{
	int iVar0;
	
	if (iParam0 < 194)
	{
		iVar0 = 0;
		while (iVar0 < 14)
		{
			if (iParam0 >= func_700(iVar0) && iParam0 < func_843(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_843(int iParam0)//Position - 0x293C6
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_703(iParam0);
		return func_844(iVar0);
	}
	return (func_701(iParam0, -1) * iParam0 + 1);
}

int func_844(int iParam0)//Position - 0x29477
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		default:
	}
	return -1;
}

int func_845(int iParam0, int iParam1)//Position - 0x29492
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_146();
	}
	if (iParam0 == 7 && !Global_262145.f_16308)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_703(iParam0);
		if (iVar1 == 0 && func_512(5376, iParam1, 0) != 0)
		{
			return 1234;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1368219[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2549282[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 14)
		{
			return 0;
		}
		return Global_2549199[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

int func_846(int iParam0)//Position - 0x2953C
{
	int iVar0;
	
	iVar0 = iParam0;
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

int func_847(int iParam0)//Position - 0x295C5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_699(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_512(func_841(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_848(int iParam0)//Position - 0x2960B
{
	switch (iParam0)
	{
		case -1881846085:
			return 0;
			break;
	}
	return -1;
}

bool func_849()//Position - 0x29628
{
	return func_512(6146, -1, 0) != 0;
}

bool func_850()//Position - 0x2963B
{
	return func_512(5363, -1, 0) != 0;
}

bool func_851()//Position - 0x2964E
{
	return func_512(3811, -1, 0) != 0;
}

bool func_852()//Position - 0x29661
{
	return func_512(3212, -1, 0) != 0;
}

bool func_853()//Position - 0x29674
{
	return func_512(5362, -1, 0) != 0;
}

int func_854()//Position - 0x29687
{
	int iVar0;
	
	iVar0 = func_495();
	if (iVar0 != func_81())
	{
		return Global_1627537[iVar0 /*532*/].f_11.f_93;
	}
	return 0;
}

int func_855(int iParam0)//Position - 0x296AF
{
	if (func_134(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_176;
	}
	return -1;
}

int func_856(int iParam0)//Position - 0x296D2
{
	if (func_221(iParam0) == 225 || func_221(iParam0) == 226)
	{
		return func_855(iParam0);
	}
	return -1;
}

var func_857()//Position - 0x296FF
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_649(unk_0x9EB17624F44A8DA4(), iVar0))
		{
			unk_0x872F1C1F8587CCC7(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_858(bool bParam0)//Position - 0x29731
{
	if (bParam0)
	{
		if (!func_194(unk_0x9EB17624F44A8DA4(), 9))
		{
			if (func_389(unk_0x9EB17624F44A8DA4()) != 0)
			{
				func_224(9);
			}
		}
	}
	else if (func_194(unk_0x9EB17624F44A8DA4(), 9))
	{
		func_223(9);
	}
}

int func_859(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x29777
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
	if (func_860(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_860(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x2980F
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x74C475EB8E73D398(sParam14, sParam15))
	{
	}
	func_870();
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
	if (func_869() == 0)
	{
		func_867();
		return 0;
	}
	func_866(Global_16823);
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
		func_865(0);
		func_865(2);
		func_865(1);
	}
	else
	{
		func_870();
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
					func_865(0);
					Global_3029 = 0;
					break;
				
				case 1:
					func_865(1);
					Global_3029 = 1;
					break;
				
				case 2:
					func_865(2);
					Global_3029 = 2;
					break;
				
				case 3:
					func_865(3);
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
		func_870();
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
			if (!func_463())
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Text_Arrive_Tone", &Global_14442, true);
			}
		}
	}
	if (!Global_14616)
	{
		if (Global_14453.f_1 == 6)
		{
			func_864(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_861(1);
			func_864(Global_14434, "DISPLAY_VIEW", 1f, system::to_float(Global_14433), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_861(int iParam0)//Position - 0x29CC5
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
		if (func_863(14))
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
								func_266(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar2);
								unk_0x271AA5469AF471B3();
							}
							if (Global_2456825)
							{
								if (iVar1 == 14)
								{
									func_862(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_862(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16824), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_862(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar4), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_862(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar6), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_862(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_266(&(Global_2330[iVar1 /*15*/]));
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
								func_266(&(Global_2330[iVar1 /*15*/]));
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
								func_266(&(Global_2330[iVar1 /*15*/]));
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
								func_266(&(Global_2330[iVar1 /*15*/]));
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
								func_266(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if (Global_2330[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626277.f_1;
								func_862(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_862(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(0), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_862(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x2A25E
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
		func_266(sParam7);
	}
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		func_266(sParam8);
	}
	if (!unk_0xAB019B170BF1309C(sParam9))
	{
		func_266(sParam9);
	}
	if (!unk_0xAB019B170BF1309C(sParam10))
	{
		func_266(sParam10);
	}
	if (!unk_0xAB019B170BF1309C(sParam11))
	{
		func_266(sParam11);
	}
	unk_0x271AA5469AF471B3();
}

bool func_863(int iParam0)//Position - 0x2A311
{
	return Global_35861 == iParam0;
}

void func_864(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x2A31F
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

void func_865(int iParam0)//Position - 0x2A382
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_104555.f_14021[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_866(int iParam0)//Position - 0x2A3A1
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

void func_867()//Position - 0x2A433
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
		if (!func_868(Global_104555.f_14111[iVar2 /*104*/].f_18, Global_104555.f_14111[Global_16823 /*104*/].f_18))
		{
			Global_16823 = iVar2;
		}
		iVar2++;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_24 = 1;
}

int func_868(struct<6> Param0, struct<6> Param1)//Position - 0x2A4FE
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

int func_869()//Position - 0x2A5E9
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
			if (!func_868(Global_104555.f_14111[iVar2 /*104*/].f_18, Global_104555.f_14111[Global_16823 /*104*/].f_18))
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

void func_870()//Position - 0x2A751
{
	if (func_863(14))
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
		Global_14453 = func_871();
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

var func_871()//Position - 0x2A7F3
{
	func_872();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_872()//Position - 0x2A80C
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_875(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_874(unk_0xFC1458A37D98B502());
			if (func_873(iVar0) && (!func_863(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_873(Global_104555.f_2353.f_539.f_4301))
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

bool func_873(int iParam0)//Position - 0x2A909
{
	return iParam0 < 3;
}

int func_874(int iParam0)//Position - 0x2A915
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_875(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_875(int iParam0)//Position - 0x2A952
{
	if (func_873(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_876()//Position - 0x2A97C
{
	if (!unk_0xC80D31E4B587871C(Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_1, 1))
	{
		if (!func_896())
		{
			if (Local_131.f_5 > 0 || unk_0xC80D31E4B587871C(Local_131.f_1, 6))
			{
				func_226(1);
				unk_0x872F1C1F8587CCC7(&(Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_1), 1);
			}
		}
	}
}

int func_877(bool bParam0)//Position - 0x2A9CB
{
	if (func_878(1))
	{
		return 1;
	}
	if (Global_2512808.f_4856.f_30)
	{
		Global_2512808.f_4856.f_30 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_349() == func_81() || !func_991(func_349(), 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_878(bool bParam0)//Position - 0x2AA20
{
	bool bVar0;
	
	if (!func_496(1))
	{
		bVar0 = false;
		if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57 != func_81())
		{
			if (func_991(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57, 0, 1))
			{
				if ((Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_24 == 4 || Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_24 == 8) || Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_879(func_221(unk_0x9EB17624F44A8DA4())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_592(31);
				if (func_410(func_221(unk_0x9EB17624F44A8DA4())))
				{
					func_592(81);
				}
				if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57 != func_81() && unk_0x552F39AE86E07792(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57))
				{
					Global_1626121 = func_478(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57, -2, 0, 0);
					if (!func_348(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57))
					{
						func_592(88);
					}
				}
				else
				{
					Global_1626121 = 1;
				}
				Global_1626105 = { Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_99 };
			}
			return 1;
		}
	}
	return 0;
}

int func_879(int iParam0)//Position - 0x2AB71
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

bool func_880()//Position - 0x2ACE9
{
	return func_240(unk_0x9EB17624F44A8DA4());
}

void func_881(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2ACF9
{
	float fVar0;
	
	if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 != iParam0)
	{
		func_895(-1);
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 = iParam0;
		if (func_894() != -1)
		{
			func_893(-1);
		}
		if (func_892() != -1)
		{
			func_891(-1);
		}
		func_890(iParam2);
		func_888(iParam0);
		if (!func_233(iParam0))
		{
			fVar0 = func_232(iParam0);
			if (fVar0 != 1f)
			{
				func_229(fVar0);
				unk_0x872F1C1F8587CCC7(&(Global_1667858.f_3), 1);
			}
		}
		if (!func_236(iParam0) || iParam3)
		{
			if (func_234(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0xC0EBC1452FCAB15C(0);
				if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
					unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
				}
				unk_0x872F1C1F8587CCC7(&(Global_1667858.f_3), 0);
			}
			else if (unk_0xB89B7DB2727D69D6() < 5)
			{
				unk_0x94BD6F0436473406(1f);
				unk_0xC0EBC1452FCAB15C(5);
			}
		}
		if (func_397())
		{
			func_224(27);
		}
		if (bParam1)
		{
			if (!func_391())
			{
				func_226(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xC80D31E4B587871C(Global_2512808.f_4523, 1) || unk_0xC80D31E4B587871C(Global_2512808.f_4523, 4)) || unk_0xC80D31E4B587871C(Global_2512808.f_4523, 0))
			{
				func_592(6);
			}
			func_887();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0x1D29C781A978C4FB(3, false);
			unk_0x1D29C781A978C4FB(5, false);
		}
		if (func_135(unk_0x9EB17624F44A8DA4()) && func_241(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 8);
		}
		func_883();
		if (func_882(iParam0))
		{
			unk_0x1D29C781A978C4FB(3, false);
			unk_0x1D29C781A978C4FB(5, false);
			unk_0x872F1C1F8587CCC7(&(Global_1667858.f_3), 6);
		}
	}
}

int func_882(int iParam0)//Position - 0x2AEF8
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_883()//Position - 0x2AF42
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_886();
	iVar2 = func_82(unk_0x9EB17624F44A8DA4());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xF6A72924028F588B(iVar0);
		if (unk_0x552F39AE86E07792(iVar1))
		{
			if (func_320(iVar1, iVar2, 1) || func_884(iVar1, unk_0x9EB17624F44A8DA4()))
			{
				unk_0x16BF46A5B08AE23D(unk_0x9EB17624F44A8DA4(), iVar1, bVar3);
				unk_0x16BF46A5B08AE23D(iVar1, unk_0x9EB17624F44A8DA4(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_884(int iParam0, int iParam1)//Position - 0x2AFB2
{
	if (func_285(iParam0, 1) && func_285(iParam1, 1))
	{
		return (func_885(iParam0) == func_82(iParam1) || func_885(iParam1) == func_82(iParam0));
	}
	return 0;
}

int func_885(int iParam0)//Position - 0x2AFF4
{
	if (func_285(iParam0, 1))
	{
		return Global_1627537[func_82(iParam0) /*532*/].f_11.f_443;
	}
	return func_81();
}

int func_886()//Position - 0x2B01F
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_495();
	if (iVar0 != func_81())
	{
		if (func_991(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xC80D31E4B587871C(Global_1627537[iVar1 /*532*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_887()//Position - 0x2B060
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4523, 1))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4523), 1);
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4523, 4))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4523), 4);
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4523, 6))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4523), 6);
	}
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4523), 0);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4523), 2);
	Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_578 = 0;
	if (Global_2512808.f_4525 > 0)
	{
		unk_0xC0EBC1452FCAB15C(Global_2512808.f_4525);
	}
	Global_2512808.f_4524 = 0;
}

void func_888(int iParam0)//Position - 0x2B0FE
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_512(3774, -1, 0);
	iVar1 = func_889(iParam0);
	if (iVar1 != -1)
	{
		unk_0x872F1C1F8587CCC7(&iVar0, iVar1);
		func_510(3774, iVar0, -1, 1, 0);
	}
}

int func_889(int iParam0)//Position - 0x2B133
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_890(int iParam0)//Position - 0x2B1CA
{
	int iVar0;
	
	iVar0 = unk_0x9EB17624F44A8DA4();
	if (Global_1627537[iVar0 /*532*/].f_11.f_176 != iParam0)
	{
		Global_1627537[iVar0 /*532*/].f_11.f_176 = iParam0;
	}
}

void func_891(int iParam0)//Position - 0x2B1F9
{
	if (Global_2512808.f_4856.f_158 != iParam0)
	{
		Global_2512808.f_4856.f_158 = iParam0;
	}
}

int func_892()//Position - 0x2B21A
{
	return Global_2512808.f_4856.f_158;
}

void func_893(int iParam0)//Position - 0x2B22B
{
	if (Global_2512808.f_4856.f_157 != iParam0)
	{
		Global_2512808.f_4856.f_157 = iParam0;
	}
}

int func_894()//Position - 0x2B24C
{
	return Global_2512808.f_4856.f_157;
}

void func_895(int iParam0)//Position - 0x2B25D
{
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_32 = iParam0;
}

int func_896()//Position - 0x2B276
{
	int iVar0;
	
	iVar0 = func_897();
	if (iVar0 > -1)
	{
		if (Local_131.f_33 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_897()//Position - 0x2B298
{
	int iVar0;
	
	if (Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_3 != -1)
	{
		return Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_3;
	}
	if (func_240(unk_0x9EB17624F44A8DA4()))
	{
		Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_3 = unk_0x622FF3AE4B1D07C3();
		if (unk_0x622FF3AE4B1D07C3() == Local_131.f_33)
		{
			func_858(1);
		}
	}
	else if (func_285(unk_0x9EB17624F44A8DA4(), 1))
	{
		iVar0 = func_495();
		if (iVar0 != func_81())
		{
			if (unk_0xDE597476C8B96D1A(iVar0))
			{
				Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_3 = unk_0x87678BB8392EFD41(iVar0);
			}
		}
	}
	return Local_132[unk_0x622FF3AE4B1D07C3() /*6*/].f_3;
}

int func_898()//Position - 0x2B325
{
	return Local_131;
}

int func_899(int iParam0)//Position - 0x2B32F
{
	return Local_132[iParam0 /*6*/];
}

int func_900()//Position - 0x2B33D
{
	var uVar0;
	
	func_905(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_904())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_903())
	{
		return 1;
	}
	if (func_902(157))
	{
		if (!func_901())
		{
			return 1;
		}
	}
	if (func_902(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_230() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_230()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_901()//Position - 0x2B3C7
{
	return Global_2447174.f_586;
}

int func_902(int iParam0)//Position - 0x2B3D6
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_903()//Position - 0x2B3ED
{
	return Global_2456830;
}

bool func_904()//Position - 0x2B3F9
{
	return Global_2447174.f_581;
}

void func_905(var uParam0)//Position - 0x2B408
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
					func_906(iVar0);
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

void func_906(int iParam0)//Position - 0x2B47B
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_991(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_907(iVar2, &bVar3))
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

int func_907(int iParam0, var uParam1)//Position - 0x2B4FC
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

void func_908()//Position - 0x2B55B
{
	system::wait(0);
}

void func_909()//Position - 0x2B568
{
	if (!unk_0xC80D31E4B587871C(iLocal_133, 6))
	{
		if (unk_0x3A711520F83BAE98())
		{
			if (func_896() || func_398())
			{
				func_679(0, 4, 0, 0, -1, -1, -1, -1, -1);
				unk_0x872F1C1F8587CCC7(&iLocal_133, 6);
			}
		}
	}
	func_956(3, 3, -1, -1082130432);
	if (unk_0x3A711520F83BAE98())
	{
		if (unk_0x622FF3AE4B1D07C3() == Local_131.f_33)
		{
			if (iLocal_416 >= 0)
			{
				func_812(&Local_144);
				func_811(&Local_144);
			}
		}
	}
	if (unk_0x1479B36DFB6174A5(unk_0xFC1458A37D98B502()) == iLocal_139)
	{
		unk_0xCE93FCB8A8D8DF0B(unk_0xFC1458A37D98B502(), iLocal_141);
	}
	if (iLocal_416 > 0)
	{
		if (unk_0xC80D31E4B587871C(Local_131.f_1, 3))
		{
			func_804(unk_0x9EB17624F44A8DA4(), 1, 0);
		}
	}
	func_955();
	if (Local_131.f_34 != -1)
	{
		if (unk_0xC80D31E4B587871C(iLocal_133, 5))
		{
			if (unk_0x552F39AE86E07792(unk_0xF6A72924028F588B(Local_131.f_34)))
			{
				func_427(unk_0xF6A72924028F588B(Local_131.f_34), 432, 0);
				func_425(unk_0xF6A72924028F588B(Local_131.f_34), 1, 0);
				func_424(unk_0xF6A72924028F588B(Local_131.f_34), 0, 0);
				func_423(unk_0xF6A72924028F588B(Local_131.f_34), 0);
				func_422(unk_0xF6A72924028F588B(Local_131.f_34), Global_262145.f_11695, 0);
			}
		}
	}
	if (func_199(0))
	{
		func_198(0);
	}
	if (unk_0xC80D31E4B587871C(iLocal_134, 0))
	{
		if (!unk_0xC80D31E4B587871C(iLocal_134, 2))
		{
			unk_0x1B5A255BF0D63005("DisableFlightMusic", 0);
			unk_0x1B5A255BF0D63005("WantedMusicDisabled", 0);
			unk_0x8810DC630928B398("BG_SIGHTSEER_STOP");
		}
	}
	unk_0x872F1C1F8587CCC7(&iLocal_134, 8);
	func_195();
	unk_0x3D2F639D46A69899(1);
	func_858(0);
	func_911(1, 0);
	unk_0xC0EBC1452FCAB15C(5);
	unk_0x0EE72DB1CD8A3B86(&Global_4267143, 21);
	unk_0x0EE72DB1CD8A3B86(&Global_4267143, 20);
	func_910();
}

void func_910()//Position - 0x2B700
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_911(bool bParam0, int iParam1)//Position - 0x2B70C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1347666.f_1.f_108 != 0)
	{
		Global_1347666.f_1.f_108 = 0;
	}
	Global_1347666.f_1.f_109 = -1;
	Global_1347666.f_1.f_110 = -1;
	if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 == 167 || Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 == 168)
	{
		func_953();
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 4);
	}
	if ((func_536() && iParam1 != 0) && Global_262145.f_16305)
	{
		if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 == 190 || Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 == 192)
		{
			func_935(unk_0x9EB17624F44A8DA4(), iParam1, 1, 0);
		}
	}
	if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 == 164 || Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 == 208)
	{
		unk_0x1D29C781A978C4FB(3, true);
		unk_0x1D29C781A978C4FB(5, true);
	}
	if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 != -1)
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 = -1;
		if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 14) && !func_135(unk_0x9EB17624F44A8DA4()))
		{
			func_226(0);
		}
	}
	else if (func_933(unk_0x9EB17624F44A8DA4()) != -1)
	{
		func_895(-1);
	}
	func_932(func_81());
	if (func_199(16))
	{
		func_198(16);
	}
	func_929(0);
	func_890(-1);
	func_928();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_927(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_925(iVar1);
		iVar1++;
	}
	if (unk_0xC80D31E4B587871C(Global_1667858.f_3, 0))
	{
		unk_0x94BD6F0436473406(1f);
		unk_0xC0EBC1452FCAB15C(5);
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 0);
	}
	if (unk_0xC80D31E4B587871C(Global_1667858.f_3, 5))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 5);
	}
	iVar2 = func_416();
	if ((func_317(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_924(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_450(iVar2))
	{
		func_920(-1, 1);
	}
	else if (((((func_415(iVar2) || func_919(iVar2)) || func_918(iVar2)) || func_447(iVar2)) || func_445(iVar2)) || func_443(iVar2))
	{
	}
	else
	{
		func_920(-1, 1);
	}
	func_223(19);
	func_223(20);
	func_223(21);
	func_223(22);
	func_223(27);
	func_198(3);
	func_198(4);
	func_198(7);
	func_917();
	if (func_241(unk_0x9EB17624F44A8DA4()))
	{
		func_858(0);
	}
	func_223(29);
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57 = func_81();
	if (Global_2512808.f_4856.f_30 != 0)
	{
		Global_2512808.f_4856.f_30 = 0;
	}
	if (bParam0)
	{
		func_200();
	}
	if (!func_135(unk_0x9EB17624F44A8DA4()))
	{
		func_222();
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 1);
	}
	if (unk_0xC80D31E4B587871C(Global_1667858.f_3, 6))
	{
		unk_0x1D29C781A978C4FB(3, true);
		unk_0x1D29C781A978C4FB(5, true);
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 6);
	}
	if (unk_0xC80D31E4B587871C(Global_1667858.f_3, 7))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 7);
	}
	if (unk_0xC80D31E4B587871C(Global_1667858.f_3, 8))
	{
		func_916("IMPEXP_SELFDES", 0);
		func_914("IMPEXP_SELFDES");
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 8);
	}
	func_912(iVar2, 0);
}

void func_912(int iParam0, bool bParam1)//Position - 0x2BAA5
{
	if (bParam1)
	{
		if (!unk_0xC80D31E4B587871C(Global_1667858.f_3, 9))
		{
			unk_0xE859EF37EA7362D3(func_913(iParam0));
			unk_0x872F1C1F8587CCC7(&(Global_1667858.f_3), 9);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_1667858.f_3, 9))
	{
		unk_0xE02E32C69260FBB7(func_913(iParam0));
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 9);
	}
}

char* func_913(int iParam0)//Position - 0x2BB01
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_914(char* sParam0)//Position - 0x2BB7B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x8C1C362CA8299475(&(Global_104555.f_14111[iVar0 /*104*/])))
		{
			if (unk_0x74C475EB8E73D398(&(Global_104555.f_14111[iVar0 /*104*/]), sParam0))
			{
				if (Global_104555.f_14111[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_870();
					Global_104555.f_14111[iVar0 /*104*/].f_99[Global_14453] = 0;
					if (func_915(iVar0))
					{
					}
					else
					{
						Global_104555.f_14111[iVar0 /*104*/].f_24 = 0;
						Global_104555.f_14111[iVar0 /*104*/].f_28 = 0;
						Global_104555.f_14111[iVar0 /*104*/].f_29 = 0;
					}
					unk_0x4B1D93E1A14A667F(Global_104555.f_14111[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_915(int iParam0)//Position - 0x2BC2F
{
	if ((Global_104555.f_14111[iParam0 /*104*/].f_99[0] == 1 || Global_104555.f_14111[iParam0 /*104*/].f_99[1] == 1) || Global_104555.f_14111[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_916(char* sParam0, int iParam1)//Position - 0x2BC84
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x8C1C362CA8299475(&(Global_104555.f_14111[iVar0 /*104*/])))
		{
			if (unk_0x74C475EB8E73D398(&(Global_104555.f_14111[iVar0 /*104*/]), sParam0))
			{
				if (Global_104555.f_14111[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_104555.f_14111[iVar0 /*104*/].f_24 = 1;
				if (Global_104555.f_14111[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_104555.f_14111[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_104555.f_14021[0 /*20*/].f_17 = 0;
					}
					if (Global_104555.f_14111[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_104555.f_14021[1 /*20*/].f_17 = 0;
					}
					if (Global_104555.f_14111[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_104555.f_14021[2 /*20*/].f_17 = 0;
					}
					if (Global_104555.f_14111[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_104555.f_14021[3 /*20*/].f_17 = 0;
					}
					Global_104555.f_14111[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_104555.f_14111[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_917()//Position - 0x2BD9C
{
	if (func_244(unk_0x9EB17624F44A8DA4()))
	{
		func_223(25);
	}
}

int func_918(int iParam0)//Position - 0x2BDB5
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

int func_919(int iParam0)//Position - 0x2BDD5
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_920(int iParam0, bool bParam1)//Position - 0x2BE00
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_416();
	}
	if (iParam0 > 0)
	{
		if (func_495() != func_81())
		{
			if (func_923(unk_0x9EB17624F44A8DA4()) == unk_0x9EB17624F44A8DA4())
			{
				Global_2492493.f_93[func_922(iParam0)] = 1;
			}
		}
		iVar0 = func_922(159);
		if (func_921(iVar0, Global_262145.f_11946, bParam1))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(157);
		if (func_921(iVar0, Global_262145.f_11946, bParam1))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(148);
		if (func_921(iVar0, Global_262145.f_11946, bParam1))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(164);
		if (func_921(iVar0, Global_262145.f_11946, bParam1))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(142);
		if (func_921(iVar0, Global_262145.f_11946, bParam1))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(152);
		if (func_921(iVar0, Global_262145.f_11946, bParam1))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(166);
		if (func_921(iVar0, Global_262145.f_11946, bParam1))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(170);
		if (func_921(iVar0, Global_262145.f_11946, bParam1))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(173);
		if (func_921(iVar0, Global_262145.f_11946, bParam1))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(179);
		if (func_921(iVar0, Global_262145.f_11946, bParam1))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(200);
		if (func_921(iVar0, Global_262145.f_11946, bParam1))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(201);
		if (func_921(iVar0, Global_262145.f_11946, bParam1))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(182);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(183);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(185);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(186);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(180);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(195);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(197);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(198);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(207);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(208);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(209);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(214);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(215);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(216);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(217);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(218);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(219);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(220);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(221);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_921(int iParam0, int iParam1, bool bParam2)//Position - 0x2C480
{
	if (bParam2)
	{
		if ((!func_194(unk_0x9EB17624F44A8DA4(), 19) && !func_194(unk_0x9EB17624F44A8DA4(), 20)) && !func_194(unk_0x9EB17624F44A8DA4(), 9))
		{
			return 0;
		}
	}
	if (Global_2492493.f_93[iParam0] == 1 && func_9(&(Global_2492493[iParam0 /*2*/])))
	{
		if (func_761(&(Global_2492493[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2492493.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_922(int iParam0)//Position - 0x2C506
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

int func_923(int iParam0)//Position - 0x2C708
{
	return Global_1627537[iParam0 /*532*/].f_11.f_35;
}

void func_924(int iParam0)//Position - 0x2C71D
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_416();
	}
	if (iParam0 > 0)
	{
		if (func_495() != func_81())
		{
			Global_2492493.f_93[func_922(iParam0)] = 1;
		}
		iVar0 = func_922(155);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(163);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(160);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(153);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(162);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(154);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(171);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(172);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(199);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(194);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(193);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(210);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(205);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(189);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(211);
		if (func_921(iVar0, Global_262145.f_11947, 0))
		{
			func_259(&(Global_2492493[iVar0 /*2*/]));
			func_8(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_925(int iParam0)//Position - 0x2CA4E
{
	if (!func_187(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_303[iParam0 /*3*/], func_926(), 0))
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_303[iParam0 /*3*/] = { func_926() };
	}
	if (!func_187(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_290[iParam0 /*3*/], func_926(), 0))
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_290[iParam0 /*3*/] = { func_926() };
	}
}

Vector3 func_926()//Position - 0x2CAD0
{
	vector3 vVar0;
	
	return vVar0;
}

void func_927(int iParam0)//Position - 0x2CADC
{
	if (!func_187(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_145[iParam0 /*3*/], func_926(), 0))
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_145[iParam0 /*3*/] = { func_926() };
	}
	if (!func_187(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_120[iParam0 /*3*/], func_926(), 0))
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_120[iParam0 /*3*/] = { func_926() };
	}
}

void func_928()//Position - 0x2CB5A
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573842 = { Var0 };
	Global_1573842.f_13 = func_81();
	if (unk_0xC80D31E4B587871C(Global_1573340, 3))
	{
		unk_0x0EE72DB1CD8A3B86(&Global_1573340, 3);
	}
}

void func_929(bool bParam0)//Position - 0x2CBB4
{
	if (bParam0)
	{
		if (!func_465(unk_0x9EB17624F44A8DA4(), 14))
		{
			func_931(14);
		}
	}
	else if (func_465(unk_0x9EB17624F44A8DA4(), 14))
	{
		func_930(14);
	}
}

void func_930(int iParam0)//Position - 0x2CBEB
{
	unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_5), iParam0);
}

void func_931(int iParam0)//Position - 0x2CC08
{
	unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_5), iParam0);
}

void func_932(int iParam0)//Position - 0x2CC25
{
	if (func_240(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x9EB17624F44A8DA4() != iParam0)
		{
			if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_443 != iParam0)
			{
				Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_443 = iParam0;
				if (iParam0 != func_81())
				{
				}
			}
		}
	}
}

int func_933(int iParam0)//Position - 0x2CC74
{
	if (func_934(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_32;
	}
	return -1;
}

int func_934(int iParam0, int iParam1)//Position - 0x2CC97
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_32 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_935(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2CCD2
{
	int iVar0;
	
	if (func_649(iParam0, iParam1) && func_952(iParam0, iParam1))
	{
		iVar0 = func_648(iParam0, iParam1);
		func_939(iVar0, bParam2, bParam3);
		func_936(iVar0, 1);
	}
}

void func_936(int iParam0, bool bParam1)//Position - 0x2CD0D
{
	if (!func_938(iParam0))
	{
		return;
	}
	func_635(func_937(iParam0), bParam1, -1, 1);
	Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iParam0 /*12*/].f_6 = bParam1;
}

int func_937(int iParam0)//Position - 0x2CD49
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_938(int iParam0)//Position - 0x2CDA3
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_939(int iParam0, bool bParam1, bool bParam2)//Position - 0x2CDB8
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_837(unk_0x9EB17624F44A8DA4(), iParam0);
	if (!bParam1)
	{
		func_951(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2492401[iParam0];
		iVar0 = func_950(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1669398 = -1;
		}
		func_949(iParam0, 0, bParam2);
	}
	else if (func_947(iParam0, bParam2))
	{
		iVar0 = func_946(iVar2, 0);
		iVar3 = func_732(unk_0x9EB17624F44A8DA4(), iVar2);
		iVar4 = func_945(iVar2, bParam2);
		iVar5 = func_946(iVar2, bParam2);
		fVar6 = (system::to_float(iVar5) / system::to_float(iVar4));
		iVar0 = (iVar0 - system::round((system::to_float(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_944(iVar2) && func_943(unk_0x9EB17624F44A8DA4(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_951(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_942(unk_0x9EB17624F44A8DA4(), iVar2) > 0)
		{
			func_941(iParam0, (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iParam0 /*12*/].f_2 - (func_945(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_946(iVar2, bParam2) / func_942(unk_0x9EB17624F44A8DA4(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_944(iVar2) && func_943(unk_0x9EB17624F44A8DA4(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_940(unk_0x9EB17624F44A8DA4(), iVar2, iVar0, bParam2);
}

void func_940(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2CF29
{
	int iVar0;
	
	if (iParam0 == func_81())
	{
		return;
	}
	if (func_642(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1595693[iParam0 /*680*/].f_266.f_234 = iParam2;
				}
				else
				{
					Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_941(int iParam0, int iParam1)//Position - 0x2CF9D
{
	if (iParam0 != -1 && iParam1 != Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iParam0 /*12*/].f_2)
	{
		Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_942(int iParam0, int iParam1)//Position - 0x2CFE2
{
	int iVar0;
	
	if (iParam0 == func_81())
	{
		return 0;
	}
	if (func_642(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_943(int iParam0, int iParam1)//Position - 0x2D041
{
	int iVar0;
	
	if (iParam0 == func_81())
	{
		return 0;
	}
	if (func_642(iParam1) && func_944(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_944(int iParam0)//Position - 0x2D0AB
{
	return func_533(iParam0) == 5;
}

int func_945(int iParam0, bool bParam1)//Position - 0x2D0BB
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_533(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16276;
			if (func_647(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16281;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16275;
			if (func_647(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16280;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16274;
			if (func_647(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16279;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16272;
			if (func_647(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16277;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16273;
			if (func_647(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16278;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_20371;
				if (func_647(unk_0x9EB17624F44A8DA4(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20372;
				}
			}
			else
			{
				uVar0 = Global_262145.f_20355;
				if (func_647(unk_0x9EB17624F44A8DA4(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20356;
				}
			}
			break;
	}
	return uVar0;
}

int func_946(int iParam0, bool bParam1)//Position - 0x2D1F2
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_533(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16257;
			if (func_647(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16266);
			}
			if (func_647(unk_0x9EB17624F44A8DA4(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16271);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16258;
			if (func_647(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16265);
			}
			if (func_647(unk_0x9EB17624F44A8DA4(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16270);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16259;
			if (func_647(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16264);
			}
			if (func_647(unk_0x9EB17624F44A8DA4(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16269);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16260;
			if (func_647(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16262);
			}
			if (func_647(unk_0x9EB17624F44A8DA4(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16267);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16261;
			if (func_647(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16263);
			}
			if (func_647(unk_0x9EB17624F44A8DA4(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16268);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_20368;
			}
			else
			{
				iVar0 = Global_262145.f_20352;
			}
			if (func_647(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20369);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20353);
				}
			}
			if (func_647(unk_0x9EB17624F44A8DA4(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20370);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20354);
				}
			}
			if (func_943(unk_0x9EB17624F44A8DA4(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_947(int iParam0, bool bParam1)//Position - 0x2D3FC
{
	if (bParam1)
	{
		return func_636(15384, -1, -1);
	}
	return func_636(func_948(iParam0), -1, -1);
}

int func_948(int iParam0)//Position - 0x2D421
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_949(int iParam0, bool bParam1, bool bParam2)//Position - 0x2D47B
{
	if (bParam2)
	{
		func_635(15384, bParam1, -1, 1);
		return;
	}
	func_635(func_948(iParam0), bParam1, -1, 1);
}

int func_950(int iParam0, bool bParam1)//Position - 0x2D4A6
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2492401[iParam0];
	iVar1 = func_837(unk_0x9EB17624F44A8DA4(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2492408;
	}
	if (func_944(iVar1))
	{
		if (func_943(unk_0x9EB17624F44A8DA4(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_951(int iParam0, int iParam1, bool bParam2)//Position - 0x2D4EE
{
	if (bParam2)
	{
		Global_2492408 = iParam1;
		return;
	}
	Global_2492401[iParam0] = iParam1;
}

int func_952(int iParam0, int iParam1)//Position - 0x2D50E
{
	int iVar0;
	
	if (func_649(iParam0, iParam1))
	{
		iVar0 = func_648(iParam0, iParam1);
		if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_4 > 0 && Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_953()//Position - 0x2D562
{
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1711), 28);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1711), 29);
	func_954(24);
}

void func_954(int iParam0)//Position - 0x2D58A
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4856.f_7[iVar0]), iVar1);
}

void func_955()//Position - 0x2D5B3
{
	unk_0x9EA1BA1DD45771B3(iLocal_140);
	unk_0x9EA1BA1DD45771B3(iLocal_139);
}

void func_956(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2D5C9
{
	char* sVar0;
	struct<14> Var1;
	struct<17> Var2;
	struct<17> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<16> Var6;
	struct<18> Var7;
	struct<18> Var8;
	struct<19> Var9;
	struct<18> Var10;
	
	sVar0 = unk_0x436287B7DB306165();
	Var1 = Global_1667867;
	Var1.f_1 = Global_1667867.f_1;
	Var1.f_2 = Global_1667867.f_2;
	Var1.f_3 = Global_1667867.f_3;
	Var1.f_4 = Global_1667867.f_4;
	Var1.f_5 = Global_1667867.f_5;
	Var1.f_6 = Global_1667867.f_6;
	Var1.f_7 = Global_1667867.f_7;
	Var1.f_8 = Global_1667867.f_8;
	Var1.f_9 = Global_1667867.f_9;
	Var1.f_10 = Global_1667867.f_10;
	Var1.f_11 = Global_1667867.f_11;
	Var1.f_12 = Global_1667867.f_12;
	Var1.f_13 = Global_1667867.f_14;
	if (unk_0x3A711520F83BAE98())
	{
		if (unk_0x74C475EB8E73D398(sVar0, "GB_DEATHMATCH"))
		{
			Var2 = { Var1 };
			Var2.f_14 = Global_1667867.f_15;
			Var2.f_15 = Global_1667867.f_16;
			Var2.f_16 = Global_1667867.f_17;
			unk_0x74D82435B879FAD5(&Var2);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_YACHT_ROB"))
		{
			Var3 = { Var1 };
			Var3.f_14 = Global_1667867.f_15;
			Var3.f_15 = iParam0;
			Var3.f_16 = iParam1;
			unk_0xD70D34CCB1D634E4(&Var3);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var4 = { Var1 };
			Var4.f_14 = Global_1667867.f_15;
			Var4.f_15 = iParam0;
			unk_0xE9F89A00217C685C(&Var4);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_SIGHTSEER"))
		{
			Var5 = { Var1 };
			Var5.f_14 = Global_1667867.f_15;
			Var5.f_15 = iParam0;
			Var5.f_16 = iParam1;
			unk_0xE2427E99E7433EE3(&Var5);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_ASSAULT"))
		{
			Var6 = { Var1 };
			Var6.f_14 = Global_1667867.f_15;
			Var6.f_15 = iParam0;
			unk_0xD708DF69951B6F82(&Var6);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_BELLYBEAST"))
		{
			Var7 = { Var1 };
			Var7.f_14 = Global_1667867.f_15;
			Var7.f_15 = iParam0;
			Var7.f_16 = iParam1;
			Var7.f_17 = iParam2;
			unk_0x9DEEAC2E0047DF06(&Var7);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_HEADHUNTER"))
		{
			Var8 = { Var1 };
			Var8.f_14 = iParam0;
			Var8.f_15 = iParam1;
			Var8.f_16 = iParam2;
			Var8.f_17 = Global_1667867.f_15;
			unk_0xAB69F4EDF0D15E45(&Var8);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var9 = { Var1 };
			Var9.f_15 = iParam0;
			Var9.f_16 = iParam1;
			Var9.f_17 = iParam2;
			Var9.f_14 = iParam3;
			Var9.f_18 = Global_1667867.f_15;
			unk_0x443B083A340D5723(&Var9);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_AIRFREIGHT"))
		{
			Var10 = { Var1 };
			Var10.f_14 = iParam0;
			Var10.f_15 = iParam1;
			Var10.f_16 = iParam2;
			Var10.f_17 = Global_1667867.f_15;
			unk_0xD66B6A28511DC697(&Var10);
		}
	}
	func_957();
}

void func_957()//Position - 0x2D867
{
	struct<18> Var0;
	
	Global_1667867 = { Var0 };
}

void func_958(struct<21> Param0)//Position - 0x2D87B
{
	func_989(func_990(Param0), Param0);
	unk_0xB66EA47EE710E67F(3);
	func_987(0, -1, 0);
	unk_0x6E3ED3AE1C20445F(&Local_131, 60);
	unk_0xE7BC983D1386C9EE(&Local_132, 193);
	if (!func_986())
	{
		func_909();
	}
	if (unk_0x3A711520F83BAE98())
	{
		unk_0x941BE77305BB5695(0);
		if (unk_0x8E1421E2A2A2FBD4())
		{
		}
		func_985();
		func_959(0, 0);
		Local_132[unk_0x622FF3AE4B1D07C3() /*6*/] = 0;
	}
	else
	{
		func_909();
	}
}

void func_959(int iParam0, int iParam1)//Position - 0x2D8E8
{
	func_984();
	func_962(1);
	if ((iParam0 != 0 && unk_0x552F39AE86E07792(iParam1)) && func_961(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x872F1C1F8587CCC7(&Global_1667853, 0);
				break;
			}
	}
	if (!func_880() && !func_285(unk_0x9EB17624F44A8DA4(), 1))
	{
		if (func_394())
		{
			func_225(3);
		}
	}
	func_225(4);
	if (func_496(0))
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57 = func_495();
	}
	if (func_410(iParam0))
	{
		func_730();
		Global_1667885.f_18 = func_708(func_349());
	}
	else if (func_414(func_933(unk_0x9EB17624F44A8DA4())))
	{
		func_728();
		Global_1667938.f_18 = func_708(func_349());
	}
	func_960();
}

void func_960()//Position - 0x2D9B6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1347666.f_532[iVar0 /*42*/].f_1 = func_81();
		Global_1347666.f_532[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_961(int iParam0, bool bParam1)//Position - 0x2D9F0
{
	return func_320(unk_0x9EB17624F44A8DA4(), iParam0, bParam1);
}

void func_962(bool bParam0)//Position - 0x2DA04
{
	int iVar0;
	
	func_954(33);
	func_954(34);
	func_954(35);
	func_954(36);
	func_954(37);
	func_954(38);
	func_954(39);
	func_954(40);
	func_954(43);
	func_954(41);
	func_954(54);
	func_954(42);
	func_954(47);
	func_983(23);
	func_983(24);
	func_954(92);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1711), 2);
	func_982();
	func_977();
	func_972();
	func_964();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2512808.f_4856.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_963(3))
	{
		func_983(3);
	}
	else if (func_963(4))
	{
		func_983(4);
	}
	else if (func_963(5))
	{
		func_983(5);
	}
	else if (func_963(6))
	{
		func_983(6);
	}
	else if (func_963(7))
	{
		func_983(7);
	}
	else if (((((((((((((((((func_963(0) || func_963(1)) || func_963(2)) || func_963(8)) || func_963(9)) || func_963(10)) || func_963(11)) || func_963(12)) || func_963(13)) || func_963(14)) || func_963(15)) || func_963(16)) || func_963(17)) || func_963(18)) || func_963(19)) || func_963(20)) || func_963(21)) || func_963(22))
	{
		func_983(8);
		func_983(0);
		func_983(1);
		func_983(2);
		func_983(9);
		func_983(10);
		func_983(11);
		func_983(12);
		func_983(13);
		func_983(14);
		func_983(15);
		func_983(16);
		func_983(17);
		func_983(18);
		func_983(19);
		func_983(20);
		func_983(21);
		func_983(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2512808.f_4856.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_963(int iParam0)//Position - 0x2DC5E
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_14[iVar0], iVar1);
}

void func_964()//Position - 0x2DC87
{
	if (func_971())
	{
		func_970(0);
		func_970(1);
		func_970(2);
		func_970(3);
		func_970(4);
		func_970(5);
		if (func_969(32))
		{
			if (func_966(func_967(), 3))
			{
				func_965(func_967(), 3);
			}
			func_970(32);
		}
	}
}

void func_965(int iParam0, int iParam1)//Position - 0x2DCDB
{
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_104555.f_28020[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

int func_966(int iParam0, int iParam1)//Position - 0x2DD1E
{
	if (Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_967()//Position - 0x2DD43
{
	if (func_968())
	{
		Global_104555.f_28020[12 /*29*/].f_24[Global_14453] = 1;
	}
	return 12;
}

int func_968()//Position - 0x2DD67
{
	int iVar0;
	
	iVar0 = func_82(unk_0x9EB17624F44A8DA4());
	if (((iVar0 != unk_0x9EB17624F44A8DA4() && iVar0 != func_81()) && unk_0x552F39AE86E07792(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_969(int iParam0)//Position - 0x2DDA8
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_23[iVar0], iVar1);
}

void func_970(int iParam0)//Position - 0x2DDD1
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4856.f_23[iVar0]), iVar1);
}

int func_971()//Position - 0x2DDFA
{
	if ((((func_969(1) || func_969(0)) || func_969(2)) || func_969(4)) || func_969(5))
	{
		return 1;
	}
	return 0;
}

void func_972()//Position - 0x2DE3B
{
	if (func_976())
	{
		func_975(0);
		func_975(1);
		func_975(2);
		func_975(3);
		func_975(4);
		func_975(5);
		func_975(6);
		func_975(7);
		if (func_974(8))
		{
			func_975(8);
		}
		if (func_974(15))
		{
			if (func_966(func_973(), 3))
			{
				func_965(func_973(), 3);
			}
			func_975(15);
		}
	}
}

int func_973()//Position - 0x2DEA8
{
	if (func_968())
	{
		Global_104555.f_28020[20 /*29*/].f_24[Global_14453] = 1;
	}
	return 20;
}

bool func_974(int iParam0)//Position - 0x2DECC
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_21[iVar0], iVar1);
}

void func_975(int iParam0)//Position - 0x2DEF5
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4856.f_21[iVar0]), iVar1);
}

int func_976()//Position - 0x2DF1E
{
	if ((((((((func_974(0) || func_974(1)) || func_974(2)) || func_974(3)) || func_974(4)) || func_974(5)) || func_974(6)) || func_974(7)) || func_974(8))
	{
		return 1;
	}
	return 0;
}

void func_977()//Position - 0x2DF8C
{
	if (func_981())
	{
		func_980(0);
		func_980(1);
		func_980(2);
		func_980(3);
		func_980(4);
		func_980(5);
		func_980(6);
		func_980(7);
		func_980(8);
		func_980(9);
		func_980(10);
		func_980(11);
		func_980(12);
		if (func_979(13))
		{
			if (func_966(func_978(), 3))
			{
				func_965(func_978(), 3);
			}
			func_980(13);
		}
	}
}

int func_978()//Position - 0x2E008
{
	if (func_968())
	{
		Global_104555.f_28020[76 /*29*/].f_24[Global_14453] = 1;
	}
	return 76;
}

bool func_979(int iParam0)//Position - 0x2E02C
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_19[iVar0], iVar1);
}

void func_980(int iParam0)//Position - 0x2E055
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4856.f_19[iVar0]), iVar1);
}

int func_981()//Position - 0x2E07E
{
	if ((((((((((((func_979(0) || func_979(1)) || func_979(2)) || func_979(3)) || func_979(4)) || func_979(5)) || func_979(6)) || func_979(7)) || func_979(8)) || func_979(9)) || func_979(10)) || func_979(11)) || func_979(12))
	{
		return 1;
	}
	return 0;
}

void func_982()//Position - 0x2E11C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2512808.f_4856.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_983(int iParam0)//Position - 0x2E144
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4856.f_14[iVar0]), iVar1);
}

void func_984()//Position - 0x2E16D
{
	struct<14> Var0;
	
	Global_1667867 = { Var0 };
	Global_1667867.f_14 = 0;
	Global_1667867.f_15 = 0;
}

void func_985()//Position - 0x2E18F
{
}

int func_986()//Position - 0x2E197
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
		if (func_904())
		{
			return 0;
		}
		if (func_902(155))
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

int func_987(int iParam0, int iParam1, bool bParam2)//Position - 0x2E1F0
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_910();
			}
			else
			{
				return 0;
			}
		}
		if (!func_988())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_910();
					}
					else
					{
						return 0;
					}
				}
				if (func_904())
				{
					if (!bParam2)
					{
						func_910();
					}
					else
					{
						return 0;
					}
				}
				if (func_902(155))
				{
					if (!bParam2)
					{
						func_910();
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
					func_910();
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
				func_910();
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
			func_910();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_988()//Position - 0x2E305
{
	return Global_1312831;
}

void func_989(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x2E311
{
	if (!unk_0x3A711520F83BAE98())
	{
		func_910();
	}
	unk_0xAEA89A7E72415961(iParam0, 0, Param1.f_16);
}

int func_990(int iParam0)//Position - 0x2E330
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

int func_991(int iParam0, bool bParam1, bool bParam2)//Position - 0x2E94D
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

