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
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	vector3 vLocal_51[16] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_52[16] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	vector3 vLocal_54 = { 0f, 0f, 0f };
	vector3 vLocal_55 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	float fLocal_57 = 0f;
	vector3 vLocal_58 = { 0f, 0f, 0f };
	vector3 vLocal_59 = { 0f, 0f, 0f };
	float fLocal_60 = 0f;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	float fLocal_63 = 0f;
	vector3 vLocal_64 = { 0f, 0f, 0f };
	vector3 vLocal_65 = { 0f, 0f, 0f };
	float fLocal_66 = 0f;
	vector3 vLocal_67 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	float fLocal_69 = 0f;
	vector3 vLocal_70 = { 0f, 0f, 0f };
	vector3 vLocal_71 = { 0f, 0f, 0f };
	float fLocal_72 = 0f;
	vector3 vLocal_73 = { 0f, 0f, 0f };
	vector3 vLocal_74 = { 0f, 0f, 0f };
	float fLocal_75 = 0f;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	bool bLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97[2] = { 0, 0 };
	int iLocal_98[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102[4] = { 0, 0, 0, 0 };
	int iLocal_103[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_104 = 0;
	var uLocal_105[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
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
	var uLocal_132 = 8;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 4;
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
	var uLocal_151 = 4;
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
	var uLocal_166 = 4;
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
	var uLocal_181 = 4;
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
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 4;
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
	var uLocal_226 = 4;
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
	var uLocal_241 = 4;
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
	int iLocal_260 = 0;
	char[] cLocal_261[8] = 0;
	char* sLocal_262 = NULL;
	char* sLocal_263 = NULL;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	char* sLocal_269 = NULL;
	int iLocal_270 = 0;
	var uLocal_271 = 16;
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
	int iLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 5;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 5;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	
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
	fLocal_46 = -1f;
	vLocal_53 = { -1109,213f, 4914,744f, 216,101f };
	vLocal_54 = { -1034,6f, 4918,6f, 205,9f };
	vLocal_55 = { -1066,963f, 4873,13f, 207,3281f };
	vLocal_56 = { -1112,946f, 4986,957f, 241,133f };
	fLocal_57 = 72,3125f;
	vLocal_58 = { -1138,386f, 4872,04f, 207,5488f };
	vLocal_59 = { -1091,959f, 4983,27f, 241,1698f };
	fLocal_60 = 57,8125f;
	vLocal_61 = { -1171,648f, 4888,658f, 211,0756f };
	vLocal_62 = { -1137,907f, 4926,572f, 240,999f };
	fLocal_63 = 17,9375f;
	vLocal_64 = { -1177,981f, 4903,231f, 212,477f };
	vLocal_65 = { -1153,398f, 4902,631f, 241,155f };
	fLocal_66 = 17,9375f;
	vLocal_67 = { -1175,693f, 4904,839f, 207,5207f };
	vLocal_68 = { -1142,08f, 4985,32f, 241,2887f };
	fLocal_69 = 36,375f;
	vLocal_70 = { -1106,212f, 4860,086f, 206,1207f };
	vLocal_71 = { -1105,016f, 4873,854f, 241,1453f };
	fLocal_72 = 11,5625f;
	vLocal_73 = { -1044,268f, 4916,587f, 209,8365f };
	vLocal_74 = { -1063,605f, 4972,88f, 241,1299f };
	fLocal_75 = 12,875f;
	iLocal_96 = 4;
	cLocal_261 = "REPLAY_TMG";
	sLocal_262 = "CMN_TDIED";
	if (unk_0x7D9C4B359376D38A(26))
	{
		func_184();
	}
	if (unk_0x9E0D1EED4A8BA9B1())
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	while (true)
	{
		system::wait(0);
		if (unk_0x42F1FE4C7EC5F51E() || iLocal_77)
		{
			unk_0x94BD6F0436473406(0f);
			switch (iLocal_50)
			{
				case 0:
					if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
					{
						if (Global_104555.f_24965.f_5 >= iLocal_96 && !func_183())
						{
							iLocal_50 = 2;
						}
						func_180();
						func_177();
					}
					break;
				
				case 1:
					unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
					if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
					{
						if (system::timera() > 2000)
						{
							if (iLocal_91 == 1)
							{
								func_176();
							}
							else if (iLocal_91 == 2)
							{
								func_151();
							}
						}
						if (system::timera() > 1300)
						{
							if (iLocal_93 < 3)
							{
								func_150();
							}
							else
							{
								func_149();
							}
						}
						if (iLocal_78)
						{
							func_136(26, 1);
							iLocal_78 = 0;
							iLocal_50 = 0;
						}
					}
					break;
				
				case 2:
					unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
					if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
					{
						func_108();
					}
					unk_0xB94AAB49E0BB01DB(Global_34984[9 /*31*/], 0, 0, 1);
					unk_0xB94AAB49E0BB01DB(Global_34984[10 /*31*/], 0, 0, 1);
					break;
				
				case 4:
					if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
					{
						iLocal_50 = 3;
						break;
					}
					bLocal_79 = false;
					unk_0x94BD6F0436473406(0f);
					iVar0 = 0;
					while (iVar0 < iLocal_98)
					{
						if (unk_0x3AB6A1A9084FB0A4(iLocal_98[iVar0]))
						{
							if (unk_0xA6DECE14FC9A8C51(uLocal_105[iVar0]))
							{
								unk_0xE30CF11C0EE14316(&(uLocal_105[iVar0]));
							}
						}
						else
						{
							if (unk_0x03785A9CECFE1861(iLocal_98[iVar0]))
							{
								if (unk_0xA6DECE14FC9A8C51(uLocal_105[iVar0]))
								{
									unk_0xE30CF11C0EE14316(&(uLocal_105[iVar0]));
								}
							}
							else if (unk_0x21B6FFFD04C9FF3A(iLocal_98[iVar0], unk_0xFC1458A37D98B502(), 30f, 30f, 30f, 0, 1, 0))
							{
								if (!func_107())
								{
									if (iLocal_95 < unk_0x53C562FD2B9E3AB0())
									{
										iVar1 = unk_0x63A6486593EC7EC3(0, 3);
										if (iVar1 == 0)
										{
											func_97(&uLocal_271, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
										}
										else if (iVar1 == 1)
										{
											func_96(&uLocal_271, 1, iLocal_98[iVar0], "ACULTMember1", 0, 1);
											func_97(&uLocal_271, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
										}
										else if (iVar1 == 2)
										{
											func_96(&uLocal_271, 2, iLocal_98[iVar0], "ACULTMember2", 0, 1);
											func_97(&uLocal_271, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
										}
										iLocal_95 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(4500, 6000));
									}
								}
							}
							bLocal_79 = true;
						}
						iVar0++;
					}
					if (!bLocal_79)
					{
						func_60();
					}
					break;
				
				case 3:
					if (!iLocal_77)
					{
						uLocal_109 = func_59();
						if (!unk_0x34D11AB5BA7922C2(uLocal_109))
						{
							break;
						}
						func_58(&uLocal_114, 0);
						iLocal_77 = 1;
					}
					if (func_29(&uLocal_114, &uLocal_120, &uLocal_109, cLocal_261, sLocal_262, &bLocal_76, 78))
					{
						iLocal_94 = 0;
						unk_0x9EA1BA1DD45771B3(iLocal_270);
						unk_0x3B4E7F52D5CB92BA(iLocal_108);
						iVar0 = 0;
						while (iVar0 < iLocal_98)
						{
							if (unk_0x6ADD12BF4D6D2587(iLocal_98[iVar0]))
							{
								unk_0x68433819717660CF(&(iLocal_98[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < iLocal_103)
						{
							if (unk_0x6ADD12BF4D6D2587(iLocal_103[iVar0]))
							{
								unk_0x452336926718D62A(&(iLocal_103[iVar0]));
							}
							iVar0++;
						}
						if (unk_0x8EA3C8E091EA5BA4(uLocal_106))
						{
							unk_0x7849794435F39D49(uLocal_106, false);
						}
						if (unk_0x6ADD12BF4D6D2587(iLocal_101))
						{
							unk_0x452336926718D62A(&iLocal_101);
						}
						if (unk_0x6ADD12BF4D6D2587(iLocal_101))
						{
							unk_0x452336926718D62A(&iLocal_101);
						}
						if (bLocal_76)
						{
							func_9();
							func_3(0);
							func_1(1);
							iLocal_77 = 0;
							iLocal_50 = 2;
						}
						else
						{
							iLocal_77 = 0;
							func_184();
						}
					}
					break;
			}
		}
		else if (bLocal_81)
		{
		}
		else
		{
			func_184();
		}
	}
}

void func_1(bool bParam0)//Position - 0x55E
{
	if (bParam0)
	{
		unk_0xC623E2691C004001(0);
		unk_0x781BE21C7452AB1B(1);
		unk_0x7FCF3574F3FBD460(0);
		func_2(1);
		Global_88236 = 1;
	}
	else
	{
		unk_0xC623E2691C004001(1);
		unk_0x781BE21C7452AB1B(0);
		unk_0x7FCF3574F3FBD460(1);
		func_2(0);
		Global_88236 = 0;
	}
}

void func_2(bool bParam0)//Position - 0x5A0
{
	if ((Global_35861 == 9 || Global_35861 == 10) || Global_35861 == 5)
	{
		Global_103204 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_103204 = 0;
	}
}

void func_3(bool bParam0)//Position - 0x5E6
{
	if (bParam0)
	{
		func_8();
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			unk_0x872F1C1F8587CCC7(&Global_2324, 16);
		}
		Global_14453.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
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

void func_4(int iParam0)//Position - 0x649
{
	if (Global_14615)
	{
		func_6(0, 0);
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
	if (!func_5())
	{
		Global_14453.f_1 = 3;
	}
}

int func_5()//Position - 0x6B9
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)//Position - 0x6E0
{
	if (bParam0)
	{
		if (func_7(0))
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

int func_7(int iParam0)//Position - 0x754
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

void func_8()//Position - 0x7AE
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
	}
}

void func_9()//Position - 0x7D7
{
	func_19();
	func_12(0, 1);
	func_10(0, 1);
}

void func_10(int iParam0, int iParam1)//Position - 0x7EF
{
	if (iParam0 == 1)
	{
		func_12(0, 0);
		unk_0xA91E83FF512776B6("DeathFailOut", 0, 0);
		unk_0x872F1C1F8587CCC7(&iLocal_48, 1);
		func_11(1, 2, 0);
		unk_0x2F22BABDCF836C82(2);
	}
	else
	{
		if (unk_0xC80D31E4B587871C(iLocal_48, 1) || iParam1)
		{
			unk_0x704F5ADD5B29DB63("DeathFailOut");
			func_11(0, 2, 1);
			unk_0x2F22BABDCF836C82(0);
		}
		unk_0x0EE72DB1CD8A3B86(&iLocal_48, 1);
	}
}

void func_11(int iParam0, int iParam1, int iParam2)//Position - 0x84E
{
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&iLocal_48, 2);
		if (!unk_0x3A711520F83BAE98())
		{
			if (iParam1 == 1)
			{
				unk_0x41390D2B41D5502D(0,2f);
			}
			else
			{
				unk_0x41390D2B41D5502D(0,075f);
			}
		}
	}
	else
	{
		if (unk_0xC80D31E4B587871C(iLocal_48, 2) || iParam2)
		{
			if (!unk_0x3A711520F83BAE98())
			{
				unk_0x41390D2B41D5502D(1f);
			}
		}
		unk_0x0EE72DB1CD8A3B86(&iLocal_48, 2);
	}
}

void func_12(int iParam0, int iParam1)//Position - 0x8AF
{
	char* sVar0;
	
	switch (func_13())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xC80D31E4B587871C(iLocal_48, 0) || iParam1)
		{
			unk_0xA91E83FF512776B6(sVar0, 0, 0);
			unk_0x872F1C1F8587CCC7(&iLocal_48, 0);
			func_11(1, 1, 0);
			unk_0x2F22BABDCF836C82(1);
		}
	}
	else
	{
		if (unk_0xC80D31E4B587871C(iLocal_48, 0) || iParam1)
		{
			unk_0x704F5ADD5B29DB63(sVar0);
			func_11(0, 1, 1);
			unk_0x2F22BABDCF836C82(0);
		}
		unk_0x0EE72DB1CD8A3B86(&iLocal_48, 0);
	}
}

int func_13()//Position - 0x94C
{
	func_14();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_14()//Position - 0x965
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_18(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_17(unk_0xFC1458A37D98B502());
			if (func_16(iVar0) && (!func_15(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_16(Global_104555.f_2353.f_539.f_4301))
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

bool func_15(int iParam0)//Position - 0xA62
{
	return Global_35861 == iParam0;
}

bool func_16(int iParam0)//Position - 0xA70
{
	return iParam0 < 3;
}

int func_17(int iParam0)//Position - 0xA7C
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_18(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_18(int iParam0)//Position - 0xAB9
{
	if (func_16(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_19()//Position - 0xAE3
{
	iLocal_48 = 0;
	iLocal_49 = 0;
	func_20(0, 1, 1, 0);
	func_3(1);
}

void func_20(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xAFE
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_28(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_5())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_27(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_28(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_27(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_25(unk_0x9EB17624F44A8DA4())) && !func_22(unk_0x9EB17624F44A8DA4(), 0)) && !func_21())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), 0);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_25(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), 0);
		}
		Global_70854 = 0;
	}
}

bool func_21()//Position - 0xC17
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_22(int iParam0, int iParam1)//Position - 0xC34
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_23(-1, 0) == 8;
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

int func_23(int iParam0, bool bParam1)//Position - 0xC7F
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_24();
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

int func_24()//Position - 0xCC0
{
	return Global_1312736;
}

int func_25(int iParam0)//Position - 0xCCC
{
	if (func_22(iParam0, 0))
	{
		return 1;
	}
	if (func_26())
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

bool func_26()//Position - 0xD0E
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_27(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0xD1F
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0x1746AAD73B7DFC1B() != iParam0 && uParam2)
		{
			unk_0x035AB8AAB511237A(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_28(int iParam0)//Position - 0xD52
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

int func_29(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6)//Position - 0xD75
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0xE859EF37EA7362D3("DEATH_SCENE");
			unk_0x4AFBCBFDE748D4E0(-1, "ScreenFlash", "WastedSounds", 1);
			func_57(&(uParam0->f_1));
			func_19();
			func_56(uParam1, (0,15f * 0,075f), 0,5f);
			unk_0x7635EA803CE40962(1);
			break;
		
		case 1:
			if (func_54() || unk_0x3E9CABD07B829173())
			{
				*uParam0 = 2;
			}
			if (!func_53(uParam0->f_4, 4))
			{
				if (unk_0x1CF95440F1970B4F("OFFMISSION_WASTED", 0, -1))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "Bed", "WastedSounds", 1);
					func_51(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(system::timera()) > (1500f * 0,2f))
			{
				if (!func_53(uParam0->f_4, 2))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "TextHit", "WastedSounds", 1);
					func_51(&(uParam0->f_4), 2);
				}
				func_30(uParam2, uParam1, sParam3, sParam4, iParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_30(uParam2, uParam1, sParam3, sParam4, iParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_12(0, 1);
				func_10(0, 1);
				func_19();
				if (*iParam5)
				{
					unk_0x6FC90B7B2FA9328D(1);
				}
				else if (!uParam0->f_5)
				{
					func_2(0);
				}
				unk_0x7635EA803CE40962(0);
				unk_0x781BE21C7452AB1B(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				unk_0xC623E2691C004001(1);
				func_12(0, 1);
				func_10(0, 1);
				unk_0xE02E32C69260FBB7("DEATH_SCENE");
				unk_0x7635EA803CE40962(0);
				return 1;
			}
			break;
		
		case 4:
			unk_0x7635EA803CE40962(0);
			return 1;
			break;
	}
	return 0;
}

int func_30(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)//Position - 0xF2D
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x3E9CABD07B829173() || unk_0x2D0EF1D268F33F25())
			{
				unk_0xAE83ED4C9081AE6F(2500);
				unk_0x9B16F08390FCC31C();
			}
			if (bParam9)
			{
				unk_0x7635EA803CE40962(1);
			}
			unk_0x41390D2B41D5502D(0,2f);
			if (func_50(iParam5, 4))
			{
				if (unk_0x1CF95440F1970B4F("generic_failed", 0, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			unk_0x008F3E3CC076EA0E(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x7E099EB35339C80D("STRING");
			unk_0xF92B835A141C6BDD(6);
			unk_0xA6D2B267C377D7B2(sParam2);
			unk_0x9748595E4799A2CF();
			func_49(sParam3);
			unk_0xD07D5CD276368D36(100);
			unk_0x1869584A8A72FEDD(true);
			unk_0x8E8D3D52EE7CEFD3();
			if (func_50(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x008F3E3CC076EA0E(*uParam0, "TRANSITION_UP");
					unk_0x9499D7329FB840A2(uParam1->f_134);
					unk_0x271AA5469AF471B3();
					uParam1->f_136 = 1;
				}
			}
			if (!func_50(iParam5, 1))
			{
				unk_0x0DD783ABAB85FEE2(0);
			}
			func_48(&(uParam1->f_10), 0, 1, 1, 1);
			func_47(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_47(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_50(iParam5, 4))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_50(iParam5, 8))
			{
				switch (func_13())
				{
					case 0:
						unk_0xA91E83FF512776B6("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0xA91E83FF512776B6("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0xA91E83FF512776B6("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_46(&(uParam1->f_1)))
			{
				func_45(&(uParam1->f_1));
			}
			if (func_50(iParam5, 2))
			{
				if (!func_46(&(uParam1->f_4)))
				{
					func_45(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0x2F18DFDBFA4AA0E4();
			if (func_50(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x008F3E3CC076EA0E(*uParam0, "TRANSITION_UP");
					unk_0x9499D7329FB840A2(uParam1->f_134);
					unk_0x271AA5469AF471B3();
					uParam1->f_136 = 1;
				}
			}
			unk_0x5A66A86A47AC3B57(iParam6);
			func_43(uParam0, 0, 0);
			if (!func_50(iParam5, 16) && (func_41(&(uParam1->f_1)) >= uParam1->f_135 || unk_0x3E9CABD07B829173()))
			{
				func_35(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0x15F5D3F996CB934F();
				if (unk_0x58F436C557A0FD7A(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0x4AFBCBFDE748D4E0(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_50(iParam5, 1))
					{
						unk_0x46164D0CA90153BF(0);
					}
					func_34(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0x58F436C557A0FD7A(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0x4AFBCBFDE748D4E0(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_50(iParam5, 1))
					{
						unk_0x46164D0CA90153BF(0);
					}
					func_34(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_50(iParam5, 2))
			{
				if (func_41(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					unk_0x4AFBCBFDE748D4E0(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_50(iParam5, 1))
					{
						unk_0x46164D0CA90153BF(0);
					}
					func_34(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_43(uParam0, 0, 0);
			unk_0x41390D2B41D5502D(1f);
			if (uParam1->f_138 || !((unk_0x74C475EB8E73D398("stunt_plane_races", unk_0x436287B7DB306165()) || unk_0x74C475EB8E73D398("pilot_school", unk_0x436287B7DB306165())) || (unk_0x74C475EB8E73D398("bj", unk_0x436287B7DB306165()) && unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))))
			{
				unk_0x59C3AC31C7544A28(2500);
			}
			if (func_50(iParam5, 64) && uParam1->f_138)
			{
				unk_0xAE83ED4C9081AE6F(500);
			}
			func_31(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0x7635EA803CE40962(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_41(&(uParam1->f_4)) <= 0,1f)
			{
				func_43(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_31(var uParam0)//Position - 0x130D
{
	func_32(uParam0, 0f);
}

void func_32(var uParam0, float fParam1)//Position - 0x131C
{
	uParam0->f_1 = (func_33(unk_0xC80D31E4B587871C(*uParam0, 4)) - fParam1);
	unk_0x872F1C1F8587CCC7(uParam0, 1);
	unk_0x0EE72DB1CD8A3B86(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_33(bool bParam0)//Position - 0x134A
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

void func_34(var uParam0)//Position - 0x13A2
{
	if (*uParam0 != 0)
	{
		unk_0xA68F7B004463AB6F(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
}

void func_35(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x13C5
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((unk_0x2D0EF1D268F33F25() || unk_0x9BB64DDCD9C7B076()) || unk_0x3E9CABD07B829173()) || unk_0x0C200A19C058463C())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_40(uParam0))
	{
		return;
	}
	unk_0x2F18DFDBFA4AA0E4();
	unk_0x5A66A86A47AC3B57(iParam2);
	if (!func_50(uParam0->f_1, 256) || (func_50(uParam0->f_1, 8192) && unk_0x8CFF76532FEF34D4(2)))
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_CLEAR_SPACE");
		unk_0x9499D7329FB840A2(fParam1);
		unk_0x271AA5469AF471B3();
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_MAX_WIDTH");
		unk_0x9499D7329FB840A2(fParam5);
		unk_0x271AA5469AF471B3();
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x271AA5469AF471B3();
		if (unk_0xB9D80B12FE4456A5())
		{
			unk_0x008F3E3CC076EA0E(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1869584A8A72FEDD(func_50(uParam0->f_1, 4096));
			unk_0x271AA5469AF471B3();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0x4C4813CAAD70E814(2);
					break;
				
				case 2:
					bVar4 = !unk_0x4C4813CAAD70E814(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x008F3E3CC076EA0E(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0xD07D5CD276368D36(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0xC80D31E4B587871C(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0xC80D31E4B587871C(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							sVar3 = unk_0xC9C4B2A22DE54C69(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0x715308393E136EA8(iVar0, iVar1, bVar2);
						}
						if (!unk_0xAB019B170BF1309C(sVar3))
						{
							func_39(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xAB019B170BF1309C(uParam0->f_2[iVar6 /*15*/]))
					{
						func_49(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0xB9D80B12FE4456A5())
					{
						if (func_50(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x1869584A8A72FEDD(true);
								unk_0xD07D5CD276368D36(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x1869584A8A72FEDD(false);
								unk_0xD07D5CD276368D36(-1);
							}
						}
					}
					unk_0x271AA5469AF471B3();
				}
			}
			iVar6++;
		}
		fVar8 = func_38(bParam4, func_38(func_50(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x008F3E3CC076EA0E(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x9499D7329FB840A2(fVar8);
		unk_0x271AA5469AF471B3();
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x9499D7329FB840A2(0f);
		unk_0x9499D7329FB840A2(0f);
		unk_0x9499D7329FB840A2(0f);
		unk_0x9499D7329FB840A2(80f);
		unk_0x271AA5469AF471B3();
		func_37(&(uParam0->f_1), 256);
		func_36(&(uParam0->f_1), 128);
	}
	unk_0x28E092B1E386EB67(*uParam0, 255, 255, 255, 0, 0);
}

void func_36(var uParam0, int iParam1)//Position - 0x1685
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_37(var uParam0, int iParam1)//Position - 0x169A
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_38(bool bParam0, float fParam1, float fParam2)//Position - 0x16AB
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_39(char* sParam0)//Position - 0x16C2
{
	unk_0x8686005F83E832AE(sParam0);
}

int func_40(var uParam0)//Position - 0x16D0
{
	if (*uParam0 != 0)
	{
		if (unk_0x34D11AB5BA7922C2(*uParam0))
		{
			func_37(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

float func_41(var uParam0)//Position - 0x16F7
{
	if (func_46(uParam0))
	{
		if (func_42(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_33(unk_0xC80D31E4B587871C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_42(var uParam0)//Position - 0x1736
{
	return unk_0xC80D31E4B587871C(*uParam0, 2);
}

int func_43(var uParam0, bool bParam1, bool bParam2)//Position - 0x1746
{
	if (!func_46(&(uParam0->f_2)))
	{
		func_31(&(uParam0->f_2));
	}
	unk_0x553231E7FC3C570D(14);
	if (!bParam2)
	{
		unk_0x28E092B1E386EB67(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x28E092B1E386EB67(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0xF2B58F79D29425B4(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_41(&(uParam0->f_2)) * 1000f) > system::to_float(uParam0->f_1)
	{
		func_44(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_44(var uParam0)//Position - 0x17D8
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_45(var uParam0)//Position - 0x17EE
{
	if (!func_46(uParam0))
	{
		func_31(uParam0);
	}
}

bool func_46(var uParam0)//Position - 0x1806
{
	return unk_0xC80D31E4B587871C(*uParam0, 1);
}

int func_47(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1816
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_48(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x18DF
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x4A8BF4917A66587B("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_37(&(uParam0->f_1), 32);
	}
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		func_37(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x6A0C4AD62ABCE665(*uParam0, 1);
		}
	}
	if (unk_0xB9D80B12FE4456A5())
	{
		if (bParam3)
		{
			func_37(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_37(&(uParam0->f_1), 8192);
	}
}

void func_49(char* sParam0)//Position - 0x1959
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

bool func_50(var uParam0, int iParam1)//Position - 0x196B
{
	return (uParam0 && iParam1) != 0;
}

void func_51(var uParam0, int iParam1)//Position - 0x197A
{
	func_52(uParam0, iParam1);
}

void func_52(var uParam0, var uParam1)//Position - 0x198A
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_53(var uParam0, int iParam1)//Position - 0x199B
{
	return (uParam0 && iParam1) != 0;
}

int func_54()//Position - 0x19AA
{
	if (!unk_0xC80D31E4B587871C(iLocal_48, 0) && !unk_0xC80D31E4B587871C(iLocal_48, 1))
	{
		system::settimera(0);
		func_12(1, 0);
	}
	if (!unk_0xA8113D347D14630F())
	{
		unk_0x84CDD933AFA470D2();
	}
	unk_0x4FB260623DD93924(2, 199, 1);
	unk_0x4FB260623DD93924(0, 59, 1);
	unk_0x4FB260623DD93924(0, 60, 1);
	unk_0x4FB260623DD93924(0, 37, 1);
	unk_0x4FB260623DD93924(0, 25, 1);
	unk_0xECE0FD66573B8616();
	if (IntToFloat(system::timera()) > (1500f * 0,2f))
	{
		if (!unk_0xC80D31E4B587871C(iLocal_48, 1))
		{
			func_10(1, 0);
			system::settimerb(0);
		}
		else if (IntToFloat(system::timerb()) > (1500f * 0,075f) || unk_0x3E9CABD07B829173())
		{
			if (!unk_0x3E9CABD07B829173())
			{
				if (!unk_0x2D0EF1D268F33F25())
				{
					unk_0xAE83ED4C9081AE6F(1500);
				}
			}
			else if (iLocal_49 == 0)
			{
				iLocal_49 = unk_0x53C562FD2B9E3AB0() + 1000;
				if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
				{
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
				}
				func_11(0, 2, 1);
				func_20(1, 1, 1, 0);
				func_3(1);
				unk_0x6CE951479F1EADC6(0);
				unk_0x37A5AD3D447F2796(0);
				unk_0x3E80C2F7BC665259(1);
				unk_0x84CDD933AFA470D2();
				if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
				{
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
				}
				func_12(0, 0);
				func_55(0);
			}
			else if (unk_0x53C562FD2B9E3AB0() < iLocal_49)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_55(int iParam0)//Position - 0x1AEE
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0xC80D31E4B587871C(iLocal_48, 3))
			{
				unk_0x6ACDC20166AA3FAC(1);
				unk_0x872F1C1F8587CCC7(&iLocal_48, 3);
			}
		}
		else if (unk_0xC80D31E4B587871C(iLocal_48, 3))
		{
			unk_0x6ACDC20166AA3FAC(0);
			unk_0x0EE72DB1CD8A3B86(&iLocal_48, 3);
		}
	}
}

void func_56(var uParam0, float fParam1, float fParam2)//Position - 0x1B35
{
	if (func_46(&(uParam0->f_1)))
	{
		func_44(&(uParam0->f_1));
	}
	if (func_46(&(uParam0->f_4)))
	{
		func_44(&(uParam0->f_4));
	}
	func_34(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_57(var uParam0)//Position - 0x1B85
{
	if (!func_46(uParam0))
	{
		func_45(uParam0);
	}
	else
	{
		func_31(uParam0);
	}
}

void func_58(var uParam0, int iParam1)//Position - 0x1BA6
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	unk_0x1CF95440F1970B4F("OFFMISSION_WASTED", 0, -1);
}

var func_59()//Position - 0x1BC7
{
	return unk_0xD704C81492296A37("MP_BIG_MESSAGE_FREEMODE");
}

void func_60()//Position - 0x1BD7
{
	if (!iLocal_80)
	{
		unk_0xD4BB744A696E8ABF("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		Global_104555.f_24965.f_5 = 1000;
		unk_0x2E1F5E4C486A0481(64);
		Global_104555.f_20534.f_472 = 54;
		uLocal_259 = unk_0xD704C81492296A37("MIDSIZED_MESSAGE");
		func_95(1);
		while (!unk_0x34D11AB5BA7922C2(uLocal_259))
		{
			system::wait(0);
		}
		unk_0x008F3E3CC076EA0E(uLocal_259, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_49("CULT_PASS");
		unk_0x8E8D3D52EE7CEFD3();
		while (!func_94())
		{
			system::wait(0);
		}
		func_93();
		system::settimera(0);
		unk_0x4AFBCBFDE748D4E0(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", 1);
		iLocal_80 = 1;
	}
	unk_0x28E092B1E386EB67(uLocal_259, 255, 255, 255, 255, 0);
	if (!iLocal_82)
	{
		if (system::timera() > 9500)
		{
			unk_0x008F3E3CC076EA0E(uLocal_259, "SHARD_ANIM_OUT");
			unk_0xD07D5CD276368D36(1);
			unk_0x9499D7329FB840A2(0,33f);
			unk_0x271AA5469AF471B3();
			iLocal_82 = 1;
		}
	}
	if (system::timera() > 10000)
	{
		if (unk_0x34D11AB5BA7922C2(uLocal_259))
		{
			unk_0xA68F7B004463AB6F(&uLocal_259);
			func_95(0);
		}
		while (unk_0xBE3C4023003180FC(func_92(unk_0x9EB17624F44A8DA4()), vLocal_53, 1) < 209f && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			system::wait(0);
		}
		func_61(18);
		func_184();
	}
}

void func_61(int iParam0)//Position - 0x1D0B
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_90();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_89())
	{
		func_67(iParam0);
		unk_0x218409883979C46E(0, 0);
		Global_104546 = unk_0x53C562FD2B9E3AB0();
		func_66(30000);
		StringCopy(&cVar0, func_65(Global_104544, 1), 64);
		if (func_64(Global_104544) > 0)
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
	func_63(&Global_25292);
	Global_104545 = 0;
	func_62(-1);
}

void func_62(int iParam0)//Position - 0x1DC0
{
	Global_104544 = iParam0;
}

void func_63(var uParam0)//Position - 0x1DCE
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

int func_64(int iParam0)//Position - 0x1E0B
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

char* func_65(int iParam0, bool bParam1)//Position - 0x1EBC
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

void func_66(int iParam0)//Position - 0x2105
{
	Global_36412 = (unk_0x53C562FD2B9E3AB0() + iParam0);
}

void func_67(int iParam0)//Position - 0x2117
{
	func_68(iParam0, 0, func_88(iParam0));
}

void func_68(int iParam0, int iParam1, int iParam2)//Position - 0x212C
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_87();
	func_78(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_77(iParam0, &uVar0);
	Var1 = { func_69(&uVar0) };
}

struct<16> func_69(var uParam0)//Position - 0x215B
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_76(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_75(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_74(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_73(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_72(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_70(*uParam0), 64);
	return Var0;
}

int func_70(int iParam0)//Position - 0x222C
{
	return (system::shift_right(iParam0, 26) & 31 * func_71(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_71(bool bParam0, int iParam1, int iParam2)//Position - 0x2251
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_72(var uParam0)//Position - 0x2268
{
	return uParam0 & 15;
}

int func_73(int iParam0)//Position - 0x2275
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_74(int iParam0)//Position - 0x2287
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_75(int iParam0)//Position - 0x229A
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_76(int iParam0)//Position - 0x22AD
{
	return system::shift_right(iParam0, 9) & 31;
}

void func_77(int iParam0, var uParam1)//Position - 0x22C0
{
	Global_104555.f_24965.f_43[iParam0] = *uParam1;
}

void func_78(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x22D8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_70(*uParam0);
	iVar1 = func_72(*uParam0);
	iVar2 = func_73(*uParam0);
	iVar3 = func_76(*uParam0);
	iVar4 = func_75(*uParam0);
	iVar5 = func_74(*uParam0);
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
	iVar6 = func_86(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_86(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_79(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_79(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x245A
{
	func_85(uParam0, iParam1);
	func_84(uParam0, iParam2);
	func_83(uParam0, iParam3);
	func_82(uParam0, iParam5);
	func_81(uParam0, iParam4);
	func_80(uParam0, iParam6);
}

void func_80(var uParam0, int iParam1)//Position - 0x2492
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

void func_81(var uParam0, int iParam1)//Position - 0x2518
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_72(*uParam0);
	iVar1 = func_70(*uParam0);
	if (iParam1 < 1 || iParam1 > func_86(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_82(var uParam0, int iParam1)//Position - 0x2569
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_83(var uParam0, int iParam1)//Position - 0x259C
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_84(var uParam0, int iParam1)//Position - 0x25D6
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_85(var uParam0, int iParam1)//Position - 0x2611
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_86(int iParam0, int iParam1)//Position - 0x264D
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

var func_87()//Position - 0x26EF
{
	var uVar0;
	
	func_85(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_84(&uVar0, unk_0x95327550F0F2BE7C());
	func_83(&uVar0, unk_0x674C9438180770FE());
	func_81(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_82(&uVar0, unk_0xEAF455949B108589());
	func_80(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

int func_88(int iParam0)//Position - 0x2735
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

int func_89()//Position - 0x28D8
{
	if ((Global_104544 == func_90() && unk_0x17E356AF4F930A2C()) && Global_104545)
	{
		return 1;
	}
	return 0;
}

int func_90()//Position - 0x2903
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x436287B7DB306165(), 64);
	uVar1 = func_91(Var0);
	return uVar1;
}

int func_91(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x2920
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

Vector3 func_92(int iParam0)//Position - 0x2AFA
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

void func_93()//Position - 0x2B0D
{
	Global_25468 = 0;
	Global_25469 = 0;
	Global_25471 = 0;
	Global_25472 = 0;
	Global_25473 = 0;
}

int func_94()//Position - 0x2B29
{
	return 1;
}

void func_95(int iParam0)//Position - 0x2B32
{
	Global_71116 = iParam0;
	Global_71117 = iParam0;
}

void func_96(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2B46
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

int func_97(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2BE1
{
	func_106(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_98(sParam2, iParam3, 0);
}

int func_98(char* sParam0, int iParam1, bool bParam2)//Position - 0x2C2F
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
					func_105();
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
		if (func_104(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_103();
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
				func_102();
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
				if (func_101())
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
			if (func_5())
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
			func_100();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_99();
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
		func_105();
	}
	return 0;
}

void func_99()//Position - 0x2EFB
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

void func_100()//Position - 0x2F2D
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

int func_101()//Position - 0x2FC2
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

void func_102()//Position - 0x305B
{
	if (func_15(14))
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
		Global_14453 = func_13();
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

void func_103()//Position - 0x30FD
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

bool func_104(int iParam0, int iParam1)//Position - 0x3155
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

void func_105()//Position - 0x3190
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

void func_106(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x31E7
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

int func_107()//Position - 0x323D
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_108()//Position - 0x325F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iLocal_94)
	{
		case 0:
			unk_0xD941F8E30D7231AD("THUNDER", 20f);
			if (!unk_0x6C97EEC6339FB45C())
			{
				unk_0x393584863A2F304E("ac_ig_3_p3_b", 8);
			}
			unk_0x6FF834D85E2DD4C6(joaat("a_m_o_acult_02"));
			unk_0x6FF834D85E2DD4C6(joaat("a_m_y_acult_02"));
			unk_0x6FF834D85E2DD4C6(-2022916910);
			unk_0x6FF834D85E2DD4C6(-1322183878);
			unk_0x6FF834D85E2DD4C6(joaat("prop_box_wood05a"));
			unk_0x6FF834D85E2DD4C6(joaat("prop_security_case_01"));
			while ((((((!func_135() || !unk_0x9A0B2ED5055D3F0B(joaat("a_m_o_acult_02"))) || !unk_0x9A0B2ED5055D3F0B(joaat("a_m_y_acult_02"))) || !unk_0x9A0B2ED5055D3F0B(-2022916910)) || !unk_0x9A0B2ED5055D3F0B(-1322183878)) || !unk_0x9A0B2ED5055D3F0B(joaat("prop_box_wood05a"))) || !unk_0x9A0B2ED5055D3F0B(joaat("prop_security_case_01")))
			{
				system::wait(0);
			}
			iLocal_436 = func_128(unk_0xFC1458A37D98B502(), joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0, 0, 0);
			if (unk_0x6ADD12BF4D6D2587(iLocal_436))
			{
				unk_0x4982ECE0928DA13D(iLocal_436, "Trevors_weapon", 0, 0, 0);
			}
			unk_0x4982ECE0928DA13D(0, "Rifle_Mag1^1", 3, unk_0x7FAE56FC172FD992(joaat("component_assaultrifle_clip_01")), 0);
			if (func_135() && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0x4982ECE0928DA13D(unk_0xFC1458A37D98B502(), "TREVOR", 0, 0, 0);
				unk_0x4982ECE0928DA13D(iLocal_98[11], "Cult_Master", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x4982ECE0928DA13D(iLocal_98[12], "Rear_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x4982ECE0928DA13D(iLocal_98[13], "Left_Old_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x4982ECE0928DA13D(iLocal_98[14], "Carbine_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0x4982ECE0928DA13D(iLocal_98[15], "Shotgun_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0xD0BFA95B279C174F(0);
			}
			system::wait(0);
			if (!bLocal_76 && Global_104555.f_24965.f_5 != 1000)
			{
				func_127();
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_98[0]))
			{
				unk_0x68433819717660CF(&(iLocal_98[0]));
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_98[1]))
			{
				unk_0x68433819717660CF(&(iLocal_98[1]));
			}
			if (unk_0x8EA3C8E091EA5BA4(uLocal_106))
			{
				unk_0x7849794435F39D49(uLocal_106, false);
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_101))
			{
				unk_0x452336926718D62A(&iLocal_101);
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_101))
			{
				unk_0x452336926718D62A(&iLocal_101);
			}
			unk_0x3458550DF8E9B453(0, 0, 3000, 1, 0, 0);
			if (unk_0xA6DECE14FC9A8C51(iLocal_104))
			{
				unk_0xE30CF11C0EE14316(&iLocal_104);
			}
			func_20(1, 1, 1, 0);
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
			unk_0x3E80C2F7BC665259(1);
			unk_0x4255E93FCCDE108E(0);
			unk_0x9B47B379EE749C38(0);
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0x28B42081D6BEFFF2(unk_0xFC1458A37D98B502(), 1);
			}
			unk_0x247EAA2E93D4A021(vLocal_53, 100f, 1, 0, 0, false);
			unk_0xCB389937EDB1519A(vLocal_53 - Vector(100f, 60f, 80f), vLocal_53 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
			unk_0x94BD6F0436473406(0f);
			unk_0x1D29C781A978C4FB(3, 0);
			unk_0x1D29C781A978C4FB(5, 0);
			iLocal_108 = unk_0xF2FAD350A3F91B3B(-1173,509f, 4924,365f, 222,21f, 277,2293f, 2, 0, 2, 1);
			unk_0x6FF834D85E2DD4C6(joaat("a_m_o_acult_01"));
			while (!unk_0x9A0B2ED5055D3F0B(joaat("a_m_o_acult_01")))
			{
				system::wait(0);
			}
			iLocal_94 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 6:
			if (unk_0x65E1868AA01313FF(0))
			{
				if (unk_0xBBC745B9F75E27D0("CULT_MASTER", 0))
				{
					if (!unk_0x6ADD12BF4D6D2587(iLocal_98[11]))
					{
						iLocal_98[11] = unk_0x07F64790D10D1DB5(unk_0xA78D8DA2425CB3DB("CULT_MASTER", 0));
					}
				}
				if (unk_0xBBC745B9F75E27D0("REAR_CULT", 0))
				{
					if (!unk_0x6ADD12BF4D6D2587(iLocal_98[12]))
					{
						iLocal_98[12] = unk_0x07F64790D10D1DB5(unk_0xA78D8DA2425CB3DB("REAR_CULT", 0));
					}
				}
				if (unk_0xBBC745B9F75E27D0("LEFT_OLD_CULT", 0))
				{
					if (!unk_0x6ADD12BF4D6D2587(iLocal_98[13]))
					{
						iLocal_98[13] = unk_0x07F64790D10D1DB5(unk_0xA78D8DA2425CB3DB("LEFT_OLD_CULT", 0));
					}
				}
				if (unk_0xBBC745B9F75E27D0("CARBINE_CULT", 0))
				{
					if (!unk_0x6ADD12BF4D6D2587(iLocal_98[14]))
					{
						iLocal_98[14] = unk_0x07F64790D10D1DB5(unk_0xA78D8DA2425CB3DB("CARBINE_CULT", 0));
					}
				}
				if (unk_0xBBC745B9F75E27D0("SHOTGUN_CULT", 0))
				{
					if (!unk_0x6ADD12BF4D6D2587(iLocal_98[15]))
					{
						iLocal_98[15] = unk_0x07F64790D10D1DB5(unk_0xA78D8DA2425CB3DB("SHOTGUN_CULT", 0));
					}
				}
				if (unk_0xBBC745B9F75E27D0("TREVOR", 0))
				{
					unk_0x28B42081D6BEFFF2(unk_0xFC1458A37D98B502(), 0);
					unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), -1173,531f, 4924,357f, 222,2101f, 1, 0, 0, 1);
					unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 188,9369f);
					unk_0x7C7B3B9FE1579DA8(unk_0xFC1458A37D98B502(), -1173,509f, 4924,365f, 222,21f, -1, 0, 0f, 1, 0, iLocal_108, 0);
					unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 1, 0);
				}
				if (unk_0xBBC745B9F75E27D0("Trevors_weapon", 0))
				{
					unk_0x21E9EF6609513ECD(iLocal_436, unk_0xFC1458A37D98B502());
				}
				unk_0xBB9A3C553EECB180(91,3878f);
				unk_0x7C9705890EF6612E(4,4337f, 1065353216);
				func_20(0, 1, 1, 0);
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
				unk_0x4255E93FCCDE108E(1);
				unk_0x9B47B379EE749C38(1);
				vLocal_51[0 /*3*/] = { -1044,632f, 4918,149f, 211,3315f };
				fLocal_52[0] = 254,8275f;
				vLocal_51[1 /*3*/] = { -1054,92f, 4915,155f, 210,8241f };
				fLocal_52[1] = 270,2025f;
				vLocal_51[2 /*3*/] = { -1051,859f, 4903,902f, 209,6199f };
				fLocal_52[2] = 299,8404f;
				vLocal_51[3 /*3*/] = { -1068,246f, 4899,532f, 213,2755f };
				fLocal_52[3] = 298,4257f;
				vLocal_51[4 /*3*/] = { -1083,322f, 4899,532f, 213,2755f };
				fLocal_52[4] = 283,5311f;
				vLocal_51[5 /*3*/] = { -1084,058f, 4933,805f, 228,2246f };
				fLocal_52[5] = 87,5233f;
				vLocal_51[6 /*3*/] = { -1081,976f, 4937,339f, 232,3275f };
				fLocal_52[6] = 109,6546f;
				vLocal_51[7 /*3*/] = { -1092,075f, 4939,958f, 217,3385f };
				fLocal_52[7] = 210,2433f;
				vLocal_51[8 /*3*/] = { -1101,798f, 4930,33f, 217,3544f };
				fLocal_52[8] = 203,732f;
				vLocal_51[9 /*3*/] = { -1070,675f, 4869,301f, 220,2917f };
				fLocal_52[9] = 39,1109f;
				vLocal_51[10 /*3*/] = { -1115,703f, 4878,439f, 225,8085f };
				fLocal_52[10] = 25,8472f;
				unk_0x4DE114E3C7F8B7C2("rghCult", &iLocal_270);
				iVar1 = 0;
				while (iVar1 < iLocal_98)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_98[iVar1] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_o_acult_01"), vLocal_51[iVar1 /*3*/], fLocal_52[iVar1], 1, 1);
						unk_0x230697B667C63948(iLocal_98[iVar1], 0);
						unk_0x9E058151726E58DE(iLocal_98[iVar1], joaat("weapon_assaultrifle"), -1, 1, 1);
						unk_0x4F9A62E773100FDC(iLocal_98[iVar1], 0);
						unk_0x2C8C730E9565B998(iLocal_98[iVar1], 2);
						unk_0xC87DF3B5D32E898C(iLocal_98[iVar1], 50f, 20);
						unk_0xBB3CC641B6AED5E5(iLocal_98[iVar1], 5);
						unk_0x41613433DA018B46(iLocal_98[iVar1], 100f);
						unk_0x253DB96AF5D6551B(iLocal_98[iVar1], 100f);
						unk_0xE01CE1EBCD7EE551(iLocal_98[iVar1], 150, 0);
						unk_0xEA4C3AEAE49593B4(iLocal_98[iVar1], unk_0x63A6486593EC7EC3(40, 60));
						unk_0xD7F5B2902EBBD04E(iLocal_98[iVar1], unk_0xFC1458A37D98B502(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_98[iVar1] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_o_acult_02"), vLocal_51[iVar1 /*3*/], fLocal_52[iVar1], 1, 1);
						unk_0x230697B667C63948(iLocal_98[iVar1], 0);
						unk_0x9E058151726E58DE(iLocal_98[iVar1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
						unk_0xAE6EBBBBD8B9FB30(iLocal_98[iVar1], 50, 1);
						unk_0x4F9A62E773100FDC(iLocal_98[iVar1], 2);
						unk_0x2C8C730E9565B998(iLocal_98[iVar1], 1);
						unk_0xC87DF3B5D32E898C(iLocal_98[iVar1], 50f, 20);
						unk_0xBB3CC641B6AED5E5(iLocal_98[iVar1], 5);
						unk_0x41613433DA018B46(iLocal_98[iVar1], 100f);
						unk_0x253DB96AF5D6551B(iLocal_98[iVar1], 100f);
						unk_0xEA4C3AEAE49593B4(iLocal_98[iVar1], unk_0x63A6486593EC7EC3(40, 60));
						unk_0xD7F5B2902EBBD04E(iLocal_98[iVar1], unk_0xFC1458A37D98B502(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!unk_0x3AB6A1A9084FB0A4(iLocal_98[iVar1]) && !unk_0x3AB6A1A9084FB0A4(iLocal_98[11])) && !unk_0x3AB6A1A9084FB0A4(iLocal_98[12])) && !unk_0x3AB6A1A9084FB0A4(iLocal_98[13])) && !unk_0x3AB6A1A9084FB0A4(iLocal_98[14])) && !unk_0x3AB6A1A9084FB0A4(iLocal_98[15]))
						{
							unk_0x9E058151726E58DE(iLocal_98[11], joaat("weapon_pistol"), -1, 1, 1);
							unk_0x9E058151726E58DE(iLocal_98[12], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0x9E058151726E58DE(iLocal_98[13], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0x9E058151726E58DE(iLocal_98[14], joaat("weapon_carbinerifle"), -1, 1, 1);
							unk_0x9E058151726E58DE(iLocal_98[15], joaat("weapon_pumpshotgun"), -1, 1, 1);
							unk_0xAE6EBBBBD8B9FB30(iLocal_98[iVar1], 0, 1);
							unk_0x4F9A62E773100FDC(iLocal_98[iVar1], 3);
							unk_0x2C8C730E9565B998(iLocal_98[iVar1], 0);
							unk_0xBB3CC641B6AED5E5(iLocal_98[iVar1], 0);
							unk_0xC0B94E3AA7CE46BE(iLocal_98[iVar1], 1f, 1f);
							unk_0x6931076730A4AC5D(&uLocal_107);
							unk_0x28D62AF360997F32(0, -1159,33f, 4924,412f, 221,6576f, unk_0xFC1458A37D98B502(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							unk_0x9627C22EF3C3F4D6(0, unk_0xFC1458A37D98B502(), 6000, 0);
							unk_0x9627C22EF3C3F4D6(0, unk_0xFC1458A37D98B502(), 4500, 0);
							unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
							unk_0x1B16DD5C115FE009(uLocal_107);
							unk_0xAB30B1CF01A198C1(iLocal_98[15], uLocal_107);
							unk_0xFAA3EF7FF92E1F9E(&uLocal_107);
							unk_0x6931076730A4AC5D(&uLocal_107);
							unk_0x28D62AF360997F32(0, -1163,279f, 4932,933f, 222,541f, unk_0xFC1458A37D98B502(), 1f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							unk_0x8702B5F35BDDD0C1(0, unk_0xFC1458A37D98B502(), 5000, 0);
							unk_0x9627C22EF3C3F4D6(0, unk_0xFC1458A37D98B502(), 7500, 0);
							unk_0x9627C22EF3C3F4D6(0, unk_0xFC1458A37D98B502(), 4500, 0);
							unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
							unk_0x1B16DD5C115FE009(uLocal_107);
							unk_0xAB30B1CF01A198C1(iLocal_98[14], uLocal_107);
							unk_0xFAA3EF7FF92E1F9E(&uLocal_107);
							unk_0x6931076730A4AC5D(&uLocal_107);
							unk_0x9627C22EF3C3F4D6(0, unk_0xFC1458A37D98B502(), 2500, 0);
							unk_0x8702B5F35BDDD0C1(0, unk_0xFC1458A37D98B502(), 5000, 0);
							unk_0x28D62AF360997F32(0, -1156,175f, 4926,073f, 221,3447f, unk_0xFC1458A37D98B502(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							unk_0x9627C22EF3C3F4D6(0, unk_0xFC1458A37D98B502(), 6500, 0);
							unk_0x9627C22EF3C3F4D6(0, unk_0xFC1458A37D98B502(), 4500, 0);
							unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
							unk_0x1B16DD5C115FE009(uLocal_107);
							unk_0xAB30B1CF01A198C1(iLocal_98[13], uLocal_107);
							unk_0xFAA3EF7FF92E1F9E(&uLocal_107);
							unk_0x6931076730A4AC5D(&uLocal_107);
							unk_0x9627C22EF3C3F4D6(0, unk_0xFC1458A37D98B502(), 3000, 0);
							unk_0x28D62AF360997F32(0, -1157,962f, 4922,196f, 221,309f, unk_0xFC1458A37D98B502(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							unk_0x9627C22EF3C3F4D6(0, unk_0xFC1458A37D98B502(), 5500, 0);
							unk_0x9627C22EF3C3F4D6(0, unk_0xFC1458A37D98B502(), 4500, 0);
							unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
							unk_0x1B16DD5C115FE009(uLocal_107);
							unk_0xAB30B1CF01A198C1(iLocal_98[12], uLocal_107);
							unk_0xFAA3EF7FF92E1F9E(&uLocal_107);
							unk_0x6931076730A4AC5D(&uLocal_107);
							unk_0x9627C22EF3C3F4D6(0, unk_0xFC1458A37D98B502(), 4500, 0);
							unk_0x8702B5F35BDDD0C1(0, unk_0xFC1458A37D98B502(), 10000, 0);
							unk_0x28D62AF360997F32(0, -1161,475f, 4916,061f, 220,5658f, unk_0xFC1458A37D98B502(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							unk_0x9627C22EF3C3F4D6(0, unk_0xFC1458A37D98B502(), 4500, 0);
							unk_0x9627C22EF3C3F4D6(0, unk_0xFC1458A37D98B502(), 4500, 0);
							unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
							unk_0x1B16DD5C115FE009(uLocal_107);
							unk_0xAB30B1CF01A198C1(iLocal_98[11], uLocal_107);
							unk_0xFAA3EF7FF92E1F9E(&uLocal_107);
							unk_0xE9B3D12A64CC7C1A(iLocal_98[iVar1], 1);
							unk_0x2217C45231E6A537(iLocal_98[iVar1], 156, 1);
						}
					}
					else
					{
						iLocal_98[iVar1] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_o_acult_02"), vLocal_51[iVar1 /*3*/], fLocal_52[iVar1], 1, 1);
						unk_0x230697B667C63948(iLocal_98[iVar1], 0);
						unk_0x9E058151726E58DE(iLocal_98[iVar1], joaat("weapon_pistol"), -1, 1, 1);
						unk_0xAE6EBBBBD8B9FB30(iLocal_98[iVar1], 50, 1);
						unk_0x4F9A62E773100FDC(iLocal_98[iVar1], 2);
						unk_0x2C8C730E9565B998(iLocal_98[iVar1], 0);
						unk_0xC87DF3B5D32E898C(iLocal_98[iVar1], 50f, 20);
						unk_0xD1D0B4122585CC63(iLocal_98[iVar1], 1);
						unk_0xBB3CC641B6AED5E5(iLocal_98[iVar1], 5);
						unk_0x41613433DA018B46(iLocal_98[iVar1], 100f);
						unk_0x253DB96AF5D6551B(iLocal_98[iVar1], 100f);
						unk_0xEA4C3AEAE49593B4(iLocal_98[iVar1], unk_0x63A6486593EC7EC3(40, 60));
						unk_0xD7F5B2902EBBD04E(iLocal_98[iVar1], unk_0xFC1458A37D98B502(), 0, 16);
					}
					unk_0xCE93FCB8A8D8DF0B(iLocal_98[iVar1], iLocal_270);
					unk_0x48ED7B2293A96722(iLocal_98[iVar1], func_126(unk_0xB3328BA8976B416C(iLocal_98[iVar1], 1), func_92(unk_0x9EB17624F44A8DA4())));
					unk_0x771A86309E0CA47B(iLocal_98[iVar1], 1);
					unk_0xAE01EF4BC84AFE7C(iLocal_98[iVar1], 42, 1);
					uLocal_105[iVar1] = func_124(iLocal_98[iVar1], 1, 145);
					iVar1++;
				}
				func_96(&uLocal_271, 0, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
				func_96(&uLocal_271, 3, iLocal_98[11], "ACULTMaster", 0, 1);
				func_96(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
				unk_0x872F1C1F8587CCC7(&iVar0, 1);
				unk_0x872F1C1F8587CCC7(&iVar0, 3);
				unk_0x872F1C1F8587CCC7(&iVar0, 4);
				if (!bLocal_76)
				{
					uLocal_102[0] = unk_0x85CE54AA667066FE(joaat("pickup_money_case"), -1074,165f, 4897,468f, 213,2754f, -72f, 0f, 42,48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_102[1] = unk_0x85CE54AA667066FE(joaat("pickup_money_case"), -1094,671f, 4892,789f, 215,0707f, -72f, 0f, 42,48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_102[2] = unk_0x85CE54AA667066FE(joaat("pickup_money_case"), -1113,95f, 4904,385f, 217,6001f, -72f, 0f, 42,48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_102[3] = unk_0x85CE54AA667066FE(joaat("pickup_money_case"), -1145,273f, 4907,894f, 219,9734f, -72f, 0f, 42,48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
				}
				uLocal_102[0] = uLocal_102[0];
				uLocal_102[1] = uLocal_102[1];
				uLocal_102[2] = uLocal_102[2];
				uLocal_102[3] = uLocal_102[3];
				iLocal_103[0] = unk_0x5E35CF35E65D69B9(-1322183878, -1158,69f, 4915,709f, 220,2644f, 1, 1, 0);
				iLocal_103[1] = unk_0x5E35CF35E65D69B9(-2022916910, -1156,246f, 4918,6f, 220,5432f, 1, 1, 0);
				iLocal_103[2] = unk_0x5E35CF35E65D69B9(-1322183878, -1145,802f, 4931,816f, 219,9683f, 1, 1, 0);
				iLocal_103[3] = unk_0x5E35CF35E65D69B9(-1322183878, -1133,369f, 4919,067f, 218,8385f, 1, 1, 0);
				iLocal_103[4] = unk_0x5E35CF35E65D69B9(joaat("prop_box_wood05a"), -1132,025f, 4921,483f, 218,8244f, 1, 1, 0);
				iLocal_103[5] = unk_0x5E35CF35E65D69B9(-2022916910, -1112,66f, 4929,268f, 217,1752f, 1, 1, 0);
				unk_0x59AF3B40AE222194(iLocal_103[0], 12,24288f, -0,014582f, 27,06056f, 2, 1);
				unk_0x59AF3B40AE222194(iLocal_103[1], 7,733739f, 9,432779f, -2,865618f, 2, 1);
				unk_0x59AF3B40AE222194(iLocal_103[2], 3,735082f, 4,551246f, 86,30917f, 2, 1);
				unk_0x59AF3B40AE222194(iLocal_103[3], 0,240341f, 1,095195f, 36,59031f, 2, 1);
				unk_0x59AF3B40AE222194(iLocal_103[4], 7,6772f, 1,232743f, 93,27483f, 2, 1);
				unk_0x59AF3B40AE222194(iLocal_103[5], 3,367802f, -5,14387f, 97,30567f, 2, 1);
				if (func_123() < 50)
				{
					unk_0x17722E4F1A8D178F(unk_0x9EB17624F44A8DA4(), 0,5f, 1);
				}
				if (func_122() != 18)
				{
					func_120(18);
				}
				if (!func_89())
				{
					func_109(0);
				}
				func_1(1);
				bLocal_76 = false;
				iLocal_50 = 4;
			}
			break;
	}
}

int func_109(int iParam0)//Position - 0x4217
{
	if (func_114())
	{
		Global_104545 = 1;
		Global_104542 = unk_0x53C562FD2B9E3AB0();
		if (func_113(Global_104544))
		{
			func_110(0);
		}
		unk_0x218409883979C46E(1, "RE_TITLE");
		if (iParam0 && func_113(Global_104544))
		{
			unk_0xE56ECFD267E53FC5();
		}
		return 1;
	}
	return 0;
}

void func_110(int iParam0)//Position - 0x426A
{
	switch (iParam0)
	{
		case 0:
			if (Global_104555.f_24965.f_2 < 3)
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_111(func_112(iParam0), -1);
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
					func_111(func_112(iParam0), -1);
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
					func_111(func_112(iParam0), -1);
					Global_104555.f_24965.f_4++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 2);
				}
			}
			break;
	}
}

void func_111(char* sParam0, int iParam1)//Position - 0x434B
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

char* func_112(int iParam0)//Position - 0x4362
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

int func_113(int iParam0)//Position - 0x43A6
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

int func_114()//Position - 0x43D5
{
	switch (func_115(&Global_25292, 0, 5, 0, unk_0xBBA15366508D1BDE()))
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

int func_115(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x440B
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
		if (func_119(0))
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
		if (!func_117(iParam2))
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
			func_116(uParam0, iParam4);
		}
	}
	return 2;
}

void func_116(var uParam0, int iParam1)//Position - 0x4542
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

bool func_117(int iParam0)//Position - 0x4591
{
	return func_118(iParam0, Global_35861);
}

int func_118(int iParam0, int iParam1)//Position - 0x45A2
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

int func_119(int iParam0)//Position - 0x4783
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_117(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_120(int iParam0)//Position - 0x47A5
{
	if (iParam0 == -1)
	{
		iParam0 = func_90();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_62(iParam0);
	unk_0x51B813700F855144(0);
	unk_0x980C42B833D07BB4(1);
	Global_104541 = 0;
	func_121();
}

void func_121()//Position - 0x47DB
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			unk_0x2E4932E63763FE26(unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)), 1);
		}
		unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 32, 0);
	}
}

int func_122()//Position - 0x4818
{
	return Global_104544;
}

int func_123()//Position - 0x4824
{
	var uVar0;
	
	switch (func_13())
	{
		case 0:
			unk_0xFA3CE529DBB66C85(joaat("sp0_special_ability"), &uVar0, -1);
			break;
		
		case 1:
			unk_0xFA3CE529DBB66C85(joaat("sp1_special_ability"), &uVar0, -1);
			break;
		
		case 2:
			unk_0xFA3CE529DBB66C85(joaat("sp2_special_ability"), &uVar0, -1);
			break;
	}
	return uVar0;
}

int func_124(int iParam0, bool bParam1, int iParam2)//Position - 0x4879
{
	int iVar0;
	
	iVar0 = func_125(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(iVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(iVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_125(int iParam0, bool bParam1, bool bParam2)//Position - 0x48CB
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_38(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_38(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_38(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_126(struct<2> Param0, Vector3 vParam1, struct<2> Param2, var uParam3)//Position - 0x496F
{
	return unk_0xA67DD8488EBA5F6D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_127()//Position - 0x4989
{
	Global_25469 = 1;
}

int func_128(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x4995
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	iVar2 = iParam1;
	if (!unk_0xA8388473C755363D(iParam0, iParam1, 0))
	{
		iVar0 = 1;
	}
	if (iVar2 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	iVar3 = 0;
	if (iParam2 == 1)
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			iVar3 = unk_0x5088CF774DF6D935(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = unk_0x29E49EE03BC36422(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				unk_0x6407D3750DB405F3(iParam0, iVar2, &iVar3);
			}
		}
	}
	vVar5 = { unk_0xB3328BA8976B416C(iParam0, 0) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		vVar5 = { iParam4, iParam5, iParam6 };
	}
	while (func_132(iVar2, iVar6) != 0)
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			if (unk_0xB1C7BCEE5648EB7D(iParam0, iVar2, func_132(iVar2, iVar6)))
			{
				if (func_131(func_132(iVar2, iVar6)))
				{
					iVar7 = unk_0x7FAE56FC172FD992(func_132(iVar2, iVar6));
				}
			}
		}
		iVar6++;
	}
	iVar1 = unk_0xD50A2A2DB03A5CF0(iVar2, iVar3, vVar5, iVar0, 1065353216, iVar7, iParam7, iParam8);
	while (func_132(iVar2, iVar6) != 0)
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			if (unk_0xB1C7BCEE5648EB7D(iParam0, iVar2, func_132(iVar2, iVar6)))
			{
				unk_0x0DF81B88D0C53746(iVar1, func_132(iVar2, iVar6));
				func_129(iVar1, func_132(iVar2, iVar6));
			}
		}
		iVar6++;
	}
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0xA8388473C755363D(iParam0, iVar2, 0))
		{
			unk_0x63CDEB6D58456C0A(iVar1, unk_0x3CC6ABB1D2EC7E28(iParam0, iVar2));
		}
	}
	return iVar1;
}

void func_129(int iParam0, int iParam1)//Position - 0x4B09
{
	int iVar0;
	
	iVar0 = func_130(iParam1);
	if (iVar0 != 0)
	{
		unk_0x0DF81B88D0C53746(iParam0, iVar0);
	}
}

int func_130(int iParam0)//Position - 0x4B27
{
	switch (iParam0)
	{
		case 1550611612:
			return -1258515792;
			break;
		
		case 368550800:
			return 438243936;
			break;
		
		case -1769069349:
			return -455079056;
			break;
		
		case 24902297:
			return 740920107;
			break;
		
		case -228041614:
			return -541616347;
			break;
		
		case -584961562:
			return 1809261196;
			break;
		
		case -1153175946:
			return -1646538868;
			break;
		
		case 1301287696:
			return -1290164948;
			break;
		
		case 1597093459:
			return -964465134;
			break;
		
		case 1769871776:
			return 1135718771;
			break;
		
		case -1827882671:
			return 1253942266;
			break;
		
		case 259780317:
			return -403805974;
			break;
		
		case -1973342474:
			return 691432737;
			break;
		
		case 1996130345:
			return 987648331;
			break;
		
		case -1455657812:
			return -431680535;
			break;
		
		case -1668263084:
			return -847582310;
			break;
		
		case 1308243489:
			return -92592218;
			break;
		
		case 1122574335:
			return -494548326;
			break;
		
		case 1420313469:
			return 730876697;
			break;
		
		case 109848390:
			return 583159708;
			break;
		
		case 593945703:
			return -1928503603;
			break;
		
		case 1142457062:
			return 520557834;
			break;
	}
	return 0;
}

int func_131(int iParam0)//Position - 0x4CAD
{
	if ((((((((((((((((((((((((((((((((iParam0 == joaat("component_pistol_varmod_luxe") || iParam0 == joaat("component_combatpistol_varmod_lowrider")) || iParam0 == joaat("component_appistol_varmod_luxe")) || iParam0 == joaat("component_microsmg_varmod_luxe")) || iParam0 == joaat("component_smg_varmod_luxe")) || iParam0 == joaat("component_assaultrifle_varmod_luxe")) || iParam0 == joaat("component_carbinerifle_varmod_luxe")) || iParam0 == joaat("component_advancedrifle_varmod_luxe")) || iParam0 == joaat("component_mg_varmod_lowrider")) || iParam0 == joaat("component_combatmg_varmod_lowrider")) || iParam0 == joaat("component_pumpshotgun_varmod_lowrider")) || iParam0 == joaat("component_sniperrifle_varmod_luxe")) || iParam0 == joaat("component_assaultsmg_varmod_lowrider")) || iParam0 == joaat("component_pistol50_varmod_luxe")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_bullpuprifle_varmod_low")) || iParam0 == joaat("component_snspistol_varmod_lowrider")) || iParam0 == joaat("component_specialcarbine_varmod_lowrider")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_knuckle_varmod_pimp")) || iParam0 == joaat("component_knuckle_varmod_ballas")) || iParam0 == joaat("component_knuckle_varmod_dollar")) || iParam0 == joaat("component_knuckle_varmod_diamond")) || iParam0 == joaat("component_knuckle_varmod_hate")) || iParam0 == joaat("component_knuckle_varmod_love")) || iParam0 == joaat("component_knuckle_varmod_player")) || iParam0 == joaat("component_knuckle_varmod_king")) || iParam0 == joaat("component_knuckle_varmod_vagos")) || iParam0 == joaat("component_switchblade_varmod_var1")) || iParam0 == joaat("component_switchblade_varmod_var2")) || iParam0 == joaat("component_revolver_varmod_boss")) || iParam0 == joaat("component_revolver_varmod_goon")) || iParam0 == 1623028892)
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0, int iParam1)//Position - 0x4E85
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_134(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x16DE9AAC68A15A81(iVar1))
					{
						if (unk_0x768809DD20D4F552(iVar1, iVar2, &Var5))
						{
							if (!func_133(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_133(int iParam0)//Position - 0x59F6
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

int func_134(int iParam0, var uParam1)//Position - 0x5A91
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x359D12B4F89DA5D6();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xD10DDFA63A9D9BDA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_135()//Position - 0x5ACC
{
	bool bVar0;
	
	bVar0 = unk_0xA3DDC3767EC660CD();
	if (!Global_70855)
	{
		if (!bVar0)
		{
			Global_70855 = 1;
		}
	}
	return bVar0;
}

int func_136(int iParam0, int iParam1)//Position - 0x5AEF
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_137(iParam0, iParam1);
}

int func_137(int iParam0, int iParam1)//Position - 0x5B0A
{
	if (func_15(14) && !func_148(iParam0))
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
	if (func_147(&Global_4267379))
	{
		if (func_145(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_138(&Global_4267379, iParam0))
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

int func_138(var uParam0, int iParam1)//Position - 0x5BA7
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_15(14) && !func_148(iParam1))
	{
		return 0;
	}
	if (func_145(uParam0, iParam1))
	{
		return 0;
	}
	if (func_144(uParam0) < 0f)
	{
		func_143(uParam0, 0);
	}
	func_141(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_139(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_139(var uParam0, int iParam1)//Position - 0x5C58
{
	int iVar0;
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_15(14) && !func_148(iParam1))
	{
		return 0;
	}
	if (func_145(uParam0, iParam1))
	{
		return 0;
	}
	if (func_144(uParam0) < 0f)
	{
		func_143(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_140(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_140(var uParam0, int iParam1)//Position - 0x5CD3
{
	return (*uParam0)[iParam1] == 78;
}

void func_141(var uParam0)//Position - 0x5CE4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_142(uParam0, iVar0);
		iVar0++;
	}
	func_143(uParam0, (Global_4267378 - 0,5f));
}

void func_142(var uParam0, int iParam1)//Position - 0x5D18
{
	(*uParam0)[iParam1] = 78;
}

void func_143(var uParam0, float fParam1)//Position - 0x5D28
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

float func_144(var uParam0)//Position - 0x5D45
{
	return uParam0->f_80;
}

bool func_145(var uParam0, int iParam1)//Position - 0x5D51
{
	return func_146(uParam0, iParam1) != -1;
}

int func_146(var uParam0, int iParam1)//Position - 0x5D63
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

bool func_147(var uParam0)//Position - 0x5D90
{
	return uParam0->f_79 == 1;
}

int func_148(int iParam0)//Position - 0x5D9E
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

void func_149()//Position - 0x5DEE
{
	if (fLocal_87 > 0f)
	{
		fLocal_87 = (fLocal_87 - (0,6f / (1f / unk_0x46C19C2753391FBF())));
	}
	else
	{
		fLocal_87 = 0f;
	}
	if (fLocal_87 >= 0f)
	{
		unk_0x99B6EAC23065A02E(Global_34984[10 /*31*/], fLocal_87, 0, 1);
		unk_0xB94AAB49E0BB01DB(Global_34984[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_86 < 0f)
	{
		fLocal_86 = (fLocal_86 + (0,6f / (1f / unk_0x46C19C2753391FBF())));
	}
	else
	{
		fLocal_86 = 0f;
	}
	if (fLocal_86 <= 0f)
	{
		unk_0x99B6EAC23065A02E(Global_34984[9 /*31*/], fLocal_86, 0, 1);
		unk_0xB94AAB49E0BB01DB(Global_34984[9 /*31*/], 4, 0, 1);
	}
}

void func_150()//Position - 0x5E7A
{
	if (fLocal_87 < 1f)
	{
		fLocal_87 = (fLocal_87 + (0,6f / (1f / unk_0x46C19C2753391FBF())));
	}
	else
	{
		fLocal_87 = 1f;
	}
	if (fLocal_87 <= 1f)
	{
		unk_0x99B6EAC23065A02E(Global_34984[10 /*31*/], fLocal_87, 0, 1);
		unk_0xB94AAB49E0BB01DB(Global_34984[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_86 > -1f)
	{
		fLocal_86 = (fLocal_86 - (0,6f / (1f / unk_0x46C19C2753391FBF())));
	}
	else
	{
		fLocal_86 = -1f;
	}
	if (fLocal_86 >= -1f)
	{
		unk_0x99B6EAC23065A02E(Global_34984[9 /*31*/], fLocal_86, 0, 1);
		unk_0xB94AAB49E0BB01DB(Global_34984[9 /*31*/], 4, 0, 1);
	}
}

void func_151()//Position - 0x5F06
{
	switch (iLocal_93)
	{
		case 0:
			unk_0x6FF834D85E2DD4C6(joaat("a_m_o_acult_02"));
			unk_0x6FF834D85E2DD4C6(joaat("prop_anim_cash_pile_02"));
			unk_0x6450931B826B49D9("random@altruist_cult");
			unk_0xAAB7D68F04F8C8BA("AC_DELIVERED");
			unk_0x04562CD765E0C517(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x9A0B2ED5055D3F0B(joaat("a_m_o_acult_02")) && unk_0x9A0B2ED5055D3F0B(joaat("prop_anim_cash_pile_02"))) && unk_0x3A801AA34DD821BE("random@altruist_cult")) && unk_0xAAB7D68F04F8C8BA("AC_DELIVERED")) && unk_0x0A198E59F03B0E6F(joaat("weapon_assaultrifle")))
			{
				if (Global_104555.f_24965.f_5 < 2)
				{
					if (Global_104555.f_24965.f_5 == 0)
					{
						sLocal_269 = "ACULT_HI";
					}
					else
					{
						sLocal_269 = "ACULT_LEAVE5";
					}
					sLocal_263 = "cult_p5_guard";
					sLocal_265 = "cult_p5_trv";
					sLocal_266 = "cult_p5_victim_01";
					sLocal_267 = "cult_p5_victim_02";
					sLocal_268 = "cult_p5_cam";
					fLocal_89 = 0,75f;
					fLocal_88 = 0,999f;
				}
				else if (Global_104555.f_24965.f_5 >= 2)
				{
					sLocal_269 = "ACULT_CAPT";
					sLocal_263 = "cult_p7_guard_01";
					sLocal_264 = "cult_p7_guard_02";
					sLocal_265 = "cult_p7_trv";
					sLocal_266 = "cult_p7_victim_01";
					sLocal_267 = "cult_p7_victim_02";
					sLocal_268 = "cult_p7_cam";
					fLocal_89 = 0,98f;
					fLocal_88 = 0,98f;
					unk_0x6FF834D85E2DD4C6(-2022916910);
					unk_0x6FF834D85E2DD4C6(-1322183878);
					unk_0x6FF834D85E2DD4C6(joaat("prop_box_wood05a"));
					unk_0x6FF834D85E2DD4C6(joaat("prop_security_case_01"));
					if (!unk_0x6C97EEC6339FB45C())
					{
						unk_0x393584863A2F304E("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0xA6DECE14FC9A8C51(iLocal_104))
				{
					unk_0xE30CF11C0EE14316(&iLocal_104);
				}
				func_20(1, 1, 1, 0);
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
				unk_0x3E80C2F7BC665259(1);
				unk_0x4255E93FCCDE108E(0);
				unk_0x9B47B379EE749C38(0);
				unk_0x28B42081D6BEFFF2(unk_0xFC1458A37D98B502(), 1);
				unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), 1);
				unk_0x8810DC630928B398("AC_DELIVERED");
				if (func_175())
				{
					func_174(0);
				}
				func_172();
				system::wait(0);
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					iLocal_99 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					if (unk_0xB8DE76287EDC4957(iLocal_99, 0))
					{
						if (unk_0x9EC5112BB1C4047A(iLocal_99))
						{
							iLocal_93++;
						}
					}
				}
				else
				{
					iLocal_99 = unk_0xC733212BF9066BDF();
					if (!unk_0x3AB6A1A9084FB0A4(uLocal_97[0]) && !unk_0x3AB6A1A9084FB0A4(uLocal_97[1]))
					{
						unk_0xB8E08BD5B184DF4E(uLocal_97[0]);
						unk_0x88235B448509228B(uLocal_97[0]);
						unk_0xB8E08BD5B184DF4E(uLocal_97[1]);
						unk_0x88235B448509228B(uLocal_97[1]);
					}
					iLocal_93++;
				}
			}
			break;
		
		case 1:
			if (unk_0x6ADD12BF4D6D2587(iLocal_99))
			{
				if (!unk_0x9761C10D57B68069(iLocal_99))
				{
					unk_0xDD29FF4BAB8AFF9C(iLocal_99, 1, 0);
				}
				if (unk_0x0C88267282FD588F(iLocal_99, vLocal_54, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0xBD8D47FDC6902B2D(iLocal_99, -1028,415f, 4924,863f, 205,9386f, 0, 0, 0, 1);
					if (!unk_0x191BE1BC8F26F3C1(iLocal_99, 0))
					{
						unk_0x48ED7B2293A96722(iLocal_99, 149,8882f);
						unk_0xACE486395AA1867D(iLocal_99, 1084227584);
					}
				}
			}
			unk_0x247EAA2E93D4A021(vLocal_54, 12f, 1, 0, 0, false);
			unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), -1035,625f, 4915,152f, 205,5761f, 1, 0, 0, 1);
			unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 128,2065f);
			if (!unk_0x3AB6A1A9084FB0A4(uLocal_97[0]) && !unk_0x3AB6A1A9084FB0A4(uLocal_97[1]))
			{
				unk_0xBD8D47FDC6902B2D(uLocal_97[0], Vector(205,5761f, 4915,152f, -1035,625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0x48ED7B2293A96722(uLocal_97[0], 128,2065f);
				unk_0xBD8D47FDC6902B2D(uLocal_97[1], Vector(205,5761f, 4915,152f, -1035,625f) - Vector(0f, 1f, 0f), 1, 0, 0, 1);
				unk_0x48ED7B2293A96722(uLocal_97[1], 128,2065f);
			}
			iLocal_98[0] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_o_acult_02"), -1042,56f, 4913,516f, 207,0988f, 282,4169f, 1, 1);
			func_96(&uLocal_271, 1, iLocal_98[0], "ACULTMember1", 0, 1);
			if (Global_104555.f_24965.f_5 >= 2)
			{
				iLocal_98[1] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_o_acult_02"), -1041,757f, 4908,49f, 207,2777f, 305,3168f, 1, 1);
				func_96(&uLocal_271, 2, iLocal_98[1], "ACULTMember2", 0, 1);
			}
			func_96(&uLocal_271, 0, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
			func_96(&uLocal_271, 3, 0, "ACULTMaster", 0, 1);
			func_96(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
			func_97(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
			unk_0x771A86309E0CA47B(iLocal_98[0], 1);
			iLocal_101 = unk_0xD50A2A2DB03A5CF0(joaat("weapon_assaultrifle"), -1, unk_0xB3328BA8976B416C(iLocal_98[0], 1), 1, 1065353216, 0, 0, 1);
			unk_0xA9D382E7BA095148(iLocal_101, iLocal_98[0], unk_0xDD09837E5235FE91(iLocal_98[0], 60309), 0,12f, 0,028f, -0,003f, -82,208f, -7,06f, -8,038f, 0, 0, 0, 0, 2, 1);
			if (Global_104555.f_24965.f_5 < 2)
			{
				iLocal_100 = unk_0x5E35CF35E65D69B9(joaat("prop_anim_cash_pile_02"), vLocal_53, 1, 1, 0);
				unk_0xA9D382E7BA095148(iLocal_100, unk_0xFC1458A37D98B502(), unk_0xDD09837E5235FE91(unk_0xFC1458A37D98B502(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			else if (Global_104555.f_24965.f_5 >= 2)
			{
				unk_0x9E058151726E58DE(iLocal_98[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_106 = unk_0x4562AC7F06CD71B3("DEFAULT_ANIMATED_CAMERA", 1);
			iLocal_92 = unk_0x8383F9C605E523B7(-1044,636f, 4915,204f, 212,32f, 0f, 0f, 110,52f, 2);
			unk_0x8E628F774C748D93(unk_0xFC1458A37D98B502(), iLocal_92, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x8E628F774C748D93(iLocal_98[0], iLocal_92, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_104555.f_24965.f_5 >= 2)
			{
				unk_0x8E628F774C748D93(iLocal_98[1], iLocal_92, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0xEFF56C7BDABBF39B(uLocal_106, iLocal_92, sLocal_268, "random@altruist_cult");
			unk_0x3458550DF8E9B453(1, 0, 3000, 1, 0, 0);
			if (!unk_0x3AB6A1A9084FB0A4(uLocal_97[0]) && !unk_0x3AB6A1A9084FB0A4(uLocal_97[1]))
			{
				unk_0x8E628F774C748D93(uLocal_97[0], iLocal_92, "random@altruist_cult", sLocal_266, 1000f, -2f, 4, 0, 1148846080, 0);
				unk_0x8E628F774C748D93(uLocal_97[1], iLocal_92, "random@altruist_cult", sLocal_267, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_93++;
			break;
		
		case 2:
			if (!unk_0x3AB6A1A9084FB0A4(uLocal_97[0]))
			{
				if (unk_0x6668BA66B78B4E7C(uLocal_97[0]))
				{
					func_170(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_170(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0x3AB6A1A9084FB0A4(uLocal_97[1]))
			{
				if (unk_0x6668BA66B78B4E7C(uLocal_97[1]))
				{
					func_170(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_170(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0x463C4747B41E35A3(iLocal_92) > fLocal_89)
			{
				iLocal_93++;
			}
			break;
		
		case 3:
			if (!unk_0x3AB6A1A9084FB0A4(uLocal_97[0]))
			{
				if (unk_0x6668BA66B78B4E7C(uLocal_97[0]))
				{
					func_170(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_170(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0x3AB6A1A9084FB0A4(uLocal_97[1]))
			{
				if (unk_0x6668BA66B78B4E7C(uLocal_97[1]))
				{
					func_170(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_170(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0x463C4747B41E35A3(iLocal_92) > fLocal_88)
			{
				iLocal_93++;
			}
			break;
		
		case 4:
			if (Global_104555.f_24965.f_5 < 2)
			{
				func_127();
				if (unk_0x6ADD12BF4D6D2587(iLocal_98[0]))
				{
					unk_0x68433819717660CF(&(iLocal_98[0]));
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_98[1]))
				{
					unk_0x68433819717660CF(&(iLocal_98[1]));
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_100))
				{
					unk_0x452336926718D62A(&iLocal_100);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_101))
				{
					unk_0x452336926718D62A(&iLocal_101);
				}
				unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
				unk_0x90CE99E954B80CFF(0, 0, 3, 0);
				unk_0x7849794435F39D49(uLocal_106, false);
				func_20(0, 1, 1, 0);
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
				unk_0x4255E93FCCDE108E(1);
				unk_0x9B47B379EE749C38(1);
				unk_0x28B42081D6BEFFF2(unk_0xFC1458A37D98B502(), 0);
				unk_0xBB9A3C553EECB180(0f);
				func_152(func_13(), 1, 2000, 0, 0);
			}
			unk_0x8810DC630928B398("AC_DONE");
			Global_104555.f_24965.f_5 += 2;
			iLocal_78 = 1;
			break;
	}
}

void func_152(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x6738
{
	int iVar0;
	int iVar1;
	
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_153(Global_104555.f_28020[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0xFA3CE529DBB66C85(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xBFFF62F75445099D(iVar1, iVar0, 1);
	}
}

int func_153(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x681F
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_169();
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
					func_168(99, 1);
					func_167(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_167(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_167(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_165(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_161(5))
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
							func_167(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_167(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_167(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_161(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_167(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_167(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_167(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_167(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_167(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_167(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_167(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_167(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_167(joaat("sp2_money_spent_property"), iParam3);
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
									func_167(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_167(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_167(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_167(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_167(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_167(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_161(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_167(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_167(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_167(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_167(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_167(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_167(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_160(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_168(95, iParam3);
					break;
				
				case 1:
					func_168(97, iParam3);
					break;
				
				case 2:
					func_168(96, iParam3);
					break;
			}
			func_168(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_156(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_156(iVar1);
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
					func_167(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_167(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_167(joaat("sp2_total_cash_earned"), iParam3);
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
	func_155(iParam0);
	if (Global_35861 == 15)
	{
		func_154(0);
	}
	return 1;
}

void func_154(bool bParam0)//Position - 0x6E1E
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

void func_155(int iParam0)//Position - 0x70A0
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

void func_156(int iParam0)//Position - 0x70FA
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_159(129, 0, -1, 1);
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
	else if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0) || unk_0xC80D31E4B587871C(Global_2097152[func_158() /*12130*/].f_7676.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Global_2097152[func_158() /*12130*/].f_7676.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xE3C33644878DCCFD("COUP_RED");
		unk_0xA6D2B267C377D7B2(func_157(iParam0));
		unk_0x9F42263EE935D84B(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_157(int iParam0)//Position - 0x71D1
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

int func_158()//Position - 0x7259
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_159(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7266
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
		iParam2 = func_24();
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

void func_160(int iParam0)//Position - 0x7732
{
	func_168(93, iParam0);
	func_168(29, iParam0);
	func_168(30, iParam0);
}

bool func_161(int iParam0)//Position - 0x7752
{
	if (iParam0 == 8)
	{
		return func_162(129, -1, -1);
	}
	if (!unk_0x3A711520F83BAE98())
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2097152[func_158() /*12130*/].f_7676.f_10, iParam0);
}

int func_162(int iParam0, int iParam1, int iParam2)//Position - 0x77A0
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_24();
	}
	iVar1 = func_164(iParam0, iParam1);
	uVar2 = func_163(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_163(int iParam0)//Position - 0x77DD
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

int func_164(int iParam0, int iParam1)//Position - 0x7A9D
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_24();
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

int func_165(bool bParam0)//Position - 0x7D3F
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
		func_166(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_136(27, 1);
	return 1;
}

int func_166(int iParam0, int iParam1)//Position - 0x7DF6
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

void func_167(int iParam0, int iParam1)//Position - 0x7E47
{
	int iVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xBFFF62F75445099D(iParam0, iVar0, 1);
}

void func_168(int iParam0, int iParam1)//Position - 0x7E6A
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

void func_169()//Position - 0x7EC7
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

void func_170(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x7F3C
{
	unk_0xE44A9E63DC81244A(uParam0, sParam1, sParam2, func_171(iParam3), 0);
}

int func_171(int iParam0)//Position - 0x7F55
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

void func_172()//Position - 0x81EE
{
	Global_14622 = 0;
	func_173();
}

void func_173()//Position - 0x81FE
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

void func_174(int iParam0)//Position - 0x821F
{
	Global_16767 = iParam0;
}

int func_175()//Position - 0x822C
{
	if (Global_16767 == 1)
	{
		return 1;
	}
	return 0;
}

void func_176()//Position - 0x8243
{
	switch (iLocal_93)
	{
		case 0:
			unk_0x6FF834D85E2DD4C6(joaat("a_m_o_acult_02"));
			unk_0x6FF834D85E2DD4C6(joaat("prop_anim_cash_pile_02"));
			unk_0x6450931B826B49D9("random@altruist_cult");
			unk_0xAAB7D68F04F8C8BA("AC_DELIVERED");
			unk_0x04562CD765E0C517(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x9A0B2ED5055D3F0B(joaat("a_m_o_acult_02")) && unk_0x9A0B2ED5055D3F0B(joaat("prop_anim_cash_pile_02"))) && unk_0x3A801AA34DD821BE("random@altruist_cult")) && unk_0xAAB7D68F04F8C8BA("AC_DELIVERED")) && unk_0x0A198E59F03B0E6F(joaat("weapon_assaultrifle")))
			{
				if (Global_104555.f_24965.f_5 == 0)
				{
					sLocal_269 = "ACULT_HI";
					sLocal_263 = "cult_p2_guard";
					sLocal_265 = "cult_p2_trv";
					sLocal_266 = "cult_p2_victim";
					sLocal_268 = "cult_p2_cam";
					fLocal_89 = 0,8f;
					fLocal_88 = 0,968f;
				}
				else if (Global_104555.f_24965.f_5 == 1)
				{
					sLocal_269 = "ACULT_LEAVE3";
					sLocal_263 = "cult_p4_guard";
					sLocal_265 = "cult_p4_trv";
					sLocal_266 = "cult_p4_victim";
					sLocal_268 = "cult_p4_cam";
					fLocal_89 = 0,77f;
					fLocal_88 = 0,999f;
				}
				else if (Global_104555.f_24965.f_5 == 2)
				{
					sLocal_269 = "ACULT_LEAVE3";
					sLocal_263 = "cult_p4_guard";
					sLocal_265 = "cult_p4_trv";
					sLocal_266 = "cult_p4_victim";
					sLocal_268 = "cult_p4_cam";
					fLocal_89 = 0,77f;
					fLocal_88 = 0,999f;
				}
				else if (Global_104555.f_24965.f_5 >= 3)
				{
					sLocal_269 = "ACULT_CAPT";
					sLocal_263 = "cult_p7_guard_01";
					sLocal_264 = "cult_p7_guard_02";
					sLocal_265 = "cult_p7_trv";
					sLocal_266 = "cult_p7_victim_01";
					sLocal_268 = "cult_p7_cam";
					fLocal_89 = 0,98f;
					fLocal_88 = 0,98f;
					unk_0x6FF834D85E2DD4C6(-2022916910);
					unk_0x6FF834D85E2DD4C6(-1322183878);
					unk_0x6FF834D85E2DD4C6(joaat("prop_box_wood05a"));
					unk_0x6FF834D85E2DD4C6(joaat("prop_security_case_01"));
					if (!unk_0x6C97EEC6339FB45C())
					{
						unk_0x393584863A2F304E("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0xA6DECE14FC9A8C51(iLocal_104))
				{
					unk_0xE30CF11C0EE14316(&iLocal_104);
				}
				func_20(1, 1, 1, 0);
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
				unk_0x3E80C2F7BC665259(1);
				unk_0x4255E93FCCDE108E(0);
				unk_0x9B47B379EE749C38(0);
				unk_0x28B42081D6BEFFF2(unk_0xFC1458A37D98B502(), 1);
				unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), 1);
				unk_0x8810DC630928B398("AC_DELIVERED");
				if (func_175())
				{
					func_174(0);
				}
				func_172();
				system::wait(0);
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					iLocal_99 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					if (unk_0xB8DE76287EDC4957(iLocal_99, 0))
					{
						if (unk_0x9EC5112BB1C4047A(iLocal_99))
						{
							iLocal_93++;
						}
					}
				}
				else
				{
					iLocal_99 = unk_0xC733212BF9066BDF();
					if (!unk_0x3AB6A1A9084FB0A4(uLocal_97[0]))
					{
						unk_0xB8E08BD5B184DF4E(uLocal_97[0]);
						unk_0x88235B448509228B(uLocal_97[0]);
					}
					iLocal_93++;
				}
			}
			break;
		
		case 1:
			if (unk_0x6ADD12BF4D6D2587(iLocal_99))
			{
				if (!unk_0x9761C10D57B68069(iLocal_99))
				{
					unk_0xDD29FF4BAB8AFF9C(iLocal_99, 1, 0);
				}
				if (unk_0x0C88267282FD588F(iLocal_99, vLocal_54, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0xBD8D47FDC6902B2D(iLocal_99, -1028,415f, 4924,863f, 205,9386f, 0, 0, 0, 1);
					if (!unk_0x191BE1BC8F26F3C1(iLocal_99, 0))
					{
						unk_0x48ED7B2293A96722(iLocal_99, 149,8882f);
						unk_0xACE486395AA1867D(iLocal_99, 1084227584);
					}
				}
			}
			unk_0x247EAA2E93D4A021(vLocal_54, 12f, 1, 0, 0, false);
			unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), -1035,625f, 4915,152f, 205,5761f, 1, 0, 0, 1);
			unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 128,2065f);
			if (!unk_0x3AB6A1A9084FB0A4(uLocal_97[0]))
			{
				unk_0xBD8D47FDC6902B2D(uLocal_97[0], Vector(205,5761f, 4915,152f, -1035,625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0x48ED7B2293A96722(uLocal_97[0], 128,2065f);
			}
			iLocal_98[0] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_o_acult_02"), -1042,56f, 4913,516f, 207,0988f, 282,4169f, 1, 1);
			func_96(&uLocal_271, 1, iLocal_98[0], "ACULTMember1", 0, 1);
			if (Global_104555.f_24965.f_5 >= 3)
			{
				iLocal_98[1] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_o_acult_02"), -1041,757f, 4908,49f, 207,2777f, 305,3168f, 1, 1);
				func_96(&uLocal_271, 2, iLocal_98[1], "ACULTMember2", 0, 1);
			}
			func_96(&uLocal_271, 0, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
			func_96(&uLocal_271, 3, 0, "ACULTMaster", 0, 1);
			func_96(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
			if (Global_104555.f_24965.f_5 != 1 && Global_104555.f_24965.f_5 != 2)
			{
				func_97(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
			}
			system::settimerb(0);
			unk_0x771A86309E0CA47B(iLocal_98[0], 1);
			iLocal_100 = unk_0x5E35CF35E65D69B9(joaat("prop_anim_cash_pile_02"), vLocal_53, 1, 1, 0);
			iLocal_101 = unk_0xD50A2A2DB03A5CF0(joaat("weapon_assaultrifle"), -1, unk_0xB3328BA8976B416C(iLocal_98[0], 1), 1, 1065353216, 0, 0, 1);
			unk_0xA9D382E7BA095148(iLocal_101, iLocal_98[0], unk_0xDD09837E5235FE91(iLocal_98[0], 60309), 0,12f, 0,028f, -0,003f, -82,208f, -7,06f, -8,038f, 0, 0, 0, 0, 2, 1);
			if (Global_104555.f_24965.f_5 < 3)
			{
				if (Global_104555.f_24965.f_5 == 0)
				{
					unk_0xA9D382E7BA095148(iLocal_100, unk_0xFC1458A37D98B502(), unk_0xDD09837E5235FE91(unk_0xFC1458A37D98B502(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					unk_0xA9D382E7BA095148(iLocal_100, unk_0xFC1458A37D98B502(), unk_0xDD09837E5235FE91(unk_0xFC1458A37D98B502(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			else if (Global_104555.f_24965.f_5 >= 3)
			{
				unk_0x9E058151726E58DE(iLocal_98[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_106 = unk_0x4562AC7F06CD71B3("DEFAULT_ANIMATED_CAMERA", 1);
			iLocal_92 = unk_0x8383F9C605E523B7(-1044,636f, 4915,204f, 212,32f, 0f, 0f, 110,52f, 2);
			unk_0x8E628F774C748D93(unk_0xFC1458A37D98B502(), iLocal_92, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x8E628F774C748D93(iLocal_98[0], iLocal_92, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_104555.f_24965.f_5 >= 3)
			{
				unk_0x8E628F774C748D93(iLocal_98[1], iLocal_92, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0xEFF56C7BDABBF39B(uLocal_106, iLocal_92, sLocal_268, "random@altruist_cult");
			unk_0x3458550DF8E9B453(1, 0, 3000, 1, 0, 0);
			if (!unk_0x3AB6A1A9084FB0A4(uLocal_97[0]))
			{
				unk_0x8E628F774C748D93(uLocal_97[0], iLocal_92, "random@altruist_cult", sLocal_266, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_93++;
			break;
		
		case 2:
			if (!unk_0x3AB6A1A9084FB0A4(uLocal_97[0]))
			{
				if (unk_0x6668BA66B78B4E7C(uLocal_97[0]))
				{
					func_170(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_170(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (system::timerb() > 2000 && system::timerb() < 2100)
			{
				if (Global_104555.f_24965.f_5 == 1 || Global_104555.f_24965.f_5 == 2)
				{
					if (!func_107())
					{
						func_97(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
					}
				}
			}
			if (unk_0x463C4747B41E35A3(iLocal_92) > fLocal_89)
			{
				iLocal_93++;
			}
			break;
		
		case 3:
			if (!unk_0x3AB6A1A9084FB0A4(uLocal_97[0]))
			{
				if (unk_0x6668BA66B78B4E7C(uLocal_97[0]))
				{
					func_170(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_170(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (Global_104555.f_24965.f_5 == 1 || Global_104555.f_24965.f_5 == 2)
			{
				if ((unk_0x463C4747B41E35A3(iLocal_92) > 0,9742857f && !iLocal_85) && unk_0x1FB367C588A91451() == 4)
				{
					unk_0xA91E83FF512776B6("CamPushInNeutral", 0, 0);
					unk_0x4AFBCBFDE748D4E0(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_85 = 1;
				}
			}
			if (unk_0x463C4747B41E35A3(iLocal_92) > fLocal_88)
			{
				iLocal_93++;
			}
			break;
		
		case 4:
			if (Global_104555.f_24965.f_5 < 3)
			{
				if (Global_104555.f_24965.f_5 != 1 && Global_104555.f_24965.f_5 != 2)
				{
					func_127();
					if (unk_0x6ADD12BF4D6D2587(iLocal_98[0]))
					{
						unk_0x68433819717660CF(&(iLocal_98[0]));
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_98[1]))
					{
						unk_0x68433819717660CF(&(iLocal_98[1]));
					}
				}
				else
				{
					system::settimerb(0);
					if (unk_0x6ADD12BF4D6D2587(iLocal_98[0]))
					{
						unk_0xB3A8974D2C811672(iLocal_98[0], false, 0);
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_98[1]))
					{
						unk_0xB3A8974D2C811672(iLocal_98[1], false, 0);
					}
					if (unk_0x6ADD12BF4D6D2587(uLocal_97[0]))
					{
						unk_0xB3A8974D2C811672(uLocal_97[0], false, 0);
					}
					iLocal_93++;
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_100))
				{
					unk_0x452336926718D62A(&iLocal_100);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_101))
				{
					unk_0x452336926718D62A(&iLocal_101);
				}
				unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
				if (Global_104555.f_24965.f_5 == 0)
				{
					unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), -668482597, 0, 0, 0);
					unk_0xB519FC2F5D213F01(unk_0x9EB17624F44A8DA4(), 1f, 750, 0, 1, 0);
				}
				if (unk_0x74C475EB8E73D398(sLocal_268, "cult_p4_cam"))
				{
					unk_0x3458550DF8E9B453(0, 0, 3000, 1, 0, 0);
				}
				else
				{
					unk_0x90CE99E954B80CFF(0, 0, 3, 0);
				}
				unk_0x7849794435F39D49(uLocal_106, false);
				func_20(0, 1, 1, 0);
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
				unk_0x4255E93FCCDE108E(1);
				unk_0x9B47B379EE749C38(1);
				unk_0x28B42081D6BEFFF2(unk_0xFC1458A37D98B502(), 0);
				unk_0xBB9A3C553EECB180(0f);
				func_152(func_13(), 1, 1000, 0, 0);
			}
			if (Global_104555.f_24965.f_5 != 1 && Global_104555.f_24965.f_5 != 2)
			{
				unk_0x8810DC630928B398("AC_DONE");
				Global_104555.f_24965.f_5++;
				iLocal_78 = 1;
			}
			break;
		
		case 5:
			if (!func_107() || system::timerb() > 7000)
			{
				func_127();
				if (unk_0x6ADD12BF4D6D2587(iLocal_98[0]))
				{
					unk_0x68433819717660CF(&(iLocal_98[0]));
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_98[1]))
				{
					unk_0x68433819717660CF(&(iLocal_98[1]));
				}
				unk_0x8810DC630928B398("AC_DONE");
				Global_104555.f_24965.f_5++;
				iLocal_78 = 1;
			}
			break;
	}
}

void func_177()//Position - 0x8C09
{
	if (func_179())
	{
		if (func_13() == 2)
		{
			if (unk_0x06BD87535C2C9154(func_178()))
			{
				unk_0x28F7F7EF1B64C602(func_178(), &uLocal_90, &iLocal_91);
				if (iLocal_91 == 1)
				{
					uLocal_97[0] = unk_0x89B283B45B191258(func_178(), 0);
					if (unk_0x0C88267282FD588F(uLocal_97[0], vLocal_54, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
						{
							if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
							{
								unk_0xA1AA40A93CA0F40D(unk_0xC733212BF9066BDF(), 10,5f, 5, 0);
							}
						}
						system::settimera(0);
						iLocal_50 = 1;
					}
				}
				else if (iLocal_91 == 2)
				{
					uLocal_97[0] = unk_0x89B283B45B191258(func_178(), 0);
					uLocal_97[1] = unk_0x89B283B45B191258(func_178(), 1);
					if (unk_0x0C88267282FD588F(uLocal_97[0], vLocal_54, 5f, 5f, 5f, 0, 1, 0) && unk_0x0C88267282FD588F(uLocal_97[1], vLocal_54, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
						{
							if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
							{
								unk_0xA1AA40A93CA0F40D(unk_0xC733212BF9066BDF(), 10,5f, 5, 0);
							}
						}
						system::settimera(0);
						iLocal_50 = 1;
					}
				}
			}
		}
	}
}

var func_178()//Position - 0x8D14
{
	return unk_0x7C65CFD05F3B9CE9(unk_0x98EC0789D9F0703B());
}

bool func_179()//Position - 0x8D24
{
	return Global_25468;
}

void func_180()//Position - 0x8D2F
{
	if (func_183())
	{
		if (iLocal_260 == 0)
		{
			iLocal_260 = unk_0xCB389937EDB1519A(vLocal_53 - Vector(100f, 60f, 80f), vLocal_53 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
		}
		while (unk_0xBE3C4023003180FC(func_92(unk_0x9EB17624F44A8DA4()), vLocal_53, 1) < 209f)
		{
			system::wait(0);
		}
	}
	if (func_13() == 0 || func_13() == 1)
	{
		if (unk_0x8801269555D2E37F(2017343592, 1862763509) != 5)
		{
			if (func_182())
			{
				unk_0xF96119FCCD4D1889(5, 2017343592, 1862763509);
			}
			else if (func_181())
			{
				unk_0xF96119FCCD4D1889(5, 2017343592, 1862763509);
			}
		}
	}
	else if (func_13() == 2)
	{
		if (unk_0x8801269555D2E37F(2017343592, 1862763509) != 5)
		{
			if (func_182())
			{
				if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()) || (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()) && unk_0x19A6176969EAC49E(unk_0x9EB17624F44A8DA4())))
				{
					unk_0xF96119FCCD4D1889(5, 2017343592, 1862763509);
				}
			}
			else if (func_181())
			{
				unk_0xF96119FCCD4D1889(5, 2017343592, 1862763509);
			}
			else if (unk_0x8801269555D2E37F(2017343592, 1862763509) != 1)
			{
				unk_0xF96119FCCD4D1889(1, 2017343592, 1862763509);
			}
		}
	}
	if (func_182())
	{
		if (iLocal_83)
		{
			if (!unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 3))
			{
				unk_0x8810DC630928B398("AC_START");
			}
			unk_0x94BD6F0436473406(0f);
			unk_0xD4BB744A696E8ABF("COUNTRYSIDE_ALTRUIST_CULT_01", 1);
			if (unk_0x50126692B8A3590A(Global_34984[9 /*31*/].f_2, 6f, Global_34984[9 /*31*/].f_5, 0))
			{
				unk_0xFB3E858D6C41D854(Global_34984[9 /*31*/].f_5, Global_34984[9 /*31*/].f_2, 0, 0f, 0);
			}
			if (unk_0x50126692B8A3590A(Global_34984[10 /*31*/].f_2, 6f, Global_34984[10 /*31*/].f_5, 0))
			{
				unk_0xFB3E858D6C41D854(Global_34984[10 /*31*/].f_5, Global_34984[10 /*31*/].f_2, 0, 0f, 0);
			}
			bLocal_84 = true;
			iLocal_83 = 0;
		}
	}
	else if (!iLocal_83)
	{
		if (unk_0x496629127CB77F7B())
		{
			unk_0x8810DC630928B398("AC_END");
		}
		unk_0x94BD6F0436473406(1f);
		unk_0xD4BB744A696E8ABF("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		if (!bLocal_84)
		{
			func_149();
		}
		iLocal_83 = 1;
	}
}

int func_181()//Position - 0x8F60
{
	if ((((((unk_0x31DBB84AFB5DFAB7(vLocal_55, vLocal_56, fLocal_57, 1) || unk_0x31DBB84AFB5DFAB7(vLocal_58, vLocal_59, fLocal_60, 1)) || unk_0x31DBB84AFB5DFAB7(vLocal_61, vLocal_62, fLocal_63, 1)) || unk_0x31DBB84AFB5DFAB7(vLocal_64, vLocal_65, fLocal_66, 1)) || unk_0x31DBB84AFB5DFAB7(vLocal_67, vLocal_68, fLocal_69, 1)) || unk_0x31DBB84AFB5DFAB7(vLocal_70, vLocal_71, fLocal_72, 1)) || unk_0x31DBB84AFB5DFAB7(vLocal_73, vLocal_74, fLocal_75, 1))
	{
		return 1;
	}
	return 0;
}

int func_182()//Position - 0x8FFD
{
	if ((((((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_55, vLocal_56, fLocal_57, 0, 1, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_58, vLocal_59, fLocal_60, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_61, vLocal_62, fLocal_63, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_64, vLocal_65, fLocal_66, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_67, vLocal_68, fLocal_69, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_70, vLocal_71, fLocal_72, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_73, vLocal_74, fLocal_75, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_183()//Position - 0x90C4
{
	if (Global_104555.f_24965.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_184()//Position - 0x90E0
{
	unk_0xF96119FCCD4D1889(255, 2017343592, 1862763509);
	if (Global_104555.f_24965.f_5 >= iLocal_96 && Global_104555.f_24965.f_5 != 1000)
	{
		if (bLocal_76)
		{
			func_1(1);
			func_9();
			func_3(0);
			iLocal_50 = 3;
		}
		else
		{
			func_185(&uLocal_109);
			Global_88235 = 0;
			Global_88236 = 0;
			Global_88237 = 0;
			func_12(0, 1);
			func_10(0, 1);
			func_2(0);
			unk_0x7FCF3574F3FBD460(1);
			unk_0x781BE21C7452AB1B(0);
			unk_0x6FC90B7B2FA9328D(0);
			func_3(0);
			unk_0x94BD6F0436473406(1f);
			unk_0x1D29C781A978C4FB(3, 1);
			unk_0x1D29C781A978C4FB(5, 1);
			unk_0x087D097B0C8C07B9();
			iLocal_83 = 0;
			func_93();
			Global_104555.f_24965.f_5 = (iLocal_96 - 1);
			unk_0x96A3D9A8A4C7AFD4();
		}
	}
	else
	{
		unk_0x3CDDC4760DBA4651();
		func_185(&uLocal_109);
		Global_88235 = 0;
		Global_88236 = 0;
		Global_88237 = 0;
		func_12(0, 1);
		func_10(0, 1);
		func_2(0);
		unk_0x7FCF3574F3FBD460(1);
		unk_0x781BE21C7452AB1B(0);
		unk_0x6FC90B7B2FA9328D(0);
		func_3(0);
		if (unk_0x34D11AB5BA7922C2(uLocal_259))
		{
			unk_0xA68F7B004463AB6F(&uLocal_259);
			func_95(0);
		}
		unk_0x94BD6F0436473406(1f);
		unk_0x1D29C781A978C4FB(3, 1);
		unk_0x1D29C781A978C4FB(5, 1);
		unk_0x087D097B0C8C07B9();
		iLocal_83 = 0;
		unk_0x96A3D9A8A4C7AFD4();
	}
}

void func_185(var uParam0)//Position - 0x920C
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0xA68F7B004463AB6F(uParam0);
		*uParam0 = 0;
	}
}

