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
	struct<22> Local_95 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0 } ;
	vector3 vLocal_96[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 12;
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
	var uLocal_790 = 1065353216;
	int iLocal_791 = 0;
	int iLocal_792 = 0;
	vector3 vLocal_793 = { 0f, 0f, 0f };
	float fLocal_794 = 0f;
	var uLocal_795 = 16;
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
	var uLocal_831 = 0;
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
	bool bLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	int iLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	float fLocal_966 = 0f;
	float fLocal_967 = 0f;
	float fLocal_968 = 0f;
	float fLocal_969 = 0f;
	struct<21> Local_970 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_94 = ((0,05f + 0,275f) - 0,01f);
	iLocal_963 = 15000;
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_142(ScriptParam_970))
		{
			func_137();
		}
	}
	while (true)
	{
		func_136();
		if (func_126())
		{
			func_137();
		}
		if (unk_0xB01117EF93F91860() != bLocal_960)
		{
			func_137();
		}
		switch (func_125(unk_0x622FF3AE4B1D07C3()))
		{
			case 0:
				if (func_124() == 1)
				{
					func_123();
					func_122();
					vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/] = 1;
				}
				else if (func_124() == 4)
				{
					vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/] = 3;
				}
				break;
			
			case 1:
				func_95();
				if (func_124() == 1)
				{
					func_69();
				}
				else if (func_124() == 4)
				{
					vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/] = 3;
				}
				if (func_67(Local_95.f_2))
				{
					if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(Local_95.f_2), 1), 200f, 200f, 200f, 0, 1, 0))
					{
						vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_66(&(Local_95.f_18));
				if (func_65(&(Local_95.f_18)))
				{
					vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/] = 4;
			
			case 4:
				func_137();
				break;
		}
		if (unk_0x8E1421E2A2A2FBD4())
		{
			switch (func_124())
			{
				case 0:
					if (func_63(&(Local_95.f_16), 10000, 0))
					{
						if (!unk_0xC80D31E4B587871C(Local_95, 12))
						{
							Local_95.f_4 = unk_0x9EB17624F44A8DA4();
							Local_95.f_5 = func_62();
							Local_95.f_10 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) + Vector(0f, 5f, 0f) };
							Local_95.f_7 = { func_60(Local_95.f_5) };
							unk_0x872F1C1F8587CCC7(&Local_95, 12);
						}
						if (func_35())
						{
							func_123();
							Local_95.f_1 = 1;
						}
					}
					func_31();
					break;
				
				case 1:
					func_30();
					func_29();
					func_27();
					func_31();
					if (func_1())
					{
						Local_95.f_1 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x266
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x27A
{
	var uVar0;
	var uVar1;
	
	if (func_26())
	{
		if (Local_95.f_21 >= 0 || Local_95.f_21 <= 3)
		{
			func_6(func_20(9), 7, 3, 1);
		}
		return 1;
	}
	if (Local_95.f_21 >= 0 || Local_95.f_21 <= 3)
	{
		if (unk_0x93C304998B457C45(Local_95.f_2))
		{
			if (!func_67(Local_95.f_2))
			{
				if (unk_0xDFB139FC1B23446B(Local_95.f_2, &uVar0) == unk_0x9EB17624F44A8DA4())
				{
					func_5(1, 600000);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
		if (unk_0x93C304998B457C45(Local_95.f_3))
		{
			if (func_4(Local_95.f_3))
			{
				if (unk_0xDFB139FC1B23446B(Local_95.f_3, &uVar1) == unk_0x9EB17624F44A8DA4())
				{
					func_5(1, 600000);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
		if (!func_3(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0, bool bParam1, bool bParam2)//Position - 0x34E
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

int func_4(var uParam0)//Position - 0x398
{
	if (unk_0x93C304998B457C45(uParam0))
	{
		return unk_0x3AB6A1A9084FB0A4(unk_0x47BA76CE3C825A08(uParam0));
	}
	return 1;
}

void func_5(int iParam0, int iParam1)//Position - 0x3B7
{
	if (Global_2436181.f_3756[iParam0] < iParam1)
	{
		Global_2436181.f_3756[iParam0] = iParam1;
	}
	unk_0x872F1C1F8587CCC7(&(Global_2436181.f_3755), iParam0);
}

void func_6(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3E9
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_19(iParam1), 16);
	StringCopy(&Var1, func_18(iParam2), 16);
	switch (iParam1)
	{
		case 0:
			iVar2 = 1287308202;
			break;
		
		case 1:
			iVar2 = 691372038;
			break;
		
		case 2:
			iVar2 = 1480707108;
			break;
		
		case 3:
			iVar2 = 1512499951;
			break;
		
		case 4:
			iVar2 = 562283735;
			break;
		
		case 5:
			iVar2 = -154732333;
			break;
		
		case 6:
			iVar2 = -1362660491;
			break;
		
		case 7:
			iVar2 = 645708827;
			break;
		
		case 8:
			iVar2 = 767907967;
			break;
		
		case 9:
			iVar2 = -1970151306;
			break;
		
		case 10:
			iVar2 = 718859568;
			break;
		
		case 11:
			iVar2 = -1955564771;
			break;
		
		case 12:
			iVar2 = 892388724;
			break;
		
		case 13:
			iVar2 = -1426920838;
			break;
		
		case 14:
			iVar2 = -664597565;
			break;
		
		case 15:
			iVar2 = 1864522104;
			break;
		
		case 16:
			iVar2 = 215608230;
			break;
	}
	if (func_17())
	{
		func_7(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4261865[iVar3 /*80*/].f_8.f_43 = { Var0 };
		Global_4261865[iVar3 /*80*/].f_8.f_47 = { Var1 };
	}
	else
	{
		unk_0xB55903868EC9248F(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_7(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x565
{
	int iVar0;
	
	if (!func_17())
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
				func_8(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_8(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_8(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x9EF
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_17())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x02404400A68A3D5B(func_16()) || unk_0xD7D895B4B5395982())
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
			*uParam0 = func_15(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
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
			func_14(1, iParam4);
			Global_4262414 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_9(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_9(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xB93
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_137.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_10(iParam0);
	}
}

void func_10(int iParam0)//Position - 0xBCB
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_17())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_13(iParam0))
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
		func_11(&(Global_4261865[iParam0 /*80*/]));
	}
}

void func_11(var uParam0)//Position - 0xC1D
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
	func_12(&(uParam0->f_8.f_3));
	func_12(&(uParam0->f_8.f_16));
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

void func_12(var uParam0)//Position - 0xD0F
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

int func_13(int iParam0)//Position - 0xD57
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_14(int iParam0, int iParam1)//Position - 0xD7F
{
	Global_2459156 = iParam1;
	Global_2459155 = iParam0;
}

int func_15(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0xD93
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_17())
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

int func_16()//Position - 0xE8C
{
	return Global_1312736;
}

int func_17()//Position - 0xE98
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

char* func_18(int iParam0)//Position - 0xEAF
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_19(int iParam0)//Position - 0xF38
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		default:
	}
	return "DEFAULT";
}

int func_20(int iParam0)//Position - 0x1010
{
	int iVar0;
	
	iVar0 = 0;
	if (func_25(iParam0) >= 0)
	{
		iVar0 = func_25(iParam0);
	}
	else
	{
		iVar0 = func_21(iParam0);
	}
	return iVar0;
}

int func_21(int iParam0)//Position - 0x103A
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (func_22())
			{
				return 0;
			}
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 1)
			{
				return 200;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 2)
			{
				return 400;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 3)
			{
				return 600;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 4)
			{
				return 800;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

bool func_22()//Position - 0x123D
{
	return unk_0xC80D31E4B587871C(func_23(6407, -1, 0), 19);
}

int func_23(int iParam0, int iParam1, int iParam2)//Position - 0x1254
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_24(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_24(var uParam0)//Position - 0x1286
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
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

int func_25(int iParam0)//Position - 0x12BA
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_6036;
			break;
		
		case 10:
			return Global_262145.f_4117;
			break;
		
		case 11:
			return Global_262145.f_4118;
			break;
		
		case 8:
			return Global_262145.f_4115;
			break;
		
		case 0:
			return Global_262145.f_4101;
			break;
		
		case 9:
			return Global_262145.f_4116;
			break;
		
		case 13:
			return Global_262145.f_4120;
			break;
		
		case 12:
			return Global_262145.f_4119;
			break;
		
		case 2:
			return Global_262145.f_4111;
			break;
		
		case 14:
			return Global_262145.f_4121;
			break;
		
		case 20:
			if (func_22())
			{
				return 0;
			}
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 1)
			{
				return Global_262145.f_6043;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 2)
			{
				return Global_262145.f_6044;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 3)
			{
				return Global_262145.f_6045;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 4)
			{
				return Global_262145.f_6046;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 5)
			{
				return Global_262145.f_6047;
			}
			break;
		
		case 6:
			return Global_262145.f_4114;
			break;
		
		case 22:
			return Global_262145.f_4127;
			break;
		
		case 23:
			return Global_262145.f_4128;
			break;
		
		case 24:
			return Global_262145.f_4129;
			break;
		
		case 25:
			return Global_262145.f_4130;
			break;
		
		case 26:
			return Global_262145.f_4131;
			break;
		
		case 35:
			return Global_262145.f_6612;
			break;
		
		case 15:
			return Global_262145.f_6037;
			break;
		
		case 17:
			return Global_262145.f_6037;
			break;
		
		case 18:
			return Global_262145.f_6037;
			break;
		
		case 19:
			return Global_262145.f_6037;
			break;
		
		case 21:
			return Global_262145.f_6037;
			break;
		
		case 36:
			return Global_262145.f_7077;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_12212;
			break;
		
		case 41:
			return Global_262145.f_12213;
			break;
		
		case 42:
			return Global_262145.f_12214;
			break;
		
		case 43:
			return Global_262145.f_14755;
			break;
		
		case 44:
			return Global_262145.f_14757;
			break;
	}
	return 0;
}

bool func_26()//Position - 0x1579
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_196 != 0;
}

void func_27()//Position - 0x1590
{
	if (!unk_0x8E1421E2A2A2FBD4())
	{
		return;
	}
	if (Local_95.f_20 != 7)
	{
		if (func_4(Local_95.f_3) || !func_67(Local_95.f_2))
		{
			Local_95.f_20 = 7;
		}
		else if (!unk_0xA8D0477084E86A92(unk_0x47BA76CE3C825A08(Local_95.f_3), unk_0xF32FBF2453AC1753(Local_95.f_2), 0))
		{
			Local_95.f_20 = 7;
		}
	}
	if (!func_4(Local_95.f_3) && func_67(Local_95.f_2))
	{
		if (Local_95.f_20 != 1)
		{
			if (unk_0xDE523AF6F7B269AB(unk_0xF32FBF2453AC1753(Local_95.f_2)) <= 600 || unk_0xDE523AF6F7B269AB(unk_0x47BA76CE3C825A08(Local_95.f_3)) <= 150)
			{
				Local_95.f_20 = 1;
			}
		}
		switch (Local_95.f_20)
		{
			case 2:
				if (Local_95.f_21 == 3)
				{
					Local_95.f_20 = 4;
				}
				else if (Local_95.f_21 == 5)
				{
					Local_95.f_20 = 7;
				}
				else if (!unk_0xC80D31E4B587871C(Local_95, 7) && unk_0x21B6FFFD04C9FF3A(unk_0x47BA76CE3C825A08(Local_95.f_3), unk_0xFC1458A37D98B502(), 10f, 10f, 10f, 0, 1, 0))
				{
					Local_95.f_20 = 3;
				}
				break;
			
			case 4:
				unk_0x872F1C1F8587CCC7(&iLocal_97, 8);
				if (unk_0x1635D2AD9D560E95(unk_0xF32FBF2453AC1753(Local_95.f_2)) <= 0)
				{
					Local_95.f_20 = 3;
					unk_0x0EE72DB1CD8A3B86(&iLocal_97, 8);
				}
				else if (!unk_0xC80D31E4B587871C(Local_95, 7) && unk_0x0C88267282FD588F(unk_0x47BA76CE3C825A08(Local_95.f_3), Local_95.f_7, 10f, 10f, 10f, 0, 1, 0))
				{
					Local_95.f_20 = 5;
				}
				break;
			
			case 5:
				if ((unk_0x1635D2AD9D560E95(unk_0xF32FBF2453AC1753(Local_95.f_2)) <= 0 && !unk_0x0082ECE2DB69C8CA(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_95.f_2))) && func_28(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_95.f_2), 1) >= 10f)
				{
					Local_95.f_20 = 6;
				}
				break;
			
			case 3:
				if (unk_0x1635D2AD9D560E95(unk_0xF32FBF2453AC1753(Local_95.f_2)) >= 1)
				{
					Local_95.f_20 = 4;
				}
				break;
			
			case 6:
				if ((unk_0x1635D2AD9D560E95(unk_0xF32FBF2453AC1753(Local_95.f_2)) <= 0 && !unk_0x0082ECE2DB69C8CA(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_95.f_2))) && func_28(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_95.f_2), 1) >= 10f)
				{
					if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_95.f_3), 242628503) == 1)
					{
						Local_95.f_20 = 7;
					}
				}
				break;
			
			case 1:
				if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_95.f_3), 242628503) == 1 && func_28(unk_0xFC1458A37D98B502(), unk_0x47BA76CE3C825A08(Local_95.f_3), 1) >= 10f)
				{
					Local_95.f_20 = 7;
				}
				break;
			
			case 7:
				break;
			}
	}
}

float func_28(int iParam0, int iParam1, int iParam2)//Position - 0x182A
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
	return unk_0xBE3C4023003180FC(vVar0, vVar1, iParam2);
}

void func_29()//Position - 0x1888
{
	switch (Local_95.f_21)
	{
		case 0:
			if (unk_0xC80D31E4B587871C(Local_95, 8) || unk_0x1635D2AD9D560E95(unk_0xF32FBF2453AC1753(Local_95.f_2)) > 0)
			{
				Local_95.f_21 = 1;
			}
			break;
		
		case 1:
			if (unk_0x93C304998B457C45(Local_95.f_2))
			{
				if (unk_0x1635D2AD9D560E95(unk_0xF32FBF2453AC1753(Local_95.f_2)) > 0)
				{
					Local_95.f_21 = 2;
				}
			}
			break;
		
		case 2:
			if (unk_0x1635D2AD9D560E95(unk_0xF32FBF2453AC1753(Local_95.f_2)) > 0)
			{
				Local_95.f_21 = 3;
			}
			else if (unk_0xC80D31E4B587871C(Local_95, 10))
			{
				Local_95.f_21 = 4;
			}
			break;
		
		case 3:
			if (unk_0x93C304998B457C45(Local_95.f_2))
			{
				if (unk_0x1635D2AD9D560E95(unk_0xF32FBF2453AC1753(Local_95.f_2)) <= 0)
				{
					Local_95.f_21 = 1;
				}
				else if (unk_0xC80D31E4B587871C(Local_95, 10))
				{
					Local_95.f_21 = 4;
				}
			}
			break;
		
		case 4:
			if (unk_0x93C304998B457C45(Local_95.f_2))
			{
				if ((unk_0x1635D2AD9D560E95(unk_0xF32FBF2453AC1753(Local_95.f_2)) <= 0 && !unk_0x0082ECE2DB69C8CA(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_95.f_2))) && func_28(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_95.f_2), 1) >= 10f)
				{
					Local_95.f_21 = 5;
				}
			}
			break;
		
		case 5:
			break;
	}
}

void func_30()//Position - 0x19C1
{
	int iVar0;
	int iVar1;
	
	unk_0x0EE72DB1CD8A3B86(&Local_95, 9);
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
		{
			iVar1 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0));
			if (func_3(iVar1, 1, 1))
			{
				if (func_67(Local_95.f_2))
				{
					if (!unk_0xC80D31E4B587871C(Local_95, 8))
					{
						if (unk_0x0C88267282FD588F(unk_0xF32FBF2453AC1753(Local_95.f_2), Local_95.f_10, (10f * 1,5f), (10f * 1,5f), (10f * 1,5f), 0, 1, 0))
						{
							unk_0x872F1C1F8587CCC7(&Local_95, 8);
						}
					}
					if (!unk_0xC80D31E4B587871C(Local_95, 7) || unk_0xC80D31E4B587871C(Local_95, 11))
					{
						if (!unk_0xC80D31E4B587871C(Local_95, 10))
						{
							if (unk_0x0C88267282FD588F(unk_0xF32FBF2453AC1753(Local_95.f_2), Local_95.f_7, (10f * 1,5f), (10f * 1,5f), (10f * 1,5f), 0, 1, 0))
							{
								unk_0x872F1C1F8587CCC7(&Local_95, 10);
							}
						}
					}
					if (!unk_0xC80D31E4B587871C(Local_95, 9))
					{
						if (unk_0xC80D31E4B587871C(vLocal_96[iVar0 /*3*/].f_1, 6))
						{
							unk_0x872F1C1F8587CCC7(&Local_95, 9);
							unk_0x0EE72DB1CD8A3B86(&(vLocal_96[iVar0 /*3*/].f_1), 6);
						}
					}
					if (Local_95.f_20 != 3)
					{
						if (unk_0xC80D31E4B587871C(vLocal_96[iVar0 /*3*/].f_1, 5))
						{
							Local_95.f_20 = 3;
							unk_0x0EE72DB1CD8A3B86(&(vLocal_96[iVar0 /*3*/].f_1), 5);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_31()//Position - 0x1B23
{
	vector3 vVar0;
	var uVar1;
	
	if ((Local_95.f_21 <= 2 || Local_95.f_20 == 2) || Local_95.f_20 == 3)
	{
		vVar0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		if ((!unk_0xA29A7A704ADF07B3(vVar0, &uVar1) || func_33()) || func_32())
		{
			Local_95.f_1 = 4;
		}
	}
}

int func_32()//Position - 0x1B80
{
	if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2631,833f, 4526,624f, -10f, -380,1435f, 3906,702f, 78,484f, 1200f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 1731,902f, -123,8468f, 137,2596f, 2079,203f, 798,3421f, 249,3267f, 600f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 252,5025f, 855,094f, 148,1213f, -393,3539f, 695,785f, 272,1867f, 500f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_33()//Position - 0x1C28
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), func_34(iVar0), 50f, 50f, 50f, 0, 1, 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_34(int iParam0)//Position - 0x1C6B
{
	switch (iParam0)
	{
		case 0:
			return 709,8127f, 6699,78f, 0f;
		
		case 1:
			return 1551,805f, 6686,052f, 0f;
		
		case 2:
			return 3260,507f, 5309,454f, 0f;
		
		case 3:
			return 3788,334f, 3812,693f, 0f;
		
		case 4:
			return 2945,665f, 1773,192f, 0f;
		
		case 5:
			return 2866,816f, -658,5848f, 0f;
		
		case 6:
			return 2342,881f, -2167,953f, 0f;
		
		case 7:
			return 1215,167f, -2728,054f, 0f;
		
		case 8:
			return 1305,229f, -3364,572f, 0f;
		
		case 9:
			return 293,8953f, -3361,616f, 0f;
		
		case 10:
			return -484,948f, -2940,643f, 0f;
		
		case 11:
			return -1387,61f, -1704,374f, 0f;
		
		case 12:
			return -1566,04f, -1312,232f, 0f;
		
		case 13:
			return -1920,23f, -849,6466f, 0f;
		
		case 14:
			return -2876,76f, -74,3269f, 0f;
		
		case 15:
			return -3133,45f, 604,7179f, 0f;
		
		case 16:
			return -3286,57f, 1285,372f, 0f;
		
		case 17:
			return -3205,53f, 3285,199f, 0f;
		
		case 18:
			return -2520,42f, 4240,671f, 0f;
		
		case 19:
			return -909,632f, 5830,909f, 0f;
		
		case 20:
			return -325,109f, 6584,622f, 0f;
		
		default:
	}
	return -673,5316f, 6175,048f, 0f;
}

int func_35()//Position - 0x1E29
{
	if (unk_0xF51EA69EE19061E6(1, 1, 0, 0))
	{
		if (func_59(joaat("dinghy2")) && func_59(joaat("s_m_y_blackops_01")))
		{
			if (func_38() && func_36())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_36()//Position - 0x1E6B
{
	if ((!unk_0x93C304998B457C45(Local_95.f_3) && func_59(joaat("s_m_y_blackops_01"))) && unk_0x93C304998B457C45(Local_95.f_2))
	{
		if (func_67(Local_95.f_2))
		{
			if (func_37(&(Local_95.f_3), Local_95.f_2, 22, joaat("s_m_y_blackops_01"), -1, 1, 1, 1))
			{
				unk_0x03924C68EFCBC511(unk_0x47BA76CE3C825A08(Local_95.f_3), 0, 0, 1, 0);
				unk_0x03924C68EFCBC511(unk_0x47BA76CE3C825A08(Local_95.f_3), 2, 1, 0, 0);
				unk_0x03924C68EFCBC511(unk_0x47BA76CE3C825A08(Local_95.f_3), 3, 0, 1, 0);
				unk_0x03924C68EFCBC511(unk_0x47BA76CE3C825A08(Local_95.f_3), 4, 0, 2, 0);
				unk_0x03924C68EFCBC511(unk_0x47BA76CE3C825A08(Local_95.f_3), 8, 1, 0, 0);
				unk_0x03924C68EFCBC511(unk_0x47BA76CE3C825A08(Local_95.f_3), 9, 0, 0, 0);
				if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] != 0)
				{
					unk_0xCE93FCB8A8D8DF0B(unk_0x47BA76CE3C825A08(Local_95.f_3), Global_1574758);
				}
				else
				{
					unk_0xCE93FCB8A8D8DF0B(unk_0x47BA76CE3C825A08(Local_95.f_3), Global_1574441[2 /*94*/][2 /*31*/][2 /*10*/][2 /*3*/][0]);
				}
				unk_0xE9B3D12A64CC7C1A(unk_0x47BA76CE3C825A08(Local_95.f_3), 1);
				unk_0x771A86309E0CA47B(unk_0x47BA76CE3C825A08(Local_95.f_3), 1);
				unk_0xE01CE1EBCD7EE551(unk_0x47BA76CE3C825A08(Local_95.f_3), system::round((200f * Global_262145.f_153)), 0);
				unk_0xC854D7A2E956B946(unk_0x47BA76CE3C825A08(Local_95.f_3), 0);
				unk_0xAE01EF4BC84AFE7C(unk_0x47BA76CE3C825A08(Local_95.f_3), 255, true);
			}
		}
	}
	if (!unk_0x93C304998B457C45(Local_95.f_3))
	{
		return 0;
	}
	unk_0x14776E43F90DD454(joaat("s_m_y_blackops_01"));
	return 1;
}

int func_37(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x1FCF
{
	if (!unk_0x7A419CA188B4A665(1))
	{
		return 0;
	}
	if (!unk_0x93C304998B457C45(uParam1))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(unk_0xF32FBF2453AC1753(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xABF6E3937F555048(unk_0x00D1A9572426E8DD(unk_0xF32FBF2453AC1753(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x93C304998B457C45(*uParam0))
	{
		unk_0xFBA991D3A851E195(unk_0x47BA76CE3C825A08(*uParam0), iParam7);
		if (unk_0x0D4BF24EE51A419A(unk_0x47BA76CE3C825A08(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9CE66BFF230839CE(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_38()//Position - 0x2057
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	
	if (!unk_0x93C304998B457C45(Local_95.f_2))
	{
		if (func_59(joaat("dinghy2")))
		{
			if (!unk_0xC80D31E4B587871C(iLocal_97, 10))
			{
				func_56(&vLocal_793, &fLocal_794);
				if (unk_0xA275371ED0902FCB(vLocal_793 + Vector(2f, 0f, 0f), vLocal_793 - Vector(10f, 0f, 0f), &vLocal_793))
				{
					if (func_40(vLocal_793, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
					{
						vVar2 = { vLocal_793 + Vector(12f, 0f, 0f) };
						iLocal_791 = unk_0x17A93AB091FDD6BE(vVar2, 10f, 10f, 25f, 0f, 0f, -1f, 2, 1, 0, 4);
						if (iLocal_791 == 0)
						{
							return 0;
						}
						else
						{
							unk_0x872F1C1F8587CCC7(&iLocal_97, 10);
						}
					}
				}
			}
			else if (unk_0x16ACABF450EB00B4(iLocal_791, &iLocal_792, &uVar0, &uVar0, &uVar1) == 2)
			{
				iLocal_791 = 0;
				if (iLocal_792 == 0)
				{
					if (func_39(&(Local_95.f_2), joaat("dinghy2"), vLocal_793, fLocal_794, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						unk_0xF91E58AE0DFA3063(unk_0xF32FBF2453AC1753(Local_95.f_2), 1);
						unk_0xA15269351F50F113(unk_0xF32FBF2453AC1753(Local_95.f_2), 1, 1, 0);
						unk_0xFB2E9855F95E3BD3(unk_0xF32FBF2453AC1753(Local_95.f_2), 12f);
						unk_0xC7ED915AB706A5D8(unk_0xF32FBF2453AC1753(Local_95.f_2), 1);
						unk_0xFBA991D3A851E195(unk_0xF32FBF2453AC1753(Local_95.f_2), 0);
					}
				}
				else
				{
					iLocal_792 = 0;
					unk_0x0EE72DB1CD8A3B86(&iLocal_97, 10);
				}
			}
			else if (unk_0x16ACABF450EB00B4(iLocal_791, &iLocal_792, &uVar0, &uVar0, &uVar1) == 0)
			{
				iLocal_791 = 0;
				unk_0x0EE72DB1CD8A3B86(&iLocal_97, 10);
			}
		}
	}
	if (!unk_0x93C304998B457C45(Local_95.f_2))
	{
		return 0;
	}
	unk_0x14776E43F90DD454(joaat("dinghy2"));
	return 1;
}

int func_39(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x21EC
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x3B0047CED068C463(iParam1))
	{
		return 0;
	}
	if (!unk_0x49DB840E3FC89FEE(1))
	{
		return 0;
	}
	fVar0 = 1,5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x9B8406983378711E(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0xEA60F3B426BB095B(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0x6ADD12BF4D6D2587(iVar1))
	{
		*uParam0 = unk_0x278BFDB9CDC5B182(iVar1);
		Global_2512808.f_5827 = iVar1;
		if (unk_0x93C304998B457C45(*uParam0))
		{
			if (bParam13)
			{
				unk_0xB2CBFA871D3387B6(iVar1, 1);
			}
			unk_0xFBA991D3A851E195(iVar1, iParam8);
			if (unk_0x0D4BF24EE51A419A(iVar1))
			{
				if (bParam6)
				{
					unk_0x9CE66BFF230839CE(*uParam0, 1);
				}
				else
				{
					unk_0x9CE66BFF230839CE(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0xB8D999BCBD1CD195(*uParam0, unk_0x9EB17624F44A8DA4(), 1);
				}
			}
			unk_0xD2557AC67FBCFB9D(iVar1, bParam7);
			unk_0xB2B20F580CFB38F4(iVar1, 1);
			if (bParam10)
			{
				unk_0x27344352C09F0519(iVar1);
				unk_0x30C37143C720F2AA(iVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

int func_40(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x22E6
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
		if (func_49(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_41(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405047.f_2++;
	return 1;
}

int func_41(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x23F7
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_3(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (!unk_0x3E9CABD07B829173())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xBE3C4023003180FC(func_45(unk_0x9EB17624F44A8DA4()), vParam0, 1) <= (fVar2 + fParam1))
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
		if (func_3(iVar1, 1, 1))
		{
			if (!func_43(iVar1, 0) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x9EB17624F44A8DA4()))
				{
					if ((func_42(iVar1) || !bParam8) && !Global_2422736[iVar1 /*420*/].f_274)
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
								if (unk_0xBE3C4023003180FC(func_45(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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
							if (unk_0xBE3C4023003180FC(func_45(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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

int func_42(int iParam0)//Position - 0x25AF
{
	if (unk_0xCF308053A6212001(unk_0x25D049AAC4603E65(iParam0)) || Global_2422736[iParam0 /*420*/].f_260)
	{
		return 1;
	}
	return 0;
}

bool func_43(int iParam0, int iParam1)//Position - 0x25DB
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_44(-1, 0) == 8;
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

int func_44(int iParam0, bool bParam1)//Position - 0x2626
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_16();
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

Vector3 func_45(int iParam0)//Position - 0x2667
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_48() && Global_1595693[iVar0 /*680*/].f_673) && !func_47(Global_1595693[iVar0 /*680*/].f_674))
	{
		return Global_1595693[iVar0 /*680*/].f_674;
	}
	return func_46(iParam0);
}

Vector3 func_46(int iParam0)//Position - 0x26BA
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

int func_47(vector3 vParam0)//Position - 0x26CD
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_48()//Position - 0x26F7
{
	return Global_2447174.f_16;
}

int func_49(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x2705
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x9EB17624F44A8DA4() != iVar1) || iParam6 == 0)
		{
			if (func_3(iVar1, bParam2, bParam3))
			{
				if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
				{
					if (!bParam5 || (!unk_0x3AB6A1A9084FB0A4(unk_0x25D049AAC4603E65(iVar1)) && func_42(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) != unk_0x917EE18109C5ACEA(iVar1))) || unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
						{
							if (((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && uParam7) && bParam4) && func_50(iVar1))
							{
							}
							else if (unk_0x6ADD12BF4D6D2587(unk_0x25D049AAC4603E65(iVar1)))
							{
								if (unk_0xBE3C4023003180FC(func_46(iVar1), vParam0, 1) < fParam1)
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

int func_50(int iParam0)//Position - 0x2801
{
	if (func_55(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	Global_2492157 = { func_54(iParam0) };
	if (unk_0xFFE9B6D8F03AC353(&Global_2492157))
	{
		return 1;
	}
	if (func_51(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1)//Position - 0x2848
{
	int iVar0;
	
	iVar0 = func_53(iParam0);
	if (!iVar0 == func_52())
	{
		if (iVar0 == func_53(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_52()//Position - 0x2873
{
	return -1;
}

int func_53(int iParam0)//Position - 0x287C
{
	if (iParam0 != func_52())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_52();
}

struct<13> func_54(int iParam0)//Position - 0x289F
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

int func_55(int iParam0, int iParam1)//Position - 0x28B6
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		Global_2492157 = { func_54(iParam0) };
		Global_2492170 = { func_54(iParam1) };
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

void func_56(var uParam0, var uParam1)//Position - 0x2923
{
	*uParam0 = { func_57(Local_95.f_10, (100f / 2f), 100f, 10f) };
	*uParam1 = unk_0xA67DD8488EBA5F6D((Local_95.f_10 - *uParam0), (Local_95.f_10.f_1 - uParam0->f_1));
}

Vector3 func_57(vector3 vParam0, float fParam1, float fParam2, float fParam3)//Position - 0x2964
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0x5B811202FCBE9E9D(-1f, 1f), unk_0x5B811202FCBE9E9D(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	vVar0 = { func_58(vVar0, unk_0x5B811202FCBE9E9D(fParam1, fParam2)) };
	vVar0.z = unk_0x5B811202FCBE9E9D(-fVar1, fVar1);
	return vParam0 + vVar0;
}

Vector3 func_58(vector3 vParam0, float fParam1)//Position - 0x29AD
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = system::vmag(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_59(int iParam0)//Position - 0x29E4
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x6FF834D85E2DD4C6(iParam0);
	return unk_0x9A0B2ED5055D3F0B(iParam0);
}

Vector3 func_60(int iParam0)//Position - 0x2A02
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 0f;
	fVar4 = 10000f;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				fVar3 = unk_0xBE3C4023003180FC(Local_95.f_10, func_34(iVar0), 1);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_34(iVar1) };
			Local_95.f_6 = func_61(iVar1);
			Local_95.f_6 = func_61(iVar1);
			Local_95.f_13 = { Local_95.f_10, 8000f, 0f };
			return vVar2;
			break;
		
		case 1:
			iVar0 = 5;
			while (iVar0 <= 9)
			{
				fVar3 = unk_0xBE3C4023003180FC(Local_95.f_10, func_34(iVar0), 1);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_34(iVar1) };
			Local_95.f_6 = func_61(iVar1);
			Local_95.f_6 = func_61(iVar1);
			Local_95.f_13 = { 5000f, Local_95.f_10.f_1, 0f };
			return vVar2;
			break;
		
		case 2:
			iVar0 = 10;
			while (iVar0 <= 14)
			{
				fVar3 = unk_0xBE3C4023003180FC(Local_95.f_10, func_34(iVar0), 1);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_34(iVar1) };
			Local_95.f_6 = func_61(iVar1);
			Local_95.f_6 = func_61(iVar1);
			Local_95.f_13 = { Local_95.f_10, -5000f, 0f };
			return vVar2;
			break;
		
		case 3:
			iVar0 = 15;
			while (iVar0 <= 20)
			{
				fVar3 = unk_0xBE3C4023003180FC(Local_95.f_10, func_34(iVar0), 1);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_34(iVar1) };
			Local_95.f_6 = func_61(iVar1);
			Local_95.f_6 = func_61(iVar1);
			Local_95.f_13 = { -5000f, Local_95.f_10.f_1, 0f };
			return vVar2;
			break;
	}
	return -1392,428f, -1661,61f, 0f;
}

float func_61(int iParam0)//Position - 0x2BFB
{
	switch (iParam0)
	{
		case 0:
			return 156,0512f;
		
		case 1:
			return 186,4808f;
		
		case 2:
			return 65,4787f;
		
		case 3:
			return 56,421f;
		
		case 4:
			return 76,4749f;
		
		case 5:
			return 79,1503f;
		
		case 6:
			return 24,8224f;
		
		case 7:
			return 27,7851f;
		
		case 8:
			return 32,1401f;
		
		case 9:
			return 329,6803f;
		
		case 10:
			return 328,7837f;
		
		case 11:
			return 283,9666f;
		
		case 12:
			return 295,5786f;
		
		case 13:
			return 314,4354f;
		
		case 14:
			return 0,4088f;
		
		case 15:
			return 287,0804f;
		
		case 16:
			return 249,5385f;
		
		case 17:
			return 270,7522f;
		
		case 18:
			return 260,8947f;
		
		case 19:
			return 248,4225f;
		
		case 20:
			return 233,6563f;
		
		default:
	}
	return 228,6098f;
}

int func_62()//Position - 0x2D35
{
	vector3 vVar0;
	
	vVar0 = { func_46(unk_0x9EB17624F44A8DA4()) };
	if (vVar0.y >= 0f && vVar0.x >= 0f)
	{
		return 0;
	}
	else if (vVar0.y < 0f && vVar0.x >= 0f)
	{
		return 1;
	}
	else if (vVar0.y < 0f && vVar0.x < 0f)
	{
		return 2;
	}
	else if (vVar0.y >= 0f && vVar0.x < 0f)
	{
		return 3;
	}
	return -1;
}

int func_63(var uParam0, int iParam1, bool bParam2)//Position - 0x2DAB
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_64(uParam0, bParam2, 0);
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

void func_64(var uParam0, bool bParam1, bool bParam2)//Position - 0x2E09
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

int func_65(var uParam0)//Position - 0x2E4E
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

void func_66(var uParam0)//Position - 0x2E77
{
	if (!uParam0->f_1)
	{
		if (unk_0x8E1421E2A2A2FBD4())
		{
			func_64(uParam0, 0, 0);
		}
	}
}

int func_67(var uParam0)//Position - 0x2E96
{
	if (unk_0x93C304998B457C45(uParam0))
	{
		return !func_68(unk_0xF32FBF2453AC1753(uParam0));
	}
	return 0;
}

int func_68(int iParam0)//Position - 0x2EB6
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_69()//Position - 0x2EEF
{
	if (func_3(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		if (Local_95.f_21 == 5)
		{
			vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 5;
		}
		switch (vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/].f_2)
		{
			case 0:
				func_92();
				if (Local_95.f_21 > 0)
				{
					vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 1;
				}
				break;
			
			case 1:
				if (func_67(Local_95.f_2))
				{
					func_122();
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_95.f_2), 0))
					{
						func_91();
						vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 3;
						unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
						unk_0x0EE72DB1CD8A3B86(&(vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/].f_1), 0);
					}
				}
				break;
			
			case 2:
				if (func_67(Local_95.f_2))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_95.f_2), 0))
					{
						vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 3;
						unk_0x0EE72DB1CD8A3B86(&(vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/].f_1), 5);
						unk_0x872F1C1F8587CCC7(&(vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/].f_1), 6);
						if (Local_95.f_21 >= 4)
						{
							vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 4;
						}
					}
					else
					{
						vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 1;
					}
				}
				break;
			
			case 3:
				if (func_67(Local_95.f_2))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_95.f_2), 0))
					{
						if (Local_95.f_21 >= 4)
						{
							vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 4;
						}
						func_90();
					}
					else
					{
						vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 1;
					}
				}
				break;
			
			case 4:
				if (func_67(Local_95.f_2))
				{
					if (!unk_0xC80D31E4B587871C(iLocal_97, 3))
					{
						if (unk_0x90D5DFB054818BA7(unk_0xF32FBF2453AC1753(Local_95.f_2)) < 3f)
						{
							unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 0);
							unk_0x872F1C1F8587CCC7(&iLocal_97, 3);
						}
					}
					if ((!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_95.f_2), 0) && !unk_0x0082ECE2DB69C8CA(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_95.f_2))) && func_28(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_95.f_2), 1) >= 10f)
					{
						vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 5;
					}
				}
				break;
			
			case 5:
				func_137();
				break;
		}
		func_70();
	}
}

void func_70()//Position - 0x30FB
{
	int iVar0;
	struct<9> Var1;
	
	if (unk_0x34D11AB5BA7922C2(uLocal_103))
	{
		if (func_85(1, 1))
		{
			if (((vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 == 1 || vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 == 2) || vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 == 3) || vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 == 4)
			{
				iVar0 = 1;
				Var1 = { func_84() };
				func_82(&uLocal_104);
				if (vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 == 1)
				{
					if (func_67(Local_95.f_2))
					{
						if ((unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_95.f_2), 10f, 10f, 3f, 0, 1, 0) && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && !func_81(unk_0xF32FBF2453AC1753(Local_95.f_2), 0))
						{
							func_80(unk_0xC9C4B2A22DE54C69(2, 23, true), "BTX_ENTER", &uLocal_104, 0);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
				if (iVar0 == 1)
				{
					func_90();
					func_79(1);
					func_71(&uLocal_103, &Var1, &uLocal_104, func_78(&uLocal_104));
				}
			}
		}
	}
	else
	{
		uLocal_103 = unk_0xD704C81492296A37("instructional_buttons");
	}
}

void func_71(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x320D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || unk_0x8CFF76532FEF34D4(2))
	{
		*uParam2 = 0;
		if (unk_0x34D11AB5BA7922C2(*uParam0))
		{
			if (unk_0xB9D80B12FE4456A5())
			{
				unk_0x008F3E3CC076EA0E(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1869584A8A72FEDD(false);
				unk_0x271AA5469AF471B3();
			}
			unk_0x008F3E3CC076EA0E(*uParam0, "CLEAR_ALL");
			unk_0x271AA5469AF471B3();
		}
		func_77(uParam2);
	}
	if (Global_1315692 < 2)
	{
		func_76(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0x34D11AB5BA7922C2(*uParam0))
		{
			*uParam0 = unk_0xD704C81492296A37("instructional_buttons");
		}
		if (unk_0x34D11AB5BA7922C2(*uParam0))
		{
			unk_0x050CFBB64D7E937F(*uParam0, "CLEAR_ALL");
			if (unk_0xB9D80B12FE4456A5())
			{
				unk_0x008F3E3CC076EA0E(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1869584A8A72FEDD(true);
				unk_0x271AA5469AF471B3();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_680)
			{
				if (unk_0xC80D31E4B587871C(uParam2->f_676, iVar0))
				{
					unk_0x008F3E3CC076EA0E(*uParam0, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(iVar0);
					if (!unk_0xC80D31E4B587871C(uParam2->f_677, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar2 = uParam2->f_1[iVar0 /*56*/].f_54;
						iVar3 = uParam2->f_1[iVar0 /*56*/].f_55;
						func_75(unk_0xC9C4B2A22DE54C69(iVar1, iVar2, true));
						if (iVar3 < 358)
						{
							func_75(unk_0xC9C4B2A22DE54C69(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar5 = uParam2->f_1[iVar0 /*56*/].f_54;
						func_75(unk_0x715308393E136EA8(iVar4, iVar5, true));
					}
					if (unk_0xC80D31E4B587871C(uParam2->f_674, iVar0))
					{
						unk_0x7E099EB35339C80D(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0xFD1DB5DD208735A3(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0x6223D539BCD39E76(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0x9748595E4799A2CF();
					}
					else if (unk_0xC80D31E4B587871C(uParam2->f_675, iVar0))
					{
						unk_0x7E099EB35339C80D(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0x854FACC4E5F40C82(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0x9748595E4799A2CF();
					}
					else
					{
						func_74(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0xB9D80B12FE4456A5())
					{
						if (unk_0xC80D31E4B587871C(uParam2->f_678, iVar0))
						{
							unk_0x1869584A8A72FEDD(true);
							unk_0xD07D5CD276368D36(uParam2->f_1[iVar0 /*56*/].f_54);
						}
						else
						{
							unk_0x1869584A8A72FEDD(false);
							unk_0xD07D5CD276368D36(358);
						}
					}
					unk_0x271AA5469AF471B3();
				}
				else
				{
					unk_0x008F3E3CC076EA0E(*uParam0, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(iVar0);
					func_75(&(uParam2->f_1[iVar0 /*56*/]));
					if (!unk_0xAB019B170BF1309C(&(uParam2->f_1[iVar0 /*56*/].f_16)))
					{
						func_75(&(uParam2->f_1[iVar0 /*56*/].f_16));
					}
					if (unk_0xC80D31E4B587871C(uParam2->f_674, iVar0))
					{
						unk_0x7E099EB35339C80D(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0xFD1DB5DD208735A3(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0x6223D539BCD39E76(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0x9748595E4799A2CF();
					}
					else if (unk_0xC80D31E4B587871C(uParam2->f_675, iVar0))
					{
						unk_0x7E099EB35339C80D(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0x854FACC4E5F40C82(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0x9748595E4799A2CF();
					}
					else
					{
						func_74(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0xB9D80B12FE4456A5())
					{
						unk_0x1869584A8A72FEDD(false);
						unk_0xD07D5CD276368D36(358);
					}
					unk_0x271AA5469AF471B3();
				}
				iVar0++;
			}
			unk_0x008F3E3CC076EA0E(*uParam0, "SET_MAX_WIDTH");
			unk_0x9499D7329FB840A2(uParam2->f_686);
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xD07D5CD276368D36(0);
			unk_0x271AA5469AF471B3();
			*uParam2 = 1;
		}
	}
	uParam2->f_682 = 0,05f;
	uParam2->f_683 = 0,045f;
	uParam2->f_684 = 0f;
	uParam2->f_685 = 0f;
	if (*uParam2 == 1)
	{
		func_73(*uParam0, uParam1);
	}
	func_72();
}

void func_72()//Position - 0x358B
{
	unk_0x553231E7FC3C570D(7);
	unk_0x553231E7FC3C570D(6);
	unk_0x553231E7FC3C570D(8);
	unk_0x553231E7FC3C570D(9);
}

void func_73(var uParam0, var uParam1)//Position - 0x35A9
{
	unk_0x28E092B1E386EB67(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_74(char* sParam0)//Position - 0x35C8
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_75(char* sParam0)//Position - 0x35DA
{
	unk_0x8686005F83E832AE(sParam0);
}

void func_76(int iParam0)//Position - 0x35E8
{
	Global_1315692 = iParam0;
}

void func_77(var uParam0)//Position - 0x35F6
{
	uParam0->f_679 = 0;
}

int func_78(var uParam0)//Position - 0x3604
{
	return uParam0->f_679;
}

void func_79(int iParam0)//Position - 0x3611
{
	Global_1359035.f_1079 = iParam0;
}

void func_80(char* sParam0, char* sParam1, var uParam2, char* sParam3)//Position - 0x3622
{
	int iVar0;
	
	if (uParam2->f_680 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_680;
	StringCopy(&(uParam2->f_1[iVar0 /*56*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*56*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*56*/].f_32), sParam1, 16);
	uParam2->f_680++;
}

int func_81(int iParam0, bool bParam1)//Position - 0x3672
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		iVar1 = unk_0x95EC8AE7E4F33F6E(iParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (unk_0x8EE3A848975DDF21(iParam0, (iVar0 - 1), 0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				iVar2 = unk_0x317536BCEA8FA6B0(iParam0, (iVar0 - 1), 0);
				if (unk_0x3AB6A1A9084FB0A4(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_82(var uParam0)//Position - 0x36D8
{
	func_83(uParam0);
	uParam0->f_679 = 1;
}

void func_83(var uParam0)//Position - 0x36EC
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*56*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*56*/].f_36 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_37), "", 64);
		uParam0->f_1[iVar0 /*56*/].f_53 = 2;
		uParam0->f_1[iVar0 /*56*/].f_54 = 358;
		uParam0->f_1[iVar0 /*56*/].f_55 = 358;
		iVar0++;
	}
	uParam0->f_674 = 0;
	uParam0->f_675 = 0;
	uParam0->f_676 = 0;
	uParam0->f_678 = 0;
	uParam0->f_677 = 0;
	uParam0->f_679 = 0;
	uParam0->f_680 = 0;
	uParam0->f_682 = 0f;
	uParam0->f_683 = 0f;
	uParam0->f_684 = 0f;
	uParam0->f_685 = 0f;
	uParam0->f_686 = 1f;
}

struct<9> func_84()//Position - 0x37BC
{
	struct<9> Var0;
	
	Var0 = 0,5f;
	Var0.f_1 = 0,5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

int func_85(int iParam0, int iParam1)//Position - 0x3800
{
	if (unk_0x0F30C1F1717A6437())
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (func_89())
		{
			return 0;
		}
	}
	if (func_26())
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_88(0))
		{
			return 0;
		}
	}
	if (func_87(8, -1))
	{
		return 0;
	}
	if (unk_0x04D7390E1D7464B7())
	{
		return 0;
	}
	if (func_86())
	{
		return 0;
	}
	if (Global_53084)
	{
		return 0;
	}
	if (Global_68215)
	{
		return 0;
	}
	if (unk_0x08D525BE62A22AE0())
	{
		return 0;
	}
	if (Global_1312782)
	{
		return 0;
	}
	if (Global_1574129)
	{
		return 0;
	}
	return 1;
}

bool func_86()//Position - 0x389C
{
	return Global_1312854;
}

bool func_87(int iParam0, int iParam1)//Position - 0x38A8
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

int func_88(int iParam0)//Position - 0x38E3
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

bool func_89()//Position - 0x393D
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

void func_90()//Position - 0x3952
{
	Global_2522773.f_258 = 1;
}

void func_91()//Position - 0x3962
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_99))
	{
		unk_0xE30CF11C0EE14316(&iLocal_99);
	}
}

void func_92()//Position - 0x3979
{
	int iVar0;
	
	if (!unk_0xF491DD47B88AA84E())
	{
		iVar0 = func_23(1187, -1, 0);
		if (!unk_0xC80D31E4B587871C(iVar0, 15))
		{
			func_94("BTX_HELP1", -1);
			unk_0x872F1C1F8587CCC7(&iVar0, 15);
			func_93(1187, iVar0, -1, 1, 0);
		}
	}
}

void func_93(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x39BD
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_24(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

void func_94(char* sParam0, int iParam1)//Position - 0x39ED
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

void func_95()//Position - 0x3A04
{
	if (!func_4(Local_95.f_3) && func_67(Local_95.f_2))
	{
		if (unk_0xE53FD7AF7F25C0A8(Local_95.f_3) || (!unk_0x0070DE1A1E73C71C(Local_95.f_3) && unk_0x8E1421E2A2A2FBD4()))
		{
			func_120();
			func_99();
			if (func_98(Local_95.f_3))
			{
				unk_0x2217C45231E6A537(unk_0x47BA76CE3C825A08(Local_95.f_3), 323, 1);
			}
			switch (Local_95.f_20)
			{
				case 0:
					break;
				
				case 2:
					if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_95.f_3), -1273030092) != 1 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_95.f_3), -1273030092) != 0)
					{
						unk_0x6774692C99598E5A(unk_0x47BA76CE3C825A08(Local_95.f_3), unk_0xF32FBF2453AC1753(Local_95.f_2), 0, unk_0xFC1458A37D98B502(), 0f, 0f, 0f, 4, 12f, 786469, 10f, 1071);
					}
					break;
				
				case 4:
					func_97(unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(Local_95.f_2), 0), Local_95.f_7);
					unk_0x590D9654A4367AA1(fLocal_966, fLocal_968, fLocal_967, fLocal_969);
					if (unk_0x9C0571C926F68BED(fLocal_966, fLocal_968, fLocal_967, fLocal_969))
					{
						if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_95.f_3), 242628503) != 1 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_95.f_3), 242628503) != 0)
						{
							unk_0xAB30B1CF01A198C1(unk_0x47BA76CE3C825A08(Local_95.f_3), uLocal_102);
						}
					}
					break;
				
				case 5:
					if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_95.f_3), -1273030092) != 1 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_95.f_3), -1273030092) != 0)
					{
						unk_0x2931C350CED41AD3(unk_0x47BA76CE3C825A08(Local_95.f_3), unk_0xF32FBF2453AC1753(Local_95.f_2), unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(Local_95.f_2), 1), 5, 5f, 1076625579, 2f, 1f, 1);
					}
					break;
				
				case 3:
					if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_95.f_3), -1273030092) != 1 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_95.f_3), -1273030092) != 0)
					{
						unk_0x2931C350CED41AD3(unk_0x47BA76CE3C825A08(Local_95.f_3), unk_0xF32FBF2453AC1753(Local_95.f_2), unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(Local_95.f_2), 1), 5, 5f, 1076625579, 2f, 1f, 1);
					}
					break;
				
				case 1:
					if (!unk_0xC80D31E4B587871C(vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/].f_1, 7))
					{
						if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_95.f_2), 0) || unk_0x0082ECE2DB69C8CA(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_95.f_2)))
						{
							unk_0xFF96DC2FA12B7785(unk_0x47BA76CE3C825A08(Local_95.f_3), 0);
							unk_0xEB2091818EC5C55E(unk_0x47BA76CE3C825A08(Local_95.f_3), 0);
							unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_95.f_3), 2, false);
							unk_0xAB30B1CF01A198C1(unk_0x47BA76CE3C825A08(Local_95.f_3), uLocal_100);
						}
						else
						{
							unk_0xFF96DC2FA12B7785(unk_0x47BA76CE3C825A08(Local_95.f_3), 0);
							unk_0xEB2091818EC5C55E(unk_0x47BA76CE3C825A08(Local_95.f_3), 0);
							unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_95.f_3), 2, true);
							unk_0xAB30B1CF01A198C1(unk_0x47BA76CE3C825A08(Local_95.f_3), uLocal_101);
						}
						unk_0x872F1C1F8587CCC7(&(vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/].f_1), 7);
					}
					break;
				
				case 6:
					if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_95.f_3), 242628503) != 1 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_95.f_3), 242628503) != 0)
					{
						unk_0xAB30B1CF01A198C1(unk_0x47BA76CE3C825A08(Local_95.f_3), uLocal_101);
					}
					break;
				
				case 7:
					if (unk_0x93C304998B457C45(Local_95.f_2))
					{
						func_96(&(Local_95.f_2));
					}
					if (unk_0x93C304998B457C45(Local_95.f_3))
					{
						unk_0xE9B3D12A64CC7C1A(unk_0x47BA76CE3C825A08(Local_95.f_3), 1);
						func_96(&(Local_95.f_3));
					}
					break;
				}
			}
	}
}

void func_96(var uParam0)//Position - 0x3D6B
{
	var uVar0;
	
	if (unk_0x918CA1BFFAA03556(*uParam0))
	{
		uVar0 = unk_0x29AB7D6D0DE18055(*uParam0);
		unk_0x83E70C4C5D45C754(&uVar0);
	}
}

void func_97(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)//Position - 0x3D8F
{
	if (Param0 < Param2)
	{
		fLocal_966 = (Param0 - 25f);
		fLocal_967 = (Param2 + 25f);
	}
	else if (Param0 > Param2)
	{
		fLocal_966 = (Param2 - 25f);
		fLocal_967 = (Param0 + 25f);
	}
	if (Param0.f_1 < Param2.f_1)
	{
		fLocal_968 = (Param0.f_1 - 25f);
		fLocal_969 = (Param2.f_1 + 25f);
	}
	else if (Param0.f_1 > Param2.f_1)
	{
		fLocal_968 = (Param2.f_1 - 25f);
		fLocal_969 = (Param0.f_1 + 25f);
	}
}

int func_98(var uParam0)//Position - 0x3E25
{
	if (unk_0x93C304998B457C45(uParam0))
	{
		unk_0x04092215B40E1262(uParam0);
		return unk_0xE53FD7AF7F25C0A8(uParam0);
	}
	return 0;
}

void func_99()//Position - 0x3E47
{
	int iVar0;
	struct<2> Var1;
	
	if (!unk_0xC80D31E4B587871C(iLocal_97, 4))
	{
		if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), unk_0x47BA76CE3C825A08(Local_95.f_3), 15f, 15f, 15f, 0, 1, 0))
		{
			func_119(&uLocal_795, 8, unk_0x47BA76CE3C825A08(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_103(&uLocal_795, "FMAMBAU", "FMA_BPDA", 12, 0, 0, 1))
			{
				unk_0x60C06BFD037BB7CF(unk_0x47BA76CE3C825A08(Local_95.f_3), unk_0xFC1458A37D98B502(), 5000, 0, 2);
				unk_0x872F1C1F8587CCC7(&iLocal_97, 4);
			}
		}
	}
	if (!unk_0xC80D31E4B587871C(iLocal_97, 6))
	{
		if (Local_95.f_20 == 4)
		{
			func_119(&uLocal_795, 8, unk_0x47BA76CE3C825A08(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_103(&uLocal_795, "FMAMBAU", "FMA_BPDA3", 12, 0, 0, 1))
			{
				unk_0x60C06BFD037BB7CF(unk_0x47BA76CE3C825A08(Local_95.f_3), unk_0xFC1458A37D98B502(), 5000, 0, 2);
				unk_0x872F1C1F8587CCC7(&iLocal_97, 6);
			}
		}
	}
	if (!unk_0xC80D31E4B587871C(iLocal_97, 5))
	{
		if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), Local_95.f_7, (10f * 2f), (10f * 2f), (10f * 2f), 0, 1, 0))
		{
			func_119(&uLocal_795, 8, unk_0x47BA76CE3C825A08(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_103(&uLocal_795, "FMAMBAU", "FMA_BPDA6", 12, 0, 0, 1))
			{
				unk_0x60C06BFD037BB7CF(unk_0x47BA76CE3C825A08(Local_95.f_3), unk_0xFC1458A37D98B502(), 5000, 0, 2);
				unk_0x872F1C1F8587CCC7(&iLocal_97, 5);
			}
		}
	}
	if (!unk_0xC80D31E4B587871C(iLocal_97, 7))
	{
		if (Local_95.f_20 == 5)
		{
			func_119(&uLocal_795, 8, unk_0x47BA76CE3C825A08(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_103(&uLocal_795, "FMAMBAU", "FMA_BPDA7", 12, 0, 0, 1))
			{
				unk_0x60C06BFD037BB7CF(unk_0x47BA76CE3C825A08(Local_95.f_3), unk_0xFC1458A37D98B502(), 5000, 0, 2);
				unk_0x872F1C1F8587CCC7(&iLocal_97, 7);
			}
		}
	}
	if (!unk_0xC80D31E4B587871C(iLocal_97, 8))
	{
		func_119(&uLocal_795, 8, unk_0x47BA76CE3C825A08(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
		if (func_103(&uLocal_795, "FMAMBAU", "FMA_BPDA4", 12, 0, 0, 1))
		{
			unk_0x60C06BFD037BB7CF(unk_0x47BA76CE3C825A08(Local_95.f_3), unk_0xFC1458A37D98B502(), 5000, 0, 2);
			unk_0x872F1C1F8587CCC7(&iLocal_97, 8);
		}
	}
	if (Local_95.f_20 == 3)
	{
		if (func_63(&uLocal_961, 30000, 0))
		{
			func_119(&uLocal_795, 8, unk_0x47BA76CE3C825A08(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_103(&uLocal_795, "FMAMBAU", "FMA_BPDA2", 12, 0, 0, 1))
			{
				unk_0x60C06BFD037BB7CF(unk_0x47BA76CE3C825A08(Local_95.f_3), unk_0xFC1458A37D98B502(), 5000, 0, 2);
				func_102(&uLocal_961, 0, 0);
			}
		}
	}
	if (Local_95.f_20 == 4)
	{
		if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) <= 0)
		{
			if (func_63(&uLocal_964, iLocal_963, 0))
			{
				iVar0 = unk_0x63A6486593EC7EC3(0, 17);
				StringCopy(&Var1, "", 16);
				if (!unk_0xC80D31E4B587871C(iLocal_98, iVar0))
				{
					switch (iVar0)
					{
						case 0:
							StringCopy(&Var1, "FMA_BPDA5", 16);
							break;
						
						case 1:
							StringCopy(&Var1, "FMA_BPDA5b", 16);
							break;
						
						case 2:
							StringCopy(&Var1, "FMA_BPDA5c", 16);
							break;
						
						case 3:
							StringCopy(&Var1, "FMA_BPDA5d", 16);
							break;
						
						case 4:
							StringCopy(&Var1, "FMA_BPDA5e", 16);
							break;
						
						case 5:
							StringCopy(&Var1, "FMA_BPDA5f", 16);
							break;
						
						case 6:
							StringCopy(&Var1, "FMA_BPDA5g", 16);
							break;
						
						case 7:
							StringCopy(&Var1, "FMA_BPDA5h", 16);
							break;
						
						case 8:
							StringCopy(&Var1, "FMA_BPDA5i", 16);
							break;
						
						case 9:
							StringCopy(&Var1, "FMA_BPDA5j", 16);
							break;
						
						case 10:
							StringCopy(&Var1, "FMA_BPDA5k", 16);
							break;
						
						case 11:
							StringCopy(&Var1, "FMA_BPDA5l", 16);
							break;
						
						case 12:
							StringCopy(&Var1, "FMA_BPDA5m", 16);
							break;
						
						case 13:
							StringCopy(&Var1, "FMA_BPDA5n", 16);
							break;
						
						case 14:
							StringCopy(&Var1, "FMA_BPDA5o", 16);
							break;
						
						case 15:
							StringCopy(&Var1, "FMA_BPDA5p", 16);
							break;
						
						case 16:
							StringCopy(&Var1, "FMA_BPDA5q", 16);
							break;
					}
					if (!unk_0xAB019B170BF1309C(&Var1))
					{
						func_119(&uLocal_795, 8, unk_0x47BA76CE3C825A08(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
						if (func_103(&uLocal_795, "FMAMBAU", &Var1, 12, 0, 0, 1))
						{
							func_102(&uLocal_964, 0, 0);
							unk_0x872F1C1F8587CCC7(&iLocal_98, iVar0);
							unk_0x60C06BFD037BB7CF(unk_0x47BA76CE3C825A08(Local_95.f_3), unk_0xFC1458A37D98B502(), 5000, 0, 2);
							iLocal_963 = (unk_0x63A6486593EC7EC3(20000, 30001) + iVar0 * 500);
						}
					}
				}
			}
		}
	}
	if (!func_4(Local_95.f_3))
	{
		if (func_67(Local_95.f_2))
		{
			if (!unk_0x33B1D0D0C92D4F18(unk_0x47BA76CE3C825A08(Local_95.f_3)) && !unk_0xEBF3D5FBF3251E81(unk_0x47BA76CE3C825A08(Local_95.f_3)))
			{
				if (unk_0xEBE499597C718EB8(unk_0xF32FBF2453AC1753(Local_95.f_2), unk_0xFC1458A37D98B502(), 1) || unk_0xEBE499597C718EB8(unk_0x47BA76CE3C825A08(Local_95.f_3), unk_0xFC1458A37D98B502(), 1))
				{
					switch (unk_0x63A6486593EC7EC3(0, 6))
					{
						case 0:
							func_100(unk_0x47BA76CE3C825A08(Local_95.f_3), "GENERIC_SHOCKED_MED", 3);
							break;
						
						case 1:
							func_100(unk_0x47BA76CE3C825A08(Local_95.f_3), "GENERIC_SHOCKED_HIGH", 3);
							break;
						
						case 2:
							func_100(unk_0x47BA76CE3C825A08(Local_95.f_3), "GENERIC_FRIGHTENED_MED", 3);
							break;
						
						case 3:
							func_100(unk_0x47BA76CE3C825A08(Local_95.f_3), "GENERIC_FRIGHTENED_HIGH", 3);
							break;
						
						case 4:
							func_100(unk_0x47BA76CE3C825A08(Local_95.f_3), "GENERIC_CURSE_MED", 3);
							break;
						
						case 5:
							func_100(unk_0x47BA76CE3C825A08(Local_95.f_3), "GENERIC_CURSE_HIGH", 3);
							break;
					}
					unk_0x2B0DDE3D071497AD(unk_0xF32FBF2453AC1753(Local_95.f_2));
					unk_0x2B0DDE3D071497AD(unk_0x47BA76CE3C825A08(Local_95.f_3));
				}
			}
			else
			{
				unk_0x2B0DDE3D071497AD(unk_0xF32FBF2453AC1753(Local_95.f_2));
				unk_0x2B0DDE3D071497AD(unk_0x47BA76CE3C825A08(Local_95.f_3));
			}
		}
	}
}

void func_100(int iParam0, char* sParam1, int iParam2)//Position - 0x43CE
{
	unk_0x74D45BB07BD51F8B(iParam0, sParam1, func_101(iParam2), 1);
}

int func_101(int iParam0)//Position - 0x43E5
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

void func_102(var uParam0, bool bParam1, bool bParam2)//Position - 0x45DA
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

bool func_103(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4617
{
	func_118(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 1;
	return func_104(sParam2, iParam3, 0);
}

int func_104(char* sParam0, int iParam1, bool bParam2)//Position - 0x4665
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
					func_117();
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
		if (func_87(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_116();
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
				func_109();
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
				if (func_108())
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
			if (func_107())
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
			func_106();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_105();
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
		func_117();
	}
	return 0;
}

void func_105()//Position - 0x4931
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

void func_106()//Position - 0x4961
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

int func_107()//Position - 0x49F6
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_108()//Position - 0x4A1D
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

void func_109()//Position - 0x4AB6
{
	if (func_115(14))
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
		Global_14453 = func_110();
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

var func_110()//Position - 0x4B58
{
	func_111();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_111()//Position - 0x4B71
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_114(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_113(unk_0xFC1458A37D98B502());
			if (func_112(iVar0) && (!func_115(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_112(Global_104555.f_2353.f_539.f_4301))
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

bool func_112(int iParam0)//Position - 0x4C6E
{
	return iParam0 < 3;
}

int func_113(int iParam0)//Position - 0x4C7A
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_114(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_114(int iParam0)//Position - 0x4CB7
{
	if (func_112(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_115(int iParam0)//Position - 0x4CE1
{
	return Global_35861 == iParam0;
}

void func_116()//Position - 0x4CEF
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

void func_117()//Position - 0x4D45
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

void func_118(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x4D9C
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

void func_119(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x4DF2
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

void func_120()//Position - 0x4E8D
{
	unk_0x1B5A255BF0D63005("MobileRadioInGame", 0);
	if (func_3(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_95.f_2)) && !func_121(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_95.f_2), -1))
		{
			unk_0x1B5A255BF0D63005("MobileRadioInGame", 1);
		}
	}
}

int func_121(int iParam0, int iParam1, int iParam2)//Position - 0x4EDE
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

void func_122()//Position - 0x4F1C
{
	if (!unk_0xA6DECE14FC9A8C51(iLocal_99))
	{
		if (func_67(Local_95.f_2))
		{
			iLocal_99 = unk_0xCA43F0FC44D9B846(unk_0xF32FBF2453AC1753(Local_95.f_2));
			unk_0x4B4040A0EC7DBA81(iLocal_99, 356);
			unk_0x62BD54E491535B76(iLocal_99, "BTX_BLIP");
			unk_0x0A8FD2D5529E1737(iLocal_99, 1);
			unk_0x1B43A8C070CAD58C(iLocal_99, 6);
		}
	}
}

void func_123()//Position - 0x4F68
{
	if (func_67(Local_95.f_2))
	{
		unk_0x6931076730A4AC5D(&uLocal_102);
		unk_0x6774692C99598E5A(0, unk_0xF32FBF2453AC1753(Local_95.f_2), 0, 0, Local_95.f_7, 4, 12f, 786469, 10f, 1071);
		unk_0x1B16DD5C115FE009(uLocal_102);
		unk_0x6931076730A4AC5D(&uLocal_101);
		unk_0x2931C350CED41AD3(0, unk_0xF32FBF2453AC1753(Local_95.f_2), Local_95.f_13, 4, 12f, 786469, 0f, 0f, 1);
		unk_0x96247F0EC873C446(0, unk_0xF32FBF2453AC1753(Local_95.f_2), 12f, 786469);
		unk_0x1B16DD5C115FE009(uLocal_101);
		unk_0x6931076730A4AC5D(&uLocal_100);
		unk_0x16416C5B54FDBCBB(0, 0, 64);
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
		}
		else
		{
			unk_0x93F12E7D8D931858(0, 1193033728, 0);
		}
		unk_0x1B16DD5C115FE009(uLocal_100);
	}
}

int func_124()//Position - 0x502F
{
	return Local_95.f_1;
}

int func_125(int iParam0)//Position - 0x503B
{
	return vLocal_96[iParam0 /*3*/];
}

int func_126()//Position - 0x5049
{
	var uVar0;
	
	func_133(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_132())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_131())
	{
		return 1;
	}
	if (func_130(157))
	{
		if (!func_129())
		{
			return 1;
		}
	}
	if (func_130(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_127() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_127()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_127()//Position - 0x50D3
{
	switch (func_128())
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

int func_128()//Position - 0x5107
{
	return Global_25233;
}

bool func_129()//Position - 0x5112
{
	return Global_2447174.f_586;
}

int func_130(int iParam0)//Position - 0x5121
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_131()//Position - 0x5138
{
	return Global_2456830;
}

bool func_132()//Position - 0x5144
{
	return Global_2447174.f_581;
}

void func_133(var uParam0)//Position - 0x5153
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
					func_134(iVar0);
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

void func_134(int iParam0)//Position - 0x51C6
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_3(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_135(iVar2, &bVar3))
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

int func_135(int iParam0, var uParam1)//Position - 0x5247
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x9761C10D57B68069(iParam0))
		{
			if (unk_0x828686E167EA3FD3(iParam0))
			{
				if (!unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(iParam0)))
				{
					unk_0xDD29FF4BAB8AFF9C(iParam0, 0, 1);
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

void func_136()//Position - 0x52A6
{
	system::wait(0);
}

void func_137()//Position - 0x52B3
{
	func_91();
	if (unk_0x3A711520F83BAE98())
	{
		if (Local_95.f_20 == 7)
		{
			if (func_67(Local_95.f_2) && !func_4(Local_95.f_3))
			{
				unk_0xAB30B1CF01A198C1(unk_0x47BA76CE3C825A08(Local_95.f_3), uLocal_101);
			}
			if (unk_0x93C304998B457C45(Local_95.f_2))
			{
				if (unk_0xE53FD7AF7F25C0A8(Local_95.f_2))
				{
					func_96(&(Local_95.f_2));
				}
			}
			if (unk_0x93C304998B457C45(Local_95.f_3))
			{
				if (unk_0xE53FD7AF7F25C0A8(Local_95.f_3))
				{
					func_96(&(Local_95.f_3));
				}
			}
		}
	}
	func_140(func_141(1, 1), 9, func_52());
	func_139();
	unk_0xA68F7B004463AB6F(&uLocal_103);
	func_138();
}

void func_138()//Position - 0x534F
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_139()//Position - 0x535B
{
	unk_0xFAA3EF7FF92E1F9E(&uLocal_100);
	unk_0xFAA3EF7FF92E1F9E(&uLocal_101);
	unk_0xFAA3EF7FF92E1F9E(&uLocal_102);
}

void func_140(int iParam0, int iParam1, var uParam2)//Position - 0x5375
{
	struct<4> Var0;
	
	Var0 = -332158592;
	Var0.f_1 = unk_0x9EB17624F44A8DA4();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Var0, 6, iParam0);
	}
}

int func_141(int iParam0, bool bParam1)//Position - 0x53AD
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar1);
		if (func_3(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x9EB17624F44A8DA4() || iParam0)
			{
				if (bParam1)
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
				else if (!func_43(iVar2, 0))
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_142(struct<21> Param0)//Position - 0x5412
{
	func_146(32, Param0);
	unk_0xBC60D873F181A18E(1);
	unk_0x7BC094E5B24A760D(1);
	func_144(0, -1, 0);
	unk_0x6E3ED3AE1C20445F(&Local_95, 22);
	unk_0xE7BC983D1386C9EE(&vLocal_96, 97);
	if (!func_143())
	{
		return 0;
	}
	unk_0x941BE77305BB5695(0);
	if (unk_0x8E1421E2A2A2FBD4())
	{
		Local_95.f_4 = unk_0x9EB17624F44A8DA4();
		Local_95.f_5 = func_62();
		Local_95.f_10 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) + Vector(0f, 5f, 0f) };
		Local_95.f_7 = { func_60(Local_95.f_5) };
	}
	unk_0x872F1C1F8587CCC7(&iLocal_97, 8);
	bLocal_960 = unk_0xB01117EF93F91860();
	vLocal_96[unk_0x622FF3AE4B1D07C3() /*3*/] = 0;
	return 1;
}

int func_143()//Position - 0x54A8
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
		if (func_132())
		{
			return 0;
		}
		if (func_130(155))
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

int func_144(int iParam0, int iParam1, bool bParam2)//Position - 0x5501
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_138();
			}
			else
			{
				return 0;
			}
		}
		if (!func_145())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_138();
					}
					else
					{
						return 0;
					}
				}
				if (func_132())
				{
					if (!bParam2)
					{
						func_138();
					}
					else
					{
						return 0;
					}
				}
				if (func_130(155))
				{
					if (!bParam2)
					{
						func_138();
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
					func_138();
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
				func_138();
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
			func_138();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_145()//Position - 0x5616
{
	return Global_1312831;
}

void func_146(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x5622
{
	if (!unk_0x3A711520F83BAE98())
	{
		func_138();
	}
	unk_0xAEA89A7E72415961(iParam0, 0, Param1.f_16);
}

