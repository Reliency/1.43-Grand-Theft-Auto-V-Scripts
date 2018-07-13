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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	char cLocal_79[16] = "";
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	vector3 vLocal_86 = { 0f, 0f, 0f };
	vector3 vLocal_87 = { 0f, 0f, 0f };
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	var uLocal_94 = 30;
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
	var uLocal_245 = 10;
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
	var uLocal_296 = 10;
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
	var uLocal_367 = 20;
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
	var uLocal_468 = 20;
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
	var uLocal_569 = 30;
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
	var uLocal_750 = 5;
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
	var uLocal_781 = 7;
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
	var uLocal_831 = 5;
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
	var uLocal_845 = 0;
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
	var uLocal_857 = 3;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
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
	var uLocal_873 = 16;
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
	var uLocal_919 = 0;
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
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 10;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 5;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 5;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	struct<8> Local_1079[2];
	int iLocal_1080 = 0;
	var uLocal_1081 = 3;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 1092616192;
	var uLocal_1088 = 1101004800;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 3;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 16;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
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
	var uLocal_1272 = -1;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 1000;
	var uLocal_1280 = 1000;
	var uLocal_1281 = 0;
	int iLocal_1282 = 0;
	int iLocal_1283 = 0;
	int iLocal_1284 = 0;
	vector3 vLocal_1285 = { 0f, 0f, 0f };
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	int iLocal_1293 = 0;
	var uLocal_1294 = 0;
	struct<2> Local_1295 = { 0, 0 } ;
	int iLocal_1296 = 0;
	var uLocal_1297 = 0;
	struct<2> Local_1298[3];
	int iLocal_1299 = 0;
	int iLocal_1300 = 0;
	int iLocal_1301 = 0;
	int iLocal_1302 = 0;
	float fLocal_1303 = 0f;
	int iLocal_1304 = 0;
	int iLocal_1305 = 0;
	int iLocal_1306 = 0;
	int iLocal_1307 = 0;
	int iLocal_1308 = 0;
	vector3 vLocal_1309[24] = "";
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	int iLocal_1313 = 0;
	int iLocal_1314 = 0;
	int iLocal_1315 = 0;
	int iLocal_1316 = 0;
	int iLocal_1317 = 0;
	int iLocal_1318 = 0;
	int iLocal_1319 = 0;
	bool bLocal_1320 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	StringCopy(&cLocal_79, "JHP2ADS", 16);
	iLocal_82 = joaat("s_m_m_armoured_01");
	iLocal_83 = joaat("boxville3");
	iLocal_84 = joaat("prop_idol_case_02");
	iLocal_85 = joaat("prop_yell_plastic_target");
	vLocal_86 = { 0f, 0,175f, 0f };
	vLocal_87 = { 0f, -3,6f, 0f };
	iLocal_88 = 0;
	fLocal_1303 = 0f;
	iLocal_1318 = -1;
	if (unk_0x7D9C4B359376D38A(3))
	{
		func_294(5);
	}
	unk_0xBC03901A15107317(1);
	func_273();
	while (true)
	{
		unk_0x48D75120C879E65E("M_JewelStoreJobPrep2A", 0);
		if (bLocal_93)
		{
			func_271();
		}
		func_269(&uLocal_94);
		func_199();
		func_197();
		if (!bLocal_91)
		{
			func_193();
			func_192(&Local_1079);
			func_1();
		}
		unk_0xAD6F3DFB1F960182(0,8f);
		system::wait(0);
	}
}

void func_1()//Position - 0x105
{
	switch (iLocal_88)
	{
		case 0:
			if (func_21())
			{
				func_20(1);
			}
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()//Position - 0x136
{
	unk_0x8810DC630928B398("JHP2A_STOP");
	unk_0x84CDD933AFA470D2();
	unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
	func_8(0);
	if (func_7(87))
	{
		func_3(0, 1);
	}
	else
	{
		func_3(0, 0);
	}
	unk_0x96A3D9A8A4C7AFD4();
}

void func_3(bool bParam0, int iParam1)//Position - 0x173
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
		if ((func_6(0) && Global_71102.f_1 == 1) && func_5(Global_71102))
		{
		}
		else
		{
			Global_55903 = 1;
		}
	}
	if (Global_104555.f_9055 || func_6(0))
	{
		iVar0 = func_4();
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

int func_4()//Position - 0x249
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

int func_5(int iParam0)//Position - 0x27E
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

bool func_6(bool bParam0)//Position - 0x2BC
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

int func_7(int iParam0)//Position - 0x2E7
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_330[iParam0 /*6*/];
}

void func_8(bool bParam0)//Position - 0x313
{
	int iVar0;
	
	unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
	unk_0x2E4932E63763FE26(joaat("boxville3"), false);
	unk_0xDF1ACFD53102CEB0(joaat("s_m_m_armoured_01"), false);
	if (func_19())
	{
		func_13(0);
	}
	iLocal_1305 = 0;
	Global_68325 = 0;
	if (bParam0)
	{
		unk_0x94BD6F0436473406(1f);
		unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
		Global_68325 = 0;
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_1293))
	{
		if (bParam0)
		{
			unk_0xC91FE17AD7353B70(&iLocal_1293);
		}
		else
		{
			unk_0x5380482A432E314E(&iLocal_1293);
		}
	}
	if (unk_0x6ADD12BF4D6D2587(vLocal_1285.x))
	{
		if (bParam0)
		{
			unk_0x68433819717660CF(&vLocal_1285);
		}
		else
		{
			unk_0x486F346ADFE56674(&vLocal_1285);
		}
	}
	if (unk_0x6ADD12BF4D6D2587(Local_1295))
	{
		if (bParam0 && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			unk_0xC91FE17AD7353B70(&Local_1295);
		}
		else
		{
			unk_0x5380482A432E314E(&Local_1295);
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_1298)
	{
		if (unk_0x6ADD12BF4D6D2587(Local_1298[iVar0 /*2*/]))
		{
			if (bParam0)
			{
				unk_0x452336926718D62A(&(Local_1298[iVar0 /*2*/]));
			}
			else
			{
				if (unk_0xDFFD5F8C8ABCB7EF(Local_1298[iVar0 /*2*/]))
				{
					unk_0x6B7C10B19928914F(Local_1298[iVar0 /*2*/], 1, 1);
				}
				unk_0x3A703774620FDB42(&(Local_1298[iVar0 /*2*/]));
			}
		}
		iVar0++;
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_1299))
	{
		if (bParam0)
		{
			unk_0x452336926718D62A(&iLocal_1299);
		}
		else
		{
			if (unk_0xDFFD5F8C8ABCB7EF(iLocal_1299))
			{
				unk_0x6B7C10B19928914F(iLocal_1299, 1, 1);
			}
			unk_0x3A703774620FDB42(&iLocal_1299);
		}
	}
	if (iLocal_1300 != 0)
	{
		unk_0xCA107A9AAF17E75F(iLocal_1300, 0);
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_briefcase"), 0))
		{
			unk_0xABBEF2EAC74A02EB(unk_0xFC1458A37D98B502(), joaat("weapon_briefcase"));
		}
	}
	func_11(&uLocal_1270, 0, 0);
	func_10();
	if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_briefcase"), 0))
	{
		unk_0xABBEF2EAC74A02EB(unk_0xFC1458A37D98B502(), joaat("weapon_briefcase"));
	}
	func_9(6, 0);
}

void func_9(int iParam0, bool bParam1)//Position - 0x4CB
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

void func_10()//Position - 0x4ED
{
	Global_88833 = 0;
}

void func_11(var uParam0, int iParam1, int iParam2)//Position - 0x4FA
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
		if (func_12(uParam0->f_3))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
	if (!unk_0x8C1C362CA8299475(sVar0))
	{
		if (func_12(sVar0))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
}

int func_12(char* sParam0)//Position - 0x5D0
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_13(bool bParam0)//Position - 0x5E3
{
	if (bParam0)
	{
		func_18();
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			unk_0x872F1C1F8587CCC7(&Global_2324, 16);
		}
		Global_14453.f_1 = 1;
		if (func_17(0))
		{
			func_14(0);
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

void func_14(int iParam0)//Position - 0x646
{
	if (Global_14615)
	{
		func_16(0, 0);
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

int func_15()//Position - 0x6B6
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_16(bool bParam0, bool bParam1)//Position - 0x6DD
{
	if (bParam0)
	{
		if (func_17(0))
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

int func_17(int iParam0)//Position - 0x751
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

void func_18()//Position - 0x7AB
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
	}
}

int func_19()//Position - 0x7D4
{
	if (Global_14453.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_20(int iParam0)//Position - 0x7ED
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_89 = 0;
		iLocal_90 = 0;
		iLocal_88 = iParam0;
	}
}

int func_21()//Position - 0x808
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	vVar0 = { 692,8256f, -1012,544f, 21,722f };
	vVar1 = { 707,15f, -959,66f, 29,4f };
	if (!iLocal_90)
	{
		if (func_191(Local_1295))
		{
			if (unk_0xB38AB7F32D71579D(Local_1295) != 0)
			{
				Local_1295.f_1 = unk_0xB38AB7F32D71579D(Local_1295);
			}
			else
			{
				Local_1295.f_1 = func_190(Local_1295, 0, 0);
			}
			func_189("JHP2A_STEAL", 7500, 1);
			func_188("JHP2A_HLP2", 15000);
		}
		else if (unk_0xB38AB7F32D71579D(Local_1295) != 0)
		{
			unk_0x62D1DA6940EE5FAA(1);
			iVar3 = unk_0xB38AB7F32D71579D(Local_1295);
			unk_0xE30CF11C0EE14316(&iVar3);
			unk_0x62D1DA6940EE5FAA(0);
		}
		unk_0x8810DC630928B398("JHP2A_START");
		func_131(0f, 0f, 0f, 0f, 1, func_184());
		unk_0x1267474D9A69CA37(5f, 5f, 4);
		iLocal_1313 = 0;
		iLocal_90 = 1;
		bLocal_1320 = true;
		iLocal_89 = 1;
	}
	if (iLocal_90)
	{
		func_130();
		switch (iLocal_89)
		{
			case 1:
				if ((((((iLocal_1282 == 0 && unk_0x6ADD12BF4D6D2587(Local_1295)) && unk_0xB8DE76287EDC4957(Local_1295, 0)) && unk_0x6ADD12BF4D6D2587(vLocal_1285.x)) && !unk_0x3AB6A1A9084FB0A4(vLocal_1285.x)) && unk_0xA8D0477084E86A92(vLocal_1285.x, Local_1295, 0)) && func_127(&(Local_1079[0 /*8*/])))
				{
					func_99(&uLocal_1270, Local_1295, 0, 0, 1, 1, 1);
				}
				else
				{
					func_11(&uLocal_1270, 0, 0);
				}
				if (iLocal_1282 == 3 || iLocal_1282 == 2)
				{
					unk_0x1267474D9A69CA37(5f, 5f, 4);
					func_96(&iLocal_1080, 1, 0);
					if (unk_0xF491DD47B88AA84E() && func_12("JHP2A_HLP2"))
					{
						unk_0x3E80C2F7BC665259(1);
					}
					if (!iLocal_1313)
					{
						func_189("JHP2A_TAKEBZ", 7500, 1);
					}
					iLocal_89 = 2;
				}
				else if ((unk_0x6ADD12BF4D6D2587(iLocal_1296) && unk_0xB8DE76287EDC4957(iLocal_1296, 0)) && unk_0x03760B63FE11B718(iLocal_1296, Local_1295))
				{
					if (unk_0xA6DECE14FC9A8C51(Local_1295.f_1))
					{
						unk_0x1267474D9A69CA37(5f, 5f, 4);
						unk_0x62D1DA6940EE5FAA(1);
						unk_0xE30CF11C0EE14316(&(Local_1295.f_1));
						unk_0x62D1DA6940EE5FAA(0);
						func_95(705, 0);
					}
					func_94(&iLocal_1080, vVar0, 0,1f, 0,1f, 0,1f, 1, iLocal_1296, "JHP2A_RTNVAN", "", "", 1, 0, 1, -1);
					if (unk_0x0F3033474C49912D(Local_1295, 692,9143f, -1003,556f, 21,50839f, 692,6511f, -1021,604f, 26,20675f, 9,75f, 0, true, 0))
					{
						unk_0xA1AA40A93CA0F40D(iLocal_1296, 5f, -1, 0);
						iLocal_89 = 101;
					}
				}
				else if (iLocal_1282 == 1)
				{
					func_96(&iLocal_1080, 1, 0);
					if (!unk_0xA6DECE14FC9A8C51(Local_1298[0 /*2*/].f_1))
					{
						unk_0x1267474D9A69CA37(5f, 5f, 4);
						Local_1298[0 /*2*/].f_1 = func_93(Local_1298[0 /*2*/]);
						func_189("JHP2A_TAKEBZ", 7500, 1);
						iLocal_1313 = 1;
						unk_0xCF5EB2CB1B30F02C(Local_1295, 0);
					}
				}
				else if (iLocal_1282 == 0)
				{
					if (unk_0xA6DECE14FC9A8C51(Local_1295.f_1))
					{
						unk_0x1267474D9A69CA37(5f, 5f, 4);
						unk_0x62D1DA6940EE5FAA(1);
						unk_0xE30CF11C0EE14316(&(Local_1295.f_1));
						unk_0x62D1DA6940EE5FAA(0);
						func_95(705, 0);
					}
					if (func_91(&iLocal_1080, vVar0, 692,9143f, -1003,556f, 21,50839f, 692,6511f, -1021,604f, 26,20675f, 9,75f, 1, Local_1295, "JHP2A_RTNVAN", "", "", unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_1295, 0), 0, 1, -1))
					{
						iLocal_89 = 101;
					}
					if (unk_0xA6DECE14FC9A8C51(iLocal_1080) && unk_0x852CC78F6A44C335(iLocal_1080))
					{
						unk_0xAAAC88CC20771601(iLocal_1080, false);
					}
				}
				break;
			
			case 101:
				if (unk_0x6ADD12BF4D6D2587(Local_1295) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_1295, 0))
				{
					iVar4 = Local_1295;
				}
				else if (unk_0x6ADD12BF4D6D2587(iLocal_1296) && unk_0x03760B63FE11B718(iLocal_1296, Local_1295))
				{
					iVar4 = iLocal_1296;
				}
				if (func_89(iVar4, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					if (func_7(87))
					{
						unk_0x1267474D9A69CA37(5f, 5f, 4);
						iLocal_89 = 1000;
					}
					else
					{
						unk_0x1267474D9A69CA37(5f, 5f, 4);
						unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 0);
						iLocal_89++;
					}
				}
				break;
			
			case 102:
				if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
				{
					unk_0x84CDD933AFA470D2();
					unk_0xCF5EB2CB1B30F02C(Local_1295, 0);
					unk_0xFA87254221D30EB8(Local_1295, 1);
					if (unk_0x6ADD12BF4D6D2587(iLocal_1296))
					{
						unk_0xA1AA40A93CA0F40D(iLocal_1296, 5f, 1, 0);
					}
					func_88(0, -1);
					if (unk_0x6ADD12BF4D6D2587(Local_1298[0 /*2*/]))
					{
						unk_0x452336926718D62A(&(Local_1298[0 /*2*/]));
					}
					if (unk_0x6ADD12BF4D6D2587(Local_1298[1 /*2*/]))
					{
						unk_0x452336926718D62A(&(Local_1298[1 /*2*/]));
					}
					if (unk_0x6ADD12BF4D6D2587(Local_1298[2 /*2*/]))
					{
						unk_0x452336926718D62A(&(Local_1298[2 /*2*/]));
					}
					return 1;
				}
				break;
			
			case 2:
				if (!unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_briefcase"), 0))
				{
					iVar2 = 0;
					while (iVar2 < Local_1298)
					{
						if (unk_0x6ADD12BF4D6D2587(Local_1298[iVar2 /*2*/]) && !unk_0xDFFD5F8C8ABCB7EF(Local_1298[iVar2 /*2*/]))
						{
							if (unk_0xA6DECE14FC9A8C51(Local_1295.f_1))
							{
								unk_0x62D1DA6940EE5FAA(1);
								unk_0xE30CF11C0EE14316(&(Local_1295.f_1));
								unk_0x62D1DA6940EE5FAA(0);
							}
							if (!unk_0xA6DECE14FC9A8C51(Local_1298[iVar2 /*2*/].f_1))
							{
								Local_1298[iVar2 /*2*/].f_1 = func_93(Local_1298[iVar2 /*2*/]);
							}
						}
						iVar2++;
					}
					iVar2 = 0;
					while (iVar2 < Local_1298)
					{
						if (unk_0x6ADD12BF4D6D2587(Local_1298[iVar2 /*2*/]) && !unk_0xDFFD5F8C8ABCB7EF(Local_1298[iVar2 /*2*/]))
						{
							if (!unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_briefcase"), 0))
							{
								bVar5 = func_87(Local_1298[iVar2 /*2*/]);
								if ((bVar5 && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), unk_0x3F90543934DCD7E6(Local_1295, 0f, -3f, -0,5f), unk_0x3F90543934DCD7E6(Local_1295, 0f, -4,5f, 1f), 1,68f, 0, true, 1)) || (!bVar5 && unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), unk_0xB3328BA8976B416C(Local_1298[iVar2 /*2*/], 1), 0,75f, 0,75f, 4f, 0, false, 1)))
								{
									unk_0x9E058151726E58DE(unk_0xFC1458A37D98B502(), joaat("weapon_briefcase"), 1, false, false);
									unk_0x452336926718D62A(&(Local_1298[iVar2 /*2*/]));
									unk_0x84CDD933AFA470D2();
									unk_0x4AFBCBFDE748D4E0(-1, "PICKUP_WEAPON_SMOKEGRENADE", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", true);
								}
							}
						}
						iVar2++;
					}
				}
				else
				{
					func_95(705, 0);
					iVar2 = 0;
					while (iVar2 < Local_1298)
					{
						if (unk_0xA6DECE14FC9A8C51(Local_1298[iVar2 /*2*/].f_1))
						{
							unk_0xE30CF11C0EE14316(&(Local_1298[iVar2 /*2*/].f_1));
						}
						iVar2++;
					}
					func_41(&iLocal_1080, vVar1, 0,1f, 0,1f, 0,1f, 0, "JHP2A_RTNBZ", 1, 1, -1, 1);
					unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar6, 1);
					if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), 722,9849f, -965,7473f, 32,29691f, 50f, 40f, 11,4375f, 0, true, 0))
					{
						iVar8 = 1;
					}
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 709,7432f, -960,3367f, 29,39533f, 703,6478f, -960,3293f, 33,65119f, 4,125f, 0, true, 0))
					{
						bVar7 = true;
					}
					if (bVar7 || ((iVar8 && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) && bLocal_1320))
					{
						unk_0x4FB260623DD93924(0, 37, 1);
						unk_0x4FB260623DD93924(0, 44, 1);
						if (!func_19())
						{
							func_13(1);
						}
						if (!unk_0x8E403242846BCC9B(unk_0xFC1458A37D98B502()))
						{
							if (!unk_0xACB5C13823C09021(unk_0xFC1458A37D98B502(), 0) && !func_17(0))
							{
								if (iVar6 != joaat("weapon_briefcase"))
								{
									unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_briefcase"), true);
								}
							}
						}
					}
					if (bVar7)
					{
						if (iVar6 == joaat("weapon_briefcase"))
						{
							if (!func_12("JHP2A_HLP1"))
							{
								func_40("JHP2A_HLP1");
							}
						}
						if (unk_0xE8C126B7ADBB9D63(0, 51) && iVar6 == joaat("weapon_briefcase"))
						{
							if (func_12("JHP2A_HLP1"))
							{
								unk_0x3E80C2F7BC665259(1);
							}
							iVar9 = unk_0x86D478BA520B1CA0(unk_0xFC1458A37D98B502(), 1);
							unk_0x764B52EA8B8FFFA3(iVar9);
							unk_0x1267474D9A69CA37(3f, 5f, 4);
							unk_0x7CC4363AEEF7EF34(-1, "Drop_Case", iVar9, "JWL_PREP_2A_SOUNDS", 0, 0);
							unk_0x3A703774620FDB42(&iVar9);
							unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
							unk_0xABBEF2EAC74A02EB(unk_0xFC1458A37D98B502(), joaat("weapon_briefcase"));
							func_88(0, -1);
							func_39(706);
							func_96(&iLocal_1080, 1, 0);
							if (func_7(87))
							{
								if (func_19())
								{
									func_13(0);
								}
								iLocal_89 = 2000;
							}
							else
							{
								return 1;
							}
						}
					}
					else
					{
						if (func_19())
						{
							func_13(0);
						}
						if (unk_0xF491DD47B88AA84E())
						{
							if (func_12("JHP2A_HLP1"))
							{
								unk_0x3E80C2F7BC665259(1);
							}
						}
					}
					bLocal_1320 = unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1);
				}
				break;
			
			case 1000:
				unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 0);
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), true);
				unk_0xCF5EB2CB1B30F02C(Local_1295, 0);
				unk_0xFA87254221D30EB8(Local_1295, 1);
				func_38(1);
				func_37(1, 0);
				if (func_35())
				{
					if (func_24(&uLocal_1105, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						unk_0x1267474D9A69CA37(5f, 5f, 4);
						iLocal_89++;
					}
				}
				break;
			
			case 1001:
				func_37(1, 0);
				if (func_23())
				{
					iLocal_89++;
				}
				break;
			
			case 1002:
				func_37(1, 0);
				if (!func_23())
				{
					func_22();
					return 1;
				}
				break;
			
			case 2000:
				unk_0x1267474D9A69CA37(5f, 5f, 4);
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), true);
				Global_68325 = 1;
				func_38(1);
				func_37(1, 0);
				iLocal_89++;
				break;
			
			case 2001:
				func_37(1, 0);
				if (func_35())
				{
					if (func_24(&uLocal_1105, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						iLocal_89++;
					}
				}
				break;
			
			case 2002:
				func_37(1, 0);
				if (func_23())
				{
					iLocal_89++;
				}
				break;
			
			case 2003:
				func_37(1, 0);
				if (!func_23())
				{
					func_22();
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_22()//Position - 0x1187
{
	int iVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xD38F266C132F2897(unk_0xFC1458A37D98B502(), false, false, false, false, false, false, 0, false);
		unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 157, true);
		unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90347[iVar0]))
		{
			if (!unk_0x191BE1BC8F26F3C1(Global_90347[iVar0], 0))
			{
				unk_0xD38F266C132F2897(Global_90347[iVar0], false, false, false, false, false, false, 0, false);
				unk_0x1A0806871323CD16(Global_90347[iVar0], false);
			}
		}
		iVar0++;
	}
	if ((Global_35861 != 0 && Global_35861 != 3) && Global_35861 != 2)
	{
		unk_0xC0EBC1452FCAB15C(5);
		unk_0x94BD6F0436473406(1f);
	}
}

int func_23()//Position - 0x123A
{
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_24(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x1263
{
	func_34(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15804 = 0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 0;
	Global_15810 = 0;
	if (iParam5 == 1)
	{
		Global_15768 = 1;
	}
	else
	{
		Global_15768 = 0;
	}
	Global_2621441 = 0;
	return func_25(sParam3, iParam4, bParam8);
}

int func_25(char* sParam0, int iParam1, bool bParam2)//Position - 0x12C2
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
					func_33();
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
		if (func_32(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_31();
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
				func_29();
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
				if (func_28())
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
			func_27();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_26();
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
		func_33();
	}
	return 0;
}

void func_26()//Position - 0x158E
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

void func_27()//Position - 0x15BF
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

int func_28()//Position - 0x1654
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

void func_29()//Position - 0x16ED
{
	if (func_30(14))
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
		Global_14453 = func_184();
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

bool func_30(int iParam0)//Position - 0x178F
{
	return Global_35861 == iParam0;
}

void func_31()//Position - 0x179D
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

bool func_32(int iParam0, int iParam1)//Position - 0x17F4
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

void func_33()//Position - 0x182F
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

void func_34(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1886
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

int func_35()//Position - 0x18DC
{
	if (func_36())
	{
		return 0;
	}
	if (unk_0x248C9865A96D3EA4())
	{
		if (unk_0x23F2F89E3D1CB7C4())
		{
			return 0;
		}
	}
	return 1;
}

int func_36()//Position - 0x1902
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_37(bool bParam0, bool bParam1)//Position - 0x1924
{
	if (!bParam1)
	{
		unk_0x4FB260623DD93924(0, 21, 1);
	}
	unk_0x4FB260623DD93924(0, 25, 1);
	unk_0x4FB260623DD93924(0, 24, 1);
	unk_0x4FB260623DD93924(0, 257, 1);
	unk_0x4FB260623DD93924(0, 141, 1);
	unk_0x4FB260623DD93924(0, 140, 1);
	unk_0x4FB260623DD93924(0, 22, 1);
	unk_0x4FB260623DD93924(0, 44, 1);
	unk_0x4FB260623DD93924(0, 23, 1);
	unk_0x4FB260623DD93924(0, 47, 1);
	unk_0x4FB260623DD93924(0, 36, 1);
	if (bParam0)
	{
		unk_0x4FB260623DD93924(0, 37, 1);
	}
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (bParam1)
		{
			unk_0x5C57ECBE59C08573(unk_0xFC1458A37D98B502(), 2f);
		}
		else
		{
			unk_0x5C57ECBE59C08573(unk_0xFC1458A37D98B502(), 1f);
		}
		unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 102, true);
	}
	if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
	{
		unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
	}
}

void func_38(bool bParam0)//Position - 0x19DE
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xD38F266C132F2897(unk_0xFC1458A37D98B502(), true, true, true, true, true, false, 0, false);
		unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 157, false);
		unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), true);
		unk_0x995BFC92D2115309(unk_0xFC1458A37D98B502(), 0, 0);
		if (bParam0)
		{
			unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), false);
		}
		unk_0x6EC874A9FE87276C(unk_0xFC1458A37D98B502(), 0);
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
	}
	unk_0xC0EBC1452FCAB15C(0);
	unk_0x94BD6F0436473406(0f);
}

void func_39(int iParam0)//Position - 0x1A5A
{
	bool bVar0;
	int iVar1;
	
	Global_55904 = 0;
	if (!Global_56128[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67998)
	{
		if (Global_67999[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_67999[iVar1 /*9*/].f_1 = 1;
			Global_67999[iVar1 /*9*/].f_2 = 0f;
			if (Global_67999[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_40(char* sParam0)//Position - 0x1ACB
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 1, true, -1);
}

int func_41(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3, char* sParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x1AE1
{
	return func_42(iParam0, vParam1, vParam2, func_86(), func_86(), iParam3, 3, 0, 0, 0, 0, sParam4, func_85(), func_85(), func_85(), func_85(), func_85(), 0, bParam5, func_85(), 0, 0, bParam6, iParam7, func_85(), func_85(), func_85(), bParam8, 1065353216);
}

int func_42(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)//Position - 0x1B3C
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vVar3 = { vParam1 + Vector(1f, 0f, 0f) };
	iParam0->f_17[0] = iParam7;
	iParam0->f_17[1] = iParam8;
	iParam0->f_17[2] = iParam9;
	iParam0->f_16 = iParam7;
	func_84(iParam0);
	func_83(iParam0);
	func_82();
	if (func_65(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_64(sParam12);
		func_64(sParam13);
		func_64(sParam14);
		func_64(sParam15);
		if (unk_0x9F7B586A14398C40())
		{
			bVar1 = false;
			if (unk_0xB8DE76287EDC4957(iParam10, 0))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam10, 0))
				{
					unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 3);
					if (!unk_0xC80D31E4B587871C(iParam0->f_13, 9))
					{
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 4);
					}
					if (unk_0xC80D31E4B587871C(iParam0->f_13, 23))
					{
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 23);
					}
					unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_62(iParam0, iParam21))
				{
					unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 3);
					if (!unk_0xC80D31E4B587871C(iParam0->f_13, 9))
					{
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 4);
					}
					unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_64(sParam16);
				func_64(sParam19);
				func_64("MORE_SEATS");
				if (bParam18 && unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
				{
					if (unk_0xA6DECE14FC9A8C51(iParam0->f_5))
					{
						unk_0xE30CF11C0EE14316(&(iParam0->f_5));
						func_64(sParam11);
					}
					if (unk_0xA6DECE14FC9A8C51(*iParam0))
					{
						unk_0xE30CF11C0EE14316(iParam0);
					}
					if ((!func_59(iParam0, 1) && !func_58(iParam0)) && !unk_0xC80D31E4B587871C(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_57(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[0]))
							{
								func_55(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 0);
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xC80D31E4B587871C(iParam0->f_13, 0))
					{
						func_64("LOSE_WANTED");
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 0);
						unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 1);
					}
					if (unk_0xC80D31E4B587871C(iParam0->f_13, 1))
					{
						if (!func_59(iParam0, 1))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[0]))
							{
								func_55(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 1);
						}
					}
					if (!unk_0xA6DECE14FC9A8C51(iParam0->f_5))
					{
						if (unk_0xA6DECE14FC9A8C51(*iParam0))
						{
							unk_0xE30CF11C0EE14316(iParam0);
						}
						iParam0->f_5 = func_54(vVar3, 0);
						if (!iParam23 == -1)
						{
							unk_0x4B4040A0EC7DBA81(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_53(iParam0->f_5, iParam0);
						}
					}
					else if (!func_52(vVar3, unk_0x67247AA13B7486A3(iParam0->f_5), 0,1f, 0))
					{
						unk_0x645FF8D8B599FD84(iParam0->f_5, vVar3);
						if (bParam27)
						{
							func_53(iParam0->f_5, iParam0);
						}
					}
					if (!func_59(iParam0, 2))
					{
						if (!unk_0xC80D31E4B587871C(iParam0->f_13, 2))
						{
							func_57(iParam0, sParam11, 0);
							unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (unk_0xC80D31E4B587871C(iParam0->f_13, 13))
						{
							iParam5 = 0;
						}
					}
					bVar1 = false;
					bVar4 = false;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						bVar4 = true;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vParam1, vParam2, iParam5, bVar4, iVar5);
						if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vParam3, vParam4, fParam28, 0, bVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vParam1, vParam2, iParam5, bVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
									if (!unk_0xA8D0477084E86A92(iParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!unk_0xA8D0477084E86A92(iParam0->f_17[iVar2], iParam10, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x4759A34EB65CCA39(iParam0->f_17[iVar2], func_51()) || !func_49(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_46(iParam0))
							{
								func_64(sParam11);
								func_64(sParam16);
								func_64(sParam12);
								func_64(sParam13);
								func_64(sParam14);
								func_64(sParam15);
								func_64("LOSE_WANTED");
								func_64("MORE_SEATS");
								func_64(sParam19);
								func_96(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0x6ADD12BF4D6D2587(iParam10))
			{
				if ((bParam18 && unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) && (!unk_0xC80D31E4B587871C(iParam0->f_13, 9) && !unk_0xC80D31E4B587871C(iParam0->f_13, 22)))
				{
					func_64(sParam16);
					func_64(sParam19);
					if (unk_0xA6DECE14FC9A8C51(iParam0->f_5) || unk_0xA6DECE14FC9A8C51(*iParam0))
					{
						unk_0xE30CF11C0EE14316(&(iParam0->f_5));
						unk_0xE30CF11C0EE14316(iParam0);
						func_64(sParam11);
					}
					if ((!func_59(iParam0, 1) && !func_58(iParam0)) && !unk_0xC80D31E4B587871C(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_57(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[0]))
							{
								func_55(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 0);
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xC80D31E4B587871C(iParam0->f_13, 0))
					{
						func_64("LOSE_WANTED");
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 0);
						unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 1);
					}
					if (unk_0xC80D31E4B587871C(iParam0->f_13, 1))
					{
						if (!func_59(iParam0, 1))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[0]))
							{
								func_55(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 1);
						}
					}
					if (unk_0xB8DE76287EDC4957(iParam10, 0))
					{
						if (!unk_0xA6DECE14FC9A8C51(*iParam0))
						{
							if (unk_0xA6DECE14FC9A8C51(iParam0->f_5))
							{
								unk_0xE30CF11C0EE14316(&(iParam0->f_5));
								func_64(sParam11);
							}
							*iParam0 = func_43(iParam10, 0, 0);
							unk_0x3ED68ABD7299EAA3(*iParam0, 2);
							if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
							{
								func_53(*iParam0, iParam0);
							}
						}
						if (!func_59(iParam0, 2))
						{
							if (!unk_0xC80D31E4B587871C(iParam0->f_13, 3))
							{
								func_57(iParam0, sParam16, 0);
								unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 3);
								unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 4);
							}
							else if (unk_0xC80D31E4B587871C(iParam0->f_13, 9))
							{
								if (!unk_0x8C1C362CA8299475(sParam19))
								{
									if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
									{
										func_57(iParam0, sParam19, 0);
										unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 4);
									}
								}
								else if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
								{
									func_57(iParam0, sParam16, 0);
									unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 4);
								}
								if (!unk_0xC80D31E4B587871C(iParam0->f_13, 23))
								{
									if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[0]))
									{
										func_55(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xA6DECE14FC9A8C51(iParam0->f_5))
				{
					unk_0xE30CF11C0EE14316(&(iParam0->f_5));
					func_64(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_59(iParam0, 2))
						{
							if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
							{
								if (!unk_0xC80D31E4B587871C(iParam0->f_13, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = unk_0x63A6486593EC7EC3(0, iVar6);
									if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[iVar7]))
									{
										func_55(iParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_57(iParam0, "MORE_SEATS", 0);
									unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 13);
								}
							}
							else if (!unk_0xC80D31E4B587871C(iParam0->f_13, 3))
							{
								func_57(iParam0, sParam16, 0);
								unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 3);
								unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 4);
							}
							else if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
							{
								if (unk_0xC80D31E4B587871C(iParam0->f_13, 9))
								{
									func_57(iParam0, sParam19, 0);
									unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_59(iParam0, 2))
					{
						if (!unk_0xC80D31E4B587871C(iParam0->f_13, 3))
						{
							func_57(iParam0, sParam16, 0);
							unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 3);
							unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 4);
						}
						else if (unk_0xC80D31E4B587871C(iParam0->f_13, 9))
						{
							if (!unk_0x8C1C362CA8299475(sParam19))
							{
								if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
								{
									func_57(iParam0, sParam19, 0);
									unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 4);
								}
							}
							else if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
							{
								func_57(iParam0, sParam16, 0);
								unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xC80D31E4B587871C(iParam0->f_13, 0))
		{
			unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 0);
		}
		func_64(sParam11);
		func_64(sParam16);
		func_64(sParam19);
		func_64(sParam16);
		func_64("LOSE_WANTED");
		if (unk_0xA6DECE14FC9A8C51(iParam0->f_5))
		{
			unk_0xE30CF11C0EE14316(&(iParam0->f_5));
		}
		if (unk_0xA6DECE14FC9A8C51(*iParam0))
		{
			unk_0xE30CF11C0EE14316(iParam0);
		}
	}
	unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 11);
	unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 12);
	return 0;
}

int func_43(int iParam0, bool bParam1, bool bParam2)//Position - 0x24A4
{
	return func_44(iParam0, !bParam1, bParam2);
}

int func_44(int iParam0, bool bParam1, bool bParam2)//Position - 0x24B7
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_45(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_45(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_45(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_45(bool bParam0, float fParam1, float fParam2)//Position - 0x255B
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_46(int iParam0)//Position - 0x2572
{
	if (unk_0xC80D31E4B587871C(iParam0->f_13, 12))
	{
		if (func_48(unk_0xFC1458A37D98B502()))
		{
			if (func_47(1, 0, 1) || unk_0xC80D31E4B587871C(iParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_47(1, 0, 1) || unk_0xC80D31E4B587871C(iParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_47(bool bParam0, bool bParam1, bool bParam2)//Position - 0x25D0
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

int func_48(int iParam0)//Position - 0x26B5
{
	float fVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		fVar0 = unk_0x90D5DFB054818BA7(iParam0);
		if (fVar0 > -0,5f && fVar0 < 0,5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_49(int iParam0, int iParam1)//Position - 0x26EC
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()) && iParam1)
		{
			if (func_50(unk_0xFC1458A37D98B502(), iParam0))
			{
				unk_0xB2442651179CF706(func_51(), 50f);
				return 1;
			}
		}
		else if (unk_0x4759A34EB65CCA39(iParam0, func_51()))
		{
			unk_0xB2442651179CF706(func_51(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)//Position - 0x2757
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x1ED974E122CB5C47(iParam0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(iParam0, 0);
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iParam1))
				{
					if (unk_0xAAA8D20859E2D36D(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_51()//Position - 0x279F
{
	return unk_0x7C65CFD05F3B9CE9(unk_0x98EC0789D9F0703B());
}

int func_52(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x27AF
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

void func_53(int iParam0, int iParam1)//Position - 0x282A
{
	if (unk_0xA6DECE14FC9A8C51(iParam0))
	{
		if (unk_0xA6DECE14FC9A8C51(iParam1->f_6))
		{
			unk_0xAAAC88CC20771601(iParam1->f_6, false);
		}
		unk_0xF906FCF8A11CBA9A(0);
		unk_0x981B8A90686AD23E();
		iParam1->f_6 = iParam0;
		unk_0xAAAC88CC20771601(iParam0, true);
	}
}

int func_54(vector3 vParam0, bool bParam1)//Position - 0x2865
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_45(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(iVar0, bParam1);
	return iVar0;
}

void func_55(int iParam0, char* sParam1, int iParam2)//Position - 0x2891
{
	unk_0x74D45BB07BD51F8B(iParam0, sParam1, func_56(iParam2), 1);
}

int func_56(int iParam0)//Position - 0x28A8
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

void func_57(int iParam0, char* sParam1, bool bParam2)//Position - 0x2A9D
{
	if (!bParam2)
	{
		if (!unk_0x8C1C362CA8299475(sParam1))
		{
			if (!unk_0x74C475EB8E73D398(sParam1, ""))
			{
				func_189(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_10 = unk_0x53C562FD2B9E3AB0();
}

int func_58(int iParam0)//Position - 0x2AD4
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_16))
	{
		if (unk_0x33B1D0D0C92D4F18(iParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0, int iParam1)//Position - 0x2AF8
{
	if (iParam1 != 1 || unk_0x248C9865A96D3EA4())
	{
		if (unk_0x23F2F89E3D1CB7C4())
		{
			return 1;
		}
		if (func_61(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x248C9865A96D3EA4())
	{
		if (func_36() && !func_60())
		{
			return 1;
		}
	}
	return 0;
}

int func_60()//Position - 0x2B50
{
	if (Global_16767 == 1)
	{
		return 1;
	}
	return 0;
}

int func_61(var uParam0)//Position - 0x2B67
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x53C562FD2B9E3AB0();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_62(var uParam0, int iParam1)//Position - 0x2B8A
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (func_63(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0, var uParam1, int iParam2)//Position - 0x2BBB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x6ADD12BF4D6D2587(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x95EC8AE7E4F33F6E(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x0CAAAC6B57530706(iParam0, 1))
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
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0x0CAAAC6B57530706(iParam0, 1))
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
	return 0;
}

void func_64(char* sParam0)//Position - 0x2C4F
{
	if (!unk_0x8C1C362CA8299475(sParam0))
	{
		unk_0x166954C5648772B6(sParam0);
	}
}

int func_65(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x2C67
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	vector3 vVar19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar12[0] = uParam4;
	uVar12[1] = uParam5;
	uVar12[2] = uParam6;
	uVar13[0] = uParam13;
	uVar13[1] = uParam14;
	uVar13[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
		{
			if (!unk_0xC80D31E4B587871C(uParam0->f_13, 29) && !unk_0xC80D31E4B587871C(uParam0->f_13, 28))
			{
				if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
				{
					unk_0xD0A6028E561242DA(uParam0->f_17[iVar0], true, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0xC80D31E4B587871C(uParam0->f_13, 29) && unk_0xC80D31E4B587871C(uParam0->f_13, 28))
		{
			if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
			{
				unk_0xD0A6028E561242DA(uParam0->f_17[iVar0], false, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(uParam0->f_13, 26))
	{
		bVar14 = false;
		if (!unk_0x6ADD12BF4D6D2587(uParam0->f_21))
		{
			iVar16 = 64;
			iVar16 |= 65536;
			iVar16 |= 2048;
			iVar16 |= 1;
			iVar16 |= 2;
			iVar16 |= 4;
			iVar16 |= 32;
			iVar16 |= 16;
			iVar16 |= 8;
			iVar15 = unk_0x87889570F3396ABD(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 50f, 0, iVar16);
			if (unk_0xB8DE76287EDC4957(iVar15, 0))
			{
				uParam0->f_21 = iVar15;
			}
		}
		if (unk_0xB8DE76287EDC4957(uParam0->f_21, 0))
		{
			if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
				{
					if (!unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0) || !bParam17)
					{
						if (func_63(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
								{
									unk_0x5C57ECBE59C08573(uParam0->f_17[iVar0], 1f);
									if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_51()))
									{
										unk_0x88235B448509228B(uParam0->f_17[iVar0]);
									}
									if (unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], -1794415470) == 7 && !func_81(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x9F887157983E8EFC(uParam0->f_17[iVar0]) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0]))
										{
											unk_0x771A86309E0CA47B(uParam0->f_17[iVar0], true);
											unk_0x6F8C8278B7C06889(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0xF6A83791895D5AA1(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar14 = true;
						}
					}
					else
					{
						bVar14 = true;
					}
				}
				else
				{
					bVar14 = true;
				}
			}
			else
			{
				bVar14 = true;
			}
		}
		else
		{
			bVar14 = true;
		}
		if (bVar14)
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
				{
					if (!unk_0x0F299BBD0DC14B18(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0xB8E08BD5B184DF4E(uParam0->f_17[iVar0]);
					}
					if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_51()))
					{
						if (func_79(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							unk_0x57FB41CABA25835C(uParam0->f_17[iVar0], func_51());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xC80D31E4B587871C(uParam0->f_13, 26))
	{
		if ((!func_78(uParam0) && unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502())) && !unk_0x6ADD12BF4D6D2587(iParam10))
		{
			iVar10 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (unk_0xB8DE76287EDC4957(iVar10, 0))
			{
				if (!unk_0xC80D31E4B587871C(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_59(uParam0, 2))
					{
						iVar17 = 0;
						iVar18 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = unk_0x63A6486593EC7EC3(0, iVar17);
						if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar18]))
						{
							func_55(uParam0->f_17[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_57(uParam0, "MORE_SEATS", 0);
						unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 13);
					}
				}
				bVar9 = true;
			}
		}
		else
		{
			bVar9 = false;
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 13);
			func_64("MORE_SEATS");
		}
		if (!unk_0x6ADD12BF4D6D2587(iParam10))
		{
			if ((!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[0]) || !unk_0x3AB6A1A9084FB0A4(uParam0->f_17[1])) || !unk_0x3AB6A1A9084FB0A4(uParam0->f_17[2]))
			{
				if (!unk_0xC80D31E4B587871C(uParam0->f_13, 31))
				{
					if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()) && !func_59(uParam0, 2))
					{
						iVar10 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
						if (func_77(iVar10, uParam0))
						{
							func_57(uParam0, "CMN_VEHSUIT", 0);
							unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
				{
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 31);
					func_64("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xB8DE76287EDC4957(iParam10, 0))
		{
			if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iParam10))
			{
				if (unk_0xE8C126B7ADBB9D63(0, 75))
				{
					unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0xC80D31E4B587871C(uParam0->f_13, 21))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x6ADD12BF4D6D2587(uParam0->f_17[iVar0]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
				{
					if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_51()))
					{
						unk_0xFF96DC2FA12B7785(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0xFF96DC2FA12B7785(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
					{
						iVar10 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
						if (unk_0xB8DE76287EDC4957(iVar10, 0))
						{
							if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_51()))
							{
								if (!func_78(uParam0) && unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
								{
									if (!func_76(uParam0->f_17[iVar0]))
									{
										unk_0x88235B448509228B(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !unk_0x191BE1BC8F26F3C1(iVar10, 0))
						{
							if (unk_0xAAA8D20859E2D36D(uParam0->f_17[iVar0], iVar10))
							{
								if (unk_0x0BA31FF7931F3DD3(iVar10) && !unk_0x5E0BEAAD15B888F3(iVar10))
								{
									vVar19 = { unk_0xB3328BA8976B416C(iVar10, 1) };
									if (vVar19.z < -1f)
									{
										unk_0x4F8A35D7CBC17327(uParam0->f_17[iVar0], iVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_51()))
					{
						if (unk_0x1ED974E122CB5C47(uParam0->f_17[iVar0]))
						{
							iVar10 = unk_0xDFD115BB10FE46A9(uParam0->f_17[iVar0], 0);
							if (!unk_0x191BE1BC8F26F3C1(iVar10, 0))
							{
								if (unk_0xB8DE76287EDC4957(iParam10, 0))
								{
									if (iVar10 != iParam10)
									{
										if (!unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iVar10))
										{
											if (unk_0x90D5DFB054818BA7(iVar10) > 5f)
											{
												unk_0x4F8A35D7CBC17327(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x4F8A35D7CBC17327(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
									{
										iVar20 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
									}
									if (unk_0xB8DE76287EDC4957(iVar20, 0))
									{
										if (iVar10 != iVar20)
										{
											if (unk_0x90D5DFB054818BA7(iVar10) > 5f)
											{
												unk_0x4F8A35D7CBC17327(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x4F8A35D7CBC17327(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_51()))
					{
						iVar21 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
						if (unk_0x6ADD12BF4D6D2587(iVar21))
						{
							if (func_63(iVar21, uParam0, 0))
							{
								if (func_75(iVar0, uParam0) || !unk_0xC80D31E4B587871C(uParam0->f_13, 27))
								{
									unk_0xF6A83791895D5AA1(uParam0->f_17[iVar0], iVar0);
									func_74(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_75(iVar0, uParam0))
							{
								if (unk_0x82FF3DFBC3965CC0(iVar21) == joaat("sentinel2"))
								{
									unk_0xF6A83791895D5AA1(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0xF6A83791895D5AA1(uParam0->f_17[iVar0], 2);
								}
								func_73(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_51()) && !func_72(uParam0->f_17[iVar0], iParam10)) && !func_71(uParam0->f_17[iVar0], iParam10))
					{
						if (func_79(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_51()))
							{
								if (((!unk_0x9F887157983E8EFC(uParam0->f_17[iVar0]) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0])) && !unk_0xE4A3B62790C25748(uParam0->f_17[iVar0])) && !unk_0x0F299BBD0DC14B18(uParam0->f_17[iVar0]))
								{
									iVar11 = unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7)
									{
										unk_0xB8E08BD5B184DF4E(uParam0->f_17[iVar0]);
									}
									unk_0x57FB41CABA25835C(uParam0->f_17[iVar0], func_51());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x53C562FD2B9E3AB0();
								uParam0->f_1[iVar0] = func_43(uParam0->f_17[iVar0], 0, 0);
								unk_0x3ED68ABD7299EAA3(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_53(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
					{
						if (((func_49(uParam0->f_17[iVar0], 1) || func_72(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0xB8DE76287EDC4957(iParam10, 0) && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam10, 0)))
						{
							if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
							{
								unk_0xE30CF11C0EE14316(&(uParam0->f_1[iVar0]));
								func_64(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_53(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0xB8DE76287EDC4957(iParam10, 0))
					{
						if (!unk_0xAAA8D20859E2D36D(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x21B6FFFD04C9FF3A(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0xC80D31E4B587871C(uParam0->f_13, 11)) && !((bParam17 && unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam10, 0)))
							{
								if (unk_0x1ED974E122CB5C47(uParam0->f_17[iVar0]))
								{
									if (!unk_0xA8D0477084E86A92(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_49(uParam0->f_17[iVar0], 1))
										{
											if (func_48(uParam0->f_17[iVar0]))
											{
												iVar11 = unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], 451360105);
												if (iVar11 == 7)
												{
													unk_0x16416C5B54FDBCBB(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_51()))
									{
										if ((((!unk_0xE4A3B62790C25748(uParam0->f_17[iVar0]) && !unk_0x9F887157983E8EFC(uParam0->f_17[iVar0])) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0])) && !unk_0x0F299BBD0DC14B18(uParam0->f_17[iVar0])) && !unk_0x6B4C37F2EEC636CC(iParam10))
										{
											unk_0x88235B448509228B(uParam0->f_17[iVar0]);
										}
									}
									iVar11 = unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7 && !func_81(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0xE4A3B62790C25748(uParam0->f_17[iVar0]) && !unk_0xE4A3B62790C25748(unk_0xFC1458A37D98B502())) && !func_70(uParam0->f_17[iVar0], 2f)) && !unk_0x9F887157983E8EFC(uParam0->f_17[iVar0])) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0])) && !unk_0x6B4C37F2EEC636CC(iParam10))
										{
											unk_0x771A86309E0CA47B(uParam0->f_17[iVar0], true);
											if (unk_0xC80D31E4B587871C(uParam0->f_13, 10))
											{
												unk_0x5C57ECBE59C08573(uParam0->f_17[iVar0], 1f);
											}
											unk_0x6F8C8278B7C06889(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0x07224EEE13A1B6AE(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_43(uParam0->f_17[iVar0], 0, 0);
										unk_0x3ED68ABD7299EAA3(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_51()))
							{
								if (func_79(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!unk_0x9F887157983E8EFC(uParam0->f_17[iVar0]) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0]))
									{
										iVar11 = unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], -1794415470);
										if (iVar11 == 7)
										{
											unk_0xB8E08BD5B184DF4E(uParam0->f_17[iVar0]);
										}
										unk_0x771A86309E0CA47B(uParam0->f_17[iVar0], false);
										unk_0x57FB41CABA25835C(uParam0->f_17[iVar0], func_51());
									}
								}
							}
						}
						else if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iParam10))
						{
							if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_51()))
							{
								if (!unk_0xC80D31E4B587871C(uParam0->f_13, 21))
								{
									unk_0x57FB41CABA25835C(uParam0->f_17[iVar0], func_51());
								}
							}
							else if (unk_0xC80D31E4B587871C(uParam0->f_13, 21))
							{
								unk_0x88235B448509228B(uParam0->f_17[iVar0]);
								unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_51()) && !unk_0x6B4C37F2EEC636CC(iParam10))
						{
							unk_0x88235B448509228B(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
				{
					unk_0xE30CF11C0EE14316(&(uParam0->f_1[iVar0]));
					func_64(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_59(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
						{
							if (func_76(uParam0->f_17[iVar0]) || unk_0x21B6FFFD04C9FF3A(uParam0->f_17[iVar0], unk_0xFC1458A37D98B502(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
					{
						if (!unk_0x21B6FFFD04C9FF3A(uParam0->f_17[iVar0], unk_0xFC1458A37D98B502(), (uParam0->f_8 * 0,85f), (uParam0->f_8 * 0,85f), uParam0->f_8, 0, 1, 0) && !func_76(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x53C562FD2B9E3AB0();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xC80D31E4B587871C(uParam0->f_13, 5))
							{
								func_57(uParam0, sParam7, 0);
								unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_69(iVar0, uParam0))
									{
										if (!unk_0x8C1C362CA8299475(uVar13[iVar0]))
										{
											if (!unk_0x74C475EB8E73D398(uVar13[iVar0], ""))
											{
												func_67(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_66(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_69(iVar0, uParam0))
										{
											func_57(uParam0, uVar12[iVar0], 0);
											func_66(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 10);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
				{
					unk_0xE30CF11C0EE14316(&(uParam0->f_1[iVar0]));
					func_64(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_64("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_66(int iParam0, var uParam1)//Position - 0x3CDB
{
	switch (iParam0)
	{
		case 0:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 16);
			break;
	}
}

void func_67(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x3D23
{
	if (!bParam3)
	{
		if (!unk_0x8C1C362CA8299475(sParam1))
		{
			if (!unk_0x74C475EB8E73D398(sParam1, ""))
			{
				func_68(sParam1, sParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x53C562FD2B9E3AB0();
}

void func_68(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x3D5C
{
	iParam3 = iParam3;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0xA6D2B267C377D7B2(sParam1);
	unk_0x4D0B431E65A53BFC(iParam2, 1);
}

int func_69(int iParam0, var uParam1)//Position - 0x3D7B
{
	switch (iParam0)
	{
		case 0:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 14);
		
		case 1:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 15);
		
		case 2:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_70(int iParam0, float fParam1)//Position - 0x3DC4
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(iParam0, 0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(iParam0, 0);
		if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
		{
			if (unk_0x90D5DFB054818BA7(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_71(int iParam0, int iParam1)//Position - 0x3DFB
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (!unk_0x4759A34EB65CCA39(iParam0, func_51()))
		{
			iVar0 = unk_0x0191A52225EFA665(iParam0);
			if (unk_0xB8DE76287EDC4957(iParam1, 0))
			{
				if (unk_0x21B6FFFD04C9FF3A(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_72(int iParam0, int iParam1)//Position - 0x3E62
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(iParam1))
		{
			if (unk_0xB8DE76287EDC4957(iParam1, 0))
			{
				if (unk_0xAAA8D20859E2D36D(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_73(int iParam0, var uParam1)//Position - 0x3E97
{
	switch (iParam0)
	{
		case 0:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 19);
			break;
	}
}

void func_74(int iParam0, var uParam1)//Position - 0x3EDF
{
	switch (iParam0)
	{
		case 0:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 19);
			break;
	}
}

int func_75(int iParam0, var uParam1)//Position - 0x3F27
{
	switch (iParam0)
	{
		case 0:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 17);
		
		case 1:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 18);
		
		case 2:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_76(int iParam0)//Position - 0x3F70
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		iVar0 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
		if (unk_0xB8DE76287EDC4957(iVar0, 0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iParam0))
			{
				iVar1 = unk_0xC6757F745366DB47(iParam0);
				if (unk_0xB8DE76287EDC4957(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x21B6FFFD04C9FF3A(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_77(int iParam0, var uParam1)//Position - 0x3FFD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (unk_0x82FF3DFBC3965CC0(iParam0) == joaat("bus") || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x3AB6A1A9084FB0A4(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0x317536BCEA8FA6B0(iParam0, 0, 0);
			if (!unk_0x3AB6A1A9084FB0A4(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0x317536BCEA8FA6B0(iParam0, 1, 0);
			if (!unk_0x3AB6A1A9084FB0A4(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0x317536BCEA8FA6B0(iParam0, 2, 0);
			if (!unk_0x3AB6A1A9084FB0A4(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_78(var uParam0)//Position - 0x4160
{
	int iVar0;
	
	if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (func_63(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_79(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x418F
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam1))
	{
		if (unk_0x1ED974E122CB5C47(iParam1))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(iParam1, 0);
			if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
			{
				if (unk_0xB8DE76287EDC4957(iVar0, 0))
				{
					if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iVar0))
					{
						if (func_78(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (func_63(iVar0, uParam0, 0))
					{
						if (unk_0xB8DE76287EDC4957(iVar0, 0))
						{
							if (func_80(iVar0))
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
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_80(int iParam0)//Position - 0x426D
{
	float fVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		fVar0 = unk_0x90D5DFB054818BA7(iParam0);
		if (fVar0 > -0,5f && fVar0 < 0,5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_81(int iParam0, int iParam1)//Position - 0x42A5
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam1, 0))
		{
			iVar0 = unk_0xC6757F745366DB47(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_82()//Position - 0x42D5
{
	int iVar0;
	int iVar1;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		iVar0 = unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502());
		if (unk_0xB8DE76287EDC4957(iVar0, 0))
		{
			iVar1 = unk_0x317536BCEA8FA6B0(iVar0, 0, 0);
			if (!unk_0x3AB6A1A9084FB0A4(iVar1))
			{
				if (iVar1 != unk_0xFC1458A37D98B502())
				{
					if (unk_0x9761C10D57B68069(iVar1))
					{
						if (!unk_0xABF985A1AF8C953F(iVar1, unk_0xFC1458A37D98B502()))
						{
							unk_0x60C06BFD037BB7CF(iVar1, unk_0xFC1458A37D98B502(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_83(var uParam0)//Position - 0x4342
{
	int iVar0;
	
	if (!unk_0xC80D31E4B587871C(uParam0->f_13, 25))
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x6ADD12BF4D6D2587(uParam0->f_17[iVar0]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
				{
					unk_0xAE01EF4BC84AFE7C(uParam0->f_17[iVar0], 32, false);
					unk_0xAE01EF4BC84AFE7C(uParam0->f_17[iVar0], 305, true);
					unk_0xAE01EF4BC84AFE7C(uParam0->f_17[iVar0], 268, true);
					unk_0x07224EEE13A1B6AE(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 25);
	}
}

void func_84(var uParam0)//Position - 0x43E5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x6ADD12BF4D6D2587(uParam0->f_17[iVar0]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
			{
				if (unk_0x1ED974E122CB5C47(uParam0->f_17[iVar0]))
				{
					unk_0x4ACB9D202CFF8727(uParam0->f_17[iVar0], 0);
					unk_0xEB2D96E7D3F4906C(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
			{
				unk_0x4ACB9D202CFF8727(unk_0xFC1458A37D98B502(), 0);
				unk_0xEB2D96E7D3F4906C(unk_0xFC1458A37D98B502(), 0);
			}
		}
	}
}

int func_85()//Position - 0x447B
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_86()//Position - 0x4485
{
	vector3 vVar0;
	
	return vVar0;
}

int func_87(int iParam0)//Position - 0x4491
{
	vector3 vVar0;
	
	if (unk_0x191BE1BC8F26F3C1(Local_1295, 0))
	{
		return 0;
	}
	vVar0 = { unk_0x1F6BCB690FB61F9A(unk_0xB3328BA8976B416C(iParam0, 1), unk_0x3F90543934DCD7E6(Local_1295, vLocal_86), unk_0x3F90543934DCD7E6(Local_1295, vLocal_87), 0) };
	if (system::vdist2(vVar0, unk_0x3F90543934DCD7E6(Local_1295, vLocal_86)) <= system::vdist2(unk_0x3F90543934DCD7E6(Local_1295, vLocal_87), unk_0x3F90543934DCD7E6(Local_1295, vLocal_86)))
	{
		return 1;
	}
	return 0;
}

void func_88(bool bParam0, int iParam1)//Position - 0x4507
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

int func_89(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x45A1
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
	func_90(iParam0);
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

void func_90(int iParam0)//Position - 0x4730
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

bool func_91(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, int iParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, int iParam11, bool bParam12, int iParam13)//Position - 0x475C
{
	return func_42(iParam0, vParam1, func_92(), vParam2, vParam3, iParam5, 5, 0, 0, 0, iParam6, sParam7, func_85(), func_85(), func_85(), func_85(), sParam8, 0, bParam10, sParam9, 1, iParam11, bParam12, iParam13, func_85(), func_85(), func_85(), 1, fParam4);
}

Vector3 func_92()//Position - 0x47B1
{
	return 0f, 0f, 2f;
}

int func_93(int iParam0)//Position - 0x47BC
{
	return func_44(iParam0, 1, 0);
}

int func_94(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x47CC
{
	return func_42(iParam0, vParam1, vParam2, func_86(), func_86(), iParam3, 5, 0, 0, 0, iParam4, sParam5, func_85(), func_85(), func_85(), func_85(), sParam6, 0, bParam8, sParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

void func_95(int iParam0, bool bParam1)//Position - 0x481B
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

void func_96(int iParam0, bool bParam1, bool bParam2)//Position - 0x4865
{
	int iVar0;
	
	if (unk_0xC80D31E4B587871C(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_98(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xA6DECE14FC9A8C51(iParam0->f_1[iVar0]))
		{
			unk_0xE30CF11C0EE14316(&(iParam0->f_1[iVar0]));
		}
		func_97(iVar0, iParam0);
		func_74(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), iVar0);
			unk_0x0EE72DB1CD8A3B86(&(iParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0xA6DECE14FC9A8C51(*iParam0))
	{
		unk_0xE30CF11C0EE14316(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[iVar0]))
		{
			unk_0x4ACB9D202CFF8727(iParam0->f_17[iVar0], 1);
			unk_0xEB2D96E7D3F4906C(iParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0xAE01EF4BC84AFE7C(iParam0->f_17[iVar0], 32, true);
				unk_0xAE01EF4BC84AFE7C(iParam0->f_17[iVar0], 305, false);
			}
			unk_0xAE01EF4BC84AFE7C(iParam0->f_17[iVar0], 268, false);
			if (bParam1)
			{
				if (unk_0x4759A34EB65CCA39(iParam0->f_17[iVar0], func_51()) && iParam0->f_17[iVar0] != unk_0xFC1458A37D98B502())
				{
					unk_0x88235B448509228B(iParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xC80D31E4B587871C(iParam0->f_13, 29))
			{
				unk_0xD0A6028E561242DA(iParam0->f_17[iVar0], false, -1, 0);
			}
			iParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0x4ACB9D202CFF8727(unk_0xFC1458A37D98B502(), 1);
		unk_0xEB2D96E7D3F4906C(unk_0xFC1458A37D98B502(), 1);
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (bParam2)
		{
			unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 32, true);
		}
	}
	iParam0->f_21 = 0;
}

void func_97(int iParam0, var uParam1)//Position - 0x4A16
{
	switch (iParam0)
	{
		case 0:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 16);
			break;
	}
}

void func_98(var uParam0)//Position - 0x4A5E
{
	if (unk_0xA6DECE14FC9A8C51(uParam0->f_5))
	{
		unk_0xE30CF11C0EE14316(&(uParam0->f_5));
	}
}

void func_99(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x4A79
{
	func_100(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_100(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x4A96
{
	func_101(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_101(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x4AB4
{
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		func_11(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_102(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_102(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x4AEC
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
	if (func_12(iVar0))
	{
		func_126();
	}
	if (func_125(iParam1) && unk_0xDE3C98B57A41E603(iParam1))
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
			if (func_120(uParam0, bParam5, bParam7, 0))
			{
				func_116(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_106(iVar0))
				{
					if ((unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0)) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if ((iVar1 && !unk_0xF491DD47B88AA84E()) && uParam6)
						{
							if (!func_12(iVar0))
							{
								func_188(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
								{
									func_105(1);
								}
							}
						}
					}
				}
			}
			else if (func_106(iVar0))
			{
				if (unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0))
				{
					if (((unk_0x841ED61760A7D07B(iParam1) && iVar1) && !unk_0xF491DD47B88AA84E()) && uParam6)
					{
						if (!func_12(iVar0))
						{
							func_188(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
							{
								func_105(1);
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
				if (func_12(sParam3))
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
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(6) == 3 || unk_0x8E8C94609BA4BEA9(6) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(4) == 3 || unk_0x8E8C94609BA4BEA9(4) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(5) == 3 || unk_0x8E8C94609BA4BEA9(5) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(2) == 3 || unk_0x8E8C94609BA4BEA9(2) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x60584F41FBCE28CD() == 3 || unk_0x60584F41FBCE28CD() == 4)
				{
					func_11(uParam0, iVar0, 1);
				}
			}
			if (!func_120(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_104(uParam0))
				{
					func_103(uParam0);
				}
			}
		}
	}
	else
	{
		func_11(uParam0, iVar0, 0);
	}
}

void func_103(var uParam0)//Position - 0x4E55
{
	if (func_125(unk_0xFC1458A37D98B502()))
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
			unk_0x4AFBCBFDE748D4E0(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_104(var uParam0)//Position - 0x4EB9
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

int func_105(bool bParam0)//Position - 0x4EE4
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

int func_106(char* sParam0)//Position - 0x4F8E
{
	if (!func_107(1, 1, 0))
	{
		if ((!unk_0xAB019B170BF1309C(sParam0) && func_12(sParam0)) || func_12("CMN_HINT"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		return 0;
	}
	switch (Global_35861)
	{
		case 0:
		case 3:
			if (func_105(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_105(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_105(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_107(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5026
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
	if (func_17(0))
	{
		return 0;
	}
	if (func_115())
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
	if ((func_114() || func_113(Global_4456448.f_143970)) || func_112())
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if ((unk_0x841136DE070DD9F6(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), func_111(unk_0xFC1458A37D98B502(), 0)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 562680400 && func_111(unk_0xFC1458A37D98B502(), 0) != -1)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 1181327175 && func_111(unk_0xFC1458A37D98B502(), 0) != -1))
			{
				return 0;
			}
		}
	}
	if (func_108(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_108(int iParam0)//Position - 0x5251
{
	if (iParam0 != func_110())
	{
		if (func_109(iParam0, 1, 1))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x9EB17624F44A8DA4()) && func_109(iParam0, 1, 0))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

int func_109(int iParam0, bool bParam1, bool bParam2)//Position - 0x52B7
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

int func_110()//Position - 0x5301
{
	return -1;
}

int func_111(int iParam0, int iParam1)//Position - 0x530A
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

var func_112()//Position - 0x538F
{
	return Global_2447174.f_16;
}

bool func_113(int iParam0)//Position - 0x539D
{
	return iParam0 == 51;
}

var func_114()//Position - 0x53AA
{
	return Global_2447174.f_15;
}

bool func_115()//Position - 0x53B8
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

void func_116(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x53CD
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
		func_11(uParam0, 0, 0);
	}
	if (func_119(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x52C56492660097C7(iParam1))
		{
			iVar0 = unk_0x07F64790D10D1DB5(iParam1);
			if (!unk_0x88DDBE9908752BF0(iVar0, 0))
			{
				if (unk_0x1417A5CC924DE120(iVar0))
				{
					if (!func_117())
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
	unk_0x4AFBCBFDE748D4E0(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x53C562FD2B9E3AB0();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_117()//Position - 0x54D9
{
	return func_118(unk_0x9EB17624F44A8DA4());
}

int func_118(int iParam0)//Position - 0x54E9
{
	if (unk_0x82FF3DFBC3965CC0(unk_0x25D049AAC4603E65(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_119(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x5508
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_120(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x554F
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
					if (func_124(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_123(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_123(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_124(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_104(uParam0))
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
						if (!func_124(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_123(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_123(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_124(bParam1, bParam2, bParam3))
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
					if (!func_124(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_123(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_123(bParam1, bParam2, bParam3) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
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
				else if (!func_124(bParam1, bParam2, bParam3))
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
						if (func_122(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_121(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) || func_121(bParam1, bParam2, bParam3))
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
					else if (func_122(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_104(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_107(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_126();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_121(bool bParam0, bool bParam1, bool bParam2)//Position - 0x58BB
{
	if (!func_107(bParam0, bParam1, bParam2))
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

int func_122(bool bParam0, bool bParam1, bool bParam2)//Position - 0x590D
{
	if (!func_107(bParam0, bParam1, bParam2))
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

int func_123(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5956
{
	if (!func_107(bParam0, bParam1, bParam2))
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

int func_124(bool bParam0, bool bParam1, bool bParam2)//Position - 0x59B5
{
	if (!func_107(bParam0, bParam1, bParam2))
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

int func_125(int iParam0)//Position - 0x5A0B
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

void func_126()//Position - 0x5A66
{
	unk_0x872F1C1F8587CCC7(&Global_2324, 4);
}

int func_127(var uParam0)//Position - 0x5A76
{
	if (func_129(uParam0) && !func_128(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_128(var uParam0)//Position - 0x5A9B
{
	if (*uParam0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_129(var uParam0)//Position - 0x5AB2
{
	if (*uParam0 != 0 && (*uParam0 != 2 || uParam0->f_1 > 0))
	{
		return 1;
	}
	return 0;
}

void func_130()//Position - 0x5AE0
{
	int iVar0;
	
	if (iLocal_1282 == 0 || iLocal_1282 == 1)
	{
		if (((unk_0x191BE1BC8F26F3C1(Local_1295, 0) || (unk_0x6ADD12BF4D6D2587(Local_1298[0 /*2*/]) && !unk_0xDFFD5F8C8ABCB7EF(Local_1298[0 /*2*/]))) || (unk_0x6ADD12BF4D6D2587(Local_1298[1 /*2*/]) && !unk_0xDFFD5F8C8ABCB7EF(Local_1298[1 /*2*/]))) || (unk_0x6ADD12BF4D6D2587(Local_1298[2 /*2*/]) && !unk_0xDFFD5F8C8ABCB7EF(Local_1298[2 /*2*/])))
		{
			iLocal_1282 = 2;
		}
	}
	if (iLocal_1282 == 2)
	{
		if ((((!unk_0x6ADD12BF4D6D2587(Local_1295) || !unk_0xB8DE76287EDC4957(Local_1295, 0)) || (unk_0x6ADD12BF4D6D2587(Local_1298[0 /*2*/]) && !func_87(Local_1298[0 /*2*/]))) || (unk_0x6ADD12BF4D6D2587(Local_1298[1 /*2*/]) && !func_87(Local_1298[1 /*2*/]))) || (unk_0x6ADD12BF4D6D2587(Local_1298[2 /*2*/]) && !func_87(Local_1298[2 /*2*/])))
		{
			iLocal_1282 = 3;
		}
	}
	if (iLocal_1282 == 0)
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("towtruck") || unk_0x82FF3DFBC3965CC0(iVar0) == joaat("towtruck2"))
			{
				if (unk_0xB8DE76287EDC4957(iVar0, 0))
				{
					if (unk_0x03760B63FE11B718(iVar0, Local_1295))
					{
						iLocal_1296 = iVar0;
					}
				}
			}
		}
	}
	if (iLocal_1282 == 0)
	{
		if (!unk_0xB8DE76287EDC4957(Local_1295, 0))
		{
			iLocal_1282 = 1;
		}
	}
	if (iLocal_1282 == 1 && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_1295, 1))
	{
		func_9(6, 1);
	}
	else
	{
		func_9(6, 0);
	}
}

void func_131(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x5C88
{
	vector3 vVar0;
	var uVar1;
	
	if (unk_0x6ADD12BF4D6D2587(Global_95149.f_4))
	{
		if (unk_0xB8DE76287EDC4957(Global_95149.f_4, 0))
		{
			if (func_183(24) != Global_95149.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_180(unk_0xB3328BA8976B416C(Global_95149.f_4, 1), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_132(Global_95149.f_4, vParam0, fParam1, 24, 0);
			}
		}
	}
}

void func_132(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x5D03
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
		func_179(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_174(iParam0, &Var0);
		if (func_119(vParam1, 0f, 0f, 0f, 0))
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
		func_167(iParam3, &Var0, vParam1, fParam2, func_173(iParam0));
		func_133(iParam3, iParam0, 0);
	}
}

void func_133(int iParam0, int iParam1, int iParam2)//Position - 0x5E2C
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_163(&(Global_69678.f_555[0 /*21*/]), iParam0))
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
				Global_104555.f_32429.f_4801 = func_152();
			}
			if (iParam1 != Global_69678.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_183(iParam0);
					if ((unk_0x6ADD12BF4D6D2587(iVar0) && unk_0xB8DE76287EDC4957(iVar0, 0)) && iParam1 != iVar0)
					{
						func_134(iVar0, 145);
					}
				}
				Global_70584 = iParam1;
				Global_70585 = iParam0;
				Global_70586 = iParam2;
			}
		}
	}
}

void func_134(int iParam0, int iParam1)//Position - 0x5F49
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_135(iParam0))
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
	func_174(iParam0, &(Global_104555.f_32429.f_5510));
}

int func_135(int iParam0)//Position - 0x614B
{
	if ((((((((((!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0)) || func_150(iParam0, 0, 0)) || func_150(iParam0, 1, 0)) || func_150(iParam0, 2, 0)) || func_173(iParam0) != 145) || func_149(iParam0)) || func_148(iParam0)) || func_147(iParam0)) || func_146(iParam0)) || !func_136(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		if (func_148(iParam0))
		{
		}
		if (func_148(iParam0))
		{
		}
		if (func_150(iParam0, 0, 0))
		{
		}
		if (func_150(iParam0, 1, 0))
		{
		}
		if (func_150(iParam0, 2, 0))
		{
		}
		if (func_173(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_136(int iParam0)//Position - 0x6228
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_137(iParam0, 0))
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

int func_137(int iParam0, bool bParam1)//Position - 0x63D9
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
		if (!func_145())
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
		if ((((!func_144() && !func_143()) && !func_142()) && !func_141()) && !func_145())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x177281F5FA205A38() || unk_0xB9D80B12FE4456A5()) || unk_0xFD6215BABFD843F2())
		{
		}
		else if (!func_142())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_140(iParam0))
		{
			return 0;
		}
	}
	if (!func_138(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_138(int iParam0)//Position - 0x6567
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_139())
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

int func_139()//Position - 0x6633
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

int func_140(int iParam0)//Position - 0x664A
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

int func_141()//Position - 0x7ED2
{
	return 0;
}

int func_142()//Position - 0x7EDB
{
	return 1;
}

int func_143()//Position - 0x7EE4
{
	return 1;
}

int func_144()//Position - 0x7EED
{
	if (unk_0x21EA5D4DC72DE119(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_145()//Position - 0x7F06
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

int func_146(int iParam0)//Position - 0x7FC1
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	sVar1 = unk_0xF2D2D6860D636A58(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x74C475EB8E73D398(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_137(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0)//Position - 0x8008
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

int func_148(int iParam0)//Position - 0x8043
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

int func_149(int iParam0)//Position - 0x80BF
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

int func_150(int iParam0, int iParam1, bool bParam2)//Position - 0x81A7
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_151(iParam1, iVar0, &sVar1, &iVar2))
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

int func_151(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x8218
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

var func_152()//Position - 0x82F0
{
	var uVar0;
	
	func_162(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_161(&uVar0, unk_0x95327550F0F2BE7C());
	func_160(&uVar0, unk_0x674C9438180770FE());
	func_155(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_154(&uVar0, unk_0xEAF455949B108589());
	func_153(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_153(var uParam0, int iParam1)//Position - 0x8336
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

void func_154(var uParam0, int iParam1)//Position - 0x83BC
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_155(var uParam0, int iParam1)//Position - 0x83EF
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_159(*uParam0);
	iVar1 = func_157(*uParam0);
	if (iParam1 < 1 || iParam1 > func_156(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_156(int iParam0, int iParam1)//Position - 0x8440
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

var func_157(int iParam0)//Position - 0x84E2
{
	return (system::shift_right(iParam0, 26) & 31 * func_158(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_158(bool bParam0, int iParam1, int iParam2)//Position - 0x8507
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_159(var uParam0)//Position - 0x851E
{
	return uParam0 & 15;
}

void func_160(var uParam0, int iParam1)//Position - 0x852B
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_161(var uParam0, int iParam1)//Position - 0x8565
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_162(var uParam0, int iParam1)//Position - 0x85A0
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_163(var uParam0, int iParam1)//Position - 0x85DC
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
			uParam0->f_4 = func_164(0, 1);
			uParam0->f_12 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970,943f, 3801,684f, 31,1396f };
			uParam0->f_3 = 301,3964f;
			uParam0->f_4 = func_164(0, 1);
			uParam0->f_12 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22,6297f, -1439,137f, 29,6549f };
			uParam0->f_3 = 180,0808f;
			uParam0->f_4 = func_164(1, 1);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22,5229f, -1434,699f, 29,6552f };
			uParam0->f_3 = 141,6114f;
			uParam0->f_4 = func_164(1, 2);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 19);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10,9281f, 545,669f, 174,7951f };
			uParam0->f_3 = 61,392f;
			uParam0->f_4 = func_164(1, 1);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6,1093f, 544,9742f, 174,2835f };
			uParam0->f_3 = 92,1548f;
			uParam0->f_4 = func_164(1, 2);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 19);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981,416f, 3808,131f, 31,1384f };
			uParam0->f_3 = 117,2557f;
			uParam0->f_4 = func_164(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158,488f, -1529,367f, 3,8995f };
			uParam0->f_3 = 35,7505f;
			uParam0->f_4 = func_164(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148,2868f, -1270,569f, 28,2252f };
			uParam0->f_3 = 208,4685f;
			uParam0->f_4 = func_164(2, 1);
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
			if (func_145())
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
			if (func_145())
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
		if (!func_119(Global_104555.f_32429.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_119(Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xC80D31E4B587871C(uParam0->f_9, 20))
	{
		if (!func_119(Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_164(int iParam0, int iParam1)//Position - 0x9CD3
{
	struct<82> Var0;
	
	if (func_166(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_165(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_165(int iParam0, var uParam1, int iParam2)//Position - 0x9D15
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

bool func_166(int iParam0)//Position - 0x9F71
{
	return iParam0 < 3;
}

void func_167(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0x9F7D
{
	if (func_163(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 10))
		{
			func_172(iParam0);
			func_171(uParam1, &(Global_104555.f_32429.f_69[Global_69678.f_555[0 /*21*/].f_14 /*78*/]));
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
			func_168(iParam0, 1);
		}
	}
}

void func_168(int iParam0, bool bParam1)//Position - 0xA07C
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_170(iParam0, 0))
		{
			func_169(iParam0, 1, 0);
			func_169(iParam0, 2, 0);
			func_169(iParam0, 3, 0);
			func_169(iParam0, 4, 0);
			func_169(iParam0, 0, 1);
			Global_69678[iParam0] = 1;
		}
	}
	else
	{
		func_169(iParam0, 0, 0);
	}
}

void func_169(int iParam0, int iParam1, bool bParam2)//Position - 0xA0D9
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

bool func_170(int iParam0, int iParam1)//Position - 0xA114
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_104555.f_32429[iParam0], iParam1);
}

void func_171(var uParam0, var uParam1)//Position - 0xA137
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

void func_172(int iParam0)//Position - 0xA203
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_163(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_139[iParam0]))
		{
			unk_0xDD29FF4BAB8AFF9C(Global_69678.f_139[iParam0], true, 1);
			unk_0x5380482A432E314E(&(Global_69678.f_139[iParam0]));
			Global_69678.f_139[iParam0] = 0;
		}
		if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 13))
		{
			func_168(iParam0, 0);
		}
	}
}

int func_173(int iParam0)//Position - 0xA27D
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

void func_174(int iParam0, var uParam1)//Position - 0xA2E0
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		func_178(uParam1);
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
		if (uParam1->f_65 == -1 && !func_177(uParam1->f_66))
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
		func_176(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x7C7056D6F2A31BF6(iParam0, iVar0 + 1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_175(iVar0 + 1));
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

int func_175(int iParam0)//Position - 0xA58B
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

int func_176(int iParam0, var uParam1, var uParam2)//Position - 0xA63B
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

int func_177(int iParam0)//Position - 0xA715
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

void func_178(var uParam0)//Position - 0xA735
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

void func_179(int iParam0)//Position - 0xA7E5
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_172(iParam0);
	func_168(iParam0, 0);
}

int func_180(vector3 vParam0, int iParam1, var uParam2, var uParam3)//Position - 0xA80C
{
	int iVar0;
	
	iVar0 = func_181(vParam0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827,351f, 157,785f, 68,2143f };
			*uParam3 = 85,1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992,523f, 3813,916f, 31,1008f };
			*uParam3 = 122,1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184,258f, -1496,556f, 3,3895f };
			*uParam3 = 303,2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118,1067f, -1325,906f, 28,3706f };
			*uParam3 = 123,5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18,118f, -1455,126f, 29,5004f };
			*uParam3 = 273,2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1,5947f, 543,4017f, 173,4644f };
			*uParam3 = 310,7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_181(vector3 vParam0, int iParam1, int iParam2)//Position - 0xA922
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_88016[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_88016[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_182(iVar0) || iParam2 == 0)
				{
					fVar1 = unk_0xBE3C4023003180FC(vParam0, Global_88016[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_182(int iParam0)//Position - 0xA9B1
{
	return unk_0xC80D31E4B587871C(Global_104555.f_7199[iParam0], 0);
}

int func_183(int iParam0)//Position - 0xA9C9
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_69678.f_139[iParam0];
}

int func_184()//Position - 0xA9E5
{
	func_185();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_185()//Position - 0xA9FE
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_187(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_186(unk_0xFC1458A37D98B502());
			if (func_166(iVar0) && (!func_30(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_166(Global_104555.f_2353.f_539.f_4301))
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

int func_186(int iParam0)//Position - 0xAAFB
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_187(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_187(int iParam0)//Position - 0xAB38
{
	if (func_166(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_188(char* sParam0, int iParam1)//Position - 0xAB62
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

void func_189(char* sParam0, int iParam1, int iParam2)//Position - 0xAB79
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 1);
}

int func_190(int iParam0, bool bParam1, bool bParam2)//Position - 0xAB92
{
	return func_44(iParam0, !bParam1, bParam2);
}

int func_191(int iParam0)//Position - 0xABA5
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		switch (unk_0x29FCFA9A71E6FAD3(iParam0))
		{
			case 1:
				if (!unk_0x3AB6A1A9084FB0A4(unk_0x07F64790D10D1DB5(iParam0)))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0xB8DE76287EDC4957(unk_0x79A6CD762DCCABE4(iParam0), 0))
				{
					return 1;
				}
				break;
			
			default:
				if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_192(var uParam0)//Position - 0xAC0A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		switch ((*uParam0)[iVar0 /*8*/])
		{
			case 1:
				Stack.Push(uParam0[iVar0 /*8*/]);
				Call_Loc((uParam0[iVar0 /*8*/])->f_7);
				break;
			
			case 2:
				if ((unk_0x53C562FD2B9E3AB0() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6)
				{
					(*uParam0)[iVar0 /*8*/] = 1;
					(uParam0[iVar0 /*8*/])->f_6 = 0;
				}
				break;
		}
		iVar0++;
	}
}

void func_193()//Position - 0xAC7A
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!iLocal_1319)
		{
			func_196(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), -1);
			func_195(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), -1);
			iLocal_1319 = 1;
		}
	}
	else if (iLocal_1319)
	{
		func_195(0, -1);
		func_196(0, -1);
		iLocal_1319 = 0;
	}
	if (!iLocal_1317)
	{
		if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
		{
			if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_1295, 1))
			{
				unk_0xBF7C231271431D6C("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_01", 0f);
				iLocal_1317 = 1;
			}
			else if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_briefcase"), 0))
			{
				unk_0xBF7C231271431D6C("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_02", 0f);
				iLocal_1317 = 1;
			}
		}
	}
	if (iLocal_88 == 0)
	{
		switch (iLocal_1282)
		{
			case 0:
				if ((unk_0x6ADD12BF4D6D2587(vLocal_1285.x) && !unk_0x3AB6A1A9084FB0A4(vLocal_1285.x)) && func_127(&(Local_1079[0 /*8*/])))
				{
					if (Local_1079[0 /*8*/].f_1 == 1)
					{
						if (func_194(unk_0xFC1458A37D98B502(), Local_1295, 1) > 500f)
						{
							func_294(1);
						}
					}
					else if (Local_1079[0 /*8*/].f_1 == 4)
					{
						if (func_194(unk_0xFC1458A37D98B502(), Local_1295, 1) > 250f)
						{
							func_294(1);
						}
					}
					else if (func_194(unk_0xFC1458A37D98B502(), Local_1295, 1) > 250f)
					{
						func_294(2);
					}
				}
				else if (func_194(unk_0xFC1458A37D98B502(), Local_1295, 1) > 250f)
				{
					func_294(2);
				}
				break;
			
			case 1:
				if (func_194(unk_0xFC1458A37D98B502(), Local_1295, 1) > 250f)
				{
					func_294(2);
				}
				break;
			
			case 3:
			case 2:
				if (!unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_briefcase"), 0))
				{
					if (((((unk_0x6ADD12BF4D6D2587(Local_1298[0 /*2*/]) && func_194(unk_0xFC1458A37D98B502(), Local_1298[0 /*2*/], 1) > 250f) && unk_0x6ADD12BF4D6D2587(Local_1298[1 /*2*/])) && func_194(unk_0xFC1458A37D98B502(), Local_1298[1 /*2*/], 1) > 250f) && unk_0x6ADD12BF4D6D2587(Local_1298[2 /*2*/])) && func_194(unk_0xFC1458A37D98B502(), Local_1298[2 /*2*/], 1) > 250f)
					{
						func_294(3);
					}
				}
				break;
			}
	}
	if (unk_0x6ADD12BF4D6D2587(Local_1295))
	{
		if ((unk_0x0BA31FF7931F3DD3(Local_1295) && !unk_0xB8DE76287EDC4957(Local_1295, 0)) && !unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_briefcase"), 0))
		{
			func_294(4);
		}
	}
}

float func_194(int iParam0, int iParam1, bool bParam2)//Position - 0xAEE3
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

void func_195(int iParam0, int iParam1)//Position - 0xAF41
{
	Global_55914 = iParam0;
	Global_55915 = iParam1;
}

void func_196(int iParam0, int iParam1)//Position - 0xAF53
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

void func_197()//Position - 0xAFBE
{
	if (unk_0x6ADD12BF4D6D2587(vLocal_1285.x))
	{
		if (!unk_0x88DDBE9908752BF0(vLocal_1285.x, 0))
		{
			func_198(vLocal_1285.x, &(vLocal_1285.f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
		}
	}
	if (unk_0x6ADD12BF4D6D2587(Local_1295))
	{
		if (((!func_191(Local_1295) && unk_0x191BE1BC8F26F3C1(Local_1295, 0)) && iLocal_1314) && func_194(Local_1295, unk_0xFC1458A37D98B502(), 1) > 200f)
		{
			unk_0x5380482A432E314E(&Local_1295);
		}
	}
}

int func_198(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xB03E
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

void func_199()//Position - 0xB215
{
	vector3 vVar0;
	float fVar1;
	
	if (bLocal_91 == 1)
	{
		if (!unk_0x3E9CABD07B829173())
		{
			if (!unk_0x2D0EF1D268F33F25())
			{
				unk_0xAE83ED4C9081AE6F(1000);
			}
		}
		else
		{
			if (unk_0x6C97EEC6339FB45C())
			{
				unk_0x7042DDDE71665936(0);
				unk_0xA6C03E3E2533F8F3();
			}
			iLocal_88 = iLocal_92;
			unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
			unk_0x84CDD933AFA470D2();
			unk_0x3E80C2F7BC665259(1);
			func_8(1);
			if (unk_0x6C97EEC6339FB45C())
			{
				unk_0xA6C03E3E2533F8F3();
			}
			if (!func_268())
			{
				func_267(iLocal_88, &vVar0, &fVar1);
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), vVar0, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), fVar1);
				unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), true);
				func_265(&uLocal_94, vVar0, 50f, 0);
			}
			func_264(&uLocal_94);
			switch (iLocal_88)
			{
				case 0:
					func_263(&uLocal_94, iLocal_82);
					func_263(&uLocal_94, iLocal_83);
					func_263(&uLocal_94, iLocal_84);
					func_262(&uLocal_94, &Global_89840);
					break;
				
				case 1:
					func_263(&uLocal_94, joaat("burrito2"));
					break;
			}
			while (!func_261(&uLocal_94))
			{
				system::wait(0);
				func_197();
			}
			switch (iLocal_88)
			{
				case 0:
					while (!func_254(0))
					{
						system::wait(0);
					}
					if (unk_0x74C475EB8E73D398(&Global_89840, "jhp2a_main"))
					{
						while (!func_203(&iLocal_1293, 1395,851f, -1069,306f, 52,4779f, 118,1591f, 1))
						{
							system::wait(0);
							unk_0x9B8406983378711E(1395,851f, -1069,306f, 52,4779f, 20f, 0, 0, 0, 0, false, 0);
						}
					}
					else
					{
						while (!func_203(&iLocal_1293, 1256,913f, 556,8416f, 79,7013f, 134,0793f, 1))
						{
							system::wait(0);
							unk_0x9B8406983378711E(1256,913f, 556,8416f, 79,7013f, 20f, 0, 0, 0, 0, false, 0);
						}
					}
					unk_0x207466E78DA21033(iLocal_1293, 0);
					unk_0x7B3133EBCD34B431(iLocal_1293, 1, false);
					unk_0x7B3133EBCD34B431(iLocal_1293, 2, true);
					unk_0xACE486395AA1867D(iLocal_1293, 1084227584);
					unk_0xA15269351F50F113(iLocal_1293, true, true, 0);
					if (func_268())
					{
						func_200(iLocal_1293, -1, 1);
					}
					else
					{
						unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), false);
						unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iLocal_1293, -1);
					}
					unk_0xBB9A3C553EECB180(0f);
					unk_0x7C9705890EF6612E(0f, 1065353216);
					break;
				
				case 1:
					if (!func_7(87))
					{
						Local_1295 = unk_0xEA60F3B426BB095B(joaat("boxville3"), 693,725f, -1006,302f, 21,8355f, 359,884f, true, true, false);
						unk_0xCF5EB2CB1B30F02C(Local_1295, 0);
						unk_0xACE486395AA1867D(Local_1295, 1084227584);
					}
					if (func_268())
					{
						func_200(0, -1, 1);
					}
					else
					{
						unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), false);
					}
					unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 692,067f, -1004,812f, 21,9059f, 1, false, 0, 1);
					unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 359,5735f);
					unk_0xBB9A3C553EECB180(0f);
					unk_0x7C9705890EF6612E(0f, 1065353216);
					break;
			}
			if (unk_0x3E9CABD07B829173() || !unk_0x9BB64DDCD9C7B076())
			{
				unk_0x59C3AC31C7544A28(1000);
			}
			bLocal_91 = false;
		}
	}
}

void func_200(int iParam0, int iParam1, int iParam2)//Position - 0xB502
{
	if (func_202() && func_268())
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
		func_201(0);
	}
}

void func_201(int iParam0)//Position - 0xB5C6
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

int func_202()//Position - 0xB5EF
{
	if (Global_92833 == 10 || Global_92833 == 9)
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0xB613
{
	struct<67> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	if (func_202())
	{
		if (func_253())
		{
			func_171(&(Global_98118.f_2875.f_12), &Var0);
		}
	}
	else if (func_251())
	{
		func_171(&(Global_95149.f_2875.f_12), &Var0);
	}
	if (Var0.f_66 != 0)
	{
		if (!func_250(0, &Var0))
		{
			if (unk_0xC1514CFCEC68CA4A(Var0.f_66) || unk_0x125CDF69FA6EF560(Var0.f_66))
			{
				unk_0x6FF834D85E2DD4C6(Var0.f_66);
				if (unk_0x9A0B2ED5055D3F0B(Var0.f_66))
				{
					*iParam0 = unk_0xEA60F3B426BB095B(Var0.f_66, vParam1, fParam2, true, true, false);
					func_239(*iParam0, &Var0, 0, 1);
					unk_0x14776E43F90DD454(Var0.f_66);
					unk_0xACE486395AA1867D(*iParam0, 1084227584);
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		else
		{
			bParam3 = true;
		}
	}
	if (bParam3)
	{
		if (!unk_0x6ADD12BF4D6D2587(*iParam0))
		{
			if (func_204(iParam0, 0, vParam1, fParam2, 1, 0))
			{
				unk_0x2E4932E63763FE26(func_164(0, 0), true);
				return 1;
			}
		}
		return 0;
	}
	return 1;
}

int func_204(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, int iParam5)//Position - 0xB71E
{
	int iVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	
	if (func_166(iParam1))
	{
		Var2.f_11 = 12;
		Var2.f_31 = 49;
		Var2.f_81 = 2;
		func_165(iParam1, &Var2, iParam5);
		if (Var2 == 0)
		{
			return 1;
		}
		if (unk_0x6ADD12BF4D6D2587(*iParam0))
		{
			if (unk_0x82FF3DFBC3965CC0(*iParam0) != Var2)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_104555.f_2353.f_539.f_4296) && Global_104555.f_9055.f_99.f_58[131])
		{
			Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0x6FF834D85E2DD4C6(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/]);
			if (unk_0x9A0B2ED5055D3F0B(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xEA60F3B426BB095B(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/], vParam2, fParam3, false, false, false);
				unk_0xACE486395AA1867D(*iParam0, 1084227584);
				unk_0xD8D940C0BFD3E1EC(*iParam0, 0);
				unk_0x1F0117F8A8E4EC12(*iParam0, 0);
				unk_0x438D30A195B65156(*iParam0, true);
				unk_0xE01CE1EBCD7EE551(*iParam0, 1250, 0);
				unk_0xB38E13EF2EC6F0E9(*iParam0, 1250f);
				unk_0xC7C8A97B94385008(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x1E7A8525FB41AAFE(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_5, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0xB1AB9FD8B4959960(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_7, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0xF95D8D0BCEC9D59A(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					unk_0x7B3133EBCD34B431(*iParam0, iVar3 + 1, !Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_11[iVar3]);
					iVar3++;
				}
				if (Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0xC3DA759CFFFBDBF8(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_238(&uVar1, &iVar0))
				{
					unk_0xE58BC5B025017AE2(*iParam0, &uVar1);
					unk_0xFD5736F667C70A28(*iParam0, iVar0);
				}
				else
				{
					unk_0xE58BC5B025017AE2(*iParam0, &(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26 < unk_0xD559B6108233E114())
					{
						unk_0xFD5736F667C70A28(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0x94D4C393A9825924(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_84, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_85, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0x4D7D93C6E0C1063B(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0xDAA5C9C59AF4D4EB(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0x7F254E8C9247E923(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_93, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_94, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0x9D1E2B17CE94D0B9(*iParam0, 2, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 3, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 0, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 1, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0xAFB4F670EC043D01(*iParam0) > 1 && Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xC7BF27112709A906(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(*iParam0)))
					{
						if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(*iParam0)))
						{
							if (Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xC195F0A7CE73E810(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xC195F0A7CE73E810(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_234(iParam0, &(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_31), &(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0xC0E8D21B09ADD40A(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x82FF3DFBC3965CC0(*iParam0) == joaat("bodhi2"))
					{
						func_232(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x14776E43F90DD454(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/]);
				}
				func_231(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0x6FF834D85E2DD4C6(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/]);
			if (unk_0x9A0B2ED5055D3F0B(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xEA60F3B426BB095B(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/], vParam2, fParam3, false, false, false);
				unk_0xACE486395AA1867D(*iParam0, 1084227584);
				unk_0xD8D940C0BFD3E1EC(*iParam0, 0);
				unk_0x1F0117F8A8E4EC12(*iParam0, 0);
				unk_0x438D30A195B65156(*iParam0, true);
				unk_0xE01CE1EBCD7EE551(*iParam0, 1250, 0);
				unk_0xB38E13EF2EC6F0E9(*iParam0, 1250f);
				unk_0xC7C8A97B94385008(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x1E7A8525FB41AAFE(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_5, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0xB1AB9FD8B4959960(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_7, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0xF95D8D0BCEC9D59A(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					unk_0x7B3133EBCD34B431(*iParam0, iVar4 + 1, !Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_11[iVar4]);
					iVar4++;
				}
				if (Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0xC3DA759CFFFBDBF8(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_238(&uVar1, &iVar0))
				{
					unk_0xE58BC5B025017AE2(*iParam0, &uVar1);
					unk_0xFD5736F667C70A28(*iParam0, iVar0);
				}
				else
				{
					unk_0xE58BC5B025017AE2(*iParam0, &(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26 < unk_0xD559B6108233E114())
					{
						unk_0xFD5736F667C70A28(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0x94D4C393A9825924(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_84, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_85, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0x4D7D93C6E0C1063B(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0xDAA5C9C59AF4D4EB(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0x7F254E8C9247E923(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_93, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_94, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0x9D1E2B17CE94D0B9(*iParam0, 2, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 3, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 0, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 1, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0xAFB4F670EC043D01(*iParam0) > 1 && Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xC7BF27112709A906(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(*iParam0)))
					{
						if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(*iParam0)))
						{
							if (Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xC195F0A7CE73E810(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xC195F0A7CE73E810(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_234(iParam0, &(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_31), &(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0xC0E8D21B09ADD40A(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x82FF3DFBC3965CC0(*iParam0) == joaat("bodhi2"))
					{
						func_232(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x14776E43F90DD454(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/]);
				}
				func_231(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0x6FF834D85E2DD4C6(Var2);
			if (unk_0x9A0B2ED5055D3F0B(Var2))
			{
				bVar5 = true;
				*iParam0 = unk_0xEA60F3B426BB095B(Var2, vParam2, fParam3, true, true, false);
				unk_0xACE486395AA1867D(*iParam0, 1084227584);
				unk_0xD8D940C0BFD3E1EC(*iParam0, 0);
				unk_0x1F0117F8A8E4EC12(*iParam0, 0);
				unk_0x438D30A195B65156(*iParam0, true);
				StringCopy(&cVar6, unk_0xF2D2D6860D636A58(*iParam0), 16);
				unk_0xE01CE1EBCD7EE551(*iParam0, 1250, 0);
				unk_0xB38E13EF2EC6F0E9(*iParam0, 1250f);
				unk_0xC7C8A97B94385008(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x1E7A8525FB41AAFE(*iParam0, Var2.f_5, Var2.f_6);
				unk_0xB1AB9FD8B4959960(*iParam0, Var2.f_7, Var2.f_8);
				unk_0xF95D8D0BCEC9D59A(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					unk_0x7B3133EBCD34B431(*iParam0, iVar7 + 1, !Var2.f_11[iVar7]);
					iVar7++;
				}
				if (Var2.f_24)
				{
					unk_0xC3DA759CFFFBDBF8(*iParam0, Var2.f_24);
				}
				if (func_238(&uVar1, &iVar0))
				{
					unk_0xE58BC5B025017AE2(*iParam0, &uVar1);
					unk_0xFD5736F667C70A28(*iParam0, iVar0);
				}
				else
				{
					unk_0xE58BC5B025017AE2(*iParam0, &(Var2.f_27));
					if (Var2.f_26 >= 0 && Var2.f_26 < unk_0xD559B6108233E114())
					{
						unk_0xFD5736F667C70A28(*iParam0, Var2.f_26);
					}
				}
				unk_0x94D4C393A9825924(*iParam0, Var2.f_84, Var2.f_85, Var2.f_86);
				unk_0x4D7D93C6E0C1063B(*iParam0, Var2.f_88);
				unk_0xDAA5C9C59AF4D4EB(*iParam0, Var2.f_87);
				unk_0x7F254E8C9247E923(*iParam0, Var2.f_93, Var2.f_94, Var2.f_95);
				unk_0x9D1E2B17CE94D0B9(*iParam0, 2, unk_0xC80D31E4B587871C(Var2.f_92, 28));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 3, unk_0xC80D31E4B587871C(Var2.f_92, 29));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 0, unk_0xC80D31E4B587871C(Var2.f_92, 30));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 1, unk_0xC80D31E4B587871C(Var2.f_92, 31));
				if (unk_0xAFB4F670EC043D01(*iParam0) > 1 && Var2.f_89 >= 0)
				{
					unk_0xC7BF27112709A906(*iParam0, Var2.f_89);
				}
				if (Var2.f_90 > -1)
				{
					if (!unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(*iParam0)))
					{
						if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(*iParam0)))
						{
							if (Var2.f_90 == 6)
							{
								unk_0xC195F0A7CE73E810(*iParam0, Var2.f_90);
							}
						}
						else
						{
							unk_0xC195F0A7CE73E810(*iParam0, Var2.f_90);
						}
					}
				}
				func_234(iParam0, &(Var2.f_31), &(Var2.f_81));
				unk_0xC0E8D21B09ADD40A(*iParam0, Var2.f_96);
				if (iParam1 == 1)
				{
					if (unk_0x82FF3DFBC3965CC0(*iParam0) == joaat("bagger") && !Global_104555.f_9055.f_99.f_58[118])
					{
						unk_0xE58BC5B025017AE2(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0x82FF3DFBC3965CC0(*iParam0) == joaat("bodhi2"))
					{
						func_232(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_104555.f_2353.f_539.f_4296) && Global_104555.f_9055.f_99.f_58[131]) && unk_0x82FF3DFBC3965CC0(*iParam0) == joaat("tailgater"))
				{
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 6, 1, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 14, 7, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 11, 2, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 2, 3, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 7, 5, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 0, 0, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 3, 3, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 13, 1, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 4, 3, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 12, 2, false);
					unk_0x4705D420368126DF(*iParam0, 22, true);
					unk_0xC195F0A7CE73E810(*iParam0, 2);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 23, 11, false);
					unk_0xDAA5C9C59AF4D4EB(*iParam0, 2);
					Global_104555.f_2353.f_539.f_4296 = 1;
					func_205(iParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					unk_0x14776E43F90DD454(Var2);
				}
				if (bVar5)
				{
					func_231(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_205(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xC563
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_166(iParam0) && unk_0x6ADD12BF4D6D2587(*iParam1)) && unk_0xB8DE76287EDC4957(*iParam1, 0))
	{
		if (iParam2 > Global_104555.f_2353.f_539.f_2387)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_134(*iParam1, iParam0);
		}
		if (unk_0x96E226626970ABA3(*iParam1) != 0)
		{
			unk_0xA0A6811A3E4062D1(*iParam1, 0);
		}
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/] = unk_0x82FF3DFBC3965CC0(*iParam1);
		if (unk_0xFCCAE5538E490D17(*iParam1, &iVar1))
		{
			Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x82FF3DFBC3965CC0(iVar1);
		}
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0xBED420B2B3B64B88(*iParam1);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0xDE523AF6F7B269AB(*iParam1);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0x7C7056D6F2A31BF6(*iParam1, 1);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0x7C7056D6F2A31BF6(*iParam1, 2);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0x7C7056D6F2A31BF6(*iParam1, 3);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0x7C7056D6F2A31BF6(*iParam1, 4);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0x7C7056D6F2A31BF6(*iParam1, 5);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0x7C7056D6F2A31BF6(*iParam1, 6);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0x7C7056D6F2A31BF6(*iParam1, 7);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0x7C7056D6F2A31BF6(*iParam1, 8);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0x7C7056D6F2A31BF6(*iParam1, 9);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0x7C7056D6F2A31BF6(*iParam1, 10);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0x7C7056D6F2A31BF6(*iParam1, 11);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0x7C7056D6F2A31BF6(*iParam1, 12);
		if (unk_0x965BEFCC45024E92(*iParam1, 0))
		{
			iVar2 = unk_0xBFAC036AADDA5F9F(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0x832CFDD4BD296987();
		StringCopy(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0xF2D2D6860D636A58(*iParam1), 16);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0xBB95820E68A4EB0D(*iParam1);
		unk_0xAEC96F2E5A91C606(*iParam1, &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0x0DA0B030029E4E6E(*iParam1, &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0x7869E6E4E193E666(*iParam1, &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0x84EE59E8804FCC8C(*iParam1);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0x55F371CF3DB9BFA1(*iParam1);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0x7E3C3BFAB9ADD960(*iParam1);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0x0260F35A831D6738(*iParam1);
		unk_0x063C5BF33FA1D85E(*iParam1, &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0x378B727FB0126407(*iParam1, 2))
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0x378B727FB0126407(*iParam1, 3))
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0x378B727FB0126407(*iParam1, 0))
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0x378B727FB0126407(*iParam1, 1))
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_104555.f_2353.f_539.f_4297[iParam0] = 10;
		if (unk_0x027824FEED96D97E(*iParam1) >= 0 && func_209(*iParam1, 0, &uVar0))
		{
			func_176(iParam1, &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_104555.f_20088[iParam0 /*43*/].f_40 = 1;
				Global_104555.f_20088[iParam0 /*43*/] = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/];
				Global_104555.f_20088[iParam0 /*43*/].f_3 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_104555.f_20088[iParam0 /*43*/].f_4 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_104555.f_20088[iParam0 /*43*/].f_5 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_104555.f_20088[iParam0 /*43*/].f_6 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_104555.f_20088[iParam0 /*43*/].f_10 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_104555.f_20088[iParam0 /*43*/].f_16 = !Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_104555.f_20088[iParam0 /*43*/].f_19 = { Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_104555.f_20088[iParam0 /*43*/].f_23 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_104555.f_20088[iParam0 /*43*/].f_7 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_104555.f_20088[iParam0 /*43*/].f_8 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_104555.f_20088[iParam0 /*43*/].f_9 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_104555.f_20088[iParam0 /*43*/].f_11 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_104555.f_20088[iParam0 /*43*/].f_12 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_104555.f_20088[iParam0 /*43*/].f_13 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_104555.f_20088[iParam0 /*43*/].f_14 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_104555.f_20088[iParam0 /*43*/].f_15 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_104555.f_20088[iParam0 /*43*/].f_18 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_104555.f_20088[iParam0 /*43*/].f_17 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_104555.f_20088[iParam0 /*43*/].f_24 = unk_0x2E9AFFEE33324CC8(*iParam1, 11) + 1;
				Global_104555.f_20088[iParam0 /*43*/].f_25 = unk_0x2E9AFFEE33324CC8(*iParam1, 12) + 1;
				Global_104555.f_20088[iParam0 /*43*/].f_26 = unk_0x2E9AFFEE33324CC8(*iParam1, 4) + 1;
				Global_104555.f_20088[iParam0 /*43*/].f_27 = unk_0x2E9AFFEE33324CC8(*iParam1, 23) + 1;
				Global_104555.f_20088[iParam0 /*43*/].f_28 = unk_0x2E9AFFEE33324CC8(*iParam1, 14) + 1;
				Global_104555.f_20088[iParam0 /*43*/].f_29 = unk_0x2E9AFFEE33324CC8(*iParam1, 16) + 1;
				Global_104555.f_20088[iParam0 /*43*/].f_30 = unk_0x2E9AFFEE33324CC8(*iParam1, 15) + 1;
				Global_104555.f_20088[iParam0 /*43*/].f_32 = unk_0xBDFD82385482D433(*iParam1);
				Global_104555.f_20088[iParam0 /*43*/].f_33[0] = unk_0xDAAE9CE720D2EF80(*iParam1);
				Global_104555.f_20088[iParam0 /*43*/].f_33[1] = unk_0xF4BBBDC1B6F914DB(*iParam1, 14, 0);
				Global_104555.f_20088[iParam0 /*43*/].f_33[2] = unk_0xF4BBBDC1B6F914DB(*iParam1, 14, 1);
				Global_104555.f_20088[iParam0 /*43*/].f_33[3] = unk_0xF4BBBDC1B6F914DB(*iParam1, 14, 2);
				Global_104555.f_20088[iParam0 /*43*/].f_33[4] = unk_0xF4BBBDC1B6F914DB(*iParam1, 14, 3);
				Global_104555.f_20088[iParam0 /*43*/].f_39 = unk_0x6F73320EB7AD4866(*iParam1);
				Global_104555.f_20088[iParam0 /*43*/].f_31 = func_208(*iParam1);
				Global_104555.f_20088[iParam0 /*43*/].f_33[0] = unk_0x2F6FCAD69B2E4C34(*iParam1);
				unk_0xC3F97DDED7F36247(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_206(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_104555.f_20088[iParam0 /*43*/].f_1));
				unk_0x6E097DBC9C867CBD(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_206(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_104555.f_20088[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_206(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)//Position - 0xD177
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (func_207(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
	{
		if ((iParam0 == iVar3 && (!bParam3 || iParam1 == iVar4)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_207(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xD1EA
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

float func_208(int iParam0)//Position - 0xE6DC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0)) && unk_0x027824FEED96D97E(iParam0) >= 0)
	{
		if (unk_0x6F73320EB7AD4866(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0x6F73320EB7AD4866(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0x6F73320EB7AD4866(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0x6F73320EB7AD4866(iParam0) == 0)
		{
			if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (system::to_float(iVar5) / system::to_float(iVar4));
	return fVar6;
}

int func_209(int iParam0, bool bParam1, var uParam2)//Position - 0xE78C
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xC8A14E3C7BE76201(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	if ((!func_229(iVar0, bParam1, uParam2) && !func_228(unk_0x9EB17624F44A8DA4())) && !func_213(iParam0))
	{
		return 0;
	}
	if (func_228(unk_0x9EB17624F44A8DA4()))
	{
		if (func_212(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_210(unk_0x9EB17624F44A8DA4()) && (unk_0xF9DDB1C0875FD9E0(iVar0) || unk_0x849A8CFD71854E02(iVar0)))
	{
		bVar1 = true;
	}
	if ((((((unk_0x8F1CCD9A61E026D8(iParam0) && unk_0x82FF3DFBC3965CC0(iParam0) != -32236122) && unk_0x82FF3DFBC3965CC0(iParam0) != 177270108) && unk_0x82FF3DFBC3965CC0(iParam0) != 387748548) && unk_0x82FF3DFBC3965CC0(iParam0) != 1502869817) && unk_0x82FF3DFBC3965CC0(iParam0) != -1881846085) && !bVar1)
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x3A711520F83BAE98())
	{
		if ((func_147(iParam0) && unk_0x82FF3DFBC3965CC0(iParam0) != joaat("sentinel2")) && unk_0x82FF3DFBC3965CC0(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_210(int iParam0)//Position - 0xE8EC
{
	if (iParam0 != func_110())
	{
		if (func_109(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_211(Global_2422736[iParam0 /*420*/].f_324.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_211(int iParam0)//Position - 0xE932
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

int func_212(int iParam0)//Position - 0xEBF6
{
	switch (iParam0)
	{
		case -2118308144:
		case 1489874736:
		case -1693015116:
		case -692292317:
		case -1435527158:
			return 1;
			break;
	}
	return 0;
}

int func_213(int iParam0)//Position - 0xEC2B
{
	if (func_227(unk_0x9EB17624F44A8DA4()) || func_226(unk_0x9EB17624F44A8DA4()))
	{
		if (func_214(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_214(int iParam0)//Position - 0xEC5A
{
	if ((!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0)) || unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		return 0;
	}
	if (func_217(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xB80A4DA4C06A76F1(iParam0, "Player_Vehicle"))
	{
		if (unk_0x2786E663D1846FFC(iParam0, "Player_Vehicle") == unk_0xDFD4F88AAFDE2371(unk_0x9EB17624F44A8DA4()))
		{
			if (func_215(iParam0))
			{
				return 1;
			}
			switch (unk_0x82FF3DFBC3965CC0(iParam0))
			{
				case 159274291:
				case 433954513:
				case 1483171323:
				case 886810209:
				case 1561920505:
				case -410205223:
				case 903794909:
				case -391595372:
				case 1254014755:
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_215(int iParam0)//Position - 0xED11
{
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	if (func_216(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0)//Position - 0xED47
{
	switch (iParam0)
	{
		case 562680400:
		case 1897744184:
		case -32236122:
		case 884483972:
		case -1210451983:
		case 1356124575:
		case -1924433270:
		case -1242608589:
		case -212993243:
			return 1;
			break;
	}
	return 0;
}

int func_217(int iParam0, bool bParam1)//Position - 0xED94
{
	switch (unk_0x82FF3DFBC3965CC0(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_219(unk_0x82FF3DFBC3965CC0(iParam0), 0))
			{
				if (Global_2512808.f_289 == iParam0)
				{
					return 1;
				}
				else if (func_218(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_218(int iParam0)//Position - 0xEDEF
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2436181.f_611[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_219(int iParam0, int iParam1)//Position - 0xEE29
{
	if (iParam1 == 0)
	{
		if (func_225(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_224();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_13545)
			{
				return func_223();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_13546)
			{
				return func_223();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_13544)
			{
				return func_223();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_13547)
			{
				return func_223();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_13549)
			{
				return func_223();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_222();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_17990)
			{
				return func_221();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_17992)
			{
				return func_221();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_17996)
			{
				return func_221();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_17993)
			{
				return func_221();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_18000)
			{
				return func_221();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_17998)
			{
				return func_221();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_18003)
			{
				return func_221();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_19922)
			{
				return func_220();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_19923)
			{
				return func_220();
			}
			break;
	}
	return 0;
}

bool func_220()//Position - 0xF009
{
	return unk_0x21EA5D4DC72DE119(2067165443);
}

bool func_221()//Position - 0xF01A
{
	return unk_0x21EA5D4DC72DE119(-957277403);
}

bool func_222()//Position - 0xF02B
{
	return unk_0x21EA5D4DC72DE119(210122941);
}

bool func_223()//Position - 0xF03C
{
	return unk_0x21EA5D4DC72DE119(-1894522408);
}

bool func_224()//Position - 0xF04D
{
	return unk_0x21EA5D4DC72DE119(1630677557);
}

int func_225(int iParam0, int iParam1)//Position - 0xF05E
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

int func_226(int iParam0)//Position - 0xF2D1
{
	if (iParam0 != func_110())
	{
		if (func_109(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_110())
			{
				return func_211(Global_2422736[iParam0 /*420*/].f_324.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_227(int iParam0)//Position - 0xF330
{
	if (iParam0 != func_110())
	{
		if (func_109(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_110())
			{
				return func_211(Global_2422736[iParam0 /*420*/].f_324.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_228(int iParam0)//Position - 0xF390
{
	if (iParam0 != func_110())
	{
		if (func_109(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_211(Global_2422736[iParam0 /*420*/].f_324.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_229(int iParam0, bool bParam1, var uParam2)//Position - 0xF3D7
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == 1938952078) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_210(unk_0x9EB17624F44A8DA4()) && (unk_0xF9DDB1C0875FD9E0(iParam0) || unk_0x849A8CFD71854E02(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((!unk_0xC1514CFCEC68CA4A(iParam0) && !unk_0x125CDF69FA6EF560(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != 1502869817) && iParam0 != -1881846085) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x3A711520F83BAE98())
	{
		if (func_230(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x3A711520F83BAE98())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_230(int iParam0)//Position - 0xF7EF
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

void func_231(int iParam0, int iParam1)//Position - 0xF818
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

void func_232(int iParam0)//Position - 0xF89A
{
	if (!func_233(*iParam0))
	{
		unk_0x7B3133EBCD34B431(*iParam0, 5, !Global_104555.f_9055.f_99.f_58[119]);
	}
}

bool func_233(int iParam0)//Position - 0xF8C5
{
	return unk_0x7C7056D6F2A31BF6(iParam0, 5);
}

int func_234(int iParam0, var uParam1, var uParam2)//Position - 0xF8D4
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
	if (func_225(unk_0x82FF3DFBC3965CC0(*iParam0), 1) && unk_0xF928889F6E5C7677(*iParam0, 24) != func_237(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xA9EF3F93CBFFF6D0(*iParam0, 24, func_237(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_236(iParam0);
	if (func_235(*iParam0))
	{
		unk_0x9980244E5DAEFED4(*iParam0, true);
		unk_0x438D30A195B65156(*iParam0, true);
	}
	return 1;
}

int func_235(int iParam0)//Position - 0xFA52
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

void func_236(var uParam0)//Position - 0xFB2E
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

int func_237(int iParam0, int iParam1)//Position - 0xFB6E
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

int func_238(var uParam0, int iParam1)//Position - 0xFC53
{
	if (unk_0x3A711520F83BAE98())
	{
	}
	else if (Global_104555.f_20088.f_261)
	{
		*uParam0 = { Global_104555.f_20088.f_267 };
		*iParam1 = Global_104555.f_20088.f_271;
		return 1;
	}
	return 0;
}

void func_239(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0xFC94
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (!func_243(iParam0))
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
			if (unk_0xC80D31E4B587871C(uParam1->f_77, func_175(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_175(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xC80D31E4B587871C(uParam1->f_77, func_175(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_175(iVar1 + 1));
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
		if (((unk_0xC80D31E4B587871C(uParam1->f_77, 15) || func_242(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_241())
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
		if (uParam1->f_65 == -1 && !func_177(uParam1->f_66))
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
						func_240(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_240(iParam0, uParam1->f_69);
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
			func_234(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xF9DDB1C0875FD9E0(uParam1->f_66) && !unk_0x428C7026AD2721BA(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xC80D31E4B587871C(uParam1->f_77, func_175(iVar2 + 1)))
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

void func_240(int iParam0, int iParam1)//Position - 0x101E7
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

bool func_241()//Position - 0x1024C
{
	return unk_0x21EA5D4DC72DE119(-1691188696);
}

int func_242(int iParam0)//Position - 0x1025D
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

int func_243(int iParam0)//Position - 0x102A8
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!func_249(unk_0x9EB17624F44A8DA4(), -1))
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
	if (func_245(unk_0x9EB17624F44A8DA4()) == 3)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (func_244(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_244(int iParam0)//Position - 0x1032F
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

int func_245(int iParam0)//Position - 0x1035E
{
	if (func_248(iParam0) == 233)
	{
		return func_246(iParam0);
	}
	return -1;
}

int func_246(int iParam0)//Position - 0x1037B
{
	if (func_247(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_176;
	}
	return -1;
}

int func_247(int iParam0, int iParam1)//Position - 0x1039E
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_248(int iParam0)//Position - 0x103D9
{
	if (func_247(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

int func_249(int iParam0, int iParam1)//Position - 0x103FC
{
	int iVar0;
	
	if (func_109(iParam0, 1, 1))
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

int func_250(int iParam0, var uParam1)//Position - 0x10449
{
	struct<82> Var0;
	
	if (!func_166(iParam0))
	{
		return 0;
	}
	if (Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam0 /*98*/] != 0)
	{
		if (Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam0 /*98*/] == uParam1->f_66 && unk_0x8B948C59217A295D(&(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam0 /*98*/].f_27)) == unk_0x8B948C59217A295D(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	if (Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam0 /*98*/] != 0)
	{
		if (Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam0 /*98*/] == uParam1->f_66 && unk_0x8B948C59217A295D(&(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam0 /*98*/].f_27)) == unk_0x8B948C59217A295D(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	Var0.f_11 = 12;
	Var0.f_31 = 49;
	Var0.f_81 = 2;
	func_165(iParam0, &Var0, 1);
	if (Var0 != 0)
	{
		if (Var0 == uParam1->f_66 && unk_0x8B948C59217A295D(&(Var0.f_27)) == unk_0x8B948C59217A295D(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	func_165(iParam0, &Var0, 2);
	if (Var0 != 0)
	{
		if (Var0 == uParam1->f_66 && unk_0x8B948C59217A295D(&(Var0.f_27)) == unk_0x8B948C59217A295D(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_251()//Position - 0x105A3
{
	return func_252(&(Global_95149.f_2875));
}

int func_252(var uParam0)//Position - 0x105B6
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_137(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_52(*uParam0, 1694,62f, 3276,27f, 41,31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_253()//Position - 0x10615
{
	return func_252(&(Global_98118.f_2875));
}

int func_254(bool bParam0)//Position - 0x10628
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = false;
	func_262(&uLocal_94, &Global_89840);
	func_263(&uLocal_94, joaat("s_m_m_armoured_01"));
	func_263(&uLocal_94, iLocal_84);
	func_263(&uLocal_94, iLocal_85);
	if ((unk_0x9A0B2ED5055D3F0B(joaat("s_m_m_armoured_01")) && unk_0x9A0B2ED5055D3F0B(iLocal_84)) && unk_0x9A0B2ED5055D3F0B(iLocal_85))
	{
		if (bParam0)
		{
			if (!unk_0x6ADD12BF4D6D2587(Local_1295))
			{
				if (unk_0x6ADD12BF4D6D2587(Global_89475[0]))
				{
					unk_0xDD29FF4BAB8AFF9C(Global_89475[0], true, 1);
					Local_1295 = Global_89475[0];
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!unk_0x6ADD12BF4D6D2587(vLocal_1285.x))
			{
				if (unk_0x6ADD12BF4D6D2587(Global_89475.f_9[0]))
				{
					unk_0xDD29FF4BAB8AFF9C(Global_89475.f_9[0], true, 1);
					vLocal_1285.x = Global_89475.f_9[0];
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		else
		{
			func_263(&uLocal_94, iLocal_83);
			if (unk_0x9A0B2ED5055D3F0B(iLocal_83) && unk_0xC316B5E3E7ACF515(&Global_89840))
			{
				if (unk_0x74C475EB8E73D398(&Global_89840, "jhp2a_main"))
				{
					unk_0x6845A83711D9CF44(&Global_89840, 23, &vVar1);
					unk_0x9B8406983378711E(vVar1, 20f, 0, 0, 0, 0, false, 0);
					Local_1295 = unk_0xEA60F3B426BB095B(iLocal_83, vVar1, 119,4988f, true, true, false);
					vLocal_1285.x = unk_0x00D1A9572426E8DD(Local_1295, 26, iLocal_82, -1, 1, true);
					unk_0xACE486395AA1867D(Local_1295, 1084227584);
					unk_0x84EF7D14703E1230(vLocal_1285.x, Local_1295, &Global_89840, 786475, 23, 16, -1, 12f, 0, 1073741824);
				}
				else
				{
					unk_0x6845A83711D9CF44(&Global_89840, 29, &vVar1);
					unk_0x9B8406983378711E(vVar1, 20f, 0, 0, 0, 0, false, 0);
					Local_1295 = unk_0xEA60F3B426BB095B(iLocal_83, vVar1, 134,0011f, true, true, false);
					vLocal_1285.x = unk_0x00D1A9572426E8DD(Local_1295, 26, iLocal_82, -1, 1, true);
					unk_0xACE486395AA1867D(Local_1295, 1084227584);
					unk_0x84EF7D14703E1230(vLocal_1285.x, Local_1295, &Global_89840, 786475, 29, 16, -1, 12f, 0, 1073741824);
				}
			}
		}
		if (unk_0x6ADD12BF4D6D2587(Local_1295))
		{
			func_260(Local_1295, 0);
			if (unk_0xB8DE76287EDC4957(Local_1295, 0))
			{
				unk_0x438D30A195B65156(Local_1295, true);
				unk_0xCFF0CD14B439821D(Local_1295, true, 1);
				unk_0x36A50B92F547633A(Local_1295, true);
				unk_0xFA87254221D30EB8(Local_1295, 1);
			}
		}
		if (unk_0x6ADD12BF4D6D2587(vLocal_1285.x))
		{
			if (!unk_0x3AB6A1A9084FB0A4(vLocal_1285.x))
			{
				unk_0x771A86309E0CA47B(vLocal_1285.x, true);
				unk_0xCE93FCB8A8D8DF0B(vLocal_1285.x, iLocal_1284);
				unk_0xBB3CC641B6AED5E5(vLocal_1285.x, 5);
				unk_0x5C5D33A1B2711D21(vLocal_1285.x, false);
				unk_0xAE6EBBBBD8B9FB30(vLocal_1285.x, 1, false);
				unk_0x9E058151726E58DE(vLocal_1285.x, joaat("weapon_pistol"), 15, false, true);
				func_259(&uLocal_1105, 3, vLocal_1285.x, "JHP2A_Driver", 0, 1);
				func_258(&(Local_1079[0 /*8*/]), 0, 0, 1);
			}
		}
		if (unk_0x6ADD12BF4D6D2587(Local_1295) && unk_0x6ADD12BF4D6D2587(vLocal_1285.x))
		{
			func_257();
			func_258(&(Local_1079[1 /*8*/]), 0, 0, 1);
			func_255(&uLocal_94, joaat("boxville3"));
			func_255(&uLocal_94, joaat("s_m_m_armoured_01"));
			func_255(&uLocal_94, iLocal_84);
			func_255(&uLocal_94, iLocal_85);
			return 1;
		}
		else if (bVar0)
		{
		}
	}
	return 0;
}

void func_255(var uParam0, int iParam1)//Position - 0x1091F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				if ((uParam0[iVar0 /*5*/])->f_1)
				{
					unk_0x14776E43F90DD454(iParam1);
					func_256(uParam0[iVar0 /*5*/]);
					return;
				}
				else
				{
					(uParam0[iVar0 /*5*/])->f_2 = 1;
					uParam0->f_982 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_256(var uParam0)//Position - 0x10984
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_257()//Position - 0x1099F
{
	vector3 vVar0;
	
	if (unk_0x6ADD12BF4D6D2587(Local_1295))
	{
		if (!unk_0x191BE1BC8F26F3C1(Local_1295, 0) && !unk_0x6ADD12BF4D6D2587(iLocal_1299))
		{
			iLocal_1299 = unk_0x5E35CF35E65D69B9(iLocal_85, unk_0xB3328BA8976B416C(Local_1295, 1), true, true, false);
			unk_0xD402897AA0C356FA(iLocal_1299, 0,1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
			unk_0xB3045CBF50BD287E(iLocal_1299, Local_1295, -1, -1, unk_0xA05DDB968587006B(Local_1295, unk_0xDCD8BDD2E10C660E(Local_1295, 5)) + Vector(0f, 0f, 0,02f), 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 1, 2);
			unk_0xB3A8974D2C811672(iLocal_1299, false, 0);
		}
		if (!unk_0x6ADD12BF4D6D2587(Local_1298[0 /*2*/]))
		{
			if (unk_0x191BE1BC8F26F3C1(Local_1295, 0))
			{
				vVar0 = { unk_0x3F90543934DCD7E6(Local_1295, unk_0x5B811202FCBE9E9D(-2,5f, 2,5f), -5f, 0f) };
				unk_0x7367FB97975F1E29(vVar0, &(vVar0.f_2), 0, 0);
				Local_1298[0 /*2*/] = unk_0x5E35CF35E65D69B9(iLocal_84, vVar0, true, true, false);
			}
			else
			{
				Local_1298[0 /*2*/] = unk_0x5E35CF35E65D69B9(iLocal_84, unk_0xB3328BA8976B416C(Local_1295, 1), true, true, false);
				unk_0xD402897AA0C356FA(Local_1298[0 /*2*/], 3,5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0xA9D382E7BA095148(Local_1298[0 /*2*/], Local_1295, -1, -0,2f, -2,675f, 0,05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				unk_0xFBA991D3A851E195(Local_1298[0 /*2*/], true);
			}
		}
		if (!unk_0x6ADD12BF4D6D2587(Local_1298[1 /*2*/]))
		{
			if (unk_0x191BE1BC8F26F3C1(Local_1295, 0))
			{
				vVar0 = { unk_0x3F90543934DCD7E6(Local_1295, unk_0x5B811202FCBE9E9D(-2,5f, 2,5f), -5f, 0f) };
				unk_0x7367FB97975F1E29(vVar0, &(vVar0.f_2), 0, 0);
				Local_1298[1 /*2*/] = unk_0x5E35CF35E65D69B9(iLocal_84, vVar0, true, true, false);
			}
			else
			{
				Local_1298[1 /*2*/] = unk_0x5E35CF35E65D69B9(iLocal_84, unk_0xB3328BA8976B416C(Local_1295, 1), true, true, false);
				unk_0xD402897AA0C356FA(Local_1298[1 /*2*/], 3,5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0xA9D382E7BA095148(Local_1298[1 /*2*/], Local_1295, -1, 0f, -2,675f, 0,05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				unk_0xFBA991D3A851E195(Local_1298[1 /*2*/], true);
			}
		}
		if (!unk_0x6ADD12BF4D6D2587(Local_1298[2 /*2*/]))
		{
			if (unk_0x191BE1BC8F26F3C1(Local_1295, 0))
			{
				vVar0 = { unk_0x3F90543934DCD7E6(Local_1295, unk_0x5B811202FCBE9E9D(-2,5f, 2,5f), -5f, 0f) };
				unk_0x7367FB97975F1E29(vVar0, &(vVar0.f_2), 0, 0);
				Local_1298[2 /*2*/] = unk_0x5E35CF35E65D69B9(iLocal_84, vVar0, true, true, false);
			}
			else
			{
				Local_1298[2 /*2*/] = unk_0x5E35CF35E65D69B9(iLocal_84, unk_0xB3328BA8976B416C(Local_1295, 1), true, true, false);
				unk_0xD402897AA0C356FA(Local_1298[2 /*2*/], 3,5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0xA9D382E7BA095148(Local_1298[2 /*2*/], Local_1295, -1, 0,2f, -2,675f, 0,05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				unk_0xFBA991D3A851E195(Local_1298[2 /*2*/], true);
			}
		}
	}
}

int func_258(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x10C7A
{
	if (*uParam0 == -1)
	{
		return 0;
	}
	else if (*uParam0 == 1)
	{
		return 1;
	}
	else if (*uParam0 == 0 || ((*uParam0 == 2 && uParam0->f_1 == 1) && iParam2))
	{
		if (iParam1 > 0)
		{
			*uParam0 = 2;
			uParam0->f_6 = iParam1;
		}
		else
		{
			*uParam0 = 1;
			uParam0->f_6 = 0;
		}
		uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
		uParam0->f_5 = unk_0x53C562FD2B9E3AB0();
		uParam0->f_1 = iParam3;
		return 1;
	}
	return 0;
}

void func_259(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x10CFA
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

void func_260(int iParam0, int iParam1)//Position - 0x10D95
{
	Global_92833.f_22[iParam1] = iParam0;
}

int func_261(var uParam0)//Position - 0x10DA9
{
	if (func_269(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_262(var uParam0, char* sParam1)//Position - 0x10DC2
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (unk_0x74C475EB8E73D398(uParam0->f_374[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x307EAE14C924E2E7(sParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = unk_0x53C562FD2B9E3AB0();
		uParam0->f_374[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_263(var uParam0, int iParam1)//Position - 0x10E89
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x6FF834D85E2DD4C6(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = unk_0x53C562FD2B9E3AB0();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_264(var uParam0)//Position - 0x10F32
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_151[iVar0 /*5*/])
		{
			uParam0->f_151[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_202[iVar0 /*7*/])
		{
			uParam0->f_202[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			uParam0->f_273[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			uParam0->f_374[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*6*/])
		{
			uParam0->f_475[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_656[iVar0 /*6*/])
		{
			uParam0->f_656[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_687[iVar0 /*7*/])
		{
			uParam0->f_687[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			uParam0->f_737[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			uParam0->f_763[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_879[iVar0 /*5*/])
		{
			uParam0->f_879[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_930[iVar0 /*5*/])
		{
			uParam0->f_930[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_868)
	{
		uParam0->f_868.f_2 = 1;
	}
	if (uParam0->f_860)
	{
		uParam0->f_860.f_2 = 1;
	}
	if (uParam0->f_864)
	{
		uParam0->f_864.f_2 = 1;
	}
}

int func_265(var uParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0x1118A
{
	if (func_266(vParam1) || fParam2 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_868)
	{
		if (func_119(uParam0->f_868.f_4, vParam1, 0) && uParam0->f_868.f_10 == fParam2)
		{
			uParam0->f_868.f_2 = 0;
			if (!uParam0->f_868.f_1)
			{
				uParam0->f_982 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	unk_0x32C900DD9B686F75(vParam1, fParam2, iParam3);
	uParam0->f_868 = 1;
	uParam0->f_868.f_3 = unk_0x53C562FD2B9E3AB0();
	uParam0->f_868.f_4 = { vParam1 };
	uParam0->f_868.f_7 = { 0f, 0f, 0f };
	uParam0->f_868.f_10 = fParam2;
	uParam0->f_982 = 1;
	return 1;
}

int func_266(vector3 vParam0)//Position - 0x11242
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_267(int iParam0, var uParam1, var uParam2)//Position - 0x1126C
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1256,936f, 556,8262f, 79,7001f };
			*uParam2 = 134,0936f;
			break;
		
		case 1:
			*uParam1 = { 692,2659f, -1004,185f, 21,9451f };
			*uParam2 = 3,5976f;
			break;
	}
}

bool func_268()//Position - 0x112C3
{
	return unk_0xC80D31E4B587871C(Global_92833.f_20, 13);
}

int func_269(var uParam0)//Position - 0x112D7
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_982)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (unk_0x9A0B2ED5055D3F0B((uParam0[iVar1 /*5*/])->f_4))
					{
						(uParam0[iVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[iVar1 /*5*/])->f_2)
				{
					if ((uParam0[iVar1 /*5*/])->f_1)
					{
						unk_0x14776E43F90DD454((uParam0[iVar1 /*5*/])->f_4);
						func_256(uParam0[iVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_273[iVar1 /*5*/])
			{
				if (!uParam0->f_273[iVar1 /*5*/].f_1)
				{
					if (unk_0x3A801AA34DD821BE(uParam0->f_273[iVar1 /*5*/].f_4))
					{
						uParam0->f_273[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_273[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_273[iVar1 /*5*/].f_1)
					{
						unk_0xFCCDDE0E48CF9588(uParam0->f_273[iVar1 /*5*/].f_4);
						func_256(&(uParam0->f_273[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_374[iVar1 /*5*/])
			{
				if (!uParam0->f_374[iVar1 /*5*/].f_1)
				{
					if (unk_0xC316B5E3E7ACF515(uParam0->f_374[iVar1 /*5*/].f_4))
					{
						uParam0->f_374[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_374[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_374[iVar1 /*5*/].f_1)
					{
						unk_0xD22D83D359390CC6(uParam0->f_374[iVar1 /*5*/].f_4);
						func_256(&(uParam0->f_374[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_656[iVar1 /*6*/])
			{
				if (!uParam0->f_656[iVar1 /*6*/].f_1)
				{
					if (unk_0x34D11AB5BA7922C2(uParam0->f_656[iVar1 /*6*/].f_5))
					{
						uParam0->f_656[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_656[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_656[iVar1 /*6*/].f_1)
					{
						unk_0xA68F7B004463AB6F(&(uParam0->f_656[iVar1 /*6*/].f_5));
						func_256(&(uParam0->f_656[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if (uParam0->f_475[iVar1 /*6*/])
			{
				if (!uParam0->f_475[iVar1 /*6*/].f_1)
				{
					if (unk_0x0840F461D7BD8859(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4))
					{
						uParam0->f_475[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_475[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_475[iVar1 /*6*/].f_1)
					{
						unk_0x9E6ACDF1473CD846(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
						func_256(&(uParam0->f_475[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_202[iVar1 /*7*/])
			{
				if (!uParam0->f_202[iVar1 /*7*/].f_1)
				{
					if (unk_0x0A198E59F03B0E6F(uParam0->f_202[iVar1 /*7*/].f_4))
					{
						uParam0->f_202[iVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_202[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_202[iVar1 /*7*/].f_1)
					{
						unk_0x45452336A6C88BE0(uParam0->f_202[iVar1 /*7*/].f_4);
						func_256(&(uParam0->f_202[iVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_151[iVar1 /*5*/])
			{
				if (!uParam0->f_151[iVar1 /*5*/].f_1)
				{
					if (unk_0xCAF0B12123EF5181(uParam0->f_151[iVar1 /*5*/].f_4))
					{
						uParam0->f_151[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_151[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_151[iVar1 /*5*/].f_1)
					{
						unk_0x3A3E253FC4F98014(uParam0->f_151[iVar1 /*5*/].f_4);
						func_256(&(uParam0->f_151[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_737[iVar1 /*5*/])
			{
				if (!uParam0->f_737[iVar1 /*5*/].f_1)
				{
					if (unk_0x1CF95440F1970B4F(uParam0->f_737[iVar1 /*5*/].f_4, false, -1))
					{
						uParam0->f_737[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_737[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_737[iVar1 /*5*/].f_1)
					{
						unk_0x751FF861325F816B(uParam0->f_737[iVar1 /*5*/].f_4);
						func_256(&(uParam0->f_737[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (uParam0->f_763[iVar1 /*5*/])
			{
				if (!uParam0->f_763[iVar1 /*5*/].f_1)
				{
					if (unk_0x1A595E6882473810(uParam0->f_763[iVar1 /*5*/].f_4))
					{
						uParam0->f_763[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_763[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_763[iVar1 /*5*/].f_1)
					{
						unk_0xA1451353A1AED1A5(uParam0->f_763[iVar1 /*5*/].f_4);
						func_256(&(uParam0->f_763[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!unk_0xAB019B170BF1309C(uParam0->f_687[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[iVar1 /*7*/])
				{
					iVar2 = unk_0x3AC9DE226D51FED0(uParam0->f_687[iVar1 /*7*/].f_5);
					if (!uParam0->f_687[iVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_687[iVar1 /*7*/].f_1 = 1;
								break;
							
							case 0:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							
							case 3:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								func_256(&(uParam0->f_687[iVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								unk_0xF8B6FDE713ABE840(uParam0->f_687[iVar1 /*7*/].f_5);
								uParam0->f_687[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (unk_0x1A595E6882473810(uParam0->f_687[iVar1 /*7*/].f_6))
				{
					uParam0->f_687[iVar1 /*7*/].f_5 = unk_0x995AED34717079AE(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_687[iVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_687[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_687[iVar1 /*7*/])
					{
						if (uParam0->f_687[iVar1 /*7*/].f_1)
						{
							unk_0xF8B6FDE713ABE840(uParam0->f_687[iVar1 /*7*/].f_5);
							func_256(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_256(&(uParam0->f_687[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_879[iVar1 /*5*/])
			{
				if (!uParam0->f_879[iVar1 /*5*/].f_1)
				{
					if (unk_0x8CDB9C452110770E(uParam0->f_879[iVar1 /*5*/].f_4))
					{
						uParam0->f_879[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_879[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_879[iVar1 /*5*/].f_1)
					{
						unk_0x167625A321C2311F(uParam0->f_879[iVar1 /*5*/].f_4);
						func_256(&(uParam0->f_879[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_930[iVar1 /*5*/])
			{
				if (!uParam0->f_930[iVar1 /*5*/].f_1)
				{
					if (unk_0x7D72D5B7EDD9C62C(uParam0->f_930[iVar1 /*5*/].f_4))
					{
						uParam0->f_930[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_930[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_930[iVar1 /*5*/].f_1)
					{
						func_256(&(uParam0->f_930[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_779)
		{
			if (uParam0->f_779[iVar1 /*5*/])
			{
				if (!uParam0->f_779[iVar1 /*5*/].f_1)
				{
					if (unk_0x9F0887BCBFCF3C2F(iVar1))
					{
						uParam0->f_779[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_779[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_779[iVar1 /*5*/].f_1)
					{
						unk_0xF40900F61CC88931(iVar1, true);
						func_256(&(uParam0->f_779[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_860)
		{
			if (!uParam0->f_860.f_1)
			{
				if (unk_0xFEDD99169EC73AA6())
				{
					uParam0->f_860.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_860.f_2)
			{
				if (uParam0->f_860.f_1)
				{
					unk_0x74FDC371ED12544B();
					func_256(&(uParam0->f_860));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_864)
		{
			if (!uParam0->f_864.f_1)
			{
				if (unk_0xBEA915D59A474B3B())
				{
					uParam0->f_864.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_864.f_2)
			{
				if (uParam0->f_864.f_1)
				{
					unk_0x92CFA7F2F9F762D8();
					func_256(&(uParam0->f_864));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_868 && unk_0x40189ECE75CF9724())
		{
			if (!uParam0->f_868.f_1)
			{
				if (unk_0x64D098EABB2F6F13())
				{
					uParam0->f_868.f_1 = 1;
					if (uParam0->f_983)
					{
						unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), false);
						func_270(uParam0);
						uParam0->f_983 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_868.f_2)
			{
				unk_0x81BCCFFE3F019672();
				func_256(&(uParam0->f_868));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_956[iVar1 /*5*/])
			{
				if (!uParam0->f_956[iVar1 /*5*/].f_1)
				{
					if (unk_0xA51ADD51711B4A15(uParam0->f_956[iVar1 /*5*/].f_4))
					{
						uParam0->f_956[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_956[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_956[iVar1 /*5*/].f_1)
					{
						func_256(&(uParam0->f_956[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			uParam0->f_982 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_270(var uParam0)//Position - 0x11CA7
{
	if (unk_0x40189ECE75CF9724())
	{
		unk_0x81BCCFFE3F019672();
		func_256(&(uParam0->f_868));
	}
}

void func_271()//Position - 0x11CC3
{
	if (bLocal_93 && (func_272() || unk_0x3E9CABD07B829173()))
	{
		func_8(1);
		unk_0x96A3D9A8A4C7AFD4();
	}
}

int func_272()//Position - 0x11CEC
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

void func_273()//Position - 0x11D19
{
	vector3 vVar0;
	var uVar1;
	
	func_280();
	unk_0x4DE114E3C7F8B7C2("SECDRIVER", &iLocal_1284);
	unk_0xF96119FCCD4D1889(1, iLocal_1284, -1533126372);
	unk_0xF96119FCCD4D1889(1, iLocal_1284, -183807561);
	unk_0xF96119FCCD4D1889(1, -1533126372, iLocal_1284);
	if (func_6(0) || func_202())
	{
		iLocal_92 = 0;
		if (func_202())
		{
			if (Global_87155)
			{
				iLocal_92++;
			}
		}
		StringCopy(&Global_89840, "jhp2a_alt", 64);
		if (func_202())
		{
			func_267(iLocal_92, &vVar0, &uVar1);
			func_279(vVar0, uVar1, 1, 0);
		}
		bLocal_91 = true;
	}
	else
	{
		while (!func_254(1))
		{
			system::wait(0);
			func_278(&uLocal_94);
		}
	}
	func_277(&uLocal_94, "JHP2A", 0);
	unk_0x94BD6F0436473406(0,1f);
	unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
	func_275(88);
	func_259(&uLocal_1105, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
	func_259(&uLocal_1105, 3, 0, "Lester", 0, 1);
	unk_0x2E4932E63763FE26(joaat("boxville3"), true);
	unk_0xDF1ACFD53102CEB0(joaat("s_m_m_armoured_01"), true);
	if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_briefcase"), 0))
	{
		unk_0xABBEF2EAC74A02EB(unk_0xFC1458A37D98B502(), joaat("weapon_briefcase"));
	}
	func_274();
	if (unk_0xAB019B170BF1309C(&Global_89840))
	{
	}
	iLocal_1300 = unk_0xCB389937EDB1519A(713,7754f, -996,4443f, 22,3085f, 715,7624f, -991,7067f, 25,6214f, 0, 1, 1, 1);
	while (!unk_0x9F0887BCBFCF3C2F(0))
	{
		system::wait(0);
	}
	Global_68325 = 1;
}

void func_274()//Position - 0x11E8D
{
	Global_87156 = 1;
}

void func_275(int iParam0)//Position - 0x11E9A
{
	Global_88833 = 0;
	switch (iParam0)
	{
		case 72:
			func_276(2);
			func_276(4);
			break;
		
		case 73:
			func_276(0);
			func_276(1);
			func_276(7);
			break;
		
		case 92:
			func_276(10);
			func_276(9);
			func_276(13);
			func_276(6);
			break;
		
		case 68:
			func_276(11);
			break;
		
		case 78:
			func_276(14);
			break;
		
		case 79:
			func_276(3);
			break;
		
		default:
			break;
	}
}

void func_276(int iParam0)//Position - 0x11F28
{
	unk_0x872F1C1F8587CCC7(&Global_88833, iParam0);
}

int func_277(var uParam0, char* sParam1, int iParam2)//Position - 0x11F3A
{
	if (uParam0->f_779[iParam2 /*5*/].f_1 || uParam0->f_779[iParam2 /*5*/])
	{
		if (unk_0x74C475EB8E73D398(uParam0->f_779[iParam2 /*5*/].f_4, sParam1))
		{
			uParam0->f_779[iParam2 /*5*/].f_2 = 0;
			uParam0->f_982 = 1;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (iParam2 >= 11)
		{
			unk_0x278235573030B7EC(sParam1, iParam2);
		}
		else
		{
			unk_0xBCBC53983EC3B1BA(sParam1, iParam2);
		}
		uParam0->f_779[iParam2 /*5*/] = 1;
		uParam0->f_779[iParam2 /*5*/].f_3 = unk_0x53C562FD2B9E3AB0();
		uParam0->f_779[iParam2 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_278(var uParam0)//Position - 0x11FDE
{
	func_269(uParam0);
}

void func_279(vector3 vParam0, var uParam1, int iParam2, int iParam3)//Position - 0x11FED
{
	if (func_202())
	{
		unk_0x941BE77305BB5695(0);
		unk_0x0EE72DB1CD8A3B86(&(Global_92833.f_20), 2);
		unk_0x6ACDC20166AA3FAC(1);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
		}
		Global_92829 = { vParam0 };
		Global_92832 = uParam1;
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
		func_201(1);
	}
}

void func_280()//Position - 0x12082
{
	func_288(&(Local_1079[0 /*8*/]), 75257/*func_289*/, "Van Driver Manager");
	func_288(&(Local_1079[1 /*8*/]), 73904/*func_281*/, "Cargo Manager");
}

void func_281(var uParam0)//Position - 0x120B0
{
	if (!func_128(uParam0))
	{
		if (unk_0x191BE1BC8F26F3C1(Local_1295, 0))
		{
			func_286(Local_1298[0 /*2*/], 1);
			func_286(Local_1298[1 /*2*/], 1);
			func_286(Local_1298[2 /*2*/], 1);
			iLocal_1314 = 1;
			func_285(uParam0);
		}
		else
		{
			switch (uParam0->f_1)
			{
				case 1:
					func_284(&uLocal_94, "JWL_HEIST_PREP_2A_SHOOTING_LOCK");
					if (unk_0x1CF95440F1970B4F("JWL_HEIST_PREP_2A_SHOOTING_LOCK", false, -1))
					{
						if ((unk_0x53C562FD2B9E3AB0() - iLocal_1306) > 150)
						{
							if (unk_0xEBE499597C718EB8(iLocal_1299, unk_0xFC1458A37D98B502(), 0))
							{
								if ((((unk_0x613CDAB05D8C57C8(iLocal_1299, joaat("weapon_molotov"), 0) || unk_0x613CDAB05D8C57C8(iLocal_1299, joaat("weapon_bzgas"), 0)) || unk_0x613CDAB05D8C57C8(iLocal_1299, joaat("weapon_knife"), 0)) || unk_0x613CDAB05D8C57C8(iLocal_1299, joaat("weapon_unarmed"), 0)) || unk_0x613CDAB05D8C57C8(iLocal_1299, joaat("weapon_hit_by_water_cannon"), 0))
								{
									unk_0xD4A6AC63B8FE6D1A(iLocal_1299);
								}
								else
								{
									unk_0x2B0DDE3D071497AD(iLocal_1299);
									iLocal_1306 = unk_0x53C562FD2B9E3AB0();
									iLocal_1305++;
									if (iLocal_1305 >= 3)
									{
										unk_0x7CC4363AEEF7EF34(-1, "Lock_Destroyed", iLocal_1299, "JWL_PREP_2A_SOUNDS", 0, 0);
									}
									else
									{
										unk_0x7CC4363AEEF7EF34(-1, "Lock_Damage", iLocal_1299, "JWL_PREP_2A_SOUNDS", 0, 0);
									}
								}
							}
						}
						else
						{
							unk_0x2B0DDE3D071497AD(iLocal_1299);
						}
					}
					if (((((iLocal_1305 >= 3 || unk_0x191BE1BC8F26F3C1(iLocal_1299, 0)) || unk_0x178CF89BBA808451(Local_1295, 2)) || unk_0x178CF89BBA808451(Local_1295, 3)) || unk_0x8212F63113683BF7(Local_1295, 2) > 0f) || unk_0x8212F63113683BF7(Local_1295, 3) > 0f)
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_1299))
						{
							unk_0x452336926718D62A(&iLocal_1299);
						}
						if (!unk_0x178CF89BBA808451(Local_1295, 2))
						{
							unk_0x6D4A70E9DE82B24B(Local_1295, 2, 0, 0);
						}
						if (!unk_0x178CF89BBA808451(Local_1295, 3))
						{
							unk_0x6D4A70E9DE82B24B(Local_1295, 3, 0, 0);
						}
						iLocal_1315 = 0;
						iLocal_1316 = 0;
						func_286(Local_1298[0 /*2*/], 0);
						func_286(Local_1298[1 /*2*/], 0);
						func_286(Local_1298[2 /*2*/], 0);
						func_283(uParam0, 2, 0);
					}
					break;
				
				case 2:
					if (func_282(Local_1295))
					{
						if (unk_0xE97272C977DEADD3(unk_0x8212F63113683BF7(Local_1295, 2)) > 0,5f && unk_0xE97272C977DEADD3(unk_0x8212F63113683BF7(Local_1295, 3)) > 0,5f)
						{
							func_283(uParam0, 3, 0);
						}
					}
					break;
				
				case 3:
					if (func_282(Local_1295))
					{
						if (!unk_0x178CF89BBA808451(Local_1295, 2))
						{
							if (unk_0xC7F842A65EE9BC16(Local_1295, 2))
							{
								unk_0x6D4A70E9DE82B24B(Local_1295, 2, 1, 0);
								unk_0x193F4218CC4CF4BB(Local_1295, 2, 0, 0, 1);
								iLocal_1315 = 1;
							}
						}
						else
						{
							iLocal_1315 = 1;
						}
						if (!unk_0x178CF89BBA808451(Local_1295, 3))
						{
							if (unk_0xC7F842A65EE9BC16(Local_1295, 3))
							{
								unk_0x6D4A70E9DE82B24B(Local_1295, 3, 1, 0);
								unk_0x193F4218CC4CF4BB(Local_1295, 3, 0, 0, 1);
								iLocal_1316 = 1;
							}
						}
						else
						{
							iLocal_1316 = 1;
						}
						if (iLocal_1315 && iLocal_1316)
						{
							iLocal_1314 = 1;
							func_283(uParam0, 4, 0);
						}
					}
					break;
				}
			}
	}
	if (func_128(uParam0))
	{
	}
}

int func_282(int iParam0)//Position - 0x123A0
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

void func_283(var uParam0, int iParam1, int iParam2)//Position - 0x123C1
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = unk_0x53C562FD2B9E3AB0();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_284(var uParam0, char* sParam1)//Position - 0x123E7
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (unk_0x74C475EB8E73D398(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_737[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_737[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x1CF95440F1970B4F(sParam1, false, -1);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = unk_0x53C562FD2B9E3AB0();
		uParam0->f_737[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_285(var uParam0)//Position - 0x124B1
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

void func_286(int iParam0, bool bParam1)//Position - 0x124D6
{
	vector3 vVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0xDFFD5F8C8ABCB7EF(iParam0))
		{
			unk_0x6B7C10B19928914F(iParam0, 1, bParam1);
			unk_0xB18E1DBC397238E1(iParam0, true, 0);
			unk_0x764B52EA8B8FFFA3(iParam0);
		}
		if (bParam1)
		{
			vVar0 = { func_287(unk_0xB3328BA8976B416C(iParam0, 1) - unk_0x3F90543934DCD7E6(Local_1295, unk_0x5B811202FCBE9E9D(-0,15f, 0,15f), IntToFloat(-unk_0x63A6486593EC7EC3(3, 6)), unk_0x5B811202FCBE9E9D(-0,1f, 0,1f))) };
			unk_0x218AB919A4668C70(iParam0, 1, vVar0 * FtoV(unk_0x5B811202FCBE9E9D(0,25f, 0,5f)), 0, 1, 1, 0);
			unk_0x218AB919A4668C70(iParam0, 5, IntToFloat(unk_0x63A6486593EC7EC3(0, 10)), IntToFloat(unk_0x63A6486593EC7EC3(0, 10)), IntToFloat(unk_0x63A6486593EC7EC3(0, 10)), 0, 1, 1, 0);
			unk_0xA55D009D02766A03(iParam0, Local_1295, 1);
		}
	}
}

Vector3 func_287(vector3 vParam0)//Position - 0x12593
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

int func_288(var uParam0, int iParam1, char* sParam2)//Position - 0x125D2
{
	if (*uParam0 != -1)
	{
		return 0;
	}
	*uParam0 = 0;
	uParam0->f_3 = sParam2;
	uParam0->f_7 = iParam1;
	return 1;
}

void func_289(var uParam0)//Position - 0x125F9
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	float fVar4;
	
	if (!func_128(uParam0))
	{
		if (((!unk_0x6ADD12BF4D6D2587(vLocal_1285.x) || unk_0x3AB6A1A9084FB0A4(vLocal_1285.x)) || (unk_0x6ADD12BF4D6D2587(Local_1295) && func_194(Local_1295, vLocal_1285.x, 1) > 200f)) || (!unk_0x88DDBE9908752BF0(vLocal_1285.x, 0) && func_194(Local_1295, vLocal_1285.x, 1) > 200f))
		{
			if (unk_0x6ADD12BF4D6D2587(Local_1295) && unk_0xB8DE76287EDC4957(Local_1295, 0))
			{
				unk_0xFA87254221D30EB8(Local_1295, 0);
			}
			unk_0x486F346ADFE56674(&vLocal_1285);
			func_285(uParam0);
		}
		else
		{
			if ((uParam0->f_1 != 5 && uParam0->f_1 != 3) && ((!unk_0x6ADD12BF4D6D2587(Local_1295) || !unk_0xB8DE76287EDC4957(Local_1295, 0)) || !unk_0xA8D0477084E86A92(vLocal_1285.x, Local_1295, 0)))
			{
				iLocal_1307 = 0;
				iLocal_1308 = 0;
				StringCopy(&cLocal_1309, "", 24);
				func_283(uParam0, 5, 0);
			}
			else if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 4)
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					if (unk_0x9A213A2345825783(iVar0, Local_1295))
					{
						if ((!iLocal_1302 && (unk_0x53C562FD2B9E3AB0() - iLocal_1304) > 500) && fLocal_1303 >= 4f)
						{
							iLocal_1302 = 1;
							iLocal_1301++;
						}
					}
					else if (iLocal_1302)
					{
						iLocal_1304 = unk_0x53C562FD2B9E3AB0();
						iLocal_1302 = 0;
					}
					vVar1 = { func_287(unk_0xB3328BA8976B416C(iVar0, 1) - unk_0xB3328BA8976B416C(Local_1295, 1)) };
					vVar2 = { unk_0x8FD9FCCB6E4BD999(Local_1295) - unk_0x8FD9FCCB6E4BD999(iVar0) };
					fLocal_1303 = func_293(vVar2, vVar1);
				}
			}
			switch (uParam0->f_1)
			{
				case 1:
					if ((((((((((((((((((unk_0xEBE499597C718EB8(Local_1295, unk_0xFC1458A37D98B502(), 1) || unk_0xEBE499597C718EB8(vLocal_1285.x, unk_0xFC1458A37D98B502(), 1)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 122)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 123)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 124)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 29)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 116)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 121)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 22)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 24)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 46)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 61)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 61)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 136)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 86)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 87)) || unk_0x27C8A4034A05DC21(vLocal_1285.x)) || unk_0x6B4C37F2EEC636CC(Local_1295)) || iLocal_1301 > 0)
					{
						iLocal_1307 = 0;
						iLocal_1308 = 0;
						StringCopy(&cLocal_1309, "", 24);
						func_283(uParam0, 4, 0);
					}
					else
					{
						if (unk_0x6ADD12BF4D6D2587(Local_1295) && unk_0xB8DE76287EDC4957(Local_1295, 0))
						{
							if ((unk_0xA73DEC876598C594(unk_0xFC1458A37D98B502()) || fLocal_1303 > 0,5f) && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), unk_0x3F90543934DCD7E6(Local_1295, 0f, 2f, -0,5f), unk_0x3F90543934DCD7E6(Local_1295, 0f, 10f, 2f), 4,5f, 0, true, 0))
							{
								if (!unk_0xD0FC9EFF17B87178(Local_1295))
								{
									if (iLocal_1318 == -1)
									{
										iLocal_1318 = unk_0x53C562FD2B9E3AB0();
									}
									else if ((unk_0x53C562FD2B9E3AB0() - iLocal_1318) > 5000)
									{
										unk_0x2883644E7F3F1871(Local_1295, 2000, 1330140418, 0);
									}
								}
								else
								{
									iLocal_1318 = -1;
								}
							}
						}
						if (func_292(Local_1295, -993,7236f, -2418,757f, 12,9447f, 1) < 20f)
						{
							func_262(&uLocal_94, "jhp2a_airport");
						}
						if (!func_291(vLocal_1285.x, -235832601, 1))
						{
							if (unk_0x0F3033474C49912D(Local_1295, -990,6312f, -2413,214f, 12,69471f, -996,0194f, -2422,608f, 16,05846f, 8,75f, 0, true, 0))
							{
								if (unk_0xC316B5E3E7ACF515("jhp2a_airport"))
								{
									iLocal_1307 = 0;
									iLocal_1308 = 0;
									StringCopy(&cLocal_1309, "", 24);
									func_283(uParam0, 2, 0);
								}
							}
							else
							{
								unk_0x84EF7D14703E1230(vLocal_1285.x, Local_1295, &Global_89840, 786475, -1, 24, -1, 12f, 0, 1073741824);
							}
						}
					}
					break;
				
				case 2:
					if ((((((((((((((((((unk_0xEBE499597C718EB8(Local_1295, unk_0xFC1458A37D98B502(), 1) || unk_0xEBE499597C718EB8(vLocal_1285.x, unk_0xFC1458A37D98B502(), 1)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 122)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 123)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 124)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 29)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 116)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 121)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 22)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 24)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 46)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 61)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 61)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 136)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 86)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 87)) || unk_0x27C8A4034A05DC21(vLocal_1285.x)) || unk_0x6B4C37F2EEC636CC(Local_1295)) || iLocal_1301 > 0)
					{
						iLocal_1307 = 0;
						iLocal_1308 = 0;
						StringCopy(&cLocal_1309, "", 24);
						func_283(uParam0, 5, 0);
					}
					else if (!func_291(vLocal_1285.x, -235832601, 1))
					{
						if (unk_0x0F3033474C49912D(Local_1295, -1096,139f, -2467,117f, 12,69561f, -1101,641f, -2476,775f, 15,6304f, 7,8125f, 0, true, 0))
						{
							iLocal_1307 = 0;
							iLocal_1308 = 0;
							StringCopy(&cLocal_1309, "", 24);
							func_283(uParam0, 3, 0);
						}
						else
						{
							unk_0x84EF7D14703E1230(vLocal_1285.x, Local_1295, "jhp2a_airport", 786475, -1, 24, -1, 12f, 0, 1073741824);
						}
					}
					break;
				
				case 3:
					if (((((((((((((((((((unk_0xEBE499597C718EB8(Local_1295, unk_0xFC1458A37D98B502(), 1) || unk_0xEBE499597C718EB8(vLocal_1285.x, unk_0xFC1458A37D98B502(), 1)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 122)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 123)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 124)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 29)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 116)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 121)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 22)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 24)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 46)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 61)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 61)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 136)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 86)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 87)) || unk_0x27C8A4034A05DC21(vLocal_1285.x)) || unk_0x6B4C37F2EEC636CC(Local_1295)) || unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_1295, 1)) || iLocal_1301 > 0)
					{
						iLocal_1307 = 0;
						iLocal_1308 = 0;
						StringCopy(&cLocal_1309, "", 24);
						func_283(uParam0, 5, 0);
					}
					else if (unk_0xA8D0477084E86A92(vLocal_1285.x, Local_1295, 1))
					{
						if (!func_291(vLocal_1285.x, 451360105, 1))
						{
							unk_0x4F8A35D7CBC17327(vLocal_1285.x, Local_1295, 0);
						}
					}
					else
					{
						unk_0x4BEFCD5DAE410A90(Local_1295, 2);
						if (!func_291(vLocal_1285.x, 242628503, 1))
						{
							unk_0x6931076730A4AC5D(&iLocal_1283);
							unk_0x380C1E7B7740D618(0, -1093,486f, -2471,669f, 13,0716f, 1f, -1, 0,25f, 0, 1193033728);
							unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_SMOKING", -1, 1);
							unk_0x1B16DD5C115FE009(iLocal_1283);
							unk_0xAB30B1CF01A198C1(vLocal_1285.x, iLocal_1283);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_1283);
						}
					}
					break;
				
				case 4:
					if (unk_0x36CA14E4AEA7AA81(Local_1295, 0, 1))
					{
						iVar3++;
					}
					if (unk_0x36CA14E4AEA7AA81(Local_1295, 1, 1))
					{
						iVar3++;
					}
					if (unk_0x36CA14E4AEA7AA81(Local_1295, 4, 1))
					{
						iVar3++;
					}
					if (unk_0x36CA14E4AEA7AA81(Local_1295, 5, 1))
					{
						iVar3++;
					}
					if (((((IntToFloat(unk_0xDE523AF6F7B269AB(Local_1295)) <= 0f || unk_0xA7B0253B80B52B2B(Local_1295) <= 250f) || unk_0x32DFD9C17763ABE0(Local_1295) <= 400f) || unk_0x3AB6A1A9084FB0A4(vLocal_1285.x)) || iVar3 >= 2) || iLocal_1301 > 6)
					{
						if (unk_0x6ADD12BF4D6D2587(Local_1295) && unk_0xB8DE76287EDC4957(Local_1295, 0))
						{
							unk_0xFA87254221D30EB8(Local_1295, 0);
						}
						iLocal_1307 = 0;
						iLocal_1308 = 0;
						StringCopy(&cLocal_1309, "", 24);
						func_283(uParam0, 5, 0);
					}
					else if (!func_291(vLocal_1285.x, -1273030092, 1))
					{
						unk_0xD2C269DBF147B406(vLocal_1285.x, Local_1295, unk_0xFC1458A37D98B502(), 8, 90f, 786468, 400f, 10f, 0);
					}
					break;
				
				case 5:
					if (unk_0x6ADD12BF4D6D2587(Local_1295) && !unk_0x191BE1BC8F26F3C1(Local_1295, 0))
					{
						if (unk_0xA8D0477084E86A92(vLocal_1285.x, Local_1295, 0))
						{
							if (!func_80(Local_1295))
							{
								if (!func_291(vLocal_1285.x, -2118855366, 1))
								{
									unk_0xB8E08BD5B184DF4E(vLocal_1285.x);
									unk_0x181B5054237CD6BD(vLocal_1285.x, Local_1295, 5, -1);
								}
							}
							else if (!func_291(vLocal_1285.x, 451360105, 1))
							{
								unk_0x4F8A35D7CBC17327(vLocal_1285.x, Local_1295, 256);
							}
						}
						else if (!func_291(vLocal_1285.x, 780511057, 1))
						{
							unk_0x5C5D33A1B2711D21(vLocal_1285.x, true);
							unk_0xD7F5B2902EBBD04E(vLocal_1285.x, unk_0xFC1458A37D98B502(), 0, 16);
						}
					}
					if (unk_0x6ADD12BF4D6D2587(Local_1295) && !unk_0x191BE1BC8F26F3C1(Local_1295, 0))
					{
						unk_0x6F861F183C9CF6FB(Local_1295, 2, true);
						unk_0x6F861F183C9CF6FB(Local_1295, 3, true);
					}
					break;
				}
		}
		if ((unk_0x6ADD12BF4D6D2587(vLocal_1285.x) && !unk_0x3AB6A1A9084FB0A4(vLocal_1285.x)) && !unk_0x8F90AB52825A8157(vLocal_1285.x))
		{
			switch (uParam0->f_1)
			{
				case 4:
					switch (iLocal_1307)
					{
						case 0:
							if (func_35() && !unk_0x33B1D0D0C92D4F18(vLocal_1285.x))
							{
								if (unk_0x27C8A4034A05DC21(vLocal_1285.x))
								{
									func_55(vLocal_1285.x, "JACKED_GENERIC", 10);
								}
								else
								{
									func_55(vLocal_1285.x, "GENERIC_SHOCKED_HIGH", 10);
								}
								iLocal_1307++;
							}
							break;
						
						case 1:
							if (!unk_0xA8D0477084E86A92(vLocal_1285.x, Local_1295, 0) || iLocal_1282 == 3)
							{
								if (!unk_0xA8D0477084E86A92(vLocal_1285.x, Local_1295, 0))
								{
									iLocal_1307 = 4;
								}
								else
								{
									iLocal_1307++;
								}
							}
							else if (func_35() && !unk_0x33B1D0D0C92D4F18(vLocal_1285.x))
							{
								if (func_290(&uLocal_1105, &cLocal_79, "JS_INIT_M", 8, 0, 0, 0))
								{
									iLocal_1307++;
								}
							}
							break;
						
						case 2:
							if (func_35() && !unk_0x33B1D0D0C92D4F18(vLocal_1285.x))
							{
								if (unk_0xAB019B170BF1309C(&cLocal_1309))
								{
									fVar4 = system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(vLocal_1285.x, 1));
									if ((((((iLocal_1302 || unk_0x47B14B07B2FD8217(vLocal_1285.x, 122)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 123)) || unk_0x47B14B07B2FD8217(vLocal_1285.x, 124)) || fVar4 < 49f) && (unk_0x53C562FD2B9E3AB0() - iLocal_1308) > 5000) && fVar4 < 225f)
									{
										if (unk_0x63A6486593EC7EC3(0, 2) == 0)
										{
											StringCopy(&cLocal_1309, "GENERIC_CURSE_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1309, "JS_ATT_M", 24);
										}
									}
								}
								if (!unk_0xAB019B170BF1309C(&cLocal_1309))
								{
									if (unk_0x74C475EB8E73D398(&cLocal_1309, "GENERIC_CURSE_HIGH"))
									{
										func_55(vLocal_1285.x, "GENERIC_CURSE_HIGH", 10);
										iLocal_1307++;
									}
									else
									{
										if (func_290(&uLocal_1105, &cLocal_79, &cLocal_1309, 8, 0, 0, 0))
										{
											iLocal_1307++;
										}
										iLocal_1307++;
									}
								}
							}
							break;
						
						case 3:
							if (!func_36() && !unk_0x33B1D0D0C92D4F18(vLocal_1285.x))
							{
								iLocal_1308 = unk_0x53C562FD2B9E3AB0();
								StringCopy(&cLocal_1309, "", 24);
								iLocal_1307 = (iLocal_1307 - 1);
							}
							break;
					}
					break;
				
				case 5:
					switch (iLocal_1307)
					{
						case 0:
							if (func_35() && !unk_0x33B1D0D0C92D4F18(vLocal_1285.x))
							{
								if (unk_0xAB019B170BF1309C(&cLocal_1309))
								{
									if ((unk_0x53C562FD2B9E3AB0() - iLocal_1308) > 5000 && system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(vLocal_1285.x, 1)) < 400f)
									{
										if (unk_0x63A6486593EC7EC3(0, 2) == 0)
										{
											StringCopy(&cLocal_1309, "GENERIC_INSULT_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1309, "JS_COMB_M", 24);
										}
									}
								}
								if (!unk_0xAB019B170BF1309C(&cLocal_1309))
								{
									if (unk_0x74C475EB8E73D398(&cLocal_1309, "GENERIC_INSULT_HIGH"))
									{
										func_55(vLocal_1285.x, "GENERIC_INSULT_HIGH", 10);
										iLocal_1307++;
									}
									else if (func_290(&uLocal_1105, &cLocal_79, &cLocal_1309, 8, 0, 0, 0))
									{
										iLocal_1307++;
									}
								}
							}
							break;
						
						case 1:
							if (!func_36() && !unk_0x33B1D0D0C92D4F18(vLocal_1285.x))
							{
								iLocal_1308 = unk_0x53C562FD2B9E3AB0();
								StringCopy(&cLocal_1309, "", 24);
								iLocal_1307 = (iLocal_1307 - 1);
							}
							break;
					}
					break;
				}
			}
	}
	if (func_128(uParam0))
	{
	}
}

bool func_290(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x13327
{
	func_34(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_25(sParam2, iParam3, 0);
}

int func_291(int iParam0, int iParam1, bool bParam2)//Position - 0x13375
{
	int iVar0;
	
	iVar0 = unk_0x78F50AA8F955BEFC(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

float func_292(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x133BB
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

float func_293(vector3 vParam0, vector3 vParam1)//Position - 0x133F5
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

void func_294(int iParam0)//Position - 0x13416
{
	struct<2> Var0;
	char[] cVar1[8];
	
	unk_0x8810DC630928B398("JHP2A_FAIL");
	if (iParam0 == 5)
	{
		func_306();
		func_8(0);
		unk_0x96A3D9A8A4C7AFD4();
	}
	else if (!bLocal_93)
	{
		switch (iParam0)
		{
			case 1:
				StringCopy(&Var0, "JHP2A_FGOTAWAY", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "JHP2A_FGOTAWAY2", 16);
				break;
			
			case 4:
				StringCopy(&Var0, "JHP2A_FCARGO", 16);
				break;
			
			case 3:
				StringCopy(&Var0, "JHP2A_FCARGO2", 16);
				break;
			
			case 0:
			default:
				StringCopy(&Var0, "JHP2A_FF", 16);
				break;
		}
		if (unk_0xAB019B170BF1309C(&cVar1))
		{
			func_304(&Var0);
		}
		else
		{
			func_295(&Var0, &cVar1);
		}
		bLocal_93 = true;
	}
}

void func_295(char* sParam0, char* sParam1)//Position - 0x134BC
{
	func_303(sParam0, sParam1);
	func_296(0);
}

void func_296(int iParam0)//Position - 0x134D1
{
	int iVar0;
	
	if (Global_104555.f_9055 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_297(iVar0))
		{
			return;
		}
		unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 5);
		Global_92869 = iParam0;
	}
}

int func_297(int iParam0)//Position - 0x13516
{
	int iVar0;
	int iVar1;
	
	func_302();
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0xFFC4F532496D6427(5000);
	}
	iVar0 = Global_83730[iParam0 /*5*/];
	iVar1 = Global_71125.f_109[iVar0 /*4*/];
	func_301(iVar1, 1);
	unk_0xEC27A5F45CFF069F(unk_0x9EB17624F44A8DA4());
	unk_0x54F90CB32317E720(unk_0x9EB17624F44A8DA4());
	func_298(&(Global_104555.f_2353.f_539), iVar1);
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

void func_298(var uParam0, int iParam1)//Position - 0x1362D
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
			if (!func_300(Global_104555.f_18503[iVar0], &vVar2, &fVar3))
			{
				Global_104555.f_18503[iVar0] = 318;
				func_299(&(uParam0->f_2276[iVar0]));
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

void func_299(var uParam0)//Position - 0x137F6
{
	*uParam0 = -15;
}

int func_300(int iParam0, var uParam1, float fParam2)//Position - 0x13804
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
			return func_300(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_300(8, uParam1, fParam2);
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

void func_301(int iParam0, bool bParam1)//Position - 0x14174
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

void func_302()//Position - 0x141B2
{
	Global_92868 = 1;
	if (unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1))
	{
		if (unk_0xAB019B170BF1309C(&Global_71088))
		{
			switch (func_184())
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
			switch (func_184())
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

void func_303(char* sParam0, char* sParam1)//Position - 0x1429F
{
	if (!unk_0xAB019B170BF1309C(sParam0))
	{
		if (unk_0x96AAAC172E3B9680(sParam0) <= 16)
		{
			if (unk_0x96AAAC172E3B9680(sParam1) <= 16)
			{
				StringCopy(&Global_71088, sParam0, 16);
				StringCopy(&Global_71092, sParam1, 16);
			}
		}
	}
}

void func_304(char* sParam0)//Position - 0x142DD
{
	func_305(sParam0);
	func_296(0);
}

void func_305(char* sParam0)//Position - 0x142F0
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

void func_306()//Position - 0x1432F
{
	int iVar0;
	
	if (unk_0x3B6F9DF9C5FEB3A4("buddyDeathResponse"))
	{
		system::start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_104555.f_9055 || func_6(0))
	{
		if (!func_307())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_297(iVar0))
				{
					return;
				}
				unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_302();
		}
	}
}

int func_307()//Position - 0x143A0
{
	if (((Global_92833 == 13 || Global_92833 == 10) || Global_92833 == 11) || Global_92833 == 12)
	{
		return 0;
	}
	return 1;
}

