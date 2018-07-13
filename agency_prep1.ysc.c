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
	var uLocal_48 = 2;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 8;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 8;
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
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	struct<110> Local_81 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_134 = 3;
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
	var uLocal_231 = 16;
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
	var uLocal_396 = 16;
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
	var uLocal_562 = 3;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 1092616192;
	var uLocal_569 = 1101004800;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 3;
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
	var uLocal_626 = 5;
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
	var uLocal_643 = 5;
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
	var uLocal_703 = 3;
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
	var uLocal_722 = 13;
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
	var uLocal_751 = 4;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 4;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 4;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 4;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 4;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 4;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 4;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 8;
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
	int iLocal_830 = 0;
	int iLocal_831 = 0;
	int iLocal_832 = 0;
	int iLocal_833 = 0;
	int iLocal_834[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_835 = 0;
	var uLocal_836 = 16;
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
	var uLocal_857 = 0;
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
	var uLocal_873 = 0;
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
	var uLocal_973 = 0;
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
	int iLocal_1001 = 0;
	int iLocal_1002 = 0;
	vector3 vLocal_1003 = { 0f, 0f, 0f };
	int iLocal_1004 = 0;
	int iLocal_1005 = 0;
	int iLocal_1006 = 0;
	int iLocal_1007 = 0;
	int iLocal_1008 = 0;
	int iLocal_1009 = 0;
	int iLocal_1010 = 0;
	int iLocal_1011 = 0;
	bool bLocal_1012 = 0;
	int iLocal_1013 = 0;
	int iLocal_1014 = 0;
	int iLocal_1015 = 0;
	vector3 vLocal_1016 = { 0f, 0f, 0f };
	vector3 vLocal_1017 = { 0f, 0f, 0f };
	struct<2> Local_1018 = { 0, 0 } ;
	var uLocal_1019 = 0;
	struct<2> Local_1020 = { 0, 0 } ;
	var uLocal_1021 = 0;
	int iLocal_1022 = 0;
	char[] cLocal_1023[8] = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	char[] cLocal_1027[8] = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	bool bLocal_1031 = 0;
	int iLocal_1032 = 0;
	char cLocal_1033[48] = "";
	int iLocal_1034 = 0;
	int iLocal_1035 = 0;
	int iLocal_1036 = 0;
	var uLocal_1037 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_72 = 1;
	iLocal_73 = 65;
	iLocal_74 = 49;
	iLocal_75 = 64;
	iLocal_80 = joaat("p_amb_phone_01");
	vLocal_1003 = { 693,1158f, -1012,418f, 21,72802f };
	vLocal_1016 = { 692,8695f, -998,7867f, 22,3201f };
	vLocal_1017 = { 693,3784f, -1025,671f, 21,506f };
	if (unk_0x7D9C4B359376D38A(3))
	{
		func_103();
		func_101();
		func_99();
	}
	func_91();
	unk_0xBC03901A15107317(1);
	while (true)
	{
		unk_0x48D75120C879E65E("M_TheAgencyHeistPrep1", 0);
		if (!iLocal_1006)
		{
			if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_1003, 200f, 200f, 200f, 0, 1, 0) && !unk_0x9E06F0EE20F58CED(vLocal_1003, 50f))
			{
				unk_0x247EAA2E93D4A021(vLocal_1003, 50f, 1, 0, 0, false);
				iLocal_1006 = 1;
			}
		}
		else if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_1003, 200f, 200f, 200f, 0, 1, 0))
		{
			iLocal_1006 = 0;
		}
		if (!iLocal_1011)
		{
			if (Global_89475.f_358 == unk_0x8B948C59217A295D("AHP1_TRUCKCALLED") || Global_89405)
			{
				func_90(543);
				Global_89475.f_358 = 0;
				iLocal_1011 = 1;
			}
		}
		func_89();
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if ((unk_0x6ADD12BF4D6D2587(iLocal_834[iVar0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_834[iVar0])) && unk_0x6ADD12BF4D6D2587(iLocal_832))
			{
				if (system::vdist2(unk_0xB3328BA8976B416C(iLocal_834[iVar0], 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 2500f)
				{
					unk_0xE9B3D12A64CC7C1A(iLocal_834[iVar0], 1);
					unk_0xD68E88A8E0BE8697(iLocal_834[iVar0], unk_0xFC1458A37D98B502(), 300f, 20000, 1, 0);
					unk_0x486F346ADFE56674(&(iLocal_834[iVar0]));
				}
			}
			iVar0++;
		}
		if (iLocal_1036 < 8 && iLocal_1001 >= 0)
		{
			func_87();
		}
		switch (iLocal_1001)
		{
			case -1:
				iVar1 = 0;
				while (iVar1 < iLocal_834)
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_834[iVar1]))
					{
						if (unk_0x6ADD12BF4D6D2587(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502())))
						{
							iVar2 = unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502());
							if ((unk_0xB8DE76287EDC4957(iVar2, 0) && system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iVar2, 1)) < 30f) && unk_0xB0DA749C8A7CCBBF(iVar2, 1938952078))
							{
								unk_0xF96119FCCD4D1889(5, 1862763509, iLocal_835);
								unk_0xF96119FCCD4D1889(5, iLocal_835, 1862763509);
								unk_0x1563F8C21480594F(unk_0x9EB17624F44A8DA4(), 1, 0);
								unk_0xFB19003EF06A954B(unk_0x9EB17624F44A8DA4(), 0f);
							}
						}
					}
					iVar1++;
				}
				if (func_86())
				{
					unk_0x1267474D9A69CA37(15f, 15f, 4);
					unk_0x8810DC630928B398("AHP1_START");
					iLocal_1001++;
				}
				break;
			
			case 0:
				if (!unk_0x6ADD12BF4D6D2587(iLocal_832))
				{
					func_86();
					if ((unk_0x6ADD12BF4D6D2587(unk_0xC733212BF9066BDF()) && unk_0xB8DE76287EDC4957(unk_0xC733212BF9066BDF(), 0)) && unk_0x82FF3DFBC3965CC0(unk_0xC733212BF9066BDF()) == 1938952078)
					{
						iLocal_832 = unk_0xC733212BF9066BDF();
						unk_0xDD29FF4BAB8AFF9C(iLocal_832, 1, 1);
					}
				}
				else
				{
					func_44();
					if (!iLocal_1007 && unk_0xB8DE76287EDC4957(iLocal_832, 0))
					{
						func_43(iLocal_832, -1);
						func_42(iLocal_832, -1);
						func_41(541, 0);
						iLocal_1007 = 1;
					}
					if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_1003) < system::pow(100f, 2f))
					{
						unk_0xFB4AD069EFD0869A(1);
					}
					func_86();
					if (bLocal_1012)
					{
						if (unk_0xB8DE76287EDC4957(iLocal_832, 0) && unk_0xB8DE76287EDC4957(iLocal_833, 0))
						{
							func_35(iLocal_833);
							if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iLocal_833) && unk_0x0C88267282FD588F(iLocal_832, vLocal_1003, Global_19, 1, 1, 0))
							{
								if (unk_0xA6DECE14FC9A8C51(iLocal_830))
								{
									unk_0xE30CF11C0EE14316(&iLocal_830);
								}
								unk_0x1267474D9A69CA37(5f, 15f, 4);
								iLocal_1001++;
							}
						}
					}
					else if (unk_0xB8DE76287EDC4957(iLocal_832, 0))
					{
						func_35(iLocal_832);
						if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iLocal_832) && unk_0x0C88267282FD588F(iLocal_832, vLocal_1003, Global_19, 1, 1, 0))
						{
							if (unk_0xA6DECE14FC9A8C51(iLocal_830))
							{
								unk_0xE30CF11C0EE14316(&iLocal_830);
							}
							unk_0x1267474D9A69CA37(5f, 15f, 4);
							iLocal_1001++;
						}
					}
				}
				if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
				{
					unk_0x1267474D9A69CA37(5f, 10f, 4);
					iLocal_1001 = 100;
				}
				if (!unk_0x6ADD12BF4D6D2587(iLocal_832))
				{
					func_14("AHP_LOSTTRUCK");
				}
				else if (unk_0xB8DE76287EDC4957(iLocal_832, 0))
				{
					if ((system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_832, 1)) > 22500f && unk_0xEC211A86AB3726B6(iLocal_832)) || system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_832, 1)) > 90000f)
					{
						func_14("AHP_LOSTTRUCK");
					}
				}
				else
				{
					func_14("AHP_DEADTRUCK");
				}
				break;
			
			case 1:
				if (unk_0xB8DE76287EDC4957(iLocal_832, 0))
				{
					if (func_12(iLocal_832, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						if (!iLocal_1010)
						{
							func_11("AHP_GETOUT", 7500, 1);
							iLocal_1010 = 1;
						}
						unk_0x8810DC630928B398("AHP1_STOP");
						unk_0x1267474D9A69CA37(10f, 10f, 4);
						iLocal_1001++;
					}
				}
				break;
			
			case 2:
				if (unk_0xB8DE76287EDC4957(iLocal_832, 0))
				{
					if (!unk_0x0C88267282FD588F(iLocal_832, vLocal_1003, Global_19 + Vector(2f, 2f, 2f), 1, 1, 0))
					{
						iLocal_1001 = 0;
					}
					else if (bLocal_1012)
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_833))
						{
							if (!unk_0x5D67DB68EF61B3E1(iLocal_833, iLocal_832))
							{
								unk_0x4C44781F822B0B00(iLocal_832, 0, 0);
								if (unk_0x44C4B08A935F2D8D(iLocal_832))
								{
									unk_0xBB4910CCAB2BEDFA(iLocal_832, 0);
								}
								unk_0x4BEFCD5DAE410A90(iLocal_832, 2);
								unk_0x84CDD933AFA470D2();
								system::settimera(0);
								iLocal_1001++;
							}
							else
							{
								unk_0x8BD98D78A3EE499E(iLocal_833, iLocal_832);
							}
						}
					}
					else if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_832, 0))
					{
						if (unk_0x44C4B08A935F2D8D(iLocal_832))
						{
							unk_0xBB4910CCAB2BEDFA(iLocal_832, 0);
						}
						unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
						unk_0x4BEFCD5DAE410A90(iLocal_832, 2);
						unk_0x84CDD933AFA470D2();
						system::settimera(0);
						iLocal_1001++;
					}
				}
				break;
			
			case 3:
				if (unk_0xB8DE76287EDC4957(iLocal_832, 0))
				{
					if (system::timera() > 3000)
					{
						unk_0x1267474D9A69CA37(5f, 5f, 4);
						func_6();
					}
				}
				break;
			
			case 100:
				if (unk_0xA6DECE14FC9A8C51(iLocal_830))
				{
					unk_0xE30CF11C0EE14316(&iLocal_830);
				}
				if (!func_5(13))
				{
					func_4(13, 1);
				}
				iLocal_1001++;
				break;
			
			case 101:
				func_86();
				if (bLocal_1012)
				{
					func_35(iLocal_833);
				}
				else
				{
					func_35(iLocal_832);
				}
				if (!iLocal_1013)
				{
					if ((unk_0xB8DE76287EDC4957(iLocal_832, 0) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_832, 0)) || (unk_0xB8DE76287EDC4957(iLocal_833, 0) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_833, 0)))
					{
						if ((unk_0xE018540DBC51BEFF(unk_0xFC1458A37D98B502(), "DAVIS") && unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) > 5f) && unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
						{
							if (func_3())
							{
								unk_0xBF7C231271431D6C("SCRIPTED_SCANNER_REPORT_AH_PREP_01", 0f);
							}
							else
							{
								unk_0xBF7C231271431D6C("SCRIPTED_SCANNER_REPORT_AH_PREP_02", 0f);
							}
							iLocal_1013 = 1;
						}
					}
				}
				if (!unk_0x6ADD12BF4D6D2587(iLocal_832))
				{
					func_14("AHP_LOSTTRUCK");
				}
				else if (unk_0xB8DE76287EDC4957(iLocal_832, 0))
				{
					if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
					{
						unk_0x84CDD933AFA470D2();
						iLocal_1001 = 0;
					}
					else if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iLocal_832))
					{
						if (!iLocal_1009)
						{
							func_11("AHP_LOSECOPS", 7500, 1);
							iLocal_1009 = 1;
							iLocal_1002 = unk_0x53C562FD2B9E3AB0();
						}
					}
					else if ((iLocal_1009 && (unk_0x53C562FD2B9E3AB0() - iLocal_1002) < 7500) && unk_0x23F2F89E3D1CB7C4())
					{
						unk_0x84CDD933AFA470D2();
					}
					if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_832, 1)) > 22500f)
					{
						func_14("AHP_LOSTTRUCK");
					}
				}
				else
				{
					func_14("AHP_DEADTRUCK");
				}
				break;
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_832))
		{
			if (!func_2(iLocal_832))
			{
				func_1(iLocal_832, 0);
			}
		}
		system::wait(0);
	}
}

void func_1(int iParam0, int iParam1)//Position - 0x85C
{
	Global_92833.f_22[iParam1] = iParam0;
}

int func_2(int iParam0)//Position - 0x870
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

int func_3()//Position - 0x89E
{
	if (unk_0xC80D31E4B587871C(unk_0x63A6486593EC7EC3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_4(int iParam0, int iParam1)//Position - 0x8BF
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

int func_5(int iParam0)//Position - 0x904
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_99.f_58[iParam0];
}

void func_6()//Position - 0x931
{
	unk_0xF0E859A5278D3AA0(0, 0);
	func_7(0, 0);
	func_99();
}

void func_7(bool bParam0, int iParam1)//Position - 0x949
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
		if ((func_10(0) && Global_71102.f_1 == 1) && func_9(Global_71102))
		{
		}
		else
		{
			Global_55903 = 1;
		}
	}
	if (Global_104555.f_9055 || func_10(0))
	{
		iVar0 = func_8();
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

int func_8()//Position - 0xA1F
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

int func_9(int iParam0)//Position - 0xA54
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

bool func_10(bool bParam0)//Position - 0xA92
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_11(char* sParam0, int iParam1, int iParam2)//Position - 0xABD
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 1);
}

int func_12(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xAD6
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
	func_13(iParam0);
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

void func_13(int iParam0)//Position - 0xC65
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

void func_14(char* sParam0)//Position - 0xC91
{
	int iVar0;
	
	unk_0xF0E859A5278D3AA0(0, 0);
	func_20(sParam0);
	while (!func_19())
	{
		system::wait(0);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_832))
	{
		if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_832, 0))
		{
			unk_0xC91FE17AD7353B70(&iLocal_832);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_834)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_834[iVar0]))
		{
			unk_0x68433819717660CF(&(iLocal_834[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_89475.f_9)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_89475.f_9[iVar0]))
		{
			unk_0x68433819717660CF(&(Global_89475.f_9[iVar0]));
		}
		iVar0++;
	}
	unk_0x247EAA2E93D4A021(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 100f, 1, 1, 0, false);
	unk_0x8810DC630928B398("AHP1_FAIL");
	if (func_18())
	{
		func_103();
	}
	else if (func_17())
	{
		func_15(229,1676f, -1614,979f, 28,2892f, 142,5156f);
	}
	func_99();
}

void func_15(vector3 vParam0, float fParam1)//Position - 0xD88
{
	if (func_16(Global_71096, 0f, 0f, 0f, 0))
	{
		Global_71096 = { vParam0 };
		Global_71099 = fParam1;
	}
}

bool func_16(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0xDB4
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_17()//Position - 0xDFB
{
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 226,6765f, -1668,942f, 25,46082f, 185,6446f, -1635,836f, 39,29184f, 57,75f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_18()//Position - 0xE50
{
	if (Global_92833 == 7)
	{
		return 1;
	}
	return 0;
}

int func_19()//Position - 0xE65
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

void func_20(char* sParam0)//Position - 0xE92
{
	func_34(sParam0);
	func_21(0);
}

void func_21(int iParam0)//Position - 0xEA5
{
	int iVar0;
	
	if (Global_104555.f_9055 || func_10(0))
	{
		iVar0 = func_8();
		if (!func_22(iVar0))
		{
			return;
		}
		unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 5);
		Global_92869 = iParam0;
	}
}

int func_22(int iParam0)//Position - 0xEEA
{
	int iVar0;
	int iVar1;
	
	func_27();
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0xFFC4F532496D6427(5000);
	}
	iVar0 = Global_83730[iParam0 /*5*/];
	iVar1 = Global_71125.f_109[iVar0 /*4*/];
	func_26(iVar1, 1);
	unk_0xEC27A5F45CFF069F(unk_0x9EB17624F44A8DA4());
	unk_0x54F90CB32317E720(unk_0x9EB17624F44A8DA4());
	func_23(&(Global_104555.f_2353.f_539), iVar1);
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

void func_23(var uParam0, int iParam1)//Position - 0x1001
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
			if (!func_25(Global_104555.f_18503[iVar0], &vVar2, &fVar3))
			{
				Global_104555.f_18503[iVar0] = 318;
				func_24(&(uParam0->f_2276[iVar0]));
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

void func_24(var uParam0)//Position - 0x11CA
{
	*uParam0 = -15;
}

int func_25(int iParam0, var uParam1, float fParam2)//Position - 0x11D8
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
			return func_25(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_25(8, uParam1, fParam2);
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

void func_26(int iParam0, bool bParam1)//Position - 0x1B47
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

void func_27()//Position - 0x1B85
{
	Global_92868 = 1;
	if (unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1))
	{
		if (unk_0xAB019B170BF1309C(&Global_71088))
		{
			switch (func_28())
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
			switch (func_28())
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

int func_28()//Position - 0x1C6C
{
	func_29();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_29()//Position - 0x1C85
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_33(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_32(unk_0xFC1458A37D98B502());
			if (func_31(iVar0) && (!func_30(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_31(Global_104555.f_2353.f_539.f_4301))
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

bool func_30(int iParam0)//Position - 0x1D82
{
	return Global_35861 == iParam0;
}

bool func_31(int iParam0)//Position - 0x1D90
{
	return iParam0 < 3;
}

int func_32(int iParam0)//Position - 0x1D9C
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)//Position - 0x1DD9
{
	if (func_31(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_34(char* sParam0)//Position - 0x1E03
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

void func_35(int iParam0)//Position - 0x1E42
{
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
		{
			if (unk_0xB8DE76287EDC4957(iParam0, 0))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam0, 0))
				{
					if (unk_0xA6DECE14FC9A8C51(iLocal_831))
					{
						unk_0xE30CF11C0EE14316(&iLocal_831);
					}
				}
				else if (!unk_0xA6DECE14FC9A8C51(iLocal_831))
				{
					iLocal_831 = func_39(iParam0, 0, 0);
				}
			}
		}
		else if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam0, 0))
		{
			if (unk_0xA6DECE14FC9A8C51(iLocal_831))
			{
				unk_0xE30CF11C0EE14316(&iLocal_831);
			}
			if (!unk_0xA6DECE14FC9A8C51(iLocal_830))
			{
				unk_0x84CDD933AFA470D2();
				if (!iLocal_1005)
				{
					func_38("AHP_DROPOFF", 7500, 1);
					iLocal_1005 = 1;
				}
				iLocal_830 = func_36(vLocal_1003, 1);
				unk_0x1267474D9A69CA37(3f, 1073741824, 3);
			}
		}
		else
		{
			if (unk_0xA6DECE14FC9A8C51(iLocal_830))
			{
				unk_0xE30CF11C0EE14316(&iLocal_830);
			}
			if (!unk_0xA6DECE14FC9A8C51(iLocal_831))
			{
				unk_0x84CDD933AFA470D2();
				if (!iLocal_1004)
				{
					func_38("AHP_GETBAKIN", 7500, 1);
					iLocal_1004 = 1;
				}
				iLocal_831 = func_39(iParam0, 0, 0);
			}
		}
	}
	else
	{
		if (unk_0xA6DECE14FC9A8C51(iLocal_831))
		{
			unk_0xE30CF11C0EE14316(&iLocal_831);
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_830))
		{
			unk_0xE30CF11C0EE14316(&iLocal_830);
		}
	}
}

int func_36(vector3 vParam0, int iParam1)//Position - 0x1F6C
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_37(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(iVar0, iParam1);
	return iVar0;
}

float func_37(bool bParam0, float fParam1, float fParam2)//Position - 0x1F98
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_38(char* sParam0, int iParam1, int iParam2)//Position - 0x1FAF
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 0);
}

int func_39(int iParam0, bool bParam1, bool bParam2)//Position - 0x1FC8
{
	return func_40(iParam0, !bParam1, bParam2);
}

int func_40(int iParam0, bool bParam1, bool bParam2)//Position - 0x1FDB
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_37(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_37(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_37(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

void func_41(int iParam0, bool bParam1)//Position - 0x207F
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

void func_42(int iParam0, int iParam1)//Position - 0x20C9
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

void func_43(int iParam0, int iParam1)//Position - 0x2134
{
	Global_55914 = iParam0;
	Global_55915 = iParam1;
}

void func_44()//Position - 0x2146
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_1012)
	{
		iVar0 = iLocal_833;
	}
	else
	{
		iVar0 = iLocal_832;
	}
	if (!unk_0x1E06D00B67177A18())
	{
		switch (iLocal_1014)
		{
			case 0:
				if ((unk_0xB8DE76287EDC4957(iVar0, 0) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iVar0, 0)) && unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
				{
					iVar1 = 0;
					while (iVar1 < 3)
					{
						iVar2 = func_84(iVar1);
						if ((!unk_0x3AB6A1A9084FB0A4(iVar2) && unk_0xA8D0477084E86A92(iVar2, iVar0, 0)) && unk_0x317536BCEA8FA6B0(iVar0, -1, 0) == iVar2)
						{
							if (!func_83(iVar2) && func_82(iVar2, 0))
							{
								if (func_81(iVar2, 0))
								{
									iLocal_1035 = 0;
									iLocal_1015 = iVar1;
									iLocal_1014 = 1;
								}
							}
						}
						iVar1++;
					}
				}
				break;
			
			case 1:
				if (unk_0xB8DE76287EDC4957(iVar0, 0))
				{
					if ((((unk_0x3AB6A1A9084FB0A4(func_84(iLocal_1015)) || unk_0x317536BCEA8FA6B0(iVar0, -1, 0) != func_84(iLocal_1015)) || !unk_0xA8D0477084E86A92(func_84(iLocal_1015), iVar0, 0)) || !func_83(func_84(iLocal_1015))) || !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iVar0, 0))
					{
						func_80(func_84(iLocal_1015));
						iLocal_1014 = 0;
					}
					else
					{
						switch (iLocal_1035)
						{
							case 0:
								iLocal_1035 = 2;
								break;
							
							case 1:
								if (unk_0x9C0571C926F68BED(Local_1018, Local_1018.f_1, Local_1020, Local_1020.f_1))
								{
									iLocal_1035++;
								}
								break;
							
							case 2:
								unk_0x87A3E70B0AB01608(func_84(iLocal_1015), iVar0, vLocal_1003, 15f, 0, 1938952078, 786484, 5f, 5f);
								if (system::vdist(unk_0xB3328BA8976B416C(iVar0, 1), vLocal_1003) > 250f)
								{
									unk_0xEA0F5AD20B008B1C(iVar0, system::vdist(unk_0xB3328BA8976B416C(iLocal_832, 1), vLocal_1003));
								}
								iLocal_1035++;
								break;
							
							case 3:
								if (unk_0x0F3033474C49912D(iVar0, 697,6884f, -1013,364f, 27,4968f, 688,3482f, -1013,179f, 22,32968f, 29,25f, 0, 1, 0))
								{
									if (system::vdist(unk_0xB3328BA8976B416C(iVar0, 1), vLocal_1016) < system::vdist(unk_0xB3328BA8976B416C(iVar0, 1), vLocal_1017))
									{
										if (bLocal_1012)
										{
											unk_0x87A3E70B0AB01608(func_84(iLocal_1015), iVar0, vLocal_1017, 5f, 0, unk_0x82FF3DFBC3965CC0(iVar0), 262144, 2f, 2f);
										}
										else
										{
											unk_0x9E8EE202E802AC5B(func_84(iLocal_1015), iVar0, vLocal_1003, 180f, 1, 15f, 0);
										}
									}
									else if (bLocal_1012)
									{
										unk_0x87A3E70B0AB01608(func_84(iLocal_1015), iVar0, vLocal_1016, 5f, 0, unk_0x82FF3DFBC3965CC0(iVar0), 262144, 2f, 2f);
									}
									else
									{
										unk_0x9E8EE202E802AC5B(func_84(iLocal_1015), iVar0, vLocal_1003, 0f, 1, 15f, 0);
									}
									iLocal_1035++;
								}
								break;
							
							case 4:
								break;
							}
						}
				}
				func_45();
				break;
		}
	}
	else if (iLocal_1014 != 0)
	{
		if (func_80(func_84(iLocal_1015)))
		{
			iLocal_1014 = 0;
		}
	}
}

void func_45()//Position - 0x2450
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!unk_0x3AB6A1A9084FB0A4(func_84(iLocal_1015)) && unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
	{
		if ((((unk_0x6ADD12BF4D6D2587(iLocal_832) && unk_0xB8DE76287EDC4957(iLocal_832, 0)) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_832, 0)) && unk_0xA8D0477084E86A92(func_84(iLocal_1015), iLocal_832, 0)) || (((unk_0x6ADD12BF4D6D2587(iLocal_833) && unk_0xB8DE76287EDC4957(iLocal_833, 0)) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_833, 0)) && unk_0xA8D0477084E86A92(func_84(iLocal_1015), iLocal_833, 0)))
		{
			bVar0 = true;
		}
	}
	switch (iLocal_1022)
	{
		case 0:
			iVar1 = func_77();
			if (func_65(0, 1, 145, 0, iVar1, &cLocal_1023, &cLocal_1027, 1))
			{
				func_64(&uLocal_836, 0);
				func_64(&uLocal_836, 1);
				func_64(&uLocal_836, 2);
				if (func_28() == 1)
				{
					func_63(&uLocal_836, 0, func_84(0), "MICHAEL", 0, 1);
					func_63(&uLocal_836, 1, unk_0xFC1458A37D98B502(), "FRANKLIN", 0, 1);
				}
				else
				{
					func_63(&uLocal_836, 1, func_84(1), "FRANKLIN", 0, 1);
					func_63(&uLocal_836, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
				}
				if (!iLocal_1032)
				{
					iLocal_1034 = unk_0x53C562FD2B9E3AB0();
				}
				iLocal_1022 = 1;
			}
			break;
		
		case 1:
			if (bVar0)
			{
				if ((unk_0x53C562FD2B9E3AB0() - iLocal_1034) > 5000 || iLocal_1032)
				{
					if (func_62(&uLocal_836, &cLocal_1023, &cLocal_1027, 8, 0, 0, 0))
					{
						iLocal_1032 = 1;
						iLocal_1022 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!bLocal_1031)
			{
				if (!bVar0)
				{
					cLocal_1033 = { func_61() };
					func_60();
					bLocal_1031 = true;
				}
			}
			else if (bVar0)
			{
				if (func_49(&uLocal_836, &cLocal_1023, &cLocal_1027, &cLocal_1033, 8, 0, 0))
				{
					bLocal_1031 = false;
				}
			}
			if (unk_0x1E06D00B67177A18() || (!bLocal_1031 && !func_48()))
			{
				func_46();
				iLocal_1022 = 3;
				iLocal_1034 = unk_0x53C562FD2B9E3AB0();
			}
			break;
		
		case 3:
			if ((unk_0x53C562FD2B9E3AB0() - iLocal_1034) > 10000)
			{
				iLocal_1022 = 0;
			}
			break;
	}
}

void func_46()//Position - 0x2674
{
	Global_14622 = 0;
	func_47();
}

void func_47()//Position - 0x2684
{
	if (unk_0x42111BD51D233AAB())
	{
		unk_0x495EB1DD7306493A();
		Global_16767 = 0;
		unk_0xB31CEFB00C146C91(1);
		Global_15756 = 6;
		return;
	}
}

int func_48()//Position - 0x26A8
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

bool func_49(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x26CA
{
	func_59(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 1;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 0;
	return func_50(sParam2, iParam4, 0);
}

int func_50(char* sParam0, int iParam1, bool bParam2)//Position - 0x271E
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
					unk_0xB31CEFB00C146C91(0);
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
					func_58();
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
		if (func_57(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_56();
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
				func_55();
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
				if (func_54())
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
			if (func_53())
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
			func_52();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_51();
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
		func_58();
	}
	return 0;
}

void func_51()//Position - 0x29EA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB31CEFB00C146C91(0);
	Global_15756 = 1;
}

void func_52()//Position - 0x2A1B
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

int func_53()//Position - 0x2AB0
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_54()//Position - 0x2AD7
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

void func_55()//Position - 0x2B70
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
		Global_14453 = func_28();
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

void func_56()//Position - 0x2C12
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

bool func_57(int iParam0, int iParam1)//Position - 0x2C69
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

void func_58()//Position - 0x2CA4
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if ((unk_0x0DBDCC9C5537E157() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xB31CEFB00C146C91(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(1);
		Global_15756 = 6;
		return;
	}
}

void func_59(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2CFB
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

void func_60()//Position - 0x2D51
{
	Global_14622 = 0;
	func_58();
}

struct<6> func_61()//Position - 0x2D61
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		iVar1 = unk_0xA2F80D03C2F3570D();
		iVar1 = (iVar1 + Global_16766);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (unk_0xA1800C71952C596F(&(Global_14624[iVar2 /*6*/])))
			{
				return Global_14624[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (unk_0xA1800C71952C596F(&(Global_14624[iVar3 /*6*/])))
					{
						return Global_14624[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_14624[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_62(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2E0D
{
	func_59(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_50(sParam2, iParam3, 0);
}

void func_63(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2E5B
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

void func_64(var uParam0, int iParam1)//Position - 0x2EF6
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_65(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7)//Position - 0x2F13
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_76(iParam0);
	iVar1 = func_76(iParam1);
	iVar2 = func_76(iParam2);
	if ((iVar0 == 7 || iVar1 == 7) || (iVar2 == 7 && iParam2 != 145))
	{
		return 0;
	}
	if (iVar2 == 7)
	{
		iVar5 = func_75(iVar0, iVar1);
		if (iVar5 >= 9)
		{
			return 0;
		}
		if (((iParam0 == 1 && iParam1 == 19) && func_5(137)) && iParam3 == 1)
		{
			if (func_74(&(Global_104555.f_18073.f_388), iParam3, &iVar3, &iVar4, iParam4))
			{
				if (bParam7)
				{
					func_69(&(Global_104555.f_18073.f_388), iParam3, iVar3);
				}
				iVar3 += 6;
			}
			else
			{
				return 0;
			}
		}
		else if (func_74(&(Global_104555.f_18073.f_175[iVar5 /*19*/].f_9), iParam3, &iVar3, &iVar4, iParam4))
		{
			if (bParam7)
			{
				func_69(&(Global_104555.f_18073.f_175[iVar5 /*19*/].f_9), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar6 = func_68(iVar0, iVar1, iVar2);
		if (iVar6 >= 2)
		{
			return 0;
		}
		if (func_74(&(Global_104555.f_18073.f_347[iVar6 /*7*/]), iParam3, &iVar3, &iVar4, iParam4))
		{
			if (bParam7)
			{
				func_69(&(Global_104555.f_18073.f_347[iVar6 /*7*/]), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	*sParam6 = { func_66(iVar0, iVar1, iVar2, 2) };
	*sParam5 = { *sParam6 };
	StringConCat(sParam5, "AU", 16);
	StringConCat(sParam6, "_", 16);
	if (iVar3 == 0)
	{
		StringConCat(sParam6, "A", 16);
	}
	else if (iVar3 == 1)
	{
		StringConCat(sParam6, "B", 16);
	}
	else if (iVar3 == 2)
	{
		StringConCat(sParam6, "C", 16);
	}
	else if (iVar3 == 3)
	{
		StringConCat(sParam6, "D", 16);
	}
	else if (iVar3 == 4)
	{
		StringConCat(sParam6, "E", 16);
	}
	else if (iVar3 == 5)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iVar3 == 6)
	{
		StringConCat(sParam6, "G", 16);
	}
	else if (iVar3 == 7)
	{
		StringConCat(sParam6, "H", 16);
	}
	else if (iVar3 == 8)
	{
		StringConCat(sParam6, "I", 16);
	}
	else if (iVar3 == 9)
	{
		StringConCat(sParam6, "J", 16);
	}
	else if (iVar3 == 10)
	{
		StringConCat(sParam6, "K", 16);
	}
	else if (iVar3 == 11)
	{
		StringConCat(sParam6, "L", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	if (iParam3 == 0)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(sParam6, "M", 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(sParam6, "D", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	StringIntConCat(sParam6, iVar4, 16);
	return 1;
}

struct<4> func_66(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x31BE
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "F", 16);
	if (iParam3 == 0)
	{
		StringConCat(&Var0, "p", 16);
		StringConCat(&Var0, func_67(iParam0), 16);
		StringConCat(&Var0, func_67(iParam1), 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(&Var0, "a", 16);
		StringConCat(&Var0, func_67(iParam0), 16);
		StringConCat(&Var0, func_67(iParam1), 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&Var0, "c", 16);
		if (iParam2 < iParam1)
		{
			iVar1 = iParam1;
			iParam1 = iParam2;
			iParam2 = iVar1;
		}
		if (iParam1 < iParam0)
		{
			iVar2 = iParam0;
			iParam0 = iParam1;
			iParam1 = iVar2;
		}
		if (iParam2 < iParam1)
		{
			iVar3 = iParam1;
			iParam1 = iParam2;
			iParam2 = iVar3;
		}
		StringConCat(&Var0, func_67(iParam0), 16);
		StringConCat(&Var0, func_67(iParam1), 16);
		if (iParam2 != 7)
		{
			StringConCat(&Var0, func_67(iParam2), 16);
		}
	}
	else
	{
		StringConCat(&Var0, "x", 16);
		StringConCat(&Var0, func_67(iParam0), 16);
		StringConCat(&Var0, func_67(iParam1), 16);
		if (iParam2 != 7)
		{
			StringConCat(&Var0, func_67(iParam2), 16);
		}
	}
	return Var0;
}

char* func_67(int iParam0)//Position - 0x32B6
{
	switch (iParam0)
	{
		case 0:
			return "M";
			break;
		
		case 1:
			return "F";
			break;
		
		case 2:
			return "T";
			break;
		
		case 3:
			return "L";
			break;
		
		case 4:
			return "J";
			break;
		
		case 5:
			return "A";
			break;
	}
	return "X";
}

int func_68(int iParam0, int iParam1, int iParam2)//Position - 0x3329
{
	if ((iParam0 == iParam1 || iParam1 == iParam2) || iParam2 == iParam0)
	{
		return 3;
	}
	if (((iParam0 == 1 || iParam1 == 1) || iParam2 == 1) && ((iParam0 == 2 || iParam1 == 2) || iParam2 == 2))
	{
		if ((iParam0 == 0 || iParam1 == 0) || iParam2 == 0)
		{
			return 0;
		}
		if ((iParam0 == 3 || iParam1 == 3) || iParam2 == 3)
		{
			return 1;
		}
	}
	return 3;
}

void func_69(var uParam0, int iParam1, int iParam2)//Position - 0x33CA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	func_73((*uParam0)[iParam2], &iVar0, &iVar1, &iVar2);
	func_72((*uParam0)[iParam2], &iVar3, &iVar4, &iVar5);
	func_71((*uParam0)[iParam2], &iVar6);
	if (iParam1 == 0)
	{
		iVar0++;
		if (iVar0 > iVar3)
		{
			iVar0 = iVar3;
		}
	}
	else if (iParam1 == 1)
	{
		iVar1++;
		if (iVar1 > iVar4)
		{
			iVar1 = iVar4;
		}
	}
	else if (iParam1 == 2)
	{
		iVar2++;
		if (iVar2 > iVar5)
		{
			iVar2 = iVar5;
		}
	}
	func_70(uParam0[iParam2], iVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6);
}

void func_70(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x3476
{
	*uParam0 = 0;
	*uParam0 = (*uParam0 || system::shift_left(iParam1 & 15, 28));
	*uParam0 = (*uParam0 || system::shift_left(iParam2 & 15, 24));
	*uParam0 = (*uParam0 || system::shift_left(iParam3 & 15, 20));
	*uParam0 = (*uParam0 || system::shift_left(iParam4 & 15, 16));
	*uParam0 = (*uParam0 || system::shift_left(iParam5 & 15, 12));
	*uParam0 = (*uParam0 || system::shift_left(iParam6 & 15, 8));
	*uParam0 = (*uParam0 || iParam7 & 255);
}

void func_71(var uParam0, int iParam1)//Position - 0x34FA
{
	*iParam1 = uParam0 & 255;
}

void func_72(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x350A
{
	*iParam1 = system::shift_right(iParam0, 16) & 15;
	*iParam2 = system::shift_right(iParam0, 12) & 15;
	*iParam3 = system::shift_right(iParam0, 8) & 15;
}

void func_73(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x353C
{
	*iParam1 = system::shift_right(iParam0, 28) & 15;
	*iParam2 = system::shift_right(iParam0, 24) & 15;
	*iParam3 = system::shift_right(iParam0, 20) & 15;
}

int func_74(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4)//Position - 0x356E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	*iParam2 = 0;
	while (*iParam2 < 6)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = 0;
		func_71((*uParam0)[*iParam2], &iVar6);
		if (unk_0xC80D31E4B587871C(iParam4, iVar6))
		{
			func_73((*uParam0)[*iParam2], &iVar0, &iVar1, &iVar2);
			func_72((*uParam0)[*iParam2], &iVar3, &iVar4, &iVar5);
			if (iParam1 == 0)
			{
				if (iVar0 < iVar3)
				{
					*uParam3 = iVar0;
					return 1;
				}
			}
			else if (iParam1 == 1)
			{
				if (iVar1 < iVar4)
				{
					*uParam3 = iVar1;
					return 1;
				}
			}
			else if (iParam1 == 2)
			{
				if (iVar2 < iVar5)
				{
					*uParam3 = iVar2;
					return 1;
				}
			}
		}
		*iParam2++;
	}
	*iParam2 = 0;
	*uParam3 = 0;
	return 0;
}

int func_75(int iParam0, int iParam1)//Position - 0x362C
{
	int iVar0;
	
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_76(int iParam0)//Position - 0x37B6
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < 151)
	{
		return Global_104555.f_28020[iParam0 /*29*/].f_11;
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == 151)
	{
		return 6;
	}
	if (iParam0 == 152)
	{
		return 6;
	}
	return 6;
}

int func_77()//Position - 0x3811
{
	int iVar0;
	
	iVar0 = 0;
	unk_0x872F1C1F8587CCC7(&iVar0, 1);
	if (Local_81.f_109 == 0)
	{
		unk_0x872F1C1F8587CCC7(&iVar0, 2);
	}
	if (func_5(128))
	{
		unk_0x872F1C1F8587CCC7(&iVar0, 4);
		if (!func_79(24))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 21);
		}
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&iVar0, 3);
	}
	if (func_5(131))
	{
		unk_0x872F1C1F8587CCC7(&iVar0, 6);
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&iVar0, 5);
	}
	if (func_5(137))
	{
		unk_0x872F1C1F8587CCC7(&iVar0, 9);
	}
	else if (func_5(126))
	{
		unk_0x872F1C1F8587CCC7(&iVar0, 8);
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&iVar0, 7);
	}
	if (func_5(137))
	{
		if (!func_5(135) && !func_5(136))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 10);
		}
		if (func_5(135))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 11);
		}
		else
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 13);
		}
		if (func_5(136))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 12);
		}
		else
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 14);
		}
	}
	if (!func_79(20))
	{
		unk_0x872F1C1F8587CCC7(&iVar0, 15);
	}
	if (!func_79(46))
	{
		unk_0x872F1C1F8587CCC7(&iVar0, 16);
	}
	if (func_5(129) && !unk_0xC80D31E4B587871C(iVar0, 9))
	{
		unk_0x872F1C1F8587CCC7(&iVar0, 17);
	}
	if (func_79(40) && !func_79(43))
	{
		unk_0x872F1C1F8587CCC7(&iVar0, 18);
	}
	if (func_79(43) && !func_79(42))
	{
		unk_0x872F1C1F8587CCC7(&iVar0, 19);
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (func_78(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 20);
		}
	}
	return iVar0;
}

int func_78(struct<2> Param0, Vector3 vParam1)//Position - 0x39A9
{
	if (Param0.f_1 < 400f)
	{
		if (Param0 < 1400f)
		{
			if (Param0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_79(int iParam0)//Position - 0x39E6
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_330[iParam0 /*6*/];
}

int func_80(int iParam0)//Position - 0x3A12
{
	int iVar0;
	
	return 0;
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = func_32(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_84(iVar0) != iParam0)
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

int func_81(int iParam0, int iParam1)//Position - 0x3A6A
{
	int iVar0;
	
	return 0;
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = func_32(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_84(iVar0) != iParam0)
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

int func_82(int iParam0, int iParam1)//Position - 0x3AF1
{
	int iVar0;
	
	return 0;
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = func_32(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_84(iVar0) != iParam0)
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

int func_83(int iParam0)//Position - 0x3B4D
{
	int iVar0;
	
	return 0;
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = func_32(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_84(iVar0) != iParam0)
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

int func_84(int iParam0)//Position - 0x3B96
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_28())
	{
		return unk_0xFC1458A37D98B502();
	}
	return Global_90456[func_85(iParam0)];
}

int func_85(int iParam0)//Position - 0x3BC7
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

int func_86()//Position - 0x3C02
{
	if (((unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0)) && unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0) != iLocal_832) && unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0) != iLocal_833)
	{
		if (unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 1938952078))
		{
			iLocal_832 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			unk_0xDD29FF4BAB8AFF9C(iLocal_832, 1, 1);
			iLocal_1007 = 0;
			return 1;
		}
		if (unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), joaat("towtruck")) || unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), joaat("towtruck2")))
		{
			if (unk_0x6ADD12BF4D6D2587(unk_0x94BAF40CF5390B7A(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0))))
			{
				if (unk_0xB8DE76287EDC4957(unk_0x79A6CD762DCCABE4(unk_0x94BAF40CF5390B7A(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0))), 0))
				{
					iLocal_833 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					unk_0xDD29FF4BAB8AFF9C(iLocal_833, 1, 1);
					if (unk_0x79A6CD762DCCABE4(unk_0x94BAF40CF5390B7A(iLocal_833)) != iLocal_832)
					{
						iLocal_832 = unk_0x79A6CD762DCCABE4(unk_0x94BAF40CF5390B7A(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)));
						iLocal_1007 = 0;
						unk_0xDD29FF4BAB8AFF9C(iLocal_832, 1, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_87()//Position - 0x3D25
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (iLocal_1036 < 8)
	{
		if (iLocal_1036 < 4)
		{
			if (unk_0x6ADD12BF4D6D2587(Global_89475.f_9[iLocal_1036]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(Global_89475.f_9[iLocal_1036]))
				{
					if (system::vdist2(unk_0xB3328BA8976B416C(Global_89475.f_9[iLocal_1036], 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < 900f)
					{
						unk_0xDD29FF4BAB8AFF9C(Global_89475.f_9[iLocal_1036], 1, 1);
						iLocal_834[iLocal_1036] = Global_89475.f_9[iLocal_1036];
						bVar0 = true;
						Global_89475.f_9[iLocal_1036] = 0;
					}
					else if (system::vdist2(unk_0xB3328BA8976B416C(Global_89475.f_9[iLocal_1036], 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 2500f && unk_0xEC211A86AB3726B6(Global_89475.f_9[iLocal_1036]))
					{
						unk_0xDD29FF4BAB8AFF9C(Global_89475.f_9[iLocal_1036], 1, 1);
						unk_0x68433819717660CF(&(Global_89475.f_9[iLocal_1036]));
					}
				}
			}
		}
		if (!bVar0)
		{
			if (unk_0xB7AF4220260C2ACD(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 30f, 1, 1, &iVar1, 0, 1, 21))
			{
				if ((unk_0x6ADD12BF4D6D2587(iVar1) && !unk_0x3AB6A1A9084FB0A4(iVar1)) && !func_88(iVar1, &iLocal_834))
				{
					unk_0xDD29FF4BAB8AFF9C(iVar1, 1, 1);
					iLocal_834[iLocal_1036] = iVar1;
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_834[iLocal_1036]))
			{
				unk_0xCE93FCB8A8D8DF0B(iLocal_834[iLocal_1036], iLocal_835);
				unk_0x1563F8C21480594F(unk_0x9EB17624F44A8DA4(), 1, 0);
				unk_0xAE6EBBBBD8B9FB30(iLocal_834[iLocal_1036], 17, 0);
				unk_0xFB19003EF06A954B(unk_0x9EB17624F44A8DA4(), 0f);
			}
			iLocal_1036++;
		}
	}
}

int func_88(int iParam0, int iParam1)//Position - 0x3EC4
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			if (unk_0x6ADD12BF4D6D2587((*iParam1)[iVar0]))
			{
				if (iParam0 == (*iParam1)[iVar0])
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_89()//Position - 0x3F06
{
	if (bLocal_1012)
	{
		if (((!unk_0xB8DE76287EDC4957(iLocal_833, 0) || (unk_0xB8DE76287EDC4957(iLocal_833, 0) && !unk_0x5D67DB68EF61B3E1(iLocal_832, iLocal_833))) || (unk_0xB8DE76287EDC4957(iLocal_832, 0) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_832, 0))) || (unk_0x6ADD12BF4D6D2587(iLocal_833) && system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_833, 1)) > 250f))
		{
			bLocal_1012 = false;
		}
	}
	else if ((unk_0xB8DE76287EDC4957(iLocal_833, 0) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_833, 0)) && unk_0x5D67DB68EF61B3E1(iLocal_832, iLocal_833))
	{
		bLocal_1012 = true;
	}
}

void func_90(int iParam0)//Position - 0x3FC0
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

void func_91()//Position - 0x4033
{
	vector3 vVar0;
	int iVar1;
	
	if ((unk_0x6ADD12BF4D6D2587(Global_89475[0]) && unk_0xB8DE76287EDC4957(Global_89475[0], 0)) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Global_89475[0], 0))
	{
		unk_0xDD29FF4BAB8AFF9C(Global_89475[0], 1, 1);
		iLocal_832 = Global_89475[0];
		Global_89475[0] = 0;
	}
	if ((unk_0x6ADD12BF4D6D2587(Global_89475[1]) && unk_0xB8DE76287EDC4957(Global_89475[1], 0)) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Global_89475[1], 0))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0x94BAF40CF5390B7A(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0))) && unk_0xB8DE76287EDC4957(unk_0x79A6CD762DCCABE4(unk_0x94BAF40CF5390B7A(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0))), 0))
		{
			unk_0xDD29FF4BAB8AFF9C(Global_89475[1], 1, 1);
			iLocal_833 = Global_89475[1];
			Global_89475[1] = 0;
			unk_0xDD29FF4BAB8AFF9C(Global_89475[0], 1, 1);
			iLocal_832 = Global_89475[0];
			Global_89475[0] = 0;
			bLocal_1012 = true;
		}
	}
	unk_0xBCBC53983EC3B1BA("AHPREP1", 0);
	while (!unk_0x9F0887BCBFCF3C2F(0))
	{
		system::wait(0);
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
	}
	unk_0x4DE114E3C7F8B7C2("FireMen", &iLocal_835);
	unk_0xF96119FCCD4D1889(5, 1862763509, iLocal_835);
	unk_0xF96119FCCD4D1889(5, iLocal_835, 1862763509);
	if (func_10(0))
	{
		unk_0x6FF834D85E2DD4C6(joaat("s_m_y_fireman_01"));
		while (!unk_0x9A0B2ED5055D3F0B(joaat("s_m_y_fireman_01")))
		{
			system::wait(0);
		}
		vVar0 = { 202,0504f, -1655,773f, 28,8031f };
		uLocal_1037 = unk_0xCB389937EDB1519A(vVar0 - Vector(10f, 30f, 30f), vVar0 + Vector(10f, 30f, 30f), 0, 1, 1, 1);
		unk_0x247EAA2E93D4A021(vVar0, 20f, 1, 0, 0, false);
		iLocal_834[0] = unk_0xAC992EFAD62C33BF(21, joaat("s_m_y_fireman_01"), 215,7186f, -1644,622f, 28,7719f, 357,5736f, 1, 1);
		iLocal_834[1] = unk_0xAC992EFAD62C33BF(21, joaat("s_m_y_fireman_01"), 214,4446f, -1643,72f, 28,7776f, 279,1055f, 1, 1);
		iLocal_834[2] = unk_0xAC992EFAD62C33BF(21, joaat("s_m_y_fireman_01"), 217,0826f, -1644,117f, 28,7155f, 72,8262f, 1, 1);
		iVar1 = 0;
		while (iVar1 <= (iLocal_834 - 1))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_834[iVar1]))
			{
				unk_0x2EA90674750EA01E(iLocal_834[iVar1], "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
				unk_0xAE6EBBBBD8B9FB30(iLocal_834[iVar1], 17, 0);
				unk_0xCE93FCB8A8D8DF0B(iLocal_834[iVar1], iLocal_835);
			}
			iVar1++;
		}
		unk_0xF96119FCCD4D1889(255, 1862763509, iLocal_835);
		unk_0xF96119FCCD4D1889(255, iLocal_835, 1862763509);
		iLocal_1001 = -1;
		if (func_98())
		{
			func_97(354,3055f, -1722,206f, 28,259f, 109,6154f, 1, 0);
			func_94(0, -1, 1);
		}
	}
	if (!unk_0x9F7B586A14398C40() && !unk_0x9BB64DDCD9C7B076())
	{
		unk_0x59C3AC31C7544A28(500);
	}
	if (func_17())
	{
		iLocal_1008 = 1;
	}
	if (!func_10(0))
	{
		unk_0x8810DC630928B398("AHP1_START");
	}
	iLocal_1007 = 0;
	func_92(68);
}

void func_92(int iParam0)//Position - 0x4356
{
	Global_88833 = 0;
	switch (iParam0)
	{
		case 72:
			func_93(2);
			func_93(4);
			break;
		
		case 73:
			func_93(0);
			func_93(1);
			func_93(7);
			break;
		
		case 92:
			func_93(10);
			func_93(9);
			func_93(13);
			func_93(6);
			break;
		
		case 68:
			func_93(11);
			break;
		
		case 78:
			func_93(14);
			break;
		
		case 79:
			func_93(3);
			break;
		
		default:
			break;
	}
}

void func_93(int iParam0)//Position - 0x43E4
{
	unk_0x872F1C1F8587CCC7(&Global_88833, iParam0);
}

void func_94(int iParam0, int iParam1, int iParam2)//Position - 0x43F6
{
	if (func_98() && func_96())
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
		func_95(0);
	}
}

void func_95(int iParam0)//Position - 0x44BA
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

bool func_96()//Position - 0x44E3
{
	return unk_0xC80D31E4B587871C(Global_92833.f_20, 13);
}

void func_97(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x44F7
{
	if (func_98())
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
		func_95(1);
	}
}

int func_98()//Position - 0x458C
{
	if (Global_92833 == 10 || Global_92833 == 9)
	{
		return 1;
	}
	return 0;
}

void func_99()//Position - 0x45B0
{
	func_100();
	if (unk_0x6ADD12BF4D6D2587(iLocal_832))
	{
		unk_0x5380482A432E314E(&iLocal_832);
	}
	unk_0xCA107A9AAF17E75F(uLocal_1037, 0);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_100()//Position - 0x45D9
{
	Global_88833 = 0;
}

void func_101()//Position - 0x45E6
{
	int iVar0;
	
	if (unk_0x3B6F9DF9C5FEB3A4("buddyDeathResponse"))
	{
		system::start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_104555.f_9055 || func_10(0))
	{
		if (!func_102())
		{
			iVar0 = func_8();
			if (iVar0 != -1)
			{
				if (!func_22(iVar0))
				{
					return;
				}
				unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_27();
		}
	}
}

int func_102()//Position - 0x4657
{
	if (((Global_92833 == 13 || Global_92833 == 10) || Global_92833 == 11) || Global_92833 == 12)
	{
		return 0;
	}
	return 1;
}

void func_103()//Position - 0x4695
{
	if (iLocal_1008 == 1)
	{
		func_15(354,3055f, -1722,206f, 28,259f, 109,6154f);
	}
}

