#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	float fLocal_50 = 0f;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 16;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
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
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	vector3 vLocal_232 = { 0f, 0f, 0f };
	vector3 vLocal_233 = { 0f, 0f, 0f };
	vector3 vLocal_234 = { 0f, 0f, 0f };
	vector3 vLocal_235 = { 0f, 0f, 0f };
	vector3 vLocal_236 = { 0f, 0f, 0f };
	vector3 vLocal_237 = { 0f, 0f, 0f };
	vector3 vLocal_238 = { 0f, 0f, 0f };
	vector3 vLocal_239 = { 0f, 0f, 0f };
	vector3 vLocal_240 = { 0f, 0f, 0f };
	vector3 vLocal_241 = { 0f, 0f, 0f };
	vector3 vLocal_242 = { 0f, 0f, 0f };
	vector3 vLocal_243 = { 0f, 0f, 0f };
	vector3 vLocal_244 = { 0f, 0f, 0f };
	vector3 vLocal_245 = { 0f, 0f, 0f };
	bool bLocal_246 = 0;
	bool bLocal_247 = 0;
	bool bLocal_248 = 0;
	bool bLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	var uLocal_255[2] = { 0, 0 };
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258[2] = { 0, 0 };
	int iLocal_259[5] = { 0, 0, 0, 0, 0 };
	int iLocal_260[3] = { 0, 0, 0 };
	int iLocal_261[2] = { 0, 0 };
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	var uLocal_270 = 8;
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
	var uLocal_417 = 1;
	struct<2> Local_418 = { 0, 5 } ;
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
	var uLocal_434 = 5;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	var uVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iLocal_0 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0,001f;
	iLocal_19 = -1;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0,0375f;
	fLocal_28 = 0,17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_47 = unk_0x5354F72E0D8D7E53();
	iLocal_48 = unk_0x526A9A6B1B39C5F0();
	fLocal_50 = -1f;
	iLocal_218 = 1;
	iLocal_227 = -1;
	iLocal_228 = -1;
	vLocal_236 = { 370,2576f, -1597,488f, 35,94954f };
	vLocal_237 = { 824,992f, -1289,267f, 27,24564f };
	vLocal_238 = { 450,1889f, -981,6754f, 42,69174f };
	vLocal_239 = { -1088,37f, -842,2911f, 30,27554f };
	vLocal_240 = { 608,9076f, 0,806411f, 100,2497f };
	vLocal_241 = { -562,0159f, -130,8113f, 37,4369f };
	vLocal_242 = { 1855,237f, 3683,236f, 33,29165f };
	vLocal_243 = { -443,5063f, 6016,231f, 30,71787f };
	vLocal_244 = { -1034,6f, 4918,6f, 205,9f };
	iVar0 = 0;
	iVar2 = 0;
	vLocal_232 = { ScriptParam_418.f_1[0 /*3*/] };
	Var1 = joaat("g_m_y_mexgoon_02");
	Var1.f_1 = joaat("hc_gunman");
	Var1.f_2 = joaat("mp_m_shopkeep_01");
	Var1.f_3 = joaat("a_f_y_soucent_01");
	Var1.f_4 = joaat("a_m_m_soucent_01");
	Var1.f_5 = joaat("s_m_y_cop_01");
	Var1.f_6 = joaat("police3");
	if (unk_0x7D9C4B359376D38A(11))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[0]))
		{
			if (unk_0xC816B63289F7A279(iLocal_258[0]))
			{
				unk_0x88235B448509228B(iLocal_258[0]);
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[1]))
		{
			if (unk_0xC816B63289F7A279(iLocal_258[1]))
			{
				unk_0x88235B448509228B(iLocal_258[1]);
			}
		}
		func_239(Var1, &iLocal_258, bVar4);
	}
	func_238(&uLocal_270, 3);
	if (func_207(vLocal_232, -1, 0, 0, 0))
	{
		func_204(-1);
	}
	else
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	while (iVar0 != 7)
	{
		iVar8 = 0;
		func_201(&uLocal_270);
		if (!unk_0x42F1FE4C7EC5F51E() && !func_200())
		{
			iVar8 = 0;
			iVar0 = 7;
			func_239(Var1, &iLocal_258, bVar4);
		}
		if (!func_200())
		{
			if (func_199() || func_198(7))
			{
				iVar8 = 0;
				iVar0 = 7;
				func_239(Var1, &iLocal_258, bVar4);
			}
		}
		unk_0x48D75120C879E65E("RE_GD", 0);
		if (func_197())
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_258[0]))
			{
				unk_0x68433819717660CF(&(iLocal_258[0]));
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_258[1]))
			{
				unk_0x68433819717660CF(&(iLocal_258[1]));
			}
			while (!func_196())
			{
				system::wait(0);
			}
			func_192(9, 0);
			func_183(-1, 0);
			func_180();
			iVar8 = 0;
			iVar0 = 7;
			func_239(Var1, &iLocal_258, bVar4);
		}
		if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0) && !unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
		{
			if (unk_0x25D10EDC93C33B77(func_179(unk_0x9EB17624F44A8DA4()) - Vector(10f, 20f, 20f), func_179(unk_0x9EB17624F44A8DA4()) + Vector(10f, 20f, 20f)) || unk_0x8D44FCFF87C54F50(func_179(unk_0x9EB17624F44A8DA4()) - Vector(10f, 20f, 20f), func_179(unk_0x9EB17624F44A8DA4()) + Vector(10f, 20f, 20f)))
			{
				if ((((!unk_0x3AB6A1A9084FB0A4(iLocal_258[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_258[1])) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xC733212BF9066BDF(), 0)) && unk_0xA8D0477084E86A92(iLocal_258[0], unk_0xC733212BF9066BDF(), 0)) && unk_0xA8D0477084E86A92(iLocal_258[1], unk_0xC733212BF9066BDF(), 0))
				{
					if (unk_0x90D5DFB054818BA7(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) < 0,2f)
					{
						if (iLocal_228 == -1)
						{
							iLocal_228 = unk_0x53C562FD2B9E3AB0();
						}
					}
					else
					{
						iLocal_228 = -1;
					}
					if (iLocal_228 != -1 && unk_0x53C562FD2B9E3AB0() > iLocal_228 + 1000)
					{
						if (!func_178())
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_LOSE", 4, 0, 0, 0);
						}
						if (iLocal_228 != -1 && unk_0x53C562FD2B9E3AB0() > iLocal_228 + 10000)
						{
							func_167();
							system::wait(0);
							func_169(&uLocal_53, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[0]))
							{
								unk_0x6931076730A4AC5D(&iLocal_265);
								unk_0x16416C5B54FDBCBB(0, 0, 0);
								unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
								unk_0x1B16DD5C115FE009(iLocal_265);
								unk_0xAB30B1CF01A198C1(iLocal_258[0], iLocal_265);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_265);
								unk_0xE9B3D12A64CC7C1A(iLocal_258[0], true);
							}
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[1]))
							{
								unk_0x6931076730A4AC5D(&iLocal_265);
								unk_0x16416C5B54FDBCBB(0, 500, 0);
								unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
								unk_0x1B16DD5C115FE009(iLocal_265);
								unk_0xAB30B1CF01A198C1(iLocal_258[1], iLocal_265);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_265);
								unk_0xE9B3D12A64CC7C1A(iLocal_258[1], true);
							}
							iVar8 = 0;
							iVar0 = 7;
							func_239(Var1, &iLocal_258, bVar4);
						}
					}
				}
			}
		}
		if (iVar2 > 1)
		{
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
			{
				unk_0xF96119FCCD4D1889(255, iLocal_266, -1033021910);
				unk_0xF96119FCCD4D1889(255, iLocal_266, 1166638144);
				unk_0xF96119FCCD4D1889(255, -1033021910, iLocal_266);
				unk_0xF96119FCCD4D1889(255, 1166638144, iLocal_266);
			}
			else
			{
				unk_0xF96119FCCD4D1889(1, iLocal_266, -1033021910);
				unk_0xF96119FCCD4D1889(1, iLocal_266, 1166638144);
				unk_0xF96119FCCD4D1889(1, -1033021910, iLocal_266);
				unk_0xF96119FCCD4D1889(1, 1166638144, iLocal_266);
			}
		}
		if ((iVar2 > 1 && iVar2 < 7) && !iLocal_253)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_257))
			{
				if (unk_0xEBE499597C718EB8(iLocal_257, unk_0xFC1458A37D98B502(), 1))
				{
					func_167();
					system::wait(0);
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[0]))
					{
						unk_0xD68E88A8E0BE8697(iLocal_258[0], unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[1]))
					{
						unk_0xD68E88A8E0BE8697(iLocal_258[1], unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
					}
					iVar8 = 0;
					iVar0 = 7;
					func_239(Var1, &iLocal_258, bVar4);
				}
			}
		}
		if ((iVar2 > 7 && iVar2 < 18) && !iLocal_253)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_258[0]) && unk_0x6ADD12BF4D6D2587(iLocal_258[1]))
			{
				if (unk_0x3AB6A1A9084FB0A4(iLocal_258[1]) || !unk_0x21B6FFFD04C9FF3A(iLocal_258[0], unk_0xFC1458A37D98B502(), 80f, 80f, 80f, 0, 1, 0))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[0]))
					{
						unk_0x6931076730A4AC5D(&iLocal_265);
						unk_0x16416C5B54FDBCBB(0, 0, 0);
						unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iLocal_265);
						unk_0xAB30B1CF01A198C1(iLocal_258[0], iLocal_265);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_265);
						unk_0xE9B3D12A64CC7C1A(iLocal_258[0], true);
						func_167();
						system::wait(0);
						func_169(&uLocal_53, "REGETAU", "REAWA_FKDB", 4, 0, 0, 0);
					}
					iVar8 = 0;
					iVar0 = 7;
					func_239(Var1, &iLocal_258, bVar4);
				}
				if (unk_0x3AB6A1A9084FB0A4(iLocal_258[0]) || !unk_0x21B6FFFD04C9FF3A(iLocal_258[1], unk_0xFC1458A37D98B502(), 80f, 80f, 80f, 0, 1, 0))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[1]))
					{
						unk_0x6931076730A4AC5D(&iLocal_265);
						unk_0x16416C5B54FDBCBB(0, 0, 0);
						unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iLocal_265);
						unk_0xAB30B1CF01A198C1(iLocal_258[1], iLocal_265);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_265);
						unk_0xE9B3D12A64CC7C1A(iLocal_258[1], true);
						func_167();
						system::wait(0);
						func_169(&uLocal_53, "REGETAU", "REAWA_DEAD1", 4, 0, 0, 0);
					}
					iVar8 = 0;
					iVar0 = 7;
					func_239(Var1, &iLocal_258, bVar4);
				}
			}
		}
		if (func_166(&iLocal_258, unk_0xC733212BF9066BDF(), 180f))
		{
			if (unk_0xEBE499597C718EB8(iLocal_258[0], unk_0xFC1458A37D98B502(), 1) || unk_0xEBE499597C718EB8(iLocal_258[0], unk_0xFC1458A37D98B502(), 1))
			{
				iLocal_253 = 1;
			}
			if (iLocal_253)
			{
				if (!bLocal_248)
				{
					func_165();
				}
				if (!bLocal_249)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_257))
					{
						unk_0x6931076730A4AC5D(&iLocal_265);
						if (unk_0xA5F6598E13F98E08(iLocal_257, "random@getawaydriver", "idle_a", 3) || unk_0xA5F6598E13F98E08(iLocal_257, "random@getawaydriver", "idle_2_hands_up", 3))
						{
							unk_0x12C9D41D52A560D6(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 10000, 2052, 4);
						unk_0x4C7AF3B2BE8C3193(0, unk_0xFC1458A37D98B502(), -1, 5f, 3f, 1073741824, 0);
						unk_0x12C9D41D52A560D6(0, "random@getawaydriver", "gesture_nod_yes_soft", 8f, -8f, -1, 48, 0, 0, 0, 0);
						unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 3000);
						unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
						unk_0x1B16DD5C115FE009(iLocal_265);
						unk_0xAB30B1CF01A198C1(iLocal_257, iLocal_265);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_265);
						unk_0xE9B3D12A64CC7C1A(iLocal_257, true);
						bLocal_249 = true;
					}
				}
			}
			else
			{
				iVar8 = 0;
				iVar0 = 7;
				func_239(Var1, &iLocal_258, bVar4);
			}
			if (bLocal_248)
			{
				unk_0x94BD6F0436473406(1f);
				unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_260[0]))
				{
					if (!unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
					{
						if (unk_0x21B6FFFD04C9FF3A(iLocal_260[0], unk_0xFC1458A37D98B502(), 4f, 4f, 4f, 0, 1, 0))
						{
							if (!func_178())
							{
								unk_0x60C06BFD037BB7CF(iLocal_260[0], unk_0xFC1458A37D98B502(), 1000, 2052, 4);
								func_169(&uLocal_53, "REGETAU", "REAWA_THX", 4, 0, 0, 0);
								system::settimerb(0);
							}
							else
							{
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_260[0]))
								{
									unk_0x771A86309E0CA47B(iLocal_260[0], false);
								}
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_260[1]))
								{
									unk_0x771A86309E0CA47B(iLocal_260[1], false);
								}
								if (system::timerb() > 3000)
								{
									while (!func_196())
									{
										system::wait(0);
									}
									func_192(9, 0);
									func_164(5);
									func_183(-1, 0);
									func_180();
									iVar8 = 0;
									iVar0 = 7;
									func_239(Var1, &iLocal_258, bVar4);
								}
							}
						}
						else if (!unk_0x21B6FFFD04C9FF3A(iLocal_260[0], unk_0xFC1458A37D98B502(), 120f, 120f, 120f, 0, 1, 0))
						{
							iVar8 = 0;
							iVar0 = 7;
							func_239(Var1, &iLocal_258, bVar4);
						}
					}
					else
					{
						unk_0xB8E08BD5B184DF4E(iLocal_260[0]);
						func_167();
						system::wait(0);
						iVar8 = 0;
						iVar0 = 7;
						func_239(Var1, &iLocal_258, bVar4);
					}
				}
				else if (unk_0x3AB6A1A9084FB0A4(iLocal_257))
				{
					iVar8 = 0;
					iVar0 = 7;
					func_239(Var1, &iLocal_258, bVar4);
				}
			}
			if (bLocal_249)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_257))
				{
					if (unk_0x21B6FFFD04C9FF3A(iLocal_257, unk_0xFC1458A37D98B502(), 4f, 4f, 4f, 0, 1, 0))
					{
						if (!func_178())
						{
							unk_0x60C06BFD037BB7CF(iLocal_257, unk_0xFC1458A37D98B502(), 3000, 2048, 2);
							func_169(&uLocal_53, "REGETAU", "REAWA_THANKS", 4, 0, 0, 0);
						}
						else
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_257))
							{
								unk_0x5C5D33A1B2711D21(iLocal_257, true);
							}
							while (func_178())
							{
								system::wait(0);
							}
							while (!func_196())
							{
								system::wait(0);
							}
							unk_0xC83821A7ED01F9E9(1);
							func_192(9, 0);
							func_164(5);
							func_183(-1, 0);
							func_180();
							iVar8 = 0;
							iVar0 = 7;
							func_239(Var1, &iLocal_258, bVar4);
						}
					}
					else if (!unk_0x21B6FFFD04C9FF3A(iLocal_257, unk_0xFC1458A37D98B502(), 120f, 120f, 120f, 0, 1, 0))
					{
						iVar8 = 0;
						iVar0 = 7;
						func_239(Var1, &iLocal_258, bVar4);
					}
				}
				else if (unk_0x3AB6A1A9084FB0A4(iLocal_260[0]))
				{
					iVar8 = 0;
					iVar0 = 7;
					func_239(Var1, &iLocal_258, bVar4);
				}
			}
		}
		switch (iVar0)
		{
			case 0:
				if (func_152())
				{
					iVar8 = 0;
					iVar0 = 7;
					func_239(Var1, &iLocal_258, bVar4);
				}
				if (func_140(1, Var1))
				{
					iVar8 = 0;
					iVar0 = 2;
				}
				break;
			
			case 2:
				if (func_128(3))
				{
					iLocal_269 = 1;
					func_127(1);
					iVar7 = unk_0x53C562FD2B9E3AB0();
					iVar0 = 4;
				}
				else
				{
					iVar0 = 6;
				}
				iVar8 = 0;
				break;
			
			case 4:
				iVar8 = 0;
				unk_0x872F1C1F8587CCC7(&uVar3, 4);
				unk_0x872F1C1F8587CCC7(&uVar3, 1);
				unk_0x872F1C1F8587CCC7(&uVar3, 5);
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
					{
						if (func_126())
						{
							if (unk_0xB8DE76287EDC4957(unk_0xC733212BF9066BDF(), 0))
							{
								if ((unk_0x8EE3A848975DDF21(unk_0xC733212BF9066BDF(), 0, 0) && unk_0x8EE3A848975DDF21(unk_0xC733212BF9066BDF(), 2, 0)) && unk_0x8EE3A848975DDF21(unk_0xC733212BF9066BDF(), 1, 0))
								{
									iVar0 = 5;
								}
							}
						}
					}
				}
				else
				{
					iVar0 = 6;
				}
				iVar0 = 5;
				unk_0x86860A70B204843E(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), &uVar5, &uVar6, 1, 1077936128, 0);
				if (func_125(iVar7, 20000))
				{
					iVar0 = 6;
				}
				if (iVar0 != 5)
				{
				}
				break;
			
			case 5:
				if (iVar2 > 1)
				{
					if (!func_200())
					{
						if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
						{
							iVar8 = 0;
							iVar0 = 6;
							break;
						}
						if (!iLocal_252)
						{
							if (unk_0x5574AE3F3C1123AD(unk_0xFC1458A37D98B502(), Vector(28,4601f, -1565,293f, 61,5891f) - Vector(30f, 30f, 30f), Vector(28,4601f, -1565,293f, 61,5891f) + Vector(30f, 30f, 30f), 0, 1))
							{
								iVar9 = 0;
								while (iVar9 < iLocal_259)
								{
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_259[iVar9]))
									{
										unk_0xD68E88A8E0BE8697(iLocal_259[iVar9], unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
										unk_0xE9B3D12A64CC7C1A(iLocal_259[iVar9], true);
									}
									iVar9++;
								}
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_257))
								{
									unk_0xD68E88A8E0BE8697(iLocal_257, unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
									unk_0xE9B3D12A64CC7C1A(iLocal_257, true);
								}
								iLocal_252 = 1;
							}
						}
					}
				}
				else if (func_152())
				{
					iVar8 = 0;
					iVar0 = 7;
					func_239(Var1, &iLocal_258, bVar4);
				}
				if (iVar0 != 6)
				{
					if (func_1(&iVar2, Var1, &iLocal_258, &iVar8, &bVar4))
					{
						iVar0 = 6;
						break;
					}
				}
				break;
			
			case 6:
				iVar8 = 0;
				iVar0 = 7;
				func_239(Var1, &iLocal_258, bVar4);
				break;
				break;
			
			case 7:
				iVar8 = 0;
				break;
		}
		if (iVar0 != 7)
		{
			system::wait(iVar8);
		}
	}
	func_239(Var1, &iLocal_258, bVar4);
}

int func_1(int iParam0, struct<5> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, bool bParam8)//Position - 0xE0E
{
	int iVar0;
	vector3 vVar1[2];
	float fVar2[2];
	vector3 vVar3;
	float fVar4;
	vector3 vVar5[5];
	float fVar6;
	vector3 vVar7[5];
	int iVar8;
	vector3 vVar9;
	int iVar10[3];
	vector3 vVar11;
	vector3 vVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	vVar5[0 /*3*/] = { -56,7157f, -1317,766f, 27,9845f };
	vVar5[1 /*3*/] = { 457,5345f, -813,3361f, 26,511f };
	vVar5[2 /*3*/] = { 884,047f, -2239,43f, 29,4387f };
	vVar5[3 /*3*/] = { -1339,328f, -762,4225f, 19,314f };
	vVar5[4 /*3*/] = { -461,6898f, 283,665f, 82,2492f };
	vVar7[0 /*3*/] = { -45,2654f, -1290,126f, 28,1977f };
	vVar7[1 /*3*/] = { 470,193f, -731,1867f, 26,412f };
	vVar7[2 /*3*/] = { 889,9938f, -2177,638f, 29,5195f };
	vVar7[3 /*3*/] = { -1334,826f, -792,1527f, 18,8175f };
	vVar7[4 /*3*/] = { -424,5901f, 288,3558f, 82,2293f };
	switch (*iParam0)
	{
		case 0:
			if (func_124(vLocal_232, 300f, 1))
			{
				*iParam0 = 1;
			}
			break;
		
		case 1:
			*iParam7 = 0;
			func_115(39, 1);
			func_115(40, 1);
			func_115(41, 1);
			func_115(42, 1);
			func_115(43, 1);
			func_115(44, 1);
			if (func_114() == 0)
			{
				func_113(&uLocal_53, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
			}
			else if (func_114() == 1)
			{
				func_113(&uLocal_53, 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 0, 1);
			}
			else if (func_114() == 2)
			{
				func_113(&uLocal_53, 0, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
			}
			if (system::vdist(vLocal_232, 933,83f, 3640,22f, 32,36f) < 20f)
			{
				vVar1[0 /*3*/] = { 943,1853f, 3647,218f, 31,3603f };
				fVar2[0] = 58,2967f;
				vVar1[1 /*3*/] = { 941,3207f, 3650,301f, 31,3111f };
				fVar2[1] = 92,7793f;
				vVar3 = { 939,2422f, 3649,755f, 31,3536f };
				fVar4 = 260,4475f;
			}
			else if (system::vdist(vLocal_232, 57,86f, -1562,4f, 29,47f) < 20f)
			{
				vVar1[0 /*3*/] = { 66,0644f, -1564,218f, 28,4602f };
				fVar2[0] = 198,4093f;
				vVar1[1 /*3*/] = { 63,5055f, -1568,178f, 28,4602f };
				fVar2[1] = 254,133f;
				vVar3 = { 68,4259f, -1569,067f, 28,6027f };
				fVar4 = 64,1114f;
			}
			iLocal_231 = unk_0x7C65CFD05F3B9CE9(unk_0x9EB17624F44A8DA4());
			unk_0x4C15495E88D71C61(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), false, 1);
			unk_0xCB389937EDB1519A(vLocal_232 - Vector(50f, 50f, 50f), vLocal_232 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
			unk_0x8D3373CFE9542320(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), false, 0);
			unk_0xBF98CCF1EA4B13E9(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), false, 1);
			unk_0x6FF834D85E2DD4C6(joaat("picador"));
			unk_0x6FF834D85E2DD4C6(joaat("stanier"));
			unk_0x6FF834D85E2DD4C6(joaat("patriot"));
			while ((!unk_0x9A0B2ED5055D3F0B(joaat("picador")) || !unk_0x9A0B2ED5055D3F0B(joaat("stanier"))) || !unk_0x9A0B2ED5055D3F0B(joaat("patriot")))
			{
				system::wait(0);
			}
			iVar10[0] = unk_0xEA60F3B426BB095B(joaat("picador"), 59,5209f, -1547,228f, 28,4602f, 49,1762f, true, true, false);
			iVar10[1] = unk_0xEA60F3B426BB095B(joaat("stanier"), 33,3296f, -1577,537f, 28,2826f, 51,8183f, true, true, false);
			iVar10[2] = unk_0xEA60F3B426BB095B(joaat("patriot"), 48,8282f, -1582,706f, 28,4603f, 226,8345f, true, true, false);
			unk_0xACE486395AA1867D(iVar10[0], 1084227584);
			unk_0xACE486395AA1867D(iVar10[1], 1084227584);
			unk_0xACE486395AA1867D(iVar10[2], 1084227584);
			if (iLocal_229 == 0)
			{
			}
			unk_0x4DE114E3C7F8B7C2("reCriminals", &iLocal_266);
			unk_0x4DE114E3C7F8B7C2("reShopKeep", &iLocal_267);
			unk_0x4DE114E3C7F8B7C2("reCops", &iLocal_268);
			unk_0xF96119FCCD4D1889(5, iLocal_266, -1533126372);
			unk_0xF96119FCCD4D1889(5, iLocal_268, iLocal_266);
			unk_0xF96119FCCD4D1889(5, -1533126372, iLocal_266);
			unk_0xF96119FCCD4D1889(1, -1533126372, iLocal_268);
			unk_0xF96119FCCD4D1889(1, iLocal_268, -1533126372);
			(*uParam6)[0] = unk_0xAC992EFAD62C33BF(22, Param1, vVar1[0 /*3*/], fVar2[0], 1, true);
			unk_0x771A86309E0CA47B((*uParam6)[0], true);
			unk_0x14776E43F90DD454(Param1);
			unk_0xCE93FCB8A8D8DF0B((*uParam6)[0], iLocal_266);
			unk_0x9E058151726E58DE((*uParam6)[0], joaat("weapon_appistol"), -1, true, true);
			unk_0x6D624C6A284D7D07((*uParam6)[0], unk_0x63A6486593EC7EC3(800, 2000));
			unk_0xAE01EF4BC84AFE7C((*uParam6)[0], 206, true);
			unk_0xE17958D3FD0F9EE9((*uParam6)[0], 2, false);
			unk_0xE17958D3FD0F9EE9((*uParam6)[0], 1024, true);
			unk_0xE17958D3FD0F9EE9((*uParam6)[0], 65536, true);
			unk_0x03924C68EFCBC511((*uParam6)[0], 9, 1, 0, 0);
			func_113(&uLocal_53, 2, (*uParam6)[0], "REGETRobber2", 0, 1);
			(*uParam6)[1] = unk_0xAC992EFAD62C33BF(22, Param1.f_1, vVar1[1 /*3*/], fVar2[1], 1, true);
			unk_0x771A86309E0CA47B((*uParam6)[1], true);
			unk_0x14776E43F90DD454(Param1.f_1);
			unk_0xCE93FCB8A8D8DF0B((*uParam6)[1], iLocal_266);
			unk_0x9E058151726E58DE((*uParam6)[1], joaat("weapon_pistol"), -1, true, true);
			unk_0x6D624C6A284D7D07((*uParam6)[1], unk_0x63A6486593EC7EC3(800, 2000));
			unk_0xAE01EF4BC84AFE7C((*uParam6)[1], 206, true);
			unk_0xE17958D3FD0F9EE9((*uParam6)[1], 2, false);
			unk_0xE17958D3FD0F9EE9((*uParam6)[1], 1024, true);
			unk_0xE17958D3FD0F9EE9((*uParam6)[1], 65536, true);
			unk_0x03924C68EFCBC511((*uParam6)[1], 0, 5, 0, 0);
			unk_0x03924C68EFCBC511((*uParam6)[1], 1, 1, 0, 0);
			unk_0x03924C68EFCBC511((*uParam6)[1], 2, 1, 0, 0);
			unk_0x03924C68EFCBC511((*uParam6)[1], 3, 6, 0, 0);
			unk_0x03924C68EFCBC511((*uParam6)[1], 4, 6, 2, 0);
			unk_0x03924C68EFCBC511((*uParam6)[1], 6, 1, 0, 0);
			unk_0x03924C68EFCBC511((*uParam6)[1], 8, 0, 0, 0);
			unk_0x03924C68EFCBC511((*uParam6)[1], 9, 0, 0, 0);
			unk_0x03924C68EFCBC511((*uParam6)[1], 10, 1, 0, 0);
			unk_0x350CEE66BDF90273((*uParam6)[1], "PACKIE_AI_Norm_Part1_Booth");
			func_113(&uLocal_53, 1, (*uParam6)[1], "PACKIE", 0, 1);
			iLocal_257 = unk_0xAC992EFAD62C33BF(4, Param1.f_2, vVar3, fVar4, 1, true);
			unk_0x14776E43F90DD454(Param1.f_2);
			unk_0x771A86309E0CA47B(iLocal_257, true);
			unk_0xCE93FCB8A8D8DF0B(iLocal_257, iLocal_267);
			unk_0x350CEE66BDF90273(iLocal_257, "A_M_Y_Business_01_CHINESE_MINI_01");
			func_113(&uLocal_53, 3, iLocal_257, "StoreOwner", 0, 1);
			iLocal_259[0] = unk_0xAC992EFAD62C33BF(5, Param1.f_3, 62,8929f, -1575,52f, 28,6027f, 326,1814f, 1, true);
			unk_0x14776E43F90DD454(Param1.f_3);
			unk_0xAE6EBBBBD8B9FB30(iLocal_259[0], 17, true);
			unk_0xF21E6EBE8EFDCC28(iLocal_259[0], -1);
			iLocal_259[2] = unk_0xAC992EFAD62C33BF(5, Param1.f_3, 61,6538f, -1555,256f, 28,4601f, 206,7004f, 1, true);
			unk_0x14776E43F90DD454(Param1.f_3);
			unk_0xAE6EBBBBD8B9FB30(iLocal_259[2], 17, true);
			unk_0x2EA90674750EA01E(iLocal_259[2], "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 0, 0);
			iLocal_259[3] = unk_0xAC992EFAD62C33BF(4, Param1.f_4, 75,9343f, -1556,306f, 28,6028f, 147,2908f, 1, true);
			unk_0x14776E43F90DD454(Param1.f_4);
			unk_0xAE6EBBBBD8B9FB30(iLocal_259[3], 17, true);
			*iParam0 = 2;
			break;
		
		case 2:
			if (((((!unk_0x191BE1BC8F26F3C1(iLocal_257, 0) && !unk_0x191BE1BC8F26F3C1(iLocal_259[0], 0)) && !unk_0x191BE1BC8F26F3C1(iLocal_259[2], 0)) && !unk_0x191BE1BC8F26F3C1(iLocal_259[3], 0)) && !unk_0x191BE1BC8F26F3C1((*uParam6)[0], 0)) && !unk_0x191BE1BC8F26F3C1((*uParam6)[1], 0))
			{
				if (((((unk_0xF0D051E82D0DB8C2(iLocal_257) && unk_0xF0D051E82D0DB8C2(iLocal_259[0])) && unk_0xF0D051E82D0DB8C2(iLocal_259[2])) && unk_0xF0D051E82D0DB8C2(iLocal_259[3])) && unk_0xF0D051E82D0DB8C2((*uParam6)[0])) && unk_0xF0D051E82D0DB8C2((*uParam6)[1]))
				{
					unk_0x6450931B826B49D9("random@getawaydriver@thugs");
					unk_0x6450931B826B49D9("combat@gestures@pistol@halt");
					unk_0x6450931B826B49D9("misslamar1ig_20");
					unk_0x6450931B826B49D9("random@getawaydriver");
					while (((!unk_0x3A801AA34DD821BE("random@getawaydriver@thugs") || !unk_0x3A801AA34DD821BE("combat@gestures@pistol@halt")) || !unk_0x3A801AA34DD821BE("misslamar1ig_20")) || !unk_0x3A801AA34DD821BE("random@getawaydriver"))
					{
						system::wait(0);
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_257))
					{
						unk_0x2955A31540EE0E4F(iLocal_257, -1, 0, -1, 0);
						if (!unk_0x3AB6A1A9084FB0A4((*uParam6)[0]))
						{
							unk_0x12C9D41D52A560D6((*uParam6)[0], "random@getawaydriver@thugs", "base_a", 4f, -2f, -1, 1, 0, 0, 0, 0);
							unk_0x60C06BFD037BB7CF((*uParam6)[0], unk_0xFC1458A37D98B502(), -1, 2052, 4);
						}
						if (!unk_0x3AB6A1A9084FB0A4((*uParam6)[1]))
						{
							unk_0x12C9D41D52A560D6((*uParam6)[1], "random@getawaydriver@thugs", "base_b", 4f, -2f, -1, 1, 0, 0, 0, 0);
							unk_0x60C06BFD037BB7CF((*uParam6)[1], unk_0xFC1458A37D98B502(), -1, 2052, 4);
						}
					}
					system::settimera(0);
					*iParam0 = 3;
				}
			}
			break;
		
		case 3:
			if (system::timera() > 0)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_259[0]))
				{
					func_111(iLocal_259[0], "GENERIC_SHOCKED_HIGH", 24);
				}
			}
			if (system::timera() > 1000)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_259[2]))
				{
					func_111(iLocal_259[2], "GENERIC_FRIGHTENED_HIGH", 24);
				}
			}
			if (system::timera() > 2000)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_259[3]))
				{
					func_111(iLocal_259[3], "GENERIC_FRIGHTENED_HIGH", 24);
					system::settimera(0);
				}
			}
			if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 81,71976f, -1530,834f, 28,17651f, 26,78526f, -1595,693f, 58,29443f, 32,875f, 0, true, 0))
			{
				if (!iLocal_252)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_259[0]))
					{
						unk_0xFC5999E8B820470E(iLocal_259[0], vLocal_232, 200f, -1, 0, 0);
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_259[2]))
					{
						unk_0x6931076730A4AC5D(&iLocal_265);
						unk_0xB6A7F1EF9625AE96(0, 250);
						unk_0xFC5999E8B820470E(0, vLocal_232, 200f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iLocal_265);
						unk_0xAB30B1CF01A198C1(iLocal_259[2], iLocal_265);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_265);
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_259[3]))
					{
						unk_0x6931076730A4AC5D(&iLocal_265);
						unk_0xB6A7F1EF9625AE96(0, 500);
						unk_0xFC5999E8B820470E(0, vLocal_232, 200f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iLocal_265);
						unk_0xAB30B1CF01A198C1(iLocal_259[3], iLocal_265);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_265);
					}
					iLocal_252 = 1;
				}
			}
			if (func_72(uParam6, unk_0xC733212BF9066BDF()))
			{
				*iParam0 = 4;
			}
			if (func_71())
			{
				*iParam0 = 18;
			}
			if (unk_0x25D10EDC93C33B77(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f)) || unk_0x8D44FCFF87C54F50(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f)))
			{
				if (!unk_0x3AB6A1A9084FB0A4((*uParam6)[0]) && !unk_0x3AB6A1A9084FB0A4((*uParam6)[1]))
				{
					unk_0xD68E88A8E0BE8697((*uParam6)[0], unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
					unk_0xD68E88A8E0BE8697((*uParam6)[1], unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
					func_167();
					system::wait(0);
					func_169(&uLocal_53, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 4:
			if (!func_178())
			{
				if ((!unk_0x3AB6A1A9084FB0A4((*uParam6)[0]) && !unk_0x3AB6A1A9084FB0A4((*uParam6)[1])) && !unk_0x3AB6A1A9084FB0A4(iLocal_257))
				{
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_257))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_257))
					{
						func_169(&uLocal_53, "REGETAU", "REAWA_DOWN", 4, 0, 0, 0);
						unk_0x60C06BFD037BB7CF((*uParam6)[0], unk_0xFC1458A37D98B502(), 10000, 2052, 4);
						unk_0x6931076730A4AC5D(&iLocal_265);
						unk_0x12C9D41D52A560D6(0, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, -1, 0, 0,25f, 0, 0, 0);
						unk_0x12C9D41D52A560D6(0, "random@getawaydriver", "idle_a", 4f, -4f, -1, 1, 0, 0, 0, 0);
						unk_0x1B16DD5C115FE009(iLocal_265);
						unk_0xAB30B1CF01A198C1(iLocal_257, iLocal_265);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_265);
					}
					*iParam0 = 5;
				}
			}
			if (func_71())
			{
				*iParam0 = 18;
			}
			if (((unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0) || unk_0x9CDE960577DADF0F(unk_0xFC1458A37D98B502())) || unk_0x25D10EDC93C33B77(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f))) || unk_0x8D44FCFF87C54F50(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f)))
			{
				if (!unk_0x3AB6A1A9084FB0A4((*uParam6)[0]) && !unk_0x3AB6A1A9084FB0A4((*uParam6)[1]))
				{
					unk_0xD68E88A8E0BE8697((*uParam6)[0], unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
					unk_0xD68E88A8E0BE8697((*uParam6)[1], unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
					func_167();
					system::wait(0);
					func_169(&uLocal_53, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 5:
			if (unk_0x3AB6A1A9084FB0A4(iLocal_257))
			{
				if (!unk_0x3AB6A1A9084FB0A4((*uParam6)[0]) && !unk_0x3AB6A1A9084FB0A4((*uParam6)[1]))
				{
					unk_0xAC838A977FB6E6BC((*uParam6)[0], unk_0xFC1458A37D98B502(), -1);
					unk_0xAC838A977FB6E6BC((*uParam6)[1], unk_0xFC1458A37D98B502(), -1);
				}
			}
			else if (unk_0x78F50AA8F955BEFC(iLocal_257, 242628503) != 1 && unk_0x78F50AA8F955BEFC(iLocal_257, 242628503) != 0)
			{
				unk_0x6931076730A4AC5D(&iLocal_265);
				unk_0x12C9D41D52A560D6(0, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, -1, 0, 0,25f, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, "random@getawaydriver", "idle_a", 4f, -4f, -1, 1, 0, 0, 0, 0);
				unk_0x1B16DD5C115FE009(iLocal_265);
				unk_0xAB30B1CF01A198C1(iLocal_257, iLocal_265);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_265);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_258[1]))
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && !unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
				{
					if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
					{
						if (unk_0x90D5DFB054818BA7(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) < 0,1f)
						{
							if (func_126() && unk_0x5E0BEAAD15B888F3(unk_0xC733212BF9066BDF()))
							{
								unk_0x25468B15C0A526A9(unk_0x82FF3DFBC3965CC0(unk_0xC733212BF9066BDF()), 3);
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_257))
								{
									vLocal_245 = { unk_0xB3328BA8976B416C(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0) };
									vVar11 = { unk_0x3F90543934DCD7E6(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), -1,5f, -1,5f, 0f) };
									vVar12 = { unk_0x3F90543934DCD7E6(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 1,5f, 0f, 0f) };
									unk_0x6931076730A4AC5D(&iLocal_265);
									unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 10000, 2096, 4);
									unk_0x9627C22EF3C3F4D6(0, iLocal_257, 1500, 0);
									unk_0x28D62AF360997F32(0, vVar11, iLocal_257, 3f, false, 1056964608, 1082130432, true, 0, 0, -957453492, 20000);
									unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 10000, 2096, 4);
									unk_0x1B16DD5C115FE009(iLocal_265);
									unk_0xAB30B1CF01A198C1(iLocal_258[0], iLocal_265);
									unk_0xFAA3EF7FF92E1F9E(&iLocal_265);
									unk_0x6931076730A4AC5D(&iLocal_265);
									unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 10000, 2096, 4);
									unk_0x9627C22EF3C3F4D6(0, iLocal_257, 2500, 0);
									unk_0x28D62AF360997F32(0, vVar12, iLocal_257, 3f, false, 1056964608, 1082130432, true, 0, 0, -957453492, 20000);
									unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 10000, 2096, 4);
									unk_0x1B16DD5C115FE009(iLocal_265);
									unk_0xAB30B1CF01A198C1(iLocal_258[1], iLocal_265);
									unk_0xFAA3EF7FF92E1F9E(&iLocal_265);
								}
								else
								{
									unk_0x57FB41CABA25835C(iLocal_258[0], func_70());
									unk_0x57FB41CABA25835C(iLocal_258[1], func_70());
									unk_0xF6A83791895D5AA1(iLocal_258[0], 1);
									unk_0xF6A83791895D5AA1(iLocal_258[1], 0);
									if (unk_0x82FF3DFBC3965CC0(unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502())) == joaat("bus"))
									{
										if (!unk_0x8EE3A848975DDF21(unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()), 1, 0))
										{
											iVar13 = unk_0x317536BCEA8FA6B0(unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()), 1, 0);
											if (!unk_0x9761C10D57B68069(iVar13))
											{
												unk_0xDD29FF4BAB8AFF9C(iVar13, true, 0);
												unk_0x68433819717660CF(&iVar13);
											}
										}
										if (!unk_0x8EE3A848975DDF21(unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()), 0, 0))
										{
											iVar13 = unk_0x317536BCEA8FA6B0(unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()), 0, 0);
											if (!unk_0x9761C10D57B68069(iVar13))
											{
												unk_0xDD29FF4BAB8AFF9C(iVar13, true, 0);
												unk_0x68433819717660CF(&iVar13);
											}
										}
									}
									unk_0xA7C52BDFAE69B37F(iLocal_258[0], 1);
									unk_0xA7C52BDFAE69B37F(iLocal_258[1], 1);
								}
								*iParam0 = 6;
							}
							else if (!iLocal_250)
							{
								if (!func_178())
								{
									func_169(&uLocal_53, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
									unk_0x60C06BFD037BB7CF(iLocal_258[1], unk_0xFC1458A37D98B502(), -1, 2096, 4);
									iLocal_250 = 1;
								}
							}
						}
					}
				}
				else if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), (*uParam6)[1], 10f, 10f, 10f, 0, 1, 0))
				{
					if (!iLocal_250)
					{
						if (!func_178())
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_NDCAR", 4, 0, 0, 0);
							unk_0x60C06BFD037BB7CF(iLocal_258[1], unk_0xFC1458A37D98B502(), -1, 2096, 4);
							iLocal_250 = 1;
						}
					}
				}
			}
			if (iLocal_250 || iLocal_251)
			{
				if (unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) < 0,2f)
				{
					if (iLocal_228 == -1)
					{
						iLocal_228 = unk_0x53C562FD2B9E3AB0();
					}
				}
				else
				{
					iLocal_228 = -1;
				}
				if (iLocal_228 != -1 && unk_0x53C562FD2B9E3AB0() > iLocal_228 + 10000)
				{
					func_167();
					system::wait(0);
					func_169(&uLocal_53, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[0]))
					{
						unk_0xD68E88A8E0BE8697(iLocal_258[0], unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
						unk_0xE9B3D12A64CC7C1A(iLocal_258[0], true);
						system::wait(0);
						unk_0x486F346ADFE56674(&(iLocal_258[0]));
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[1]))
					{
						unk_0xD68E88A8E0BE8697(iLocal_258[1], unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
						unk_0xE9B3D12A64CC7C1A(iLocal_258[1], true);
						system::wait(0);
						unk_0x486F346ADFE56674(&(iLocal_258[1]));
					}
					*iParam7 = 0;
					*iParam0 = 20;
				}
			}
			func_69(uParam6, 120f);
			if (func_71())
			{
				*iParam0 = 18;
			}
			if (((unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0) || unk_0x9CDE960577DADF0F(unk_0xFC1458A37D98B502())) || unk_0x25D10EDC93C33B77(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f))) || unk_0x8D44FCFF87C54F50(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f)))
			{
				if (!unk_0x3AB6A1A9084FB0A4((*uParam6)[0]) && !unk_0x3AB6A1A9084FB0A4((*uParam6)[1]))
				{
					unk_0xD68E88A8E0BE8697((*uParam6)[0], unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
					unk_0xD68E88A8E0BE8697((*uParam6)[1], unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
					func_167();
					system::wait(0);
					func_169(&uLocal_53, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 6:
			*iParam0 = 7;
			break;
		
		case 7:
			*iParam7 = 0;
			if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
			{
				if (!func_68(uParam6, unk_0xC733212BF9066BDF(), 120f) || !bLocal_246)
				{
					if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_245, 2f, 2f, 2f, false, true, 0))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_258[1]))
						{
							if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && !unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
							{
								if (func_126() && unk_0x5E0BEAAD15B888F3(unk_0xC733212BF9066BDF()))
								{
									unk_0x25468B15C0A526A9(unk_0x82FF3DFBC3965CC0(unk_0xC733212BF9066BDF()), 3);
									while (!unk_0xCAF0B12123EF5181(unk_0x82FF3DFBC3965CC0(unk_0xC733212BF9066BDF())))
									{
										system::wait(0);
									}
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_258[1]))
									{
										if (!unk_0xC816B63289F7A279(iLocal_258[0]) && !unk_0xC816B63289F7A279(iLocal_258[1]))
										{
											unk_0xB8E08BD5B184DF4E(iLocal_258[0]);
											unk_0xB8E08BD5B184DF4E(iLocal_258[1]);
											unk_0x60C06BFD037BB7CF(iLocal_258[1], unk_0xFC1458A37D98B502(), 10000, 2052, 4);
											unk_0x57FB41CABA25835C(iLocal_258[0], func_70());
											unk_0x57FB41CABA25835C(iLocal_258[1], func_70());
											unk_0xF6A83791895D5AA1(iLocal_258[0], 1);
											unk_0xF6A83791895D5AA1(iLocal_258[1], 0);
											if (unk_0x82FF3DFBC3965CC0(unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502())) == joaat("bus"))
											{
												if (!unk_0x8EE3A848975DDF21(unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()), 1, 0))
												{
													iVar14 = unk_0x317536BCEA8FA6B0(unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()), 1, 0);
													if (!unk_0x9761C10D57B68069(iVar14))
													{
														unk_0xDD29FF4BAB8AFF9C(iVar14, true, 0);
														unk_0x68433819717660CF(&iVar14);
													}
												}
												if (!unk_0x8EE3A848975DDF21(unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()), 0, 0))
												{
													iVar14 = unk_0x317536BCEA8FA6B0(unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()), 0, 0);
													if (!unk_0x9761C10D57B68069(iVar14))
													{
														unk_0xDD29FF4BAB8AFF9C(iVar14, true, 0);
														unk_0x68433819717660CF(&iVar14);
													}
												}
											}
											unk_0xA7C52BDFAE69B37F(iLocal_258[0], 1);
											unk_0xA7C52BDFAE69B37F(iLocal_258[1], 1);
										}
									}
								}
								else if (!iLocal_250)
								{
									if (!func_178())
									{
										func_169(&uLocal_53, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
										iLocal_250 = 1;
									}
								}
							}
							else if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), (*uParam6)[1], 10f, 10f, 10f, 0, 1, 0))
							{
								if (!iLocal_250)
								{
									if (!func_178())
									{
										func_169(&uLocal_53, "REGETAU", "REAWA_NDCAR", 4, 0, 0, 0);
										iLocal_250 = 1;
									}
								}
							}
						}
					}
				}
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[0]))
			{
				if (!unk_0xC816B63289F7A279(iLocal_258[0]))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_257))
					{
						if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
						{
							if ((unk_0x78F50AA8F955BEFC(iLocal_258[0], 242628503) != 1 && unk_0x78F50AA8F955BEFC(iLocal_258[0], 242628503) != 0) || unk_0x78F50AA8F955BEFC(iLocal_258[0], 242628503) == 7)
							{
								unk_0x57FB41CABA25835C(iLocal_258[0], func_70());
								unk_0xA7C52BDFAE69B37F(iLocal_258[0], 1);
							}
						}
					}
					else
					{
						unk_0x57FB41CABA25835C(iLocal_258[0], func_70());
						unk_0xA7C52BDFAE69B37F(iLocal_258[0], 1);
					}
				}
				else
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if ((!unk_0x0F299BBD0DC14B18(iLocal_258[0]) && !unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_245, 2f, 2f, 2f, false, true, 0)) && !unk_0x0C88267282FD588F(iLocal_258[0], unk_0xB3328BA8976B416C(unk_0xC733212BF9066BDF(), 1), 2,5f, 2,5f, 2,5f, false, true, 0))
						{
							unk_0x691491EBC2D892F5(iLocal_258[0], 2f);
						}
					}
					if (unk_0x78F50AA8F955BEFC(iLocal_258[0], -875674219) == 1 || unk_0x78F50AA8F955BEFC(iLocal_258[0], -875674219) == 0)
					{
					}
				}
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[1]))
			{
				if (!unk_0xC816B63289F7A279(iLocal_258[1]))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_257))
					{
						if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
						{
							if ((unk_0x78F50AA8F955BEFC(iLocal_258[1], 242628503) != 1 && unk_0x78F50AA8F955BEFC(iLocal_258[1], 242628503) != 0) || unk_0x78F50AA8F955BEFC(iLocal_258[1], 242628503) == 7)
							{
								unk_0x57FB41CABA25835C(iLocal_258[1], func_70());
								unk_0xA7C52BDFAE69B37F(iLocal_258[1], 1);
							}
						}
					}
					else
					{
						unk_0x57FB41CABA25835C(iLocal_258[1], func_70());
						unk_0xA7C52BDFAE69B37F(iLocal_258[1], 1);
					}
				}
				else
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if ((!unk_0x0F299BBD0DC14B18(iLocal_258[1]) && !unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_245, 2f, 2f, 2f, false, true, 0)) && !unk_0x0C88267282FD588F(iLocal_258[1], unk_0xB3328BA8976B416C(unk_0xC733212BF9066BDF(), 1), 2,5f, 2,5f, 2,5f, false, true, 0))
						{
							unk_0x691491EBC2D892F5(iLocal_258[1], 2f);
						}
					}
					if (unk_0x78F50AA8F955BEFC(iLocal_258[1], -875674219) == 1 || unk_0x78F50AA8F955BEFC(iLocal_258[1], -875674219) == 0)
					{
					}
				}
			}
			if (!bLocal_246)
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					if ((!unk_0x191BE1BC8F26F3C1(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0) && !unk_0x3AB6A1A9084FB0A4(iLocal_258[0])) && !unk_0x3AB6A1A9084FB0A4(iLocal_258[1]))
					{
						if ((unk_0xA8D0477084E86A92(iLocal_258[0], unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0) && !unk_0xA8D0477084E86A92(iLocal_258[1], unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0)) && !unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_258[1], 20f, 20f, 20f, 0, 1, 0))
						{
							bLocal_246 = true;
						}
						if ((unk_0xA8D0477084E86A92(iLocal_258[1], unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0) && !unk_0xA8D0477084E86A92(iLocal_258[0], unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0)) && !unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_258[0], 20f, 20f, 20f, 0, 1, 0))
						{
							bLocal_246 = true;
						}
					}
				}
			}
			if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
			{
				if (func_68(uParam6, unk_0xC733212BF9066BDF(), 120f) || bLocal_246)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_257))
					{
						unk_0x6931076730A4AC5D(&iLocal_265);
						unk_0x12C9D41D52A560D6(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
						unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iLocal_265);
						unk_0xAB30B1CF01A198C1(iLocal_257, iLocal_265);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_265);
						unk_0xE9B3D12A64CC7C1A(iLocal_257, true);
						unk_0x486F346ADFE56674(&iLocal_257);
					}
					func_67();
					if (!unk_0x9E06F0EE20F58CED(7,3162f, -1544,838f, 28,2558f, 3f))
					{
						iLocal_263 = unk_0xEA60F3B426BB095B(joaat("police3"), 7,3162f, -1544,838f, 28,2558f, 251,9956f, true, true, false);
						iLocal_261[0] = unk_0x00D1A9572426E8DD(iLocal_263, 6, joaat("s_m_y_cop_01"), -1, 1, true);
						iLocal_261[1] = unk_0x00D1A9572426E8DD(iLocal_263, 6, joaat("s_m_y_cop_01"), 0, 1, true);
						unk_0x9E058151726E58DE(iLocal_261[0], joaat("weapon_pistol"), -1, false, true);
						unk_0x9E058151726E58DE(iLocal_261[1], joaat("weapon_pistol"), -1, false, true);
						unk_0x3811A0FC01E02FC1(iLocal_261[0], 0);
					}
					if (!unk_0x9E06F0EE20F58CED(91,6602f, -1541,899f, 28,3422f, 3f))
					{
						iLocal_263 = unk_0xEA60F3B426BB095B(joaat("police3"), 91,6602f, -1541,899f, 28,3422f, 127,3064f, true, true, false);
						iLocal_261[0] = unk_0x00D1A9572426E8DD(iLocal_263, 6, joaat("s_m_y_cop_01"), -1, 1, true);
						iLocal_261[1] = unk_0x00D1A9572426E8DD(iLocal_263, 6, joaat("s_m_y_cop_01"), 0, 1, true);
						unk_0x9E058151726E58DE(iLocal_261[0], joaat("weapon_pistol"), -1, false, true);
						unk_0x9E058151726E58DE(iLocal_261[1], joaat("weapon_pistol"), -1, false, true);
						unk_0x3811A0FC01E02FC1(iLocal_261[0], 0);
					}
					if (!unk_0x9E06F0EE20F58CED(32,8029f, -1594,4f, 28,4262f, 3f))
					{
						iLocal_263 = unk_0xEA60F3B426BB095B(joaat("police3"), 32,8029f, -1594,4f, 28,4262f, 337,7429f, true, true, false);
						iLocal_261[0] = unk_0x00D1A9572426E8DD(iLocal_263, 6, joaat("s_m_y_cop_01"), -1, 1, true);
						iLocal_261[1] = unk_0x00D1A9572426E8DD(iLocal_263, 6, joaat("s_m_y_cop_01"), 0, 1, true);
						unk_0x9E058151726E58DE(iLocal_261[0], joaat("weapon_pistol"), -1, false, true);
						unk_0x9E058151726E58DE(iLocal_261[1], joaat("weapon_pistol"), -1, false, true);
						unk_0x3811A0FC01E02FC1(iLocal_261[0], 0);
					}
					unk_0xBF7C231271431D6C("SCRIPTED_SCANNER_REPORT_GETAWAY_01", 0f);
					unk_0x02FB01DA09BF7F02(unk_0xC733212BF9066BDF(), 1);
					unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 2, 0);
					unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
					unk_0xFB19003EF06A954B(unk_0x9EB17624F44A8DA4(), 0f);
					unk_0xF96119FCCD4D1889(5, -1533126372, iLocal_266);
					unk_0xF96119FCCD4D1889(5, iLocal_266, -1533126372);
					system::wait(1000);
					if (!bLocal_246)
					{
						func_169(&uLocal_53, "REGETAU", "REAWA_COPS2", 4, 0, 0, 0);
					}
					if (!unk_0x3AB6A1A9084FB0A4((*uParam6)[iVar8]))
					{
						unk_0x2B0DDE3D071497AD((*uParam6)[iVar8]);
					}
					iLocal_222 = unk_0x53C562FD2B9E3AB0();
					*iParam0 = 8;
				}
			}
			if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 95,0746f, -1520,042f, 28,3593f, -5,9698f, -1641,819f, 38,4042f, 98,1875f, 0, true, 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4((*uParam6)[0]) && !unk_0x3AB6A1A9084FB0A4((*uParam6)[1]))
				{
					unk_0xD68E88A8E0BE8697((*uParam6)[0], unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
					unk_0xD68E88A8E0BE8697((*uParam6)[1], unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
					func_167();
					system::wait(0);
					func_169(&uLocal_53, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			func_69(uParam6, 120f);
			func_66();
			if (func_71())
			{
				*iParam0 = 18;
			}
			break;
		
		case 8:
			func_65(iLocal_51);
			if (func_125(iLocal_222, 3000))
			{
				*iParam0 = 9;
			}
			if (func_71())
			{
				*iParam0 = 18;
			}
			break;
		
		case 9:
			func_64(uParam6);
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
			{
				unk_0xF96119FCCD4D1889(1, -1533126372, iLocal_266);
				unk_0xF96119FCCD4D1889(1, iLocal_266, -1533126372);
				if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
				{
					unk_0x02FB01DA09BF7F02(unk_0xC733212BF9066BDF(), 0);
				}
				if (!unk_0x191BE1BC8F26F3C1(iLocal_263, 0))
				{
					unk_0x5380482A432E314E(&iLocal_263);
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_261[0]))
				{
					unk_0x486F346ADFE56674(&(iLocal_261[0]));
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_261[1]))
				{
					unk_0x486F346ADFE56674(&(iLocal_261[1]));
				}
				func_65(iLocal_51);
				*iParam0 = 10;
			}
			iVar8 = 0;
			while (iVar8 < *uParam6)
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0) && !unk_0x3AB6A1A9084FB0A4((*uParam6)[iVar8]))
				{
					if (!unk_0xAAA8D20859E2D36D((*uParam6)[iVar8], unk_0xC733212BF9066BDF()))
					{
						if (!unk_0xA6DECE14FC9A8C51(uLocal_255[iVar8]))
						{
							uLocal_255[iVar8] = func_62((*uParam6)[iVar8], 0, 145);
							func_65(iLocal_51);
						}
					}
				}
				iVar8++;
			}
			func_69(uParam6, 120f);
			func_66();
			if (func_60())
			{
				*iParam0 = 12;
			}
			if (func_71())
			{
				*iParam0 = 18;
			}
			break;
		
		case 10:
			if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
			{
				unk_0xF96119FCCD4D1889(5, -1533126372, iLocal_266);
				unk_0xF96119FCCD4D1889(5, iLocal_266, -1533126372);
				func_65(iLocal_51);
				*iParam0 = 8;
			}
			else
			{
				unk_0xF96119FCCD4D1889(1, -1533126372, iLocal_266);
				unk_0xF96119FCCD4D1889(1, iLocal_266, -1533126372);
				vVar9 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
				fVar6 = 9999f;
				iVar15 = 0;
				while (iVar15 < vVar5.x)
				{
					if (system::vdist(vVar9, vVar5[iVar15 /*3*/]) < fVar6)
					{
						fVar6 = system::vdist(vVar9, vVar5[iVar15 /*3*/]);
						iLocal_221 = iVar15;
					}
					iVar15++;
				}
				if (func_59(vVar5[iLocal_221 /*3*/], 0f, 0f, 0f, 0))
				{
					iLocal_221 = 0;
				}
				iLocal_51 = func_57(vVar5[iLocal_221 /*3*/], 1);
				if (func_114() == 2 && !func_56())
				{
					if (!unk_0xA6DECE14FC9A8C51(iLocal_256))
					{
						iLocal_256 = func_57(vLocal_244, 0);
						unk_0x4B4040A0EC7DBA81(iLocal_256, 269);
						func_54();
					}
				}
				iLocal_222 = unk_0x53C562FD2B9E3AB0();
				if (!iLocal_220)
				{
					func_167();
					system::wait(0);
					func_169(&uLocal_53, "REGETAU", "REAWA_HOM", 4, 0, 0, 0);
					iLocal_220 = 1;
				}
				*iParam0 = 11;
			}
			if (func_71())
			{
				*iParam0 = 18;
			}
			break;
		
		case 11:
			*iParam7 = 0;
			func_53(uParam6);
			if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
			{
				func_65(iLocal_51);
				*iParam0 = 8;
			}
			else
			{
				if (func_52(vVar5[iLocal_221 /*3*/]))
				{
					func_169(&uLocal_53, "REGETAU", "REAWA_CULT", 4, 0, 0, 0);
				}
				if (func_50())
				{
					func_167();
					system::wait(0);
					if (func_49())
					{
						func_169(&uLocal_53, "REGETAU", "REAWA_CULT2", 4, 0, 0, 0);
					}
					else
					{
						func_169(&uLocal_53, "REGETAU", "REAWA_CULT3", 4, 0, 0, 0);
					}
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_258[1]))
				{
					if ((unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vVar5[iLocal_221 /*3*/], Global_19, true, true, 0) && unk_0x0C88267282FD588F(iLocal_258[0], vVar5[iLocal_221 /*3*/], 20f, 20f, 20f, false, true, 0)) && unk_0x0C88267282FD588F(iLocal_258[1], vVar5[iLocal_221 /*3*/], 20f, 20f, 20f, false, true, 0))
					{
						func_65(iLocal_51);
						iVar8 = 0;
						while (iVar8 <= (*uParam6 - 1))
						{
							if (iLocal_218)
							{
								unk_0xA1AA40A93CA0F40D(unk_0xC733212BF9066BDF(), 10,5f, 2, 0);
								system::wait(1000);
								iLocal_218 = 0;
							}
							if (!unk_0x3AB6A1A9084FB0A4((*uParam6)[iVar8]))
							{
								unk_0x2B0DDE3D071497AD((*uParam6)[iVar8]);
								unk_0x88235B448509228B((*uParam6)[iVar8]);
								unk_0xB159EA7B3E663A5F(iLocal_231);
							}
							iVar8++;
						}
						*iParam0 = 13;
					}
				}
			}
			iVar8 = 0;
			while (iVar8 < *uParam6)
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0) && !unk_0x3AB6A1A9084FB0A4((*uParam6)[iVar8]))
				{
					if (!unk_0xAAA8D20859E2D36D((*uParam6)[iVar8], unk_0xC733212BF9066BDF()))
					{
						if (!unk_0xA6DECE14FC9A8C51(uLocal_255[iVar8]))
						{
							uLocal_255[iVar8] = func_62((*uParam6)[iVar8], 0, 145);
						}
					}
				}
				iVar8++;
			}
			func_69(uParam6, 120f);
			func_66();
			if (unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) < 0,2f)
			{
				if (iLocal_228 == -1)
				{
					iLocal_228 = unk_0x53C562FD2B9E3AB0();
				}
			}
			else
			{
				iLocal_228 = -1;
			}
			if (iLocal_228 != -1 && unk_0x53C562FD2B9E3AB0() > (iLocal_228 + 60000))
			{
				func_167();
				system::wait(0);
				func_169(&uLocal_53, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[0]))
				{
					unk_0xD68E88A8E0BE8697(iLocal_258[0], unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
					unk_0xE9B3D12A64CC7C1A(iLocal_258[0], true);
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[1]))
				{
					unk_0xD68E88A8E0BE8697(iLocal_258[1], unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
					unk_0xE9B3D12A64CC7C1A(iLocal_258[1], true);
				}
				*iParam7 = 0;
				*iParam0 = 20;
			}
			if (func_60())
			{
				*iParam0 = 12;
			}
			if (func_71())
			{
				*iParam0 = 18;
			}
			break;
		
		case 12:
			func_165();
			if (bLocal_248)
			{
				unk_0x88235B448509228B(iLocal_258[0]);
				unk_0x88235B448509228B(iLocal_258[1]);
				unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
				func_167();
				system::wait(0);
				func_169(&uLocal_53, "REGETAU", "REAWA_COPS3", 4, 0, 0, 0);
				if (!unk_0x3AB6A1A9084FB0A4((*uParam6)[0]))
				{
					unk_0x6931076730A4AC5D(&iLocal_265);
					unk_0x16416C5B54FDBCBB(0, 0, 4194304);
					unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
					unk_0x1B16DD5C115FE009(iLocal_265);
					unk_0xAB30B1CF01A198C1((*uParam6)[0], iLocal_265);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_265);
					unk_0xE9B3D12A64CC7C1A((*uParam6)[0], true);
				}
				if (!unk_0x3AB6A1A9084FB0A4((*uParam6)[1]))
				{
					unk_0x6931076730A4AC5D(&iLocal_265);
					unk_0x16416C5B54FDBCBB(0, 500, 4194304);
					unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
					unk_0x1B16DD5C115FE009(iLocal_265);
					unk_0xAB30B1CF01A198C1((*uParam6)[1], iLocal_265);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_265);
					unk_0xE9B3D12A64CC7C1A((*uParam6)[1], true);
				}
				*iParam0 = 20;
			}
			break;
		
		case 13:
			if (unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) < 5f)
			{
				iVar8 = 0;
				while (iVar8 <= (*uParam6 - 1))
				{
					if (!unk_0x3AB6A1A9084FB0A4((*uParam6)[iVar8]))
					{
						if (unk_0x78F50AA8F955BEFC((*uParam6)[iVar8], 242628503) != 1 || unk_0x78F50AA8F955BEFC((*uParam6)[iVar8], 242628503) != 0)
						{
							if (!unk_0x3AB6A1A9084FB0A4((*uParam6)[iVar8]))
							{
								iVar0 = 0;
								iLocal_226 = iVar8;
							}
						}
					}
					iVar8++;
				}
				*iParam0 = 14;
			}
			break;
		
		case 14:
			iVar8 = 0;
			while (iVar8 < *uParam6)
			{
				if (!unk_0x3AB6A1A9084FB0A4((*uParam6)[0]))
				{
					unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), (*uParam6)[iVar8], 4000, 2048, 2);
					unk_0x6931076730A4AC5D(&iVar0);
					unk_0x16416C5B54FDBCBB(0, 0, 4194816);
					unk_0x380C1E7B7740D618(0, vVar7[iLocal_221 /*3*/], 2f, -1, 0,25f, 0, 1193033728);
					unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
					unk_0x1B16DD5C115FE009(iVar0);
					unk_0xAB30B1CF01A198C1((*uParam6)[0], iVar0);
					unk_0xFAA3EF7FF92E1F9E(&iVar0);
					if (!unk_0x3AB6A1A9084FB0A4((*uParam6)[1]))
					{
						unk_0x6931076730A4AC5D(&iVar0);
						unk_0x16416C5B54FDBCBB(0, 2000, 4194816);
						unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 3000, 2052, 2);
						unk_0x380C1E7B7740D618(0, vVar7[iLocal_221 /*3*/], 2f, -1, 0,25f, 0, 1193033728);
						unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iVar0);
						unk_0xAB30B1CF01A198C1((*uParam6)[1], iVar0);
						unk_0xFAA3EF7FF92E1F9E(&iVar0);
					}
					iVar0 = 0;
					unk_0xE9B3D12A64CC7C1A((*uParam6)[iVar8], true);
					unk_0x60C06BFD037BB7CF((*uParam6)[iVar8], unk_0xFC1458A37D98B502(), 4000, 2052, 2);
					func_167();
					system::wait(0);
					if (iLocal_226 > 0)
					{
						func_169(&uLocal_53, "REGETAU", "REAWA_STOP2", 4, 0, 0, 0);
					}
					else
					{
						func_169(&uLocal_53, "REGETAU", "REAWA_STOP", 4, 0, 0, 0);
					}
					*iParam0 = 15;
				}
				iVar8++;
			}
			break;
		
		case 15:
			if (!*bParam8)
			{
				if (!unk_0x3AB6A1A9084FB0A4((*uParam6)[1]))
				{
					if (!iLocal_218)
					{
						unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
						iLocal_218 = 1;
					}
					func_17(func_114(), 1, 1000, 0, 1);
					*bParam8 = 1;
				}
			}
			else if (!unk_0x3AB6A1A9084FB0A4((*uParam6)[0]) && !unk_0x3AB6A1A9084FB0A4((*uParam6)[1]))
			{
				if (!unk_0x88DDBE9908752BF0((*uParam6)[0], 0) && !unk_0x88DDBE9908752BF0((*uParam6)[1], 0))
				{
					unk_0x84CDD933AFA470D2();
					unk_0xCB3D88C918AA637C(unk_0xFC1458A37D98B502());
					while (!func_196())
					{
						system::wait(0);
					}
					func_3(10, 0);
					if (func_2(77))
					{
						func_192(9, 0);
					}
					func_164(6);
					func_183(-1, 0);
					func_180();
					*iParam0 = 20;
				}
			}
			break;
		
		case 16:
			*bParam8 = 1;
			*iParam0 = 20;
			break;
		
		case 17:
			break;
		
		case 18:
			iLocal_253 = 1;
			unk_0xF96119FCCD4D1889(5, iLocal_266, 1862763509);
			unk_0xF96119FCCD4D1889(1, iLocal_266, iLocal_266);
			unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
			unk_0x94BD6F0436473406(0f);
			unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
			iVar16 = 0;
			while (iVar16 < iLocal_258)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[iVar16]))
				{
					if (unk_0xA6DECE14FC9A8C51(uLocal_255[iVar16]))
					{
						unk_0xE30CF11C0EE14316(&(uLocal_255[iVar16]));
						if (unk_0x88DDBE9908752BF0(iLocal_258[iVar16], 0))
						{
							unk_0x16416C5B54FDBCBB(iLocal_258[iVar16], 0, 0);
						}
						if (unk_0xA6DECE14FC9A8C51(iLocal_51))
						{
							unk_0xE30CF11C0EE14316(&iLocal_51);
						}
						unk_0x88235B448509228B(iLocal_258[iVar16]);
						unk_0xD7F5B2902EBBD04E(iLocal_258[iVar16], unk_0xFC1458A37D98B502(), 0, 16);
						unk_0xE9B3D12A64CC7C1A(iLocal_258[iVar16], true);
					}
				}
				iVar16++;
			}
			func_167();
			system::wait(0);
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[1]))
			{
				func_169(&uLocal_53, "REGETAU", "REAWA_ATTP", 4, 0, 0, 0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[0]))
			{
				func_169(&uLocal_53, "REGETAU", "REAWA_ATTB", 4, 0, 0, 0);
			}
			if (!bLocal_249)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_257))
				{
					unk_0x5C5D33A1B2711D21(iLocal_257, false);
					unk_0x12C9D41D52A560D6(iLocal_257, "random@getawaydriver", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
				}
			}
			iVar16 = 0;
			while (iVar16 < iLocal_259)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_259[iVar16]))
				{
					unk_0xD68E88A8E0BE8697(iLocal_259[iVar16], unk_0xFC1458A37D98B502(), 150f, -1, 0, 0);
					unk_0xE9B3D12A64CC7C1A(iLocal_259[iVar16], true);
				}
				iVar16++;
			}
			*iParam0 = 19;
			break;
		
		case 19:
			unk_0xF96119FCCD4D1889(5, iLocal_266, 1862763509);
			iVar16 = 0;
			while (iVar16 < iLocal_258)
			{
				if (unk_0x3AB6A1A9084FB0A4(iLocal_258[iVar16]))
				{
					if (unk_0xA6DECE14FC9A8C51(uLocal_255[iVar16]))
					{
						unk_0xE30CF11C0EE14316(&(uLocal_255[iVar16]));
					}
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[iVar16]))
				{
					if (!unk_0xA6DECE14FC9A8C51(uLocal_255[iVar16]))
					{
						uLocal_255[iVar16] = func_62(iLocal_258[iVar16], 1, 145);
					}
					if (unk_0xC816B63289F7A279(iLocal_258[iVar16]))
					{
						unk_0x88235B448509228B(iLocal_258[iVar16]);
					}
					if (unk_0x88DDBE9908752BF0(iLocal_258[iVar16], 0))
					{
						unk_0x16416C5B54FDBCBB(iLocal_258[iVar16], 0, 0);
						unk_0xD7F5B2902EBBD04E(iLocal_258[iVar16], unk_0xFC1458A37D98B502(), 0, 16);
						unk_0xE9B3D12A64CC7C1A(iLocal_258[iVar16], true);
					}
					else
					{
						unk_0xD7F5B2902EBBD04E(iLocal_258[iVar16], unk_0xFC1458A37D98B502(), 0, 16);
						unk_0xE9B3D12A64CC7C1A(iLocal_258[iVar16], true);
					}
				}
				iVar16++;
			}
			if (unk_0xA6DECE14FC9A8C51(iLocal_51))
			{
				unk_0xE30CF11C0EE14316(&iLocal_51);
			}
			break;
		
		case 20:
			if (!func_178())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_2(int iParam0)//Position - 0x367F
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_330[iParam0 /*6*/];
}

void func_3(int iParam0, bool bParam1)//Position - 0x36AB
{
	int iVar0;
	char* sVar1;
	
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_116), iParam0);
	switch (iParam0)
	{
		case 10:
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_119), 14);
			break;
		
		case 13:
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_119), 16);
			break;
		
		case 12:
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_119), 15);
			break;
		
		case 11:
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_119), 17);
			break;
	}
	if (!bParam1)
	{
		iVar0 = 0;
		switch (func_16(iParam0))
		{
			case 1:
				iVar0 = 6;
				break;
			
			case 3:
				iVar0 = 4;
				break;
			
			case 2:
				iVar0 = 5;
				break;
		}
		sVar1 = func_14(iParam0);
		unk_0xE3C33644878DCCFD("FEED_CREW_U");
		unk_0xA6D2B267C377D7B2(func_14(iParam0));
		unk_0x9F42263EE935D84B(sVar1, sVar1, 0, iVar0, "", 0);
		if (!func_13(45))
		{
			func_4("AM_H_CREWU", 2, 0, 20000, 10000, func_7(), 0, 131, 0);
		}
	}
}

void func_4(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x37A9
{
	func_5(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_5(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x37CB
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
		func_6();
	}
}

void func_6()//Position - 0x399F
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

int func_7()//Position - 0x3ABF
{
	func_8();
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

void func_8()//Position - 0x3B05
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_12(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_11(unk_0xFC1458A37D98B502());
			if (func_10(iVar0) && (!func_9(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_10(Global_104555.f_2353.f_539.f_4301))
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

bool func_9(int iParam0)//Position - 0x3C02
{
	return Global_35861 == iParam0;
}

bool func_10(int iParam0)//Position - 0x3C10
{
	return iParam0 < 3;
}

int func_11(int iParam0)//Position - 0x3C1C
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)//Position - 0x3C59
{
	if (func_10(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_13(int iParam0)//Position - 0x3C83
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

var func_14(int iParam0)//Position - 0x3CC6
{
	return func_15(iParam0);
}

char* func_15(int iParam0)//Position - 0x3CD4
{
	switch (iParam0)
	{
		case 1:
			return "HC_N_GUS";
			break;
		
		case 2:
			return "HC_N_KAR";
			break;
		
		case 10:
			return "HC_N_PAC";
			break;
		
		case 11:
			return "HC_N_CHE";
			break;
		
		case 3:
			return "HC_N_HUG";
			break;
		
		case 4:
			return "HC_N_NOR";
			break;
		
		case 5:
			return "HC_N_DAR";
			break;
		
		case 6:
			return "HC_N_PAI";
			break;
		
		case 7:
			return "HC_N_CHR";
			break;
		
		case 12:
			return "HC_N_RIC";
			break;
		
		case 8:
			return "HC_N_EDD";
			break;
		
		case 13:
			return "HC_N_TAL";
			break;
		
		case 9:
			return "HC_N_KRM";
			break;
	}
	return "ERROR!";
}

int func_16(int iParam0)//Position - 0x3DB7
{
	return Global_88853[iParam0 /*5*/];
}

void func_17(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x3DC7
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
	func_18(Global_104555.f_28020[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_18(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3EAE
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_48();
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
					func_47(99, 1);
					func_46(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_46(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_46(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_31(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_27(5))
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
							func_46(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_27(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_46(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_property"), iParam3);
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
									func_46(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_27(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_26(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_47(95, iParam3);
					break;
				
				case 1:
					func_47(97, iParam3);
					break;
				
				case 2:
					func_47(96, iParam3);
					break;
			}
			func_47(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_21(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_21(iVar1);
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
					func_46(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_46(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_46(joaat("sp2_total_cash_earned"), iParam3);
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
	func_20(iParam0);
	if (Global_35861 == 15)
	{
		func_19(0);
	}
	return 1;
}

void func_19(bool bParam0)//Position - 0x44AF
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

void func_20(int iParam0)//Position - 0x4731
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

void func_21(int iParam0)//Position - 0x478B
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_24(129, 0, -1, 1);
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
	else if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0) || unk_0xC80D31E4B587871C(Global_2097152[func_23() /*12130*/].f_7676.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Global_2097152[func_23() /*12130*/].f_7676.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xE3C33644878DCCFD("COUP_RED");
		unk_0xA6D2B267C377D7B2(func_22(iParam0));
		unk_0x9F42263EE935D84B(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_22(int iParam0)//Position - 0x4862
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

int func_23()//Position - 0x48EA
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_24(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x48F7
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
		iParam2 = func_25();
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

int func_25()//Position - 0x4DC3
{
	return Global_1312736;
}

void func_26(int iParam0)//Position - 0x4DCF
{
	func_47(93, iParam0);
	func_47(29, iParam0);
	func_47(30, iParam0);
}

bool func_27(int iParam0)//Position - 0x4DEF
{
	if (iParam0 == 8)
	{
		return func_28(129, -1, -1);
	}
	if (!unk_0x3A711520F83BAE98())
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2097152[func_23() /*12130*/].f_7676.f_10, iParam0);
}

int func_28(int iParam0, int iParam1, int iParam2)//Position - 0x4E3D
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_25();
	}
	iVar1 = func_30(iParam0, iParam1);
	uVar2 = func_29(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_29(int iParam0)//Position - 0x4E7A
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

int func_30(int iParam0, int iParam1)//Position - 0x513A
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_25();
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

int func_31(bool bParam0)//Position - 0x53DC
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
		func_45(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_32(27, 1);
	return 1;
}

int func_32(int iParam0, int iParam1)//Position - 0x5493
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_33(iParam0, iParam1);
}

int func_33(int iParam0, int iParam1)//Position - 0x54AE
{
	if (func_9(14) && !func_44(iParam0))
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
	if (func_43(&Global_4267379))
	{
		if (func_41(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_34(&Global_4267379, iParam0))
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

int func_34(var uParam0, int iParam1)//Position - 0x554B
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_9(14) && !func_44(iParam1))
	{
		return 0;
	}
	if (func_41(uParam0, iParam1))
	{
		return 0;
	}
	if (func_40(uParam0) < 0f)
	{
		func_39(uParam0, 0);
	}
	func_37(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_35(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_35(var uParam0, int iParam1)//Position - 0x55FC
{
	int iVar0;
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_9(14) && !func_44(iParam1))
	{
		return 0;
	}
	if (func_41(uParam0, iParam1))
	{
		return 0;
	}
	if (func_40(uParam0) < 0f)
	{
		func_39(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_36(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_36(var uParam0, int iParam1)//Position - 0x5677
{
	return (*uParam0)[iParam1] == 78;
}

void func_37(var uParam0)//Position - 0x5688
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_38(uParam0, iVar0);
		iVar0++;
	}
	func_39(uParam0, (Global_4267378 - 0,5f));
}

void func_38(var uParam0, int iParam1)//Position - 0x56BC
{
	(*uParam0)[iParam1] = 78;
}

void func_39(var uParam0, float fParam1)//Position - 0x56CC
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

float func_40(var uParam0)//Position - 0x56E9
{
	return uParam0->f_80;
}

bool func_41(var uParam0, int iParam1)//Position - 0x56F5
{
	return func_42(uParam0, iParam1) != -1;
}

int func_42(var uParam0, int iParam1)//Position - 0x5707
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

bool func_43(var uParam0)//Position - 0x5734
{
	return uParam0->f_79 == 1;
}

int func_44(int iParam0)//Position - 0x5742
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

int func_45(int iParam0, int iParam1)//Position - 0x5792
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

void func_46(int iParam0, int iParam1)//Position - 0x57E3
{
	int iVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xBFFF62F75445099D(iParam0, iVar0, 1);
}

void func_47(int iParam0, int iParam1)//Position - 0x5806
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

void func_48()//Position - 0x5863
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

int func_49()//Position - 0x58D8
{
	if (unk_0xC80D31E4B587871C(unk_0x63A6486593EC7EC3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_50()//Position - 0x58F9
{
	if (func_114() == 2)
	{
		if (func_51())
		{
			if (unk_0xBE3C4023003180FC(-1014,154f, 4881,411f, 245,0001f, unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B()), 0), true) < 400f)
			{
				if (!Global_25473)
				{
					unk_0x8810DC630928B398("AC_EN_ROUTE_CULT");
					Global_25473 = 1;
					if (!Global_25472)
					{
						Global_25472 = 1;
						return 1;
					}
				}
			}
			else if (Global_25473)
			{
				unk_0x8810DC630928B398("AC_LEFT_AREA");
				Global_25473 = 0;
			}
		}
	}
	return 0;
}

bool func_51()//Position - 0x5974
{
	return Global_25468;
}

int func_52(vector3 vParam0)//Position - 0x597F
{
	if (func_114() == 2)
	{
		if (func_51() && !Global_25471)
		{
			if (fLocal_50 == -1f)
			{
				fLocal_50 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vParam0);
			}
			if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vParam0) > (fLocal_50 + 200f) || unk_0xBE3C4023003180FC(-1014,154f, 4881,411f, 245,0001f, unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B()), 0), true) < 400f)
			{
				Global_25471 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_53(var uParam0)//Position - 0x5A0C
{
	if (!unk_0x3AB6A1A9084FB0A4((*uParam0)[0]) && !unk_0x3AB6A1A9084FB0A4((*uParam0)[1]))
	{
		if (unk_0x21B6FFFD04C9FF3A((*uParam0)[0], (*uParam0)[1], 15f, 15f, 15f, 0, 1, 0) && unk_0x21B6FFFD04C9FF3A((*uParam0)[0], unk_0xFC1458A37D98B502(), 15f, 15f, 15f, 0, 1, 0))
		{
			switch (iLocal_225)
			{
				case 0:
					iLocal_224 = unk_0x53C562FD2B9E3AB0();
					iLocal_225++;
					break;
				
				case 1:
					if (func_125(iLocal_224, 2000))
					{
						if (!func_178())
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_PITCH", 4, 0, 0, 0);
							iLocal_225++;
						}
					}
					break;
				
				case 2:
					if (!func_178())
					{
						if (func_114() == 0)
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_SUREM", 4, 0, 0, 0);
						}
						if (func_114() == 1)
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_SUREF", 4, 0, 0, 0);
						}
						if (func_114() == 2)
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_SURET", 4, 0, 0, 0);
						}
						iLocal_225++;
					}
					break;
				}
			}
	}
}

void func_54()//Position - 0x5B2D
{
	if (func_114() == 2)
	{
		if (!Global_25470)
		{
			func_55("CULT_BLIP_HELP", -1);
			Global_25470 = 1;
		}
	}
}

void func_55(char* sParam0, int iParam1)//Position - 0x5B51
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

int func_56()//Position - 0x5B68
{
	if (Global_104555.f_24965.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

int func_57(vector3 vParam0, bool bParam1)//Position - 0x5B84
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_58(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(iVar0, bParam1);
	return iVar0;
}

float func_58(bool bParam0, float fParam1, float fParam2)//Position - 0x5BB0
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_59(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x5BC7
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_60()//Position - 0x5C0E
{
	if (func_61())
	{
		if (((((((unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_236, 50f, 50f, 50f, false, true, 0) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_237, 50f, 50f, 50f, false, true, 0)) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_238, 50f, 50f, 50f, false, true, 0)) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_239, 50f, 50f, 50f, false, true, 0)) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_240, 50f, 50f, 50f, false, true, 0)) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_241, 50f, 50f, 50f, false, true, 0)) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_242, 50f, 50f, 50f, false, true, 0)) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_243, 50f, 50f, 50f, false, true, 0))
		{
			if (unk_0x90D5DFB054818BA7(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) < 0,2f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61()//Position - 0x5D59
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (unk_0xB8DE76287EDC4957(iVar0, 0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_258[1]))
			{
				if (unk_0xA8D0477084E86A92(iLocal_258[0], iVar0, 0) && unk_0xA8D0477084E86A92(iLocal_258[1], iVar0, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_62(int iParam0, bool bParam1, int iParam2)//Position - 0x5DC7
{
	int iVar0;
	
	iVar0 = func_63(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(iVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(iVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_63(int iParam0, bool bParam1, bool bParam2)//Position - 0x5E19
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_58(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_58(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_58(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

void func_64(var uParam0)//Position - 0x5EBD
{
	if (!unk_0x3AB6A1A9084FB0A4((*uParam0)[0]) && !unk_0x3AB6A1A9084FB0A4((*uParam0)[1]))
	{
		if (unk_0x21B6FFFD04C9FF3A((*uParam0)[0], (*uParam0)[1], 15f, 15f, 15f, 0, 1, 0) && unk_0x21B6FFFD04C9FF3A((*uParam0)[0], unk_0xFC1458A37D98B502(), 15f, 15f, 15f, 0, 1, 0))
		{
			switch (iLocal_223)
			{
				case 0:
					iLocal_224 = unk_0x53C562FD2B9E3AB0();
					iLocal_223++;
					break;
				
				case 1:
					if (func_125(iLocal_224, 2000))
					{
						if (!func_178())
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_HOM2", 4, 0, 0, 0);
							iLocal_223++;
						}
					}
					break;
				
				case 2:
					if (!func_178())
					{
						if (func_114() == 0)
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_HOM4M", 4, 0, 0, 0);
						}
						if (func_114() == 1)
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_HOM4F", 4, 0, 0, 0);
						}
						if (func_114() == 2)
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_HOM4T", 4, 0, 0, 0);
						}
						iLocal_223++;
					}
					break;
				}
			}
	}
}

void func_65(int iParam0)//Position - 0x5FDE
{
	if (unk_0xA6DECE14FC9A8C51(iParam0))
	{
		unk_0xE30CF11C0EE14316(&iParam0);
	}
}

void func_66()//Position - 0x5FF5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < iLocal_258)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[iVar0]))
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
			{
				if (!func_126())
				{
					unk_0x771A86309E0CA47B(iLocal_258[iVar0], true);
					if (unk_0xC816B63289F7A279(iLocal_258[iVar0]))
					{
						unk_0x88235B448509228B(iLocal_258[iVar0]);
					}
					if (unk_0x78F50AA8F955BEFC(iLocal_258[iVar0], 1227113341) != 1 && unk_0x78F50AA8F955BEFC(iLocal_258[iVar0], 1227113341) != 0)
					{
						unk_0x4C7AF3B2BE8C3193(iLocal_258[iVar0], unk_0xFC1458A37D98B502(), -1, 6f, 2f, 1073741824, 0);
					}
					if (unk_0x88DDBE9908752BF0(iLocal_258[iVar0], 0))
					{
						unk_0x16416C5B54FDBCBB(iLocal_258[iVar0], 0, 0);
					}
					if (!iLocal_251)
					{
						if (!func_178())
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
							iLocal_251 = 1;
						}
					}
				}
				else
				{
					iLocal_251 = 0;
					unk_0x771A86309E0CA47B(iLocal_258[iVar0], false);
					if (unk_0x78F50AA8F955BEFC(iLocal_258[iVar0], 1227113341) == 1 && unk_0x78F50AA8F955BEFC(iLocal_258[iVar0], 1227113341) == 0)
					{
						unk_0xB8E08BD5B184DF4E(iLocal_258[iVar0]);
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_258[1]))
					{
						unk_0xF6A83791895D5AA1(iLocal_258[0], 1);
						unk_0xF6A83791895D5AA1(iLocal_258[1], 0);
						if (unk_0x82FF3DFBC3965CC0(unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502())) == joaat("bus"))
						{
							if (!unk_0x8EE3A848975DDF21(unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()), 1, 0))
							{
								iVar1 = unk_0x317536BCEA8FA6B0(unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()), 1, 0);
								if (!unk_0x9761C10D57B68069(iVar1))
								{
									unk_0xDD29FF4BAB8AFF9C(iVar1, true, 0);
									unk_0x68433819717660CF(&iVar1);
								}
							}
							if (!unk_0x8EE3A848975DDF21(unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()), 0, 0))
							{
								iVar2 = unk_0x317536BCEA8FA6B0(unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()), 0, 0);
								if (!unk_0x9761C10D57B68069(iVar2))
								{
									unk_0xDD29FF4BAB8AFF9C(iVar2, true, 0);
									unk_0x68433819717660CF(&iVar2);
								}
							}
						}
					}
				}
			}
			else if (!unk_0xC816B63289F7A279(iLocal_258[iVar0]))
			{
				unk_0xB8E08BD5B184DF4E(iLocal_258[iVar0]);
				unk_0x57FB41CABA25835C(iLocal_258[iVar0], func_70());
				unk_0xA7C52BDFAE69B37F(iLocal_258[iVar0], 1);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_258[1]))
				{
					unk_0xF6A83791895D5AA1(iLocal_258[0], 1);
					unk_0xF6A83791895D5AA1(iLocal_258[1], 0);
				}
			}
		}
		iVar0++;
	}
}

void func_67()//Position - 0x6254
{
	if (!func_56())
	{
		if (func_114() == 2)
		{
			Global_25468 = 1;
		}
	}
}

int func_68(var uParam0, int iParam1, float fParam2)//Position - 0x6270
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!unk_0x3AB6A1A9084FB0A4((*uParam0)[iVar0]))
		{
			if (!unk_0xA8D0477084E86A92((*uParam0)[iVar0], iParam1, 0))
			{
				if (fParam2 > 0f)
				{
					if (unk_0x21B6FFFD04C9FF3A((*uParam0)[iVar0], unk_0xFC1458A37D98B502(), fParam2, fParam2, fParam2, 0, 1, 0))
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
		iVar0++;
	}
	return 1;
}

void func_69(var uParam0, float fParam1)//Position - 0x62DA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0x3AB6A1A9084FB0A4((*uParam0)[iVar0]))
		{
			if (unk_0xA6DECE14FC9A8C51(uLocal_255[iVar0]))
			{
				unk_0xE30CF11C0EE14316(&(uLocal_255[iVar0]));
			}
		}
		else
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
				{
					if (unk_0xA8D0477084E86A92((*uParam0)[iVar0], unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
					{
						if (unk_0xA6DECE14FC9A8C51(uLocal_255[iVar0]))
						{
							unk_0xE30CF11C0EE14316(&(uLocal_255[iVar0]));
						}
					}
					else if (!unk_0xA6DECE14FC9A8C51(uLocal_255[iVar0]))
					{
						uLocal_255[iVar0] = func_62((*uParam0)[iVar0], 0, 145);
					}
				}
			}
			else if (!unk_0xA6DECE14FC9A8C51(uLocal_255[iVar0]))
			{
				uLocal_255[iVar0] = func_62((*uParam0)[iVar0], 0, 145);
			}
			if (!unk_0x21B6FFFD04C9FF3A((*uParam0)[iVar0], unk_0xFC1458A37D98B502(), fParam1, fParam1, fParam1, 0, 1, 0))
			{
				if (unk_0xA6DECE14FC9A8C51(uLocal_255[iVar0]))
				{
					unk_0xE30CF11C0EE14316(&(uLocal_255[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

int func_70()//Position - 0x6405
{
	return unk_0x7C65CFD05F3B9CE9(unk_0x98EC0789D9F0703B());
}

int func_71()//Position - 0x6415
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_258)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_258[iVar0]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[iVar0]))
			{
				if (!unk_0xC816B63289F7A279(iLocal_258[iVar0]))
				{
					if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
					{
						if (unk_0xE56ACE711345F330(iLocal_258[iVar0], unk_0xFC1458A37D98B502()))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_258[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_258[1]))
							{
								if (((unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_258[0]) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_258[0])) || unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_258[1])) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_258[1]))
								{
									if (iLocal_227 == -1)
									{
										iLocal_227 = unk_0x53C562FD2B9E3AB0();
									}
								}
								else
								{
									iLocal_227 = -1;
								}
							}
						}
					}
					if (!iLocal_254)
					{
						if (iLocal_227 != -1 && unk_0x53C562FD2B9E3AB0() > iLocal_227 + 1000)
						{
							func_167();
							system::wait(0);
							func_169(&uLocal_53, "REGETAU", "REAWA_AIM", 4, 0, 0, 0);
							iLocal_254 = 1;
						}
					}
					if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
					{
						if (unk_0xEBE499597C718EB8(iLocal_258[iVar0], unk_0xC733212BF9066BDF(), 1))
						{
							return 1;
						}
					}
					if ((unk_0xEBE499597C718EB8(iLocal_258[iVar0], unk_0xFC1458A37D98B502(), 1) && unk_0xDE523AF6F7B269AB(iLocal_258[iVar0]) < 190) || (iLocal_227 != -1 && unk_0x53C562FD2B9E3AB0() > iLocal_227 + 5000))
					{
						return 1;
					}
				}
			}
			else
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
				{
					if (unk_0xEBE499597C718EB8(iLocal_258[iVar0], unk_0xC733212BF9066BDF(), 1))
					{
						return 1;
					}
				}
				if (unk_0xEBE499597C718EB8(iLocal_258[iVar0], unk_0xFC1458A37D98B502(), 1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_72(var uParam0, int iParam1)//Position - 0x65DA
{
	int iVar0;
	
	if (!iLocal_219)
	{
		iVar0 = 0;
		while (iVar0 <= (*uParam0 - 1))
		{
			if (!unk_0x3AB6A1A9084FB0A4((*uParam0)[iVar0]))
			{
				if ((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 121,8366f, -1503,006f, 28,0999f, 0,1367f, -1649,705f, 48,1608f, 125,8125f, 0, true, 0) && !unk_0xEC211A86AB3726B6((*uParam0)[iVar0])) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 75,3661f, -1542,811f, 28,4601f, 43,7035f, -1580,28f, 33,4259f, 26f, 0, true, 0))
				{
					if (!unk_0xA6DECE14FC9A8C51(uLocal_255[iVar0]))
					{
						if (!unk_0x3AB6A1A9084FB0A4((*uParam0)[iVar0]))
						{
							if (!func_200())
							{
								func_101(1);
								func_100(1);
								if (!unk_0x191BE1BC8F26F3C1(iLocal_264, 0))
								{
									if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_264, 0) && !unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_264, 50f, 50f, 50f, 0, 1, 0))
									{
										func_75(iLocal_264, 0, 145);
									}
								}
							}
							uLocal_255[iVar0] = func_62((*uParam0)[iVar0], 0, 145);
							unk_0x9C27373CC69ECF87(uLocal_255[iVar0], false);
							func_65(iLocal_52);
						}
					}
					if (!func_178())
					{
						if (iLocal_230 < unk_0x53C562FD2B9E3AB0())
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_SHOUT", 4, 0, 0, 0);
							iLocal_230 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(3500, 4000));
						}
					}
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 75,3661f, -1542,811f, 28,4601f, 43,7035f, -1580,28f, 33,4259f, 26f, 0, true, 0))
					{
						func_73();
						if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
						{
							if (!func_178())
							{
								if (func_126() && unk_0x5E0BEAAD15B888F3(unk_0xC733212BF9066BDF()))
								{
									func_169(&uLocal_53, "REGETAU", "REAWA_START", 4, 0, 0, 0);
									iLocal_219 = 1;
								}
								else
								{
									func_169(&uLocal_53, "REGETAU", "REAWA_START2", 4, 0, 0, 0);
									iLocal_219 = 1;
								}
								if (unk_0xA6DECE14FC9A8C51(uLocal_255[0]))
								{
									unk_0x9C27373CC69ECF87(uLocal_255[0], true);
								}
								if (unk_0xA6DECE14FC9A8C51(uLocal_255[1]))
								{
									unk_0x9C27373CC69ECF87(uLocal_255[1], true);
								}
								if (!unk_0x3AB6A1A9084FB0A4((*uParam0)[1]) && !unk_0x3AB6A1A9084FB0A4(iLocal_257))
								{
									unk_0x2217C45231E6A537((*uParam0)[1], 156, true);
									unk_0x6931076730A4AC5D(&iLocal_265);
									unk_0x12C9D41D52A560D6(0, "misslamar1ig_20", "stretch_call_hurry_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
									unk_0x12C9D41D52A560D6(0, "combat@gestures@pistol@halt", "180", 2f, -2f, -1, 0, 0, 0, 0, 0);
									unk_0x9627C22EF3C3F4D6(0, iLocal_257, -1, 0);
									unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2096, 4);
									unk_0x1B16DD5C115FE009(iLocal_265);
									unk_0xAB30B1CF01A198C1((*uParam0)[1], iLocal_265);
									unk_0xFAA3EF7FF92E1F9E(&iLocal_265);
								}
								unk_0x60C06BFD037BB7CF((*uParam0)[iVar0], unk_0xFC1458A37D98B502(), -1, 2096, 4);
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_73()//Position - 0x68BA
{
	Global_14622 = 0;
	func_74();
}

void func_74()//Position - 0x68CA
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

int func_75(int iParam0, int iParam1, int iParam2)//Position - 0x6921
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
	func_76(iParam0, iParam2);
	return 1;
}

void func_76(int iParam0, int iParam1)//Position - 0x6961
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_82(iParam0))
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
	func_77(iParam0, &(Global_104555.f_32429.f_5510));
}

void func_77(int iParam0, var uParam1)//Position - 0x6B63
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		func_81(uParam1);
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
		if (uParam1->f_65 == -1 && !func_80(uParam1->f_66))
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
		func_79(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x7C7056D6F2A31BF6(iParam0, iVar0 + 1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_78(iVar0 + 1));
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

int func_78(int iParam0)//Position - 0x6E0E
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

int func_79(int iParam0, var uParam1, var uParam2)//Position - 0x6EBE
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

int func_80(int iParam0)//Position - 0x6F98
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

void func_81(var uParam0)//Position - 0x6FB8
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

int func_82(int iParam0)//Position - 0x7069
{
	if ((((((((((!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0)) || func_98(iParam0, 0, 0)) || func_98(iParam0, 1, 0)) || func_98(iParam0, 2, 0)) || func_97(iParam0) != 145) || func_96(iParam0)) || func_95(iParam0)) || func_94(iParam0)) || func_93(iParam0)) || !func_83(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		if (func_95(iParam0))
		{
		}
		if (func_95(iParam0))
		{
		}
		if (func_98(iParam0, 0, 0))
		{
		}
		if (func_98(iParam0, 1, 0))
		{
		}
		if (func_98(iParam0, 2, 0))
		{
		}
		if (func_97(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_83(int iParam0)//Position - 0x7146
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_84(iParam0, 0))
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

int func_84(int iParam0, bool bParam1)//Position - 0x72F7
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
		if (!func_92())
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
		if ((((!func_91() && !func_90()) && !func_89()) && !func_88()) && !func_92())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x177281F5FA205A38() || unk_0xB9D80B12FE4456A5()) || unk_0xFD6215BABFD843F2())
		{
		}
		else if (!func_89())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_87(iParam0))
		{
			return 0;
		}
	}
	if (!func_85(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_85(int iParam0)//Position - 0x7485
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_86())
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

int func_86()//Position - 0x7551
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

int func_87(int iParam0)//Position - 0x7568
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

int func_88()//Position - 0x8DF2
{
	return 0;
}

int func_89()//Position - 0x8DFB
{
	return 1;
}

int func_90()//Position - 0x8E04
{
	return 1;
}

int func_91()//Position - 0x8E0D
{
	if (unk_0x21EA5D4DC72DE119(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_92()//Position - 0x8E26
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

int func_93(int iParam0)//Position - 0x8EE1
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	sVar1 = unk_0xF2D2D6860D636A58(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x74C475EB8E73D398(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_84(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_94(int iParam0)//Position - 0x8F27
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

int func_95(int iParam0)//Position - 0x8F62
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

int func_96(int iParam0)//Position - 0x8FDE
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

int func_97(int iParam0)//Position - 0x90C6
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

int func_98(int iParam0, int iParam1, bool bParam2)//Position - 0x9129
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_99(iParam1, iVar0, &sVar1, &iVar2))
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

int func_99(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x919A
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

void func_100(bool bParam0)//Position - 0x9273
{
	if (bParam0)
	{
		StringCopy(&Global_103611, unk_0x436287B7DB306165(), 24);
		Global_103605 = 1;
	}
	else
	{
		StringCopy(&Global_103611, "NULL", 24);
		Global_103605 = 0;
	}
}

int func_101(int iParam0)//Position - 0x929F
{
	if (func_105())
	{
		Global_104545 = 1;
		Global_104542 = unk_0x53C562FD2B9E3AB0();
		if (func_104(Global_104544))
		{
			func_102(0);
		}
		unk_0x218409883979C46E(1, "RE_TITLE");
		if (iParam0 && func_104(Global_104544))
		{
			unk_0xE56ECFD267E53FC5();
		}
		return 1;
	}
	return 0;
}

void func_102(int iParam0)//Position - 0x92F2
{
	switch (iParam0)
	{
		case 0:
			if (Global_104555.f_24965.f_2 < 3)
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_55(func_103(iParam0), -1);
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
					func_55(func_103(iParam0), -1);
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
					func_55(func_103(iParam0), -1);
					Global_104555.f_24965.f_4++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 2);
				}
			}
			break;
	}
}

char* func_103(int iParam0)//Position - 0x93D3
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

int func_104(int iParam0)//Position - 0x9417
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

int func_105()//Position - 0x9446
{
	switch (func_106(&Global_25292, 0, 5, 0, unk_0xBBA15366508D1BDE()))
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

int func_106(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x947C
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
		if (func_110(0))
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
		if (!func_108(iParam2))
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
			func_107(uParam0, iParam4);
		}
	}
	return 2;
}

void func_107(var uParam0, int iParam1)//Position - 0x95B3
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

bool func_108(int iParam0)//Position - 0x9602
{
	return func_109(iParam0, Global_35861);
}

int func_109(int iParam0, int iParam1)//Position - 0x9613
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

int func_110(int iParam0)//Position - 0x97F4
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_108(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_111(int iParam0, char* sParam1, int iParam2)//Position - 0x9816
{
	unk_0x74D45BB07BD51F8B(iParam0, sParam1, func_112(iParam2), 1);
}

int func_112(int iParam0)//Position - 0x982D
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

void func_113(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x9A22
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

int func_114()//Position - 0x9ABD
{
	func_8();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_115(int iParam0, bool bParam1)//Position - 0x9AD6
{
	if (bParam1)
	{
		if (!func_123(iParam0, 2, 1))
		{
			func_122(iParam0, 2, 1);
		}
	}
	else if (func_123(iParam0, 2, 1))
	{
		func_116(iParam0, 2, 1);
	}
}

void func_116(int iParam0, int iParam1, bool bParam2)//Position - 0x9B0D
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_121() == 0)
		{
			iVar0 = func_119(func_120(iParam0), -1, 0);
			unk_0x0EE72DB1CD8A3B86(&iVar0, iParam1);
			func_117(func_120(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

void func_117(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x9B76
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_118(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_118(var uParam0)//Position - 0x9BA6
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_25();
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

int func_119(int iParam0, int iParam1, int iParam2)//Position - 0x9BDA
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_118(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_120(int iParam0)//Position - 0x9C0C
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

int func_121()//Position - 0x9EF1
{
	return Global_25233;
}

void func_122(int iParam0, int iParam1, bool bParam2)//Position - 0x9EFC
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_121() == 0)
		{
			iVar0 = func_119(func_120(iParam0), -1, 0);
			unk_0x872F1C1F8587CCC7(&iVar0, iParam1);
			func_117(func_120(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

int func_123(int iParam0, int iParam1, bool bParam2)//Position - 0x9F65
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_121() == 0)
		{
			return unk_0xC80D31E4B587871C(func_119(func_120(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_124(vector3 vParam0, float fParam1, int iParam2)//Position - 0x9FC5
{
	if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vParam0, fParam1, fParam1, fParam1, false, true, 0))
	{
		if (iParam2 == 0)
		{
			if (unk_0x9E06F0EE20F58CED(vParam0, 5f))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_125(int iParam0, int iParam1)//Position - 0xA003
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x53C562FD2B9E3AB0();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_126()//Position - 0xA024
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
		{
			if (((((!unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()) && !unk_0x6B36F1C775AE0F99(unk_0xFC1458A37D98B502())) && !unk_0x42CEF0F4671324EA(unk_0xFC1458A37D98B502())) && !unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502())) && !unk_0xEA52493C36DC9AB2(unk_0xFC1458A37D98B502())) && !unk_0xC53EE6374D41156D(unk_0xFC1458A37D98B502(), joaat("rhino")))
			{
				if (unk_0x95EC8AE7E4F33F6E(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) >= 2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		if (unk_0xB8DE76287EDC4957(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502()), 0))
		{
			if (((((!unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502()))) && !unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502())))) && !unk_0x849A8CFD71854E02(unk_0x82FF3DFBC3965CC0(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502())))) && !unk_0x428C7026AD2721BA(unk_0x82FF3DFBC3965CC0(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502())))) && !unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502())))) && unk_0x82FF3DFBC3965CC0(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_127(bool bParam0)//Position - 0xA15C
{
	if (bParam0)
	{
	}
}

int func_128(int iParam0)//Position - 0xA169
{
	if (unk_0x42F1FE4C7EC5F51E())
	{
		if (func_129(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_129(int iParam0)//Position - 0xA186
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_9(6) || func_9(7))
			{
				return 1;
			}
			else
			{
				return func_129(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_108(5))
			{
				if (func_130(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_130(int iParam0)//Position - 0xA1F8
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar0 = func_114();
				if (!func_10(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_139()) || Global_103602) || Global_25235) || func_138()) || func_137(8, -1)) || func_136()) || func_135()) || func_134()) || func_133()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1) || func_139()) || Global_25235) || func_138()) || func_137(8, -1)) || func_134()) || func_136()) || func_135()) || func_133()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_139()) || Global_103602) || Global_25235) || func_138()) || func_137(8, -1)) || func_134()) || func_136()) || func_135()) || func_133()) || Global_104555.f_7658.f_919[iVar0] == 5) || Global_36408 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_139()) || Global_103602) || Global_25235) || func_138()) || func_137(8, -1)) || func_136()) || func_135()) || func_133()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_139() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || func_137(8, -1)) || func_133()) || func_132()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_137(8, -1) || func_136()) || func_135()) || func_132()) || func_131())
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
							if ((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_139()) || Global_25235) || func_138()) || func_137(8, -1)) || func_135()) || func_134()) || func_133()) || Global_104555.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || func_139()) || func_135()) || Global_103602) || Global_25235) || func_138()) || Global_36993) || func_137(8, -1)) || func_134()) || func_132()) || func_133()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_139()) || Global_103602) || Global_25235) || func_138()) || func_137(8, -1)) || func_134()) || func_132()) || func_136()) || func_135()) || func_133())
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

var func_131()//Position - 0xA915
{
	return Global_92872.f_1;
}

int func_132()//Position - 0xA923
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 13);
	}
	return 0;
}

int func_133()//Position - 0xA949
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_134()//Position - 0xA963
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

bool func_135()//Position - 0xA98D
{
	return Global_92885.f_316 > 0;
}

bool func_136()//Position - 0xA99E
{
	return Global_92885.f_315 > 0;
}

bool func_137(int iParam0, int iParam1)//Position - 0xA9AF
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

var func_138()//Position - 0xA9EA
{
	return Global_1312854;
}

int func_139()//Position - 0xA9F6
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

int func_140(int iParam0, struct<7> Param1, var uParam2, var uParam3)//Position - 0xAA12
{
	if (iParam0 == 1)
	{
		func_150(&uLocal_270, Param1);
		func_150(&uLocal_270, Param1.f_1);
		func_150(&uLocal_270, Param1.f_2);
		func_150(&uLocal_270, Param1.f_3);
		func_150(&uLocal_270, Param1.f_4);
		func_150(&uLocal_270, Param1.f_5);
		func_150(&uLocal_270, Param1.f_6);
		if (func_147(&uLocal_270))
		{
			return 1;
		}
	}
	else
	{
		func_141(&uLocal_270, 0);
	}
	return 0;
}

void func_141(var uParam0, bool bParam1)//Position - 0xAA85
{
	int iVar0;
	
	if (!bParam1)
	{
		func_143(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_142(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_142(var uParam0)//Position - 0xAAC0
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_143(var uParam0)//Position - 0xAAD9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 30))
		{
			func_144(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_144(var uParam0)//Position - 0xAB12
{
	func_145(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_145(int iParam0, char* sParam1, int iParam2)//Position - 0xAB29
{
	if (unk_0xC80D31E4B587871C(iParam0, 30))
	{
		switch (func_146(iParam0))
		{
			case 0:
				unk_0x14776E43F90DD454(iParam2);
				break;
			
			case 1:
				unk_0xFCCDDE0E48CF9588(sParam1);
				break;
			
			case 2:
				unk_0x736CC1A30C230950(sParam1);
				break;
			
			case 3:
				unk_0x137FC8E0F58D9E0B(sParam1);
				break;
			
			case 4:
				unk_0x9E6ACDF1473CD846(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xD22D83D359390CC6(sParam1);
				break;
			
			case 6:
				unk_0x77A208B3324C04F2();
				break;
			
			case 7:
				unk_0x7A0F3E22D109C816(iParam2);
				break;
			
			case 8:
				unk_0xF40900F61CC88931(iParam2, unk_0xC80D31E4B587871C(iParam0, 26));
				break;
			
			case 9:
				unk_0x74FDC371ED12544B();
				break;
			
			default:
				break;
		}
	}
}

int func_146(int iParam0)//Position - 0xABE9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xC80D31E4B587871C(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_147(var uParam0)//Position - 0xAC15
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_148(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_148(var uParam0)//Position - 0xAC77
{
	return func_149(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_149(int iParam0, char* sParam1, int iParam2)//Position - 0xAC8E
{
	if (unk_0xC80D31E4B587871C(iParam0, 30))
	{
		if (unk_0xC80D31E4B587871C(iParam0, 29))
		{
			switch (func_146(iParam0))
			{
				case 0:
					return unk_0x9A0B2ED5055D3F0B(iParam2);
					break;
				
				case 1:
					return unk_0x3A801AA34DD821BE(sParam1);
					break;
				
				case 2:
					return unk_0xD9C499EAA1D3F82A(sParam1);
					break;
				
				case 3:
					return unk_0xA51ADD51711B4A15(sParam1);
					break;
				
				case 4:
					return unk_0x0840F461D7BD8859(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xC316B5E3E7ACF515(sParam1);
					break;
				
				case 6:
					return unk_0x1CF95440F1970B4F(sParam1, unk_0xC80D31E4B587871C(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x2674C3EBFAFF7678(iParam2);
					break;
				
				case 8:
					return unk_0x9F0887BCBFCF3C2F(iParam2);
					break;
				
				case 9:
					return unk_0xFEDD99169EC73AA6();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_150(var uParam0, int iParam1)//Position - 0xAD82
{
	func_151(uParam0, 0, iParam1, "NULL", 0);
}

void func_151(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xAD96
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0x74C475EB8E73D398(sParam3, "NULL"))
					{
						if (unk_0x74C475EB8E73D398(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x872F1C1F8587CCC7(uParam0[iVar0 /*18*/], iParam1);
			unk_0x872F1C1F8587CCC7(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_152()//Position - 0xAE7E
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_49) < (75f * 75f))
		{
			return 1;
		}
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_163())
		{
			return 0;
		}
	}
	if (func_159())
	{
		return 1;
	}
	if (func_153(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_153(float fParam0, bool bParam1)//Position - 0xAF04
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
		if (func_10(func_114()))
		{
			iVar5 = func_7();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 2) && !unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 3))
				{
					func_154(iVar1, &Var0);
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

void func_154(int iParam0, var uParam1)//Position - 0xAFBB
{
	switch (iParam0)
	{
		case 0:
			func_155(uParam1, "Abigail1", func_157(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 1:
			func_155(uParam1, "Abigail2", func_157(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 2:
			func_155(uParam1, "Barry1", func_157(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 3:
			func_155(uParam1, "Barry2", func_157(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_156(iParam0), 1, 1);
			break;
		
		case 4:
			func_155(uParam1, "Barry3", func_157(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 5:
			func_155(uParam1, "Barry3A", func_157(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 6:
			func_155(uParam1, "Barry3C", func_157(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 7:
			func_155(uParam1, "Barry4", func_157(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_156(iParam0), 0, 0);
			break;
		
		case 8:
			func_155(uParam1, "Dreyfuss1", func_157(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 9:
			func_155(uParam1, "Epsilon1", func_157(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 10:
			func_155(uParam1, "Epsilon2", func_157(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 11:
			func_155(uParam1, "Epsilon3", func_157(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 12:
			func_155(uParam1, "Epsilon4", func_157(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 13:
			func_155(uParam1, "Epsilon5", func_157(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 14:
			func_155(uParam1, "Epsilon6", func_157(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 15:
			func_155(uParam1, "Epsilon7", func_157(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 16:
			func_155(uParam1, "Epsilon8", func_157(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 17:
			func_155(uParam1, "Extreme1", func_157(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 18:
			func_155(uParam1, "Extreme2", func_157(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 19:
			func_155(uParam1, "Extreme3", func_157(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 20:
			func_155(uParam1, "Extreme4", func_157(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 21:
			func_155(uParam1, "Fanatic1", func_157(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_156(iParam0), 1, 0);
			break;
		
		case 22:
			func_155(uParam1, "Fanatic2", func_157(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_156(iParam0), 1, 0);
			break;
		
		case 23:
			func_155(uParam1, "Fanatic3", func_157(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_156(iParam0), 0, 1);
			break;
		
		case 24:
			func_155(uParam1, "Hao1", func_157(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_156(iParam0), 0, 1);
			break;
		
		case 25:
			func_155(uParam1, "Hunting1", func_157(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 26:
			func_155(uParam1, "Hunting2", func_157(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 27:
			func_155(uParam1, "Josh1", func_157(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 28:
			func_155(uParam1, "Josh2", func_157(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_156(iParam0), 1, 1);
			break;
		
		case 29:
			func_155(uParam1, "Josh3", func_157(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_156(iParam0), 1, 1);
			break;
		
		case 30:
			func_155(uParam1, "Josh4", func_157(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 31:
			func_155(uParam1, "Maude1", func_157(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 32:
			func_155(uParam1, "Minute1", func_157(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 33:
			func_155(uParam1, "Minute2", func_157(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 34:
			func_155(uParam1, "Minute3", func_157(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 35:
			func_155(uParam1, "MrsPhilips1", func_157(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 36:
			func_155(uParam1, "MrsPhilips2", func_157(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 37:
			func_155(uParam1, "Nigel1", func_157(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 38:
			func_155(uParam1, "Nigel1A", func_157(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_156(iParam0), 1, 1);
			break;
		
		case 39:
			func_155(uParam1, "Nigel1B", func_157(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_156(iParam0), 1, 1);
			break;
		
		case 40:
			func_155(uParam1, "Nigel1C", func_157(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_156(iParam0), 1, 1);
			break;
		
		case 41:
			func_155(uParam1, "Nigel1D", func_157(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_156(iParam0), 1, 1);
			break;
		
		case 42:
			func_155(uParam1, "Nigel2", func_157(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_156(iParam0), 1, 1);
			break;
		
		case 43:
			func_155(uParam1, "Nigel3", func_157(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_156(iParam0), 1, 1);
			break;
		
		case 44:
			func_155(uParam1, "Omega1", func_157(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 45:
			func_155(uParam1, "Omega2", func_157(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 46:
			func_155(uParam1, "Paparazzo1", func_157(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 47:
			func_155(uParam1, "Paparazzo2", func_157(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 48:
			func_155(uParam1, "Paparazzo3", func_157(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 49:
			func_155(uParam1, "Paparazzo3A", func_157(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 50:
			func_155(uParam1, "Paparazzo3B", func_157(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 51:
			func_155(uParam1, "Paparazzo4", func_157(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 52:
			func_155(uParam1, "Rampage1", func_157(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 54:
			func_155(uParam1, "Rampage3", func_157(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 55:
			func_155(uParam1, "Rampage4", func_157(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 56:
			func_155(uParam1, "Rampage5", func_157(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 53:
			func_155(uParam1, "Rampage2", func_157(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 57:
			func_155(uParam1, "TheLastOne", func_157(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 58:
			func_155(uParam1, "Tonya1", func_157(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 59:
			func_155(uParam1, "Tonya2", func_157(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 60:
			func_155(uParam1, "Tonya3", func_157(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 61:
			func_155(uParam1, "Tonya4", func_157(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 62:
			func_155(uParam1, "Tonya5", func_157(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_155(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0xC204
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

int func_156(int iParam0)//Position - 0xC295
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

struct<2> func_157(int iParam0)//Position - 0xC5DB
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_158(iParam0) };
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

struct<2> func_158(int iParam0)//Position - 0xC613
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

int func_159()//Position - 0xCA60
{
	if (func_162() && !func_163())
	{
		return 1;
	}
	if (func_161() && func_160())
	{
		return 1;
	}
	return 0;
}

bool func_160()//Position - 0xCA92
{
	return Global_104273 > 0;
}

int func_161()//Position - 0xCAA0
{
	if (Global_89900 != -1)
	{
		return 1;
	}
	return 0;
}

int func_162()//Position - 0xCAB5
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

int func_163()//Position - 0xCADB
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

void func_164(int iParam0)//Position - 0xCAF8
{
	Global_104541 = iParam0;
}

void func_165()//Position - 0xCB06
{
	if (!bLocal_248)
	{
		unk_0x49A7AD0000D6AF17(func_179(unk_0x9EB17624F44A8DA4()) - Vector(0f, 10f, 0f), unk_0x63A6486593EC7EC3(5, 15), &vLocal_235, 1, 3f, 0f);
		if (!unk_0x9E06F0EE20F58CED(vLocal_235, 10f))
		{
			vLocal_233 = { vLocal_235 };
			bLocal_247 = true;
		}
		else
		{
			unk_0x49A7AD0000D6AF17(func_179(unk_0x9EB17624F44A8DA4()) + Vector(0f, 10f, 0f), unk_0x63A6486593EC7EC3(5, 15), &vLocal_235, 1, 3f, 0f);
			if (!unk_0x9E06F0EE20F58CED(vLocal_235, 10f))
			{
				vLocal_233 = { vLocal_235 };
				bLocal_247 = true;
			}
			if (bLocal_247)
			{
				if (!unk_0x6ADD12BF4D6D2587(iLocal_260[0]))
				{
					iLocal_260[0] = unk_0xAC992EFAD62C33BF(6, joaat("s_m_y_cop_01"), vLocal_233 + Vector(0f, 5f, 0f), 0f, 1, true);
					if (func_60())
					{
						unk_0x9E058151726E58DE(iLocal_260[0], joaat("weapon_pistol"), -1, true, true);
						unk_0xCE93FCB8A8D8DF0B(iLocal_260[0], iLocal_268);
						unk_0x771A86309E0CA47B(iLocal_260[0], true);
						unk_0x992E814DF611C58C(iLocal_260[0], 50f, 0);
						unk_0xE9B3D12A64CC7C1A(iLocal_260[0], true);
					}
					else
					{
						unk_0x771A86309E0CA47B(iLocal_260[0], true);
						unk_0x6931076730A4AC5D(&iLocal_265);
						unk_0x4C7AF3B2BE8C3193(0, unk_0xFC1458A37D98B502(), -1, 6f, 3f, 1073741824, 0);
						unk_0x12C9D41D52A560D6(0, "random@getawaydriver", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
						unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
						unk_0x270054D97CD161A8(0, 3000);
						unk_0x1B16DD5C115FE009(iLocal_265);
						unk_0xAB30B1CF01A198C1(iLocal_260[0], iLocal_265);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_265);
						unk_0xE9B3D12A64CC7C1A(iLocal_260[0], true);
						func_113(&uLocal_53, 4, iLocal_260[0], "REGETCop", 0, 1);
					}
				}
				if (!unk_0x6ADD12BF4D6D2587(iLocal_260[1]))
				{
					iLocal_260[1] = unk_0xAC992EFAD62C33BF(6, joaat("s_m_y_cop_01"), vLocal_233 - Vector(0f, 5f, 0f), 0f, 1, true);
					if (func_60())
					{
						unk_0x9E058151726E58DE(iLocal_260[0], joaat("weapon_pistol"), -1, false, true);
						unk_0xCE93FCB8A8D8DF0B(iLocal_260[1], iLocal_268);
						unk_0x771A86309E0CA47B(iLocal_260[1], true);
						unk_0x992E814DF611C58C(iLocal_260[1], 50f, 0);
						unk_0xE9B3D12A64CC7C1A(iLocal_260[1], true);
					}
					else
					{
						unk_0x771A86309E0CA47B(iLocal_260[1], true);
						unk_0x755F86FFB31712D8(iLocal_260[1], 68,7217f, -1569,83f, 28,6027f, 3f, 0, 0, 786603, -1082130432);
						unk_0xE9B3D12A64CC7C1A(iLocal_260[1], true);
					}
				}
				if (!unk_0x6ADD12BF4D6D2587(iLocal_262))
				{
					iLocal_262 = unk_0xEA60F3B426BB095B(joaat("police3"), vLocal_233, 0f, true, true, false);
					vLocal_234 = { func_179(unk_0x9EB17624F44A8DA4()) - unk_0xB3328BA8976B416C(iLocal_262, 1) };
					unk_0x48ED7B2293A96722(iLocal_262, unk_0xA67DD8488EBA5F6D(vLocal_234.x, vLocal_234.y));
					unk_0xBB4910CCAB2BEDFA(iLocal_262, 1);
				}
				if (!unk_0x6ADD12BF4D6D2587(iLocal_260[2]))
				{
					iLocal_260[2] = unk_0x00D1A9572426E8DD(iLocal_262, 6, joaat("s_m_y_cop_01"), -1, 1, true);
					if (func_60())
					{
						unk_0x9E058151726E58DE(iLocal_260[2], joaat("weapon_pistol"), -1, true, true);
						unk_0xCE93FCB8A8D8DF0B(iLocal_260[2], iLocal_268);
						unk_0xAE6EBBBBD8B9FB30(iLocal_260[2], 1, true);
						unk_0xAE6EBBBBD8B9FB30(iLocal_260[2], 3, false);
						unk_0x771A86309E0CA47B(iLocal_260[2], true);
						unk_0xD2C269DBF147B406(iLocal_260[2], iLocal_262, iLocal_258[1], 6, 15f, 2, -1f, -1f, 1);
						unk_0xE9B3D12A64CC7C1A(iLocal_260[2], true);
					}
					else
					{
						unk_0x771A86309E0CA47B(iLocal_260[2], true);
						unk_0x6931076730A4AC5D(&iLocal_265);
						unk_0x87A3E70B0AB01608(0, iLocal_262, 40,2328f, -1555,753f, 28,2128f, 10f, 0, joaat("police"), 786469, 1f, -1f);
						unk_0x270054D97CD161A8(0, 5000);
						unk_0x1B16DD5C115FE009(iLocal_265);
						unk_0xAB30B1CF01A198C1(iLocal_260[2], iLocal_265);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_265);
						unk_0xE9B3D12A64CC7C1A(iLocal_260[2], true);
					}
				}
				bLocal_248 = true;
			}
		}
	}
}

int func_166(var uParam0, int iParam1, float fParam2)//Position - 0xCEAA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0x6ADD12BF4D6D2587((*uParam0)[iVar0]))
		{
			if (unk_0x6ADD12BF4D6D2587(iParam1))
			{
				if (unk_0xB8DE76287EDC4957(iParam1, 0))
				{
					if (!unk_0x3AB6A1A9084FB0A4((*uParam0)[iVar0]))
					{
						if (unk_0xA8D0477084E86A92((*uParam0)[iVar0], iParam1, 0))
						{
							return 0;
						}
						if (fParam2 > 0f)
						{
							if (unk_0x21B6FFFD04C9FF3A((*uParam0)[iVar0], unk_0xFC1458A37D98B502(), fParam2, fParam2, fParam2, 0, 1, 0))
							{
								return 0;
							}
						}
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
		iVar0++;
	}
	return 1;
}

void func_167()//Position - 0xCF45
{
	Global_14622 = 0;
	func_168();
}

void func_168()//Position - 0xCF55
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

int func_169(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xCF76
{
	func_177(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_170(sParam2, iParam3, 0);
}

int func_170(char* sParam0, int iParam1, bool bParam2)//Position - 0xCFC4
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
					func_74();
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
		if (func_137(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_176();
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
				func_175();
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
				if (func_174())
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
			if (func_173())
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
			func_172();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_171();
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
		func_74();
	}
	return 0;
}

void func_171()//Position - 0xD290
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

void func_172()//Position - 0xD2C2
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

int func_173()//Position - 0xD357
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_174()//Position - 0xD37E
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

void func_175()//Position - 0xD417
{
	if (func_9(14))
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
		Global_14453 = func_114();
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

void func_176()//Position - 0xD4B9
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

void func_177(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0xD511
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

int func_178()//Position - 0xD567
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

Vector3 func_179(int iParam0)//Position - 0xD589
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

void func_180()//Position - 0xD59C
{
	func_181();
}

int func_181()//Position - 0xD5A9
{
	if (func_182(0))
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

bool func_182(bool bParam0)//Position - 0xD5F4
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_183(int iParam0, int iParam1)//Position - 0xD61F
{
	if (iParam0 == -1)
	{
		iParam0 = func_190();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_189(iParam0))
	{
		func_188(iParam0, iParam1);
		if (!func_13(51))
		{
			func_4("RE_REWARD", 1, 0, 4000, 10000, func_7(), 0, 138, 0);
			func_187(51);
		}
		if (func_104(iParam0))
		{
			Global_104555.f_24965.f_2 = 3;
		}
		if (func_186(iParam0, iParam1) != 322)
		{
			func_184(func_186(iParam0, iParam1), vLocal_49.x, vLocal_49.y);
		}
		Global_104543 = iParam1;
		if (Global_104541 == 0)
		{
			if (((Global_104544 == 1 || Global_104544 == 5) || Global_104544 == 11) || Global_104544 == 25)
			{
				func_164(2);
			}
			else if ((Global_104544 == 26 || Global_104544 == 8) || Global_104544 == 17)
			{
				func_164(7);
			}
			else
			{
				func_164(1);
			}
		}
	}
}

void func_184(int iParam0, var uParam1, var uParam2)//Position - 0xD723
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
		func_24((891 + iParam0), 1, -1, 1);
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
		func_185();
	}
}

void func_185()//Position - 0xD80B
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
		func_45(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_121() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_181();
				}
			}
		}
	}
}

int func_186(int iParam0, int iParam1)//Position - 0xDCCC
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

void func_187(int iParam0)//Position - 0xE040
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

void func_188(int iParam0, int iParam1)//Position - 0xE082
{
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_24965.f_8[iParam0]), iParam1);
}

int func_189(int iParam0)//Position - 0xE09D
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

int func_190()//Position - 0xE14E
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x436287B7DB306165(), 64);
	uVar1 = func_191(Var0);
	return uVar1;
}

int func_191(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0xE16B
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

void func_192(int iParam0, bool bParam1)//Position - 0xE345
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_195(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_26404.f_1), iVar0);
			if (!bParam1)
			{
				func_193(func_194(iParam0));
			}
		}
	}
}

void func_193(char* sParam0)//Position - 0xE38E
{
	unk_0xE3C33644878DCCFD("");
	unk_0xE702609C728B0AF1("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

char* func_194(int iParam0)//Position - 0xE3B3
{
	switch (iParam0)
	{
		case 0:
			return "CM_HSTCHE";
			break;
		
		case 1:
			return "CM_HSTCHR";
			break;
		
		case 2:
			return "CM_HSTDAR";
			break;
		
		case 3:
			return "CM_HSTEDD";
			break;
		
		case 4:
			return "CM_HSTGUS";
			break;
		
		case 5:
			return "CM_HSTHUG";
			break;
		
		case 6:
			return "CM_HSTKRM";
			break;
		
		case 7:
			return "CM_HSTKAR";
			break;
		
		case 8:
			return "CM_HSTNOR";
			break;
		
		case 9:
			return "CM_HSTPAC";
			break;
		
		case 10:
			return "CM_HSTPAI";
			break;
		
		case 11:
			return "CM_HSTRIC";
			break;
		
		case 12:
			return "CM_HSTTAL";
			break;
	}
	return "ERROR!";
}

int func_195(int iParam0)//Position - 0xE496
{
	if (iParam0 != -1 && iParam0 != 13)
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_26404.f_1, iParam0);
	}
	return 0;
}

int func_196()//Position - 0xE4C5
{
	return 1;
}

int func_197()//Position - 0xE4CE
{
	if (Global_25469)
	{
		func_164(4);
		return 1;
	}
	return 0;
}

int func_198(int iParam0)//Position - 0xE4E6
{
	return func_123(iParam0, 5, 1);
}

int func_199()//Position - 0xE4F6
{
	if (!func_108(5))
	{
		return 1;
	}
	if (func_159())
	{
		return 1;
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_163())
		{
			return 0;
		}
	}
	if (func_153(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_200()//Position - 0xE558
{
	if ((Global_104544 == func_190() && unk_0x17E356AF4F930A2C()) && Global_104545)
	{
		return 1;
	}
	return 0;
}

void func_201(var uParam0)//Position - 0xE583
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0x4B64A8D052027742() >= (uParam0->f_146 + uParam0->f_147) || unk_0xC80D31E4B587871C(Global_92833.f_20, 2)) || unk_0xC80D31E4B587871C(Global_92833.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 29))
					{
						func_202(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0x4B64A8D052027742();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_202(int iParam0)//Position - 0xE60D
{
	func_203(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_203(int iParam0, char* sParam1, int iParam2)//Position - 0xE623
{
	if (unk_0xC80D31E4B587871C(*iParam0, 30))
	{
		switch (func_146(*iParam0))
		{
			case 0:
				unk_0x6FF834D85E2DD4C6(iParam2);
				break;
			
			case 1:
				unk_0x6450931B826B49D9(sParam1);
				break;
			
			case 2:
				unk_0x7C0C9D9129095E19(sParam1);
				break;
			
			case 3:
				unk_0x128A5DCCD09CCA17(sParam1, unk_0xC80D31E4B587871C(*iParam0, 28));
				break;
			
			case 4:
				unk_0x0D9525F20FB71C52(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x307EAE14C924E2E7(sParam1);
				break;
			
			case 6:
				unk_0x1CF95440F1970B4F(sParam1, unk_0xC80D31E4B587871C(*iParam0, 27), -1);
				break;
			
			case 7:
				unk_0x8A719502FC5D36F1(iParam2);
				break;
			
			case 8:
				unk_0xBCBC53983EC3B1BA(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x36905B9EE07F38CC();
				break;
			
			default:
				break;
		}
		unk_0x872F1C1F8587CCC7(iParam0, 29);
	}
}

void func_204(int iParam0)//Position - 0xE6FD
{
	if (iParam0 == -1)
	{
		iParam0 = func_190();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_206(iParam0);
	unk_0x51B813700F855144(0);
	unk_0x980C42B833D07BB4(1);
	Global_104541 = 0;
	func_205();
}

void func_205()//Position - 0xE733
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

void func_206(int iParam0)//Position - 0xE770
{
	Global_104544 = iParam0;
}

int func_207(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xE77E
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
		iParam1 = func_190();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_92())
		{
			return 0;
		}
	}
	vLocal_49 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			vVar1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_163())
			{
				return 0;
			}
		}
		if (!Global_104555.f_9055)
		{
			return 0;
		}
		if (func_182(0))
		{
			return 0;
		}
		if (func_159())
		{
			return 0;
		}
		if (func_237())
		{
			return 0;
		}
		if (Global_104544 != -1)
		{
			return 0;
		}
		if (func_10(func_114()))
		{
			if (func_153(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !bParam4)
		{
			if ((vVar1.z - vLocal_49.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_236(iParam1))
		{
			return 0;
		}
		if (func_10(func_114()))
		{
			if (func_235(func_114()) == 4 || func_235(func_114()) == 5)
			{
				return 0;
			}
		}
		if (func_10(func_114()))
		{
			if (!func_234(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_233(Global_104555.f_24965.f_43[iParam1]))
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
		if (func_232())
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
		if (!func_130(4))
		{
			return 0;
		}
		if (!func_108(5))
		{
			return 0;
		}
		if (func_231(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_231(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_236(30) && !func_231(30, 0))
		{
			if (iParam1 != 30)
			{
				if (system::vdist2(vVar1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_10(func_114()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_104555.f_2353.f_539.f_2280[iVar2 /*3*/] };
				iVar4 = Global_104555.f_2353.f_539.f_2276[iVar2];
				if (func_230(iVar4))
				{
					if (func_208(iVar2))
					{
						if (!func_59(vVar3, 0f, 0f, 0f, 0))
						{
							if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vVar3) < (210f * 210f))
							{
								if (func_114() != iVar2)
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

bool func_208(int iParam0)//Position - 0xEB18
{
	int iVar0;
	
	iVar0 = Global_104555.f_2353.f_539.f_2276[iParam0];
	return func_209(iVar0);
}

int func_209(int iParam0)//Position - 0xEB39
{
	return func_210(iParam0, 1);
}

int func_210(int iParam0, int iParam1)//Position - 0xEB48
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_230(iParam0))
	{
		return 0;
	}
	func_211(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_211(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xEB9B
{
	func_212(func_223(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_212(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xEBB9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_222(iParam0, iParam1))
	{
		iVar0 = func_221(iParam1);
		iVar1 = func_219(iParam0);
		iVar2 = (func_219(iParam0) - func_219(iParam1));
		iVar3 = (func_221(iParam0) - func_221(iParam1));
		iVar4 = (func_218(iParam0) - func_218(iParam1));
		iVar5 = (func_217(iParam0) - func_217(iParam1));
		iVar6 = (func_216(iParam0) - func_216(iParam1));
		iVar7 = (func_215(iParam0) - func_215(iParam1));
	}
	else
	{
		iVar0 = func_221(iParam0);
		iVar1 = func_219(iParam1);
		iVar2 = (func_219(iParam1) - func_219(iParam0));
		iVar3 = (func_221(iParam1) - func_221(iParam0));
		iVar4 = (func_218(iParam1) - func_218(iParam0));
		iVar5 = (func_217(iParam1) - func_217(iParam0));
		iVar6 = (func_216(iParam1) - func_216(iParam0));
		iVar7 = (func_215(iParam1) - func_215(iParam0));
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
		iVar4 = (iVar4 + func_214(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_213(system::to_float(iVar0 + 1), 0f, 12f));
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

float func_213(float fParam0, float fParam1, float fParam2)//Position - 0xEDBA
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

int func_214(int iParam0, int iParam1)//Position - 0xEDFC
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

int func_215(int iParam0)//Position - 0xEE9E
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_216(int iParam0)//Position - 0xEEB1
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_217(int iParam0)//Position - 0xEEC4
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_218(int iParam0)//Position - 0xEED7
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_219(int iParam0)//Position - 0xEEE9
{
	return (system::shift_right(iParam0, 26) & 31 * func_220(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_220(bool bParam0, int iParam1, int iParam2)//Position - 0xEF0E
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_221(int iParam0)//Position - 0xEF25
{
	return iParam0 & 15;
}

int func_222(int iParam0, int iParam1)//Position - 0xEF32
{
	int iVar0;
	int iVar1;
	
	if (!func_230(iParam1) || !func_230(iParam0))
	{
		return 1;
	}
	iVar0 = func_219(iParam0);
	iVar1 = func_219(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_221(iParam0);
	iVar1 = func_221(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_218(iParam0);
	iVar1 = func_218(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_217(iParam0);
	iVar1 = func_217(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_216(iParam0);
	iVar1 = func_216(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_215(iParam0);
	iVar1 = func_215(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_223()//Position - 0xF03E
{
	var uVar0;
	
	func_229(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_228(&uVar0, unk_0x95327550F0F2BE7C());
	func_227(&uVar0, unk_0x674C9438180770FE());
	func_226(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_225(&uVar0, unk_0xEAF455949B108589());
	func_224(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_224(var uParam0, int iParam1)//Position - 0xF084
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

void func_225(var uParam0, int iParam1)//Position - 0xF10A
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_226(var uParam0, int iParam1)//Position - 0xF13D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_221(*uParam0);
	iVar1 = func_219(*uParam0);
	if (iParam1 < 1 || iParam1 > func_214(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_227(var uParam0, int iParam1)//Position - 0xF18E
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_228(var uParam0, int iParam1)//Position - 0xF1C8
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_229(var uParam0, int iParam1)//Position - 0xF203
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_230(int iParam0)//Position - 0xF23F
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
	iVar0 = func_215(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_216(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_217(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_219(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_221(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_218(iParam0);
	if (iVar5 < 1 || iVar5 > func_214(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_231(int iParam0, int iParam1)//Position - 0xF31B
{
	if (unk_0xC80D31E4B587871C(Global_104555.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_232()//Position - 0xF33E
{
	func_175();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_233(int iParam0)//Position - 0xF366
{
	return func_222(func_223(), iParam0);
}

int func_234(int iParam0, int iParam1, int iParam2)//Position - 0xF378
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_114();
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

int func_235(int iParam0)//Position - 0xF45C
{
	if (!func_10(iParam0))
	{
		return 7;
	}
	return Global_104555.f_7658.f_919[iParam0];
}

bool func_236(int iParam0)//Position - 0xF480
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_92())
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

int func_237()//Position - 0xF4DE
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

void func_238(var uParam0, int iParam1)//Position - 0xF522
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

void func_239(struct<9> Param0, int iParam1, bool bParam2)//Position - 0xF539
{
	int iVar0;
	
	if (iLocal_269)
	{
		func_252(0);
		if (Global_25472)
		{
			unk_0x8810DC630928B398("AC_STOP");
		}
		func_251();
		func_100(0);
		unk_0x4C15495E88D71C61(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), true, 1);
		unk_0x3CDDC4760DBA4651();
		unk_0x02F80DDFB33C6E60(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), 0);
		unk_0xD855BC7E9D7EC87F(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), true);
		unk_0xBD88542932C8F3A2(unk_0x9EB17624F44A8DA4());
		unk_0x94BD6F0436473406(1f);
		if (!unk_0x191BE1BC8F26F3C1(iLocal_264, 0))
		{
			func_75(iLocal_264, 0, 145);
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_257))
		{
			if (unk_0xA5F6598E13F98E08(iLocal_257, "random@getawaydriver", "idle_a", 3) || unk_0xA5F6598E13F98E08(iLocal_257, "random@getawaydriver", "idle_2_hands_up", 3))
			{
				unk_0x6931076730A4AC5D(&iLocal_265);
				unk_0x12C9D41D52A560D6(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
				if (!unk_0x3AB6A1A9084FB0A4((*iParam1)[0]))
				{
					unk_0xD68E88A8E0BE8697(0, (*iParam1)[0], 150f, -1, 0, 0);
				}
				else if (!unk_0x3AB6A1A9084FB0A4((*iParam1)[1]))
				{
					unk_0xD68E88A8E0BE8697(0, (*iParam1)[1], 150f, -1, 0, 0);
				}
				unk_0x1B16DD5C115FE009(iLocal_265);
				unk_0xAB30B1CF01A198C1(iLocal_257, iLocal_265);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_265);
				unk_0xE9B3D12A64CC7C1A(iLocal_257, true);
			}
			unk_0x2CEA76A7F93740C6(iLocal_257);
			unk_0xAE6EBBBBD8B9FB30(iLocal_257, 17, true);
			unk_0x771A86309E0CA47B(iLocal_257, false);
		}
		if (!unk_0x3AB6A1A9084FB0A4((*iParam1)[0]))
		{
			unk_0xAE01EF4BC84AFE7C((*iParam1)[0], 317, true);
			unk_0xAE6EBBBBD8B9FB30((*iParam1)[0], 17, true);
			unk_0x88235B448509228B((*iParam1)[0]);
			unk_0x5C5D33A1B2711D21((*iParam1)[0], true);
			unk_0x771A86309E0CA47B((*iParam1)[0], false);
		}
		if (!unk_0x3AB6A1A9084FB0A4((*iParam1)[1]))
		{
			unk_0xAE01EF4BC84AFE7C((*iParam1)[1], 317, true);
			unk_0xAE6EBBBBD8B9FB30((*iParam1)[1], 17, true);
			unk_0x88235B448509228B((*iParam1)[1]);
			unk_0x5C5D33A1B2711D21((*iParam1)[1], true);
			unk_0x771A86309E0CA47B((*iParam1)[1], false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_259)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_259[iVar0]))
			{
				unk_0x771A86309E0CA47B(iLocal_259[iVar0], false);
			}
			iVar0++;
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_260[0]))
		{
			unk_0x9E058151726E58DE(iLocal_260[0], joaat("weapon_pistol"), -1, false, true);
			unk_0x771A86309E0CA47B(iLocal_260[0], false);
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_260[1]))
		{
			unk_0x9E058151726E58DE(iLocal_260[1], joaat("weapon_pistol"), -1, false, true);
			unk_0x771A86309E0CA47B(iLocal_260[1], false);
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_260[2]))
		{
			unk_0x9E058151726E58DE(iLocal_260[2], joaat("weapon_pistol"), -1, false, true);
			unk_0x771A86309E0CA47B(iLocal_260[2], false);
		}
		if (!bParam2)
		{
			if (!unk_0x3AB6A1A9084FB0A4((*iParam1)[0]))
			{
				unk_0xFC5999E8B820470E((*iParam1)[0], func_179(unk_0x9EB17624F44A8DA4()), 200f, -1, 0, 0);
			}
			if (!unk_0x3AB6A1A9084FB0A4((*iParam1)[1]))
			{
				unk_0xFC5999E8B820470E((*iParam1)[1], func_179(unk_0x9EB17624F44A8DA4()), 200f, -1, 0, 0);
			}
		}
		if (!iLocal_218)
		{
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			iLocal_218 = 1;
		}
		func_65(iLocal_51);
		if (unk_0xA6DECE14FC9A8C51(iLocal_256))
		{
			unk_0xE30CF11C0EE14316(&iLocal_256);
		}
		func_65(iLocal_52);
		func_127(0);
		func_140(0, Param0);
	}
	func_240(-1);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_240(int iParam0)//Position - 0xF8AD
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_190();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_200())
	{
		func_244(iParam0);
		unk_0x218409883979C46E(0, 0);
		Global_104546 = unk_0x53C562FD2B9E3AB0();
		func_243(30000);
		StringCopy(&cVar0, func_242(Global_104544, 1), 64);
		if (func_189(Global_104544) > 0)
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
	func_241(&Global_25292);
	Global_104545 = 0;
	func_206(-1);
}

void func_241(var uParam0)//Position - 0xF962
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

char* func_242(int iParam0, bool bParam1)//Position - 0xF99F
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

void func_243(int iParam0)//Position - 0xFBE8
{
	Global_36412 = (unk_0x53C562FD2B9E3AB0() + iParam0);
}

void func_244(int iParam0)//Position - 0xFBFA
{
	func_245(iParam0, 0, func_250(iParam0));
}

void func_245(int iParam0, int iParam1, int iParam2)//Position - 0xFC0F
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_223();
	func_248(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_247(iParam0, &uVar0);
	Var1 = { func_246(&uVar0) };
}

struct<16> func_246(var uParam0)//Position - 0xFC3E
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_217(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_216(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_215(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_218(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_221(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_219(*uParam0), 64);
	return Var0;
}

void func_247(int iParam0, var uParam1)//Position - 0xFD0F
{
	Global_104555.f_24965.f_43[iParam0] = *uParam1;
}

void func_248(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xFD27
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_219(*uParam0);
	iVar1 = func_221(*uParam0);
	iVar2 = func_218(*uParam0);
	iVar3 = func_217(*uParam0);
	iVar4 = func_216(*uParam0);
	iVar5 = func_215(*uParam0);
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
	iVar6 = func_214(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_214(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_249(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_249(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xFEA9
{
	func_229(uParam0, iParam1);
	func_228(uParam0, iParam2);
	func_227(uParam0, iParam3);
	func_225(uParam0, iParam5);
	func_226(uParam0, iParam4);
	func_224(uParam0, iParam6);
}

int func_250(int iParam0)//Position - 0xFEE1
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

void func_251()//Position - 0x10086
{
	Global_25468 = 0;
	Global_25469 = 0;
	Global_25471 = 0;
	Global_25472 = 0;
	Global_25473 = 0;
}

void func_252(bool bParam0)//Position - 0x100A2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		func_115(iVar0, bParam0);
		iVar0++;
	}
}

