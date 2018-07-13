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
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	float fLocal_140 = 0f;
	float fLocal_141 = 0f;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	float fLocal_146 = 0f;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	struct<6> Local_151[16];
	var uLocal_152[4] = { 0, 0, 0, 0 };
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	struct<16> Local_158[4];
	struct<78> Local_159 = { 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<2> Local_160[4];
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
	var uLocal_196 = 4;
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
	var uLocal_207 = 2;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 60;
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
	var uLocal_286 = 2;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 60;
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
	var uLocal_365 = 2;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 60;
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
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 2;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 60;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	struct<21> Local_513 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_94 = ((0,05f + 0,275f) - 0,01f);
	fLocal_138 = 3f;
	fLocal_139 = 0f;
	fLocal_140 = 2f;
	fLocal_141 = 100f;
	fLocal_146 = 0,5f;
	iLocal_153 = -1;
	iLocal_155 = -1;
	ScriptParam_513 = 144;
	if (unk_0x3A711520F83BAE98())
	{
		func_212(ScriptParam_513);
	}
	func_211(1);
	while (true)
	{
		func_210();
		if (func_201())
		{
			func_200();
		}
		if (unk_0x3A711520F83BAE98())
		{
			func_1(&uLocal_161);
		}
		else
		{
			func_200();
		}
	}
}

void func_1(var uParam0)//Position - 0xE7
{
	if (Local_159 < 11)
	{
		func_184(uParam0);
	}
	switch (*uParam0)
	{
		case 0:
			if (Local_159 > 3 && !Local_159 == 9)
			{
				func_183(uParam0, 11);
				return;
			}
			func_181(uParam0);
			break;
		
		case 1:
			func_178(uParam0);
			break;
		
		case 2:
			func_174(uParam0);
			break;
		
		case 3:
			func_170(uParam0);
			break;
		
		case 4:
			func_168(uParam0);
			break;
		
		case 5:
			func_166(uParam0);
			break;
		
		case 6:
			func_162(uParam0);
			break;
		
		case 7:
			func_125(uParam0);
			break;
		
		case 8:
			func_82(uParam0);
			break;
		
		case 9:
			func_58(uParam0);
			break;
		
		case 10:
			func_49(uParam0);
			break;
		
		case 11:
			func_29(uParam0);
			break;
	}
	switch (Local_159)
	{
		case 0:
			func_28(uParam0);
			break;
		
		case 1:
			func_27(uParam0);
			break;
		
		case 2:
			func_26(uParam0);
			break;
		
		case 3:
			func_25(uParam0);
			break;
		
		case 4:
			func_23(uParam0);
			break;
		
		case 5:
			func_22(uParam0);
			break;
		
		case 6:
			func_18(uParam0);
			break;
		
		case 7:
			func_17(uParam0);
			break;
		
		case 8:
			func_13(uParam0);
			break;
		
		case 9:
			func_4(uParam0);
			break;
		
		case 10:
			break;
		
		case 11:
			break;
	}
	func_2(uParam0);
}

void func_2(var uParam0)//Position - 0x28E
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_2, 5))
	{
		unk_0x873070BEE2844FE5();
	}
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 5);
	if (((*uParam0 > 1 && *uParam0 < 11) && unk_0x34D11AB5BA7922C2(uParam0->f_34)) && !unk_0x0F30C1F1717A6437())
	{
		unk_0x28E092B1E386EB67(uParam0->f_34, 255, 255, 255, 255, 0);
	}
	if (unk_0xC80D31E4B587871C(uParam0->f_2, 17))
	{
		func_3(uParam0);
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 17);
	}
}

void func_3(var uParam0)//Position - 0x306
{
	unk_0xEFB3EC0CDCC33841("LineArcadeMinigame", "Degenatron_DontCrossTheLine_Home", 0,5f, 0,5f, (1f * uParam0->f_9), 1f, 0f, 255, 255, 255, 255, 0);
}

void func_4(var uParam0)//Position - 0x330
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		bVar0 = true;
		bVar1 = false;
		bVar2 = false;
		iVar3 = 0;
		while (iVar3 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar3)) && Local_160[iVar3 /*2*/] > -1)
			{
				if (!unk_0xC80D31E4B587871C(Local_160[iVar3 /*2*/].f_1, 6))
				{
					bVar2 = true;
				}
				if (unk_0xC80D31E4B587871C(Local_160[iVar3 /*2*/].f_1, 2))
				{
					bVar1 = true;
				}
				if (!unk_0xC80D31E4B587871C(Local_160[iVar3 /*2*/].f_1, 4))
				{
					bVar0 = false;
				}
			}
			else if (Local_159.f_7[iVar3] != 0)
			{
				Local_159.f_7[iVar3] = 0;
			}
			iVar3++;
		}
		if ((!func_12(&(uParam0->f_28)) && !func_11(uParam0)) && !bVar1)
		{
			func_10(&(uParam0->f_28), 0, 0);
		}
		else
		{
			if ((bVar2 || bVar1) || func_11(uParam0))
			{
				func_9(&(uParam0->f_28));
			}
			if (((func_8(&(uParam0->f_28), 3000, 0) && func_12(&(uParam0->f_28))) && !func_11(uParam0)) && !bVar1)
			{
				if (bVar0)
				{
					func_7(uParam0, 10);
					return;
				}
				else if (!bVar1)
				{
					Local_159.f_77 = 0;
					func_7(uParam0, 4);
					Local_159.f_1 = -1;
					return;
				}
			}
		}
		if (!func_12(&(uParam0->f_26)) && !bVar2)
		{
			func_10(&(uParam0->f_26), 0, 0);
		}
		else
		{
			if (bVar2)
			{
				func_9(&(uParam0->f_26));
				return;
			}
			if (func_8(&(uParam0->f_26), 10000, 0))
			{
				func_6(0);
				func_5(0, 0);
				Local_159.f_77 = 0;
				func_7(uParam0, 4);
			}
		}
	}
}

void func_5(bool bParam0, bool bParam1)//Position - 0x4D7
{
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_3, 0))
		{
			unk_0x872F1C1F8587CCC7(&Global_1655667, 7);
		}
		unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_3), 0);
	}
	else
	{
		if (bParam1)
		{
			if (unk_0xC80D31E4B587871C(Global_1655667, 4))
			{
				unk_0x0EE72DB1CD8A3B86(&Global_1655667, 4);
			}
			if (unk_0xC80D31E4B587871C(Global_1655667, 0))
			{
				unk_0x872F1C1F8587CCC7(&Global_1655667, 1);
				unk_0x0EE72DB1CD8A3B86(&Global_1655667, 0);
			}
		}
		unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_3), 0);
	}
}

void func_6(bool bParam0)//Position - 0x562
{
	if (bParam0)
	{
		unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_3), 1);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_3), 1);
	}
}

void func_7(var uParam0, int iParam1)//Position - 0x596
{
	uParam0->f_4 = 0;
	Local_159 = iParam1;
}

int func_8(var uParam0, int iParam1, bool bParam2)//Position - 0x5A8
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
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

void func_9(var uParam0)//Position - 0x606
{
	uParam0->f_1 = 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)//Position - 0x613
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

int func_11(var uParam0)//Position - 0x658
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
		{
			if (!unk_0xC80D31E4B587871C(Local_160[iLocal_153 /*2*/].f_1, 6) && (*uParam0 != 9 || *uParam0 != 3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_12(var uParam0)//Position - 0x6AF
{
	return uParam0->f_1;
}

void func_13(var uParam0)//Position - 0x6BB
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		if (!func_12(&(uParam0->f_22)))
		{
			func_10(&(uParam0->f_22), 0, 0);
			if (Local_159.f_1 != -1)
			{
				Local_159.f_7[Local_159.f_1]++;
			}
			iVar0 = 0;
			while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
			{
				if (!unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
				{
					Local_159.f_7[iVar0] = 0;
				}
				iVar0++;
			}
		}
		else if (func_8(&(uParam0->f_22), 3000, 0))
		{
			bVar1 = true;
			iVar0 = 0;
			while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
			{
				if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_160[iVar0 /*2*/] > -1)
				{
					if (!unk_0xC80D31E4B587871C(Local_160[iVar0 /*2*/].f_1, 2))
					{
						bVar1 = false;
					}
					else
					{
						iVar0++;
					}
					if (bVar1)
					{
						func_14(uParam0);
						func_5(1, 0);
						func_7(uParam0, 9);
					}
				}

void func_14(var uParam0)//Position - 0x7AA
{
	int iVar0;
	
	func_9(&(uParam0->f_12));
	func_9(&(uParam0->f_16));
	func_9(&(uParam0->f_18));
	func_9(&(uParam0->f_20));
	func_9(&(uParam0->f_22));
	func_9(&(uParam0->f_26));
	func_9(&(uParam0->f_28));
	func_9(&(uParam0->f_30));
	func_9(&(uParam0->f_24));
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 0);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 1);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 2);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 3);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 9);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 8);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 7);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 10);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 12);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 6);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 11);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 13);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 15);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 16);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 18);
	iVar0 = 0;
	while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
	{
		if (iVar0 < 4)
		{
			uParam0->f_35[iVar0 /*79*/].f_3 = 0;
			uParam0->f_35[iVar0 /*79*/].f_17 = 1f;
		}
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
		{
			func_16(&(uParam0->f_35), 0, iVar0);
		}
		else
		{
			func_15(&(uParam0->f_35[iVar0 /*79*/].f_18));
			func_16(&(uParam0->f_35), 3, iVar0);
		}
		iVar0++;
	}
}

void func_15(var uParam0)//Position - 0x8F1
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = 0f;
		iVar0++;
	}
}

void func_16(var uParam0, int iParam1, int iParam2)//Position - 0x917
{
	(*uParam0)[iParam2 /*79*/] = iParam1;
}

void func_17(var uParam0)//Position - 0x927
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		iVar1 = 4;
		iVar2 = -1;
		iVar0 = 0;
		while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_160[iVar0 /*2*/] > -1)
			{
				if (uParam0->f_35[iVar0 /*79*/] == 3)
				{
					iVar1 = (iVar1 - 1);
				}
				else if (uParam0->f_35[iVar0 /*79*/] == 2)
				{
					iVar2 = iVar0;
				}
			}
			else
			{
				iVar1 = (iVar1 - 1);
			}
			iVar0++;
		}
		if (iVar1 <= 1)
		{
			if (!func_12(&(uParam0->f_24)))
			{
				func_10(&(uParam0->f_24), 0, 0);
			}
			else if (func_8(&(uParam0->f_24), 1000, 0))
			{
				func_7(uParam0, 8);
			}
			else if (func_8(&(uParam0->f_24), 500, 0))
			{
				if (iVar2 > -1)
				{
					Local_159.f_1 = iVar2;
				}
			}
		}
	}
}

void func_18(var uParam0)//Position - 0x9F1
{
	if (unk_0x8E1421E2A2A2FBD4())
	{
		if (func_12(&(uParam0->f_18)))
		{
			if (func_8(&(uParam0->f_18), 2000, 0) && !unk_0xC80D31E4B587871C(iLocal_154, 1))
			{
				func_19(unk_0xEBD55014C579F626() + 1250);
				unk_0x872F1C1F8587CCC7(&iLocal_154, 1);
			}
			if (func_8(&(uParam0->f_18), 3000, 0))
			{
				func_7(uParam0, 7);
				unk_0x0EE72DB1CD8A3B86(&iLocal_154, 1);
			}
		}
	}
}

void func_19(var uParam0)//Position - 0xA56
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 2017957426;
	vVar0.y = unk_0x9EB17624F44A8DA4();
	vVar0.z = uParam0;
	iVar1 = func_20(1);
	if (!iVar1 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &vVar0, 3, iVar1);
	}
}

var func_20(int iParam0)//Position - 0xA8F
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
		{
			iVar2 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar1));
			if (func_21(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x9EB17624F44A8DA4() || iParam0)
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_21(int iParam0, bool bParam1, bool bParam2)//Position - 0xAEC
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

void func_22(var uParam0)//Position - 0xB36
{
	int iVar0;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		iVar0 = unk_0x5C6098C2BAD00378();
		if (iVar0 == 1)
		{
			func_7(uParam0, 10);
			return;
		}
		if (func_12(&(uParam0->f_16)))
		{
			if (func_8(&(uParam0->f_16), 2000, 0))
			{
				func_7(uParam0, 6);
			}
		}
	}
}

void func_23(var uParam0)//Position - 0xB7D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		if (!func_12(&(uParam0->f_32)))
		{
			func_10(&(uParam0->f_32), 0, 0);
		}
		else if (func_8(&(uParam0->f_32), 1000, 0))
		{
			iVar0 = unk_0x5C6098C2BAD00378();
			if (iVar0 == 1)
			{
				func_7(uParam0, 10);
				return;
			}
			bVar4 = true;
			switch (Local_159.f_77)
			{
				case 0:
					iVar1 = 0;
					while (iVar1 <= (unk_0xB72D370CB7ABC3EF() - 1))
					{
						if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)) && Local_160[iVar1 /*2*/] > -1)
						{
							Local_159.f_2[iVar1] = Local_160[iVar1 /*2*/];
						}
						else
						{
							Local_159.f_2[iVar1] = -1;
						}
						iVar1++;
					}
					Local_159.f_77 = 1;
					break;
				
				case 1:
					iVar1 = 0;
					while (iVar1 <= (unk_0xB72D370CB7ABC3EF() - 1))
					{
						if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
						{
							if (Local_159.f_2[iVar1] == -1)
							{
								Local_159.f_2[iVar1] = func_24();
							}
						}
						iVar1++;
					}
					Local_159.f_77 = 2;
					break;
				
				case 2:
					iVar1 = 0;
					while (iVar1 <= (unk_0xB72D370CB7ABC3EF() - 1))
					{
						if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
						{
							iVar2 = 0;
							while (iVar2 <= (unk_0xB72D370CB7ABC3EF() - 1))
							{
								if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar2)))
								{
									if (iVar2 != iVar1 && (Local_159.f_2[iVar1] == Local_159.f_2[iVar2] || Local_159.f_2[iVar1] == -1))
									{
										Local_159.f_2[iVar1] = -1;
										Local_159.f_77 = 1;
										return;
									}
								}
								iVar2++;
							}
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 <= (unk_0xB72D370CB7ABC3EF() - 1))
					{
						if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
						{
							if (Local_159.f_2[iVar1] != -1)
							{
								iVar3 = func_24();
								if (iVar3 != -1 && iVar3 < Local_159.f_2[iVar1])
								{
									Local_159.f_2[iVar1] = iVar3;
									return;
								}
							}
						}
						iVar1++;
					}
					Local_159.f_77 = 3;
					break;
				
				case 3:
					iVar1 = 0;
					while (iVar1 <= (unk_0xB72D370CB7ABC3EF() - 1))
					{
						if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
						{
							if (!unk_0xC80D31E4B587871C(Local_160[iVar1 /*2*/].f_1, 5))
							{
								bVar4 = false;
							}
						}
						iVar1++;
					}
					if (bVar4)
					{
						func_9(&(uParam0->f_12));
						func_9(&(uParam0->f_32));
						func_7(uParam0, 5);
					}
					break;
				}
			}
	}
}

int func_24()//Position - 0xDD9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
	{
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (Local_159.f_2[iVar1] == iVar0)
			{
				iVar2 = 1;
			}
			else
			{
				iVar1++;
			}
		}
		if (iVar2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25(var uParam0)//Position - 0xE32
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		iVar0 = 1;
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar2)) && Local_160[iVar2 /*2*/] > -1)
			{
				if (!unk_0xC80D31E4B587871C(Local_160[iVar2 /*2*/].f_1, 6))
				{
					bVar1 = true;
				}
				if (unk_0xC80D31E4B587871C(Local_160[iVar2 /*2*/].f_1, 2))
				{
					iVar0 = 0;
				}
			}
			iVar2++;
		}
		if ((!func_12(&(uParam0->f_14)) && !func_11(uParam0)) && !bVar1)
		{
			func_10(&(uParam0->f_14), 0, 0);
		}
		else
		{
			if (bVar1 || func_11(uParam0))
			{
				func_9(&(uParam0->f_14));
				return;
			}
			iVar3 = unk_0x5C6098C2BAD00378();
			if ((iVar0 && iVar3 > 1) || func_8(&(uParam0->f_14), 30000, 0))
			{
				if (!func_12(&(uParam0->f_12)))
				{
					func_10(&(uParam0->f_12), 0, 0);
				}
				else if (func_8(&(uParam0->f_12), 3000, 0) && !func_11(uParam0))
				{
					func_9(&(uParam0->f_12));
					if (iVar3 == 1)
					{
						func_7(uParam0, 10);
						return;
					}
					Local_159.f_77 = 0;
					func_7(uParam0, 4);
					func_6(0);
					func_5(0, 0);
				}
			}
		}
	}
}

void func_26(var uParam0)//Position - 0xF76
{
	bool bVar0;
	int iVar1;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)) && Local_160[iVar1 /*2*/] > -1)
			{
				if (!unk_0xC80D31E4B587871C(Local_160[iVar1 /*2*/].f_1, 1))
				{
					bVar0 = false;
				}
				else
				{
					iVar1++;
				}
				if (bVar0)
				{
					func_7(uParam0, 3);
				}
			}

void func_27(var uParam0)//Position - 0xFDE
{
	bool bVar0;
	int iVar1;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)) && Local_160[iVar1 /*2*/] > -1)
			{
				if (!unk_0xC80D31E4B587871C(Local_160[iVar1 /*2*/].f_1, 0))
				{
					bVar0 = false;
				}
				else
				{
					iVar1++;
				}
				if (bVar0)
				{
					func_7(uParam0, 2);
				}
			}

void func_28(var uParam0)//Position - 0x1046
{
	int iVar0;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
			{
				if (Local_160[iVar0 /*2*/] == -1)
				{
					return;
				}
			}
			iVar0++;
		}
		func_7(uParam0, 1);
	}
}

void func_29(var uParam0)//Position - 0x108E
{
	unk_0xE02E32C69260FBB7("DLC_Exec_Arc_Mac_Playing_Game_Scene");
	unk_0x0B9D04994D02CC2F(uParam0->f_3);
	unk_0x0B9D04994D02CC2F(uParam0->f_7);
	if (unk_0x622FF3AE4B1D07C3() != -1)
	{
		unk_0x0B9D04994D02CC2F(uParam0->f_35[unk_0x622FF3AE4B1D07C3() /*79*/].f_5);
	}
	if (unk_0x7CCE41E8E97028E7())
	{
		unk_0x8E7C072C41DF97BF();
	}
	func_47();
	Global_4456448.f_138520 = 0;
	func_46();
	Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_577 = 0;
	func_45(0, 1, 1, 0);
	func_44();
	func_43();
	unk_0xF40900F61CC88931(3, true);
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0xA68F7B004463AB6F(&(uParam0->f_34));
	}
	if (func_41() && !unk_0x40189ECE75CF9724())
	{
		if (unk_0x3A711520F83BAE98())
		{
			func_32(unk_0x9EB17624F44A8DA4(), 1, 0);
		}
		else
		{
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
		}
	}
	func_31(1);
	func_183(uParam0, 12);
	func_211(0);
	func_30();
}

void func_30()//Position - 0x1161
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_31(bool bParam0)//Position - 0x116D
{
	Global_1655667.f_1 = 0;
	Global_1655667 = 0;
	if (unk_0x9EB17624F44A8DA4() != -1)
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_3 = 0;
	}
	if (bParam0)
	{
		func_10(&(Global_1655667.f_2), 0, 0);
	}
	else
	{
		func_9(&(Global_1655667.f_2));
	}
}

void func_32(int iParam0, bool bParam1, int iParam2)//Position - 0x11B5
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
		if (!func_41())
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
				else if (bVar13 || (!func_38(unk_0x9EB17624F44A8DA4(), 0) && !func_37()))
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
				if (!func_36(iVar25) && !unk_0xDDF5130488C0B76A(iVar25))
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
				func_35();
				func_34();
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
				if (!func_36(iVar25) && !unk_0xDDF5130488C0B76A(iVar25))
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
					if (func_33(Global_4456448.f_143970))
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

bool func_33(int iParam0)//Position - 0x1597
{
	return iParam0 == 17;
}

void func_34()//Position - 0x15A4
{
	vector3 vVar0;
	
	Global_2436181.f_1117 = 0;
	Global_2436181.f_1118 = 0;
	Global_2436181.f_1119 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2436181.f_1124 = -1;
	Global_2436181.f_1125 = 0;
	Global_2405047.f_2650 = { vVar0 };
}

void func_35()//Position - 0x15F1
{
	Global_2405047.f_675 = 0;
	Global_2405047.f_2693 = 0;
	Global_2405047.f_508 = 0;
	Global_2405047.f_587 = 0;
	Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_222 = 0;
	Global_2405047.f_2649 = 0;
}

int func_36(int iParam0)//Position - 0x162F
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

bool func_37()//Position - 0x1660
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

bool func_38(int iParam0, int iParam1)//Position - 0x1671
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_39(-1, 0) == 8;
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

int func_39(int iParam0, bool bParam1)//Position - 0x16BC
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_40();
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

int func_40()//Position - 0x16FD
{
	return Global_1312736;
}

int func_41()//Position - 0x1709
{
	if (func_42() == 0)
	{
		return 1;
	}
	return 0;
}

int func_42()//Position - 0x171E
{
	return Global_1312466.f_18;
}

void func_43()//Position - 0x172C
{
	unk_0x137FC8E0F58D9E0B("LineArcadeMinigame");
	unk_0x751FF861325F816B("DLC_EXEC1/OFFICE_BOARDROOM");
	unk_0xF40900F61CC88931(3, false);
	unk_0x0EE72DB1CD8A3B86(&Global_1655667, 6);
	unk_0x0EE72DB1CD8A3B86(&Global_1655667, 7);
}

void func_44()//Position - 0x1759
{
	Global_2436181.f_1040.f_10 = 0;
}

int func_45(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x176B
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

void func_46()//Position - 0x179E
{
	if (Global_1656139)
	{
	}
	Global_1656139 = 0;
}

void func_47()//Position - 0x17B2
{
	if (!Global_1312568)
	{
		return;
	}
	func_48();
}

void func_48()//Position - 0x17C9
{
	Global_1312568 = 0;
	StringCopy(&(Global_1312568.f_1), "", 24);
	Global_1312568.f_7 = 0;
}

void func_49(var uParam0)//Position - 0x17E8
{
	func_56(uParam0);
	func_52(uParam0);
	if (unk_0xC80D31E4B587871C(uParam0->f_2, 16))
	{
		func_51(uParam0);
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 16);
	}
	if (unk_0xCCCA18C9A006FF83(uParam0->f_7))
	{
		unk_0x4AFBCBFDE748D4E0(uParam0->f_7, "Game_Over_Blink", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
	}
	if (!func_12(&(uParam0->f_30)))
	{
		func_10(&(uParam0->f_30), 0, 0);
	}
	else if (func_8(&(uParam0->f_30), 5000, 0))
	{
		func_183(uParam0, 11);
		func_50(0);
	}
	if (unk_0xE8C126B7ADBB9D63(2, 201) || unk_0xE8C126B7ADBB9D63(2, 202))
	{
		func_183(uParam0, 11);
		func_50(0);
	}
}

void func_50(bool bParam0)//Position - 0x188C
{
	if (bParam0)
	{
		unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_3), 5);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_3), 5);
	}
}

void func_51(var uParam0)//Position - 0x18C0
{
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_34, "HIDE_LOBBY");
		unk_0x271AA5469AF471B3();
	}
}

void func_52(var uParam0)//Position - 0x18E3
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_2, 12))
	{
		func_53(uParam0, "DCTL_GAMEOVER", 0, 1);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 12);
	}
}

void func_53(var uParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x190E
{
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_34, "SET_CENTRAL_MESSAGE");
		func_55(sParam1);
		unk_0xD07D5CD276368D36(iParam2);
		unk_0xD07D5CD276368D36(iParam3);
		func_54("");
		unk_0x271AA5469AF471B3();
	}
}

void func_54(char* sParam0)//Position - 0x194A
{
	unk_0x8686005F83E832AE(sParam0);
}

void func_55(char* sParam0)//Position - 0x1958
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_56(var uParam0)//Position - 0x196A
{
	int iVar0;
	
	iVar0 = 255;
	func_57(0f, 0f, 1f, 1f, 0, 0, 0, iVar0);
	unk_0xEFB3EC0CDCC33841("LineArcadeMinigame", "Degenatron_DontCrossTheLine_Game", 0,5f, 0,5f, (1f * uParam0->f_9), 1f, 0f, 255, 255, 255, iVar0, 0);
}

void func_57(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x19A5
{
	unk_0x09C2CBFA4CD804AC((fParam0 + (fParam2 * 0,5f)), (fParam1 + (fParam3 * 0,5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_58(var uParam0)//Position - 0x19D4
{
	if (unk_0xC80D31E4B587871C(uParam0->f_2, 15))
	{
		func_81(uParam0);
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 15);
	}
	func_56(uParam0);
	func_76(uParam0);
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0x4FB260623DD93924(2, 200, 1);
	}
	if (!unk_0x0F30C1F1717A6437())
	{
		if ((unk_0xE8C126B7ADBB9D63(2, 201) && !unk_0xC80D31E4B587871C(Local_160[iLocal_153 /*2*/].f_1, 3)) && !unk_0xC80D31E4B587871C(Local_160[iLocal_153 /*2*/].f_1, 4))
		{
			func_75(3);
		}
		else if ((unk_0xE8C126B7ADBB9D63(2, 202) && !unk_0xC80D31E4B587871C(Local_160[iLocal_153 /*2*/].f_1, 3)) && !unk_0xC80D31E4B587871C(Local_160[iLocal_153 /*2*/].f_1, 4))
		{
			func_75(4);
		}
	}
	if (func_74())
	{
		func_6(1);
	}
	if (!unk_0xC80D31E4B587871C(Local_160[iLocal_153 /*2*/].f_1, 3) && !unk_0xC80D31E4B587871C(Local_160[iLocal_153 /*2*/].f_1, 4))
	{
		if (!unk_0xC80D31E4B587871C(uParam0->f_2, 4))
		{
			unk_0x39A975B87A12AB75("DCTL_REPLAYHELP", 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 5);
		}
	}
	func_60(uParam0, 1);
	func_59(uParam0);
	if (Local_159 == 10)
	{
		unk_0x0B9D04994D02CC2F(uParam0->f_3);
		unk_0x4AFBCBFDE748D4E0(-1, "Music_Game_Over", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 4);
		func_183(uParam0, 10);
		func_50(1);
		func_6(0);
		func_5(0, 0);
	}
	else if (Local_159 == 4)
	{
		if (unk_0xC80D31E4B587871C(Local_160[iLocal_153 /*2*/].f_1, 4) || unk_0xC80D31E4B587871C(Local_160[iLocal_153 /*2*/].f_1, 2))
		{
			func_183(uParam0, 11);
			return;
		}
		unk_0x0EE72DB1CD8A3B86(&iLocal_154, 0);
		func_14(uParam0);
		func_6(0);
		func_5(0, 0);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 4);
		func_183(uParam0, 4);
	}
}

void func_59(var uParam0)//Position - 0x1B89
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_160[iVar0 /*2*/] > -1)
		{
			if (unk_0xC80D31E4B587871C(Local_160[iVar0 /*2*/].f_1, 3) && !unk_0xC80D31E4B587871C(uParam0->f_35[iVar0 /*79*/].f_3, 2))
			{
				unk_0x4AFBCBFDE748D4E0(uParam0->f_6, "Insert_Coin", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				unk_0x872F1C1F8587CCC7(&(uParam0->f_35[iVar0 /*79*/].f_3), 2);
				if (unk_0xC80D31E4B587871C(uParam0->f_35[iVar0 /*79*/].f_3, 3))
				{
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_35[iVar0 /*79*/].f_3), 3);
				}
			}
			else if (unk_0xC80D31E4B587871C(Local_160[iVar0 /*2*/].f_1, 4) && !unk_0xC80D31E4B587871C(uParam0->f_35[iVar0 /*79*/].f_3, 3))
			{
				unk_0x4AFBCBFDE748D4E0(uParam0->f_6, "Cancel", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				unk_0x872F1C1F8587CCC7(&(uParam0->f_35[iVar0 /*79*/].f_3), 3);
				if (unk_0xC80D31E4B587871C(uParam0->f_35[iVar0 /*79*/].f_3, 2))
				{
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_35[iVar0 /*79*/].f_3), 2);
				}
			}
		}
		iVar0++;
	}
}

void func_60(var uParam0, bool bParam1)//Position - 0x1C90
{
	int iVar0;
	int iVar1;
	
	if (Local_159.f_2[iLocal_153] != Local_160[iLocal_153 /*2*/])
	{
		Local_160[iLocal_153 /*2*/] = Local_159.f_2[iLocal_153];
	}
	if (!unk_0xC80D31E4B587871C(iLocal_154, 2))
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
			{
				if (Local_160[iVar0 /*2*/] > -1 && (unk_0xAB019B170BF1309C(&(Local_159.f_12[iVar0 /*16*/])) || unk_0xAB019B170BF1309C(&(Local_158[iVar0 /*16*/]))))
				{
					unk_0x872F1C1F8587CCC7(&iLocal_154, 2);
				}
			}
			else if (!(unk_0xAB019B170BF1309C(&(Local_159.f_12[iVar0 /*16*/])) || unk_0xAB019B170BF1309C(&(Local_158[iVar0 /*16*/]))))
			{
				unk_0x872F1C1F8587CCC7(&iLocal_154, 2);
			}
			iVar0++;
		}
	}
	if (unk_0xC80D31E4B587871C(iLocal_154, 2))
	{
		func_66();
		iVar1 = 1;
		iVar0 = 0;
		while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
			{
				if ((Local_160[iVar0 /*2*/] == -1 || unk_0xAB019B170BF1309C(&(Local_159.f_12[iVar0 /*16*/]))) || unk_0xAB019B170BF1309C(&(Local_158[iVar0 /*16*/])))
				{
					iVar1 = 0;
				}
			}
			else if (!unk_0xAB019B170BF1309C(&(Local_159.f_12[iVar0 /*16*/])) || !unk_0xAB019B170BF1309C(&(Local_158[iVar0 /*16*/])))
			{
				iVar1 = 0;
			}
			iVar0++;
		}
		if (iVar1 == 1)
		{
			if (bParam1)
			{
				func_61(uParam0, "DCTL_REPLAY", 0);
			}
			else
			{
				func_61(uParam0, "DCTL_INSERT", 0);
			}
			unk_0x0EE72DB1CD8A3B86(&iLocal_154, 2);
		}
	}
}

void func_61(var uParam0, char* sParam1, int iParam2)//Position - 0x1E0B
{
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_34, "INIT_LOBBY");
		func_55(sParam1);
		unk_0xD07D5CD276368D36(iParam2);
		func_62(0);
		func_62(1);
		func_62(2);
		func_62(3);
		if (iLocal_153 > -1 && Local_160[iLocal_153 /*2*/] > -1)
		{
			unk_0xD07D5CD276368D36(Local_160[iLocal_153 /*2*/]);
		}
		unk_0x271AA5469AF471B3();
	}
}

void func_62(int iParam0)//Position - 0x1E6F
{
	struct<16> Var0;
	struct<16> Var1;
	
	Var0 = { func_65(iParam0) };
	Var1 = { func_63(iParam0) };
	unk_0x81D71E37E95798C1(&Var1);
	func_54(&Var0);
}

struct<16> func_63(int iParam0)//Position - 0x1E99
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, func_64(), 64);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)) && Local_160[iVar1 /*2*/] == iParam0)
		{
			Var0 = { Local_158[iVar1 /*16*/] };
		}
		iVar1++;
	}
	return Var0;
}

var func_64()//Position - 0x1EEB
{
	var uVar0;
	
	return uVar0;
}

struct<16> func_65(int iParam0)//Position - 0x1EF5
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)) && Local_160[iVar1 /*2*/] == iParam0)
		{
			Var0 = { Local_159.f_12[iVar1 /*16*/] };
		}
		iVar1++;
	}
	return Var0;
}

void func_66()//Position - 0x1F48
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
	{
		if (iVar0 < 4)
		{
			if (unk_0x8E1421E2A2A2FBD4())
			{
				StringCopy(&(Local_159.f_12[iVar0 /*16*/]), "", 64);
			}
			StringCopy(&(Local_158[iVar0 /*16*/]), func_64(), 64);
		}
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_160[iVar0 /*2*/] > -1)
		{
			if (unk_0x8E1421E2A2A2FBD4())
			{
				StringCopy(&(Local_159.f_12[iVar0 /*16*/]), unk_0xDE2D3B9654C31EB3(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0))), 64);
			}
			iVar1 = func_67(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0)));
			if (iVar1 != 0)
			{
				StringCopy(&(Local_158[iVar0 /*16*/]), unk_0xF85532D53BDB3017(iVar1), 64);
			}
		}
		iVar0++;
	}
}

int func_67(int iParam0)//Position - 0x1FEF
{
	int iVar0;
	
	iVar0 = func_70(iParam0);
	if (iVar0 == -1)
	{
		func_68(iParam0, 1);
		return 0;
	}
	Global_1369176[iVar0 /*5*/].f_4 = 1;
	return Global_1369176[iVar0 /*5*/].f_2;
}

void func_68(int iParam0, bool bParam1)//Position - 0x2025
{
	if (!func_21(iParam0, 0, 1))
	{
		return;
	}
	if (func_70(iParam0) != -1)
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
	if (func_69(iParam0))
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

int func_69(int iParam0)//Position - 0x2091
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

int func_70(int iParam0)//Position - 0x20C3
{
	int iVar0;
	
	if (!func_21(iParam0, 0, 1))
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
			func_71(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_71(int iParam0)//Position - 0x2142
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
	func_72(&(Global_1369176[iVar2 /*5*/]));
	Global_1369337 = (Global_1369337 - 1);
}

void func_72(var uParam0)//Position - 0x21F8
{
	*uParam0 = 0;
	uParam0->f_1 = func_73();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x3A711520F83BAE98())
	{
		uParam0->f_3 = unk_0xD1952A425B78FFC0();
	}
}

int func_73()//Position - 0x2225
{
	return -1;
}

int func_74()//Position - 0x222E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
		{
			if (unk_0xC80D31E4B587871C(Local_160[iVar1 /*2*/].f_1, 3))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 > 1)
	{
		return 1;
	}
	return 0;
}

void func_75(int iParam0)//Position - 0x227D
{
	unk_0x0EE72DB1CD8A3B86(&(Local_160[iLocal_153 /*2*/].f_1), 2);
	unk_0x0EE72DB1CD8A3B86(&(Local_160[iLocal_153 /*2*/].f_1), 3);
	unk_0x0EE72DB1CD8A3B86(&(Local_160[iLocal_153 /*2*/].f_1), 4);
	unk_0x872F1C1F8587CCC7(&(Local_160[iLocal_153 /*2*/].f_1), iParam0);
}

void func_76(var uParam0)//Position - 0x22BE
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_2, 16))
	{
		func_61(uParam0, "DCTL_REPLAY", 0);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 16);
	}
	func_79(uParam0);
	func_77(uParam0);
}

void func_77(var uParam0)//Position - 0x22F5
{
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_34, "SET_MICS");
		unk_0xD07D5CD276368D36(func_78(0));
		unk_0xD07D5CD276368D36(func_78(1));
		unk_0xD07D5CD276368D36(func_78(2));
		unk_0xD07D5CD276368D36(func_78(3));
		unk_0x271AA5469AF471B3();
	}
}

int func_78(int iParam0)//Position - 0x233D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_160[iVar0 /*2*/] == iParam0)
		{
			iVar1 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0));
			if (!unk_0xE13E5EE64FACC268(iVar1))
			{
				return 0;
			}
			if (unk_0x52753E0E1429BC4E(iVar1))
			{
				return 1;
			}
			if (unk_0xA150D4260D19B58F(iVar1))
			{
				return 3;
			}
			return 2;
		}
		iVar0++;
	}
	return 0;
}

void func_79(var uParam0)//Position - 0x23AC
{
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_34, "UPDATE_LOBBY");
		func_80(0);
		func_80(1);
		func_80(2);
		func_80(3);
		unk_0x271AA5469AF471B3();
	}
}

void func_80(int iParam0)//Position - 0x23E4
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < Local_160)
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)) && Local_160[iVar1 /*2*/] == iParam0)
		{
			bVar0 = true;
			if (unk_0xC80D31E4B587871C(Local_160[iVar1 /*2*/].f_1, 3))
			{
				unk_0xD07D5CD276368D36(2);
			}
			else if (unk_0xC80D31E4B587871C(Local_160[iVar1 /*2*/].f_1, 4))
			{
				unk_0xD07D5CD276368D36(1);
			}
			else
			{
				unk_0xD07D5CD276368D36(0);
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		unk_0xD07D5CD276368D36(0);
	}
}

void func_81(var uParam0)//Position - 0x2464
{
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_34, "HIDE_HUD");
		unk_0x271AA5469AF471B3();
	}
}

void func_82(var uParam0)//Position - 0x2488
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC80D31E4B587871C(uParam0->f_2, 15))
	{
		func_81(uParam0);
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 15);
	}
	func_56(uParam0);
	func_122(uParam0);
	if (Local_159 >= 9)
	{
		func_5(1, 0);
		if (unk_0xCCCA18C9A006FF83(uParam0->f_3))
		{
			unk_0x4AFBCBFDE748D4E0(uParam0->f_3, "Background", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		}
		iVar0 = func_121(3773, -1, 0);
		iVar0++;
		func_120(3773, iVar0, -1, 1, 0);
		if (Local_159.f_1 == iLocal_153)
		{
			iVar1 = func_121(3772, -1, 0);
			iVar1++;
			func_120(3772, iVar1, -1, 1, 0);
			if (iVar1 >= Global_262145.f_15634)
			{
				func_119(7551, 1, -1, 1);
				if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == joaat("mp_m_freemode_01"))
				{
					func_83(func_116(-621355603, 3), 1, 1, 0, 0, -1);
				}
				else
				{
					func_83(func_116(-46521805, 4), 1, 1, 0, 0, -1);
				}
			}
		}
		func_66();
		func_183(uParam0, 9);
	}
	if (!unk_0xC80D31E4B587871C(Local_160[iLocal_153 /*2*/].f_1, 2))
	{
		func_75(2);
	}
}

void func_83(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x2599
{
	if (iParam4 || bParam1)
	{
		if ((((((iParam0 != 87 && iParam0 != 89) && iParam0 != 88) && iParam0 != 13) && iParam0 != 14) && iParam0 != 15) && iParam0 != 16)
		{
			if (iParam0 != 71 && iParam0 != 72)
			{
				func_115(1235, iParam5);
			}
		}
		else
		{
			func_115(1235, iParam5);
		}
	}
	if (bParam1)
	{
		if (!func_114(iParam0, iParam5))
		{
			func_111(iParam0, 1, iParam5);
		}
		if (iParam2 && iParam0 < 129)
		{
			if (func_109(iParam0) == 0)
			{
				func_103(12, func_108(iParam0, 3), func_107(iParam0, 3), func_106(iParam0, 3), func_105(iParam0, 3), -1, 0, 0, 0, -1, 0);
				func_102(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_97(iParam0, 1, iParam5);
		}
		if (Global_1357530.f_1043 == 0)
		{
			Global_1357530.f_1044 = iParam0;
		}
	}
	else
	{
		if (func_114(iParam0, iParam5))
		{
			func_111(iParam0, 0, iParam5);
			func_93(1235, -1, iParam5);
		}
		if (func_109(iParam0) == 1)
		{
			func_102(iParam0, 0);
		}
		if (func_92(iParam0, iParam5))
		{
			func_84(iParam0, 0, iParam5);
		}
	}
}

void func_84(int iParam0, bool bParam1, int iParam2)//Position - 0x26E3
{
	if (bParam1)
	{
		if (!func_92(iParam0, iParam2))
		{
			func_85(iParam0, 1, iParam2);
		}
	}
	else if (func_92(iParam0, iParam2))
	{
		func_85(iParam0, 0, iParam2);
	}
}

void func_85(int iParam0, bool bParam1, int iParam2)//Position - 0x271C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_91(iParam0, iParam2);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			unk_0x872F1C1F8587CCC7(&iVar0, func_90(iVar1));
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&iVar0, func_90(iVar1));
		}
		func_120(func_86(iParam0), iVar0, iParam2, 1, 0);
	}
}

int func_86(int iParam0)//Position - 0x276B
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = func_89(iVar0);
	if ((func_88() == 0 || func_87() == 0) || (func_88() == 999 && func_87() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1045;
				break;
			
			case 1:
				return 1046;
				break;
			
			case 2:
				return 1047;
				break;
			
			case 3:
				return 1048;
				break;
			
			case 4:
				return 1049;
				break;
			
			case 5:
				return 1050;
				break;
			
			case 6:
				return 1484;
				break;
			
			case 7:
				return 1485;
				break;
			
			case 8:
				return 1486;
				break;
			
			case 9:
				return 1487;
				break;
			
			case 10:
				return 1944;
				break;
			
			case 11:
				return 1945;
				break;
			
			case 12:
				return 1946;
				break;
			
			case 13:
				return 2412;
				break;
			
			case 14:
				return 2432;
				break;
			
			case 15:
				return 2435;
				break;
			
			case 16:
				return 2438;
				break;
			
			case 17:
				return 2601;
				break;
			
			case 18:
				return 2604;
				break;
			
			case 19:
				return 2607;
				break;
			
			case 20:
				return 3767;
				break;
			
			case 21:
				return 3770;
				break;
			
			case 22:
				return 3845;
				break;
			
			case 23:
				return 3848;
				break;
			
			case 24:
				return 3851;
				break;
			
			case 25:
				return 3854;
				break;
			
			case 26:
				return 5345;
			
			case 27:
				return 5348;
				break;
			
			case 28:
				return 5450;
				break;
			
			case 29:
				return 5453;
				break;
			
			case 30:
				return 6412;
				break;
			
			case 31:
				return 6415;
				break;
		}
		return 7872;
	}
	return 7872;
}

int func_87()//Position - 0x299C
{
	return Global_25234;
}

int func_88()//Position - 0x29A7
{
	return Global_25233;
}

int func_89(int iParam0)//Position - 0x29B2
{
	return (iParam0 / 32);
}

int func_90(int iParam0)//Position - 0x29BF
{
	return (iParam0 % 32);
}

int func_91(int iParam0, int iParam1)//Position - 0x29CC
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_86(iParam0);
	if (iVar0 == 7872)
	{
		return 0;
	}
	uVar1 = func_121(iVar0, iParam1, 0);
	return uVar1;
}

bool func_92(int iParam0, int iParam1)//Position - 0x29F8
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_91(iParam0, iParam1);
	iVar1 = func_90(iParam0);
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(iVar0, iVar1);
}

void func_93(int iParam0, int iParam1, int iParam2)//Position - 0x2A3A
{
	int iVar0;
	
	iVar0 = func_121(iParam0, func_96(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_95(iParam0))
	{
		func_120(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_94(iParam0, iVar0, iParam2, 1);
	}
}

void func_94(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2A7C
{
	int iVar0;
	
	iVar0 = Global_2523060[iParam0 /*3*/][func_96(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1368159[func_96(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1368165[func_96(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1368171[func_96(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1368177[func_96(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1368135[func_96(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1368141[func_96(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1368147[func_96(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1368153[func_96(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1368111[func_96(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1368117[func_96(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1368123[func_96(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1368129[func_96(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1368183[func_96(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1368189[func_96(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1368195[func_96(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1368201[func_96(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1368207[func_96(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1368213[func_96(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1368219[func_96(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2549199[0 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2549199[1 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2549199[2 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2549199[3 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 7052:
			Global_2549282[func_96(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1368225[func_96(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1368231[func_96(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1368237[func_96(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1368243[func_96(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2549239[0 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2549239[1 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2549239[2 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2549239[3 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2549239[4 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549285[0 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549285[1 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549285[2 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549285[3 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549285[4 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549301[0 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549301[1 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549301[2 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549301[3 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549301[4 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2549239[5 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2549199[4 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549317[func_96(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549326[func_96(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549320[func_96(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549329[func_96(iParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549323[func_96(iParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549332[func_96(iParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549335[func_96(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2549239[6 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2549199[5 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2549239[7 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2549199[6 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2549239[8 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2549199[7 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2549239[9 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2549199[8 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2549239[10 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2549199[9 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2549239[11 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2549199[10 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2549239[12 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2549199[11 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2549239[13 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2549199[12 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_95(int iParam0)//Position - 0x3147
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

int func_96(var uParam0)//Position - 0x32FD
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_40();
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

void func_97(int iParam0, bool bParam1, int iParam2)//Position - 0x3331
{
	if (bParam1)
	{
		if (!func_101(iParam0))
		{
			func_98(iParam0, 1, iParam2);
		}
	}
	else if (func_101(iParam0))
	{
		func_98(iParam0, 0, iParam2);
	}
}

void func_98(var uParam0, bool bParam1, int iParam2)//Position - 0x3366
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_100(uParam0);
	iVar1 = uParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			unk_0x872F1C1F8587CCC7(&iVar0, func_90(iVar1));
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&iVar0, func_90(iVar1));
		}
		func_120(func_99(uParam0), iVar0, iParam2, 1, 0);
	}
}

int func_99(var uParam0)//Position - 0x33B3
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_89(iVar0);
	if ((func_88() == 0 || func_87() == 0) || (func_88() == 999 && func_87() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1040;
				break;
			
			case 1:
				return 1041;
				break;
			
			case 2:
				return 1042;
				break;
			
			case 3:
				return 1043;
				break;
			
			case 4:
				return 1044;
				break;
			
			case 5:
				return 1488;
				break;
			
			case 6:
				return 1489;
				break;
			
			case 7:
				return 1490;
				break;
			
			case 8:
				return 1491;
				break;
			
			case 9:
				return 1940;
				break;
			
			case 10:
				return 1941;
				break;
			
			case 11:
				return 1942;
				break;
			
			case 12:
				return 1943;
				break;
			
			case 13:
				return 2413;
				break;
			
			case 14:
				return 2433;
				break;
			
			case 15:
				return 2436;
				break;
			
			case 16:
				return 2439;
				break;
			
			case 17:
				return 2602;
				break;
			
			case 18:
				return 2605;
				break;
			
			case 19:
				return 2608;
				break;
			
			case 20:
				return 3768;
				break;
			
			case 21:
				return 3771;
				break;
			
			case 22:
				return 3846;
				break;
			
			case 23:
				return 3849;
				break;
			
			case 24:
				return 3852;
				break;
			
			case 25:
				return 3855;
				break;
			
			case 26:
				return 5346;
				break;
			
			case 27:
				return 5349;
				break;
			
			case 28:
				return 5451;
				break;
			
			case 29:
				return 5454;
				break;
			
			case 30:
				return 6413;
				break;
			
			case 31:
				return 6416;
				break;
			}
	}
	return 7872;
}

var func_100(var uParam0)//Position - 0x35E1
{
	var uVar0;
	
	uVar0 = func_121(func_99(uParam0), -1, 0);
	return uVar0;
}

bool func_101(var uParam0)//Position - 0x35F9
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_100(uParam0);
	iVar1 = uParam0;
	return unk_0xC80D31E4B587871C(iVar0, func_90(iVar1));
}

void func_102(int iParam0, bool bParam1)//Position - 0x3619
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_2521687.f_1032[func_89(iVar0)]), func_90(iVar0));
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_2521687.f_1032[func_89(iVar0)]), func_90(iVar0));
		}
	}
}

void func_103(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)//Position - 0x3668
{
	int iVar0;
	
	iVar0 = func_104(&Global_1365212);
	Global_1365212[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1365212[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1365212[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1365212[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1365212[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1365212[iVar0 /*106*/].f_97 = iParam5;
	Global_1365212[iVar0 /*106*/].f_104 = iParam9;
	Global_1365212[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		StringCopy(&(Global_1365212[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_104(var uParam0)//Position - 0x3704
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_105(int iParam0, int iParam1)//Position - 0x3733
{
	char* sVar0;
	
	sVar0 = "MPTATTOOS";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "MPTattoos3";
			break;
		
		case 89:
			return "MPTSHIRTAWARDS";
			break;
		
		case 88:
			return "MPTSHIRTAWARDS";
			break;
		
		case 87:
			return "MPTSHIRTAWARDS";
			break;
		
		case 57:
			return "MPTattoos2";
			break;
		
		case 58:
			return "MPTattoos2";
			break;
		
		case 59:
			return "MPTattoos2";
			break;
		
		case 60:
			return "MPTattoos2";
			break;
		
		case 12:
		case 55:
		case 49:
		case 48:
		case 46:
		case 45:
		case 34:
		case 65:
		case 25:
			return "MPTattoos3";
			break;
	}
	return sVar0;
}

char* func_106(int iParam0, int iParam1)//Position - 0x3818
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "TATTOO_WIN_PARLEY";
			break;
		
		case 57:
			return "TATTOO_HOLD_UP_SHOPS_10";
			break;
		
		case 58:
			return "TATTOO_HOLD_UP_SHOPS_25";
			break;
		
		case 59:
			return "TATTOO_HOLD_UP_SHOPS_50";
			break;
		
		case 60:
			return "TATTOO_HOLD_UP_SHOPS_100";
			break;
		
		case 0:
			return "HeadBanger";
			break;
		
		case 1:
			return "theslayer";
			break;
		
		case 2:
			return "clearout";
			break;
		
		case 4:
			return "thehustler";
			break;
		
		case 3:
			return "armoredvantakedowns";
			break;
		
		case 54:
			return "wineverymodeonce";
			break;
		
		case 5:
			return "killplayerbountyhead";
			break;
		
		case 6:
			return "holdworldrecord";
			break;
		
		case 55:
			return "MP_FM_Tat_Award_008";
			break;
		
		case 7:
			return "getrevengekills";
			break;
		
		case 8:
			return "kill3otherracers";
			break;
		
		case 9:
			return "reachrank1";
			break;
		
		case 10:
			return "reachrank2";
			break;
		
		case 11:
			return "reachrank3";
			break;
		
		case 13:
			return "HeadBanger";
			break;
		
		case 14:
			return "HeadBanger";
			break;
		
		case 15:
			return "HeadBanger";
			break;
		
		case 16:
			return "HeadBanger";
			break;
		
		case 89:
			return "RockstarVerifiied";
			break;
		
		case 87:
			return "ReachHordeModeWave";
			break;
		
		case 12:
			return "TATTOO_RACES_WON";
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "Headbanger";
			break;
		
		case 18:
			return "Headbanger";
			break;
		
		case 19:
			return "Headbanger";
			break;
		
		case 20:
			return "Headbanger";
			break;
		
		case 21:
			return "Headbanger";
			break;
		
		case 22:
			return "Headbanger";
			break;
		
		case 23:
			return "Headbanger";
			break;
		
		case 24:
			return "Headbanger";
			break;
		
		case 25:
			return "MP_FM_Tat_002";
			break;
		
		case 26:
			return "Headbanger";
			break;
		
		case 27:
			return "Headbanger";
			break;
		
		case 28:
			return "Headbanger";
			break;
		
		case 61:
			return "Headbanger";
			break;
		
		case 62:
			return "Headbanger";
			break;
		
		case 63:
			return "Headbanger";
			break;
		
		case 64:
			return "Headbanger";
			break;
		
		case 65:
			return "MP_FM_Tat_019";
			break;
		
		case 29:
			return "Headbanger";
			break;
		
		case 30:
			return "Headbanger";
			break;
		
		case 31:
			return "Headbanger";
			break;
		
		case 66:
			return "Headbanger";
			break;
		
		case 32:
			return "Headbanger";
			break;
		
		case 33:
			return "Headbanger";
			break;
		
		case 34:
			return "MP_FM_Tat_023";
			break;
		
		case 35:
			return "Headbanger";
			break;
		
		case 36:
			return "Headbanger";
			break;
		
		case 37:
			return "Headbanger";
			break;
		
		case 38:
			return "Headbanger";
			break;
		
		case 39:
			return "Headbanger";
			break;
		
		case 40:
			return "Headbanger";
			break;
		
		case 67:
			return "Headbanger";
			break;
		
		case 41:
			return "Headbanger";
			break;
		
		case 68:
			return "Headbanger";
			break;
		
		case 42:
			return "Headbanger";
			break;
		
		case 43:
			return "Headbanger";
			break;
		
		case 44:
			return "Headbanger";
			break;
		
		case 45:
			return "MP_FM_Tat_036";
			break;
		
		case 46:
			return "MP_FM_Tat_037";
			break;
		
		case 47:
			return "Headbanger";
			break;
		
		case 48:
			return "MP_FM_Tat_039";
			break;
		
		case 49:
			return "MP_FM_Tat_040";
			break;
		
		case 50:
			return "Headbanger";
			break;
		
		case 51:
			return "Headbanger";
			break;
		
		case 52:
			return "Headbanger";
			break;
		
		case 53:
			return "Headbanger";
			break;
		
		case 69:
			return "Headbanger";
			break;
	}
	return sVar0;
}

char* func_107(int iParam0, int iParam1)//Position - 0x3CC3
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 7:
			return "TAT_FM_REVENKIL_D";
			break;
		
		case 6:
			return "TAT_FM_RECHOLD_d";
			break;
		
		case 8:
			return "TAT_FM_KIL3RACE_D";
			break;
		
		case 5:
			return "TAT_FM_KILb_D";
			break;
		
		case 0:
			return "TAT_FM_HEADBANG_D";
			break;
		
		case 12:
			return "TAT_RACE50_D";
			break;
		
		case 2:
			return "TAT_CLEAROUT_D";
			break;
		
		case 9:
			return "TAT_FM_RANK1_D";
			break;
		
		case 10:
			return "TAT_FM_RANK2_D";
			break;
		
		case 11:
			return "TAT_FM_RANK3_D";
			break;
		
		case 4:
			return "TAT_FM_HUST_D";
			break;
		
		case 1:
			return "TAT_FM_SLAY_D";
			break;
		
		case 54:
			return "TAT_FM_EVERMODE1_D";
			break;
		
		case 3:
			return "TAT_FM_ARVANTAKE_D";
			break;
		
		case 56:
			return "TAT_CHEATER_D";
			break;
		
		case 13:
			return "TAT_CRANKA_D";
			break;
		
		case 14:
			return "TAT_CRANKB_D";
			break;
		
		case 15:
			return "TAT_CRANKC_D";
			break;
		
		case 16:
			return "TAT_CRANKD_D";
			break;
		
		case 89:
			return "TAT_FM_ROCKSTAR_D";
			break;
		
		case 87:
			return "TAT_FM_REDSKULL_D";
			break;
		
		case 55:
			return "TAT_FM_MODDED_D";
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "TAT_RANK10_D";
			break;
		
		case 18:
			return "TAT_RANK20_D";
			break;
		
		case 19:
			return "TAT_RANK20_D";
			break;
		
		case 20:
			return "TAT_RANK10_D";
			break;
		
		case 21:
			return "TAT_RANK20_D";
			break;
		
		case 22:
			return "TAT_RANK10_D";
			break;
		
		case 23:
			return "TAT_RANK10_D";
			break;
		
		case 24:
			return "TAT_RANK20_D";
			break;
		
		case 25:
			return "TAT_TAT9U";
			break;
		
		case 26:
			return "TAT_RANK20_D";
			break;
		
		case 27:
			return "TAT_RANK20_D";
			break;
		
		case 28:
			return "TAT_RANK10_D";
			break;
		
		case 61:
			return "TAT_RANK10_D";
			break;
		
		case 62:
			return "TAT_RANK10_D";
			break;
		
		case 63:
			return "TAT_RANK10_D";
			break;
		
		case 64:
			return "TAT_RANK10_D";
			break;
		
		case 65:
			return "TAT_TAT17U";
			break;
		
		case 29:
			return "TAT_RANK10_D";
			break;
		
		case 30:
			return "TAT_RANK10_D";
			break;
		
		case 31:
			return "TAT_RANK10_D";
			break;
		
		case 66:
			return "TAT_RANK20_D";
			break;
		
		case 32:
			return "TAT_RANK20_D";
			break;
		
		case 33:
			return "TAT_RANK20_D";
			break;
		
		case 34:
			return "TAT_TAT24U";
			break;
		
		case 35:
			return "TAT_RANK20_D";
			break;
		
		case 36:
			return "TAT_RANK20_D";
			break;
		
		case 37:
			return "TAT_RANK20_D";
			break;
		
		case 38:
			return "TAT_RANK20_D";
			break;
		
		case 39:
			return "TAT_RANK20_D";
			break;
		
		case 40:
			return "TAT_RANK20_D";
			break;
		
		case 67:
			return "TAT_RANK20_D";
			break;
		
		case 41:
			return "TAT_RANK20_D";
			break;
		
		case 68:
			return "TAT_RANK20_D";
			break;
		
		case 42:
			return "TAT_RANK20_D";
			break;
		
		case 43:
			return "TAT_RANK20_D";
			break;
		
		case 44:
			return "TAT_RANK20_D";
			break;
		
		case 45:
			return "TAT_TAT37U";
			break;
		
		case 46:
			return "TAT_TAT38U";
			break;
		
		case 47:
			return "TAT_RANK20_D";
			break;
		
		case 48:
			return "TAT_TAT40U";
			break;
		
		case 49:
			return "TAT_TAT41U";
			break;
		
		case 50:
			return "TAT_RANK20_D";
			break;
		
		case 51:
			return "TAT_RANK20_D";
			break;
		
		case 52:
			return "TAT_RANK20_D";
			break;
		
		case 53:
			return "TAT_RANK20_D";
			break;
		
		case 69:
			return "TAT_RANK20_D";
			break;
		
		case 57:
			return "TAT_HOLDUP1V_D";
			break;
		
		case 58:
			return "TAT_HOLDUP5V_D";
			break;
		
		case 59:
			return "TAT_HOLDUP10V_D";
			break;
		
		case 60:
			return "TAT_HOLDUP20V_D";
			break;
	}
	return sVar0;
}

char* func_108(int iParam0, int iParam1)//Position - 0x4170
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "TAT_FM_HEADBANG";
			break;
		
		case 2:
			return "TAT_CLEAROUT";
			break;
		
		case 9:
			return "TAT_FM_RANK1";
			break;
		
		case 10:
			return "TAT_FM_RANK2";
			break;
		
		case 11:
			return "TAT_FM_RANK3";
			break;
		
		case 4:
			return "TAT_FM_HUST";
			break;
		
		case 1:
			return "TAT_FM_SLAY";
			break;
		
		case 54:
			return "TAT_FM_EVERMODE1";
			break;
		
		case 3:
			return "TAT_FM_ARVANTAKE";
			break;
		
		case 7:
			return "TAT_FM_REVENKIL";
			break;
		
		case 5:
			return "TAT_FM_KILb";
			break;
		
		case 8:
			return "TAT_FM_KIL3RACE";
			break;
		
		case 6:
			return "TAT_FM_RECHOLD";
			break;
		
		case 12:
			return "TAT_RACE50";
			break;
		
		case 13:
			return "TAT_CRANKA";
			break;
		
		case 14:
			return "TAT_CRANKB";
			break;
		
		case 15:
			return "TAT_CRANKC";
			break;
		
		case 16:
			return "TAT_CRANKD";
			break;
		
		case 87:
			return "TAT_FM_REDSKULL";
			break;
		
		case 88:
			return "TAT_FM_BELLE";
			break;
		
		case 89:
			return "TAT_FM_ROCKSTAR";
			break;
		
		case 55:
			return "TAT_FM_MODDED";
			break;
		
		case 17:
			return "TAT_FM_TAT1";
			break;
		
		case 18:
			return "TAT_FM_TAT2";
			break;
		
		case 19:
			return "TAT_FM_TAT3";
			break;
		
		case 20:
			return "TAT_FM_TAT4";
			break;
		
		case 21:
			return "TAT_FM_TAT5";
			break;
		
		case 22:
			return "TAT_FM_TAT6";
			break;
		
		case 56:
			return "TAT_CHEATER";
			break;
	}
	switch (iParam0)
	{
		case 23:
			return "TAT_FM_TAT7";
			break;
		
		case 24:
			return "TAT_FM_TAT8";
			break;
		
		case 25:
			return "TAT_FM_TAT9";
			break;
		
		case 26:
			return "TAT_FM_TAT10";
			break;
		
		case 27:
			return "TAT_FM_TAT11";
			break;
		
		case 28:
			return "TAT_FM_TAT12";
			break;
		
		case 61:
			return "TAT_FM_TAT13";
			break;
		
		case 62:
			return "TAT_FM_TAT14";
			break;
		
		case 63:
			return "TAT_FM_TAT15";
			break;
		
		case 64:
			return "TAT_FM_TAT16";
			break;
		
		case 65:
			return "TAT_FM_TAT38";
			break;
		
		case 29:
			return "TAT_FM_TAT18";
			break;
		
		case 30:
			return "TAT_FM_TAT19";
			break;
		
		case 31:
			return "TAT_FM_TAT20";
			break;
		
		case 66:
			return "TAT_FM_TAT21";
			break;
		
		case 32:
			return "TAT_FM_TAT22";
			break;
		
		case 33:
			return "TAT_FM_TAT23";
			break;
		
		case 34:
			return "TAT_FM_TAT24";
			break;
		
		case 35:
			return "TAT_FM_TAT25";
			break;
		
		case 36:
			return "TAT_FM_TAT26";
			break;
		
		case 37:
			return "TAT_FM_TAT27";
			break;
		
		case 38:
			return "TAT_FM_TAT28";
			break;
		
		case 39:
			return "TAT_FM_TAT29";
			break;
		
		case 40:
			return "TAT_FM_TAT30";
			break;
		
		case 67:
			return "TAT_FM_TAT31";
			break;
		
		case 41:
			return "TAT_FM_TAT32";
			break;
		
		case 68:
			return "TAT_FM_TAT33";
			break;
		
		case 42:
			return "TAT_FM_TAT34";
			break;
		
		case 43:
			return "TAT_FM_TAT35";
			break;
		
		case 44:
			return "TAT_FM_TAT36";
			break;
		
		case 45:
			return "TAT_FM_TAT37";
			break;
		
		case 46:
			return "TAT_FM_TAT41";
			break;
		
		case 47:
			return "TAT_FM_TAT39";
			break;
		
		case 48:
			return "TAT_FM_TAT40";
			break;
		
		case 49:
			return "TAT_FM_TAT17";
			break;
		
		case 50:
			return "TAT_FM_TAT42";
			break;
		
		case 51:
			return "TAT_FM_TAT43";
			break;
		
		case 52:
			return "TAT_FM_TAT44";
			break;
		
		case 53:
			return "TAT_FM_TAT45";
			break;
		
		case 69:
			return "TAT_FM_TAT46";
			break;
		
		case 57:
			return "TAT_HOLDUP1V";
			break;
		
		case 58:
			return "TAT_HOLDUP5V";
			break;
		
		case 59:
			return "TAT_HOLDUP10V";
			break;
		
		case 60:
			return "TAT_HOLDUP20V";
			break;
	}
	return sVar0;
}

bool func_109(int iParam0)//Position - 0x462B
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_110(iParam0);
	iVar1 = iParam0;
	return unk_0xC80D31E4B587871C(iVar0, func_90(iVar1));
}

var func_110(int iParam0)//Position - 0x464B
{
	var uVar0;
	
	uVar0 = Global_2521687.f_1032[func_89(iParam0)];
	return uVar0;
}

void func_111(int iParam0, bool bParam1, int iParam2)//Position - 0x4666
{
	int iVar0;
	int iVar1;
	
	if (func_113(iParam0) == 7872)
	{
		return;
	}
	iVar0 = func_112(iParam0, -1);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			unk_0x872F1C1F8587CCC7(&iVar0, func_90(iVar1));
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&iVar0, func_90(iVar1));
		}
		func_120(func_113(iParam0), iVar0, iParam2, 1, 0);
	}
}

var func_112(var uParam0, int iParam1)//Position - 0x46C3
{
	var uVar0;
	
	uVar0 = func_121(func_113(uParam0), iParam1, 0);
	return uVar0;
}

int func_113(var uParam0)//Position - 0x46DC
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_89(iVar0);
	if ((func_88() == 0 || func_87() == 0) || (func_88() == 999 && func_87() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1035;
				break;
			
			case 1:
				return 1036;
				break;
			
			case 2:
				return 1037;
				break;
			
			case 3:
				return 1038;
				break;
			
			case 4:
				return 1039;
				break;
			
			case 5:
				return 1499;
				break;
			
			case 6:
				return 1753;
				break;
			
			case 7:
				return 1947;
				break;
			
			case 8:
				return 1948;
				break;
			
			case 9:
				return 1949;
				break;
			
			case 10:
				return 1950;
				break;
			
			case 11:
				return 1951;
				break;
			
			case 12:
				return 1952;
				break;
			
			case 13:
				return 2411;
				break;
			
			case 14:
				return 2431;
				break;
			
			case 15:
				return 2434;
				break;
			
			case 16:
				return 2437;
				break;
			
			case 17:
				return 2600;
				break;
			
			case 18:
				return 2603;
				break;
			
			case 19:
				return 2606;
				break;
			
			case 20:
				return 3766;
				break;
			
			case 21:
				return 3769;
				break;
			
			case 22:
				return 3844;
				break;
			
			case 23:
				return 3847;
				break;
			
			case 24:
				return 3850;
				break;
			
			case 25:
				return 3853;
				break;
			
			case 26:
				return 5344;
				break;
			
			case 27:
				return 5347;
				break;
			
			case 28:
				return 5449;
				break;
			
			case 29:
				return 5452;
				break;
			
			case 30:
				return 6411;
				break;
			
			case 31:
				return 6414;
				break;
			}
	}
	return 7872;
}

bool func_114(int iParam0, int iParam1)//Position - 0x490A
{
	int iVar0;
	int iVar1;
	
	if (func_113(iParam0) == 7872)
	{
		return 0;
	}
	iVar0 = func_112(iParam0, iParam1);
	iVar1 = iParam0;
	return unk_0xC80D31E4B587871C(iVar0, func_90(iVar1));
}

void func_115(int iParam0, int iParam1)//Position - 0x493C
{
	int iVar0;
	
	iVar0 = func_121(iParam0, func_96(iParam1), 0);
	iVar0++;
	if (!func_95(iParam0))
	{
		func_120(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_94(iParam0, iVar0, iParam1, 1);
	}
}

int func_116(int iParam0, int iParam1)//Position - 0x497D
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	if (iParam1 == 3)
	{
		if (func_118(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	else if (iParam1 == 4)
	{
		if (func_117(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	iVar2 = unk_0xE94DD0E75DE69D1E(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if (unk_0x5260EED750B93264(iParam1, iVar1, &Var3))
		{
			if (iParam0 == Var3.f_3)
			{
				return (129 + iVar1);
			}
		}
		iVar1++;
	}
	return -1;
}

int func_117(int iParam0, var uParam1)//Position - 0x49EE
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 497719213:
			iVar0 = 0;
			break;
		
		case -1575660783:
			iVar0 = 1;
			break;
		
		case -720631087:
			iVar0 = 2;
			break;
		
		case 2143620721:
			iVar0 = 3;
			break;
		
		case 2049754822:
			iVar0 = 4;
			break;
		
		case -1293749076:
			iVar0 = 5;
			break;
		
		case -1571403599:
			iVar0 = 6;
			break;
		
		case -711123906:
			iVar0 = 7;
			break;
		
		case 152801037:
			iVar0 = 8;
			break;
		
		case -1324018585:
			iVar0 = 9;
			break;
		
		case -481068829:
			iVar0 = 10;
			break;
		
		case -1486741196:
			iVar0 = 11;
			break;
		
		case 939412564:
			iVar0 = 12;
			break;
		
		case 1187637739:
			iVar0 = 13;
			break;
		
		case -1092669445:
			iVar0 = 14;
			break;
		
		case 1659530389:
			iVar0 = 15;
			break;
		
		case 996857777:
			iVar0 = 16;
			break;
		
		case 817476859:
			iVar0 = 17;
			break;
		
		case -17051268:
			iVar0 = 18;
			break;
		
		case 1293774274:
			iVar0 = 19;
			break;
		
		case 567121699:
			iVar0 = 20;
			break;
		
		case -1179302160:
			iVar0 = 21;
			break;
		
		case -949165473:
			iVar0 = 22;
			break;
		
		case 354975189:
			iVar0 = 23;
			break;
		
		case -489121482:
			iVar0 = 24;
			break;
		
		case -1636954018:
			iVar0 = 25;
			break;
		
		case -1277740240:
			iVar0 = 26;
			break;
		
		case -1047439708:
			iVar0 = 27;
			break;
		
		case -814026121:
			iVar0 = 28;
			break;
		
		case 1732157956:
			iVar0 = 29;
			break;
		
		case 1024282018:
			iVar0 = 30;
			break;
		
		case -2099685063:
			iVar0 = 31;
			break;
		
		case 1483932781:
			iVar0 = 32;
			break;
		
		case 1406925627:
			iVar0 = 33;
			break;
		
		case 698590923:
			iVar0 = 34;
			break;
		
		case 1869001296:
			iVar0 = 35;
			break;
		
		case 1169907450:
			iVar0 = 36;
			break;
		
		case 717727185:
			iVar0 = 37;
			break;
		
		case 1058197095:
			iVar0 = 38;
			break;
		
		case 434115743:
			iVar0 = 39;
			break;
		
		case 665432114:
			iVar0 = 40;
			break;
		
		case 1198780358:
			iVar0 = 41;
			break;
		
		case -2128873857:
			iVar0 = 42;
			break;
		
		case -148547780:
			iVar0 = 43;
			break;
		
		case 1819096318:
			iVar0 = 44;
			break;
		
		case 1051122042:
			iVar0 = 45;
			break;
		
		case -1350495965:
			iVar0 = 46;
			break;
		
		case -150859291:
			iVar0 = 47;
			break;
		
		case -1186193045:
			iVar0 = 48;
			break;
		
		case -1206837515:
			iVar0 = 49;
			break;
		
		case -1513653662:
			iVar0 = 50;
			break;
		
		case -543948331:
			iVar0 = 51;
			break;
		
		case -175559233:
			iVar0 = 52;
			break;
		
		case -131530830:
			iVar0 = 53;
			break;
		
		case -1816086813:
			iVar0 = 54;
			break;
		
		case -2113006722:
			iVar0 = 55;
			break;
		
		case -1101886458:
			iVar0 = 56;
			break;
		
		case -1398740829:
			iVar0 = 57;
			break;
		
		case 1939258347:
			iVar0 = 58;
			break;
		
		case -1004151544:
			iVar0 = 59;
			break;
		
		case -822873436:
			iVar0 = 60;
			break;
		
		case -1445222284:
			iVar0 = 61;
			break;
		
		case -63910623:
			iVar0 = 62;
			break;
		
		case 101834979:
			iVar0 = 63;
			break;
		
		case -673512330:
			iVar0 = 64;
			break;
		
		case -423845319:
			iVar0 = 65;
			break;
		
		case 963561372:
			iVar0 = 66;
			break;
		
		case 1384839636:
			iVar0 = 67;
			break;
		
		case -1712879828:
			iVar0 = 68;
			break;
		
		case -951688727:
			iVar0 = 69;
			break;
		
		case -1132639145:
			iVar0 = 70;
			break;
		
		case -513632731:
			iVar0 = 71;
			break;
		
		case 263680718:
			iVar0 = 72;
			break;
		
		case 36296627:
			iVar0 = 73;
			break;
		
		case 800240324:
			iVar0 = 74;
			break;
		
		case 614243480:
			iVar0 = 75;
			break;
		
		case 1408138043:
			iVar0 = 76;
			break;
		
		case 957564293:
			iVar0 = 77;
			break;
		
		case -1614279399:
			iVar0 = 78;
			break;
		
		case -1451286393:
			iVar0 = 79;
			break;
		
		case -1758069771:
			iVar0 = 80;
			break;
		
		case -1225475222:
			iVar0 = 81;
			break;
		
		case -1992892433:
			iVar0 = 82;
			break;
		
		case -1838157215:
			iVar0 = 83;
			break;
		
		case 1688803028:
			iVar0 = 84;
			break;
		
		case 1844259164:
			iVar0 = 85;
			break;
		
		case 1070943545:
			iVar0 = 86;
			break;
		
		case 1234460855:
			iVar0 = 87;
			break;
		
		case -753798460:
			iVar0 = 88;
			break;
		
		case -1453351072:
			iVar0 = 89;
			break;
		
		case -1308053326:
			iVar0 = 90;
			break;
		
		case -2083859401:
			iVar0 = 91;
			break;
		
		case 1586137527:
			iVar0 = 92;
			break;
		
		case 1884564810:
			iVar0 = 93;
			break;
		
		case 1092964089:
			iVar0 = 94;
			break;
		
		case 1264280421:
			iVar0 = 95;
			break;
		
		case 496601058:
			iVar0 = 96;
			break;
		
		case 861352797:
			iVar0 = 97;
			break;
		
		case 1418328330:
			iVar0 = 98;
			break;
		
		case 1784554566:
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case 2081736627:
			iVar0 = 100;
			break;
		
		case -1897271971:
			iVar0 = 101;
			break;
		
		case -1666742056:
			iVar0 = 102;
			break;
		
		case -1282165072:
			iVar0 = 103;
			break;
		
		case -1052880379:
			iVar0 = 104;
			break;
		
		case -745474390:
			iVar0 = 105;
			break;
		
		case -515796465:
			iVar0 = 106;
			break;
		
		case -811206225:
			iVar0 = 107;
			break;
		
		case -1586815686:
			iVar0 = 108;
			break;
		
		case -1423429452:
			iVar0 = 109;
			break;
		
		case -1697869815:
			iVar0 = 110;
			break;
		
		case -1470846183:
			iVar0 = 111;
			break;
		
		case 1093884035:
			iVar0 = 112;
			break;
		
		case 861256904:
			iVar0 = 113;
			break;
		
		case 603201029:
			iVar0 = 114;
			break;
		
		case 1991426949:
			iVar0 = 115;
			break;
		
		case -135838228:
			iVar0 = 116;
			break;
		
		case 121616864:
			iVar0 = 117;
			break;
		
		case -834517002:
			iVar0 = 118;
			break;
		
		case -403932342:
			iVar0 = 119;
			break;
		
		case -1179738417:
			iVar0 = 120;
			break;
		
		case -1022250603:
			iVar0 = 121;
			break;
		
		case 558694786:
			iVar0 = 122;
			break;
		
		case 569279177:
			iVar0 = 123;
			break;
		
		case 544309199:
			iVar0 = 124;
			break;
		
		case 1190448341:
			iVar0 = 125;
			break;
		
		case 885139568:
			iVar0 = 126;
			break;
		
		case -1845683606:
			iVar0 = 127;
			break;
		
		case -1555317497:
			iVar0 = 128;
			break;
		
		case 1704673699:
			iVar0 = 129;
			break;
		
		case 1993401358:
			iVar0 = 130;
			break;
		
		case 1227065524:
			iVar0 = 131;
			break;
		
		case -533227790:
			iVar0 = 132;
			break;
		
		case 309459814:
			iVar0 = 133;
			break;
		
		case 77815753:
			iVar0 = 134;
			break;
		
		case -280939203:
			iVar0 = 135;
			break;
		
		case 1246882601:
			iVar0 = 136;
			break;
		
		case 314833986:
			iVar0 = 137;
			break;
		
		case -25635924:
			iVar0 = 138;
			break;
		
		case 351567983:
			iVar0 = 139;
			break;
		
		case -2027428652:
			iVar0 = 140;
			break;
		
		case 962677064:
			iVar0 = 141;
			break;
		
		case -105475497:
			iVar0 = 142;
			break;
		
		case 766835283:
			iVar0 = 143;
			break;
		
		case 471979821:
			iVar0 = 144;
			break;
		
		case 1122542778:
			iVar0 = 145;
			break;
		
		case 815530017:
			iVar0 = 146;
			break;
		
		case 1157900525:
			iVar0 = 147;
			break;
		
		case 859243859:
			iVar0 = 148;
			break;
		
		case 2032013608:
			iVar0 = 149;
			break;
		
		case 1471663700:
			iVar0 = 150;
			break;
		
		case -1679206722:
			iVar0 = 151;
			break;
		
		case -309397848:
			iVar0 = 152;
			break;
		
		case 534666054:
			iVar0 = 153;
			break;
		
		case -769376301:
			iVar0 = 154;
			break;
		
		case 1531057961:
			iVar0 = 155;
			break;
		
		case 1986678137:
			iVar0 = 156;
			break;
		
		case 2142789653:
			iVar0 = 157;
			break;
		
		case 7463306:
			iVar0 = 158;
			break;
		
		case 308053343:
			iVar0 = 159;
			break;
		
		case 753842819:
			iVar0 = 160;
			break;
		
		case 1052794406:
			iVar0 = 161;
			break;
		
		case -695726661:
			iVar0 = 162;
			break;
		
		case -1001821890:
			iVar0 = 163;
			break;
		
		case -1425459522:
			iVar0 = 164;
			break;
		
		case 1412653072:
			iVar0 = 165;
			break;
		
		case 1163510365:
			iVar0 = 166;
			break;
		
		case 933242602:
			iVar0 = 167;
			break;
		
		case -1347021116:
			iVar0 = 168;
			break;
		
		case 1297354841:
			iVar0 = 169;
			break;
		
		case -839806574:
			iVar0 = 170;
			break;
		
		case -542100209:
			iVar0 = 171;
			break;
		
		case 1472218269:
			iVar0 = 172;
			break;
		
		case 1783196079:
			iVar0 = 173;
			break;
		
		case 1007062314:
			iVar0 = 174;
			break;
		
		case -870732522:
			iVar0 = 175;
			break;
		
		case 547542627:
			iVar0 = 176;
			break;
		
		case 863894553:
			iVar0 = 177;
			break;
		
		case -2099242332:
			iVar0 = 178;
			break;
		
		case -1860028632:
			iVar0 = 179;
			break;
		
		case -560967165:
			iVar0 = 180;
			break;
		
		case -59437904:
			iVar0 = 181;
			break;
		
		case 757067269:
			iVar0 = 182;
			break;
		
		case 455625238:
			iVar0 = 183;
			break;
		
		case -1750514914:
			iVar0 = 184;
			break;
		
		case -983982466:
			iVar0 = 185;
			break;
		
		case -232228837:
			iVar0 = 186;
			break;
		
		case 1558269323:
			iVar0 = 187;
			break;
		
		case 2070579873:
			iVar0 = 188;
			break;
		
		case -1203181916:
			iVar0 = 189;
			break;
		
		case -2112587204:
			iVar0 = 190;
			break;
		
		case 1942412705:
			iVar0 = 191;
			break;
		
		case -1846437386:
			iVar0 = 192;
			break;
		
		case 61799795:
			iVar0 = 193;
			break;
		
		case -1388490611:
			iVar0 = 194;
			break;
		
		case -1627212776:
			iVar0 = 195;
			break;
		
		case 1525246127:
			iVar0 = 196;
			break;
		
		case -11341151:
			iVar0 = 197;
			break;
		
		case 516055815:
			iVar0 = 198;
			break;
		
		case -1034642040:
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case 1022637316:
			iVar0 = 200;
			break;
		
		case -1677156418:
			iVar0 = 201;
			break;
		
		case -1130213300:
			iVar0 = 202;
			break;
		
		case 104062694:
			iVar0 = 203;
			break;
		
		case 869579299:
			iVar0 = 204;
			break;
		
		case 1201332655:
			iVar0 = 205;
			break;
		
		case 1028967715:
			iVar0 = 206;
			break;
		
		case -1651634800:
			iVar0 = 207;
			break;
		
		case -892278763:
			iVar0 = 208;
			break;
		
		case -1032005779:
			iVar0 = 209;
			break;
		
		case -255675400:
			iVar0 = 210;
			break;
		
		case 1890137027:
			iVar0 = 211;
			break;
		
		case -406805808:
			iVar0 = 212;
			break;
		
		case -592540500:
			iVar0 = 213;
			break;
		
		case 205417419:
			iVar0 = 214;
			break;
		
		case -2127276619:
			iVar0 = 215;
			break;
		
		case -1362677538:
			iVar0 = 216;
			break;
		
		case -1549722990:
			iVar0 = 217;
			break;
		
		case 3495990:
			iVar0 = 218;
			break;
		
		case -285526590:
			iVar0 = 219;
			break;
		
		case 1907377338:
			iVar0 = 220;
			break;
		
		case 2136399879:
			iVar0 = 221;
			break;
		
		case 1568410532:
			iVar0 = 222;
			break;
		
		case 1068879892:
			iVar0 = 223;
			break;
		
		case -1592750929:
			iVar0 = 224;
			break;
		
		case 772896404:
			iVar0 = 225;
			break;
		
		case -1999229916:
			iVar0 = 226;
			break;
		
		case -744701520:
			iVar0 = 227;
			break;
		
		case -425039925:
			iVar0 = 228;
			break;
		
		case -798409911:
			iVar0 = 229;
			break;
		
		case 1379974898:
			iVar0 = 230;
			break;
		
		case -1681436154:
			iVar0 = 231;
			break;
		
		case -1486919370:
			iVar0 = 232;
			break;
		
		case 2014677667:
			iVar0 = 233;
			break;
		
		case 325697857:
			iVar0 = 234;
			break;
		
		case -1188819501:
			iVar0 = 235;
			break;
		
		case -1765193438:
			iVar0 = 236;
			break;
		
		case -1416269126:
			iVar0 = 237;
			break;
		
		case -2111365154:
			iVar0 = 238;
			break;
		
		case -1880573087:
			iVar0 = 239;
			break;
		
		case 1421296887:
			iVar0 = 240;
			break;
		
		case 1655562468:
			iVar0 = 241;
			break;
		
		case 946048080:
			iVar0 = 242;
			break;
		
		case 1188768063:
			iVar0 = 243;
			break;
		
		case 498456313:
			iVar0 = 244;
			break;
		
		case 323007907:
			iVar0 = 245;
			break;
		
		case -1325371100:
			iVar0 = 246;
			break;
		
		case -829313978:
			iVar0 = 247;
			break;
		
		case -530624543:
			iVar0 = 248;
			break;
		
		case -299046020:
			iVar0 = 249;
			break;
		
		case 1812260650:
			iVar0 = 250;
			break;
		
		case 2043511487:
			iVar0 = 251;
			break;
		
		case -1753235933:
			iVar0 = 252;
			break;
		
		case -1525589690:
			iVar0 = 253;
			break;
		
		case 31003408:
			iVar0 = 254;
			break;
		
		case -1864998224:
			iVar0 = 255;
			break;
		
		case -2140814897:
			iVar0 = 256;
			break;
		
		case 223468453:
			iVar0 = 257;
			break;
		
		case -83970305:
			iVar0 = 258;
			break;
		
		case -406843262:
			iVar0 = 259;
			break;
		
		case -954740942:
			iVar0 = 260;
			break;
		
		case -1675526854:
			iVar0 = 261;
			break;
		
		case 2111717556:
			iVar0 = 262;
			break;
		
		case -415395003:
			iVar0 = 263;
			break;
		
		case 427521984:
			iVar0 = 264;
			break;
		
		case 1570178485:
			iVar0 = 265;
			break;
		
		case -1619850916:
			iVar0 = 266;
			break;
		
		case -713067148:
			iVar0 = 267;
			break;
		
		case 946477614:
			iVar0 = 268;
			break;
		
		case -1423343701:
			iVar0 = 269;
			break;
		
		case 445931457:
			iVar0 = 270;
			break;
		
		case 678558588:
			iVar0 = 271;
			break;
		
		case -854631987:
			iVar0 = 272;
			break;
		
		case -1707871209:
			iVar0 = 273;
			break;
		
		case 1675446188:
			iVar0 = 274;
			break;
		
		case 1911627074:
			iVar0 = 275;
			break;
		
		case -607391498:
			iVar0 = 276;
			break;
		
		case -1544625218:
			iVar0 = 277;
			break;
		
		case 1185175875:
			iVar0 = 278;
			break;
		
		case 155591269:
			iVar0 = 279;
			break;
		
		case -1057958846:
			iVar0 = 280;
			break;
		
		case -1853795495:
			iVar0 = 281;
			break;
		
		case -1860485560:
			iVar0 = 282;
			break;
		
		case 499288642:
			iVar0 = 283;
			break;
		
		case -7887054:
			iVar0 = 284;
			break;
		
		case -1553041502:
			iVar0 = 285;
			break;
		
		case -1080591445:
			iVar0 = 286;
			break;
		
		case -741060436:
			iVar0 = 287;
			break;
		
		case 645634644:
			iVar0 = 288;
			break;
		
		case -1096728771:
			iVar0 = 289;
			break;
		
		case 503268386:
			iVar0 = 290;
			break;
		
		case 109804153:
			iVar0 = 291;
			break;
		
		case 1410910279:
			iVar0 = 292;
			break;
		
		case 1501700194:
			iVar0 = 293;
			break;
		
		case -1793199216:
			iVar0 = 294;
			break;
		
		case 1405944575:
			iVar0 = 295;
			break;
		
		case 1731382556:
			iVar0 = 296;
			break;
		
		case 1743809026:
			iVar0 = 297;
			break;
		
		case 1589237530:
			iVar0 = 298;
			break;
		
		case -1558441108:
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case 793815980:
			iVar0 = 303;
			break;
		
		case 87277824:
			iVar0 = 304;
			break;
		
		case 1305470790:
			iVar0 = 305;
			break;
		
		case 252924758:
			iVar0 = 306;
			break;
		
		case 1043745875:
			iVar0 = 307;
			break;
		
		case 24304530:
			iVar0 = 308;
			break;
		
		case 582246031:
			iVar0 = 309;
			break;
		
		case 1840225396:
			iVar0 = 310;
			break;
		
		case -47863515:
			iVar0 = 311;
			break;
		
		case 26968202:
			iVar0 = 312;
			break;
		
		case 1720638120:
			iVar0 = 313;
			break;
		
		case 1372737856:
			iVar0 = 314;
			break;
		
		case -675719916:
			iVar0 = 315;
			break;
		
		case -610888268:
			iVar0 = 316;
			break;
		
		case -129698248:
			iVar0 = 317;
			break;
		
		case 1060644905:
			iVar0 = 318;
			break;
		
		case 776078819:
			iVar0 = 319;
			break;
		
		case -1069464482:
			iVar0 = 320;
			break;
		
		case -1342875239:
			iVar0 = 321;
			break;
		
		case 1967892405:
			iVar0 = 322;
			break;
		
		case 642864781:
			iVar0 = 323;
			break;
		
		case 1270860039:
			iVar0 = 324;
			break;
		
		case -1290780406:
			iVar0 = 325;
			break;
		
		case 1127641545:
			iVar0 = 326;
			break;
		
		case -1221948530:
			iVar0 = 327;
			break;
		
		case 1954153055:
			iVar0 = 328;
			break;
		
		case 543727307:
			iVar0 = 329;
			break;
		
		case -1806626643:
			iVar0 = 330;
			break;
		
		case 1146362323:
			iVar0 = 331;
			break;
		
		case -1918158051:
			iVar0 = 332;
			break;
		
		case -1835082731:
			iVar0 = 333;
			break;
		
		case 1935907419:
			iVar0 = 334;
			break;
		
		case 961997868:
			iVar0 = 335;
			break;
		
		case -415246024:
			iVar0 = 336;
			break;
		
		case -2003529037:
			iVar0 = 337;
			break;
		
		case -1272951326:
			iVar0 = 338;
			break;
		
		case 837851491:
			iVar0 = 339;
			break;
		
		case -64649653:
			iVar0 = 340;
			break;
		
		case 1997623301:
			iVar0 = 341;
			break;
		
		case 1177835340:
			iVar0 = 342;
			break;
		
		case -1261787835:
			iVar0 = 343;
			break;
		
		case -965491494:
			iVar0 = 344;
			break;
		
		case 939374190:
			iVar0 = 345;
			break;
		
		case 149461503:
			iVar0 = 346;
			break;
		
		case -1117498985:
			iVar0 = 347;
			break;
		
		case 1184468662:
			iVar0 = 348;
			break;
		
		case -772488648:
			iVar0 = 349;
			break;
		
		case -1399171334:
			iVar0 = 350;
			break;
		
		case -963164512:
			iVar0 = 351;
			break;
		
		case -1284517669:
			iVar0 = 352;
			break;
		
		case 1613773443:
			iVar0 = 353;
			break;
		
		case 1963092516:
			iVar0 = 354;
			break;
		
		case -878642668:
			iVar0 = 355;
			break;
		
		case -1618544925:
			iVar0 = 356;
			break;
		
		case 1185417232:
			iVar0 = 357;
			break;
		
		case -1649044153:
			iVar0 = 358;
			break;
		
		case -1293956525:
			iVar0 = 359;
			break;
		
		case -84085370:
			iVar0 = 360;
			break;
		
		case -943861479:
			iVar0 = 361;
			break;
		
		case -1355455834:
			iVar0 = 362;
			break;
		
		case 711764191:
			iVar0 = 363;
			break;
		
		case 41616632:
			iVar0 = 364;
			break;
		
		case -2053984264:
			iVar0 = 365;
			break;
		
		case -522832741:
			iVar0 = 366;
			break;
		
		case 711940316:
			iVar0 = 367;
			break;
		
		case -1512107004:
			iVar0 = 368;
			break;
		
		case -273305505:
			iVar0 = 369;
			break;
		
		case -779122930:
			iVar0 = 370;
			break;
		
		case 565678099:
			iVar0 = 371;
			break;
		
		case 2130135469:
			iVar0 = 372;
			break;
		
		case 2142072717:
			iVar0 = 373;
			break;
		
		case -636638153:
			iVar0 = 374;
			break;
		
		case 289539239:
			iVar0 = 375;
			break;
		
		case -1040822561:
			iVar0 = 376;
			break;
		
		case 217486581:
			iVar0 = 377;
			break;
		
		case -2147244302:
			iVar0 = 378;
			break;
		
		case 830186237:
			iVar0 = 379;
			break;
		
		case -1902384566:
			iVar0 = 380;
			break;
		
		case 1471583453:
			iVar0 = 381;
			break;
		
		case 2007332931:
			iVar0 = 382;
			break;
		
		case 1104156493:
			iVar0 = 383;
			break;
		
		case 616400258:
			iVar0 = 384;
			break;
		
		case 511243162:
			iVar0 = 385;
			break;
		
		case -477451680:
			iVar0 = 386;
			break;
		
		case 743616295:
			iVar0 = 387;
			break;
		
		case 712215816:
			iVar0 = 388;
			break;
		
		case 1475570942:
			iVar0 = 389;
			break;
		
		case -1768978416:
			iVar0 = 390;
			break;
		
		case -2139711822:
			iVar0 = 391;
			break;
		
		case -1509236263:
			iVar0 = 392;
			break;
		
		case -1143383459:
			iVar0 = 393;
			break;
		
		case -1690206781:
			iVar0 = 394;
			break;
		
		case 1947095236:
			iVar0 = 395;
			break;
		
		case 300333876:
			iVar0 = 396;
			break;
		
		case 37732721:
			iVar0 = 397;
			break;
		
		case 959183706:
			iVar0 = 398;
			break;
		
		case -1542393224:
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case 874488242:
			iVar0 = 400;
			break;
		
		case 1389335000:
			iVar0 = 401;
			break;
		
		case -366075547:
			iVar0 = 402;
			break;
		
		case -1125431584:
			iVar0 = 403;
			break;
		
		case -2000068963:
			iVar0 = 404;
			break;
		
		case 1497445248:
			iVar0 = 405;
			break;
		
		case 1989766704:
			iVar0 = 406;
			break;
		
		case -2086401979:
			iVar0 = 407;
			break;
		
		case -1846467361:
			iVar0 = 408;
			break;
		
		case -1325458477:
			iVar0 = 409;
			break;
		
		case -566725051:
			iVar0 = 410;
			break;
		
		case -787850263:
			iVar0 = 411;
			break;
		
		case -1885021085:
			iVar0 = 412;
			break;
		
		case 979307144:
			iVar0 = 413;
			break;
		
		case -473732439:
			iVar0 = 414;
			break;
		
		case 2062186390:
			iVar0 = 415;
			break;
		
		case -60867780:
			iVar0 = 416;
			break;
		
		case 926967912:
			iVar0 = 417;
			break;
		
		case -1886278590:
			iVar0 = 418;
			break;
		
		case -1314959708:
			iVar0 = 419;
			break;
		
		case -1696774529:
			iVar0 = 420;
			break;
		
		case -356446484:
			iVar0 = 421;
			break;
		
		case 857810380:
			iVar0 = 422;
			break;
		
		case -629676646:
			iVar0 = 423;
			break;
		
		case -1879530481:
			iVar0 = 424;
			break;
		
		case -1265847311:
			iVar0 = 425;
			break;
		
		case 32094424:
			iVar0 = 426;
			break;
		
		case 1969286744:
			iVar0 = 427;
			break;
		
		case 560620683:
			iVar0 = 428;
			break;
		
		case -148312642:
			iVar0 = 429;
			break;
		
		case -578277428:
			iVar0 = 430;
			break;
		
		case -718909970:
			iVar0 = 431;
			break;
		
		case -859026859:
			iVar0 = 432;
			break;
		
		case -839897805:
			iVar0 = 433;
			break;
		
		case 1676439910:
			iVar0 = 434;
			break;
		
		case -294157184:
			iVar0 = 435;
			break;
		
		case -1222200221:
			iVar0 = 436;
			break;
		
		case 874532672:
			iVar0 = 437;
			break;
		
		case -135929055:
			iVar0 = 438;
			break;
		
		case 1654917353:
			iVar0 = 439;
			break;
		
		case -13131391:
			iVar0 = 440;
			break;
		
		case 154845196:
			iVar0 = 441;
			break;
		
		case -1147884322:
			iVar0 = 442;
			break;
		
		case 291693311:
			iVar0 = 443;
			break;
		
		case -1401933531:
			iVar0 = 444;
			break;
		
		case 1820267020:
			iVar0 = 445;
			break;
		
		case 2134488961:
			iVar0 = 446;
			break;
		
		case -1861952745:
			iVar0 = 447;
			break;
		
		case 994458405:
			iVar0 = 448;
			break;
		
		case -1931715008:
			iVar0 = 449;
			break;
		
		case 1308745884:
			iVar0 = 450;
			break;
		
		case -1322955084:
			iVar0 = 451;
			break;
		
		case -816658183:
			iVar0 = 452;
			break;
		
		case -988307698:
			iVar0 = 453;
			break;
		
		case -1341411308:
			iVar0 = 454;
			break;
		
		case 1865570599:
			iVar0 = 455;
			break;
		
		case -549458010:
			iVar0 = 456;
			break;
		
		case -1328545177:
			iVar0 = 457;
			break;
		
		case -1361353619:
			iVar0 = 458;
			break;
		
		case 1103253806:
			iVar0 = 459;
			break;
		
		case -24183456:
			iVar0 = 460;
			break;
		
		case 436214104:
			iVar0 = 461;
			break;
		
		case 2072615278:
			iVar0 = 462;
			break;
		
		case -1131891426:
			iVar0 = 463;
			break;
		
		case 1392085456:
			iVar0 = 464;
			break;
		
		case 2035895234:
			iVar0 = 465;
			break;
		
		case 368784798:
			iVar0 = 466;
			break;
		
		case 1398938833:
			iVar0 = 467;
			break;
		
		case 1250040566:
			iVar0 = 468;
			break;
		
		case 2133228190:
			iVar0 = 469;
			break;
		
		case 675551540:
			iVar0 = 470;
			break;
		
		case -1826137848:
			iVar0 = 471;
			break;
		
		case -144105601:
			iVar0 = 472;
			break;
		
		case -748983650:
			iVar0 = 473;
			break;
		
		case 630291027:
			iVar0 = 474;
			break;
		
		case 293950434:
			iVar0 = 475;
			break;
		
		case 1857352111:
			iVar0 = 476;
			break;
		
		case -777671131:
			iVar0 = 477;
			break;
		
		case 221602924:
			iVar0 = 478;
			break;
		
		case 2039295216:
			iVar0 = 479;
			break;
		
		case 1800147054:
			iVar0 = 480;
			break;
		
		case -2019505897:
			iVar0 = 481;
			break;
		
		case 1647997020:
			iVar0 = 482;
			break;
		
		case -1405854945:
			iVar0 = 483;
			break;
		
		case -1171294997:
			iVar0 = 484;
			break;
		
		case -77076350:
			iVar0 = 485;
			break;
		
		case 775569873:
			iVar0 = 486;
			break;
		
		case 330569485:
			iVar0 = 487;
			break;
		
		case -1549217620:
			iVar0 = 488;
			break;
		
		case 1674429052:
			iVar0 = 489;
			break;
		
		case -254669596:
			iVar0 = 490;
			break;
		
		case 1802602254:
			iVar0 = 491;
			break;
		
		case -941072260:
			iVar0 = 492;
			break;
		
		case -1844749517:
			iVar0 = 493;
			break;
		
		case 82745424:
			iVar0 = 494;
			break;
		
		case -673460083:
			iVar0 = 495;
			break;
		
		case -99954496:
			iVar0 = 496;
			break;
		
		case 2078163456:
			iVar0 = 497;
			break;
		
		case 1362343227:
			iVar0 = 498;
			break;
		
		case 1176005743:
			iVar0 = 499;
			break;
	}
	switch (iParam0)
	{
		case -1504557219:
			iVar0 = 500;
			break;
		
		case 367912881:
			iVar0 = 501;
			break;
		
		case -836343280:
			iVar0 = 502;
			break;
		
		case -46521805:
			iVar0 = 503;
			break;
		
		case -743048780:
			iVar0 = 504;
			break;
		
		case 1294865118:
			iVar0 = 505;
			break;
		
		case -1479686374:
			iVar0 = 506;
			break;
		
		case 256017193:
			iVar0 = 507;
			break;
		
		case 1232443120:
			iVar0 = 508;
			break;
		
		case -803282271:
			iVar0 = 509;
			break;
		
		case 1788600442:
			iVar0 = 510;
			break;
		
		case 1439605343:
			iVar0 = 511;
			break;
		
		case -1094679264:
			iVar0 = 512;
			break;
		
		case 1230482241:
			iVar0 = 513;
			break;
		
		case 2054714291:
			iVar0 = 514;
			break;
		
		case 192117676:
			iVar0 = 515;
			break;
		
		case -2071204405:
			iVar0 = 516;
			break;
		
		case -1618181476:
			iVar0 = 517;
			break;
		
		case -1408253665:
			iVar0 = 518;
			break;
		
		case -134185391:
			iVar0 = 519;
			break;
		
		case -785783411:
			iVar0 = 520;
			break;
		
		case -633466710:
			iVar0 = 521;
			break;
		
		case -2072487372:
			iVar0 = 522;
			break;
		
		case 1211025296:
			iVar0 = 523;
			break;
		
		case 742659337:
			iVar0 = 524;
			break;
		
		case 1365533160:
			iVar0 = 525;
			break;
		
		case 1213205618:
			iVar0 = 526;
			break;
		
		case -164052103:
			iVar0 = 527;
			break;
		
		case -1306490297:
			iVar0 = 528;
			break;
		
		case -994802645:
			iVar0 = 529;
			break;
		
		case 637406209:
			iVar0 = 530;
			break;
		
		case -170855031:
			iVar0 = 531;
			break;
		
		case 1333098305:
			iVar0 = 532;
			break;
		
		case 119103934:
			iVar0 = 533;
			break;
		
		case -141369051:
			iVar0 = 534;
			break;
		
		case -593355218:
			iVar0 = 535;
			break;
		
		case 316832763:
			iVar0 = 536;
			break;
		
		case -393713544:
			iVar0 = 537;
			break;
		
		case -1876234625:
			iVar0 = 538;
			break;
		
		case -1453082334:
			iVar0 = 539;
			break;
		
		case -1397705983:
			iVar0 = 540;
			break;
		
		case -1278086171:
			iVar0 = 541;
			break;
		
		case -1510892268:
			iVar0 = 542;
			break;
		
		case 204876084:
			iVar0 = 543;
			break;
		
		case -988359492:
			iVar0 = 544;
			break;
		
		case 975745281:
			iVar0 = 545;
			break;
		
		case 591099372:
			iVar0 = 546;
			break;
		
		case -1014948306:
			iVar0 = 547;
			break;
		
		case -1866439788:
			iVar0 = 548;
			break;
		
		case -1265767186:
			iVar0 = 549;
			break;
		
		case 2070931859:
			iVar0 = 550;
			break;
		
		case 413611416:
			iVar0 = 551;
			break;
		
		case 765001063:
			iVar0 = 552;
			break;
		
		case -686624622:
			iVar0 = 553;
			break;
		
		case -937548349:
			iVar0 = 554;
			break;
		
		case 212584159:
			iVar0 = 555;
			break;
		
		case -328340062:
			iVar0 = 556;
			break;
		
		case 1657725123:
			iVar0 = 557;
			break;
		
		case -1517964336:
			iVar0 = 558;
			break;
		
		case -785490239:
			iVar0 = 559;
			break;
		
		case -11769229:
			iVar0 = 560;
			break;
		
		case 745912106:
			iVar0 = 561;
			break;
		
		case -2064265098:
			iVar0 = 562;
			break;
		
		case -1515892875:
			iVar0 = 563;
			break;
		
		case 1368234729:
			iVar0 = 564;
			break;
		
		case 1960230923:
			iVar0 = 565;
			break;
		
		case -860169810:
			iVar0 = 566;
			break;
		
		case -177882114:
			iVar0 = 567;
			break;
		
		case 661384509:
			iVar0 = 568;
			break;
		
		case 1221860095:
			iVar0 = 569;
			break;
		
		case 698192473:
			iVar0 = 570;
			break;
		
		case -817251083:
			iVar0 = 571;
			break;
		
		case -1108876323:
			iVar0 = 572;
			break;
		
		case 1274482696:
			iVar0 = 573;
			break;
		
		case 468009056:
			iVar0 = 574;
			break;
		
		case 2063732427:
			iVar0 = 575;
			break;
		
		case -764016411:
			iVar0 = 576;
			break;
		
		case -1530816149:
			iVar0 = 577;
			break;
		
		case 1189996018:
			iVar0 = 578;
			break;
		
		case -210110115:
			iVar0 = 579;
			break;
		
		case -207110256:
			iVar0 = 580;
			break;
		
		case 1801308144:
			iVar0 = 581;
			break;
		
		case 320631086:
			iVar0 = 582;
			break;
		
		case 1022560466:
			iVar0 = 583;
			break;
		
		case -952946041:
			iVar0 = 584;
			break;
		
		case 1321460664:
			iVar0 = 585;
			break;
		
		case -781625914:
			iVar0 = 586;
			break;
		
		case -1522247835:
			iVar0 = 587;
			break;
		
		case -1531245231:
			iVar0 = 588;
			break;
		
		case -1070472994:
			iVar0 = 589;
			break;
		
		case -2113341060:
			iVar0 = 590;
			break;
		
		case 965047293:
			iVar0 = 591;
			break;
		
		case 2114285045:
			iVar0 = 592;
			break;
		
		case -1635032213:
			iVar0 = 593;
			break;
		
		case 1310864345:
			iVar0 = 594;
			break;
		
		case -973977633:
			iVar0 = 595;
			break;
		
		case -1439643329:
			iVar0 = 596;
			break;
		
		case 434150104:
			iVar0 = 597;
			break;
		
		case 1243301688:
			iVar0 = 598;
			break;
		
		case -1233567982:
			iVar0 = 599;
			break;
	}
	switch (iParam0)
	{
		case 1262886680:
			iVar0 = 600;
			break;
		
		case 283135569:
			iVar0 = 601;
			break;
		
		case -548917969:
			iVar0 = 602;
			break;
		
		case 153465812:
			iVar0 = 603;
			break;
		
		case 1916093085:
			iVar0 = 604;
			break;
		
		case -701486200:
			iVar0 = 605;
			break;
		
		case 1951718630:
			iVar0 = 606;
			break;
		
		case -1981978861:
			iVar0 = 607;
			break;
		
		case -1998094267:
			iVar0 = 608;
			break;
		
		case -718445629:
			iVar0 = 609;
			break;
		
		case -35697399:
			iVar0 = 610;
			break;
		
		case -899081349:
			iVar0 = 611;
			break;
		
		case 1123547916:
			iVar0 = 612;
			break;
		
		case -1139893782:
			iVar0 = 613;
			break;
		
		case 1446511785:
			iVar0 = 614;
			break;
		
		case 1234256191:
			iVar0 = 615;
			break;
		
		case 413901048:
			iVar0 = 616;
			break;
		
		case 1527450164:
			iVar0 = 617;
			break;
		
		case -1786525476:
			iVar0 = 618;
			break;
		
		case 1439516635:
			iVar0 = 619;
			break;
		
		case 733800794:
			iVar0 = 620;
			break;
		
		case -399223540:
			iVar0 = 621;
			break;
		
		case -1894392230:
			iVar0 = 622;
			break;
		
		case 229993415:
			iVar0 = 623;
			break;
		
		case -620189683:
			iVar0 = 624;
			break;
		
		case 1846617794:
			iVar0 = 625;
			break;
		
		case -1142479347:
			iVar0 = 626;
			break;
		
		case -512960025:
			iVar0 = 627;
			break;
		
		case -759812557:
			iVar0 = 628;
			break;
		
		case 468661890:
			iVar0 = 629;
			break;
		
		case 1907925586:
			iVar0 = 630;
			break;
		
		case 646243571:
			iVar0 = 631;
			break;
		
		case 1953935161:
			iVar0 = 632;
			break;
		
		case 874867224:
			iVar0 = 633;
			break;
		
		case 1344008898:
			iVar0 = 634;
			break;
		
		case 1297781304:
			iVar0 = 635;
			break;
		
		case 1977233252:
			iVar0 = 636;
			break;
		
		case -194410344:
			iVar0 = 637;
			break;
		
		case 392012609:
			iVar0 = 638;
			break;
		
		case 705148450:
			iVar0 = 639;
			break;
		
		case 1677522529:
			iVar0 = 640;
			break;
		
		case -1362677538:
			iVar0 = 641;
			break;
		
		case 863458948:
			iVar0 = 642;
			break;
		
		case 9874621:
			iVar0 = 643;
			break;
		
		case 1809338990:
			iVar0 = 644;
			break;
		
		case -346939959:
			iVar0 = 645;
			break;
		
		case -934753544:
			iVar0 = 646;
			break;
		
		case 1604986209:
			iVar0 = 647;
			break;
		
		case -1514700421:
			iVar0 = 648;
			break;
		
		case 1177361060:
			iVar0 = 649;
			break;
		
		case -937529288:
			iVar0 = 650;
			break;
		
		case 547723644:
			iVar0 = 651;
			break;
		
		case 1750314531:
			iVar0 = 652;
			break;
		
		case -988332613:
			iVar0 = 653;
			break;
		
		case 80720443:
			iVar0 = 654;
			break;
		
		case -1220194634:
			iVar0 = 655;
			break;
		
		case -925735153:
			iVar0 = 656;
			break;
		
		case -1403745446:
			iVar0 = 657;
			break;
		
		case -1084626028:
			iVar0 = 658;
			break;
		
		case 2060572320:
			iVar0 = 659;
			break;
		
		case 1064377095:
			iVar0 = 660;
			break;
		
		case -1985597576:
			iVar0 = 661;
			break;
		
		case -2003189104:
			iVar0 = 662;
			break;
		
		case 1452329956:
			iVar0 = 663;
			break;
		
		case 1928573506:
			iVar0 = 664;
			break;
		
		case -185753722:
			iVar0 = 665;
			break;
		
		case -1580916109:
			iVar0 = 666;
			break;
		
		case -1077059973:
			iVar0 = 667;
			break;
		
		case 131755133:
			iVar0 = 668;
			break;
		
		case -253351038:
			iVar0 = 669;
			break;
		
		case 1332845224:
			iVar0 = 670;
			break;
		
		case -685051870:
			iVar0 = 671;
			break;
		
		case 2122847199:
			iVar0 = 672;
			break;
		
		case -149940744:
			iVar0 = 673;
			break;
		
		case -147741130:
			iVar0 = 674;
			break;
		
		case 302211868:
			iVar0 = 675;
			break;
		
		case -1361568592:
			iVar0 = 676;
			break;
		
		case -156600218:
			iVar0 = 677;
			break;
		
		case 1592739450:
			iVar0 = 678;
			break;
		
		case -633744004:
			iVar0 = 679;
			break;
		
		case -1467745952:
			iVar0 = 680;
			break;
		
		case 1129961041:
			iVar0 = 681;
			break;
		
		case -1221180772:
			iVar0 = 682;
			break;
		
		case 1957517559:
			iVar0 = 683;
			break;
		
		case -335233377:
			iVar0 = 684;
			break;
		
		case 2146762380:
			iVar0 = 685;
			break;
		
		case 427236107:
			iVar0 = 686;
			break;
		
		case -49636427:
			iVar0 = 687;
			break;
		
		case 1988133312:
			iVar0 = 688;
			break;
		
		case 40044091:
			iVar0 = 689;
			break;
		
		case -1189893809:
			iVar0 = 690;
			break;
		
		case 1182549017:
			iVar0 = 691;
			break;
		
		case 1403255481:
			iVar0 = 692;
			break;
		
		case 821579887:
			iVar0 = 693;
			break;
		
		case 1975948161:
			iVar0 = 694;
			break;
		
		case -953362234:
			iVar0 = 695;
			break;
		
		case 1521494915:
			iVar0 = 696;
			break;
		
		case 84635211:
			iVar0 = 697;
			break;
		
		case 2074655231:
			iVar0 = 698;
			break;
		
		case 1742494019:
			iVar0 = 699;
			break;
	}
	switch (iParam0)
	{
		case 1841934566:
			iVar0 = 700;
			break;
		
		case 1648222412:
			iVar0 = 701;
			break;
		
		case 1019312748:
			iVar0 = 702;
			break;
		
		case -1218730541:
			iVar0 = 703;
			break;
		
		case -88186884:
			iVar0 = 704;
			break;
		
		case 1428588096:
			iVar0 = 705;
			break;
		
		case -1788493673:
			iVar0 = 706;
			break;
		
		case -241894528:
			iVar0 = 707;
			break;
		
		case -1425414573:
			iVar0 = 708;
			break;
		
		case 1797163947:
			iVar0 = 709;
			break;
		
		case 823191231:
			iVar0 = 710;
			break;
		
		case 894133321:
			iVar0 = 711;
			break;
		
		case 1889485313:
			iVar0 = 712;
			break;
		
		case 687338866:
			iVar0 = 713;
			break;
		
		case 1827923343:
			iVar0 = 714;
			break;
		
		case -1893751733:
			iVar0 = 715;
			break;
		
		case 1739151647:
			iVar0 = 716;
			break;
		
		case 1361186211:
			iVar0 = 717;
			break;
		
		case -188624940:
			iVar0 = 718;
			break;
		
		case -1097074643:
			iVar0 = 719;
			break;
		
		case -609708185:
			iVar0 = 720;
			break;
		
		case 1295911115:
			iVar0 = 721;
			break;
		
		case -1694728829:
			iVar0 = 722;
			break;
		
		case -322091380:
			iVar0 = 723;
			break;
		
		case -1168575065:
			iVar0 = 724;
			break;
		
		case 756873456:
			iVar0 = 725;
			break;
		
		case -730037708:
			iVar0 = 726;
			break;
		
		case -970458486:
			iVar0 = 727;
			break;
		
		case 975601953:
			iVar0 = 728;
			break;
		
		case 1614208560:
			iVar0 = 729;
			break;
		
		case -726032561:
			iVar0 = 730;
			break;
		
		case -1824987162:
			iVar0 = 731;
			break;
		
		case 417579524:
			iVar0 = 732;
			break;
		
		case 734151492:
			iVar0 = 733;
			break;
		
		case -1766862320:
			iVar0 = 734;
			break;
		
		case 579562906:
			iVar0 = 735;
			break;
		
		case -619754931:
			iVar0 = 736;
			break;
		
		case 1424441799:
			iVar0 = 737;
			break;
		
		case -1405036369:
			iVar0 = 738;
			break;
		
		case 1929056908:
			iVar0 = 739;
			break;
		
		case -34538790:
			iVar0 = 740;
			break;
		
		case 1898518287:
			iVar0 = 741;
			break;
		
		case -893104650:
			iVar0 = 742;
			break;
		
		case -553814424:
			iVar0 = 743;
			break;
		
		case 201431212:
			iVar0 = 744;
			break;
		
		case 528695215:
			iVar0 = 745;
			break;
		
		case -1266435389:
			iVar0 = 746;
			break;
		
		case 980213248:
			iVar0 = 747;
			break;
		
		case 1019119277:
			iVar0 = 748;
			break;
		
		case 1187710323:
			iVar0 = 749;
			break;
		
		case 382848971:
			iVar0 = 750;
			break;
		
		case -1567832243:
			iVar0 = 751;
			break;
		
		case 2049506430:
			iVar0 = 752;
			break;
		
		case 92806870:
			iVar0 = 753;
			break;
		
		case -628203424:
			iVar0 = 754;
			break;
		
		case 2125178682:
			iVar0 = 755;
			break;
		
		case 399660858:
			iVar0 = 756;
			break;
		
		case -624842093:
			iVar0 = 757;
			break;
		
		case 282885412:
			iVar0 = 758;
			break;
		
		case 1599917585:
			iVar0 = 759;
			break;
		
		case -703540963:
			iVar0 = 760;
			break;
		
		case 904358018:
			iVar0 = 761;
			break;
		
		case 560877895:
			iVar0 = 762;
			break;
		
		case 2145953489:
			iVar0 = 763;
			break;
		
		case -87437351:
			iVar0 = 764;
			break;
		
		case -187239215:
			iVar0 = 765;
			break;
		
		case 1481255878:
			iVar0 = 766;
			break;
		
		case 1805700785:
			iVar0 = 767;
			break;
		
		case -368780168:
			iVar0 = 768;
			break;
		
		case 1457900554:
			iVar0 = 769;
			break;
		
		case -1066127505:
			iVar0 = 770;
			break;
		
		case -1366750043:
			iVar0 = 771;
			break;
		
		case 1944822196:
			iVar0 = 772;
			break;
		
		case -1639289459:
			iVar0 = 773;
			break;
		
		case 1282565442:
			iVar0 = 774;
			break;
		
		case -884280700:
			iVar0 = 775;
			break;
		
		case -1047313079:
			iVar0 = 776;
			break;
		
		case 1849315700:
			iVar0 = 777;
			break;
		
		case -2129853791:
			iVar0 = 778;
			break;
		
		case -643974508:
			iVar0 = 779;
			break;
		
		case 614424236:
			iVar0 = 780;
			break;
		
		case 2059836334:
			iVar0 = 781;
			break;
		
		case 221447729:
			iVar0 = 782;
			break;
		
		case 1965910391:
			iVar0 = 783;
			break;
		
		case 1822250244:
			iVar0 = 784;
			break;
		
		case 2144765713:
			iVar0 = 785;
			break;
		
		case 280971002:
			iVar0 = 786;
			break;
		
		case -1869294378:
			iVar0 = 787;
			break;
		
		case -869172334:
			iVar0 = 788;
			break;
		
		case -1028499109:
			iVar0 = 789;
			break;
		
		case 1076096084:
			iVar0 = 790;
			break;
		
		case -636780127:
			iVar0 = 791;
			break;
		
		case 603013184:
			iVar0 = 792;
			break;
		
		case 1351256035:
			iVar0 = 793;
			break;
		
		case 49108481:
			iVar0 = 794;
			break;
		
		case 354124980:
			iVar0 = 795;
			break;
		
		case -962894007:
			iVar0 = 796;
			break;
		
		case 1617075313:
			iVar0 = 797;
			break;
		
		case -635749278:
			iVar0 = 798;
			break;
		
		case -1208904204:
			iVar0 = 799;
			break;
	}
	switch (iParam0)
	{
		case 414914435:
			iVar0 = 800;
			break;
		
		case -2100006249:
			iVar0 = 801;
			break;
		
		case 424018111:
			iVar0 = 802;
			break;
		
		case 849119336:
			iVar0 = 803;
			break;
		
		case 1807228945:
			iVar0 = 804;
			break;
		
		case -1119071247:
			iVar0 = 805;
			break;
		
		case -1146714704:
			iVar0 = 806;
			break;
		
		case -288852985:
			iVar0 = 807;
			break;
		
		case -562029507:
			iVar0 = 808;
			break;
		
		case -470534615:
			iVar0 = 809;
			break;
		
		case 371389080:
			iVar0 = 810;
			break;
		
		case -521204587:
			iVar0 = 811;
			break;
		
		case 1685732560:
			iVar0 = 812;
			break;
		
		case -1386443378:
			iVar0 = 813;
			break;
		
		case -1706648281:
			iVar0 = 814;
			break;
		
		case -519957866:
			iVar0 = 815;
			break;
		
		case 653935582:
			iVar0 = 816;
			break;
		
		case 2111779395:
			iVar0 = 817;
			break;
		
		case 428988289:
			iVar0 = 818;
			break;
		
		case -1903962822:
			iVar0 = 819;
			break;
		
		case 1365770911:
			iVar0 = 820;
			break;
		
		case 42029862:
			iVar0 = 821;
			break;
		
		case 438631811:
			iVar0 = 822;
			break;
		
		case -1478715891:
			iVar0 = 823;
			break;
		
		case -1395531229:
			iVar0 = 824;
			break;
		
		case 30333135:
			iVar0 = 825;
			break;
		
		case 1783341339:
			iVar0 = 826;
			break;
		
		case -16077126:
			iVar0 = 827;
			break;
		
		case -833643184:
			iVar0 = 828;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_118(int iParam0, var uParam1)//Position - 0x766F
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case -1917324065:
			iVar0 = 0;
			break;
		
		case 1056297333:
			iVar0 = 1;
			break;
		
		case 494620709:
			iVar0 = 2;
			break;
		
		case 800453786:
			iVar0 = 3;
			break;
		
		case -1082736975:
			iVar0 = 4;
			break;
		
		case -754981437:
			iVar0 = 5;
			break;
		
		case -1801855538:
			iVar0 = 6;
			break;
		
		case 459313194:
			iVar0 = 7;
			break;
		
		case 2007087579:
			iVar0 = 8;
			break;
		
		case 1987172386:
			iVar0 = 9;
			break;
		
		case 1801787829:
			iVar0 = 10;
			break;
		
		case -221624488:
			iVar0 = 11;
			break;
		
		case 25158851:
			iVar0 = 12;
			break;
		
		case 472458130:
			iVar0 = 13;
			break;
		
		case 164352862:
			iVar0 = 14;
			break;
		
		case -904148779:
			iVar0 = 15;
			break;
		
		case -694439771:
			iVar0 = 16;
			break;
		
		case -1469590466:
			iVar0 = 17;
			break;
		
		case -1511207100:
			iVar0 = 18;
			break;
		
		case -1352670678:
			iVar0 = 19;
			break;
		
		case -1960273476:
			iVar0 = 20;
			break;
		
		case -1657389609:
			iVar0 = 21;
			break;
		
		case 1826839858:
			iVar0 = 22;
			break;
		
		case 1989701788:
			iVar0 = 23;
			break;
		
		case 1213109257:
			iVar0 = 24;
			break;
		
		case 607407061:
			iVar0 = 25;
			break;
		
		case 875031480:
			iVar0 = 26;
			break;
		
		case 1487418552:
			iVar0 = 27;
			break;
		
		case 264053475:
			iVar0 = 28;
			break;
		
		case 99094329:
			iVar0 = 29;
			break;
		
		case -244193715:
			iVar0 = 30;
			break;
		
		case -540785934:
			iVar0 = 31;
			break;
		
		case -694833003:
			iVar0 = 32;
			break;
		
		case -852058665:
			iVar0 = 33;
			break;
		
		case -1512648940:
			iVar0 = 34;
			break;
		
		case -761354077:
			iVar0 = 35;
			break;
		
		case 1560551467:
			iVar0 = 36;
			break;
		
		case 827974775:
			iVar0 = 37;
			break;
		
		case 1595162603:
			iVar0 = 38;
			break;
		
		case 709663738:
			iVar0 = 39;
			break;
		
		case 990002533:
			iVar0 = 40;
			break;
		
		case 1860213958:
			iVar0 = 41;
			break;
		
		case 2119318441:
			iVar0 = 42;
			break;
		
		case -1953737187:
			iVar0 = 43;
			break;
		
		case 193320466:
			iVar0 = 44;
			break;
		
		case 1936646403:
			iVar0 = 45;
			break;
		
		case -1126042648:
			iVar0 = 46;
			break;
		
		case -1125022512:
			iVar0 = 47;
			break;
		
		case -1304369017:
			iVar0 = 48;
			break;
		
		case -2018143375:
			iVar0 = 49;
			break;
		
		case 224730392:
			iVar0 = 50;
			break;
		
		case 439629494:
			iVar0 = 51;
			break;
		
		case 736778786:
			iVar0 = 52;
			break;
		
		case 1048444745:
			iVar0 = 53;
			break;
		
		case 1988816738:
			iVar0 = 54;
			break;
		
		case 2140603469:
			iVar0 = 55;
			break;
		
		case 214245031:
			iVar0 = 56;
			break;
		
		case 1006238992:
			iVar0 = 57;
			break;
		
		case 689952604:
			iVar0 = 58;
			break;
		
		case -681528353:
			iVar0 = 59;
			break;
		
		case 1157448359:
			iVar0 = 60;
			break;
		
		case 43105745:
			iVar0 = 61;
			break;
		
		case -270395278:
			iVar0 = 62;
			break;
		
		case 505181414:
			iVar0 = 63;
			break;
		
		case 254662409:
			iVar0 = 64;
			break;
		
		case -982924414:
			iVar0 = 65;
			break;
		
		case -1156010272:
			iVar0 = 66;
			break;
		
		case 1885313391:
			iVar0 = 67;
			break;
		
		case -694786597:
			iVar0 = 68;
			break;
		
		case -1950199756:
			iVar0 = 69;
			break;
		
		case 384168721:
			iVar0 = 70;
			break;
		
		case -369452741:
			iVar0 = 71;
			break;
		
		case -89113946:
			iVar0 = 72;
			break;
		
		case 1836261422:
			iVar0 = 73;
			break;
		
		case -1004417654:
			iVar0 = 74;
			break;
		
		case -754095263:
			iVar0 = 75;
			break;
		
		case -1210698509:
			iVar0 = 76;
			break;
		
		case 1332405298:
			iVar0 = 77;
			break;
		
		case 552929095:
			iVar0 = 78;
			break;
		
		case 861154309:
			iVar0 = 79;
			break;
		
		case -1653801207:
			iVar0 = 80;
			break;
		
		case -87213624:
			iVar0 = 81;
			break;
		
		case 1285643631:
			iVar0 = 82;
			break;
		
		case 523240077:
			iVar0 = 83;
			break;
		
		case 823174734:
			iVar0 = 84;
			break;
		
		case -1248612522:
			iVar0 = 85;
			break;
		
		case 123359970:
			iVar0 = 86;
			break;
		
		case 369684543:
			iVar0 = 87;
			break;
		
		case -337142787:
			iVar0 = 88;
			break;
		
		case 1395583642:
			iVar0 = 89;
			break;
		
		case 1782520810:
			iVar0 = 90;
			break;
		
		case -660506451:
			iVar0 = 91;
			break;
		
		case -1092860637:
			iVar0 = 92;
			break;
		
		case 524387820:
			iVar0 = 93;
			break;
		
		case -1829180023:
			iVar0 = 94;
			break;
		
		case 2091368679:
			iVar0 = 95;
			break;
		
		case 1851597906:
			iVar0 = 96;
			break;
		
		case -434629734:
			iVar0 = 97;
			break;
		
		case 1415278623:
			iVar0 = 98;
			break;
		
		case 1252285617:
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case 893595891:
			iVar0 = 100;
			break;
		
		case 423819507:
			iVar0 = 101;
			break;
		
		case -1433887872:
			iVar0 = 102;
			break;
		
		case -464613621:
			iVar0 = 103;
			break;
		
		case -301227387:
			iVar0 = 104;
			break;
		
		case -701762906:
			iVar0 = 105;
			break;
		
		case -890282963:
			iVar0 = 106;
			break;
		
		case -1188251480:
			iVar0 = 107;
			break;
		
		case 258827560:
			iVar0 = 108;
			break;
		
		case 965649655:
			iVar0 = 109;
			break;
		
		case 718800778:
			iVar0 = 110;
			break;
		
		case 1959959422:
			iVar0 = 111;
			break;
		
		case 1200177388:
			iVar0 = 112;
			break;
		
		case -1874439579:
			iVar0 = 113;
			break;
		
		case -1679505893:
			iVar0 = 114;
			break;
		
		case -1976229188:
			iVar0 = 115;
			break;
		
		case 2037875009:
			iVar0 = 116;
			break;
		
		case -235146664:
			iVar0 = 117;
			break;
		
		case -441853516:
			iVar0 = 118;
			break;
		
		case -664221443:
			iVar0 = 119;
			break;
		
		case -371627042:
			iVar0 = 120;
			break;
		
		case -1266220742:
			iVar0 = 121;
			break;
		
		case -968055611:
			iVar0 = 122;
			break;
		
		case 248100286:
			iVar0 = 123;
			break;
		
		case 551606764:
			iVar0 = 124;
			break;
		
		case 1805971315:
			iVar0 = 125;
			break;
		
		case -43642121:
			iVar0 = 126;
			break;
		
		case 1172251624:
			iVar0 = 127;
			break;
		
		case 1471989667:
			iVar0 = 128;
			break;
		
		case -2124702788:
			iVar0 = 129;
			break;
		
		case -1826734271:
			iVar0 = 130;
			break;
		
		case -900452940:
			iVar0 = 131;
			break;
		
		case -292194762:
			iVar0 = 132;
			break;
		
		case 637166847:
			iVar0 = 133;
			break;
		
		case -1204844181:
			iVar0 = 134;
			break;
		
		case 324779970:
			iVar0 = 135;
			break;
		
		case 329039940:
			iVar0 = 136;
			break;
		
		case 1854928425:
			iVar0 = 137;
			break;
		
		case 13179549:
			iVar0 = 138;
			break;
		
		case 1899823455:
			iVar0 = 139;
			break;
		
		case -2090490448:
			iVar0 = 140;
			break;
		
		case -1801467868:
			iVar0 = 141;
			break;
		
		case 953986562:
			iVar0 = 142;
			break;
		
		case 585335312:
			iVar0 = 143;
			break;
		
		case 489617063:
			iVar0 = 144;
			break;
		
		case 210195800:
			iVar0 = 145;
			break;
		
		case 1843402776:
			iVar0 = 146;
			break;
		
		case -1600520821:
			iVar0 = 147;
			break;
		
		case 1399087889:
			iVar0 = 148;
			break;
		
		case 1169344430:
			iVar0 = 149;
			break;
		
		case -2028647818:
			iVar0 = 150;
			break;
		
		case -1335845620:
			iVar0 = 151;
			break;
		
		case -1450406320:
			iVar0 = 152;
			break;
		
		case -1209849091:
			iVar0 = 153;
			break;
		
		case 2065609077:
			iVar0 = 154;
			break;
		
		case -664245241:
			iVar0 = 155;
			break;
		
		case 1676130538:
			iVar0 = 156;
			break;
		
		case -1730534702:
			iVar0 = 157;
			break;
		
		case -1767432596:
			iVar0 = 158;
			break;
		
		case -2016105604:
			iVar0 = 159;
			break;
		
		case 1971947238:
			iVar0 = 160;
			break;
		
		case -362811247:
			iVar0 = 161;
			break;
		
		case -668087251:
			iVar0 = 162;
			break;
		
		case -821282326:
			iVar0 = 163;
			break;
		
		case -1083467095:
			iVar0 = 164;
			break;
		
		case 550067555:
			iVar0 = 165;
			break;
		
		case 1439221609:
			iVar0 = 166;
			break;
		
		case 67412954:
			iVar0 = 167;
			break;
		
		case -1999360357:
			iVar0 = 168;
			break;
		
		case 1461537582:
			iVar0 = 169;
			break;
		
		case -1828273408:
			iVar0 = 170;
			break;
		
		case -1319239762:
			iVar0 = 171;
			break;
		
		case -1234400821:
			iVar0 = 172;
			break;
		
		case -992303449:
			iVar0 = 173;
			break;
		
		case -638398249:
			iVar0 = 174;
			break;
		
		case -41543683:
			iVar0 = 175;
			break;
		
		case -1934903018:
			iVar0 = 176;
			break;
		
		case 2132090345:
			iVar0 = 177;
			break;
		
		case 1751052413:
			iVar0 = 178;
			break;
		
		case 1519604966:
			iVar0 = 179;
			break;
		
		case -1964624525:
			iVar0 = 180;
			break;
		
		case 2006191823:
			iVar0 = 181;
			break;
		
		case 1633280603:
			iVar0 = 182;
			break;
		
		case 632918673:
			iVar0 = 183;
			break;
		
		case -190040148:
			iVar0 = 184;
			break;
		
		case 42936837:
			iVar0 = 185;
			break;
		
		case -1458541976:
			iVar0 = 186;
			break;
		
		case -606014753:
			iVar0 = 187;
			break;
		
		case -613376371:
			iVar0 = 188;
			break;
		
		case -446291501:
			iVar0 = 189;
			break;
		
		case 739308497:
			iVar0 = 190;
			break;
		
		case 495343292:
			iVar0 = 191;
			break;
		
		case -1686711653:
			iVar0 = 192;
			break;
		
		case 1187457341:
			iVar0 = 193;
			break;
		
		case 956403122:
			iVar0 = 194;
			break;
		
		case 1647042566:
			iVar0 = 195;
			break;
		
		case -461478743:
			iVar0 = 196;
			break;
		
		case -1883325653:
			iVar0 = 197;
			break;
		
		case -2114248796:
			iVar0 = 198;
			break;
		
		case 314228205:
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case 1503775674:
			iVar0 = 200;
			break;
		
		case 1862399610:
			iVar0 = 201;
			break;
		
		case 708472048:
			iVar0 = 202;
			break;
		
		case -1207367545:
			iVar0 = 203;
			break;
		
		case 111650251:
			iVar0 = 204;
			break;
		
		case -28941494:
			iVar0 = 205;
			break;
		
		case -1827173138:
			iVar0 = 206;
			break;
		
		case -520681423:
			iVar0 = 207;
			break;
		
		case -209343154:
			iVar0 = 208;
			break;
		
		case -293579471:
			iVar0 = 209;
			break;
		
		case 20871853:
			iVar0 = 210;
			break;
		
		case -89823344:
			iVar0 = 211;
			break;
		
		case -1820191335:
			iVar0 = 212;
			break;
		
		case -1588547274:
			iVar0 = 213;
			break;
		
		case -1224287070:
			iVar0 = 214;
			break;
		
		case -994150383:
			iVar0 = 215;
			break;
		
		case -869824793:
			iVar0 = 216;
			break;
		
		case -633330920:
			iVar0 = 217;
			break;
		
		case -308131364:
			iVar0 = 218;
			break;
		
		case -38278649:
			iVar0 = 219;
			break;
		
		case 555692245:
			iVar0 = 220;
			break;
		
		case 929455459:
			iVar0 = 221;
			break;
		
		case -2092436411:
			iVar0 = 222;
			break;
		
		case 1904300216:
			iVar0 = 223;
			break;
		
		case -1599361268:
			iVar0 = 224;
			break;
		
		case -1897002095:
			iVar0 = 225;
			break;
		
		case -1011813098:
			iVar0 = 226;
			break;
		
		case -1316794181:
			iVar0 = 227;
			break;
		
		case -416105443:
			iVar0 = 228;
			break;
		
		case -47978497:
			iVar0 = 229;
			break;
		
		case -358202620:
			iVar0 = 230;
			break;
		
		case 547139312:
			iVar0 = 231;
			break;
		
		case 1124688073:
			iVar0 = 232;
			break;
		
		case 888521890:
			iVar0 = 233;
			break;
		
		case 665823766:
			iVar0 = 234;
			break;
		
		case 427888057:
			iVar0 = 235;
			break;
		
		case 1121411181:
			iVar0 = 236;
			break;
		
		case 890225886:
			iVar0 = 237;
			break;
		
		case 651012186:
			iVar0 = 238;
			break;
		
		case 422776101:
			iVar0 = 239;
			break;
		
		case 1630543134:
			iVar0 = 240;
			break;
		
		case -1945668916:
			iVar0 = 241;
			break;
		
		case -627999265:
			iVar0 = 242;
			break;
		
		case 1682346315:
			iVar0 = 243;
			break;
		
		case 1021952654:
			iVar0 = 244;
			break;
		
		case 1319396867:
			iVar0 = 245;
			break;
		
		case 560794517:
			iVar0 = 246;
			break;
		
		case 858697496:
			iVar0 = 247;
			break;
		
		case -30981230:
			iVar0 = 248;
			break;
		
		case -328032215:
			iVar0 = 249;
			break;
		
		case -1451681225:
			iVar0 = 250;
			break;
		
		case 267904819:
			iVar0 = 251;
			break;
		
		case 1570178485:
			iVar0 = 252;
			break;
		
		case -1619850916:
			iVar0 = 253;
			break;
		
		case -713067148:
			iVar0 = 254;
			break;
		
		case 946477614:
			iVar0 = 255;
			break;
		
		case -1423343701:
			iVar0 = 256;
			break;
		
		case 445931457:
			iVar0 = 257;
			break;
		
		case 678558588:
			iVar0 = 258;
			break;
		
		case -854631987:
			iVar0 = 259;
			break;
		
		case -1707871209:
			iVar0 = 260;
			break;
		
		case -863391184:
			iVar0 = 261;
			break;
		
		case 671171671:
			iVar0 = 262;
			break;
		
		case 904519720:
			iVar0 = 263;
			break;
		
		case 670952414:
			iVar0 = 264;
			break;
		
		case -282875325:
			iVar0 = 265;
			break;
		
		case 2079623104:
			iVar0 = 266;
			break;
		
		case 1088443427:
			iVar0 = 267;
			break;
		
		case 200001600:
			iVar0 = 268;
			break;
		
		case 1620729159:
			iVar0 = 269;
			break;
		
		case -1713274238:
			iVar0 = 270;
			break;
		
		case -1571590969:
			iVar0 = 271;
			break;
		
		case -457639374:
			iVar0 = 272;
			break;
		
		case 64160805:
			iVar0 = 273;
			break;
		
		case 1015325203:
			iVar0 = 274;
			break;
		
		case -1951778967:
			iVar0 = 275;
			break;
		
		case 1836042304:
			iVar0 = 276;
			break;
		
		case -421094621:
			iVar0 = 277;
			break;
		
		case 641062099:
			iVar0 = 278;
			break;
		
		case 597454468:
			iVar0 = 279;
			break;
		
		case 713758205:
			iVar0 = 280;
			break;
		
		case 1042267708:
			iVar0 = 281;
			break;
		
		case -637951661:
			iVar0 = 282;
			break;
		
		case 195911857:
			iVar0 = 283;
			break;
		
		case 903988957:
			iVar0 = 284;
			break;
		
		case 1068170761:
			iVar0 = 285;
			break;
		
		case -619065384:
			iVar0 = 286;
			break;
		
		case -497085955:
			iVar0 = 287;
			break;
		
		case 1138369002:
			iVar0 = 288;
			break;
		
		case -1957731308:
			iVar0 = 289;
			break;
		
		case -2063712125:
			iVar0 = 290;
			break;
		
		case 1773674262:
			iVar0 = 291;
			break;
		
		case 1027059614:
			iVar0 = 292;
			break;
		
		case 1366782677:
			iVar0 = 293;
			break;
		
		case 216134256:
			iVar0 = 294;
			break;
		
		case 810154442:
			iVar0 = 295;
			break;
		
		case 77285961:
			iVar0 = 296;
			break;
		
		case 1617489838:
			iVar0 = 297;
			break;
		
		case 1697138602:
			iVar0 = 298;
			break;
		
		case 711811694:
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case -895106351:
			iVar0 = 300;
			break;
		
		case 875367934:
			iVar0 = 301;
			break;
		
		case -979867160:
			iVar0 = 302;
			break;
		
		case -1233816942:
			iVar0 = 303;
			break;
		
		case -866958715:
			iVar0 = 304;
			break;
		
		case -1303573005:
			iVar0 = 305;
			break;
		
		case 2085207152:
			iVar0 = 306;
			break;
		
		case 857137150:
			iVar0 = 307;
			break;
		
		case 535952639:
			iVar0 = 308;
			break;
		
		case -1974657401:
			iVar0 = 309;
			break;
		
		case 129909013:
			iVar0 = 310;
			break;
		
		case -1499060170:
			iVar0 = 311;
			break;
		
		case 412032123:
			iVar0 = 312;
			break;
		
		case 915049044:
			iVar0 = 313;
			break;
		
		case 456478679:
			iVar0 = 314;
			break;
		
		case 907364848:
			iVar0 = 315;
			break;
		
		case -1783721060:
			iVar0 = 316;
			break;
		
		case -1008363280:
			iVar0 = 317;
			break;
		
		case 1429817922:
			iVar0 = 318;
			break;
		
		case -938326281:
			iVar0 = 319;
			break;
		
		case -1073925235:
			iVar0 = 320;
			break;
		
		case 1498524677:
			iVar0 = 321;
			break;
		
		case 1525596308:
			iVar0 = 322;
			break;
		
		case 1232639216:
			iVar0 = 323;
			break;
		
		case 956061600:
			iVar0 = 324;
			break;
		
		case 816551665:
			iVar0 = 325;
			break;
		
		case 2049704410:
			iVar0 = 326;
			break;
		
		case -796818724:
			iVar0 = 327;
			break;
		
		case 1775476370:
			iVar0 = 328;
			break;
		
		case 266230635:
			iVar0 = 329;
			break;
		
		case -588549683:
			iVar0 = 330;
			break;
		
		case 464027076:
			iVar0 = 331;
			break;
		
		case 2122049260:
			iVar0 = 332;
			break;
		
		case 1049130700:
			iVar0 = 333;
			break;
		
		case -116952560:
			iVar0 = 334;
			break;
		
		case 1424723115:
			iVar0 = 335;
			break;
		
		case -1007272003:
			iVar0 = 336;
			break;
		
		case -644829701:
			iVar0 = 337;
			break;
		
		case -2103222497:
			iVar0 = 338;
			break;
		
		case -1589795073:
			iVar0 = 339;
			break;
		
		case -1689668067:
			iVar0 = 340;
			break;
		
		case -189814108:
			iVar0 = 341;
			break;
		
		case -1595292141:
			iVar0 = 342;
			break;
		
		case -1540940714:
			iVar0 = 343;
			break;
		
		case -2136471172:
			iVar0 = 344;
			break;
		
		case -666892434:
			iVar0 = 345;
			break;
		
		case -1001125323:
			iVar0 = 346;
			break;
		
		case 904104464:
			iVar0 = 347;
			break;
		
		case 690016265:
			iVar0 = 348;
			break;
		
		case 38190590:
			iVar0 = 349;
			break;
		
		case 2119761078:
			iVar0 = 350;
			break;
		
		case -1213131712:
			iVar0 = 351;
			break;
		
		case 990079224:
			iVar0 = 352;
			break;
		
		case -905045993:
			iVar0 = 353;
			break;
		
		case 2104378143:
			iVar0 = 354;
			break;
		
		case -666631800:
			iVar0 = 355;
			break;
		
		case 549954933:
			iVar0 = 356;
			break;
		
		case 1830069972:
			iVar0 = 357;
			break;
		
		case 859320876:
			iVar0 = 358;
			break;
		
		case -552358316:
			iVar0 = 359;
			break;
		
		case 1522216340:
			iVar0 = 360;
			break;
		
		case -1783296601:
			iVar0 = 361;
			break;
		
		case 283995288:
			iVar0 = 362;
			break;
		
		case -975534410:
			iVar0 = 363;
			break;
		
		case -2088194624:
			iVar0 = 364;
			break;
		
		case 1744801848:
			iVar0 = 365;
			break;
		
		case -481389646:
			iVar0 = 366;
			break;
		
		case -1781363036:
			iVar0 = 367;
			break;
		
		case 496009839:
			iVar0 = 368;
			break;
		
		case -667608820:
			iVar0 = 369;
			break;
		
		case 460475899:
			iVar0 = 370;
			break;
		
		case 1491168919:
			iVar0 = 371;
			break;
		
		case -1611478806:
			iVar0 = 372;
			break;
		
		case 523495612:
			iVar0 = 373;
			break;
		
		case -78008273:
			iVar0 = 374;
			break;
		
		case -762375847:
			iVar0 = 375;
			break;
		
		case 331482129:
			iVar0 = 376;
			break;
		
		case -2083628050:
			iVar0 = 377;
			break;
		
		case -468800117:
			iVar0 = 378;
			break;
		
		case 724819757:
			iVar0 = 379;
			break;
		
		case -1058761348:
			iVar0 = 380;
			break;
		
		case -546178212:
			iVar0 = 381;
			break;
		
		case -118052734:
			iVar0 = 382;
			break;
		
		case 1654466691:
			iVar0 = 383;
			break;
		
		case -1077553649:
			iVar0 = 384;
			break;
		
		case -886092159:
			iVar0 = 385;
			break;
		
		case -1406331536:
			iVar0 = 386;
			break;
		
		case -1968934850:
			iVar0 = 387;
			break;
		
		case 3741245:
			iVar0 = 388;
			break;
		
		case 1387838298:
			iVar0 = 389;
			break;
		
		case -1941058219:
			iVar0 = 390;
			break;
		
		case 955033120:
			iVar0 = 391;
			break;
		
		case 677119231:
			iVar0 = 392;
			break;
		
		case -1616214916:
			iVar0 = 393;
			break;
		
		case -841195297:
			iVar0 = 394;
			break;
		
		case -909289279:
			iVar0 = 395;
			break;
		
		case -239567341:
			iVar0 = 396;
			break;
		
		case -613592707:
			iVar0 = 397;
			break;
		
		case -988568374:
			iVar0 = 398;
			break;
		
		case -1090807654:
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case 534771589:
			iVar0 = 400;
			break;
		
		case -1340139519:
			iVar0 = 401;
			break;
		
		case -849980761:
			iVar0 = 402;
			break;
		
		case -551553478:
			iVar0 = 403;
			break;
		
		case 386581472:
			iVar0 = 404;
			break;
		
		case 1466454525:
			iVar0 = 405;
			break;
		
		case 283190173:
			iVar0 = 406;
			break;
		
		case 1528527015:
			iVar0 = 407;
			break;
		
		case -1690029966:
			iVar0 = 408;
			break;
		
		case -1685994466:
			iVar0 = 409;
			break;
		
		case 255166927:
			iVar0 = 410;
			break;
		
		case -271257487:
			iVar0 = 411;
			break;
		
		case 1885215284:
			iVar0 = 412;
			break;
		
		case -1935156988:
			iVar0 = 413;
			break;
		
		case 1061465906:
			iVar0 = 414;
			break;
		
		case -871031729:
			iVar0 = 415;
			break;
		
		case -101171485:
			iVar0 = 416;
			break;
		
		case -1590298770:
			iVar0 = 417;
			break;
		
		case 303441856:
			iVar0 = 418;
			break;
		
		case -2049689650:
			iVar0 = 419;
			break;
		
		case 788520303:
			iVar0 = 420;
			break;
		
		case -859861445:
			iVar0 = 421;
			break;
		
		case 1045897298:
			iVar0 = 422;
			break;
		
		case 116964921:
			iVar0 = 423;
			break;
		
		case -1502257606:
			iVar0 = 424;
			break;
		
		case -546150284:
			iVar0 = 425;
			break;
		
		case -357466888:
			iVar0 = 426;
			break;
		
		case 718674880:
			iVar0 = 427;
			break;
		
		case -1529401172:
			iVar0 = 428;
			break;
		
		case 2088037441:
			iVar0 = 429;
			break;
		
		case 2048866271:
			iVar0 = 430;
			break;
		
		case -1565431690:
			iVar0 = 431;
			break;
		
		case -1528465573:
			iVar0 = 432;
			break;
		
		case 401532197:
			iVar0 = 433;
			break;
		
		case 826974918:
			iVar0 = 434;
			break;
		
		case -676067408:
			iVar0 = 435;
			break;
		
		case 1877289089:
			iVar0 = 436;
			break;
		
		case 859380017:
			iVar0 = 437;
			break;
		
		case 233098354:
			iVar0 = 438;
			break;
		
		case 566101858:
			iVar0 = 439;
			break;
		
		case 529460830:
			iVar0 = 440;
			break;
		
		case -1833118141:
			iVar0 = 441;
			break;
		
		case 422823598:
			iVar0 = 442;
			break;
		
		case 1450358661:
			iVar0 = 443;
			break;
		
		case 741089893:
			iVar0 = 444;
			break;
		
		case 1289848370:
			iVar0 = 445;
			break;
		
		case 616166430:
			iVar0 = 446;
			break;
		
		case 1489225316:
			iVar0 = 447;
			break;
		
		case 753969632:
			iVar0 = 448;
			break;
		
		case -1182831168:
			iVar0 = 449;
			break;
		
		case 1545103753:
			iVar0 = 450;
			break;
		
		case 2090080808:
			iVar0 = 451;
			break;
		
		case 903606896:
			iVar0 = 452;
			break;
		
		case 26759391:
			iVar0 = 453;
			break;
		
		case 1651885364:
			iVar0 = 454;
			break;
		
		case 729529407:
			iVar0 = 455;
			break;
		
		case 528802126:
			iVar0 = 456;
			break;
		
		case -1468003071:
			iVar0 = 457;
			break;
		
		case 1683696787:
			iVar0 = 458;
			break;
		
		case -726859160:
			iVar0 = 459;
			break;
		
		case 1209899578:
			iVar0 = 460;
			break;
		
		case 930604285:
			iVar0 = 461;
			break;
		
		case -308584186:
			iVar0 = 462;
			break;
		
		case -64129874:
			iVar0 = 463;
			break;
		
		case -1431204514:
			iVar0 = 464;
			break;
		
		case -1133334304:
			iVar0 = 465;
			break;
		
		case -1809784771:
			iVar0 = 466;
			break;
		
		case -1576934998:
			iVar0 = 467;
			break;
		
		case -1570929684:
			iVar0 = 468;
			break;
		
		case 1976578151:
			iVar0 = 469;
			break;
		
		case -441419962:
			iVar0 = 470;
			break;
		
		case -841238543:
			iVar0 = 471;
			break;
		
		case 1644315794:
			iVar0 = 472;
			break;
		
		case 1964334039:
			iVar0 = 473;
			break;
		
		case -1168614925:
			iVar0 = 474;
			break;
		
		case -56760095:
			iVar0 = 475;
			break;
		
		case -1006202521:
			iVar0 = 476;
			break;
		
		case -1834049539:
			iVar0 = 477;
			break;
		
		case -2060372580:
			iVar0 = 478;
			break;
		
		case 1057304170:
			iVar0 = 479;
			break;
		
		case 1421572640:
			iVar0 = 480;
			break;
		
		case 481259621:
			iVar0 = 481;
			break;
		
		case 1227497670:
			iVar0 = 482;
			break;
		
		case 319276780:
			iVar0 = 483;
			break;
		
		case 2070827921:
			iVar0 = 484;
			break;
		
		case 1433629991:
			iVar0 = 485;
			break;
		
		case -1712994650:
			iVar0 = 486;
			break;
		
		case 2125094286:
			iVar0 = 487;
			break;
		
		case 712298404:
			iVar0 = 488;
			break;
		
		case 1998072324:
			iVar0 = 489;
			break;
		
		case 1249206960:
			iVar0 = 490;
			break;
		
		case -621355603:
			iVar0 = 491;
			break;
		
		case 1570835960:
			iVar0 = 492;
			break;
		
		case -1254202543:
			iVar0 = 493;
			break;
		
		case -956136061:
			iVar0 = 494;
			break;
		
		case -1925480683:
			iVar0 = 495;
			break;
		
		case 220143168:
			iVar0 = 496;
			break;
		
		case -1021851577:
			iVar0 = 497;
			break;
		
		case -773345516:
			iVar0 = 498;
			break;
		
		case 1091795205:
			iVar0 = 499;
			break;
	}
	switch (iParam0)
	{
		case -1159824040:
			iVar0 = 500;
			break;
		
		case 1448723789:
			iVar0 = 501;
			break;
		
		case -488127340:
			iVar0 = 502;
			break;
		
		case -1964967283:
			iVar0 = 503;
			break;
		
		case -1635180127:
			iVar0 = 504;
			break;
		
		case -10501563:
			iVar0 = 505;
			break;
		
		case 933419071:
			iVar0 = 506;
			break;
		
		case 1362374839:
			iVar0 = 507;
			break;
		
		case 488078687:
			iVar0 = 508;
			break;
		
		case -1869054624:
			iVar0 = 509;
			break;
		
		case -1817642831:
			iVar0 = 510;
			break;
		
		case 482472119:
			iVar0 = 511;
			break;
		
		case -1736839817:
			iVar0 = 512;
			break;
		
		case 415527077:
			iVar0 = 513;
			break;
		
		case -907440189:
			iVar0 = 514;
			break;
		
		case -2099454789:
			iVar0 = 515;
			break;
		
		case -1719543542:
			iVar0 = 516;
			break;
		
		case 1848661824:
			iVar0 = 517;
			break;
		
		case -2018029706:
			iVar0 = 518;
			break;
		
		case -717212544:
			iVar0 = 519;
			break;
		
		case -594210450:
			iVar0 = 520;
			break;
		
		case 1520437442:
			iVar0 = 521;
			break;
		
		case 374349467:
			iVar0 = 522;
			break;
		
		case 1533123503:
			iVar0 = 523;
			break;
		
		case -1832780872:
			iVar0 = 524;
			break;
		
		case 130721536:
			iVar0 = 525;
			break;
		
		case 195356001:
			iVar0 = 526;
			break;
		
		case -556915722:
			iVar0 = 527;
			break;
		
		case -1930562696:
			iVar0 = 528;
			break;
		
		case 941227127:
			iVar0 = 529;
			break;
		
		case -842699589:
			iVar0 = 530;
			break;
		
		case 1654019571:
			iVar0 = 531;
			break;
		
		case 224191803:
			iVar0 = 532;
			break;
		
		case -1996796255:
			iVar0 = 533;
			break;
		
		case -1850715440:
			iVar0 = 534;
			break;
		
		case 1603163718:
			iVar0 = 535;
			break;
		
		case 1567227108:
			iVar0 = 536;
			break;
		
		case -1630649997:
			iVar0 = 537;
			break;
		
		case -25727072:
			iVar0 = 538;
			break;
		
		case -1363418653:
			iVar0 = 539;
			break;
		
		case 1878229535:
			iVar0 = 540;
			break;
		
		case 1531050226:
			iVar0 = 541;
			break;
		
		case 1246243345:
			iVar0 = 542;
			break;
		
		case 463561930:
			iVar0 = 543;
			break;
		
		case 1431846777:
			iVar0 = 544;
			break;
		
		case -460168116:
			iVar0 = 545;
			break;
		
		case -2015343582:
			iVar0 = 546;
			break;
		
		case 2051301469:
			iVar0 = 547;
			break;
		
		case 1887452986:
			iVar0 = 548;
			break;
		
		case -1551331969:
			iVar0 = 549;
			break;
		
		case 682382693:
			iVar0 = 550;
			break;
		
		case 765481743:
			iVar0 = 551;
			break;
		
		case 1094179010:
			iVar0 = 552;
			break;
		
		case 1906582382:
			iVar0 = 553;
			break;
		
		case 1923135102:
			iVar0 = 554;
			break;
		
		case -964908188:
			iVar0 = 555;
			break;
		
		case -1145896773:
			iVar0 = 556;
			break;
		
		case -776248682:
			iVar0 = 557;
			break;
		
		case 872613482:
			iVar0 = 558;
			break;
		
		case 1049060638:
			iVar0 = 559;
			break;
		
		case -927135334:
			iVar0 = 560;
			break;
		
		case -445820043:
			iVar0 = 561;
			break;
		
		case 1610045630:
			iVar0 = 562;
			break;
		
		case -1070800165:
			iVar0 = 563;
			break;
		
		case -589592162:
			iVar0 = 564;
			break;
		
		case 1723966869:
			iVar0 = 565;
			break;
		
		case 402539085:
			iVar0 = 566;
			break;
		
		case 873283678:
			iVar0 = 567;
			break;
		
		case -883161109:
			iVar0 = 568;
			break;
		
		case -1764919154:
			iVar0 = 569;
			break;
		
		case -2050352513:
			iVar0 = 570;
			break;
		
		case 1114188021:
			iVar0 = 571;
			break;
		
		case 1798282399:
			iVar0 = 572;
			break;
		
		case 1944820428:
			iVar0 = 573;
			break;
		
		case 100210893:
			iVar0 = 574;
			break;
		
		case -1699022511:
			iVar0 = 575;
			break;
		
		case 466917406:
			iVar0 = 576;
			break;
		
		case -349746245:
			iVar0 = 577;
			break;
		
		case 715904570:
			iVar0 = 578;
			break;
		
		case 281777035:
			iVar0 = 579;
			break;
		
		case 1511283406:
			iVar0 = 580;
			break;
		
		case -241337647:
			iVar0 = 581;
			break;
		
		case 748393780:
			iVar0 = 582;
			break;
		
		case 709511536:
			iVar0 = 583;
			break;
		
		case -652535466:
			iVar0 = 584;
			break;
		
		case -1148900842:
			iVar0 = 585;
			break;
		
		case -271863310:
			iVar0 = 586;
			break;
		
		case 35654857:
			iVar0 = 587;
			break;
		
		case 1894813304:
			iVar0 = 588;
			break;
		
		case 1184660438:
			iVar0 = 589;
			break;
		
		case -1461750963:
			iVar0 = 590;
			break;
		
		case 769964545:
			iVar0 = 591;
			break;
		
		case 1424500982:
			iVar0 = 592;
			break;
		
		case -1810785185:
			iVar0 = 593;
			break;
		
		case 837990279:
			iVar0 = 594;
			break;
		
		case -1357788003:
			iVar0 = 595;
			break;
		
		case -8210327:
			iVar0 = 596;
			break;
		
		case 1186553524:
			iVar0 = 597;
			break;
		
		case 1174934203:
			iVar0 = 598;
			break;
		
		case -984449089:
			iVar0 = 599;
			break;
	}
	switch (iParam0)
	{
		case -49570837:
			iVar0 = 600;
			break;
		
		case -1680371785:
			iVar0 = 601;
			break;
		
		case -1850912390:
			iVar0 = 602;
			break;
		
		case -1740038087:
			iVar0 = 603;
			break;
		
		case -619541947:
			iVar0 = 604;
			break;
		
		case 294240494:
			iVar0 = 605;
			break;
		
		case -765542196:
			iVar0 = 606;
			break;
		
		case -1420662645:
			iVar0 = 607;
			break;
		
		case 331918356:
			iVar0 = 608;
			break;
		
		case 204953755:
			iVar0 = 609;
			break;
		
		case 1764172461:
			iVar0 = 610;
			break;
		
		case 1462870109:
			iVar0 = 611;
			break;
		
		case -2071014467:
			iVar0 = 612;
			break;
		
		case 478439238:
			iVar0 = 613;
			break;
		
		case 796489219:
			iVar0 = 614;
			break;
		
		case 843279688:
			iVar0 = 615;
			break;
		
		case 1752551314:
			iVar0 = 616;
			break;
		
		case 735155845:
			iVar0 = 617;
			break;
		
		case 1863251462:
			iVar0 = 618;
			break;
		
		case -2142058763:
			iVar0 = 619;
			break;
		
		case -207591105:
			iVar0 = 620;
			break;
		
		case -932813887:
			iVar0 = 621;
			break;
		
		case -313503199:
			iVar0 = 622;
			break;
		
		case 718936417:
			iVar0 = 623;
			break;
		
		case -1107649605:
			iVar0 = 624;
			break;
		
		case 39090475:
			iVar0 = 625;
			break;
		
		case 1628251208:
			iVar0 = 626;
			break;
		
		case -311245907:
			iVar0 = 627;
			break;
		
		case -942031335:
			iVar0 = 628;
			break;
		
		case -1285040537:
			iVar0 = 629;
			break;
		
		case -606706891:
			iVar0 = 630;
			break;
		
		case -1719095858:
			iVar0 = 631;
			break;
		
		case 1725502681:
			iVar0 = 632;
			break;
		
		case 609583888:
			iVar0 = 633;
			break;
		
		case -1172383155:
			iVar0 = 634;
			break;
		
		case -3492404:
			iVar0 = 635;
			break;
		
		case -1006004645:
			iVar0 = 636;
			break;
		
		case -1937311482:
			iVar0 = 637;
			break;
		
		case -2065604094:
			iVar0 = 638;
			break;
		
		case 2028818254:
			iVar0 = 639;
			break;
		
		case 1624012067:
			iVar0 = 640;
			break;
		
		case -1877817141:
			iVar0 = 641;
			break;
		
		case -911576192:
			iVar0 = 642;
			break;
		
		case -2038013276:
			iVar0 = 643;
			break;
		
		case -901986542:
			iVar0 = 644;
			break;
		
		case 1792492176:
			iVar0 = 645;
			break;
		
		case -86485329:
			iVar0 = 646;
			break;
		
		case -1083434268:
			iVar0 = 647;
			break;
		
		case 613606704:
			iVar0 = 648;
			break;
		
		case -394853815:
			iVar0 = 649;
			break;
		
		case -1103127620:
			iVar0 = 650;
			break;
		
		case -1565650506:
			iVar0 = 651;
			break;
		
		case 1845793118:
			iVar0 = 652;
			break;
		
		case 105835401:
			iVar0 = 653;
			break;
		
		case 874268443:
			iVar0 = 654;
			break;
		
		case 2088424900:
			iVar0 = 655;
			break;
		
		case -786732051:
			iVar0 = 656;
			break;
		
		case 2054090970:
			iVar0 = 657;
			break;
		
		case 1878368697:
			iVar0 = 658;
			break;
		
		case 569662133:
			iVar0 = 659;
			break;
		
		case -792802958:
			iVar0 = 660;
			break;
		
		case 2006001399:
			iVar0 = 661;
			break;
		
		case 1785762805:
			iVar0 = 662;
			break;
		
		case 737220320:
			iVar0 = 663;
			break;
		
		case 1396060544:
			iVar0 = 664;
			break;
		
		case -1964728736:
			iVar0 = 665;
			break;
		
		case 1593302778:
			iVar0 = 666;
			break;
		
		case 84849272:
			iVar0 = 667;
			break;
		
		case -402776165:
			iVar0 = 668;
			break;
		
		case -221660734:
			iVar0 = 669;
			break;
		
		case 1648112645:
			iVar0 = 670;
			break;
		
		case 2066668749:
			iVar0 = 671;
			break;
		
		case -4424163:
			iVar0 = 672;
			break;
		
		case -173288591:
			iVar0 = 673;
			break;
		
		case 253771760:
			iVar0 = 674;
			break;
		
		case -1431574022:
			iVar0 = 675;
			break;
		
		case 959314664:
			iVar0 = 676;
			break;
		
		case 1670479428:
			iVar0 = 677;
			break;
		
		case 1779534675:
			iVar0 = 678;
			break;
		
		case -1268204471:
			iVar0 = 679;
			break;
		
		case -1937668252:
			iVar0 = 680;
			break;
		
		case -192802570:
			iVar0 = 681;
			break;
		
		case 1200380295:
			iVar0 = 682;
			break;
		
		case -644503216:
			iVar0 = 683;
			break;
		
		case 496410473:
			iVar0 = 684;
			break;
		
		case 462780886:
			iVar0 = 685;
			break;
		
		case 211198653:
			iVar0 = 686;
			break;
		
		case -504012739:
			iVar0 = 687;
			break;
		
		case 34276608:
			iVar0 = 688;
			break;
		
		case -2088223199:
			iVar0 = 689;
			break;
		
		case 2056773549:
			iVar0 = 690;
			break;
		
		case 962023066:
			iVar0 = 691;
			break;
		
		case 893288510:
			iVar0 = 692;
			break;
		
		case 1963590204:
			iVar0 = 693;
			break;
		
		case 919272855:
			iVar0 = 694;
			break;
		
		case 413754974:
			iVar0 = 695;
			break;
		
		case -1862916472:
			iVar0 = 696;
			break;
		
		case -1184732039:
			iVar0 = 697;
			break;
		
		case -143503455:
			iVar0 = 698;
			break;
		
		case -1119221482:
			iVar0 = 699;
			break;
	}
	switch (iParam0)
	{
		case -1642199958:
			iVar0 = 700;
			break;
		
		case 133895676:
			iVar0 = 701;
			break;
		
		case -2040228203:
			iVar0 = 702;
			break;
		
		case -783643150:
			iVar0 = 703;
			break;
		
		case 291473683:
			iVar0 = 704;
			break;
		
		case -545474062:
			iVar0 = 705;
			break;
		
		case 1013405919:
			iVar0 = 706;
			break;
		
		case 673922718:
			iVar0 = 707;
			break;
		
		case -1707377523:
			iVar0 = 708;
			break;
		
		case 1029334921:
			iVar0 = 709;
			break;
		
		case -534855486:
			iVar0 = 710;
			break;
		
		case -516333262:
			iVar0 = 711;
			break;
		
		case 485135095:
			iVar0 = 712;
			break;
		
		case 1713551997:
			iVar0 = 713;
			break;
		
		case -1490658501:
			iVar0 = 714;
			break;
		
		case -1735635238:
			iVar0 = 715;
			break;
		
		case 1931303956:
			iVar0 = 716;
			break;
		
		case -1931617488:
			iVar0 = 717;
			break;
		
		case -1726332301:
			iVar0 = 718;
			break;
		
		case -1382922530:
			iVar0 = 719;
			break;
		
		case 452778672:
			iVar0 = 720;
			break;
		
		case -1776790350:
			iVar0 = 721;
			break;
		
		case -1988057295:
			iVar0 = 722;
			break;
		
		case 816707921:
			iVar0 = 723;
			break;
		
		case 744446190:
			iVar0 = 724;
			break;
		
		case 917772807:
			iVar0 = 725;
			break;
		
		case -292922355:
			iVar0 = 726;
			break;
		
		case -1495432685:
			iVar0 = 727;
			break;
		
		case -811147717:
			iVar0 = 728;
			break;
		
		case -851111149:
			iVar0 = 729;
			break;
		
		case 1404205290:
			iVar0 = 730;
			break;
		
		case -1365916084:
			iVar0 = 731;
			break;
		
		case -422913369:
			iVar0 = 732;
			break;
		
		case -892793487:
			iVar0 = 733;
			break;
		
		case -1795208156:
			iVar0 = 734;
			break;
		
		case 573261452:
			iVar0 = 735;
			break;
		
		case 2111374302:
			iVar0 = 736;
			break;
		
		case 1832021545:
			iVar0 = 737;
			break;
		
		case 209273925:
			iVar0 = 738;
			break;
		
		case -54254731:
			iVar0 = 739;
			break;
		
		case 112211142:
			iVar0 = 740;
			break;
		
		case 1306824915:
			iVar0 = 741;
			break;
		
		case -1841627189:
			iVar0 = 742;
			break;
		
		case -1814153457:
			iVar0 = 743;
			break;
		
		case -46260381:
			iVar0 = 744;
			break;
		
		case -303409019:
			iVar0 = 745;
			break;
		
		case -1521133289:
			iVar0 = 746;
			break;
		
		case -648193607:
			iVar0 = 747;
			break;
		
		case 820296726:
			iVar0 = 748;
			break;
		
		case 2025651359:
			iVar0 = 749;
			break;
		
		case 1082588124:
			iVar0 = 750;
			break;
		
		case -457752320:
			iVar0 = 751;
			break;
		
		case 1173525590:
			iVar0 = 752;
			break;
		
		case -2123485438:
			iVar0 = 753;
			break;
		
		case -815706791:
			iVar0 = 754;
			break;
		
		case -1318802347:
			iVar0 = 755;
			break;
		
		case 306110040:
			iVar0 = 756;
			break;
		
		case 1828101251:
			iVar0 = 757;
			break;
		
		case -919314748:
			iVar0 = 758;
			break;
		
		case 1971111649:
			iVar0 = 759;
			break;
		
		case -1477471726:
			iVar0 = 760;
			break;
		
		case -650926235:
			iVar0 = 761;
			break;
		
		case -618318124:
			iVar0 = 762;
			break;
		
		case -1820938681:
			iVar0 = 763;
			break;
		
		case -1532633409:
			iVar0 = 764;
			break;
		
		case 1605199232:
			iVar0 = 765;
			break;
		
		case 113768799:
			iVar0 = 766;
			break;
		
		case -267657422:
			iVar0 = 767;
			break;
		
		case -543540488:
			iVar0 = 768;
			break;
		
		case 146774245:
			iVar0 = 769;
			break;
		
		case -439062355:
			iVar0 = 770;
			break;
		
		case -187785912:
			iVar0 = 771;
			break;
		
		case 654127400:
			iVar0 = 772;
			break;
		
		case -2031558195:
			iVar0 = 773;
			break;
		
		case -1071879097:
			iVar0 = 774;
			break;
		
		case 2048147896:
			iVar0 = 775;
			break;
		
		case -1545551839:
			iVar0 = 776;
			break;
		
		case -1811149087:
			iVar0 = 777;
			break;
		
		case -256036523:
			iVar0 = 778;
			break;
		
		case -247186222:
			iVar0 = 779;
			break;
		
		case -355946577:
			iVar0 = 780;
			break;
		
		case 181399885:
			iVar0 = 781;
			break;
		
		case -1219430710:
			iVar0 = 782;
			break;
		
		case 928781515:
			iVar0 = 783;
			break;
		
		case -1757440846:
			iVar0 = 784;
			break;
		
		case -887356639:
			iVar0 = 785;
			break;
		
		case -162415909:
			iVar0 = 786;
			break;
		
		case -1822176783:
			iVar0 = 787;
			break;
		
		case -131581709:
			iVar0 = 788;
			break;
		
		case -969415240:
			iVar0 = 789;
			break;
		
		case 1482211094:
			iVar0 = 790;
			break;
		
		case 1942093304:
			iVar0 = 791;
			break;
		
		case 1376322385:
			iVar0 = 792;
			break;
		
		case 1678423640:
			iVar0 = 793;
			break;
		
		case 1321477520:
			iVar0 = 794;
			break;
		
		case -670835215:
			iVar0 = 795;
			break;
		
		case -32315658:
			iVar0 = 796;
			break;
		
		case -715501640:
			iVar0 = 797;
			break;
		
		case 812138662:
			iVar0 = 798;
			break;
		
		case -1950509905:
			iVar0 = 799;
			break;
	}
	switch (iParam0)
	{
		case 1850969667:
			iVar0 = 800;
			break;
		
		case 997671095:
			iVar0 = 801;
			break;
		
		case -1526467268:
			iVar0 = 802;
			break;
		
		case -881852779:
			iVar0 = 803;
			break;
		
		case -570992218:
			iVar0 = 804;
			break;
		
		case -1075500139:
			iVar0 = 805;
			break;
		
		case -791689054:
			iVar0 = 806;
			break;
		
		case 699980662:
			iVar0 = 807;
			break;
		
		case -583230088:
			iVar0 = 808;
			break;
		
		case 1922201848:
			iVar0 = 809;
			break;
		
		case -767702908:
			iVar0 = 810;
			break;
		
		case 1979813112:
			iVar0 = 811;
			break;
		
		case -2056272592:
			iVar0 = 812;
			break;
		
		case 909368414:
			iVar0 = 813;
			break;
		
		case -940321245:
			iVar0 = 814;
			break;
		
		case -2018521849:
			iVar0 = 815;
			break;
		
		case 1113883376:
			iVar0 = 816;
			break;
		
		case 296940654:
			iVar0 = 817;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_119(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xA281
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
		iParam2 = func_40();
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

void func_120(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xA74D
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_96(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_121(int iParam0, int iParam1, int iParam2)//Position - 0xA77D
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_96(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_122(var uParam0)//Position - 0xA7AF
{
	struct<16> Var0;
	int iVar1;
	
	if (Local_159.f_1 != -1)
	{
		if (!unk_0xC80D31E4B587871C(uParam0->f_2, 11))
		{
			Var0 = { func_65(Local_160[Local_159.f_1 /*2*/]) };
			iVar1 = func_124(Local_160[Local_159.f_1 /*2*/]);
			func_123(uParam0, "DCTL_WINNERV2", &Var0, 0, 1, iVar1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 11);
		}
	}
	else if (!unk_0xC80D31E4B587871C(uParam0->f_2, 11))
	{
		func_53(uParam0, "DCTL_DRAW", 0, 1);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 11);
	}
}

void func_123(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xA832
{
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_34, "SET_CENTRAL_MESSAGE");
		func_55(sParam1);
		unk_0xD07D5CD276368D36(iParam3);
		unk_0xD07D5CD276368D36(iParam4);
		func_54(sParam2);
		unk_0xD07D5CD276368D36(iParam5);
		unk_0x271AA5469AF471B3();
	}
}

int func_124(int iParam0)//Position - 0xA873
{
	switch (iParam0)
	{
		case 0:
			return 211;
		
		case 1:
			return 213;
		
		case 2:
			return 210;
		
		case 3:
			return 209;
		
		default:
	}
	return 0;
}

void func_125(var uParam0)//Position - 0xA8AF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_160[iVar0 /*2*/] > -1)
		{
			uParam0->f_35[iVar0 /*79*/].f_8 = uParam0->f_35[iVar0 /*79*/].f_2;
			uParam0->f_35[iVar0 /*79*/].f_9 = uParam0->f_35[iVar0 /*79*/].f_2;
		}
		iVar0++;
	}
	func_156(uParam0);
	func_150(uParam0);
	func_148(uParam0);
	func_144(uParam0);
	func_143(uParam0);
	if (unk_0xC80D31E4B587871C(iLocal_154, 0))
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_160[iVar0 /*2*/] > -1)
			{
				func_128(uParam0, &(uParam0->f_35), iVar0);
				if (unk_0xC80D31E4B587871C(iLocal_154, (11 + iVar0)))
				{
					unk_0x0EE72DB1CD8A3B86(&iLocal_154, (11 + iVar0));
				}
				if (unk_0xC80D31E4B587871C(iLocal_154, (7 + iVar0)))
				{
					unk_0x872F1C1F8587CCC7(&iLocal_154, (11 + iVar0));
					unk_0x0EE72DB1CD8A3B86(&iLocal_154, (7 + iVar0));
				}
			}
			else if (uParam0->f_35[iVar0 /*79*/] == 2)
			{
				func_16(&(uParam0->f_35), 3, iVar0);
				uParam0->f_35[iVar0 /*79*/].f_1 = 0;
			}
			iVar0++;
		}
		if (!func_12(&uLocal_156))
		{
			func_10(&uLocal_156, 0, 0);
		}
		else if (func_8(&uLocal_156, 500, 0))
		{
			iVar1 = unk_0x5C6098C2BAD00378();
			if (iVar1 == 1)
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Music_Game_Over", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				func_183(uParam0, 10);
				return;
			}
			func_126(4, func_127(uParam0->f_35[iLocal_153 /*79*/].f_14, uParam0->f_35[iLocal_153 /*79*/].f_15, 9974), iLocal_153, 99999);
			func_9(&uLocal_156);
		}
		if (!unk_0xC80D31E4B587871C(uParam0->f_2, 4) && uParam0->f_35[iLocal_153 /*79*/] == 2)
		{
			unk_0x39A975B87A12AB75("DCTL_GAMEHELP", 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 5);
		}
		if (Local_159 >= 8)
		{
			unk_0x4AFBCBFDE748D4E0(-1, "Music_Win", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				unk_0x0B9D04994D02CC2F(uParam0->f_35[iVar0 /*79*/].f_5);
				iVar0++;
			}
			if (unk_0x7CCE41E8E97028E7())
			{
				unk_0x8E7C072C41DF97BF();
			}
			unk_0x0EE72DB1CD8A3B86(&iLocal_154, 0);
			func_183(uParam0, 8);
		}
	}
	else if (iLocal_155 != -1 && unk_0xEBD55014C579F626() >= iLocal_155)
	{
		unk_0x872F1C1F8587CCC7(&iLocal_154, 0);
	}
}

void func_126(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xAAE6
{
	struct<6> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1082130432;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0 = -650311207;
	Var0.f_1 = unk_0x9EB17624F44A8DA4();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	iVar1 = func_20(0);
	if (!iVar1 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Var0, 6, iVar1);
	}
}

float func_127(float fParam0, float fParam1, int iParam2)//Position - 0xAB50
{
	float fVar0;
	float fVar1;
	
	fVar0 = system::to_float(system::floor((fParam0 * IntToFloat((iParam2 - 1)))));
	fVar1 = system::to_float(system::floor((fParam1 * IntToFloat((iParam2 - 1)))));
	return ((fVar0 * IntToFloat(iParam2)) + fVar1);
}

void func_128(var uParam0, var uParam1, int iParam2)//Position - 0xAB85
{
	switch ((*uParam1)[iParam2 /*79*/])
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					(uParam1[iParam2 /*79*/])->f_4 = 0;
					(uParam1[iParam2 /*79*/])->f_1 = 255;
					(uParam1[iParam2 /*79*/])->f_3 = 0;
					(uParam1[iParam2 /*79*/])->f_9 = -1;
					func_142(Local_160[iParam2 /*2*/], &((uParam1[iParam2 /*79*/])->f_2), &((uParam1[iParam2 /*79*/])->f_14), &((uParam1[iParam2 /*79*/])->f_15), &((uParam1[iParam2 /*79*/])->f_8));
					break;
				
				case 1:
					(uParam1[iParam2 /*79*/])->f_4 = 0;
					(uParam1[iParam2 /*79*/])->f_1 = 255;
					(uParam1[iParam2 /*79*/])->f_3 = 0;
					(uParam1[iParam2 /*79*/])->f_9 = -1;
					func_142(Local_160[iParam2 /*2*/], &((uParam1[iParam2 /*79*/])->f_2), &((uParam1[iParam2 /*79*/])->f_14), &((uParam1[iParam2 /*79*/])->f_15), &((uParam1[iParam2 /*79*/])->f_8));
					break;
				
				case 2:
					(uParam1[iParam2 /*79*/])->f_4 = 0;
					(uParam1[iParam2 /*79*/])->f_1 = 255;
					(uParam1[iParam2 /*79*/])->f_3 = 0;
					(uParam1[iParam2 /*79*/])->f_9 = -1;
					func_142(Local_160[iParam2 /*2*/], &((uParam1[iParam2 /*79*/])->f_2), &((uParam1[iParam2 /*79*/])->f_14), &((uParam1[iParam2 /*79*/])->f_15), &((uParam1[iParam2 /*79*/])->f_8));
					break;
				
				case 3:
					(uParam1[iParam2 /*79*/])->f_4 = 0;
					(uParam1[iParam2 /*79*/])->f_1 = 255;
					(uParam1[iParam2 /*79*/])->f_3 = 0;
					(uParam1[iParam2 /*79*/])->f_9 = -1;
					func_142(Local_160[iParam2 /*2*/], &((uParam1[iParam2 /*79*/])->f_2), &((uParam1[iParam2 /*79*/])->f_14), &((uParam1[iParam2 /*79*/])->f_15), &((uParam1[iParam2 /*79*/])->f_8));
					break;
			}
			unk_0x0EE72DB1CD8A3B86(&iLocal_154, (15 + iParam2));
			func_141(uParam1, iParam2);
			func_15(&((uParam1[iParam2 /*79*/])->f_18));
			func_16(uParam1, 1, iParam2);
			break;
		
		case 1:
			if (Local_159 == 7)
			{
				func_16(uParam1, 2, iParam2);
			}
			break;
		
		case 2:
			if (iParam2 == iLocal_153)
			{
				if (!unk_0x0F30C1F1717A6437())
				{
					func_140(uParam1);
				}
			}
			if (func_139(uParam0) <= 1)
			{
				(uParam1[iParam2 /*79*/])->f_17 = 0f;
				(uParam1[iParam2 /*79*/])->f_9 = (uParam1[iParam2 /*79*/])->f_2;
			}
			if (!unk_0xC80D31E4B587871C(iLocal_154, (3 + iParam2)))
			{
				func_136(uParam0, uParam1, iParam2);
			}
			unk_0x0EE72DB1CD8A3B86(&iLocal_154, (3 + iParam2));
			if (iParam2 == iLocal_153)
			{
				func_132(uParam0, uParam1, 1);
				if (func_131(uParam0, uParam1, iLocal_153))
				{
					func_130(iLocal_153);
				}
			}
			else if (func_131(uParam0, uParam1, iParam2))
			{
				(uParam1[iParam2 /*79*/])->f_17 = 0f;
			}
			break;
		
		case 3:
			func_129(uParam1, iParam2);
			break;
	}
}

void func_129(var uParam0, int iParam1)//Position - 0xADFD
{
	float fVar0;
	
	fVar0 = system::to_float((uParam0[iParam1 /*79*/])->f_1);
	fVar0 = (fVar0 - (300f * system::timestep()));
	if (fVar0 < 0f)
	{
		fVar0 = 0f;
	}
	(uParam0[iParam1 /*79*/])->f_1 = system::floor(fVar0);
}

void func_130(int iParam0)//Position - 0xAE3A
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 1737286402;
	vVar0.y = unk_0x9EB17624F44A8DA4();
	vVar0.z = iParam0;
	iVar1 = func_20(1);
	if (!iVar1 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &vVar0, 3, iVar1);
	}
}

int func_131(var uParam0, var uParam1, int iParam2)//Position - 0xAE73
{
	float fVar0;
	float fVar1;
	
	fVar0 = (0,5f - ((0,5f - (uParam1[iParam2 /*79*/])->f_14) * uParam0->f_9));
	fVar1 = (0,0068f * uParam0->f_9);
	switch ((uParam1[iParam2 /*79*/])->f_2)
	{
		case 0:
			if (((uParam1[iParam2 /*79*/])->f_15 - (0,012f * 0,42f)) <= 0,229f)
			{
				return 1;
			}
			break;
		
		case 1:
			if (((uParam1[iParam2 /*79*/])->f_15 + (0,012f * 0,42f)) >= 0,851f)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 - (fVar1 * 0,42f)) <= (0,5f - (0,339f * uParam0->f_9))
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 + (fVar1 * 0,42f)) >= (0,5f + (0,343f * uParam0->f_9))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_132(var uParam0, var uParam1, bool bParam2)//Position - 0xAF5C
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
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	bool bVar23;
	float fVar24;
	float fVar25;
	bool bVar26;
	float fVar27;
	
	fVar0 = (0,5f - ((0,5f - (uParam1[iLocal_153 /*79*/])->f_14) * uParam0->f_9));
	fVar1 = (0,0068f * uParam0->f_9);
	iVar20 = ((uParam1[iLocal_153 /*79*/])->f_4 - 1);
	if (iVar20 > -1 && iVar20 < 59)
	{
		func_135((uParam1[iLocal_153 /*79*/])->f_18[iVar20], &fVar12, &fVar13, 9974);
		if ((uParam1[iLocal_153 /*79*/])->f_2 == 2)
		{
			fVar14 = ((uParam1[iLocal_153 /*79*/])->f_14 + (fVar1 * 0,5f));
			fVar15 = (uParam1[iLocal_153 /*79*/])->f_15;
			if (fVar14 > fVar12)
			{
				fVar14 = fVar12;
			}
		}
		else if ((uParam1[iLocal_153 /*79*/])->f_2 == 3)
		{
			fVar14 = ((uParam1[iLocal_153 /*79*/])->f_14 - (fVar1 * 0,5f));
			fVar15 = (uParam1[iLocal_153 /*79*/])->f_15;
			if (fVar14 < fVar12)
			{
				fVar14 = fVar12;
			}
		}
		else if ((uParam1[iLocal_153 /*79*/])->f_2 == 0)
		{
			fVar14 = (uParam1[iLocal_153 /*79*/])->f_14;
			fVar15 = ((uParam1[iLocal_153 /*79*/])->f_15 + (0,012f * 0,5f));
			if (fVar15 > fVar13)
			{
				fVar15 = fVar13;
			}
		}
		else if ((uParam1[iLocal_153 /*79*/])->f_2 == 1)
		{
			fVar14 = (uParam1[iLocal_153 /*79*/])->f_14;
			fVar15 = ((uParam1[iLocal_153 /*79*/])->f_15 - (0,012f * 0,5f));
			if (fVar15 < fVar13)
			{
				fVar15 = fVar13;
			}
		}
	}
	iVar21 = 0;
	while (iVar21 <= 3)
	{
		bVar23 = false;
		if (iVar21 == iLocal_153)
		{
		}
		else if ((*uParam1)[iVar21 /*79*/] == 2 && (*uParam1)[iLocal_153 /*79*/] == 2)
		{
			iVar22 = 0;
			while (iVar22 <= 59)
			{
				func_135((uParam1[iVar21 /*79*/])->f_18[iVar22], &fVar2, &fVar3, 9974);
				if (fVar2 != 0f || fVar3 != 0f)
				{
					if (iVar22 + 1 >= 60)
					{
						fVar4 = (uParam1[iVar21 /*79*/])->f_14;
						fVar5 = (uParam1[iVar21 /*79*/])->f_15;
					}
					else
					{
						func_135((uParam1[iVar21 /*79*/])->f_18[iVar22 + 1], &fVar4, &fVar5, 9974);
						if (fVar4 == 0f && fVar5 == 0f)
						{
							fVar4 = (uParam1[iVar21 /*79*/])->f_14;
							fVar5 = (uParam1[iVar21 /*79*/])->f_15;
						}
					}
					fVar6 = (fVar4 - fVar2);
					fVar7 = (fVar5 - fVar3);
					fVar8 = (fVar2 + (fVar6 * 0,5f));
					fVar9 = (fVar3 + (fVar7 * 0,5f));
					if (unk_0xE97272C977DEADD3(fVar6) > 0,001f)
					{
						fVar10 = (unk_0xE97272C977DEADD3(fVar6) + (0,003f * 0,5f));
						fVar11 = (0,003f * uParam0->f_8);
					}
					else if (unk_0xE97272C977DEADD3(fVar7) > 0,001f)
					{
						fVar10 = 0,003f;
						fVar11 = (unk_0xE97272C977DEADD3(fVar7) + ((0,003f * 0,5f) * uParam0->f_8));
					}
					else
					{
						fVar10 = 0,0001f;
						fVar11 = 0,0001f;
					}
					fVar24 = (0,5f - ((0,5f - fVar8) * uParam0->f_9));
					fVar25 = (fVar10 * uParam0->f_9);
					bVar26 = false;
					if ((uParam1[iLocal_153 /*79*/])->f_2 == 2 || (uParam1[iLocal_153 /*79*/])->f_2 == 3)
					{
						bVar26 = func_134(fVar0, (uParam1[iLocal_153 /*79*/])->f_15, (fVar1 * 0,42f), (0,012f * 0,42f), fVar24, fVar9, (fVar25 * 0,95f), fVar11);
					}
					if ((uParam1[iLocal_153 /*79*/])->f_2 == 0 || (uParam1[iLocal_153 /*79*/])->f_2 == 1)
					{
						bVar26 = func_134(fVar0, (uParam1[iLocal_153 /*79*/])->f_15, (fVar1 * 0,42f), (0,012f * 0,42f), fVar24, fVar9, fVar25, (fVar11 * 0,95f));
					}
					if (bVar26)
					{
						if (bParam2)
						{
							func_130(iLocal_153);
						}
						bVar23 = true;
					}
					else if (!unk_0xC80D31E4B587871C(iLocal_154, (7 + iVar21)) && unk_0xC80D31E4B587871C(iLocal_154, (11 + iVar21)))
					{
						if (iVar22 == ((uParam1[iVar21 /*79*/])->f_4 - 1))
						{
							if (((fVar12 != 0f && fVar13 != 0f) && fVar14 != 0f) && fVar15 != 0f)
							{
								func_133(uParam0, fVar12, fVar13, fVar14, fVar15, &fVar16, &fVar17, &fVar18, &fVar19, 0,0015f);
								if (func_134(fVar24, fVar9, fVar25, fVar11, fVar16, fVar17, fVar18, fVar19))
								{
									if (bParam2)
									{
										func_130(iLocal_153);
									}
									bVar23 = true;
								}
							}
						}
					}
				}
				iVar22++;
			}
			if (!bVar23)
			{
				fVar27 = (0,5f - ((0,5f - (uParam1[iVar21 /*79*/])->f_14) * uParam0->f_9));
				if (func_134(fVar0, (uParam1[iLocal_153 /*79*/])->f_15, (fVar1 * 0,42f), (0,012f * 0,42f), fVar27, (uParam1[iVar21 /*79*/])->f_15, (fVar1 * 0,42f), (0,012f * 0,42f)))
				{
					if (bParam2)
					{
						func_130(iLocal_153);
					}
				}
			}
		}
		iVar21++;
	}
}

void func_133(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9)//Position - 0xB3DA
{
	float fVar0;
	float fVar1;
	
	if (fParam9 == 0f)
	{
		fParam9 = 0,003f;
	}
	fVar0 = (fParam3 - fParam1);
	fVar1 = (fParam4 - fParam2);
	*uParam5 = (fParam1 + (fVar0 * 0,5f));
	*uParam6 = (fParam2 + (fVar1 * 0,5f));
	if (unk_0xE97272C977DEADD3(fVar0) > 0,001f)
	{
		*uParam7 = (unk_0xE97272C977DEADD3(fVar0) + (fParam9 * 0,5f));
		*uParam8 = (fParam9 * uParam0->f_8);
	}
	else
	{
		*uParam7 = fParam9;
		*uParam8 = (unk_0xE97272C977DEADD3(fVar1) + ((fParam9 * 0,5f) * uParam0->f_8));
	}
	*uParam5 = (0,5f - ((0,5f - *uParam5) * uParam0->f_9));
	*uParam7 = (*uParam7 * uParam0->f_9);
}

int func_134(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)//Position - 0xB486
{
	if (fParam0 + (fParam2 * 0,5f)) < (fParam4 - (fParam6 * 0,5f))
	{
		return 0;
	}
	if (fParam4 + (fParam6 * 0,5f)) < (fParam0 - (fParam2 * 0,5f))
	{
		return 0;
	}
	if (fParam1 + (fParam3 * 0,5f)) < (fParam5 - (fParam7 * 0,5f))
	{
		return 0;
	}
	if (fParam5 + (fParam7 * 0,5f)) < (fParam1 - (fParam3 * 0,5f))
	{
		return 0;
	}
	return 1;
}

void func_135(float fParam0, float fParam1, float fParam2, int iParam3)//Position - 0xB507
{
	*fParam1 = system::to_float(system::floor((fParam0 / IntToFloat(iParam3))));
	*fParam2 = (fParam0 % IntToFloat(iParam3));
	*fParam1 = (*fParam1 / IntToFloat((iParam3 - 1)));
	*fParam2 = (*fParam2 / IntToFloat((iParam3 - 1)));
}

void func_136(var uParam0, var uParam1, int iParam2)//Position - 0xB541
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iParam2)) && (*uParam1)[iParam2 /*79*/] == 2)
	{
		if (unk_0xCCCA18C9A006FF83((uParam1[iParam2 /*79*/])->f_5))
		{
			if (Local_160[iParam2 /*2*/] == 0)
			{
				unk_0x4AFBCBFDE748D4E0((uParam1[iParam2 /*79*/])->f_5, "Trail_1", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
			else if (Local_160[iParam2 /*2*/] == 1)
			{
				unk_0x4AFBCBFDE748D4E0((uParam1[iParam2 /*79*/])->f_5, "Trail_2", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
			else if (Local_160[iParam2 /*2*/] == 2)
			{
				unk_0x4AFBCBFDE748D4E0((uParam1[iParam2 /*79*/])->f_5, "Trail_3", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
			else
			{
				unk_0x4AFBCBFDE748D4E0((uParam1[iParam2 /*79*/])->f_5, "Trail_4", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
		}
		if (!unk_0xCCCA18C9A006FF83((uParam1[iParam2 /*79*/])->f_5))
		{
			unk_0x922FC70048B5A79D((uParam1[iParam2 /*79*/])->f_5, "X", (uParam1[iParam2 /*79*/])->f_14);
			unk_0x922FC70048B5A79D((uParam1[iParam2 /*79*/])->f_5, "Y", (uParam1[iParam2 /*79*/])->f_15);
		}
	}
	if ((uParam1[iParam2 /*79*/])->f_9 != (uParam1[iParam2 /*79*/])->f_2 && (uParam1[iParam2 /*79*/])->f_4 > 0)
	{
		func_135((uParam1[iParam2 /*79*/])->f_18[((uParam1[iParam2 /*79*/])->f_4 - 1)], &fVar0, &fVar1, 9974);
		fVar4 = 0,2f;
		if (((((uParam1[iParam2 /*79*/])->f_9 == 0 && (uParam1[iParam2 /*79*/])->f_10[1] == 1) || ((uParam1[iParam2 /*79*/])->f_9 == 1 && (uParam1[iParam2 /*79*/])->f_10[1] == 0)) || ((uParam1[iParam2 /*79*/])->f_9 == 2 && (uParam1[iParam2 /*79*/])->f_10[1] == 3)) || ((uParam1[iParam2 /*79*/])->f_9 == 3 && (uParam1[iParam2 /*79*/])->f_10[1] == 2))
		{
			fVar4 = 0,25f;
		}
		if ((uParam1[iParam2 /*79*/])->f_9 == 0 || (uParam1[iParam2 /*79*/])->f_9 == 1)
		{
			fVar2 = unk_0xE97272C977DEADD3(((uParam1[iParam2 /*79*/])->f_14 - fVar0));
			fVar3 = ((0,0068f * uParam0->f_8) * fVar4);
		}
		else if ((uParam1[iParam2 /*79*/])->f_9 == 2 || (uParam1[iParam2 /*79*/])->f_9 == 3)
		{
			fVar2 = unk_0xE97272C977DEADD3(((uParam1[iParam2 /*79*/])->f_15 - fVar1));
			fVar3 = ((0,0068f * uParam0->f_8) * (fVar4 * uParam0->f_8));
		}
		if (fVar2 >= fVar3 || (iParam2 != iLocal_153 && !unk_0xC80D31E4B587871C(iLocal_154, (15 + iParam2))))
		{
			if (iParam2 == iLocal_153)
			{
				unk_0x4AFBCBFDE748D4E0((uParam1[iParam2 /*79*/])->f_7, "Turn", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				func_126((uParam1[iParam2 /*79*/])->f_9, func_127((uParam1[iParam2 /*79*/])->f_14, (uParam1[iParam2 /*79*/])->f_15, 9974), iLocal_153, uLocal_152[iLocal_153]);
				func_9(&uLocal_156);
				uLocal_152[iLocal_153]++;
			}
			else
			{
				unk_0x4AFBCBFDE748D4E0((uParam1[iParam2 /*79*/])->f_7, "Turn_NPC", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
			unk_0x922FC70048B5A79D((uParam1[iParam2 /*79*/])->f_7, "X", (uParam1[iParam2 /*79*/])->f_14);
			unk_0x922FC70048B5A79D((uParam1[iParam2 /*79*/])->f_7, "Y", (uParam1[iParam2 /*79*/])->f_15);
			if (!unk_0xCCCA18C9A006FF83((uParam1[iParam2 /*79*/])->f_5))
			{
				unk_0x922FC70048B5A79D((uParam1[iParam2 /*79*/])->f_5, "Turning", 1f);
			}
			(uParam1[iParam2 /*79*/])->f_2 = (uParam1[iParam2 /*79*/])->f_9;
			(uParam1[iParam2 /*79*/])->f_10[1] = (uParam1[iParam2 /*79*/])->f_10[0];
			(uParam1[iParam2 /*79*/])->f_10[0] = (uParam1[iParam2 /*79*/])->f_2;
			(uParam1[iParam2 /*79*/])->f_13 = unk_0x53C562FD2B9E3AB0();
		}
	}
	else if (!unk_0xCCCA18C9A006FF83((uParam1[iParam2 /*79*/])->f_5))
	{
		unk_0x922FC70048B5A79D((uParam1[iParam2 /*79*/])->f_5, "Turning", 0f);
	}
	func_138(uParam0, iParam2);
	func_137(uParam0, uParam1, iParam2);
	func_141(uParam1, iParam2);
	unk_0x872F1C1F8587CCC7(&iLocal_154, (3 + iParam2));
}

void func_137(var uParam0, var uParam1, int iParam2)//Position - 0xB8F7
{
	float fVar0;
	float fVar1;
	
	fVar0 = (0,06f * (uParam1[iParam2 /*79*/])->f_17);
	fVar1 = ((0,06f * (uParam1[iParam2 /*79*/])->f_17) * uParam0->f_8);
	switch ((uParam1[iParam2 /*79*/])->f_2)
	{
		case 0:
			(uParam1[iParam2 /*79*/])->f_15 = ((uParam1[iParam2 /*79*/])->f_15 - (fVar1 * system::timestep()));
			break;
		
		case 1:
			(uParam1[iParam2 /*79*/])->f_15 = ((uParam1[iParam2 /*79*/])->f_15 + (fVar1 * system::timestep()));
			break;
		
		case 2:
			(uParam1[iParam2 /*79*/])->f_14 = ((uParam1[iParam2 /*79*/])->f_14 - (fVar0 * system::timestep()));
			break;
		
		case 3:
			(uParam1[iParam2 /*79*/])->f_14 = ((uParam1[iParam2 /*79*/])->f_14 + (fVar0 * system::timestep()));
			break;
	}
	(uParam1[iParam2 /*79*/])->f_17 = 1f;
}

void func_138(var uParam0, int iParam1)//Position - 0xB9BE
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (uParam0->f_35[iParam1 /*79*/].f_4 == 0)
	{
		uParam0->f_35[iParam1 /*79*/].f_18[uParam0->f_35[iParam1 /*79*/].f_4] = func_127(uParam0->f_35[iParam1 /*79*/].f_14, uParam0->f_35[iParam1 /*79*/].f_15, 9974);
		uParam0->f_35[iParam1 /*79*/].f_4++;
	}
	if (uParam0->f_35[iParam1 /*79*/].f_2 != uParam0->f_35[iParam1 /*79*/].f_8)
	{
		if (uParam0->f_35[iParam1 /*79*/].f_4 >= 60)
		{
			iVar0 = 0;
			while (iVar0 <= 59)
			{
				if (iVar0 == 59)
				{
					uParam0->f_35[iParam1 /*79*/].f_18[iVar0] = func_127(uParam0->f_35[iParam1 /*79*/].f_14, uParam0->f_35[iParam1 /*79*/].f_15, 9974);
				}
				else
				{
					fVar1 = 0f;
					fVar2 = 0f;
					func_135(uParam0->f_35[iParam1 /*79*/].f_18[iVar0 + 1], &fVar1, &fVar2, 9974);
					uParam0->f_35[iParam1 /*79*/].f_18[iVar0] = func_127(fVar1, fVar2, 9974);
				}
				iVar0++;
			}
		}
		else
		{
			uParam0->f_35[iParam1 /*79*/].f_18[uParam0->f_35[iParam1 /*79*/].f_4] = func_127(uParam0->f_35[iParam1 /*79*/].f_14, uParam0->f_35[iParam1 /*79*/].f_15, 9974);
			uParam0->f_35[iParam1 /*79*/].f_4++;
		}
		uParam0->f_35[iParam1 /*79*/].f_8 = uParam0->f_35[iParam1 /*79*/].f_2;
	}
}

int func_139(var uParam0)//Position - 0xBB1F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (unk_0xB72D370CB7ABC3EF() - 1))
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)) && Local_160[iVar1 /*2*/] > -1)
		{
			if (uParam0->f_35[iVar1 /*79*/] != 3)
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_140(var uParam0)//Position - 0xBB73
{
	float fVar0;
	float fVar1;
	
	if ((uParam0[iLocal_153 /*79*/])->f_9 < 0)
	{
		(uParam0[iLocal_153 /*79*/])->f_9 = (uParam0[iLocal_153 /*79*/])->f_2;
	}
	if ((unk_0x53C562FD2B9E3AB0() - (uParam0[iLocal_153 /*79*/])->f_13) >= 66)
	{
		fVar0 = unk_0x869308DF4F5FB0C3(2, 218);
		fVar1 = unk_0x869308DF4F5FB0C3(2, 219);
		if (fVar1 < -0,65f || unk_0xF2B58F79D29425B4(2, 188))
		{
			if ((uParam0[iLocal_153 /*79*/])->f_2 != 1)
			{
				(uParam0[iLocal_153 /*79*/])->f_9 = 0;
			}
		}
		if (fVar1 > 0,65f || unk_0xF2B58F79D29425B4(2, 187))
		{
			if ((uParam0[iLocal_153 /*79*/])->f_2 != 0)
			{
				(uParam0[iLocal_153 /*79*/])->f_9 = 1;
			}
		}
		if (fVar0 < -0,65f || unk_0xF2B58F79D29425B4(2, 189))
		{
			if ((uParam0[iLocal_153 /*79*/])->f_2 != 3)
			{
				(uParam0[iLocal_153 /*79*/])->f_9 = 2;
			}
		}
		if (fVar0 > 0,65f || unk_0xF2B58F79D29425B4(2, 190))
		{
			if ((uParam0[iLocal_153 /*79*/])->f_2 != 2)
			{
				(uParam0[iLocal_153 /*79*/])->f_9 = 3;
			}
		}
	}
}

void func_141(var uParam0, int iParam1)//Position - 0xBC6F
{
	switch ((uParam0[iParam1 /*79*/])->f_2)
	{
		case 0:
			(uParam0[iParam1 /*79*/])->f_16 = 0f;
			break;
		
		case 1:
			(uParam0[iParam1 /*79*/])->f_16 = 180f;
			break;
		
		case 2:
			(uParam0[iParam1 /*79*/])->f_16 = 270f;
			break;
		
		case 3:
			(uParam0[iParam1 /*79*/])->f_16 = 90f;
			break;
	}
}

void func_142(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)//Position - 0xBCD8
{
	switch (iParam0)
	{
		case 0:
			*fParam2 = (0,5f + -0,32f);
			*fParam3 = 0,54f;
			*iParam1 = 3;
			*iParam4 = 3;
			break;
		
		case 1:
			*fParam2 = (0,5f + 0,321f);
			*fParam3 = 0,54f;
			*iParam1 = 2;
			*iParam4 = 2;
			break;
		
		case 2:
			*fParam2 = (0,5f + 0f);
			*fParam3 = 0,26f;
			*iParam1 = 1;
			*iParam4 = 1;
			break;
		
		case 3:
			*fParam2 = (0,5f + 0f);
			*fParam3 = 0,822f;
			*iParam1 = 0;
			*iParam4 = 0;
			break;
	}
}

void func_143(var uParam0)//Position - 0xBD7B
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (uParam0->f_35[iVar0 /*79*/] == 2)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (*uParam0 < 7)
	{
		unk_0x8028488F650E6677("Music_Stream", "DLC_EXEC_ARC_MAC_SOUNDS");
	}
	else if (iVar1 > 1)
	{
		if (!unk_0xC80D31E4B587871C(uParam0->f_2, 3))
		{
			unk_0x4929A4FD75F576BD();
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 3);
		}
	}
	else if (unk_0x7CCE41E8E97028E7())
	{
		unk_0x8E7C072C41DF97BF();
	}
}

void func_144(var uParam0)//Position - 0xBDEE
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_2, 15))
	{
		func_145(uParam0);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 15);
	}
	func_77(uParam0);
}

void func_145(var uParam0)//Position - 0xBE1A
{
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_34, "SHOW_HUD");
		func_146(0);
		func_146(1);
		func_146(2);
		func_146(3);
		if (iLocal_153 > -1 && Local_160[iLocal_153 /*2*/] > -1)
		{
			unk_0xD07D5CD276368D36(Local_160[iLocal_153 /*2*/]);
		}
		unk_0x271AA5469AF471B3();
	}
}

void func_146(int iParam0)//Position - 0xBE72
{
	struct<16> Var0;
	struct<16> Var1;
	int iVar2;
	
	Var0 = { func_65(iParam0) };
	Var1 = { func_63(iParam0) };
	iVar2 = func_147(iParam0);
	unk_0xD07D5CD276368D36(iVar2);
	unk_0x81D71E37E95798C1(&Var1);
	func_54(&Var0);
}

int func_147(int iParam0)//Position - 0xBEAA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_160[iVar0 /*2*/] == iParam0)
		{
			return Local_159.f_7[iVar0];
		}
		iVar0++;
	}
	return -1;
}

void func_148(var uParam0)//Position - 0xBEED
{
	if (!func_8(&(uParam0->f_20), 1000, 0))
	{
		if (!unk_0xC80D31E4B587871C(uParam0->f_2, 10))
		{
			func_53(uParam0, "DCTL_COUNTDOWNGO", 0, 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 10);
		}
	}
	else if (unk_0xC80D31E4B587871C(uParam0->f_2, 10))
	{
		func_149(uParam0);
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 10);
	}
}

void func_149(var uParam0)//Position - 0xBF49
{
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_34, "CLEAR_CENTRAL_MESSAGE");
		unk_0x271AA5469AF471B3();
	}
}

void func_150(var uParam0)//Position - 0xBF6D
{
	int iVar0;
	
	func_56(uParam0);
	iVar0 = 0;
	while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_160[iVar0 /*2*/] > -1)
		{
			if (uParam0->f_35[iVar0 /*79*/].f_1 != 0)
			{
				func_151(uParam0, &(uParam0->f_35), iVar0);
			}
		}
		iVar0++;
	}
}

void func_151(var uParam0, var uParam1, int iParam2)//Position - 0xBFC7
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	bool bVar20;
	bool bVar21;
	
	func_152(Local_160[iParam2 /*2*/], &iVar0, &iVar1, &iVar2);
	if ((*uParam1)[iParam2 /*79*/] == 3)
	{
		iVar0 = 255;
		iVar1 = 255;
		iVar2 = 255;
	}
	fVar3 = (0,5f - ((0,5f - (uParam1[iParam2 /*79*/])->f_14) * uParam0->f_9));
	fVar4 = (0,0068f * uParam0->f_9);
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 < 60)
	{
		func_135((uParam1[iParam2 /*79*/])->f_18[iVar5], &fVar7, &fVar8, 9974);
		if (fVar7 != 0f || fVar8 != 0f)
		{
			if (iVar5 + 1 >= 60)
			{
				fVar9 = (uParam1[iParam2 /*79*/])->f_14;
				fVar10 = (uParam1[iParam2 /*79*/])->f_15;
			}
			else
			{
				func_135((uParam1[iParam2 /*79*/])->f_18[iVar5 + 1], &fVar9, &fVar10, 9974);
				if (fVar9 == 0f && fVar10 == 0f)
				{
					fVar9 = (uParam1[iParam2 /*79*/])->f_14;
					fVar10 = (uParam1[iParam2 /*79*/])->f_15;
				}
			}
			fVar11 = (fVar9 - fVar7);
			fVar12 = (fVar10 - fVar8);
			fVar13 = (fVar7 + (fVar11 * 0,5f));
			fVar14 = (fVar8 + (fVar12 * 0,5f));
			if (unk_0xE97272C977DEADD3(fVar11) > 0,001f)
			{
				if (fVar11 > 0f)
				{
					iVar6 = 3;
				}
				else
				{
					iVar6 = 2;
				}
				fVar15 = 90f;
				fVar16 = (unk_0xE97272C977DEADD3(fVar11) + 0,003f);
				fVar17 = (0,003f * uParam0->f_8);
			}
			if (unk_0xE97272C977DEADD3(fVar12) > 0,001f)
			{
				if (fVar12 > 0f)
				{
					iVar6 = 1;
				}
				else
				{
					iVar6 = 0;
				}
				fVar15 = 0f;
				fVar16 = 0,003f;
				fVar17 = (unk_0xE97272C977DEADD3(fVar12) + ((0,003f * 0,5f) * uParam0->f_8));
			}
			fVar18 = (0,5f - ((0,5f - fVar13) * uParam0->f_9));
			fVar19 = (fVar16 * uParam0->f_9);
			unk_0xEFB3EC0CDCC33841("LineArcadeMinigame", "Tail", fVar18, fVar14, fVar19, fVar17, fVar15, iVar0, iVar1, iVar2, (uParam1[iParam2 /*79*/])->f_1, 0);
			if (iParam2 == iLocal_153)
			{
				if ((*uParam1)[iParam2 /*79*/] == 2)
				{
					bVar20 = false;
					if ((uParam1[iParam2 /*79*/])->f_2 == 2 || (uParam1[iParam2 /*79*/])->f_2 == 3)
					{
						bVar20 = func_134(fVar3, (uParam1[iParam2 /*79*/])->f_15, (fVar4 * 0,42f), (0,012f * 0,42f), fVar18, fVar14, (fVar19 * 0,95f), fVar17);
					}
					if ((uParam1[iParam2 /*79*/])->f_2 == 0 || (uParam1[iParam2 /*79*/])->f_2 == 1)
					{
						bVar20 = func_134(fVar3, (uParam1[iParam2 /*79*/])->f_15, (fVar4 * 0,42f), (0,012f * 0,42f), fVar18, fVar14, fVar19, (fVar17 * 0,95f));
					}
					if (bVar20)
					{
						bVar21 = false;
						if (iVar5 == ((uParam1[iParam2 /*79*/])->f_4 - 3))
						{
							if (iVar6 == (uParam1[iParam2 /*79*/])->f_2)
							{
								bVar21 = true;
							}
						}
						if (iVar5 < ((uParam1[iParam2 /*79*/])->f_4 - 2) && !bVar21)
						{
							func_130(iParam2);
						}
					}
				}
			}
			fVar15 = 0f;
			fVar16 = 0f;
			fVar17 = 0f;
		}
		iVar5++;
	}
	unk_0xEFB3EC0CDCC33841("LineArcadeMinigame", "HeadPixel", fVar3, (uParam1[iParam2 /*79*/])->f_15, fVar4, 0,012f, (uParam1[iParam2 /*79*/])->f_16, iVar0, iVar1, iVar2, (uParam1[iParam2 /*79*/])->f_1, 0);
}

void func_152(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xC2D4
{
	var uVar0;
	
	func_153(func_154(func_124(iParam0)), uParam1, uParam2, uParam3, &uVar0);
}

void func_153(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xC2F2
{
	*uParam1 = unk_0x53E140A02F0B3D1A(iParam0, 24, 31);
	*uParam2 = unk_0x53E140A02F0B3D1A(iParam0, 16, 23);
	*uParam3 = unk_0x53E140A02F0B3D1A(iParam0, 8, 15);
	*uParam4 = unk_0x53E140A02F0B3D1A(iParam0, 0, 7);
}

int func_154(int iParam0)//Position - 0xC329
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0x31758B9A51671C43(iParam0, &uVar0, &uVar1, &uVar2, &uVar3);
	return func_155(uVar0, uVar1, uVar2, uVar3);
}

var func_155(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xC34B
{
	var uVar0;
	
	unk_0x5A269A13022C028E(&uVar0, 24, 31, uParam0);
	unk_0x5A269A13022C028E(&uVar0, 16, 23, uParam1);
	unk_0x5A269A13022C028E(&uVar0, 8, 15, uParam2);
	unk_0x5A269A13022C028E(&uVar0, 0, 7, uParam3);
	return uVar0;
}

void func_156(var uParam0)//Position - 0xC380
{
	int iVar0;
	struct<6> Var1;
	vector3 vVar2;
	vector3 vVar3;
	struct<6> Var4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	struct<6> Var11;
	int iVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	Var1.f_2 = -1;
	Var1.f_3 = -1082130432;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var4 = 32;
	Var4.f_1.f_2 = -1;
	Var4.f_1.f_3 = -1082130432;
	Var4.f_1.f_4 = -1;
	Var4.f_1.f_5 = -1;
	Var4.f_1.f_6.f_2 = -1;
	Var4.f_1.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_4 = -1;
	Var4.f_1.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	iVar5 = 0;
	iVar6 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(1))
	{
		if (unk_0xA387B84DA2EB1BEE(1, iVar0) == 171)
		{
			if (unk_0xC80D31E4B587871C(iLocal_154, 0))
			{
				if (unk_0x575EF325DA5E3F04(1, iVar0, &Var1, 6))
				{
					if (Var1 == -650311207)
					{
						if (iVar5 < 16)
						{
							Var4[iVar5 /*6*/] = { Var1 };
							if (!unk_0xC80D31E4B587871C(iLocal_154, (7 + Var1.f_4)))
							{
								unk_0x872F1C1F8587CCC7(&iLocal_154, (7 + Var1.f_4));
							}
							iVar5++;
						}
					}
				}
				if (unk_0x575EF325DA5E3F04(1, iVar0, &vVar2, 3))
				{
					if (vVar2.x == 1737286402)
					{
						func_161(&(uParam0->f_35), vVar2.z);
					}
				}
			}
			else if (unk_0x575EF325DA5E3F04(1, iVar0, &vVar3, 3))
			{
				if (vVar3.x == 2017957426)
				{
					iLocal_155 = vVar3.z;
				}
			}
		}
		iVar0++;
	}
	Var11.f_2 = -1;
	Var11.f_3 = -1082130432;
	Var11.f_4 = -1;
	Var11.f_5 = -1;
	iVar9 = iVar5;
	while (iVar9 <= 15)
	{
		if (Local_151[iVar9 /*6*/].f_5 < 99999 && Local_151[iVar9 /*6*/].f_5 > -1)
		{
			Var4[(iVar5 + iVar9) /*6*/] = { Local_151[iVar9 /*6*/] };
			Local_151[iVar9 /*6*/] = { Var11 };
			iVar10++;
		}
		iVar9++;
	}
	iVar5 = (iVar5 + iVar10);
	if (iVar5 > 1)
	{
		iVar0 = 0;
		while (iVar0 <= (iVar5 - 1))
		{
			iVar0++;
		}
		func_159(&Var4, 0, (iVar5 - 1));
		iVar0 = 0;
		while (iVar0 <= (iVar5 - 1))
		{
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iVar5 - 1))
	{
		func_135(Var4[iVar0 /*6*/].f_3, &fVar7, &fVar8, 9974);
		if (Var4[iVar0 /*6*/].f_5 < 99999)
		{
			if (!uLocal_152[Var4[iVar0 /*6*/].f_4] == Var4[iVar0 /*6*/].f_4 * 10000)
			{
				if (Var4[iVar0 /*6*/].f_5 > uLocal_152[Var4[iVar0 /*6*/].f_4] + 2)
				{
					iVar12 = 0;
					if (func_158(&iVar12))
					{
						Local_151[iVar12 /*6*/] = { Var4[iVar0 /*6*/] };
					}
					if (Var4[iVar0 /*6*/].f_5 > uLocal_152[Var4[iVar0 /*6*/].f_4] + 4)
					{
						uLocal_152[Var4[iVar0 /*6*/].f_4]++;
					}
					Jump @2259; //curOff = 1568
				}
				else if (Var4[iVar0 /*6*/].f_5 < uLocal_152[Var4[iVar0 /*6*/].f_4])
				{
				}
				else
				{
					if (Var4[iVar0 /*6*/].f_5 == uLocal_152[Var4[iVar0 /*6*/].f_4] + 2)
					{
						fVar13 = 0f;
						fVar14 = 0f;
						fVar15 = 0f;
						fVar16 = 0f;
						iVar17 = -1;
						if (uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*79*/].f_4 > 0)
						{
							func_135(uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*79*/].f_18[(uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*79*/].f_4 - 1)], &fVar15, &fVar16, 9974);
						}
						else
						{
							iVar18 = 0;
							iVar19 = 0;
							func_142(Local_160[Var4[iVar0 /*6*/].f_4 /*2*/], &iVar18, &fVar15, &fVar16, &iVar19);
						}
						switch (uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*79*/].f_2)
						{
							case 0:
							case 1:
								if (fVar15 > fVar7)
								{
									iVar17 = 3;
								}
								else
								{
									iVar17 = 2;
								}
								break;
							
							case 3:
							case 2:
								if (fVar16 > fVar8)
								{
									iVar17 = 1;
								}
								else
								{
									iVar17 = 0;
								}
								break;
						}
						switch (iVar17)
						{
							case 0:
								fVar13 = fVar7;
								fVar14 = fVar16;
								break;
							
							case 1:
								fVar13 = fVar7;
								fVar14 = fVar16;
								break;
							
							case 3:
								fVar13 = fVar15;
								fVar14 = fVar8;
								break;
							
							case 2:
								fVar13 = fVar15;
								fVar14 = fVar8;
								break;
						}
						func_157(uParam0, Var4[iVar0 /*6*/].f_4, iVar17, fVar13, fVar14, &iVar6);
						func_136(uParam0, &(uParam0->f_35), Var4[iVar0 /*6*/].f_4);
						func_157(uParam0, Var4[iVar0 /*6*/].f_4, Var4[iVar0 /*6*/].f_2, fVar7, fVar8, &iVar6);
						func_136(uParam0, &(uParam0->f_35), Var4[iVar0 /*6*/].f_4);
					}
					else
					{
						if (!Var4[iVar0 /*6*/].f_5 == uLocal_152[Var4[iVar0 /*6*/].f_4] + 1 && !Var4[iVar0 /*6*/].f_5 == Var4[iVar0 /*6*/].f_4 * 10000)
						{
						}
						func_135(Var4[iVar0 /*6*/].f_3, &fVar7, &fVar8, 9974);
						func_157(uParam0, Var4[iVar0 /*6*/].f_4, Var4[iVar0 /*6*/].f_2, fVar7, fVar8, &iVar6);
						func_136(uParam0, &(uParam0->f_35), Var4[iVar0 /*6*/].f_4);
					}
					uLocal_152[Var4[iVar0 /*6*/].f_4] = Var4[iVar0 /*6*/].f_5;
					Jump @2259; //curOff = 2131
					if (Var4[iVar0 /*6*/].f_2 == 4 && !unk_0xC80D31E4B587871C(iVar6, Var4[iVar0 /*6*/].f_4))
					{
						if (!unk_0xC80D31E4B587871C(iLocal_154, (15 + Var4[iVar0 /*6*/].f_4)))
						{
							unk_0x872F1C1F8587CCC7(&iLocal_154, (15 + Var4[iVar0 /*6*/].f_4));
						}
						uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*79*/].f_14 = fVar7;
						uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*79*/].f_15 = fVar8;
						func_136(uParam0, &(uParam0->f_35), Var4[iVar0 /*6*/].f_4);
					}
				}
				iVar0++;
			}

void func_157(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5)//Position - 0xCC5F
{
	uParam0->f_35[iParam1 /*79*/].f_9 = iParam2;
	uParam0->f_35[iParam1 /*79*/].f_14 = fParam3;
	uParam0->f_35[iParam1 /*79*/].f_15 = fParam4;
	if (unk_0xC80D31E4B587871C(*iParam5, iParam1))
	{
		uParam0->f_35[iParam1 /*79*/].f_8 = uParam0->f_35[iParam1 /*79*/].f_2;
	}
	else
	{
		unk_0x872F1C1F8587CCC7(iParam5, iParam1);
	}
}

int func_158(int iParam0)//Position - 0xCCB6
{
	*iParam0 = 0;
	while (*iParam0 <= 15)
	{
		if (Local_151[*iParam0 /*6*/].f_5 == -1)
		{
			return 1;
		}
		*iParam0++;
	}
	return 0;
}

void func_159(var uParam0, int iParam1, int iParam2)//Position - 0xCCE7
{
	int iVar0;
	
	iVar0 = func_160(uParam0, iParam1, iParam2);
	if (iParam1 < (iVar0 - 1))
	{
		func_159(uParam0, iParam1, (iVar0 - 1));
	}
	if (iVar0 < iParam2)
	{
		func_159(uParam0, iVar0, iParam2);
	}
}

int func_160(var uParam0, int iParam1, int iParam2)//Position - 0xCD21
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	int iVar3;
	
	iVar0 = iParam1;
	iVar1 = iParam2;
	Var2.f_2 = -1;
	Var2.f_3 = -1082130432;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	iVar3 = (uParam0[((iParam1 + iParam2) / 2) /*6*/])->f_5;
	while (iVar0 <= iVar1)
	{
		while ((uParam0[iVar0 /*6*/])->f_5 < iVar3)
		{
			iVar0++;
		}
		while ((uParam0[iVar1 /*6*/])->f_5 > iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		if (iVar0 <= iVar1)
		{
			Var2 = { *(uParam0[iVar0 /*6*/]) };
			*(uParam0[iVar0 /*6*/]) = { *(uParam0[iVar1 /*6*/]) };
			*(uParam0[iVar1 /*6*/]) = { Var2 };
			iVar0++;
			iVar1 = (iVar1 - 1);
		}
	}
	return iVar0;
}

void func_161(var uParam0, int iParam1)//Position - 0xCDD2
{
	if (!unk_0xCCCA18C9A006FF83((uParam0[iParam1 /*79*/])->f_5))
	{
		unk_0x0B9D04994D02CC2F((uParam0[iParam1 /*79*/])->f_5);
	}
	if (iParam1 == iLocal_153)
	{
		unk_0x4AFBCBFDE748D4E0((uParam0[iParam1 /*79*/])->f_6, "Crash", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
	}
	else
	{
		unk_0x4AFBCBFDE748D4E0((uParam0[iParam1 /*79*/])->f_6, "Crash_NPC", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
	}
	unk_0x922FC70048B5A79D((uParam0[iParam1 /*79*/])->f_6, "X", (uParam0[iParam1 /*79*/])->f_14);
	unk_0x922FC70048B5A79D((uParam0[iParam1 /*79*/])->f_6, "Y", (uParam0[iParam1 /*79*/])->f_15);
	func_16(uParam0, 3, iParam1);
}

void func_162(var uParam0)//Position - 0xCE61
{
	int iVar0;
	
	if (!func_12(&(uParam0->f_18)))
	{
		func_10(&(uParam0->f_18), 0, 0);
	}
	iVar0 = 0;
	while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_160[iVar0 /*2*/] > -1)
		{
			func_128(uParam0, &(uParam0->f_35), iVar0);
		}
		iVar0++;
	}
	func_150(uParam0);
	func_165(uParam0);
	func_144(uParam0);
	func_156(uParam0);
	func_164(uParam0);
	func_143(uParam0);
	if (Local_159 >= 7)
	{
		unk_0x0B9D04994D02CC2F(uParam0->f_3);
		unk_0x4AFBCBFDE748D4E0(-1, "Go", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		func_9(&(uParam0->f_18));
		func_163();
		func_183(uParam0, 7);
	}
}

void func_163()//Position - 0xCF10
{
	int iVar0;
	struct<6> Var1;
	
	Var1.f_2 = -1;
	Var1.f_3 = -1082130432;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uLocal_152[iVar0] = iVar0 * 10000;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Local_151[iVar0 /*6*/] = { Var1 };
		iVar0++;
	}
}

void func_164(var uParam0)//Position - 0xCF73
{
	if (!func_8(&(uParam0->f_18), 1000, 0))
	{
		if (!unk_0xC80D31E4B587871C(uParam0->f_2, 2))
		{
			unk_0x4AFBCBFDE748D4E0(-1, "321", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 2);
		}
	}
	else if (!func_8(&(uParam0->f_18), 2000, 0))
	{
		if (!unk_0xC80D31E4B587871C(uParam0->f_2, 1))
		{
			unk_0x4AFBCBFDE748D4E0(-1, "321", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 1);
		}
	}
	else if (!unk_0xC80D31E4B587871C(uParam0->f_2, 0))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "321", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 0);
	}
}

void func_165(var uParam0)//Position - 0xD00A
{
	if (!func_8(&(uParam0->f_18), 1000, 0))
	{
		if (!unk_0xC80D31E4B587871C(uParam0->f_2, 7))
		{
			func_53(uParam0, "DCTL_COUNTDOWN3", 0, 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 7);
		}
	}
	else if (!func_8(&(uParam0->f_18), 2000, 0))
	{
		if (!unk_0xC80D31E4B587871C(uParam0->f_2, 8))
		{
			func_53(uParam0, "DCTL_COUNTDOWN2", 0, 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 8);
		}
	}
	else if (!unk_0xC80D31E4B587871C(uParam0->f_2, 9))
	{
		func_53(uParam0, "DCTL_COUNTDOWN1", 0, 0);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 9);
	}
}

void func_166(var uParam0)//Position - 0xD0A2
{
	int iVar0;
	
	if (!func_12(&(uParam0->f_16)))
	{
		func_10(&(uParam0->f_16), 0, 0);
	}
	iVar0 = 0;
	while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_160[iVar0 /*2*/] > -1)
		{
			func_128(uParam0, &(uParam0->f_35), iVar0);
		}
		iVar0++;
	}
	if (unk_0xC80D31E4B587871C(uParam0->f_2, 16))
	{
		func_51(uParam0);
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 16);
	}
	if (!unk_0xC80D31E4B587871C(uParam0->f_2, 18))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Ready", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 18);
	}
	func_150(uParam0);
	func_167(uParam0);
	func_144(uParam0);
	func_143(uParam0);
	if (Local_159 == 10)
	{
		func_183(uParam0, 10);
		func_50(1);
	}
	else if (Local_159 >= 6)
	{
		func_183(uParam0, 6);
	}
}

void func_167(var uParam0)//Position - 0xD17E
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_2, 6))
	{
		func_53(uParam0, "DCTL_READY", 0, 2);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 6);
	}
}

void func_168(var uParam0)//Position - 0xD1A8
{
	bool bVar0;
	int iVar1;
	
	func_56(uParam0);
	func_169(uParam0);
	if (unk_0xC80D31E4B587871C(uParam0->f_2, 16))
	{
		func_51(uParam0);
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 16);
	}
	if (Local_159.f_77 == 3 && !unk_0xC80D31E4B587871C(Local_160[iLocal_153 /*2*/].f_1, 5))
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
			{
				if (Local_159.f_2[iVar1] == -1)
				{
					bVar0 = false;
				}
				else
				{
					if (iVar1 == iLocal_153)
					{
						Local_160[iLocal_153 /*2*/] = Local_159.f_2[iLocal_153];
						func_142(Local_160[iVar1 /*2*/], &(uParam0->f_35[iVar1 /*79*/].f_2), &(uParam0->f_35[iVar1 /*79*/].f_14), &(uParam0->f_35[iVar1 /*79*/].f_15), &(uParam0->f_35[iVar1 /*79*/].f_8));
					}
					else if (Local_160[iVar1 /*2*/] == Local_159.f_2[iVar1])
					{
						func_142(Local_160[iVar1 /*2*/], &(uParam0->f_35[iVar1 /*79*/].f_2), &(uParam0->f_35[iVar1 /*79*/].f_14), &(uParam0->f_35[iVar1 /*79*/].f_15), &(uParam0->f_35[iVar1 /*79*/].f_8));
					}
					else
					{
						bVar0 = false;
					}
					iVar1++;
				}
				if (bVar0)
				{
					unk_0x872F1C1F8587CCC7(&(Local_160[iLocal_153 /*2*/].f_1), 5);
				}
				if (Local_159 == 10)
				{
					unk_0x0B9D04994D02CC2F(uParam0->f_3);
					unk_0x4AFBCBFDE748D4E0(-1, "Music_Game_Over", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
					func_183(uParam0, 10);
					func_50(0);
				}
				else if (Local_159 >= 5)
				{
					uParam0->f_5 = unk_0x5C6098C2BAD00378();
					unk_0x922FC70048B5A79D(uParam0->f_3, "FadeOut", 7f);
					func_66();
					func_183(uParam0, 5);
					unk_0x0EE72DB1CD8A3B86(&(Local_160[iLocal_153 /*2*/].f_1), 5);
				}
			}

void func_169(var uParam0)//Position - 0xD33E
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_2, 13))
	{
		func_53(uParam0, "DCTL_LOADING", 0, 2);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 13);
	}
}

void func_170(var uParam0)//Position - 0xD36A
{
	if (unk_0xC80D31E4B587871C(uParam0->f_2, 14))
	{
		func_173(uParam0);
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 14);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 17);
	}
	func_56(uParam0);
	func_172(uParam0);
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0x4FB260623DD93924(2, 200, 1);
	}
	if (!unk_0x0F30C1F1717A6437())
	{
		if ((unk_0xE8C126B7ADBB9D63(2, 201) && !unk_0xC80D31E4B587871C(Local_160[iLocal_153 /*2*/].f_1, 3)) && !unk_0xC80D31E4B587871C(Local_160[iLocal_153 /*2*/].f_1, 4))
		{
			func_75(3);
		}
		if ((unk_0xE8C126B7ADBB9D63(2, 202) && !unk_0xC80D31E4B587871C(Local_160[iLocal_153 /*2*/].f_1, 3)) && !unk_0xC80D31E4B587871C(Local_160[iLocal_153 /*2*/].f_1, 4))
		{
			func_75(4);
		}
	}
	if (func_74())
	{
		func_6(1);
	}
	if ((!unk_0xC80D31E4B587871C(uParam0->f_2, 4) && !unk_0xC80D31E4B587871C(Local_160[iLocal_153 /*2*/].f_1, 3)) && !unk_0xC80D31E4B587871C(Local_160[iLocal_153 /*2*/].f_1, 4))
	{
		unk_0x39A975B87A12AB75("DCTL_TITLEHELP", 0);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 5);
	}
	func_171(uParam0);
	func_143(uParam0);
	func_60(uParam0, 0);
	if (Local_159 > 3)
	{
		if (unk_0xC80D31E4B587871C(Local_160[iLocal_153 /*2*/].f_1, 4) || unk_0xC80D31E4B587871C(Local_160[iLocal_153 /*2*/].f_1, 2))
		{
			func_183(uParam0, 11);
		}
		else
		{
			if (Local_159 == 10)
			{
				func_6(0);
				func_5(0, 0);
				func_183(uParam0, 10);
				func_50(1);
				return;
			}
			func_14(uParam0);
			func_6(0);
			func_5(0, 0);
			if (Local_159 == 4)
			{
				func_183(uParam0, 4);
			}
			else
			{
				uParam0->f_5 = unk_0x5C6098C2BAD00378();
				unk_0x922FC70048B5A79D(uParam0->f_3, "FadeOut", 7f);
				func_183(uParam0, 5);
			}
		}
	}
	else if (unk_0xCCCA18C9A006FF83(uParam0->f_3))
	{
		unk_0x4AFBCBFDE748D4E0(uParam0->f_3, "Background", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
	}
}

void func_171(var uParam0)//Position - 0xD546
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_160[iVar0 /*2*/] > -1)
		{
			if (unk_0xC80D31E4B587871C(Local_160[iVar0 /*2*/].f_1, 3) && !unk_0xC80D31E4B587871C(uParam0->f_35[iVar0 /*79*/].f_3, 0))
			{
				unk_0x4AFBCBFDE748D4E0(uParam0->f_6, "Insert_Coin", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				unk_0x872F1C1F8587CCC7(&(uParam0->f_35[iVar0 /*79*/].f_3), 0);
				if (unk_0xC80D31E4B587871C(uParam0->f_35[iVar0 /*79*/].f_3, 1))
				{
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_35[iVar0 /*79*/].f_3), 1);
				}
			}
			else if (unk_0xC80D31E4B587871C(Local_160[iVar0 /*2*/].f_1, 4) && !unk_0xC80D31E4B587871C(uParam0->f_35[iVar0 /*79*/].f_3, 1))
			{
				unk_0x4AFBCBFDE748D4E0(uParam0->f_6, "Cancel", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				unk_0x872F1C1F8587CCC7(&(uParam0->f_35[iVar0 /*79*/].f_3), 1);
				if (unk_0xC80D31E4B587871C(uParam0->f_35[iVar0 /*79*/].f_3, 0))
				{
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_35[iVar0 /*79*/].f_3), 0);
				}
			}
		}
		iVar0++;
	}
}

void func_172(var uParam0)//Position - 0xD64D
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_2, 16))
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 16);
	}
	func_61(uParam0, "DCTL_INSERT", 0);
	func_79(uParam0);
	func_77(uParam0);
}

void func_173(var uParam0)//Position - 0xD684
{
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_34, "HIDE_LOADING_SCREEN");
		unk_0x271AA5469AF471B3();
	}
}

void func_174(var uParam0)//Position - 0xD6A8
{
	if (!unk_0xC80D31E4B587871C(Local_160[iLocal_153 /*2*/].f_1, 1))
	{
		if (unk_0x3A711520F83BAE98())
		{
			func_32(unk_0x9EB17624F44A8DA4(), 0, 0);
			func_177();
		}
		else
		{
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
		}
		func_45(1, 0, 1, 0);
		unk_0xE859EF37EA7362D3("DLC_Exec_Arc_Mac_Playing_Game_Scene");
		func_176(uParam0);
		func_10(&(uParam0->f_10), 0, 0);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 14);
		unk_0x872F1C1F8587CCC7(&(Local_160[iLocal_153 /*2*/].f_1), 1);
	}
	else
	{
		switch (uParam0->f_1)
		{
			case 0:
				unk_0x4AFBCBFDE748D4E0(-1, "Degenatron_Logo", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				func_175(uParam0, 1);
				break;
			
			case 1:
				if (func_8(&(uParam0->f_10), 1800, 0))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "Degenatron_Star", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
					func_175(uParam0, 2);
				}
				break;
			
			case 2:
				if (func_8(&(uParam0->f_10), 2250, 0))
				{
					if (unk_0xCCCA18C9A006FF83(uParam0->f_3))
					{
						unk_0x4AFBCBFDE748D4E0(uParam0->f_3, "Background", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
					}
					func_175(uParam0, 3);
				}
				break;
		}
		if (func_8(&(uParam0->f_10), 2200, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 17);
		}
		if (func_8(&(uParam0->f_10), 6000, 0) || ((uParam0->f_1 == 3 && func_8(&(uParam0->f_10), 3000, 0)) && unk_0xE8C126B7ADBB9D63(2, 201)))
		{
			unk_0x872F1C1F8587CCC7(&(Local_160[iLocal_153 /*2*/].f_1), 6);
			func_66();
			if (Local_159 == 9)
			{
				func_183(uParam0, 9);
			}
			else if (Local_159 >= 3)
			{
				func_183(uParam0, 3);
			}
		}
	}
}

void func_175(var uParam0, int iParam1)//Position - 0xD830
{
	uParam0->f_1 = iParam1;
}

void func_176(var uParam0)//Position - 0xD83E
{
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_34, "SHOW_LOADING_SCREEN");
		unk_0x271AA5469AF471B3();
	}
}

void func_177()//Position - 0xD862
{
	Global_2436181.f_1040.f_10 = 1;
}

void func_178(var uParam0)//Position - 0xD874
{
	if (!unk_0xC80D31E4B587871C(Local_160[iLocal_153 /*2*/].f_1, 0))
	{
		func_180();
		uParam0->f_34 = unk_0xD704C81492296A37("dont_cross_the_line");
		if (func_179() && unk_0x34D11AB5BA7922C2(uParam0->f_34))
		{
			unk_0x872F1C1F8587CCC7(&(Local_160[iLocal_153 /*2*/].f_1), 0);
			func_183(uParam0, 2);
		}
	}
}

int func_179()//Position - 0xD8C8
{
	if ((unk_0x1CF95440F1970B4F("DLC_EXEC1/OFFICE_BOARDROOM", false, -1) && unk_0xA51ADD51711B4A15("LineArcadeMinigame")) && unk_0x9F0887BCBFCF3C2F(3))
	{
		return 1;
	}
	return 0;
}

int func_180()//Position - 0xD8F6
{
	if (unk_0x1CF95440F1970B4F("DLC_EXEC1/OFFICE_BOARDROOM", false, -1))
	{
		unk_0x128A5DCCD09CCA17("LineArcadeMinigame", false);
		unk_0xBCBC53983EC3B1BA("DCTL", 3);
		unk_0x872F1C1F8587CCC7(&Global_1655667, 6);
		return 1;
	}
	return 0;
}

void func_181(var uParam0)//Position - 0xD928
{
	int iVar0;
	
	if (iLocal_153 == -1)
	{
		Global_4456448.f_138520 = 1;
		uParam0->f_8 = func_182();
		uParam0->f_3 = unk_0xD0CA83418A236CB4();
		uParam0->f_6 = unk_0xD0CA83418A236CB4();
		uParam0->f_7 = unk_0xD0CA83418A236CB4();
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_35[iVar0 /*79*/].f_5 = unk_0xD0CA83418A236CB4();
			uParam0->f_35[iVar0 /*79*/].f_6 = unk_0xD0CA83418A236CB4();
			uParam0->f_35[iVar0 /*79*/].f_7 = unk_0xD0CA83418A236CB4();
			iVar0++;
		}
		Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_577 = 1;
		iLocal_153 = unk_0x622FF3AE4B1D07C3();
		Local_160[iLocal_153 /*2*/] = -1;
		uParam0->f_34 = 0;
		func_75(2);
		func_175(uParam0, 0);
	}
	if (Local_160[iLocal_153 /*2*/] == -1)
	{
		if (Local_159.f_2[iLocal_153] > -1)
		{
			Local_160[iLocal_153 /*2*/] = Local_159.f_2[iLocal_153];
		}
	}
	else
	{
		func_183(uParam0, 1);
	}
	func_6(0);
}

float func_182()//Position - 0xDA02
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	unk_0x5113D2C928A121B2(&iVar0, &iVar1);
	fVar2 = (system::to_float(iVar0) / system::to_float(iVar1));
	if (unk_0xB9D80B12FE4456A5())
	{
		if (fVar2 >= 4f)
		{
			fVar2 = (fVar2 / 3f);
		}
	}
	return fVar2;
}

void func_183(var uParam0, int iParam1)//Position - 0xDA3D
{
	uParam0->f_4 = 0;
	*uParam0 = iParam1;
}

void func_184(var uParam0)//Position - 0xDA4F
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	unk_0xD67F08F0EFD84A54(0);
	unk_0xD67F08F0EFD84A54(2);
	unk_0xAE8C92295C8F2D18(0);
	func_199(1);
	func_198(4, -1);
	unk_0xFF00C7D00D8D8AAE(19);
	func_197();
	func_196();
	func_195();
	unk_0x0467A3C1EFB3B8F0();
	if (!func_193(unk_0x9EB17624F44A8DA4()))
	{
		func_183(uParam0, 11);
	}
	if (!func_41())
	{
		func_183(uParam0, 11);
	}
	func_192();
	unk_0x9B16F08390FCC31C();
	if (Local_159 > 2)
	{
		func_187(0);
	}
	func_185(uParam0);
	if (!unk_0x0F30C1F1717A6437() && Local_159 > 2)
	{
		unk_0x36853D5037847BF3();
		unk_0x5A66A86A47AC3B57(1);
	}
	if (unk_0x8E1421E2A2A2FBD4() && !Local_159 == 4)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
			{
				if (Local_159.f_2[iVar1] == -1)
				{
					Local_159.f_2[iVar1] = func_24();
					bVar0 = true;
				}
			}
			else if (Local_159.f_2[iVar1] != -1)
			{
				Local_159.f_2[iVar1] = -1;
				bVar0 = true;
			}
			iVar1++;
		}
		if (bVar0)
		{
			iVar1 = 0;
			while (iVar1 <= (unk_0xB72D370CB7ABC3EF() - 1))
			{
				if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
				{
					iVar2 = 0;
					while (iVar2 <= (unk_0xB72D370CB7ABC3EF() - 1))
					{
						if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar2)))
						{
							if (iVar2 != iVar1 && (Local_159.f_2[iVar1] == Local_159.f_2[iVar2] || Local_159.f_2[iVar1] == -1))
							{
								Local_159.f_2[iVar1] = -1;
								return;
							}
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
}

void func_185(var uParam0)//Position - 0xDBD6
{
	uParam0->f_8 = func_182();
	uParam0->f_9 = func_186(uParam0->f_8);
}

float func_186(float fParam0)//Position - 0xDBF2
{
	return (1,778f / fParam0);
}

void func_187(int iParam0)//Position - 0xDC02
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_191(0))
		{
			func_188(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

void func_188(int iParam0)//Position - 0xDC2B
{
	if (Global_14615)
	{
		func_190(0, 0);
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
	if (!func_189())
	{
		Global_14453.f_1 = 3;
	}
}

int func_189()//Position - 0xDC9B
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_190(bool bParam0, bool bParam1)//Position - 0xDCC2
{
	if (bParam0)
	{
		if (func_191(0))
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

int func_191(int iParam0)//Position - 0xDD36
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

void func_192()//Position - 0xDD90
{
	Global_17162.f_134 = 1;
}

int func_193(int iParam0)//Position - 0xDD9E
{
	if (func_194(Global_1595693[iParam0 /*680*/].f_266.f_17))
	{
		return 1;
	}
	return 0;
}

int func_194(int iParam0)//Position - 0xDDC0
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

void func_195()//Position - 0xDDEF
{
	Global_2512808.f_4500 = 0;
}

void func_196()//Position - 0xDDFF
{
	Global_17162.f_6 = 1;
}

void func_197()//Position - 0xDE0D
{
	Global_1312568 = 1;
	StringCopy(&(Global_1312568.f_1), unk_0x436287B7DB306165(), 24);
	Global_1312568.f_7 = unk_0x8B948C59217A295D(&(Global_1312568.f_1));
}

void func_198(int iParam0, int iParam1)//Position - 0xDE36
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

void func_199(int iParam0)//Position - 0xDE6C
{
	Global_1359035.f_1079 = iParam0;
}

void func_200()//Position - 0xDE7D
{
	func_29(&uLocal_161);
	func_30();
}

int func_201()//Position - 0xDE90
{
	var uVar0;
	
	func_207(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_206())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_205())
	{
		return 1;
	}
	if (func_204(157))
	{
		if (!func_203())
		{
			return 1;
		}
	}
	if (func_204(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_202() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_202()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_202()//Position - 0xDF1A
{
	switch (func_88())
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

bool func_203()//Position - 0xDF4E
{
	return Global_2447174.f_586;
}

int func_204(int iParam0)//Position - 0xDF5D
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_205()//Position - 0xDF74
{
	return Global_2456830;
}

bool func_206()//Position - 0xDF80
{
	return Global_2447174.f_581;
}

void func_207(var uParam0)//Position - 0xDF8F
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
					func_208(iVar0);
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

void func_208(int iParam0)//Position - 0xE002
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_21(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_209(iVar2, &bVar3))
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

int func_209(int iParam0, var uParam1)//Position - 0xE083
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

void func_210()//Position - 0xE0E2
{
	system::wait(0);
}

void func_211(bool bParam0)//Position - 0xE0EF
{
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_3, 3))
		{
			func_180();
		}
		unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_3), 3);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_3), 3);
	}
}

void func_212(struct<21> Param0)//Position - 0xE13E
{
	func_216(4, Param0);
	if (!func_214(0, -1, 1))
	{
		func_200();
	}
	unk_0x6E3ED3AE1C20445F(&Local_159, 78);
	unk_0xE7BC983D1386C9EE(&Local_160, 9);
	if (!func_213())
	{
		func_200();
	}
}

int func_213()//Position - 0xE17D
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
		if (func_206())
		{
			return 0;
		}
		if (func_204(155))
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

int func_214(int iParam0, int iParam1, bool bParam2)//Position - 0xE1D6
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_30();
			}
			else
			{
				return 0;
			}
		}
		if (!func_215())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_30();
					}
					else
					{
						return 0;
					}
				}
				if (func_206())
				{
					if (!bParam2)
					{
						func_30();
					}
					else
					{
						return 0;
					}
				}
				if (func_204(155))
				{
					if (!bParam2)
					{
						func_30();
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
					func_30();
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
				func_30();
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
			func_30();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_215()//Position - 0xE2EB
{
	return Global_1312831;
}

void func_216(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0xE2F7
{
	if (!unk_0x3A711520F83BAE98())
	{
		func_30();
	}
	unk_0xAEA89A7E72415961(iParam0, 0, Param1.f_16);
}

