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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	vector3 vLocal_43 = { 0f, 0f, 0f };
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	vector3 vLocal_67 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	float fLocal_69 = 0f;
	var uLocal_70 = 0;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	vector3 vLocal_74 = { 0f, 0f, 0f };
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	vector3 vLocal_79 = { 0f, 0f, 0f };
	int iLocal_80 = 0;
	vector3 vLocal_81 = { 0f, 0f, 0f };
	vector3 vLocal_82 = { 0f, 0f, 0f };
	vector3 vLocal_83 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	char[] cLocal_85[8] = 0;
	char* sLocal_86 = NULL;
	char* sLocal_87 = NULL;
	char* sLocal_88 = NULL;
	char* sLocal_89 = NULL;
	char* sLocal_90 = NULL;
	char* sLocal_91 = NULL;
	char* sLocal_92 = NULL;
	char* sLocal_93 = NULL;
	char* sLocal_94 = NULL;
	char* sLocal_95 = NULL;
	char* sLocal_96 = NULL;
	char* sLocal_97 = NULL;
	char* sLocal_98 = NULL;
	char* sLocal_99 = NULL;
	char* sLocal_100 = NULL;
	char* sLocal_101 = NULL;
	char* sLocal_102 = NULL;
	int iLocal_103 = 0;
	vector3 vLocal_104 = { 0f, 0f, 0f };
	vector3 vLocal_105 = { 0f, 0f, 0f };
	vector3 vLocal_106 = { 0f, 0f, 0f };
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	bool bLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	vector3 vLocal_121 = { 0f, 0f, 0f };
	int iLocal_122 = 0;
	bool bLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	bool bLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	float fLocal_139 = 0f;
	vector3 vLocal_140 = { 0f, 0f, 0f };
	vector3 vLocal_141 = { 0f, 0f, 0f };
	vector3 vLocal_142 = { 0f, 0f, 0f };
	vector3 vLocal_143 = { 0f, 0f, 0f };
	vector3 vLocal_144 = { 0f, 0f, 0f };
	vector3 vLocal_145 = { 0f, 0f, 0f };
	vector3 vLocal_146 = { 0f, 0f, 0f };
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 16;
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
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	char[] cLocal_319[8] = 0;
	char[] cLocal_320[8] = 0;
	char[] cLocal_321[8] = 0;
	char* sLocal_322 = NULL;
	char* sLocal_323 = NULL;
	char* sLocal_324 = NULL;
	char* sLocal_325 = NULL;
	char* sLocal_326 = NULL;
	char* sLocal_327 = NULL;
	char* sLocal_328 = NULL;
	char* sLocal_329 = NULL;
	char* sLocal_330 = NULL;
	vector3 vLocal_331 = { 0f, 0f, 0f };
	vector3 vLocal_332 = { 0f, 0f, 0f };
	char[] cLocal_333[8] = 0;
	char[] cLocal_334[8] = 0;
	int iLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = -1;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 1000;
	var uLocal_346 = 1000;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 15;
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
	var uLocal_622 = 1;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	vector3 vLocal_626 = { 0f, 0f, 0f };
	struct<2> Local_627 = { 0, 5 } ;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 5;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0,0375f;
	fLocal_27 = 0,17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_81 = { -131,052f, -1627f, 31,1755f };
	vLocal_82 = { 287,888f, -284,603f, 52,967f };
	vLocal_83 = { -319,66f, -832,28f, 31,61f };
	vLocal_84 = { 31f, -1019f, 28,5f };
	sLocal_102 = "";
	cLocal_319 = "RANDOM@MUGGING3";
	cLocal_320 = "pickup_object";
	cLocal_333 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	iLocal_335 = -1;
	if (unk_0x7D9C4B359376D38A(11))
	{
		if (iLocal_46 == 5 || iLocal_46 == 12)
		{
			func_288(25, iLocal_80);
			func_270();
		}
		else
		{
			func_270();
		}
	}
	vLocal_104 = { ScriptParam_627.f_1[0 /*3*/] };
	func_269(&uLocal_349, 3);
	func_268();
	if ((iLocal_80 == 1 && func_267(55)) && !func_266(55))
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	if (func_225(vLocal_104, 25, iLocal_80, 0, 0))
	{
		func_222(-1);
	}
	else
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	bVar0 = false;
	while (true)
	{
		system::wait(0);
		func_219(&uLocal_349);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
		}
		func_218(iLocal_63, &uLocal_348);
		if (unk_0x42F1FE4C7EC5F51E() || bLocal_123)
		{
			switch (iLocal_44)
			{
				case 0:
					if (func_204())
					{
						unk_0xC1CEF375B44856F4(0);
						unk_0x9B8406983378711E(-127,9025f, -1574,084f, 36,4128f, 10f, 0, 0, 0, 0, false, 0);
						iLocal_130 = 1;
						iLocal_44 = 1;
					}
					else if (func_203())
					{
						func_270();
					}
					break;
				
				case 1:
					if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
					{
						if (iLocal_117 == 0)
						{
							iLocal_117 = unk_0xB71774863B890B76(99, vLocal_104, 0f);
						}
						unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
						switch (iLocal_46)
						{
							case 1:
								func_195();
								break;
							
							case 2:
								unk_0x72903DCF9B54141D("MUGGING_INTERACTION", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
								switch (iLocal_47)
								{
									case 0:
										unk_0x72903DCF9B54141D("INITIAL_MUGGING_SEQ", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
										if (unk_0x3AB6A1A9084FB0A4(iLocal_61) || unk_0xEBE499597C718EB8(iLocal_61, unk_0xFC1458A37D98B502(), 0))
										{
											bVar0 = unk_0x3AB6A1A9084FB0A4(iLocal_60);
											if (!unk_0xB8B3E5529EDB87D4(iLocal_151))
											{
											}
											if (bVar0 == 0 && iLocal_80 == 1)
											{
												unk_0x0FC9D6DF5B59B0AB(iLocal_60, 500, 1000, 0, 0, 0, 0);
												unk_0xD68E88A8E0BE8697(iLocal_60, unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
												unk_0xE9B3D12A64CC7C1A(iLocal_60, true);
												func_194(1);
												func_189();
											}
										}
										else
										{
											func_159();
										}
										if (iLocal_625 == 1 && bLocal_123 == 1)
										{
											iLocal_46 = 4;
										}
										else if (bLocal_123)
										{
											iLocal_47 = 2;
										}
										break;
									
									case 2:
										unk_0x72903DCF9B54141D("VIC_CRY_OUT", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
										func_158();
										if (iLocal_52 && !func_157())
										{
											iLocal_47 = 4;
										}
										break;
									
									case 4:
										unk_0x72903DCF9B54141D("ASK_PLAYER_FOR_HELP", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
										if (func_156())
										{
											func_155();
										}
										if (bLocal_129)
										{
											iLocal_47 = 5;
										}
										if (unk_0x78F50AA8F955BEFC(iLocal_60, 242628503) == 7)
										{
											unk_0x6931076730A4AC5D(&iLocal_103);
											unk_0x60C06BFD037BB7CF(0, iLocal_61, 5000, 0, 2);
											unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 5000);
											unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x1B16DD5C115FE009(iLocal_103);
											unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
											unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
										}
										break;
									
									case 5:
										func_152();
										if (!unk_0x191BE1BC8F26F3C1(iLocal_60, 0))
										{
											if (unk_0x78F50AA8F955BEFC(iLocal_60, 242628503) == 7)
											{
												unk_0x6931076730A4AC5D(&iLocal_103);
												unk_0xAC838A977FB6E6BC(0, iLocal_61, 0);
												unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0x1B16DD5C115FE009(iLocal_103);
												unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
												unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
											}
										}
										break;
								}
								if (func_151())
								{
									iLocal_46 = 11;
								}
								if (bLocal_123)
								{
								}
								func_150();
								if (iLocal_47 == 0)
								{
									if (func_148())
									{
										if (iLocal_119 == 4)
										{
											if (unk_0xA6DECE14FC9A8C51(iLocal_64))
											{
												unk_0xE30CF11C0EE14316(&iLocal_64);
											}
											if (unk_0xA6DECE14FC9A8C51(iLocal_63))
											{
												unk_0xE30CF11C0EE14316(&iLocal_63);
											}
											if (!unk_0xA6DECE14FC9A8C51(iLocal_65))
											{
												iLocal_65 = func_146(iLocal_151);
											}
											iLocal_46 = 4;
										}
										else
										{
											iLocal_46 = 3;
										}
									}
									if (func_145())
									{
										func_144();
									}
								}
								if (func_143())
								{
									func_142();
									func_141();
									if (unk_0x0C88267282FD588F(iLocal_60, vLocal_146, 7f, 7f, 7f, false, true, 0))
									{
										iLocal_119 = 2;
										iLocal_46 = 3;
									}
									else
									{
										iLocal_46 = 4;
									}
								}
								if (bLocal_123)
								{
									if (!unk_0x7ED4D0E480A6EC43(iLocal_61, 0))
									{
										func_139(iLocal_64, &uLocal_118);
									}
									else if (unk_0xA6DECE14FC9A8C51(iLocal_64))
									{
										if (unk_0x054F3EDDF5178FA5(iLocal_64) == 1)
										{
										}
										else
										{
											unk_0xDB6E56C09E5CF0AA(iLocal_64, false);
											unk_0x0C71C8E276E3EC54(iLocal_64, 1);
										}
									}
								}
								if (func_138())
								{
									iLocal_46 = 10;
								}
								break;
							
							case 4:
								unk_0x72903DCF9B54141D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
								func_137(1);
								if (func_156())
								{
									func_155();
									func_152();
								}
								if (func_151())
								{
									iLocal_46 = 11;
								}
								func_129();
								break;
							
							case 5:
								unk_0x72903DCF9B54141D("PLAYER_HAS_BAG", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
								func_137(1);
								if (!bLocal_126)
								{
									func_128(iLocal_60, &uLocal_153);
									uLocal_153 = uLocal_153;
									func_127();
									func_126();
									func_125();
									if (func_124())
									{
										func_123();
										func_189();
									}
									if (func_117(func_118()) < iLocal_152)
									{
										iLocal_46 = 12;
									}
								}
								func_56();
								break;
							
							case 10:
								unk_0x72903DCF9B54141D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
								func_55();
								break;
							
							case 3:
								func_54();
								break;
							
							case 11:
								func_53();
								break;
							
							case 6:
								if (func_151())
								{
									iLocal_46 = 11;
								}
								func_40();
								break;
							
							case 8:
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
								{
									if (unk_0x21B6FFFD04C9FF3A(iLocal_60, unk_0xFC1458A37D98B502(), 20f, 20f, 20f, 0, 1, 0))
									{
										iLocal_46 = 6;
									}
									else
									{
										func_270();
									}
								}
								break;
							
							case 9:
								unk_0x72903DCF9B54141D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
								if (unk_0x6ADD12BF4D6D2587(iLocal_61))
								{
									if (unk_0x3AB6A1A9084FB0A4(iLocal_61))
									{
										if (unk_0xA6DECE14FC9A8C51(iLocal_64))
										{
											unk_0xE30CF11C0EE14316(&iLocal_64);
										}
										if (!unk_0x6ADD12BF4D6D2587(iLocal_60))
										{
											if (unk_0x6ADD12BF4D6D2587(iLocal_62))
											{
												unk_0x452336926718D62A(&iLocal_62);
											}
											func_39();
											iLocal_54 = 1;
											func_129();
										}
									}
								}
								break;
							
							case 12:
								if (unk_0x6ADD12BF4D6D2587(iLocal_62))
								{
									unk_0x452336926718D62A(&iLocal_62);
								}
								unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
								func_189();
								break;
							
							case 13:
								func_38();
								break;
							}
					}
					if (bLocal_58)
					{
						if (unk_0xB8B3E5529EDB87D4(iLocal_151))
						{
							if (unk_0x4C6D8414E075A2B8(iLocal_151))
							{
								if (system::vdist(vLocal_146, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 150f)
								{
									func_270();
								}
							}
						}
					}
					else if (bLocal_123)
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
						{
							if (iLocal_46 != 6)
							{
								if (func_37(unk_0xFC1458A37D98B502(), iLocal_61, 1) > 150f && (!unk_0x841ED61760A7D07B(iLocal_61) || unk_0xEC211A86AB3726B6(iLocal_61)))
								{
									func_36(&uLocal_336, 0, 0);
									iLocal_46 = 8;
								}
								else
								{
									func_4();
									func_3(iLocal_64, iLocal_61, 100f, 1061158912, 0);
								}
							}
						}
						else
						{
							func_36(&uLocal_336, 0, 0);
						}
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_60))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
						{
							if (unk_0xEBE499597C718EB8(iLocal_60, unk_0xFC1458A37D98B502(), 1))
							{
								if (unk_0x6ADD12BF4D6D2587(iLocal_62))
								{
									if (unk_0x5D67DB68EF61B3E1(iLocal_62, iLocal_60))
									{
										unk_0x6B7C10B19928914F(iLocal_62, 1, true);
									}
								}
							}
						}
					}
					if (iLocal_124)
					{
						if (!iLocal_137)
						{
							if (!unk_0x191BE1BC8F26F3C1(iLocal_61, 0) && !unk_0x191BE1BC8F26F3C1(iLocal_60, 0))
							{
								if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(iLocal_61, 1), unk_0xB3328BA8976B416C(iLocal_60, 1), true) > 100f && unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(iLocal_61, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), true) < 100f)
								{
									unk_0xD68E88A8E0BE8697(iLocal_61, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
									iLocal_137 = 1;
								}
							}
						}
					}
					if (bLocal_123 && !iLocal_124)
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
						{
							if (iLocal_80 == 3)
							{
								if (unk_0x78F50AA8F955BEFC(iLocal_61, 1805844857) != 1)
								{
									unk_0x2CEA76A7F93740C6(iLocal_61);
									unk_0xD68E88A8E0BE8697(iLocal_61, iLocal_60, 200f, -1, 0, 0);
									unk_0x31BBD48AA2503617(iLocal_61, -530524, true, 0, 0);
									iLocal_124 = 1;
								}
							}
							else if (unk_0x78F50AA8F955BEFC(iLocal_61, 1805844857) != 1)
							{
								unk_0x2CEA76A7F93740C6(iLocal_61);
								unk_0xD68E88A8E0BE8697(iLocal_61, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
								unk_0x31BBD48AA2503617(iLocal_61, -530524, true, 0, 0);
								iLocal_124 = 1;
							}
							if (unk_0x7B82209ED5D8E168(iLocal_61, -2134635134))
							{
								unk_0xD68E88A8E0BE8697(iLocal_61, iLocal_60, 200f, -1, 0, 0);
								unk_0x31BBD48AA2503617(iLocal_61, -530524, true, 0, 0);
								iLocal_124 = 1;
							}
							if (iLocal_80 == 1 || iLocal_80 == 4)
							{
								if (unk_0xA5F6598E13F98E08(iLocal_61, cLocal_319, sLocal_329, 3))
								{
									if (unk_0x7A70772AE40E3821(iLocal_61, cLocal_319, sLocal_329) >= 0,922f)
									{
										unk_0xD68E88A8E0BE8697(iLocal_61, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
										unk_0x31BBD48AA2503617(iLocal_61, -530524, true, 0, 0);
										iLocal_124 = 1;
									}
								}
								if (unk_0xA5F6598E13F98E08(iLocal_61, cLocal_319, sLocal_327, 3))
								{
									if (unk_0x7A70772AE40E3821(iLocal_61, cLocal_319, sLocal_327) >= 0,922f)
									{
										unk_0xD68E88A8E0BE8697(iLocal_61, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
										unk_0x31BBD48AA2503617(iLocal_61, -530524, true, 0, 0);
										iLocal_124 = 1;
									}
								}
							}
						}
					}
					func_1();
					break;
			}
		}
		else
		{
			func_270();
		}
	}
}

void func_1()//Position - 0xA1E
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_60))
	{
		if (unk_0x3AB6A1A9084FB0A4(iLocal_60))
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_61))
			{
				if (unk_0x3AB6A1A9084FB0A4(iLocal_61))
				{
					func_270();
				}
			}
		}
	}
	if (unk_0x3AB6A1A9084FB0A4(iLocal_60))
	{
		if (unk_0xA6DECE14FC9A8C51(iLocal_63))
		{
			unk_0xE30CF11C0EE14316(&iLocal_63);
		}
	}
	if (unk_0x3AB6A1A9084FB0A4(iLocal_61))
	{
		if (unk_0xA6DECE14FC9A8C51(iLocal_64))
		{
			unk_0xE30CF11C0EE14316(&iLocal_64);
		}
	}
	if (!iLocal_135)
	{
		if (unk_0x3AB6A1A9084FB0A4(iLocal_61))
		{
			func_2(&uLocal_154, 1);
			iLocal_135 = 1;
		}
	}
	if (!iLocal_136)
	{
		if (unk_0x3AB6A1A9084FB0A4(iLocal_60))
		{
			func_2(&uLocal_154, 2);
			iLocal_136 = 1;
		}
	}
}

void func_2(var uParam0, int iParam1)//Position - 0xAB0
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_3(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)//Position - 0xACD
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

void func_4()//Position - 0xC26
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_61) || !bLocal_109)
	{
		func_5(&uLocal_336, iLocal_61, 0, 0, 1, 1, 1);
	}
	else
	{
		func_36(&uLocal_336, 0, 0);
	}
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0xC5B
{
	func_6(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_6(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0xC75
{
	func_7(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_7(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0xC92
{
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		func_36(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_8(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_8(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0xCCA
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
	if (func_35(iVar0))
	{
		func_34();
	}
	if (func_33(iParam1) && unk_0xDE3C98B57A41E603(iParam1))
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
			if (func_28(uParam0, bParam5, bParam7, 0))
			{
				func_24(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_13(iVar0))
				{
					if ((unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0)) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if ((iVar1 && !unk_0xF491DD47B88AA84E()) && uParam6)
						{
							if (!func_35(iVar0))
							{
								func_12(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
								{
									func_11(1);
								}
							}
						}
					}
				}
			}
			else if (func_13(iVar0))
			{
				if (unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0))
				{
					if (((unk_0x841ED61760A7D07B(iParam1) && iVar1) && !unk_0xF491DD47B88AA84E()) && uParam6)
					{
						if (!func_35(iVar0))
						{
							func_12(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
							{
								func_11(1);
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
				if (func_35(sParam3))
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
						func_36(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(6) == 3 || unk_0x8E8C94609BA4BEA9(6) == 4)
					{
						func_36(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(4) == 3 || unk_0x8E8C94609BA4BEA9(4) == 4)
					{
						func_36(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(5) == 3 || unk_0x8E8C94609BA4BEA9(5) == 4)
					{
						func_36(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(2) == 3 || unk_0x8E8C94609BA4BEA9(2) == 4)
					{
						func_36(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x60584F41FBCE28CD() == 3 || unk_0x60584F41FBCE28CD() == 4)
				{
					func_36(uParam0, iVar0, 1);
				}
			}
			if (!func_28(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_10(uParam0))
				{
					func_9(uParam0);
				}
			}
		}
	}
	else
	{
		func_36(uParam0, iVar0, 0);
	}
}

void func_9(var uParam0)//Position - 0x1033
{
	if (func_33(unk_0xFC1458A37D98B502()))
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

int func_10(var uParam0)//Position - 0x109C
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

int func_11(bool bParam0)//Position - 0x10C7
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

void func_12(char* sParam0, int iParam1)//Position - 0x1171
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

int func_13(char* sParam0)//Position - 0x1188
{
	if (!func_14(1, 1, 0))
	{
		if ((!unk_0xAB019B170BF1309C(sParam0) && func_35(sParam0)) || func_35("CMN_HINT"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		return 0;
	}
	switch (Global_35861)
	{
		case 0:
		case 3:
			if (func_11(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_11(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_11(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_14(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1220
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
	if (func_23(0))
	{
		return 0;
	}
	if (func_22())
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
	if ((func_21() || func_20(Global_4456448.f_143970)) || func_19())
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if ((unk_0x841136DE070DD9F6(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), func_18(unk_0xFC1458A37D98B502(), 0)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 562680400 && func_18(unk_0xFC1458A37D98B502(), 0) != -1)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 1181327175 && func_18(unk_0xFC1458A37D98B502(), 0) != -1))
			{
				return 0;
			}
		}
	}
	if (func_15(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_15(int iParam0)//Position - 0x144B
{
	if (iParam0 != func_17())
	{
		if (func_16(iParam0, 1, 1))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x9EB17624F44A8DA4()) && func_16(iParam0, 1, 0))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

int func_16(int iParam0, bool bParam1, bool bParam2)//Position - 0x14B1
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

int func_17()//Position - 0x14FB
{
	return -1;
}

int func_18(int iParam0, int iParam1)//Position - 0x1504
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

var func_19()//Position - 0x1589
{
	return Global_2447174.f_16;
}

bool func_20(int iParam0)//Position - 0x1597
{
	return iParam0 == 51;
}

var func_21()//Position - 0x15A4
{
	return Global_2447174.f_15;
}

bool func_22()//Position - 0x15B2
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

int func_23(int iParam0)//Position - 0x15C7
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

void func_24(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x1621
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
		func_36(uParam0, 0, 0);
	}
	if (func_27(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x52C56492660097C7(iParam1))
		{
			iVar0 = unk_0x07F64790D10D1DB5(iParam1);
			if (!unk_0x88DDBE9908752BF0(iVar0, 0))
			{
				if (unk_0x1417A5CC924DE120(iVar0))
				{
					if (!func_25())
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

bool func_25()//Position - 0x1731
{
	return func_26(unk_0x9EB17624F44A8DA4());
}

int func_26(int iParam0)//Position - 0x1741
{
	if (unk_0x82FF3DFBC3965CC0(unk_0x25D049AAC4603E65(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_27(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x1760
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_28(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x17A7
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
					if (func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_31(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_31(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_10(uParam0))
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
						if (!func_32(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_31(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_31(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_32(bParam1, bParam2, bParam3))
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
					if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_31(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_31(bParam1, bParam2, bParam3) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
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
				else if (!func_32(bParam1, bParam2, bParam3))
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
						if (func_30(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_29(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) || func_29(bParam1, bParam2, bParam3))
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
					else if (func_30(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_10(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_14(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_34();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_29(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1B13
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_30(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1B65
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_31(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1BAE
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_32(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1C0D
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_33(int iParam0)//Position - 0x1C63
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

void func_34()//Position - 0x1CBE
{
	unk_0x872F1C1F8587CCC7(&Global_2324, 4);
}

int func_35(char* sParam0)//Position - 0x1CCE
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_36(var uParam0, int iParam1, int iParam2)//Position - 0x1CE1
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
		if (func_35(uParam0->f_3))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
	if (!unk_0x8C1C362CA8299475(sVar0))
	{
		if (func_35(sVar0))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
}

float func_37(int iParam0, int iParam1, bool bParam2)//Position - 0x1DBC
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

void func_38()//Position - 0x1E1A
{
	func_270();
}

void func_39()//Position - 0x1E26
{
	if (!unk_0xB8B3E5529EDB87D4(iLocal_151))
	{
		if (unk_0x3AB6A1A9084FB0A4(iLocal_61))
		{
			vLocal_146 = { unk_0x1478170665DA3CEC(iLocal_61, 1067030938, 1069547520) };
		}
		else
		{
			vLocal_146 = { unk_0xCC1609D1BF2658E4(unk_0xB3328BA8976B416C(iLocal_61, 1), 1,2f, 1,5f) };
		}
		iLocal_151 = unk_0x06583789B8C15A6C(joaat("pickup_money_wallet"), vLocal_146, iLocal_120, iLocal_152, 1, iLocal_77);
		iLocal_65 = func_146(iLocal_151);
		func_36(&uLocal_336, 0, 0);
		bLocal_58 = true;
	}
}

void func_40()//Position - 0x1E9B
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
	{
		if (unk_0xA5F6598E13F98E08(iLocal_60, cLocal_319, "flee_backward_loop_shopkeeper", 3))
		{
			unk_0x6931076730A4AC5D(&iLocal_103);
			unk_0x12C9D41D52A560D6(0, cLocal_319, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x93F12E7D8D931858(0, 1193033728, 0);
			unk_0x1B16DD5C115FE009(iLocal_103);
			unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
			unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
		}
		else if (unk_0xA5F6598E13F98E08(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 3))
		{
			unk_0x6931076730A4AC5D(&iLocal_103);
			unk_0x12C9D41D52A560D6(0, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x93F12E7D8D931858(0, 1193033728, 0);
			unk_0x1B16DD5C115FE009(iLocal_103);
			unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
			unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
		}
		func_41(&uLocal_154, cLocal_85, sLocal_92, 4, 0, 0, 0);
		iLocal_128 = 1;
		unk_0xE9B3D12A64CC7C1A(iLocal_60, true);
		system::wait(0);
		func_270();
	}
}

int func_41(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1F78
{
	func_52(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_42(sParam2, iParam3, 0);
}

int func_42(char* sParam0, int iParam1, bool bParam2)//Position - 0x1FC6
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
					func_51();
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
		if (func_50(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_49();
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
				func_47();
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
				if (func_46())
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
			if (func_45())
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
			func_44();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_43();
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
		func_51();
	}
	return 0;
}

void func_43()//Position - 0x2292
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

void func_44()//Position - 0x22C2
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

int func_45()//Position - 0x2357
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_46()//Position - 0x237E
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

void func_47()//Position - 0x2417
{
	if (func_48(14))
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
		Global_14453 = func_118();
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

bool func_48(int iParam0)//Position - 0x24B9
{
	return Global_35861 == iParam0;
}

void func_49()//Position - 0x24C7
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

bool func_50(int iParam0, int iParam1)//Position - 0x251D
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

void func_51()//Position - 0x2558
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

void func_52(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x25AF
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

void func_53()//Position - 0x2605
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
	{
		unk_0xB8E08BD5B184DF4E(iLocal_60);
		unk_0xD68E88A8E0BE8697(iLocal_60, unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
		unk_0xE9B3D12A64CC7C1A(iLocal_60, true);
		if (unk_0x6ADD12BF4D6D2587(iLocal_62))
		{
			unk_0x452336926718D62A(&iLocal_62);
		}
		system::wait(0);
		if (unk_0xA6DECE14FC9A8C51(iLocal_63))
		{
			unk_0xE30CF11C0EE14316(&iLocal_63);
		}
		unk_0x486F346ADFE56674(&iLocal_60);
	}
	if (unk_0x3AB6A1A9084FB0A4(iLocal_61) || unk_0x3AB6A1A9084FB0A4(iLocal_60))
	{
		if (unk_0xA6DECE14FC9A8C51(iLocal_64))
		{
			unk_0xE30CF11C0EE14316(&iLocal_64);
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_63))
		{
			unk_0xE30CF11C0EE14316(&iLocal_63);
		}
		if (unk_0xB8B3E5529EDB87D4(iLocal_151))
		{
			if (unk_0x4C6D8414E075A2B8(iLocal_151))
			{
				iLocal_54 = 1;
				func_129();
			}
			else
			{
				func_137(0);
				func_270();
			}
		}
		else
		{
			func_270();
		}
	}
}

void func_54()//Position - 0x26BE
{
	bool bVar0;
	
	func_129();
	if (unk_0xB8B3E5529EDB87D4(iLocal_151))
	{
		if (unk_0x4C6D8414E075A2B8(iLocal_151))
		{
		}
	}
	if (iLocal_119 == 1)
	{
		if (!iLocal_49)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
			{
				unk_0xB8E08BD5B184DF4E(iLocal_61);
				unk_0xD7F5B2902EBBD04E(iLocal_61, unk_0xFC1458A37D98B502(), 0, 16);
				unk_0xE9B3D12A64CC7C1A(iLocal_61, true);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
			{
				if (unk_0xB8B3E5529EDB87D4(iLocal_151))
				{
					if (unk_0x4C6D8414E075A2B8(iLocal_151))
					{
						unk_0xB8E08BD5B184DF4E(iLocal_60);
						unk_0x6931076730A4AC5D(&iLocal_103);
						unk_0x380C1E7B7740D618(0, unk_0x20752E4B9ABBF6F5(iLocal_151), 1f, 20000, 0,25f, 0, 1193033728);
						unk_0x1B16DD5C115FE009(iLocal_103);
						unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
					}
				}
			}
			iLocal_49 = 1;
		}
	}
	if (iLocal_119 == 2)
	{
		if (!iLocal_49)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
			{
				unk_0xB8E08BD5B184DF4E(iLocal_61);
				unk_0xD7F5B2902EBBD04E(iLocal_61, unk_0xFC1458A37D98B502(), 0, 16);
				unk_0xE9B3D12A64CC7C1A(iLocal_61, true);
				unk_0xCFF0CD14B439821D(iLocal_61, false, 1);
				unk_0x486F346ADFE56674(&iLocal_61);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
			{
				if (unk_0xB8B3E5529EDB87D4(iLocal_151))
				{
					if (unk_0x4C6D8414E075A2B8(iLocal_151))
					{
						if (unk_0x0C88267282FD588F(iLocal_60, unk_0x20752E4B9ABBF6F5(iLocal_151), 10f, 10f, 10f, false, true, 0))
						{
							if (iLocal_80 == 3)
							{
								if ((!unk_0xA5F6598E13F98E08(iLocal_60, cLocal_319, "handsup_standing_enter", 3) && !unk_0xA5F6598E13F98E08(iLocal_60, cLocal_319, "handsup_standing_base", 3)) && !unk_0xA5F6598E13F98E08(iLocal_60, cLocal_319, "handsup_standing_exit", 3))
								{
									unk_0xB8E08BD5B184DF4E(iLocal_60);
									unk_0x6931076730A4AC5D(&iLocal_103);
									unk_0x380C1E7B7740D618(0, unk_0x20752E4B9ABBF6F5(iLocal_151), 1f, 20000, 0,25f, 0, 1193033728);
									unk_0x1B16DD5C115FE009(iLocal_103);
									unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
									unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
									iLocal_49 = 1;
								}
							}
							else if ((!unk_0xA5F6598E13F98E08(iLocal_60, cLocal_319, sLocal_330, 3) && !unk_0xA5F6598E13F98E08(iLocal_60, cLocal_319, sLocal_326, 3)) && !unk_0xA5F6598E13F98E08(iLocal_60, cLocal_319, sLocal_328, 3))
							{
								unk_0xB8E08BD5B184DF4E(iLocal_60);
								unk_0x6931076730A4AC5D(&iLocal_103);
								unk_0x380C1E7B7740D618(0, unk_0x20752E4B9ABBF6F5(iLocal_151), 1f, 20000, 0,25f, 0, 1193033728);
								unk_0x1B16DD5C115FE009(iLocal_103);
								unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
								iLocal_49 = 1;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
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
					if (iLocal_80 == 3)
					{
						if ((!unk_0xA5F6598E13F98E08(iLocal_60, cLocal_319, "handsup_standing_enter", 3) && !unk_0xA5F6598E13F98E08(iLocal_60, cLocal_319, "handsup_standing_base", 3)) && !unk_0xA5F6598E13F98E08(iLocal_60, cLocal_319, "handsup_standing_exit", 3))
						{
							unk_0xB8E08BD5B184DF4E(iLocal_60);
							unk_0xD68E88A8E0BE8697(iLocal_60, unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
							unk_0xE9B3D12A64CC7C1A(iLocal_60, true);
							if (unk_0xA6DECE14FC9A8C51(iLocal_63))
							{
								unk_0xE30CF11C0EE14316(&iLocal_63);
							}
							unk_0x486F346ADFE56674(&iLocal_60);
							iLocal_49 = 1;
							iLocal_46 = 9;
						}
					}
					else if ((!unk_0xA5F6598E13F98E08(iLocal_60, cLocal_319, sLocal_330, 3) && !unk_0xA5F6598E13F98E08(iLocal_60, cLocal_319, sLocal_326, 3)) && !unk_0xA5F6598E13F98E08(iLocal_60, cLocal_319, sLocal_328, 3))
					{
						unk_0xB8E08BD5B184DF4E(iLocal_60);
						unk_0xD68E88A8E0BE8697(iLocal_60, unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
						unk_0xE9B3D12A64CC7C1A(iLocal_60, true);
						if (unk_0xA6DECE14FC9A8C51(iLocal_63))
						{
							unk_0xE30CF11C0EE14316(&iLocal_63);
						}
						unk_0x486F346ADFE56674(&iLocal_60);
						iLocal_49 = 1;
						iLocal_46 = 9;
					}
				}
			}
		}
	}
	if (iLocal_119 == 3)
	{
		if (!iLocal_49)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
			{
				unk_0xB8E08BD5B184DF4E(iLocal_61);
				unk_0xD68E88A8E0BE8697(iLocal_61, unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
				unk_0xE9B3D12A64CC7C1A(iLocal_61, true);
				unk_0xCFF0CD14B439821D(iLocal_61, false, 1);
				unk_0x486F346ADFE56674(&iLocal_61);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
			{
				unk_0xB8E08BD5B184DF4E(iLocal_60);
				unk_0xD68E88A8E0BE8697(iLocal_60, unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
				unk_0xE9B3D12A64CC7C1A(iLocal_60, true);
				unk_0x486F346ADFE56674(&iLocal_60);
			}
			iLocal_54 = 1;
			iLocal_49 = 1;
		}
	}
	if (iLocal_119 == 1 || iLocal_119 == 2)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
		{
			if (iLocal_49)
			{
				if (unk_0xB8B3E5529EDB87D4(iLocal_151))
				{
					if (unk_0x4C6D8414E075A2B8(iLocal_151))
					{
						if (unk_0xA5F6598E13F98E08(iLocal_60, cLocal_320, "pickup_low", 3))
						{
							if (unk_0x7A70772AE40E3821(iLocal_60, cLocal_320, "pickup_low") > 0,5f)
							{
								if (unk_0xB8B3E5529EDB87D4(iLocal_151))
								{
									if (unk_0x4C6D8414E075A2B8(iLocal_151))
									{
										func_41(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0);
										unk_0x60727D07B2D72C82(iLocal_151);
										bLocal_50 = true;
									}
								}
							}
						}
						else if (unk_0x78F50AA8F955BEFC(iLocal_60, 242628503) == 7)
						{
							unk_0xB8E08BD5B184DF4E(iLocal_60);
							unk_0x6931076730A4AC5D(&iLocal_103);
							unk_0x12C9D41D52A560D6(0, cLocal_320, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
							unk_0x1B16DD5C115FE009(iLocal_103);
							unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
							unk_0xE9B3D12A64CC7C1A(iLocal_60, true);
						}
					}
					else if (bLocal_50)
					{
						unk_0x6D624C6A284D7D07(iLocal_60, iLocal_152);
						unk_0x486F346ADFE56674(&iLocal_60);
						func_194(3);
						func_189();
					}
					else
					{
						unk_0xD68E88A8E0BE8697(iLocal_60, unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
						unk_0xE9B3D12A64CC7C1A(iLocal_60, true);
						if (unk_0xA6DECE14FC9A8C51(iLocal_63))
						{
							unk_0xE30CF11C0EE14316(&iLocal_63);
						}
						unk_0x486F346ADFE56674(&iLocal_60);
						iLocal_49 = 1;
						iLocal_46 = 12;
					}
				}
				else if (bLocal_50)
				{
					unk_0x6D624C6A284D7D07(iLocal_60, iLocal_152);
					unk_0x486F346ADFE56674(&iLocal_60);
					func_194(3);
					func_189();
				}
				else
				{
					unk_0xD68E88A8E0BE8697(iLocal_60, unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
					unk_0xE9B3D12A64CC7C1A(iLocal_60, true);
					if (unk_0xA6DECE14FC9A8C51(iLocal_63))
					{
						unk_0xE30CF11C0EE14316(&iLocal_63);
					}
					unk_0x486F346ADFE56674(&iLocal_60);
					iLocal_49 = 1;
					iLocal_46 = 12;
				}
			}
		}
		else
		{
			iLocal_46 = 9;
		}
	}
}

void func_55()//Position - 0x2BF1
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
	{
		unk_0xB8E08BD5B184DF4E(iLocal_60);
		unk_0xD68E88A8E0BE8697(iLocal_60, unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
		unk_0xE9B3D12A64CC7C1A(iLocal_60, true);
		unk_0x486F346ADFE56674(&iLocal_60);
	}
}

void func_56()//Position - 0x2C28
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	struct<2> Var3;
	vector3 vVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	int iVar8;
	int iVar9;
	
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
	{
		if (!bLocal_126)
		{
			if (iLocal_127)
			{
				vVar7 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
				iVar8 = 1;
				if (iLocal_80 == 1)
				{
					if (vVar7.z > 33,5f)
					{
						iVar8 = 0;
					}
				}
				if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_60, 5f, 5f, 5f, 0, 1, 0) && iVar8 == 1)
				{
					if (func_115(2))
					{
						unk_0x3E80C2F7BC665259(1);
					}
					if (unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
					{
						if (func_114(1, 0, 1))
						{
							if (!func_113())
							{
								if (!unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
								{
									func_105(1, 1, 1, 0);
									if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
									{
										while (!func_103(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), fLocal_71, 1, 1056964608, 0, 1, 0) || func_157())
										{
											unk_0x36853D5037847BF3();
											system::wait(0);
										}
										if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
										{
											unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 0);
										}
									}
									unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
									{
										unk_0x5718F894FDA63A9E(iLocal_60, 0);
									}
									unk_0x36853D5037847BF3();
									unk_0xC83821A7ED01F9E9(0);
									unk_0x15AAE2A89BBE596D(iLocal_117);
									if (unk_0x42111BD51D233AAB())
									{
										func_101();
									}
									bLocal_126 = true;
									system::settimera(0);
								}
							}
						}
					}
				}
				else
				{
					func_99(unk_0xB3328BA8976B416C(iLocal_60, 1), &uLocal_70, &fLocal_71);
				}
			}
			else if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_60, 15f, 15f, 15f, 0, 1, 0))
			{
				unk_0x6931076730A4AC5D(&iLocal_103);
				unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
				unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2048, 2);
				if (iLocal_45 == 2)
				{
					unk_0x12C9D41D52A560D6(0, cLocal_333, "RETURNING_FRONT_A", 8f, -1000f, -1, 0, 0, 0, 0, 0);
				}
				unk_0x1B16DD5C115FE009(iLocal_103);
				unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
				unk_0x31BBD48AA2503617(iLocal_60, -668482597, false, 0, 0);
				iLocal_127 = 1;
			}
		}
		if (bLocal_126)
		{
			switch (iLocal_125)
			{
				case 0:
					unk_0x36853D5037847BF3();
					if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
						{
							func_96(iLocal_60, &vLocal_105, &vLocal_106, cLocal_321, sLocal_323);
							if (iLocal_80 == 1)
							{
								if (vLocal_106.z > 225f && vLocal_106.z < 265f)
								{
									if (vLocal_106.z < 245f)
									{
										vLocal_106.z = 225f;
									}
									else
									{
										vLocal_106.z = 265f;
									}
								}
								else if (vLocal_106.z > 45f && vLocal_106.z < 85f)
								{
									if (vLocal_106.z < 65f)
									{
										vLocal_106.z = 45f;
									}
									else
									{
										vLocal_106.z = 85f;
									}
								}
							}
							vLocal_105.z = (vLocal_105.z + 2f);
							unk_0x7367FB97975F1E29(vLocal_105, &(vLocal_105.f_2), 0, 0);
							vVar1 = { unk_0x09E51060F59912ED(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 0f, 2) };
							vVar4 = { vVar1 - vLocal_105 };
							vVar4.z = 0f;
							fVar5 = system::vmag(vVar4);
							unk_0x7367FB97975F1E29(vVar1, &(vVar1.f_2), 0, 0);
							fVar6 = (vLocal_105.z - vVar1.z);
							vLocal_106.x = unk_0xF5596B3A7E5F3C68(fVar6, fVar5);
							if (vLocal_106.x > 30f || vLocal_106.x < -30f)
							{
								vLocal_106.x = 0f;
							}
						}
						if (unk_0xB8DE76287EDC4957(unk_0xC733212BF9066BDF(), 0))
						{
							if (!unk_0xB8DE76287EDC4957(iVar0, 0))
							{
								iVar0 = unk_0xC733212BF9066BDF();
								unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iVar0), &uVar2, &Var3);
								if (unk_0x0C88267282FD588F(iVar0, vLocal_105, (Var3.f_1 + 1,5f), (Var3.f_1 + 1,5f), 3f, false, true, 0) || unk_0x0C88267282FD588F(iVar0, unk_0x09E51060F59912ED(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 0, 2), (Var3.f_1 + 1f), (Var3.f_1 + 1f), 3f, false, true, 0))
								{
									if (iLocal_80 == 1)
									{
										if (vLocal_106.z > 40f && vLocal_106.z < 220f)
										{
											vLocal_74 = { -148,3897f, -1647,215f, 31,5867f };
											fLocal_73 = 331,9427f;
										}
										else
										{
											vLocal_74 = { -129,5632f, -1622,282f, 31,1122f };
											fLocal_73 = 148,9075f;
										}
									}
									else if (iLocal_80 == 3)
									{
										if (vLocal_106.z > 160f && vLocal_106.z < 340f)
										{
											vLocal_74 = { -319,709f, -837,0066f, 30,449f };
											fLocal_73 = 61,7986f;
										}
										else
										{
											vLocal_74 = { -346,8735f, -833,8024f, 30,4135f };
											fLocal_73 = 269,6216f;
										}
									}
									else if (iLocal_80 == 4)
									{
										if (vLocal_106.z > 240f || vLocal_106.z < 60f)
										{
											vLocal_74 = { 37,222f, -1005,04f, 28,4648f };
											fLocal_73 = 156,7986f;
										}
										else
										{
											vLocal_74 = { 29,9887f, -1033,184f, 28,3794f };
											fLocal_73 = 344,6216f;
										}
									}
									else
									{
										fLocal_73 = unk_0xF0371FE6E2BF9599(iVar0);
										vLocal_74 = { func_94(vLocal_105, unk_0x09E51060F59912ED(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 0, 2)) };
									}
									if (unk_0xB8DE76287EDC4957(iVar0, 0))
									{
										unk_0xBD8D47FDC6902B2D(iVar0, vLocal_74, 1, false, 0, 1);
										unk_0x48ED7B2293A96722(iVar0, fLocal_73);
										unk_0xACE486395AA1867D(iVar0, 1084227584);
										unk_0x6147908AB85766AA(iVar0, 1);
									}
								}
							}
						}
						unk_0xBBF9037650162761(vLocal_105, 20f, 2);
						unk_0xA896149A4DE38DEA(vLocal_105, 20f, 0);
						unk_0x247EAA2E93D4A021(vLocal_105, 2f, 1, 1, 0, false);
						unk_0x28B42081D6BEFFF2(unk_0xFC1458A37D98B502(), true);
						iLocal_62 = unk_0x5E35CF35E65D69B9(iLocal_77, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), true, true, false);
						if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
						{
							unk_0xA9D382E7BA095148(iLocal_62, unk_0xFC1458A37D98B502(), unk_0xDD09837E5235FE91(unk_0xFC1458A37D98B502(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						}
						iLocal_107 = unk_0x8383F9C605E523B7(vLocal_105, vLocal_106, 2);
						unk_0x7122D672EBE0EA6E(iLocal_107, false);
						iLocal_108 = unk_0x4562AC7F06CD71B3("DEFAULT_ANIMATED_CAMERA", false);
						unk_0xEFF56C7BDABBF39B(iLocal_108, iLocal_107, sLocal_324, cLocal_321);
						unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
						unk_0x8E628F774C748D93(unk_0xFC1458A37D98B502(), iLocal_107, cLocal_321, sLocal_322, 1000f, -8f, 0, 0, 1148846080, 0);
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
						{
							unk_0x957CEE967C939968(iLocal_60);
							unk_0x8E628F774C748D93(iLocal_60, iLocal_107, cLocal_321, sLocal_323, 1000f, -8f, 0, 0, 1148846080, 0);
						}
						unk_0x7849794435F39D49(iLocal_108, true);
						unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
						func_41(&uLocal_154, cLocal_85, sLocal_97, 4, 0, 0, 0);
						system::settimera(0);
						iLocal_125++;
					}
					unk_0x36853D5037847BF3();
					break;
				
				case 1:
					if ((unk_0xD56F740235B1E8F0(iLocal_107) && unk_0x463C4747B41E35A3(iLocal_107) > 0,9f) || func_92(1000))
					{
						unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
						unk_0xBB9A3C553EECB180(0f);
						unk_0x7849794435F39D49(iLocal_108, false);
						unk_0x02934BABFD4CD384(iLocal_108, 0);
						func_91();
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
						{
							unk_0x957CEE967C939968(iLocal_60);
							unk_0x6D624C6A284D7D07(iLocal_60, (iLocal_152 - (iLocal_152 / 10)));
							vVar1 = { unk_0x09E51060F59912ED(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 1f, 2) };
							unk_0x7367FB97975F1E29(vVar1, &(vVar1.f_2), 0, 0);
							unk_0xBD8D47FDC6902B2D(iLocal_60, vVar1, 1, false, 0, 1);
							unk_0x771A86309E0CA47B(iLocal_60, false);
							vVar1 = { unk_0x4AA2C5A4980B3F34(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 1f, 2) };
							unk_0x48ED7B2293A96722(iLocal_60, vVar1.z);
							if (iLocal_80 == 4)
							{
								if (func_90(vVar1.z, 0f, 90f))
								{
									unk_0x6931076730A4AC5D(&iLocal_103);
									unk_0x380C1E7B7740D618(0, 38,2412f, -992,2134f, 28,4317f, 1f, 20000, 0,25f, 0, 1193033728);
									unk_0x93F12E7D8D931858(0, unk_0xF0371FE6E2BF9599(iLocal_60), 1);
									unk_0x1B16DD5C115FE009(iLocal_103);
									unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
									unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
								}
								else
								{
									unk_0x6931076730A4AC5D(&iLocal_103);
									unk_0x380C1E7B7740D618(0, 58,803f, -1067,711f, 28,4411f, 1f, 20000, 0,25f, 0, 1193033728);
									unk_0x93F12E7D8D931858(0, unk_0xF0371FE6E2BF9599(iLocal_60), 1);
									unk_0x1B16DD5C115FE009(iLocal_103);
									unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
									unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
								}
							}
							else
							{
								unk_0x6931076730A4AC5D(&iLocal_103);
								unk_0x93F12E7D8D931858(0, vVar1.z, 1);
								unk_0x1B16DD5C115FE009(iLocal_103);
								unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
							}
							unk_0x60C54803C97FDAAB(iLocal_60, cLocal_334, 1048576000);
							unk_0x31BBD48AA2503617(iLocal_60, -668482597, true, 0, 0);
							unk_0xE9B3D12A64CC7C1A(iLocal_60, true);
						}
						if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
						{
							unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
							unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 0, 0);
						}
						if (unk_0x6ADD12BF4D6D2587(iLocal_62))
						{
							unk_0x452336926718D62A(&iLocal_62);
						}
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
						{
							unk_0x6D624C6A284D7D07(iLocal_60, (iLocal_152 - (iLocal_152 / 10)));
							unk_0x5718F894FDA63A9E(iLocal_60, 1);
						}
						iVar9 = (iLocal_152 / 100);
						iVar9 *= 90;
						system::wait(0);
						unk_0x90CE99E954B80CFF(0, 0, 3, 0);
						func_59(func_118(), 1, iVar9);
						func_58(joaat("rc_wallets_returned"), 1);
						func_194(3);
						func_189();
					}
					else if (unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), -3856156))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_60) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
						{
							if (unk_0x5D67DB68EF61B3E1(iLocal_62, unk_0xFC1458A37D98B502()))
							{
								unk_0x6B7C10B19928914F(iLocal_62, 0, true);
								if (unk_0x6668BA66B78B4E7C(iLocal_60))
								{
									unk_0xA9D382E7BA095148(iLocal_62, iLocal_60, unk_0xDD09837E5235FE91(iLocal_60, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								else
								{
									unk_0xA9D382E7BA095148(iLocal_62, iLocal_60, unk_0xDD09837E5235FE91(iLocal_60, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								if (!iLocal_59)
								{
									if (func_41(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0) || func_57())
									{
										iLocal_59 = 1;
									}
								}
							}
						}
					}
					else if (!iLocal_59)
					{
						if (func_41(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0) || func_57())
						{
							iLocal_59 = 1;
						}
					}
					unk_0x36853D5037847BF3();
					break;
				}
		}
	}
	else
	{
		func_270();
	}
}

int func_57()//Position - 0x3587
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

void func_58(int iParam0, int iParam1)//Position - 0x35AC
{
	int iVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xBFFF62F75445099D(iParam0, iVar0, 1);
}

int func_59(int iParam0, int iParam1, int iParam2)//Position - 0x35CF
{
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_60(Global_104555.f_28020[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_60(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3618
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_89();
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
					func_88(99, 1);
					func_58(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_58(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_58(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_73(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_69(5))
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
							func_58(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_58(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_58(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_69(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_58(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_58(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_58(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_58(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_58(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_58(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_58(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_58(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_58(joaat("sp2_money_spent_property"), iParam3);
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
									func_58(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_58(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_58(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_58(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_58(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_58(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_69(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_58(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_58(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_58(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_58(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_58(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_58(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_68(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_88(95, iParam3);
					break;
				
				case 1:
					func_88(97, iParam3);
					break;
				
				case 2:
					func_88(96, iParam3);
					break;
			}
			func_88(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_63(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_63(iVar1);
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
					func_58(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_58(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_58(joaat("sp2_total_cash_earned"), iParam3);
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
	func_62(iParam0);
	if (Global_35861 == 15)
	{
		func_61(0);
	}
	return 1;
}

void func_61(bool bParam0)//Position - 0x3C17
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

void func_62(int iParam0)//Position - 0x3E99
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

void func_63(int iParam0)//Position - 0x3EF3
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_66(129, 0, -1, 1);
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
	else if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0) || unk_0xC80D31E4B587871C(Global_2097152[func_65() /*12130*/].f_7676.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Global_2097152[func_65() /*12130*/].f_7676.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xE3C33644878DCCFD("COUP_RED");
		unk_0xA6D2B267C377D7B2(func_64(iParam0));
		unk_0x9F42263EE935D84B(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_64(int iParam0)//Position - 0x3FC8
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

int func_65()//Position - 0x407F
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_66(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x408C
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
		iParam2 = func_67();
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

int func_67()//Position - 0x4558
{
	return Global_1312736;
}

void func_68(int iParam0)//Position - 0x4564
{
	func_88(93, iParam0);
	func_88(29, iParam0);
	func_88(30, iParam0);
}

bool func_69(int iParam0)//Position - 0x4584
{
	if (iParam0 == 8)
	{
		return func_70(129, -1, -1);
	}
	if (!unk_0x3A711520F83BAE98())
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2097152[func_65() /*12130*/].f_7676.f_10, iParam0);
}

int func_70(int iParam0, int iParam1, int iParam2)//Position - 0x45D2
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_67();
	}
	iVar1 = func_72(iParam0, iParam1);
	uVar2 = func_71(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_71(int iParam0)//Position - 0x460F
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

int func_72(int iParam0, int iParam1)//Position - 0x48CF
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_67();
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

int func_73(bool bParam0)//Position - 0x4B71
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
		func_87(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_74(27, 1);
	return 1;
}

int func_74(int iParam0, int iParam1)//Position - 0x4C28
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_75(iParam0, iParam1);
}

int func_75(int iParam0, int iParam1)//Position - 0x4C43
{
	if (func_48(14) && !func_86(iParam0))
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
	if (func_85(&Global_4267379))
	{
		if (func_83(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_76(&Global_4267379, iParam0))
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

int func_76(var uParam0, int iParam1)//Position - 0x4CE0
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_48(14) && !func_86(iParam1))
	{
		return 0;
	}
	if (func_83(uParam0, iParam1))
	{
		return 0;
	}
	if (func_82(uParam0) < 0f)
	{
		func_81(uParam0, 0);
	}
	func_79(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_77(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_77(var uParam0, int iParam1)//Position - 0x4D91
{
	int iVar0;
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_48(14) && !func_86(iParam1))
	{
		return 0;
	}
	if (func_83(uParam0, iParam1))
	{
		return 0;
	}
	if (func_82(uParam0) < 0f)
	{
		func_81(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_78(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_78(var uParam0, int iParam1)//Position - 0x4E0C
{
	return (*uParam0)[iParam1] == 78;
}

void func_79(var uParam0)//Position - 0x4E1D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_80(uParam0, iVar0);
		iVar0++;
	}
	func_81(uParam0, (Global_4267378 - 0,5f));
}

void func_80(var uParam0, int iParam1)//Position - 0x4E51
{
	(*uParam0)[iParam1] = 78;
}

void func_81(var uParam0, float fParam1)//Position - 0x4E61
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

float func_82(var uParam0)//Position - 0x4E7E
{
	return uParam0->f_80;
}

bool func_83(var uParam0, int iParam1)//Position - 0x4E8A
{
	return func_84(uParam0, iParam1) != -1;
}

int func_84(var uParam0, int iParam1)//Position - 0x4E9C
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

bool func_85(var uParam0)//Position - 0x4EC9
{
	return uParam0->f_79 == 1;
}

int func_86(int iParam0)//Position - 0x4ED7
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

int func_87(int iParam0, int iParam1)//Position - 0x4F27
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

void func_88(int iParam0, int iParam1)//Position - 0x4F78
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

void func_89()//Position - 0x4FD5
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

int func_90(float fParam0, float fParam1, float fParam2)//Position - 0x504A
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

void func_91()//Position - 0x50BF
{
	int iVar0;
	
	iVar0 = unk_0x5AC38B4D80D4E352(26379945, unk_0x3F90543934DCD7E6(unk_0xFC1458A37D98B502(), 0,5f, -1f, 0,5f), 0f, 0f, unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502()), 65f, 1, 2);
	unk_0x7849794435F39D49(iVar0, true);
}

int func_92(int iParam0)//Position - 0x50FD
{
	if (unk_0x9F7B586A14398C40())
	{
		if ((unk_0x53C562FD2B9E3AB0() - Global_28) > iParam0)
		{
			Global_27 = unk_0x53C562FD2B9E3AB0();
		}
		Global_28 = unk_0x53C562FD2B9E3AB0();
		if ((unk_0x53C562FD2B9E3AB0() - Global_27) > iParam0)
		{
			if (func_93())
			{
				Global_27 = unk_0x53C562FD2B9E3AB0();
				return 1;
			}
		}
	}
	return 0;
}

int func_93()//Position - 0x5147
{
	if (unk_0x0F30C1F1717A6437())
	{
		return 0;
	}
	if (unk_0xE8C126B7ADBB9D63(0, 18) || unk_0xE8C126B7ADBB9D63(2, 18))
	{
		return 1;
	}
	return 0;
}

Vector3 func_94(vector3 vParam0, vector3 vParam1)//Position - 0x5179
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	int iVar13;
	
	iVar5 = 0;
	iVar6 = 1;
	iVar0 = unk_0xC733212BF9066BDF();
	if (!unk_0x9761C10D57B68069(iVar0))
	{
		unk_0xDD29FF4BAB8AFF9C(iVar0, true, 0);
	}
	unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iVar0), &vVar3, &vVar4);
	unk_0x49A7AD0000D6AF17(vParam0, 3, &vVar2, 1, 3f, 0f);
	if (system::vdist(vParam0, -3039,655f, 602,4346f, 6,5719f) <= 25f)
	{
		vVar1 = { -3045,49f, 604,46f, 7,02f };
		iVar5 = 8;
	}
	else if (system::vdist(vParam0, 288,06f, -1257,1f, 28,44f) <= 25f)
	{
		vVar1 = { 278,97f, -1255,06f, 28,88f };
		iVar5 = 8;
	}
	while (iVar5 < 8)
	{
		switch (iVar5)
		{
			case 0:
				if (system::vdist(vVar2, unk_0x3F90543934DCD7E6(iVar0, 0f, (vVar4.y + IntToFloat(iVar6)), 0f)) < system::vdist(vVar2, unk_0x3F90543934DCD7E6(iVar0, 0f, -(vVar4.y + IntToFloat(iVar6)), 0f)))
				{
					vVar1 = { unk_0x3F90543934DCD7E6(iVar0, 0f, (vVar4.y + IntToFloat(iVar6)), 0f) };
				}
				else
				{
					vVar1 = { unk_0x3F90543934DCD7E6(iVar0, 0f, -(vVar4.y + IntToFloat(iVar6)), 0f) };
				}
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
					{
						vVar10 = { func_95(vVar1, 0f, vVar4) };
						vVar11 = { func_95(vVar1, 0f, vVar3) };
						iVar13 = unk_0x8941008352A0F66A(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 1:
				if (unk_0x16ACABF450EB00B4(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else if (unk_0xBE3C4023003180FC(vVar1, vParam0, true) <= 5f || unk_0xBE3C4023003180FC(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 2:
				if (system::vdist(vVar2, unk_0x3F90543934DCD7E6(iVar0, 0f, (vVar4.y - IntToFloat(iVar6)), 0f)) < system::vdist(vVar2, unk_0x3F90543934DCD7E6(iVar0, 0f, -(vVar4.y - IntToFloat(iVar6)), 0f)))
				{
					vVar1 = { unk_0x3F90543934DCD7E6(iVar0, 0f, (vVar4.y - IntToFloat(iVar6)), 0f) };
				}
				else
				{
					vVar1 = { unk_0x3F90543934DCD7E6(iVar0, 0f, -(vVar4.y - IntToFloat(iVar6)), 0f) };
				}
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
					{
						vVar10 = { func_95(vVar1, 0f, vVar4) };
						vVar11 = { func_95(vVar1, 0f, vVar3) };
						iVar13 = unk_0x8941008352A0F66A(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 3:
				if (unk_0x16ACABF450EB00B4(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else if (unk_0xBE3C4023003180FC(vVar1, vParam0, true) <= 5f || unk_0xBE3C4023003180FC(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 4:
				if (system::vdist(vVar2, unk_0x3F90543934DCD7E6(iVar0, (vVar4.x + IntToFloat(iVar6)), 0f, 0f)) < system::vdist(vVar2, unk_0x3F90543934DCD7E6(iVar0, -(vVar4.x + IntToFloat(iVar6)), 0f, 0f)))
				{
					vVar1 = { unk_0x3F90543934DCD7E6(iVar0, (vVar4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					vVar1 = { unk_0x3F90543934DCD7E6(iVar0, -(vVar4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
					{
						vVar10 = { func_95(vVar1, 0f, vVar4) };
						vVar11 = { func_95(vVar1, 0f, vVar3) };
						iVar13 = unk_0x8941008352A0F66A(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 5:
				if (unk_0x16ACABF450EB00B4(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else if (unk_0xBE3C4023003180FC(vVar1, vParam0, true) <= 5f || unk_0xBE3C4023003180FC(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 6:
				if (system::vdist(vVar2, unk_0x3F90543934DCD7E6(iVar0, (vVar4.x - IntToFloat(iVar6)), 0f, 0f)) < system::vdist(vVar2, unk_0x3F90543934DCD7E6(iVar0, -(vVar4.x - IntToFloat(iVar6)), 0f, 0f)))
				{
					vVar1 = { unk_0x3F90543934DCD7E6(iVar0, (vVar4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					vVar1 = { unk_0x3F90543934DCD7E6(iVar0, -(vVar4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
					{
						vVar10 = { func_95(vVar1, 0f, vVar4) };
						vVar11 = { func_95(vVar1, 0f, vVar3) };
						iVar13 = unk_0x8941008352A0F66A(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 7:
				if (unk_0x16ACABF450EB00B4(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else if (unk_0xBE3C4023003180FC(vVar1, vParam0, true) <= 5f || unk_0xBE3C4023003180FC(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 8:
				break;
		}
		system::wait(0);
	}
	return vVar1;
}

Vector3 func_95(vector3 vParam0, float fParam1, struct<2> Param2, var uParam3)//Position - 0x577A
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	fVar1 = fParam1;
	fVar2 = system::cos(fVar1);
	fVar3 = system::sin(fVar1);
	vVar0.x = ((Param2 * fVar2) + (Param2.f_1 * fVar3));
	vVar0.y = ((Param2.f_1 * fVar2) - (Param2 * fVar3));
	vVar4 = { vParam0 + vVar0 };
	return vVar4;
}

void func_96(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)//Position - 0x57C7
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	var uVar11;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
	uParam2->f_2 = func_98(iParam0, unk_0xFC1458A37D98B502(), 1);
	fVar3 = func_98(iParam0, unk_0xFC1458A37D98B502(), 1);
	fVar4 = func_98(iParam0, unk_0xFC1458A37D98B502(), 1);
	vVar10 = { unk_0xB3328BA8976B416C(iParam0, 0) - unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
	if (unk_0x3A801AA34DD821BE(sParam3))
	{
		vVar9 = { unk_0x09E51060F59912ED(sParam3, sParam4, *uParam1, *uParam2, 0, 2) };
	}
	else
	{
		vVar9 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					uParam2->f_2 = func_97(unk_0xB3328BA8976B416C(iParam0, 0), *uParam1, 1);
					*uParam1 = { unk_0x9EA50C5EC175E58E(unk_0xB3328BA8976B416C(iParam0, 0), uParam2->f_2, vVar10) };
					iVar0 = 2;
				}
				else
				{
					iVar5 = unk_0xFF32E7A273D539FD(*uParam1, vVar9 + Vector(-1f, 0f, 0f), 0,5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (unk_0x16ACABF450EB00B4(iVar5, &iVar6, &vVar8, &uVar7, &uVar11) == 2)
				{
					if (iVar6 != 0)
					{
						if (vVar8.z > (uParam1->f_2 + 8,5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								fVar4 = (fVar4 + 7,5f);
							}
							else
							{
								fVar4 = (fVar3 - (7,5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { unk_0x9EA50C5EC175E58E(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), fVar4, vVar10) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = func_97(vVar9 + Vector(-0,75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			
			case 2:
				break;
		}
		system::wait(0);
	}
}

float func_97(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3, int iParam4)//Position - 0x597F
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

float func_98(int iParam0, int iParam1, int iParam2)//Position - 0x59E4
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	vVar1 = { unk_0xB3328BA8976B416C(iParam1, 0) };
	return func_97(vVar0, vVar1, iParam2);
}

void func_99(vector3 vParam0, var uParam1, float fParam2)//Position - 0x5A10
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	
	bVar0 = false;
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		vVar1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) - vParam0 };
		fVar2 = unk_0xA67DD8488EBA5F6D(vVar1.x, vVar1.y);
		if (func_100(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
		vVar1 = { vParam0 - unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		fVar2 = unk_0xA67DD8488EBA5F6D(vVar1.x, vVar1.y);
		if (func_100(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) > 30f)
		{
			*uParam1 = (6f * 4f);
		}
		else if (unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) > 20f)
		{
			*uParam1 = (6f * 3f);
		}
		else if (unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) > 10f)
		{
			*uParam1 = (6f * 2f);
		}
		else
		{
			*uParam1 = 6f;
		}
		*fParam2 = ((*uParam1 / 1,33f) - 1f);
	}
	else
	{
		*uParam1 = 6f;
		*fParam2 = ((*uParam1 / 1,33f) - 1f);
	}
}

int func_100(int iParam0, float fParam1, float fParam2)//Position - 0x5B11
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		fVar0 = unk_0xF0371FE6E2BF9599(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_101()//Position - 0x5B98
{
	Global_14622 = 0;
	func_102();
}

void func_102()//Position - 0x5BA8
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

int func_103(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x5BC9
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
	func_104(iParam0);
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

void func_104(int iParam0)//Position - 0x5D58
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

void func_105(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x5D84
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_112(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_45())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_111(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_112(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_111(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_109(unk_0x9EB17624F44A8DA4())) && !func_107(unk_0x9EB17624F44A8DA4(), 0)) && !func_106())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_109(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_106()//Position - 0x5E9D
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_107(int iParam0, int iParam1)//Position - 0x5EBA
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_108(-1, 0) == 8;
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

int func_108(int iParam0, bool bParam1)//Position - 0x5F05
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_67();
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

int func_109(int iParam0)//Position - 0x5F46
{
	if (func_107(iParam0, 0))
	{
		return 1;
	}
	if (func_110())
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

bool func_110()//Position - 0x5F88
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_111(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x5F99
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

void func_112(int iParam0)//Position - 0x5FCC
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

int func_113()//Position - 0x5FEF
{
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (func_157())
		{
			return 1;
		}
	}
	return 0;
}

int func_114(bool bParam0, bool bParam1, bool bParam2)//Position - 0x6010
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

bool func_115(int iParam0)//Position - 0x60F5
{
	return func_35(func_116(iParam0));
}

char* func_116(int iParam0)//Position - 0x6107
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

int func_117(int iParam0)//Position - 0x6149
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

int func_118()//Position - 0x61A1
{
	func_119();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_119()//Position - 0x61BA
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_122(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_121(unk_0xFC1458A37D98B502());
			if (func_120(iVar0) && (!func_48(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_120(Global_104555.f_2353.f_539.f_4301))
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

bool func_120(int iParam0)//Position - 0x62B7
{
	return iParam0 < 3;
}

int func_121(int iParam0)//Position - 0x62C3
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_122(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_122(int iParam0)//Position - 0x6300
{
	if (func_120(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_123()//Position - 0x632A
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
	{
		unk_0xD68E88A8E0BE8697(iLocal_60, unk_0xFC1458A37D98B502(), 150f, -1, 0, 0);
		unk_0xE9B3D12A64CC7C1A(iLocal_60, true);
		system::wait(0);
	}
}

int func_124()//Position - 0x635A
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 3f, 3f, 3f };
	vVar1 = { -3f, -3f, -3f };
	if (unk_0x3AB6A1A9084FB0A4(iLocal_60))
	{
		return 1;
	}
	else
	{
		if (unk_0xEBE499597C718EB8(iLocal_60, unk_0xFC1458A37D98B502(), 1))
		{
			return 1;
		}
		if (unk_0x5679106BC7ED79EE(unk_0xD0E00576168D19BB(iLocal_60, 31086, 0f, 0f, 0f), 5f, 1))
		{
			return 1;
		}
		vVar0 = { vVar0 + unk_0xD0E00576168D19BB(iLocal_60, 31086, 0f, 0f, 0f) };
		vVar1 = { vVar1 + unk_0xD0E00576168D19BB(iLocal_60, 31086, 0f, 0f, 0f) };
		if ((unk_0xAB0762B9CCAA2B6F(vVar1, vVar0, joaat("weapon_smokegrenade"), 1) || unk_0xAB0762B9CCAA2B6F(vVar1, vVar0, joaat("weapon_grenade"), 1)) || unk_0xAB0762B9CCAA2B6F(vVar1, vVar0, joaat("weapon_stickybomb"), 1))
		{
			return 1;
		}
		if (unk_0x71E1544E01ABC644(unk_0xD0E00576168D19BB(iLocal_60, 31086, 0f, 0f, 0f), 3f))
		{
			return 1;
		}
	}
	return 0;
}

void func_125()//Position - 0x6443
{
	if (!unk_0x191BE1BC8F26F3C1(iLocal_60, 0))
	{
		if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_60, 1)) > (fLocal_139 + 50f))
		{
			func_189();
		}
		else if (func_117(func_118()) < iLocal_152)
		{
			func_189();
		}
	}
}

void func_126()//Position - 0x648E
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
	{
		if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_60, Global_19, 0, 1, 0))
		{
			unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_60, 3000, 0, 2);
			unk_0x60C06BFD037BB7CF(iLocal_60, unk_0xFC1458A37D98B502(), 3000, 0, 2);
		}
	}
}

void func_127()//Position - 0x64D3
{
	float fVar0;
	
	if (iLocal_80 == 1)
	{
		fVar0 = 13f;
	}
	if (iLocal_80 == 4)
	{
		fVar0 = 5,75f;
	}
	if (iLocal_80 == 1 || iLocal_80 == 4)
	{
		if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_140, vLocal_141, fVar0, 0, true, 0))
		{
			if (!iLocal_131)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
				{
					unk_0xAC838A977FB6E6BC(iLocal_60, unk_0xFC1458A37D98B502(), 0);
					iLocal_131 = 1;
					iLocal_132 = 0;
				}
			}
		}
		if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_142, vLocal_143, fVar0, 0, true, 0))
		{
			if (!iLocal_132)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
				{
					unk_0xAC838A977FB6E6BC(iLocal_60, unk_0xFC1458A37D98B502(), 0);
					iLocal_132 = 1;
					iLocal_131 = 0;
				}
			}
		}
		if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_144, vLocal_145, fVar0, 0, true, 0))
		{
			if (!iLocal_133)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
				{
					iLocal_133 = 1;
				}
			}
		}
	}
	if (!iLocal_134)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
		{
			if (unk_0x21B6FFFD04C9FF3A(iLocal_60, unk_0xFC1458A37D98B502(), 25f, 25f, 5f, 0, 1, 0) && unk_0xFFCE4302A2DB825B(iLocal_60, unk_0xFC1458A37D98B502(), 17))
			{
				if (func_41(&uLocal_154, cLocal_85, sLocal_90, 4, 0, 0, 0) || func_57())
				{
					if (!unk_0xA5F6598E13F98E08(iLocal_60, cLocal_319, "flee_forward_outro_shopkeeper", 3))
					{
						unk_0x6931076730A4AC5D(&iLocal_103);
						unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
						if (iLocal_45 == 2)
						{
							unk_0x12C9D41D52A560D6(0, cLocal_333, "RETURNING_FRONT_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0x1B16DD5C115FE009(iLocal_103);
						unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
						iLocal_134 = 1;
					}
				}
			}
		}
	}
}

void func_128(int iParam0, var uParam1)//Position - 0x6655
{
	float fVar0;
	
	fVar0 = 65f;
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x3AB6A1A9084FB0A4(iParam0))
			{
				unk_0x6931076730A4AC5D(&iLocal_103);
				unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 0, 2);
				unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
				unk_0x1B16DD5C115FE009(iLocal_103);
				unk_0xAB30B1CF01A198C1(iParam0, iLocal_103);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
				system::settimera(0);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!unk_0x3AB6A1A9084FB0A4(iParam0))
			{
				if (unk_0xCA3C40448996C9BA(iParam0, unk_0xFC1458A37D98B502(), fVar0))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x3AB6A1A9084FB0A4(iParam0))
			{
				if (!unk_0xCA3C40448996C9BA(iParam0, unk_0xFC1458A37D98B502(), fVar0))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_129()//Position - 0x670D
{
	if (unk_0x58786AA7A9E510C0(iLocal_151))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_60, 0))
		{
			fLocal_139 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_60, 1));
		}
		func_58(joaat("rc_wallets_recovered"), 1);
		unk_0xC4803EF57E953FF3(0, 200, 250);
		if (unk_0x6ADD12BF4D6D2587(iLocal_62))
		{
			unk_0x452336926718D62A(&iLocal_62);
		}
		func_132();
		func_131(&uLocal_348);
		if (unk_0x6ADD12BF4D6D2587(iLocal_60))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
			{
				unk_0xB89BC60EFF7F2571(iLocal_60, 0);
			}
		}
		func_137(0);
		unk_0x60727D07B2D72C82(iLocal_151);
		if (!iLocal_54)
		{
			iLocal_46 = 5;
			func_130(2);
		}
		else
		{
			iLocal_46 = 12;
		}
	}
}

void func_130(int iParam0)//Position - 0x67A5
{
	switch (iParam0)
	{
		case 0:
			if (Global_104555.f_24965.f_2 < 3)
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_12(func_116(iParam0), -1);
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
					func_12(func_116(iParam0), -1);
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
					func_12(func_116(iParam0), -1);
					Global_104555.f_24965.f_4++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 2);
				}
			}
			break;
	}
}

void func_131(var uParam0)//Position - 0x6886
{
	*uParam0 = -99;
}

void func_132()//Position - 0x6894
{
	iLocal_65 = 0;
	if (!unk_0xA6DECE14FC9A8C51(iLocal_63))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_60, 0))
		{
			iLocal_63 = func_133(iLocal_60, 0, 0);
		}
	}
}

int func_133(int iParam0, bool bParam1, int iParam2)//Position - 0x68BE
{
	iParam2 = iParam2;
	return func_134(iParam0, bParam1, 145);
}

int func_134(int iParam0, bool bParam1, int iParam2)//Position - 0x68D4
{
	int iVar0;
	
	iVar0 = func_135(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(iVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(iVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_135(int iParam0, bool bParam1, bool bParam2)//Position - 0x6926
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_136(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_136(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_136(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_136(bool bParam0, float fParam1, float fParam2)//Position - 0x69CA
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_137(bool bParam0)//Position - 0x69E1
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_60) && iLocal_80 == 4)
	{
		if (unk_0xA5F6598E13F98E08(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 3))
		{
			unk_0x6931076730A4AC5D(&iLocal_103);
			unk_0x12C9D41D52A560D6(0, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 0, 2);
			if (bParam0)
			{
				unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			unk_0x1B16DD5C115FE009(iLocal_103);
			unk_0xB8E08BD5B184DF4E(iLocal_60);
			unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
			unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
		}
	}
}

int func_138()//Position - 0x6AC7
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_62))
	{
		if (unk_0xDFFD5F8C8ABCB7EF(iLocal_62))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
			{
				if (unk_0x5D67DB68EF61B3E1(iLocal_62, iLocal_60))
				{
					if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_60, 18f, 18f, 18f, 0, 1, 0))
					{
						if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
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

void func_139(int iParam0, var uParam1)//Position - 0x6B25
{
	if (unk_0xA6DECE14FC9A8C51(iParam0))
	{
		if (unk_0x53C562FD2B9E3AB0() > *uParam1 + 500)
		{
			if (unk_0x054F3EDDF5178FA5(iParam0) == 1)
			{
				unk_0xDB6E56C09E5CF0AA(iParam0, true);
			}
			else
			{
				unk_0xDB6E56C09E5CF0AA(iParam0, false);
				unk_0x0C71C8E276E3EC54(iParam0, 1);
			}
			*uParam1 = unk_0x53C562FD2B9E3AB0();
		}
		if (!unk_0xF491DD47B88AA84E() && func_140(0))
		{
			func_130(1);
		}
	}
}

bool func_140(int iParam0)//Position - 0x6B83
{
	return unk_0xC80D31E4B587871C(Global_104551, iParam0);
}

void func_141()//Position - 0x6B95
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
	{
		if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_60, 8f, 8f, 18f, 0, 1, 0) || unk_0x841ED61760A7D07B(iLocal_60))
		{
			unk_0x84CDD933AFA470D2();
		}
	}
}

void func_142()//Position - 0x6BD6
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_64))
	{
		unk_0xE30CF11C0EE14316(&iLocal_64);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_62))
	{
		if (unk_0xDFFD5F8C8ABCB7EF(iLocal_62))
		{
			unk_0x6B7C10B19928914F(iLocal_62, 1, true);
			unk_0x452336926718D62A(&iLocal_62);
			func_39();
		}
	}
	else
	{
		func_39();
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
	{
		if (func_41(&uLocal_154, cLocal_85, sLocal_89, 4, 0, 0, 0) || func_57())
		{
			if (iLocal_45 == 2)
			{
				unk_0xE17958D3FD0F9EE9(iLocal_61, 128, true);
				unk_0xE17958D3FD0F9EE9(iLocal_61, 2, true);
				unk_0xE17958D3FD0F9EE9(iLocal_61, 1, false);
				unk_0xD68E88A8E0BE8697(iLocal_61, unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
			}
			unk_0xE9B3D12A64CC7C1A(iLocal_61, true);
		}
	}
}

int func_143()//Position - 0x6C75
{
	if (!unk_0x191BE1BC8F26F3C1(iLocal_61, 0))
	{
		if (unk_0xEBE499597C718EB8(iLocal_61, unk_0xFC1458A37D98B502(), 1))
		{
			if (bLocal_123)
			{
				return 1;
			}
		}
	}
	else if (bLocal_123)
	{
		return 1;
	}
	return 0;
}

void func_144()//Position - 0x6CAC
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
	{
		unk_0xB8E08BD5B184DF4E(iLocal_60);
		unk_0xD68E88A8E0BE8697(iLocal_60, unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
		unk_0xE9B3D12A64CC7C1A(iLocal_60, true);
		system::wait(0);
		unk_0x486F346ADFE56674(&iLocal_60);
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
	{
		func_41(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
		unk_0x6931076730A4AC5D(&iLocal_103);
		unk_0xCB3D88C918AA637C(0);
		unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
		unk_0x1B16DD5C115FE009(iLocal_103);
		unk_0xAB30B1CF01A198C1(iLocal_61, iLocal_103);
		unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
		unk_0xE9B3D12A64CC7C1A(iLocal_61, true);
		system::wait(0);
		unk_0xCFF0CD14B439821D(iLocal_61, false, 1);
		unk_0x486F346ADFE56674(&iLocal_61);
	}
}

int func_145()//Position - 0x6D46
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
	{
		if (unk_0x9F887157983E8EFC(iLocal_60))
		{
			return 1;
		}
	}
	return 0;
}

int func_146(int iParam0)//Position - 0x6D66
{
	return func_147(iParam0);
}

int func_147(int iParam0)//Position - 0x6D74
{
	int iVar0;
	
	if (!unk_0xB8B3E5529EDB87D4(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x4DFBD39F0EACA5CC(iParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_136(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	return iVar0;
}

int func_148()//Position - 0x6DAC
{
	if (unk_0xB8B3E5529EDB87D4(iLocal_151))
	{
		if (unk_0x4C6D8414E075A2B8(iLocal_151))
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_61))
			{
				if (!unk_0x191BE1BC8F26F3C1(iLocal_61, 0))
				{
					if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
					{
						if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_61, 18f, 18f, 18f, 0, 1, 0) || unk_0xEBE499597C718EB8(iLocal_61, unk_0xFC1458A37D98B502(), 1))
						{
							system::settimerb(0);
							iLocal_119 = 1;
							return 1;
						}
					}
				}
				if (func_149())
				{
					system::settimerb(0);
					iLocal_119 = 2;
					return 1;
				}
				if (unk_0x3AB6A1A9084FB0A4(iLocal_61))
				{
					if (unk_0xEBE499597C718EB8(iLocal_61, unk_0xFC1458A37D98B502(), 1))
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_60))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
							{
								unk_0xB8E08BD5B184DF4E(iLocal_60);
								unk_0xB89BC60EFF7F2571(iLocal_60, 0);
							}
						}
						system::settimerb(0);
						iLocal_119 = 2;
						return 1;
					}
				}
				else if (unk_0xEBE499597C718EB8(iLocal_61, unk_0xFC1458A37D98B502(), 1))
				{
					system::settimerb(0);
					iLocal_119 = 2;
					if (unk_0x6ADD12BF4D6D2587(iLocal_60))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
						{
							unk_0xB8E08BD5B184DF4E(iLocal_60);
							unk_0xB89BC60EFF7F2571(iLocal_60, 0);
						}
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
					{
						unk_0xB8E08BD5B184DF4E(iLocal_61);
						unk_0xD68E88A8E0BE8697(iLocal_61, unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
						unk_0xE9B3D12A64CC7C1A(iLocal_61, true);
						unk_0xCFF0CD14B439821D(iLocal_61, false, 1);
						unk_0x486F346ADFE56674(&iLocal_61);
					}
					return 1;
				}
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_60))
			{
				if (!unk_0x191BE1BC8F26F3C1(iLocal_60, 0))
				{
					if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_60, 5,3f, 5,3f, 6f, 0, 1, 0))
					{
						if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
						{
							if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_60) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_60))
							{
								system::settimerb(0);
								iLocal_119 = 3;
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_149()//Position - 0x6F50
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
	{
		if (unk_0x46D8E79A1B95ACE2(iLocal_61, unk_0xFC1458A37D98B502()) && unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_61, 20f, 20f, 20f, 0, 1, 0))
		{
			if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
			{
				if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_61) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_61))
				{
					return 1;
				}
			}
		}
		if (unk_0xE72696884FB34FE1(unk_0xFC1458A37D98B502()))
		{
			return 1;
		}
		if (unk_0x9F887157983E8EFC(iLocal_61))
		{
			return 1;
		}
	}
	return 0;
}

void func_150()//Position - 0x6FDA
{
	if (iLocal_56)
	{
		if (!iLocal_57)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
			{
				if (unk_0xC931425E2B416A2F(iLocal_61, 4))
				{
					if ((func_41(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0) || func_57()) || func_57())
					{
						iLocal_57 = 1;
					}
				}
				else if ((func_41(&uLocal_154, cLocal_85, sLocal_89, 4, 0, 0, 0) || func_57()) || func_57())
				{
					iLocal_57 = 1;
				}
			}
		}
	}
	else if (func_149())
	{
		if ((func_41(&uLocal_154, cLocal_85, sLocal_98, 4, 0, 0, 0) || func_57()) || func_57())
		{
			if (unk_0xC931425E2B416A2F(iLocal_61, 4))
			{
				unk_0xD7F5B2902EBBD04E(iLocal_61, unk_0xFC1458A37D98B502(), 0, 16);
			}
			else
			{
				func_142();
			}
			iLocal_56 = 1;
		}
	}
}

int func_151()//Position - 0x70A4
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
	{
		if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 7))
		{
			if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_60, 20f, 20f, 20f, 0, 1, 0))
			{
				if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_60) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_60))
				{
					return 1;
				}
			}
		}
		if (unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar0, 1))
		{
			if (iVar0 == joaat("weapon_stungun"))
			{
				if (unk_0x613CDAB05D8C57C8(iLocal_60, joaat("weapon_stungun"), 0))
				{
					return 1;
				}
			}
		}
		if (unk_0xEBE499597C718EB8(iLocal_60, unk_0xFC1458A37D98B502(), 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0x5679106BC7ED79EE(unk_0xD0E00576168D19BB(iLocal_60, 31086, 0f, 0f, 0f), 3f, 1))
	{
		return 1;
	}
	return 0;
}

void func_152()//Position - 0x7160
{
	if (iLocal_45 == 2)
	{
	}
	if (!func_157())
	{
		if (system::timera() > 10000)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
			{
				if (!unk_0xAFFA17B5D5E2F248(iLocal_60))
				{
					func_153(iLocal_60, "GENERIC_CURSE_MED", 24);
					system::settimera(0);
				}
			}
		}
	}
	if (!bLocal_58)
	{
		if (func_37(unk_0xFC1458A37D98B502(), iLocal_61, 1) > 200f)
		{
			if (!unk_0x841ED61760A7D07B(iLocal_61) || unk_0xEC211A86AB3726B6(iLocal_61))
			{
				iLocal_46 = 8;
			}
		}
	}
}

void func_153(int iParam0, char* sParam1, int iParam2)//Position - 0x71D9
{
	unk_0x74D45BB07BD51F8B(iParam0, sParam1, func_154(iParam2), 1);
}

int func_154(int iParam0)//Position - 0x71F0
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

void func_155()//Position - 0x73E5
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
	{
		if (!bLocal_51)
		{
			if (unk_0xA5F6598E13F98E08(iLocal_60, cLocal_319, "flee_backward_loop_shopkeeper", 3))
			{
				unk_0x6931076730A4AC5D(&iLocal_103);
				unk_0x12C9D41D52A560D6(0, cLocal_319, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 0, 2);
				unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				unk_0x1B16DD5C115FE009(iLocal_103);
				unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
				iLocal_138 = 3;
				bLocal_51 = true;
			}
			else if (unk_0xA5F6598E13F98E08(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 3))
			{
				unk_0x6931076730A4AC5D(&iLocal_103);
				unk_0x12C9D41D52A560D6(0, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 0, 2);
				unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				unk_0x1B16DD5C115FE009(iLocal_103);
				unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
				iLocal_138 = 3;
				bLocal_51 = true;
			}
			else
			{
				bLocal_51 = true;
			}
		}
		if (bLocal_51)
		{
			if (!iLocal_112)
			{
				if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_60, 7f, 7f, 7f, 0, 1, 0))
				{
					if (unk_0x78F50AA8F955BEFC(iLocal_60, 242628503) == 1)
					{
						if (unk_0x2332DC2174507412(iLocal_60) == iLocal_138)
						{
							unk_0x60C06BFD037BB7CF(iLocal_60, unk_0xFC1458A37D98B502(), 9000, 0, 2);
							func_41(&uLocal_154, cLocal_85, sLocal_88, 4, 0, 0, 0);
							bLocal_129 = true;
							iLocal_112 = 1;
						}
					}
					else
					{
						unk_0x8BB5ECF21DDE505B(iLocal_60, 1);
						func_41(&uLocal_154, cLocal_85, sLocal_88, 4, 0, 0, 0);
						unk_0x6931076730A4AC5D(&iLocal_103);
						unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 7000, 0, 2);
						unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 7000);
						unk_0x1B16DD5C115FE009(iLocal_103);
						unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
						system::settimera(0);
						bLocal_129 = true;
						iLocal_112 = 1;
					}
				}
			}
		}
	}
}

int func_156()//Position - 0x7646
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
	{
		if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_60, 12f, 12f, 5f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_157()//Position - 0x7678
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_158()//Position - 0x769A
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
	{
		if (!bLocal_110)
		{
			iLocal_114 = unk_0x53C562FD2B9E3AB0();
			bLocal_110 = true;
		}
		if (bLocal_110)
		{
			iLocal_115 = unk_0x53C562FD2B9E3AB0();
			if (!iLocal_52)
			{
				if ((iLocal_115 - iLocal_114) > 500)
				{
					if (!func_157())
					{
						if (func_41(&uLocal_154, cLocal_85, sLocal_87, 4, 0, 0, 0) || func_57())
						{
							if (iLocal_45 == 2)
							{
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
								{
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
									{
									}
								}
							}
							if (iLocal_45 == 1)
							{
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
								{
								}
							}
							if (unk_0xA6DECE14FC9A8C51(iLocal_63))
							{
								unk_0xE30CF11C0EE14316(&iLocal_63);
							}
							iLocal_52 = 1;
						}
					}
				}
			}
		}
	}
}

void func_159()//Position - 0x7736
{
	float fVar0;
	
	if (!bLocal_53)
	{
		if (iLocal_80 == 1)
		{
			fVar0 = 1f;
		}
		if (iLocal_80 == 2)
		{
			fVar0 = 4f;
		}
		if (iLocal_80 != 2)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_60) && !unk_0x3AB6A1A9084FB0A4(iLocal_61))
			{
				if (!func_186())
				{
					if (func_173())
					{
						func_270();
					}
				}
				if (func_172())
				{
					if (!unk_0xA6DECE14FC9A8C51(iLocal_66))
					{
						if (!unk_0x191BE1BC8F26F3C1(iLocal_61, 0))
						{
							iLocal_66 = func_133(iLocal_61, 1, 0);
						}
						func_164(1);
					}
				}
				if (func_163())
				{
					func_162();
					if (iLocal_80 == 3)
					{
						if (!iLocal_55)
						{
							unk_0x6931076730A4AC5D(&iLocal_103);
							unk_0x60C06BFD037BB7CF(0, iLocal_61, 16000, 0, 2);
							unk_0x380C1E7B7740D618(0, vLocal_79, 1f, 20000, fVar0, 4, 1193033728);
							unk_0x1B16DD5C115FE009(iLocal_103);
							unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
							iLocal_55 = 1;
						}
						unk_0x6931076730A4AC5D(&iLocal_103);
						unk_0x60C06BFD037BB7CF(0, iLocal_60, -1, 0, 2);
						unk_0x12C9D41D52A560D6(0, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT", "exit_forward", 1000f, -1000f, -1, 512, 0, 0, 0, 0);
						unk_0x28D62AF360997F32(0, vLocal_79, iLocal_60, 1f, false, 1,5f, 1082130432, true, 0, 0, -957453492, 20000);
						unk_0x9627C22EF3C3F4D6(0, iLocal_60, -1, 1);
						unk_0x1B16DD5C115FE009(iLocal_103);
						unk_0xAB30B1CF01A198C1(iLocal_61, iLocal_103);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
						system::settimera(0);
						bLocal_53 = true;
						unk_0x94BD6F0436473406(0f);
					}
					else
					{
						if (iLocal_80 == 1)
						{
							sLocal_93 = sLocal_93;
						}
						func_161();
						bLocal_53 = true;
						bLocal_123 = true;
						system::settimera(0);
					}
				}
			}
		}
	}
	if (bLocal_53)
	{
		if (!iLocal_111)
		{
			if (system::timera() > 1000)
			{
				if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_61, 60f, 60f, 50f, 0, 1, 0))
				{
					if (!unk_0x191BE1BC8F26F3C1(iLocal_60, 0))
					{
						unk_0xAC838A977FB6E6BC(iLocal_60, iLocal_61, 0);
					}
					iLocal_111 = 1;
				}
				else
				{
					iLocal_111 = 1;
				}
			}
		}
		if (iLocal_111 && !bLocal_109)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_60) && !unk_0x3AB6A1A9084FB0A4(iLocal_61))
			{
				if (func_41(&uLocal_154, cLocal_85, sLocal_86, 4, 0, 0, 0) || func_57())
				{
					unk_0xB8E08BD5B184DF4E(iLocal_60);
					unk_0x6931076730A4AC5D(&iLocal_103);
					unk_0x12C9D41D52A560D6(0, cLocal_319, "handsup_standing_enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x12C9D41D52A560D6(0, cLocal_319, "handsup_standing_base", 8f, -4f, 7000, 0, 0, 0, 0, 0);
					unk_0x12C9D41D52A560D6(0, cLocal_319, "handsup_standing_exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x1B16DD5C115FE009(iLocal_103);
					unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
					func_162();
					iLocal_151 = unk_0x06583789B8C15A6C(joaat("pickup_money_purse"), unk_0xCC1609D1BF2658E4(unk_0x3F90543934DCD7E6(iLocal_60, 0f, 2,5f, 0f), 1,2f, 1,5f), iLocal_120, iLocal_152, 1, iLocal_77);
					bLocal_109 = true;
				}
			}
		}
		if (bLocal_109)
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_61))
			{
				func_160();
			}
			else
			{
				switch (iLocal_623)
				{
					case 0:
						vLocal_626 = { unk_0x20752E4B9ABBF6F5(iLocal_151) - Vector(0f, 0f, 0,75f) };
						if (unk_0x4C6D8414E075A2B8(iLocal_151))
						{
							unk_0xB8E08BD5B184DF4E(iLocal_61);
							unk_0x6931076730A4AC5D(&iLocal_103);
							unk_0x28D62AF360997F32(0, vLocal_626, iLocal_60, 2f, false, 0,1f, 1082130432, true, 0, 0, -957453492, 20000);
							unk_0x1B16DD5C115FE009(iLocal_103);
							unk_0xAB30B1CF01A198C1(iLocal_61, iLocal_103);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
							iLocal_624 = unk_0x53C562FD2B9E3AB0();
						}
						iLocal_623 = 1;
						break;
					
					case 1:
						if (unk_0x78F50AA8F955BEFC(iLocal_61, 242628503) == 7)
						{
							vLocal_626 = { unk_0x20752E4B9ABBF6F5(iLocal_151) - Vector(0f, 0f, 0,75f) };
							if (unk_0x4C6D8414E075A2B8(iLocal_151))
							{
								if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(iLocal_61, 1), vLocal_626, true) > 1f)
								{
									iLocal_625 = 1;
									iLocal_623 = 4;
								}
								else
								{
									unk_0xB8E08BD5B184DF4E(iLocal_61);
									unk_0x6931076730A4AC5D(&iLocal_103);
									unk_0x12C9D41D52A560D6(0, cLocal_320, "pickup_low", 8f, -4f, -1, 8224, 0, 0, 0, 0);
									unk_0x1B16DD5C115FE009(iLocal_103);
									unk_0xAB30B1CF01A198C1(iLocal_61, iLocal_103);
									unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
									iLocal_623 = 2;
								}
							}
							else
							{
								iLocal_623 = 4;
							}
						}
						if ((unk_0x53C562FD2B9E3AB0() - iLocal_624) > 15000)
						{
							iLocal_625 = 1;
							iLocal_623 = 4;
						}
						break;
					
					case 2:
						if (unk_0x7A70772AE40E3821(iLocal_61, cLocal_320, "pickup_low") > 0,5f)
						{
							if (unk_0x4C6D8414E075A2B8(iLocal_151))
							{
								unk_0x60727D07B2D72C82(iLocal_151);
								iLocal_623 = 3;
							}
							else
							{
								iLocal_623 = 4;
							}
						}
						break;
					
					case 3:
						if ((unk_0xA5F6598E13F98E08(iLocal_61, cLocal_320, "pickup_low", 3) && unk_0x7A70772AE40E3821(iLocal_61, cLocal_320, "pickup_low") > 0,58f) || !unk_0xA5F6598E13F98E08(iLocal_61, cLocal_320, "pickup_low", 3))
						{
							iLocal_623 = 4;
						}
						break;
					
					case 4:
						unk_0xCFF0CD14B439821D(iLocal_61, true, 1);
						unk_0xD68E88A8E0BE8697(iLocal_61, unk_0xFC1458A37D98B502(), 50f, -1, 0, 0);
						unk_0x9A0C1F836B24E46E(iLocal_61, 0, 0);
						bLocal_123 = true;
						break;
					}
				}
			}
	}
}

void func_160()//Position - 0x7BCC
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_63))
	{
		unk_0xE30CF11C0EE14316(&iLocal_63);
	}
	if (!unk_0xA6DECE14FC9A8C51(iLocal_65))
	{
		if (unk_0xB8B3E5529EDB87D4(iLocal_151))
		{
			iLocal_65 = func_146(iLocal_151);
		}
	}
	iLocal_46 = 4;
}

void func_161()//Position - 0x7C01
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
	}
	if (unk_0xCA3C40448996C9BA(iLocal_61, unk_0xFC1458A37D98B502(), 90f))
	{
		unk_0x12C9D41D52A560D6(iLocal_61, cLocal_319, sLocal_327, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_45 == 2)
		{
			unk_0x6931076730A4AC5D(&iLocal_103);
			unk_0x12C9D41D52A560D6(0, cLocal_319, sLocal_328, 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x1B16DD5C115FE009(iLocal_103);
			unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
			unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
		}
		else if (iLocal_80 == 4)
		{
			iLocal_335 = unk_0x068179DC75448F03(39,7889f, -1014,392f, 28,4847f, 4f, 4f, 4f, 0f, 0, 4);
			unk_0x6931076730A4AC5D(&iLocal_103);
			unk_0x12C9D41D52A560D6(0, cLocal_319, "flee_backward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, cLocal_319, "flee_backward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			unk_0x1B16DD5C115FE009(iLocal_103);
			unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
			unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
		}
		else
		{
			unk_0x6931076730A4AC5D(&iLocal_103);
			unk_0x12C9D41D52A560D6(0, cLocal_319, sLocal_328, 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x1B16DD5C115FE009(iLocal_103);
			unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
			unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
		}
	}
	else
	{
		unk_0x12C9D41D52A560D6(iLocal_61, cLocal_319, sLocal_329, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_45 == 2)
		{
			unk_0x6931076730A4AC5D(&iLocal_103);
			unk_0x12C9D41D52A560D6(0, cLocal_319, sLocal_330, 8f, -8f, -1, 8, 0,1f, 0, 0, 0);
			unk_0x7FC89099E65488E2(0, -94,8543f, -1582,686f, 30,2862f, 3000);
			unk_0x12C9D41D52A560D6(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x1B16DD5C115FE009(iLocal_103);
			unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
			unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
		}
		else if (iLocal_80 == 4)
		{
			unk_0x6931076730A4AC5D(&iLocal_103);
			unk_0x12C9D41D52A560D6(0, cLocal_319, "flee_forward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, cLocal_319, "flee_forward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			unk_0x1B16DD5C115FE009(iLocal_103);
			unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
			unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
		}
		else
		{
			unk_0x6931076730A4AC5D(&iLocal_103);
			unk_0x12C9D41D52A560D6(0, cLocal_319, sLocal_330, 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x1B16DD5C115FE009(iLocal_103);
			unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
			unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
		}
	}
}

void func_162()//Position - 0x8070
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_66))
	{
		unk_0xE30CF11C0EE14316(&iLocal_66);
	}
	if (!unk_0xA6DECE14FC9A8C51(iLocal_64))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_61, 0))
		{
			iLocal_64 = func_133(iLocal_61, 1, 0);
		}
	}
}

int func_163()//Position - 0x80A6
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_80 == 1)
	{
		if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -170,3051f, -1670,362f, 53,73083f, -91,94043f, -1578,828f, 24,96221f, 18f, 0, false, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_80 == 2)
	{
		if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_61, 1), true) < 30f)
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_80 == 4)
	{
		if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -41,32678f, -959,6443f, 38,4444f, 119,9208f, -1021,231f, 21,85738f, 123,75f, 0, true, 0))
		{
			iVar0 = 1;
		}
	}
	else if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), -325,7037f, -829,31f, 30,5812f, true) < 95f)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_164(int iParam0)//Position - 0x8180
{
	if (func_166())
	{
		Global_104545 = 1;
		Global_104542 = unk_0x53C562FD2B9E3AB0();
		if (func_165(Global_104544))
		{
			func_130(0);
		}
		unk_0x218409883979C46E(1, "RE_TITLE");
		if (iParam0 && func_165(Global_104544))
		{
			unk_0xE56ECFD267E53FC5();
		}
		return 1;
	}
	return 0;
}

int func_165(int iParam0)//Position - 0x81D3
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

int func_166()//Position - 0x8202
{
	switch (func_167(&Global_25292, 0, 5, 0, unk_0xBBA15366508D1BDE()))
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

int func_167(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x8238
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
		if (func_171(0))
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
		if (!func_169(iParam2))
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
			func_168(uParam0, iParam4);
		}
	}
	return 2;
}

void func_168(var uParam0, int iParam1)//Position - 0x836F
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

bool func_169(int iParam0)//Position - 0x83BE
{
	return func_170(iParam0, Global_35861);
}

int func_170(int iParam0, int iParam1)//Position - 0x83CF
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

int func_171(int iParam0)//Position - 0x85B0
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_169(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_172()//Position - 0x85D2
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_80 == 1)
	{
		if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -179,103f, -1682,421f, 53,693f, -83,53208f, -1567,584f, 25,18745f, 40,75f, 0, false, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_80 == 2)
	{
		if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 353,1506f, -296,1962f, 62,76571f, 210,4646f, -243,5106f, 46,13731f, 123,75f, 0, true, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_80 == 3)
	{
		if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), -325,7037f, -829,31f, 30,5812f, true) < 105f)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_173()//Position - 0x8688
{
	if (!func_169(5))
	{
		return 1;
	}
	if (func_182())
	{
		return 1;
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_181())
		{
			return 0;
		}
	}
	if (func_174(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_174(float fParam0, bool bParam1)//Position - 0x86EA
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
		if (func_120(func_118()))
		{
			iVar5 = func_180();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 2) && !unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 3))
				{
					func_175(iVar1, &Var0);
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

void func_175(int iParam0, var uParam1)//Position - 0x87A1
{
	switch (iParam0)
	{
		case 0:
			func_176(uParam1, "Abigail1", func_178(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 1:
			func_176(uParam1, "Abigail2", func_178(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 2:
			func_176(uParam1, "Barry1", func_178(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 3:
			func_176(uParam1, "Barry2", func_178(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
		
		case 4:
			func_176(uParam1, "Barry3", func_178(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 5:
			func_176(uParam1, "Barry3A", func_178(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 6:
			func_176(uParam1, "Barry3C", func_178(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 7:
			func_176(uParam1, "Barry4", func_178(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_177(iParam0), 0, 0);
			break;
		
		case 8:
			func_176(uParam1, "Dreyfuss1", func_178(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 9:
			func_176(uParam1, "Epsilon1", func_178(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 10:
			func_176(uParam1, "Epsilon2", func_178(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 11:
			func_176(uParam1, "Epsilon3", func_178(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 12:
			func_176(uParam1, "Epsilon4", func_178(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 13:
			func_176(uParam1, "Epsilon5", func_178(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 14:
			func_176(uParam1, "Epsilon6", func_178(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 15:
			func_176(uParam1, "Epsilon7", func_178(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 16:
			func_176(uParam1, "Epsilon8", func_178(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 17:
			func_176(uParam1, "Extreme1", func_178(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 18:
			func_176(uParam1, "Extreme2", func_178(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 19:
			func_176(uParam1, "Extreme3", func_178(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 20:
			func_176(uParam1, "Extreme4", func_178(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 21:
			func_176(uParam1, "Fanatic1", func_178(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_177(iParam0), 1, 0);
			break;
		
		case 22:
			func_176(uParam1, "Fanatic2", func_178(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_177(iParam0), 1, 0);
			break;
		
		case 23:
			func_176(uParam1, "Fanatic3", func_178(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_177(iParam0), 0, 1);
			break;
		
		case 24:
			func_176(uParam1, "Hao1", func_178(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_177(iParam0), 0, 1);
			break;
		
		case 25:
			func_176(uParam1, "Hunting1", func_178(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 26:
			func_176(uParam1, "Hunting2", func_178(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 27:
			func_176(uParam1, "Josh1", func_178(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 28:
			func_176(uParam1, "Josh2", func_178(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
		
		case 29:
			func_176(uParam1, "Josh3", func_178(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
		
		case 30:
			func_176(uParam1, "Josh4", func_178(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 31:
			func_176(uParam1, "Maude1", func_178(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 32:
			func_176(uParam1, "Minute1", func_178(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 33:
			func_176(uParam1, "Minute2", func_178(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 34:
			func_176(uParam1, "Minute3", func_178(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 35:
			func_176(uParam1, "MrsPhilips1", func_178(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 36:
			func_176(uParam1, "MrsPhilips2", func_178(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 37:
			func_176(uParam1, "Nigel1", func_178(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 38:
			func_176(uParam1, "Nigel1A", func_178(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
		
		case 39:
			func_176(uParam1, "Nigel1B", func_178(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_177(iParam0), 1, 1);
			break;
		
		case 40:
			func_176(uParam1, "Nigel1C", func_178(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_177(iParam0), 1, 1);
			break;
		
		case 41:
			func_176(uParam1, "Nigel1D", func_178(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_177(iParam0), 1, 1);
			break;
		
		case 42:
			func_176(uParam1, "Nigel2", func_178(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
		
		case 43:
			func_176(uParam1, "Nigel3", func_178(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
		
		case 44:
			func_176(uParam1, "Omega1", func_178(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 45:
			func_176(uParam1, "Omega2", func_178(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 46:
			func_176(uParam1, "Paparazzo1", func_178(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 47:
			func_176(uParam1, "Paparazzo2", func_178(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 48:
			func_176(uParam1, "Paparazzo3", func_178(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 49:
			func_176(uParam1, "Paparazzo3A", func_178(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 50:
			func_176(uParam1, "Paparazzo3B", func_178(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 51:
			func_176(uParam1, "Paparazzo4", func_178(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 52:
			func_176(uParam1, "Rampage1", func_178(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 54:
			func_176(uParam1, "Rampage3", func_178(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 55:
			func_176(uParam1, "Rampage4", func_178(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 56:
			func_176(uParam1, "Rampage5", func_178(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_177(iParam0), 0, 0);
			break;
		
		case 53:
			func_176(uParam1, "Rampage2", func_178(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
		
		case 57:
			func_176(uParam1, "TheLastOne", func_178(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 58:
			func_176(uParam1, "Tonya1", func_178(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 59:
			func_176(uParam1, "Tonya2", func_178(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 60:
			func_176(uParam1, "Tonya3", func_178(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 61:
			func_176(uParam1, "Tonya4", func_178(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		case 62:
			func_176(uParam1, "Tonya5", func_178(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_176(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x9916
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

int func_177(int iParam0)//Position - 0x99A7
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

struct<2> func_178(int iParam0)//Position - 0x9CED
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_179(iParam0) };
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

struct<2> func_179(int iParam0)//Position - 0x9D23
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

int func_180()//Position - 0xA16E
{
	func_119();
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

int func_181()//Position - 0xA1B4
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

int func_182()//Position - 0xA1D1
{
	if (func_185() && !func_181())
	{
		return 1;
	}
	if (func_184() && func_183())
	{
		return 1;
	}
	return 0;
}

bool func_183()//Position - 0xA203
{
	return Global_104273 > 0;
}

int func_184()//Position - 0xA211
{
	if (Global_89900 != -1)
	{
		return 1;
	}
	return 0;
}

int func_185()//Position - 0xA226
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

int func_186()//Position - 0xA24C
{
	if ((Global_104544 == func_187() && unk_0x17E356AF4F930A2C()) && Global_104545)
	{
		return 1;
	}
	return 0;
}

int func_187()//Position - 0xA277
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x436287B7DB306165(), 64);
	uVar1 = func_188(Var0);
	return uVar1;
}

int func_188(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0xA294
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

void func_189()//Position - 0xA46E
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0xA94D4506CF328732(unk_0x9EB17624F44A8DA4(), 1);
	}
	func_288(25, iLocal_80);
	func_193();
	func_190();
	func_270();
}

void func_190()//Position - 0xA49F
{
	func_191();
}

int func_191()//Position - 0xA4AC
{
	if (func_192(0))
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

bool func_192(bool bParam0)//Position - 0xA4F7
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

int func_193()//Position - 0xA522
{
	return 1;
}

void func_194(int iParam0)//Position - 0xA52B
{
	Global_104541 = iParam0;
}

void func_195()//Position - 0xA539
{
	switch (iLocal_116)
	{
		case 0:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
			{
				unk_0x12C9D41D52A560D6(iLocal_61, cLocal_319, "IG_1_guy_stickup_loop", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
			{
				unk_0x12C9D41D52A560D6(iLocal_60, cLocal_321, "ortega_stand_loop_ort", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			iLocal_116++;
			break;
		
		case 1:
			if (unk_0x6ADD12BF4D6D2587(iLocal_61))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
				{
					if (func_172())
					{
						if (!unk_0xA6DECE14FC9A8C51(iLocal_66))
						{
							if (!unk_0x191BE1BC8F26F3C1(iLocal_61, 0))
							{
								iLocal_66 = func_133(iLocal_61, 1, 0);
							}
							if (!func_186())
							{
								func_164(1);
							}
						}
					}
					if (func_163())
					{
						func_41(&uLocal_154, cLocal_85, "REMG2_ARG", 4, 0, 0, 0);
						func_162();
						iLocal_147 = unk_0x53C562FD2B9E3AB0();
						unk_0x94BD6F0436473406(0f);
						iLocal_150 = 1;
						iLocal_116++;
					}
				}
				else if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
				{
					unk_0xFC5999E8B820470E(iLocal_60, vLocal_121, 250f, -1, 0, 0);
					unk_0xE9B3D12A64CC7C1A(iLocal_60, true);
					system::wait(0);
					func_201();
				}
			}
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (func_200())
				{
					iLocal_116 = 4;
				}
				if (func_149())
				{
					iLocal_116 = 9;
				}
				if (func_199())
				{
					iLocal_116 = 6;
				}
				if (func_198())
				{
					iLocal_116 = 4;
				}
			}
			if (!func_186())
			{
				if (func_173())
				{
					func_270();
				}
			}
			break;
		
		case 2:
			if (unk_0x6ADD12BF4D6D2587(iLocal_61))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
				{
					if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_61, 6f, 6f, 15f, 0, 1, 0))
					{
						if (unk_0x46D8E79A1B95ACE2(iLocal_61, unk_0xFC1458A37D98B502()) || unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_61, 3f, 3f, 15f, 0, 1, 0))
						{
							if (unk_0xCA3C40448996C9BA(unk_0xFC1458A37D98B502(), iLocal_61, 65f))
							{
								iLocal_149 = unk_0x53C562FD2B9E3AB0();
								unk_0x60C06BFD037BB7CF(iLocal_61, unk_0xFC1458A37D98B502(), 7000, 0, 2);
								func_41(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
								system::settimerb(0);
								iLocal_116++;
							}
							else
							{
								iLocal_149 = unk_0x53C562FD2B9E3AB0();
								unk_0x60C06BFD037BB7CF(iLocal_61, unk_0xFC1458A37D98B502(), 7000, 0, 2);
								func_41(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
								system::settimerb(0);
								iLocal_116++;
							}
						}
					}
				}
			}
			if (func_200() || func_198())
			{
				iLocal_116 = 4;
			}
			if (func_149())
			{
				iLocal_116 = 9;
			}
			if (func_199())
			{
				iLocal_116 = 6;
			}
			break;
		
		case 3:
			if ((iLocal_148 - iLocal_149) > 12500)
			{
				if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
				{
					iLocal_116 = 4;
				}
			}
			if ((iLocal_148 - iLocal_149) > 5500)
			{
				if (!bLocal_113)
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_61))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
						{
							func_41(&uLocal_154, cLocal_85, sLocal_96, 4, 0, 0, 0);
							unk_0xD7F5B2902EBBD04E(iLocal_61, unk_0xFC1458A37D98B502(), 0, 16);
							bLocal_113 = true;
							if (unk_0x6ADD12BF4D6D2587(iLocal_60))
							{
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
								{
									unk_0xFC5999E8B820470E(iLocal_60, vLocal_121, 250f, -1, 0, 0);
									unk_0xE9B3D12A64CC7C1A(iLocal_60, true);
									system::wait(0);
								}
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
								{
								}
								if (unk_0xA6DECE14FC9A8C51(iLocal_63))
								{
									unk_0xE30CF11C0EE14316(&iLocal_63);
								}
							}
						}
					}
				}
			}
			if (bLocal_113)
			{
				iLocal_116 = 10;
			}
			else
			{
				if (func_200())
				{
					iLocal_116 = 4;
				}
				if (func_149())
				{
					iLocal_116 = 9;
				}
				if (func_199())
				{
					iLocal_116 = 6;
				}
				if (func_197())
				{
					iLocal_116 = 9;
				}
				if (func_198())
				{
					iLocal_116 = 4;
				}
			}
			break;
		
		case 10:
			if (unk_0x6ADD12BF4D6D2587(iLocal_61))
			{
				if (unk_0x3AB6A1A9084FB0A4(iLocal_61) || func_37(unk_0xFC1458A37D98B502(), iLocal_61, 1) > 100f)
				{
					func_196();
					func_201();
				}
			}
			break;
		
		case 4:
			if (unk_0x6ADD12BF4D6D2587(iLocal_60))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
				{
					if (!unk_0xEBE499597C718EB8(iLocal_60, unk_0xFC1458A37D98B502(), 1))
					{
						unk_0xB8E08BD5B184DF4E(iLocal_60);
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
						{
							unk_0x6931076730A4AC5D(&iLocal_103);
							unk_0xFC5999E8B820470E(0, unk_0xB3328BA8976B416C(iLocal_61, 0), 150f, -1, 0, 0);
							unk_0x1B16DD5C115FE009(iLocal_103);
							unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
							unk_0xE9B3D12A64CC7C1A(iLocal_60, true);
						}
						iLocal_122 = 1;
					}
					else
					{
						unk_0xB8E08BD5B184DF4E(iLocal_60);
						unk_0xD68E88A8E0BE8697(iLocal_60, unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
						unk_0xE9B3D12A64CC7C1A(iLocal_60, true);
						if (unk_0xA6DECE14FC9A8C51(iLocal_63))
						{
							unk_0xE30CF11C0EE14316(&iLocal_63);
						}
					}
				}
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_61))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
				{
					unk_0xB8E08BD5B184DF4E(iLocal_61);
					unk_0xD68E88A8E0BE8697(iLocal_61, unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
					unk_0xE9B3D12A64CC7C1A(iLocal_61, true);
					if (unk_0xA6DECE14FC9A8C51(iLocal_64))
					{
						unk_0xE30CF11C0EE14316(&iLocal_64);
					}
				}
			}
			if (unk_0x42111BD51D233AAB())
			{
				func_101();
			}
			system::wait(0);
			if (!iLocal_122)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
				{
					func_41(&uLocal_154, cLocal_85, "REMG2_FKIT", 4, 0, 0, 0);
				}
				func_270();
			}
			break;
		
		case 5:
			if (system::timerb() > 250)
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_61))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
					{
						unk_0xAE6EBBBBD8B9FB30(iLocal_61, 17, true);
						unk_0x2217C45231E6A537(iLocal_61, 156, true);
						unk_0x6931076730A4AC5D(&iLocal_103);
						unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iLocal_103);
						unk_0xAB30B1CF01A198C1(iLocal_61, iLocal_103);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
						unk_0xE9B3D12A64CC7C1A(iLocal_61, true);
						system::wait(0);
						unk_0xCFF0CD14B439821D(iLocal_61, false, 1);
						unk_0x486F346ADFE56674(&iLocal_61);
						func_41(&uLocal_154, cLocal_85, sLocal_95, 4, 0, 0, 0);
					}
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_60))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
					{
						if (!unk_0xEBE499597C718EB8(iLocal_60, unk_0xFC1458A37D98B502(), 1))
						{
							unk_0xB8E08BD5B184DF4E(iLocal_60);
							iLocal_122 = 1;
						}
					}
				}
				if (!iLocal_122)
				{
					system::wait(0);
					func_270();
				}
			}
			break;
		
		case 6:
			if (system::timera() > 500)
			{
				if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_60))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
						{
							unk_0xB8E08BD5B184DF4E(iLocal_60);
							unk_0x6931076730A4AC5D(&iLocal_103);
							unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 10000, 0, 2);
							unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
							unk_0x1B16DD5C115FE009(iLocal_103);
							unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
							unk_0xE9B3D12A64CC7C1A(iLocal_60, true);
							unk_0x486F346ADFE56674(&iLocal_60);
						}
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_61))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
						{
							func_41(&uLocal_154, cLocal_85, sLocal_96, 4, 0, 0, 0);
							unk_0xB8E08BD5B184DF4E(iLocal_61);
							unk_0x6931076730A4AC5D(&iLocal_103);
							unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 10000, 0, 2);
							unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
							unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
							unk_0x1B16DD5C115FE009(iLocal_103);
							unk_0xAB30B1CF01A198C1(iLocal_61, iLocal_103);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
							unk_0xE9B3D12A64CC7C1A(iLocal_61, true);
						}
					}
				}
				system::wait(0);
				func_270();
			}
			break;
		
		case 7:
			system::settimera(0);
			iLocal_116++;
			break;
		
		case 8:
			if (system::timera() > 200)
			{
				func_201();
			}
			break;
		
		case 9:
			if (unk_0x6ADD12BF4D6D2587(iLocal_61))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
				{
					unk_0x2217C45231E6A537(iLocal_61, 156, true);
					unk_0x992E814DF611C58C(iLocal_61, 50f, 0);
					if (unk_0x42111BD51D233AAB())
					{
						func_101();
					}
					system::wait(0);
					func_41(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
				}
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_60))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
				{
					unk_0xB8E08BD5B184DF4E(iLocal_60);
					unk_0xF21E6EBE8EFDCC28(iLocal_60, 2000);
					iLocal_122 = 1;
				}
			}
			break;
	}
	if (iLocal_116 != 8 && iLocal_122)
	{
		iLocal_116 = 7;
	}
	iLocal_148 = unk_0x53C562FD2B9E3AB0();
	if (iLocal_150 && !bLocal_113)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_61) && unk_0x6ADD12BF4D6D2587(iLocal_61))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_60) && !unk_0x3AB6A1A9084FB0A4(iLocal_61))
			{
				if ((((iLocal_148 - iLocal_147) > 12000 && !unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_61, 3f, 3f, 35f, 0, 1, 0)) && unk_0x841ED61760A7D07B(iLocal_61)) && !func_157())
				{
					if ((func_41(&uLocal_154, cLocal_85, "REMG2_FKIT", 4, 0, 0, 0) || func_57()) || func_57())
					{
						unk_0x2217C45231E6A537(iLocal_61, 156, true);
						unk_0x84B03FD3CB6A57FD(iLocal_61, unk_0xD0E00576168D19BB(iLocal_60, 31086, 0f, 0f, 0f), 0);
						unk_0xB8E08BD5B184DF4E(iLocal_60);
						unk_0xE01CE1EBCD7EE551(iLocal_60, 99, 0);
						unk_0xFC5999E8B820470E(iLocal_61, vLocal_121, 250f, -1, 0, 0);
						unk_0xE9B3D12A64CC7C1A(iLocal_61, true);
						func_270();
					}
				}
			}
		}
	}
}

void func_196()//Position - 0xAD2C
{
	Global_14622 = 0;
	func_51();
}

int func_197()//Position - 0xAD3C
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_60) && !unk_0x3AB6A1A9084FB0A4(iLocal_61))
	{
		if (unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), iLocal_61) || unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), iLocal_60))
		{
			return 1;
		}
		if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_61, 2f, 2f, 2f, 0, 1, 0))
		{
		}
	}
	return 0;
}

int func_198()//Position - 0xAD8F
{
	if (!unk_0x191BE1BC8F26F3C1(iLocal_60, 0))
	{
		if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_60, 20f, 20f, 20f, 0, 1, 0))
		{
			if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_60) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_60))
			{
				if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
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
	if (!unk_0x191BE1BC8F26F3C1(iLocal_61, 0))
	{
		if (func_149())
		{
			if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_199()//Position - 0xAE1D
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
	{
		if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_60, 5,3f, 5,3f, 6f, 0, 1, 0))
		{
			if (unk_0xFFCE4302A2DB825B(iLocal_60, unk_0xFC1458A37D98B502(), 17))
			{
				if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6) && !unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
					{
						if (!unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_61))
						{
							if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_60) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_60))
							{
								system::settimerb(0);
								return 1;
							}
						}
					}
					else if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_60) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_60))
					{
						system::settimerb(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_200()//Position - 0xAEDB
{
	if (!unk_0x191BE1BC8F26F3C1(iLocal_60, 0))
	{
		if (unk_0x5679106BC7ED79EE(unk_0xD0E00576168D19BB(iLocal_60, 31086, 0f, 0f, 0f), 5f, 1))
		{
			if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_201()//Position - 0xAF13
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
	{
		if (!unk_0x9F887157983E8EFC(iLocal_60))
		{
			if (func_186())
			{
				if (unk_0x78F50AA8F955BEFC(iLocal_60, 242628503) == 7 || unk_0x78F50AA8F955BEFC(iLocal_60, 474215631) == 7)
				{
					if (unk_0x42111BD51D233AAB())
					{
						func_101();
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
					{
						if (!unk_0xA6FA9E5D08F067AD(iLocal_60))
						{
							unk_0xD68E88A8E0BE8697(iLocal_60, iLocal_61, 150f, -1, 0, 0);
						}
					}
					else if (iLocal_45 == 3)
					{
						if (!unk_0xA6FA9E5D08F067AD(iLocal_60))
						{
							unk_0xFC5999E8B820470E(iLocal_60, vLocal_104, 150f, -1, 0, 0);
						}
					}
					unk_0xE9B3D12A64CC7C1A(iLocal_60, true);
					system::wait(0);
					func_41(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0);
					system::wait(0);
					if (iLocal_152 > 0)
					{
						unk_0x6D624C6A284D7D07(unk_0xFC1458A37D98B502(), (iLocal_152 / 100) * 90);
						func_59(func_118(), 1, iLocal_152);
						system::wait(0);
						func_202(func_118(), 1, (iLocal_152 / 10), 0, 1);
					}
					func_194(3);
					func_189();
				}
			}
			else
			{
				func_270();
			}
		}
		else
		{
			func_270();
		}
	}
	else
	{
		func_270();
	}
}

void func_202(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xB021
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
	func_60(Global_104555.f_28020[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_203()//Position - 0xB108
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_181())
		{
			return 0;
		}
	}
	if (func_182())
	{
		return 1;
	}
	if (func_174(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_204()//Position - 0xB18E
{
	func_215();
	func_214(&uLocal_349, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE");
	func_214(&uLocal_349, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT");
	func_214(&uLocal_349, cLocal_333);
	func_214(&uLocal_349, cLocal_321);
	func_212(&uLocal_349, iLocal_75);
	func_212(&uLocal_349, iLocal_76);
	func_212(&uLocal_349, iLocal_77);
	func_214(&uLocal_349, cLocal_320);
	func_214(&uLocal_349, cLocal_319);
	func_214(&uLocal_349, cLocal_334);
	func_214(&uLocal_349, "RANDOM@BICYCLE_THIEF@IDLE_A");
	if (func_208(&uLocal_349))
	{
		func_205();
		return 1;
	}
	return 0;
}

void func_205()//Position - 0xB21B
{
	iLocal_60 = unk_0xAC992EFAD62C33BF(26, iLocal_75, vLocal_67, fLocal_69, 1, true);
	unk_0x771A86309E0CA47B(iLocal_60, true);
	unk_0x5C5D33A1B2711D21(iLocal_60, false);
	unk_0xE17958D3FD0F9EE9(iLocal_60, 8, true);
	unk_0xE17958D3FD0F9EE9(iLocal_60, 128, true);
	unk_0xE17958D3FD0F9EE9(iLocal_60, 512, true);
	unk_0x8BB5ECF21DDE505B(iLocal_60, 1);
	unk_0x3D3B64C490F8085F(iLocal_60);
	unk_0x6D624C6A284D7D07(iLocal_60, 0);
	unk_0x35829E9BFCED1A3F(iLocal_60, true);
	if (iLocal_75 == joaat("a_m_y_genstreet_01"))
	{
		unk_0x03924C68EFCBC511(iLocal_60, 0, 1, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_60, 3, 0, 3, 0);
		unk_0x03924C68EFCBC511(iLocal_60, 4, 0, 2, 0);
	}
	if (iLocal_75 == joaat("a_m_y_business_02"))
	{
		unk_0x03924C68EFCBC511(iLocal_60, 0, 1, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_60, 2, 1, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_60, 3, 1, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_60, 4, 1, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_60, 8, 0, 0, 0);
	}
	unk_0x4DE114E3C7F8B7C2("theAssailant", &iLocal_78);
	iLocal_61 = unk_0xAC992EFAD62C33BF(26, iLocal_76, vLocal_68, fLocal_72, 1, true);
	unk_0xCFF0CD14B439821D(iLocal_61, true, 1);
	unk_0x771A86309E0CA47B(iLocal_61, true);
	unk_0xE0F761CE722765C1(iLocal_61, 1, 0);
	unk_0x9E058151726E58DE(iLocal_61, joaat("weapon_pistol"), -1, true, true);
	unk_0xAE6EBBBBD8B9FB30(iLocal_61, 13, false);
	unk_0xAE6EBBBBD8B9FB30(iLocal_61, 17, false);
	unk_0xA37FFE314E45ED5D(iLocal_61, true);
	unk_0xAE01EF4BC84AFE7C(iLocal_61, 42, true);
	unk_0xAE01EF4BC84AFE7C(iLocal_61, 137, true);
	unk_0xE17958D3FD0F9EE9(iLocal_61, 128, true);
	unk_0xE17958D3FD0F9EE9(iLocal_61, 2, false);
	unk_0xCE93FCB8A8D8DF0B(iLocal_61, iLocal_78);
	unk_0x8BB5ECF21DDE505B(iLocal_61, 1);
	if (!unk_0x8C1C362CA8299475(sLocal_102))
	{
		unk_0x350CEE66BDF90273(iLocal_60, sLocal_102);
	}
	unk_0x350CEE66BDF90273(iLocal_61, sLocal_101);
	unk_0xF96119FCCD4D1889(2, 45677184, iLocal_78);
	unk_0xF96119FCCD4D1889(2, 1191392768, iLocal_78);
	unk_0xF96119FCCD4D1889(2, iLocal_78, 45677184);
	unk_0xF96119FCCD4D1889(2, iLocal_78, 1191392768);
	unk_0xF96119FCCD4D1889(5, iLocal_78, 1862763509);
	switch (func_118())
	{
		case 0:
			func_207(&uLocal_154, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_207(&uLocal_154, 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_207(&uLocal_154, 0, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
			break;
	}
	func_207(&uLocal_154, 1, iLocal_61, sLocal_100, 0, 1);
	func_207(&uLocal_154, 2, iLocal_60, sLocal_99, 0, 1);
	if (iLocal_45 == 2)
	{
		unk_0xE17958D3FD0F9EE9(iLocal_61, 1, false);
	}
	if (iLocal_80 == 1 || iLocal_80 == 4)
	{
		func_206();
	}
	if (iLocal_80 == 3)
	{
		vLocal_105 = { -325,4189f, -828,8596f, 31,1f };
		vLocal_106 = { 0f, 0f, 180f };
		iLocal_107 = unk_0x8383F9C605E523B7(vLocal_105, vLocal_106, 2);
		unk_0x8E628F774C748D93(iLocal_61, iLocal_107, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE", "base", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	if (iLocal_80 == 4)
	{
		unk_0x3904BE28B9CFEF20(Vector(28,5315f, -1027,565f, 37,1197f) - Vector(1f, 1f, 1f), Vector(28,5315f, -1027,565f, 37,1197f) + Vector(1f, 1f, 1f), 1);
	}
}

void func_206()//Position - 0xB4DC
{
	vector3 vVar0;
	
	unk_0xAA93B7B448E10E40(iLocal_61, unk_0x09E51060F59912ED(cLocal_319, sLocal_325, vLocal_331, vLocal_332, 0, 2), 0, 0, 1);
	vVar0 = { unk_0x4AA2C5A4980B3F34(cLocal_319, sLocal_325, vLocal_331, vLocal_332, 0f, 2) };
	if (vVar0.z < 0f)
	{
		vVar0.z = (vVar0.z + 360f);
	}
	unk_0x48ED7B2293A96722(iLocal_61, vVar0.z);
	unk_0xAA93B7B448E10E40(iLocal_60, unk_0x09E51060F59912ED(cLocal_319, sLocal_326, vLocal_331, vLocal_332, 0, 2), 0, 0, 1);
	vVar0 = { unk_0x4AA2C5A4980B3F34(cLocal_319, sLocal_326, vLocal_331, vLocal_332, 0f, 2) };
	if (vVar0.z < 0f)
	{
		vVar0.z = (vVar0.z + 360f);
	}
	unk_0x48ED7B2293A96722(iLocal_60, vVar0.z);
	unk_0x12C9D41D52A560D6(iLocal_61, cLocal_319, sLocal_325, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
	unk_0x12C9D41D52A560D6(iLocal_60, cLocal_319, sLocal_326, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
}

void func_207(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xB5D2
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

int func_208(var uParam0)//Position - 0xB66D
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
			if (!func_209(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_209(var uParam0)//Position - 0xB6D1
{
	return func_210(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_210(int iParam0, char* sParam1, int iParam2)//Position - 0xB6E8
{
	if (unk_0xC80D31E4B587871C(iParam0, 30))
	{
		if (unk_0xC80D31E4B587871C(iParam0, 29))
		{
			switch (func_211(iParam0))
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

int func_211(int iParam0)//Position - 0xB7DC
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

void func_212(var uParam0, int iParam1)//Position - 0xB808
{
	func_213(uParam0, 0, iParam1, "NULL", 0);
}

void func_213(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xB81C
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

void func_214(var uParam0, char* sParam1)//Position - 0xB906
{
	func_213(uParam0, 1, -1, sParam1, 0);
}

void func_215()//Position - 0xB919
{
	func_268();
	unk_0x872F1C1F8587CCC7(&iLocal_120, 3);
	unk_0x872F1C1F8587CCC7(&iLocal_120, 4);
	unk_0x872F1C1F8587CCC7(&iLocal_120, 1);
	if (iLocal_80 == 1)
	{
		cLocal_319 = "RANDOM@MUGGING1";
		sLocal_325 = "STRUGGLE_Loop_A_Thief";
		sLocal_326 = "STRUGGLE_Loop_A_Shopkeeper";
		sLocal_328 = "FLEE_BACKWARD_Shopkeeper";
		sLocal_327 = "FLEE_BACKWARD_Thief";
		sLocal_330 = "FLEE_FORWARD_Shopkeeper";
		sLocal_329 = "FLEE_FORWARD_Thief";
		func_217();
		iLocal_152 = 200;
		iLocal_46 = 2;
		vLocal_121 = { -132,2607f, -1628,336f, 31,2107f };
		iLocal_75 = joaat("a_m_y_business_02");
		iLocal_76 = joaat("g_m_y_strpunk_01");
		vLocal_67 = { -138,814f, -1635,975f, 31,357f };
		fLocal_69 = 318,519f;
		vLocal_68 = { -129,8504f, -1629,676f, 31,2506f };
		fLocal_72 = 98f;
		vLocal_331 = { vLocal_67 };
		vLocal_332 = { 0f, 0f, fLocal_69 };
		vLocal_140 = { -103,8951f, -1593,239f, 30,49198f };
		vLocal_141 = { -89,29615f, -1575,444f, 32,30938f };
		vLocal_142 = { -152,0367f, -1654,379f, 31,73599f };
		vLocal_143 = { -169,8183f, -1669,556f, 33,94173f };
		vLocal_144 = { -152,0367f, -1654,379f, 31,73599f };
		vLocal_145 = { -103,8951f, -1593,239f, 30,49198f };
		fLocal_73 = 340,0645f;
		vLocal_74 = { -151,0793f, -1650,322f, 31,6504f };
		vLocal_79 = { -133,6872f, -1630,245f, 31,2527f };
		iLocal_77 = joaat("prop_ld_wallet_pickup");
		cLocal_85 = "REMG1AU";
		sLocal_86 = "REMG1_VIC";
		sLocal_87 = "REMG1_SHT";
		sLocal_88 = "REMG1_ASK";
		sLocal_89 = "REMG1_DRP";
		sLocal_90 = "REMG1_OHY";
		sLocal_91 = "REMG1_THK";
		sLocal_92 = "REMG1_GIV";
		sLocal_93 = "REMG1_MUGA";
		sLocal_94 = "REMG1_WHO";
		switch (func_118())
		{
			case 0:
				sLocal_97 = "REMG1_HOM";
				sLocal_98 = "REMG1_WAM";
				break;
			
			case 1:
				sLocal_97 = "REMG1_HOF";
				sLocal_98 = "REMG1_WAF";
				break;
			
			case 2:
				sLocal_97 = "REMG1_HOT";
				sLocal_98 = "REMG1_WAT";
				break;
		}
		sLocal_101 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_102 = "A_M_Y_Business_02_WHITE_FULL_01";
		sLocal_99 = "MuggedMan";
		sLocal_100 = "MuggerGang";
		iLocal_48 = 1;
		cLocal_334 = "move_m@hurry@b";
	}
	if (iLocal_80 == 2)
	{
		cLocal_319 = "random@mugging2";
		cLocal_321 = "random@mugging2";
		iLocal_46 = 1;
		vLocal_121 = { 287,888f, -284,603f, 52,967f };
		iLocal_75 = joaat("a_f_y_genhot_01");
		iLocal_76 = joaat("g_m_y_strpunk_01");
		vLocal_67 = { 288,6728f, -282,4782f, 52,9707f };
		fLocal_69 = 260,7569f;
		vLocal_68 = { 290,5373f, -283,198f, 52,9799f };
		fLocal_72 = 45f;
		fLocal_73 = 251f;
		vLocal_74 = { 297,4484f, -261,2914f, 53,0037f };
		iLocal_77 = joaat("prop_ld_handbag");
		cLocal_85 = "REMG2AU";
		sLocal_86 = "REMG2_VIC";
		sLocal_87 = "REMG2_SHT";
		sLocal_88 = "REMG2_ASK";
		sLocal_89 = "REMG2_DRP";
		sLocal_90 = "REMG2_OHY";
		sLocal_91 = "REMG2_THK";
		sLocal_92 = "REMG2_GIV";
		sLocal_94 = "REMG2_WHO";
		sLocal_95 = "REMG2_GUN";
		sLocal_96 = "REMG2_FUT";
		switch (func_118())
		{
			case 0:
				sLocal_97 = "REMG2_HOM";
				sLocal_98 = "REMG2_WAM";
				break;
			
			case 1:
				sLocal_97 = "REMG2_HOF";
				sLocal_98 = "REMG2_WAF";
				break;
			
			case 2:
				sLocal_97 = "REMG2_HOT";
				sLocal_98 = "REMG2_WAT";
				break;
		}
		sLocal_101 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_99 = "MuggedYMan";
		sLocal_100 = "MuggerGang";
		iLocal_48 = 1;
		cLocal_334 = "move_m@hurry@b";
	}
	if (iLocal_45 == 1)
	{
		func_216();
		iLocal_152 = 2000;
		iLocal_46 = 2;
		if (iLocal_80 == 3)
		{
			cLocal_319 = "RANDOM@MUGGING3";
			vLocal_121 = { -317,1964f, -824,0751f, 31,4284f };
			iLocal_75 = joaat("a_f_y_hipster_01");
			iLocal_76 = joaat("a_m_o_tramp_01");
			vLocal_67 = { -310,9292f, -833,8435f, 30,6261f };
			fLocal_69 = 80,7161f;
			vLocal_68 = { -322,5526f, -827,186f, 30,5857f };
			fLocal_72 = 336,5502f;
			fLocal_73 = 81,8694f;
			vLocal_74 = { -322,3941f, -835,7213f, 30,6001f };
			vLocal_79 = { -320,9667f, -832,1209f, 30,5979f };
			iLocal_77 = joaat("prop_ld_purse_01");
			cLocal_85 = "REMG3AU";
			sLocal_86 = "REMG3_VIC";
			sLocal_87 = "REMG3_SHT";
			sLocal_88 = "REMG3_ASK";
			sLocal_89 = "REMG3_DRP";
			sLocal_90 = "REMG3_OHY";
			sLocal_91 = "REMG3_THK";
			sLocal_92 = "REMG3_GIV";
			sLocal_93 = "REMG3_MUGB";
			sLocal_94 = "REMG3_WHO";
			sLocal_95 = "REMG3_GUN";
			sLocal_96 = "REMG3_FUT";
			switch (func_118())
			{
				case 0:
					sLocal_97 = "REMG3_HOM";
					sLocal_98 = "REMG3_WAM";
					break;
				
				case 1:
					sLocal_97 = "REMG3_HOF";
					sLocal_98 = "REMG3_WAF";
					break;
				
				case 2:
					sLocal_97 = "REMG3_HOT";
					sLocal_98 = "REMG3_WAT";
					break;
			}
			sLocal_101 = "G_M_Y_Korean_02_Korean_MINI_02";
			sLocal_99 = "MUGGEDHIPSTER";
			sLocal_100 = "MuggerTramp";
			iLocal_48 = 1;
			cLocal_334 = "move_f@hurry@a";
		}
		if (iLocal_80 == 4)
		{
			func_216();
			cLocal_319 = "RANDOM@MUGGING4";
			sLocal_325 = "STRUGGLE_Loop_B_Thief";
			sLocal_326 = "STRUGGLE_Loop_B_Shopkeeper";
			sLocal_328 = "FLEE_BACKWARD_Shopkeeper";
			sLocal_327 = "FLEE_BACKWARD_Thief";
			sLocal_330 = "FLEE_FORWARD_Shopkeeper";
			sLocal_329 = "FLEE_FORWARD_Thief";
			vLocal_121 = { 32,8802f, -1016,061f, 28,4527f };
			iLocal_75 = joaat("a_f_m_tourist_01");
			iLocal_76 = joaat("g_m_y_armgoon_02");
			vLocal_67 = { 32,2169f, -1020,864f, 28,456f };
			fLocal_69 = 159,1445f;
			vLocal_331 = { vLocal_67 };
			vLocal_332 = { 0f, 0f, fLocal_69 };
			vLocal_68 = { 38,1933f, -1023,579f, 28,4889f };
			fLocal_72 = 60,1372f;
			fLocal_73 = 248f;
			vLocal_74 = { 42,5323f, -990,353f, 28,248f };
			vLocal_140 = { 38,15186f, -1001,485f, 28,42276f };
			vLocal_141 = { 40,13669f, -995,2711f, 30,37197f };
			vLocal_142 = { 37,21758f, -1040,354f, 28,41506f };
			vLocal_143 = { 19,91492f, -1036,814f, 30,28045f };
			vLocal_144 = { 28,4511f, -1035,718f, 28,3329f };
			vLocal_145 = { 38,6536f, -1001,073f, 28,407f };
			vLocal_79 = { 32,536f, -1020,293f, 28,4576f };
			iLocal_77 = joaat("prop_ld_wallet_pickup");
			cLocal_85 = "REMG4AU";
			sLocal_86 = "REMG4_VIC";
			sLocal_87 = "REMG4_SHT";
			sLocal_88 = "REMG4_ASK";
			sLocal_89 = "REMG4_DRP";
			sLocal_90 = "REMG4_OHY";
			sLocal_91 = "REMG4_THK";
			sLocal_92 = "REMG4_GIV";
			sLocal_93 = "REMG4_MUGB";
			sLocal_94 = "REMG4_WHO";
			sLocal_95 = "REMG4_GUN";
			sLocal_96 = "REMG4_FUT";
			switch (func_118())
			{
				case 0:
					sLocal_97 = "REMG4_HOM";
					sLocal_98 = "REMG4_WAM";
					break;
				
				case 1:
					sLocal_97 = "REMG4_HOF";
					sLocal_98 = "REMG4_WAF";
					break;
				
				case 2:
					sLocal_97 = "REMG4_HOT";
					sLocal_98 = "REMG4_WAT";
					break;
			}
			sLocal_101 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_02";
			sLocal_99 = "MuggedWoman";
			sLocal_100 = "MuggerGang";
			iLocal_48 = 1;
			cLocal_334 = "move_f@hurry@a";
		}
	}
}

void func_216()//Position - 0xBFA8
{
	cLocal_321 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_FEMALE";
	switch (unk_0x63A6486593EC7EC3(0, 3))
	{
		case 0:
			sLocal_322 = "Return_Wallet_Positive_A_Player";
			sLocal_323 = "Return_Wallet_Positive_A_Female";
			sLocal_324 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_322 = "Return_Wallet_Positive_B_Player";
			sLocal_323 = "Return_Wallet_Positive_B_Female";
			sLocal_324 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_322 = "Return_Wallet_Positive_C_Player";
			sLocal_323 = "Return_Wallet_Positive_C_Female";
			sLocal_324 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_217()//Position - 0xC01E
{
	cLocal_321 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_MALE";
	switch (unk_0x63A6486593EC7EC3(0, 3))
	{
		case 0:
			sLocal_322 = "Return_Wallet_Positive_A_Player";
			sLocal_323 = "Return_Wallet_Positive_A_Male";
			sLocal_324 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_322 = "Return_Wallet_Positive_B_Player";
			sLocal_323 = "Return_Wallet_Positive_B_Male";
			sLocal_324 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_322 = "Return_Wallet_Positive_C_Player";
			sLocal_323 = "Return_Wallet_Positive_C_Male";
			sLocal_324 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_218(int iParam0, var uParam1)//Position - 0xC092
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

void func_219(var uParam0)//Position - 0xC131
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
						func_220(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0x4B64A8D052027742();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_220(int iParam0)//Position - 0xC1BF
{
	func_221(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_221(int iParam0, char* sParam1, int iParam2)//Position - 0xC1D5
{
	if (unk_0xC80D31E4B587871C(*iParam0, 30))
	{
		switch (func_211(*iParam0))
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

void func_222(int iParam0)//Position - 0xC2AF
{
	if (iParam0 == -1)
	{
		iParam0 = func_187();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_224(iParam0);
	unk_0x51B813700F855144(0);
	unk_0x980C42B833D07BB4(1);
	Global_104541 = 0;
	func_223();
}

void func_223()//Position - 0xC2E5
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

void func_224(int iParam0)//Position - 0xC322
{
	Global_104544 = iParam0;
}

int func_225(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xC330
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
		iParam1 = func_187();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_265())
		{
			return 0;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			vVar1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_181())
			{
				return 0;
			}
		}
		if (!Global_104555.f_9055)
		{
			return 0;
		}
		if (func_192(0))
		{
			return 0;
		}
		if (func_182())
		{
			return 0;
		}
		if (func_264())
		{
			return 0;
		}
		if (Global_104544 != -1)
		{
			return 0;
		}
		if (func_120(func_118()))
		{
			if (func_174(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !bParam4)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_263(iParam1))
		{
			return 0;
		}
		if (func_120(func_118()))
		{
			if (func_262(func_118()) == 4 || func_262(func_118()) == 5)
			{
				return 0;
			}
		}
		if (func_120(func_118()))
		{
			if (!func_261(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_260(Global_104555.f_24965.f_43[iParam1]))
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
		if (func_259())
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
		if (!func_250(4))
		{
			return 0;
		}
		if (!func_169(5))
		{
			return 0;
		}
		if (func_249(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_249(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_263(30) && !func_249(30, 0))
		{
			if (iParam1 != 30)
			{
				if (system::vdist2(vVar1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_120(func_118()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_104555.f_2353.f_539.f_2280[iVar2 /*3*/] };
				iVar4 = Global_104555.f_2353.f_539.f_2276[iVar2];
				if (func_248(iVar4))
				{
					if (func_226(iVar2))
					{
						if (!func_27(vVar3, 0f, 0f, 0f, 0))
						{
							if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vVar3) < (210f * 210f))
							{
								if (func_118() != iVar2)
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

bool func_226(int iParam0)//Position - 0xC6CA
{
	int iVar0;
	
	iVar0 = Global_104555.f_2353.f_539.f_2276[iParam0];
	return func_227(iVar0);
}

int func_227(int iParam0)//Position - 0xC6EB
{
	return func_228(iParam0, 1);
}

int func_228(int iParam0, int iParam1)//Position - 0xC6FA
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_248(iParam0))
	{
		return 0;
	}
	func_229(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_229(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xC74D
{
	func_230(func_241(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_230(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xC76B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_240(iParam0, iParam1))
	{
		iVar0 = func_239(iParam1);
		iVar1 = func_237(iParam0);
		iVar2 = (func_237(iParam0) - func_237(iParam1));
		iVar3 = (func_239(iParam0) - func_239(iParam1));
		iVar4 = (func_236(iParam0) - func_236(iParam1));
		iVar5 = (func_235(iParam0) - func_235(iParam1));
		iVar6 = (func_234(iParam0) - func_234(iParam1));
		iVar7 = (func_233(iParam0) - func_233(iParam1));
	}
	else
	{
		iVar0 = func_239(iParam0);
		iVar1 = func_237(iParam1);
		iVar2 = (func_237(iParam1) - func_237(iParam0));
		iVar3 = (func_239(iParam1) - func_239(iParam0));
		iVar4 = (func_236(iParam1) - func_236(iParam0));
		iVar5 = (func_235(iParam1) - func_235(iParam0));
		iVar6 = (func_234(iParam1) - func_234(iParam0));
		iVar7 = (func_233(iParam1) - func_233(iParam0));
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
		iVar4 = (iVar4 + func_232(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_231(system::to_float(iVar0 + 1), 0f, 12f));
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

float func_231(float fParam0, float fParam1, float fParam2)//Position - 0xC96C
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

int func_232(int iParam0, int iParam1)//Position - 0xC9AE
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

int func_233(int iParam0)//Position - 0xCA50
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_234(int iParam0)//Position - 0xCA63
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_235(int iParam0)//Position - 0xCA76
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_236(int iParam0)//Position - 0xCA89
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_237(int iParam0)//Position - 0xCA9B
{
	return (system::shift_right(iParam0, 26) & 31 * func_238(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_238(bool bParam0, int iParam1, int iParam2)//Position - 0xCAC0
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_239(int iParam0)//Position - 0xCAD7
{
	return iParam0 & 15;
}

int func_240(int iParam0, int iParam1)//Position - 0xCAE4
{
	int iVar0;
	int iVar1;
	
	if (!func_248(iParam1) || !func_248(iParam0))
	{
		return 1;
	}
	iVar0 = func_237(iParam0);
	iVar1 = func_237(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_239(iParam0);
	iVar1 = func_239(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_236(iParam0);
	iVar1 = func_236(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_235(iParam0);
	iVar1 = func_235(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_234(iParam0);
	iVar1 = func_234(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_233(iParam0);
	iVar1 = func_233(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_241()//Position - 0xCBF0
{
	var uVar0;
	
	func_247(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_246(&uVar0, unk_0x95327550F0F2BE7C());
	func_245(&uVar0, unk_0x674C9438180770FE());
	func_244(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_243(&uVar0, unk_0xEAF455949B108589());
	func_242(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_242(var uParam0, int iParam1)//Position - 0xCC36
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

void func_243(var uParam0, int iParam1)//Position - 0xCCBC
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_244(var uParam0, int iParam1)//Position - 0xCCEF
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_239(*uParam0);
	iVar1 = func_237(*uParam0);
	if (iParam1 < 1 || iParam1 > func_232(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_245(var uParam0, int iParam1)//Position - 0xCD40
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_246(var uParam0, int iParam1)//Position - 0xCD7A
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_247(var uParam0, int iParam1)//Position - 0xCDB5
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_248(int iParam0)//Position - 0xCDF1
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
	iVar0 = func_233(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_234(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_235(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_237(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_239(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_236(iParam0);
	if (iVar5 < 1 || iVar5 > func_232(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_249(int iParam0, int iParam1)//Position - 0xCECD
{
	if (unk_0xC80D31E4B587871C(Global_104555.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_250(int iParam0)//Position - 0xCEF0
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar0 = func_118();
				if (!func_120(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_258()) || Global_103602) || Global_25235) || func_257()) || func_50(8, -1)) || func_256()) || func_255()) || func_254()) || func_253()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1) || func_258()) || Global_25235) || func_257()) || func_50(8, -1)) || func_254()) || func_256()) || func_255()) || func_253()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_258()) || Global_103602) || Global_25235) || func_257()) || func_50(8, -1)) || func_254()) || func_256()) || func_255()) || func_253()) || Global_104555.f_7658.f_919[iVar0] == 5) || Global_36408 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_258()) || Global_103602) || Global_25235) || func_257()) || func_50(8, -1)) || func_256()) || func_255()) || func_253()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_258() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || func_50(8, -1)) || func_253()) || func_252()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_50(8, -1) || func_256()) || func_255()) || func_252()) || func_251())
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
							if ((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_258()) || Global_25235) || func_257()) || func_50(8, -1)) || func_255()) || func_254()) || func_253()) || Global_104555.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || func_258()) || func_255()) || Global_103602) || Global_25235) || func_257()) || Global_36993) || func_50(8, -1)) || func_254()) || func_252()) || func_253()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_258()) || Global_103602) || Global_25235) || func_257()) || func_50(8, -1)) || func_254()) || func_252()) || func_256()) || func_255()) || func_253())
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

var func_251()//Position - 0xD60D
{
	return Global_92872.f_1;
}

int func_252()//Position - 0xD61B
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 13);
	}
	return 0;
}

int func_253()//Position - 0xD641
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_254()//Position - 0xD65B
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

bool func_255()//Position - 0xD685
{
	return Global_92885.f_316 > 0;
}

bool func_256()//Position - 0xD696
{
	return Global_92885.f_315 > 0;
}

var func_257()//Position - 0xD6A7
{
	return Global_1312854;
}

int func_258()//Position - 0xD6B3
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

int func_259()//Position - 0xD6CF
{
	func_47();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_260(int iParam0)//Position - 0xD6F7
{
	return func_240(func_241(), iParam0);
}

int func_261(int iParam0, int iParam1, int iParam2)//Position - 0xD709
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_118();
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

int func_262(int iParam0)//Position - 0xD7ED
{
	if (!func_120(iParam0))
	{
		return 7;
	}
	return Global_104555.f_7658.f_919[iParam0];
}

bool func_263(int iParam0)//Position - 0xD811
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_265())
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

int func_264()//Position - 0xD86F
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

int func_265()//Position - 0xD8B3
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

bool func_266(int iParam0)//Position - 0xD96E
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_104555.f_18544[iParam0 /*6*/], 3);
}

bool func_267(int iParam0)//Position - 0xD99C
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_104555.f_18544[iParam0 /*6*/], 0);
}

void func_268()//Position - 0xD9CA
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (system::vdist(vLocal_104, vLocal_81) < 20f)
		{
			iLocal_80 = 1;
			iLocal_45 = 2;
		}
		if (system::vdist(vLocal_104, vLocal_82) < 20f)
		{
			iLocal_80 = 2;
			iLocal_45 = 3;
		}
		if (system::vdist(vLocal_104, vLocal_83) < 20f)
		{
			iLocal_80 = 3;
			iLocal_45 = 1;
		}
		if (system::vdist(vLocal_104, vLocal_84) < 20f)
		{
			iLocal_80 = 4;
			iLocal_45 = 1;
		}
	}
}

void func_269(var uParam0, int iParam1)//Position - 0xDA49
{
	if (iParam1 > 0)
	{
		uParam0->f_273 = iParam1;
	}
}

void func_270()//Position - 0xDA61
{
	if (iLocal_130)
	{
		if (iLocal_48)
		{
			unk_0x14776E43F90DD454(iLocal_75);
			unk_0x14776E43F90DD454(iLocal_76);
			unk_0x14776E43F90DD454(iLocal_77);
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_61))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0xD68E88A8E0BE8697(iLocal_61, unk_0xFC1458A37D98B502(), 150f, -1, 0, 0);
			}
			unk_0xE9B3D12A64CC7C1A(iLocal_61, true);
			if (!bLocal_58)
			{
				unk_0x6D624C6A284D7D07(iLocal_61, iLocal_152);
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_60))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_60))
			{
				unk_0x5C5D33A1B2711D21(iLocal_60, true);
				if (unk_0x78F50AA8F955BEFC(iLocal_60, -1146898486) == 7 && unk_0x78F50AA8F955BEFC(iLocal_60, 242628503) == 7)
				{
					unk_0x6931076730A4AC5D(&iLocal_103);
					if (unk_0x6609DF209E7283C5(iLocal_60))
					{
						unk_0x38F8F1A1A827D16F(0, 0);
					}
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 9000, 0, 2);
					unk_0xFC5999E8B820470E(0, vLocal_104, 250f, -1, 0, 0);
					unk_0x1B16DD5C115FE009(iLocal_103);
					unk_0xAB30B1CF01A198C1(iLocal_60, iLocal_103);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_103);
					unk_0xE9B3D12A64CC7C1A(iLocal_60, true);
					if (!iLocal_128 && !iLocal_122)
					{
						if (unk_0x42111BD51D233AAB())
						{
							func_101();
						}
					}
				}
			}
		}
		system::wait(0);
		if (unk_0xA6DECE14FC9A8C51(iLocal_64))
		{
			unk_0xE30CF11C0EE14316(&iLocal_64);
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_63))
		{
			unk_0xE30CF11C0EE14316(&iLocal_63);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_62))
		{
			unk_0x3A703774620FDB42(&iLocal_62);
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_65))
		{
			unk_0xE30CF11C0EE14316(&iLocal_65);
		}
	}
	if (iLocal_335 != -1)
	{
		if (unk_0xA12FA3F7428EE798(iLocal_335))
		{
			unk_0x7DC528E86B55C67E(iLocal_335);
		}
		iLocal_335 = -1;
	}
	if (func_186())
	{
		unk_0xC1CEF375B44856F4(1);
		unk_0x94BD6F0436473406(1f);
	}
	func_36(&uLocal_336, 0, 0);
	func_105(0, 1, 1, 0);
	func_276(-1);
	func_271(&uLocal_349, 0);
	if (iLocal_117 != 0)
	{
		unk_0x15AAE2A89BBE596D(iLocal_117);
	}
	unk_0x96A3D9A8A4C7AFD4();
}

void func_271(var uParam0, bool bParam1)//Position - 0xDC03
{
	int iVar0;
	
	if (!bParam1)
	{
		func_273(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_272(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_272(var uParam0)//Position - 0xDC46
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_273(var uParam0)//Position - 0xDC5F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 30))
		{
			func_274(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_274(var uParam0)//Position - 0xDC99
{
	func_275(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_275(int iParam0, char* sParam1, int iParam2)//Position - 0xDCB0
{
	if (unk_0xC80D31E4B587871C(iParam0, 30))
	{
		switch (func_211(iParam0))
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

void func_276(int iParam0)//Position - 0xDD70
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_187();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_186())
	{
		func_281(iParam0);
		unk_0x218409883979C46E(0, 0);
		Global_104546 = unk_0x53C562FD2B9E3AB0();
		func_280(30000);
		StringCopy(&cVar0, func_279(Global_104544, 1), 64);
		if (func_278(Global_104544) > 0)
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
	func_277(&Global_25292);
	Global_104545 = 0;
	func_224(-1);
}

void func_277(var uParam0)//Position - 0xDE25
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

int func_278(int iParam0)//Position - 0xDE62
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

char* func_279(int iParam0, bool bParam1)//Position - 0xDF13
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

void func_280(int iParam0)//Position - 0xE15C
{
	Global_36412 = (unk_0x53C562FD2B9E3AB0() + iParam0);
}

void func_281(int iParam0)//Position - 0xE16E
{
	func_282(iParam0, 0, func_287(iParam0));
}

void func_282(int iParam0, int iParam1, int iParam2)//Position - 0xE183
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_241();
	func_285(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_284(iParam0, &uVar0);
	Var1 = { func_283(&uVar0) };
}

struct<16> func_283(var uParam0)//Position - 0xE1B2
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_235(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_234(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_233(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_236(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_239(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_237(*uParam0), 64);
	return Var0;
}

void func_284(int iParam0, var uParam1)//Position - 0xE281
{
	Global_104555.f_24965.f_43[iParam0] = *uParam1;
}

void func_285(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE299
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_237(*uParam0);
	iVar1 = func_239(*uParam0);
	iVar2 = func_236(*uParam0);
	iVar3 = func_235(*uParam0);
	iVar4 = func_234(*uParam0);
	iVar5 = func_233(*uParam0);
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
	iVar6 = func_232(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_232(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_286(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_286(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE41B
{
	func_247(uParam0, iParam1);
	func_246(uParam0, iParam2);
	func_245(uParam0, iParam3);
	func_243(uParam0, iParam5);
	func_244(uParam0, iParam4);
	func_242(uParam0, iParam6);
}

int func_287(int iParam0)//Position - 0xE453
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

void func_288(int iParam0, int iParam1)//Position - 0xE5F6
{
	if (iParam0 == -1)
	{
		iParam0 = func_187();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_278(iParam0))
	{
		func_298(iParam0, iParam1);
		if (!func_297(51))
		{
			func_294("RE_REWARD", 1, 0, 4000, 10000, func_180(), 0, 138, 0);
			func_293(51);
		}
		if (func_165(iParam0))
		{
			Global_104555.f_24965.f_2 = 3;
		}
		if (func_292(iParam0, iParam1) != 322)
		{
			func_289(func_292(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_104543 = iParam1;
		if (Global_104541 == 0)
		{
			if (((Global_104544 == 1 || Global_104544 == 5) || Global_104544 == 11) || Global_104544 == 25)
			{
				func_194(2);
			}
			else if ((Global_104544 == 26 || Global_104544 == 8) || Global_104544 == 17)
			{
				func_194(7);
			}
			else
			{
				func_194(1);
			}
		}
	}
}

void func_289(int iParam0, var uParam1, var uParam2)//Position - 0xE6FA
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
		func_66((891 + iParam0), 1, -1, 1);
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
		func_290();
	}
}

void func_290()//Position - 0xE7E2
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
		func_87(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_291() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_191();
				}
			}
		}
	}
}

int func_291()//Position - 0xECA3
{
	return Global_25233;
}

int func_292(int iParam0, int iParam1)//Position - 0xECAE
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

void func_293(int iParam0)//Position - 0xF022
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

void func_294(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xF064
{
	func_295(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_295(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0xF084
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
		func_296();
	}
}

void func_296()//Position - 0xF256
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

int func_297(int iParam0)//Position - 0xF376
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

void func_298(int iParam0, int iParam1)//Position - 0xF3B9
{
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_24965.f_8[iParam0]), iParam1);
}

