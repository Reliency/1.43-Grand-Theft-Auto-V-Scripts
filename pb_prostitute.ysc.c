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
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	vector3 vLocal_56 = { 0f, 0f, 0f };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	char* sLocal_61 = NULL;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	vector3 vLocal_88 = { 0f, 0f, 0f };
	vector3 vLocal_89 = { 0f, 0f, 0f };
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 16;
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
	var uLocal_281 = 1;
	var uLocal_282 = 0;
	int iLocal_283[3] = { 0, 0, 0 };
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	var uLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299[4] = { 0, 0, 0, 0 };
	struct<7> Local_300[4];
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
	var uLocal_317 = 10;
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
	var uLocal_328 = 2;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 8;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 8;
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
	float fLocal_351 = 0f;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 15;
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
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
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
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 1;
	int iLocal_629 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	
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
	vLocal_56 = { 0f, 0f, 0f };
	iLocal_72 = -1;
	iLocal_74 = -1;
	iLocal_75 = -1;
	iLocal_76 = -1;
	iLocal_77 = -1;
	iLocal_78 = -1;
	iLocal_79 = -1;
	iLocal_80 = -1;
	iLocal_82 = -1;
	iLocal_84 = -1;
	iLocal_85 = -1;
	iLocal_284 = -1;
	fLocal_351 = ((0,05f + 0,275f) - 0,01f);
	if (Global_3)
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	if (unk_0x3A711520F83BAE98())
	{
		if (func_533(unk_0x9EB17624F44A8DA4(), 1))
		{
			unk_0x96A3D9A8A4C7AFD4();
		}
		if (func_532(unk_0x9EB17624F44A8DA4(), 1))
		{
			unk_0x96A3D9A8A4C7AFD4();
		}
	}
	if (func_531(13) || func_531(14))
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	if (!func_530() && !unk_0x3A711520F83BAE98())
	{
		if (unk_0x7D9C4B359376D38A(35))
		{
			func_521();
			func_520(1);
			func_516(&uLocal_355);
		}
	}
	system::wait(0);
	iLocal_90 = iScriptParam_629;
	if (unk_0x3A711520F83BAE98())
	{
		func_515();
		unk_0xAEA89A7E72415961(2, 0, unk_0x9EB17624F44A8DA4());
		func_510(0, -1, 0);
		unk_0x941BE77305BB5695(0);
	}
	func_509();
	func_508(128);
	while (iLocal_60)
	{
		bVar0 = true;
		func_505(&uLocal_355);
		if (func_530())
		{
			if (func_504(1024))
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					if (unk_0x5507A29F391CCC1F(unk_0xFC1458A37D98B502()) && unk_0xF0D051E82D0DB8C2(unk_0xFC1458A37D98B502()))
					{
						func_508(1024);
						unk_0x8A92C5AE18686726(unk_0xFC1458A37D98B502());
					}
				}
			}
			if (!func_504(1024) && func_504(2048))
			{
				unk_0x96A3D9A8A4C7AFD4();
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_90))
			{
				bVar0 = false;
			}
			else if (!unk_0xA0BF73C5030D3F60(iLocal_90))
			{
				bVar0 = false;
				unk_0xC8DAB4CEBB9AB263(iLocal_90);
			}
		}
		if (!func_530() || !func_504(2048))
		{
			func_497();
			if (func_530())
			{
				func_496();
				if (func_504(128))
				{
					iLocal_60 = 0;
				}
			}
			if (func_491())
			{
				if (bVar0)
				{
					if (iLocal_285 > 0)
					{
						func_486(&uLocal_355);
					}
					func_484();
					func_482();
					switch (iLocal_285)
					{
						case 0:
							if (iLocal_284 == -1)
							{
								if (unk_0x667F26736EE4E399(iLocal_90))
								{
									iLocal_284 = func_481();
								}
								else if (func_479())
								{
									iLocal_284 = 4;
								}
							}
							else if (func_474())
							{
								if (func_473())
								{
									if (func_530())
									{
										if (unk_0xA0BF73C5030D3F60(iLocal_90))
										{
											unk_0x2EA90674750EA01E(iLocal_90, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
										}
										else
										{
											unk_0xC8DAB4CEBB9AB263(iLocal_90);
										}
									}
									else
									{
										unk_0x2EA90674750EA01E(iLocal_90, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
									}
								}
								iLocal_285 = 1;
								func_472("Prostitue: moving to PROS_PB_CUSTOMER_DETERMINE_TYPE");
							}
							break;
						
						case 1:
							if (func_471(iLocal_49, 4096))
							{
								func_470();
							}
							if (func_469())
							{
								iLocal_285 = 2;
								func_472("Prostitue: moving to PROS_PB_CUSTOMER_PLAYER");
							}
							if (func_465())
							{
								iLocal_285 = 3;
								func_463(&iLocal_49, 64);
								Global_25385 = 1;
								func_472("Prostitue: moving to PROS_PB_CUSTOMER_OTHER");
							}
							break;
						
						case 2:
							func_91(&uLocal_355);
							break;
						
						case 3:
							func_3();
							break;
						
						default:
							break;
						}
				}
			}
			else
			{
				func_2(0);
			}
			func_1();
		}
		system::wait(0);
	}
	if (func_471(iLocal_49, 2))
	{
	}
	func_472(" Something forced this exit!!!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	func_521();
	func_516(&uLocal_355);
}

void func_1()//Position - 0x361
{
}

void func_2(bool bParam0)//Position - 0x369
{
	if (bParam0)
	{
		iLocal_60 = 1;
	}
	else
	{
		iLocal_60 = 0;
	}
}

void func_3()//Position - 0x37F
{
	if (iLocal_286 > 0)
	{
		if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_91))
			{
				if (!unk_0xA8D0477084E86A92(iLocal_91, iLocal_92, 0))
				{
					func_90();
				}
			}
		}
	}
	if (!unk_0x6ADD12BF4D6D2587(iLocal_91) || unk_0x191BE1BC8F26F3C1(iLocal_91, 0))
	{
		func_89(15);
	}
	switch (iLocal_286)
	{
		case 0:
			if (!iLocal_287 == 0)
			{
				iLocal_286 = 1;
			}
			break;
		
		case 1:
			func_83();
			break;
		
		case 2:
			func_82();
			break;
		
		case 3:
			func_65();
			break;
		
		case 4:
			func_56();
			break;
		
		case 5:
			func_53();
			break;
		
		case 6:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_91))
			{
				if (unk_0x78F50AA8F955BEFC(iLocal_90, 242628503) == 7)
				{
					iLocal_63 = unk_0x53C562FD2B9E3AB0();
					iLocal_64 = (iLocal_63 - iLocal_62);
					if (iLocal_64 >= 10000 || !unk_0x21B6FFFD04C9FF3A(iLocal_90, iLocal_91, 12f, 12f, 5f, 0, 1, 0))
					{
						func_472("prostitute WAITING TO END");
						func_90();
					}
				}
			}
			else
			{
				func_90();
			}
			break;
		
		case 7:
			if (!unk_0x9C0571C926F68BED(func_52(0), func_52(1), func_52(2), func_52(3)))
			{
				unk_0x590D9654A4367AA1(func_52(0), func_52(1), func_52(2), func_52(3));
			}
			else
			{
				unk_0x87A3E70B0AB01608(iLocal_91, iLocal_92, vLocal_88, (unk_0x617EA99D340A37ED(iLocal_92) * 0,65f), 0, 0, 786859, 4f, -1f);
				iLocal_286 = 8;
			}
			break;
		
		case 8:
			if (system::vdist2(vLocal_88, unk_0xB3328BA8976B416C(iLocal_90, 1)) < 25f && unk_0x78F50AA8F955BEFC(iLocal_91, -1817882002) != 1)
			{
				iLocal_288 = unk_0x63A6486593EC7EC3(1, 3);
				iLocal_286 = 11;
			}
			if (func_49(iLocal_91))
			{
				func_89(15);
			}
			break;
		
		case 11:
			func_4();
			break;
		
		case 12:
			func_89(15);
			break;
		
		case 15:
			if (unk_0x6ADD12BF4D6D2587(iLocal_90) && unk_0x6ADD12BF4D6D2587(iLocal_92))
			{
				if (unk_0xA8D0477084E86A92(iLocal_90, iLocal_92, 0))
				{
					if (!unk_0x191BE1BC8F26F3C1(iLocal_91, 0))
					{
						if (unk_0x78F50AA8F955BEFC(iLocal_91, -828834893) != 1)
						{
							unk_0x16416C5B54FDBCBB(iLocal_90, 0, 16842752);
						}
					}
				}
				else
				{
					func_2(0);
				}
			}
			break;
	}
}

void func_4()//Position - 0x5BF
{
	switch (iLocal_293)
	{
		case 0:
			unk_0xF7CC8DAB38C5CAEA(iLocal_90, 0,916f);
			if (func_36(iLocal_91))
			{
				func_34(&iLocal_113);
				iLocal_293 = 1;
			}
			break;
		
		case 1:
			if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), unk_0xB3328BA8976B416C(iLocal_90, 0)) < 22500f)
			{
				func_32();
			}
			func_29(iLocal_92);
			if (func_27(iLocal_91))
			{
				func_11(&uLocal_116, "pbproau", "pbpro_pic", 4, 0, 0, 0);
				func_89(15);
			}
			if (func_7(&iLocal_113) > 1f)
			{
				if (unk_0x78F50AA8F955BEFC(iLocal_90, 242628503) == 7)
				{
					func_5(&iLocal_49, 512);
					iLocal_293 = 3;
				}
			}
			break;
		
		case 3:
			func_89(15);
			break;
		
		case 5:
			func_89(15);
			break;
	}
}

void func_5(int iParam0, int iParam1)//Position - 0x68D
{
	func_6(iParam0, iParam1);
}

void func_6(var uParam0, var uParam1)//Position - 0x69D
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

float func_7(int iParam0)//Position - 0x6B2
{
	if (func_10(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xC80D31E4B587871C(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_8(bool bParam0)//Position - 0x6F1
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

bool func_9(int iParam0)//Position - 0x749
{
	return unk_0xC80D31E4B587871C(*iParam0, 2);
}

bool func_10(int iParam0)//Position - 0x759
{
	return unk_0xC80D31E4B587871C(*iParam0, 1);
}

int func_11(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x769
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_12(sParam2, iParam3, 0);
}

int func_12(char* sParam0, int iParam1, bool bParam2)//Position - 0x7B7
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
					func_25();
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
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_23();
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
				func_17();
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
				if (func_16())
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
			if (func_15())
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
			func_14();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_13();
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
		func_25();
	}
	return 0;
}

void func_13()//Position - 0xA83
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

void func_14()//Position - 0xAB5
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

int func_15()//Position - 0xB4A
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_16()//Position - 0xB71
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

void func_17()//Position - 0xC0A
{
	if (func_531(14))
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
		Global_14453 = func_18();
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

int func_18()//Position - 0xCAC
{
	func_19();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_19()//Position - 0xCC5
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_22(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_21(unk_0xFC1458A37D98B502());
			if (func_20(iVar0) && (!func_531(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_20(Global_104555.f_2353.f_539.f_4301))
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

bool func_20(int iParam0)//Position - 0xDC2
{
	return iParam0 < 3;
}

int func_21(int iParam0)//Position - 0xDCE
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_22(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_22(int iParam0)//Position - 0xE0B
{
	if (func_20(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_23()//Position - 0xE35
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

bool func_24(int iParam0, int iParam1)//Position - 0xE8D
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

void func_25()//Position - 0xEC8
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0xF1F
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

int func_27(int iParam0)//Position - 0xF75
{
	if (func_28())
	{
		if (!unk_0xB0B72E02922E26BE(unk_0x82FF3DFBC3965CC0(iParam0), unk_0xB3328BA8976B416C(iParam0, 1), 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_28()//Position - 0xF9F
{
	if (Global_16792)
	{
		return 1;
	}
	return 0;
}

void func_29(int iParam0)//Position - 0xFB5
{
	if (iLocal_288 != 1 && iLocal_288 != 2)
	{
		return;
	}
	if (func_31())
	{
		func_30(&iParam0);
	}
}

void func_30(var uParam0)//Position - 0xFDF
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0xB8DE76287EDC4957(*uParam0, 0))
	{
		vVar0 = { 0f, 0f, -0,1f };
		vVar1 = { 0f, 0f, 0f };
		unk_0xB8D9F55BA414128D(*uParam0, 1, vVar0, vVar1, 0, 1, 1, 1, 1, 0);
	}
}

bool func_31()//Position - 0x101A
{
	return unk_0x7B82209ED5D8E168(iLocal_90, 876132797);
}

void func_32()//Position - 0x102D
{
	unk_0x9B16F08390FCC31C();
	func_33();
}

void func_33()//Position - 0x103D
{
	Global_17162.f_134 = 1;
}

void func_34(int iParam0)//Position - 0x104B
{
	func_35(iParam0, 0f);
}

void func_35(int iParam0, float fParam1)//Position - 0x105A
{
	iParam0->f_1 = (func_8(unk_0xC80D31E4B587871C(*iParam0, 4)) - fParam1);
	unk_0x872F1C1F8587CCC7(iParam0, 1);
	unk_0x0EE72DB1CD8A3B86(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_36(int iParam0)//Position - 0x1088
{
	if (unk_0xAB019B170BF1309C(sLocal_61))
	{
		sLocal_61 = func_44(iParam0, 0, 0);
		return 0;
	}
	if (!unk_0x3A801AA34DD821BE(sLocal_61))
	{
		return 0;
	}
	else
	{
		func_37(iLocal_90, func_43(), 1, system::floor((15000f * (1f + (system::to_float(iLocal_70) / 2f)))), 1);
		if (iParam0 == unk_0xFC1458A37D98B502())
		{
			func_37(iParam0, func_43(), 0, system::floor((15000f * (1f + (system::to_float(iLocal_70) / 2f)))), 1);
		}
		func_472("anim_dict has loaded, triggering anims?");
		func_463(&iLocal_49, 512);
		return 1;
	}
	return 0;
}

void func_37(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x1117
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	
	if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		return;
	}
	iVar0 = unk_0xDFD115BB10FE46A9(iParam0, 1);
	if (!unk_0xB8DE76287EDC4957(iVar0, 0))
	{
		return;
	}
	iLocal_48 = unk_0x1FB367C588A91451();
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) && func_42(0, 1))
	{
		if (iLocal_48 != 4)
		{
			unk_0x0B51676846D7C57B(4);
		}
	}
	bVar1 = func_41(iVar0);
	sVar2 = func_44(iParam0, 0, 0);
	if (!unk_0x3A801AA34DD821BE(sVar2))
	{
		unk_0x6450931B826B49D9(sVar2);
	}
	else
	{
		unk_0x6931076730A4AC5D(&iVar3);
		unk_0x12C9D41D52A560D6(0, sVar2, func_38(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0x12C9D41D52A560D6(0, sVar2, func_38(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x12C9D41D52A560D6(0, sVar2, func_38(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0x12C9D41D52A560D6(0, sVar2, func_38(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x12C9D41D52A560D6(0, sVar2, func_38(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0x1B16DD5C115FE009(iVar3);
		unk_0xAB30B1CF01A198C1(iParam0, iVar3);
		if (bParam4)
		{
			unk_0xFAA3EF7FF92E1F9E(&iVar3);
		}
	}
}

char* func_38(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x125C
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(18);
					}
					else
					{
						sVar0 = func_40(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(8);
				}
				else
				{
					sVar0 = func_40(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(18);
				}
				else
				{
					sVar0 = func_39(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(8);
			}
			else
			{
				sVar0 = func_39(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(19);
					}
					else
					{
						sVar0 = func_40(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(9);
				}
				else
				{
					sVar0 = func_40(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(19);
				}
				else
				{
					sVar0 = func_39(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(9);
			}
			else
			{
				sVar0 = func_39(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(20);
					}
					else
					{
						sVar0 = func_40(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(10);
				}
				else
				{
					sVar0 = func_40(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(20);
				}
				else
				{
					sVar0 = func_39(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(10);
			}
			else
			{
				sVar0 = func_39(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(21);
					}
					else
					{
						sVar0 = func_40(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(11);
				}
				else
				{
					sVar0 = func_40(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(21);
				}
				else
				{
					sVar0 = func_39(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(11);
			}
			else
			{
				sVar0 = func_39(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(22);
					}
					else
					{
						sVar0 = func_40(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(12);
				}
				else
				{
					sVar0 = func_40(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(22);
				}
				else
				{
					sVar0 = func_39(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(12);
			}
			else
			{
				sVar0 = func_39(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_40(3);
				}
				else
				{
					sVar0 = func_40(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(3);
			}
			else
			{
				sVar0 = func_39(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_39(int iParam0)//Position - 0x153E
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_40(int iParam0)//Position - 0x16FC
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_41(int iParam0)//Position - 0x18BA
{
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		switch (unk_0xD9E4EECED37F4370(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
			case 2130662788:
			case -1546132012:
			case 1192783831:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_42(bool bParam0, bool bParam1)//Position - 0x1963
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = unk_0x8E8C94609BA4BEA9(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0x8E8C94609BA4BEA9(1) == 4;
		}
	}
	return bVar0;
}

bool func_43()//Position - 0x1992
{
	return iLocal_288 == 0;
}

char* func_44(int iParam0, bool bParam1, int iParam2)//Position - 0x199F
{
	int iVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(iParam0, 1);
		if (unk_0xB8DE76287EDC4957(iVar0, 0))
		{
			if (func_41(iVar0))
			{
				if ((!func_42(0, 1) || iParam2) && !bParam1)
				{
					return func_48();
				}
				else
				{
					return func_47();
				}
			}
		}
	}
	if ((!func_42(0, 1) || iParam2) && !bParam1)
	{
		return func_46();
	}
	return func_45();
}

char* func_45()//Position - 0x1A21
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_46()//Position - 0x1A2D
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_47()//Position - 0x1A39
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_48()//Position - 0x1A45
{
	return "mini@prostitutes@sexlow_veh";
}

int func_49(int iParam0)//Position - 0x1A51
{
	vector3 vVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0x27C8A4034A05DC21(iParam0) || !func_51(iParam0, iLocal_92, -1))
		{
			vVar0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
			unk_0xE17958D3FD0F9EE9(iParam0, 196624, true);
			if (func_50())
			{
				unk_0xFC5999E8B820470E(iParam0, vVar0, 300f, -1, 1, 1);
			}
			else if (!unk_0x191BE1BC8F26F3C1(unk_0x4EAE4CAB6D3C4502(iParam0), 0))
			{
				unk_0xD7F5B2902EBBD04E(iParam0, unk_0x4EAE4CAB6D3C4502(iParam0), 0, 16);
			}
			else
			{
				unk_0xFC5999E8B820470E(iParam0, vVar0, 300f, -1, 1, 1);
			}
		}
	}
	return 0;
}

int func_50()//Position - 0x1AE3
{
	if (unk_0xC80D31E4B587871C(unk_0x63A6486593EC7EC3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)//Position - 0x1B04
{
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0) && !unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		if (unk_0xAAA8D20859E2D36D(iParam0, iParam1))
		{
			if (unk_0x317536BCEA8FA6B0(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_52(int iParam0)//Position - 0x1B42
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xB3328BA8976B416C(iLocal_90, 1) };
	vVar1 = { vLocal_88 };
	if (iParam0 == 0)
	{
		if (vVar0.x < vVar1.x)
		{
			return (vVar0.x - 20f);
		}
		else
		{
			return (vVar1.x - 20f);
		}
	}
	if (iParam0 == 1)
	{
		if (vVar0.y < vVar1.y)
		{
			return (vVar0.y - 20f);
		}
		else
		{
			return (vVar1.y - 20f);
		}
	}
	if (iParam0 == 2)
	{
		if (vVar0.x > vVar1.x)
		{
			return (vVar0.x + 20f);
		}
		else
		{
			return (vVar1.x + 20f);
		}
	}
	if (vVar0.y > vVar1.y)
	{
		return (vVar0.y + 20f);
	}
	return (vVar1.y + 20f);
}

void func_53()//Position - 0x1C09
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_91))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
		{
			if (unk_0xA8D0477084E86A92(iLocal_91, iLocal_92, 0))
			{
				if (unk_0x78F50AA8F955BEFC(iLocal_90, 242628503) == 1)
				{
					if (unk_0x2332DC2174507412(iLocal_90) > 0)
					{
						if (unk_0xA8D0477084E86A92(iLocal_90, iLocal_92, 0))
						{
							func_472("prostitute WAITING TO END   - DRIVING OFF (WANDER)");
							unk_0x6931076730A4AC5D(&iLocal_95);
							unk_0x96247F0EC873C446(0, iLocal_92, 10f, 786603);
							unk_0x1B16DD5C115FE009(iLocal_95);
							unk_0xAB30B1CF01A198C1(iLocal_91, iLocal_95);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_95);
							vLocal_88 = { func_54(unk_0xB3328BA8976B416C(iLocal_90, 1)) };
							unk_0x6450931B826B49D9(func_44(iLocal_90, 0, 0));
							iLocal_286 = 7;
							iLocal_62 = unk_0x53C562FD2B9E3AB0();
						}
					}
				}
			}
			else
			{
				func_472("EXIT - OTHER OUT OF THE VEHICLE");
				func_90();
			}
		}
		else
		{
			func_472("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_472("EXIT - OTHER ped INJURED");
		func_90();
	}
}

Vector3 func_54(vector3 vParam0)//Position - 0x1CDA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (system::vdist2(vParam0, func_55(iVar1)) < system::vdist2(vParam0, func_55(iVar0)))
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	return func_55(iVar0);
}

Vector3 func_55(int iParam0)//Position - 0x1D22
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = { -1449,075f, -634,0139f, 29,094f };
			break;
		
		case 1:
			vVar0 = { -1266,291f, -1361,175f, 3,222f };
			break;
		
		case 2:
			vVar0 = { -227,0429f, 311,6679f, 91,1655f };
			break;
		
		case 3:
			vVar0 = { -1310,978f, -235,9881f, 41,1789f };
			break;
		
		case 4:
			vVar0 = { -545,299f, -874,6625f, 26,1981f };
			break;
		
		case 5:
			vVar0 = { -192,1116f, -1332,385f, 30,3304f };
			break;
		
		case 6:
			vVar0 = { 196,6188f, -1850,396f, 26,2005f };
			break;
		
		case 7:
			vVar0 = { 322,9744f, -1000,23f, 28,2401f };
			break;
		
		case 8:
			vVar0 = { 38,824f, -98,3984f, 55,2507f };
			break;
		
		case 9:
			vVar0 = { -1800,76f, -404,1213f, 43,8109f };
			break;
		
		case 10:
			vVar0 = { 1421,334f, -1618,83f, 58,3324f };
			break;
		
		case 11:
			vVar0 = { 983,5914f, -2360,14f, 29,5098f };
			break;
		
		case 12:
			vVar0 = { 97,9046f, -2501,28f, 5,0001f };
			break;
		
		case 13:
			vVar0 = { 1591,921f, 6516,841f, 16,3155f };
			break;
		
		case 14:
			vVar0 = { 1278,73f, 3624,059f, 32,0408f };
			break;
		
		case 15:
			vVar0 = { 2464,667f, 5526,815f, 44,2143f };
			break;
		
		case 16:
			vVar0 = { 2052,58f, 4637,477f, 39,642f };
			break;
		
		case 17:
			vVar0 = { 1435,608f, 4483,951f, 49,2513f };
			break;
		
		case 18:
			vVar0 = { 218,214f, 4439,288f, 66,9056f };
			break;
		
		case 19:
			vVar0 = { 16,9496f, 3632,35f, 39,2848f };
			break;
		
		case 20:
			vVar0 = { 2,0464f, 3293,74f, 40,2594f };
			break;
		
		case 21:
			vVar0 = { -1195,701f, 2639,13f, 15,1653f };
			break;
		
		case 22:
			vVar0 = { -1663,641f, 2477,778f, 30,9941f };
			break;
		
		case 23:
			vVar0 = { -2505,643f, 3677,825f, 12,1719f };
			break;
		
		case 24:
			vVar0 = { -2179,209f, 4264,236f, 47,9904f };
			break;
		
		case 25:
			vVar0 = { -758,9616f, 5612,78f, 29,4536f };
			break;
		
		case 26:
			vVar0 = { -276,8032f, 6327,188f, 31,4262f };
			break;
		
		case 27:
			vVar0 = { 1483,839f, 6366,199f, 22,6875f };
			break;
		
		case 28:
			vVar0 = { 949,013f, 3551,753f, 32,9687f };
			break;
		
		case 29:
			vVar0 = { 180,9372f, 3051,781f, 42,1131f };
			break;
		
		case 30:
			vVar0 = { -462,9046f, 6115,419f, 28,8805f };
			break;
		
		case 31:
			vVar0 = { -256,3564f, 6056,516f, 30,9808f };
			break;
	}
	return vVar0;
}

void func_56()//Position - 0x20B5
{
	float fVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_91))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
		{
			if (unk_0xA8D0477084E86A92(iLocal_91, iLocal_92, 0))
			{
				fVar0 = unk_0x90D5DFB054818BA7(iLocal_92);
				if (unk_0x21B6FFFD04C9FF3A(iLocal_91, iLocal_90, 15f, 15f, 5f, 0, 1, 0) && fVar0 <= 1f)
				{
					func_63(iLocal_90);
					iLocal_63 = unk_0x53C562FD2B9E3AB0();
					iLocal_64 = (iLocal_63 - iLocal_62);
					if (iLocal_64 >= iLocal_66)
					{
						if (func_530())
						{
							if (unk_0xA0BF73C5030D3F60(iLocal_91))
							{
								unk_0xCB3D88C918AA637C(iLocal_91);
							}
						}
						else
						{
							unk_0xCB3D88C918AA637C(iLocal_91);
						}
						iLocal_66 = unk_0x63A6486593EC7EC3(0, 10000);
						if (iLocal_66 > 2500)
						{
							unk_0xB8E08BD5B184DF4E(iLocal_90);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_95);
							unk_0x6931076730A4AC5D(&iLocal_95);
							unk_0x6F8C8278B7C06889(0, iLocal_92, -1, 0, 1f, 8388609, 0);
							unk_0x270054D97CD161A8(0, -1);
							unk_0x1B16DD5C115FE009(iLocal_95);
							unk_0xAB30B1CF01A198C1(iLocal_90, iLocal_95);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_95);
							func_472("other GIVES MONEY");
							iLocal_286 = 5;
						}
						else
						{
							func_62();
							func_57();
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_91))
							{
								if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
								{
									if (unk_0xA8D0477084E86A92(iLocal_91, iLocal_92, 0))
									{
										unk_0xFAA3EF7FF92E1F9E(&iLocal_95);
										unk_0x6931076730A4AC5D(&iLocal_95);
										unk_0x270054D97CD161A8(0, unk_0x63A6486593EC7EC3(500, 2000));
										unk_0x96247F0EC873C446(0, iLocal_92, 10f, 786603);
										unk_0x1B16DD5C115FE009(iLocal_95);
										unk_0xAB30B1CF01A198C1(iLocal_91, iLocal_95);
										unk_0xFAA3EF7FF92E1F9E(&iLocal_95);
										iLocal_62 = unk_0x53C562FD2B9E3AB0();
									}
								}
							}
							func_472("prostitute REFUSED MONEY 2");
							if (func_530())
							{
								if (unk_0xA0BF73C5030D3F60(iLocal_91))
								{
									unk_0xCB3D88C918AA637C(iLocal_91);
								}
							}
							else
							{
								unk_0xCB3D88C918AA637C(iLocal_91);
							}
							iLocal_286 = 6;
						}
					}
				}
				else
				{
					if (func_530())
					{
						if (unk_0xA0BF73C5030D3F60(iLocal_91))
						{
							unk_0xCB3D88C918AA637C(iLocal_91);
						}
					}
					else
					{
						unk_0xCB3D88C918AA637C(iLocal_91);
					}
					func_90();
				}
			}
			else
			{
				func_472("EXIT - OTHER OUT OF THE VEHICLE");
				if (func_530())
				{
					if (unk_0xA0BF73C5030D3F60(iLocal_91))
					{
						unk_0xCB3D88C918AA637C(iLocal_91);
					}
				}
				else
				{
					unk_0xCB3D88C918AA637C(iLocal_91);
				}
				func_90();
			}
		}
		else
		{
			func_472("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_472("EXIT - OTHER ped INJURED");
		func_90();
	}
}

int func_57()//Position - 0x22A7
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iLocal_90) || unk_0x3AB6A1A9084FB0A4(iLocal_90))
	{
		return 1;
	}
	if (!func_530())
	{
		if (unk_0x88DDBE9908752BF0(iLocal_90, 1))
		{
			unk_0x93F12E7D8D931858(iLocal_90, 1193033728, 0);
		}
		else if (func_471(iLocal_49, 4194304))
		{
			unk_0x6931076730A4AC5D(&iVar0);
			if (func_471(iLocal_73, 524288))
			{
				unk_0x12C9D41D52A560D6(0, func_61(iLocal_284), func_60(7), 8f, -1,5f, -1, 0, 0, 0, 0, 0);
			}
			func_58(1);
			unk_0x1B16DD5C115FE009(iVar0);
			unk_0xAB30B1CF01A198C1(iLocal_90, iVar0);
			unk_0xFAA3EF7FF92E1F9E(&iVar0);
			func_463(&iLocal_49, 16384);
			func_34(&iLocal_107);
		}
		return 1;
	}
	if (unk_0x88DDBE9908752BF0(iLocal_90, 1))
	{
		if (unk_0xA0BF73C5030D3F60(iLocal_90))
		{
			unk_0x93F12E7D8D931858(iLocal_90, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0xC8DAB4CEBB9AB263(iLocal_90);
		}
	}
	switch (iLocal_54)
	{
		case 0:
			if (func_471(iLocal_49, 4194304))
			{
				iLocal_54 = 1;
			}
			break;
		
		case 1:
			if (func_471(iLocal_73, 524288))
			{
				if (unk_0xA0BF73C5030D3F60(iLocal_90))
				{
					unk_0x12C9D41D52A560D6(iLocal_90, func_61(iLocal_284), func_60(7), 8f, -1,5f, -1, 0, 0, 0, 0, 0);
				}
				else
				{
					unk_0xC8DAB4CEBB9AB263(iLocal_90);
					return 0;
				}
			}
			iLocal_54 = 2;
			break;
		
		case 2:
			if (func_471(iLocal_73, 524288))
			{
				if (unk_0xA0BF73C5030D3F60(iLocal_90))
				{
					if (unk_0x78F50AA8F955BEFC(iLocal_90, -2017877118) == 7)
					{
						func_58(0);
						iLocal_54 = 3;
					}
				}
				else
				{
					unk_0xC8DAB4CEBB9AB263(iLocal_90);
				}
			}
			else if (unk_0xA0BF73C5030D3F60(iLocal_90))
			{
				func_58(0);
				iLocal_54 = 3;
			}
			else
			{
				unk_0xC8DAB4CEBB9AB263(iLocal_90);
			}
			break;
		
		case 3:
			func_463(&iLocal_49, 16384);
			func_34(&iLocal_107);
			return 1;
			break;
	}
	return 0;
}

void func_58(bool bParam0)//Position - 0x2477
{
	vector3 vVar0;
	
	if (((unk_0x7E7E2A70F316D41C(iLocal_90) || unk_0x667F26736EE4E399(iLocal_90)) || unk_0x249997FC5AF56FA8(iLocal_90, func_59(0))) || unk_0x249997FC5AF56FA8(iLocal_90, func_59(1)))
	{
		return;
	}
	vVar0 = { unk_0xB3328BA8976B416C(iLocal_90, 1) };
	if (!unk_0x70618273A570C7E0(vVar0, func_59(0), 20f, 1) && !unk_0x70618273A570C7E0(vVar0, func_59(1), 20f, 1))
	{
		if (bParam0)
		{
			unk_0x93F12E7D8D931858(0, 1193033728, 0);
		}
		else
		{
			unk_0x93F12E7D8D931858(iLocal_90, 1193033728, 0);
		}
		return;
	}
	if (!bParam0)
	{
		unk_0xADD2E58C002FD698(iLocal_90, vVar0, 20f, 0);
	}
	else
	{
		unk_0xADD2E58C002FD698(0, vVar0, 20f, 0);
	}
}

char* func_59(int iParam0)//Position - 0x253E
{
	if (iParam0 == 0)
	{
		return "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";
	}
	return "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS";
}

char* func_60(int iParam0)//Position - 0x2558
{
	switch (iParam0)
	{
		case 0:
			return "idle_intro";
			break;
		
		case 1:
			return "idle_a";
			break;
		
		case 2:
			return "idle_b";
			break;
		
		case 3:
			return "idle_c";
			break;
		
		case 4:
			return "idle_wait";
			break;
		
		case 5:
			return "idle_reject";
			break;
		
		case 8:
			return "idle_reject_loop_a";
			break;
		
		case 9:
			return "idle_reject_loop_b";
			break;
		
		case 10:
			return "idle_reject_loop_c";
			break;
		
		case 11:
			return "idle_outro";
			break;
		
		case 6:
			return "reject_2_idle";
			break;
		
		case 7:
			return "reject_outro";
			break;
	}
	return "";
}

char* func_61(int iParam0)//Position - 0x262B
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "mini@hookers_spcrackhead";
			break;
		
		case 1:
			sVar0 = "mini@hookers_spcokehead";
			break;
		
		case 3:
		case 4:
			sVar0 = "mini@hookers_spfrench";
			break;
		
		case 2:
		default:
			sVar0 = "mini@hookers_spvanilla";
			break;
	}
	return sVar0;
}

void func_62()//Position - 0x267E
{
	if (unk_0x3AB6A1A9084FB0A4(iLocal_90))
	{
		return;
	}
	if (!unk_0xAFFA17B5D5E2F248(iLocal_90))
	{
		if (func_18() == 2)
		{
			unk_0x74D45BB07BD51F8B(iLocal_90, "HOOKER_DECLINED_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0x74D45BB07BD51F8B(iLocal_90, "HOOKER_DECLINED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

void func_63(int iParam0)//Position - 0x26C5
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (func_64(iParam0))
		{
			unk_0x2217C45231E6A537(iParam0, 109, true);
		}
	}
}

int func_64(int iParam0)//Position - 0x26E9
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if ((unk_0xA5F6598E13F98E08(iParam0, func_61(iLocal_284), func_60(1), 3) || unk_0xA5F6598E13F98E08(iParam0, func_61(iLocal_284), func_60(2), 3)) || unk_0xA5F6598E13F98E08(iParam0, func_61(iLocal_284), func_60(3), 3))
		{
			return 1;
		}
	}
	return 0;
}

void func_65()//Position - 0x2748
{
	float fVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_91))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
		{
			if (unk_0xA8D0477084E86A92(iLocal_91, iLocal_92, 0))
			{
				if (unk_0x78F50AA8F955BEFC(iLocal_90, 242628503) == 1)
				{
					if (unk_0x2332DC2174507412(iLocal_90) > 1)
					{
						if (unk_0x21B6FFFD04C9FF3A(iLocal_90, iLocal_91, 20f, 20f, 10f, 0, 1, 0))
						{
							fVar0 = unk_0x90D5DFB054818BA7(iLocal_92);
							if (fVar0 <= 1f)
							{
								func_66(0);
								iLocal_62 = unk_0x53C562FD2B9E3AB0();
								iLocal_66 = unk_0x63A6486593EC7EC3(4000, 8000);
								func_472("prostitute proposition other in VEHICLE VEHICLE");
								iLocal_286 = 4;
							}
						}
						else
						{
							func_472("EXIT - OTHER IN VEHICLE OUT OF RANGE");
							func_90();
						}
					}
				}
			}
			else
			{
				func_472("EXIT - OTHER OUT OF THE VEHICLE");
				func_90();
			}
		}
		else
		{
			func_472("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_472("EXIT - OTHER ped INJURED");
		func_90();
	}
}

int func_66(bool bParam0)//Position - 0x2815
{
	int iVar0;
	int iVar1;
	
	if (!func_530())
	{
		if (bParam0)
		{
			unk_0x6CF99BCE94E6F07C(iLocal_90, "PROSTITUTE_GROUP", 0);
			func_81("PROSTITUTES_SOLICIT_SCENE");
		}
		func_67();
		if (func_471(iLocal_49, 4194304))
		{
			iVar0 = unk_0x63A6486593EC7EC3(1, 4);
			unk_0x6931076730A4AC5D(&iVar1);
			unk_0x12C9D41D52A560D6(0, func_61(iLocal_284), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, func_61(iLocal_284), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, func_61(iLocal_284), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x1B16DD5C115FE009(iVar1);
			unk_0xAB30B1CF01A198C1(iLocal_90, iVar1);
			unk_0xFAA3EF7FF92E1F9E(&iVar1);
		}
		return 1;
	}
	switch (iLocal_53)
	{
		case 0:
			if (bParam0)
			{
				unk_0x6CF99BCE94E6F07C(iLocal_90, "PROSTITUTE_GROUP", 0);
				func_81("PROSTITUTES_SOLICIT_SCENE");
			}
			func_67();
			iLocal_53 = 1;
			break;
		
		case 1:
			if (func_471(iLocal_49, 4194304))
			{
				if (unk_0xA0BF73C5030D3F60(iLocal_90))
				{
					unk_0x12C9D41D52A560D6(iLocal_90, func_61(iLocal_284), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 2;
				}
				else
				{
					unk_0xC8DAB4CEBB9AB263(iLocal_90);
				}
			}
			break;
		
		case 2:
			if (unk_0xA0BF73C5030D3F60(iLocal_90))
			{
				if (unk_0x78F50AA8F955BEFC(iLocal_90, -2017877118) == 7)
				{
					iVar0 = unk_0x63A6486593EC7EC3(1, 4);
					unk_0x12C9D41D52A560D6(iLocal_90, func_61(iLocal_284), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 3;
				}
			}
			else
			{
				unk_0xC8DAB4CEBB9AB263(iLocal_90);
			}
			break;
		
		case 3:
			if (unk_0xA0BF73C5030D3F60(iLocal_90))
			{
				if (unk_0x78F50AA8F955BEFC(iLocal_90, -2017877118) == 7)
				{
					unk_0x12C9D41D52A560D6(iLocal_90, func_61(iLocal_284), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
					iLocal_53 = 4;
				}
			}
			else
			{
				unk_0xC8DAB4CEBB9AB263(iLocal_90);
			}
			break;
		
		case 4:
			iLocal_53 = 0;
			return 1;
			break;
	}
	return 0;
}

void func_67()//Position - 0x29F7
{
	if (unk_0x3AB6A1A9084FB0A4(iLocal_90))
	{
		return;
	}
	if (!unk_0xAFFA17B5D5E2F248(iLocal_90))
	{
		switch (func_18())
		{
			case 0:
				if (!func_68(iLocal_90))
				{
					unk_0x74D45BB07BD51F8B(iLocal_90, "SOLICIT_MICHAEL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0x74D45BB07BD51F8B(iLocal_90, "SOLICIT_MICHAEL_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 1:
				if (!func_68(iLocal_90))
				{
					unk_0x74D45BB07BD51F8B(iLocal_90, "SOLICIT_FRANKLIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0x74D45BB07BD51F8B(iLocal_90, "SOLICIT_FRANKLIN_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 2:
				if (!func_68(iLocal_90))
				{
					unk_0x74D45BB07BD51F8B(iLocal_90, "SOLICIT_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0x74D45BB07BD51F8B(iLocal_90, "SOLICIT_TREVOR_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			}
	}
}

bool func_68(int iParam0)//Position - 0x2ABA
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	return func_69(iVar0);
}

int func_69(int iParam0)//Position - 0x2AD0
{
	if (func_70(iParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0)//Position - 0x2AE7
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_18() == 0)
	{
		iVar0 = Global_104555.f_10019.f_1[iParam0 /*11*/][0];
	}
	else if (func_18() == 1)
	{
		iVar0 = Global_104555.f_10019.f_1[iParam0 /*11*/][1];
	}
	else if (func_18() == 2)
	{
		iVar0 = Global_104555.f_10019.f_1[iParam0 /*11*/][2];
	}
	return iVar0;
}

int func_71(int iParam0)//Position - 0x2B52
{
	int iVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (func_70(iVar0) > 0)
			{
				if ((func_77(iParam0, iVar0) && func_73(iParam0, iVar0)) && func_72(iParam0, iVar0))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_72(int iParam0, int iParam1)//Position - 0x2BAD
{
	if (unk_0x90CE698681C6225E(iParam0, Global_104555.f_10019.f_1[iParam1 /*11*/].f_10))
	{
		return 1;
	}
	return 0;
}

int func_73(int iParam0, int iParam1)//Position - 0x2BD2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_74(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_74(int iParam0, int iParam1, int iParam2)//Position - 0x2BFF
{
	int iVar0;
	
	iVar0 = func_76(iParam2);
	return unk_0xDCC2BD4C56470D10(iParam0, iVar0) == func_75(iParam1, iParam2);
}

int func_75(int iParam0, int iParam1)//Position - 0x2C20
{
	if (func_69(iParam0))
	{
		return Global_104555.f_10019.f_1[iParam0 /*11*/].f_7[iParam1];
	}
	return -1;
}

int func_76(int iParam0)//Position - 0x2C48
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_77(int iParam0, int iParam1)//Position - 0x2C71
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_78(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_78(int iParam0, int iParam1, int iParam2)//Position - 0x2C9E
{
	int iVar0;
	
	iVar0 = func_80(iParam2);
	return unk_0x4CDD2D1D66ED1DE4(iParam0, iVar0) == func_79(iParam1, iParam2);
}

int func_79(int iParam0, int iParam1)//Position - 0x2CBF
{
	if (func_69(iParam0))
	{
		return Global_104555.f_10019.f_1[iParam0 /*11*/].f_4[iParam1];
	}
	return -1;
}

int func_80(int iParam0)//Position - 0x2CE7
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

void func_81(char* sParam0)//Position - 0x2D10
{
	if (!unk_0x771D0F8F56A5FE6C(sParam0))
	{
		unk_0xE859EF37EA7362D3(sParam0);
	}
}

void func_82()//Position - 0x2D29
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_91))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
		{
			if (unk_0xA8D0477084E86A92(iLocal_91, iLocal_92, 0))
			{
				fVar0 = unk_0x90D5DFB054818BA7(iLocal_92);
				if (unk_0x78F50AA8F955BEFC(iLocal_91, -272084098) == 7 || fVar0 <= 1f)
				{
					unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iLocal_92), &vVar2, &vVar1);
					vVar3 = { vVar1 - vVar2 };
					vVar3 = { vVar3 / Vector(2f, 2f, 2f) };
					vVar4 = { unk_0x3F90543934DCD7E6(iLocal_92, 0,2f, 0,2f, 0f) };
					vVar5 = { unk_0x3F90543934DCD7E6(iLocal_92, 0,2f, 0,2f, 0f) };
					vVar6 = { unk_0xB3328BA8976B416C(iLocal_90, 1) };
					if (system::vdist(vVar6, vVar5) < system::vdist(vVar6, vVar4))
					{
						vVar4 = { vVar5 };
					}
					unk_0x6931076730A4AC5D(&iLocal_95);
					unk_0x380C1E7B7740D618(0, vVar4.x, vVar4.y, vVar4.z, 1f, -1, 0,5f, 8192, 1193033728);
					unk_0xAC838A977FB6E6BC(0, iLocal_91, 0);
					unk_0x270054D97CD161A8(0, -1);
					unk_0x1B16DD5C115FE009(iLocal_95);
					unk_0xAB30B1CF01A198C1(iLocal_90, iLocal_95);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_95);
					func_472("prostitute ASKING OTHER FOR MONEY BY VEHICLE");
					iLocal_286 = 3;
				}
				else
				{
					func_472("WAITING FOR CUTSTOMER FINSIH TASK OR STOP");
				}
			}
			else
			{
				func_472("EXIT - OTHER OUT OF VEHICLE");
				func_90();
			}
		}
		else
		{
			func_472("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_472("EXIT - OTHER ped INJURED");
		func_90();
	}
}

void func_83()//Position - 0x2E7C
{
	vector3 vVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_91))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
		{
			if (unk_0xA8D0477084E86A92(iLocal_91, iLocal_92, 0))
			{
				if (func_85(&iLocal_92))
				{
					if (func_84(unk_0xB3328BA8976B416C(iLocal_91, 1), 1106247680))
					{
						return;
					}
					vVar0 = { unk_0xB3328BA8976B416C(iLocal_90, 1) };
					if (unk_0xC036F7DE6A42457A(vVar0, &vVar0, 8, 1077936128, 0))
					{
						unk_0x0F07FAE596C56D61(iLocal_91, 1f);
						unk_0xD2C4EA8476FCBB2E(iLocal_91, 0,2f);
						unk_0xB6B5B05C3E2A8A81(iLocal_91, 0,05f);
						unk_0x9E8EE202E802AC5B(iLocal_91, iLocal_92, vVar0, 0f, 3, 360f, 1);
						unk_0x60C06BFD037BB7CF(iLocal_91, iLocal_90, -1, 2048, 4);
						func_472("OTHER TOLD TO PULL OVER");
						iLocal_286 = 2;
					}
				}
				else
				{
					func_472("EXIT - Vehicle is not suitable");
					func_89(15);
				}
			}
			else
			{
				func_472("EXIT - OTHER OUT OF THE VEHICLE");
				func_89(15);
			}
		}
		else
		{
			func_472("EXIT - OTHER VEHICLE DEAD");
			func_89(15);
		}
	}
	else
	{
		func_472("EXIT - OTHER ped INJURED");
		func_89(15);
	}
}

bool func_84(vector3 vParam0, int iParam1)//Position - 0x2F71
{
	if (func_530())
	{
		return unk_0x25D10EDC93C33B77(vParam0 - Vector(iParam1, iParam1, iParam1), vParam0 + Vector(iParam1, iParam1, iParam1));
	}
	return (unk_0x8D44FCFF87C54F50(vParam0 - Vector(iParam1, iParam1, iParam1), vParam0 + Vector(iParam1, iParam1, iParam1)) || unk_0x25D10EDC93C33B77(vParam0 - Vector(iParam1, iParam1, iParam1), vParam0 + Vector(iParam1, iParam1, iParam1)));
}

int func_85(int iParam0)//Position - 0x2FD7
{
	int iVar0;
	int iVar1;
	
	if (unk_0xB8DE76287EDC4957(*iParam0, 0))
	{
		iVar0 = unk_0x82FF3DFBC3965CC0(*iParam0);
		if (func_88(iVar0, 0) && func_87(*iParam0))
		{
			if (unk_0x95EC8AE7E4F33F6E(*iParam0) > 0)
			{
				iVar1 = unk_0x1635D2AD9D560E95(*iParam0);
				if (((iVar1 == 0 && unk_0x8EE3A848975DDF21(*iParam0, 0, 0)) && (!unk_0x178CF89BBA808451(*iParam0, 1) && !unk_0x178CF89BBA808451(*iParam0, 0))) || unk_0x317536BCEA8FA6B0(*iParam0, 0, 0) == iLocal_90)
				{
					if (func_41(*iParam0))
					{
						if (!func_471(iLocal_49, 32768))
						{
							func_463(&iLocal_49, 32768);
							if (!func_471(iLocal_49, 8))
							{
								unk_0x7C0C9D9129095E19(func_86());
								func_463(&iLocal_49, 8);
							}
						}
					}
					else
					{
						if (func_471(iLocal_49, 32768))
						{
							func_5(&iLocal_49, 32768);
						}
						if (func_471(iLocal_49, 8))
						{
							if (unk_0xD9C499EAA1D3F82A(func_86()))
							{
								unk_0x736CC1A30C230950(func_86());
								func_5(&iLocal_49, 8);
							}
						}
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_86()//Position - 0x30E6
{
	return "clipset@veh@low@ps@female@base";
}

int func_87(int iParam0)//Position - 0x30F2
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (unk_0x96E226626970ABA3(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0xF928889F6E5C7677(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, unk_0xDC300345F8ACC8C3(iParam0, iVar1, unk_0xF928889F6E5C7677(iParam0, iVar1)), 16);
						iVar2 = unk_0x8B948C59217A295D(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == unk_0x8B948C59217A295D("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0xD9E4EECED37F4370(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case 1486715695:
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 1663892749:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
			case 2071837743:
			case 1482989244:
			case 2130662788:
			case -1546132012:
			case 1410462333:
			case 1192783831:
			case -1304848574:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
				return 1;
				break;
		}
		if (unk_0xD9E4EECED37F4370(iParam0) == 931866387 && unk_0x82FF3DFBC3965CC0(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
	}
	return 0;
}

int func_88(int iParam0, bool bParam1)//Position - 0x330D
{
	if ((((unk_0x428C7026AD2721BA(iParam0) || unk_0x849A8CFD71854E02(iParam0)) || unk_0xF9DDB1C0875FD9E0(iParam0)) || unk_0x3C4FA7AE145B3F72(iParam0)) || unk_0x125CDF69FA6EF560(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if ((((((((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2")) || iParam0 == 886810209) || iParam0 == -212993243) || iParam0 == -121446169) || iParam0 == 1909189272) || iParam0 == 1617472902) || iParam0 == 1031562256)
	{
		return 0;
	}
	return 1;
}

void func_89(int iParam0)//Position - 0x3465
{
	iLocal_286 = iParam0;
}

void func_90()//Position - 0x3472
{
	if (func_530())
	{
		if (unk_0xA0BF73C5030D3F60(iLocal_90))
		{
			unk_0xB8E08BD5B184DF4E(iLocal_90);
			unk_0xCB3D88C918AA637C(iLocal_90);
		}
	}
	else
	{
		unk_0xB8E08BD5B184DF4E(iLocal_90);
		unk_0xCB3D88C918AA637C(iLocal_90);
	}
	iLocal_91 = 0;
	iLocal_92 = 0;
	unk_0x12C9D41D52A560D6(iLocal_90, func_61(iLocal_284), func_60(4), 2f, -2f, -1, 1, unk_0x5B811202FCBE9E9D(0f, 0,9f), 0, 0, 0);
	func_89(0);
	iLocal_287 = 0;
	iLocal_285 = 1;
}

void func_91(var uParam0)//Position - 0x34DF
{
	if (!func_471(iLocal_49, 32))
	{
		iLocal_285 = 1;
	}
	if (iLocal_286 > 1 && iLocal_286 != 12)
	{
		if (!func_471(iLocal_49, 33554432))
		{
			if (func_530())
			{
				if (Global_1647211 || func_455())
				{
					func_454(0);
					func_463(&iLocal_49, 33554432);
				}
			}
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
			{
				if (func_471(iLocal_49, 1048576) || func_471(iLocal_49, 8192))
				{
					func_454(0);
					func_463(&iLocal_49, 33554432);
				}
			}
		}
	}
	switch (iLocal_286)
	{
		case 0:
			if (func_471(iLocal_49, 16384) || func_471(iLocal_49, 8388608))
			{
				if (!func_10(&iLocal_107))
				{
					func_453(&iLocal_107);
				}
				if (func_452(&iLocal_107, 25f))
				{
					func_5(&iLocal_49, 16384);
					func_5(&iLocal_49, 8388608);
				}
			}
			else if (iLocal_287 != 0 && !func_451("PROS_NO_MONEY"))
			{
				func_58(0);
				switch (func_18())
				{
					case 0:
						func_450(&uLocal_116, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
						break;
					
					case 1:
						func_450(&uLocal_116, 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 0, 1);
						break;
					
					case 2:
						func_450(&uLocal_116, 0, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
						break;
				}
				iLocal_286 = 1;
			}
			else
			{
				func_449();
				iLocal_287 = 2;
			}
			break;
		
		case 1:
			func_436(uParam0);
			break;
		
		case 2:
			func_423(uParam0);
			break;
		
		case 3:
			func_422();
			break;
		
		case 4:
			func_410(uParam0);
			break;
		
		case 5:
			func_399();
			break;
		
		case 6:
			func_398(uParam0);
			break;
		
		case 7:
			func_377();
			func_369();
			break;
		
		case 8:
			func_366();
			unk_0x4FB260623DD93924(0, 80, 1);
			unk_0x4FB260623DD93924(0, 0, 1);
			unk_0x54F90CB32317E720(unk_0x9EB17624F44A8DA4());
			func_223();
			func_222(uParam0);
			func_221(uParam0);
			func_220(uParam0);
			if (func_530())
			{
				func_217(uParam0);
			}
			break;
		
		case 9:
			func_214();
			break;
		
		case 10:
			func_211();
			break;
		
		case 11:
			unk_0x54F90CB32317E720(unk_0x9EB17624F44A8DA4());
			unk_0x4FB260623DD93924(0, 0, 1);
			unk_0x4FB260623DD93924(0, 80, 1);
			func_118();
			func_222(uParam0);
			func_221(uParam0);
			func_220(uParam0);
			func_115(uParam0);
			if (func_530())
			{
				unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 433, true);
				func_217(uParam0);
			}
			break;
		
		case 12:
			func_470();
			break;
		
		case 13:
			unk_0x4FB260623DD93924(0, 80, 1);
			unk_0x4FB260623DD93924(0, 0, 1);
			func_96();
			break;
		
		case 14:
			func_95();
			break;
		
		case 15:
			unk_0x4FB260623DD93924(0, 80, 1);
			unk_0x4FB260623DD93924(0, 0, 1);
			func_92(uParam0);
			break;
	}
}

void func_92(var uParam0)//Position - 0x37CC
{
	if (!func_530())
	{
		if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), func_44(unk_0xFC1458A37D98B502(), 0, 0), func_94(1), 3))
		{
			return;
		}
	}
	if (func_471(iLocal_49, 16))
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x673813CA895142E3(unk_0x9EB17624F44A8DA4(), 1);
			func_5(&iLocal_49, 16);
		}
	}
	if (func_471(iLocal_49, 2))
	{
		func_93(1);
		func_472("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
	}
	func_521();
	if (func_530())
	{
		func_516(uParam0);
	}
}

void func_93(int iParam0)//Position - 0x3849
{
}

var func_94(bool bParam0)//Position - 0x3851
{
	if (!func_471(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(6);
		}
		else
		{
			return func_39(7);
		}
	}
	if (bParam0)
	{
		return func_40(6);
	}
	return func_40(7);
}

void func_95()//Position - 0x3897
{
	if (!unk_0xAFFA17B5D5E2F248(unk_0xFC1458A37D98B502()))
	{
		if (iLocal_70 == 0)
		{
			if (func_471(iLocal_49, 134217728))
			{
				unk_0xE17958D3FD0F9EE9(iLocal_90, 32768, false);
				unk_0xE17958D3FD0F9EE9(iLocal_90, 196624, true);
			}
			unk_0x74D45BB07BD51F8B(iLocal_90, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_89(15);
		}
	}
}

void func_96()//Position - 0x38EA
{
	switch (iLocal_294)
	{
		case 0:
			if (!unk_0xAFFA17B5D5E2F248(iLocal_90) || func_114(&iLocal_101) > 4f)
			{
				func_109(iLocal_90);
				if (func_70(func_71(iLocal_90)) == 1)
				{
					iLocal_294 = 2;
				}
				else
				{
					func_108(&iLocal_101);
					func_107("PROS_RESPONSE");
					iLocal_294 = 1;
				}
			}
			break;
		
		case 1:
			func_106();
			if (unk_0xAFFA17B5D5E2F248(iLocal_90) || func_105())
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 256);
				func_463(&iLocal_49, 2048);
			}
			else
			{
				if (!func_10(&iLocal_101))
				{
					func_34(&iLocal_101);
				}
				if (func_114(&iLocal_101) > 15f || iLocal_297 != 0)
				{
					unk_0x3E80C2F7BC665259(1);
					func_104();
					iLocal_294 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_105())
			{
				iLocal_294 = 3;
			}
			break;
		
		case 3:
			func_99(0);
			func_97();
			func_89(15);
			break;
	}
}

int func_97()//Position - 0x39E5
{
	if (func_98(0))
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

bool func_98(bool bParam0)//Position - 0x3A30
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_99(bool bParam0)//Position - 0x3A5B
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_90))
	{
		if (unk_0x3E9CABD07B829173())
		{
			unk_0x68433819717660CF(&iLocal_90);
		}
		else
		{
			func_100(iLocal_90, bParam0);
		}
	}
}

void func_100(int iParam0, bool bParam1)//Position - 0x3A85
{
	int iVar0;
	float fVar1;
	
	if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), func_44(unk_0xFC1458A37D98B502(), 0, 0), func_103(1), 3))
	{
		unk_0x12C9D41D52A560D6(unk_0xFC1458A37D98B502(), func_44(unk_0xFC1458A37D98B502(), 0, 0), func_94(1), 4f, -8f, -1, 0, 0, 0, 0, 0);
	}
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (func_530())
		{
			if (unk_0xA0BF73C5030D3F60(iParam0))
			{
				unk_0xEF6D43420A388D54(iParam0);
			}
		}
		else
		{
			unk_0xEF6D43420A388D54(iParam0);
		}
		if (func_471(iLocal_49, 33554432))
		{
			unk_0xB8E08BD5B184DF4E(iParam0);
		}
		if (bParam1)
		{
			fVar1 = unk_0x5B811202FCBE9E9D(0,1f, 2f);
			if (fVar1 <= 0,25f)
			{
				func_463(&iLocal_49, 134217728);
			}
		}
		if (func_471(iLocal_49, 134217728))
		{
			unk_0xE17958D3FD0F9EE9(iParam0, 32768, true);
			unk_0xD68E88A8E0BE8697(iParam0, unk_0xFC1458A37D98B502(), 300f, -1, 1, 0);
		}
		else
		{
			unk_0xE17958D3FD0F9EE9(iParam0, 196624, true);
			unk_0xFAA3EF7FF92E1F9E(&iVar0);
			unk_0x6931076730A4AC5D(&iVar0);
			unk_0xD40A6DFCC31D221A(0, 1);
			if (unk_0x88DDBE9908752BF0(iParam0, 0))
			{
				if (!unk_0x9EC5112BB1C4047A(unk_0xDFD115BB10FE46A9(iParam0, 0)))
				{
					func_102(iParam0, 1);
				}
				else
				{
					if (unk_0xA5F6598E13F98E08(iParam0, func_44(iParam0, 0, 0), func_103(0), 3))
					{
						if (iLocal_70 > 0)
						{
							unk_0x12C9D41D52A560D6(0, func_44(iParam0, 0, 0), func_94(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						else
						{
							unk_0x12C9D41D52A560D6(0, func_44(iParam0, 0, 0), func_101(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
					}
					func_102(iParam0, 1);
				}
			}
			unk_0xD40A6DFCC31D221A(0, 0);
			unk_0x93F12E7D8D931858(0, 1193033728, 0);
			unk_0x1B16DD5C115FE009(iVar0);
			unk_0xAB30B1CF01A198C1(iParam0, iVar0);
			unk_0xFAA3EF7FF92E1F9E(&iVar0);
		}
		if (func_530())
		{
			if (unk_0xA28909307AD7716A(iLocal_90))
			{
				if (unk_0x0070DE1A1E73C71C(unk_0xE750D42CD4043E8B(iLocal_90)))
				{
					unk_0xE9B3D12A64CC7C1A(iParam0, true);
				}
			}
		}
		else
		{
			unk_0xE9B3D12A64CC7C1A(iParam0, true);
		}
	}
}

var func_101(bool bParam0)//Position - 0x3C53
{
	if (!func_471(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(4);
		}
		else
		{
			return func_39(5);
		}
	}
	if (bParam0)
	{
		return func_40(4);
	}
	return func_40(5);
}

void func_102(int iParam0, int iParam1)//Position - 0x3C99
{
	if (!unk_0x8EA8060A1C856203(iParam0, unk_0xDFD115BB10FE46A9(iParam0, 0), 0, 0, false))
	{
		unk_0x16416C5B54FDBCBB(0, 0, 16842752);
	}
	else
	{
		unk_0x16416C5B54FDBCBB(0, 0, iParam1);
	}
}

var func_103(bool bParam0)//Position - 0x3CCB
{
	if (!func_471(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(2);
		}
		else
		{
			return func_39(3);
		}
	}
	if (bParam0)
	{
		return func_40(2);
	}
	return func_40(3);
}

void func_104()//Position - 0x3D11
{
	int iVar0;
	
	iVar0 = unk_0x63A6486593EC7EC3(0, 1000);
	if ((iVar0 <= 333 && iLocal_297 == 0) || iLocal_297 == 3)
	{
		unk_0x74D45BB07BD51F8B(unk_0xFC1458A37D98B502(), "HOOKER_STORY_REVULSION_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (((iVar0 > 333 && iVar0 <= 666) && iLocal_297 == 0) || iLocal_297 == 1)
	{
		unk_0x74D45BB07BD51F8B(unk_0xFC1458A37D98B502(), "HOOKER_STORY_SARCASTIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (iLocal_297 == 0 || iLocal_297 == 2)
	{
		unk_0x74D45BB07BD51F8B(unk_0xFC1458A37D98B502(), "HOOKER_STORY_SYMPATHETIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_105()//Position - 0x3DB6
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_106()//Position - 0x3DD8
{
	if (iLocal_297 == 0)
	{
		unk_0xBC3B7443617858A0(false);
		unk_0x4FB260623DD93924(0, 99, 1);
		unk_0x4FB260623DD93924(0, 76, 1);
		unk_0x4FB260623DD93924(0, 80, 1);
		unk_0x01B48CB2F72AE113(2, 203);
		unk_0x01B48CB2F72AE113(2, 201);
		unk_0x01B48CB2F72AE113(2, 202);
		if (unk_0x58F436C557A0FD7A(2, 203))
		{
			unk_0x3E80C2F7BC665259(1);
			unk_0x4AFBCBFDE748D4E0(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_297 = 3;
		}
		else if (unk_0x58F436C557A0FD7A(2, 201))
		{
			unk_0x3E80C2F7BC665259(1);
			unk_0x4AFBCBFDE748D4E0(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_297 = 1;
		}
		else if (unk_0x58F436C557A0FD7A(2, 202))
		{
			unk_0x3E80C2F7BC665259(1);
			unk_0x4AFBCBFDE748D4E0(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_297 = 2;
		}
	}
}

void func_107(char* sParam0)//Position - 0x3E82
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 1, true, -1);
}

void func_108(int iParam0)//Position - 0x3E98
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

void func_109(int iParam0)//Position - 0x3EAE
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 > -1)
	{
		if (unk_0xAFFA17B5D5E2F248(iParam0))
		{
			unk_0x3D1231846F809DA4(iParam0);
		}
		if (!unk_0xAFFA17B5D5E2F248(iParam0))
		{
			func_111(iParam0);
			func_110(iVar0);
		}
	}
}

void func_110(int iParam0)//Position - 0x3EE9
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_70(iParam0);
	if (iVar0 < 6)
	{
		StringCopy(&vVar1, "pbpro_H", 24);
		StringIntConCat(&vVar1, iParam0 + 1, 24);
		StringConCat(&vVar1, "V", 24);
		StringIntConCat(&vVar1, iVar0, 24);
		func_11(&uLocal_116, "pbproau", &vVar1, 4, 0, 0, 0);
	}
}

void func_111(int iParam0)//Position - 0x3F31
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 > -1)
	{
		func_113(&uLocal_116, 4);
		func_450(&uLocal_116, 6, iParam0, func_112(iVar0), 0, 1);
	}
}

char* func_112(int iParam0)//Position - 0x3F5F
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "Hooker1";
			break;
		
		case 1:
			sVar0 = "Hooker2";
			break;
		
		case 2:
			sVar0 = "Hooker3";
			break;
		
		case 3:
			sVar0 = "Hooker4";
			break;
		
		case 4:
			sVar0 = "Hooker5";
			break;
		
		case 5:
			sVar0 = "Hooker6";
			break;
		
		case 6:
			sVar0 = "Hooker7";
			break;
		
		case 7:
			sVar0 = "Hooker8";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

void func_113(var uParam0, int iParam1)//Position - 0x3FEE
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

float func_114(int iParam0)//Position - 0x400C
{
	if (func_10(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xC80D31E4B587871C(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_115(var uParam0)//Position - 0x4048
{
	bool bVar0;
	int iVar1;
	
	if (!func_530())
	{
		return;
	}
	bVar0 = false;
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar1 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x317536BCEA8FA6B0(iVar1, -1, 0) != unk_0xFC1458A37D98B502())
				{
					bVar0 = true;
				}
				if (unk_0x317536BCEA8FA6B0(iVar1, 0, 0) != iLocal_90)
				{
					bVar0 = true;
				}
				if (unk_0x1635D2AD9D560E95(iVar1) > 2)
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					func_116(0);
					unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
					func_521();
					func_516(uParam0);
				}
			}
		}
	}
}

void func_116(bool bParam0)//Position - 0x40D4
{
	vector3 vVar0;
	
	if (bParam0)
	{
		vVar0 = { unk_0xDB824D597B53CC40(iLocal_93, 2) };
		unk_0xBB9A3C553EECB180(180f);
		unk_0x7C9705890EF6612E((-5,5f - vVar0.x), 1065353216);
	}
	unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
	func_117(&(Local_300[0 /*7*/]));
	func_117(&(Local_300[3 /*7*/]));
	func_117(&(Local_300[2 /*7*/]));
	func_117(&(Local_300[1 /*7*/]));
	if (func_451("PROS_CAM_TOG") || func_451("PROS_CAM_OC"))
	{
		unk_0x3E80C2F7BC665259(1);
	}
}

void func_117(var uParam0)//Position - 0x4158
{
	if (unk_0x8EA3C8E091EA5BA4(*uParam0))
	{
		unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
		if (unk_0xD85097DDDA5447BE(*uParam0))
		{
			unk_0x7849794435F39D49(*uParam0, false);
		}
		unk_0x02934BABFD4CD384(*uParam0, 0);
	}
}

void func_118()//Position - 0x4190
{
	if (unk_0xB8DE76287EDC4957(iLocal_93, 0))
	{
		unk_0xD6A0F9B258FE2F82(iLocal_93, 1);
	}
	if (iLocal_293 != 5)
	{
		if ((((((!func_210(iLocal_74) && !func_210(iLocal_75)) && !func_210(iLocal_76)) && !func_210(iLocal_77)) && !func_210(iLocal_78)) && !func_210(iLocal_79)) && !func_210(iLocal_80))
		{
			if (!unk_0x1ED974E122CB5C47(iLocal_90) || unk_0x9479D23F28CA059C(unk_0xFC1458A37D98B502()))
			{
				iLocal_293 = 5;
			}
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				if (!unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
				{
					iLocal_293 = 5;
				}
			}
		}
	}
	unk_0x553231E7FC3C570D(2);
	unk_0x4FB260623DD93924(2, 19, 1);
	unk_0x4FB260623DD93924(2, 37, 1);
	func_206(0);
	switch (iLocal_293)
	{
		case 0:
			if (func_530())
			{
				func_203(1085, -1);
			}
			func_34(&iLocal_113);
			func_202(func_43(), func_471(iLocal_49, 32768));
			iLocal_293 = 1;
			func_472("Moving to PROSTITUTE_SERVICE_LOOPING");
			break;
		
		case 1:
			unk_0x4FB260623DD93924(0, 48, 1);
			unk_0x4FB260623DD93924(0, 0, 1);
			func_195();
			func_188();
			func_127();
			if (!func_42(0, 1))
			{
				func_126();
			}
			if (func_7(&iLocal_113) > 1f)
			{
				if (func_125())
				{
					func_5(&iLocal_49, 512);
					iLocal_296 = 0;
					func_124("PROSTITUTES_SOLICIT_SCENE");
					func_124("PROSTITUTES_SEX_SCENE");
					func_124("PROSTITUTES_BJ_SCENE");
					func_124("PROSTITUTES_BJ_SPEECH_SCENE");
					if (iLocal_70 >= 3)
					{
						func_123();
						iLocal_293 = 5;
					}
					else
					{
						func_122();
						unk_0x0B51676846D7C57B(iLocal_48);
						iLocal_293 = 3;
					}
				}
			}
			break;
		
		case 2:
			unk_0x4FB260623DD93924(0, 48, 1);
			func_195();
			if (!func_42(0, 1))
			{
				func_126();
			}
			if (func_42(0, 1))
			{
				unk_0x4FB260623DD93924(0, 0, 1);
			}
			if (func_7(&iLocal_113) > 1f)
			{
				if (func_125())
				{
					func_5(&iLocal_49, 512);
					iLocal_296 = 0;
					func_124("PROSTITUTES_SOLICIT_SCENE");
					func_124("PROSTITUTES_SEX_SCENE");
					func_124("PROSTITUTES_BJ_SCENE");
					func_124("PROSTITUTES_BJ_SPEECH_SCENE");
					iLocal_70 = 3;
					if (iLocal_70 >= 3)
					{
						func_123();
						iLocal_293 = 5;
						func_108(&iLocal_98);
					}
				}
			}
			break;
		
		case 3:
			unk_0x4FB260623DD93924(0, 0, 1);
			if (!unk_0xAFFA17B5D5E2F248(iLocal_90))
			{
				func_124("PROSTITUTES_SOLICIT_SCENE");
				func_124("PROSTITUTES_BJ_SPEECH_SCENE");
				iLocal_292 = 0;
				iLocal_293 = 0;
				func_121();
				unk_0x0B51676846D7C57B(iLocal_48);
				iLocal_286 = 8;
			}
			break;
		
		case 5:
			unk_0x4FB260623DD93924(0, 0, 1);
			if (!unk_0xAFFA17B5D5E2F248(iLocal_90))
			{
				if (iLocal_70 > 0)
				{
					if (func_120(iLocal_90))
					{
						func_119();
					}
					else
					{
						func_454(0);
					}
				}
				else
				{
					func_472("PROSTITUTE CANCEL PROS NO LONGER IN VEHICLE");
					func_454(1);
				}
			}
			break;
	}
}

void func_119()//Position - 0x443D
{
	if (unk_0x3AB6A1A9084FB0A4(iLocal_90))
	{
		return;
	}
	if (!unk_0xAFFA17B5D5E2F248(unk_0xFC1458A37D98B502()))
	{
		if (iLocal_70 == 0)
		{
			unk_0x74D45BB07BD51F8B(unk_0xFC1458A37D98B502(), "HOOKER_DECLINE_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else if (func_120(iLocal_90))
		{
			func_34(&iLocal_101);
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 768);
			func_463(&iLocal_49, 2048);
			iLocal_286 = 13;
		}
	}
}

bool func_120(int iParam0)//Position - 0x44A0
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return func_70(iVar0) < 6;
}

void func_121()//Position - 0x44C2
{
	Global_2436181.f_1040.f_10 = 1;
}

void func_122()//Position - 0x44D4
{
	if (unk_0x3AB6A1A9084FB0A4(iLocal_90))
	{
		return;
	}
	if (!unk_0xAFFA17B5D5E2F248(iLocal_90))
	{
		unk_0x74D45BB07BD51F8B(iLocal_90, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_123()//Position - 0x4501
{
	if (unk_0x3AB6A1A9084FB0A4(iLocal_90))
	{
		return;
	}
	if (!unk_0xAFFA17B5D5E2F248(iLocal_90))
	{
		unk_0x74D45BB07BD51F8B(iLocal_90, "HOOKER_HAD_ENOUGH", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_124(char* sParam0)//Position - 0x452E
{
	if (unk_0x771D0F8F56A5FE6C(sParam0))
	{
		unk_0xE02E32C69260FBB7(sParam0);
	}
}

int func_125()//Position - 0x4545
{
	if (iLocal_296 == 6)
	{
		return 1;
	}
	return 0;
}

void func_126()//Position - 0x4559
{
	unk_0x5177B0E0C838D3E3();
	unk_0x6EA62DF7919D40F6();
}

void func_127()//Position - 0x4569
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (unk_0xAB019B170BF1309C(func_44(unk_0xFC1458A37D98B502(), 0, 0)))
	{
		return;
	}
	if (!unk_0x3A801AA34DD821BE(func_44(unk_0xFC1458A37D98B502(), 0, 0)))
	{
		return;
	}
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
	}
	bVar1 = func_43();
	bVar2 = func_471(iLocal_49, 32768);
	if (!func_42(0, 1))
	{
		func_182(&iLocal_81);
	}
	unk_0x4FB260623DD93924(2, 19, 1);
	unk_0x4FB260623DD93924(2, 37, 1);
	func_181(23, 1);
	switch (iLocal_296)
	{
		case 0:
			func_5(&iLocal_49, 256);
			if (!func_42(0, 1))
			{
				func_176(&iLocal_81);
			}
			func_175(iLocal_90, 0);
			if (!func_530())
			{
				func_174(bVar1, bVar2);
			}
			func_173(bVar1, bVar2);
			iLocal_296 = 1;
			break;
		
		case 1:
			func_172(iLocal_74);
			if (func_210(iLocal_75))
			{
				if (!func_471(iLocal_50, 4))
				{
					if (!func_530())
					{
						fVar0 = 0,925f;
					}
					else
					{
						fVar0 = 0,986f;
					}
					if (func_171(iLocal_75) >= fVar0)
					{
						func_463(&iLocal_50, 4);
					}
				}
			}
			if (func_210(iLocal_74))
			{
				if (!func_471(iLocal_50, 8))
				{
					if (!func_530())
					{
						fVar0 = 0,925f;
					}
					else
					{
						fVar0 = 0,986f;
					}
					if (func_171(iLocal_74) >= fVar0)
					{
						func_463(&iLocal_50, 8);
					}
				}
			}
			if (func_471(iLocal_50, 4) && func_471(iLocal_50, 8))
			{
				if (!func_530())
				{
					func_170(bVar1, bVar2);
				}
				func_169(bVar1, bVar2);
				iLocal_296 = 2;
			}
			break;
		
		case 2:
			func_172(iLocal_76);
			if (func_210(iLocal_76))
			{
				if (!func_471(iLocal_50, 16))
				{
					if (!func_530())
					{
						fVar0 = 0,98f;
					}
					else
					{
						fVar0 = 0,986f;
					}
					if (func_171(iLocal_76) >= fVar0)
					{
						func_463(&iLocal_50, 16);
					}
				}
			}
			if (func_471(iLocal_50, 16))
			{
				if (!func_530())
				{
					func_168(bVar1, bVar2);
				}
				func_167(bVar1, bVar2);
				iLocal_296 = 3;
			}
			break;
		
		case 3:
			func_172(iLocal_77);
			if (func_210(iLocal_77))
			{
				if (!func_471(iLocal_50, 64))
				{
					if (!func_471(iLocal_49, 16777216))
					{
						if (!func_530())
						{
							fVar0 = 0,975f;
						}
						else
						{
							fVar0 = 0,986f;
						}
						if (func_171(iLocal_77) >= fVar0)
						{
							func_463(&iLocal_49, 16777216);
							iLocal_71++;
						}
					}
					else
					{
						if (!func_530())
						{
							fVar0 = 0,975f;
						}
						else
						{
							fVar0 = 0,986f;
						}
						if (func_171(iLocal_77) < fVar0)
						{
							func_5(&iLocal_49, 16777216);
						}
					}
					if (iLocal_71 >= func_160(func_530(), func_166(), func_161()))
					{
						func_463(&iLocal_50, 64);
						func_5(&iLocal_49, 16777216);
					}
				}
			}
			else if (!func_471(iLocal_50, 64))
			{
				func_463(&iLocal_50, 64);
			}
			if (func_471(iLocal_50, 64))
			{
				if (!func_530())
				{
					func_159(bVar1, bVar2);
				}
				func_158(bVar1, bVar2);
				iLocal_296 = 4;
			}
			break;
		
		case 4:
			func_172(iLocal_78);
			if (func_210(iLocal_78))
			{
				if (!func_471(iLocal_50, 256))
				{
					if (!func_530())
					{
						fVar0 = 0,925f;
					}
					else
					{
						fVar0 = 0,986f;
					}
					if (func_171(iLocal_78) >= fVar0)
					{
						func_463(&iLocal_50, 256);
					}
				}
			}
			else if (!func_471(iLocal_50, 256))
			{
				func_463(&iLocal_50, 256);
			}
			if (func_471(iLocal_50, 256))
			{
				if (!func_530())
				{
					func_152(bVar1, bVar2);
				}
				func_150(bVar1, bVar2);
				iLocal_296 = 5;
			}
			break;
		
		case 5:
			func_172(iLocal_79);
			if (func_210(iLocal_79))
			{
				if (!func_471(iLocal_50, 1024))
				{
					if (!func_530())
					{
						fVar0 = 0,975f;
					}
					else
					{
						fVar0 = 0,986f;
					}
					if (func_171(iLocal_79) >= fVar0)
					{
						func_463(&iLocal_50, 1024);
					}
				}
			}
			else if (!func_471(iLocal_50, 1024))
			{
				func_463(&iLocal_50, 1024);
			}
			if (func_210(iLocal_80))
			{
				if (!func_471(iLocal_50, 2048))
				{
					if (!func_530())
					{
						fVar0 = 0,975f;
					}
					else
					{
						fVar0 = 0,986f;
					}
					if (func_171(iLocal_80) >= fVar0)
					{
						func_463(&iLocal_50, 2048);
					}
				}
			}
			else if (!func_471(iLocal_50, 2048))
			{
				func_463(&iLocal_50, 2048);
			}
			if (func_471(iLocal_50, 1024) && func_471(iLocal_50, 2048))
			{
				func_175(iLocal_90, 0);
				unk_0x12C9D41D52A560D6(iLocal_90, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_38(iLocal_296, 1, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_175(unk_0xFC1458A37D98B502(), -1);
				unk_0x12C9D41D52A560D6(unk_0xFC1458A37D98B502(), func_44(unk_0xFC1458A37D98B502(), 0, 0), func_38(iLocal_296, 0, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_116(1);
				iLocal_50 = 0;
				iLocal_71 = 0;
				iLocal_59 = 0;
				func_128();
				iLocal_296 = 6;
			}
			break;
	}
}

void func_128()//Position - 0x4A63
{
	int iVar0;
	
	if (iLocal_70 == 0 && !func_530())
	{
		if (func_21(unk_0xFC1458A37D98B502()) == 0)
		{
			func_149();
		}
		func_144(296, 0, 0);
		iVar0 = func_71(iLocal_90);
		if (iVar0 > -1)
		{
			func_143(iVar0);
		}
		else
		{
			func_135(iLocal_90);
		}
	}
	iLocal_70++;
	func_129();
}

void func_129()//Position - 0x4ABC
{
	switch (func_21(unk_0xFC1458A37D98B502()))
	{
		case 0:
			Global_104555.f_10019.f_90[0]++;
			func_130(0, 1, 1);
			break;
		
		case 1:
			Global_104555.f_10019.f_90[1]++;
			func_130(1, 1, 1);
			break;
		
		case 2:
			Global_104555.f_10019.f_90[2]++;
			func_130(2, 1, 1);
			break;
		
		case 3:
			func_130(3, 1, 1);
			break;
	}
}

void func_130(int iParam0, int iParam1, int iParam2)//Position - 0x4B5F
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
				iVar0 = func_134(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_131(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x4C4F
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_132(var uParam0)//Position - 0x4C7F
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_133();
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

int func_133()//Position - 0x4CB3
{
	return Global_1312736;
}

int func_134(int iParam0, int iParam1, int iParam2)//Position - 0x4CBF
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_132(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_135(int iParam0)//Position - 0x4CF1
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		return;
	}
	iVar0 = func_142();
	if (iVar0 == -1)
	{
		return;
	}
	func_143(iVar0);
	unk_0x296D39391436DC64(iParam0, func_140(iVar0));
	Global_104555.f_10019.f_1[iVar0 /*11*/].f_10 = unk_0x82FF3DFBC3965CC0(iParam0);
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar1 = iVar2;
		uVar3 = func_139(iParam0, iVar1);
		func_138(iVar0, iVar1, uVar3);
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar4 = iVar2;
		uVar3 = func_137(iParam0, iVar4);
		func_136(iVar0, iVar4, uVar3);
		iVar2++;
	}
}

void func_136(int iParam0, int iParam1, var uParam2)//Position - 0x4D90
{
	if (iParam0 > -1)
	{
		Global_104555.f_10019.f_1[iParam0 /*11*/].f_7[iParam1] = uParam2;
	}
}

int func_137(int iParam0, int iParam1)//Position - 0x4DB3
{
	return unk_0xDCC2BD4C56470D10(iParam0, func_76(iParam1));
}

void func_138(int iParam0, int iParam1, var uParam2)//Position - 0x4DC7
{
	if (iParam0 > -1)
	{
		Global_104555.f_10019.f_1[iParam0 /*11*/].f_4[iParam1] = uParam2;
	}
}

int func_139(int iParam0, int iParam1)//Position - 0x4DEA
{
	return unk_0x4CDD2D1D66ED1DE4(iParam0, func_80(iParam1));
}

var func_140(int iParam0)//Position - 0x4DFE
{
	return func_141(iParam0);
}

char* func_141(int iParam0)//Position - 0x4E0C
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "UPRO BABS";
			break;
		
		case 1:
			sVar0 = "UPRO DANA";
			break;
		
		case 2:
			sVar0 = "UPRO LIZZIE";
			break;
		
		case 3:
			sVar0 = "UPRO AMANDA";
			break;
		
		case 4:
			sVar0 = "UPRO ASHLEY";
			break;
		
		case 5:
			sVar0 = "UPRO KRISTEN";
			break;
		
		case 6:
			sVar0 = "UPRO SASHA";
			break;
		
		case 7:
			sVar0 = "UPRO JACQUELINE";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

int func_142()//Position - 0x4E9B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_70(iVar0) == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_143(int iParam0)//Position - 0x4EC6
{
	if (iParam0 > -1)
	{
		if (func_18() == 0)
		{
			Global_104555.f_10019.f_1[iParam0 /*11*/][0]++;
		}
		else if (func_18() == 1)
		{
			Global_104555.f_10019.f_1[iParam0 /*11*/][1]++;
		}
		else if (func_18() == 2)
		{
			Global_104555.f_10019.f_1[iParam0 /*11*/][2]++;
		}
	}
}

void func_144(int iParam0, int iParam1, int iParam2)//Position - 0x4F58
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
		func_148((891 + iParam0), 1, -1, 1);
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
		Global_104555.f_10164[iParam0 /*12*/].f_10 = iParam1;
		Global_104555.f_10164[iParam0 /*12*/].f_11 = iParam2;
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
		func_145();
	}
}

void func_145()//Position - 0x5040
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
		func_147(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_146() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_97();
				}
			}
		}
	}
}

int func_146()//Position - 0x5501
{
	return Global_25233;
}

int func_147(int iParam0, int iParam1)//Position - 0x550C
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

int func_148(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x555D
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
		iParam2 = func_133();
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

void func_149()//Position - 0x5A29
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_89440[iVar0] = Global_89440[iVar0 + 1];
		}
		else
		{
			Global_89440[iVar0] = unk_0x53C562FD2B9E3AB0();
		}
		iVar0++;
	}
}

void func_150(bool bParam0, bool bParam1)//Position - 0x5A6A
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_90, iLocal_79, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_38(4, 1, bParam0, bParam1), 0,7f, -0,7f, iVar0, 0, 0,7f, 0);
	func_151(unk_0xFC1458A37D98B502(), iLocal_80, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_38(4, 0, bParam0, bParam1), 0,7f, -0,7f, iVar0, 0, 0,7f, 0);
}

void func_151(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x5AE3
{
	if (func_530())
	{
		unk_0x9C39944AA129D284(iParam1);
	}
	else
	{
		unk_0x8E628F774C748D93(iParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, iParam8, iParam9);
	}
}

void func_152(bool bParam0, bool bParam1)//Position - 0x5B13
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_79, 1, 0, 0);
	func_153(iLocal_90, iLocal_79, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_38(4, 1, bParam0, bParam1), 0,7f, -0,7f, iVar0, 0, 0,7f);
	func_154(&iLocal_80, 0, 0, 0);
	func_153(unk_0xFC1458A37D98B502(), iLocal_80, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_38(4, 0, bParam0, bParam1), 0,7f, -0,7f, iVar0, 0, 0,7f);
}

void func_153(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)//Position - 0x5B9C
{
	if (func_530())
	{
		unk_0x7C92B99DB7D4962F(iParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, iParam8, 0);
	}
}

void func_154(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x5BC2
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	*iParam0 = func_157(vVar0, 0f, 0f, 0f, bParam3, bParam2, 2);
	if (iParam1 == 0)
	{
		func_156(*iParam0, iLocal_93, unk_0xD323488FDDE4A80F(iLocal_93, "seat_dside_f"));
	}
	else if (iParam1 == 1)
	{
		func_156(*iParam0, iLocal_93, unk_0xD323488FDDE4A80F(iLocal_93, "seat_pside_f"));
	}
	func_155(*iParam0, vVar0, 0f, 0f, 0f, 0);
}

void func_155(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3)//Position - 0x5C28
{
	if (!func_530())
	{
		unk_0xF3EF2C77B895F716(iParam0, vParam1, vParam2, iParam3);
	}
}

void func_156(int iParam0, int iParam1, int iParam2)//Position - 0x5C48
{
	if (unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		return;
	}
	if (func_530())
	{
		unk_0xC69B0307E3BA09EB(iParam0, iParam1, iParam2);
	}
	else
	{
		unk_0x56FEE2DE0493113C(iParam0, iParam1, iParam2);
	}
}

int func_157(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x5C7B
{
	int iVar0;
	
	if (func_530())
	{
		if (bParam2)
		{
			bParam3 = false;
		}
		iVar0 = unk_0x9CEC233AE69E2D39(vParam0, vParam1, iParam4, bParam2, bParam3, 1065353216, 0, 1065353216);
	}
	else
	{
		iVar0 = unk_0x8383F9C605E523B7(vParam0, vParam1, iParam4);
		unk_0x7122D672EBE0EA6E(iVar0, bParam2);
		unk_0xD0E12C501EE26329(iVar0, bParam3);
	}
	return iVar0;
}

void func_158(bool bParam0, bool bParam1)//Position - 0x5CD6
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_90, iLocal_78, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_38(3, 1, bParam0, bParam1), 0,7f, -0,7f, iVar0, 0, 0,7f, 0);
	func_151(unk_0xFC1458A37D98B502(), iLocal_78, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_38(3, 0, bParam0, bParam1), 0,7f, -0,7f, iVar0, 0, 0,7f, 0);
}

void func_159(bool bParam0, bool bParam1)//Position - 0x5D4F
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_78, 0, 0, 1);
	func_153(iLocal_90, iLocal_78, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_38(3, 1, bParam0, bParam1), 0,7f, -0,7f, iVar0, 0, 0,7f);
	func_153(unk_0xFC1458A37D98B502(), iLocal_78, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_38(3, 0, bParam0, bParam1), 0,7f, -0,7f, iVar0, 0, 0,7f);
}

int func_160(bool bParam0, int iParam1, int iParam2)//Position - 0x5DCF
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_161()//Position - 0x5DE6
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_162();
	if (iVar0 < 48)
	{
		iVar1 = 2;
	}
	else if (iVar0 >= 48 && iVar0 < 85)
	{
		iVar1 = 3;
	}
	else
	{
		iVar1 = 4;
	}
	return iVar1;
}

int func_162()//Position - 0x5E1E
{
	if (func_530())
	{
		return func_134(65, -1, 0);
	}
	return func_163(func_21(unk_0xFC1458A37D98B502()), 1);
}

var func_163(int iParam0, int iParam1)//Position - 0x5E48
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_164(iParam0, iParam1);
	unk_0xFA3CE529DBB66C85(iVar1, &uVar0, -1);
	return uVar0;
}

var func_164(int iParam0, int iParam1)//Position - 0x5E66
{
	var uVar0;
	var uVar1;
	
	func_165(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_165(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x5E7C
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_166()//Position - 0x60D3
{
	int iVar0;
	
	if (iLocal_288 != 0)
	{
		if (iLocal_59 < 2)
		{
			iVar0 = 3;
		}
		else if (iLocal_59 == 2)
		{
			iVar0 = 4;
		}
		else if (iLocal_59 == 3)
		{
			iVar0 = 5;
		}
		else
		{
			iVar0 = 6;
		}
	}
	else if (iLocal_59 < 3)
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	return iVar0;
}

void func_167(bool bParam0, bool bParam1)//Position - 0x611D
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_90, iLocal_77, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_38(2, 1, bParam0, bParam1), 0,7f, -0,7f, iVar0, 0, 0,7f, 0);
	func_151(unk_0xFC1458A37D98B502(), iLocal_77, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_38(2, 0, bParam0, bParam1), 0,7f, -0,7f, iVar0, 0, 0,7f, 0);
}

void func_168(bool bParam0, bool bParam1)//Position - 0x6196
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_77, 0, 1, 0);
	func_153(iLocal_90, iLocal_77, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_38(2, 1, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
	func_153(unk_0xFC1458A37D98B502(), iLocal_77, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_38(2, 0, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
}

void func_169(bool bParam0, bool bParam1)//Position - 0x6216
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_90, iLocal_76, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_38(1, 1, bParam0, bParam1), 0,7f, -0,7f, iVar0, 0, 0,7f, 0);
	func_151(unk_0xFC1458A37D98B502(), iLocal_76, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_38(1, 0, bParam0, bParam1), 0,7f, -0,7f, iVar0, 0, 0,7f, 0);
}

void func_170(bool bParam0, bool bParam1)//Position - 0x628F
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_76, 0, 0, 1);
	func_153(iLocal_90, iLocal_76, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_38(1, 1, bParam0, bParam1), 0,7f, -0,7f, iVar0, 0, 0,7f);
	func_153(unk_0xFC1458A37D98B502(), iLocal_76, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_38(1, 0, bParam0, bParam1), 0,7f, -0,7f, iVar0, 0, 0,7f);
}

float func_171(int iParam0)//Position - 0x630F
{
	float fVar0;
	
	if (func_530())
	{
		fVar0 = unk_0x463C4747B41E35A3(unk_0x45D90ED1F569A489(iParam0));
	}
	else
	{
		fVar0 = unk_0x463C4747B41E35A3(iParam0);
	}
	return fVar0;
}

void func_172(int iParam0)//Position - 0x6337
{
	if (!func_210(iParam0))
	{
		return;
	}
}

void func_173(bool bParam0, bool bParam1)//Position - 0x634C
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_90, iLocal_74, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_38(0, 1, bParam0, bParam1), 8f, -0,7f, iVar0, 0, 1000f, 0);
	func_151(unk_0xFC1458A37D98B502(), iLocal_75, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_38(0, 0, bParam0, bParam1), 8f, -0,7f, iVar0, 0, 1000f, 0);
}

void func_174(bool bParam0, bool bParam1)//Position - 0x63C5
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_74, 1, 0, 1);
	func_153(iLocal_90, iLocal_74, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_38(0, 1, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
	func_154(&iLocal_75, 0, 0, 1);
	func_153(unk_0xFC1458A37D98B502(), iLocal_75, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_38(0, 0, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
}

void func_175(int iParam0, int iParam1)//Position - 0x6446
{
	if (!unk_0xA8D0477084E86A92(iParam0, iLocal_93, 0))
	{
		if (!func_530())
		{
			unk_0xBB0358802AA14401(iParam0, iLocal_93, iParam1);
		}
		else if (!unk_0xA8D0477084E86A92(iParam0, iLocal_93, 0))
		{
			unk_0x6F8C8278B7C06889(iParam0, iLocal_93, -1, iParam1, 2f, 16, 0);
		}
	}
}

void func_176(int iParam0)//Position - 0x648C
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	uVar0 = func_178(func_179(2), unk_0xDCD8BDD2E10C660E(iLocal_93, unk_0xD323488FDDE4A80F(iLocal_93, "windscreen")));
	uVar1 = func_178(func_179(1), unk_0xDCD8BDD2E10C660E(iLocal_93, unk_0xD323488FDDE4A80F(iLocal_93, "windscreen")));
	vVar2 = { unk_0xDB824D597B53CC40(iLocal_93, 2) };
	fVar3 = unk_0xF0371FE6E2BF9599(iLocal_93);
	if (fVar3 >= 180f)
	{
		fVar4 = (fVar3 - 180f);
	}
	else
	{
		fVar4 = (fVar3 + 180f);
	}
	fVar5 = (-7f - vVar2.y);
	fVar6 = (-5f - vVar2.x);
	fVar7 = (-2,5f + vVar2.x);
	fVar8 = ((0f - (0,7f * vVar2.x)) + (0,3f * vVar2.y));
	if (!unk_0x8EA3C8E091EA5BA4(Local_300[2 /*7*/]))
	{
		func_177(&(Local_300[2 /*7*/]), func_179(2), fVar5, vVar2.x, uVar0, 50f);
	}
	if (!unk_0x8EA3C8E091EA5BA4(Local_300[1 /*7*/]))
	{
		func_177(&(Local_300[1 /*7*/]), func_179(1), fVar8, -vVar2.y, uVar1, 37,3f);
	}
	if (!unk_0x8EA3C8E091EA5BA4(Local_300[0 /*7*/]))
	{
		func_177(&(Local_300[0 /*7*/]), func_179(0), fVar6, -vVar2.y, fVar4, 50f);
	}
	if (!unk_0x8EA3C8E091EA5BA4(Local_300[3 /*7*/]))
	{
		func_177(&(Local_300[3 /*7*/]), func_179(3), fVar7, vVar2.y, fVar3, 45f);
	}
	unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
	unk_0x7849794435F39D49(Local_300[*iParam0 /*7*/], true);
}

void func_177(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x65F7
{
	uParam0->f_1 = { vParam2 };
	uParam0->f_4 = { 0f, 0f, 0f };
	*uParam0 = unk_0x4562AC7F06CD71B3("DEFAULT_SCRIPTED_CAMERA", false);
	unk_0x7849794435F39D49(*uParam0, true);
	unk_0xA6DE0FBA9218D7F0(*uParam0, vParam1, uParam0->f_1, fParam3, 0, 1, 1, 2);
	unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
}

float func_178(struct<2> Param0, var uParam1, struct<2> Param2, float fParam3)//Position - 0x6649
{
	return unk_0xA67DD8488EBA5F6D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

Vector3 func_179(int iParam0)//Position - 0x6663
{
	vector3 vVar0;
	var uVar1;
	struct<2> Var2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (!unk_0x191BE1BC8F26F3C1(iLocal_90, 0))
	{
	}
	if (!unk_0xB8DE76287EDC4957(iLocal_93, 0))
	{
	}
	unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iLocal_93), &uVar1, &Var2);
	vVar3 = { unk_0xDCD8BDD2E10C660E(iLocal_93, unk_0xD323488FDDE4A80F(iLocal_93, "windscreen")) };
	vVar4 = { unk_0xA05DDB968587006B(iLocal_93, vVar3) };
	switch (iParam0)
	{
		case 0:
			vVar0 = { unk_0x3F90543934DCD7E6(iLocal_93, 0f, (Var2.f_1 + 1,4f), vVar4.z) };
			break;
		
		case 1:
			vVar0 = { unk_0x3F90543934DCD7E6(iLocal_93, 1,5f, (Var2.f_1 + 1,2f), (vVar4.z - 0,1f)) };
			break;
		
		case 2:
			vVar0 = { unk_0x3F90543934DCD7E6(iLocal_93, -3,7f, 0,7f, vVar4.z) };
			break;
		
		case 3:
			vVar0 = { func_180() };
			break;
	}
	return vVar0;
}

Vector3 func_180()//Position - 0x673C
{
	vector3 vVar0;
	vector3 vVar1;
	struct<2> Var2;
	var uVar3;
	
	unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iLocal_93), &Var2, &uVar3);
	vVar0 = { unk_0xDCD8BDD2E10C660E(iLocal_93, unk_0xD323488FDDE4A80F(iLocal_93, "windscreen")) };
	vVar1 = { unk_0xA05DDB968587006B(iLocal_93, vVar0) };
	vVar1.z = (vVar1.z + 0,09f);
	Var2.f_1 = (Var2.f_1 - 1f);
	return unk_0x3F90543934DCD7E6(iLocal_93, 0f, -unk_0xE97272C977DEADD3(Var2.f_1), vVar1.z);
}

void func_181(int iParam0, bool bParam1)//Position - 0x67A0
{
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&Global_25478, iParam0);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_25478, iParam0);
	}
}

void func_182(int iParam0)//Position - 0x67C2
{
	if (!unk_0x8EA3C8E091EA5BA4(Local_300[*iParam0 /*7*/]))
	{
		return;
	}
	if (!unk_0xA088EF935178C2F3(Local_300[*iParam0 /*7*/]))
	{
		return;
	}
	unk_0x7E4FCDC8BAD0CF6D(Local_300[*iParam0 /*7*/], "HAND_SHAKE", 0,25f);
	if (!unk_0x0F30C1F1717A6437())
	{
		func_185(&(Local_300[*iParam0 /*7*/]));
	}
	if (func_184())
	{
		if (!func_530())
		{
			if (!func_451("PROS_CAM_OC"))
			{
				func_107("PROS_CAM_OC");
			}
		}
	}
	else
	{
		if (!func_530())
		{
			if (!func_451("PROS_CAM_TOG"))
			{
				func_107("PROS_CAM_TOG");
			}
		}
		if ((unk_0x4CD14B4B1E8BD8BA(2, 0) && !unk_0x0F30C1F1717A6437()) && !func_42(0, 1))
		{
			func_183(iParam0);
			unk_0x7849794435F39D49(Local_300[*iParam0 /*7*/], true);
		}
	}
}

void func_183(var uParam0)//Position - 0x688D
{
	if (*uParam0 < 3)
	{
		*uParam0++;
	}
	else if (*uParam0 == 3)
	{
		*uParam0 = 0;
	}
	if (*uParam0 == 0)
	{
		if (func_471(iLocal_51, 16))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 1)
	{
		if (func_471(iLocal_51, 128))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 2)
	{
		if (func_471(iLocal_51, 64))
		{
			*uParam0++;
		}
	}
}

int func_184()//Position - 0x6900
{
	if ((func_471(iLocal_51, 16) && func_471(iLocal_51, 64)) && func_471(iLocal_51, 128))
	{
		return 1;
	}
	return 0;
}

void func_185(var uParam0)//Position - 0x6932
{
	var uVar0[4];
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	
	unk_0xD67F08F0EFD84A54(2);
	func_187(&(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]), 0, 0);
	vVar1.z = (-(system::to_float(uVar0[2]) / 127f) * 10f);
	vVar1.y = ((-vVar1.z * 3f) / 10f);
	if (unk_0x098C8C3D1E0C0518())
	{
		vVar1.x = ((system::to_float(uVar0[3]) / 127f) * 10f);
	}
	else
	{
		vVar1.x = (-(system::to_float(uVar0[3]) / 127f) * 10f);
	}
	fVar2 = (30f * system::timestep());
	vVar3 = { vVar1 };
	if (unk_0x4C4813CAAD70E814(0))
	{
		uParam0->f_4 = func_186((uParam0->f_4 + (vVar3.x * 0,05f)), -3f, 3f);
		uParam0->f_4.f_1 = func_186((uParam0->f_4.f_1 + (vVar3.y * 0,05f)), -3f, 3f);
		uParam0->f_4.f_2 = func_186((uParam0->f_4.f_2 + (vVar3.z * 0,05f)), -3f, 3f);
	}
	else
	{
		uParam0->f_4 = (uParam0->f_4 + func_186((((vVar3.x - uParam0->f_4) * 0,05f) * fVar2), -3f, 3f));
		uParam0->f_4.f_1 = (uParam0->f_4.f_1 + func_186((((vVar3.y - uParam0->f_4.f_1) * 0,05f) * fVar2), -3f, 3f));
		uParam0->f_4.f_2 = (uParam0->f_4.f_2 + func_186((((vVar3.z - uParam0->f_4.f_2) * 0,05f) * fVar2), -3f, 3f));
	}
	unk_0xBEBD5CAE3510CD2A(*uParam0, uParam0->f_1 + uParam0->f_4, 2);
}

float func_186(float fParam0, float fParam1, float fParam2)//Position - 0x6ACC
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

void func_187(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x6AF3
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

void func_188()//Position - 0x6BF7
{
	int iVar0;
	float fVar1;
	
	if (!func_193())
	{
		if (func_192(iLocal_90))
		{
			if (!func_471(iLocal_49, 256))
			{
				unk_0x3D1231846F809DA4(unk_0xFC1458A37D98B502());
				unk_0x74D45BB07BD51F8B(unk_0xFC1458A37D98B502(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				if (iLocal_70 == 1)
				{
					if (!func_530())
					{
						unk_0x26445D58B3FE9957(unk_0x9EB17624F44A8DA4(), 15, 1);
					}
					unk_0xC4803EF57E953FF3(0, 4000, 252);
				}
				else if (iLocal_70 == 2)
				{
					if (!func_530())
					{
						unk_0x26445D58B3FE9957(unk_0x9EB17624F44A8DA4(), 10, 1);
					}
					unk_0xC4803EF57E953FF3(0, 4000, 210);
				}
				else
				{
					if (!func_530())
					{
						unk_0x26445D58B3FE9957(unk_0x9EB17624F44A8DA4(), 5, 1);
					}
					unk_0xC4803EF57E953FF3(0, 3000, 168);
				}
				func_463(&iLocal_49, 256);
			}
		}
	}
	else
	{
		switch (iLocal_289)
		{
			case 0:
				if (unk_0x7B82209ED5D8E168(iLocal_90, 876132797))
				{
					unk_0xC4803EF57E953FF3(0, 200, 84);
					unk_0xB8D9F55BA414128D(iLocal_93, 1, 0f, 0f, -0,05f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			
			case 1:
			case 2:
				if (func_471(iLocal_49, 32768))
				{
					if (func_530())
					{
						iVar0 = unk_0x45D90ED1F569A489(iLocal_77);
					}
					else
					{
						iVar0 = iLocal_77;
					}
					if (unk_0xD56F740235B1E8F0(iVar0))
					{
						fVar1 = unk_0x463C4747B41E35A3(iVar0);
						if ((((((((((((((fVar1 > 0,01f && fVar1 < 0,019f) || (fVar1 > 0,093f && fVar1 < 0,1f)) || (fVar1 > 0,165f && fVar1 < 0,172f)) || (fVar1 > 0,231f && fVar1 < 0,239f)) || (fVar1 > 0,308f && fVar1 < 0,317f)) || (fVar1 > 0,37f && fVar1 < 0,378f)) || (fVar1 > 0,437f && fVar1 < 0,443f)) || (fVar1 > 0,507f && fVar1 < 0,518f)) || (fVar1 > 0,58f && fVar1 < 0,587f)) || (fVar1 > 0,651f && fVar1 < 0,659f)) || (fVar1 > 0,72f && fVar1 < 0,729f)) || (fVar1 > 0,788f && fVar1 < 0,794f)) || (fVar1 > 0,862f && fVar1 < 0,87f)) || (fVar1 > 0,937f && fVar1 < 0,946f))
						{
							if (!func_504(512))
							{
								unk_0xC4803EF57E953FF3(0, 200, 252);
								unk_0xB8D9F55BA414128D(iLocal_93, 1, 0f, 0f, -0,1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
								func_190();
								func_189(512);
							}
						}
						else
						{
							func_508(512);
						}
					}
				}
				else if (unk_0x7B82209ED5D8E168(iLocal_90, 876132797))
				{
					unk_0xC4803EF57E953FF3(0, 200, 252);
					unk_0xB8D9F55BA414128D(iLocal_93, 1, 0f, 0f, -0,1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			}
	}
}

void func_189(int iParam0)//Position - 0x6F19
{
	if (!func_471(iLocal_52, iParam0))
	{
		func_463(&iLocal_52, iParam0);
	}
}

void func_190()//Position - 0x6F35
{
	int iVar0;
	
	iVar0 = unk_0xDE523AF6F7B269AB(unk_0xFC1458A37D98B502());
	iVar0 = (iVar0 + (1 + iLocal_288));
	if (iVar0 > unk_0xC1643F33913289BD(unk_0xFC1458A37D98B502()))
	{
		iVar0 = unk_0xC1643F33913289BD(unk_0xFC1458A37D98B502());
	}
	unk_0xE01CE1EBCD7EE551(unk_0xFC1458A37D98B502(), iVar0, 0);
	func_191();
}

void func_191()//Position - 0x6F77
{
	if (!func_530())
	{
		return;
	}
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		iLocal_57 = unk_0xDE523AF6F7B269AB(unk_0xFC1458A37D98B502());
	}
}

bool func_192(int iParam0)//Position - 0x6F9F
{
	return (((unk_0xA5F6598E13F98E08(iParam0, func_48(), func_40(11), 3) || unk_0xA5F6598E13F98E08(iParam0, func_48(), func_40(21), 3)) || unk_0xA5F6598E13F98E08(iParam0, func_46(), func_39(11), 3)) || unk_0xA5F6598E13F98E08(iParam0, func_46(), func_39(21), 3));
}

bool func_193()//Position - 0x6FFD
{
	return unk_0xA5F6598E13F98E08(iLocal_90, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_194(iLocal_90, func_43(), 1), 3);
}

char* func_194(int iParam0, bool bParam1, bool bParam2)//Position - 0x7021
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		iVar1 = unk_0xDFD115BB10FE46A9(iParam0, 1);
		if (unk_0xB8DE76287EDC4957(iVar1, 0))
		{
			if (func_41(iVar1))
			{
				if (bParam1)
				{
					if (bParam2)
					{
						sVar0 = func_40(20);
					}
					else
					{
						sVar0 = func_40(25);
					}
				}
				else if (bParam2)
				{
					sVar0 = func_40(10);
				}
				else
				{
					sVar0 = func_40(15);
				}
			}
			else if (bParam1)
			{
				if (bParam2)
				{
					sVar0 = func_39(20);
				}
				else
				{
					sVar0 = func_39(25);
				}
			}
			else if (bParam2)
			{
				sVar0 = func_39(10);
			}
			else
			{
				sVar0 = func_39(15);
			}
		}
	}
	return sVar0;
}

void func_195()//Position - 0x70CB
{
	if (!func_193())
	{
		return;
	}
	if (func_530())
	{
		func_199();
	}
	if (unk_0xAFFA17B5D5E2F248(iLocal_90) || unk_0xAFFA17B5D5E2F248(unk_0xFC1458A37D98B502()))
	{
		return;
	}
	if (unk_0x63A6486593EC7EC3(0, 5000) > 2500)
	{
		func_196();
	}
}

void func_196()//Position - 0x7115
{
	if (unk_0x3AB6A1A9084FB0A4(iLocal_90))
	{
		return;
	}
	if (!unk_0xAFFA17B5D5E2F248(iLocal_90) && !unk_0xAFFA17B5D5E2F248(unk_0xFC1458A37D98B502()))
	{
		if (iLocal_288 == 0)
		{
			func_124("PROSTITUTES_BJ_SPEECH_SCENE");
		}
		if (!func_10(&iLocal_101))
		{
			func_453(&iLocal_101);
		}
		else if (func_7(&iLocal_101) > unk_0x5B811202FCBE9E9D(2f, 5f))
		{
			if (!func_471(iLocal_49, 65536))
			{
				func_463(&iLocal_49, 65536);
				unk_0x74D45BB07BD51F8B(unk_0xFC1458A37D98B502(), "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR", 1);
				func_197(iLocal_289);
			}
			else
			{
				func_5(&iLocal_49, 65536);
				func_34(&iLocal_101);
			}
		}
	}
}

void func_197(int iParam0)//Position - 0x71B6
{
	switch (iParam0)
	{
		case 0:
			func_81("PROSTITUTES_BJ_SPEECH_SCENE");
			if (func_198(unk_0x9EB17624F44A8DA4()))
			{
				unk_0x74D45BB07BD51F8B(iLocal_90, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0x74D45BB07BD51F8B(iLocal_90, "SEX_ORAL_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
		
		case 1:
		case 2:
			if (func_198(unk_0x9EB17624F44A8DA4()))
			{
				unk_0x74D45BB07BD51F8B(iLocal_90, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0x74D45BB07BD51F8B(iLocal_90, "SEX_GENERIC_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
	}
}

int func_198(int iParam0)//Position - 0x723D
{
	if (!unk_0x3A711520F83BAE98())
	{
		return 1;
	}
	return Global_2422736[iParam0 /*420*/].f_245;
}

void func_199()//Position - 0x725F
{
	if (unk_0x3AB6A1A9084FB0A4(iLocal_90))
	{
		return;
	}
	if (func_200(0,4f))
	{
		func_189(4);
	}
	if (func_504(4))
	{
		if (!func_10(&iLocal_104))
		{
			func_453(&iLocal_104);
		}
		else if (func_7(&iLocal_104) > 2f)
		{
			if (!func_504(16) && !func_200(0,4f))
			{
				func_189(16);
				iLocal_59++;
			}
			else if (func_504(16))
			{
				if (!unk_0xAFFA17B5D5E2F248(iLocal_90))
				{
					func_508(4);
					func_508(16);
					func_34(&iLocal_104);
				}
			}
		}
	}
}

int func_200(float fParam0)//Position - 0x72F6
{
	float fVar0;
	
	if (func_201(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		fVar0 = unk_0xC21E43BDB4DDB898(unk_0x9EB17624F44A8DA4());
		if (fVar0 > fParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_201(int iParam0, bool bParam1, bool bParam2)//Position - 0x7322
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

void func_202(bool bParam0, bool bParam1)//Position - 0x736C
{
	if (!func_530())
	{
		return;
	}
	func_174(bParam0, bParam1);
	func_170(bParam0, bParam1);
	func_168(bParam0, bParam1);
	func_159(bParam0, bParam1);
	func_152(bParam0, bParam1);
}

void func_203(int iParam0, int iParam1)//Position - 0x73A7
{
	int iVar0;
	
	iVar0 = func_134(iParam0, func_132(iParam1), 0);
	iVar0++;
	if (!func_205(iParam0))
	{
		func_131(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_204(iParam0, iVar0, iParam1, 1);
	}
}

void func_204(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x73E8
{
	int iVar0;
	
	iVar0 = Global_2523060[iParam0 /*3*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1368159[func_132(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1368165[func_132(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1368171[func_132(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1368177[func_132(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1368135[func_132(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1368141[func_132(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1368147[func_132(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1368153[func_132(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1368111[func_132(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1368117[func_132(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1368123[func_132(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1368129[func_132(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1368183[func_132(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1368189[func_132(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1368195[func_132(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1368201[func_132(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1368207[func_132(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1368213[func_132(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1368219[func_132(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2549199[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2549199[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2549199[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2549199[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 7052:
			Global_2549282[func_132(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1368225[func_132(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1368231[func_132(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1368237[func_132(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1368243[func_132(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2549239[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2549239[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2549239[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2549239[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2549239[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549285[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549285[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549285[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549285[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549285[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549301[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549301[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549301[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549301[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549301[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2549239[5 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2549199[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549317[func_132(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549326[func_132(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549320[func_132(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549329[func_132(iParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549323[func_132(iParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549332[func_132(iParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549335[func_132(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2549239[6 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2549199[5 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2549239[7 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2549199[6 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2549239[8 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2549199[7 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2549239[9 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2549199[8 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2549239[10 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2549199[9 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2549239[11 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2549199[10 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2549239[12 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2549199[11 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2549239[13 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2549199[12 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_205(int iParam0)//Position - 0x7AB3
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

void func_206(int iParam0)//Position - 0x7C69
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_209(0))
		{
			func_207(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

void func_207(int iParam0)//Position - 0x7C92
{
	if (Global_14615)
	{
		func_208(0, 0);
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
	if (!func_15())
	{
		Global_14453.f_1 = 3;
	}
}

void func_208(bool bParam0, bool bParam1)//Position - 0x7D02
{
	if (bParam0)
	{
		if (func_209(0))
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

int func_209(int iParam0)//Position - 0x7D76
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

bool func_210(int iParam0)//Position - 0x7DD0
{
	bool bVar0;
	
	if (func_530())
	{
		bVar0 = unk_0xD56F740235B1E8F0(unk_0x45D90ED1F569A489(iParam0));
	}
	else
	{
		bVar0 = unk_0xD56F740235B1E8F0(iParam0);
	}
	return bVar0;
}

void func_211()//Position - 0x7DF8
{
	if (unk_0x3E9CABD07B829173())
	{
		unk_0x59C3AC31C7544A28(1000);
		unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), func_213(), 1, false, 0, 1);
		unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), func_212());
		func_521();
		unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
		unk_0x68433819717660CF(&iLocal_90);
	}
}

float func_212()//Position - 0x7E40
{
	switch (func_18())
	{
		case 0:
			return 116,6356f;
			break;
		
		case 1:
			return 175,0504f;
			break;
		
		case 2:
			return 299,5673f;
			break;
	}
	return 0f;
}

Vector3 func_213()//Position - 0x7E85
{
	switch (func_18())
	{
		case 0:
			return -820,4975f, 176,9618f, 70,6166f;
			break;
		
		case 1:
			return -14,6005f, -1444,624f, 29,6472f;
			break;
		
		case 2:
			return 1979,961f, 3816,018f, 31,3641f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_214()//Position - 0x7EEA
{
	int iVar0;
	
	if (func_216(&iLocal_98, 3f) && !unk_0xD85097DDDA5447BE(iLocal_97))
	{
		iVar0 = system::floor(((func_215() - 2f) * 1000f));
		unk_0x7849794435F39D49(iLocal_96, false);
		unk_0xF10DA1539629CC3F(iLocal_97, iLocal_96, iVar0, 1, 1);
	}
	if (func_216(&iLocal_98, func_215()))
	{
		unk_0xAE83ED4C9081AE6F(1000);
		iLocal_286 = 10;
	}
}

float func_215()//Position - 0x7F46
{
	switch (func_18())
	{
		case 0:
			return 10f;
			break;
		
		case 1:
			return 12f;
			break;
		
		case 2:
			return 10f;
			break;
	}
	return 0f;
}

int func_216(int iParam0, float fParam1)//Position - 0x7F8B
{
	if (func_10(iParam0))
	{
		if (func_7(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_217(var uParam0)//Position - 0x7FAD
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
				func_218(iVar0, uParam0);
				break;
		}
		iVar0++;
	}
}

void func_218(int iParam0, var uParam1)//Position - 0x7FEC
{
	var uVar0;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &uVar0, 11))
	{
		func_219(&uVar0, uParam1);
	}
}

void func_219(var uParam0, var uParam1)//Position - 0x800B
{
	if (unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		if (unk_0x8A3FF8E81B40BB75(*uParam0))
		{
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					if (unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0) == unk_0x79A6CD762DCCABE4(*uParam0))
					{
						func_116(0);
						unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
						func_521();
						func_516(uParam1);
					}
				}
			}
		}
	}
}

void func_220(var uParam0)//Position - 0x8069
{
	int iVar0;
	
	if (!func_530())
	{
		return;
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_90))
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			iVar0 = unk_0xDE523AF6F7B269AB(iLocal_90);
			if ((iVar0 - iLocal_58) < 0)
			{
				func_116(0);
				unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
				func_521();
				func_516(uParam0);
			}
		}
	}
}

void func_221(var uParam0)//Position - 0x80B8
{
	int iVar0;
	
	if (!func_530())
	{
		return;
	}
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			iVar0 = unk_0xDE523AF6F7B269AB(unk_0xFC1458A37D98B502());
			if ((iVar0 - iLocal_57) < 0)
			{
				func_116(0);
				unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
				func_521();
				func_516(uParam0);
			}
		}
	}
}

void func_222(var uParam0)//Position - 0x810B
{
	int iVar0;
	vector3 vVar1;
	
	if (!func_530())
	{
		return;
	}
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (unk_0x6ADD12BF4D6D2587(iVar0))
			{
				vVar1 = { unk_0xB3328BA8976B416C(iVar0, 1) };
				if (system::vdist2(vLocal_56, vVar1) >= 4f)
				{
					func_116(0);
					unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
					func_521();
					func_516(uParam0);
				}
			}
		}
	}
}

void func_223()//Position - 0x817C
{
	int iVar0;
	char* sVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	
	if (!func_471(iLocal_49, 16))
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x673813CA895142E3(unk_0x9EB17624F44A8DA4(), 0);
		}
		func_463(&iLocal_49, 16);
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iLocal_93 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (func_530())
		{
			if (unk_0xA0BF73C5030D3F60(iLocal_93))
			{
				unk_0x792D569161081CD9(iLocal_93, true);
				unk_0xBAB8785EE2F06BBE(iLocal_93, 4);
				unk_0x4FAB1BE7663E681C(iLocal_93, 1);
				unk_0x4C44781F822B0B00(iLocal_93, false, 0);
			}
		}
		else
		{
			unk_0x792D569161081CD9(iLocal_93, true);
			unk_0xBAB8785EE2F06BBE(iLocal_93, 4);
			unk_0x4FAB1BE7663E681C(iLocal_93, 1);
		}
		if (!func_365() || !unk_0xA8D0477084E86A92(iLocal_90, iLocal_93, 0))
		{
			func_454(0);
			return;
		}
	}
	else
	{
		func_454(0);
		return;
	}
	func_206(0);
	if ((!unk_0x9EC5112BB1C4047A(iLocal_93) && unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) && !func_471(iLocal_49, 1024))
	{
		iLocal_286 = 7;
		func_363(1, -1);
		unk_0x1CF95440F1970B4F("SCRIPT\HUD_321_GO", true, -1);
		iLocal_292 = 0;
		func_472("WAITING FOR VEHICLE TO STOP ");
		return;
	}
	iVar0 = 0;
	unk_0x553231E7FC3C570D(2);
	switch (iLocal_292)
	{
		case 0:
		case 1:
			if (func_530())
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					if (unk_0x6ADD12BF4D6D2587(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
					{
						if (unk_0x0D4BF24EE51A419A(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
						{
							if (unk_0x317536BCEA8FA6B0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), -1, 0) == unk_0xFC1458A37D98B502())
							{
								if (unk_0xA0BF73C5030D3F60(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
								{
									if (!unk_0x9761C10D57B68069(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
									{
										unk_0xDD29FF4BAB8AFF9C(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), false, 0);
									}
								}
								else
								{
									unk_0xC8DAB4CEBB9AB263(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0));
									return;
								}
							}
						}
						else
						{
							unk_0xC1A83BA28E0719B3(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0));
							return;
						}
					}
				}
			}
			func_362();
			func_361();
			func_191();
			if (func_358())
			{
				func_124("PROSTITUTES_DRIVE_SCENE");
				func_81("PROSTITUTES_PARKED_SCENE");
				func_357();
				if (func_530())
				{
					func_189(2);
					if (func_530())
					{
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
						{
							if (unk_0x0D4BF24EE51A419A(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
							{
								if (unk_0xA0BF73C5030D3F60(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
								{
									unk_0xB4EE449F8D361B88(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 1);
									unk_0x4BEFCD5DAE410A90(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 4);
									unk_0xA96927E135958D05(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 1);
								}
							}
						}
					}
				}
				unk_0xEF6D43420A388D54(iLocal_90);
				iLocal_292 = 2;
			}
			break;
		
		case 2:
			if (func_356(iLocal_295))
			{
				func_355(&iLocal_295);
				func_5(&iLocal_73, 2);
			}
			func_353(iLocal_90, 0);
			if (func_353(unk_0xFC1458A37D98B502(), 1))
			{
				if (func_351(&sVar1, 0))
				{
					iLocal_48 = unk_0x60584F41FBCE28CD();
					iVar2 = unk_0x1FB367C588A91451();
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
					{
						if (iVar2 != 4 && iLocal_48 == 4)
						{
							unk_0x0B51676846D7C57B(4);
						}
						else if (iVar2 == 4 && iLocal_48 != 4)
						{
							unk_0x0B51676846D7C57B(1);
						}
					}
					func_335();
					iLocal_292 = 3;
					func_472("Moving to SERVICE_MENU_CHOOSE");
				}
				else
				{
					func_334(&sVar1, -1);
					func_34(&iLocal_107);
					iLocal_288 = 3;
					iLocal_292 = 4;
				}
			}
			break;
		
		case 3:
			if (unk_0x0F30C1F1717A6437())
			{
				return;
			}
			unk_0x4973A6BA6E910C25(3);
			func_315();
			func_284(1, -1, 1, 0, 1, -1082130432, 0, 0);
			func_283(&uVar3, &iVar4, &uVar5, &uVar6, 0);
			unk_0x4FB260623DD93924(0, 48, 1);
			unk_0x01B48CB2F72AE113(2, 187);
			unk_0x01B48CB2F72AE113(2, 188);
			unk_0x01B48CB2F72AE113(2, 201);
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
					func_279(0, 0, 0, 1);
					func_278(0, -1, 1);
					if (func_277())
					{
						if (Global_4265875 != iLocal_68)
						{
							unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							iLocal_68 = Global_4265875;
							func_472("Player highlighted a new option using the mouse!");
						}
						else
						{
							iVar0 = 1;
						}
					}
				}
			}
			if (((unk_0xE8C126B7ADBB9D63(2, 187) || (unk_0x4C4813CAAD70E814(2) && unk_0xE8C126B7ADBB9D63(2, 242))) || (unk_0x4C4813CAAD70E814(2) && unk_0x4CD14B4B1E8BD8BA(0, 33))) || (((unk_0xB9D80B12FE4456A5() && !unk_0x4C4813CAAD70E814(2)) && iVar4 > 100) && (unk_0x53C562FD2B9E3AB0() - iLocal_87) > 300))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_472("DOWN pressed!");
				if (iLocal_68 < iLocal_69)
				{
					iLocal_68++;
				}
				else
				{
					iLocal_68 = 0;
				}
				iLocal_87 = unk_0x53C562FD2B9E3AB0();
			}
			else if (((unk_0xE8C126B7ADBB9D63(2, 188) || (unk_0x4C4813CAAD70E814(2) && unk_0xE8C126B7ADBB9D63(2, 241))) || (unk_0x4C4813CAAD70E814(2) && unk_0x4CD14B4B1E8BD8BA(0, 32))) || (((unk_0xB9D80B12FE4456A5() && !unk_0x4C4813CAAD70E814(2)) && iVar4 < -100) && (unk_0x53C562FD2B9E3AB0() - iLocal_87) > 300))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_472("UP pressed!");
				if (iLocal_68 > 0)
				{
					iLocal_68 = (iLocal_68 - 1);
				}
				else
				{
					iLocal_68 = iLocal_69;
				}
				iLocal_87 = unk_0x53C562FD2B9E3AB0();
			}
			else if (unk_0x58F436C557A0FD7A(2, 201) || iVar0 == 1)
			{
				unk_0x4AFBCBFDE748D4E0(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				unk_0x553231E7FC3C570D(3);
				func_273();
				unk_0x2B0DDE3D071497AD(unk_0xFC1458A37D98B502());
				iLocal_292 = 4;
			}
			func_272(iLocal_68, 1, 1);
			break;
		
		case 4:
			iVar7 = unk_0x9ABB56CE0DEB0993(iLocal_90);
			if (iLocal_288 == 3)
			{
				func_363(1, -1);
				func_271();
				func_270(0);
				iLocal_62 = unk_0x53C562FD2B9E3AB0();
				func_124("PROSTITUTES_PARKED_SCENE");
				func_472("eCurrentProstituteState = prostitute_REFUSED ");
				iLocal_286 = 6;
				if (iLocal_70 > 0)
				{
					if (func_120(iLocal_90))
					{
						func_119();
					}
					else
					{
						func_454(0);
					}
					return;
				}
				else
				{
					if (func_265() >= 20)
					{
						iVar7 += 20;
						func_225(20);
						unk_0x6D624C6A284D7D07(iLocal_90, iVar7);
					}
					func_454(1);
					return;
				}
			}
			if (!unk_0x3A801AA34DD821BE(func_44(unk_0xFC1458A37D98B502(), 0, 0)))
			{
			}
			else
			{
				func_363(1, -1);
				func_271();
				if (unk_0x46E0AF07B8639A09())
				{
					func_463(&iLocal_49, 1024);
					iLocal_288 = 3;
					func_472("AUSSIE VERSION IS TRUE!?!?!");
				}
				if (iLocal_288 != 3)
				{
					if (func_265() > func_224(iLocal_288))
					{
						func_225(func_224(iLocal_288));
						iVar7 = (iVar7 + func_224(iLocal_288));
					}
					func_35(&iLocal_101, (14f - 4f));
					func_472("eCurrentProstituteState = PROSTITUTE_CUSTOMER_GETTING_SERVICED ");
					func_121();
					iLocal_286 = 11;
				}
				unk_0x6D624C6A284D7D07(iLocal_90, iVar7);
				iLocal_62 = unk_0x53C562FD2B9E3AB0();
			}
			break;
	}
}

int func_224(int iParam0)//Position - 0x87F2
{
	if (unk_0x46E0AF07B8639A09())
	{
		if (iParam0 == 0)
		{
			return 70;
		}
		else if (iParam0 == 1)
		{
			return 70;
		}
		else if (iParam0 == 2)
		{
			return 70;
		}
		else
		{
			return 0;
		}
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 1)
	{
		return 70;
	}
	if (iParam0 == 2)
	{
		return 100;
	}
	return 0;
}

void func_225(int iParam0)//Position - 0x885D
{
	var uVar0;
	
	if (!func_530())
	{
		func_236(func_18(), 1, iParam0);
	}
	else if (!func_235())
	{
		unk_0xE5261EF43C28FB61(iParam0, 0, 0);
	}
	else
	{
		func_226(-1359375127, iParam0, &uVar0, 0, 0, 0);
	}
}

void func_226(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x889F
{
	int iVar0;
	
	if (!func_235())
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
				func_227(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_227(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_227(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x8D29
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_235())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x02404400A68A3D5B(func_133()) || unk_0xD7D895B4B5395982())
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
			*uParam0 = func_234(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
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
			func_233(1, iParam4);
			Global_4262414 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_228(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_228(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8ECD
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_137.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_229(iParam0);
	}
}

void func_229(int iParam0)//Position - 0x8F05
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_235())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_232(iParam0))
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
		func_230(&(Global_4261865[iParam0 /*80*/]));
	}
}

void func_230(var uParam0)//Position - 0x8F57
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
	func_231(&(uParam0->f_8.f_3));
	func_231(&(uParam0->f_8.f_16));
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

void func_231(var uParam0)//Position - 0x9051
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

int func_232(int iParam0)//Position - 0x9099
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_233(int iParam0, int iParam1)//Position - 0x90C1
{
	Global_2459156 = iParam1;
	Global_2459155 = iParam0;
}

int func_234(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0x90D5
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_235())
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

int func_235()//Position - 0x91CE
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

int func_236(int iParam0, int iParam1, int iParam2)//Position - 0x91E5
{
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_237(Global_104555.f_28020[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_237(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x922E
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_264();
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
					func_263(99, 1);
					func_262(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_262(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_262(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_248(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_244(5))
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
							func_262(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_262(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_262(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_244(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_262(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_262(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_262(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_262(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_262(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_262(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_262(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_262(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_262(joaat("sp2_money_spent_property"), iParam3);
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
									func_262(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_262(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_262(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_262(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_262(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_262(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_244(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_262(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_262(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_262(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_262(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_262(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_262(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_243(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_263(95, iParam3);
					break;
				
				case 1:
					func_263(97, iParam3);
					break;
				
				case 2:
					func_263(96, iParam3);
					break;
			}
			func_263(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_240(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_240(iVar1);
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
					func_262(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_262(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_262(joaat("sp2_total_cash_earned"), iParam3);
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
	func_239(iParam0);
	if (Global_35861 == 15)
	{
		func_238(0);
	}
	return 1;
}

void func_238(bool bParam0)//Position - 0x982D
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

void func_239(int iParam0)//Position - 0x9AAF
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

void func_240(int iParam0)//Position - 0x9B09
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_148(129, 0, -1, 1);
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
	else if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0) || unk_0xC80D31E4B587871C(Global_2097152[func_242() /*12130*/].f_7676.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Global_2097152[func_242() /*12130*/].f_7676.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xE3C33644878DCCFD("COUP_RED");
		unk_0xA6D2B267C377D7B2(func_241(iParam0));
		unk_0x9F42263EE935D84B(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_241(int iParam0)//Position - 0x9BE0
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

int func_242()//Position - 0x9C68
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_243(int iParam0)//Position - 0x9C75
{
	func_263(93, iParam0);
	func_263(29, iParam0);
	func_263(30, iParam0);
}

bool func_244(int iParam0)//Position - 0x9C95
{
	if (iParam0 == 8)
	{
		return func_245(129, -1, -1);
	}
	if (!unk_0x3A711520F83BAE98())
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2097152[func_242() /*12130*/].f_7676.f_10, iParam0);
}

int func_245(int iParam0, int iParam1, int iParam2)//Position - 0x9CE3
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_133();
	}
	iVar1 = func_247(iParam0, iParam1);
	uVar2 = func_246(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_246(int iParam0)//Position - 0x9D20
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

int func_247(int iParam0, int iParam1)//Position - 0x9FE0
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_133();
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

int func_248(bool bParam0)//Position - 0xA282
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
		func_147(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_249(27, 1);
	return 1;
}

int func_249(int iParam0, int iParam1)//Position - 0xA339
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_250(iParam0, iParam1);
}

int func_250(int iParam0, int iParam1)//Position - 0xA354
{
	if (func_531(14) && !func_261(iParam0))
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
	if (func_260(&Global_4267379))
	{
		if (func_258(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_251(&Global_4267379, iParam0))
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

int func_251(var uParam0, int iParam1)//Position - 0xA3F1
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_531(14) && !func_261(iParam1))
	{
		return 0;
	}
	if (func_258(uParam0, iParam1))
	{
		return 0;
	}
	if (func_257(uParam0) < 0f)
	{
		func_256(uParam0, 0);
	}
	func_254(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_252(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_252(var uParam0, int iParam1)//Position - 0xA4A2
{
	int iVar0;
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_531(14) && !func_261(iParam1))
	{
		return 0;
	}
	if (func_258(uParam0, iParam1))
	{
		return 0;
	}
	if (func_257(uParam0) < 0f)
	{
		func_256(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_253(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_253(var uParam0, int iParam1)//Position - 0xA51D
{
	return (*uParam0)[iParam1] == 78;
}

void func_254(var uParam0)//Position - 0xA52E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_255(uParam0, iVar0);
		iVar0++;
	}
	func_256(uParam0, (Global_4267378 - 0,5f));
}

void func_255(var uParam0, int iParam1)//Position - 0xA562
{
	(*uParam0)[iParam1] = 78;
}

void func_256(var uParam0, float fParam1)//Position - 0xA572
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

float func_257(var uParam0)//Position - 0xA58F
{
	return uParam0->f_80;
}

bool func_258(var uParam0, int iParam1)//Position - 0xA59B
{
	return func_259(uParam0, iParam1) != -1;
}

int func_259(var uParam0, int iParam1)//Position - 0xA5AD
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

bool func_260(var uParam0)//Position - 0xA5DA
{
	return uParam0->f_79 == 1;
}

int func_261(int iParam0)//Position - 0xA5E8
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

void func_262(int iParam0, int iParam1)//Position - 0xA638
{
	int iVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xBFFF62F75445099D(iParam0, iVar0, 1);
}

void func_263(int iParam0, int iParam1)//Position - 0xA65B
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

void func_264()//Position - 0xA6B8
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

int func_265()//Position - 0xA72D
{
	if (func_530())
	{
		return func_267(unk_0x9EB17624F44A8DA4());
	}
	return func_266(func_18());
}

int func_266(int iParam0)//Position - 0xA752
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

var func_267(int iParam0)//Position - 0xA7AA
{
	var uVar0;
	
	uVar0 = func_268(iParam0);
	return uVar0;
}

int func_268(int iParam0)//Position - 0xA7BC
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x9EB17624F44A8DA4())
		{
			return unk_0x3C5A2E3D125A1FB1(-1);
		}
		else if (func_269(iParam0))
		{
			return Global_1595693[iParam0 /*680*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_269(int iParam0)//Position - 0xA7FF
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

void func_270(int iParam0)//Position - 0xA824
{
	if (unk_0x832CFDD4BD296987() != 255)
	{
		unk_0xD5CC695F35F9EEB0(iParam0);
		unk_0x57EF8ED21E94E7E1(iParam0);
	}
}

void func_271()//Position - 0xA841
{
	Global_17162.f_5 = 0;
}

void func_272(int iParam0, bool bParam1, int iParam2)//Position - 0xA84F
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

void func_273()//Position - 0xA9A1
{
	if (iLocal_68 == iLocal_69)
	{
		iLocal_288 = 3;
	}
	else
	{
		iLocal_289 = iLocal_283[iLocal_68];
		func_274();
		if (iLocal_289 == 0)
		{
			func_81("PROSTITUTES_BJ_SCENE");
			unk_0x1CF95440F1970B4F("PROSTITUTE_BLOWJOB", false, -1);
			iLocal_288 = 0;
		}
		else if (iLocal_289 == 1)
		{
			func_81("PROSTITUTES_SEX_SCENE");
			iLocal_288 = 1;
		}
		else if (iLocal_289 == 2)
		{
			func_81("PROSTITUTES_SEX_SCENE");
			iLocal_288 = 2;
		}
	}
}

void func_274()//Position - 0xAA0F
{
	switch (iLocal_289)
	{
		case 0:
			func_276();
			break;
		
		case 1:
		case 2:
			func_275();
			break;
	}
}

void func_275()//Position - 0xAA3F
{
	iLocal_46++;
	iLocal_47 = 1;
}

void func_276()//Position - 0xAA50
{
	iLocal_45++;
	iLocal_47 = 1;
}

int func_277()//Position - 0xAA61
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

int func_278(int iParam0, int iParam1, bool bParam2)//Position - 0xAA88
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

void func_279(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xAB68
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
	func_282();
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
				func_281(0);
			}
			return;
		}
		if (((Global_4265869 >= fVar0 && Global_4265869 <= fVar2) && Global_4265870 >= (fVar3 + fVar6)) && Global_4265870 < (fVar3 + 0,034722f))
		{
			Global_4265875 = -3;
			if (bParam3)
			{
				func_281(0);
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
				func_280(fVar4, (fVar5 + (IntToFloat(iVar13) * 0,034722f)), Global_17300, (0,034722f - 0,0015f), 255, 255, 255, iVar10);
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

void func_280(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xAE14
{
	unk_0x09C2CBFA4CD804AC((fParam0 + (fParam2 * 0,5f)), (fParam1 + (fParam3 * 0,5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_281(bool bParam0)//Position - 0xAE43
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
		func_280(fVar0, fVar1, Global_17300, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4265875 == -3)
	{
		func_280(fVar0, (fVar1 + fVar2), Global_17300, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x189EEBAACC5D380A();
}

void func_282()//Position - 0xAECC
{
	Global_4265871 = Global_4265869;
	Global_4265872 = Global_4265870;
	Global_4265869 = unk_0x84326F8D8D6875EC(2, 239);
	Global_4265870 = unk_0x84326F8D8D6875EC(2, 240);
	Global_4265873 = (Global_4265869 - Global_4265871);
	Global_4265874 = (Global_4265870 - Global_4265872);
}

void func_283(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0xAF14
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

void func_284(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0xAFE9
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
	
	if (!func_314(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_312(0, bParam6))
	{
		return;
	}
	unk_0x73509F6FDA1DB386(76, 84);
	unk_0xE7C11B6F2CF973B6(-0,05f, -0,05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17301)
	{
		if (func_310(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_309())
		{
			iVar59 = system::round((system::to_float(iVar60) * fVar62));
		}
		fVar63 = (system::to_float(iVar59) / system::to_float(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_309())
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
					StringCopy(&cVar64, func_308(29), 64);
					StringCopy(&cVar65, func_305(29, 1), 64);
					if (unk_0x8B948C59217A295D(&(Global_17301.f_6719[29 /*16*/])) == -1487683087)
					{
						func_280(Global_17298, Global_17299, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
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
				func_280(Global_17298, (Global_17299 + fVar56), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17299 + fVar56) + 0,034722f) + 0f);
				if (unk_0x8B948C59217A295D(&(Global_17301.f_1)) != 0)
				{
					func_304();
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
						func_304();
						func_302((((Global_17298 + fParam5) - 0,00390625f) - func_303("CM_ITEM_COUNT", Global_17301.f_5604, Global_17301.f_5603)), ((Global_17299 + fVar56) + 0,00416664f), "CM_ITEM_COUNT", Global_17301.f_5604, Global_17301.f_5603);
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
				func_280(Global_17298, (fVar49 + 0f), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_310(Global_17301.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17298 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_301(fVar40);
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
				func_280(Global_17298, (fVar49 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_301(fVar40);
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
					func_310(Global_17301.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					func_300(Global_17301.f_4638, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xEFB3EC0CDCC33841(func_308(Global_17301.f_4638), func_305(Global_17301.f_4638, 1), ((Global_17298 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar49 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
					func_310(Global_4265799.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17298 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_301(fVar40);
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
				func_280(Global_17298, (fVar49 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_301(fVar40);
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
					func_310(Global_4265799.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_300(Global_4265799.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xEFB3EC0CDCC33841(func_308(Global_4265799.f_67), func_305(Global_4265799.f_67, 1), ((Global_17298 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar49 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
			func_293(iVar59, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
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
					func_291(bVar32, 1, 0, 0, 0, 0, 0);
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
												func_291(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, iVar74, bVar51, bVar50);
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
													if (func_310(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_310(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0,5f);
												if (func_310(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_300(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_308(26), func_305(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_310(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0,5f);
												if (func_310(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_300(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_308(27), func_305(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											func_291(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_290(bVar32);
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
													if (func_310(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0,5f));
														if (func_310(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_300(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17301.f_4953[iVar8] == 2)
															{
																unk_0xEFB3EC0CDCC33841(func_308(Global_17301.f_4433[(iVar22 + iVar28)]), func_305(Global_17301.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xEFB3EC0CDCC33841(func_308(Global_17301.f_4433[(iVar22 + iVar28)]), func_305(Global_17301.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0,00078125f * 8f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
												if (func_289() && unk_0x8F38E94BBF3404CD(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_291(0, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
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
													if (func_310(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0,5f));
														if (func_310(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_300(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17301.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0xEFB3EC0CDCC33841(func_308(Global_17301.f_4433[(iVar22 + iVar14)]), func_305(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), (Global_17298 + (fVar36 * 0,5f)), (((fVar35 + 0,00277776f) + (fVar37 * 0,5f)) - (0,00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_17301.f_4953[iVar8] == 2)
															{
																unk_0xEFB3EC0CDCC33841(func_308(Global_17301.f_4433[(iVar22 + iVar14)]), func_305(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xEFB3EC0CDCC33841(func_308(Global_17301.f_4433[(iVar22 + iVar14)]), func_305(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0,00078125f * 12f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											func_291(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_290(bVar32);
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
											if (func_310(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0,5f);
												if (func_310(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_300(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_308(26), func_305(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_310(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0,5f);
												if (func_310(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_300(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_308(27), func_305(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_291(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
										func_288((fVar34 + fVar40), fVar35, "NUMBER", Global_17301.f_3918[iVar20], 0);
									}
									bVar39 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											func_291(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_290(bVar32);
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
											if (func_310(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0,5f);
												if (func_310(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_300(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_308(26), func_305(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_310(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0,5f);
												if (func_310(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_300(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_308(27), func_305(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_291(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
										func_287((fVar34 + fVar40), fVar35, "NUMBER", Global_17301.f_4175[iVar21], Global_17301.f_4304[iVar21]);
									}
									bVar39 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_310(Global_17301.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
												if (func_310(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_17301.f_4953[iVar8] == 2)
													{
														fVar40 = (fVar40 - (fVar36 * 2f));
													}
													fVar43 = (fVar36 * 0,5f);
													if (func_310(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_300(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0xEFB3EC0CDCC33841(func_308(26), func_305(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
												if (func_310(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + fVar36);
													fVar43 = (fVar36 * 0,5f);
													if (func_310(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_300(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0xEFB3EC0CDCC33841(func_308(27), func_305(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_310(Global_17301.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_300(Global_17301.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0xEFB3EC0CDCC33841(func_308(Global_17301.f_4433[iVar22]), func_305(Global_17301.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0,5f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), (fVar36 * func_286(Global_17301.f_4433[iVar22])), (fVar37 * func_286(Global_17301.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
									if (func_310(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_206(0);
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
		func_285(1);
	}
	unk_0x189EEBAACC5D380A();
}

void func_285(int iParam0)//Position - 0xDC4E
{
	Global_1359035.f_1079 = iParam0;
}

float func_286(int iParam0)//Position - 0xDC5F
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

void func_287(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0xDCCE
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x32AD2F36F6EF5A1F(fParam3, iParam4);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, 0);
}

void func_288(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xDCED
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x6223D539BCD39E76(iParam3);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, iParam4);
}

bool func_289()//Position - 0xDD0B
{
	return unk_0x21EA5D4DC72DE119(-1762644250);
}

void func_290(bool bParam0)//Position - 0xDD1C
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

void func_291(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xDD62
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_292(Global_17301.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_292(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xDF10
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

void func_293(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0xE19A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_314(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_312(bParam4, bParam8))
	{
		return;
	}
	if (func_298())
	{
		return;
	}
	if (unk_0x02BBA5FDE77816B9())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_296(unk_0x9EB17624F44A8DA4(), 0))
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
					func_295(&(Global_17301.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x8B948C59217A295D(&(Global_17301.f_4834[iVar2 /*4*/])) == unk_0x8B948C59217A295D("PREV"))
					{
						func_295(&(Global_17301.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17301.f_4883[iVar1] == -1)
					{
						func_294(&(Global_17301.f_4834[iVar1 /*4*/]));
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
				func_295(&Global_4265799);
				if (Global_4265799.f_20 == -1)
				{
					func_294(&(Global_4265799.f_16));
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

void func_294(char* sParam0)//Position - 0xE676
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_295(char* sParam0)//Position - 0xE688
{
	unk_0x8686005F83E832AE(sParam0);
}

bool func_296(int iParam0, int iParam1)//Position - 0xE696
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_297(-1, 0) == 8;
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

int func_297(int iParam0, bool bParam1)//Position - 0xE6E1
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_133();
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

int func_298()//Position - 0xE722
{
	vector3 vVar0;
	
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	if (func_299())
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

int func_299()//Position - 0xE790
{
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_300(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xE7AA
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

void func_301(float fParam0)//Position - 0xE87D
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

void func_302(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xE8DC
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x6223D539BCD39E76(iParam3);
	unk_0x6223D539BCD39E76(iParam4);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, 0);
}

float func_303(char* sParam0, int iParam1, int iParam2)//Position - 0xE8FF
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
	func_304();
	unk_0x0792909D8327DAEA(sParam0);
	unk_0x6223D539BCD39E76(iParam1);
	unk_0x6223D539BCD39E76(iParam2);
	return unk_0xF2A1AF58CC57C564(1);
}

void func_304()//Position - 0xE941
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

var func_305(int iParam0, bool bParam1)//Position - 0xE9CB
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xAB019B170BF1309C(&(Global_17301.f_6719[iParam0 /*16*/])))
	{
		if (unk_0x8B948C59217A295D(&(Global_17301.f_6719[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_307(unk_0x9EB17624F44A8DA4()) };
			if (unk_0xE009D69C861D7648(&Var2, &uVar1))
			{
				return func_306(&uVar1);
			}
		}
		else
		{
			return func_306(&(Global_17301.f_6719[iParam0 /*16*/]));
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

var func_306(var uParam0)//Position - 0xEE1D
{
	return uParam0;
}

struct<13> func_307(int iParam0)//Position - 0xEE27
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

char* func_308(int iParam0)//Position - 0xEE3E
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xAB019B170BF1309C(&(Global_17301.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x8B948C59217A295D(&(Global_17301.f_5886[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_307(unk_0x9EB17624F44A8DA4()) };
			unk_0xE009D69C861D7648(&Var1, &uVar0);
			return func_306(&uVar0);
		}
		else
		{
			return func_306(&(Global_17301.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_309()//Position - 0xEEB3
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

int func_310(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xEEE5
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_308(iParam0), 64);
	StringCopy(&cVar1, func_305(iParam0, bParam1), 64);
	if (unk_0x8B948C59217A295D(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x5113D2C928A121B2(&iVar2, &iVar3);
			fVar5 = unk_0xB6936205ED728A9D(0);
			if (func_309())
			{
				iVar2 = system::round((system::to_float(iVar3) * fVar5));
			}
			fVar6 = (system::to_float(iVar2) / system::to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_309())
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
		vVar7.x = (vVar7.x * (func_311(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_311(iParam0) / fVar4));
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

float func_311(int iParam0)//Position - 0xF096
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

int func_312(bool bParam0, bool bParam1)//Position - 0xF135
{
	if (Global_2436181.f_1777.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x9F7B586A14398C40() || (func_24(8, -1) && func_313() != 64)) || (unk_0x8B7838D25C063186() != 0 && !bParam1)) || (unk_0x1E06D00B67177A18() && !bParam0)) || unk_0x9A4EAADB45DA07DB()) || Global_71116) || Global_17301.f_7930) || unk_0x08D525BE62A22AE0()) || Global_92885.f_1377)
	{
		return 0;
	}
	return 1;
}

int func_313()//Position - 0xF1D2
{
	return Global_1312789;
}

int func_314(var uParam0, bool bParam1, int iParam2)//Position - 0xF1DE
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

void func_315()//Position - 0xF27B
{
	if (!func_356(iLocal_295))
	{
		iLocal_295 = func_333();
		func_324(&iLocal_295, 0, 0, unk_0x63A6486593EC7EC3(1, 2), 0, 0, 0);
	}
	else if (!func_471(iLocal_73, 2))
	{
		if (func_316(iLocal_295))
		{
			iLocal_295 = func_333();
			func_324(&iLocal_295, 0, 0, unk_0x63A6486593EC7EC3(1, 2), 0, 0, 0);
			func_463(&iLocal_73, 2);
		}
	}
	else if (func_316(iLocal_295))
	{
		func_271();
		func_454(0);
	}
}

bool func_316(int iParam0)//Position - 0xF2F5
{
	return func_317(func_333(), iParam0);
}

int func_317(int iParam0, int iParam1)//Position - 0xF307
{
	int iVar0;
	int iVar1;
	
	if (!func_356(iParam1) || !func_356(iParam0))
	{
		return 1;
	}
	iVar0 = func_323(iParam0);
	iVar1 = func_323(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_322(iParam0);
	iVar1 = func_322(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_321(iParam0);
	iVar1 = func_321(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_320(iParam0);
	iVar1 = func_320(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_319(iParam0);
	iVar1 = func_319(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_318(iParam0);
	iVar1 = func_318(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_318(int iParam0)//Position - 0xF413
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_319(int iParam0)//Position - 0xF426
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_320(int iParam0)//Position - 0xF439
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_321(int iParam0)//Position - 0xF44C
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_322(int iParam0)//Position - 0xF45E
{
	return iParam0 & 15;
}

var func_323(int iParam0)//Position - 0xF46B
{
	return (system::shift_right(iParam0, 26) & 31 * func_160(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

void func_324(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xF490
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_323(*iParam0);
	iVar1 = func_322(*iParam0);
	iVar2 = func_321(*iParam0);
	iVar3 = func_320(*iParam0);
	iVar4 = func_319(*iParam0);
	iVar5 = func_318(*iParam0);
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
	iVar6 = func_332(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_332(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_325(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_325(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xF612
{
	func_331(uParam0, iParam1);
	func_330(uParam0, iParam2);
	func_329(uParam0, iParam3);
	func_328(uParam0, iParam5);
	func_327(uParam0, iParam4);
	func_326(uParam0, iParam6);
}

void func_326(var uParam0, int iParam1)//Position - 0xF64A
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

void func_327(var uParam0, int iParam1)//Position - 0xF6D0
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_322(*uParam0);
	iVar1 = func_323(*uParam0);
	if (iParam1 < 1 || iParam1 > func_332(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_328(var uParam0, int iParam1)//Position - 0xF721
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_329(var uParam0, int iParam1)//Position - 0xF754
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_330(var uParam0, int iParam1)//Position - 0xF78E
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_331(var uParam0, int iParam1)//Position - 0xF7C9
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_332(int iParam0, int iParam1)//Position - 0xF805
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

int func_333()//Position - 0xF8A7
{
	var uVar0;
	
	func_331(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_330(&uVar0, unk_0x95327550F0F2BE7C());
	func_329(&uVar0, unk_0x674C9438180770FE());
	func_327(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_328(&uVar0, unk_0xEAF455949B108589());
	func_326(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_334(char* sParam0, int iParam1)//Position - 0xF8ED
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

void func_335()//Position - 0xF904
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_350(1);
	func_270(1);
	unk_0x9B47B379EE749C38(false);
	func_349(0);
	func_348(1, 1, 0, 0, 0);
	func_347(1, 2, 1, 1, 1);
	func_346("PROS_OPTS");
	func_345(201, "PROS_SELECT", -1, 0);
	iLocal_69 = 0;
	iVar0 = func_224(0);
	iVar1 = func_224(1);
	iVar2 = func_224(2);
	if (func_265() >= iVar0)
	{
		func_341(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0);
		func_338(iVar0, 0);
		iLocal_283[iLocal_69] = 0;
		iLocal_69++;
	}
	if (func_265() >= iVar1 && func_337(iLocal_93))
	{
		func_341(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0);
		func_338(iVar1, 0);
		iLocal_283[iLocal_69] = 1;
		iLocal_69++;
	}
	if (func_265() >= iVar2 && func_337(iLocal_93))
	{
		func_341(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0);
		func_338(iVar2, 0);
		iLocal_283[iLocal_69] = 2;
		iLocal_69++;
	}
	func_341(iLocal_69, "PROS_QUIT", 0, 1, 0, 0);
	iLocal_68 = 0;
	func_272(iLocal_68, 1, 1);
	func_336();
	iLocal_87 = unk_0x53C562FD2B9E3AB0();
	iLocal_292 = 3;
}

void func_336()//Position - 0xFA21
{
	Global_17162.f_5 = 1;
}

int func_337(int iParam0)//Position - 0xFA2F
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
		if ((((((((((((((iVar0 == joaat("infernus") || iVar0 == joaat("voltic")) || iVar0 == joaat("stingergt")) || iVar0 == joaat("stinger")) || iVar0 == joaat("bullet")) || iVar0 == joaat("entityxf")) || iVar0 == joaat("feltzer3")) || iVar0 == joaat("granger")) || iVar0 == joaat("panto")) || iVar0 == joaat("phoenix")) || iVar0 == joaat("fmj")) || iVar0 == joaat("reaper")) || iVar0 == joaat("le7b")) || iVar0 == joaat("tyrus")) || iVar0 == -1405937764)
		{
			return 0;
		}
	}
	return 1;
}

void func_338(int iParam0, bool bParam1)//Position - 0xFB1D
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
		fVar0 = func_340();
		if (Global_17301.f_4945[Global_17301.f_5089] && Global_17301.f_5610 == Global_17301.f_5608)
		{
			func_310(26, 1, 0, &fVar1, &uVar2, 0);
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
			fVar3 = func_339();
			if (fVar3 > Global_17301.f_5612[Global_17301.f_5088])
			{
				Global_17301.f_5612[Global_17301.f_5088] = fVar3;
			}
		}
	}
}

float func_339()//Position - 0xFC58
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
			if (func_310(Global_17301.f_4433[((Global_17301.f_5094 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
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

float func_340()//Position - 0xFD0B
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
	func_291(0, 1, 0, 0, 0, iVar6 > 0, 0);
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
			func_310(Global_17301.f_4433[((Global_17301.f_5094 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_341(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x10153
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
		func_344(Global_17301.f_5088, 1);
	}
	else
	{
		func_344(Global_17301.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_343(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]));
		if (Global_17301.f_4945[Global_17301.f_5089])
		{
			func_310(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_342(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]));
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

float func_342(char* sParam0)//Position - 0x1035F
{
	if (!unk_0xA1800C71952C596F(sParam0))
	{
	}
	return unk_0xAF6F79C616D36B6E(0,35f, 0);
}

float func_343(char* sParam0)//Position - 0x1037B
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
	func_291(0, 1, 0, 0, 0, 0, 0);
	unk_0x0792909D8327DAEA(sParam0);
	return unk_0xF2A1AF58CC57C564(1);
}

void func_344(int iParam0, bool bParam1)//Position - 0x103B8
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

void func_345(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x10404
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

void func_346(char* sParam0)//Position - 0x104B9
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

void func_347(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x10504
{
	Global_17301.f_4953[0] = iParam0;
	Global_17301.f_4953[1] = iParam1;
	Global_17301.f_4953[2] = iParam2;
	Global_17301.f_4953[3] = iParam3;
	Global_17301.f_4953[4] = iParam4;
}

void func_348(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x10543
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

void func_349(bool bParam0)//Position - 0x105ED
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

void func_350(bool bParam0)//Position - 0x10AAB
{
	if (!bParam0)
	{
		Global_103197 = unk_0x53C562FD2B9E3AB0() + 250;
	}
	Global_103194 = bParam0;
}

int func_351(char* sParam0, int iParam1)//Position - 0x10AC9
{
	if (func_265() < func_224(iParam1))
	{
		StringCopy(sParam0, "PROS_NO_MONEY", 16);
		return 0;
	}
	if (unk_0x3A711520F83BAE98() && func_352(unk_0x9EB17624F44A8DA4()))
	{
		StringCopy(sParam0, "PIM_HHIDCR", 16);
		return 0;
	}
	StringCopy(sParam0, "", 16);
	return 1;
}

int func_352(int iParam0)//Position - 0x10B13
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 0);
	}
	return 0;
}

int func_353(int iParam0, bool bParam1)//Position - 0x10B39
{
	int iVar0;
	
	if (!unk_0x3A801AA34DD821BE(func_44(unk_0xFC1458A37D98B502(), 0, 0)))
	{
	}
	else if (!unk_0xA5F6598E13F98E08(iParam0, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_103(bParam1), 3) && unk_0x78F50AA8F955BEFC(iParam0, -2017877118) != 1)
	{
		if (func_530())
		{
			if (iParam0 == unk_0xFC1458A37D98B502())
			{
				if (!func_198(unk_0x9EB17624F44A8DA4()))
				{
					iVar0 = unk_0x4CDD2D1D66ED1DE4(unk_0xFC1458A37D98B502(), 6);
					if (!func_504(256))
					{
						func_189(256);
						iLocal_84 = iVar0;
						iLocal_85 = unk_0xDCC2BD4C56470D10(unk_0xFC1458A37D98B502(), 6);
						unk_0x03924C68EFCBC511(unk_0xFC1458A37D98B502(), 6, 1, 0, 0);
						func_189(1024);
					}
				}
				unk_0x12C9D41D52A560D6(iParam0, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_354(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0x12C9D41D52A560D6(iParam0, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_354(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			unk_0x12C9D41D52A560D6(iParam0, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_354(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		if (unk_0xA5F6598E13F98E08(iParam0, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_354(bParam1), 3))
		{
			if (unk_0x7A70772AE40E3821(iParam0, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_354(bParam1)) >= 0,95f)
			{
				unk_0x12C9D41D52A560D6(iParam0, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_103(bParam1), 8f, -2f, -1, 1, 0, 0, 0, 0);
			}
		}
		if (unk_0xA5F6598E13F98E08(iParam0, func_44(unk_0xFC1458A37D98B502(), 0, 0), func_103(bParam1), 3))
		{
			return 1;
		}
	}
	return 0;
}

var func_354(bool bParam0)//Position - 0x10CCB
{
	if (!func_471(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(0);
		}
		else
		{
			return func_39(1);
		}
	}
	if (bParam0)
	{
		return func_40(0);
	}
	return func_40(1);
}

void func_355(int iParam0)//Position - 0x10D11
{
	*iParam0 = -15;
}

int func_356(int iParam0)//Position - 0x10D1F
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
	iVar0 = func_318(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_319(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_320(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_323(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_322(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_321(iParam0);
	if (iVar5 < 1 || iVar5 > func_332(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_357()//Position - 0x10DFB
{
	if (unk_0x3AB6A1A9084FB0A4(iLocal_90))
	{
		return;
	}
	unk_0x3D1231846F809DA4(iLocal_90);
	if (!unk_0xAFFA17B5D5E2F248(iLocal_90))
	{
		if (iLocal_70 < 1)
		{
			unk_0x74D45BB07BD51F8B(iLocal_90, "HOOKER_OFFER_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0x74D45BB07BD51F8B(iLocal_90, "HOOKER_OFFER_AGAIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

int func_358()//Position - 0x10E46
{
	if (func_359(0, -1, 0) && unk_0x1CF95440F1970B4F("SCRIPT\HUD_321_GO", true, -1))
	{
		return 1;
	}
	return 0;
}

bool func_359(char* sParam0, int iParam1, bool bParam2)//Position - 0x10E6C
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_314(&iVar0, 1, iParam1))
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
	bVar2 = func_360(&(Global_17301.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_360(var uParam0)//Position - 0x10F62
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

void func_361()//Position - 0x11004
{
	if (!func_530())
	{
		return;
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_90))
	{
		iLocal_58 = unk_0xDE523AF6F7B269AB(iLocal_90);
	}
}

void func_362()//Position - 0x11028
{
	int iVar0;
	
	if (!func_530())
	{
		return;
	}
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (unk_0x6ADD12BF4D6D2587(iVar0))
			{
				vLocal_56 = { unk_0xB3328BA8976B416C(iVar0, 1) };
			}
		}
	}
}

void func_363(bool bParam0, int iParam1)//Position - 0x11071
{
	int iVar0;
	
	if (!func_314(&iVar0, 0, iParam1))
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
		func_364(&(Global_17301.f_5530[iVar0 /*10*/]));
		Global_17301.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17301.f_5591[iVar0] = 0;
	}
}

void func_364(int iParam0)//Position - 0x1112F
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

int func_365()//Position - 0x11158
{
	if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iLocal_93 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				if (!iLocal_93 == 0)
				{
					if ((unk_0xB8DE76287EDC4957(iLocal_93, 0) && !unk_0x6B4C37F2EEC636CC(iLocal_93)) && !unk_0xF69AD934E7664A7C(iLocal_93))
					{
						if (func_85(&iLocal_93))
						{
							func_5(&iLocal_49, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_366()//Position - 0x111CD
{
	if (iLocal_70 == 0)
	{
		if (!func_471(iLocal_51, 1) && !func_471(iLocal_51, 16))
		{
			if (func_367(0))
			{
				func_463(&iLocal_51, 1);
			}
		}
		if (!func_471(iLocal_51, 4) && !func_471(iLocal_51, 64))
		{
			if (func_367(2))
			{
				func_463(&iLocal_51, 4);
			}
		}
		if (!func_471(iLocal_51, 8) && !func_471(iLocal_51, 128))
		{
			if (func_367(1))
			{
				func_463(&iLocal_51, 8);
			}
		}
	}
}

int func_367(int iParam0)//Position - 0x11255
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	vVar0 = { func_179(iParam0) };
	vVar1 = { unk_0xB3328BA8976B416C(iLocal_93, 1) };
	if (iLocal_299[iParam0] == 0)
	{
		if (unk_0x82FF3DFBC3965CC0(iLocal_93) == -376434238)
		{
			iLocal_299[iParam0] = unk_0x46B117663893ED70(vVar0, vVar1, 0,1f, 511, iLocal_93, 3);
		}
		else if ((unk_0x82FF3DFBC3965CC0(iLocal_93) == joaat("casco") || unk_0x82FF3DFBC3965CC0(iLocal_93) == joaat("feltzer3")) || unk_0x82FF3DFBC3965CC0(iLocal_93) == 1617472902)
		{
			iLocal_299[iParam0] = unk_0x46B117663893ED70(vVar0, vVar1, 0,15f, 511, iLocal_93, 3);
		}
		else
		{
			iLocal_299[iParam0] = unk_0x46B117663893ED70(vVar0, vVar1, 0,25f, 511, iLocal_93, 3);
		}
	}
	else
	{
		switch (unk_0x16ACABF450EB00B4(iLocal_299[iParam0], &iVar2, &uVar3, &uVar4, &uVar5))
		{
			case 2:
				iLocal_299[iParam0] = 0;
				if (iVar2 != 0)
				{
					func_368(iParam0);
					return 0;
				}
				else
				{
					return 1;
				}
				break;
			
			case 1:
				break;
			
			case 0:
				iLocal_299[iParam0] = 0;
				break;
			}
	}
	return 0;
}

void func_368(int iParam0)//Position - 0x1137C
{
	switch (iParam0)
	{
		case 0:
			if (!func_471(iLocal_51, 16))
			{
				func_463(&iLocal_51, 16);
				func_5(&iLocal_51, 1);
			}
			break;
		
		case 1:
			if (!func_471(iLocal_51, 128))
			{
				func_463(&iLocal_51, 128);
				func_5(&iLocal_51, 8);
			}
			break;
		
		case 2:
			if (!func_471(iLocal_51, 64))
			{
				func_463(&iLocal_51, 64);
				func_5(&iLocal_51, 4);
			}
			break;
		
		case 3:
			if (!func_471(iLocal_51, 32))
			{
				func_463(&iLocal_51, 32);
				func_5(&iLocal_51, 2);
			}
			break;
	}
}

void func_369()//Position - 0x1141C
{
	if (func_374() && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		iLocal_286 = 9;
		func_372(iLocal_90);
		func_372(unk_0xFC1458A37D98B502());
		func_370();
		func_34(&iLocal_98);
	}
}

void func_370()//Position - 0x11457
{
	struct<7> Var0;
	struct<7> Var1;
	
	if (!unk_0x8EA3C8E091EA5BA4(iLocal_96))
	{
		iLocal_96 = unk_0x4562AC7F06CD71B3("DEFAULT_SCRIPTED_CAMERA", true);
	}
	if (!unk_0x8EA3C8E091EA5BA4(iLocal_97))
	{
		iLocal_97 = unk_0x4562AC7F06CD71B3("DEFAULT_SCRIPTED_CAMERA", true);
	}
	func_371(&Var0, &Var1);
	unk_0xA215B2F25E63FA31(iLocal_96, Var0);
	unk_0xBEBD5CAE3510CD2A(iLocal_96, Var0.f_3, 2);
	unk_0xE43C573FE3C5D758(iLocal_96, Var0.f_6);
	unk_0xA215B2F25E63FA31(iLocal_97, Var1);
	unk_0xBEBD5CAE3510CD2A(iLocal_97, Var1.f_3, 2);
	unk_0xE43C573FE3C5D758(iLocal_97, Var1.f_6);
	unk_0x7849794435F39D49(iLocal_96, true);
	unk_0x7849794435F39D49(iLocal_97, false);
	unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
}

void func_371(var uParam0, var uParam1)//Position - 0x114ED
{
	switch (func_18())
	{
		case 0:
			*uParam0 = { -823,9435f, 186,8976f, 75,5221f };
			uParam0->f_3 = { -18,973f, 0f, -179,5878f };
			uParam0->f_6 = 50f;
			*uParam1 = { -828,0038f, 179,5113f, 75,7418f };
			uParam1->f_3 = { 14,0219f, 0f, -107,3339f };
			uParam1->f_6 = 50f;
			break;
		
		case 1:
			*uParam0 = { -20,162f, -1443,916f, 31,9468f };
			uParam0->f_3 = { -12,0736f, 0f, -130,562f };
			uParam0->f_6 = 50f;
			*uParam1 = { -15,925f, -1446,92f, 31,9534f };
			uParam1->f_3 = { -10,3101f, 0f, 34,3879f };
			uParam1->f_6 = 50f;
			break;
		
		case 2:
			*uParam0 = { 1972,248f, 3804,805f, 36,7174f };
			uParam0->f_3 = { -19,6476f, 0f, -45,6158f };
			uParam0->f_6 = 50f;
			*uParam1 = { 1970,194f, 3807,541f, 35,5247f };
			uParam1->f_3 = { -15,8717f, 0f, 41,6556f };
			uParam1->f_6 = 50f;
			break;
	}
}

void func_372(int iParam0)//Position - 0x11627
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		unk_0xFAA3EF7FF92E1F9E(&iVar0);
		unk_0x6931076730A4AC5D(&iVar0);
		if (unk_0x88DDBE9908752BF0(iParam0, 0))
		{
			unk_0x16416C5B54FDBCBB(0, 0, 16842752);
		}
		unk_0x380C1E7B7740D618(0, func_373(), 1f, -1, 0,5f, 8192, 1193033728);
		unk_0x1B16DD5C115FE009(iVar0);
		unk_0xAB30B1CF01A198C1(iParam0, iVar0);
		unk_0xFAA3EF7FF92E1F9E(&iVar0);
	}
}

Vector3 func_373()//Position - 0x11686
{
	switch (func_18())
	{
		case 0:
			return -819,88f, 177,47f, 70,63f;
			break;
		
		case 1:
			return -14,57f, -1437,56f, 30,12f;
			break;
		
		case 2:
			return 1972,16f, 3817,47f, 32,43f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_374()//Position - 0x116EB
{
	return system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), func_376()) < (func_375() * func_375());
}

float func_375()//Position - 0x1170E
{
	switch (func_18())
	{
		case 0:
			return 20,75f;
			break;
		
		case 1:
			return 10f;
			break;
		
		case 2:
			return 14f;
			break;
	}
	return 0f;
}

Vector3 func_376()//Position - 0x11753
{
	switch (func_18())
	{
		case 0:
			return -827,04f, 172,26f, 69,48f;
			break;
		
		case 1:
			return -16,98f, -1451,59f, 29,57f;
			break;
		
		case 2:
			return 1983,22f, 3820,64f, 31,37f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_377()//Position - 0x117B8
{
	func_315();
	func_392();
	if (!func_10(&iLocal_101))
	{
		func_453(&iLocal_101);
	}
	if (func_391())
	{
		return;
	}
	if (!func_10(&iLocal_110))
	{
		func_453(&iLocal_110);
	}
	if (func_365() && unk_0xA8D0477084E86A92(iLocal_90, iLocal_93, 0))
	{
		if (unk_0x9EC5112BB1C4047A(iLocal_93) && unk_0x5E0BEAAD15B888F3(iLocal_93))
		{
			if ((func_384() && !func_374()) && !func_383())
			{
				func_382();
				if (func_7(&iLocal_110) > 2,5f)
				{
					iLocal_83 = unk_0x068179DC75448F03(unk_0xB3328BA8976B416C(iLocal_93, 0), 40f, 40f, 40f, unk_0xF0371FE6E2BF9599(iLocal_93), 0, 7);
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 896);
					func_463(&iLocal_49, 2048);
					iLocal_94 = 0;
					unk_0x4DE114E3C7F8B7C2("ProstituteInPlay", &iLocal_298);
					unk_0xF96119FCCD4D1889(1, iLocal_298, 1862763509);
					unk_0xCE93FCB8A8D8DF0B(iLocal_90, iLocal_298);
					func_472("Moving into sex state eCurrentProstituteState = PROSTITUTE_CHOOSING_SERVICE ");
					func_5(&iLocal_49, 1024);
					iLocal_295 = -15;
					func_121();
					func_381();
					iLocal_81 = 3;
					if (func_42(0, 1))
					{
						unk_0xBC3B7443617858A0(false);
					}
					iLocal_286 = 8;
				}
			}
			else
			{
				if ((!unk_0xAFFA17B5D5E2F248(unk_0xFC1458A37D98B502()) && func_7(&iLocal_101) > 15f) && func_380())
				{
					if (!func_471(iLocal_50, 4096))
					{
						func_334("PROS_SPOT", -1);
						func_463(&iLocal_50, 4096);
					}
					func_379();
					func_34(&iLocal_101);
				}
				func_34(&iLocal_110);
			}
		}
		else
		{
			func_34(&iLocal_110);
			func_378();
		}
	}
	else if (!func_374())
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_90))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_90))
			{
				unk_0xB8E08BD5B184DF4E(iLocal_90);
			}
		}
		func_454(0);
	}
}

void func_378()//Position - 0x1196A
{
	iLocal_51 = 0;
	iLocal_299[0] = 0;
	iLocal_299[1] = 0;
	iLocal_299[2] = 0;
	iLocal_299[3] = 0;
}

void func_379()//Position - 0x11991
{
	if (unk_0x3AB6A1A9084FB0A4(iLocal_90))
	{
		return;
	}
	if (!unk_0xAFFA17B5D5E2F248(iLocal_90))
	{
		unk_0x74D45BB07BD51F8B(iLocal_90, "HOOKER_SECLUDED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_380()//Position - 0x119BE
{
	if (!func_471(iLocal_51, 256))
	{
		return 1;
	}
	return func_471(iLocal_51, 32);
}

void func_381()//Position - 0x119DF
{
	if (func_530())
	{
		unk_0xAE01EF4BC84AFE7C(iLocal_90, 229, true);
		unk_0xAE01EF4BC84AFE7C(iLocal_90, 26, true);
		unk_0xAE01EF4BC84AFE7C(iLocal_90, 115, true);
		unk_0x771A86309E0CA47B(iLocal_90, true);
	}
}

void func_382()//Position - 0x11A10
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	if (!func_471(iLocal_49, 2097152))
	{
		if (unk_0x53C562FD2B9E3AB0() > iLocal_82)
		{
			if (iLocal_94 == 0)
			{
				vVar0 = { unk_0xB3328BA8976B416C(iLocal_93, 1) };
				unk_0x7367FB97975F1E29(vVar0, &fVar2, 0, 0);
				vVar0.z = (fVar2 + 0,15f);
				vVar1 = { unk_0x3F90543934DCD7E6(iLocal_93, 0f, 0f, -2f) };
				iLocal_94 = unk_0xFF32E7A273D539FD(vVar0, vVar1, 2f, 511, iLocal_93, 7);
			}
			else if (unk_0xD91A4D7A82AF7DAA(iLocal_94, &iVar4, &uVar5, &uVar6, &iVar3, &uVar7) == 2)
			{
				if (iVar4 != 0)
				{
					if ((iVar3 == -1447280105 || iVar3 == 1925605558) || iVar3 == 2128369009)
					{
						func_34(&iLocal_110);
					}
				}
				iLocal_82 = unk_0x53C562FD2B9E3AB0() + 1500;
				iLocal_94 = 0;
			}
		}
	}
}

int func_383()//Position - 0x11ADB
{
	int iVar0;
	
	iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
	if (unk_0xB8DE76287EDC4957(iVar0, 0))
	{
		if (!unk_0x8EE3A848975DDF21(iVar0, 0, 0))
		{
			if (unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()) || unk_0x0BA31FF7931F3DD3(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_384()//Position - 0x11B27
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iLocal_93 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		}
		vVar1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		if (unk_0x70618273A570C7E0(vVar1, func_59(0), 12f, 0) || unk_0x70618273A570C7E0(vVar1, func_59(1), 12f, 0))
		{
			return 0;
		}
		if (func_390())
		{
			return 0;
		}
		if (func_389(iLocal_93, &vVar2))
		{
			if (!func_388(vVar2))
			{
				if (!func_387(vVar1) || func_386(vVar1))
				{
					return 0;
				}
			}
		}
		if (func_84(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), (30f * 0,5f)))
		{
			return 0;
		}
		if (!unk_0x8EA8060A1C856203(iLocal_90, iLocal_93, 0, 0, false))
		{
			return 0;
		}
		unk_0x79BEA7176019D985(1);
		if (unk_0xB7AF4220260C2ACD(vVar1, 20f, 1, 1, &iVar0, 0, 1, -1))
		{
			if (unk_0x6ADD12BF4D6D2587(iVar0))
			{
				if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
				{
					if (unk_0xFFCE4302A2DB825B(iVar0, iLocal_93, 17))
					{
						return 0;
					}
				}
			}
			else
			{
				func_472("NO VEHICLES FOUND");
			}
		}
		iVar3 = unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502());
		if (!iVar3 == 0)
		{
			func_472("IN AN INTERIOR");
			return 0;
		}
		if (func_385())
		{
			return 0;
		}
	}
	return 1;
}

int func_385()//Position - 0x11C7B
{
	func_463(&iLocal_51, 256);
	if (!func_471(iLocal_51, 2))
	{
		if (func_367(3))
		{
			func_463(&iLocal_51, 2);
			func_5(&iLocal_51, 32);
		}
		return 1;
	}
	else
	{
		func_366();
	}
	return 0;
}

int func_386(vector3 vParam0)//Position - 0x11CBA
{
	if (((((((((system::vdist(vParam0, 491,76f, -515,73f, 29,51f) <= 12f || system::vdist(vParam0, -1453,385f, -594,2627f, 29,7966f) <= 12f) || system::vdist(vParam0, -633,6086f, -332,3337f, 33,81f) <= 25f) || system::vdist(vParam0, -1493,191f, -693,9906f, 26,0665f) <= 25f) || system::vdist(vParam0, -1512,938f, -675,6082f, 27,4202f) <= 25f) || system::vdist(vParam0, -1388,642f, -1342,266f, 3,1626f) <= 25f) || system::vdist(vParam0, 50,2024f, -1392,306f, 28,4166f) <= 12f) || system::vdist(vParam0, 25,9811f, -1392,289f, 28,3356f) <= 12f) || system::vdist(vParam0, 10,0435f, -1391,596f, 28,3074f) <= 12f) || system::vdist(vParam0, -1196,6f, -519,6772f, 31,9742f) <= 12f)
	{
		return 1;
	}
	return 0;
}

int func_387(vector3 vParam0)//Position - 0x11E22
{
	if ((((((system::vdist(vParam0, -1582,782f, 5168,163f, 18,5615f) <= 15f || system::vdist(vParam0, -1445,73f, -640,8375f, 28,7804f) <= 15f) || system::vdist(vParam0, -348,7544f, 292,5813f, 83,9843f) <= 15f) || system::vdist(vParam0, -273f, 317,8898f, 92,2549f) <= 15f) || system::vdist(vParam0, -1627,935f, -1083,443f, 3,2819f) <= 40f) || system::vdist(vParam0, -1661,098f, -1057,73f, 2,5729f) <= 40f) || system::vdist(vParam0, -1518,358f, -553,8981f, 32,1463f) <= 15f)
	{
		func_463(&iLocal_49, 2097152);
		return 1;
	}
	func_5(&iLocal_49, 2097152);
	return 0;
}

int func_388(vector3 vParam0)//Position - 0x11F35
{
	int iVar0;
	
	iVar0 = unk_0x5B253C8E41C51E8E(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 1, 1, 1077936128, 0);
	unk_0x52854081FE5E271E(iVar0, &vParam0);
	if (unk_0xAEB36CE218651907(iVar0))
	{
		if (!unk_0x81B7CF786E5C8681(iVar0))
		{
			if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vParam0) > 400f)
			{
				return 1;
			}
		}
		else if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vParam0) > 56,25f)
		{
			return 1;
		}
	}
	else if (!unk_0x81B7CF786E5C8681(iVar0))
	{
		if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vParam0) > 400f)
		{
			return 1;
		}
	}
	else
	{
		iVar0 = unk_0x5B253C8E41C51E8E(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 1, 8, 1077936128, 0);
		unk_0x52854081FE5E271E(iVar0, &vParam0);
		if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vParam0) > 400f)
		{
			return 1;
		}
	}
	return 0;
}

int func_389(int iParam0, var uParam1)//Position - 0x1201B
{
	vector3 vVar0[4];
	
	vVar0[0 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, 2f, 0f, 0f) };
	vVar0[1 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, -2f, 0f, 0f) };
	vVar0[2 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, 0f, 2f, 0f) };
	vVar0[3 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, 0f, -2f, 0f) };
	if (unk_0x0BEC3E4FA151C846(vVar0[0 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x0BEC3E4FA151C846(vVar0[1 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x0BEC3E4FA151C846(vVar0[2 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x0BEC3E4FA151C846(vVar0[3 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	return 0;
}

bool func_390()//Position - 0x120E2
{
	return Global_68215;
}

int func_391()//Position - 0x120EE
{
	if (unk_0x8F38E94BBF3404CD(joaat("carwash1")) > 0 || unk_0x8F38E94BBF3404CD(joaat("carwash2")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_392()//Position - 0x1211A
{
	if (!func_471(iLocal_49, 128))
	{
		func_393(39, 1);
		func_393(40, 1);
		func_393(41, 1);
		func_393(42, 1);
		func_393(43, 1);
		func_393(44, 1);
		func_463(&iLocal_49, 128);
	}
}

void func_393(int iParam0, bool bParam1)//Position - 0x12160
{
	if (bParam1)
	{
		if (!func_397(iParam0, 2, 1))
		{
			func_396(iParam0, 2, 1);
		}
	}
	else if (func_397(iParam0, 2, 1))
	{
		func_394(iParam0, 2, 1);
	}
}

void func_394(int iParam0, int iParam1, bool bParam2)//Position - 0x12197
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_146() == 0)
		{
			iVar0 = func_134(func_395(iParam0), -1, 0);
			unk_0x0EE72DB1CD8A3B86(&iVar0, iParam1);
			func_131(func_395(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

int func_395(int iParam0)//Position - 0x12200
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

void func_396(int iParam0, int iParam1, bool bParam2)//Position - 0x124E5
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_146() == 0)
		{
			iVar0 = func_134(func_395(iParam0), -1, 0);
			unk_0x872F1C1F8587CCC7(&iVar0, iParam1);
			func_131(func_395(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

int func_397(int iParam0, int iParam1, bool bParam2)//Position - 0x1254E
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_146() == 0)
		{
			return unk_0xC80D31E4B587871C(func_134(func_395(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_398(var uParam0)//Position - 0x125AE
{
	if (func_471(iLocal_49, 2))
	{
		if (!func_57())
		{
			return;
		}
		func_93(1);
	}
	func_62();
	func_521();
	if (func_530())
	{
		func_516(uParam0);
	}
}

void func_399()//Position - 0x125E5
{
	if (!unk_0x191BE1BC8F26F3C1(iLocal_90, 0))
	{
		if (unk_0x21B6FFFD04C9FF3A(iLocal_90, unk_0xFC1458A37D98B502(), 5f, 5f, 5f, 0, 1, 0) || func_471(iLocal_49, 8192))
		{
			unk_0x4FB260623DD93924(0, 101, 1);
			unk_0x4FB260623DD93924(0, 74, 1);
			unk_0x01B48CB2F72AE113(0, 51);
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0x88DDBE9908752BF0(iLocal_90, 0))
			{
				unk_0xCFB385D0FF082808(iLocal_90, 50);
				unk_0xC820D40994BFF79C(iLocal_90, 5f);
				if (func_471(iLocal_49, 16))
				{
					if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
					{
						unk_0x673813CA895142E3(unk_0x9EB17624F44A8DA4(), 1);
						func_5(&iLocal_49, 16);
					}
				}
				iLocal_93 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				if (unk_0xB8DE76287EDC4957(iLocal_93, 0))
				{
					if (unk_0xAAA8D20859E2D36D(iLocal_90, iLocal_93) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_93, 0))
					{
						func_472("***** prostitute IN VEHICLE****** ");
						if (func_471(iLocal_49, 8))
						{
							if (unk_0xD9C499EAA1D3F82A(func_86()))
							{
								if (func_409(iLocal_93))
								{
									unk_0xFCD667A487259F5A(iLocal_90, unk_0x8B948C59217A295D("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
								}
								else if (func_408(iLocal_93))
								{
									unk_0xFCD667A487259F5A(iLocal_90, unk_0x8B948C59217A295D("MINI_PROSTITUTE_LOW_RESTRICTED_NOAMBIENT_PASSENGER"));
								}
								else if (func_407(iLocal_93))
								{
									unk_0xFCD667A487259F5A(iLocal_90, unk_0x8B948C59217A295D("MINI_PROSTITUTE_LOW_LOWRIDER_PASSENGER"));
								}
								else if (func_406(iLocal_93))
								{
									unk_0xFCD667A487259F5A(iLocal_90, unk_0x8B948C59217A295D("MINI_PROSTITUTE_LOW_LOWRIDER2_PASSENGER"));
								}
								else if (func_405(iLocal_93))
								{
									unk_0xFCD667A487259F5A(iLocal_90, unk_0x8B948C59217A295D("MINI_PROSTITUTE_LOW_INFERNUS2_PASSENGER"));
								}
								else if (func_404(iLocal_93))
								{
									unk_0xFCD667A487259F5A(iLocal_90, unk_0x8B948C59217A295D("MINI_PROSTITUTE_LOW_SC1_PASSENGER"));
								}
								else if (func_403(iLocal_93))
								{
									unk_0xFCD667A487259F5A(iLocal_90, unk_0x8B948C59217A295D("MINI_PROSTITUTE_LOW_TEZERACT_PASSENGER"));
								}
								else if (func_402(iLocal_93))
								{
									unk_0xFCD667A487259F5A(iLocal_90, unk_0x8B948C59217A295D("MINI_PROSTITUTE_LOW_DOMINATOR3_PASSENGER"));
								}
								else
								{
									unk_0xFCD667A487259F5A(iLocal_90, unk_0x8B948C59217A295D("MINI_PROSTITUTE_LOW_PASSENGER"));
								}
							}
						}
						if (func_530())
						{
							unk_0xDD29FF4BAB8AFF9C(iLocal_90, false, 0);
						}
						else
						{
							unk_0xDD29FF4BAB8AFF9C(iLocal_90, true, 1);
						}
						func_175(iLocal_90, 0);
						func_379();
						iLocal_62 = unk_0x53C562FD2B9E3AB0();
						func_34(&iLocal_101);
						iLocal_286 = 7;
					}
					else
					{
						func_472("SOMETHINGS GONE WRONGWITH PROS GETTING INTO VEHICLE , either her or player");
					}
				}
			}
			else
			{
				if ((func_401(iLocal_90, unk_0xFC1458A37D98B502(), 1) > 11f || func_400(20f)) || !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_93, 0))
				{
					func_108(&iLocal_107);
					if (!unk_0x88DDBE9908752BF0(iLocal_90, 0))
					{
						unk_0xB8E08BD5B184DF4E(iLocal_90);
						func_454(0);
						func_472("PROS FINISHED SEQUENCE TASK BUT NOT IN VEHICLE");
						func_89(15);
					}
				}
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					if (!unk_0xB8DE76287EDC4957(iLocal_93, 0))
					{
						iLocal_93 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					}
					else if (!unk_0x8EA8060A1C856203(iLocal_90, iLocal_93, 0, 0, false))
					{
						if (!func_105())
						{
							if (!func_471(iLocal_73, 1))
							{
								func_34(&iLocal_113);
								func_463(&iLocal_73, 1);
							}
							else if (func_7(&iLocal_113) > 20f)
							{
								func_119();
								func_472("prostitute couldn't get into the car");
								iLocal_286 = 6;
							}
						}
					}
				}
			}
		}
		else if (!func_471(iLocal_73, 1))
		{
			func_472("PLAYER out of range for entering VEHICLE or wanted level");
			unk_0xB8E08BD5B184DF4E(iLocal_90);
			func_89(15);
		}
	}
}

bool func_400(float fParam0)//Position - 0x128E5
{
	if (!func_10(&iLocal_107))
	{
		func_34(&iLocal_107);
	}
	return func_114(&iLocal_107) > fParam0;
}

float func_401(int iParam0, int iParam1, bool bParam2)//Position - 0x12906
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

int func_402(int iParam0)//Position - 0x12964
{
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		switch (unk_0xD9E4EECED37F4370(iParam0))
		{
			case 1212243433:
				return 1;
				break;
			}
	}
	return 0;
}

int func_403(int iParam0)//Position - 0x1298F
{
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		switch (unk_0xD9E4EECED37F4370(iParam0))
		{
			case 570040040:
			case -193022774:
				return 1;
				break;
			}
	}
	return 0;
}

int func_404(int iParam0)//Position - 0x129C0
{
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		switch (unk_0xD9E4EECED37F4370(iParam0))
		{
			case 1192783831:
				return 1;
				break;
			}
	}
	return 0;
}

int func_405(int iParam0)//Position - 0x129EB
{
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		switch (unk_0xD9E4EECED37F4370(iParam0))
		{
			case -1546132012:
				return 1;
				break;
			}
	}
	return 0;
}

int func_406(int iParam0)//Position - 0x12A16
{
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		switch (unk_0xD9E4EECED37F4370(iParam0))
		{
			case 1837596901:
			case 2013836096:
				return 1;
				break;
			}
	}
	return 0;
}

int func_407(int iParam0)//Position - 0x12A47
{
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		switch (unk_0xD9E4EECED37F4370(iParam0))
		{
			case 1697345049:
			case -635697407:
				return 1;
				break;
			}
	}
	return 0;
}

int func_408(int iParam0)//Position - 0x12A78
{
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		switch (unk_0xD9E4EECED37F4370(iParam0))
		{
			case -782720499:
			case -38413156:
			case 2071837743:
				return 1;
				break;
			}
	}
	return 0;
}

int func_409(int iParam0)//Position - 0x12AAF
{
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		switch (unk_0xD9E4EECED37F4370(iParam0))
		{
			case 542797648:
			case 68566729:
			case 2033852426:
			case -1820894825:
			case -1453479140:
			case 2130662788:
			case 1410462333:
			case -317944664:
				return 1;
				break;
			}
	}
	return 0;
}

void func_410(var uParam0)//Position - 0x12B04
{
	int iVar0;
	
	if (!func_419(0))
	{
		return;
	}
	if (!func_471(iLocal_49, 16))
	{
		unk_0x673813CA895142E3(unk_0x9EB17624F44A8DA4(), 0);
		func_463(&iLocal_49, 16);
	}
	if (!func_10(&iLocal_107))
	{
		func_453(&iLocal_107);
	}
	if (func_114(&iLocal_107) >= 20f || !unk_0x21B6FFFD04C9FF3A(iLocal_90, unk_0xFC1458A37D98B502(), 3f, 3f, 3f, 0, 1, 0))
	{
		if (func_471(iLocal_73, 524288))
		{
			func_108(&iLocal_107);
			iLocal_286 = 6;
		}
		else if (func_418())
		{
			func_34(&iLocal_107);
			func_463(&iLocal_73, 524288);
		}
	}
	func_63(iLocal_90);
	if (((unk_0x21B6FFFD04C9FF3A(iLocal_90, unk_0xFC1458A37D98B502(), 3f, 3f, 3f, 0, 1, 0) || func_471(iLocal_73, 1)) && !func_209(0)) && !func_390())
	{
		if (!unk_0x8EA8060A1C856203(iLocal_90, iLocal_93, 0, 0, false))
		{
			if (!func_105())
			{
				if (!func_471(iLocal_73, 1))
				{
					func_34(&iLocal_113);
					func_463(&iLocal_73, 1);
				}
				else if (func_7(&iLocal_113) > 10f)
				{
					func_62();
					unk_0xB8E08BD5B184DF4E(iLocal_90);
					func_472("prostitute couldn't get into the car");
					iLocal_286 = 6;
				}
			}
		}
		else
		{
			func_411();
		}
	}
	else if (func_451("PROS_ACCEPT"))
	{
		func_5(&iLocal_49, 1048576);
		func_449();
		if (func_530())
		{
			iVar0 = unk_0x78F50AA8F955BEFC(iLocal_90, -2017877118);
			if (iVar0 != 1 && iVar0 != 0)
			{
				func_521();
				func_516(uParam0);
			}
		}
	}
}

void func_411()//Position - 0x12C7F
{
	char* sVar0;
	
	if (iLocal_286 != 5 && func_351(&sVar0, 0))
	{
		func_414();
		if (func_412(iLocal_72, 1) || unk_0x5D91591CADE6DF0F(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x74D45BB07BD51F8B(unk_0xFC1458A37D98B502(), "HOOKER_REQUEST", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_463(&iLocal_49, 8192);
			func_34(&iLocal_107);
		}
		if (func_471(iLocal_49, 8192))
		{
			func_449();
			Global_25383 = 1;
			Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_418 = 1;
			func_124("PROSTITUTES_SOLICIT_SCENE");
			func_81("PROSTITUTES_DRIVE_SCENE");
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0x78F50AA8F955BEFC(iLocal_90, -1794415470) != 1 && !unk_0xA8D0477084E86A92(iLocal_90, unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 1))
				{
					unk_0x6F8C8278B7C06889(iLocal_90, iLocal_93, -1, 0, 1f, 8388609, 0);
				}
			}
			sLocal_61 = func_44(unk_0xFC1458A37D98B502(), 1, 0);
			unk_0x6450931B826B49D9(sLocal_61);
			sLocal_61 = func_44(unk_0xFC1458A37D98B502(), 0, 1);
			unk_0x6450931B826B49D9(sLocal_61);
			func_34(&iLocal_101);
			iLocal_286 = 5;
		}
	}
}

int func_412(int iParam0, bool bParam1)//Position - 0x12D7A
{
	int iVar0;
	
	iVar0 = func_413(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5BEF7A5AB8F17255(unk_0x98EC0789D9F0703B()))
	{
		return 0;
	}
	if (func_209(0))
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

int func_413(int iParam0)//Position - 0x12E32
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

void func_414()//Position - 0x12E6D
{
	if (Global_25383)
	{
		if (unk_0x0F30C1F1717A6437())
		{
			return;
		}
		unk_0x4FB260623DD93924(0, 101, 1);
		unk_0x4FB260623DD93924(0, 74, 1);
		unk_0x01B48CB2F72AE113(0, 51);
		if (!func_471(iLocal_49, 8192))
		{
			if (iLocal_72 == -1)
			{
				func_416(&iLocal_72, 5, "PROS_ACCEPT", 0, 0, 0, 0);
			}
		}
	}
	else if (func_415(iLocal_72, 0))
	{
		func_449();
	}
}

int func_415(int iParam0, int iParam1)//Position - 0x12ECF
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_413(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_36565[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_36565[iVar0 /*32*/].f_12)
	{
		unk_0x5BE7193BC62CE2CE(&(Global_36565[iVar0 /*32*/].f_8));
		unk_0xA6D2B267C377D7B2(&Global_36760);
		iVar1 = unk_0x0683D2027E169355(0);
	}
	else
	{
		unk_0x5BE7193BC62CE2CE(&(Global_36565[iVar0 /*32*/].f_8));
		unk_0xA6D2B267C377D7B2(&Global_36760);
		if (Global_36565[iVar0 /*32*/].f_30)
		{
			unk_0x854FACC4E5F40C82(&(Global_36565[iVar0 /*32*/].f_13));
		}
		else
		{
			unk_0xA6D2B267C377D7B2(&(Global_36565[iVar0 /*32*/].f_13));
		}
		iVar1 = unk_0x0683D2027E169355(0);
	}
	return iVar1;
}

void func_416(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x12F84
{
	int iVar0;
	
	if (unk_0x8F38E94BBF3404CD(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x1E06D00B67177A18())
	{
		if (!*iParam0 == -1)
		{
			func_417(iParam0);
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

void func_417(int iParam0)//Position - 0x130AF
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_413(*iParam0);
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

int func_418()//Position - 0x13106
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x6ADD12BF4D6D2587(iLocal_90) || unk_0x3AB6A1A9084FB0A4(iLocal_90))
	{
		return 1;
	}
	if (!func_530())
	{
		func_62();
		if (unk_0x88DDBE9908752BF0(iLocal_90, 1))
		{
			unk_0x93F12E7D8D931858(iLocal_90, 1193033728, 0);
		}
		else if (func_471(iLocal_49, 4194304))
		{
			iVar0 = unk_0x63A6486593EC7EC3(8, 11);
			unk_0x6931076730A4AC5D(&iVar1);
			unk_0x12C9D41D52A560D6(0, func_61(iLocal_284), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, func_61(iLocal_284), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0x1B16DD5C115FE009(iVar1);
			unk_0xAB30B1CF01A198C1(iLocal_90, iVar1);
			unk_0xFAA3EF7FF92E1F9E(&iVar1);
		}
		return 1;
	}
	if (unk_0x88DDBE9908752BF0(iLocal_90, 1))
	{
		if (unk_0xA0BF73C5030D3F60(iLocal_90))
		{
			unk_0x93F12E7D8D931858(iLocal_90, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0xC8DAB4CEBB9AB263(iLocal_90);
			return 0;
		}
	}
	switch (iLocal_55)
	{
		case 0:
			if (func_471(iLocal_49, 4194304))
			{
				func_62();
				iLocal_55 = 1;
			}
			break;
		
		case 1:
			if (unk_0xA0BF73C5030D3F60(iLocal_90))
			{
				unk_0x12C9D41D52A560D6(iLocal_90, func_61(iLocal_284), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
				iLocal_55 = 2;
			}
			else
			{
				unk_0xC8DAB4CEBB9AB263(iLocal_90);
			}
			break;
		
		case 2:
			if (unk_0xA0BF73C5030D3F60(iLocal_90))
			{
				if (unk_0x78F50AA8F955BEFC(iLocal_90, -2017877118) == 7)
				{
					iVar0 = unk_0x63A6486593EC7EC3(8, 11);
					unk_0x12C9D41D52A560D6(iLocal_90, func_61(iLocal_284), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
					iLocal_55 = 3;
				}
			}
			else
			{
				unk_0xC8DAB4CEBB9AB263(iLocal_90);
			}
			break;
		
		case 3:
			iLocal_55 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_419(bool bParam0)//Position - 0x132BD
{
	if (unk_0x191BE1BC8F26F3C1(iLocal_90, 0))
	{
		return 0;
	}
	if (func_471(iLocal_49, 8192))
	{
	}
	if (func_401(iLocal_90, unk_0xFC1458A37D98B502(), 1) > 11f)
	{
		return 0;
	}
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		return 0;
	}
	if (func_530())
	{
		if (unk_0x1635D2AD9D560E95(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) > 1)
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (unk_0x90D5DFB054818BA7(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) > 2f)
		{
			return 0;
		}
	}
	if (func_84(unk_0xB3328BA8976B416C(iLocal_90, 1), 1106247680))
	{
		if (!func_471(iLocal_50, 8192) && !unk_0x9CDE960577DADF0F(unk_0xFC1458A37D98B502()))
		{
			func_334("PROS_COPS", -1);
			func_463(&iLocal_50, 8192);
		}
		return 0;
	}
	if (!func_365())
	{
		if (!func_530())
		{
			if ((!iLocal_86 && !Global_103602) && func_421(unk_0xFC1458A37D98B502(), 0) == -1)
			{
				func_334("PROS_CAR", -1);
				iLocal_86 = 1;
			}
			func_420();
		}
		else if (!func_504(4096))
		{
			func_334("PROS_CAR", -1);
			func_189(4096);
		}
		return 0;
	}
	return 1;
}

void func_420()//Position - 0x133E6
{
	if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		return;
	}
	if (!func_471(iLocal_49, 1))
	{
		if (!unk_0xAFFA17B5D5E2F248(unk_0xFC1458A37D98B502()) && !unk_0xAFFA17B5D5E2F248(iLocal_90))
		{
			unk_0x74D45BB07BD51F8B(unk_0xFC1458A37D98B502(), "HOOKER_CAR_INCORRECT", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_463(&iLocal_49, 1);
		}
	}
}

int func_421(int iParam0, int iParam1)//Position - 0x13437
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

void func_422()//Position - 0x134BC
{
	if (func_419(0))
	{
		func_411();
		if (unk_0x78F50AA8F955BEFC(iLocal_90, 242628503) == 7 && !func_471(iLocal_49, 8192))
		{
			if (func_66(1))
			{
				func_108(&iLocal_107);
				iLocal_62 = unk_0x53C562FD2B9E3AB0();
				func_472("prostitute proposition player VEHICLE");
				iLocal_286 = 4;
			}
		}
	}
	else
	{
		unk_0xB8E08BD5B184DF4E(iLocal_90);
		func_89(15);
	}
}

void func_423(var uParam0)//Position - 0x1351E
{
	if (func_419(0))
	{
		func_411();
		if (unk_0x78F50AA8F955BEFC(iLocal_90, 242628503) == 7 || func_471(iLocal_49, 8192))
		{
			iLocal_286 = 3;
		}
		else if (func_400(20f))
		{
			func_108(&iLocal_107);
			func_454(0);
		}
		else
		{
			func_424(uParam0);
		}
	}
	else
	{
		unk_0xB8E08BD5B184DF4E(iLocal_90);
		func_89(15);
	}
}

void func_424(var uParam0)//Position - 0x13587
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	int iVar6;
	
	if (!unk_0x6ADD12BF4D6D2587(iLocal_93))
	{
		return;
	}
	unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iLocal_93), &vVar2, &vVar1);
	vVar0 = { vVar1 - vVar2 };
	vVar0 = { vVar0 / Vector(2f, 2f, 2f) };
	vVar3 = { unk_0x3F90543934DCD7E6(iLocal_93, -(vVar0.x + 0,2f), 0f, 0f) };
	vVar4 = { unk_0x3F90543934DCD7E6(iLocal_93, (vVar0.x + 0,2f), 0f, 0f) };
	vVar5 = { unk_0xB3328BA8976B416C(iLocal_90, 1) };
	if (system::vdist(vVar5, vVar4) < system::vdist(vVar5, vVar3))
	{
		vVar3 = { vVar4 };
	}
	if ((unk_0x78F50AA8F955BEFC(iLocal_90, -1794415470) != 1 || !func_471(iLocal_49, 8192)) && system::vdist2(vLocal_89, vVar3) > 0f)
	{
		if (func_530())
		{
			if (!unk_0x9761C10D57B68069(iLocal_90))
			{
				unk_0xDD29FF4BAB8AFF9C(iLocal_90, false, 1);
			}
			func_434(&uLocal_281, func_61(iLocal_284));
			func_428(uParam0, 1);
			func_425(&uLocal_281, uParam0);
		}
		unk_0x6931076730A4AC5D(&iVar6);
		unk_0x380C1E7B7740D618(0, vVar3.x, vVar3.y, vVar3.z, 1f, -1, 1f, 8192, 1193033728);
		unk_0x7FC89099E65488E2(0, unk_0xD0E00576168D19BB(unk_0xFC1458A37D98B502(), 31086, 0f, 0f, 0f), 0);
		unk_0x1B16DD5C115FE009(iVar6);
		unk_0xAB30B1CF01A198C1(iLocal_90, iVar6);
		unk_0xFAA3EF7FF92E1F9E(&iVar6);
		vLocal_89 = { vVar3 };
	}
}

void func_425(var uParam0, var uParam1)//Position - 0x136D5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x8C1C362CA8299475((*uParam0)[iVar0]))
		{
			func_426(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_426(var uParam0, char* sParam1)//Position - 0x1370B
{
	func_427(uParam0, 1, -1, sParam1, 0);
}

void func_427(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x1371E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
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
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
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

void func_428(var uParam0, bool bParam1)//Position - 0x13808
{
	int iVar0;
	
	if (!bParam1)
	{
		func_430(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_429(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_429(var uParam0)//Position - 0x1384B
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_430(var uParam0)//Position - 0x13864
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 30))
		{
			func_431(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_431(var uParam0)//Position - 0x1389E
{
	func_432(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_432(int iParam0, char* sParam1, int iParam2)//Position - 0x138B5
{
	if (unk_0xC80D31E4B587871C(iParam0, 30))
	{
		switch (func_433(iParam0))
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

int func_433(int iParam0)//Position - 0x13975
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

int func_434(var uParam0, char* sParam1)//Position - 0x139A1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x8C1C362CA8299475((*uParam0)[iVar0]))
		{
			if (unk_0x74C475EB8E73D398((*uParam0)[iVar0], sParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_435(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_435(var uParam0)//Position - 0x13A06
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (unk_0x8C1C362CA8299475((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_436(var uParam0)//Position - 0x13A35
{
	char* sVar0;
	
	if (func_419(1))
	{
		if (!func_10(&iLocal_107))
		{
			func_453(&iLocal_107);
		}
		func_463(&iLocal_49, 4);
		Global_25384 = 1;
		func_411();
		if (func_452(&iLocal_107, 2f) || func_471(iLocal_49, 8192))
		{
			func_463(&iLocal_49, 2);
			if (func_351(&sVar0, 0))
			{
				unk_0x4ACB9D202CFF8727(unk_0xFC1458A37D98B502(), 0);
				unk_0xEB2D96E7D3F4906C(unk_0xFC1458A37D98B502(), 0);
				unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_90, -1, 2048, 4);
				func_424(uParam0);
				func_463(&iLocal_49, 4);
				Global_25383 = 1;
				Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_418 = 1;
				iLocal_286 = 2;
			}
			else
			{
				if (unk_0x74C475EB8E73D398(func_448(&sVar0), "PIM_HHIDCR"))
				{
					func_447(&sVar0, 30000);
					func_445(1);
				}
				else
				{
					func_334(&sVar0, -1);
				}
				if (!unk_0xAB019B170BF1309C(&sVar0) && unk_0x74C475EB8E73D398(&sVar0, "PROS_NO_MONEY"))
				{
					func_437();
				}
				func_89(0);
				iLocal_287 = 0;
				func_463(&iLocal_49, 8388608);
				func_5(&iLocal_49, 4);
				Global_25383 = 0;
				Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_418 = 0;
			}
		}
	}
	else
	{
		func_5(&iLocal_49, 4);
		Global_25384 = 0;
	}
}

void func_437()//Position - 0x13B57
{
	if (!func_504(64))
	{
		func_438(0, 31, 5);
		func_189(64);
	}
}

void func_438(int iParam0, int iParam1, int iParam2)//Position - 0x13B77
{
	int iVar0;
	
	if (!unk_0xC13991556C1A3593())
	{
		return;
	}
	if (unk_0x3A711520F83BAE98() && func_442(unk_0x9EB17624F44A8DA4(), 1))
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
	if (func_441())
	{
		return;
	}
	if (!func_439())
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

int func_439()//Position - 0x13C51
{
	if (func_440())
	{
		return 0;
	}
	if (unk_0x73EC29164C21897D() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_440()//Position - 0x13C71
{
	return Global_2457327;
}

bool func_441()//Position - 0x13C7D
{
	return Global_2457985;
}

int func_442(int iParam0, bool bParam1)//Position - 0x13C89
{
	if (bParam1)
	{
		if (func_443(iParam0))
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

bool func_443(int iParam0)//Position - 0x13CB5
{
	return func_444(iParam0);
}

bool func_444(int iParam0)//Position - 0x13CC3
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

void func_445(int iParam0)//Position - 0x13CDD
{
	unk_0x0229D557C8A77774(3, 21, 200, 0, 0);
	if (iParam0 && !func_446())
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

bool func_446()//Position - 0x13D0C
{
	return Global_2436181.f_2592[0 /*79*/].f_1 != 0;
}

void func_447(char* sParam0, int iParam1)//Position - 0x13D22
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, false, iParam1);
}

char* func_448(char* sParam0)//Position - 0x13D39
{
	return sParam0;
}

void func_449()//Position - 0x13D43
{
	if (iLocal_72 != -1)
	{
		func_417(&iLocal_72);
	}
}

void func_450(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x13D57
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

int func_451(char* sParam0)//Position - 0x13DF2
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

int func_452(int iParam0, float fParam1)//Position - 0x13E05
{
	if (func_216(iParam0, fParam1))
	{
		func_108(iParam0);
		return 1;
	}
	return 0;
}

void func_453(int iParam0)//Position - 0x13E23
{
	if (!func_10(iParam0))
	{
		func_34(iParam0);
	}
}

void func_454(int iParam0)//Position - 0x13E3B
{
	bool bVar0;
	
	func_119();
	if (iParam0 || iLocal_70 == 0)
	{
		bVar0 = true;
		if (func_530())
		{
			bVar0 = false;
		}
		func_99(bVar0);
		func_89(14);
	}
	else
	{
		func_99(0);
		func_89(15);
	}
}

int func_455()//Position - 0x13E7D
{
	if ((((((func_462() || func_461()) || func_460()) || func_459()) || func_456()) || Global_2394733) || Global_2394733.f_1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_456()//Position - 0x13ED1
{
	if (func_458() || func_457())
	{
		return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_98 == 8;
	}
	return 0;
}

var func_457()//Position - 0x13EFE
{
	return Global_2447174.f_622;
}

bool func_458()//Position - 0x13F0D
{
	return unk_0xC80D31E4B587871C(Global_2447174.f_2, 11);
}

bool func_459()//Position - 0x13F21
{
	return unk_0xC80D31E4B587871C(Global_2447174, 5);
}

bool func_460()//Position - 0x13F32
{
	return unk_0xC80D31E4B587871C(Global_2447174, 2);
}

bool func_461()//Position - 0x13F43
{
	return unk_0xC80D31E4B587871C(Global_2447174, 20);
}

var func_462()//Position - 0x13F55
{
	return Global_2447174.f_586;
}

void func_463(int iParam0, int iParam1)//Position - 0x13F64
{
	func_464(iParam0, iParam1);
}

void func_464(var uParam0, var uParam1)//Position - 0x13F74
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_465()//Position - 0x13F85
{
	if (Global_25385)
	{
		return 0;
	}
	if (func_530())
	{
		return 0;
	}
	if (!func_468())
	{
		return 0;
	}
	if (func_466())
	{
		iLocal_287 = 4;
		return 1;
	}
	return 0;
}

int func_466()//Position - 0x13FBE
{
	int iVar0;
	
	iLocal_92 = unk_0xB306EEF0A280A8F5(unk_0xB3328BA8976B416C(iLocal_90, 1), 15f, 0, 6);
	if (unk_0x6ADD12BF4D6D2587(iLocal_92) && !unk_0x191BE1BC8F26F3C1(iLocal_92, 0))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
		{
			if (func_85(&iLocal_92))
			{
				iLocal_91 = unk_0x317536BCEA8FA6B0(iLocal_92, -1, 0);
				if (!iLocal_91 == 0)
				{
					if (func_467(&iLocal_91))
					{
						iVar0 = unk_0x82FF3DFBC3965CC0(iLocal_92);
						if (!iVar0 == joaat("taxi") && !iVar0 == joaat("taxi"))
						{
							if (!unk_0x9761C10D57B68069(iLocal_91))
							{
								unk_0xDD29FF4BAB8AFF9C(iLocal_91, true, 0);
							}
							if (!unk_0x9761C10D57B68069(iLocal_92))
							{
								unk_0xDD29FF4BAB8AFF9C(iLocal_92, true, 0);
							}
							unk_0x771A86309E0CA47B(iLocal_91, true);
							unk_0xCFF0CD14B439821D(iLocal_91, false, 1);
							unk_0xCFF0CD14B439821D(iLocal_92, false, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	iLocal_92 = 0;
	iLocal_91 = 0;
	return 0;
}

int func_467(int iParam0)//Position - 0x14086
{
	if (!unk_0x3AB6A1A9084FB0A4(*iParam0))
	{
		if (unk_0x6668BA66B78B4E7C(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_468()//Position - 0x140A8
{
	if (unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) || unk_0x191BE1BC8F26F3C1(iLocal_90, 0))
	{
		return 0;
	}
	return 1;
}

int func_469()//Position - 0x140CE
{
	if ((!func_468() || !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) || func_471(iLocal_49, 4096))
	{
		return 0;
	}
	if (func_471(iLocal_49, 32))
	{
		iLocal_287 = 2;
		func_93(2);
		func_472("IS_CUSTOMER_A_PLAYER is TRUE");
		return 1;
	}
	return 0;
}

void func_470()//Position - 0x14122
{
	if (!unk_0x191BE1BC8F26F3C1(iLocal_90, 0))
	{
		if (!unk_0xA6FA9E5D08F067AD(iLocal_90))
		{
			if (unk_0x78F50AA8F955BEFC(iLocal_90, 1805844857) != 1)
			{
				unk_0x771A86309E0CA47B(iLocal_90, false);
				unk_0xE17958D3FD0F9EE9(iLocal_90, 196628, true);
				unk_0x6CFCAFBA031AB20A(iLocal_90);
				unk_0xD68E88A8E0BE8697(iLocal_90, unk_0xFC1458A37D98B502(), 300f, -1, 1, 0);
				unk_0xE9B3D12A64CC7C1A(iLocal_90, true);
				func_89(15);
			}
		}
	}
}

bool func_471(int iParam0, int iParam1)//Position - 0x14185
{
	return (iParam0 && iParam1) != 0;
}

void func_472(char* sParam0)//Position - 0x14194
{
}

int func_473()//Position - 0x1419C
{
	if (unk_0x3AB6A1A9084FB0A4(iLocal_90))
	{
		return 0;
	}
	if (unk_0x78F50AA8F955BEFC(iLocal_90, 1435919172) == 1)
	{
		return 0;
	}
	if (unk_0x353094543C6ECFC4(iLocal_90))
	{
		return 0;
	}
	return 1;
}

int func_474()//Position - 0x141D2
{
	switch (iLocal_291)
	{
		case 0:
			if (!func_530())
			{
				func_434(&uLocal_281, func_61(iLocal_284));
				func_425(&uLocal_281, &uLocal_355);
				func_472("Moving to PROSTITUTE_INIT_STREAMING");
			}
			if (func_530())
			{
				unk_0xBC60D873F181A18E(1);
				unk_0x7BC094E5B24A760D(1);
				unk_0xC8DAB4CEBB9AB263(iLocal_90);
			}
			iLocal_291 = 1;
			break;
		
		case 1:
			if (!func_530())
			{
				if (func_475(&uLocal_355))
				{
					func_463(&iLocal_49, 4194304);
					func_472("Moving to PROSTITUTE_INIT_INIT");
					iLocal_291 = 2;
				}
			}
			else if (func_530())
			{
				func_463(&iLocal_49, 4194304);
				func_472("Moving to PROSTITUTE_INIT_INIT");
				iLocal_291 = 2;
			}
			break;
		
		case 2:
			iLocal_288 = 0;
			iLocal_67 = iLocal_288;
			func_5(&iLocal_49, 512);
			func_5(&iLocal_49, 1024);
			iLocal_287 = 0;
			iLocal_91 = 0;
			iLocal_92 = 0;
			func_472("Moving to PROSTITUTE_INIT_COMPLETE");
			iLocal_291 = 3;
			break;
		
		case 3:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_90))
			{
				if (!func_530())
				{
					unk_0x771A86309E0CA47B(iLocal_90, false);
					unk_0xD57D8114F01D6AE2(iLocal_90, 0);
					func_450(&uLocal_116, 4, iLocal_90, "Prostitutes", 0, 1);
					return 1;
				}
				else if (!unk_0xA0BF73C5030D3F60(iLocal_90))
				{
					unk_0xC8DAB4CEBB9AB263(iLocal_90);
				}
				else
				{
					unk_0x771A86309E0CA47B(iLocal_90, false);
					func_450(&uLocal_116, 4, iLocal_90, "Prostitutes", 0, 1);
					unk_0xD57D8114F01D6AE2(iLocal_90, 0);
					unk_0xDA461F41968CDFFA(iLocal_90);
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_475(var uParam0)//Position - 0x14336
{
	return func_476(uParam0);
}

int func_476(var uParam0)//Position - 0x14344
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_477(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_477(var uParam0)//Position - 0x143A8
{
	return func_478(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_478(int iParam0, char* sParam1, int iParam2)//Position - 0x143BF
{
	if (unk_0xC80D31E4B587871C(iParam0, 30))
	{
		if (unk_0xC80D31E4B587871C(iParam0, 29))
		{
			switch (func_433(iParam0))
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

int func_479()//Position - 0x144B3
{
	if (unk_0x1E06D00B67177A18())
	{
		if (func_18() == 0)
		{
			if (func_480(iLocal_90, 537,0014f, 119,0252f, 96,0997f, 1) <= 8f)
			{
				if (!unk_0xCB234F3DD6FF9368(iLocal_90, 1))
				{
					if (func_530())
					{
						unk_0xDD29FF4BAB8AFF9C(iLocal_90, false, 0);
					}
					else
					{
						unk_0xDD29FF4BAB8AFF9C(iLocal_90, true, 1);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

float func_480(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x14513
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

int func_481()//Position - 0x1454D
{
	if (unk_0x249997FC5AF56FA8(iLocal_90, func_59(0)))
	{
		if (unk_0x418DD3ED7C496F54(iLocal_90, "amb@world_human_prostitute@crackhooker@base", "base"))
		{
			return 0;
		}
		if (unk_0x418DD3ED7C496F54(iLocal_90, "amb@world_human_prostitute@cokehead@base", "base"))
		{
			return 1;
		}
	}
	if (unk_0x249997FC5AF56FA8(iLocal_90, func_59(1)))
	{
		if (unk_0x418DD3ED7C496F54(iLocal_90, "amb@world_human_prostitute@french@base", "base"))
		{
			return 3;
		}
		if (unk_0x418DD3ED7C496F54(iLocal_90, "amb@world_human_prostitute@hooker@base", "base"))
		{
			return 2;
		}
	}
	return -1;
}

void func_482()//Position - 0x145C6
{
	if (unk_0x191BE1BC8F26F3C1(iLocal_90, 0))
	{
		return;
	}
	if (iLocal_285 != 3 && iLocal_285 != 4)
	{
		func_483(unk_0xFC1458A37D98B502());
	}
	else if (iLocal_285 == 3)
	{
		func_483(iLocal_91);
	}
}

void func_483(int iParam0)//Position - 0x14605
{
	if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		return;
	}
	if (func_530())
	{
		if (!unk_0xA0BF73C5030D3F60(iParam0))
		{
			unk_0xC8DAB4CEBB9AB263(iParam0);
			return;
		}
	}
	if (func_401(iParam0, iLocal_90, 1) < 30f)
	{
		if (!unk_0x013B3F0AF8FD2A6A(iLocal_90, iParam0))
		{
			if (func_530())
			{
				if (unk_0xA0BF73C5030D3F60(iLocal_90))
				{
					unk_0xCB3D88C918AA637C(iLocal_90);
					unk_0x60C06BFD037BB7CF(iLocal_90, iParam0, -1, 2048, 4);
				}
			}
			else
			{
				unk_0xCB3D88C918AA637C(iLocal_90);
				unk_0x60C06BFD037BB7CF(iLocal_90, iParam0, -1, 2048, 4);
			}
		}
	}
	else if (unk_0x013B3F0AF8FD2A6A(iLocal_90, iParam0))
	{
		if (func_530())
		{
			if (unk_0xA0BF73C5030D3F60(iLocal_90))
			{
				unk_0xCB3D88C918AA637C(iLocal_90);
			}
		}
		else
		{
			unk_0xCB3D88C918AA637C(iLocal_90);
		}
	}
}

void func_484()//Position - 0x146B9
{
	if (Global_25383)
	{
		if (unk_0xB8DE76287EDC4957(iLocal_93, 0))
		{
			if (unk_0xA8D0477084E86A92(iLocal_90, iLocal_93, 0))
			{
				func_485();
			}
		}
		return;
	}
	if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
	{
		return;
	}
	if (unk_0x191BE1BC8F26F3C1(iLocal_90, 0) || !unk_0x6ADD12BF4D6D2587(iLocal_90))
	{
		if (Global_25387 != unk_0xBBA15366508D1BDE() && func_471(iLocal_49, 32))
		{
			func_5(&iLocal_49, 32);
		}
		return;
	}
	if ((system::vdist2(unk_0xB3328BA8976B416C(iLocal_90, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < Global_25386 || Global_25386 == 0f) && iLocal_287 != 4)
	{
		Global_25386 = system::vdist2(unk_0xB3328BA8976B416C(iLocal_90, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1));
		Global_25387 = unk_0xBBA15366508D1BDE();
		func_463(&iLocal_49, 32);
	}
	else if (Global_25387 == unk_0xBBA15366508D1BDE())
	{
		Global_25386 = system::vdist2(unk_0xB3328BA8976B416C(iLocal_90, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1));
	}
	else
	{
		func_5(&iLocal_49, 32);
	}
}

void func_485()//Position - 0x147B2
{
	if (func_530())
	{
		if (unk_0xA0BF73C5030D3F60(iLocal_90))
		{
			unk_0x2217C45231E6A537(iLocal_90, 323, true);
		}
	}
	else
	{
		unk_0x2217C45231E6A537(iLocal_90, 323, true);
	}
}

void func_486(var uParam0)//Position - 0x147E1
{
	if (!iLocal_286 == 12)
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_90, 0) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (func_490())
			{
				if (func_530())
				{
					func_116(0);
					unk_0xE17958D3FD0F9EE9(iLocal_90, 196624, true);
					if (!unk_0x9761C10D57B68069(iLocal_90))
					{
						unk_0xDD29FF4BAB8AFF9C(iLocal_90, true, 0);
					}
					unk_0xD68E88A8E0BE8697(iLocal_90, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
					unk_0xE9B3D12A64CC7C1A(iLocal_90, true);
					unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
					func_521();
					func_516(uParam0);
				}
				else
				{
					func_89(12);
				}
			}
			else if (unk_0xEBE499597C718EB8(iLocal_90, unk_0xFC1458A37D98B502(), 1))
			{
				iLocal_65++;
				if (iLocal_65 >= 2)
				{
					func_472("prostitute CLASSED AS UNDER ATTACK");
					iLocal_286 = 12;
				}
				else
				{
					func_472("prostitute BEEN HIT BY PLAYER");
					unk_0x2B0DDE3D071497AD(iLocal_90);
				}
			}
			else if (func_488())
			{
				func_487();
				iLocal_286 = 12;
			}
		}
	}
}

void func_487()//Position - 0x148BF
{
	if (unk_0x3AB6A1A9084FB0A4(iLocal_90))
	{
		return;
	}
	unk_0x3D1231846F809DA4(iLocal_90);
	unk_0x74D45BB07BD51F8B(iLocal_90, "APOLOGY_NO_TROUBLE", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 1);
}

int func_488()//Position - 0x148E8
{
	int iVar0;
	
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		return 0;
	}
	if (!func_489())
	{
		return 0;
	}
	iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
	if (!unk_0xB8DE76287EDC4957(iVar0, 0))
	{
		return 0;
	}
	if (unk_0x9CDE960577DADF0F(unk_0xFC1458A37D98B502()))
	{
		return unk_0x44C4B08A935F2D8D(iVar0);
	}
	return 0;
}

int func_489()//Position - 0x1493C
{
	if (!func_530())
	{
		return 1;
	}
	else if (unk_0x6ADD12BF4D6D2587(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
	{
		if (unk_0x0D4BF24EE51A419A(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
		{
			if (unk_0x317536BCEA8FA6B0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), -1, 0) == unk_0xFC1458A37D98B502())
			{
				if (unk_0xA0BF73C5030D3F60(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
				{
					if (!unk_0x9761C10D57B68069(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
					{
						unk_0xDD29FF4BAB8AFF9C(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), false, 0);
					}
					return 1;
				}
				else
				{
					unk_0xC8DAB4CEBB9AB263(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0));
				}
			}
		}
		else
		{
			unk_0xC1A83BA28E0719B3(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0));
		}
	}
	return 0;
}

int func_490()//Position - 0x149E2
{
	vector3 vVar0;
	
	if (!func_471(iLocal_49, 4096))
	{
		if (func_401(iLocal_90, unk_0xFC1458A37D98B502(), 1) < 30f)
		{
			vVar0 = { unk_0xB3328BA8976B416C(iLocal_90, 1) };
			if ((((((unk_0xDD35553224FA4A6A(86, vVar0, 30f) || unk_0xDD35553224FA4A6A(89, vVar0, 30f)) || unk_0xDD35553224FA4A6A(88, vVar0, 30f)) || unk_0xDD35553224FA4A6A(102, vVar0, 30f)) || unk_0xDD35553224FA4A6A(114, vVar0, 30f)) || (unk_0xDD35553224FA4A6A(112, vVar0, 30f) && !func_530())) || unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
			{
				if (!func_530())
				{
					unk_0x771A86309E0CA47B(iLocal_90, false);
				}
				func_463(&iLocal_49, 4096);
				return 1;
			}
		}
	}
	return 0;
}

int func_491()//Position - 0x14AC6
{
	if ((unk_0x6ADD12BF4D6D2587(iLocal_90) && !unk_0x191BE1BC8F26F3C1(iLocal_90, 0)) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (func_530())
		{
			if (func_532(unk_0x9EB17624F44A8DA4(), 0))
			{
				func_472("prostitute SCRIPT SHOULD EXIT - ANOTHER PLAYER IN VEHICLE");
				if (unk_0x88DDBE9908752BF0(iLocal_90, 0))
				{
					func_99(0);
				}
				func_89(15);
				return 0;
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_90))
		{
			if (!unk_0x88DDBE9908752BF0(iLocal_90, 0))
			{
				if (!func_493(9))
				{
					if (!unk_0x191BE1BC8F26F3C1(iLocal_90, 0) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
					{
						if (unk_0x21B6FFFD04C9FF3A(iLocal_90, unk_0xFC1458A37D98B502(), 100f, 100f, 50f, 0, 1, 0))
						{
							return 1;
						}
						else
						{
							func_472("prostitute SCRIPT SHOULD EXIT - PLAYER WALKED AWAY FROM CAR");
							func_89(15);
						}
					}
				}
				else if (!(func_492() || unk_0x1E06D00B67177A18()))
				{
					func_472("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
					func_89(15);
				}
				else
				{
					return 1;
				}
			}
			else if (iLocal_286 == 0)
			{
				func_472("prostitute SCRIPT SHOULD EXIT - prostitute IN VEHICLE");
			}
			else if (!func_493(9) && !func_493(5))
			{
				return 1;
			}
			else if (!(func_492() || (unk_0x1E06D00B67177A18() && !func_391())))
			{
				func_472("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
				func_99(0);
				func_89(15);
			}
			else
			{
				return 1;
			}
		}
		else
		{
			func_472("prostitute SCRIPT SHOULD EXIT - INJURED");
		}
	}
	if (!unk_0x6ADD12BF4D6D2587(iLocal_90))
	{
		func_472("prostitute SCRIPT SHOULD EXIT - Prostitute doesn't exist");
	}
	if (unk_0x191BE1BC8F26F3C1(iLocal_90, 0))
	{
		func_472("prostitute SCRIPT SHOULD EXIT - Prostitute is dead");
	}
	if (unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		func_472("prostitute SCRIPT SHOULD EXIT - Player is dead");
	}
	return 0;
}

int func_492()//Position - 0x14C69
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_493(int iParam0)//Position - 0x14C83
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_494(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_494(int iParam0)//Position - 0x14CA5
{
	return func_495(iParam0, Global_35861);
}

int func_495(int iParam0, int iParam1)//Position - 0x14CB6
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

void func_496()//Position - 0x14E97
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(1))
	{
		iVar1 = unk_0xA387B84DA2EB1BEE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x575EF325DA5E3F04(1, iVar0, &Var2, 2);
			if (Var2 == 1795998897)
			{
				if (Var2.f_1 == unk_0x9EB17624F44A8DA4())
				{
					func_189(128);
				}
			}
		}
		iVar0++;
	}
}

void func_497()//Position - 0x14EEB
{
	if (!unk_0x3A711520F83BAE98())
	{
		return;
	}
	if (!unk_0x8C504A60C2F379BD())
	{
		return;
	}
	if (unk_0x3930B0AA9F6A0C8C(false, 0) != 1)
	{
		if (func_498(1, 0, 1))
		{
			if (unk_0x098390F4365DA157(0) <= 1)
			{
				unk_0xBC60D873F181A18E(1);
			}
		}
	}
}

bool func_498(int iParam0, bool bParam1, bool bParam2)//Position - 0x14F2B
{
	return func_499(0, iParam0, 1, bParam1, bParam2);
}

int func_499(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x14F3F
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC80D31E4B587871C(Global_1369394, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_503(iParam0) - func_502(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_502(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_503(iParam0) - func_501(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_502(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_503(iParam0) - func_502(iParam0, 1));
		}
		if (!bParam4 && Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] != 3)
		{
			iVar1 = (iVar1 - func_500(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_500(int iParam0)//Position - 0x15008
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

int func_501(int iParam0)//Position - 0x15042
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

int func_502(int iParam0, bool bParam1)//Position - 0x15088
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

int func_503(int iParam0)//Position - 0x15125
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

bool func_504(int iParam0)//Position - 0x15165
{
	return func_471(iLocal_52, iParam0);
}

void func_505(var uParam0)//Position - 0x15175
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((unk_0x4B64A8D052027742() >= (uParam0->f_272 + uParam0->f_273) || unk_0xC80D31E4B587871C(Global_92833.f_20, 2)) || unk_0xC80D31E4B587871C(Global_92833.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 29))
					{
						func_506(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0x4B64A8D052027742();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_506(int iParam0)//Position - 0x15203
{
	func_507(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_507(int iParam0, char* sParam1, int iParam2)//Position - 0x15219
{
	if (unk_0xC80D31E4B587871C(*iParam0, 30))
	{
		switch (func_433(*iParam0))
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

void func_508(int iParam0)//Position - 0x152F3
{
	if (func_471(iLocal_52, iParam0))
	{
		func_5(&iLocal_52, iParam0);
	}
}

void func_509()//Position - 0x1530E
{
	func_2(0);
	if (unk_0x6ADD12BF4D6D2587(iLocal_90))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_90, 0))
		{
			func_2(1);
		}
		else
		{
			func_472("Prostitue: not continuing, prostitue is dead");
		}
	}
	else
	{
		func_472("Prostitue: not continuing, prostitue doesn't exist");
	}
	if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) || unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		func_2(0);
		func_472("Prostitue: not continuing, player isn't player or is dead");
	}
}

int func_510(int iParam0, int iParam1, bool bParam2)//Position - 0x15372
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_514();
			}
			else
			{
				return 0;
			}
		}
		if (!func_513())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_514();
					}
					else
					{
						return 0;
					}
				}
				if (func_512())
				{
					if (!bParam2)
					{
						func_514();
					}
					else
					{
						return 0;
					}
				}
				if (func_511(155))
				{
					if (!bParam2)
					{
						func_514();
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
					func_514();
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
				func_514();
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
			func_514();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_511(int iParam0)//Position - 0x15487
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_512()//Position - 0x1549E
{
	return Global_2447174.f_581;
}

bool func_513()//Position - 0x154AD
{
	return Global_1312831;
}

void func_514()//Position - 0x154B9
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_515()//Position - 0x154C5
{
	func_189(1);
}

void func_516(var uParam0)//Position - 0x154D2
{
	func_519();
	if (func_42(0, 1))
	{
		unk_0xBC3B7443617858A0(true);
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_90))
	{
		if (unk_0x9761C10D57B68069(iLocal_90))
		{
			if ((func_530() && unk_0x78F50AA8F955BEFC(iLocal_90, 1805844857) != 1) && unk_0x78F50AA8F955BEFC(iLocal_90, -251125078) != 1)
			{
				unk_0x93F12E7D8D931858(iLocal_90, 1193033728, 0);
				if (unk_0xA0BF73C5030D3F60(iLocal_90))
				{
					unk_0xE9B3D12A64CC7C1A(iLocal_90, true);
				}
				if (unk_0xA28909307AD7716A(iLocal_90))
				{
					unk_0x486F346ADFE56674(&iLocal_90);
				}
				unk_0x3D1231846F809DA4(iLocal_90);
			}
			else
			{
				unk_0x486F346ADFE56674(&iLocal_90);
				unk_0x3D1231846F809DA4(iLocal_90);
			}
		}
	}
	iLocal_49 = 0;
	if (func_471(iLocal_49, 64))
	{
		Global_25385 = 0;
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_91))
	{
		unk_0xB8E08BD5B184DF4E(iLocal_91);
	}
	iLocal_91 = 0;
	iLocal_287 = 0;
	if (func_471(iLocal_49, 2048))
	{
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
	}
	func_5(&iLocal_49, 2048);
	func_518();
	if (func_530())
	{
		if (unk_0xA12FA3F7428EE798(iLocal_83))
		{
			unk_0x7DC528E86B55C67E(iLocal_83);
		}
	}
	iLocal_92 = 0;
	func_519();
	func_517();
	Global_25386 = 0f;
	unk_0x97580242FB655BD5();
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0x673813CA895142E3(unk_0x9EB17624F44A8DA4(), 1);
	}
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (func_504(256))
		{
			unk_0x03924C68EFCBC511(unk_0xFC1458A37D98B502(), 6, iLocal_84, iLocal_85, 0);
			func_189(1024);
		}
	}
	if (func_451("PROS_ACCEPT") && !Global_25383)
	{
		unk_0x3E80C2F7BC665259(1);
	}
	if (Global_25387 == unk_0xBBA15366508D1BDE())
	{
		Global_25383 = 0;
		Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_418 = 0;
	}
	func_428(uParam0, 0);
	if (func_530())
	{
		func_189(2048);
	}
	else
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
}

void func_517()//Position - 0x15671
{
}

void func_518()//Position - 0x15679
{
	Global_2436181.f_1040.f_10 = 0;
}

void func_519()//Position - 0x1568B
{
}

void func_520(bool bParam0)//Position - 0x15693
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_90))
	{
		if (unk_0x88DDBE9908752BF0(iLocal_90, 0))
		{
			if (unk_0x78F50AA8F955BEFC(iLocal_90, -828834893) != 1)
			{
				unk_0x16416C5B54FDBCBB(iLocal_90, 0, 65536);
			}
		}
		if (bParam0)
		{
			if (func_530())
			{
				if (unk_0x9761C10D57B68069(iLocal_90))
				{
					if (unk_0xA28909307AD7716A(iLocal_90))
					{
						if (unk_0x0070DE1A1E73C71C(unk_0xE750D42CD4043E8B(iLocal_90)))
						{
							unk_0xE9B3D12A64CC7C1A(iLocal_90, true);
						}
					}
				}
			}
			else
			{
				unk_0xE9B3D12A64CC7C1A(iLocal_90, true);
			}
		}
	}
}

void func_521()//Position - 0x15705
{
	if (!func_530())
	{
		if (iLocal_286 == 11 || iLocal_286 == 13)
		{
			return;
		}
	}
	if (!unk_0x191BE1BC8F26F3C1(iLocal_90, 0))
	{
		if (!unk_0xA6FA9E5D08F067AD(iLocal_90))
		{
			func_89(0);
			iLocal_285 = 1;
		}
		if (func_530())
		{
			if (unk_0xA0BF73C5030D3F60(iLocal_90))
			{
				unk_0x771A86309E0CA47B(iLocal_90, false);
				unk_0xEF6D43420A388D54(iLocal_90);
			}
		}
		else
		{
			unk_0xEF6D43420A388D54(iLocal_90);
		}
		unk_0xF0037A481D043FE1(iLocal_90, 0);
	}
	if (unk_0xB8DE76287EDC4957(iLocal_93, 0) && !unk_0x191BE1BC8F26F3C1(iLocal_93, 0))
	{
		if (func_530())
		{
			if (unk_0xA0BF73C5030D3F60(iLocal_93))
			{
				if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17 <= 0 && !unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 11))
				{
					unk_0x792D569161081CD9(iLocal_93, false);
					unk_0xBAB8785EE2F06BBE(iLocal_93, 3);
					unk_0x4FAB1BE7663E681C(iLocal_93, 0);
				}
				unk_0x4C44781F822B0B00(iLocal_93, true, 0);
			}
		}
		else
		{
			unk_0x792D569161081CD9(iLocal_93, false);
			unk_0xBAB8785EE2F06BBE(iLocal_93, 3);
			unk_0x4FAB1BE7663E681C(iLocal_93, 0);
		}
	}
	func_529(iLocal_74);
	func_529(iLocal_75);
	func_529(iLocal_76);
	func_529(iLocal_77);
	func_529(iLocal_78);
	func_529(iLocal_79);
	func_529(iLocal_80);
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xCB3D88C918AA637C(unk_0xFC1458A37D98B502());
		if ((func_530() && iLocal_288 != 3) && func_471(iLocal_49, 2048))
		{
			unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
		}
		unk_0x4ACB9D202CFF8727(unk_0xFC1458A37D98B502(), 1);
		unk_0xEB2D96E7D3F4906C(unk_0xFC1458A37D98B502(), 1);
	}
	if (func_471(iLocal_49, 2048))
	{
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
	}
	func_5(&iLocal_49, 2048);
	unk_0x2DB625A7D089C175(2, 19, 1);
	unk_0x2DB625A7D089C175(2, 37, 1);
	func_518();
	iLocal_287 = 0;
	if (func_471(iLocal_49, 4))
	{
		func_5(&iLocal_49, 4);
		Global_25383 = 0;
		Global_25384 = 0;
		Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_418 = 0;
	}
	if (func_471(iLocal_49, 8))
	{
		if (unk_0xD9C499EAA1D3F82A(func_86()))
		{
			unk_0x736CC1A30C230950(func_86());
		}
	}
	func_528();
	func_449();
	if (((func_451("PROS_ACCEPT") || func_451("PROS_CAM_TOG")) || func_451("PROS_RESPONSE")) || func_451("PROS_CAM_OC"))
	{
		func_5(&iLocal_49, 1048576);
		unk_0x3E80C2F7BC665259(1);
	}
	func_350(0);
	unk_0x9B47B379EE749C38(true);
	if (func_471(iLocal_49, 8))
	{
		if (unk_0xD9C499EAA1D3F82A(func_86()))
		{
			unk_0x736CC1A30C230950(func_86());
		}
	}
	func_124("PROSTITUTES_SOLICIT_SCENE");
	unk_0x77A208B3324C04F2();
	func_116(0);
	unk_0xBC3B7443617858A0(true);
	func_522();
	if (func_530())
	{
		if (func_504(2))
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0x0D4BF24EE51A419A(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
				{
					if (unk_0xA0BF73C5030D3F60(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
					{
						unk_0xB4EE449F8D361B88(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0);
						unk_0x4BEFCD5DAE410A90(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 1);
					}
				}
			}
			else if (unk_0x0D4BF24EE51A419A(iLocal_93))
			{
				if (unk_0xA0BF73C5030D3F60(iLocal_93))
				{
					unk_0x4BEFCD5DAE410A90(iLocal_93, 1);
					unk_0xB4EE449F8D361B88(iLocal_93, 0);
					unk_0xA96927E135958D05(iLocal_93, 0);
				}
				else
				{
					unk_0xC8DAB4CEBB9AB263(iLocal_93);
					unk_0x4BEFCD5DAE410A90(iLocal_93, 1);
					unk_0xB4EE449F8D361B88(iLocal_93, 0);
					unk_0xA96927E135958D05(iLocal_93, 0);
				}
			}
		}
	}
	func_181(23, 0);
	iLocal_49 = 0;
	iLocal_51 = 0;
}

void func_522()//Position - 0x15A36
{
	struct<8> Var0[2];
	struct<6> Var1[2];
	
	if (!func_527())
	{
		return;
	}
	if (!iLocal_47)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Type", 32);
	StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	StringCopy(&(Var1[1 /*6*/]), "????", 24);
	if (func_526(275, &Var1, &Var0, 2, -1, 0, 0))
	{
		unk_0xEC4FA25E0FA458DA(131, func_525(), 0f);
		unk_0xEC4FA25E0FA458DA(117, func_524(), 0f);
		unk_0xEC4FA25E0FA458DA(118, func_523(), 0f);
	}
}

int func_523()//Position - 0x15ABB
{
	return iLocal_46;
}

int func_524()//Position - 0x15AC5
{
	return iLocal_45;
}

int func_525()//Position - 0x15ACF
{
	return 0;
}

int func_526(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x15AD8
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0xDEC0EB6EAE9BC575())
	{
	}
	if ((!unk_0x6681C497ECD12BEA() && (unk_0x0A51F536ECBFA795() || !unk_0x464F779D23F6440D())) && unk_0x5248D53D4E6A7964())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x15DBBAF9E2085C7A())
			{
				Var2 = { func_307(unk_0x9EB17624F44A8DA4()) };
				if (unk_0xA84F967541249268(&Var2))
				{
					if (unk_0x5CF21D71A8C4CFA6(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x3A711520F83BAE98() && Global_2455152.f_3)
			{
				unk_0xC42924E8061737DB(&Var0, &(Global_1655819.f_10));
			}
			else
			{
				unk_0x9EE3C5408D4CD343(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x6681C497ECD12BEA())
	{
	}
	if (!unk_0x0A51F536ECBFA795())
	{
	}
	if (unk_0x464F779D23F6440D())
	{
	}
	if (!unk_0x5248D53D4E6A7964())
	{
	}
	return 0;
}

int func_527()//Position - 0x15C0C
{
	if ((unk_0xDEC0EB6EAE9BC575() && unk_0x4CAC17F5502E6EEB()) && unk_0x73EC29164C21897D())
	{
		return 1;
	}
	return 0;
}

void func_528()//Position - 0x15C32
{
	if (func_471(iLocal_49, 128))
	{
		func_393(39, 0);
		func_393(40, 0);
		func_393(41, 0);
		func_393(42, 0);
		func_393(43, 0);
		func_393(44, 0);
		func_5(&iLocal_49, 128);
	}
}

void func_529(int iParam0)//Position - 0x15C77
{
	if (func_530())
	{
		if (func_210(iParam0))
		{
			unk_0x0B0BB26D99CD7575(iParam0);
		}
	}
}

bool func_530()//Position - 0x15C95
{
	return func_504(1);
}

bool func_531(int iParam0)//Position - 0x15CA2
{
	return Global_35861 == iParam0;
}

int func_532(int iParam0, int iParam1)//Position - 0x15CB0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_201(iParam0, 1, 1))
	{
		iVar0 = unk_0x25D049AAC4603E65(iParam0);
		if (unk_0x88DDBE9908752BF0(iVar0, iParam1))
		{
			iVar3 = unk_0xDFD115BB10FE46A9(iVar0, 0);
			iVar1 = 0;
			while (iVar1 < 32)
			{
				iVar2 = unk_0xF6A72924028F588B(iVar1);
				if (func_201(iVar2, 1, 1))
				{
					if (unk_0x25D049AAC4603E65(iVar2) != iVar0)
					{
						if (unk_0xA8D0477084E86A92(unk_0x25D049AAC4603E65(iVar2), iVar3, iParam1))
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_533(int iParam0, bool bParam1)//Position - 0x15D26
{
	if (bParam1)
	{
		if (func_443(iParam0))
		{
			return 1;
		}
	}
	if ((((Global_1595693[iParam0 /*680*/] == 2 || Global_1595693[iParam0 /*680*/] == 1) || Global_1595693[iParam0 /*680*/] == 0) || Global_1595693[iParam0 /*680*/] == 3) || Global_1595693[iParam0 /*680*/] == 8)
	{
		return 1;
	}
	return 0;
}

