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
	vector3 vLocal_45 = { 0f, 0f, 0f };
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	struct<39> Local_55 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_56 = 0;
	var uLocal_57 = 16;
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
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	float fLocal_230 = 0f;
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
	var uLocal_241 = 21;
	var uLocal_242 = 6;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 1132396544;
	var uLocal_249 = 1132396544;
	var uLocal_250 = 1132396544;
	var uLocal_251 = 0;
	var uLocal_252 = -1082130432;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 8;
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
	var uLocal_312 = -1;
	var uLocal_313 = 1092616192;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	bool bLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	struct<7> Local_320 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
	int iLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	int iLocal_325 = 0;
	float fLocal_326 = 0f;
	float fLocal_327 = 0f;
	float fLocal_328 = 0f;
	bool bLocal_329 = 0;
	bool bLocal_330 = 0;
	int iLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
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
	var uLocal_374 = 3;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 1;
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
	var uLocal_395 = 2;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 13;
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
	var uLocal_413 = 13;
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
	var uLocal_622 = 13;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
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
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 13;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 13;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 13;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 13;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	struct<55> Local_919 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	int iLocal_931 = 0;
	int iLocal_932 = 0;
	int iLocal_933[3] = { 0, 0, 0 };
	int iLocal_934[2] = { 0, 0 };
	int iLocal_935 = 0;
	int iLocal_936[2] = { 0, 0 };
	int iLocal_937 = 0;
	int iLocal_938 = 0;
	int iLocal_939 = 0;
	int iLocal_940[2] = { 0, 0 };
	int iLocal_941[3] = { 0, 0, 0 };
	int iLocal_942[2] = { 0, 0 };
	int iLocal_943 = 0;
	int iLocal_944 = 0;
	int iLocal_945 = 0;
	struct<8> Local_946[3];
	struct<8> Local_947[2];
	struct<8> Local_948[2];
	int iLocal_949 = 0;
	int iLocal_950 = 0;
	var uLocal_951[3] = { 0, 0, 0 };
	var uLocal_952[2] = { 0, 0 };
	int iLocal_953 = 0;
	int iLocal_954 = 0;
	var uLocal_955 = 0;
	int iLocal_956 = 0;
	int iLocal_957 = 0;
	int iLocal_958 = 0;
	int iLocal_959 = 0;
	bool bLocal_960 = 0;
	int iLocal_961 = 0;
	bool bLocal_962 = 0;
	int iLocal_963 = 0;
	bool bLocal_964 = 0;
	bool bLocal_965 = 0;
	bool bLocal_966 = 0;
	bool bLocal_967 = 0;
	int iLocal_968 = 0;
	bool bLocal_969 = 0;
	bool bLocal_970 = 0;
	int iLocal_971 = 0;
	int iLocal_972 = 0;
	int iLocal_973 = 0;
	bool bLocal_974 = 0;
	bool bLocal_975 = 0;
	bool bLocal_976 = 0;
	bool bLocal_977 = 0;
	int iLocal_978 = 0;
	int iLocal_979 = 0;
	bool bLocal_980 = 0;
	int iLocal_981 = 0;
	bool bLocal_982 = 0;
	int iLocal_983 = 0;
	bool bLocal_984 = 0;
	int iLocal_985 = 0;
	bool bLocal_986 = 0;
	int iLocal_987 = 0;
	int iLocal_988 = 0;
	bool bLocal_989 = 0;
	int iLocal_990 = 0;
	int iLocal_991 = 0;
	bool bLocal_992 = 0;
	int iLocal_993 = 0;
	bool bLocal_994 = 0;
	int iLocal_995 = 0;
	int iLocal_996 = 0;
	int iLocal_997 = 0;
	int iLocal_998 = 0;
	int iLocal_999 = 0;
	bool bLocal_1000 = 0;
	int iLocal_1001 = 0;
	int iLocal_1002 = 0;
	int iLocal_1003 = 0;
	int iLocal_1004 = 0;
	int iLocal_1005 = 0;
	bool bLocal_1006 = 0;
	int iLocal_1007 = 0;
	int iLocal_1008 = 0;
	int iLocal_1009 = 0;
	bool bLocal_1010 = 0;
	int iLocal_1011 = 0;
	int iLocal_1012 = 0;
	int iLocal_1013 = 0;
	bool bLocal_1014 = 0;
	int iLocal_1015 = 0;
	int iLocal_1016 = 0;
	int iLocal_1017 = 0;
	int iLocal_1018 = 0;
	int iLocal_1019 = 0;
	int iLocal_1020 = 0;
	var uLocal_1021[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1022 = 0;
	var uLocal_1023 = 0;
	int iLocal_1024 = 0;
	int iLocal_1025 = 0;
	int iLocal_1026 = 0;
	int iLocal_1027 = 0;
	int iLocal_1028 = 0;
	int iLocal_1029 = 0;
	int iLocal_1030 = 0;
	int iLocal_1031 = 0;
	var uLocal_1032 = 0;
	int iLocal_1033 = 0;
	int iLocal_1034 = 0;
	int iLocal_1035 = 0;
	int iLocal_1036 = 0;
	int iLocal_1037 = 0;
	float fLocal_1038 = 0f;
	float fLocal_1039 = 0f;
	float fLocal_1040 = 0f;
	float fLocal_1041[5] = { 0f, 0f, 0f, 0f, 0f };
	float fLocal_1042[5] = { 0f, 0f, 0f, 0f, 0f };
	float fLocal_1043 = 0f;
	float fLocal_1044 = 0f;
	float fLocal_1045[3] = { 0f, 0f, 0f };
	var uLocal_1046[3] = { 0, 0, 0 };
	float fLocal_1047 = 0f;
	float fLocal_1048 = 0f;
	float fLocal_1049 = 0f;
	int iLocal_1050 = 0;
	float fLocal_1051 = 0f;
	vector3 vLocal_1052[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_1053[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_1054[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_1055 = { 0f, 0f, 0f };
	vector3 vLocal_1056 = { 0f, 0f, 0f };
	vector3 vLocal_1057 = { 0f, 0f, 0f };
	vector3 vLocal_1058 = { 0f, 0f, 0f };
	vector3 vLocal_1059 = { 0f, 0f, 0f };
	vector3 vLocal_1060 = { 0f, 0f, 0f };
	vector3 vLocal_1061 = { 0f, 0f, 0f };
	vector3 vLocal_1062 = { 0f, 0f, 0f };
	vector3 vLocal_1063 = { 0f, 0f, 0f };
	float fLocal_1064 = 0f;
	int iLocal_1065 = 0;
	int iLocal_1066 = 0;
	int iLocal_1067 = 0;
	int iLocal_1068 = 0;
	int iLocal_1069[2] = { 0, 0 };
	int iLocal_1070 = 0;
	int iLocal_1071[3] = { 0, 0, 0 };
	var uLocal_1072 = 0;
	int iLocal_1073 = 0;
	int iLocal_1074 = 0;
	int iLocal_1075 = 0;
	int iLocal_1076 = 0;
	int iLocal_1077 = 0;
	int iLocal_1078 = 0;
	int iLocal_1079 = 0;
	int iLocal_1080 = 0;
	int iLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	int iLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	int iLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	int iLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	int iLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	int iLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	int iLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	int iLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	int iLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	int iLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	bool bLocal_1111 = 0;
	var uLocal_1112 = 16;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = -1;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 1000;
	var uLocal_1287 = 1000;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 8;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 4;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 4;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 4;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 4;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 4;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 4;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 4;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 4;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	vector3 vLocal_1413 = { 0f, 0f, 0f };
	float fLocal_1414 = 0f;
	vector3 vLocal_1415 = { 0f, 0f, 0f };
	float fLocal_1416 = 0f;
	int iLocal_1417 = 0;
	int iLocal_1418 = 0;
	vector3 vLocal_1419 = { 0f, 0f, 0f };
	vector3 vLocal_1420 = { 0f, 0f, 0f };
	vector3 vLocal_1421 = { 0f, 0f, 0f };
	vector3 vLocal_1422 = { 0f, 0f, 0f };
	int iLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	int iLocal_1426 = 0;
	struct<12> Local_1427 = { 2, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	vLocal_45 = { 500f, 500f, 500f };
	uLocal_52 = unk_0x5354F72E0D8D7E53();
	iLocal_53 = unk_0x526A9A6B1B39C5F0();
	iLocal_228 = -1;
	fLocal_230 = 1f;
	iLocal_337 = 100;
	iLocal_338 = 3;
	iLocal_931 = 3;
	iLocal_1030 = 37000;
	iLocal_1036 = -1;
	fLocal_1038 = 90000f;
	fLocal_1047 = 135f;
	fLocal_1049 = 0f;
	fLocal_1051 = 0f;
	vLocal_1058 = { -1162,985f, -161,715f, -38,221f };
	vLocal_1059 = { -1327,63f, -266,202f, 38,221f };
	vLocal_1060 = { -1236,661f, -197,316f, 39,6313f };
	vLocal_1061 = { -1266,027f, -218,9829f, 41,44594f };
	vLocal_1063 = { -1237,731f, -189,5452f, 40,63728f };
	fLocal_1064 = 40f;
	iLocal_1073 = joaat("a_m_y_beachvesp_02");
	iLocal_1074 = joaat("fbi2");
	iLocal_1075 = joaat("s_m_m_highsec_01");
	iLocal_1076 = joaat("s_m_m_highsec_02");
	iLocal_1077 = joaat("washington");
	vLocal_1413 = { -1263,677f, -222,2767f, 41,446f };
	fLocal_1414 = 304,201f;
	vLocal_1415 = { -1507,252f, -934,3307f, 8,6562f };
	fLocal_1416 = 137,9228f;
	vLocal_1419 = { -1510,733f, -935,96f, 10,90214f };
	vLocal_1420 = { 15,07491f, -0,024198f, -71,86189f };
	vLocal_1421 = { -1510,878f, -936,1155f, 9,798549f };
	vLocal_1422 = { 4,686822f, -0,024198f, -72,45972f };
	if (unk_0x7D9C4B359376D38A(3))
	{
		unk_0x8810DC630928B398("ASS1_FAIL");
		func_521(&(Global_104555.f_19933.f_1), 1024);
		func_519();
		func_514();
	}
	unk_0xBC03901A15107317(1);
	iLocal_938 = unk_0xFC1458A37D98B502();
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
	}
	if (func_513())
	{
		if (func_512())
		{
			iLocal_978 = 1;
		}
		bLocal_967 = true;
	}
	else
	{
		bLocal_967 = false;
	}
	func_511();
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 32, false);
	}
	func_510();
	iLocal_229 = 0;
	Local_55 = { func_508(iLocal_229) };
	unk_0xDF1ACFD53102CEB0(iLocal_1075, 1);
	unk_0xDF1ACFD53102CEB0(iLocal_1076, 1);
	unk_0x3A257DFDA1E817FD();
	if (func_513())
	{
		bLocal_330 = true;
		iLocal_1029 = func_507();
		if (Global_87155)
		{
			if (iLocal_1029 <= 1)
			{
				iLocal_1029++;
			}
		}
		func_506();
		if (iLocal_1029 == 0)
		{
			if (iLocal_978)
			{
				func_504();
				while (!func_503())
				{
					system::wait(0);
				}
				iVar0 = func_452(-1523,174f, -924,6732f, 9,1221f, 53,0177f);
				if (((!unk_0x428C7026AD2721BA(unk_0x82FF3DFBC3965CC0(iVar0)) && !unk_0x849A8CFD71854E02(unk_0x82FF3DFBC3965CC0(iVar0))) && !unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(iVar0))) && !unk_0x8F1CCD9A61E026D8(iVar0))
				{
					unk_0xACE486395AA1867D(iVar0, 1084227584);
				}
				else
				{
					unk_0xC91FE17AD7353B70(&iVar0);
				}
			}
			func_451(-1510,181f, -946,9595f, 8,2738f, 10f, 1, 0);
		}
		else if (iLocal_1029 == 1)
		{
			if (iLocal_978)
			{
				func_504();
				while (!func_503())
				{
					system::wait(0);
				}
				iVar1 = func_452(-1266,405f, -219,1991f, 41,4459f, 304,8644f);
				if (((!unk_0x428C7026AD2721BA(unk_0x82FF3DFBC3965CC0(iVar1)) && !unk_0x849A8CFD71854E02(unk_0x82FF3DFBC3965CC0(iVar1))) && !unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(iVar1))) && !unk_0x8F1CCD9A61E026D8(iVar1))
				{
					unk_0xACE486395AA1867D(iVar1, 1084227584);
				}
				else
				{
					unk_0xC91FE17AD7353B70(&iVar1);
				}
			}
			func_451(-1266,173f, -214,0011f, 41,4459f, 310,0126f, 1, 0);
		}
		else if (iLocal_1029 == 2)
		{
			if (iLocal_978)
			{
				func_504();
				while (!func_503())
				{
					system::wait(0);
				}
				iVar2 = func_452(-1188,486f, -316,9884f, 36,6841f, 29,9702f);
				if (((!unk_0x428C7026AD2721BA(unk_0x82FF3DFBC3965CC0(iVar2)) && !unk_0x849A8CFD71854E02(unk_0x82FF3DFBC3965CC0(iVar2))) && !unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(iVar2))) && !unk_0x8F1CCD9A61E026D8(iVar2))
				{
					unk_0xACE486395AA1867D(iVar2, 1084227584);
				}
				else
				{
					unk_0xC91FE17AD7353B70(&iVar2);
				}
			}
			func_451(-1184,244f, -319,2575f, 36,7445f, 26,0711f, 1, 0);
		}
	}
	while (true)
	{
		unk_0x48D75120C879E65E("M_ASS1", 0);
		if (iLocal_968)
		{
			if (func_450())
			{
				func_449();
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(iLocal_938))
		{
			func_442();
			if (iLocal_931 < 10)
			{
				Local_320.f_6 = 1;
			}
			else
			{
				Local_320.f_6 = 5;
			}
			func_148();
			func_96();
			if (iLocal_983)
			{
				func_91();
			}
			if (!bLocal_966)
			{
				if (iLocal_931 >= 9 && iLocal_931 < 11)
				{
					func_87(&uLocal_1023, &fLocal_1038, &bLocal_965, &bLocal_966);
				}
			}
			func_55();
			func_53();
			if (((iLocal_959 || bLocal_964) && iLocal_931 < 11) || (bLocal_994 && iLocal_931 < 11))
			{
				if (!func_52(&iLocal_1102) && iLocal_931 > 8)
				{
					func_49(&iLocal_1102);
				}
				else if (iLocal_931 < 8 || func_46(&iLocal_1102) > 5f)
				{
					if (iLocal_937 == 1)
					{
						func_31(1);
					}
					else if (iLocal_937 == 5)
					{
						func_31(5);
					}
					else
					{
						func_31(2);
					}
				}
				else if (func_46(&iLocal_1102) > 2,5f)
				{
					if (!iLocal_995)
					{
						if (!bLocal_1014)
						{
							iLocal_943 = func_30(70f, 0);
						}
						else
						{
							iLocal_943 = func_30(70f, 1);
						}
						if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_943))
							{
								unk_0xB8E08BD5B184DF4E(iLocal_943);
								if (iLocal_937 == 1)
								{
									if (unk_0x6ADD12BF4D6D2587(iLocal_1067))
									{
										if (!unk_0x88DDBE9908752BF0(iLocal_943, 0))
										{
											unk_0x2C85E478535743C1(iLocal_943, iLocal_1067, iLocal_1067, 2f, 0, 1056964608, 1082130432, 1, 0, -957453492);
										}
									}
									if (unk_0x6ADD12BF4D6D2587(iLocal_943) && !unk_0x3AB6A1A9084FB0A4(iLocal_943))
									{
										func_28(iLocal_943, 6, "OJAvaGUARD2");
										func_27(&uLocal_1112, "OJASAUD", "OJASva_CAR2", "OJASva_CAR2_1", 9, 0, 0);
									}
								}
								else if (iLocal_937 == 8)
								{
									if (unk_0x6ADD12BF4D6D2587(iLocal_1065) && unk_0xB8DE76287EDC4957(iLocal_1065, 0))
									{
										unk_0x2C85E478535743C1(iLocal_943, iLocal_1065, iLocal_1065, 2f, 0, 1056964608, 1082130432, 1, 0, -957453492);
									}
									func_28(func_25(25f), 6, "OJAvaGUARD2");
									func_27(&uLocal_1112, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
								}
								else
								{
									unk_0x9627C22EF3C3F4D6(iLocal_943, unk_0xFC1458A37D98B502(), -1, 0);
									func_2(iLocal_943);
								}
							}
						}
						iLocal_995 = 1;
					}
				}
			}
			func_1();
		}
		system::wait(0);
	}
}

void func_1()//Position - 0x723
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(iLocal_938, 0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(iLocal_938, 0);
		if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("towtruck") || unk_0x82FF3DFBC3965CC0(iVar0) == joaat("towtruck2"))
		{
			bLocal_969 = true;
		}
	}
	else
	{
		bLocal_969 = false;
	}
	if (bLocal_969)
	{
		if (unk_0x03760B63FE11B718(iVar0, iLocal_1065))
		{
			unk_0x8BD98D78A3EE499E(iVar0, iLocal_1065);
		}
	}
}

void func_2(int iParam0)//Position - 0x787
{
	struct<6> Var0;
	
	if (!iLocal_1005)
	{
		if ((unk_0x6ADD12BF4D6D2587(iParam0) && !unk_0x3AB6A1A9084FB0A4(iParam0)) && func_23(iParam0, 1) < 50f)
		{
			if (!func_22())
			{
				if (iLocal_937 == 4)
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1112, "OJASAUD", "OJASva_LIMO", 9, 0, 0, 0);
				}
				else if (iLocal_937 == 8)
				{
					func_28(func_25(25f), 6, "OJAvaGUARD2");
					func_27(&uLocal_1112, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
				}
				else
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1112, "OJASAUD", "OJASva_GTFO3", 9, 0, 0, 0);
				}
				iLocal_1005 = 1;
			}
			else
			{
				Var0 = { func_5() };
				if (!unk_0x74C475EB8E73D398(&Var0, "OJAS_FEED"))
				{
					func_3();
				}
			}
		}
	}
}

void func_3()//Position - 0x85A
{
	Global_14622 = 0;
	func_4();
}

void func_4()//Position - 0x86A
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

struct<6> func_5()//Position - 0x8C1
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		return Global_15375;
	}
	return Var0;
}

bool func_6(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8E5
{
	func_21(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_7(sParam2, iParam3, 0);
}

int func_7(char* sParam0, int iParam1, bool bParam2)//Position - 0x933
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
					func_4();
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
		if (func_20(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_19();
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
				func_12();
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
				if (func_11())
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
			if (func_10())
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
			func_9();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_8();
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
		func_4();
	}
	return 0;
}

void func_8()//Position - 0xBFF
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

void func_9()//Position - 0xC30
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

int func_10()//Position - 0xCC5
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_11()//Position - 0xCEC
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

void func_12()//Position - 0xD85
{
	if (func_18(14))
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

int func_13()//Position - 0xE27
{
	func_14();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_14()//Position - 0xE40
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_17(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_16(unk_0xFC1458A37D98B502());
			if (func_15(iVar0) && (!func_18(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_15(Global_104555.f_2353.f_539.f_4301))
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

bool func_15(int iParam0)//Position - 0xF3D
{
	return iParam0 < 3;
}

int func_16(int iParam0)//Position - 0xF49
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_17(int iParam0)//Position - 0xF86
{
	if (func_15(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_18(int iParam0)//Position - 0xFB0
{
	return Global_35861 == iParam0;
}

void func_19()//Position - 0xFBE
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

bool func_20(int iParam0, int iParam1)//Position - 0x1015
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

void func_21(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1050
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

int func_22()//Position - 0x10A6
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

float func_23(int iParam0, bool bParam1)//Position - 0x10C8
{
	return func_24(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B()), iParam0, bParam1);
}

float func_24(int iParam0, int iParam1, bool bParam2)//Position - 0x10E0
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

int func_25(float fParam0)//Position - 0x113E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_941[iVar0]))
		{
			if (func_26(iLocal_941[iVar0], vLocal_1057, 1) < fParam0)
			{
				return iLocal_941[iVar0];
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_942[iVar0]))
		{
			if (func_26(iLocal_942[iVar0], vLocal_1057, 1) < fParam0)
			{
				return iLocal_942[iVar0];
			}
		}
		iVar0++;
	}
	return 0;
}

float func_26(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x11CB
{
	if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		return -1f;
	}
	return unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(iParam0, 1), vParam1, bParam2);
}

int func_27(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x11F5
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 1;
	Global_16749 = 0;
	Global_16753 = 0;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 0;
	return func_7(sParam2, iParam4, 0);
}

void func_28(int iParam0, int iParam1, char* sParam2)//Position - 0x1249
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		func_29(&uLocal_1112, iParam1, iParam0, sParam2, 0, 1);
	}
}

void func_29(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x126A
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

int func_30(int iParam0, bool bParam1)//Position - 0x1305
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	
	fVar2 = iParam0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_941[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0x88DDBE9908752BF0(iLocal_941[iVar0], 0)))
			{
				fVar1 = func_23(iLocal_941[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_941[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_942[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0x88DDBE9908752BF0(iLocal_942[iVar0], 0)))
			{
				fVar1 = func_23(iLocal_942[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_942[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_940[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0x88DDBE9908752BF0(iLocal_942[iVar0], 0)))
			{
				fVar1 = func_23(iLocal_940[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_940[iVar0];
				}
			}
		}
		iVar0++;
	}
	return uVar3;
}

void func_31(int iParam0)//Position - 0x143F
{
	char* sVar0;
	
	if (iLocal_968 == 0)
	{
		iLocal_937 = iParam0;
		func_3();
		unk_0x84CDD933AFA470D2();
		unk_0x8810DC630928B398("ASS1_FAIL");
		if (func_45())
		{
			func_43(-1698,51f, -1067,768f, 12,1417f, 316,3502f);
		}
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			Global_92833.f_12[0] = 1;
		}
		else
		{
			Global_92833.f_12[0] = 0;
		}
		switch (iLocal_937)
		{
			case 0:
				sVar0 = "ASS_VA_FAILED";
				break;
			
			case 1:
				sVar0 = "ASS_VA_VEHICLE";
				break;
			
			case 2:
			case 5:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 8:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 3:
				sVar0 = "ASS_VA_WANTED";
				break;
			
			case 6:
				sVar0 = "ASS_VA_ESCAPED";
				break;
			
			case 7:
				sVar0 = "ASS_VA_ABAND";
				break;
			
			case 9:
				sVar0 = "ASS_VA_LATTACK";
				break;
		}
		iLocal_968 = 1;
		func_41(sVar0);
		func_32(0);
	}
}

void func_32(int iParam0)//Position - 0x1531
{
	int iVar0;
	
	if (Global_104555.f_9055 || func_40(0))
	{
		iVar0 = func_39();
		if (!func_33(iVar0))
		{
			return;
		}
		unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 5);
		Global_92869 = iParam0;
	}
}

int func_33(int iParam0)//Position - 0x1576
{
	int iVar0;
	int iVar1;
	
	func_38();
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0xFFC4F532496D6427(5000);
	}
	iVar0 = Global_83730[iParam0 /*5*/];
	iVar1 = Global_71125.f_109[iVar0 /*4*/];
	func_37(iVar1, 1);
	unk_0xEC27A5F45CFF069F(unk_0x9EB17624F44A8DA4());
	unk_0x54F90CB32317E720(unk_0x9EB17624F44A8DA4());
	func_34(&(Global_104555.f_2353.f_539), iVar1);
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

void func_34(var uParam0, int iParam1)//Position - 0x168D
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
			if (!func_36(Global_104555.f_18503[iVar0], &vVar2, &fVar3))
			{
				Global_104555.f_18503[iVar0] = 318;
				func_35(&(uParam0->f_2276[iVar0]));
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

void func_35(var uParam0)//Position - 0x1856
{
	*uParam0 = -15;
}

int func_36(int iParam0, var uParam1, float fParam2)//Position - 0x1864
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
			return func_36(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_36(8, uParam1, fParam2);
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

void func_37(int iParam0, bool bParam1)//Position - 0x21D3
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

void func_38()//Position - 0x2211
{
	Global_92868 = 1;
	if (unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1))
	{
		if (unk_0xAB019B170BF1309C(&Global_71088))
		{
			switch (func_13())
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
			switch (func_13())
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

int func_39()//Position - 0x22FC
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

bool func_40(bool bParam0)//Position - 0x2331
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_41(char* sParam0)//Position - 0x235C
{
	func_521(&(Global_104555.f_19933.f_1), 1024);
	if (!unk_0x8C1C362CA8299475(sParam0))
	{
		func_42(sParam0);
	}
}

void func_42(char* sParam0)//Position - 0x2384
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

void func_43(vector3 vParam0, float fParam1)//Position - 0x23C3
{
	if (func_44(Global_71096, 0f, 0f, 0f, 0))
	{
		Global_71096 = { vParam0 };
		Global_71099 = fParam1;
	}
}

bool func_44(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x23EF
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_45()//Position - 0x2436
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()) || unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
		{
			return 1;
		}
	}
	return 0;
}

float func_46(int iParam0)//Position - 0x2469
{
	if (func_52(iParam0))
	{
		if (func_48(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_47(unk_0xC80D31E4B587871C(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_47(bool bParam0)//Position - 0x24A8
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

bool func_48(var uParam0)//Position - 0x2500
{
	return unk_0xC80D31E4B587871C(*uParam0, 2);
}

void func_49(int iParam0)//Position - 0x2510
{
	if (!func_52(iParam0))
	{
		func_50(iParam0);
	}
}

void func_50(int iParam0)//Position - 0x2528
{
	func_51(iParam0, 0f);
}

void func_51(int iParam0, float fParam1)//Position - 0x2537
{
	iParam0->f_1 = (func_47(unk_0xC80D31E4B587871C(*iParam0, 4)) - fParam1);
	unk_0x872F1C1F8587CCC7(iParam0, 1);
	unk_0x0EE72DB1CD8A3B86(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_52(int iParam0)//Position - 0x2565
{
	return unk_0xC80D31E4B587871C(*iParam0, 1);
}

void func_53()//Position - 0x2575
{
	if (func_54(&iLocal_937))
	{
		func_31(6);
	}
}

int func_54(int iParam0)//Position - 0x258C
{
	float fVar0;
	bool bVar1;
	
	if (iLocal_931 > 11)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_939))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_1065, 0))
			{
				if (unk_0xA8D0477084E86A92(iLocal_939, iLocal_1065, 0))
				{
					bVar1 = true;
				}
			}
		}
		if (bLocal_989)
		{
			fVar0 = 100f;
		}
		else
		{
			fVar0 = 200f;
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_939))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_939))
			{
				if (func_24(iLocal_938, iLocal_939, 1) >= fVar0)
				{
					if (bVar1)
					{
						if (unk_0xB8DE76287EDC4957(iLocal_1065, 0))
						{
							if (unk_0xEC211A86AB3726B6(iLocal_1065) || !unk_0x841ED61760A7D07B(iLocal_1065))
							{
								*iParam0 = 6;
								return 1;
							}
						}
					}
					else if (unk_0xEC211A86AB3726B6(iLocal_939))
					{
						*iParam0 = 6;
						return 1;
					}
				}
				else if (unk_0xA6DECE14FC9A8C51(iLocal_950))
				{
					if (func_24(iLocal_938, iLocal_939, 1) >= (fVar0 * 0,5f))
					{
						if (!unk_0xD81F878E5EB092AD(iLocal_950))
						{
							unk_0x0A8FD2D5529E1737(iLocal_950, 1);
						}
					}
					else if (unk_0xD81F878E5EB092AD(iLocal_950))
					{
						unk_0x0A8FD2D5529E1737(iLocal_950, 0);
					}
				}
			}
		}
	}
	return 0;
}

void func_55()//Position - 0x2692
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_939))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_939))
		{
			func_56(&uLocal_1277, iLocal_939, 0, 0, 1, 1, 1);
		}
	}
}

void func_56(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x26BE
{
	func_57(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_57(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x26D8
{
	func_58(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_58(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x26F5
{
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		func_86(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_59(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_59(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x272D
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
	if (func_85(iVar0))
	{
		func_84();
	}
	if (func_83(iParam1) && unk_0xDE3C98B57A41E603(iParam1))
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
			if (func_78(uParam0, bParam5, bParam7, 0))
			{
				func_75(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_64(iVar0))
				{
					if ((unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0)) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if ((iVar1 && !unk_0xF491DD47B88AA84E()) && uParam6)
						{
							if (!func_85(iVar0))
							{
								func_63(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
								{
									func_62(1);
								}
							}
						}
					}
				}
			}
			else if (func_64(iVar0))
			{
				if (unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0))
				{
					if (((unk_0x841ED61760A7D07B(iParam1) && iVar1) && !unk_0xF491DD47B88AA84E()) && uParam6)
					{
						if (!func_85(iVar0))
						{
							func_63(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
							{
								func_62(1);
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
				if (func_85(sParam3))
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
						func_86(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(6) == 3 || unk_0x8E8C94609BA4BEA9(6) == 4)
					{
						func_86(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(4) == 3 || unk_0x8E8C94609BA4BEA9(4) == 4)
					{
						func_86(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(5) == 3 || unk_0x8E8C94609BA4BEA9(5) == 4)
					{
						func_86(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(2) == 3 || unk_0x8E8C94609BA4BEA9(2) == 4)
					{
						func_86(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x60584F41FBCE28CD() == 3 || unk_0x60584F41FBCE28CD() == 4)
				{
					func_86(uParam0, iVar0, 1);
				}
			}
			if (!func_78(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_61(uParam0))
				{
					func_60(uParam0);
				}
			}
		}
	}
	else
	{
		func_86(uParam0, iVar0, 0);
	}
}

void func_60(var uParam0)//Position - 0x2A9A
{
	if (func_83(unk_0xFC1458A37D98B502()))
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

int func_61(var uParam0)//Position - 0x2B03
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

int func_62(bool bParam0)//Position - 0x2B2E
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

void func_63(char* sParam0, int iParam1)//Position - 0x2BD8
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

int func_64(char* sParam0)//Position - 0x2BEF
{
	if (!func_65(1, 1, 0))
	{
		if ((!unk_0xAB019B170BF1309C(sParam0) && func_85(sParam0)) || func_85("CMN_HINT"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		return 0;
	}
	switch (Global_35861)
	{
		case 0:
		case 3:
			if (func_62(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_62(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_62(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_65(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2C88
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
	if (func_74(0))
	{
		return 0;
	}
	if (func_73())
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
	if ((func_72() || func_71(Global_4456448.f_143970)) || func_70())
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if ((unk_0x841136DE070DD9F6(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), func_69(unk_0xFC1458A37D98B502(), 0)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 562680400 && func_69(unk_0xFC1458A37D98B502(), 0) != -1)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 1181327175 && func_69(unk_0xFC1458A37D98B502(), 0) != -1))
			{
				return 0;
			}
		}
	}
	if (func_66(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_66(int iParam0)//Position - 0x2EB3
{
	if (iParam0 != func_68())
	{
		if (func_67(iParam0, 1, 1))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x9EB17624F44A8DA4()) && func_67(iParam0, 1, 0))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

int func_67(int iParam0, bool bParam1, bool bParam2)//Position - 0x2F19
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

int func_68()//Position - 0x2F63
{
	return -1;
}

int func_69(int iParam0, int iParam1)//Position - 0x2F6C
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

var func_70()//Position - 0x2FF1
{
	return Global_2447174.f_16;
}

bool func_71(int iParam0)//Position - 0x2FFF
{
	return iParam0 == 51;
}

var func_72()//Position - 0x300C
{
	return Global_2447174.f_15;
}

bool func_73()//Position - 0x301A
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

int func_74(int iParam0)//Position - 0x302F
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

void func_75(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x3089
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
		func_86(uParam0, 0, 0);
	}
	if (func_44(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x52C56492660097C7(iParam1))
		{
			iVar0 = unk_0x07F64790D10D1DB5(iParam1);
			if (!unk_0x88DDBE9908752BF0(iVar0, 0))
			{
				if (unk_0x1417A5CC924DE120(iVar0))
				{
					if (!func_76())
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

bool func_76()//Position - 0x3199
{
	return func_77(unk_0x9EB17624F44A8DA4());
}

int func_77(int iParam0)//Position - 0x31A9
{
	if (unk_0x82FF3DFBC3965CC0(unk_0x25D049AAC4603E65(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_78(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x31C8
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
					if (func_82(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_81(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_81(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_82(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_61(uParam0))
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
						if (!func_82(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_81(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_81(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_82(bParam1, bParam2, bParam3))
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
					if (!func_82(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_81(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_81(bParam1, bParam2, bParam3) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
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
				else if (!func_82(bParam1, bParam2, bParam3))
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
						if (func_80(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_79(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) || func_79(bParam1, bParam2, bParam3))
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
					else if (func_80(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_61(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_65(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_84();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_79(bool bParam0, bool bParam1, bool bParam2)//Position - 0x3534
{
	if (!func_65(bParam0, bParam1, bParam2))
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

int func_80(bool bParam0, bool bParam1, bool bParam2)//Position - 0x3586
{
	if (!func_65(bParam0, bParam1, bParam2))
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

int func_81(bool bParam0, bool bParam1, bool bParam2)//Position - 0x35CF
{
	if (!func_65(bParam0, bParam1, bParam2))
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

int func_82(bool bParam0, bool bParam1, bool bParam2)//Position - 0x362E
{
	if (!func_65(bParam0, bParam1, bParam2))
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

int func_83(int iParam0)//Position - 0x3684
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

void func_84()//Position - 0x36DF
{
	unk_0x872F1C1F8587CCC7(&Global_2324, 4);
}

int func_85(char* sParam0)//Position - 0x36EF
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_86(var uParam0, int iParam1, int iParam2)//Position - 0x3702
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
		if (func_85(uParam0->f_3))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
	if (!unk_0x8C1C362CA8299475(sVar0))
	{
		if (func_85(sVar0))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
}

void func_87(var uParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0x37DF
{
	float fVar0;
	
	if (!*bParam2)
	{
		*uParam0 = unk_0x53C562FD2B9E3AB0();
		*fParam1 = (*fParam1 / 1000f);
		if (!func_52(&iLocal_1099))
		{
			func_49(&iLocal_1099);
		}
		*bParam2 = 1;
	}
	if (func_52(&iLocal_1099))
	{
		fVar0 = func_46(&iLocal_1099);
		if (fVar0 >= *fParam1)
		{
			*bParam3 = 1;
		}
	}
	iLocal_1033 = system::round((*fParam1 - fVar0));
	iLocal_1033 *= 1000;
	if (iLocal_1033 < 63000)
	{
		iLocal_972 = 1;
	}
	if (iLocal_1033 < 65000)
	{
		iLocal_979 = 1;
	}
	if (iLocal_1033 < iLocal_1030)
	{
		iLocal_1002 = 1;
	}
	if (!unk_0x1CF95440F1970B4F("SCRIPT\ASSASSINATION_MULTI", false, -1))
	{
		bLocal_1111 = false;
	}
	else
	{
		bLocal_1111 = true;
	}
	if (iLocal_1033 < 30000)
	{
		iLocal_993 = 1;
		if (bLocal_1111)
		{
			if (func_52(&iLocal_1108))
			{
				if (func_46(&iLocal_1108) > 1f)
				{
					unk_0x4AFBCBFDE748D4E0(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
					func_50(&iLocal_1108);
				}
			}
			else
			{
				unk_0x4AFBCBFDE748D4E0(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
				func_49(&iLocal_1108);
			}
		}
		func_88(iLocal_1033, "ASS_VA_TIMERED", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_88(iLocal_1033, "ASS_VA_TIMELEFT", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
}

void func_88(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x391C
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_90(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_89(7, iVar0);
		Global_1359035.f_4388[iVar0] = iParam0;
		StringCopy(&(Global_1359035.f_4388.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_4388.f_172[iVar0] = iParam2;
		Global_1359035.f_4388.f_216[iVar0] = iParam3;
		Global_1359035.f_4388.f_183[iVar0] = iParam4;
		Global_1359035.f_4388.f_194[iVar0] = iParam5;
		Global_1359035.f_4388.f_249[iVar0] = iParam6;
		Global_1359035.f_4388.f_260[iVar0] = iParam7;
		Global_1359035.f_4388.f_205[iVar0] = iParam8;
		Global_1359035.f_4388.f_314[iVar0] = iParam9;
		Global_1359035.f_4388.f_325[iVar0] = iParam10;
		Global_1359035.f_4388.f_357[iVar0] = iParam11;
		Global_1359035.f_4388.f_238[iVar0] = iParam12;
		Global_1359035.f_4388.f_271[iVar0] = iParam13;
		Global_1359035.f_4388.f_368[iVar0] = iParam14;
		Global_1359035.f_4388.f_379[iVar0] = iParam15;
		Global_1359035.f_4388.f_390[iVar0] = iParam16;
	}
}

void func_89(int iParam0, int iParam1)//Position - 0x3A6A
{
	unk_0x872F1C1F8587CCC7(&(Global_1359035.f_6119[iParam0]), iParam1);
}

bool func_90(int iParam0, int iParam1)//Position - 0x3A83
{
	return unk_0xC80D31E4B587871C(Global_1359035.f_6119[iParam0], iParam1);
}

void func_91()//Position - 0x3A9C
{
	int iVar0;
	
	switch (iLocal_1027)
	{
		case 0:
			if (!func_22())
			{
				if (!unk_0x191BE1BC8F26F3C1(iLocal_941[0], 0))
				{
					unk_0xCB3D88C918AA637C(iLocal_941[0]);
				}
				if (!unk_0x191BE1BC8F26F3C1(iLocal_941[1], 0))
				{
					unk_0xCB3D88C918AA637C(iLocal_941[1]);
				}
				iVar0 = func_95();
				if (bLocal_982)
				{
					if (!iLocal_998)
					{
						func_28(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1112, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
						{
							iLocal_998 = 1;
						}
					}
				}
				else if (!bLocal_989 && unk_0x3AB6A1A9084FB0A4(iLocal_939))
				{
					if (!iLocal_998)
					{
						func_28(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1112, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
						{
							iLocal_998 = 1;
						}
					}
				}
				if (!func_52(&iLocal_1087))
				{
					func_49(&iLocal_1087);
				}
				else
				{
					func_50(&iLocal_1087);
				}
				iLocal_1027 = 1;
			}
			break;
		
		case 1:
			iLocal_1027 = 2;
			break;
		
		case 2:
			if (iLocal_998 || !unk_0x3AB6A1A9084FB0A4(iLocal_939))
			{
				if (!func_22() && !bLocal_982)
				{
					if (!iLocal_996)
					{
						iVar0 = func_95();
						func_28(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1112, "OJASAUD", "OJASva_LOOK", 9, 0, 0, 0))
						{
							iLocal_996 = 1;
						}
					}
					else if (!bLocal_1006 && unk_0x3AB6A1A9084FB0A4(iLocal_939))
					{
						iVar0 = func_95();
						func_94(iVar0);
					}
				}
			}
			else if (bLocal_982)
			{
				if (!iLocal_998)
				{
					func_28(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1112, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
					{
						iLocal_998 = 1;
					}
				}
			}
			else if (!bLocal_989)
			{
				if (!iLocal_998)
				{
					func_28(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1112, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
					{
						iLocal_998 = 1;
					}
				}
			}
			if (func_93(iLocal_938))
			{
				fLocal_1048 = 2,5f;
			}
			else
			{
				fLocal_1048 = 5f;
			}
			if (func_52(&iLocal_1087))
			{
				if ((func_46(&iLocal_1087) > fLocal_1048 && func_92()) || unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
				{
					func_3();
					if (!iLocal_959)
					{
						iLocal_959 = 1;
						iLocal_1003 = 1;
					}
					iLocal_983 = 0;
				}
			}
			break;
		
		case 3:
			break;
	}
}

int func_92()//Position - 0x3CE6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_941[iVar0]) && !unk_0x191BE1BC8F26F3C1(iLocal_941[iVar0], 0))
		{
			unk_0x2217C45231E6A537(iLocal_941[iVar0], 85, 1);
			if (unk_0x46D8E79A1B95ACE2(iLocal_941[iVar0], unk_0xFC1458A37D98B502()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_942[iVar0]) && !unk_0x191BE1BC8F26F3C1(iLocal_942[iVar0], 0))
		{
			unk_0x2217C45231E6A537(iLocal_942[iVar0], 85, 1);
			if (unk_0x46D8E79A1B95ACE2(iLocal_942[iVar0], unk_0xFC1458A37D98B502()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_940[iVar0]) && !unk_0x191BE1BC8F26F3C1(iLocal_940[iVar0], 0))
		{
			unk_0x2217C45231E6A537(iLocal_940[iVar0], 85, 1);
			if (unk_0x46D8E79A1B95ACE2(iLocal_940[iVar0], unk_0xFC1458A37D98B502()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_93(int iParam0)//Position - 0x3DF1
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x0F3033474C49912D(iParam0, -1252,302f, -213,9033f, 35,11222f, -1205,808f, -183,0681f, 45,32541f, 51f, 0, 1, 0) && !unk_0x0F3033474C49912D(iParam0, -1250,809f, -192,5218f, 35,33125f, -1231,866f, -161,3655f, 45,02535f, 12,8f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_94(int iParam0)//Position - 0x3E69
{
	if (!bLocal_1006)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_939) && unk_0x3AB6A1A9084FB0A4(iLocal_939))
		{
			if (!func_22())
			{
				if ((unk_0x6ADD12BF4D6D2587(iParam0) && !unk_0x3AB6A1A9084FB0A4(iParam0)) && func_23(iParam0, 1) < 75f)
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1112, "OJASAUD", "OJAS_FEED", 9, 0, 0, 0);
					bLocal_1006 = true;
				}
			}
		}
	}
}

int func_95()//Position - 0x3EDE
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_941[iVar1]) && !unk_0x3AB6A1A9084FB0A4(iLocal_941[iVar1]))
		{
			iVar0 = iLocal_941[iVar1];
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_942[iVar1]) && !unk_0x3AB6A1A9084FB0A4(iLocal_942[iVar1]))
			{
				iVar0 = iLocal_942[iVar1];
			}
			iVar1++;
		}
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_940[iVar1]) && !unk_0x3AB6A1A9084FB0A4(iLocal_940[iVar1]))
			{
				iVar0 = iLocal_940[iVar1];
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_96()//Position - 0x3FA2
{
	func_103();
	if (!iLocal_983)
	{
		if (!iLocal_959)
		{
			if (func_97(&iLocal_937))
			{
				iLocal_959 = 1;
			}
		}
	}
}

int func_97(int iParam0)//Position - 0x3FCA
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (!iLocal_959)
	{
		if (iLocal_993 && !bLocal_962)
		{
			if (func_102(&iLocal_937))
			{
				*iParam0 = 8;
				return 1;
			}
		}
		if (unk_0xC931425E2B416A2F(iLocal_938, 4))
		{
			if (unk_0x08765A6321A42CA1(iLocal_938))
			{
				fVar1 = func_26(unk_0xFC1458A37D98B502(), -1230,599f, -196,5408f, 38,1528f, 1);
				unk_0x5AD8564EFD5BEC2E(iLocal_938, &iVar2, 1);
				if ((((fVar1 > 15f && iVar2 == joaat("weapon_sniperrifle")) || iVar2 == joaat("weapon_heavysniper")) || iVar2 == joaat("weapon_remotesniper")) || iVar2 == joaat("weapon_marksmanrifle"))
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_939))
					{
						iLocal_983 = 1;
						iLocal_981 = 1;
					}
				}
				else if (fVar1 < 50f)
				{
					return 1;
				}
			}
		}
		if ((func_101(iLocal_1065) || func_100(iLocal_1065)) || (unk_0x6ADD12BF4D6D2587(iLocal_1065) && unk_0xEBE499597C718EB8(iLocal_1065, iLocal_938, 1)))
		{
			return 1;
		}
		if (func_101(iLocal_1066) || (unk_0x6ADD12BF4D6D2587(iLocal_1066) && unk_0xEBE499597C718EB8(iLocal_1066, iLocal_938, 1)))
		{
			return 1;
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_1065) && !unk_0x191BE1BC8F26F3C1(iLocal_1065, 0))
		{
			if (unk_0xA8D0477084E86A92(iLocal_938, iLocal_1065, 0))
			{
				unk_0x6862DF5504F63883(iLocal_1065, 1);
				unk_0x44E1F9DBBF6D172A(iLocal_1065);
				return 1;
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_1065))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_1065, 0))
			{
				if (unk_0x88DDBE9908752BF0(iLocal_938, 0))
				{
					iVar0 = unk_0xDFD115BB10FE46A9(iLocal_938, 0);
					if (unk_0x9A213A2345825783(iVar0, iLocal_1065) || (bLocal_969 && unk_0x03760B63FE11B718(iVar0, iLocal_1065)))
					{
						*iParam0 = 4;
						return 1;
					}
				}
			}
		}
		if (iLocal_931 == 12)
		{
			if (unk_0xB8DE76287EDC4957(iLocal_1065, 0))
			{
				if (func_24(iLocal_938, iLocal_1065, 1) <= 15f)
				{
					return 1;
				}
			}
		}
		if ((iLocal_933[0] == 2 || iLocal_933[1] == 2) || iLocal_933[2] == 2)
		{
			if (func_99())
			{
				return 1;
			}
		}
		if (iLocal_931 < 11)
		{
			if (unk_0x4E69510C44147A5C(-1, vLocal_1063, fLocal_1064))
			{
				return 1;
			}
		}
		else if (unk_0x4E69510C44147A5C(-1, vLocal_1063, fLocal_1064))
		{
			if (func_98())
			{
				iLocal_1013 = 1;
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_98()//Position - 0x422F
{
	if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1272,181f, -241,2545f, 62,90406f, -1300,203f, -201,3968f, 40,40408f, 44,5f, 0, 0, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1270,125f, -253,9321f, 62,90407f, -1311,414f, -193,6588f, 38,23291f, 44,5f, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_99()//Position - 0x42A1
{
	int iVar0;
	
	if (unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar0, 1))
	{
		if (iVar0 == joaat("weapon_stickybomb"))
		{
			if (unk_0xFE2BE49C250EFD09(unk_0x9EB17624F44A8DA4()))
			{
				if ((unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()) && unk_0xF2B58F79D29425B4(0, 24)) || (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0xF2B58F79D29425B4(0, 69)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_100(int iParam0)//Position - 0x4303
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (unk_0x37956F2B588E40E6(iParam0) == 3 && unk_0x0191A52225EFA665(iLocal_938) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_101(int iParam0)//Position - 0x433D
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (unk_0x317536BCEA8FA6B0(iParam0, -1, 0) != 0)
			{
				if (unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_24(unk_0xFC1458A37D98B502(), iParam0, 1) < 40f)
						{
							if (unk_0xF004845B6324D7F1(unk_0x9EB17624F44A8DA4(), &iVar1))
							{
								if ((unk_0x8A3FF8E81B40BB75(iVar1) && unk_0x79A6CD762DCCABE4(iVar1) == iParam0) || (unk_0x52C56492660097C7(iVar1) && unk_0x07F64790D10D1DB5(iVar1) == unk_0x317536BCEA8FA6B0(iParam0, -1, 0)))
								{
									if ((unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()) && unk_0xF2B58F79D29425B4(0, 24)) || (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0xF2B58F79D29425B4(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_102(int iParam0)//Position - 0x440B
{
	if (unk_0xB8DE76287EDC4957(iLocal_1065, 0))
	{
		if (unk_0x4A54CB0F526FC86F(unk_0xFC1458A37D98B502(), iLocal_1065, joaat("weapon_stickybomb"), -1))
		{
			if (unk_0x53C4FF461321A689(-1223,024f, -187,3076f, 39,02538f, -1220,311f, -186,2481f, 40,42538f, 6,5f, joaat("weapon_stickybomb"), 0) || unk_0x53C4FF461321A689(-1223,024f, -187,3076f, 38,02538f, -1220,311f, -186,2481f, 40,42538f, 4,5f, joaat("weapon_stickybomb"), 0))
			{
				*iParam0 = 8;
				return 1;
			}
		}
	}
	return 0;
}

void func_103()//Position - 0x449F
{
	int iVar0;
	
	func_144();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_941[iVar0]))
		{
			if (iLocal_959 && !bLocal_992)
			{
				func_143(iLocal_941[iVar0], &(Local_946[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_942[iVar0]))
		{
			if (iLocal_959 && !bLocal_992)
			{
				func_143(iLocal_942[iVar0], &(Local_947[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_940[iVar0]))
		{
			if (iLocal_959 && !bLocal_992)
			{
				func_143(iLocal_940[iVar0], &(Local_948[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_940[iVar0]))
			{
				if (iLocal_936[iVar0] == 4)
				{
					unk_0x2217C45231E6A537(iLocal_940[iVar0], 128, 1);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_1024 == 0)
	{
		func_141(0);
	}
	else if (iLocal_1024 == 1)
	{
		func_141(1);
	}
	else if (iLocal_1024 == 2)
	{
		if (iLocal_931 >= 9)
		{
			func_130(0);
		}
	}
	else if (iLocal_1024 == 3)
	{
		if (iLocal_931 >= 9)
		{
			func_130(1);
		}
	}
	else if (iLocal_1024 == 4)
	{
		if (iLocal_931 >= 9)
		{
			func_130(2);
			func_129(-1222,558f, -173,7471f, 38,32541f, -1220,101f, -169,0531f, 42,07541f, 4f);
		}
	}
	else if (iLocal_1024 == 5)
	{
		func_104(0);
		func_129(-1213,432f, -191,3261f, 38,32541f, -1208,553f, -193,8618f, 42,07534f, 4f);
	}
	else if (iLocal_1024 == 6)
	{
		func_104(1);
		func_129(-1219,14f, -202,3124f, 38,32534f, -1214,269f, -204,9035f, 42,07534f, 4f);
	}
	iLocal_1024++;
	if (iLocal_1024 > 6)
	{
		iLocal_1024 = 0;
	}
	if (iLocal_959)
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_939, 0))
		{
			unk_0x2217C45231E6A537(iLocal_939, 120, 1);
		}
	}
}

void func_104(int iParam0)//Position - 0x46D6
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = iLocal_942[iParam0];
	switch (iLocal_934[iParam0])
	{
		case 0:
			if (iLocal_972)
			{
				iLocal_934[iParam0] = 1;
			}
			else if (bLocal_970)
			{
				iLocal_934[iParam0] = 3;
			}
			break;
		
		case 1:
			if (unk_0xB8DE76287EDC4957(iLocal_1066, 0))
			{
				if (func_128())
				{
					if (!unk_0xFF95C59FBC63673B(iLocal_1066))
					{
						if (unk_0x317536BCEA8FA6B0(iLocal_1066, -1, 0) == iLocal_942[iParam0])
						{
							unk_0x84EF7D14703E1230(iLocal_942[iParam0], iLocal_1066, "OJASva_104", 948, 0, 16, 18, 6f, 0, 1073741824);
						}
					}
					iLocal_934[iParam0] = 2;
				}
				else
				{
					func_127(iParam0);
				}
			}
			break;
		
		case 2:
			if (unk_0xB8DE76287EDC4957(iLocal_1066, 0))
			{
				if (!unk_0xFF95C59FBC63673B(iLocal_1066))
				{
					vVar1 = { unk_0xB3328BA8976B416C(iLocal_1066, 1) };
					fVar2 = unk_0xF0371FE6E2BF9599(iLocal_1066);
					iLocal_972 = 0;
					iLocal_934[iParam0] = 0;
				}
			}
			break;
		
		case 3:
			if (unk_0xB8DE76287EDC4957(iLocal_1066, 0))
			{
				if (!unk_0x191BE1BC8F26F3C1(iLocal_942[iParam0], 0))
				{
					if (unk_0xA8D0477084E86A92(iLocal_942[iParam0], iLocal_1066, 0) && unk_0xB8DE76287EDC4957(iLocal_1065, 0))
					{
						if (!iLocal_959)
						{
							if (unk_0x317536BCEA8FA6B0(iLocal_1066, -1, 0) == iLocal_942[iParam0])
							{
								if (unk_0x78F50AA8F955BEFC(iLocal_942[iParam0], -1273030092) != 1)
								{
									unk_0x704F59A957541E38(iLocal_942[iParam0], iLocal_1066, iLocal_1065, -1, 45f, 786981, 10f, -1, 10f);
								}
							}
						}
						else if (unk_0x317536BCEA8FA6B0(iLocal_1066, -1, 0) == iLocal_942[iParam0])
						{
							if (!iLocal_973)
							{
								if (unk_0x191BE1BC8F26F3C1(iLocal_939, 0))
								{
									if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
									{
										unk_0xD7F5B2902EBBD04E(iVar0, unk_0xFC1458A37D98B502(), 0, 16);
									}
									else
									{
										iLocal_934[iParam0] = 8;
									}
								}
								else
								{
									unk_0x704F59A957541E38(iLocal_942[iParam0], iLocal_1066, iLocal_1065, -1, 45f, 786981, 10f, -1, 10f);
									unk_0x0F0AC8EE85BA78FA(iVar0, unk_0xFC1458A37D98B502());
									iLocal_973 = 1;
								}
							}
						}
						else if (!bLocal_989)
						{
							if (unk_0x78F50AA8F955BEFC(iLocal_942[iParam0], 780511057) != 1)
							{
								if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
								{
									if (unk_0x90D5DFB054818BA7(iLocal_1066) < 5f)
									{
										iLocal_934[iParam0] = 8;
									}
								}
								unk_0xD7F5B2902EBBD04E(iVar0, unk_0xFC1458A37D98B502(), 0, 16);
							}
						}
						else if (unk_0x78F50AA8F955BEFC(iLocal_942[iParam0], 780511057) != 1)
						{
							unk_0xD7F5B2902EBBD04E(iVar0, unk_0xFC1458A37D98B502(), 0, 16);
						}
					}
					else if (!iLocal_983)
					{
						iLocal_934[iParam0] = 8;
					}
				}
			}
			break;
		
		case 4:
			if (!func_52(&iLocal_1081))
			{
				func_50(&iLocal_1081);
			}
			func_124(&(iLocal_942[iParam0]));
			iLocal_934[iParam0] = 5;
			break;
		
		case 5:
			if (!func_93(iLocal_938))
			{
				if (func_46(&iLocal_1081) >= 27f || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iVar0))
					{
						if (unk_0x21B6FFFD04C9FF3A(iLocal_938, iVar0, 5f, 5f, 3f, 0, 1, 0))
						{
							func_123(iVar0, 5f, 5f, 3f);
						}
						else
						{
							func_127(iParam0);
						}
					}
				}
			}
			else
			{
				iLocal_934[iParam0] = 0;
			}
			break;
		
		case 6:
			if (bLocal_984)
			{
				unk_0x6931076730A4AC5D(&uLocal_1072);
				unk_0x16416C5B54FDBCBB(0, 0, 0);
				unk_0xBA54D3D84EF38E3D(0, func_122(), unk_0x63A6486593EC7EC3(1000, 1500), 2048, 4);
				unk_0xBA54D3D84EF38E3D(0, func_122(), unk_0x63A6486593EC7EC3(2000, 2500), 2048, 4);
				unk_0x4C7AF3B2BE8C3193(0, unk_0xFC1458A37D98B502(), unk_0x63A6486593EC7EC3(10000, 11000), 30f, 1f, 1073741824, 0);
				unk_0x78F763FF6DE9BCA2(0, unk_0xFC1458A37D98B502(), func_122(), 1f, 0, 1056964608, 1082130432, 1, 0, -957453492);
				unk_0x1B16DD5C115FE009(uLocal_1072);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_942[iParam0]))
				{
					unk_0xAB30B1CF01A198C1(iLocal_942[iParam0], uLocal_1072);
				}
				unk_0xFAA3EF7FF92E1F9E(&uLocal_1072);
			}
			else
			{
				unk_0x6931076730A4AC5D(&uLocal_1072);
				unk_0x16416C5B54FDBCBB(0, 0, 0);
				unk_0xCDACC23C56C1F7F5(0, func_122(), unk_0x63A6486593EC7EC3(3000, 3500), 1, 0);
				unk_0xCDACC23C56C1F7F5(0, func_122(), unk_0x63A6486593EC7EC3(3000, 3500), 0, 0);
				unk_0xCDACC23C56C1F7F5(0, func_122(), unk_0x63A6486593EC7EC3(3000, 3500), 0, 0);
				unk_0xCDACC23C56C1F7F5(0, func_122(), unk_0x63A6486593EC7EC3(3000, 3500), 0, 0);
				unk_0xCDACC23C56C1F7F5(0, func_122(), -1, 0, 0);
				unk_0x1B16DD5C115FE009(uLocal_1072);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_942[iParam0]))
				{
					unk_0xAB30B1CF01A198C1(iLocal_942[iParam0], uLocal_1072);
				}
				unk_0xFAA3EF7FF92E1F9E(&uLocal_1072);
			}
			iLocal_934[iParam0] = 7;
			break;
		
		case 7:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_942[iParam0]))
			{
				if (unk_0x78F50AA8F955BEFC(iLocal_942[iParam0], 1435919172) != 1)
				{
					unk_0x2C85E478535743C1(iLocal_942[iParam0], iLocal_938, iLocal_938, 1f, 0, -1f, 1082130432, 1, 0, -957453492);
				}
			}
			break;
		
		case 8:
			if (iLocal_937 != 4 && iLocal_937 != 5)
			{
				func_121(iVar0);
			}
			else
			{
				func_120(iVar0);
			}
			iLocal_934[iParam0] = 9;
			break;
		
		case 9:
			if (iParam0 == 0)
			{
				if (iLocal_937 != 4)
				{
					func_119(iLocal_1066, iVar0, 1112014848, 1112014848, 1092616192);
				}
			}
			func_2(iVar0);
			func_94(iVar0);
			break;
	}
	if (!iLocal_959)
	{
		if (iLocal_983)
		{
			if (iLocal_934[iParam0] != 6 && iLocal_934[iParam0] != 7)
			{
				iLocal_934[iParam0] = 6;
			}
		}
		else if (func_112(iVar0, iLocal_1066, &Local_320, &iLocal_325, 0, 0, 0, 1, 1) || func_111(iLocal_1066))
		{
			iVar3 = func_30(1116471296, 1);
			if (iVar3 != 0)
			{
				func_110(unk_0xB3328BA8976B416C(iVar3, 1), 1097859072, 1116471296);
			}
			if (!func_109())
			{
				iLocal_959 = 1;
			}
		}
		else if (!bLocal_962)
		{
			if (func_108(iVar0, 10f))
			{
				if (iLocal_934[iParam0] != 4 && iLocal_934[iParam0] != 5)
				{
					if (!bLocal_960)
					{
						func_106(&Local_320, 4);
						iLocal_934[iParam0] = 4;
					}
					else if (!func_93(iLocal_938))
					{
						iLocal_959 = 1;
						if (!unk_0x6ADD12BF4D6D2587(iLocal_939))
						{
							iLocal_937 = 5;
						}
						iLocal_934[iParam0] = 8;
					}
				}
			}
		}
	}
	else if (!unk_0x3AB6A1A9084FB0A4(iVar0))
	{
		if (unk_0xA8D0477084E86A92(iVar0, iLocal_1066, 0))
		{
			if (((!unk_0xB8DE76287EDC4957(iLocal_1066, 0) || !unk_0xB8DE76287EDC4957(iLocal_1065, 0)) || iLocal_971) || !bLocal_962)
			{
				if (iLocal_934[iParam0] < 8)
				{
					iLocal_934[iParam0] = 8;
				}
			}
		}
		else if (iLocal_934[iParam0] < 8)
		{
			iLocal_934[iParam0] = 8;
		}
	}
	func_105(iVar0, uLocal_952[iParam0]);
}

void func_105(int iParam0, int iParam1)//Position - 0x4D8E
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			if (unk_0xA6DECE14FC9A8C51(iParam1))
			{
				unk_0xE30CF11C0EE14316(&iParam1);
			}
		}
	}
}

void func_106(var uParam0, int iParam1)//Position - 0x4DB7
{
	func_107(uParam0, iParam1);
}

void func_107(var uParam0, var uParam1)//Position - 0x4DC7
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_108(int iParam0, float fParam1)//Position - 0x4DDC
{
	if (!iLocal_959)
	{
		if (!func_93(iLocal_938))
		{
			if (unk_0x6ADD12BF4D6D2587(iParam0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iParam0))
				{
					if (func_23(iParam0, 0) <= fParam1)
					{
						if (unk_0xCA3C40448996C9BA(iParam0, iLocal_938, 120f))
						{
							if (unk_0xFFCE4302A2DB825B(iParam0, iLocal_938, 17))
							{
								if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1251,791f, -147,043f, 42,679f, -1197,245f, -212,232f, 50,679f, 35f, 1, 1, 0) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1259,282f, -204,172f, -60,654f, -1304,335f, -235,719f, 60,654f, 85f, 1, 1, 0))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		else if (unk_0x6ADD12BF4D6D2587(iParam0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iParam0))
			{
				if (unk_0x21B6FFFD04C9FF3A(iLocal_938, iParam0, 5f, 5f, 1f, 0, 1, 0))
				{
					if (unk_0xCA3C40448996C9BA(iParam0, iLocal_938, 120f))
					{
						if (unk_0xFFCE4302A2DB825B(iParam0, iLocal_938, 17))
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

int func_109()//Position - 0x4EF1
{
	if (iLocal_983 || bLocal_984)
	{
		return 1;
	}
	return 0;
}

void func_110(vector3 vParam0, float fParam1, float fParam2)//Position - 0x4F0D
{
	int iVar0;
	float fVar1;
	
	if (!unk_0x6ADD12BF4D6D2587(iLocal_939))
	{
		return;
	}
	if (!unk_0x6ADD12BF4D6D2587(iLocal_1065))
	{
		return;
	}
	if (unk_0x191BE1BC8F26F3C1(iLocal_1065, 0) || iLocal_1013)
	{
		bLocal_982 = true;
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_939))
	{
		if (((unk_0x613CDAB05D8C57C8(iLocal_939, joaat("weapon_sniperrifle"), 0) || unk_0x613CDAB05D8C57C8(iLocal_939, joaat("weapon_heavysniper"), 0)) || unk_0x613CDAB05D8C57C8(iLocal_939, joaat("weapon_remotesniper"), 0)) || unk_0x613CDAB05D8C57C8(iLocal_939, joaat("weapon_marksmanrifle"), 0))
		{
			iLocal_981 = 1;
			iLocal_932 = 1;
		}
	}
	if (iLocal_325 == 4 || iLocal_325 == 8)
	{
		if (!unk_0xFF95C59FBC63673B(iLocal_1065))
		{
			fParam1 = (fParam1 * 2f);
			iVar0 = 1;
		}
	}
	if (!iLocal_959)
	{
		if ((iLocal_981 || bLocal_982) || iVar0)
		{
			fVar1 = func_26(unk_0xFC1458A37D98B502(), vParam0, 1);
			if (fVar1 > fParam1)
			{
				iLocal_983 = 1;
				if (fVar1 > fParam2)
				{
					bLocal_984 = true;
				}
			}
		}
	}
}

int func_111(int iParam0)//Position - 0x5014
{
	int iVar0;
	float fVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					if (unk_0x6ADD12BF4D6D2587(iVar0) && unk_0xB8DE76287EDC4957(iVar0, 0))
					{
						fVar1 = unk_0x90D5DFB054818BA7(iVar0);
						if (fVar1 > 7f)
						{
							if (unk_0x9A213A2345825783(iVar0, iParam0) || unk_0xEBE499597C718EB8(iVar0, iParam0, 1))
							{
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

int func_112(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x5096
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xFC1458A37D98B502();
	if (!unk_0x191BE1BC8F26F3C1(iVar0, 0) && !unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (!func_118(*uParam2, 1))
		{
			if (func_117(iParam0, uParam2))
			{
				*iParam3 = 1;
				return 1;
			}
		}
		if (!func_118(*uParam2, 2))
		{
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
			{
				*iParam3 = 2;
				return 1;
			}
		}
		if (!func_118(*uParam2, 4))
		{
			if (func_116(iVar0, iParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return 1;
			}
		}
		if (!func_118(*uParam2, 8))
		{
			if (func_115(iVar0, iParam0, uParam2))
			{
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_118(*uParam2, 128);
		if (bParam4)
		{
			if (func_113(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!func_118(*uParam2, 16))
		{
			if (func_113(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*iParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (iParam7 && unk_0xEBE499597C718EB8(iParam0, iVar0, 1))
		{
			*iParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_113(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x51C0
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_316)
		{
			iLocal_317 = unk_0xDE523AF6F7B269AB(iParam0);
			bLocal_316 = true;
		}
		iLocal_318 = unk_0xDE523AF6F7B269AB(iParam0);
		iLocal_319 = (iLocal_317 - iLocal_318);
		iVar0 = unk_0xC733212BF9066BDF();
		if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
		{
			if (unk_0xEBE499597C718EB8(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_319) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_316)
		{
			if (unk_0xEBE499597C718EB8(iParam0, unk_0xFC1458A37D98B502(), 1))
			{
				if (IntToFloat(iLocal_319) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xEBE499597C718EB8(iParam0, unk_0xFC1458A37D98B502(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0xC733212BF9066BDF();
		if (!unk_0x191BE1BC8F26F3C1(iVar1, 0))
		{
			if (unk_0xEBE499597C718EB8(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			if (unk_0x27C8A4034A05DC21(iParam0))
			{
				if (unk_0x4EAE4CAB6D3C4502(iParam0) == unk_0xFC1458A37D98B502())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()))
		{
			if (unk_0x0C88267282FD588F(iParam0, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0x43213E9B2334AA57(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xE72696884FB34FE1(unk_0xFC1458A37D98B502()))
	{
		if (unk_0xD9E1B7C62F05F2A0(iParam0))
		{
			return 1;
		}
	}
	if (func_114(unk_0xFC1458A37D98B502(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x9F887157983E8EFC(iParam0) && func_23(iParam0, 1) < 1,5f)
		{
			return 1;
		}
		else if (unk_0x88DDBE9908752BF0(iParam0, 0))
		{
			if (unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), unk_0xDFD115BB10FE46A9(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), iParam0))
		{
			return 1;
		}
		if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
		{
			if (unk_0xEBE499597C718EB8(iParam1, unk_0xFC1458A37D98B502(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_114(int iParam0, int iParam1)//Position - 0x5392
{
	int iVar0;
	
	unk_0x5AD8564EFD5BEC2E(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x08765A6321A42CA1(iParam0))
		{
			if (system::vdist(unk_0xB3328BA8976B416C(iParam0, 1), unk_0xB3328BA8976B416C(iParam1, 1)) < 2,5f)
			{
				if (unk_0xCA3C40448996C9BA(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_115(int iParam0, int iParam1, var uParam2)//Position - 0x53E7
{
	if (unk_0xC931425E2B416A2F(iParam0, 4))
	{
		if (unk_0x08765A6321A42CA1(iParam0) && !unk_0x9C8F5918B4DF54D8(iParam0))
		{
			if (unk_0x0C88267282FD588F(iParam1, unk_0xB3328BA8976B416C(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_116(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x5435
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam1, 1) };
	}
	if (unk_0x5679106BC7ED79EE(vVar0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x4FB2BF5239979F9A(vVar0, system::to_float(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0xC931425E2B416A2F(iParam0, 2))
	{
		if (unk_0x08765A6321A42CA1(iParam0))
		{
			if (unk_0x0C88267282FD588F(iParam1, unk_0xB3328BA8976B416C(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0xCA3C40448996C9BA(unk_0x07F64790D10D1DB5(iParam1), iParam0, 120f) && unk_0xFFCE4302A2DB825B(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x88DDBE9908752BF0(unk_0x07F64790D10D1DB5(iParam1), 0))
			{
				iVar1 = unk_0xDFD115BB10FE46A9(unk_0x07F64790D10D1DB5(iParam1), 0);
			}
			if (unk_0x0A1D4A2F0A088C25(iParam0) || func_101(iVar1))
			{
				if (unk_0x0C88267282FD588F(iParam1, unk_0xB3328BA8976B416C(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0xCA3C40448996C9BA(unk_0x07F64790D10D1DB5(iParam1), iParam0, 120f) && unk_0xFFCE4302A2DB825B(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0xF1DE6FAA2EFAA34F((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_117(int iParam0, var uParam1)//Position - 0x55AE
{
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
		{
			if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iParam0) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iParam0))
			{
				if (unk_0xCA3C40448996C9BA(iParam0, unk_0xFC1458A37D98B502(), 90f))
				{
					if (func_23(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x53C562FD2B9E3AB0();
						}
						else if ((unk_0x53C562FD2B9E3AB0() - uParam1->f_1) > uParam1->f_3)
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

bool func_118(var uParam0, int iParam1)//Position - 0x5633
{
	return (uParam0 && iParam1) != 0;
}

void func_119(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4)//Position - 0x5642
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam1))
	{
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				if (func_24(iParam1, iParam0, 0) > fParam2 && func_23(iParam1, 1) < fParam3)
				{
					if (!unk_0xA8D0477084E86A92(iParam1, iParam0, 0))
					{
						if (unk_0x78F50AA8F955BEFC(iParam1, -1794415470) != 1)
						{
							unk_0x6F8C8278B7C06889(iParam1, iParam0, 20000, -1, 2f, 1, 0);
						}
					}
					else if (unk_0x78F50AA8F955BEFC(iParam1, -1273030092) != 1)
					{
						unk_0x6F03491E8F9F397C(iParam1, iParam0, unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 6, 35f, 786469, -1f, -1f, 1);
						unk_0x0F0AC8EE85BA78FA(iParam1, unk_0xFC1458A37D98B502());
					}
				}
				else if (!unk_0xA8D0477084E86A92(iParam1, iParam0, 0))
				{
					if (unk_0x78F50AA8F955BEFC(iParam1, 780511057) != 1)
					{
						unk_0xD7F5B2902EBBD04E(iParam1, unk_0xFC1458A37D98B502(), 0, 16);
					}
				}
			}
			else if (unk_0xA8D0477084E86A92(iParam1, iParam0, 0))
			{
				if (func_23(iParam1, 1) > fParam4)
				{
					if (unk_0x78F50AA8F955BEFC(iParam1, -1273030092) != 1)
					{
						unk_0xD2C269DBF147B406(iParam1, iParam0, unk_0xFC1458A37D98B502(), 6, 35f, 786469, -1f, -1f, 1);
						unk_0x0F0AC8EE85BA78FA(iParam1, unk_0xFC1458A37D98B502());
					}
				}
				else if (unk_0x78F50AA8F955BEFC(iParam1, 780511057) != 1)
				{
					unk_0xD7F5B2902EBBD04E(iParam1, unk_0xFC1458A37D98B502(), 0, 16);
				}
			}
		}
		else if (unk_0x78F50AA8F955BEFC(iParam1, 780511057) != 1)
		{
			unk_0xD7F5B2902EBBD04E(iParam1, unk_0xFC1458A37D98B502(), 0, 16);
		}
	}
}

void func_120(int iParam0)//Position - 0x57A9
{
	var uVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_938) && !unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			unk_0xAE6EBBBBD8B9FB30(iParam0, 3, 1);
		}
		unk_0xFAA3EF7FF92E1F9E(&uVar0);
		unk_0x6931076730A4AC5D(&uVar0);
		unk_0x16416C5B54FDBCBB(0, 0, 256);
		unk_0x9627C22EF3C3F4D6(0, iLocal_938, -1, 0);
		unk_0x1B16DD5C115FE009(uVar0);
		unk_0xAB30B1CF01A198C1(iParam0, uVar0);
		unk_0xFAA3EF7FF92E1F9E(&uVar0);
	}
}

void func_121(int iParam0)//Position - 0x580E
{
	if (!unk_0x191BE1BC8F26F3C1(iLocal_938, 0))
	{
		if (!unk_0x88DDBE9908752BF0(iLocal_938, 0))
		{
			if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
			{
				unk_0xAE6EBBBBD8B9FB30(iParam0, 3, 1);
			}
			unk_0xFAA3EF7FF92E1F9E(&uLocal_1072);
			unk_0x6931076730A4AC5D(&uLocal_1072);
			unk_0x16416C5B54FDBCBB(0, 0, 256);
			unk_0xD7F5B2902EBBD04E(0, iLocal_938, 0, 16);
			unk_0x1B16DD5C115FE009(uLocal_1072);
			if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
			{
				unk_0xAB30B1CF01A198C1(iParam0, uLocal_1072);
			}
			unk_0xFAA3EF7FF92E1F9E(&uLocal_1072);
		}
		else if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			if (unk_0x78F50AA8F955BEFC(iParam0, 780511057) != 1)
			{
				unk_0xB8E08BD5B184DF4E(iParam0);
				unk_0xD7F5B2902EBBD04E(iParam0, iLocal_938, 0, 16);
			}
		}
	}
}

Vector3 func_122()//Position - 0x58B3
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = (unk_0x63A6486593EC7EC3(0, 65535) % 3);
	switch (iVar1)
	{
		case 0:
			vVar0 = { -1270,206f, -200,3586f, 40,8333f };
			break;
		
		case 1:
			vVar0 = { -1268,439f, -215,9683f, 59,654f };
			break;
		
		case 2:
			vVar0 = { -1241,558f, -239,3237f, 38,7884f };
			break;
	}
	return vVar0;
}

void func_123(int iParam0, vector3 vParam1)//Position - 0x5927
{
	if (!iLocal_959)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			if (unk_0x21B6FFFD04C9FF3A(iLocal_938, iParam0, vParam1, 0, 1, 0))
			{
				if (unk_0xCA3C40448996C9BA(iParam0, iLocal_938, 160f))
				{
					if (unk_0xFFCE4302A2DB825B(iParam0, iLocal_938, 17))
					{
						unk_0x2C85E478535743C1(iParam0, iLocal_938, iLocal_938, 1f, 0, -1f, 1082130432, 1, 0, -957453492);
						iLocal_937 = 5;
						iLocal_959 = 1;
					}
				}
			}
			else if (!unk_0x88DDBE9908752BF0(iParam0, 0))
			{
				if (unk_0x78F50AA8F955BEFC(iParam0, -1207174364) != 1)
				{
					unk_0x2C85E478535743C1(iParam0, iLocal_938, iLocal_938, 1f, 0, -1f, 1082130432, 1, 0, -957453492);
				}
			}
		}
	}
}

void func_124(int iParam0)//Position - 0x59CD
{
	var uVar0;
	vector3 vVar1;
	
	if (iLocal_943 == 0)
	{
		iLocal_943 = func_30(70f, 0);
	}
	if (!unk_0x3AB6A1A9084FB0A4(*iParam0))
	{
		if (!unk_0x88DDBE9908752BF0(*iParam0, 0))
		{
			if (!iLocal_961)
			{
				if (*iParam0 == iLocal_943)
				{
					unk_0xFAA3EF7FF92E1F9E(&uVar0);
					unk_0x6931076730A4AC5D(&uVar0);
					unk_0x4C7AF3B2BE8C3193(0, iLocal_938, 20000, 2f, 1f, 1073741824, 0);
					unk_0xAC838A977FB6E6BC(0, iLocal_938, -1);
					unk_0x1B16DD5C115FE009(uVar0);
					unk_0xAB30B1CF01A198C1(*iParam0, uVar0);
					unk_0xFAA3EF7FF92E1F9E(&uVar0);
					iLocal_961 = 1;
					vVar1 = { unk_0xB3328BA8976B416C(*iParam0, 1) };
				}
				else if (unk_0x78F50AA8F955BEFC(*iParam0, 1227113341) != 1)
				{
					unk_0xAC838A977FB6E6BC(*iParam0, iLocal_938, -1);
				}
			}
			else if (*iParam0 != iLocal_943)
			{
				if (unk_0x78F50AA8F955BEFC(*iParam0, 1227113341) != 1)
				{
					unk_0xAC838A977FB6E6BC(*iParam0, iLocal_938, -1);
				}
			}
		}
		unk_0x5C5D33A1B2711D21(*iParam0, true);
		func_125();
	}
}

void func_125()//Position - 0x5AB4
{
	int iVar0;
	
	if (!iLocal_963)
	{
		if (!bLocal_974)
		{
			if (!func_22())
			{
				iVar0 = func_30(1116471296, 1);
				func_28(iVar0, 3, "OJAvaGUARD");
				if (func_126())
				{
					func_6(&uLocal_1112, "OJASAUD", "OJASva_CAR", 9, 0, 0, 0);
					iLocal_963 = 1;
				}
				else
				{
					func_27(&uLocal_1112, "OJASAUD", "OJASva_GTFO2", "OJASva_GTFO2_1", 9, 0, 0);
					iLocal_963 = 1;
				}
			}
		}
	}
}

int func_126()//Position - 0x5B25
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		vVar0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		if (!unk_0x191BE1BC8F26F3C1(iLocal_1065, 0))
		{
			vVar1 = { unk_0xB3328BA8976B416C(iLocal_1065, 1) };
		}
		fVar2 = system::vdist2(vVar0, vVar1);
		if (fVar2 <= 25f)
		{
			return 1;
		}
	}
	return 0;
}

void func_127(int iParam0)//Position - 0x5B7C
{
	int iVar0;
	
	bLocal_960 = true;
	if (iParam0 == 0)
	{
		iVar0 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 0;
	}
	if (!unk_0x191BE1BC8F26F3C1(iLocal_942[iParam0], 0))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_1066, 0))
		{
			if (!unk_0xA8D0477084E86A92(iLocal_942[iParam0], iLocal_1066, 0))
			{
				if (unk_0x78F50AA8F955BEFC(iLocal_942[iParam0], -1794415470) != 1)
				{
					unk_0x6F8C8278B7C06889(iLocal_942[iParam0], iLocal_1066, 20000, iVar0, 2f, 1, 0);
				}
			}
		}
	}
}

int func_128()//Position - 0x5BF9
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_942[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_942[1]))
	{
		if (unk_0xA8D0477084E86A92(iLocal_942[0], iLocal_1066, 0) && unk_0xA8D0477084E86A92(iLocal_942[1], iLocal_1066, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_129(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x5C48
{
	if (!iLocal_959)
	{
		if (unk_0x53C4FF461321A689(vParam0, vParam1, fParam2, joaat("weapon_stickybomb"), 0))
		{
			iLocal_959 = 1;
		}
	}
}

void func_130(int iParam0)//Position - 0x5C72
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = iLocal_941[iParam0];
	switch (iLocal_933[iParam0])
	{
		case 0:
			if (!unk_0x3AB6A1A9084FB0A4(iVar0))
			{
				unk_0xFAA3EF7FF92E1F9E(&uLocal_1072);
				unk_0x6931076730A4AC5D(&uLocal_1072);
				unk_0x755F86FFB31712D8(0, vLocal_1054[iParam0 /*3*/], 1f, 0, 0, 786603, -1082130432);
				unk_0x2DAC3448B66448E8(0, fLocal_1041[iParam0], 0);
				unk_0x1B16DD5C115FE009(uLocal_1072);
				unk_0xAB30B1CF01A198C1(iVar0, uLocal_1072);
				unk_0xFAA3EF7FF92E1F9E(&uLocal_1072);
				iLocal_933[iParam0] = 1;
			}
			break;
		
		case 1:
			if (unk_0x6ADD12BF4D6D2587(iVar0))
			{
				if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
				{
					if (!bLocal_994)
					{
						if (unk_0x78F50AA8F955BEFC(iVar0, -2017877118) != 1 && unk_0x78F50AA8F955BEFC(iVar0, 242628503) != 1)
						{
							if (unk_0x0C88267282FD588F(iVar0, vLocal_1054[iParam0 /*3*/], 3f, 3f, 3f, 0, 1, 0))
							{
								func_138(iVar0, &(uLocal_1021[iParam0]), 1);
							}
							else
							{
								iLocal_933[iParam0] = 0;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!func_52(&iLocal_1081))
			{
				func_50(&iLocal_1081);
				func_124(&iVar0);
				iLocal_933[iParam0] = 2;
			}
			else if (func_46(&iLocal_1081) > fLocal_1042[iParam0] || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
			{
				func_124(&iVar0);
				iLocal_933[iParam0] = 2;
			}
			break;
		
		case 2:
			if (!func_93(iLocal_938))
			{
				iLocal_987 = 1;
				if (bLocal_986)
				{
					iLocal_933[iParam0] = 4;
					break;
				}
				else if (func_46(&iLocal_1081) >= 27f && iLocal_963)
				{
					func_123(iVar0, 15f, 15f, 3f);
				}
				else if (func_46(&iLocal_1081) >= 15f)
				{
					func_136(iVar0);
				}
			}
			else
			{
				iLocal_987 = 0;
				bLocal_960 = true;
				if (!bLocal_980)
				{
					iLocal_933[iParam0] = 0;
				}
				else
				{
					iLocal_933[iParam0] = 4;
				}
			}
			break;
		
		case 4:
			if (!unk_0x3AB6A1A9084FB0A4(iVar0))
			{
				unk_0x5C5D33A1B2711D21(iVar0, true);
				unk_0x2217C45231E6A537(iVar0, 60, 1);
			}
			if (unk_0xB8DE76287EDC4957(iLocal_1065, 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iVar0))
				{
					if (iParam0 == 0)
					{
						unk_0x60C06BFD037BB7CF(iLocal_941[0], iLocal_941[1], -1, 0, 2);
						if (!unk_0xA8D0477084E86A92(iVar0, iLocal_1065, 0))
						{
							unk_0x6F8C8278B7C06889(iVar0, iLocal_1065, 30000, -1, 1f, 1, 0);
						}
					}
					else if (iParam0 == 1)
					{
						unk_0x60C06BFD037BB7CF(iLocal_941[1], iLocal_941[0], -1, 0, 2);
						if (!unk_0xA8D0477084E86A92(iVar0, iLocal_1065, 0))
						{
							unk_0x6F8C8278B7C06889(iVar0, iLocal_1065, 30000, 0, 1f, 1, 0);
						}
					}
					else if (iParam0 == 2)
					{
						if (unk_0xB8DE76287EDC4957(iLocal_1066, 0))
						{
							if (!unk_0xA8D0477084E86A92(iVar0, iLocal_1066, 0))
							{
								unk_0x6F8C8278B7C06889(iVar0, iLocal_1066, 30000, 1, 1f, 1, 0);
							}
						}
					}
				}
				iLocal_933[iParam0] = 5;
			}
			else
			{
				iLocal_933[iParam0] = 10;
			}
			break;
		
		case 5:
			if (!unk_0x3AB6A1A9084FB0A4(iVar0))
			{
				unk_0x2217C45231E6A537(iVar0, 60, 1);
			}
			if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
			{
				if (unk_0x78F50AA8F955BEFC(iVar0, 150319005) != 1)
				{
					if (iParam0 == 0)
					{
						unk_0x60C06BFD037BB7CF(iLocal_941[iParam0], iLocal_941[1], -1, 2048, 4);
					}
					else if (iParam0 == 1)
					{
						unk_0x60C06BFD037BB7CF(iLocal_941[iParam0], iLocal_941[0], -1, 2048, 4);
					}
				}
			}
			if (unk_0xB8DE76287EDC4957(iLocal_1065, 0))
			{
				if (!func_134())
				{
					if (iLocal_959)
					{
						if (!unk_0x3AB6A1A9084FB0A4(iVar0))
						{
							if (unk_0x78F50AA8F955BEFC(iVar0, 780511057) != 1)
							{
								if (func_133(iLocal_941[0]))
								{
									unk_0xCB3D88C918AA637C(iLocal_941[0]);
								}
								if (func_133(iLocal_941[1]))
								{
									unk_0xCB3D88C918AA637C(iLocal_941[1]);
								}
								unk_0xD7F5B2902EBBD04E(iVar0, iLocal_938, 0, 16);
							}
						}
					}
				}
				else
				{
					iLocal_933[iParam0] = 6;
				}
			}
			else
			{
				iLocal_933[iParam0] = 10;
			}
			if (bLocal_975)
			{
				if (iLocal_933[iParam0] != 10 && iLocal_933[iParam0] != 11)
				{
					iLocal_933[iParam0] = 10;
				}
			}
			break;
		
		case 6:
			if (!iLocal_959)
			{
				if (unk_0xB8DE76287EDC4957(iLocal_1065, 0))
				{
					if (unk_0x317536BCEA8FA6B0(iLocal_1065, -1, 0) == iVar0)
					{
						if (!unk_0x3AB6A1A9084FB0A4(iVar0))
						{
							unk_0xA15269351F50F113(iLocal_1065, true, 1, 0);
							if (func_132())
							{
								unk_0x84EF7D14703E1230(iVar0, iLocal_1065, "OJASva_101a", 181, 0, 16, -1, 10f, 0, 1073741824);
							}
							else
							{
								unk_0x84EF7D14703E1230(iVar0, iLocal_1065, "OJASva_101", 181, 0, 0, -1, -1f, 0, 1073741824);
							}
						}
					}
					iLocal_933[iParam0] = 7;
				}
			}
			else
			{
				if (func_133(iLocal_941[0]))
				{
					unk_0xCB3D88C918AA637C(iLocal_941[0]);
				}
				if (func_133(iLocal_941[1]))
				{
					unk_0xCB3D88C918AA637C(iLocal_941[1]);
				}
				iLocal_933[iParam0] = 7;
			}
			break;
		
		case 7:
			if (iLocal_959)
			{
				if ((unk_0xB8DE76287EDC4957(iLocal_1065, 0) && unk_0x317536BCEA8FA6B0(iLocal_1065, -1, 0) == iVar0) && unk_0x317536BCEA8FA6B0(iLocal_1065, 1, 0) == iLocal_939)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iVar0))
					{
						if (bLocal_974 || (iLocal_988 && !unk_0xFF95C59FBC63673B(iLocal_1065)))
						{
							unk_0xB8E08BD5B184DF4E(iVar0);
							if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
							{
								if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
								{
									if (unk_0x78F50AA8F955BEFC(iVar0, -1273030092) != 1)
									{
										unk_0x6F03491E8F9F397C(iVar0, iLocal_1065, unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 8, 35f, 786469, -1f, -1f, 1);
									}
								}
								else if (unk_0x78F50AA8F955BEFC(iVar0, -1273030092) != 1)
								{
									unk_0xD2C269DBF147B406(iVar0, iLocal_1065, unk_0xFC1458A37D98B502(), 8, 35f, 786469, -1f, -1f, 1);
								}
							}
						}
					}
				}
				else if (!unk_0x3AB6A1A9084FB0A4(iVar0))
				{
					if (unk_0x78F50AA8F955BEFC(iVar0, 780511057) != 1)
					{
						unk_0xD7F5B2902EBBD04E(iVar0, iLocal_938, 0, 16);
					}
				}
			}
			else if (bLocal_974 || (iLocal_988 && !unk_0xFF95C59FBC63673B(iLocal_1065)))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_1065, 0))
				{
					if (unk_0x317536BCEA8FA6B0(iLocal_1065, -1, 0) == iVar0)
					{
						if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
						{
							if (unk_0x78F50AA8F955BEFC(iVar0, -1273030092) != 1)
							{
								unk_0x2931C350CED41AD3(iVar0, iLocal_1065, vLocal_1057, 8, 25f, 786603, -1f, -1f, 1);
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (bLocal_984)
			{
				unk_0x6931076730A4AC5D(&uLocal_1072);
				unk_0x16416C5B54FDBCBB(0, 0, 0);
				unk_0xBA54D3D84EF38E3D(0, func_122(), unk_0x63A6486593EC7EC3(1000, 1500), 2048, 4);
				unk_0x4C7AF3B2BE8C3193(0, unk_0xFC1458A37D98B502(), unk_0x63A6486593EC7EC3(15000, 16000), 30f, 1f, 1073741824, 0);
				unk_0x78F763FF6DE9BCA2(0, unk_0xFC1458A37D98B502(), func_122(), 1f, 0, 1056964608, 1082130432, 1, 0, -957453492);
				unk_0x1B16DD5C115FE009(uLocal_1072);
				if (!unk_0x191BE1BC8F26F3C1(iLocal_941[iParam0], 0))
				{
					unk_0xAB30B1CF01A198C1(iLocal_941[iParam0], uLocal_1072);
				}
				unk_0xFAA3EF7FF92E1F9E(&uLocal_1072);
			}
			else
			{
				unk_0x6931076730A4AC5D(&uLocal_1072);
				unk_0x16416C5B54FDBCBB(0, 0, 0);
				unk_0xCDACC23C56C1F7F5(0, func_122(), unk_0x63A6486593EC7EC3(3000, 3500), 1, 0);
				unk_0x78F763FF6DE9BCA2(0, unk_0xFC1458A37D98B502(), func_122(), 1f, 0, 1056964608, 1082130432, 1, 0, -957453492);
				unk_0x1B16DD5C115FE009(uLocal_1072);
				if (!unk_0x191BE1BC8F26F3C1(iLocal_941[iParam0], 0))
				{
					unk_0xAB30B1CF01A198C1(iLocal_941[iParam0], uLocal_1072);
				}
				unk_0xFAA3EF7FF92E1F9E(&uLocal_1072);
			}
			iLocal_933[iParam0] = 9;
			break;
		
		case 9:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_941[iParam0]))
			{
				if (unk_0x78F50AA8F955BEFC(iLocal_941[iParam0], 1435919172) != 1)
				{
					unk_0x2C85E478535743C1(iLocal_941[iParam0], iLocal_938, iLocal_938, 1f, 0, -1f, 1082130432, 1, 0, -957453492);
				}
			}
			break;
		
		case 10:
			if (iLocal_937 == 4 || iLocal_937 == 5)
			{
				func_120(iVar0);
			}
			else if (iLocal_937 != 8)
			{
				func_121(iVar0);
				iLocal_933[iParam0] = 11;
			}
			break;
		
		case 11:
			if (iParam0 == 0)
			{
				func_119(iLocal_1065, iVar0, 1112014848, 1112014848, 1092616192);
			}
			func_2(iVar0);
			func_94(iVar0);
			break;
	}
	if (iLocal_931 < 10)
	{
		fVar1 = 5f;
	}
	else
	{
		fVar1 = fLocal_1044;
	}
	if (!iLocal_959)
	{
		if (iLocal_983)
		{
			if (iLocal_933[iParam0] != 8 && iLocal_933[iParam0] != 9)
			{
				iLocal_933[iParam0] = 8;
			}
		}
		else if (func_131(iVar0))
		{
			iVar2 = func_30(1116471296, 1);
			if (iVar2 != 0)
			{
				func_110(unk_0xB3328BA8976B416C(iVar2, 1), 1097859072, 1116471296);
			}
			if (!func_109())
			{
				iLocal_959 = 1;
			}
		}
		else if (!bLocal_962)
		{
			if (func_108(iVar0, fVar1))
			{
				if ((iLocal_933[iParam0] != 3 && iLocal_933[iParam0] != 2) && !bLocal_986)
				{
					if (!bLocal_960)
					{
						func_106(&Local_320, 4);
						iLocal_933[iParam0] = 3;
					}
					else if (!func_93(iLocal_938))
					{
						iLocal_959 = 1;
						if (!unk_0x6ADD12BF4D6D2587(iLocal_939))
						{
							iLocal_937 = 5;
						}
					}
				}
			}
		}
	}
	else if ((iLocal_933[iParam0] != 10 && iLocal_933[iParam0] != 11) && iLocal_933[iParam0] != 7)
	{
		iLocal_933[iParam0] = 10;
	}
	func_105(iVar0, uLocal_951[iParam0]);
}

int func_131(int iParam0)//Position - 0x65AE
{
	int iVar0;
	
	if (!iLocal_959)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iParam0))
			{
				if (unk_0x88DDBE9908752BF0(iParam0, 0))
				{
					iVar0 = unk_0xDFD115BB10FE46A9(iParam0, 0);
				}
				else
				{
					iVar0 = 0;
				}
			}
			if (func_112(iParam0, iVar0, &Local_320, &iLocal_325, 0, 0, 0, 1, 1) || (unk_0x9F887157983E8EFC(iParam0) && func_23(iParam0, 1) < 1,5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_132()//Position - 0x6622
{
	int iVar0;
	int iVar1[10];
	
	uLocal_1032 = unk_0x3689C35A674B0772(unk_0xFC1458A37D98B502(), &iVar1);
	uLocal_1032 = uLocal_1032;
	uLocal_1032 = iVar1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x6ADD12BF4D6D2587(iVar1[iVar0]) && !unk_0x191BE1BC8F26F3C1(iVar1[iVar0], 0))
		{
			if (unk_0x0F3033474C49912D(iVar1[iVar0], -1218,844f, -278,623f, 36,8196f, -1248,403f, -225,8467f, 43,15606f, 8,5f, 0, 1, 0))
			{
				iLocal_1031++;
			}
		}
		iVar0++;
	}
	if (iLocal_1031 >= 1)
	{
		iLocal_988 = 1;
		return 1;
	}
	return 0;
}

int func_133(int iParam0)//Position - 0x66C7
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

int func_134()//Position - 0x66E8
{
	if (unk_0xB8DE76287EDC4957(iLocal_1065, 0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_939))
		{
			if (!iLocal_959)
			{
				if (unk_0xA8D0477084E86A92(iLocal_939, iLocal_1065, 0) && func_135())
				{
					return 1;
				}
			}
			else if (unk_0xA8D0477084E86A92(iLocal_939, iLocal_1065, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_135()//Position - 0x673E
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_940[iVar0]))
		{
			if (!unk_0x88DDBE9908752BF0(iLocal_940[iVar0], 0))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_136(int iParam0)//Position - 0x677F
{
	switch (iLocal_1028)
	{
		case 0:
			if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
			{
				if (unk_0x78F50AA8F955BEFC(iParam0, 1630799643) != 1)
				{
					unk_0x9627C22EF3C3F4D6(iParam0, unk_0xFC1458A37D98B502(), -1, 0);
				}
				func_28(iParam0, 3, "OJAvaGUARD");
				func_6(&uLocal_1112, "OJASAUD", "OJASva_FWARN", 9, 0, 0, 0);
				iLocal_963 = 1;
				iLocal_1028 = 1;
			}
			break;
		
		case 1:
			func_137(iParam0);
			break;
	}
}

void func_137(int iParam0)//Position - 0x67F3
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (func_23(iParam0, 1) < 5f)
		{
			if (unk_0x78F50AA8F955BEFC(iParam0, -1207174364) != 1 && unk_0x78F50AA8F955BEFC(iParam0, 1630799643) != 1)
			{
				unk_0x9627C22EF3C3F4D6(iParam0, iLocal_938, -1, 0);
			}
		}
		else if (unk_0x78F50AA8F955BEFC(iParam0, -1207174364) != 1)
		{
			if (iParam0 == iLocal_943)
			{
				unk_0x2C85E478535743C1(iParam0, iLocal_938, iLocal_938, 1f, 0, -1f, 1082130432, 1, 0, -957453492);
			}
			else if (unk_0x78F50AA8F955BEFC(iParam0, 1630799643) != 1)
			{
				unk_0x9627C22EF3C3F4D6(iParam0, iLocal_938, -1, 0);
			}
		}
	}
}

void func_138(int iParam0, var uParam1, bool bParam2)//Position - 0x6890
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (bParam2)
		{
			func_139(iParam0, uParam1);
		}
	}
}

void func_139(int iParam0, var uParam1)//Position - 0x68AF
{
	int iVar0;
	
	iVar0 = func_140(0, 3, *uParam1);
	if (iVar0 == 0)
	{
		unk_0x12C9D41D52A560D6(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_a", 8f, -8f, -1, 1, unk_0x5B811202FCBE9E9D(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 1)
	{
		unk_0x12C9D41D52A560D6(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_b", 8f, -8f, -1, 1, unk_0x5B811202FCBE9E9D(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 2)
	{
		unk_0x12C9D41D52A560D6(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_fold_arms", 8f, -8f, -1, 1, unk_0x5B811202FCBE9E9D(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 3)
	{
		unk_0x12C9D41D52A560D6(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_look", 8f, -8f, -1, 1, unk_0x5B811202FCBE9E9D(0f, 1f), 1, 0, 0);
	}
	*uParam1 = iVar0;
}

int func_140(int iParam0, int iParam1, int iParam2)//Position - 0x6984
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (iParam0 == iParam1)
	{
		return 0;
	}
	iVar0 = unk_0x63A6486593EC7EC3(iParam0, iParam1);
	while (iVar0 == iParam2 || iVar1 < 50)
	{
		iVar1++;
		iVar0 = unk_0x63A6486593EC7EC3(iParam0, iParam1);
	}
	return iVar0;
}

void func_141(int iParam0)//Position - 0x69CC
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	
	if (!unk_0x6ADD12BF4D6D2587(iLocal_940[iParam0]))
	{
		return;
	}
	switch (iLocal_936[iParam0])
	{
		case 0:
			if (!unk_0x191BE1BC8F26F3C1(iLocal_939, 0))
			{
				if (!unk_0x88DDBE9908752BF0(iLocal_939, 0))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_940[iParam0]))
					{
						if (iParam0 == 0)
						{
							unk_0xF2163C96119FBF4B(iLocal_940[iParam0], iLocal_939, 1,5f, 0f, 0f, 1f, -1, 1036831949, 1);
						}
						else if (iParam0 == 1)
						{
							if (unk_0xB8DE76287EDC4957(iLocal_1066, 0))
							{
								unk_0x6931076730A4AC5D(&uVar2);
								unk_0x755F86FFB31712D8(0, -1222,992f, -191,0932f, 38,17538f, 1f, 0, 0, 786603, -1082130432);
								unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_GUARD_STAND", 0, 0);
								unk_0x6F8C8278B7C06889(0, iLocal_1066, 30000, 2, 1f, 1, 0);
								unk_0x1B16DD5C115FE009(uVar2);
								unk_0xAB30B1CF01A198C1(iLocal_940[iParam0], uVar2);
								unk_0xFAA3EF7FF92E1F9E(&uVar2);
							}
						}
						iLocal_936[iParam0] = 1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1065;
				iVar1 = 2;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1066;
				iVar1 = 2;
			}
			if (!unk_0x191BE1BC8F26F3C1(iLocal_940[iParam0], 0))
			{
				if (unk_0xB8DE76287EDC4957(iVar0, 0))
				{
					if (!unk_0x191BE1BC8F26F3C1(iLocal_940[iParam0], 0))
					{
						if (!unk_0xA8D0477084E86A92(iLocal_940[iParam0], iVar0, 0))
						{
							if (unk_0x88DDBE9908752BF0(iLocal_939, 0))
							{
								if (unk_0x78F50AA8F955BEFC(iLocal_940[iParam0], -1794415470) != 1)
								{
									unk_0x6F8C8278B7C06889(iLocal_940[iParam0], iVar0, 30000, iVar1, 1f, 1, 0);
								}
							}
						}
						else
						{
							iLocal_936[iParam0] = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1065;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1066;
			}
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (!unk_0x191BE1BC8F26F3C1(iLocal_940[iParam0], 0))
				{
					if (unk_0xA8D0477084E86A92(iLocal_940[iParam0], iVar0, 0) && unk_0xB8DE76287EDC4957(iLocal_1065, 0))
					{
						if (iLocal_959)
						{
							if (!bLocal_989)
							{
								if (unk_0x78F50AA8F955BEFC(iLocal_940[iParam0], 780511057) != 1)
								{
									if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
									{
										if (unk_0x90D5DFB054818BA7(iVar0) < 5f)
										{
											iLocal_936[iParam0] = 5;
										}
									}
									unk_0xD7F5B2902EBBD04E(iLocal_940[iParam0], unk_0xFC1458A37D98B502(), 0, 16);
								}
							}
							else if (unk_0x78F50AA8F955BEFC(iLocal_940[iParam0], 780511057) != 1)
							{
								unk_0xD7F5B2902EBBD04E(iLocal_940[iParam0], unk_0xFC1458A37D98B502(), 0, 16);
							}
						}
					}
					else if (!iLocal_983)
					{
						iLocal_936[iParam0] = 5;
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_940[iParam0]))
			{
				if (unk_0x353094543C6ECFC4(iLocal_940[iParam0]))
				{
					unk_0x6CFCAFBA031AB20A(iLocal_940[iParam0]);
				}
			}
			if (bLocal_984)
			{
				unk_0x6931076730A4AC5D(&uLocal_1072);
				unk_0x16416C5B54FDBCBB(0, 0, 0);
				unk_0xBA54D3D84EF38E3D(0, func_122(), unk_0x63A6486593EC7EC3(2000, 2500), 2048, 4);
				unk_0x4C7AF3B2BE8C3193(0, unk_0xFC1458A37D98B502(), unk_0x63A6486593EC7EC3(15000, 16000), 30f, 1f, 1073741824, 0);
				unk_0x78F763FF6DE9BCA2(0, unk_0xFC1458A37D98B502(), func_122(), 1f, 0, 1056964608, 1082130432, 1, 0, -957453492);
				unk_0x1B16DD5C115FE009(uLocal_1072);
				unk_0xAB30B1CF01A198C1(iLocal_940[iParam0], uLocal_1072);
				unk_0xFAA3EF7FF92E1F9E(&uLocal_1072);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iLocal_940[iParam0]))
			{
				unk_0x4EC2D0046891F1C5(iLocal_940[iParam0], vLocal_1062, 15f, 0, 0);
				unk_0x4F9A62E773100FDC(iLocal_940[iParam0], 1);
				unk_0xAE6EBBBBD8B9FB30(iLocal_940[iParam0], 0, 1);
				unk_0x5C57ECBE59C08573(iLocal_940[iParam0], 2f);
				if (!iLocal_956 && !unk_0x88DDBE9908752BF0(iLocal_940[iParam0], 0))
				{
					unk_0x6931076730A4AC5D(&uLocal_1072);
					if (unk_0x3AB6A1A9084FB0A4(iLocal_939))
					{
						unk_0x12C9D41D52A560D6(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1250, 0, 0, 0, 0, 0);
						unk_0xCDACC23C56C1F7F5(0, func_122(), 3000, 0, 1);
						unk_0x9627C22EF3C3F4D6(0, unk_0xFC1458A37D98B502(), -1, 0);
					}
					else
					{
						unk_0x12C9D41D52A560D6(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 700, 0, 0, 0, 0, 0);
						unk_0xF2163C96119FBF4B(0, iLocal_939, 1,5f, 0f, 0f, 2f, -1, 1036831949, 1);
					}
					unk_0x1B16DD5C115FE009(uLocal_1072);
					iLocal_956 = 1;
				}
				else
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_1065) && unk_0xB8DE76287EDC4957(iLocal_1065, 0))
					{
						vVar4 = { unk_0xDCD8BDD2E10C660E(iLocal_1065, unk_0xD323488FDDE4A80F(iLocal_1065, "wheel_lr")) };
						vVar5 = { unk_0xB3328BA8976B416C(iLocal_1065, 1) };
						vVar5 = { vVar4 - vVar5 };
						unk_0x31285BC066B7B5D6(iLocal_940[iParam0], iLocal_1065, vVar5, 1,5f, 0);
					}
					unk_0x6931076730A4AC5D(&uLocal_1072);
					unk_0x16416C5B54FDBCBB(0, 0, 0);
					if (unk_0x3AB6A1A9084FB0A4(iLocal_939) && !func_44(func_142(), vVar4, 0))
					{
						unk_0x1D077D3591C6FFA7(0, vVar4, func_122(), 2f, 0, 0,5f, 4f, 1, 0, 0, -957453492);
						unk_0x7C7B3B9FE1579DA8(0, vVar4, -1, 0, 0,25f, 0, 0, 0, 1);
					}
					else
					{
						unk_0xCDACC23C56C1F7F5(0, func_122(), 1500, 1, 0);
						if (!unk_0x191BE1BC8F26F3C1(iLocal_939, 0))
						{
							unk_0xF2163C96119FBF4B(0, iLocal_939, 0f, -1,5f, 0f, 2f, -1, 1036831949, 1);
						}
					}
					unk_0x1B16DD5C115FE009(uLocal_1072);
				}
				if (!unk_0x191BE1BC8F26F3C1(iLocal_940[iParam0], 0))
				{
					unk_0xAB30B1CF01A198C1(iLocal_940[iParam0], uLocal_1072);
				}
				unk_0xFAA3EF7FF92E1F9E(&uLocal_1072);
			}
			iLocal_936[iParam0] = 4;
			break;
		
		case 4:
			if (!unk_0x191BE1BC8F26F3C1(iLocal_940[iParam0], 0))
			{
				if (unk_0xA5F6598E13F98E08(iLocal_940[iParam0], "oddjobs@assassinate@hotel@", "enter", 3))
				{
					fVar3 = unk_0x7A70772AE40E3821(iLocal_940[iParam0], "oddjobs@assassinate@hotel@", "enter");
					if (fVar3 < 0,5f)
					{
						unk_0xCA854FCB18A4FD22(iLocal_940[iParam0], "oddjobs@assassinate@hotel@", "enter", 3,5f);
					}
					else
					{
						unk_0xCA854FCB18A4FD22(iLocal_940[iParam0], "oddjobs@assassinate@hotel@", "enter", 1f);
					}
				}
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1065;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1066;
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_939))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_940[iParam0]))
				{
					if (unk_0x88DDBE9908752BF0(iLocal_939, 0))
					{
						unk_0xD7F5B2902EBBD04E(iLocal_940[iParam0], iLocal_938, 0, 16);
					}
					else
					{
						unk_0x2C85E478535743C1(iLocal_940[iParam0], iLocal_939, unk_0xFC1458A37D98B502(), 3f, 1, 0,005f, 1082130432, 1, 0, -957453492);
					}
				}
				iLocal_936[iParam0] = 6;
			}
			else if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (unk_0x90D5DFB054818BA7(iVar0) < 5f)
				{
					func_121(iLocal_940[iParam0]);
					iLocal_936[iParam0] = 6;
				}
				else if (unk_0x78F50AA8F955BEFC(iLocal_940[iParam0], 780511057) != 1)
				{
					unk_0xD7F5B2902EBBD04E(iLocal_940[iParam0], iLocal_938, 0, 16);
				}
			}
			else
			{
				func_121(iLocal_940[iParam0]);
				iLocal_936[iParam0] = 6;
			}
			break;
		
		case 6:
			func_2(iLocal_940[iParam0]);
			func_94(iLocal_940[iParam0]);
			break;
	}
	if (!iLocal_959)
	{
		if (iLocal_983)
		{
			if (iLocal_936[iParam0] != 3 && iLocal_936[iParam0] != 4)
			{
				iLocal_936[iParam0] = 3;
			}
		}
		else if (func_131(iLocal_940[iParam0]))
		{
			iLocal_959 = 1;
		}
	}
	else if (iLocal_936[iParam0] < 5)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_940[iParam0]))
		{
			if (unk_0x353094543C6ECFC4(iLocal_940[iParam0]))
			{
				unk_0x6CFCAFBA031AB20A(iLocal_940[iParam0]);
			}
			unk_0x7CC6FC1BBB113002(iLocal_940[iParam0]);
			unk_0x4F9A62E773100FDC(iLocal_940[iParam0], 2);
			unk_0xAE6EBBBBD8B9FB30(iLocal_940[iParam0], 13, 1);
		}
		iLocal_936[iParam0] = 5;
	}
}

Vector3 func_142()//Position - 0x7152
{
	vector3 vVar0;
	
	return vVar0;
}

int func_143(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x715E
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x98EC0789D9F0703B();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (!unk_0x48253D71C3FC0054(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x36EE765E851207BF(iParam0, 1);
			}
			else
			{
				unk_0xDE82468C21A54EFA(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0xFC583ECBA11F5D22(iParam0, iParam2);
			unk_0xC1D7C47530C3F5D1(iParam0, fParam6);
			if (unk_0xA6DECE14FC9A8C51(*uParam1))
			{
				unk_0xF27F72CA15E148EE(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x0BAF2928041A6C65(iParam0, iParam9);
		}
		unk_0xA0BF5158BEAE8C9B(iParam0, iParam4);
		unk_0xD73FCB9663FBC508(iParam0, iParam5);
		*uParam1 = unk_0x0B2160EA38790943(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xA6DECE14FC9A8C51(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x0C71C8E276E3EC54(*uParam1, iParam8);
				}
				if (!unk_0xAB019B170BF1309C(sParam7))
				{
					unk_0xDFC5BBDAEC7D6330("STRING");
					if (bParam10)
					{
						unk_0x854FACC4E5F40C82(sParam7);
					}
					else
					{
						unk_0xA6D2B267C377D7B2(sParam7);
					}
					unk_0x476C008681363650(*uParam1);
				}
				unk_0xF27F72CA15E148EE(*uParam1, 7);
			}
		}
		if (!unk_0xC80D31E4B587871C(uParam1->f_6, 2))
		{
			if (unk_0xA6DECE14FC9A8C51(*uParam1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x88DDBE9908752BF0(iParam0, 0))
		{
			uParam1->f_1 = unk_0xB683B450B8E9F408(iParam0);
			if (!unk_0xC80D31E4B587871C(uParam1->f_6, 3))
			{
				if (unk_0xA6DECE14FC9A8C51(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x0C71C8E276E3EC54(uParam1->f_1, iParam8);
					}
					if (!unk_0xAB019B170BF1309C(sParam7))
					{
						unk_0xDFC5BBDAEC7D6330("STRING");
						if (bParam10)
						{
							unk_0x854FACC4E5F40C82(sParam7);
						}
						else
						{
							unk_0xA6D2B267C377D7B2(sParam7);
						}
						unk_0x476C008681363650(uParam1->f_1);
					}
					unk_0xF27F72CA15E148EE(uParam1->f_1, 7);
					unk_0x872F1C1F8587CCC7(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xA6DECE14FC9A8C51(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x0EE72DB1CD8A3B86(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xA6DECE14FC9A8C51(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_144()//Position - 0x7335
{
	var uVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iLocal_939))
	{
		vLocal_1062 = { unk_0xB3328BA8976B416C(iLocal_939, 0) };
	}
	switch (iLocal_935)
	{
		case 0:
			if (!unk_0x191BE1BC8F26F3C1(iLocal_939, 0))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_1065, 0) && !unk_0x191BE1BC8F26F3C1(iLocal_941[0], 0))
				{
					if (!unk_0xA8D0477084E86A92(iLocal_939, iLocal_1065, 0))
					{
						if (unk_0x78F50AA8F955BEFC(iLocal_939, -1794415470) != 1)
						{
							if (!iLocal_959 && !iLocal_983)
							{
								unk_0x6F8C8278B7C06889(iLocal_939, iLocal_1065, 30000, 1, 1f, 1, 0);
							}
							else
							{
								unk_0x6F8C8278B7C06889(iLocal_939, iLocal_1065, 30000, 1, 2f, 1, 0);
							}
							if (!func_52(&iLocal_1090))
							{
								func_49(&iLocal_1090);
							}
							else
							{
								func_50(&iLocal_1090);
							}
						}
						if (!iLocal_985)
						{
							if (func_52(&iLocal_1090))
							{
								if (func_46(&iLocal_1090) > 3,5f)
								{
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_939))
									{
										func_29(&uLocal_1112, 4, iLocal_939, "OJAva_TARGET", 0, 1);
										if (func_6(&uLocal_1112, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
										{
											iLocal_985 = 1;
										}
									}
								}
							}
						}
						if (func_147(iLocal_939))
						{
							func_3();
							iLocal_935 = 4;
						}
					}
					else
					{
						bLocal_962 = true;
						iLocal_935 = 1;
					}
				}
				else
				{
					iLocal_935 = 4;
				}
			}
			break;
		
		case 1:
			if (!iLocal_985)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_939))
				{
					func_29(&uLocal_1112, 4, iLocal_939, "OJAva_TARGET", 0, 1);
					if (func_6(&uLocal_1112, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
					{
						iLocal_985 = 1;
					}
				}
			}
			if (!iLocal_1004)
			{
				if (func_146())
				{
					if (func_24(iLocal_939, unk_0xFC1458A37D98B502(), 1) <= 5f && !func_22())
					{
						if (func_30(25f, 1) == 0)
						{
							if (func_145())
							{
								iLocal_1004 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x191BE1BC8F26F3C1(iLocal_939, 0))
			{
				if (unk_0xA8D0477084E86A92(iLocal_939, iLocal_1065, 0))
				{
					if (unk_0x78F50AA8F955BEFC(iLocal_939, -828834893) != 1)
					{
						unk_0x16416C5B54FDBCBB(iLocal_939, 0, 256);
					}
				}
				else if (!bLocal_989)
				{
					unk_0x5C57ECBE59C08573(iLocal_939, 2f);
					unk_0xFAA3EF7FF92E1F9E(&uVar0);
					unk_0x6931076730A4AC5D(&uVar0);
					unk_0x12C9D41D52A560D6(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					unk_0xD68E88A8E0BE8697(0, iLocal_938, 200f, -1, 0, 0);
					unk_0x1B16DD5C115FE009(uVar0);
					if (!unk_0x191BE1BC8F26F3C1(iLocal_939, 0))
					{
						unk_0xAB30B1CF01A198C1(iLocal_939, uVar0);
					}
					unk_0xFAA3EF7FF92E1F9E(&uVar0);
					bLocal_989 = true;
				}
				else if (unk_0x78F50AA8F955BEFC(iLocal_939, 1435919172) != 1)
				{
					unk_0xD68E88A8E0BE8697(iLocal_939, iLocal_938, 200f, -1, 0, 0);
				}
				if (!iLocal_1004)
				{
					if (!func_22() && !unk_0x23F2F89E3D1CB7C4())
					{
						func_6(&uLocal_1112, "OJASAUD", "OJASva_TARG2", 9, 0, 0, 0);
						iLocal_1004 = 1;
					}
				}
			}
			break;
	}
	if (!iLocal_959)
	{
		if (iLocal_983)
		{
		}
		else if (func_131(iLocal_939) || iLocal_1013)
		{
			iVar1 = func_30(1116471296, 1);
			if (iVar1 != 0)
			{
				func_110(unk_0xB3328BA8976B416C(iVar1, 1), 1097859072, 1116471296);
			}
			if (!func_109())
			{
				iLocal_959 = 1;
			}
		}
	}
}

int func_145()//Position - 0x765C
{
	switch (iLocal_1034)
	{
		case 0:
			if (!func_22())
			{
				func_27(&uLocal_1112, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_1", 8, 0, 0);
				func_50(&iLocal_1090);
				iLocal_1034++;
			}
			break;
		
		case 1:
			if (!func_22() && func_46(&iLocal_1090) > 7f)
			{
				func_27(&uLocal_1112, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_2", 8, 0, 0);
				func_50(&iLocal_1090);
				iLocal_1034++;
			}
			break;
		
		case 2:
			if (!func_22() && func_46(&iLocal_1090) > 8f)
			{
				func_27(&uLocal_1112, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_3", 8, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_146()//Position - 0x7727
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iLocal_1065, 0))
	{
		iVar0 = unk_0x317536BCEA8FA6B0(iLocal_1065, -1, 0);
		if (iVar0 == 0 || (iVar0 != 0 && unk_0x3AB6A1A9084FB0A4(iVar0)))
		{
			iVar0 = unk_0x317536BCEA8FA6B0(iLocal_1065, 0, 0);
			if (iVar0 == 0 || (iVar0 != 0 && unk_0x3AB6A1A9084FB0A4(iVar0)))
			{
				iVar0 = unk_0x317536BCEA8FA6B0(iLocal_1065, 2, 0);
				if (iVar0 == 0 || (iVar0 != 0 && unk_0x3AB6A1A9084FB0A4(iVar0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_147(int iParam0)//Position - 0x77B4
{
	var uVar0;
	
	if ((iLocal_959 || iLocal_983) || bLocal_984)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			if (func_22())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!unk_0x88DDBE9908752BF0(iParam0, 0))
			{
				if (!bLocal_989)
				{
					unk_0xFAA3EF7FF92E1F9E(&uVar0);
					unk_0x6931076730A4AC5D(&uVar0);
					unk_0x12C9D41D52A560D6(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					unk_0xD68E88A8E0BE8697(0, iLocal_938, 200f, -1, 0, 0);
					unk_0x1B16DD5C115FE009(uVar0);
					if (!unk_0x191BE1BC8F26F3C1(iLocal_939, 0))
					{
						unk_0xAB30B1CF01A198C1(iLocal_939, uVar0);
					}
					unk_0xFAA3EF7FF92E1F9E(&uVar0);
					bLocal_989 = true;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_148()//Position - 0x7865
{
	if (!iLocal_990)
	{
		if (iLocal_931 > 15)
		{
			unk_0x8810DC630928B398("ASS1_ALERT");
			iLocal_990 = 1;
		}
	}
	if (!iLocal_991)
	{
		if (iLocal_959 && !func_22())
		{
			func_441();
			iLocal_991 = 1;
			if (!iLocal_990)
			{
				unk_0x8810DC630928B398("ASS1_ALERT");
				iLocal_990 = 1;
			}
		}
	}
	func_440();
	switch (iLocal_931)
	{
		case 3:
			if (func_513())
			{
				iLocal_931 = 4;
				break;
			}
			func_439();
			func_437();
			break;
		
		case 4:
			if (func_513())
			{
				if (func_512())
				{
					iLocal_978 = 1;
				}
				bLocal_967 = true;
			}
			func_436();
			func_435();
			func_434();
			func_433(1);
			func_432();
			func_521(&Local_320, 2);
			iLocal_931 = 5;
			break;
		
		case 5:
			if (func_431())
			{
				iLocal_931 = 6;
			}
			break;
		
		case 6:
			func_430();
			func_429();
			if (bLocal_967)
			{
				if (Global_104555.f_19933.f_5 != 0f)
				{
					func_51(&iLocal_1084, Global_104555.f_19933.f_5);
				}
				iLocal_1029 = func_507();
				if (Global_87155)
				{
					if (iLocal_1029 <= 2)
					{
						iLocal_1029++;
					}
				}
				if (iLocal_1029 == 0)
				{
					func_428();
				}
				else if (iLocal_1029 == 1)
				{
					func_427();
				}
				else if (iLocal_1029 == 2)
				{
					func_423();
				}
			}
			else
			{
				if (!func_52(&iLocal_1084))
				{
					func_49(&iLocal_1084);
					Global_104555.f_19933.f_5 = 0f;
				}
				iLocal_931 = 7;
			}
			break;
		
		case 7:
			func_417();
			func_402();
			break;
		
		case 8:
			func_368();
			break;
		
		case 9:
			func_417();
			func_367();
			func_276();
			break;
		
		case 10:
			func_367();
			func_272();
			break;
		
		case 11:
			func_258();
			func_257();
			break;
		
		case 12:
			func_256();
			func_257();
			break;
		
		case 13:
			func_252();
			func_257();
			break;
		
		case 15:
			func_250();
			break;
		
		case 16:
			func_247();
			break;
		
		case 17:
			func_241();
			break;
		
		case 18:
			func_149();
			break;
	}
}

void func_149()//Position - 0x7A85
{
	unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
	func_150();
}

void func_150()//Position - 0x7A99
{
	func_240();
	switch (iLocal_1035)
	{
		case 0:
			if (!iLocal_331)
			{
				if (iLocal_932 == 1)
				{
					bLocal_329 = true;
					func_239();
				}
				Global_104555.f_19933.f_5 = func_46(&iLocal_1084);
				fLocal_326 = Global_104555.f_19933.f_5;
				func_232();
				iLocal_331 = 1;
				iLocal_1035 = 1;
			}
			break;
		
		case 1:
			if (!iLocal_1012)
			{
				unk_0xA212266606E6ECA8("FRANKLIN_BIG_01");
				iLocal_1012 = 1;
			}
			if (func_228(&uLocal_342, 1, 0) && unk_0xEB55C9C28A1E0326())
			{
				func_227(&uLocal_1289, 0, 0, 0, 1);
				func_226(&uLocal_1289, "ASS_VA_CONT", 2, 215, 1, 1, 0);
				func_226(&uLocal_1289, "ES_XPAND", 2, 216, 1, 1, 0);
				system::settimera(0);
				iLocal_1035 = 2;
			}
			break;
		
		case 2:
			if (func_201(&uLocal_342, 0, 1065353216, 0, 0, 0))
			{
				bLocal_1010 = true;
			}
			if (!bLocal_1010)
			{
				func_193(&uLocal_1289, 1128792064, 1, 0, 1, 1065353216);
			}
			if (unk_0xE8C126B7ADBB9D63(2, 215) || unk_0x4CD14B4B1E8BD8BA(2, 200))
			{
				if (!bLocal_1010)
				{
					bLocal_1010 = true;
					func_192(&uLocal_342);
				}
			}
			if (bLocal_1010)
			{
				if (func_201(&uLocal_342, 0, 1065353216, 0, 0, 0))
				{
					func_190(&uLocal_342);
					Global_104555.f_19933++;
					func_189();
					func_155(Local_55);
					func_153(0, 0);
					func_151();
					func_514();
				}
			}
			break;
	}
}

void func_151()//Position - 0x7C0C
{
	func_152();
}

int func_152()//Position - 0x7C19
{
	if (func_40(0))
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

void func_153(bool bParam0, int iParam1)//Position - 0x7C64
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
		if ((func_40(0) && Global_71102.f_1 == 1) && func_154(Global_71102))
		{
		}
		else
		{
			Global_55903 = 1;
		}
	}
	if (Global_104555.f_9055 || func_40(0))
	{
		iVar0 = func_39();
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

int func_154(int iParam0)//Position - 0x7D3A
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

void func_155(struct<25> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14)//Position - 0x7D78
{
	float fVar0;
	
	fVar0 = (1f + func_188());
	fVar0 = (fVar0 * Param0.f_23);
	if (func_118(Global_104555.f_19933.f_1, 4194304))
	{
		fVar0 = (fVar0 + Param0.f_24);
	}
	func_156(func_13(), 96, system::round(fVar0), 0, 0);
}

void func_156(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x7DC3
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
	func_157(Global_104555.f_28020[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_157(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x7EAA
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_187();
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
					func_186(99, 1);
					func_185(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_185(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_185(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_170(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_166(5))
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
							func_185(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_185(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_185(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_166(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_185(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_185(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_185(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_185(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_185(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_185(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_185(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_185(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_185(joaat("sp2_money_spent_property"), iParam3);
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
									func_185(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_185(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_185(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_185(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_185(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_185(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_166(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_185(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_185(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_185(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_185(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_185(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_185(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_165(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_186(95, iParam3);
					break;
				
				case 1:
					func_186(97, iParam3);
					break;
				
				case 2:
					func_186(96, iParam3);
					break;
			}
			func_186(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_160(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_160(iVar1);
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
					func_185(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_185(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_185(joaat("sp2_total_cash_earned"), iParam3);
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
	func_159(iParam0);
	if (Global_35861 == 15)
	{
		func_158(0);
	}
	return 1;
}

void func_158(bool bParam0)//Position - 0x84AA
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

void func_159(int iParam0)//Position - 0x872C
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

void func_160(int iParam0)//Position - 0x8786
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_163(129, 0, -1, 1);
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
	else if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0) || unk_0xC80D31E4B587871C(Global_2097152[func_162() /*12130*/].f_7676.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Global_2097152[func_162() /*12130*/].f_7676.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xE3C33644878DCCFD("COUP_RED");
		unk_0xA6D2B267C377D7B2(func_161(iParam0));
		unk_0x9F42263EE935D84B(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_161(int iParam0)//Position - 0x885C
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

int func_162()//Position - 0x88E3
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_163(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x88F0
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
		iParam2 = func_164();
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

int func_164()//Position - 0x8DBC
{
	return Global_1312736;
}

void func_165(int iParam0)//Position - 0x8DC8
{
	func_186(93, iParam0);
	func_186(29, iParam0);
	func_186(30, iParam0);
}

bool func_166(int iParam0)//Position - 0x8DE8
{
	if (iParam0 == 8)
	{
		return func_167(129, -1, -1);
	}
	if (!unk_0x3A711520F83BAE98())
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2097152[func_162() /*12130*/].f_7676.f_10, iParam0);
}

int func_167(int iParam0, int iParam1, int iParam2)//Position - 0x8E36
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_164();
	}
	iVar1 = func_169(iParam0, iParam1);
	uVar2 = func_168(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_168(int iParam0)//Position - 0x8E73
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

int func_169(int iParam0, int iParam1)//Position - 0x9133
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_164();
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

int func_170(bool bParam0)//Position - 0x93D5
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
		func_184(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_171(27, 1);
	return 1;
}

int func_171(int iParam0, int iParam1)//Position - 0x948C
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_172(iParam0, iParam1);
}

int func_172(int iParam0, int iParam1)//Position - 0x94A7
{
	if (func_18(14) && !func_183(iParam0))
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
	if (func_182(&Global_4267379))
	{
		if (func_180(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_173(&Global_4267379, iParam0))
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

int func_173(var uParam0, int iParam1)//Position - 0x9544
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_18(14) && !func_183(iParam1))
	{
		return 0;
	}
	if (func_180(uParam0, iParam1))
	{
		return 0;
	}
	if (func_179(uParam0) < 0f)
	{
		func_178(uParam0, 0);
	}
	func_176(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_174(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_174(var uParam0, int iParam1)//Position - 0x95F5
{
	int iVar0;
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_18(14) && !func_183(iParam1))
	{
		return 0;
	}
	if (func_180(uParam0, iParam1))
	{
		return 0;
	}
	if (func_179(uParam0) < 0f)
	{
		func_178(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_175(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_175(var uParam0, int iParam1)//Position - 0x9670
{
	return (*uParam0)[iParam1] == 78;
}

void func_176(var uParam0)//Position - 0x9681
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_177(uParam0, iVar0);
		iVar0++;
	}
	func_178(uParam0, (Global_4267378 - 0,5f));
}

void func_177(var uParam0, int iParam1)//Position - 0x96B5
{
	(*uParam0)[iParam1] = 78;
}

void func_178(var uParam0, float fParam1)//Position - 0x96C5
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

float func_179(var uParam0)//Position - 0x96E2
{
	return uParam0->f_80;
}

bool func_180(var uParam0, int iParam1)//Position - 0x96EE
{
	return func_181(uParam0, iParam1) != -1;
}

int func_181(var uParam0, int iParam1)//Position - 0x9700
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

bool func_182(var uParam0)//Position - 0x972D
{
	return uParam0->f_79 == 1;
}

int func_183(int iParam0)//Position - 0x973B
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

int func_184(int iParam0, int iParam1)//Position - 0x978B
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

void func_185(int iParam0, int iParam1)//Position - 0x97DC
{
	int iVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xBFFF62F75445099D(iParam0, iVar0, 1);
}

void func_186(int iParam0, int iParam1)//Position - 0x97FF
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

void func_187()//Position - 0x985C
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

float func_188()//Position - 0x98D1
{
	float fVar0;
	
	fVar0 = 0f;
	if (func_118(Global_104555.f_19933.f_1, 8192))
	{
		fVar0 = (fVar0 + 0,2f);
	}
	if (func_118(Global_104555.f_19933.f_1, 16384))
	{
		fVar0 = (fVar0 + 0,2f);
	}
	if (func_118(Global_104555.f_19933.f_1, 32768))
	{
		fVar0 = (fVar0 + 0,2f);
	}
	if (func_118(Global_104555.f_19933.f_1, 65536))
	{
		fVar0 = (fVar0 + 0,1f);
	}
	if (func_118(Global_104555.f_19933.f_1, 131072))
	{
		fVar0 = (fVar0 + 0,1f);
	}
	if (func_118(Global_104555.f_19933.f_1, 262144))
	{
		fVar0 = (fVar0 + 0,1f);
	}
	if (func_118(Global_104555.f_19933.f_1, 524288))
	{
		fVar0 = (fVar0 + 0,333f);
	}
	if (func_118(Global_104555.f_19933.f_1, 1048576))
	{
		fVar0 = (fVar0 + 0,333f);
	}
	if (func_118(Global_104555.f_19933.f_1, 2097152))
	{
		fVar0 = (fVar0 + 0,333f);
	}
	return fVar0;
}

void func_189()//Position - 0x99EA
{
	func_521(&(Global_104555.f_19933.f_1), 2048);
}

void func_190(var uParam0)//Position - 0x9A02
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
				if (unk_0x3E9CABD07B829173() && !func_40(0))
				{
					unk_0x59C3AC31C7544A28(800);
				}
			}
		}
	}
	func_191(0);
}

void func_191(int iParam0)//Position - 0x9AA9
{
	Global_71116 = iParam0;
	Global_71117 = iParam0;
}

void func_192(var uParam0)//Position - 0x9ABD
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

void func_193(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x9AF0
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
	if (!func_200(uParam0))
	{
		return;
	}
	unk_0x2F18DFDBFA4AA0E4();
	unk_0x5A66A86A47AC3B57(iParam2);
	if (!func_199(uParam0->f_1, 256) || (func_199(uParam0->f_1, 8192) && unk_0x8CFF76532FEF34D4(2)))
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
			unk_0x1869584A8A72FEDD(func_199(uParam0->f_1, 4096));
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
							func_198(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xAB019B170BF1309C(uParam0->f_2[iVar6 /*15*/]))
					{
						func_197(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0xB9D80B12FE4456A5())
					{
						if (func_199(uParam0->f_1, 4096))
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
		fVar8 = func_196(bParam4, func_196(func_199(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x008F3E3CC076EA0E(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x9499D7329FB840A2(fVar8);
		unk_0x271AA5469AF471B3();
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x9499D7329FB840A2(0f);
		unk_0x9499D7329FB840A2(0f);
		unk_0x9499D7329FB840A2(0f);
		unk_0x9499D7329FB840A2(80f);
		unk_0x271AA5469AF471B3();
		func_195(&(uParam0->f_1), 256);
		func_194(&(uParam0->f_1), 128);
	}
	unk_0x28E092B1E386EB67(*uParam0, 255, 255, 255, 0, 0);
}

void func_194(var uParam0, int iParam1)//Position - 0x9DB0
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_195(var uParam0, int iParam1)//Position - 0x9DC5
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_196(bool bParam0, float fParam1, float fParam2)//Position - 0x9DD6
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_197(char* sParam0)//Position - 0x9DED
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_198(char* sParam0)//Position - 0x9DFF
{
	unk_0x8686005F83E832AE(sParam0);
}

bool func_199(var uParam0, int iParam1)//Position - 0x9E0D
{
	return (uParam0 && iParam1) != 0;
}

int func_200(var uParam0)//Position - 0x9E1C
{
	if (*uParam0 != 0)
	{
		if (unk_0x34D11AB5BA7922C2(*uParam0))
		{
			func_195(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

int func_201(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x9E43
{
	bool bVar0;
	
	if (unk_0x4B64A8D052027742() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = unk_0x4B64A8D052027742();
	if (!unk_0x3A711520F83BAE98())
	{
		if (unk_0xA7E3B4C3A60721A5(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (unk_0x12A8D89D51ADF8A6(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (unk_0x3E9CABD07B829173() || unk_0x2D0EF1D268F33F25())
		{
			unk_0x7635EA803CE40962(true);
			uParam0->f_564 = 1;
		}
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (!unk_0x3A711520F83BAE98())
		{
			if (unk_0x8E1DC2E7000CD6A1(unk_0x9EB17624F44A8DA4()))
			{
				unk_0x54F90CB32317E720(unk_0x9EB17624F44A8DA4());
			}
		}
	}
	unk_0x553231E7FC3C570D(7);
	unk_0x553231E7FC3C570D(8);
	unk_0x553231E7FC3C570D(9);
	unk_0x553231E7FC3C570D(6);
	unk_0x553231E7FC3C570D(19);
	unk_0x4FB260623DD93924(2, 19, 1);
	unk_0x4FB260623DD93924(0, 37, 1);
	unk_0x4FB260623DD93924(0, 21, 1);
	unk_0x4FB260623DD93924(0, 28, 1);
	unk_0x4FB260623DD93924(0, 29, 1);
	unk_0x4FB260623DD93924(0, 171, 1);
	func_223(0);
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (unk_0xABB93C2E6C591375() || (unk_0x3E9CABD07B829173() && !unk_0x9BB64DDCD9C7B076()))
		{
			unk_0x15F5D3F996CB934F();
		}
	}
	Global_36411 = 1;
	if (!uParam0->f_563)
	{
		switch (func_16(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B())))
		{
			case 1:
				unk_0xA91E83FF512776B6("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0xA91E83FF512776B6("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0xA91E83FF512776B6("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + system::floor((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_222(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_222(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_222((25f * 0,5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_222(30f) - func_222(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_191(1);
		uParam0->f_572 = (uParam0->f_572 + system::round((0f + (1000f * system::timestep()))));
		func_204(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0,225f) * system::timestep())));
			}
		}
		uParam0->f_30 = func_203(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0,75f;
					unk_0x008F3E3CC076EA0E(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x271AA5469AF471B3();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1,215f) * system::timestep())));
			}
		}
		uParam0->f_547 = func_203(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0,7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0x008F3E3CC076EA0E(uParam0->f_1, "TRANSITION_OUT");
			unk_0x271AA5469AF471B3();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0,3f) * system::timestep())));
				}
			}
		}
		uParam0->f_548 = func_203(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (unk_0x8CFF76532FEF34D4(2))
			{
				if (unk_0x34D11AB5BA7922C2(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_202(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0xE8C126B7ADBB9D63(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && unk_0x34D11AB5BA7922C2(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					unk_0x008F3E3CC076EA0E(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x271AA5469AF471B3();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0,75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0x008F3E3CC076EA0E(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x271AA5469AF471B3();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0,75f;
				}
				func_202(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0,75f;
					unk_0x008F3E3CC076EA0E(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x271AA5469AF471B3();
				}
				uParam0->f_559 = func_203((uParam0->f_559 + (((1f / 0,3f) * uParam0->f_573) * system::timestep())), 0f, 1f);
				uParam0->f_573 = func_203((uParam0->f_573 + 0,07f), 0,75f, 1,15f);
			}
		}
		else
		{
			uParam0->f_559 = func_203((uParam0->f_559 - ((((1f / 0,3f) * uParam0->f_573) * 0,01f) * system::timestep())), 0f, 1f);
			uParam0->f_573 = func_203((uParam0->f_573 + 0,07f), 0,75f, 1,15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (unk_0xE8C126B7ADBB9D63(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			system::wait(0);
		}
		else
		{
			if (!bVar0)
			{
				func_191(0);
			}
			return !bVar0;
		}
	}
	func_191(0);
	return 1;
}

void func_202(var uParam0, bool bParam1)//Position - 0xA49C
{
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "CLEAR_ALL");
	unk_0x271AA5469AF471B3();
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x1869584A8A72FEDD(true);
		unk_0x271AA5469AF471B3();
	}
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xD07D5CD276368D36(0);
	func_198(unk_0xC9C4B2A22DE54C69(2, 215, true));
	func_197("ES_HELP");
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0x1869584A8A72FEDD(true);
		unk_0xD07D5CD276368D36(215);
	}
	unk_0x271AA5469AF471B3();
	if (bParam1)
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_4, "SET_DATA_SLOT");
		unk_0xD07D5CD276368D36(1);
		func_198(unk_0xC9C4B2A22DE54C69(2, 216, true));
		func_197("ES_XPAND");
		if (unk_0xB9D80B12FE4456A5())
		{
			unk_0x1869584A8A72FEDD(true);
			unk_0xD07D5CD276368D36(216);
		}
		unk_0x271AA5469AF471B3();
	}
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x271AA5469AF471B3();
}

float func_203(float fParam0, float fParam1, float fParam2)//Position - 0xA560
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

void func_204(var uParam0, float fParam1, bool bParam2)//Position - 0xA587
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	iVar0 = system::round((uParam0->f_547 * 255f));
	fVar1 = (func_221() * 0,25f);
	if (unk_0x34D11AB5BA7922C2(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x008F3E3CC076EA0E(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_197(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_220(&(uParam0->f_13));
				}
				else
				{
					func_197(&(uParam0->f_13));
				}
				if (unk_0x3A711520F83BAE98())
				{
					unk_0xD07D5CD276368D36(150);
				}
				else
				{
					unk_0xD07D5CD276368D36(100);
				}
				unk_0x1869584A8A72FEDD(true);
				if (uParam0->f_556 == 4)
				{
					unk_0xD07D5CD276368D36((uParam0->f_56 - 1));
				}
				else
				{
					unk_0xD07D5CD276368D36(uParam0->f_56);
				}
				unk_0x1869584A8A72FEDD(bParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					unk_0xD07D5CD276368D36(2);
				}
				else
				{
					unk_0xD07D5CD276368D36(69);
				}
				unk_0x271AA5469AF471B3();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				unk_0x008F3E3CC076EA0E(uParam0->f_1, "TRANSITION_UP");
				unk_0x9499D7329FB840A2(0,15f);
				unk_0x1869584A8A72FEDD(true);
				unk_0x271AA5469AF471B3();
				uParam0->f_3 = 1;
			}
		}
		func_219();
		unk_0x28E092B1E386EB67(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0,1388889f + func_222((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0,975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0,3f * func_221());
	if (uParam0->f_12)
	{
		fVar1 = 0,5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_218(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0,006f));
		}
		if (unk_0xB6936205ED728A9D(0) < 1,4f)
		{
			fVar6 = (fVar6 * 1,3f);
		}
		fVar7 = func_218(&(uParam0->f_550));
		fVar8 = (((0,119f + 0,05f) / func_221()) / 2,5f);
		if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
		{
			if (fVar6 < (fVar7 + (2,6f * fVar8)))
			{
				fVar6 = (fVar7 + (2,6f * fVar8));
			}
		}
		else if (uParam0->f_556 == 5)
		{
			if (fVar6 < (fVar7 + (2,6f * fVar8)))
			{
				fVar6 = (fVar7 + (2,6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1,9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0,499f - (fVar6 / 2f)) + 0,006f);
	fVar10 = ((0,499f + (fVar6 / 2f)) - 0,006f);
	unk_0x01B48CB2F72AE113(2, 215);
	unk_0x01B48CB2F72AE113(2, 216);
	unk_0x01B48CB2F72AE113(2, 200);
	unk_0x4FB260623DD93924(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0,95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_88((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0,166f) * system::timestep())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (unk_0x3E9CABD07B829173())
			{
				unk_0x2F18DFDBFA4AA0E4();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0,1f) && uParam0->f_572 <= uParam0->f_558)
			{
				unk_0x553231E7FC3C570D(7);
				unk_0x553231E7FC3C570D(8);
				unk_0x553231E7FC3C570D(9);
				unk_0x553231E7FC3C570D(6);
				unk_0x28E092B1E386EB67(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				unk_0x4FB260623DD93924(0, 140, 1);
				unk_0x4FB260623DD93924(0, 141, 1);
				unk_0x4FB260623DD93924(0, 142, 1);
				unk_0x4FB260623DD93924(2, 188, 1);
				if (unk_0x4CD14B4B1E8BD8BA(2, 188))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					unk_0x4AFBCBFDE748D4E0(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x4FB260623DD93924(2, 187, 1);
				if (unk_0x4CD14B4B1E8BD8BA(2, 187))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					unk_0x4AFBCBFDE748D4E0(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x4FB260623DD93924(2, 202, 1);
				if (unk_0x4CD14B4B1E8BD8BA(2, 202))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					unk_0x4AFBCBFDE748D4E0(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				unk_0x553231E7FC3C570D(7);
				unk_0x553231E7FC3C570D(8);
				unk_0x553231E7FC3C570D(9);
				unk_0x553231E7FC3C570D(6);
				unk_0x4FB260623DD93924(0, 140, 1);
				unk_0x4FB260623DD93924(0, 141, 1);
				unk_0x4FB260623DD93924(0, 142, 1);
				if (unk_0xE8C126B7ADBB9D63(2, 215) || unk_0x4CD14B4B1E8BD8BA(2, 200))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					unk_0x4AFBCBFDE748D4E0(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0x31758B9A51671C43(1, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0xA54B8BFDEBB2AF89(iVar13, iVar14, iVar15, iVar0);
	unk_0xEDC290CB1C56B732(fVar9, fVar10);
	unk_0xA2E2179985C59E40(0);
	unk_0x8D95497078BC0E3B(1f, 0,4f);
	fVar1 = (fVar1 - func_222(6f));
	fVar1 = (fVar1 + (func_222(30f) - func_222((2f * 2f))));
	fVar11 = (fVar2 - func_222((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_203((fVar11 / (0,6f * func_222(25f))), 0f, 1f);
		func_219();
		unk_0x09C2CBFA4CD804AC(0,5f, (fVar1 - (func_222((2f - 0,5f)) - 0,001388889f)), fVar6, func_217(1f), iVar13, iVar14, iVar15, system::round((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_222((2f * 0,3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_222((25f * 0,2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0,3f * func_221())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_203((fVar11 / (0,8f * func_222(25f))), 0f, 1f);
			func_214(uParam0, iVar17, (fVar1 + func_222(2f)), fVar9, fVar10, system::round((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_222(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_222((25f * 0,2f)));
				fVar11 = (fVar2 - (fVar1 - (0,3f * func_221())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_222(2f));
					fVar12 = func_203((fVar11 / (0,6f * func_222(25f))), 0f, 1f);
					func_219();
					unk_0x09C2CBFA4CD804AC(0,5f, (fVar1 + func_222((2f * 0,5f))), fVar6, func_217(1f), iVar13, iVar14, iVar15, system::round((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_222((2f * 0,3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_222((25f * 0,2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_556 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_222((25f * 0,2f)));
		fVar11 = (fVar2 - (fVar1 - (0,3f * func_221())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_222(2f));
			fVar12 = func_203((fVar11 / (0,6f * func_222(25f))), 0f, 1f);
			func_219();
			unk_0x09C2CBFA4CD804AC(0,5f, (fVar1 + func_222((2f * 0,5f))), fVar6, func_217(1f), iVar13, iVar14, iVar15, system::round((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_222((25f * 0,2f)));
		fVar11 = (fVar2 - (fVar1 - (0,3f * func_221())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_203((fVar11 / (0,8f * func_222(25f))), 0f, 1f);
			unk_0xA54B8BFDEBB2AF89(iVar13, iVar14, iVar15, system::round((fVar12 * IntToFloat(iVar0))));
			func_207(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0xC45D692E0BD4797B() == 0)
			{
				fVar20 = (fVar9 + ((0,119f / func_221()) / 2,5f));
				fVar21 = (fVar10 - ((0,119f / func_221()) / 2,5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0,119f + 0,05f) / func_221()) / 2,5f));
					fVar21 = (fVar10 - (((0,119f + 0,05f) / func_221()) / 2,5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0,28f) + 0,006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0,28f) + 0,006f) / 2f));
			}
			if (uParam0->f_556 != 3)
			{
				unk_0xEDC290CB1C56B732(fVar20, fVar21);
				unk_0xA2E2179985C59E40(1);
			}
			else
			{
				fVar20 = 0,5f;
				unk_0xA2E2179985C59E40(0);
			}
			unk_0x8D95497078BC0E3B(1f, 0,4f);
			func_206(&(uParam0->f_550), fVar20, (fVar1 + func_222((2f * 2f))), 0, 0, 0);
			unk_0xEDC290CB1C56B732(fVar20, fVar21);
			unk_0xA2E2179985C59E40(2);
			unk_0x8D95497078BC0E3B(1f, 0,4f);
			unk_0x0BC5BE26BB7006D2(0);
			func_219();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0,28f) + 0,006f));
			unk_0xEDC290CB1C56B732(fVar20, fVar22);
			unk_0xA54B8BFDEBB2AF89(iVar13, iVar14, iVar15, system::round((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					unk_0x76CCD673085CBF57("PERCENTAGE");
					unk_0x6223D539BCD39E76(uParam0->f_554);
					unk_0xD3DA9EADE295C3C5(fVar20, (fVar1 + func_222((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x76CCD673085CBF57("FO_TWO_NUM");
					unk_0x6223D539BCD39E76(uParam0->f_554);
					unk_0x6223D539BCD39E76(uParam0->f_555);
					unk_0xD3DA9EADE295C3C5(fVar20, (fVar1 + func_222((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x76CCD673085CBF57("MTPHPER_XPNO");
					unk_0x6223D539BCD39E76(uParam0->f_554);
					unk_0xD3DA9EADE295C3C5(fVar20, (fVar1 + func_222((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0x76CCD673085CBF57("ESDOLLA");
					unk_0xC4DA7D522991B465(uParam0->f_554, 1);
					unk_0xD3DA9EADE295C3C5(fVar20, (fVar1 + func_222((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar25 = 255;
				iVar26 = 255;
				iVar27 = 255;
				iVar28 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						unk_0x31758B9A51671C43(107, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 3:
						unk_0x31758B9A51671C43(109, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 2:
						unk_0x31758B9A51671C43(108, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0,001388889f * 5f);
				fVar30 = ((0,00078125f * 16f) * 2f);
				fVar31 = ((0,001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_205(4f)) - 0,006f);
				fVar33 = ((fVar1 + func_222(10f)) + fVar29);
				if (uParam0->f_556 == -1)
				{
					fVar32 = (fVar32 - (0,006f * 6f));
				}
				fVar30 = (fVar30 * 0,65f);
				fVar31 = (fVar31 * 0,65f);
				unk_0xEFB3EC0CDCC33841(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, system::round((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_222(30f) - 2f));
		}
	}
}

float func_205(float fParam0)//Position - 0xB217
{
	return (fParam0 * 0,00078125f);
}

void func_206(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)//Position - 0xB227
{
	unk_0x0BC5BE26BB7006D2(iParam3);
	unk_0x8F5DFDE59FA7D0D0(iParam5);
	func_219();
	if (bParam4)
	{
		unk_0x76CCD673085CBF57("STRING");
		unk_0x854FACC4E5F40C82(sParam0);
	}
	else
	{
		unk_0x76CCD673085CBF57(sParam0);
	}
	unk_0xD3DA9EADE295C3C5(fParam1, fParam2, 0);
}

int func_207(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xB264
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_213(iParam0), 64);
	StringCopy(&cVar1, func_210(iParam0, bParam1), 64);
	if (unk_0x8B948C59217A295D(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x5113D2C928A121B2(&iVar2, &iVar3);
			fVar5 = unk_0xB6936205ED728A9D(0);
			if (func_209())
			{
				iVar2 = system::round((system::to_float(iVar3) * fVar5));
			}
			fVar6 = (system::to_float(iVar2) / system::to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_209())
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
		vVar7.x = (vVar7.x * (func_208(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_208(iParam0) / fVar4));
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

float func_208(int iParam0)//Position - 0xB415
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

int func_209()//Position - 0xB4B4
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

var func_210(int iParam0, bool bParam1)//Position - 0xB4E6
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xAB019B170BF1309C(&(Global_17301.f_6719[iParam0 /*16*/])))
	{
		if (unk_0x8B948C59217A295D(&(Global_17301.f_6719[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_212(unk_0x9EB17624F44A8DA4()) };
			if (unk_0xE009D69C861D7648(&Var2, &uVar1))
			{
				return func_211(&uVar1);
			}
		}
		else
		{
			return func_211(&(Global_17301.f_6719[iParam0 /*16*/]));
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

var func_211(var uParam0)//Position - 0xB936
{
	return uParam0;
}

struct<13> func_212(int iParam0)//Position - 0xB940
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

char* func_213(int iParam0)//Position - 0xB957
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xAB019B170BF1309C(&(Global_17301.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x8B948C59217A295D(&(Global_17301.f_5886[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_212(unk_0x9EB17624F44A8DA4()) };
			unk_0xE009D69C861D7648(&Var1, &uVar0);
			return func_211(&uVar0);
		}
		else
		{
			return func_211(&(Global_17301.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_214(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)//Position - 0xB9CC
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0x31758B9A51671C43(1, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, iParam5);
	unk_0xEDC290CB1C56B732(fParam3, fParam4);
	unk_0xA2E2179985C59E40(1);
	unk_0x8D95497078BC0E3B(1f, func_216(14f));
	unk_0x0BC5BE26BB7006D2(0);
	unk_0x8F5DFDE59FA7D0D0(0);
	func_219();
	if (uParam0->f_531[iParam1])
	{
		unk_0x76CCD673085CBF57("STRING");
		unk_0x854FACC4E5F40C82(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0x76CCD673085CBF57(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0x6223D539BCD39E76(uParam0->f_489[iParam1]);
		}
	}
	unk_0xD3DA9EADE295C3C5(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_207(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0xEFB3EC0CDCC33841("CommonMenu", func_210(7, 0), (fParam4 - 0,006f), ((fParam2 + func_222(2f)) + (0,25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0,38f) + 0,006f));
			break;
		
		case 2:
			func_207(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0xEFB3EC0CDCC33841("CommonMenu", func_210(5, 0), (fParam4 - 0,006f), ((fParam2 + func_222(2f)) + (0,25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0,38f) + 0,006f));
			break;
		
		case 3:
			func_207(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0xEFB3EC0CDCC33841("CommonMenu", func_210(6, 0), (fParam4 - 0,006f), ((fParam2 + func_222(2f)) + (0,25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0,38f) + 0,006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0xA2E2179985C59E40(1);
	}
	else
	{
		unk_0xA2E2179985C59E40(2);
	}
	unk_0x8D95497078BC0E3B(1f, func_216(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0xEDC290CB1C56B732(fParam3, (fVar4 - (0,00078125f * 3f)));
	}
	else
	{
		unk_0xEDC290CB1C56B732(fParam3, (fVar4 + (0,00078125f * 2f)));
	}
	unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, iParam5);
	func_215(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_215(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)//Position - 0xBC57
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0x0BC5BE26BB7006D2(0);
	unk_0x8F5DFDE59FA7D0D0(0);
	func_219();
	fVar1 = 0f;
	fVar2 = (8f * 0,00078125f);
	fVar3 = (16f * 0,001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0x8D95497078BC0E3B(1f, func_216(18f));
			unk_0x8F5DFDE59FA7D0D0(4);
			if (iParam0 < 0)
			{
				unk_0x0792909D8327DAEA("ESMINDOLLA");
				unk_0xC4DA7D522991B465((-1 * iParam0), 1);
				fVar1 = unk_0xF2A1AF58CC57C564(0);
			}
			else
			{
				unk_0x0792909D8327DAEA("ESDOLLA");
				unk_0xC4DA7D522991B465(iParam0, 1);
				fVar1 = unk_0xF2A1AF58CC57C564(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0,00078125f));
			unk_0xEFB3EC0CDCC33841("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0,6f)) + (0,001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xEFB3EC0CDCC33841("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0,5f)) - (0,00078125f * 2f)), ((fParam3 + (fVar3 * 0,6f)) + (0,001388889f * 2f)), (fVar1 - (fVar2 * 0,5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xEFB3EC0CDCC33841("CommonMenu", "BettingBox_Right", (fParam2 - (0,00078125f * 4f)), ((fParam3 + (fVar3 * 0,6f)) + (0,001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x8D95497078BC0E3B(1f, func_216(14f));
			break;
	}
	unk_0xF92B835A141C6BDD(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0x76CCD673085CBF57("PERCENTAGE");
			unk_0x6223D539BCD39E76(iParam0);
			break;
		
		case 1:
			unk_0x8F5DFDE59FA7D0D0(5);
			unk_0x76CCD673085CBF57("FO_NUM");
			unk_0x6223D539BCD39E76(iParam0);
			break;
		
		case 2:
			unk_0x8F5DFDE59FA7D0D0(5);
			unk_0x76CCD673085CBF57("FO_TWO_NUM");
			unk_0x6223D539BCD39E76(iParam0);
			unk_0x6223D539BCD39E76(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0x8D95497078BC0E3B(1f, func_216(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0x76CCD673085CBF57("ESMINDOLLA");
				unk_0xC4DA7D522991B465((-1 * iParam0), 1);
			}
			else
			{
				unk_0x76CCD673085CBF57("ESDOLLA");
				unk_0xC4DA7D522991B465(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0x76CCD673085CBF57(sParam4);
			break;
		
		case 7:
			unk_0x76CCD673085CBF57("STRING");
			unk_0x854FACC4E5F40C82(sParam4);
			break;
		
		case 8:
			unk_0x8F5DFDE59FA7D0D0(5);
			unk_0x76CCD673085CBF57("STRING");
			unk_0xFD1DB5DD208735A3(iParam0, 14);
			break;
		
		case 9:
			unk_0x8F5DFDE59FA7D0D0(5);
			unk_0x76CCD673085CBF57("STRING");
			unk_0xFD1DB5DD208735A3(iParam0, 6);
			break;
		
		case 10:
			unk_0x8F5DFDE59FA7D0D0(5);
			unk_0x76CCD673085CBF57("STRING");
			unk_0xFD1DB5DD208735A3(iParam0, 2055);
			break;
		
		case 18:
			unk_0x8F5DFDE59FA7D0D0(5);
			unk_0x76CCD673085CBF57("STRING");
			unk_0xFD1DB5DD208735A3(iParam0, 2055);
			break;
		
		case 12:
			unk_0x76CCD673085CBF57("AHD_DIST");
			unk_0x6223D539BCD39E76(iParam0);
			break;
		
		case 13:
			unk_0x76CCD673085CBF57(sParam4);
			unk_0x6223D539BCD39E76(iParam0);
			unk_0x6223D539BCD39E76(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0x76CCD673085CBF57(sParam4);
			unk_0x6223D539BCD39E76(iParam0);
			unk_0x6223D539BCD39E76(iParam1);
			break;
		
		case 16:
			unk_0x76CCD673085CBF57(sParam4);
			unk_0x6223D539BCD39E76(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0xD3DA9EADE295C3C5((fParam2 - (0,00078125f * 4f)), fParam3, 0);
			unk_0x8D95497078BC0E3B(1f, func_216(14f));
		}
		else
		{
			unk_0xD3DA9EADE295C3C5(fParam2, fParam3, 0);
		}
	}
}

float func_216(float fParam0)//Position - 0xBFD0
{
	return (fParam0 * 0,025f);
}

float func_217(float fParam0)//Position - 0xBFE0
{
	return (fParam0 * 0,0009259259f);
}

float func_218(char* sParam0)//Position - 0xBFF0
{
	unk_0x0792909D8327DAEA(sParam0);
	return (unk_0xF2A1AF58CC57C564(1) / 2f);
}

void func_219()//Position - 0xC009
{
	unk_0x5A66A86A47AC3B57(1);
	if (unk_0x2D0EF1D268F33F25() || unk_0x3E9CABD07B829173())
	{
		unk_0x5A66A86A47AC3B57(7);
	}
	unk_0xAE8C92295C8F2D18(0);
}

void func_220(char* sParam0)//Position - 0xC031
{
	unk_0x8686005F83E832AE(sParam0);
}

float func_221()//Position - 0xC03F
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0xB9D80B12FE4456A5())
	{
	}
	return fVar0;
}

float func_222(float fParam0)//Position - 0xC053
{
	return (fParam0 * 0,001388889f);
}

void func_223(int iParam0)//Position - 0xC063
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_74(0))
		{
			func_224(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

void func_224(int iParam0)//Position - 0xC08C
{
	if (Global_14615)
	{
		func_225(0, 0);
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
	if (!func_10())
	{
		Global_14453.f_1 = 3;
	}
}

void func_225(bool bParam0, bool bParam1)//Position - 0xC0FC
{
	if (bParam0)
	{
		if (func_74(0))
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

int func_226(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xC170
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

void func_227(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xC239
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x4A8BF4917A66587B("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_195(&(uParam0->f_1), 32);
	}
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		func_195(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x6A0C4AD62ABCE665(*uParam0, 1);
		}
	}
	if (unk_0xB9D80B12FE4456A5())
	{
		if (bParam3)
		{
			func_195(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_195(&(uParam0->f_1), 8192);
	}
}

int func_228(var uParam0, bool bParam1, int iParam2)//Position - 0xC2B3
{
	uParam0->f_12 = iParam2;
	func_231(uParam0);
	func_230(uParam0);
	if (unk_0x74C475EB8E73D398(&(uParam0->f_550), "SPR_RESULT") || (unk_0x74C475EB8E73D398(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (unk_0x3A711520F83BAE98())
	{
		unk_0x128A5DCCD09CCA17("MPHud", false);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0x128A5DCCD09CCA17("CommonMenu", false);
		unk_0x128A5DCCD09CCA17("MPLeaderboard", false);
		unk_0x128A5DCCD09CCA17("MPHud", false);
		uParam0->f_1 = unk_0xD704C81492296A37("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0x4A8BF4917A66587B("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0x34D11AB5BA7922C2(uParam0->f_1) || !unk_0xA51ADD51711B4A15("CommonMenu")) || !unk_0xA51ADD51711B4A15("MPLeaderboard")) || !unk_0xA51ADD51711B4A15("MPHud"))
		{
			system::wait(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!unk_0x34D11AB5BA7922C2(uParam0->f_4))
			{
				system::wait(0);
			}
		}
	}
	else
	{
		if (((!unk_0x34D11AB5BA7922C2(uParam0->f_1) || !unk_0xA51ADD51711B4A15("CommonMenu")) || !unk_0xA51ADD51711B4A15("MPLeaderboard")) || !unk_0xA51ADD51711B4A15("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!unk_0x34D11AB5BA7922C2(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_229(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_202(uParam0, 1);
		}
		else
		{
			func_202(uParam0, 0);
		}
	}
	Global_71117 = 1;
	return 1;
}

void func_229(var uParam0)//Position - 0xC452
{
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "CLEAR_ALL");
	unk_0x271AA5469AF471B3();
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x1869584A8A72FEDD(true);
		unk_0x271AA5469AF471B3();
	}
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xD07D5CD276368D36(2);
	func_198(unk_0xC9C4B2A22DE54C69(2, 188, true));
	func_197("ES_HELP_TU");
	unk_0x271AA5469AF471B3();
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xD07D5CD276368D36(1);
	func_198(unk_0xC9C4B2A22DE54C69(2, 187, true));
	func_197("ES_HELP_TD");
	unk_0x271AA5469AF471B3();
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xD07D5CD276368D36(0);
	func_198(unk_0xC9C4B2A22DE54C69(2, 202, true));
	func_197("ES_HELP_AB");
	unk_0x271AA5469AF471B3();
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x271AA5469AF471B3();
}

void func_230(var uParam0)//Position - 0xC517
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0xA2E2179985C59E40(0);
	unk_0x8D95497078BC0E3B(1f, func_216(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0x0792909D8327DAEA("STRING");
			unk_0x854FACC4E5F40C82(&(uParam0->f_13));
			fVar0 = unk_0xF2A1AF58CC57C564(1);
		}
		else
		{
			unk_0x0792909D8327DAEA(&(uParam0->f_13));
			fVar0 = unk_0xF2A1AF58CC57C564(1);
		}
	}
	else
	{
		unk_0x0792909D8327DAEA("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0x6223D539BCD39E76(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0xA6D2B267C377D7B2(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0x854FACC4E5F40C82(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0xF2A1AF58CC57C564(1);
	}
	if (fVar0 > ((0,1125f * 2f) - (0,006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0,006f * 2f));
	}
}

void func_231(var uParam0)//Position - 0xC61F
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

void func_232()//Position - 0xC69E
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_331)
	{
		func_238(&uLocal_342, &Local_919, &Global_55918, 0);
		fLocal_326 = (fLocal_326 * 1000f);
		if (Global_87155)
		{
			func_237(&uLocal_342, 6, &(Local_919.f_12), "MTPHPERSKI", system::floor(fLocal_326), 0, 3, 0);
			func_237(&uLocal_342, 6, &(Local_919.f_24), "MTPHPERSKI", 0, 0, 3, 0);
			func_237(&uLocal_342, 6, &(Local_919.f_30), "MTPHPERSKI", system::round((fLocal_328 + fLocal_327)), 0, 3, 0);
			func_236();
		}
		else
		{
			if (bLocal_330)
			{
				func_237(&uLocal_342, 6, &(Local_919.f_12), "MTPHPERRET", system::floor(fLocal_326), 0, 3, 0);
			}
			else
			{
				func_237(&uLocal_342, 9, &(Local_919.f_12), "", system::floor(fLocal_326), 0, 0, 0);
			}
			if (!unk_0xAB019B170BF1309C(&(Local_919.f_18)))
			{
				if (bLocal_329)
				{
					func_237(&uLocal_342, 6, &(Local_919.f_24), "", 0, 0, 2, 0);
					func_237(&uLocal_342, 3, &(Local_919.f_30), "", system::round((fLocal_328 + fLocal_327)), 0, 2, 0);
				}
				else
				{
					func_237(&uLocal_342, 6, &(Local_919.f_24), "", 0, 0, 1, 0);
					func_237(&uLocal_342, 3, &(Local_919.f_30), "", system::round(fLocal_327), 0, 0, 0);
				}
			}
			else
			{
				func_237(&uLocal_342, 3, &(Local_919.f_30), "", system::round(fLocal_327), 0, 0, 0);
			}
		}
		iVar0 = 0;
		if (Global_87155)
		{
			iVar1 = 0;
			while (iVar1 < Global_67998)
			{
				if (Global_67999[iVar1 /*9*/] >= 0 && !Global_56128[Global_67999[iVar1 /*9*/] /*13*/].f_7)
				{
					if (Global_67999[iVar1 /*9*/].f_3 == 2)
					{
						iVar0 = 1;
					}
				}
				iVar1++;
			}
		}
		if (iVar0 == 1)
		{
			iLocal_337 = 50;
			iLocal_338 = 1;
			func_235(&uLocal_342, 1, &(Local_919.f_48), iLocal_337, 0, 0, 1, 0);
		}
		else if (bLocal_329)
		{
			if (bLocal_330)
			{
				iLocal_337 = 75;
				iLocal_338 = 2;
				func_235(&uLocal_342, 1, &(Local_919.f_42), iLocal_337, 0, 0, 2, 0);
			}
			else
			{
				iLocal_337 = 100;
				iLocal_338 = 3;
				func_235(&uLocal_342, 1, &(Local_919.f_36), iLocal_337, 0, 0, 3, 0);
			}
		}
		else if (!bLocal_329 && !bLocal_330)
		{
			iLocal_337 = 75;
			iLocal_338 = 2;
			func_235(&uLocal_342, 1, &(Local_919.f_42), iLocal_337, 0, 0, 2, 0);
		}
		else
		{
			iLocal_337 = 50;
			iLocal_338 = 1;
			func_235(&uLocal_342, 1, &(Local_919.f_48), iLocal_337, 0, 0, 1, 0);
		}
		func_233();
		iLocal_331 = 1;
	}
}

void func_233()//Position - 0xC90F
{
	if (unk_0x8F38E94BBF3404CD(joaat("assassin_valet")) == 1)
	{
		func_234(38, system::floor(fLocal_326), 1);
		if (bLocal_329)
		{
			func_234(39, 1, 1);
		}
		else
		{
			func_234(39, 0, 1);
		}
		if (bLocal_329)
		{
			func_234(40, system::round((fLocal_328 + fLocal_327)), 1);
		}
		else
		{
			func_234(40, system::round(fLocal_327), 1);
		}
		func_234(41, iLocal_337, 1);
		func_234(42, iLocal_338, 1);
	}
	else if (unk_0x8F38E94BBF3404CD(joaat("assassin_multi")) == 1)
	{
		func_234(52, system::floor(fLocal_326), 1);
		if (bLocal_329)
		{
			func_234(53, 1, 1);
		}
		else
		{
			func_234(53, 0, 1);
		}
		if (bLocal_329)
		{
			func_234(56, system::round((fLocal_328 + fLocal_327)), 1);
		}
		else
		{
			func_234(56, system::round(fLocal_327), 1);
		}
		func_234(54, iLocal_337, 1);
		func_234(55, iLocal_338, 1);
	}
	else if (unk_0x8F38E94BBF3404CD(joaat("assassin_hooker")) == 1)
	{
		func_234(66, system::floor(fLocal_326), 1);
		if (bLocal_329)
		{
			func_234(67, 1, 1);
		}
		else
		{
			func_234(67, 0, 1);
		}
		if (bLocal_329)
		{
			func_234(68, system::round((fLocal_328 + fLocal_327)), 1);
		}
		else
		{
			func_234(68, system::round(fLocal_327), 1);
		}
		func_234(69, iLocal_337, 1);
		func_234(70, iLocal_338, 1);
	}
	else if (unk_0x8F38E94BBF3404CD(joaat("assassin_bus")) == 1)
	{
		func_234(81, system::floor(fLocal_326), 1);
		if (bLocal_329)
		{
			func_234(82, 1, 1);
		}
		else
		{
			func_234(82, 0, 1);
		}
		if (bLocal_329)
		{
			func_234(83, system::round((fLocal_328 + fLocal_327)), 1);
		}
		else
		{
			func_234(83, system::round(fLocal_327), 1);
		}
		func_234(84, iLocal_337, 1);
		func_234(85, iLocal_338, 1);
	}
	else if (unk_0x8F38E94BBF3404CD(joaat("assassin_construction")) == 1)
	{
		func_234(97, system::floor(fLocal_326), 1);
		if (bLocal_329)
		{
			func_234(98, 1, 1);
		}
		else
		{
			func_234(98, 0, 1);
		}
		if (bLocal_329)
		{
			func_234(99, system::round((fLocal_328 + fLocal_327)), 1);
		}
		else
		{
			func_234(99, system::round(fLocal_327), 1);
		}
		func_234(100, iLocal_337, 1);
		func_234(101, iLocal_338, 1);
	}
}

void func_234(int iParam0, int iParam1, bool bParam2)//Position - 0xCB5B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67998)
	{
		if (Global_67999[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_67999[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_67999[iVar0 /*9*/].f_1 = (Global_67999[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_67999[iVar0 /*9*/] != -1)
	{
		if (Global_56128[Global_67999[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_67999[iVar0 /*9*/].f_1 > 1)
			{
				Global_67999[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_67999[iVar0 /*9*/].f_1 < 0)
			{
				Global_67999[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_235(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xCC05
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
	uParam0->f_576 = iParam7;
}

void func_236()//Position - 0xCC40
{
	Global_87154 = 0;
	Global_87155 = 0;
}

void func_237(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xCC52
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_238(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xCCC5
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_239()//Position - 0xCCE8
{
	func_521(&(Global_104555.f_19933.f_1), 4194304);
}

void func_240()//Position - 0xCD01
{
	int iVar0;
	
	if (!bLocal_1000)
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				if (unk_0x6ADD12BF4D6D2587(iVar0) && !unk_0x191BE1BC8F26F3C1(iVar0, 0))
				{
					if (unk_0xAC6FC114B15F95EC(iVar0))
					{
						if (unk_0xAAB7D68F04F8C8BA("ASS1_LOST"))
						{
							bLocal_1000 = true;
						}
					}
				}
			}
		}
	}
}

void func_241()//Position - 0xCD62
{
	float fVar0;
	
	if (!iLocal_997)
	{
		if (!unk_0x23F2F89E3D1CB7C4())
		{
			if (!func_22())
			{
				func_246("ASS_VA_GO", 7500, -1);
				iLocal_997 = 1;
			}
		}
	}
	func_245(&iLocal_1009, &uLocal_1112, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1018)
	{
		case 0:
			iLocal_1018++;
			break;
		
		case 1:
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				fVar0 = func_26(unk_0xFC1458A37D98B502(), vLocal_1060, 1);
				if (fVar0 > 155f && func_30(1116471296, 1) == 0)
				{
					bLocal_992 = true;
					func_243();
					iLocal_1018++;
				}
				else
				{
					unk_0x2A20836DCD45A0B0(unk_0x9EB17624F44A8DA4());
				}
			}
			break;
		
		case 2:
			if (!unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
			{
				if (func_30(1116471296, 1) == 0)
				{
					func_240();
					if (func_242())
					{
						iLocal_931 = 18;
					}
				}
			}
			else if (!iLocal_1008)
			{
				if (!func_22())
				{
					if (!unk_0x23F2F89E3D1CB7C4())
					{
						func_246("ASS_VA_LOSECOPS", 7500, 1);
						iLocal_1018++;
						iLocal_1008 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
			{
				iLocal_1018 = 2;
			}
			break;
	}
}

int func_242()//Position - 0xCE9D
{
	if (bLocal_1000)
	{
		unk_0x8810DC630928B398("ASS1_LOST");
		iLocal_1001 = 1;
	}
	func_243();
	return 1;
}

void func_243()//Position - 0xCEC0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_940[iVar0]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_940[iVar0]))
			{
				func_244(&(Local_948[iVar0 /*8*/]));
				unk_0xB8E08BD5B184DF4E(iLocal_940[iVar0]);
				unk_0x486F346ADFE56674(&(iLocal_940[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_939))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_939))
		{
			unk_0xB8E08BD5B184DF4E(iLocal_939);
			unk_0x486F346ADFE56674(&iLocal_939);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_941[iVar0]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_941[iVar0]))
			{
				func_244(&(Local_946[iVar0 /*8*/]));
				unk_0xB8E08BD5B184DF4E(iLocal_941[iVar0]);
				unk_0x486F346ADFE56674(&(iLocal_941[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_942[iVar0]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_942[iVar0]))
			{
				func_244(&(Local_947[iVar0 /*8*/]));
				unk_0xB8E08BD5B184DF4E(iLocal_942[iVar0]);
				unk_0x486F346ADFE56674(&(iLocal_942[iVar0]));
			}
		}
		iVar0++;
	}
	unk_0x14776E43F90DD454(iLocal_1073);
}

void func_244(int iParam0)//Position - 0xCFE2
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xA6DECE14FC9A8C51(*iParam0))
	{
		unk_0xE30CF11C0EE14316(iParam0);
		bVar0 = true;
	}
	if (unk_0xA6DECE14FC9A8C51(iParam0->f_1))
	{
		unk_0xE30CF11C0EE14316(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x6ADD12BF4D6D2587(iParam0->f_7))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0->f_7, 0))
		{
			if (unk_0x48253D71C3FC0054(iParam0->f_7))
			{
				unk_0x36EE765E851207BF(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_245(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xD054
{
	if (!*iParam0)
	{
		if (func_6(uParam1, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7))
		{
			*iParam0 = 1;
			return 1;
		}
	}
	return 0;
}

void func_246(char* sParam0, int iParam1, int iParam2)//Position - 0xD081
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 1);
}

void func_247()//Position - 0xD09A
{
	func_245(&iLocal_1009, &uLocal_1112, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1018)
	{
		case 0:
			if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
			{
				if (!iLocal_1008)
				{
					if (!func_22())
					{
						if (!unk_0x23F2F89E3D1CB7C4())
						{
							func_246("ASS_VA_LOSECOPS", 7500, 1);
							iLocal_1018++;
							iLocal_1008 = 1;
						}
					}
				}
			}
			else if (func_30(1116471296, 1) != 0)
			{
				if (!iLocal_997)
				{
					if (!func_22())
					{
						if (!unk_0x23F2F89E3D1CB7C4())
						{
							func_246("ASS_VA_GO", 7500, -1);
							iLocal_1018++;
							iLocal_997 = 1;
						}
					}
				}
			}
			else if (!unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0) && func_30(125f, 1) == 0)
			{
				iLocal_1018++;
			}
			break;
		
		case 1:
			if (!unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0) && func_30(125f, 1) == 0)
			{
				func_240();
				func_243();
				func_249(1);
				func_248();
				iLocal_1018++;
			}
			break;
		
		case 2:
			func_240();
			iLocal_931 = 18;
			break;
	}
}

void func_248()//Position - 0xD1C0
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_1065))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_1065, 0))
		{
			unk_0x4BEFCD5DAE410A90(iLocal_1065, 1);
		}
		unk_0x5380482A432E314E(&iLocal_1065);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_1066))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_1066, 0))
		{
			if ((unk_0x841ED61760A7D07B(iLocal_1066) && !unk_0xEC211A86AB3726B6(iLocal_1066)) && !unk_0x3E9CABD07B829173())
			{
				unk_0x5380482A432E314E(&iLocal_1066);
			}
			else
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_942[0]) && !unk_0x191BE1BC8F26F3C1(iLocal_942[0], 0))
				{
					if (!unk_0x191BE1BC8F26F3C1(iLocal_1066, 0))
					{
						if (unk_0xA8D0477084E86A92(iLocal_942[0], iLocal_1066, 0))
						{
							unk_0x957CEE967C939968(iLocal_942[0]);
						}
					}
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_942[1]) && !unk_0x191BE1BC8F26F3C1(iLocal_942[1], 0))
				{
					if (!unk_0x191BE1BC8F26F3C1(iLocal_1066, 0))
					{
						if (unk_0xA8D0477084E86A92(iLocal_942[1], iLocal_1066, 0))
						{
							unk_0x957CEE967C939968(iLocal_942[1]);
						}
					}
				}
				if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_1066, 0))
					{
						unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
					}
				}
				unk_0x5380482A432E314E(&iLocal_1066);
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_1069[0]))
	{
		unk_0x5380482A432E314E(&(iLocal_1069[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_1069[1]))
	{
		unk_0x5380482A432E314E(&(iLocal_1069[1]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_1070) && !unk_0x191BE1BC8F26F3C1(iLocal_1070, 0))
	{
		if (unk_0x9761C10D57B68069(iLocal_1070) && unk_0xCB234F3DD6FF9368(iLocal_1070, 1))
		{
			unk_0x5380482A432E314E(&iLocal_1070);
		}
	}
}

void func_249(bool bParam0)//Position - 0xD346
{
	int iVar0;
	
	if (bParam0)
	{
		if (unk_0xA6DECE14FC9A8C51(iLocal_950))
		{
			unk_0xE30CF11C0EE14316(&iLocal_950);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xA6DECE14FC9A8C51(uLocal_951[iVar0]))
		{
			unk_0xE30CF11C0EE14316(&(uLocal_951[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xA6DECE14FC9A8C51(uLocal_952[iVar0]))
		{
			unk_0xE30CF11C0EE14316(&(uLocal_952[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xA6DECE14FC9A8C51(uLocal_952[iVar0]))
		{
			unk_0xE30CF11C0EE14316(&(uLocal_952[iVar0]));
		}
		iVar0++;
	}
}

void func_250()//Position - 0xD3E5
{
	if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_1058, vLocal_1059, fLocal_1047, 1, 0, 0))
	{
		bLocal_977 = true;
	}
	else
	{
		bLocal_977 = false;
	}
	if (unk_0xA6DECE14FC9A8C51(iLocal_950))
	{
		unk_0xE30CF11C0EE14316(&iLocal_950);
	}
	unk_0x94BD6F0436473406(0,5f);
	if (bLocal_977)
	{
		func_251();
		iLocal_931 = 17;
	}
	else
	{
		func_251();
		iLocal_931 = 16;
	}
	func_86(&uLocal_1277, 0, 0);
}

void func_251()//Position - 0xD451
{
	iLocal_1018 = 0;
}

void func_252()//Position - 0xD45D
{
	if (!bLocal_974)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_1065))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_1065, 0))
			{
				unk_0x4BEFCD5DAE410A90(iLocal_1065, 3);
				if (func_254(iLocal_1065, 5f))
				{
					bLocal_974 = true;
				}
			}
		}
	}
	if (!iLocal_971)
	{
		if (func_253(iLocal_1065, 10000))
		{
			iLocal_971 = 1;
		}
	}
}

int func_253(int iParam0, int iParam1)//Position - 0xD4B0
{
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (((unk_0xB6579D6FEB63269C(iParam0, 0, iParam1) || unk_0xB6579D6FEB63269C(iParam0, 2, iParam1)) || unk_0xB6579D6FEB63269C(iParam0, 3, iParam1)) || unk_0xB6579D6FEB63269C(iParam0, 1, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_254(int iParam0, float fParam1)//Position - 0xD500
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (func_255(iParam0, -1217,442f, -281,5099f, 36,7495f, 1) <= fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_255(int iParam0, vector3 vParam1, bool bParam2)//Position - 0xD532
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

void func_256()//Position - 0xD56C
{
	switch (iLocal_1018)
	{
		case 0:
			if (unk_0xB8DE76287EDC4957(iLocal_1065, 0))
			{
				if (func_134())
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_941[0]))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_1065, 0))
						{
							if (unk_0xA8D0477084E86A92(iLocal_941[0], iLocal_1065, 0))
							{
								bLocal_970 = true;
								func_251();
								iLocal_931 = 13;
							}
						}
					}
				}
			}
			break;
	}
}

void func_257()//Position - 0xD5CE
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_939))
	{
		if (unk_0x3AB6A1A9084FB0A4(iLocal_939))
		{
			if (unk_0x191BE1BC8F26F3C1(iLocal_939, 0))
			{
				bLocal_975 = true;
				if (unk_0xA6DECE14FC9A8C51(iLocal_950))
				{
					unk_0xE30CF11C0EE14316(&iLocal_950);
				}
				func_110(vLocal_1062, 1097859072, 1116471296);
			}
			unk_0x1267474D9A69CA37(3f, 1073741824, 3);
			func_251();
			iLocal_931 = 15;
		}
	}
}

void func_258()//Position - 0xD631
{
	func_249(0);
	func_265();
	func_263();
	func_260();
	func_259();
	func_246("ASS_VA_KILL", 7500, -1);
	system::settimera(0);
	bLocal_986 = true;
	func_251();
	iLocal_931 = 12;
}

void func_259()//Position - 0xD66C
{
	unk_0x14776E43F90DD454(iLocal_1075);
	unk_0x14776E43F90DD454(iLocal_1076);
}

void func_260()//Position - 0xD682
{
	func_262(&(Local_1427.f_4));
	func_261(&(Local_1427[0]));
	func_261(&(Local_1427[1]));
	func_261(&(Local_1427.f_8[0]));
	func_261(&(Local_1427.f_8[1]));
	func_261(&(Local_1427.f_5[0]));
	func_261(&(Local_1427.f_5[1]));
	func_261(&(Local_1427.f_3));
}

void func_261(int iParam0)//Position - 0xD6E0
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (unk_0xEC211A86AB3726B6(*iParam0))
		{
			unk_0x68433819717660CF(iParam0);
		}
		else
		{
			unk_0x486F346ADFE56674(iParam0);
		}
	}
}

void func_262(int iParam0)//Position - 0xD70B
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (unk_0xEC211A86AB3726B6(*iParam0))
		{
			unk_0x5380482A432E314E(iParam0);
		}
	}
}

void func_263()//Position - 0xD72D
{
	vector3 vVar0[2];
	vector3 vVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x6ADD12BF4D6D2587(iLocal_939) && !unk_0x191BE1BC8F26F3C1(iLocal_939, 0))
	{
		vVar1 = { unk_0xB3328BA8976B416C(iLocal_939, 1) };
		fVar2 = unk_0xF0371FE6E2BF9599(iLocal_939);
	}
	vVar0[0 /*3*/] = { unk_0x9EA50C5EC175E58E(vVar1, fVar2, 1f, -1f, 0f) };
	vVar0[1 /*3*/] = { unk_0x9EA50C5EC175E58E(vVar1, fVar2, -1f, -1f, 0f) };
	iVar3 = 0;
	while (iVar3 < 2)
	{
		if (iVar3 == 0)
		{
			iLocal_940[iVar3] = unk_0xAC992EFAD62C33BF(26, iLocal_1075, vVar0[0 /*3*/], vVar0[0 /*3*/].f_1, 38,3253f, uLocal_1046[iLocal_1022], 1, true);
		}
		else
		{
			iLocal_940[iVar3] = unk_0xAC992EFAD62C33BF(26, iLocal_1076, vVar0[1 /*3*/], vVar0[1 /*3*/].f_1, 38,3253f, uLocal_1046[iLocal_1022], 1, true);
		}
		unk_0xCFF0CD14B439821D(iLocal_940[iVar3], 1, 1);
		unk_0xE537629E02E8DA21(iLocal_940[iVar3]);
		unk_0xAE6EBBBBD8B9FB30(iLocal_940[iVar3], 3, 0);
		unk_0xAE6EBBBBD8B9FB30(iLocal_940[iVar3], 23, 1);
		unk_0xAE6EBBBBD8B9FB30(iLocal_940[iVar3], 30, 0);
		unk_0xAE6EBBBBD8B9FB30(iLocal_940[iVar3], 13, 1);
		unk_0x3811A0FC01E02FC1(iLocal_940[iVar3], 2);
		unk_0xE9B3D12A64CC7C1A(iLocal_940[iVar3], 1);
		func_264(iLocal_940[iVar3], 1);
		unk_0x3FF3A0D63A2E2DB1(iLocal_940[iVar3], 1);
		iVar3++;
	}
}

void func_264(int iParam0, bool bParam1)//Position - 0xD882
{
	if (iParam0 != iLocal_939)
	{
		unk_0x9E058151726E58DE(iParam0, joaat("weapon_pistol"), -1, false, true);
	}
	if (!bParam1)
	{
		unk_0x4F9A62E773100FDC(iParam0, 1);
		unk_0xAE6EBBBBD8B9FB30(iParam0, 0, 1);
	}
	else
	{
		unk_0x4F9A62E773100FDC(iParam0, 2);
		unk_0xAE6EBBBBD8B9FB30(iParam0, 13, 1);
	}
	unk_0xBB3CC641B6AED5E5(iParam0, 60);
	unk_0x2C8C730E9565B998(iParam0, 2);
	unk_0x771A86309E0CA47B(iParam0, 1);
	unk_0x66C1F257A00B2D4E(iParam0, 1);
	unk_0xCE93FCB8A8D8DF0B(iParam0, iLocal_1080);
}

void func_265()//Position - 0xD8EE
{
	func_267();
	iLocal_1022 = unk_0x63A6486593EC7EC3(0, iLocal_1020);
	iLocal_939 = unk_0xAC992EFAD62C33BF(26, iLocal_1073, vLocal_1053[iLocal_1022 /*3*/], uLocal_1046[iLocal_1022], 1, true);
	unk_0xCFF0CD14B439821D(iLocal_939, 1, 1);
	unk_0xE537629E02E8DA21(iLocal_939);
	func_264(iLocal_939, 1);
	unk_0x14776E43F90DD454(iLocal_1073);
	if (!unk_0xA6DECE14FC9A8C51(iLocal_950))
	{
		iLocal_950 = func_266(iLocal_939, 0, 0);
	}
	unk_0xA5D25D3F884FF516(iLocal_950, 1f);
}

int func_266(int iParam0, bool bParam1, bool bParam2)//Position - 0xD963
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_196(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_196(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_196(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

void func_267()//Position - 0xDA07
{
	int iVar0;
	
	iLocal_1020 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x9E06F0EE20F58CED(vLocal_1052[iVar0 /*3*/], 5f) && !func_271(iVar0, 6f))
		{
			vLocal_1053[iLocal_1020 /*3*/] = { vLocal_1052[iVar0 /*3*/] };
			uLocal_1046[iLocal_1020] = fLocal_1045[iVar0];
			iLocal_1020++;
		}
		iVar0++;
	}
	if (iLocal_1020 == 0)
	{
		if (func_98())
		{
			vLocal_1053[0 /*3*/] = { vLocal_1052[1 /*3*/] };
			uLocal_1046[0] = fLocal_1045[1];
			iLocal_1020++;
		}
		else if (func_270())
		{
			vLocal_1053[0 /*3*/] = { vLocal_1052[0 /*3*/] };
			uLocal_1046[0] = fLocal_1045[0];
			iLocal_1020++;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (func_269(vLocal_1052[iVar0 /*3*/], 1) > 30f && !func_271(iVar0, 6f))
				{
					vLocal_1053[iLocal_1020 /*3*/] = { vLocal_1052[iVar0 /*3*/] };
					uLocal_1046[iLocal_1020] = fLocal_1045[iVar0];
					iLocal_1020++;
				}
				iVar0++;
			}
		}
	}
	if (iLocal_1020 == 0)
	{
		func_268();
	}
}

void func_268()//Position - 0xDB3F
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		vVar1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		fVar2 = system::vdist(vVar1, vLocal_1052[iVar0 /*3*/]);
		if (fVar2 > fLocal_1051)
		{
			fLocal_1051 = fVar2;
			iLocal_1050 = iVar0;
		}
		iVar0++;
	}
	vLocal_1053[0 /*3*/] = { vLocal_1052[iLocal_1050 /*3*/] };
	uLocal_1046[0] = fLocal_1045[iLocal_1050];
}

float func_269(vector3 vParam0, bool bParam1)//Position - 0xDBB9
{
	return func_26(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B()), vParam0, bParam1);
}

int func_270()//Position - 0xDBD3
{
	if (func_26(unk_0xFC1458A37D98B502(), -1237,566f, -156,8824f, 39,41317f, 1) < 13f)
	{
		return 1;
	}
	return 0;
}

int func_271(int iParam0, float fParam1)//Position - 0xDC01
{
	if (unk_0x717FFCE23DE4C8C8(vLocal_1052[iParam0 /*3*/], fParam1))
	{
		return 1;
	}
	return 0;
}

void func_272()//Position - 0xDC20
{
	switch (iLocal_1018)
	{
		case 0:
			if (!iLocal_987)
			{
				func_106(&Local_320, 4);
				func_275();
				system::settimera(0);
				iLocal_1018++;
			}
			break;
		
		case 1:
			if (((bLocal_966 && !bLocal_964) && func_274()) && func_273())
			{
				func_251();
				iLocal_931 = 11;
			}
			break;
	}
}

int func_273()//Position - 0xDC8C
{
	int iVar0;
	
	unk_0x6FF834D85E2DD4C6(iLocal_1073);
	if (unk_0x9A0B2ED5055D3F0B(iLocal_1073))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_274()//Position - 0xDCB0
{
	if (((unk_0x6ADD12BF4D6D2587(iLocal_941[0]) && unk_0x6ADD12BF4D6D2587(iLocal_941[1])) && !unk_0x3AB6A1A9084FB0A4(iLocal_941[0])) && !unk_0x3AB6A1A9084FB0A4(iLocal_941[1]))
	{
		if (unk_0xA8D0477084E86A92(iLocal_941[0], iLocal_1065, 0) && unk_0xA8D0477084E86A92(iLocal_941[1], iLocal_1065, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_275()//Position - 0xDD23
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_933[iVar0] = 4;
		iVar0++;
	}
	bLocal_980 = true;
}

void func_276()//Position - 0xDD49
{
	switch (iLocal_1018)
	{
		case 0:
			func_298(1, "assassin_hotel_plan_attack", 0, 0, 0, 1);
			func_106(&Local_320, 2);
			if (unk_0xB8DE76287EDC4957(iLocal_1065, 0))
			{
				unk_0xA15269351F50F113(iLocal_1065, false, 1, 0);
			}
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_1070) && !unk_0x191BE1BC8F26F3C1(iLocal_1070, 0))
					{
						func_284(iLocal_1070);
					}
				}
			}
			func_281();
			func_280();
			unk_0x8810DC630928B398("ASS1_START");
			unk_0x872F1C1F8587CCC7(&Local_320, 4);
			func_246("ASS_VA_PLANT", 7500, 1);
			iLocal_1018++;
			break;
		
		case 1:
			if (iLocal_993)
			{
				if (((!func_279(&iLocal_1067) && !func_278(&(iLocal_1071[0]), &bLocal_1014)) && !func_278(&(iLocal_1071[1]), &bLocal_1014)) && !func_278(&(iLocal_1071[2]), &bLocal_1014))
				{
					system::settimera(0);
					func_251();
					iLocal_931 = 10;
				}
				else
				{
					func_277();
				}
			}
			break;
	}
}

void func_277()//Position - 0xDE5A
{
	iLocal_937 = 1;
	bLocal_964 = true;
}

int func_278(var uParam0, int iParam1)//Position - 0xDE6A
{
	if (!unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		return 0;
	}
	if (!unk_0x6ADD12BF4D6D2587(iLocal_1066))
	{
		return 0;
	}
	if (func_24(*uParam0, iLocal_1066, 1) <= 5f)
	{
		iLocal_1067 = *uParam0;
		*iParam1 = 1;
		return 1;
	}
	return 0;
}

int func_279(var uParam0)//Position - 0xDEAF
{
	vector3 vVar0;
	
	*uParam0 = unk_0x87889570F3396ABD(-1221,954f, -210,746f, 38,638f, 27f, 0, 4);
	if (((*uParam0 != 0 && *uParam0 != iLocal_1065) && *uParam0 != iLocal_1066) && *uParam0 != Local_1427.f_4)
	{
		if (unk_0x6ADD12BF4D6D2587(*uParam0) && !unk_0x191BE1BC8F26F3C1(*uParam0, 0))
		{
			if (unk_0x317536BCEA8FA6B0(*uParam0, -1, 0) == 0)
			{
				vVar0 = { unk_0xB3328BA8976B416C(*uParam0, 1) };
				vVar0 = { vVar0 };
				return 1;
			}
		}
	}
	if (iLocal_1070 != 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_1070) && !unk_0x191BE1BC8F26F3C1(iLocal_1070, 0))
		{
			if (!func_93(iLocal_1070))
			{
				vVar0 = { unk_0xB3328BA8976B416C(iLocal_1070, 1) };
				return 1;
			}
		}
	}
	return 0;
}

void func_280()//Position - 0xDF7A
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0x6ADD12BF4D6D2587(iLocal_941[iVar1]))
		{
			if (iVar1 == 2)
			{
				iVar0 = iLocal_1076;
			}
			else
			{
				iVar0 = iLocal_1075;
			}
			iLocal_941[iVar1] = unk_0xAC992EFAD62C33BF(26, iVar0, vLocal_1054[iVar1 /*3*/], fLocal_1041[iVar1], 1, true);
			if (iVar1 == 0)
			{
				unk_0x03924C68EFCBC511(iLocal_941[iVar1], 0, 0, 2, 0);
				unk_0x03924C68EFCBC511(iLocal_941[iVar1], 3, 0, 0, 0);
				unk_0x03924C68EFCBC511(iLocal_941[iVar1], 4, 0, 1, 0);
				unk_0x03924C68EFCBC511(iLocal_941[iVar1], 8, 0, 0, 0);
				unk_0x03924C68EFCBC511(iLocal_941[iVar1], 11, 0, 0, 0);
			}
			else if (iVar1 == 1)
			{
				unk_0x03924C68EFCBC511(iLocal_941[iVar1], 0, 1, 2, 0);
				unk_0x03924C68EFCBC511(iLocal_941[iVar1], 3, 0, 1, 0);
				unk_0x03924C68EFCBC511(iLocal_941[iVar1], 4, 0, 0, 0);
				unk_0x03924C68EFCBC511(iLocal_941[iVar1], 8, 0, 0, 0);
				unk_0x03924C68EFCBC511(iLocal_941[iVar1], 11, 0, 2, 0);
			}
			else if (iVar1 == 2)
			{
				unk_0x03924C68EFCBC511(iLocal_941[iVar1], 0, 1, 2, 0);
				unk_0x03924C68EFCBC511(iLocal_941[iVar1], 3, 0, 2, 0);
				unk_0x03924C68EFCBC511(iLocal_941[iVar1], 4, 0, 1, 0);
				unk_0x03924C68EFCBC511(iLocal_941[iVar1], 8, 0, 0, 0);
				unk_0x03924C68EFCBC511(iLocal_941[iVar1], 11, 1, 1, 0);
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_941[iVar1]))
		{
			unk_0x5C5D33A1B2711D21(iLocal_941[iVar1], false);
			unk_0xE9B3D12A64CC7C1A(iLocal_941[iVar1], 1);
			unk_0xAE6EBBBBD8B9FB30(iLocal_941[iVar1], 23, 1);
			unk_0xAE6EBBBBD8B9FB30(iLocal_941[iVar1], 30, 0);
			unk_0x3811A0FC01E02FC1(iLocal_941[iVar1], 2);
			unk_0xAE01EF4BC84AFE7C(iLocal_941[iVar1], 104, true);
			func_264(iLocal_941[iVar1], 1);
		}
		iVar1++;
	}
}

void func_281()//Position - 0xE13F
{
	func_283();
	func_282();
	unk_0x14776E43F90DD454(iLocal_1077);
}

void func_282()//Position - 0xE156
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!unk_0x6ADD12BF4D6D2587(iLocal_942[iVar0]))
		{
			if (iVar0 == 0)
			{
				iLocal_942[iVar0] = unk_0x00D1A9572426E8DD(iLocal_1066, 26, iLocal_1075, -1, 1, true);
			}
			else if (iVar0 == 1)
			{
				iLocal_942[iVar0] = unk_0x00D1A9572426E8DD(iLocal_1066, 26, iLocal_1076, 0, 1, true);
			}
			func_264(iLocal_942[iVar0], 1);
			unk_0xAE6EBBBBD8B9FB30(iLocal_942[iVar0], 3, 0);
			unk_0xAE6EBBBBD8B9FB30(iLocal_942[iVar0], 23, 1);
			unk_0xAE6EBBBBD8B9FB30(iLocal_942[iVar0], 30, 0);
			unk_0x3811A0FC01E02FC1(iLocal_942[iVar0], 2);
			unk_0xE9B3D12A64CC7C1A(iLocal_942[iVar0], 1);
		}
		iVar0++;
	}
}

void func_283()//Position - 0xE20A
{
	if (!unk_0x6ADD12BF4D6D2587(iLocal_1066))
	{
		iLocal_1066 = unk_0xEA60F3B426BB095B(iLocal_1077, vLocal_1055, fLocal_1043, 1, 1, 0);
		unk_0x207466E78DA21033(iLocal_1066, 0);
	}
}

void func_284(int iParam0)//Position - 0xE23A
{
	func_285(&(Global_98118.f_2875), &Global_98118, iParam0, 1);
}

int func_285(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0xE255
{
	if (unk_0xB8DE76287EDC4957(iParam2, 0))
	{
		func_287(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_286(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_286(int iParam0)//Position - 0xE295
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_92833.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_287(var uParam0, int iParam1, int iParam2)//Position - 0xE2C3
{
	func_293(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_290(iParam1, 145, 0);
	uParam0->f_11 = func_289(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_288(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xB3328BA8976B416C(iParam1, 1) };
		uParam0->f_6 = unk_0xF0371FE6E2BF9599(iParam1);
		uParam0->f_3 = { unk_0x8FD9FCCB6E4BD999(iParam1) };
		if (unk_0x0F3033474C49912D(iParam1, -1154,326f, -1523,871f, 3,262189f, -1158,453f, -1517,75f, 6,374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160,095f, -1515,407f, 3,1496f };
			uParam0->f_6 = 305,6424f;
		}
		if (Global_70583 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_288(int iParam0)//Position - 0xE39F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[iVar0]))
		{
			if (iParam0 == Global_69678.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_289(int iParam0)//Position - 0xE3E1
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

int func_290(int iParam0, int iParam1, int iParam2)//Position - 0xE444
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			if (Global_90309[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_90319[iVar0])
				{
					if (iParam2 == 0 || unk_0x82FF3DFBC3965CC0(iParam0) == func_291(iParam1, iParam2))
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

int func_291(int iParam0, int iParam1)//Position - 0xE4D2
{
	struct<82> Var0;
	
	if (func_15(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_292(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_292(int iParam0, var uParam1, int iParam2)//Position - 0xE514
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

void func_293(int iParam0, var uParam1)//Position - 0xE770
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		func_297(uParam1);
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
		if (uParam1->f_65 == -1 && !func_296(uParam1->f_66))
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
		func_295(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x7C7056D6F2A31BF6(iParam0, iVar0 + 1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_294(iVar0 + 1));
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

int func_294(int iParam0)//Position - 0xEA1B
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

int func_295(int iParam0, var uParam1, var uParam2)//Position - 0xEACB
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

int func_296(int iParam0)//Position - 0xEBA5
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

void func_297(var uParam0)//Position - 0xEBC5
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

void func_298(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xEC75
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 1)
	{
		if (!unk_0x74C475EB8E73D398("FinaleC2", unk_0x436287B7DB306165()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_92870)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_92870)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_158(1);
		if (iParam0 <= Global_92870)
		{
		}
		iVar1 = func_365(unk_0x436287B7DB306165(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_104555.f_9055.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_363(iVar1);
			cVar3 = { Global_83766[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_104555.f_9055.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0xEBDD0888F628D3FB(&cVar3, iVar2, Global_92870, iParam0);
		}
		else
		{
			iVar4 = func_358(unk_0x436287B7DB306165(), 1);
			if (iVar4 != -1)
			{
				Global_104555.f_18544[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_357(iVar4)}, 4);
				unk_0xEBDD0888F628D3FB(&uVar5, 0, Global_92870, iParam0);
			}
			else
			{
				iVar6 = func_356(&(Global_92833.f_3));
				if (iVar6 > -1)
				{
					Global_104555.f_24956.f_4[iVar6] = 0;
				}
			}
		}
		Global_87156 = iParam2;
		Global_92870 = iParam0;
		func_299(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x74C475EB8E73D398(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_92870)
	{
	}
}

void func_299(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xEDEA
{
	func_300(&Global_98118, unk_0x436287B7DB306165(), iParam0, uParam1, iParam3, iParam2);
}

void func_300(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0xEE06
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_13();
	uParam0->f_1 = func_345();
	unk_0xFEA5CA2D657FCB82(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		func_321(&(uParam0->f_2869), 0);
		func_320(unk_0xFC1458A37D98B502());
		func_313(unk_0xFC1458A37D98B502(), 0);
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_104555.f_2353.f_539.f_294[iVar1];
		if (iVar1 == func_312())
		{
			func_306(unk_0xFC1458A37D98B502(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_92623[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_92623[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_92623[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_92623[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_92623[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_92623[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_92623[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_92623[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_92623[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_92623[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*472*/][iVar0 /*5*/] = { Global_104555.f_2353.f_539.f_298[iVar1 /*472*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*472*/].f_221[iVar0 /*5*/] = { Global_104555.f_2353.f_539.f_298[iVar1 /*472*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_104555.f_20534.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_53077[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_104555.f_2353.f_539.f_2387[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_104555.f_2353.f_539.f_2387[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2823[iVar1 /*15*/][iVar0] = Global_104555.f_2353.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_5[iVar0] = Global_104555.f_2353.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_10[iVar0] = Global_104555.f_2353.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2330[iVar1 /*164*/][iVar0] = Global_104555.f_2353[iVar1 /*164*/][iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_4[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_8[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_12[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_16[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_20[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_24[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_28[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_32[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_36[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_40[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_44[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_48[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_52[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_56[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_60[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_64[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_68[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_72[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_76[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_80[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_84[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_88[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_92[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_96[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_100[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_104[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_108[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_112[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_116[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_120[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_124[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_128[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_132[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_136[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_140[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_144[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_148[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_152[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_156[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_160[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0xFA3CE529DBB66C85(joaat("sp0_special_ability"), &(uParam0->f_2326[0]), -1);
	unk_0xFA3CE529DBB66C85(joaat("sp1_special_ability"), &(uParam0->f_2326[1]), -1);
	unk_0xFA3CE529DBB66C85(joaat("sp2_special_ability"), &(uParam0->f_2326[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_302(&(uParam0->f_2875), uParam0, iParam5, 1, 1, 0);
	}
	func_301(&(uParam0->f_2965));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_301(var uParam0)//Position - 0xFC8E
{
	*uParam0 = Global_88827;
	uParam0->f_1 = Global_88828;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_302(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xFCB0
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xFC1458A37D98B502();
	}
	if (unk_0x6ADD12BF4D6D2587(iParam2))
	{
		uParam1->f_5 = func_16(iParam2);
	}
	if (func_303(iParam2, &iVar0, iParam3, iParam5))
	{
		func_285(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
		{
			if (unk_0xB0DA749C8A7CCBBF(iVar0, joaat("skylift")) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iVar0, 0))
			{
				func_285(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_303(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xFD38
{
	char* sVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			if (iParam0 == unk_0xFC1458A37D98B502())
			{
				*uParam1 = unk_0xC733212BF9066BDF();
			}
			else
			{
				*uParam1 = unk_0xDFD115BB10FE46A9(iParam0, 1);
			}
			if (unk_0x6ADD12BF4D6D2587(*uParam1))
			{
				if (unk_0xB8DE76287EDC4957(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(*uParam1, 1), unk_0xB3328BA8976B416C(iParam0, 1), true) < 100f)
					{
						if (unk_0xB0DA749C8A7CCBBF(*uParam1, joaat("taxi")))
						{
							if (unk_0x317536BCEA8FA6B0(*uParam1, -1, 0) != iParam0 && unk_0x317536BCEA8FA6B0(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_304(*uParam1, func_13(), 1))
						{
							sVar0 = unk_0x436287B7DB306165();
							if (!unk_0x74C475EB8E73D398(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x88DDBE9908752BF0(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xB80A4DA4C06A76F1(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xD5736BCB654EA8FC(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0xB0DA749C8A7CCBBF(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_304(int iParam0, int iParam1, bool bParam2)//Position - 0xFE67
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_305(iParam1, iVar0, &sVar1, &iVar2))
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

int func_305(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0xFED8
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

void func_306(int iParam0, var uParam1, int iParam2)//Position - 0xFFB0
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = func_16(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_311(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_310(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_15(iVar0))
		{
			uParam1->f_59 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x3A711520F83BAE98() && unk_0x82FF3DFBC3965CC0(iParam0) == unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			if (func_309(161, -1))
			{
				uParam1->f_59 = func_307(2048, Global_70668, 0);
			}
			else
			{
				uParam1->f_59 = func_307(749, Global_70668, 0);
			}
			uParam1->f_60 = func_307(750, Global_70668, 0);
			uParam1->f_61 = func_307(751, Global_70668, 0);
		}
		if (unk_0x3A711520F83BAE98() && iParam0 == unk_0xFC1458A37D98B502())
		{
			if (func_309(161, -1))
			{
				uParam1->f_59 = func_307(2048, Global_70668, 0);
			}
			else
			{
				uParam1->f_59 = func_307(749, Global_70668, 0);
			}
		}
	}
}

int func_307(int iParam0, int iParam1, int iParam2)//Position - 0x1015B
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_308(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_308(var uParam0)//Position - 0x1018D
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_164();
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

int func_309(int iParam0, int iParam1)//Position - 0x101C1
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547365[iParam0 /*3*/][func_308(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_310(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x101ED
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x742D2DEFFDC66EB8(iParam0, iParam1);
		*uParam3 = unk_0xC563C871267881C4(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x97610277C0BBC6FC(iParam0) && unk_0x928EC8A04257C833(iParam0) != -1)
				{
					*uParam2 = unk_0x928EC8A04257C833(iParam0);
					*uParam3 = unk_0xDA2D990A7F8DFA7E(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_311(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x10735
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x4CDD2D1D66ED1DE4(iParam0, iParam1);
		*uParam3 = unk_0xDCC2BD4C56470D10(iParam0, iParam1);
		*uParam4 = unk_0x6AC6F0502D04B9F9(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_312()//Position - 0x10976
{
	func_14();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_313(int iParam0, bool bParam1)//Position - 0x1098F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_16(iParam0);
	if (func_15(iVar0) && !unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (iParam0 == unk_0xFC1458A37D98B502())
		{
			func_314(iParam0, &(Global_104555.f_2353.f_539.f_298[iVar0 /*472*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_104555.f_2353.f_539.f_1715[iVar2 /*4*/][iVar0] = unk_0xB29211B2B4084E43(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x7F23DDBA3ACA51BC();
					if (Global_104555.f_2353.f_539.f_1715[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_104555.f_2353.f_539.f_1748 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x8475A4404BC86972(unk_0x9EB17624F44A8DA4(), &iVar3);
			if (iVar0 == 0)
			{
				unk_0xBFFF62F75445099D(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0xBFFF62F75445099D(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0xBFFF62F75445099D(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_314(int iParam0, var uParam1)//Position - 0x10A82
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_319(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0xB50B73D3F4DD1613(iParam0, func_319(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x5088CF774DF6D935(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x3CC6ABB1D2EC7E28(iParam0, Var4);
					Var4.f_4 = unk_0x483852B06034011D(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!unk_0x6407D3750DB405F3(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_317(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xB1C7BCEE5648EB7D(iParam0, Var4, iVar2))
						{
							unk_0x872F1C1F8587CCC7(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_317(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = unk_0x359D12B4F89DA5D6();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((unk_0xD10DDFA63A9D9BDA(iVar5, &Var7) && !func_316(Var7.f_1)) && iVar9 < 50)
			{
				if (!unk_0x42683C90F2D005ED(Var7))
				{
					Var4 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x5088CF774DF6D935(iParam0, Var4);
					if (unk_0xA8388473C755363D(iParam0, Var4, 0))
					{
						Var4.f_3 = unk_0x3CC6ABB1D2EC7E28(iParam0, Var4);
						Var4.f_4 = unk_0x483852B06034011D(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x6407D3750DB405F3(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x16DE9AAC68A15A81(iVar5))
					{
						if (unk_0x768809DD20D4F552(iVar5, iVar1, &Var8))
						{
							if (!func_315(Var8.f_3))
							{
								if (unk_0xB1C7BCEE5648EB7D(iParam0, Var4, Var8.f_3))
								{
									unk_0x872F1C1F8587CCC7(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!unk_0xA8388473C755363D(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_315(int iParam0)//Position - 0x10D0C
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

int func_316(int iParam0)//Position - 0x10DA7
{
	if (unk_0x3A711520F83BAE98())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case 317205821:
			case -1121678507:
			case 125959754:
			case -853065399:
			case -1169823560:
			case -1810795771:
			case 419712736:
			case -1746263880:
				return 1;
				break;
			}
	}
	return 0;
}

int func_317(int iParam0, int iParam1)//Position - 0x10F1B
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
				iVar1 = func_318(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x16DE9AAC68A15A81(iVar1))
					{
						if (unk_0x768809DD20D4F552(iVar1, iVar2, &Var5))
						{
							if (!func_315(Var5.f_3))
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

int func_318(int iParam0, var uParam1)//Position - 0x11A8C
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

int func_319(int iParam0)//Position - 0x11AC7
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_320(int iParam0)//Position - 0x11D3B
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
	if (func_15(iVar0) && !unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		Global_104555.f_2353.f_539.f_294[iVar0] = unk_0x8027E7B955FF320D(iParam0);
	}
}

void func_321(var uParam0, int iParam1)//Position - 0x11D77
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	uParam0->f_3 = unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502());
	uParam0->f_5 = unk_0x7D187A62A99ED071(unk_0xFC1458A37D98B502());
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		uParam0->f_4 = unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4());
	}
	if (system::vdist(*uParam0, 320,9934f, 265,2515f, 82,1221f) < 10f)
	{
		*uParam0 = { 301,2162f, 202,1357f, 103,3797f };
		uParam0->f_3 = 156,5144f;
	}
	else if (system::vdist(*uParam0, 377,153f, -717,567f, 10,0536f) < 10f)
	{
		*uParam0 = { 394,2567f, -713,5439f, 28,2853f };
		uParam0->f_3 = 276,6273f;
	}
	else if (system::vdist(*uParam0, -1425,564f, -244,3f, 15,8053f) < 10f)
	{
		*uParam0 = { -1423,472f, -214,2539f, 45,5004f };
		uParam0->f_3 = 353,8757f;
	}
	else if (unk_0x8F38E94BBF3404CD(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4,2587f, 525,0214f, 173,6281f };
		uParam0->f_3 = 203,6746f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 4))
	{
		*uParam0 = { 452,0255f, 5571,85f, 780,1859f };
		uParam0->f_3 = 78,9858f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 5))
	{
		*uParam0 = { -745,4462f, 5595,146f, 40,6594f };
		uParam0->f_3 = 261,747f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 6))
	{
		*uParam0 = { -1675,521f, -1125,59f, 12,091f };
		uParam0->f_3 = 271,8208f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 7))
	{
		*uParam0 = { -1631,219f, -1112,805f, 12,0212f };
		uParam0->f_3 = 316,8879f;
	}
	else if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == unk_0xC0765AFBFA616644(1272,659f, -1715,467f, 53,7715f, "v_lesters"))
	{
		*uParam0 = { 1276,956f, -1725,189f, 53,6551f };
		uParam0->f_3 = 204,1703f;
	}
	else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -415,4365f, 2068,289f, 113,3002f, -564,9516f, 1884,703f, 134,0403f, 258,75f, 0, 1, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -596,4706f, 2089,921f, 125,4128f, -581,2134f, 2036,256f, 136,2836f, 9,5f, 0, 1, 0))
	{
		*uParam0 = { -601,59f, 2099,197f, 128,8928f };
		uParam0->f_3 = 204,7498f;
	}
	else if (system::vdist(*uParam0, -1007,393f, -477,9584f, 52,5357f) < 8f)
	{
		*uParam0 = { -1018,376f, -483,9436f, 36,0964f };
		uParam0->f_3 = 114,7664f;
	}
	else if (system::vdist(*uParam0, 480,6662f, -1317,808f, 28,20303f) < 15f)
	{
		*uParam0 = { 497,7238f, -1310,932f, 28,2372f };
		uParam0->f_3 = 289,3663f;
	}
	else if (system::vdist(*uParam0, 2329,527f, 2571,311f, 45,6779f) < 5f)
	{
		*uParam0 = { 2316,93f, 2594,153f, 45,7199f };
		uParam0->f_3 = 348,1325f;
	}
	if (iParam1 == 1)
	{
		if (func_324(&iVar0))
		{
			if (func_323(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 207,4336f, -1019,795f, -100,4728f, 189,9338f, -1019,623f, -95,56883f, 17,1875f, 0, 1, 0))
		{
			iVar3 = func_13();
			if (iVar3 == 0)
			{
				*uParam0 = { -65,1234f, 81,2517f, 70,5644f };
				uParam0->f_3 = 71,6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68,5531f, -1824,377f, 25,9424f };
				uParam0->f_3 = 215,8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220,8189f, -1162,302f, 22,0242f };
				uParam0->f_3 = 70,2711f;
			}
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 483,7175f, -1326,63f, 28,2135f, 474,9644f, -1307,998f, 34,49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495,4108f, -1306,08f, 29,2883f };
			uParam0->f_3 = 213,6273f;
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1146,77f, -1534,22f, 3,37f, -1158,453f, -1517,75f, 6,374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160,095f, -1515,407f, 3,1496f };
			uParam0->f_3 = 305,6424f;
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 439,5432f, -996,9769f, 24,88307f, 428,2935f, -997,0192f, 28,57458f, 8,5f, 0, 1, 0))
		{
			*uParam0 = { 431,8853f, -1013,133f, 28,7907f };
			uParam0->f_3 = 186,6814f;
		}
		else if (func_322(*uParam0, "v_hospital", 307,3065f, -589,9595f, 43,302f))
		{
			*uParam0 = { 279,4137f, -585,8815f, 43,2502f };
			uParam0->f_3 = 48,8028f;
		}
	}
}

int func_322(vector3 vParam0, char* sParam1, vector3 vParam2)//Position - 0x122D2
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD42907FA80A6F327(vParam0))
	{
		iVar0 = unk_0xC0765AFBFA616644(vParam2, sParam1);
		if (!unk_0x2C2E1E35924B9FF2(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x54EA77341255C23C(vParam0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_323(int iParam0, var uParam1, var uParam2)//Position - 0x12316
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829,842f, -191,7454f, 36,4386f };
			*uParam2 = 29,5061f;
			break;
		
		case 1:
			*uParam1 = { 129,8484f, -1716,528f, 28,0702f };
			*uParam2 = 50,3483f;
			break;
		
		case 2:
			*uParam1 = { -1296,913f, -1120,999f, 5,3951f };
			*uParam2 = 0,9933f;
			break;
		
		case 3:
			*uParam1 = { 1938,028f, 3718,736f, 31,3154f };
			*uParam2 = 118,2305f;
			break;
		
		case 4:
			*uParam1 = { 1197,866f, -469,3809f, 65,0885f };
			*uParam2 = 346,4477f;
			break;
		
		case 5:
			*uParam1 = { -32,2161f, -135,8212f, 56,0532f };
			*uParam2 = 186,0052f;
			break;
		
		case 6:
			*uParam1 = { -287,7696f, 6238,081f, 30,2902f };
			*uParam2 = 316,1349f;
			break;
		
		case 7:
			*uParam1 = { 99,2876f, -1395,16f, 28,2759f };
			*uParam2 = 320,2739f;
			break;
		
		case 8:
			*uParam1 = { 1679,445f, 4819,056f, 41,0035f };
			*uParam2 = 4,6192f;
			break;
		
		case 9:
			*uParam1 = { 411,3063f, -809,1863f, 28,1554f };
			*uParam2 = 1,8972f;
			break;
		
		case 10:
			*uParam1 = { -1088,054f, 2699,167f, 19,2748f };
			*uParam2 = 129,7382f;
			break;
		
		case 11:
			*uParam1 = { 1194,163f, 2695,644f, 36,9225f };
			*uParam2 = 1,1454f;
			break;
		
		case 12:
			*uParam1 = { -821,2829f, -1088,027f, 10,0499f };
			*uParam2 = 120,5883f;
			break;
		
		case 13:
			*uParam1 = { -3,3416f, 6521,303f, 30,2961f };
			*uParam2 = 316,4451f;
			break;
		
		case 14:
			*uParam1 = { -1208,417f, -785,9635f, 16,0139f };
			*uParam2 = 36,3181f;
			break;
		
		case 15:
			*uParam1 = { 623,1845f, 2739,191f, 40,9588f };
			*uParam2 = 3,5411f;
			break;
		
		case 16:
			*uParam1 = { 130,9555f, -198,2084f, 53,41f };
			*uParam2 = 251,3506f;
			break;
		
		case 17:
			*uParam1 = { -3164,065f, 1067,317f, 19,6778f };
			*uParam2 = 101,2229f;
			break;
		
		case 18:
			*uParam1 = { -713,2797f, -174,2767f, 35,8962f };
			*uParam2 = 29,8138f;
			break;
		
		case 19:
			*uParam1 = { -147,0616f, -306,4322f, 37,7912f };
			*uParam2 = 160,4526f;
			break;
		
		case 20:
			*uParam1 = { -1461,355f, -230,6092f, 48,3064f };
			*uParam2 = 318,7851f;
			break;
		
		case 21:
			*uParam1 = { -1347,739f, -1278,573f, 3,8952f };
			*uParam2 = 17,9365f;
			break;
		
		case 22:
			*uParam1 = { 325,6833f, 164,3263f, 102,4425f };
			*uParam2 = 68,6407f;
			break;
		
		case 23:
			*uParam1 = { 1858,774f, 3742,393f, 32,0779f };
			*uParam2 = 301,2329f;
			break;
		
		case 24:
			*uParam1 = { -286,3272f, 6202,802f, 30,3323f };
			*uParam2 = 225,1334f;
			break;
		
		case 25:
			*uParam1 = { -1161,596f, -1417,7f, 3,712f };
			*uParam2 = 246,9161f;
			break;
		
		case 26:
			*uParam1 = { 1308,952f, -1660,611f, 50,2362f };
			*uParam2 = 163,5456f;
			break;
		
		case 27:
			*uParam1 = { -3161,585f, 1074,214f, 19,6847f };
			*uParam2 = 98,6092f;
			break;
		
		case 28:
			*uParam1 = { 28,423f, -1110,814f, 28,2848f };
			*uParam2 = 85,2495f;
			break;
		
		case 29:
			*uParam1 = { 1704,966f, 3749,709f, 33,0188f };
			*uParam2 = 45,6778f;
			break;
		
		case 30:
			*uParam1 = { 223,949f, -38,7894f, 68,6483f };
			*uParam2 = 159,4265f;
			break;
		
		case 31:
			*uParam1 = { 837,7854f, -1017,963f, 26,3045f };
			*uParam2 = 181,0445f;
			break;
		
		case 32:
			*uParam1 = { -313,1914f, 6093,351f, 30,4625f };
			*uParam2 = 315,8405f;
			break;
		
		case 33:
			*uParam1 = { -663,4631f, -952,8069f, 20,3143f };
			*uParam2 = 92,6796f;
			break;
		
		case 34:
			*uParam1 = { -1323,06f, -392,8577f, 35,4596f };
			*uParam2 = 210,7398f;
			break;
		
		case 35:
			*uParam1 = { -1106,102f, 2684,35f, 18,0953f };
			*uParam2 = 127,0383f;
			break;
		
		case 36:
			*uParam1 = { -3157,932f, 1081,309f, 19,6953f };
			*uParam2 = 100,2942f;
			break;
		
		case 37:
			*uParam1 = { 2562,882f, 312,8641f, 107,4612f };
			*uParam2 = 179,205f;
			break;
		
		case 38:
			*uParam1 = { 822,48f, -2142,875f, 27,8496f };
			*uParam2 = 355,0598f;
			break;
		
		case 39:
			*uParam1 = { -1137,053f, -1993,916f, 12,1677f };
			*uParam2 = 43,1213f;
			break;
		
		case 40:
			*uParam1 = { 717,8107f, -1084,081f, 21,3094f };
			*uParam2 = 93,2649f;
			break;
		
		case 41:
			*uParam1 = { -387,6789f, -128,2568f, 37,6796f };
			*uParam2 = 119,1085f;
			break;
		
		case 42:
			*uParam1 = { 117,8835f, 6599,415f, 31,0134f };
			*uParam2 = 90,7225f;
			break;
		
		case 43:
			*uParam1 = { 1201,709f, 2664,813f, 36,8102f };
			*uParam2 = 133,9002f;
			break;
		
		case 44:
			*uParam1 = { -200,1521f, -1297,502f, 30,296f };
			*uParam2 = 269,0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_44(*uParam1, 0f, 0f, 0f, 0);
}

int func_324(var uParam0)//Position - 0x129CD
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (func_344())
		{
			*uParam0 = func_330(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 6, -1, 0, 1, -1);
			if (func_329(*uParam0) && !func_325(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_325(int iParam0)//Position - 0x12A28
{
	return func_326(iParam0, 0, 1);
}

int func_326(int iParam0, int iParam1, bool bParam2)//Position - 0x12A38
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_328() == 0)
		{
			return unk_0xC80D31E4B587871C(func_307(func_327(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_327(int iParam0)//Position - 0x12A98
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

int func_328()//Position - 0x12D7D
{
	return Global_25233;
}

int func_329(int iParam0)//Position - 0x12D88
{
	return func_326(iParam0, 5, 1);
}

int func_330(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x12D98
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 47)
	{
		if (iParam1 == 6 || iParam1 == func_343(iVar0))
		{
			if (!bParam3 || func_342(iVar0))
			{
				fVar1 = unk_0xBE3C4023003180FC(vParam0, func_331(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_331(int iParam0, bool bParam1)//Position - 0x12E3A
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821,9946f, -187,1776f, 36,5689f;
			break;
		
		case 1:
			return 133,5702f, -1710,918f, 28,2916f;
			break;
		
		case 2:
			return -1287,082f, -1116,558f, 5,9901f;
			break;
		
		case 3:
			return 1933,119f, 3726,079f, 31,8444f;
			break;
		
		case 4:
			return 1208,333f, -470,917f, 65,208f;
			break;
		
		case 5:
			return -30,7448f, -148,4921f, 56,0765f;
			break;
		
		case 6:
			return -280,8165f, 6231,771f, 30,6955f;
			break;
		
		case 7:
			return 80,665f, -1391,669f, 28,3761f;
			break;
		
		case 8:
			return 1687,881f, 4820,55f, 41,0096f;
			break;
		
		case 9:
			return 419,531f, -807,5787f, 28,4896f;
			break;
		
		case 10:
			return -1094,049f, 2704,171f, 18,0873f;
			break;
		
		case 11:
			return 1197,972f, 2704,22f, 37,1572f;
			break;
		
		case 12:
			return -818,6218f, -1077,533f, 10,3282f;
			break;
		
		case 13:
			return -0,2361f, 6516,045f, 30,8684f;
			break;
		
		case 14:
			return -1199,809f, -776,6886f, 16,3237f;
			break;
		
		case 15:
			return 618,1857f, 2752,567f, 41,0881f;
			break;
		
		case 16:
			return 126,6853f, -212,5027f, 53,5578f;
			break;
		
		case 17:
			return -3168,966f, 1055,287f, 19,8632f;
			break;
		
		case 18:
			return -715,3598f, -155,7742f, 36,4105f;
			break;
		
		case 19:
			return -158,2199f, -304,9663f, 38,735f;
			break;
		
		case 20:
			return -1455,005f, -233,1862f, 48,7936f;
			break;
		
		case 21:
			return -1335,973f, -1278,555f, 3,8598f;
			break;
		
		case 22:
			return 321,6098f, 179,4165f, 102,5865f;
			break;
		
		case 23:
			return 1861,685f, 3750,08f, 32,0318f;
			break;
		
		case 24:
			return -290,1603f, 6199,095f, 30,4871f;
			break;
		
		case 25:
			return -1153,948f, -1425,019f, 3,9544f;
			break;
		
		case 26:
			return 1322,455f, -1651,125f, 51,1885f;
			break;
		
		case 27:
			return -3169,42f, 1074,727f, 19,8343f;
			break;
		
		case 28:
			return 17,6804f, -1114,288f, 28,797f;
			break;
		
		case 29:
			return 1697,979f, 3753,2f, 33,7053f;
			break;
		
		case 30:
			return 245,2711f, -45,8126f, 68,941f;
			break;
		
		case 31:
			return 844,1248f, -1025,571f, 27,1948f;
			break;
		
		case 32:
			return -325,8904f, 6077,026f, 30,4548f;
			break;
		
		case 33:
			return -664,2178f, -943,3646f, 20,8292f;
			break;
		
		case 34:
			return -1313,948f, -390,9637f, 35,592f;
			break;
		
		case 35:
			return -1111,238f, 2688,463f, 17,6131f;
			break;
		
		case 36:
			return -3165,231f, 1082,855f, 19,8438f;
			break;
		
		case 37:
			return 2569,612f, 302,576f, 107,7349f;
			break;
		
		case 38:
			return 811,8699f, -2149,102f, 28,6363f;
			break;
		
		case 39:
			return -1147,314f, -1992,434f, 12,1803f;
			break;
		
		case 40:
			return 724,524f, -1089,081f, 21,1692f;
			break;
		
		case 41:
			return -354,5272f, -135,4011f, 38,185f;
			break;
		
		case 42:
			return 113,2615f, 6624,28f, 30,7871f;
			break;
		
		case 43:
			return 1174,707f, 2644,45f, 36,7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211,5f, -1324,2f, 30,296f;
			}
			else
			{
				return -205,6654f, -1311,113f, 30,296f;
			}
			break;
		
		case 45:
			return func_341(Global_94374);
			break;
		
		case 46:
			if (Global_1595538 != func_68())
			{
				if (func_340(Global_1595538))
				{
					return func_333(2, 2);
				}
				else if (func_332(Global_1595538))
				{
					return func_333(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510,1f, 4749,5f, -69f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_332(int iParam0)//Position - 0x133D9
{
	if (iParam0 != func_68())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 0) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 1)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_333(int iParam0, int iParam1)//Position - 0x13437
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1595538 != func_68())
	{
		if (iParam1 == 3)
		{
			if (func_334(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xC80D31E4B587871C(Global_1595693[Global_1595538 /*680*/].f_266.f_236, 4))
			{
				if (func_334(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[Global_1595538 /*680*/].f_266.f_236, 5))
			{
				if (func_334(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_334(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x134E5
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_339(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_339(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_337(iParam0) };
	}
	else
	{
		Var2 = { func_336(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_335(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_335(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x9EA50C5EC175E58E(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_335(vector3 vParam0, float fParam1)//Position - 0x1357A
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = system::sin(fParam1);
	fVar2 = system::cos(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_336(int iParam0)//Position - 0x135BE
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 1:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 2:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 3:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 4:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 5:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 6:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 7:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 8:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
	}
	return Var0;
}

struct<6> func_337(int iParam0)//Position - 0x13742
{
	return func_338(iParam0);
}

struct<6> func_338(int iParam0)//Position - 0x13750
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105,22f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104,105f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105,22f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104,105f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011,925f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38,125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103,213f, -3013,483f, -39,03f };
			Var0.f_3 = { 0f, 0f, 31,32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101,408f, -3012,32f, -38,45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103,037f, -3012,318f, -39,99874f };
			break;
		
		case 7:
			Var0 = { 1105,645f, -3012,04f, -39,542f };
			Var0.f_3 = { 0f, 0f, -86,04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104,063f, -3012,368f, -39,99875f };
			break;
		
		case 9:
			Var0 = { 1105,665f, -3012,334f, -38,50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102,504f, -3012,35f, -39,341f };
			Var0.f_3 = { 0f, 0f, -96,48f };
			break;
		
		case 11:
			Var0 = { 1102,928f, -3012,693f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102,942f, -3011,315f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101,994f, -3012,878f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103,152f, -3013,032f, -38,24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102,465f, -3009,515f, -39,341f };
			Var0.f_3 = { 0f, 0f, -12,96f };
			break;
		
		case 14:
			Var0 = { 1102,917f, -3009,525f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102,922f, -3010,887f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101,682f, -3009,227f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102,453f, -3008,51f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104,684f, -3009,561f, -39,341f };
			Var0.f_3 = { 0f, 0f, 169,56f };
			break;
		
		case 17:
			Var0 = { 1104,34f, -3008,698f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104,344f, -3009,618f, -37,98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105,459f, -3009,793f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104,783f, -3010,433f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104,025f, -3007,316f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 24:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 25:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 26:
			Var0 = { 1102,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 31:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 32:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 33:
			Var0 = { 1102,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 38:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 39:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
		
		case 40:
			Var0 = { 1102,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011,9f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38,115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105,174f, -3004,16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105,175f, -3005,818f, -37,91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106,6f, -3000,847f, -39,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106,601f, -3002,171f, -37,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101,95f, -3011,9f, -39,2f };
			Var0.f_3 = { 0f, 0f, 49,5f };
			break;
		
		case 52:
			Var0 = { 1101,95f, -3010f, -39,2f };
			Var0.f_3 = { 0f, 0f, 130,32f };
			break;
		
		case 53:
			Var0 = { 1105,16f, -3009,06f, -39,2f };
			Var0.f_3 = { 0f, 0f, -44,64f };
			break;
		
		case 54:
			Var0 = { 1102,476f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103,593f, -3008,27f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103,565f, -3014f, -39,988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103,55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103,55f, -3013,762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103,55f, -3006,186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103,6f, -3013,933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_339(int iParam0, var uParam1)//Position - 0x1421C
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103,562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103,562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103,562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_340(int iParam0)//Position - 0x1429E
{
	if (iParam0 != func_68())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 3) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 4)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_341(int iParam0)//Position - 0x142FC
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974,9542f, -3000,091f, -35f;
			break;
		
		case 6:
			return -1586,36f, -566,6f, 106,17f;
			break;
		
		case 7:
			return -1389,87f, -465,17f, 82,68f;
			break;
		
		case 8:
			return -145,81f, -590,2f, 171,13f;
			break;
		
		case 9:
			return -62,49f, -823,55f, 288,74f;
			break;
		
		case 4:
			return 1102,515f, -3158,888f, -38,5186f;
			break;
		
		case 5:
			return 1005,861f, -3156,162f, -39,907f;
			break;
		
		case 10:
			return 1103,562f, -3000f, -40f;
			break;
		
		case 11:
			return 938,3077f, -3196,112f, -100f;
			break;
		
		case 12:
			return -1266,802f, -3014,836f, -49,4895f;
			break;
		
		case 13:
			return 520,0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345,0041f, 4842,001f, -59,9997f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_342(int iParam0)//Position - 0x14499
{
	return func_326(iParam0, 0, 0);
}

int func_343(int iParam0)//Position - 0x144A9
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

bool func_344()//Position - 0x14736
{
	return Global_92885.f_315 > 0;
}

var func_345()//Position - 0x14747
{
	var uVar0;
	
	func_355(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_354(&uVar0, unk_0x95327550F0F2BE7C());
	func_353(&uVar0, unk_0x674C9438180770FE());
	func_348(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_347(&uVar0, unk_0xEAF455949B108589());
	func_346(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_346(var uParam0, int iParam1)//Position - 0x1478D
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

void func_347(var uParam0, int iParam1)//Position - 0x14813
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_348(var uParam0, int iParam1)//Position - 0x14846
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_352(*uParam0);
	iVar1 = func_350(*uParam0);
	if (iParam1 < 1 || iParam1 > func_349(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_349(int iParam0, int iParam1)//Position - 0x14897
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

var func_350(int iParam0)//Position - 0x14939
{
	return (system::shift_right(iParam0, 26) & 31 * func_351(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_351(bool bParam0, int iParam1, int iParam2)//Position - 0x1495E
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_352(var uParam0)//Position - 0x14975
{
	return uParam0 & 15;
}

void func_353(var uParam0, int iParam1)//Position - 0x14982
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_354(var uParam0, int iParam1)//Position - 0x149BC
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_355(var uParam0, int iParam1)//Position - 0x149F7
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_356(char* sParam0)//Position - 0x14A33
{
	if (unk_0x74C475EB8E73D398("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x74C475EB8E73D398("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x74C475EB8E73D398("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x74C475EB8E73D398("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_357(int iParam0)//Position - 0x14A89
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

int func_358(char* sParam0, int iParam1)//Position - 0x14ED5
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0x8B948C59217A295D(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_359(iVar0, &sVar1);
		if (unk_0x8B948C59217A295D(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_359(int iParam0, var uParam1)//Position - 0x14F1E
{
	switch (iParam0)
	{
		case 0:
			func_360(uParam1, "Abigail1", func_362(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_361(iParam0), 1, 0);
			break;
		
		case 1:
			func_360(uParam1, "Abigail2", func_362(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_361(iParam0), 1, 0);
			break;
		
		case 2:
			func_360(uParam1, "Barry1", func_362(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_361(iParam0), 1, 0);
			break;
		
		case 3:
			func_360(uParam1, "Barry2", func_362(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_361(iParam0), 1, 1);
			break;
		
		case 4:
			func_360(uParam1, "Barry3", func_362(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_361(iParam0), 0, 0);
			break;
		
		case 5:
			func_360(uParam1, "Barry3A", func_362(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_361(iParam0), 0, 1);
			break;
		
		case 6:
			func_360(uParam1, "Barry3C", func_362(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_361(iParam0), 0, 1);
			break;
		
		case 7:
			func_360(uParam1, "Barry4", func_362(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_361(iParam0), 0, 0);
			break;
		
		case 8:
			func_360(uParam1, "Dreyfuss1", func_362(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_361(iParam0), 0, 0);
			break;
		
		case 9:
			func_360(uParam1, "Epsilon1", func_362(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_361(iParam0), 0, 0);
			break;
		
		case 10:
			func_360(uParam1, "Epsilon2", func_362(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_361(iParam0), 1, 0);
			break;
		
		case 11:
			func_360(uParam1, "Epsilon3", func_362(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_361(iParam0), 0, 0);
			break;
		
		case 12:
			func_360(uParam1, "Epsilon4", func_362(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_361(iParam0), 0, 0);
			break;
		
		case 13:
			func_360(uParam1, "Epsilon5", func_362(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_361(iParam0), 1, 0);
			break;
		
		case 14:
			func_360(uParam1, "Epsilon6", func_362(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_361(iParam0), 0, 1);
			break;
		
		case 15:
			func_360(uParam1, "Epsilon7", func_362(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_361(iParam0), 0, 0);
			break;
		
		case 16:
			func_360(uParam1, "Epsilon8", func_362(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_361(iParam0), 1, 0);
			break;
		
		case 17:
			func_360(uParam1, "Extreme1", func_362(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_361(iParam0), 0, 1);
			break;
		
		case 18:
			func_360(uParam1, "Extreme2", func_362(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_361(iParam0), 0, 1);
			break;
		
		case 19:
			func_360(uParam1, "Extreme3", func_362(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_361(iParam0), 0, 1);
			break;
		
		case 20:
			func_360(uParam1, "Extreme4", func_362(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_361(iParam0), 0, 0);
			break;
		
		case 21:
			func_360(uParam1, "Fanatic1", func_362(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_361(iParam0), 1, 0);
			break;
		
		case 22:
			func_360(uParam1, "Fanatic2", func_362(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_361(iParam0), 1, 0);
			break;
		
		case 23:
			func_360(uParam1, "Fanatic3", func_362(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_361(iParam0), 0, 1);
			break;
		
		case 24:
			func_360(uParam1, "Hao1", func_362(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_361(iParam0), 0, 1);
			break;
		
		case 25:
			func_360(uParam1, "Hunting1", func_362(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_361(iParam0), 0, 1);
			break;
		
		case 26:
			func_360(uParam1, "Hunting2", func_362(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_361(iParam0), 0, 1);
			break;
		
		case 27:
			func_360(uParam1, "Josh1", func_362(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_361(iParam0), 1, 0);
			break;
		
		case 28:
			func_360(uParam1, "Josh2", func_362(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_361(iParam0), 1, 1);
			break;
		
		case 29:
			func_360(uParam1, "Josh3", func_362(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_361(iParam0), 1, 1);
			break;
		
		case 30:
			func_360(uParam1, "Josh4", func_362(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_361(iParam0), 1, 0);
			break;
		
		case 31:
			func_360(uParam1, "Maude1", func_362(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_361(iParam0), 0, 1);
			break;
		
		case 32:
			func_360(uParam1, "Minute1", func_362(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_361(iParam0), 0, 1);
			break;
		
		case 33:
			func_360(uParam1, "Minute2", func_362(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_361(iParam0), 0, 1);
			break;
		
		case 34:
			func_360(uParam1, "Minute3", func_362(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_361(iParam0), 0, 1);
			break;
		
		case 35:
			func_360(uParam1, "MrsPhilips1", func_362(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_361(iParam0), 0, 0);
			break;
		
		case 36:
			func_360(uParam1, "MrsPhilips2", func_362(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_361(iParam0), 0, 0);
			break;
		
		case 37:
			func_360(uParam1, "Nigel1", func_362(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_361(iParam0), 1, 0);
			break;
		
		case 38:
			func_360(uParam1, "Nigel1A", func_362(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_361(iParam0), 1, 1);
			break;
		
		case 39:
			func_360(uParam1, "Nigel1B", func_362(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_361(iParam0), 1, 1);
			break;
		
		case 40:
			func_360(uParam1, "Nigel1C", func_362(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_361(iParam0), 1, 1);
			break;
		
		case 41:
			func_360(uParam1, "Nigel1D", func_362(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_361(iParam0), 1, 1);
			break;
		
		case 42:
			func_360(uParam1, "Nigel2", func_362(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_361(iParam0), 1, 1);
			break;
		
		case 43:
			func_360(uParam1, "Nigel3", func_362(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_361(iParam0), 1, 1);
			break;
		
		case 44:
			func_360(uParam1, "Omega1", func_362(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_361(iParam0), 0, 0);
			break;
		
		case 45:
			func_360(uParam1, "Omega2", func_362(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_361(iParam0), 0, 0);
			break;
		
		case 46:
			func_360(uParam1, "Paparazzo1", func_362(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_361(iParam0), 0, 1);
			break;
		
		case 47:
			func_360(uParam1, "Paparazzo2", func_362(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_361(iParam0), 0, 1);
			break;
		
		case 48:
			func_360(uParam1, "Paparazzo3", func_362(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_361(iParam0), 0, 0);
			break;
		
		case 49:
			func_360(uParam1, "Paparazzo3A", func_362(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_361(iParam0), 0, 1);
			break;
		
		case 50:
			func_360(uParam1, "Paparazzo3B", func_362(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_361(iParam0), 0, 1);
			break;
		
		case 51:
			func_360(uParam1, "Paparazzo4", func_362(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_361(iParam0), 0, 0);
			break;
		
		case 52:
			func_360(uParam1, "Rampage1", func_362(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_361(iParam0), 0, 0);
			break;
		
		case 54:
			func_360(uParam1, "Rampage3", func_362(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_361(iParam0), 1, 0);
			break;
		
		case 55:
			func_360(uParam1, "Rampage4", func_362(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_361(iParam0), 1, 0);
			break;
		
		case 56:
			func_360(uParam1, "Rampage5", func_362(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_361(iParam0), 0, 0);
			break;
		
		case 53:
			func_360(uParam1, "Rampage2", func_362(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_361(iParam0), 1, 0);
			break;
		
		case 57:
			func_360(uParam1, "TheLastOne", func_362(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_361(iParam0), 0, 1);
			break;
		
		case 58:
			func_360(uParam1, "Tonya1", func_362(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_361(iParam0), 0, 1);
			break;
		
		case 59:
			func_360(uParam1, "Tonya2", func_362(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_361(iParam0), 0, 1);
			break;
		
		case 60:
			func_360(uParam1, "Tonya3", func_362(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_361(iParam0), 0, 1);
			break;
		
		case 61:
			func_360(uParam1, "Tonya4", func_362(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_361(iParam0), 0, 1);
			break;
		
		case 62:
			func_360(uParam1, "Tonya5", func_362(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_361(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_360(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x160D3
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

int func_361(int iParam0)//Position - 0x16164
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

struct<2> func_362(int iParam0)//Position - 0x164AA
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_357(iParam0) };
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

int func_363(int iParam0)//Position - 0x164E1
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_364(Global_104555.f_9055.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_364(Global_104555.f_9055.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_364(Global_104555.f_9055.f_99.f_205[11]);
			break;
		
		case 90:
			return func_364(Global_104555.f_9055.f_99.f_205[7]);
			break;
		
		case 93:
			return func_364(Global_104555.f_9055.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_364(int iParam0)//Position - 0x1659D
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_365(char* sParam0, bool bParam1)//Position - 0x165F1
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x8B948C59217A295D(sParam0);
	iVar1 = func_366(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_366(int iParam0, bool bParam1)//Position - 0x1661B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_83766[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_367()//Position - 0x16651
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		}
		if (unk_0x6ADD12BF4D6D2587(iVar0))
		{
			if (unk_0x0F3033474C49912D(iVar0, -1214,517f, -158,91f, -39,165f, -1243,589f, -238,784f, 39,165f, 15f, 0, 0, 0) && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iVar0, 0))
			{
				if (unk_0x90D5DFB054818BA7(iVar0) <= 0,5f)
				{
					if (!func_52(&iLocal_1093))
					{
						func_49(&iLocal_1093);
					}
				}
				else if (func_52(&iLocal_1093))
				{
					func_50(&iLocal_1093);
				}
				if (func_52(&iLocal_1093))
				{
					if (func_46(&iLocal_1093) > 10f)
					{
						func_31(2);
					}
				}
			}
			else if (func_52(&iLocal_1093))
			{
				func_50(&iLocal_1093);
			}
		}
	}
}

void func_368()//Position - 0x1672D
{
	switch (iLocal_1018)
	{
		case 0:
			if (func_399(1084227584, 1) || (bLocal_976 && unk_0xC548195DB18979E1(uLocal_955)))
			{
				func_398(-1248,398f, -183,366f, 37,72881f, -1216,437f, -196,8727f, 44,07541f, 59,25f, vLocal_1413, fLocal_1414, 1, 1, 1, 0, 0);
				unk_0x9B8406983378711E(-1220,57f, -185,96f, 38,4f, 50f, 0, 0, 0, 0, false, 0);
				unk_0xA896149A4DE38DEA(-1220,57f, -185,96f, 38,4f, 50f, 0);
				func_397();
				func_396();
				if (!unk_0x191BE1BC8F26F3C1(iLocal_1065, 0))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_1065, 0))
					{
						unk_0x8D7ABC97ED508270(iLocal_1065, 107, "ASSOJva", 1);
						unk_0x7A1DBB5E36EE3379(iLocal_1065, 2500f);
					}
				}
				if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						unk_0xDFC63F22B454FFF5(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), "OFF");
					}
				}
				iLocal_1018++;
			}
			else if (unk_0xC548195DB18979E1(uLocal_955))
			{
			}
			break;
		
		case 1:
			if (func_369())
			{
				iLocal_1019 = 0;
				unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
				func_506();
				func_251();
				iLocal_931 = 9;
			}
			break;
	}
}

int func_369()//Position - 0x16879
{
	int iVar0;
	
	switch (iLocal_1019)
	{
		case 0:
			func_395(0, 0, 1);
			func_394();
			unk_0x7E4FCDC8BAD0CF6D(iLocal_1078, "HAND_SHAKE", 0,2f);
			unk_0x7E4FCDC8BAD0CF6D(iLocal_1079, "HAND_SHAKE", 0,2f);
			unk_0xF10DA1539629CC3F(iLocal_1079, iLocal_1078, 6000, 0, 0);
			unk_0x3458550DF8E9B453(true, 0, 3000, 1, 0, 0);
			unk_0x3E80C2F7BC665259(1);
			unk_0x84CDD933AFA470D2();
			func_246("ASS_VA_SNIPE1", 7500, 1);
			if (bLocal_976)
			{
				func_393();
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(0f, 1065353216);
			}
			else
			{
				func_384();
			}
			system::settimera(0);
			iLocal_1019++;
			break;
		
		case 1:
			if (!unk_0x191BE1BC8F26F3C1(iLocal_1065, 0))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_1065, 0))
				{
					if (system::timera() > 6000)
					{
						if (unk_0x8DDE799D31A3D099(iLocal_1065))
						{
							unk_0x7674774BB9279265(iLocal_1065);
						}
						unk_0x8D7ABC97ED508270(iLocal_1065, 102, "ASSOJva", 1);
						unk_0x7A1DBB5E36EE3379(iLocal_1065, 4500f);
						unk_0x62429167B5AEF353(iLocal_1065, 1);
						func_246("ASS_VA_SNIPE2", 7500, 1);
						unk_0xA6DE0FBA9218D7F0(iLocal_1078, -1218,861f, -191,0496f, 38,83616f, 3,519839f, -0,000706f, 42,27108f, 38f, 0, 1, 1, 2);
						unk_0xCA21C7D4C54FCA93(iLocal_1078, 0,5f);
						unk_0x9A20E34C5F56D075(iLocal_1078, 7f);
						unk_0x7E4FCDC8BAD0CF6D(iLocal_1078, "HAND_SHAKE", 0,2f);
						unk_0xA6DE0FBA9218D7F0(iLocal_1079, -1218,91f, -190,8791f, 38,84585f, 3,519839f, -0,000706f, 43,33815f, 38f, 0, 1, 1, 2);
						unk_0xCA21C7D4C54FCA93(iLocal_1079, 0,7f);
						unk_0x9A20E34C5F56D075(iLocal_1079, 10f);
						unk_0x7E4FCDC8BAD0CF6D(iLocal_1079, "HAND_SHAKE", 0,2f);
						unk_0xF10DA1539629CC3F(iLocal_1079, iLocal_1078, 2000, 3, 3);
						iLocal_1019++;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x191BE1BC8F26F3C1(iLocal_1065, 0))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_1065, 0))
				{
					if (unk_0x9DC40A4E8D2F7969(iLocal_1065) >= 7000f)
					{
						unk_0x5496EE849BB0CFF1(iLocal_1065);
						iLocal_1017 = 0;
						while (iLocal_1017 < 3)
						{
							if (!unk_0x191BE1BC8F26F3C1(iLocal_941[iLocal_1017], 0))
							{
								if (iLocal_1017 == 0)
								{
									iVar0 = 1250;
								}
								else if (iLocal_1017 == 1)
								{
									iVar0 = 400;
								}
								else
								{
									iVar0 = 0;
								}
								if (unk_0x78F50AA8F955BEFC(iLocal_941[iLocal_1017], 242628503) != 1)
								{
									unk_0xFAA3EF7FF92E1F9E(&uLocal_1072);
									unk_0x6931076730A4AC5D(&uLocal_1072);
									unk_0x16416C5B54FDBCBB(0, iVar0, 0);
									unk_0x380C1E7B7740D618(0, vLocal_1052[iLocal_1017 /*3*/], 1f, 20000, 0,25f, 0, 1193033728);
									unk_0x1B16DD5C115FE009(uLocal_1072);
									unk_0xAB30B1CF01A198C1(iLocal_941[iLocal_1017], uLocal_1072);
									unk_0xFAA3EF7FF92E1F9E(&uLocal_1072);
								}
							}
							iLocal_1017++;
						}
						system::settimera(0);
						iLocal_1019++;
					}
				}
			}
			break;
		
		case 3:
			if (system::timera() >= 2000)
			{
				if (unk_0x1FB367C588A91451() == 4)
				{
					unk_0xA6DE0FBA9218D7F0(iLocal_1078, -1265,549f, -213,4919f, 43,0913f, -0,055f, 0,0543f, -50,0795f, 38f, 0, 1, 1, 2);
					unk_0x7E4FCDC8BAD0CF6D(iLocal_1078, "HAND_SHAKE", 0,2f);
					unk_0xA6DE0FBA9218D7F0(iLocal_1079, -1266,063f, -213,922f, 43,0918f, -0,055f, 0,0543f, -50,0795f, 38f, 0, 1, 1, 2);
					unk_0x7E4FCDC8BAD0CF6D(iLocal_1079, "HAND_SHAKE", 0,2f);
					unk_0xF10DA1539629CC3F(iLocal_1079, iLocal_1078, 4000, 3, 3);
					iLocal_1037 = 4000;
				}
				else
				{
					unk_0xA6DE0FBA9218D7F0(iLocal_1078, -1266,193f, -215,217f, 43,2442f, -3,1088f, 0,0498f, -48,5594f, 38f, 0, 1, 1, 2);
					unk_0x7E4FCDC8BAD0CF6D(iLocal_1078, "HAND_SHAKE", 0,2f);
					unk_0xA6DE0FBA9218D7F0(iLocal_1079, -1267,53f, -215,7824f, 43,1067f, -9,2365f, 0,0498f, -48,3561f, 38f, 0, 1, 1, 2);
					unk_0x7E4FCDC8BAD0CF6D(iLocal_1079, "HAND_SHAKE", 0,2f);
					unk_0xF10DA1539629CC3F(iLocal_1079, iLocal_1078, 4000, 3, 3);
					iLocal_1037 = 4000;
				}
				system::settimera(0);
				iLocal_1019++;
			}
			break;
		
		case 4:
			if (!iLocal_1015)
			{
				if (unk_0x1FB367C588A91451() == 4)
				{
					if (system::timera() >= (iLocal_1037 - 300))
					{
						unk_0xA91E83FF512776B6("CamPushInNeutral", 0, 0);
						unk_0x4AFBCBFDE748D4E0(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_1015 = 1;
					}
				}
			}
			if (system::timera() >= iLocal_1037)
			{
				if (unk_0xB8DE76287EDC4957(iLocal_1065, 0))
				{
					if (unk_0x8DDE799D31A3D099(iLocal_1065))
					{
						unk_0x7674774BB9279265(iLocal_1065);
					}
				}
				unk_0x9E6ACDF1473CD846(102, "ASSOJva");
				unk_0x9E6ACDF1473CD846(107, "ASSOJva");
				unk_0xDA5162F6425C44AA(iLocal_1065, 1, 1);
				unk_0xDA5162F6425C44AA(iLocal_1065, 0, 1);
				unk_0xDA5162F6425C44AA(iLocal_1065, 2, 1);
				unk_0x3E80C2F7BC665259(1);
				if (unk_0x1FB367C588A91451() == 4)
				{
					unk_0x3458550DF8E9B453(false, 0, 3000, 1, 0, 0);
				}
				else
				{
					unk_0x90CE99E954B80CFF(1, 0f, 1, 0);
				}
				func_374(1, 1, 1);
				return 1;
			}
			break;
	}
	if (func_372(iLocal_336))
	{
		unk_0x3E80C2F7BC665259(1);
		func_370(1);
		return 1;
	}
	return 0;
}

void func_370(bool bParam0)//Position - 0x16D61
{
	unk_0xBB9A3C553EECB180(0f);
	unk_0x7C9705890EF6612E(0f, 1065353216);
	if (unk_0xB8DE76287EDC4957(iLocal_1065, 0))
	{
		if (unk_0x8DDE799D31A3D099(iLocal_1065))
		{
			unk_0x7674774BB9279265(iLocal_1065);
		}
		unk_0x9E6ACDF1473CD846(102, "ASSOJva");
		unk_0x9E6ACDF1473CD846(107, "ASSOJva");
		unk_0xBD8D47FDC6902B2D(iLocal_1065, vLocal_1057, 1, 0, 0, 1);
		unk_0x48ED7B2293A96722(iLocal_1065, fLocal_1040);
		unk_0xDA5162F6425C44AA(iLocal_1065, 0, 1);
		unk_0xDA5162F6425C44AA(iLocal_1065, 1, 1);
		unk_0xDA5162F6425C44AA(iLocal_1065, 2, 1);
		unk_0xDA5162F6425C44AA(iLocal_1065, 2, 1);
		iLocal_1019 = 0;
		unk_0x84CDD933AFA470D2();
		unk_0x3458550DF8E9B453(false, 0, 3000, 1, 0, 0);
		func_374(1, 1, 1);
		if (bParam0)
		{
			func_371();
		}
	}
}

void func_371()//Position - 0x16E0A
{
	unk_0x59C3AC31C7544A28(1000);
	while (!unk_0x9F7B586A14398C40())
	{
		system::wait(0);
	}
}

int func_372(int iParam0)//Position - 0x16E29
{
	if (func_373() && unk_0x53C562FD2B9E3AB0() >= iParam0 + 1000)
	{
		unk_0xAE83ED4C9081AE6F(500);
		while (!unk_0x3E9CABD07B829173())
		{
			system::wait(0);
		}
		func_224(0);
		func_3();
		return 1;
	}
	return 0;
}

int func_373()//Position - 0x16E6C
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

void func_374(bool bParam0, bool bParam1, int iParam2)//Position - 0x16E9E
{
	if (bParam0)
	{
		unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), true, 0);
	}
	unk_0xAE3DF717857FE7CA(1);
	func_376(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0x9B47B379EE749C38(true);
		unk_0x4255E93FCCDE108E(1);
	}
	func_375(23, 0);
}

void func_375(int iParam0, bool bParam1)//Position - 0x16ED9
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

void func_376(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x16EFB
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_383(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_10())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_382(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_383(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_382(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_380(unk_0x9EB17624F44A8DA4())) && !func_378(unk_0x9EB17624F44A8DA4(), 0)) && !func_377())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_380(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_377()//Position - 0x17014
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_378(int iParam0, int iParam1)//Position - 0x17031
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_379(-1, 0) == 8;
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

int func_379(int iParam0, bool bParam1)//Position - 0x1707C
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_164();
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

int func_380(int iParam0)//Position - 0x170BD
{
	if (func_378(iParam0, 0))
	{
		return 1;
	}
	if (func_381())
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

bool func_381()//Position - 0x170FF
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_382(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x17110
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

void func_383(int iParam0)//Position - 0x17143
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

void func_384()//Position - 0x17166
{
	func_385(-1252,463f, -227,5894f, 39,03287f, -1267,239f, -207,9924f, 44,67352f, 17f, -1266,405f, -219,1991f, 41,4459f, 304,8644f, func_392(), 1, 1, 1, 0, 0);
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
		unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), -1266,173f, -214,0011f, 41,4459f, 1, 0, 0, 1);
		unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 310,0126f);
	}
}

void func_385(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0x171EE
{
	func_386(vParam0, vParam1, fParam2, vParam3, fParam4, vParam5, bParam6, bParam7, bParam8, bParam9, bParam10);
}

void func_386(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0x17218
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0xC733212BF9066BDF();
	if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		if (!unk_0x9761C10D57B68069(iVar0))
		{
			unk_0xDD29FF4BAB8AFF9C(iVar0, true, 0);
			iVar3 = 1;
		}
		if (unk_0xB8DE76287EDC4957(iVar0, 0))
		{
			if (bParam10)
			{
				func_391(iVar0);
			}
			if (unk_0x0F3033474C49912D(iVar0, vParam0, vParam1, fParam2, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				vVar6 = { unk_0xB3328BA8976B416C(iVar0, 1) };
				if ((vVar6.z > vParam0.z && vVar6.z < vParam1.z) || (vVar6.z > vParam1.z && vVar6.z < vParam0.z))
				{
					if (func_388(iVar0, vParam0, vParam1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (unk_0xB0DA749C8A7CCBBF(iVar0, joaat("taxi")))
				{
					if (unk_0x317536BCEA8FA6B0(iVar0, -1, 0) != unk_0xFC1458A37D98B502() && unk_0x317536BCEA8FA6B0(iVar0, -1, 0) != 0)
					{
						if (unk_0xBE3C4023003180FC(vParam0 + vParam1 / Vector(2f, 2f, 2f), unk_0xB3328BA8976B416C(iVar0, 1), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_304(iVar0, func_13(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_387(vParam5))
				{
					if (unk_0xB8DE76287EDC4957(iVar0, 0))
					{
						iVar7 = unk_0x82FF3DFBC3965CC0(iVar0);
						unk_0x830C2FE029F90C3F(iVar0, &vVar4, &vVar5);
						if (unk_0xF9DDB1C0875FD9E0(iVar7))
						{
							vParam5.x = (vParam5.x + 3f);
							vParam5.y = (vParam5.y + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							vParam5 = { vParam5 * Vector(1,1f, 1,1f, 1,1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							vParam5 = { vParam5 * Vector(1,2f, 1,2f, 1,2f) };
						}
						if ((vVar5.x - vVar4.x) > vParam5.x)
						{
							bVar2 = false;
						}
						else if ((vVar5.y - vVar4.y) > vParam5.y)
						{
							bVar2 = false;
						}
						else if ((vVar5.z - vVar4.z) > vParam5.z)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0xB8DE76287EDC4957(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x9B8406983378711E(vParam3, 5f, 0, 0, 0, 0, false, 0);
						unk_0x48ED7B2293A96722(iVar0, fParam4);
						unk_0xBD8D47FDC6902B2D(iVar0, vParam3, 1, 0, 0, 1);
						unk_0xACE486395AA1867D(iVar0, 1084227584);
						if (bParam9)
						{
							unk_0xA15269351F50F113(iVar0, false, 1, 0);
							unk_0x6147908AB85766AA(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0x9761C10D57B68069(iVar0) || !unk_0xCB234F3DD6FF9368(iVar0, 1))
						{
							unk_0xDD29FF4BAB8AFF9C(iVar0, true, 1);
						}
						if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iVar0, 0))
						{
							unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), unk_0xB3328BA8976B416C(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0xC91FE17AD7353B70(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				unk_0xBC489554C806C640(vParam0, vParam1, fParam2, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (unk_0x9761C10D57B68069(iVar0))
					{
						unk_0x5380482A432E314E(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0x9761C10D57B68069(iVar0))
			{
				unk_0xDD29FF4BAB8AFF9C(iVar0, true, 0);
			}
			iVar8 = unk_0x317536BCEA8FA6B0(iVar0, -1, 0);
			if (unk_0x6ADD12BF4D6D2587(iVar8) && !unk_0x3AB6A1A9084FB0A4(iVar8))
			{
				unk_0xBD8D47FDC6902B2D(iVar8, unk_0xB3328BA8976B416C(iVar8, 1), 1, 0, 0, 1);
			}
			iVar9 = unk_0xF82225DEA5272C6B(unk_0x82FF3DFBC3965CC0(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = unk_0x317536BCEA8FA6B0(iVar0, 0, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar8) && !unk_0x3AB6A1A9084FB0A4(iVar8))
				{
					unk_0xBD8D47FDC6902B2D(iVar8, unk_0xB3328BA8976B416C(iVar8, 1), 1, 0, 0, 1);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = unk_0x317536BCEA8FA6B0(iVar0, 1, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar8) && !unk_0x3AB6A1A9084FB0A4(iVar8))
				{
					unk_0xBD8D47FDC6902B2D(iVar8, unk_0xB3328BA8976B416C(iVar8, 1), 1, 0, 0, 1);
				}
				iVar8 = unk_0x317536BCEA8FA6B0(iVar0, 2, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar8) && !unk_0x3AB6A1A9084FB0A4(iVar8))
				{
					unk_0xBD8D47FDC6902B2D(iVar8, unk_0xB3328BA8976B416C(iVar8, 1), 1, 0, 0, 1);
				}
			}
			unk_0xC91FE17AD7353B70(&iVar0);
		}
	}
}

int func_387(vector3 vParam0)//Position - 0x1760C
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_388(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x17636
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		vParam1.z = vParam2.z;
		vVar0 = { func_390(vParam1 - vParam2) };
		vVar1 = { vVar0 };
		vVar0.x = -vVar1.y;
		vVar0.y = vVar1.x;
		vVar0.z = 0f;
		vVar2 = { vParam1 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar3 = { vParam1 + vVar0 * FtoV((fParam3 / 2f)) };
		vVar4 = { vParam2 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar5 = { vParam2 + vVar0 * FtoV((fParam3 / 2f)) };
		unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iParam0), &Var7, &Var8);
		vVar6[0 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, Var7, Var7.f_1, 0f) };
		vVar6[1 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, Var7, Var8.f_1, 0f) };
		vVar6[2 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, Var8, Var7.f_1, 0f) };
		vVar6[3 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, Var8, Var8.f_1, 0f) };
		if (((((((((((((((func_389(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar3) || func_389(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar3, vVar5)) || func_389(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar4, vVar5)) || func_389(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar4)) || func_389(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar3)) || func_389(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar3, vVar5)) || func_389(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar4, vVar5)) || func_389(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar4)) || func_389(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar3)) || func_389(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar3, vVar5)) || func_389(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar4, vVar5)) || func_389(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar4)) || func_389(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar3)) || func_389(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar3, vVar5)) || func_389(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar4, vVar5)) || func_389(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar4))
		{
			return 1;
		}
	}
	return 0;
}

int func_389(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)//Position - 0x1792C
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
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param2;
	fVar3 = Param2.f_1;
	fVar4 = Param4;
	fVar5 = Param4.f_1;
	fVar6 = Param6;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_390(vector3 vParam0)//Position - 0x179E0
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

void func_391(int iParam0)//Position - 0x17A1F
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (unk_0xA7B0253B80B52B2B(iParam0) <= 200f)
			{
				unk_0xB38E13EF2EC6F0E9(iParam0, 500f);
			}
			if (unk_0x32DFD9C17763ABE0(iParam0) <= 700f)
			{
				unk_0xB38E13EF2EC6F0E9(iParam0, 900f);
			}
			if (unk_0xDE523AF6F7B269AB(iParam0) < 200)
			{
				unk_0xB38E13EF2EC6F0E9(iParam0, 500f);
			}
		}
	}
}

Vector3 func_392()//Position - 0x17A84
{
	return 2,55f, 5,665f, 2,55f;
}

void func_393()//Position - 0x17A9B
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
		unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), vLocal_1061, 1, 0, 0, 1);
		unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 299,4985f);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_1068))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_1068, 0))
		{
			unk_0xA15269351F50F113(iLocal_1068, false, 1, 0);
			unk_0xBD8D47FDC6902B2D(iLocal_1068, -1251,873f, -256,7999f, 38,2695f, 1, 0, 0, 1);
			unk_0x48ED7B2293A96722(iLocal_1068, 296,7603f);
			unk_0xACE486395AA1867D(iLocal_1068, 1084227584);
		}
	}
}

int func_394()//Position - 0x17B27
{
	iLocal_336 = unk_0x53C562FD2B9E3AB0();
	return iLocal_336;
}

void func_395(int iParam0, int iParam1, int iParam2)//Position - 0x17B39
{
	unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), false, iParam0);
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0x49779D62887BC4A2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 15f);
	}
	unk_0xAE3DF717857FE7CA(iParam1);
	func_224(0);
	func_376(1, 1, iParam2, 0);
	unk_0x9B47B379EE749C38(false);
	unk_0x4255E93FCCDE108E(0);
	func_375(23, 1);
}

void func_396()//Position - 0x17B8F
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_1065))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_1065, 0))
		{
			iLocal_1017 = 0;
			while (iLocal_1017 < 3)
			{
				if (!unk_0x6ADD12BF4D6D2587(iLocal_941[iLocal_1017]))
				{
					if (iLocal_1017 == 0)
					{
						iLocal_941[iLocal_1017] = unk_0x00D1A9572426E8DD(iLocal_1065, 26, iLocal_1075, -1, 1, true);
						unk_0x03924C68EFCBC511(iLocal_941[iLocal_1017], 0, 0, 2, 0);
						unk_0x03924C68EFCBC511(iLocal_941[iLocal_1017], 3, 0, 0, 0);
						unk_0x03924C68EFCBC511(iLocal_941[iLocal_1017], 4, 0, 1, 0);
						unk_0x03924C68EFCBC511(iLocal_941[iLocal_1017], 8, 0, 0, 0);
						unk_0x03924C68EFCBC511(iLocal_941[iLocal_1017], 11, 0, 0, 0);
					}
					else if (iLocal_1017 == 1)
					{
						iLocal_941[iLocal_1017] = unk_0x00D1A9572426E8DD(iLocal_1065, 26, iLocal_1075, 0, 1, true);
						unk_0x03924C68EFCBC511(iLocal_941[iLocal_1017], 0, 1, 2, 0);
						unk_0x03924C68EFCBC511(iLocal_941[iLocal_1017], 3, 0, 1, 0);
						unk_0x03924C68EFCBC511(iLocal_941[iLocal_1017], 4, 0, 0, 0);
						unk_0x03924C68EFCBC511(iLocal_941[iLocal_1017], 8, 0, 0, 0);
						unk_0x03924C68EFCBC511(iLocal_941[iLocal_1017], 11, 0, 2, 0);
					}
					else if (iLocal_1017 == 2)
					{
						iLocal_941[iLocal_1017] = unk_0x00D1A9572426E8DD(iLocal_1065, 26, iLocal_1076, 1, 1, true);
						unk_0x03924C68EFCBC511(iLocal_941[iLocal_1017], 0, 1, 2, 0);
						unk_0x03924C68EFCBC511(iLocal_941[iLocal_1017], 3, 0, 2, 0);
						unk_0x03924C68EFCBC511(iLocal_941[iLocal_1017], 4, 0, 1, 0);
						unk_0x03924C68EFCBC511(iLocal_941[iLocal_1017], 8, 0, 0, 0);
						unk_0x03924C68EFCBC511(iLocal_941[iLocal_1017], 11, 1, 1, 0);
					}
				}
				iLocal_1017++;
			}
		}
	}
}

void func_397()//Position - 0x17D28
{
	if (!unk_0x6ADD12BF4D6D2587(iLocal_1065))
	{
		iLocal_1065 = unk_0xEA60F3B426BB095B(iLocal_1074, vLocal_1056, fLocal_1039, 1, 1, 0);
		unk_0x14776E43F90DD454(iLocal_1074);
		unk_0xFA87254221D30EB8(iLocal_1065, 1);
		unk_0xCFF0CD14B439821D(iLocal_1065, 1, 1);
		unk_0x55B1BF6B77028A46(iLocal_1065, 1);
	}
}

void func_398(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x17D70
{
	func_386(vParam0, vParam1, fParam2, vParam3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

int func_399(float fParam0, int iParam1)//Position - 0x17D99
{
	int iVar0;
	
	if (((unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && func_400(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), fParam0, 1, 1056964608, 0, 1, 0)) && !unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!func_52(&iLocal_321))
		{
			func_50(&iLocal_321);
			if (unk_0x6ADD12BF4D6D2587(unk_0xC733212BF9066BDF()))
			{
				iVar0 = unk_0xC733212BF9066BDF();
				if (unk_0xB8DE76287EDC4957(iVar0, 0))
				{
					unk_0xFB2E9855F95E3BD3(iVar0, 0f);
				}
			}
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
		}
		else if (func_46(&iLocal_321) > 1f || iParam1 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_400(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x17E44
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
	func_401(iParam0);
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

void func_401(int iParam0)//Position - 0x17FD3
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

void func_402()//Position - 0x17FFF
{
	int iVar0;
	
	switch (iLocal_1018)
	{
		case 0:
			func_416(500);
			func_298(0, "assassin_hotel_go_to_hotel", 0, 0, 0, 1);
			if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
			{
				func_246("ASS_VA_LOSECOPS", 7500, 1);
			}
			unk_0x9B8406983378711E(-1220,57f, -185,96f, 38,4f, 50f, 0, 0, 0, 0, false, 0);
			iLocal_1018++;
			break;
		
		case 1:
			func_415();
			if (!unk_0x6ADD12BF4D6D2587(iLocal_1070))
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
						if (unk_0x317536BCEA8FA6B0(iVar0, -1, 0) == unk_0xFC1458A37D98B502())
						{
							iLocal_1070 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
							if (unk_0x6ADD12BF4D6D2587(iLocal_1070) && !unk_0x191BE1BC8F26F3C1(iLocal_1070, 0))
							{
								func_284(iLocal_1070);
							}
						}
					}
				}
			}
			if (!unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
			{
				if (!func_412())
				{
					if (!unk_0xA6DECE14FC9A8C51(iLocal_949))
					{
						iLocal_949 = func_411(vLocal_1061, 1);
						unk_0x62BD54E491535B76(iLocal_949, "ASS_VA_DESTBLIP");
						func_410(&iLocal_949, -1234,307f, -250,6783f, 38,2238f, 28,914f);
						if (!iLocal_958)
						{
							func_246("ASS_VA_GOHOTEL", 7500, 1);
							iLocal_958 = 1;
						}
						else if (func_409("ASS_VA_LOSECOPS", 0, 0))
						{
							unk_0x84CDD933AFA470D2();
						}
					}
				}
				else if (unk_0xC548195DB18979E1(uLocal_955) && func_408())
				{
					func_407();
					func_251();
					iLocal_931 = 8;
				}
			}
			else if (!func_412())
			{
				func_406(iLocal_949, "ASS_VA_LOSECOPS");
			}
			else
			{
				func_31(3);
			}
			func_403();
			break;
	}
}

void func_403()//Position - 0x181A4
{
	if (!iLocal_957)
	{
		if (func_269(vLocal_1061, 1) <= 100f)
		{
			func_405();
			uLocal_955 = unk_0xC167CBCBE7230263(-1244,344f, -251,566f, 50,3194f, -9,2001f, 0,0498f, 6,3064f, 80f, 12, 127);
			iLocal_957 = 1;
		}
	}
	else if (func_269(vLocal_1061, 1) > 120f)
	{
		if (unk_0xB774D40D7819292F(uLocal_955))
		{
			unk_0x48B475D0F512A41A(uLocal_955);
			func_259();
			iLocal_957 = 0;
		}
	}
	else if (!unk_0xB774D40D7819292F(uLocal_955))
	{
		if (!func_404())
		{
			iLocal_957 = 0;
		}
	}
}

int func_404()//Position - 0x18244
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), joaat("taxi")))
		{
			if (unk_0x317536BCEA8FA6B0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), -1, 0) != unk_0xFC1458A37D98B502())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_405()//Position - 0x18288
{
	unk_0x6FF834D85E2DD4C6(iLocal_1075);
	unk_0x6FF834D85E2DD4C6(iLocal_1076);
}

void func_406(int iParam0, char* sParam1)//Position - 0x1829E
{
	if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
	{
		if (unk_0xA6DECE14FC9A8C51(iParam0))
		{
			unk_0xE30CF11C0EE14316(&iParam0);
			unk_0x84CDD933AFA470D2();
			func_246(sParam1, 7500, 1);
		}
	}
}

void func_407()//Position - 0x182CF
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_949))
	{
		unk_0xE30CF11C0EE14316(&iLocal_949);
	}
}

int func_408()//Position - 0x182E8
{
	int iVar0;
	
	func_405();
	if (unk_0x9A0B2ED5055D3F0B(iLocal_1075) && unk_0x9A0B2ED5055D3F0B(iLocal_1076))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_409(char* sParam0, int iParam1, char* sParam2)//Position - 0x18315
{
	unk_0x4AF56F03659830D9(sParam0);
	if (iParam1 == 1)
	{
		unk_0xA6D2B267C377D7B2(sParam2);
	}
	return unk_0xC20F7134D3568246();
}

void func_410(int iParam0, vector3 vParam1, float fParam2)//Position - 0x18333
{
	if (unk_0xA6DECE14FC9A8C51(*iParam0))
	{
		Global_103591 = *iParam0;
		Global_103596 = { vParam1 };
		Global_103600 = fParam2;
	}
}

int func_411(vector3 vParam0, int iParam1)//Position - 0x1835C
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_196(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(iVar0, iParam1);
	return iVar0;
}

int func_412()//Position - 0x18388
{
	float fVar0;
	int iVar1;
	
	iVar1 = 0;
	fVar0 = func_26(iLocal_938, vLocal_1061, 1);
	if (fVar0 < 200f)
	{
		func_414();
	}
	if (func_413())
	{
		if (unk_0x0C88267282FD588F(iLocal_938, vLocal_1061, 25f, 25f, 90f, 1, 1, 0))
		{
			iVar1 = 1;
		}
	}
	if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
	{
		if ((fVar0 < 2f || unk_0x0C88267282FD588F(iLocal_938, vLocal_1061, 2f, 2f, 2f, 1, 1, 0)) || iVar1)
		{
			if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1141,085f, -192,66f, 75,756f, -1246,085f, -192,66f, 100,756f, 115f, 0, 1, 0))
			{
				if (func_413() && iVar1)
				{
					return 1;
				}
				else if (!unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_413()//Position - 0x18467
{
	int iVar0;
	
	if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		return 0;
	}
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		return 0;
	}
	if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()) || unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
	{
		iLocal_1068 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		iVar0 = unk_0x82FF3DFBC3965CC0(iLocal_1068);
		if (iVar0 != joaat("blimp") && iVar0 != joaat("blimp2"))
		{
			bLocal_976 = true;
			return 1;
		}
	}
	return 0;
}

void func_414()//Position - 0x184DE
{
	var uVar0;
	
	switch (iLocal_1025)
	{
		case 0:
			unk_0x6FF834D85E2DD4C6(joaat("a_m_m_bevhills_01"));
			unk_0x6FF834D85E2DD4C6(joaat("a_f_m_bevhills_01"));
			unk_0x6FF834D85E2DD4C6(joaat("a_f_m_bevhills_02"));
			unk_0x6FF834D85E2DD4C6(joaat("a_m_y_hipster_01"));
			unk_0x6FF834D85E2DD4C6(joaat("taxi"));
			unk_0x307EAE14C924E2E7("OJAS_HotelTaxi01");
			unk_0x6450931B826B49D9("oddjobs@assassinate@hotel@");
			if ((((((unk_0x9A0B2ED5055D3F0B(joaat("a_m_m_bevhills_01")) && unk_0x9A0B2ED5055D3F0B(joaat("a_f_m_bevhills_01"))) && unk_0x9A0B2ED5055D3F0B(joaat("a_f_m_bevhills_02"))) && unk_0x9A0B2ED5055D3F0B(joaat("taxi"))) && unk_0x9A0B2ED5055D3F0B(joaat("a_m_y_hipster_01"))) && unk_0x3A801AA34DD821BE("oddjobs@assassinate@hotel@")) && unk_0xC316B5E3E7ACF515("OJAS_HotelTaxi01"))
			{
				iLocal_1025++;
			}
			break;
		
		case 1:
			Local_1427[0] = unk_0xAC992EFAD62C33BF(4, joaat("a_f_m_bevhills_01"), -1220,679f, -203,2689f, 38,3251f, 321,2841f, 1, true);
			Local_1427[1] = unk_0xAC992EFAD62C33BF(4, joaat("a_f_m_bevhills_02"), -1219,596f, -201,3663f, 38,3251f, 110,7199f, 1, true);
			unk_0x771A86309E0CA47B(Local_1427[0], 1);
			unk_0x771A86309E0CA47B(Local_1427[1], 1);
			unk_0x6931076730A4AC5D(&uVar0);
			unk_0x60C06BFD037BB7CF(0, Local_1427[1], -1, 0, 2);
			unk_0xE81769B567532C48(0, "WORLD_HUMAN_TOURIST_MOBILE", -1220,679f, -203,2689f, 38,3251f, 321,2841f, 0, 0, 1);
			unk_0x1B16DD5C115FE009(uVar0);
			if (!unk_0x191BE1BC8F26F3C1(Local_1427[0], 0))
			{
				unk_0xAB30B1CF01A198C1(Local_1427[0], uVar0);
			}
			unk_0xFAA3EF7FF92E1F9E(&uVar0);
			unk_0x6931076730A4AC5D(&uVar0);
			unk_0x60C06BFD037BB7CF(0, Local_1427[0], -1, 0, 2);
			unk_0xE81769B567532C48(0, "WORLD_HUMAN_TOURIST_MAP", -1219,596f, -201,3663f, 38,3251f, 110,7199f, 0, 0, 1);
			unk_0x1B16DD5C115FE009(uVar0);
			if (!unk_0x191BE1BC8F26F3C1(Local_1427[1], 0))
			{
				unk_0xAB30B1CF01A198C1(Local_1427[1], uVar0);
			}
			unk_0xFAA3EF7FF92E1F9E(&uVar0);
			Local_1427.f_4 = unk_0xEA60F3B426BB095B(joaat("taxi"), -1221,73f, -199,0665f, 38,1751f, 152,5038f, 1, 1, 0);
			unk_0xACE486395AA1867D(Local_1427.f_4, 1084227584);
			Local_1427.f_3 = unk_0x00D1A9572426E8DD(Local_1427.f_4, 4, joaat("a_m_y_hipster_01"), -1, 1, true);
			unk_0x771A86309E0CA47B(Local_1427.f_3, 1);
			unk_0x60C06BFD037BB7CF(Local_1427.f_3, Local_1427[0], -1, 0, 2);
			Local_1427.f_8[0] = unk_0xAC992EFAD62C33BF(4, joaat("a_m_m_bevhills_01"), -1211,597f, -184,5331f, 38,3255f, 4,5193f, 1, true);
			Local_1427.f_8[1] = unk_0xAC992EFAD62C33BF(4, joaat("a_m_y_hipster_01"), -1211,654f, -182,7625f, 38,3255f, 166,2532f, 1, true);
			unk_0x771A86309E0CA47B(Local_1427.f_8[0], 1);
			unk_0x771A86309E0CA47B(Local_1427.f_8[1], 1);
			unk_0x12C9D41D52A560D6(Local_1427.f_8[0], "oddjobs@assassinate@hotel@", "idle_a", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(Local_1427.f_8[1], "oddjobs@assassinate@hotel@", "argue_b", 8f, -4f, -1, 1, 0, 0, 0, 0);
			Local_1427.f_5[0] = unk_0xAC992EFAD62C33BF(4, joaat("a_m_m_bevhills_01"), -1229,099f, -176,3197f, 38,3255f, 231,8036f, 1, true);
			Local_1427.f_5[1] = unk_0xAC992EFAD62C33BF(4, joaat("a_f_m_bevhills_02"), -1249,779f, -162,4767f, 39,4131f, 220,1651f, 1, true);
			unk_0x771A86309E0CA47B(Local_1427.f_5[0], 1);
			unk_0x771A86309E0CA47B(Local_1427.f_5[1], 1);
			unk_0x12C9D41D52A560D6(Local_1427.f_5[0], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(Local_1427.f_5[1], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
			Local_1427.f_11 = 1;
			unk_0x14776E43F90DD454(joaat("a_m_m_bevhills_01"));
			unk_0x14776E43F90DD454(joaat("a_f_m_bevhills_01"));
			unk_0x14776E43F90DD454(joaat("a_f_m_bevhills_02"));
			unk_0x14776E43F90DD454(joaat("a_m_y_hipster_01"));
			unk_0x14776E43F90DD454(joaat("taxi"));
			iLocal_1025++;
			break;
		
		case 2:
			break;
	}
}

void func_415()//Position - 0x188CD
{
	vector3 vVar0;
	
	if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
	{
		iLocal_1011 = 1;
		return;
	}
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	}
	if (iLocal_1011)
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			fLocal_1049 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_1061);
			iLocal_1011 = 0;
		}
	}
	else if (fLocal_1049 == 0f)
	{
		fLocal_1049 = system::vdist(-1510,291f, -946,9932f, 8,278f, vLocal_1061);
	}
	if (system::vdist(vVar0, vLocal_1061) > (fLocal_1049 + 400f))
	{
		func_31(7);
	}
	else if (system::vdist(vVar0, vLocal_1061) > (fLocal_1049 + 200f))
	{
		if (!iLocal_1007)
		{
			func_246("ASS_VA_RHOTEL", 7500, 1);
			iLocal_1007 = 1;
		}
	}
}

void func_416(int iParam0)//Position - 0x189A7
{
	if (!unk_0x9F7B586A14398C40())
	{
		unk_0x59C3AC31C7544A28(iParam0);
		while (!unk_0x9F7B586A14398C40())
		{
			system::wait(0);
		}
	}
}

void func_417()//Position - 0x189CD
{
	var uVar0;
	float fVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iLocal_944))
	{
		func_422();
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_944))
		{
			fVar1 = func_23(iLocal_944, 1);
			unk_0x4ACB9D202CFF8727(iLocal_944, 0);
			unk_0xEB2D96E7D3F4906C(iLocal_944, 0);
			unk_0x5C5D33A1B2711D21(iLocal_944, false);
			unk_0x66698545014E2F21(iLocal_944, 16);
			unk_0xAE01EF4BC84AFE7C(iLocal_944, 208, true);
			if (fVar1 < 5f)
			{
				if (func_52(&iLocal_1105))
				{
					if (!func_22())
					{
						if (func_419(&iLocal_1105, 10f))
						{
							func_29(&uLocal_1112, 3, iLocal_944, "LESTER", 0, 1);
							func_6(&uLocal_1112, "OJASAUD", "OJAS_FOLLOW", 9, 0, 0, 0);
						}
					}
				}
			}
			else if (fVar1 > 100f)
			{
				if (unk_0xEC211A86AB3726B6(iLocal_944) || !unk_0x841ED61760A7D07B(iLocal_944))
				{
					func_418();
				}
			}
			switch (iLocal_1016)
			{
				case 0:
					if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
					{
						if ((unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()) || (unk_0x6ADD12BF4D6D2587(iLocal_944) && unk_0xEBE499597C718EB8(iLocal_944, unk_0xFC1458A37D98B502(), 1))) || unk_0xEBE499597C718EB8(iLocal_1426, unk_0xFC1458A37D98B502(), 1))
						{
							if (unk_0xEBE499597C718EB8(iLocal_1426, unk_0xFC1458A37D98B502(), 1))
							{
							}
							unk_0x60C54803C97FDAAB(iLocal_944, "move_lester_CaneUp", 1048576000);
							unk_0x12C9D41D52A560D6(iLocal_944, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 1000f, -4f, -1, 790536, 0, 0, 0, 0);
							iLocal_1016 = 1;
						}
					}
					break;
				
				case 1:
					if (unk_0xA5F6598E13F98E08(iLocal_944, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 3))
					{
						if (unk_0x7A70772AE40E3821(iLocal_944, "oddjobs@assassinate@hotel@leadin", "Lester_Getup") >= 0,376f)
						{
							unk_0x6931076730A4AC5D(&uVar0);
							unk_0x380C1E7B7740D618(0, -1502,029f, -948,687f, 7,65061f, 1f, 20000, 1f, 1, 1193033728);
							unk_0x380C1E7B7740D618(0, -1462,339f, -964,178f, 6,3394f, 1f, -1, 1f, 1, 1193033728);
							unk_0x93F12E7D8D931858(0, unk_0xF0371FE6E2BF9599(iLocal_944), 0);
							unk_0x1B16DD5C115FE009(uVar0);
							unk_0xAB30B1CF01A198C1(iLocal_944, uVar0);
							unk_0xFAA3EF7FF92E1F9E(&uVar0);
							unk_0x31BBD48AA2503617(iLocal_944, -668482597, 0, 0, 0);
							iLocal_1016 = 2;
						}
					}
					break;
				
				case 2:
					break;
				}
			}
	}
}

void func_418()//Position - 0x18BED
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_944))
	{
		unk_0x68433819717660CF(&iLocal_944);
	}
}

int func_419(int iParam0, float fParam1)//Position - 0x18C06
{
	if (func_421(iParam0, fParam1))
	{
		func_420(iParam0);
		return 1;
	}
	return 0;
}

void func_420(int iParam0)//Position - 0x18C24
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_421(int iParam0, float fParam1)//Position - 0x18C3A
{
	if (func_52(iParam0))
	{
		if (func_46(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_422()//Position - 0x18C5C
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_944))
	{
		if (unk_0xEBE499597C718EB8(iLocal_944, unk_0xFC1458A37D98B502(), 1))
		{
			func_31(9);
		}
	}
}

void func_423()//Position - 0x18C86
{
	unk_0x8810DC630928B398("ASS1_STOP");
	if (!unk_0xC80D31E4B587871C(Global_92833.f_20, 13))
	{
		func_506();
	}
	func_424(0, -1, 1);
	unk_0xBB9A3C553EECB180(0f);
	unk_0x7C9705890EF6612E(0f, 1065353216);
	iLocal_931 = 18;
	func_416(500);
}

void func_424(int iParam0, int iParam1, int iParam2)//Position - 0x18CCD
{
	if (func_513() && func_426())
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
		func_425(0);
	}
}

void func_425(int iParam0)//Position - 0x18D91
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

bool func_426()//Position - 0x18DBA
{
	return unk_0xC80D31E4B587871C(Global_92833.f_20, 13);
}

void func_427()//Position - 0x18DCE
{
	while (iLocal_1025 < 2)
	{
		func_414();
		system::wait(0);
	}
	func_397();
	func_370(0);
	if (!unk_0xC80D31E4B587871C(Global_92833.f_20, 13))
	{
		func_506();
	}
	iLocal_985 = 0;
	iLocal_1009 = 0;
	unk_0x9B8406983378711E(-1220,57f, -185,96f, 38,4f, 50f, 0, 0, 0, 0, false, 0);
	unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
	unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
	unk_0x8810DC630928B398("ASS1_RESTART1");
	while (!func_408())
	{
		system::wait(0);
	}
	func_424(0, -1, 1);
	unk_0xBB9A3C553EECB180(0f);
	unk_0x7C9705890EF6612E(0f, 1065353216);
	iLocal_931 = 9;
	func_416(500);
}

void func_428()//Position - 0x18E7A
{
	func_424(0, -1, 1);
	unk_0xBB9A3C553EECB180(0f);
	unk_0x7C9705890EF6612E(0f, 1065353216);
	func_416(500);
	iLocal_931 = 7;
}

void func_429()//Position - 0x18EA3
{
	iLocal_1069[0] = unk_0xEA60F3B426BB095B(iLocal_1077, -1270,045f, -251,4953f, 41,4459f, 214,63f, 1, 1, 0);
	iLocal_1069[1] = unk_0xEA60F3B426BB095B(iLocal_1077, -1265,199f, -218,4823f, 45,9981f, 127,85f, 1, 1, 0);
}

void func_430()//Position - 0x18EF3
{
	iLocal_1078 = unk_0x5AC38B4D80D4E352(26379945, -1244,344f, -251,566f, 50,3194f, -9,2001f, 0,0498f, 6,3064f, 38f, 0, 2);
	iLocal_1079 = unk_0x5AC38B4D80D4E352(26379945, -1243,588f, -251,4826f, 50,3187f, -9,2001f, 0,0498f, 6,3064f, 38f, 0, 2);
}

int func_431()//Position - 0x18F5D
{
	int iVar0;
	
	iVar0 = 0;
	if (((((((((unk_0x9A0B2ED5055D3F0B(iLocal_1074) && unk_0x9A0B2ED5055D3F0B(iLocal_1077)) && unk_0x0840F461D7BD8859(102, "ASSOJva")) && unk_0x0840F461D7BD8859(107, "ASSOJva")) && unk_0xC316B5E3E7ACF515("OJASva_101")) && unk_0xC316B5E3E7ACF515("OJASva_101a")) && unk_0xC316B5E3E7ACF515("OJASva_104")) && unk_0x3A801AA34DD821BE("ODDJOBS@ASSASSINATE@GUARD")) && unk_0x3A801AA34DD821BE("oddjobs@assassinate@hotel@")) && unk_0x9F0887BCBFCF3C2F(3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_432()//Position - 0x18FEF
{
	unk_0x6FF834D85E2DD4C6(iLocal_1074);
	unk_0x6FF834D85E2DD4C6(iLocal_1077);
	unk_0x6450931B826B49D9("ODDJOBS@ASSASSINATE@GUARD");
	unk_0x6450931B826B49D9("oddjobs@assassinate@hotel@");
	unk_0xBCBC53983EC3B1BA("ASS_VA", 3);
	unk_0x0D9525F20FB71C52(102, "ASSOJva");
	unk_0x0D9525F20FB71C52(107, "ASSOJva");
	unk_0x307EAE14C924E2E7("OJASva_101");
	unk_0x307EAE14C924E2E7("OJASva_101a");
	unk_0x307EAE14C924E2E7("OJASva_104");
}

void func_433(bool bParam0)//Position - 0x1904A
{
	if (bParam0)
	{
		unk_0x4C15495E88D71C61(Vector(39,1642f, -193,934f, -1237,397f) - Vector(150f, 150f, 150f), Vector(39,1642f, -193,934f, -1237,397f) + Vector(150f, 150f, 150f), false, 1);
		unk_0xBF98CCF1EA4B13E9(-1349,176f, -39,0123f, -100,7554f, -1173,215f, -297,7677f, 100,8606f, 0, 1);
	}
	else
	{
		unk_0x4C15495E88D71C61(-1340,905f, -68,1138f, -100,7554f, -1176,622f, -287,8646f, 100,8606f, true, 1);
		unk_0xD855BC7E9D7EC87F(-1349,176f, -39,0123f, -100,7554f, -1173,215f, -297,7677f, 100,8606f, 1);
	}
}

void func_434()//Position - 0x19109
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { -1220,344f, -193,4014f, 38,1754f };
	vVar1 = { -1279,658f, -222,0533f, 41,446f };
	func_29(&uLocal_1112, 1, iLocal_938, "FRANKLIN", 0, 1);
	unk_0x94BD6F0436473406(0,2f);
	unk_0x4DE114E3C7F8B7C2("Guards", &iLocal_1080);
	unk_0xF96119FCCD4D1889(1, -1533126372, iLocal_1080);
	unk_0xF96119FCCD4D1889(1, iLocal_1080, -1533126372);
	unk_0xF96119FCCD4D1889(5, iLocal_1080, 1862763509);
	unk_0xF96119FCCD4D1889(5, 1862763509, iLocal_1080);
	unk_0x247EAA2E93D4A021(-1220,57f, -185,96f, 38,4f, 200f, 1, 0, 0, false);
	unk_0xBB0951717202666D(-1298,684f, -324,0442f, -35,578f, -1113,372f, -46,1583f, 55,609f);
	iLocal_953 = unk_0xCB389937EDB1519A(vVar0 - Vector(15f, 15f, 15f), vVar0 + Vector(15f, 15f, 15f), 0, 1, 1, 1);
	iLocal_954 = unk_0xCB389937EDB1519A(vVar1 - Vector(45f, 35f, 35f), vVar1 + Vector(45f, 35f, 35f), 0, 1, 1, 1);
}

void func_435()//Position - 0x19235
{
	StringCopy(&Local_919, "ASS_VA_PASSED", 24);
	MemCopy(&(Local_919.f_6), {Global_55918}, 6);
	StringCopy(&(Local_919.f_12), "ASS_VA_TIMER", 24);
	StringCopy(&(Local_919.f_18), "ASS_VA_BASE", 24);
	StringCopy(&(Local_919.f_24), "ASS_VA_BDESC", 24);
	StringCopy(&(Local_919.f_30), "ASS_VA_CASH", 24);
	StringCopy(&(Local_919.f_36), "ASS_VA_COMP", 24);
	StringCopy(&(Local_919.f_42), "ASS_VA_COMP", 24);
	StringCopy(&(Local_919.f_48), "ASS_VA_COMP", 24);
	StringCopy(&(Local_919.f_54), "ASS_VA_COMP", 24);
}

void func_436()//Position - 0x192AB
{
	vLocal_1055 = { -1343,493f, -153,199f, 47,1825f };
	fLocal_1043 = 260,3612f;
	vLocal_1056 = { -1242,213f, -241,5975f, 38,71f };
	fLocal_1039 = 96,8755f;
	vLocal_1057 = { -1221,631f, -186,8819f, 38,7996f };
	fLocal_1040 = 201,0763f;
	fLocal_1044 = 40f;
	Local_320.f_2 = 40f;
	vLocal_1052[0 /*3*/] = { -1221,154f, -170,9907f, 38,3253f };
	vLocal_1052[1 /*3*/] = { -1210,556f, -192,882f, 38,3253f };
	vLocal_1052[2 /*3*/] = { -1216,369f, -203,6806f, 38,3253f };
	fLocal_1045[0] = 157,3177f;
	fLocal_1045[1] = 58,3594f;
	fLocal_1045[2] = 65,6443f;
	vLocal_1054[0 /*3*/] = { -1220,377f, -169,407f, 38,3253f };
	vLocal_1054[1 /*3*/] = { -1208,963f, -193,8791f, 38,3253f };
	vLocal_1054[2 /*3*/] = { -1214,955f, -205,0824f, 38,3253f };
	vLocal_1054[3 /*3*/] = { -1217,518f, -197,13f, 38,3254f };
	vLocal_1054[4 /*3*/] = { -1231,892f, -194,382f, 38,1753f };
	fLocal_1041[0] = 160,0748f;
	fLocal_1041[1] = 58,3365f;
	fLocal_1041[2] = 58,0214f;
	fLocal_1041[3] = 97,6664f;
	fLocal_1041[4] = 225,8689f;
	iLocal_1017 = 0;
	while (iLocal_1017 <= 4)
	{
		fLocal_1042[iLocal_1017] = unk_0x5B811202FCBE9E9D(0f, 2f);
		iLocal_1017++;
	}
	fLocal_327 = 7000f;
	fLocal_328 = 2000f;
	iLocal_937 = 0;
	iLocal_1005 = 0;
	bLocal_1006 = false;
	iLocal_991 = 0;
	bLocal_1014 = false;
	iLocal_1013 = 0;
}

void func_437()//Position - 0x19475
{
	switch (iLocal_1018)
	{
		case 0:
			unk_0x393584863A2F304E("ASS_INT_2_ALT1", 8);
			unk_0x6FF834D85E2DD4C6(joaat("ig_lestercrest"));
			unk_0x6FF834D85E2DD4C6(joaat("prop_cs_walking_stick"));
			unk_0x6450931B826B49D9("oddjobs@assassinate@hotel@leadin");
			unk_0x6450931B826B49D9("oddjobs@assassinate@hotel@leaning@");
			unk_0x7C0C9D9129095E19("move_lester_CaneUp");
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
			unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
			if ((((unk_0x9A0B2ED5055D3F0B(joaat("ig_lestercrest")) && unk_0x9A0B2ED5055D3F0B(joaat("prop_cs_walking_stick"))) && unk_0x3A801AA34DD821BE("oddjobs@assassinate@hotel@leadin")) && unk_0x3A801AA34DD821BE("oddjobs@assassinate@hotel@leaning@")) && unk_0xD9C499EAA1D3F82A("move_lester_CaneUp"))
			{
				iLocal_1018++;
			}
			break;
		
		case 1:
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				func_395(56, 0, 1);
				func_398(-1514,611f, -927,4667f, 7,133712f, -1496,948f, -942,224f, 16,18723f, 30f, -1523,174f, -924,6732f, 9,1221f, 53,0177f, 1, 1, 1, 1, 0);
				unk_0x247EAA2E93D4A021(-1507,715f, -941,1313f, 8,37286f, 10f, 1, 0, 0, false);
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), vLocal_1415, 1, 0, 0, 1);
				unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), fLocal_1416);
				unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 0, 0);
				unk_0x12C9D41D52A560D6(unk_0xFC1458A37D98B502(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 1000f, -4f, -1, 513, 0, 0, 0, 0);
				if (!unk_0x8EA3C8E091EA5BA4(iLocal_1417))
				{
					iLocal_1417 = unk_0x5AC38B4D80D4E352(26379945, vLocal_1419, vLocal_1420, 42,2032f, 1, 2);
					unk_0x7E4FCDC8BAD0CF6D(iLocal_1417, "HAND_SHAKE", 0,3f);
				}
				if (!unk_0x8EA3C8E091EA5BA4(iLocal_1418))
				{
					iLocal_1418 = unk_0x5AC38B4D80D4E352(26379945, vLocal_1421, vLocal_1422, 42,2032f, 0, 2);
					unk_0xF10DA1539629CC3F(iLocal_1418, iLocal_1417, 5000, 1, 1);
					unk_0x7E4FCDC8BAD0CF6D(iLocal_1417, "HAND_SHAKE", 0,3f);
				}
				unk_0x3458550DF8E9B453(true, 0, 3000, 1, 0, 0);
				if (func_40(0))
				{
					unk_0x59C3AC31C7544A28(800);
				}
				iLocal_1018++;
			}
			break;
		
		case 2:
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 3))
				{
					if (!func_52(&iLocal_1423))
					{
						func_49(&iLocal_1423);
					}
				}
				if (func_52(&iLocal_1423))
				{
					if (func_46(&iLocal_1423) > 6f)
					{
						iLocal_1018++;
					}
				}
			}
			break;
		
		case 3:
			if (func_438())
			{
				iLocal_1018++;
			}
			break;
		
		case 4:
			func_376(1, 1, 1, 0);
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				unk_0x4982ECE0928DA13D(unk_0xFC1458A37D98B502(), "Franklin", 0, 0, 0);
			}
			unk_0x4982ECE0928DA13D(iLocal_944, "Lester", 2, joaat("ig_lestercrest"), 0);
			unk_0x4982ECE0928DA13D(0, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
			unk_0xD0BFA95B279C174F(0);
			unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			iLocal_1018++;
			break;
		
		case 5:
			if (unk_0xA8113D347D14630F())
			{
				unk_0x4779448854314440(0);
				unk_0x3458550DF8E9B453(false, 0, 3000, 1, 0, 0);
				iLocal_1018++;
			}
			break;
		
		case 6:
			if (unk_0x38DF88792E2574E5())
			{
				unk_0x2C5E25A27FEE0F8A(0);
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_944))
			{
				if (unk_0x9C7ACE0D4DCBE96F("Lester", 0))
				{
					if (unk_0x6ADD12BF4D6D2587(unk_0xA78D8DA2425CB3DB("Lester", 0)))
					{
						iLocal_944 = unk_0x07F64790D10D1DB5(unk_0xA78D8DA2425CB3DB("Lester", 0));
					}
				}
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_945))
			{
				if (unk_0x9C7ACE0D4DCBE96F("WalkingStick_Lester", 0))
				{
					if (unk_0x6ADD12BF4D6D2587(unk_0xA78D8DA2425CB3DB("WalkingStick_Lester", 0)))
					{
						iLocal_945 = unk_0xA78D8DA2425CB3DB("WalkingStick_Lester", 0);
					}
				}
			}
			unk_0xBB9A3C553EECB180(0f);
			unk_0x7C9705890EF6612E(0f, 1065353216);
			if (unk_0xBBC745B9F75E27D0("Franklin", 0))
			{
			}
			if (unk_0x6ADD12BF4D6D2587(unk_0xA78D8DA2425CB3DB("Lester", 0)))
			{
				if (unk_0xBBC745B9F75E27D0("Lester", 0))
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_944) && !unk_0x3AB6A1A9084FB0A4(iLocal_944))
					{
						unk_0xBD8D47FDC6902B2D(iLocal_944, -1509,458f, -948,195f, 7,75f, 1, 0, 0, 1);
						unk_0x48ED7B2293A96722(iLocal_944, -11f);
						unk_0x12C9D41D52A560D6(iLocal_944, "oddjobs@assassinate@hotel@leadin", "lester_leadin", 1000f, -8f, -1, 790537, 0f, 0, 1, 0);
						unk_0x9A0C1F836B24E46E(iLocal_944, 0, 0);
					}
				}
			}
			if (unk_0x6ADD12BF4D6D2587(unk_0xA78D8DA2425CB3DB("Lester", 0)))
			{
				if (unk_0xBBC745B9F75E27D0("WalkingStick_Lester", 0))
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_944) && !unk_0x3AB6A1A9084FB0A4(iLocal_944))
					{
						unk_0xA9D382E7BA095148(iLocal_945, iLocal_944, unk_0xDD09837E5235FE91(iLocal_944, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
				}
			}
			if (unk_0x6F1392C5F51B32A4() && !unk_0xA8113D347D14630F())
			{
				func_376(0, 1, 1, 0);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_944))
				{
					unk_0xD38F266C132F2897(iLocal_944, 0, 0, 0, 0, 0, 0, 0, 0);
					unk_0x5718F894FDA63A9E(iLocal_944, 1);
				}
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(0f, 1065353216);
				if (unk_0x3E9CABD07B829173())
				{
					system::wait(0);
					unk_0x59C3AC31C7544A28(500);
				}
				func_374(1, 1, 1);
				iLocal_1018++;
			}
			break;
		
		case 7:
			func_50(&iLocal_1105);
			func_251();
			iLocal_931 = 4;
			break;
	}
}

bool func_438()//Position - 0x19986
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

void func_439()//Position - 0x199A9
{
	if (!unk_0x6ADD12BF4D6D2587(iLocal_1426))
	{
		iLocal_1426 = unk_0xCBD07018689DF383(-1510,103f, -947,7194f, 8,2332f, 5f, -403891623, 1, 0, 1);
	}
}

void func_440()//Position - 0x199DB
{
	int iVar0;
	
	if (iLocal_931 > 7)
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iVar0 = unk_0x4E7809A068F46A31();
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (unk_0xB8DE76287EDC4957(iVar0, 0))
					{
						if ((iVar0 != iLocal_1071[0] && iVar0 != iLocal_1071[1]) && iVar0 != iLocal_1071[2])
						{
							if (iLocal_1036 >= 2)
							{
								iLocal_1036 = -1;
							}
							iLocal_1071[iLocal_1036 + 1] = iVar0;
							unk_0xDD29FF4BAB8AFF9C(iLocal_1071[iLocal_1036 + 1], true, 0);
							unk_0x6F64D6648FF4F4EC(iLocal_1071[iLocal_1036 + 1], 0);
							iLocal_1036++;
						}
					}
				}
			}
		}
	}
}

void func_441()//Position - 0x19A82
{
	int iVar0;
	
	if (iLocal_1003)
	{
		iVar0 = func_30(1116471296, 1);
		if (!unk_0x3AB6A1A9084FB0A4(iVar0))
		{
			func_28(iVar0, 3, "OJAvaGUARD");
			func_6(&uLocal_1112, "OJASAUD", "OJASva_SPOT", 9, 0, 0, 0);
		}
	}
}

void func_442()//Position - 0x19AC4
{
	int iVar0;
	vector3 vVar1;
	
	if (Local_1427.f_11)
	{
		if (!bLocal_994)
		{
			if (iLocal_931 < 10)
			{
				if (func_448())
				{
					iVar0 = func_30(1116471296, 1);
					if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && !unk_0x191BE1BC8F26F3C1(iVar0, 0))
					{
						if (func_23(iVar0, 0) < 10f)
						{
							vVar1 = { unk_0xB3328BA8976B416C(iVar0, 1) };
							vVar1 = { vVar1 };
							func_29(&uLocal_1112, 3, iVar0, "OJAvaGuard", 0, 1);
							func_6(&uLocal_1112, "OJASAUD", "OJASva_AT_EX", 9, 0, 0, 0);
						}
					}
					func_447();
					bLocal_994 = true;
				}
				if (iLocal_959)
				{
					func_447();
					bLocal_994 = true;
				}
				else
				{
					func_446();
					func_443();
				}
			}
		}
	}
}

void func_443()//Position - 0x19B78
{
	if (bLocal_965)
	{
		if (IntToFloat(iLocal_1033) < (IntToFloat(iLocal_1030) - 5f))
		{
			func_445(Local_1427.f_8[0], 1);
			func_445(Local_1427.f_8[1], 1);
			func_445(Local_1427.f_5[0], 1);
			func_445(Local_1427.f_5[1], 1);
		}
		else
		{
			if ((func_23(Local_1427.f_8[0], 0) < 1f || func_23(Local_1427.f_8[1], 0) < 1f) || iLocal_963)
			{
				func_444(Local_1427.f_8[0], 1);
				func_444(Local_1427.f_8[1], 1);
			}
			if (!iLocal_963)
			{
				func_444(Local_1427.f_5[0], 0);
				func_444(Local_1427.f_5[1], 0);
			}
			else
			{
				func_444(Local_1427.f_5[0], 1);
				func_444(Local_1427.f_5[1], 1);
			}
		}
	}
}

void func_444(int iParam0, int iParam1)//Position - 0x19C53
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x78F50AA8F955BEFC(iParam0, 242628503) != 1)
		{
			if (func_23(iParam0, 0) < 1f || iParam1)
			{
				func_445(iParam0, 1);
			}
		}
	}
}

void func_445(int iParam0, bool bParam1)//Position - 0x19C8F
{
	var uVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if ((bParam1 && unk_0x78F50AA8F955BEFC(iParam0, 242628503) != 1) || !bParam1)
		{
			unk_0x6931076730A4AC5D(&uVar0);
			unk_0x755F86FFB31712D8(0, -1214,343f, -132,1107f, 40,2416f, 1f, 0, 0, 786603, -1082130432);
			unk_0x93F12E7D8D931858(0, 1193033728, 0);
			unk_0x1B16DD5C115FE009(uVar0);
			unk_0xAB30B1CF01A198C1(iParam0, uVar0);
			unk_0xFAA3EF7FF92E1F9E(&uVar0);
		}
	}
}

void func_446()//Position - 0x19D06
{
	int iVar0;
	
	switch (iLocal_1026)
	{
		case 0:
			if (((iLocal_979 || iLocal_963) || func_23(Local_1427[0], 0) < 1f) || func_23(Local_1427[1], 0) < 1f)
			{
				if (!unk_0x191BE1BC8F26F3C1(Local_1427[0], 0) && !unk_0x191BE1BC8F26F3C1(Local_1427[1], 0))
				{
					unk_0x60C06BFD037BB7CF(Local_1427[0], Local_1427[1], -1, 0, 2);
					unk_0x60C06BFD037BB7CF(Local_1427[1], Local_1427[0], -1, 0, 2);
				}
				if (((unk_0x6ADD12BF4D6D2587(Local_1427[1]) && unk_0x6ADD12BF4D6D2587(Local_1427.f_4)) && !unk_0x3AB6A1A9084FB0A4(Local_1427[1])) && unk_0xB8DE76287EDC4957(Local_1427.f_4, 0))
				{
					unk_0xB8E08BD5B184DF4E(Local_1427[1]);
					unk_0x6F8C8278B7C06889(Local_1427[1], Local_1427.f_4, 20000, 2, 1f, 1, 0);
				}
				if (!func_52(&iLocal_1096))
				{
					func_49(&iLocal_1096);
				}
				iLocal_1026++;
			}
			break;
		
		case 1:
			if (!iLocal_999)
			{
				if (func_52(&iLocal_1096))
				{
					if (func_46(&iLocal_1096) > 3f)
					{
						if (((unk_0x6ADD12BF4D6D2587(Local_1427[0]) && unk_0x6ADD12BF4D6D2587(Local_1427.f_4)) && !unk_0x3AB6A1A9084FB0A4(Local_1427[0])) && unk_0xB8DE76287EDC4957(Local_1427.f_4, 0))
						{
							if (unk_0x78F50AA8F955BEFC(Local_1427[0], -1794415470) != 1)
							{
								unk_0xB8E08BD5B184DF4E(Local_1427[0]);
								unk_0x6F8C8278B7C06889(Local_1427[0], Local_1427.f_4, 20000, 1, 1f, 1, 0);
								iLocal_999 = 1;
							}
						}
					}
				}
				else
				{
					func_49(&iLocal_1096);
				}
			}
			if (!unk_0x3AB6A1A9084FB0A4(Local_1427[0]) && !unk_0x3AB6A1A9084FB0A4(Local_1427[1]))
			{
				if (unk_0xA8D0477084E86A92(Local_1427[0], Local_1427.f_4, 0) && unk_0xA8D0477084E86A92(Local_1427[1], Local_1427.f_4, 0))
				{
					if (!unk_0x191BE1BC8F26F3C1(Local_1427.f_3, 0) && !unk_0x191BE1BC8F26F3C1(Local_1427.f_4, 0))
					{
						unk_0xCB3D88C918AA637C(Local_1427.f_3);
						func_50(&iLocal_1096);
					}
					iLocal_1026++;
				}
			}
			break;
		
		case 2:
			if (func_52(&iLocal_1096))
			{
				if (func_46(&iLocal_1096) > 3f)
				{
					if (!unk_0x3AB6A1A9084FB0A4(Local_1427.f_3) && unk_0xB8DE76287EDC4957(Local_1427.f_4, 0))
					{
						unk_0x84EF7D14703E1230(Local_1427.f_3, Local_1427.f_4, "OJAS_HotelTaxi01", 786485, 0, 16, -1, 10f, 0, 1073741824);
						iLocal_1026++;
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x191BE1BC8F26F3C1(Local_1427.f_3, 0) && !unk_0x191BE1BC8F26F3C1(Local_1427.f_4, 0))
			{
				if (!unk_0xFF95C59FBC63673B(Local_1427.f_4) || iLocal_1002)
				{
					unk_0x96247F0EC873C446(Local_1427.f_3, Local_1427.f_4, 10f, 786603);
					iLocal_1026++;
				}
			}
			break;
		
		case 4:
			if (iLocal_1002)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_942[0]))
				{
					iVar0 = iLocal_942[0];
				}
				else
				{
					iVar0 = func_25(25f);
				}
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iVar0))
					{
						if (!func_22())
						{
							func_28(iVar0, 5, "OJAvaGUARD");
							func_6(&uLocal_1112, "OJASAUD", "OJASva_LEAVE", 9, 0, 0, 0);
						}
					}
				}
				func_50(&iLocal_1096);
				iLocal_1026++;
			}
			break;
		
		case 5:
			break;
	}
}

void func_447()//Position - 0x1A073
{
	if ((unk_0x6ADD12BF4D6D2587(Local_1427.f_3) && !unk_0x191BE1BC8F26F3C1(Local_1427.f_3, 0)) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xD68E88A8E0BE8697(Local_1427.f_3, unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
	}
	if ((unk_0x6ADD12BF4D6D2587(Local_1427[0]) && !unk_0x191BE1BC8F26F3C1(Local_1427[0], 0)) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xD68E88A8E0BE8697(Local_1427[0], unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
		unk_0xE17958D3FD0F9EE9(Local_1427[0], 2, false);
	}
	if ((unk_0x6ADD12BF4D6D2587(Local_1427[1]) && !unk_0x191BE1BC8F26F3C1(Local_1427[1], 0)) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xD68E88A8E0BE8697(Local_1427[1], unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
		unk_0xE17958D3FD0F9EE9(Local_1427[1], 2, false);
	}
	if ((unk_0x6ADD12BF4D6D2587(Local_1427.f_8[0]) && !unk_0x191BE1BC8F26F3C1(Local_1427.f_8[0], 0)) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xD68E88A8E0BE8697(Local_1427.f_8[0], unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
	}
	if ((unk_0x6ADD12BF4D6D2587(Local_1427.f_8[1]) && !unk_0x191BE1BC8F26F3C1(Local_1427.f_8[1], 0)) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xD68E88A8E0BE8697(Local_1427.f_8[1], unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
	}
	if ((unk_0x6ADD12BF4D6D2587(Local_1427.f_5[0]) && !unk_0x191BE1BC8F26F3C1(Local_1427.f_5[0], 0)) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xD68E88A8E0BE8697(Local_1427.f_5[0], unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
	}
	if ((unk_0x6ADD12BF4D6D2587(Local_1427.f_5[1]) && !unk_0x191BE1BC8F26F3C1(Local_1427.f_5[1], 0)) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xD68E88A8E0BE8697(Local_1427.f_5[1], unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
	}
}

int func_448()//Position - 0x1A27D
{
	if (!unk_0x191BE1BC8F26F3C1(Local_1427.f_3, 0))
	{
		if (unk_0x27C8A4034A05DC21(Local_1427.f_3))
		{
			if (unk_0x4EAE4CAB6D3C4502(Local_1427.f_3) == unk_0xFC1458A37D98B502())
			{
				return 1;
			}
		}
	}
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && !unk_0x191BE1BC8F26F3C1(Local_1427.f_4, 0))
	{
		if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_1427.f_4, 0))
		{
			return 1;
		}
	}
	if (func_112(Local_1427[0], 0, &Local_320, &iLocal_325, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_112(Local_1427[1], 0, &Local_320, &iLocal_325, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_112(Local_1427.f_8[0], 0, &Local_320, &iLocal_325, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_112(Local_1427.f_8[1], 0, &Local_320, &iLocal_325, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_112(Local_1427.f_5[0], 0, &Local_320, &iLocal_325, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_112(Local_1427.f_5[1], 0, &Local_320, &iLocal_325, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_111(Local_1427.f_4))
	{
		return 1;
	}
	if (unk_0x4E69510C44147A5C(-1, -1231,326f, -201,7195f, 38,2114f, 20f))
	{
		return 1;
	}
	return 0;
}

void func_449()//Position - 0x1A3CC
{
	func_514();
}

int func_450()//Position - 0x1A3D8
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

void func_451(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x1A405
{
	if (func_513())
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
		func_425(1);
	}
}

int func_452(vector3 vParam0, float fParam1)//Position - 0x1A49A
{
	return func_453(&(Global_98118.f_2875), vParam0, fParam1, 0);
}

int func_453(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x1A4B4
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_502(uParam0))
	{
		if (func_44(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x8AE9E5E8F6DC40C9(vParam1, -816,8716f, 185,6238f, 71,40275f, -807,4894f, 189,3762f, 75,27323f, 6,5f, 0, 1))
			{
				vParam1 = { -850,93f, 158,82f, 65,7f };
				fParam2 = 89,5f;
			}
		}
		if (func_501(uParam0))
		{
			unk_0x247EAA2E93D4A021(vParam1, 5f, 1, 0, 0, false);
			func_500(vParam1, 5f, 0);
			iVar0 = unk_0xEA60F3B426BB095B(uParam0->f_12.f_66, vParam1, fParam2, 1, 1, 0);
			if (unk_0x6ADD12BF4D6D2587(iVar0))
			{
				vVar1 = { unk_0xB3328BA8976B416C(iVar0, 1) };
				if (system::vdist2(vVar1, -1151,15f, -1530,32f, 7,48925f) <= 3f)
				{
					unk_0xAA93B7B448E10E40(iVar0, vParam1, 0, 0, 1);
				}
				func_484(iVar0, &(uParam0->f_12), 0, 1);
				bVar2 = true;
				if (unk_0x428C7026AD2721BA(uParam0->f_12.f_66) || unk_0x38171AD35981A393(uParam0->f_12.f_66))
				{
					if (!unk_0xA275371ED0902FCB(vParam1.x, vParam1.y, (vParam1.z + 30f), vParam1.x, vParam1.y, (vParam1.z - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					unk_0xACE486395AA1867D(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (unk_0xC1514CFCEC68CA4A(unk_0x82FF3DFBC3965CC0(iVar0)))
						{
							func_483(uParam0->f_11, 1);
						}
						else if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(iVar0)))
						{
							func_483(uParam0->f_11, 2);
						}
					}
					unk_0xD8D940C0BFD3E1EC(iVar0, 0);
					unk_0x1F0117F8A8E4EC12(iVar0, 0);
					unk_0x438D30A195B65156(iVar0, 1);
					func_482(iVar0, uParam0->f_11);
				}
				else if ((!func_479(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x74C475EB8E73D398(unk_0x436287B7DB306165(), "startup_positioning"))
				{
					iVar4 = func_478(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_473(iVar4);
					}
				}
				if (((Global_92833 != 13 && Global_92833 != 10) && Global_92833 != 11) && Global_92833 != 12)
				{
					if (unk_0x8B948C59217A295D(&(Global_92833.f_3)) == Global_70666)
					{
						if (uParam0->f_12.f_66 == Global_104555.f_32429.f_69[21 /*78*/].f_66)
						{
							func_470(24, 0);
							func_473(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_454(iVar0, uParam0->f_11);
				}
				unk_0x14776E43F90DD454(uParam0->f_12.f_66);
				vVar1 = { unk_0xB3328BA8976B416C(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_454(int iParam0, int iParam1)//Position - 0x1A766
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_455(iParam0))
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
	func_293(iParam0, &(Global_104555.f_32429.f_5510));
}

int func_455(int iParam0)//Position - 0x1A968
{
	if ((((((((((!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0)) || func_304(iParam0, 0, 0)) || func_304(iParam0, 1, 0)) || func_304(iParam0, 2, 0)) || func_289(iParam0) != 145) || func_469(iParam0)) || func_468(iParam0)) || func_467(iParam0)) || func_466(iParam0)) || !func_456(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		if (func_468(iParam0))
		{
		}
		if (func_468(iParam0))
		{
		}
		if (func_304(iParam0, 0, 0))
		{
		}
		if (func_304(iParam0, 1, 0))
		{
		}
		if (func_304(iParam0, 2, 0))
		{
		}
		if (func_289(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_456(int iParam0)//Position - 0x1AA45
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_457(iParam0, 0))
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

int func_457(int iParam0, bool bParam1)//Position - 0x1ABF6
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
		if (!func_465())
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
		if ((((!func_464() && !func_463()) && !func_462()) && !func_461()) && !func_465())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x177281F5FA205A38() || unk_0xB9D80B12FE4456A5()) || unk_0xFD6215BABFD843F2())
		{
		}
		else if (!func_462())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_460(iParam0))
		{
			return 0;
		}
	}
	if (!func_458(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_458(int iParam0)//Position - 0x1AD84
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_459())
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

int func_459()//Position - 0x1AE50
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

int func_460(int iParam0)//Position - 0x1AE67
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

int func_461()//Position - 0x1C6F0
{
	return 0;
}

int func_462()//Position - 0x1C6F9
{
	return 1;
}

int func_463()//Position - 0x1C702
{
	return 1;
}

int func_464()//Position - 0x1C70B
{
	if (unk_0x21EA5D4DC72DE119(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_465()//Position - 0x1C724
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

int func_466(int iParam0)//Position - 0x1C7DF
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	sVar1 = unk_0xF2D2D6860D636A58(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x74C475EB8E73D398(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_457(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_467(int iParam0)//Position - 0x1C825
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

int func_468(int iParam0)//Position - 0x1C860
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

int func_469(int iParam0)//Position - 0x1C8DC
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

void func_470(int iParam0, bool bParam1)//Position - 0x1C9C4
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_472(iParam0, 0))
		{
			func_471(iParam0, 1, 0);
			func_471(iParam0, 2, 0);
			func_471(iParam0, 3, 0);
			func_471(iParam0, 4, 0);
			func_471(iParam0, 0, 1);
			Global_69678[iParam0] = 1;
		}
	}
	else
	{
		func_471(iParam0, 0, 0);
	}
}

void func_471(int iParam0, int iParam1, bool bParam2)//Position - 0x1CA21
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

bool func_472(int iParam0, int iParam1)//Position - 0x1CA5C
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_104555.f_32429[iParam0], iParam1);
}

void func_473(int iParam0)//Position - 0x1CA7F
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_477(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xB8DE76287EDC4957(Global_69678.f_139[iParam0], 0))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Global_69678.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xDD29FF4BAB8AFF9C(Global_69678.f_139[iParam0], true, 1);
				unk_0xC91FE17AD7353B70(&(Global_69678.f_139[iParam0]));
			}
		}
		Global_69678[iParam0] = 1;
		if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_472(iParam0, 0)) && Global_70587.f_66 == 0) && Global_104555.f_32429.f_1958[Global_69678.f_555[0 /*21*/].f_14] != 0) && Global_104555.f_32429.f_1958[Global_69678.f_555[0 /*21*/].f_14] > 3) && (!func_475(0, Global_69678.f_555[0 /*21*/].f_12) || !func_475(1, Global_69678.f_555[0 /*21*/].f_12)))
			{
				func_474(&(Global_104555.f_32429.f_69[Global_69678.f_555[0 /*21*/].f_14 /*78*/]), &Global_70587);
				Global_70665 = Global_104555.f_32429.f_5591;
			}
			func_470(iParam0, 0);
		}
	}
}

void func_474(var uParam0, var uParam1)//Position - 0x1CBF1
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

int func_475(int iParam0, int iParam1)//Position - 0x1CCBD
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_476(&(Global_104555.f_32429.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_457(Global_104555.f_32429.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_476(var uParam0)//Position - 0x1CD2F
{
	return *uParam0;
}

int func_477(var uParam0, int iParam1)//Position - 0x1CD3A
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
			uParam0->f_4 = func_291(0, 1);
			uParam0->f_12 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970,943f, 3801,684f, 31,1396f };
			uParam0->f_3 = 301,3964f;
			uParam0->f_4 = func_291(0, 1);
			uParam0->f_12 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22,6297f, -1439,137f, 29,6549f };
			uParam0->f_3 = 180,0808f;
			uParam0->f_4 = func_291(1, 1);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22,5229f, -1434,699f, 29,6552f };
			uParam0->f_3 = 141,6114f;
			uParam0->f_4 = func_291(1, 2);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 19);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10,9281f, 545,669f, 174,7951f };
			uParam0->f_3 = 61,392f;
			uParam0->f_4 = func_291(1, 1);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6,1093f, 544,9742f, 174,2835f };
			uParam0->f_3 = 92,1548f;
			uParam0->f_4 = func_291(1, 2);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 19);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981,416f, 3808,131f, 31,1384f };
			uParam0->f_3 = 117,2557f;
			uParam0->f_4 = func_291(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158,488f, -1529,367f, 3,8995f };
			uParam0->f_3 = 35,7505f;
			uParam0->f_4 = func_291(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148,2868f, -1270,569f, 28,2252f };
			uParam0->f_3 = 208,4685f;
			uParam0->f_4 = func_291(2, 1);
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
			if (func_465())
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
			if (func_465())
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
		if (!func_44(Global_104555.f_32429.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_44(Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xC80D31E4B587871C(uParam0->f_9, 20))
	{
		if (!func_44(Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_478(int iParam0)//Position - 0x1E431
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x6ADD12BF4D6D2587(Global_69678.f_484[iVar0]) && !unk_0x191BE1BC8F26F3C1(Global_69678.f_484[iVar0], 0)) && unk_0xB8DE76287EDC4957(Global_69678.f_484[iVar0], 0))
		{
			unk_0xAEC96F2E5A91C606(iParam0, &iVar1, &iVar2);
			unk_0xAEC96F2E5A91C606(Global_69678.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x82FF3DFBC3965CC0(iParam0) == unk_0x82FF3DFBC3965CC0(Global_69678.f_484[iVar0]) && unk_0x7E3C3BFAB9ADD960(iParam0) == unk_0x7E3C3BFAB9ADD960(Global_69678.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_479(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x1E4F4
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_481(iParam0, Global_69678.f_139[38], 0))
			{
				func_473(38);
				return 1;
			}
			break;
		
		case 1938952078:
			if (func_481(iParam0, Global_69678.f_139[43], 1))
			{
				func_473(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0x3689C35A674B0772(unk_0xFC1458A37D98B502(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_481(iParam0, uVar1[iVar3], 1) && func_480(unk_0xB3328BA8976B416C(uVar1[iVar3], 1), 2136,133f, 4780,563f, 39,9702f, 5f, 0))
				{
					if ((!bParam2 || func_44(vParam1, 0f, 0f, 0f, 0)) || unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(iParam0, 1), unk_0xB3328BA8976B416C(uVar1[iVar3], 1), true) < 10f)
					{
						unk_0xC91FE17AD7353B70(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0x6ADD12BF4D6D2587(Global_69678.f_484[14]) && unk_0xB8DE76287EDC4957(iParam0, 0)) && unk_0xB8DE76287EDC4957(Global_69678.f_484[14], 0))
			{
				if (unk_0x82FF3DFBC3965CC0(Global_69678.f_484[14]) == joaat("luxor2") && unk_0x7E3C3BFAB9ADD960(iParam0) == unk_0x7E3C3BFAB9ADD960(Global_69678.f_484[14]))
				{
					func_473(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x6ADD12BF4D6D2587(Global_69678.f_484[20]) && unk_0xB8DE76287EDC4957(iParam0, 0)) && unk_0xB8DE76287EDC4957(Global_69678.f_484[20], 0))
			{
				if (unk_0x82FF3DFBC3965CC0(Global_69678.f_484[20]) == joaat("swift2") && unk_0x7E3C3BFAB9ADD960(iParam0) == unk_0x7E3C3BFAB9ADD960(Global_69678.f_484[20]))
				{
					func_473(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_480(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x1E6FC
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

int func_481(int iParam0, int iParam1, bool bParam2)//Position - 0x1E777
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x6ADD12BF4D6D2587(iParam1) && !unk_0x191BE1BC8F26F3C1(iParam1, 0)) && unk_0xB8DE76287EDC4957(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0xAEC96F2E5A91C606(iParam0, &iVar0, &iVar1);
			unk_0xAEC96F2E5A91C606(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
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

void func_482(int iParam0, int iParam1)//Position - 0x1E7D8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			Global_90309[iVar0] = iParam0;
			Global_90319[iVar0] = iParam1;
			Global_90329[iVar0] = unk_0x82FF3DFBC3965CC0(iParam0);
			if (unk_0xC1514CFCEC68CA4A(Global_90329[iVar0]))
			{
				Global_90357[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_90357[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_483(int iParam0, int iParam1)//Position - 0x1E85A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			if (iParam0 == 145 || Global_90319[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x82FF3DFBC3965CC0(Global_90309[iVar0]) == func_291(iParam0, iParam1))
				{
					if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Global_90309[iVar0], 0))
					{
						unk_0xDD29FF4BAB8AFF9C(Global_90309[iVar0], false, 1);
						unk_0xC91FE17AD7353B70(&(Global_90309[iVar0]));
						Global_90319[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_484(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x1E8F8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (!func_493(iParam0))
		{
			if (unk_0x8B948C59217A295D(&(uParam1->f_1)) != 0)
			{
				unk_0xE58BC5B025017AE2(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0xD559B6108233E114())
			{
				unk_0xFD5736F667C70A28(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xC80D31E4B587871C(uParam1->f_77, func_294(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_294(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xC80D31E4B587871C(uParam1->f_77, func_294(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_294(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == 433954513)
		{
			unk_0xF6744C962F375B94(iParam0, 0);
			if (unk_0xF928889F6E5C7677(iParam0, 5) != -1)
			{
				unk_0xF6744C962F375B94(iParam0, 1);
			}
		}
		if (unk_0xC80D31E4B587871C(uParam1->f_77, 13))
		{
			unk_0xFAE216A82B56EEF2(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xE154D705D18ED685(iParam0);
		}
		if (unk_0xC80D31E4B587871C(uParam1->f_77, 12))
		{
			unk_0x4852153449AFF07A(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x7FAF16725A6EE5F0(iParam0);
		}
		unk_0x1E7A8525FB41AAFE(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xB1AB9FD8B4959960(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xC80D31E4B587871C(uParam1->f_77, 15) || func_492(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_491())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0x94D4C393A9825924(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_296(uParam1->f_66))
		{
			unk_0xDAA5C9C59AF4D4EB(iParam0, 0);
		}
		else
		{
			unk_0xDAA5C9C59AF4D4EB(iParam0, 0);
			unk_0xDAA5C9C59AF4D4EB(iParam0, uParam1->f_65);
		}
		unk_0x4D7D93C6E0C1063B(iParam0, !unk_0xC80D31E4B587871C(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x4BEFCD5DAE410A90(iParam0, uParam1->f_70);
		}
		unk_0x7F254E8C9247E923(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x9D1E2B17CE94D0B9(iParam0, 2, unk_0xC80D31E4B587871C(uParam1->f_77, 28));
		unk_0x9D1E2B17CE94D0B9(iParam0, 3, unk_0xC80D31E4B587871C(uParam1->f_77, 29));
		unk_0x9D1E2B17CE94D0B9(iParam0, 0, unk_0xC80D31E4B587871C(uParam1->f_77, 30));
		unk_0x9D1E2B17CE94D0B9(iParam0, 1, unk_0xC80D31E4B587871C(uParam1->f_77, 31));
		unk_0xD2557AC67FBCFB9D(iParam0, unk_0xC80D31E4B587871C(uParam1->f_77, 10));
		if (unk_0xAFB4F670EC043D01(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xC7BF27112709A906(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(iParam0)))
			{
				if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_490(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_490(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x965BEFCC45024E92(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x4B004F11F16CA872(iParam0, 1);
			}
			else
			{
				unk_0x54DFCB9F4F68A288(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_485(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xF9DDB1C0875FD9E0(uParam1->f_66) && !unk_0x428C7026AD2721BA(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xC80D31E4B587871C(uParam1->f_77, func_294(iVar2 + 1)))
				{
					if (!unk_0x7C7056D6F2A31BF6(iParam0, iVar2 + 1))
					{
						unk_0x7B3133EBCD34B431(iParam0, iVar2 + 1, false);
					}
				}
				else if (unk_0x7C7056D6F2A31BF6(iParam0, iVar2 + 1))
				{
					unk_0x7B3133EBCD34B431(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((unk_0x82FF3DFBC3965CC0(iParam0) == joaat("sheava") || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("omnis")) || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("le7b"))
		{
			if (unk_0xF928889F6E5C7677(iParam0, 0) == -1)
			{
				unk_0x7B3133EBCD34B431(iParam0, 1, false);
			}
		}
		if (((unk_0x849A8CFD71854E02(uParam1->f_66) && unk_0x256C25369C3811D6(iParam0)) && !unk_0xB0DA749C8A7CCBBF(iParam0, -2118308144)) && !((((Global_4456448.f_50256 == 6 || Global_4456448.f_50256 == 7) || Global_4456448.f_50256 == 18) || Global_4456448.f_50256 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0xC80D31E4B587871C(uParam1->f_77, 23))
			{
				if (unk_0xC80D31E4B587871C(uParam1->f_77, 22))
				{
					unk_0x39748EEC52404AFA(iParam0, 2);
				}
				else
				{
					unk_0x39748EEC52404AFA(iParam0, 3);
				}
			}
			else
			{
				unk_0x39748EEC52404AFA(iParam0, 4);
			}
		}
		if (unk_0xC80D31E4B587871C(uParam1->f_77, 27))
		{
			unk_0x592E07F996BB4B89(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x592E07F996BB4B89(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_485(int iParam0, var uParam1, var uParam2)//Position - 0x1EE48
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
	unk_0xA0A6811A3E4062D1(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x4705D420368126DF(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0xF928889F6E5C7677(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x75F267954030DBEB(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0xA9EF3F93CBFFF6D0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0xA9EF3F93CBFFF6D0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0xA9EF3F93CBFFF6D0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_489(unk_0x82FF3DFBC3965CC0(*iParam0), 1) && unk_0xF928889F6E5C7677(*iParam0, 24) != func_488(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xA9EF3F93CBFFF6D0(*iParam0, 24, func_488(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_487(iParam0);
	if (func_486(*iParam0))
	{
		unk_0x9980244E5DAEFED4(*iParam0, 1);
		unk_0x438D30A195B65156(*iParam0, 1);
	}
	return 1;
}

int func_486(int iParam0)//Position - 0x1EFC6
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0)) && unk_0x96E226626970ABA3(iParam0) > 0)
	{
		unk_0xA0A6811A3E4062D1(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0xF928889F6E5C7677(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xDC300345F8ACC8C3(iParam0, iVar1, unk_0xF928889F6E5C7677(iParam0, iVar1)), 16);
				iVar2 = unk_0x8B948C59217A295D(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x8B948C59217A295D("MNU_CAGE") || iVar2 == unk_0x8B948C59217A295D("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_487(var uParam0)//Position - 0x1F0A2
{
	switch (unk_0x82FF3DFBC3965CC0(*uParam0))
	{
		case -1700874274:
			if (unk_0xF928889F6E5C7677(*uParam0, 4) == 0)
			{
				unk_0xA9EF3F93CBFFF6D0(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x75F267954030DBEB(*uParam0, 13);
			}
			break;
	}
}

int func_488(int iParam0, int iParam1)//Position - 0x1F0E2
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		switch (unk_0x82FF3DFBC3965CC0(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x2E9AFFEE33324CC8(iParam0, 38);
		iVar1 = unk_0x2E9AFFEE33324CC8(iParam0, 24);
		fVar2 = (system::to_float(iParam1 + 1) / system::to_float(iVar0));
		iVar3 = (system::floor((system::to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_489(int iParam0, int iParam1)//Position - 0x1F1C7
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_13545)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_13546)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_13544)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_13547)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_13549)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_13548)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_17990)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_17992)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_17996)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_17993)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18000)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_17998)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18003)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_19922)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_19923)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
	}
	return 0;
}

void func_490(int iParam0, int iParam1)//Position - 0x1F43A
{
	int iVar0;
	int iVar1;
	
	if (unk_0x96E226626970ABA3(iParam0) > 0)
	{
		unk_0xA0A6811A3E4062D1(iParam0, 0);
		iVar0 = unk_0xF928889F6E5C7677(iParam0, 24);
		iVar1 = unk_0x8D462BB6E4814682(iParam0, 24);
		unk_0xC195F0A7CE73E810(iParam0, iParam1);
		if (unk_0x82FF3DFBC3965CC0(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x75F267954030DBEB(iParam0, 24);
		}
		else
		{
			unk_0xA9EF3F93CBFFF6D0(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_491()//Position - 0x1F49F
{
	return unk_0x21EA5D4DC72DE119(-1691188696);
}

int func_492(int iParam0)//Position - 0x1F4B0
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (unk_0x6C5223DB5E5CFD9B("MPBitset", 3))
			{
				if (unk_0xB80A4DA4C06A76F1(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x2786E663D1846FFC(iParam0, "MPBitset");
				}
				return unk_0xC80D31E4B587871C(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_493(int iParam0)//Position - 0x1F4FB
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!func_499(unk_0x9EB17624F44A8DA4(), -1))
		{
			iParam0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		}
	}
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	if (func_495(unk_0x9EB17624F44A8DA4()) == 3)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (func_494(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_494(int iParam0)//Position - 0x1F582
{
	if (unk_0x6C5223DB5E5CFD9B("FMDeliverableID", 3))
	{
		if (unk_0xB80A4DA4C06A76F1(iParam0, "FMDeliverableID"))
		{
			return unk_0x2786E663D1846FFC(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_495(int iParam0)//Position - 0x1F5B1
{
	if (func_498(iParam0) == 233)
	{
		return func_496(iParam0);
	}
	return -1;
}

int func_496(int iParam0)//Position - 0x1F5CE
{
	if (func_497(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_176;
	}
	return -1;
}

int func_497(int iParam0, int iParam1)//Position - 0x1F5F1
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_498(int iParam0)//Position - 0x1F62C
{
	if (func_497(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

int func_499(int iParam0, int iParam1)//Position - 0x1F64F
{
	int iVar0;
	
	if (func_67(iParam0, 1, 1))
	{
		if (unk_0x88DDBE9908752BF0(unk_0x25D049AAC4603E65(iParam0), 0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0x25D049AAC4603E65(iParam0), 0);
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (unk_0xFC1458A37D98B502() == unk_0x317536BCEA8FA6B0(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_500(vector3 vParam0, float fParam1, bool bParam2)//Position - 0x1F69C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_477(&(Global_69678.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0xBE3C4023003180FC(vParam0, Global_69678.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_473(iVar0);
			}
		}
		iVar0++;
	}
}

int func_501(var uParam0)//Position - 0x1F6EC
{
	if (func_502(uParam0))
	{
		if (unk_0x9A0B2ED5055D3F0B(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_502(var uParam0)//Position - 0x1F721
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_457(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_480(*uParam0, 1694,62f, 3276,27f, 41,31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_503()//Position - 0x1F780
{
	return func_501(&(Global_98118.f_2875));
}

void func_504()//Position - 0x1F793
{
	func_505(&(Global_98118.f_2875));
}

void func_505(var uParam0)//Position - 0x1F7A6
{
	if (func_502(uParam0))
	{
		unk_0x6FF834D85E2DD4C6(uParam0->f_12.f_66);
	}
}

void func_506()//Position - 0x1F7C4
{
	if (unk_0xB774D40D7819292F(uLocal_955))
	{
		unk_0x48B475D0F512A41A(uLocal_955);
	}
}

int func_507()//Position - 0x1F7DD
{
	if (!Global_92833 == 10 && !Global_92833 == 9)
	{
		return 0;
	}
	return Global_92833.f_2;
}

struct<39> func_508(int iParam0)//Position - 0x1F807
{
	struct<39> Var0;
	
	if (iParam0 == 0)
	{
		Var0 = 1;
		Var0.f_1 = { 0f, 0f, 0f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_509(0) };
		Var0.f_22 = "Assassin_Valet";
		Var0.f_23 = 7000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -1700,015f, -1066,335f, 12,144f };
		Var0.f_28 = { -1691,564f, -1066,514f, 12,076f };
		Var0.f_31 = 35,4714f;
		Var0.f_10 = { -1700,467f, -1066,672f, 13,8795f };
		Var0.f_13 = { -4,8332f, 0f, -177,1283f };
		Var0.f_16 = { -1700,467f, -1066,672f, 13,8795f };
		Var0.f_19 = { -4,8332f, 0f, -177,1283f };
		Var0.f_33 = { -1700,098f, -1067,939f, 12,1547f };
		Var0.f_36 = 162,4559f;
		Var0.f_37 = 1;
	}
	else if (iParam0 == 1)
	{
		Var0 = 0;
		Var0.f_1 = { -699,3992f, -917,5043f, 18,2143f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_509(1) };
		Var0.f_22 = "Assassin_Multi";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -700,1855f, -917,9558f, 18,2143f };
		Var0.f_28 = { -699,9455f, -921,7786f, 18,0144f };
		Var0.f_31 = 78,0874f;
		Var0.f_10 = { -697,8064f, -921,4629f, 20,5104f };
		Var0.f_13 = { -13,5249f, 0f, 30,6033f };
		Var0.f_16 = { -702,4851f, -921,2747f, 21,1235f };
		Var0.f_19 = { -22,5196f, 0f, -43,0435f };
		Var0.f_33 = { 0f, 0f, 0f };
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 2)
	{
		Var0 = 0;
		Var0.f_1 = { 215,1206f, -853,3143f, 29,3684f };
		Var0.f_4 = { 0f, 0f, 87,1787f };
		Var0.f_7 = { func_509(2) };
		Var0.f_22 = "Assassin_Hooker";
		Var0.f_23 = 3000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { 213,7994f, -853,9389f, 29,3929f };
		Var0.f_28 = { 205,2641f, -847,2667f, 29,4903f };
		Var0.f_31 = 140,1039f;
		Var0.f_10 = { 216,7391f, -856,0031f, 32,7127f };
		Var0.f_13 = { -25,1365f, 0f, 41,3912f };
		Var0.f_16 = { 210,4668f, -851,3092f, 32,1099f };
		Var0.f_19 = { -16,3326f, 0f, -127,0114f };
		Var0.f_33 = { 213,8733f, -853,8161f, 29,3922f };
		Var0.f_36 = 344,0112f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 3)
	{
		Var0 = 0;
		Var0.f_1 = { -22,5499f, -107,3546f, 56,0161f };
		Var0.f_4 = { 0f, 0f, 269,7924f };
		Var0.f_7 = { func_509(3) };
		Var0.f_22 = "Assassin_Bus";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -22,3125f, -108,9183f, 56,0068f };
		Var0.f_28 = { -17,2677f, -118,5915f, 55,8734f };
		Var0.f_31 = 1,4374f;
		Var0.f_10 = { -26,1094f, -108,0298f, 59,052f };
		Var0.f_13 = { -21,2059f, 0f, -109,0176f };
		Var0.f_16 = { -20,1189f, -111,9639f, 59,4377f };
		Var0.f_19 = { -27,0037f, 0f, 29,464f };
		Var0.f_33 = { 0f, 0f, 0f };
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 4)
	{
		Var0 = 0;
		Var0.f_1 = { 806,1469f, -1070,21f, 27,3361f };
		Var0.f_4 = { 0f, 0f, 90f };
		Var0.f_7 = { func_509(4) };
		Var0.f_22 = "Assassin_Construction";
		Var0.f_23 = 8000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = 1;
		Var0.f_25 = { 804,9559f, -1070,46f, 27,3361f };
		Var0.f_28 = { 799,8408f, -1079,142f, 27,321f };
		Var0.f_31 = 69,6524f;
		Var0.f_10 = { 801,8048f, -1068,068f, 30,3496f };
		Var0.f_13 = { -20,8953f, 0f, -132,9451f };
		Var0.f_16 = { 805,8168f, -1074,496f, 28,9803f };
		Var0.f_19 = { -1,5585f, 0f, 6,9143f };
		Var0.f_33 = { 804,8776f, -1070,523f, 27,3416f };
		Var0.f_36 = 287,8741f;
		Var0.f_37 = 0;
	}
	return Var0;
}

Vector3 func_509(int iParam0)//Position - 0x1FCBF
{
	switch (iParam0)
	{
		case 0:
			return -1704,427f, -1077,316f, 12,1111f;
		
		case 1:
			return -700,429f, -916,7467f, 18,2143f;
		
		case 2:
			return 214,1641f, -852,8006f, 29,3929f;
		
		case 3:
			return -21,9871f, -107,4823f, 55,997f;
		
		case 4:
			return 806,1469f, -1070,21f, 27,3361f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_510()//Position - 0x1FD49
{
	bool bVar0;
	
	bVar0 = func_118(Global_104555.f_19933.f_1, 4096);
	Global_104555.f_19933.f_1 = 0;
	if (bVar0)
	{
		func_521(&(Global_104555.f_19933.f_1), 4096);
	}
}

void func_511()//Position - 0x1FD82
{
}

bool func_512()//Position - 0x1FD8A
{
	return func_502(&(Global_98118.f_2875));
}

int func_513()//Position - 0x1FD9D
{
	if (Global_92833 == 10 || Global_92833 == 9)
	{
		return 1;
	}
	return 0;
}

void func_514()//Position - 0x1FDC1
{
	if (func_52(&iLocal_1084))
	{
		Global_104555.f_19933.f_5 = func_46(&iLocal_1084);
	}
	if (!iLocal_1001)
	{
		unk_0x8810DC630928B398("ASS1_LOST");
	}
	unk_0x751FF861325F816B("SCRIPT\ASSASSINATION_MULTI");
	func_260();
	func_243();
	func_248();
	func_249(1);
	func_407();
	func_518();
	func_433(0);
	func_3();
	if (unk_0x6ADD12BF4D6D2587(Global_89475.f_28[0]))
	{
		unk_0xDD29FF4BAB8AFF9C(Global_89475.f_28[0], true, 1);
		unk_0x3A703774620FDB42(&(Global_89475.f_28[0]));
	}
	unk_0xCA107A9AAF17E75F(iLocal_953, 0);
	unk_0xCA107A9AAF17E75F(iLocal_954, 0);
	func_506();
	func_86(&uLocal_1277, 0, 0);
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		func_516(unk_0xFC1458A37D98B502(), 1);
		unk_0xD0A6028E561242DA(unk_0xFC1458A37D98B502(), 0, -1, 0);
	}
	unk_0x94BD6F0436473406(1f);
	unk_0xD581373770173F1F();
	unk_0xDF1ACFD53102CEB0(iLocal_1075, 0);
	unk_0xDF1ACFD53102CEB0(iLocal_1076, 0);
	func_515();
	unk_0x96A3D9A8A4C7AFD4();
}

void func_515()//Position - 0x1FEAB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (func_269(vLocal_1052[iVar0 /*3*/], 1) < 5f)
			{
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), -1223,185f, -185,4723f, 38,1753f, 1, 0, 0, 1);
				unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 119,5633f);
			}
		}
		iVar0++;
	}
}

void func_516(int iParam0, int iParam1)//Position - 0x1FF1B
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0x5AD8564EFD5BEC2E(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_517(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_92870 > 0)
	{
		Global_98118.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_95149.f_21[iParam1] = iVar0;
	}
}

int func_517(int iParam0, int iParam1)//Position - 0x1FF81
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_92870 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_98118.f_812[iParam0 /*472*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_98118.f_812[iParam0 /*472*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_98118.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_98118.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_95149.f_812[iParam0 /*472*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_95149.f_812[iParam0 /*472*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_95149.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_95149.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_518()//Position - 0x200B5
{
	unk_0x9E6ACDF1473CD846(102, "ASSOJva");
	unk_0x9E6ACDF1473CD846(107, "ASSOJva");
	unk_0xD22D83D359390CC6("OJASva_101");
	unk_0xD22D83D359390CC6("OJASva_101a");
	unk_0xD22D83D359390CC6("OJASva_104");
}

void func_519()//Position - 0x200E9
{
	int iVar0;
	
	if (unk_0x3B6F9DF9C5FEB3A4("buddyDeathResponse"))
	{
		system::start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_104555.f_9055 || func_40(0))
	{
		if (!func_520())
		{
			iVar0 = func_39();
			if (iVar0 != -1)
			{
				if (!func_33(iVar0))
				{
					return;
				}
				unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_38();
		}
	}
}

int func_520()//Position - 0x2015A
{
	if (((Global_92833 == 13 || Global_92833 == 10) || Global_92833 == 11) || Global_92833 == 12)
	{
		return 0;
	}
	return 1;
}

void func_521(var uParam0, int iParam1)//Position - 0x20198
{
	func_522(uParam0, iParam1);
}

void func_522(var uParam0, var uParam1)//Position - 0x201A8
{
	*uParam0 = (*uParam0 || uParam1);
}

